/*
** Automatically generated from `fact_table.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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


/* :- module ll_backend.fact_table. */
/* :- implementation. */

/*
INIT mercury__ll_backend__fact_table__init
ENDINIT
*/

#include "ll_backend.fact_table.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.export.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
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
#include "float.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_report_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____error_report_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_reports_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____error_reports_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_type_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_type_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3);

static void MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__3063__1_2_p_0(
  MR_Word ll_backend__fact_table__LambdaHeadVar__1_27,
  MR_Word * ll_backend__fact_table__LambdaHeadVar__2_28);

static void MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1624__1_2_p_0(
  MR_Word ll_backend__fact_table__LambdaHeadVar__1_80,
  MR_Word * ll_backend__fact_table__LambdaHeadVar__2_81);

static MR_bool MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__488__1_2_p_0(
  MR_Word ll_backend__fact_table__LambdaHeadVar__1_55,
  MR_Word * ll_backend__fact_table__LambdaHeadVar__2_56);

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_type_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_type_0_0(
  MR_Word ll_backend__fact_table__HeadVar__2_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0(
  MR_Word ll_backend__fact_table__HeadVar__2_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____error_reports_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_reports_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____error_report_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_report_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0(
  MR_Word ll_backend__fact_table__HeadVar__2_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__generate_secondary_nondet_code_8_p_0(
  MR_String ll_backend__fact_table__PredName_9,
  MR_Word ll_backend__fact_table__PragmaVars_10,
  MR_Integer ll_backend__fact_table__ProcID_11,
  MR_Word ll_backend__fact_table__ArgTypes_12,
  MR_Word ll_backend__fact_table__ModuleInfo_13,
  MR_Integer ll_backend__fact_table__FactTableSize_14,
  MR_String * ll_backend__fact_table__ProcCode_15,
  MR_String * ll_backend__fact_table__ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table__generate_primary_nondet_code_8_p_0(
  MR_String ll_backend__fact_table__PredName_9,
  MR_Word ll_backend__fact_table__PragmaVars_10,
  MR_Integer ll_backend__fact_table__ProcID_11,
  MR_Word ll_backend__fact_table__ArgTypes_12,
  MR_Word ll_backend__fact_table__ModuleInfo_13,
  MR_Integer ll_backend__fact_table__FactTableSize_14,
  MR_String * ll_backend__fact_table__ProcCode_15,
  MR_String * ll_backend__fact_table__ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table__generate_fact_test_code_6_p_0(
  MR_String ll_backend__fact_table__PredName_7,
  MR_Word ll_backend__fact_table__PragmaVars_8,
  MR_Word ll_backend__fact_table__ArgTypes_9,
  MR_Word ll_backend__fact_table__ModuleInfo_10,
  MR_Integer ll_backend__fact_table__FactTableSize_11,
  MR_String * ll_backend__fact_table__FactTestCode_12);

static void MR_CALL 
ll_backend__fact_table__generate_decl_code_3_p_0(
  MR_String ll_backend__fact_table__Name_4,
  MR_Integer ll_backend__fact_table__ProcID_5,
  MR_String * ll_backend__fact_table__DeclCode_6);

static void MR_CALL 
ll_backend__fact_table__generate_semidet_in_out_code_7_p_0(
  MR_String ll_backend__fact_table__PredName_8,
  MR_Word ll_backend__fact_table__PragmaVars_9,
  MR_Integer ll_backend__fact_table__ProcID_10,
  MR_Word ll_backend__fact_table__ArgTypes_11,
  MR_Word ll_backend__fact_table__ModuleInfo_12,
  MR_Integer ll_backend__fact_table__FactTableSize_13,
  MR_String * ll_backend__fact_table__ProcCode_14);

static void MR_CALL 
ll_backend__fact_table__generate_all_in_code_7_p_0(
  MR_String ll_backend__fact_table__PredName_8,
  MR_Word ll_backend__fact_table__PragmaVars_9,
  MR_Integer ll_backend__fact_table__ProcID_10,
  MR_Word ll_backend__fact_table__ArgTypes_11,
  MR_Word ll_backend__fact_table__ModuleInfo_12,
  MR_Integer ll_backend__fact_table__FactTableSize_13,
  MR_String * ll_backend__fact_table__ProcCode_14);

static void MR_CALL 
ll_backend__fact_table__generate_hash_code_9_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__ModuleInfo_3,
  MR_String ll_backend__fact_table__LabelName_4,
  MR_Integer ll_backend__fact_table__LabelNum_5,
  MR_String ll_backend__fact_table__PredName_6,
  MR_Integer ll_backend__fact_table__ArgNum_7,
  MR_Integer ll_backend__fact_table__FactTableSize_8,
  MR_String * ll_backend__fact_table__HeadVar__9_9);

static void MR_CALL 
ll_backend__fact_table__generate_hash_string_code_10_p_0(
  MR_String ll_backend__fact_table__Name_11,
  MR_String ll_backend__fact_table__LabelName_12,
  MR_Integer ll_backend__fact_table__LabelNum_13,
  MR_String ll_backend__fact_table__PredName_14,
  MR_Word ll_backend__fact_table__PragmaVars_15,
  MR_Word ll_backend__fact_table__Types_16,
  MR_Word ll_backend__fact_table__ModuleInfo_17,
  MR_Integer ll_backend__fact_table__ArgNum_18,
  MR_Integer ll_backend__fact_table__FactTableSize_19,
  MR_String * ll_backend__fact_table__C_Code_20);

static void MR_CALL 
ll_backend__fact_table__generate_hash_float_code_10_p_0(
  MR_String ll_backend__fact_table__Name_11,
  MR_String ll_backend__fact_table__LabelName_12,
  MR_Integer ll_backend__fact_table__LabelNum_13,
  MR_String ll_backend__fact_table__PredName_14,
  MR_Word ll_backend__fact_table__PragmaVars_15,
  MR_Word ll_backend__fact_table__Types_16,
  MR_Word ll_backend__fact_table__ModuleInfo_17,
  MR_Integer ll_backend__fact_table__ArgNum_18,
  MR_Integer ll_backend__fact_table__FactTableSize_19,
  MR_String * ll_backend__fact_table__C_Code_20);

static void MR_CALL 
ll_backend__fact_table__generate_hash_int_code_10_p_0(
  MR_String ll_backend__fact_table__Name_11,
  MR_String ll_backend__fact_table__LabelName_12,
  MR_Integer ll_backend__fact_table__LabelNum_13,
  MR_String ll_backend__fact_table__PredName_14,
  MR_Word ll_backend__fact_table__PragmaVars_15,
  MR_Word ll_backend__fact_table__Types_16,
  MR_Word ll_backend__fact_table__ModuleInfo_17,
  MR_Integer ll_backend__fact_table__ArgNum_18,
  MR_Integer ll_backend__fact_table__FactTableSize_19,
  MR_String * ll_backend__fact_table__C_Code_20);

static void MR_CALL 
ll_backend__fact_table__generate_hash_lookup_code_13_p_0(
  MR_String ll_backend__fact_table__VarName_14,
  MR_String ll_backend__fact_table__LabelName_15,
  MR_Integer ll_backend__fact_table__LabelNum_16,
  MR_Word ll_backend__fact_table__ComparisonKind_17,
  MR_Char ll_backend__fact_table__KeyType_18,
  MR_Word ll_backend__fact_table__CheckKeys_19,
  MR_String ll_backend__fact_table__PredName_20,
  MR_Word ll_backend__fact_table__PragmaVars_21,
  MR_Word ll_backend__fact_table__Types_22,
  MR_Word ll_backend__fact_table__ModuleInfo_23,
  MR_Integer ll_backend__fact_table__ArgNum_24,
  MR_Integer ll_backend__fact_table__FactTableSize_25,
  MR_String * ll_backend__fact_table__HashLookupCode_26);

static void MR_CALL 
ll_backend__fact_table__generate_test_condition_code_8_p_0(
  MR_String ll_backend__fact_table__FactTableName_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_Integer ll_backend__fact_table__ArgNum_5,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_IsFirstInputArg_0_6,
  MR_Integer ll_backend__fact_table__FactTableSize_7,
  MR_String * ll_backend__fact_table__HeadVar__8_8);

static void MR_CALL 
ll_backend__fact_table__generate_cc_multi_code_2_5_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_String ll_backend__fact_table__StructName_2,
  MR_Integer ll_backend__fact_table__ArgNum_3,
  MR_String ll_backend__fact_table__STATE_VARIABLE_ProcCode_0_4,
  MR_String * ll_backend__fact_table__STATE_VARIABLE_ProcCode_5);

static void MR_CALL 
ll_backend__fact_table__generate_multidet_code_8_p_0(
  MR_String ll_backend__fact_table__PredName_9,
  MR_Word ll_backend__fact_table__PragmaVars_10,
  MR_Integer ll_backend__fact_table__ProcID_11,
  MR_Word ll_backend__fact_table__ArgTypes_12,
  MR_Word ll_backend__fact_table__ModuleInfo_13,
  MR_Integer ll_backend__fact_table__FactTableSize_14,
  MR_String * ll_backend__fact_table__ProcCode_15,
  MR_String * ll_backend__fact_table__ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box * ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0(
  MR_Word ll_backend__fact_table__PragmaVars_10,
  MR_Word ll_backend__fact_table__Types_11,
  MR_Word ll_backend__fact_table__ModuleInfo_12,
  MR_String * ll_backend__fact_table__DeclCode_13,
  MR_String * ll_backend__fact_table__InputCode_14,
  MR_String * ll_backend__fact_table__OutputCode_15,
  MR_String * ll_backend__fact_table__SaveRegsCode_16,
  MR_String * ll_backend__fact_table__GetRegsCode_17,
  MR_Integer * ll_backend__fact_table__NumInputArgs_18);

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_2_11_p_0(
  MR_Word ll_backend__fact_table__PragmaVars0_12,
  MR_Word ll_backend__fact_table__ArgInfos0_13,
  MR_Word ll_backend__fact_table__Types0_14,
  MR_Word ll_backend__fact_table__Module_15,
  MR_String * ll_backend__fact_table__DeclCode_16,
  MR_String * ll_backend__fact_table__InputCode_17,
  MR_String * ll_backend__fact_table__OutputCode_18,
  MR_String * ll_backend__fact_table__SaveRegsCode_19,
  MR_String * ll_backend__fact_table__GetRegsCode_20,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_0_42,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_43);

static void MR_CALL 
ll_backend__fact_table__generate_arg_input_code_7_p_0(
  MR_String ll_backend__fact_table__Name_8,
  MR_Word ll_backend__fact_table__Type_9,
  MR_Word ll_backend__fact_table__ArgLoc_10,
  MR_Integer ll_backend__fact_table__FrameVarNum_11,
  MR_String * ll_backend__fact_table__InputCode_12,
  MR_String * ll_backend__fact_table__SaveRegCode_13,
  MR_String * ll_backend__fact_table__GetRegCode_14);

static void MR_CALL 
ll_backend__fact_table__generate_fact_lookup_code_7_p_0(
  MR_String ll_backend__fact_table__PredName_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_Integer ll_backend__fact_table__ArgNum_5,
  MR_Integer ll_backend__fact_table__FactTableSize_6,
  MR_String * ll_backend__fact_table__HeadVar__7_7);

static void MR_CALL 
ll_backend__fact_table__generate_nondet_proc_code_5_p_0(
  MR_Word ll_backend__fact_table__PragmaVars_6,
  MR_String ll_backend__fact_table__PredName_7,
  MR_Integer ll_backend__fact_table__ProcID_8,
  MR_String * ll_backend__fact_table__ExtraCodeLabel_9,
  MR_String * ll_backend__fact_table__ProcCode_10);

static void MR_CALL 
ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_String * ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__fact_table_compile_facts_2_13_p_0(
  MR_Word ll_backend__fact_table__PredName_14,
  MR_Integer ll_backend__fact_table__Arity_15,
  MR_String ll_backend__fact_table__FileName_16,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_62,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_PredInfo_63,
  MR_Word ll_backend__fact_table__Context_18,
  MR_Word ll_backend__fact_table__ModuleInfo_19,
  MR_String * ll_backend__fact_table__C_HeaderCode_20,
  MR_Integer * ll_backend__fact_table__PrimaryProcID_21,
  MR_String ll_backend__fact_table__OutputFileName_22,
  MR_Word ll_backend__fact_table__OutputStream_23);

static void MR_CALL 
ll_backend__fact_table__print_error_reports_4_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box * ll_backend__fact_table__wrapper_arg_3);

static void MR_CALL 
ll_backend__fact_table__print_error_reports_4_p_0(
  MR_Word ll_backend__fact_table__Globals_5,
  MR_Word ll_backend__fact_table__RevErrors_6);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_numfacts_6_p_0(
  MR_Word ll_backend__fact_table__OutputStream_7,
  MR_Word ll_backend__fact_table__PredName_8,
  MR_Integer ll_backend__fact_table__NumFacts_9,
  MR_String * ll_backend__fact_table__C_HeaderCode_10);

static void MR_CALL 
ll_backend__fact_table__maybe_append_data_table_6_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_String ll_backend__fact_table__OutputFileName_3,
  MR_String ll_backend__fact_table__DataFileName_4);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_arrays_14_p_0(
  MR_Word ll_backend__fact_table__ProcFiles0_15,
  MR_String ll_backend__fact_table__DataFileName_16,
  MR_String ll_backend__fact_table__StructName_17,
  MR_Word ll_backend__fact_table__ProcTable_18,
  MR_Word ll_backend__fact_table__ModuleInfo_19,
  MR_Integer ll_backend__fact_table__NumFacts_20,
  MR_Word ll_backend__fact_table__FactArgInfos_21,
  MR_Word ll_backend__fact_table__WriteHashTables_22,
  MR_Word ll_backend__fact_table__WriteDataTable_23,
  MR_Word ll_backend__fact_table__OutputStream_24,
  MR_String * ll_backend__fact_table__C_HeaderCode_25,
  MR_Integer * ll_backend__fact_table__PrimaryProcID_26);

static void MR_CALL 
ll_backend__fact_table__write_secondary_hash_tables_11_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_String ll_backend__fact_table__StructName_2,
  MR_Word ll_backend__fact_table__ProcTable_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_Word ll_backend__fact_table__OutputStream_5,
  MR_Word ll_backend__fact_table__FactMap_6,
  MR_Word ll_backend__fact_table__FactArgInfos_7,
  MR_String ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_0_8,
  MR_String * ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_9);

static void MR_CALL 
ll_backend__fact_table__write_primary_hash_table_16_p_0(
  MR_Integer ll_backend__fact_table__ProcID_17,
  MR_String ll_backend__fact_table__FileName_18,
  MR_String ll_backend__fact_table__DataFileName_19,
  MR_String ll_backend__fact_table__StructName_20,
  MR_Word ll_backend__fact_table__ProcTable_21,
  MR_Word ll_backend__fact_table__ModuleInfo_22,
  MR_Word ll_backend__fact_table__OutputStream_23,
  MR_Word ll_backend__fact_table__FactArgInfos_24,
  MR_Word ll_backend__fact_table__WriteDataTable_25,
  MR_Integer ll_backend__fact_table__NumFacts_26,
  MR_Word ll_backend__fact_table__CreateFactMap_27,
  MR_Word * ll_backend__fact_table__Result_28,
  MR_Word * ll_backend__fact_table__FactMap_29,
  MR_String * ll_backend__fact_table__C_HeaderCode_30);

static void MR_CALL 
ll_backend__fact_table__print_file_open_error_7_p_0(
  MR_Word ll_backend__fact_table__Globals_8,
  MR_Word ll_backend__fact_table__MaybeContext_9,
  MR_String ll_backend__fact_table__FileName_10,
  MR_String ll_backend__fact_table__InOrOut_11,
  MR_Word ll_backend__fact_table__Error_12);

static void MR_CALL 
ll_backend__fact_table__print_error_report_4_p_0(
  MR_Word ll_backend__fact_table__Globals_5,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__delete_temporary_file_4_p_0(
  MR_Word ll_backend__fact_table__Globals_5,
  MR_String ll_backend__fact_table__FileName_6);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(
  MR_Integer ll_backend__fact_table__NumFacts_8,
  MR_Integer ll_backend__fact_table__FactTableSize_9,
  MR_String ll_backend__fact_table__StructName_10,
  MR_Word ll_backend__fact_table__OutputStream_11,
  MR_String * ll_backend__fact_table__C_HeaderCode_12);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_2_7_p_0(
  MR_Integer ll_backend__fact_table__CurrFact_8,
  MR_Integer ll_backend__fact_table__NumFacts_9,
  MR_Integer ll_backend__fact_table__FactTableSize_10,
  MR_String ll_backend__fact_table__StructName_11,
  MR_Word ll_backend__fact_table__OutputStream_12);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_17_p_0(
  MR_Integer ll_backend__fact_table__FactNum_18,
  MR_Integer ll_backend__fact_table__InputArgNum_19,
  MR_String ll_backend__fact_table__HashTableName_20,
  MR_String ll_backend__fact_table__StructName_21,
  MR_Integer ll_backend__fact_table__TableNum_22,
  MR_Word ll_backend__fact_table__ArgModes_23,
  MR_Word ll_backend__fact_table__ModuleInfo_24,
  MR_Word ll_backend__fact_table__Infos_25,
  MR_Word ll_backend__fact_table__IsPrimaryTable_26,
  MR_Word ll_backend__fact_table__OutputStream_27,
  MR_Word ll_backend__fact_table__FirstFact_28,
  MR_Word ll_backend__fact_table__MaybeDataStream_29,
  MR_Word ll_backend__fact_table__CreateFactMap_30,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactMap_0_39,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactMap_40);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_2_19_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box * ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_2_19_p_0(
  MR_Integer ll_backend__fact_table__FactNum_1,
  MR_Integer ll_backend__fact_table__InputArgNum_2,
  MR_String ll_backend__fact_table__HashTableName_3,
  MR_String ll_backend__fact_table__StructName_4,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_TableNum_0_5,
  MR_Word ll_backend__fact_table__ArgModes_6,
  MR_Word ll_backend__fact_table__ModuleInfo_7,
  MR_Word ll_backend__fact_table__Infos_8,
  MR_Word ll_backend__fact_table__IsPrimaryTable_9,
  MR_Word ll_backend__fact_table__OutputStream_10,
  MR_Word ll_backend__fact_table__HeadVar__11_11,
  MR_Word ll_backend__fact_table__MaybeDataStream_12,
  MR_Word ll_backend__fact_table__CreateFactMap_13,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactMap_0_14,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactMap_15,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_0_16,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashList_17);

static void MR_CALL 
ll_backend__fact_table__update_fact_map_4_p_0(
  MR_Integer ll_backend__fact_table__FactNum_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactMap_0_3,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactMap_4);

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_8_p_0(
  MR_Word ll_backend__fact_table__Fact_9,
  MR_Word * ll_backend__fact_table__MatchingFacts_10,
  MR_Word * ll_backend__fact_table__MaybeNextFact_11,
  MR_Word ll_backend__fact_table__Infos_12,
  MR_Word ll_backend__fact_table__ArgModes_13,
  MR_Word ll_backend__fact_table__ModuleInfo_14);

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_2_9_p_0(
  MR_Word ll_backend__fact_table__Fact_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_0_27,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_28,
  MR_Word * ll_backend__fact_table__MaybeNextFact_12,
  MR_Word ll_backend__fact_table__Infos_13,
  MR_Word ll_backend__fact_table__ArgModes_14,
  MR_Word ll_backend__fact_table__ModuleInfo_15);

static void MR_CALL 
ll_backend__fact_table__do_build_hash_table_14_p_0(
  MR_Word ll_backend__fact_table__Globals_15,
  MR_Integer ll_backend__fact_table__FactNum_16,
  MR_Integer ll_backend__fact_table__InputArgNum_17,
  MR_String ll_backend__fact_table__HashTableName_18,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_TableNum_0_38,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_TableNum_39,
  MR_Word ll_backend__fact_table__IsPrimaryTable_20,
  MR_Word ll_backend__fact_table__OutputStream_21,
  MR_Word ll_backend__fact_table__Facts_22,
  MR_Word ll_backend__fact_table__FactMap_23,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_0_40,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashList_41);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_2_14_p_0(
  MR_Word ll_backend__fact_table__Globals_1,
  MR_Integer ll_backend__fact_table__FactNum_2,
  MR_Integer ll_backend__fact_table__InputArgNum_3,
  MR_String ll_backend__fact_table__HashTableName_4,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_TableNum_0_5,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_TableNum_6,
  MR_Word ll_backend__fact_table__IsPrimaryTable_7,
  MR_Word ll_backend__fact_table__OutputStream_8,
  MR_Word ll_backend__fact_table__HeadVar__9_9,
  MR_Word ll_backend__fact_table__FactMap_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_0_11,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashList_12);

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_12_p_0(
  MR_Word ll_backend__fact_table__Globals_13,
  MR_Integer ll_backend__fact_table__FactNum_14,
  MR_Integer ll_backend__fact_table__InputArgNum_15,
  MR_String ll_backend__fact_table__HashTableName_16,
  MR_Integer ll_backend__fact_table__TableNum0_17,
  MR_Integer * ll_backend__fact_table__TableNum_18,
  MR_Word ll_backend__fact_table__IsPrimaryTable_19,
  MR_Word ll_backend__fact_table__OutputStream_20,
  MR_Word ll_backend__fact_table__Facts_21,
  MR_Word ll_backend__fact_table__FactMap_22);

static void MR_CALL 
ll_backend__fact_table__hash_list_insert_many_7_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__IsPrimaryTable_2,
  MR_Word ll_backend__fact_table__FactMap_3,
  MR_Integer ll_backend__fact_table__FactNum_4,
  MR_Integer ll_backend__fact_table__InputArgNum_5,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_0_6,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashList_7);

static void MR_CALL 
ll_backend__fact_table__write_hash_table_6_p_0(
  MR_Word ll_backend__fact_table__OutputStream_7,
  MR_String ll_backend__fact_table__BaseName_8,
  MR_Integer ll_backend__fact_table__TableNum_9,
  MR_Word ll_backend__fact_table__HashTable_10);

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_p_0(
  MR_Word ll_backend__fact_table__HashTable_3,
  MR_Char * ll_backend__fact_table__TableType_4);

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_3_p_0(
  MR_Word ll_backend__fact_table__Map_4,
  MR_Integer ll_backend__fact_table__Index_5,
  MR_Char * ll_backend__fact_table__TableType_6);

static void MR_CALL 
ll_backend__fact_table__write_hash_table_loop_6_p_0(
  MR_Word ll_backend__fact_table__Stream_7,
  MR_Word ll_backend__fact_table__HashTable_8,
  MR_Integer ll_backend__fact_table__CurrIndex_9,
  MR_Integer ll_backend__fact_table__MaxIndex_10);

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box * ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Integer ll_backend__fact_table__HashSize_2,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashTable_0_3,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashTable_4);

static void MR_CALL 
ll_backend__fact_table__fact_table_hash_2_4_p_0(
  MR_Integer ll_backend__fact_table__HashSize_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_HashVal_0_3,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_HashVal_4);

static void MR_CALL 
ll_backend__fact_table__hash_table_insert_2_6_p_0(
  MR_Integer ll_backend__fact_table__HashVal_7,
  MR_Integer * ll_backend__fact_table__FreeVal_8,
  MR_Word ll_backend__fact_table__Index0_9,
  MR_Word ll_backend__fact_table__Key0_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashTable_0_15,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashTable_16);

static void MR_CALL 
ll_backend__fact_table__get_free_hash_slot_2_4_p_0(
  MR_Word ll_backend__fact_table__HashTable_5,
  MR_Integer ll_backend__fact_table__Start_6,
  MR_Integer ll_backend__fact_table__Max_7,
  MR_Integer * ll_backend__fact_table__Free_8);

static void MR_CALL 
ll_backend__fact_table__calculate_hash_table_size_3_p_0(
  MR_Word ll_backend__fact_table__Globals_4,
  MR_Integer ll_backend__fact_table__NumEntries_5,
  MR_Integer * ll_backend__fact_table__HashTableSize_6);

static void MR_CALL 
ll_backend__fact_table__calculate_hash_table_size_2_3_p_0(
  MR_Integer ll_backend__fact_table__N_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Integer * ll_backend__fact_table__H_3);

static void MR_CALL 
ll_backend__fact_table__lower_level_collect_matching_facts_2_6_p_0(
  MR_Word ll_backend__fact_table__Fact_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3,
  MR_Word * ll_backend__fact_table__Matching_4,
  MR_Word * ll_backend__fact_table__HeadVar__5_5,
  MR_Integer ll_backend__fact_table__InputArgNum_6);

static void MR_CALL 
ll_backend__fact_table__write_fact_table_data_8_p_0(
  MR_Word ll_backend__fact_table__VeryVerbose_1,
  MR_Integer ll_backend__fact_table__FactNum_2,
  MR_Integer ll_backend__fact_table__FactTableSize_3,
  MR_Word ll_backend__fact_table__HeadVar__4_4,
  MR_String ll_backend__fact_table__StructName_5,
  MR_Word ll_backend__fact_table__OutputStream_6);

static void MR_CALL 
ll_backend__fact_table__read_sort_file_line_6_p_0(
  MR_Word ll_backend__fact_table__FactArgInfos_7,
  MR_Word ll_backend__fact_table__ArgModes_8,
  MR_Word ll_backend__fact_table__ModuleInfo_9,
  MR_Word * ll_backend__fact_table__MaybeSortFileLine_10);

static void MR_CALL 
ll_backend__fact_table__get_output_args_list_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ArgStrings0_2,
  MR_Word * ll_backend__fact_table__HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__get_input_args_list_5_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__ModuleInfo_3,
  MR_Word ll_backend__fact_table__ArgStrings0_4,
  MR_Word * ll_backend__fact_table__HeadVar__5_5);

static void MR_CALL 
ll_backend__fact_table__remove_sort_file_escapes_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word * ll_backend__fact_table__HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__split_key_to_arg_strings_2_p_0(
  MR_String ll_backend__fact_table__Key0_3,
  MR_Word * ll_backend__fact_table__ArgStrings_4);

static void MR_CALL 
ll_backend__fact_table__write_closing_brace_3_p_0(
  MR_Word ll_backend__fact_table__OutputStream_4);

static void MR_CALL 
ll_backend__fact_table__write_new_data_array_5_p_0(
  MR_Word ll_backend__fact_table__OutputStream_6,
  MR_String ll_backend__fact_table__StructName_7,
  MR_Integer ll_backend__fact_table__FactNum_8);

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_2_7_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__Globals_2,
  MR_Word ll_backend__fact_table__ExistsAllInMode_3,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_ProcTable_5);

static void MR_CALL 
ll_backend__fact_table__write_call_system_error_msg_5_p_0(
  MR_Word ll_backend__fact_table__Globals_6,
  MR_String ll_backend__fact_table__Cmd_7,
  MR_Word ll_backend__fact_table__ErrorCode_8);

static void MR_CALL 
ll_backend__fact_table__close_sort_files_4_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word * ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__open_sort_files_6_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word * ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_3,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_4);

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_1_12_p_0(
  MR_Word ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_34,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_PredInfo_35,
  MR_Word ll_backend__fact_table__Context_14,
  MR_Word ll_backend__fact_table__ModuleInfo_15,
  MR_Word * ll_backend__fact_table__CheckProcs_16,
  MR_Word * ll_backend__fact_table__ExistsAllInMode_17,
  MR_Word * ll_backend__fact_table__WriteHashTables_18,
  MR_Word * ll_backend__fact_table__WriteDataTable_19,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_0_36,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_37,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_38,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_39);

static void MR_CALL 
ll_backend__fact_table__infer_proc_determinism_pass_1_13_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ModuleInfo_2,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_3,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_ProcTable_4,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_CheckProcs_0_5,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_CheckProcs_6,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_0_7,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_8,
  MR_Word * ll_backend__fact_table__HeadVar__9_9,
  MR_Word * ll_backend__fact_table__HeadVar__10_10,
  MR_Word * ll_backend__fact_table__HeadVar__11_11,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_12,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_13);

static void MR_CALL 
ll_backend__fact_table__fact_table_mode_type_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ModuleInfo_2,
  MR_Word * ll_backend__fact_table__HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__fill_in_fact_arg_infos_4_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ModuleInfo_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3,
  MR_Word * ll_backend__fact_table__HeadVar__4_4);

static void MR_CALL 
ll_backend__fact_table__init_fact_arg_infos_2_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word * ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__create_fact_table_header_7_p_0(
  MR_Word ll_backend__fact_table__PredName_8,
  MR_Word ll_backend__fact_table__PredInfo_9,
  MR_Word ll_backend__fact_table__FactArgInfos_10,
  MR_String * ll_backend__fact_table__C_HeaderCode_11,
  MR_String * ll_backend__fact_table__StructName_12,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_19,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_20);

static void MR_CALL 
ll_backend__fact_table__create_fact_table_struct_6_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Integer ll_backend__fact_table__I_2,
  MR_Word ll_backend__fact_table__Context_3,
  MR_String * ll_backend__fact_table__HeadVar__4_4,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_5,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_6);

static MR_String MR_CALL 
ll_backend__fact_table__fact_table_file_header_1_f_0(
  MR_String ll_backend__fact_table__FileName_3);

static void MR_CALL 
ll_backend__fact_table__compile_facts_13_p_0(
  MR_Word ll_backend__fact_table__PredName_14,
  MR_Integer ll_backend__fact_table__Arity_15,
  MR_Word ll_backend__fact_table__PredInfo_16,
  MR_Word ll_backend__fact_table__ModuleInfo_17,
  MR_Word ll_backend__fact_table__FactArgInfos_18,
  MR_Word ll_backend__fact_table__ProcStreams_19,
  MR_Word ll_backend__fact_table__MaybeOutput_20,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_NumFacts_36,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_37,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_38);

static void MR_CALL 
ll_backend__fact_table__check_fact_term_14_p_0(
  MR_Word ll_backend__fact_table__PredName_1,
  MR_Integer ll_backend__fact_table__Arity0_2,
  MR_Word ll_backend__fact_table__PredInfo_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_Word ll_backend__fact_table__HeadVar__5_5,
  MR_Word ll_backend__fact_table__FactArgInfos_6,
  MR_Word ll_backend__fact_table__ProcStreams_7,
  MR_Word ll_backend__fact_table__MaybeOutput_8,
  MR_Integer ll_backend__fact_table__FactNum_9,
  MR_Word * ll_backend__fact_table__HeadVar__10_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_11,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_12);

static MR_bool MR_CALL 
ll_backend__fact_table__check_fact_term_2_15_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box * ll_backend__fact_table__wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table__check_fact_term_2_15_p_0(
  MR_Word ll_backend__fact_table__PredOrFunc_16,
  MR_Integer ll_backend__fact_table__Arity_17,
  MR_Word ll_backend__fact_table__PredInfo_18,
  MR_Word ll_backend__fact_table__ModuleInfo_19,
  MR_Word ll_backend__fact_table__Terms_20,
  MR_Word ll_backend__fact_table__Context_21,
  MR_Word ll_backend__fact_table__FactArgInfos_22,
  MR_Word ll_backend__fact_table__ProcStreams_23,
  MR_Word ll_backend__fact_table__MaybeOutput_24,
  MR_Integer ll_backend__fact_table__FactNum_25,
  MR_Word * ll_backend__fact_table__Result_26,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_46,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_47);

static void MR_CALL 
ll_backend__fact_table__add_error_report_4_p_0(
  MR_Word ll_backend__fact_table__Context_5,
  MR_Word ll_backend__fact_table__Pieces_6,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_8,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_9);

static void MR_CALL 
ll_backend__fact_table__write_fact_data_8_p_0(
  MR_Word ll_backend__fact_table__VeryVerbose_9,
  MR_Integer ll_backend__fact_table__FactNum_10,
  MR_Integer ll_backend__fact_table__FactTableSize_11,
  MR_Word ll_backend__fact_table__Args_12,
  MR_String ll_backend__fact_table__StructName_13,
  MR_Word ll_backend__fact_table__OutputStream_14);

static void MR_CALL 
ll_backend__fact_table__write_fact_args_4_p_0(
  MR_Word ll_backend__fact_table__OutputStream_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table__write_sort_file_lines_9_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ProcTable_2,
  MR_Word ll_backend__fact_table__Terms_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_String ll_backend__fact_table__FactNumStr_5,
  MR_Word ll_backend__fact_table__FactArgInfos_6,
  MR_Word ll_backend__fact_table__IsPrimary_7);

static MR_String MR_CALL 
ll_backend__fact_table__make_fact_data_string_1_f_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1);

static void MR_CALL 
ll_backend__fact_table__make_sort_file_key_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ModuleInfo_2,
  MR_String * ll_backend__fact_table__HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table__key_from_chars_loop_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_0_2,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_3);

static void MR_CALL 
ll_backend__fact_table__check_fact_type_and_mode_8_p_0(
  MR_Word ll_backend__fact_table__Types0_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Integer ll_backend__fact_table__ArgNum0_3,
  MR_Word ll_backend__fact_table__PredOrFunc_4,
  MR_Word ll_backend__fact_table__Context0_5,
  MR_Word * ll_backend__fact_table__HeadVar__6_6,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_7,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_8);

static void MR_CALL 
ll_backend__fact_table__report_type_error_6_p_0(
  MR_Word ll_backend__fact_table__Context_7,
  MR_Integer ll_backend__fact_table__ArgNum_8,
  MR_Word ll_backend__fact_table__RemainingTerms_9,
  MR_Word ll_backend__fact_table__PredOrFunc_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_13,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_14);

static void MR_CALL 
ll_backend__fact_table__fact_table_size_2_p_0(
  MR_Word ll_backend__fact_table__Globals_3,
  MR_Integer * ll_backend__fact_table__FactTableSize_4);


static /* final */ const MR_Box ll_backend__fact_table_scalar_common_1[70][2];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_2[6][3];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_3[8][1];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_4[4][5];

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_5[1][7];




static /* final */ const MR_Box ll_backend__fact_table_scalar_common_1[70][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 110)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 99)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 116)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 2147483647)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 1073741827)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 536870923)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 268435459)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 134217757)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 67108879)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 33555799)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 16777903)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 8388949)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 4194493)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 2097257)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 1048627)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Integer) 524309)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 262147)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 131101)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 65537)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 32771)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 16411)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Integer) 8209)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 4099)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Integer) 2053)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Integer) 1031)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Integer) 521)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Integer) 257)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Integer) 131)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 67)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: non-ground term in fact."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: fact has wrong number of arguments."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: term is not a fact."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid type in fact table: only \140string\', \140int\' and \140float\' types are allowed in fact tables."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: only \140in\' and \140out\' modes are currently supported in fact tables."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: mode list for procedure is empty."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) " = {\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "An error occurred while concatenating fact table output files."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "_fact_table_num_facts = ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Could not create temporary file:"))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "_fact_table_num_facts")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) "_fact_table")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[1])),
    ((MR_Box) (ll_backend__fact_table__hash_table_from_list_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[2])),
    ((MR_Box) (ll_backend__fact_table__build_hash_table_2_19_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__fact_table_scalar_common_4[3])),
    ((MR_Box) (ll_backend__fact_table__generate_argument_vars_code_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_3[8][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_const_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0)),
    ((MR_Box) (&ll_backend__fact_table__list__pti_list_1__plain_term__type_ctor_info_const_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ll_backend__fact_table__pair__pti_pair_2__plain_maybe__ti_maybe_1term__type_ctor_info_context_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table__list__pti_list_1__plain_term__type_ctor_info_const_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__fact_table__pair__pti_pair_2__plain_maybe__ti_maybe_1term__type_ctor_info_context_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__fact_table__maybe__ti_maybe_1term__type_ctor_info_context_0,
    (MR_PseudoTypeInfo) &ll_backend__fact_table__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_0 = {
  (MR_String) "plain_equals",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_comparison_kind_0_1 = {
  (MR_String) "string_equals",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____comparison_kind_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____comparison_kind_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "comparison_kind",
  {     ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_comparison_kind_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_comparison_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_comparison_kind_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__fact_table__maybe__ti_maybe_1term__type_ctor_info_context_0,
    (MR_TypeInfo) &ll_backend__fact_table__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_error_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__fact_table____Unify____error_report_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____error_report_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "error_report",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__fact_table__pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__fact_table__pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_error_reports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__fact_table____Unify____error_reports_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____error_reports_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "error_reports",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__fact_table__list__ti_list_1pair__ti_pair_2maybe__ti_maybe_1term__type_ctor_info_context_0list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_arg_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_arg_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_arg",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_info_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_DuArgLocn ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_arg_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0 = {
  (MR_String) "fact_arg_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__fact_table__ll_backend__fact_table__field_types_fact_arg_info_0_0,
  NULL,
  ll_backend__fact_table__ll_backend__fact_table__field_locns_fact_arg_info_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_fact_arg_info_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_fact_arg_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_arg_info_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_arg_info_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_arg_info",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_fact_arg_info_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_fact_arg_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_arg_info_0
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_result_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_result_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_result_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_result",
  {     ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_result_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_fact_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_result_0
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_0 = {
  (MR_String) "all_in",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_1 = {
  (MR_String) "all_out",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_2 = {
  (MR_String) "in_out",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_3 = {
  (MR_String) "other",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc ll_backend__fact_table__ll_backend__fact_table__enum_functor_desc_fact_table_mode_type_0_4 = {
  (MR_String) "unknown",
  (MR_Integer) 4
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table____Unify____fact_table_mode_type_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____fact_table_mode_type_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "fact_table_mode_type",
  {     ll_backend__fact_table__ll_backend__fact_table__enum_name_ordered_fact_table_mode_type_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__enum_value_ordered_fact_table_mode_type_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_fact_table_mode_type_0
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_entry_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_index_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0 = {
  (MR_String) "hash_entry",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_entry_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_entry_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_entry_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_entry_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_entry_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____hash_entry_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____hash_entry_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "hash_entry",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_entry_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_entry_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_entry_0
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0 = {
  (MR_String) "fact",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1 = {
  (MR_String) "hash_table",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_index_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_0
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_1[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_index_0_1
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_index_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_index_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____hash_index_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____hash_index_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "hash_index",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_index_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_index_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_index_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_hash_table_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__fact_table__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table__type_ctor_info_hash_entry_0
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0 = {
  (MR_String) "hash_table",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__fact_table__ll_backend__fact_table__field_types_hash_table_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_table_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_hash_table_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_hash_table_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____hash_table_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____hash_table_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "hash_table",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_hash_table_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_hash_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_hash_table_0
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_inferred_determinism_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_0 = {
  (MR_String) "inferred",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__fact_table__ll_backend__fact_table__field_types_inferred_determinism_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_1 = {
  (MR_String) "not_yet",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_inferred_determinism_0_2 = {
  (MR_String) "error",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_inferred_determinism_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____inferred_determinism_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____inferred_determinism_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "inferred_determinism",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_inferred_determinism_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_inferred_determinism_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_inferred_determinism_0
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_proc_stream_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0 = {
  (MR_String) "proc_stream",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__fact_table__ll_backend__fact_table__field_types_proc_stream_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_proc_stream_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_proc_stream_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_proc_stream_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_proc_stream_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____proc_stream_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____proc_stream_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "proc_stream",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_proc_stream_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_proc_stream_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_proc_stream_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table__list__ti_list_1term__type_ctor_info_const_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_const_0
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table__ll_backend__fact_table__field_types_sort_file_line_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__fact_table__list__ti_list_1term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__fact_table__list__ti_list_1term__type_ctor_info_const_0
};

static const MR_DuFunctorDesc ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0 = {
  (MR_String) "sort_file_line",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__fact_table__ll_backend__fact_table__field_types_sort_file_line_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0[1] = {
  &ll_backend__fact_table__ll_backend__fact_table__du_functor_desc_sort_file_line_0_0
};

static const MR_DuPtagLayout ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_sort_file_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__fact_table__ll_backend__fact_table__du_stag_ordered_sort_file_line_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table____Unify____sort_file_line_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table____Compare____sort_file_line_0_0_10001)),
  (MR_String) "ll_backend.fact_table",
  (MR_String) "sort_file_line",
  {     ll_backend__fact_table__ll_backend__fact_table__du_name_ordered_sort_file_line_0 },
  {     ll_backend__fact_table__ll_backend__fact_table__du_ptag_ordered_sort_file_line_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__fact_table__ll_backend__fact_table__functor_number_map_sort_file_line_0
};

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____comparison_kind_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____comparison_kind_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_report_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____error_report_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____error_report_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____error_report_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_reports_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____error_reports_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____error_reports_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____error_reports_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____fact_arg_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____fact_arg_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____fact_arg_info_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____fact_arg_info_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____fact_result_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____fact_result_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_type_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____fact_table_mode_type_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_type_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____fact_table_mode_type_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____hash_entry_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____hash_entry_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____hash_index_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____hash_index_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____hash_table_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____hash_table_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____inferred_determinism_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____inferred_determinism_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____inferred_determinism_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____proc_stream_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____proc_stream_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0_10001(
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____sort_file_line_0_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), ((MR_Word) ll_backend__fact_table__wrapper_arg_2));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0_10001(
  MR_Box * ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Word ll_backend__fact_table__conv0_HeadVar__1_1;

    {
      ll_backend__fact_table____Compare____sort_file_line_0_0(&ll_backend__fact_table__conv0_HeadVar__1_1, ((MR_Word) ll_backend__fact_table__wrapper_arg_2), ((MR_Word) ll_backend__fact_table__wrapper_arg_3));
    }
    *ll_backend__fact_table__wrapper_arg_1 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__3063__1_2_p_0(
  MR_Word ll_backend__fact_table__LambdaHeadVar__1_27,
  MR_Word * ll_backend__fact_table__LambdaHeadVar__2_28)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_27, (MR_Integer) 0)));
    MR_String ll_backend__fact_table__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_27, (MR_Integer) 1)));
    MR_Word ll_backend__fact_table__Var_23;

    *ll_backend__fact_table__LambdaHeadVar__2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_27, (MR_Integer) 2)));
    ll_backend__fact_table__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_27, (MR_Integer) 3)));
  }
}

static void MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1624__1_2_p_0(
  MR_Word ll_backend__fact_table__LambdaHeadVar__1_80,
  MR_Word * ll_backend__fact_table__LambdaHeadVar__2_81)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_80, (MR_Integer) 0)));
    MR_Integer ll_backend__fact_table__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_80, (MR_Integer) 1)));

    *ll_backend__fact_table__LambdaHeadVar__2_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_80, (MR_Integer) 2)));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__488__1_2_p_0(
  MR_Word ll_backend__fact_table__LambdaHeadVar__1_55,
  MR_Word * ll_backend__fact_table__LambdaHeadVar__2_56)
{
  {
    MR_bool ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__LambdaHeadVar__1_55)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ll_backend__fact_table__Var_38;
    MR_Word ll_backend__fact_table__Var_39;

    if (ll_backend__fact_table__succeeded)
      {
        *ll_backend__fact_table__LambdaHeadVar__2_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_55, (MR_Integer) 0)));
        ll_backend__fact_table__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_55, (MR_Integer) 1)));
        ll_backend__fact_table__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__LambdaHeadVar__1_55, (MR_Integer) 2)));
      }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____sort_file_line_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_12 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__CastY_13 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_12 == ll_backend__fact_table__CastY_13);
    if (ll_backend__fact_table__succeeded)
      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__fact_table__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer ll_backend__fact_table__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ll_backend__fact_table__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__fact_table__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__fact_table__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_1[3], &ll_backend__fact_table__Var_10, ((MR_Box) (ll_backend__fact_table__ArgX1_4)), ((MR_Box) (ll_backend__fact_table__ArgY1_5)));
        }
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_10 == (MR_Integer) 0);
        ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
        if (ll_backend__fact_table__succeeded)
          *ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__Var_10;
        else
          {
            MR_Word ll_backend__fact_table__Var_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__fact_table__Var_11, ll_backend__fact_table__ArgX2_6, ll_backend__fact_table__ArgY2_7);
            }
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_11 == (MR_Integer) 0);
            ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
            if (ll_backend__fact_table__succeeded)
              *ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_1[3], ll_backend__fact_table__HeadVar__1_1, ((MR_Box) (ll_backend__fact_table__ArgX3_8)), ((MR_Box) (ll_backend__fact_table__ArgY3_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____sort_file_line_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_9 = (MR_Integer) ll_backend__fact_table__HeadVar__1_1;
    MR_Integer ll_backend__fact_table__CastY_10 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_9 == ll_backend__fact_table__CastY_10);
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__fact_table__TypeInfo_12_12;
        MR_Word ll_backend__fact_table__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer ll_backend__fact_table__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ll_backend__fact_table__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__fact_table__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 2)));

        {
          ll_backend__fact_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__fact_table_scalar_common_1[3], ((MR_Box) (ll_backend__fact_table__ArgX1_3)), ((MR_Box) (ll_backend__fact_table__ArgY1_4)));
        }
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgX2_5 == ll_backend__fact_table__ArgY2_6);
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__TypeInfo_12_12 = (MR_Word) &ll_backend__fact_table_scalar_common_1[3];
                {
                  ll_backend__fact_table__succeeded = mercury__builtin__unify_2_p_0(ll_backend__fact_table__TypeInfo_12_12, ((MR_Box) (ll_backend__fact_table__ArgX3_7)), ((MR_Box) (ll_backend__fact_table__ArgY3_8)));
                }
              }
          }
      }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____proc_stream_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_9 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__CastY_10 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_9 == ll_backend__fact_table__CastY_10);
    if (ll_backend__fact_table__succeeded)
      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer ll_backend__fact_table__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer ll_backend__fact_table__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__fact_table__Var_8, ll_backend__fact_table__ArgX1_4, ll_backend__fact_table__ArgY1_5);
        }
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_8 == (MR_Integer) 0);
        ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
        if (ll_backend__fact_table__succeeded)
          *ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__Var_8;
        else
          {
            mercury__io____Compare____output_stream_0_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__ArgX2_6, ll_backend__fact_table__ArgY2_7);
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____proc_stream_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_7 = (MR_Integer) ll_backend__fact_table__HeadVar__1_1;
    MR_Integer ll_backend__fact_table__CastY_8 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_7 == ll_backend__fact_table__CastY_8);
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__succeeded = MR_TRUE;
    else
      {
        MR_Integer ll_backend__fact_table__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer ll_backend__fact_table__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));

        ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgX1_3 == ll_backend__fact_table__ArgY1_4);
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__succeeded = mercury__io____Unify____output_stream_0_0(ll_backend__fact_table__ArgX2_5, ll_backend__fact_table__ArgY2_6);
          }
      }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____inferred_determinism_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_10 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__CastY_11 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_10 == ll_backend__fact_table__CastY_11);
    if (ll_backend__fact_table__succeeded)
      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ll_backend__fact_table__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ll_backend__fact_table__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) ll_backend__fact_table__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ll_backend__fact_table__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) ll_backend__fact_table__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ll_backend__fact_table__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__fact_table__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__fact_table__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ll_backend__fact_table__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__fact_table__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer ll_backend__fact_table__Var_14 = (MR_Integer) ll_backend__fact_table__Var_13;
                  MR_Integer ll_backend__fact_table__Var_15 = (MR_Integer) ll_backend__fact_table__ArgY1_5;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__Var_14, ll_backend__fact_table__Var_15);
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
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_9 = (MR_Integer) ll_backend__fact_table__HeadVar__1_1;
    MR_Integer ll_backend__fact_table__CastY_10 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_9 == ll_backend__fact_table__CastY_10);
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ll_backend__fact_table__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ll_backend__fact_table__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ll_backend__fact_table__CastX_5 = (MR_Integer) ll_backend__fact_table__HeadVar__1_1;
                MR_Integer ll_backend__fact_table__CastY_6 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;

                ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastY_6 == ll_backend__fact_table__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ll_backend__fact_table__CastX_7 = (MR_Integer) ll_backend__fact_table__HeadVar__1_1;
                MR_Integer ll_backend__fact_table__CastY_8 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;

                ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastY_8 == ll_backend__fact_table__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__fact_table__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__ArgY1_4;

            ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
                ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgX1_3 == ll_backend__fact_table__ArgY1_4);
              }
          }
          break;
      }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_table_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_9 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__CastY_10 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_9 == ll_backend__fact_table__CastY_10);
    if (ll_backend__fact_table__succeeded)
      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer ll_backend__fact_table__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer ll_backend__fact_table__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__fact_table__Var_8, ll_backend__fact_table__ArgX1_4, ll_backend__fact_table__ArgY1_5);
        }
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_8 == (MR_Integer) 0);
        ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
        if (ll_backend__fact_table__succeeded)
          *ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_2[1], ll_backend__fact_table__HeadVar__1_1, ((MR_Box) (ll_backend__fact_table__ArgX2_6)), ((MR_Box) (ll_backend__fact_table__ArgY2_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_table_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_7 = (MR_Integer) ll_backend__fact_table__HeadVar__1_1;
    MR_Integer ll_backend__fact_table__CastY_8 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_7 == ll_backend__fact_table__CastY_8);
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__fact_table__TypeInfo_9_9;
        MR_Integer ll_backend__fact_table__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer ll_backend__fact_table__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));

        ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgX1_3 == ll_backend__fact_table__ArgY1_4);
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__TypeInfo_9_9 = (MR_Word) &ll_backend__fact_table_scalar_common_2[1];
            {
              ll_backend__fact_table__succeeded = mercury__builtin__unify_2_p_0(ll_backend__fact_table__TypeInfo_9_9, ((MR_Box) (ll_backend__fact_table__ArgX2_5)), ((MR_Box) (ll_backend__fact_table__ArgY2_6)));
            }
          }
      }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_entry_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_12 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__CastY_13 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_12 == ll_backend__fact_table__CastY_13);
    if (ll_backend__fact_table__succeeded)
      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__fact_table__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer ll_backend__fact_table__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ll_backend__fact_table__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__fact_table__Var_10;

        {
          mercury__term____Compare____const_0_0(&ll_backend__fact_table__Var_10, ll_backend__fact_table__ArgX1_4, ll_backend__fact_table__ArgY1_5);
        }
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_10 == (MR_Integer) 0);
        ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
        if (ll_backend__fact_table__succeeded)
          *ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__Var_10;
        else
          {
            MR_Word ll_backend__fact_table__Var_11;

            {
              ll_backend__fact_table____Compare____hash_index_0_0(&ll_backend__fact_table__Var_11, ll_backend__fact_table__ArgX2_6, ll_backend__fact_table__ArgY2_7);
            }
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_11 == (MR_Integer) 0);
            ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
            if (ll_backend__fact_table__succeeded)
              *ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__Var_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__ArgX3_8, ll_backend__fact_table__ArgY3_9);
              }
          }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____hash_index_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_17 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__CastY_18 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_17 == ll_backend__fact_table__CastY_18);
    if (ll_backend__fact_table__succeeded)
      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) ll_backend__fact_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer ll_backend__fact_table__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ll_backend__fact_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer ll_backend__fact_table__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__Var_22, ll_backend__fact_table__ArgY1_5);
            }
          }
        else
          *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_String ll_backend__fact_table__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ll_backend__fact_table__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ll_backend__fact_table__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Integer ll_backend__fact_table__ArgY1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
            MR_String ll_backend__fact_table__ArgY2_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_16;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__fact_table__Var_16, ll_backend__fact_table__Var_24, ll_backend__fact_table__ArgY1_13);
            }
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_16 == (MR_Integer) 0);
            ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
            if (ll_backend__fact_table__succeeded)
              *ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__Var_16;
            else
              {
                mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__Var_23, ll_backend__fact_table__ArgY2_15);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_entry_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_9 = (MR_Integer) ll_backend__fact_table__HeadVar__1_1;
    MR_Integer ll_backend__fact_table__CastY_10 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_9 == ll_backend__fact_table__CastY_10);
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__fact_table__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ll_backend__fact_table__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer ll_backend__fact_table__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 2)));

        {
          ll_backend__fact_table__succeeded = mercury__term____Unify____const_0_0(ll_backend__fact_table__ArgX1_3, ll_backend__fact_table__ArgY1_4);
        }
        if (ll_backend__fact_table__succeeded)
          {
            {
              ll_backend__fact_table__succeeded = ll_backend__fact_table____Unify____hash_index_0_0(ll_backend__fact_table__ArgX2_5, ll_backend__fact_table__ArgY2_6);
            }
            if (ll_backend__fact_table__succeeded)
              ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgX3_7 == ll_backend__fact_table__ArgY3_8);
          }
      }
    return ll_backend__fact_table__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____hash_index_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_9 = (MR_Integer) ll_backend__fact_table__HeadVar__1_1;
    MR_Integer ll_backend__fact_table__CastY_10 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_9 == ll_backend__fact_table__CastY_10);
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ll_backend__fact_table__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer ll_backend__fact_table__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer ll_backend__fact_table__ArgY1_4;

        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgX1_3 == ll_backend__fact_table__ArgY1_4);
          }
      }
    else
      {
        MR_Integer ll_backend__fact_table__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer ll_backend__fact_table__ArgY1_6;
        MR_String ll_backend__fact_table__ArgX2_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ll_backend__fact_table__ArgY2_8;

        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__fact_table__ArgY2_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgX1_5 == ll_backend__fact_table__ArgY1_6);
            if (ll_backend__fact_table__succeeded)
              ll_backend__fact_table__succeeded = (strcmp(ll_backend__fact_table__ArgX2_7, ll_backend__fact_table__ArgY2_8) == 0);
          }
      }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_table_mode_type_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__Cast_HeadVar1_4 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__Cast_HeadVar2_5 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__Cast_HeadVar1_4, ll_backend__fact_table__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_table_mode_type_0_0(
  MR_Word ll_backend__fact_table__HeadVar__2_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded = (ll_backend__fact_table__HeadVar__2_1 == ll_backend__fact_table__HeadVar__2_2);

    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_result_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__Cast_HeadVar1_4 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__Cast_HeadVar2_5 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__Cast_HeadVar1_4, ll_backend__fact_table__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_result_0_0(
  MR_Word ll_backend__fact_table__HeadVar__2_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded = (ll_backend__fact_table__HeadVar__2_1 == ll_backend__fact_table__HeadVar__2_2);

    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_info_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_12 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__CastY_13 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_12 == ll_backend__fact_table__CastY_13);
    if (ll_backend__fact_table__succeeded)
      *ll_backend__fact_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__fact_table__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__fact_table__ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__fact_table__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__fact_table__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__fact_table__Var_10;

        {
          parse_tree__prog_data____Compare____mer_type_0_0(&ll_backend__fact_table__Var_10, ll_backend__fact_table__ArgX1_4, ll_backend__fact_table__ArgY1_5);
        }
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_10 == (MR_Integer) 0);
        ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
        if (ll_backend__fact_table__succeeded)
          *ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__Var_10;
        else
          {
            MR_Word ll_backend__fact_table__Var_11;
            MR_Integer ll_backend__fact_table__Var_17 = (MR_Integer) ll_backend__fact_table__ArgX2_6;
            MR_Integer ll_backend__fact_table__Var_18 = (MR_Integer) ll_backend__fact_table__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__fact_table__Var_11, ll_backend__fact_table__Var_17, ll_backend__fact_table__Var_18);
            }
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_11 == (MR_Integer) 0);
            ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
            if (ll_backend__fact_table__succeeded)
              *ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__Var_11;
            else
              {
                MR_Integer ll_backend__fact_table__Var_19 = (MR_Integer) ll_backend__fact_table__ArgX3_8;
                MR_Integer ll_backend__fact_table__Var_20 = (MR_Integer) ll_backend__fact_table__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__Var_19, ll_backend__fact_table__Var_20);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_info_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__CastX_9 = (MR_Integer) ll_backend__fact_table__HeadVar__1_1;
    MR_Integer ll_backend__fact_table__CastY_10 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;

    ll_backend__fact_table__succeeded = (ll_backend__fact_table__CastX_9 == ll_backend__fact_table__CastY_10);
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__fact_table__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__fact_table__ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ll_backend__fact_table__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__fact_table__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

        {
          ll_backend__fact_table__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__fact_table__ArgX1_3, ll_backend__fact_table__ArgY1_4);
        }
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgX2_5 == ll_backend__fact_table__ArgY2_6);
            if (ll_backend__fact_table__succeeded)
              ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgX3_7 == ll_backend__fact_table__ArgY3_8);
          }
      }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____fact_arg_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Cast_HeadVar1_4 = ll_backend__fact_table__HeadVar__2_2;
    MR_Word ll_backend__fact_table__Cast_HeadVar2_5 = ll_backend__fact_table__HeadVar__3_3;

    {
      mercury__term____Compare____const_0_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__Cast_HeadVar1_4, ll_backend__fact_table__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____fact_arg_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Cast_HeadVar1_3 = ll_backend__fact_table__HeadVar__1_1;
    MR_Word ll_backend__fact_table__Cast_HeadVar2_4 = ll_backend__fact_table__HeadVar__2_2;

    {
      ll_backend__fact_table__succeeded = mercury__term____Unify____const_0_0(ll_backend__fact_table__Cast_HeadVar1_3, ll_backend__fact_table__Cast_HeadVar2_4);
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____error_reports_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Cast_HeadVar1_4 = ll_backend__fact_table__HeadVar__2_2;
    MR_Word ll_backend__fact_table__Cast_HeadVar2_5 = ll_backend__fact_table__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_1[4], ll_backend__fact_table__HeadVar__1_1, ((MR_Box) (ll_backend__fact_table__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__fact_table__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_reports_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Cast_HeadVar1_3 = ll_backend__fact_table__HeadVar__1_1;
    MR_Word ll_backend__fact_table__Cast_HeadVar2_4 = ll_backend__fact_table__HeadVar__2_2;

    {
      ll_backend__fact_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__fact_table_scalar_common_1[4], ((MR_Box) (ll_backend__fact_table__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__fact_table__Cast_HeadVar2_4)));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____error_report_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Cast_HeadVar1_4 = ll_backend__fact_table__HeadVar__2_2;
    MR_Word ll_backend__fact_table__Cast_HeadVar2_5 = ll_backend__fact_table__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_2[0], ll_backend__fact_table__HeadVar__1_1, ((MR_Box) (ll_backend__fact_table__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__fact_table__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____error_report_0_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Cast_HeadVar1_3 = ll_backend__fact_table__HeadVar__1_1;
    MR_Word ll_backend__fact_table__Cast_HeadVar2_4 = ll_backend__fact_table__HeadVar__2_2;

    {
      ll_backend__fact_table__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__fact_table_scalar_common_2[0], ((MR_Box) (ll_backend__fact_table__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__fact_table__Cast_HeadVar2_4)));
    }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table____Compare____comparison_kind_0_0(
  MR_Word * ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__Cast_HeadVar1_4 = (MR_Integer) ll_backend__fact_table__HeadVar__2_2;
    MR_Integer ll_backend__fact_table__Cast_HeadVar2_5 = (MR_Integer) ll_backend__fact_table__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__Cast_HeadVar1_4, ll_backend__fact_table__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table____Unify____comparison_kind_0_0(
  MR_Word ll_backend__fact_table__HeadVar__2_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded = (ll_backend__fact_table__HeadVar__2_1 == ll_backend__fact_table__HeadVar__2_2);

    return ll_backend__fact_table__succeeded;
  }
}

void MR_CALL 
ll_backend__fact_table__fact_table_generate_c_code_11_p_0(
  MR_Word ll_backend__fact_table__PredName_12,
  MR_Word ll_backend__fact_table__PragmaVars_13,
  MR_Integer ll_backend__fact_table__ProcID_14,
  MR_Integer ll_backend__fact_table__PrimaryProcID_15,
  MR_Word ll_backend__fact_table__ProcInfo_16,
  MR_Word ll_backend__fact_table__ArgTypes_17,
  MR_Word ll_backend__fact_table__ModuleInfo_18,
  MR_String * ll_backend__fact_table__ProcCode_19,
  MR_String * ll_backend__fact_table__ExtraCode_20)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Globals_22;
    MR_Integer ll_backend__fact_table__FactTableSize_23;
    MR_Word ll_backend__fact_table__ArgModes_24;
    MR_Word ll_backend__fact_table__Determinism_25;
    MR_Word ll_backend__fact_table__ModeType_26;
    MR_String ll_backend__fact_table__Identifier_27;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_18, &ll_backend__fact_table__Globals_22);
    }
    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__fact_table__Globals_22, (MR_Integer) 323, &ll_backend__fact_table__FactTableSize_23);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__fact_table__ProcInfo_16, &ll_backend__fact_table__ArgModes_24);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ll_backend__fact_table__ProcInfo_16, &ll_backend__fact_table__Determinism_25);
    }
    {
      ll_backend__fact_table__fact_table_mode_type_3_p_0(ll_backend__fact_table__ArgModes_24, ll_backend__fact_table__ModuleInfo_18, &ll_backend__fact_table__ModeType_26);
    }
    {
      ll_backend__fact_table__Identifier_27 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__fact_table__PredName_12);
    }
    ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType_26 == (MR_Integer) 1);
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__succeeded = (ll_backend__fact_table__Determinism_25 == (MR_Integer) 2);
    if (ll_backend__fact_table__succeeded)
      {
        ll_backend__fact_table__generate_multidet_code_8_p_0(ll_backend__fact_table__Identifier_27, ll_backend__fact_table__PragmaVars_13, ll_backend__fact_table__ProcID_14, ll_backend__fact_table__ArgTypes_17, ll_backend__fact_table__ModuleInfo_18, ll_backend__fact_table__FactTableSize_23, ll_backend__fact_table__ProcCode_19, ll_backend__fact_table__ExtraCode_20);
      }
    else
      {
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType_26 == (MR_Integer) 1);
        if (ll_backend__fact_table__succeeded)
          ll_backend__fact_table__succeeded = (ll_backend__fact_table__Determinism_25 == (MR_Integer) 4);
        if (ll_backend__fact_table__succeeded)
          {
            MR_String ll_backend__fact_table__StructName_46;
            MR_Word ll_backend__fact_table__Var_47;
            MR_Word ll_backend__fact_table__Var_49;

            {
              ll_backend__fact_table__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_49, 0) = ((MR_Box) (ll_backend__fact_table__Identifier_27));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[69])));
            }
            {
              ll_backend__fact_table__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_47, 0) = ((MR_Box) ((MR_String) "mercury__"));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_47, 1) = ((MR_Box) (ll_backend__fact_table__Var_49));
            }
            {
              mercury__string__append_list_2_p_0(ll_backend__fact_table__Var_47, &ll_backend__fact_table__StructName_46);
            }
            {
              ll_backend__fact_table__generate_cc_multi_code_2_5_p_0(ll_backend__fact_table__PragmaVars_13, ll_backend__fact_table__StructName_46, (MR_Integer) 1, (MR_String) "", ll_backend__fact_table__ProcCode_19);
            }
            *ll_backend__fact_table__ExtraCode_20 = (MR_String) "";
          }
        else
          {
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType_26 == (MR_Integer) 0);
            if (ll_backend__fact_table__succeeded)
              ll_backend__fact_table__succeeded = (ll_backend__fact_table__Determinism_25 == (MR_Integer) 1);
            if (ll_backend__fact_table__succeeded)
              {
                {
                  ll_backend__fact_table__generate_all_in_code_7_p_0(ll_backend__fact_table__Identifier_27, ll_backend__fact_table__PragmaVars_13, ll_backend__fact_table__ProcID_14, ll_backend__fact_table__ArgTypes_17, ll_backend__fact_table__ModuleInfo_18, ll_backend__fact_table__FactTableSize_23, ll_backend__fact_table__ProcCode_19);
                }
                *ll_backend__fact_table__ExtraCode_20 = (MR_String) "";
              }
            else
              {
                ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType_26 == (MR_Integer) 2);
                if (ll_backend__fact_table__succeeded)
                  switch (ll_backend__fact_table__Determinism_25) {
                    default:
                      ll_backend__fact_table__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 5:
                      ll_backend__fact_table__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 1:
                      ll_backend__fact_table__succeeded = MR_TRUE;
                      break;
                  }
                if (ll_backend__fact_table__succeeded)
                  {
                    {
                      ll_backend__fact_table__generate_semidet_in_out_code_7_p_0(ll_backend__fact_table__Identifier_27, ll_backend__fact_table__PragmaVars_13, ll_backend__fact_table__ProcID_14, ll_backend__fact_table__ArgTypes_17, ll_backend__fact_table__ModuleInfo_18, ll_backend__fact_table__FactTableSize_23, ll_backend__fact_table__ProcCode_19);
                    }
                    *ll_backend__fact_table__ExtraCode_20 = (MR_String) "";
                  }
                else
                  {
                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType_26 == (MR_Integer) 2);
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Determinism_25 == (MR_Integer) 3);
                        if (ll_backend__fact_table__succeeded)
                          ll_backend__fact_table__succeeded = (ll_backend__fact_table__ProcID_14 == ll_backend__fact_table__PrimaryProcID_15);
                      }
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__generate_primary_nondet_code_8_p_0(ll_backend__fact_table__Identifier_27, ll_backend__fact_table__PragmaVars_13, ll_backend__fact_table__ProcID_14, ll_backend__fact_table__ArgTypes_17, ll_backend__fact_table__ModuleInfo_18, ll_backend__fact_table__FactTableSize_23, ll_backend__fact_table__ProcCode_19, ll_backend__fact_table__ExtraCode_20);
                      }
                    else
                      {
                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType_26 == (MR_Integer) 2);
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__succeeded = (ll_backend__fact_table__Determinism_25 == (MR_Integer) 3);
                            if (ll_backend__fact_table__succeeded)
                              {
                                ll_backend__fact_table__succeeded = (ll_backend__fact_table__ProcID_14 == ll_backend__fact_table__PrimaryProcID_15);
                                ll_backend__fact_table__succeeded = !(ll_backend__fact_table__succeeded);
                              }
                          }
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__generate_secondary_nondet_code_8_p_0(ll_backend__fact_table__Identifier_27, ll_backend__fact_table__PragmaVars_13, ll_backend__fact_table__ProcID_14, ll_backend__fact_table__ArgTypes_17, ll_backend__fact_table__ModuleInfo_18, ll_backend__fact_table__FactTableSize_23, ll_backend__fact_table__ProcCode_19, ll_backend__fact_table__ExtraCode_20);
                          }
                        else
                          {
                            MR_String ll_backend__fact_table__NamesString_28;
                            MR_String ll_backend__fact_table__Var_36;

                            {
                              ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(ll_backend__fact_table__PragmaVars_13, &ll_backend__fact_table__NamesString_28);
                            }
                            {
                              ll_backend__fact_table__Var_36 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__NamesString_28, (MR_String) " */");
                            }
                            {
                              *ll_backend__fact_table__ProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "/* ", ll_backend__fact_table__Var_36);
                            }
                            *ll_backend__fact_table__ExtraCode_20 = (MR_String) "";
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
  MR_String ll_backend__fact_table__PredName_9,
  MR_Word ll_backend__fact_table__PragmaVars_10,
  MR_Integer ll_backend__fact_table__ProcID_11,
  MR_Word ll_backend__fact_table__ArgTypes_12,
  MR_Word ll_backend__fact_table__ModuleInfo_13,
  MR_Integer ll_backend__fact_table__FactTableSize_14,
  MR_String * ll_backend__fact_table__ProcCode_15,
  MR_String * ll_backend__fact_table__ExtraCode_16)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__ExtraCodeLabel_17;
    MR_String ll_backend__fact_table__ArgDeclCode_19;
    MR_String ll_backend__fact_table__InputCode_20;
    MR_String ll_backend__fact_table__OutputCode_21;
    MR_String ll_backend__fact_table__DeclCode_25;
    MR_Integer ll_backend__fact_table__ProcInt_26;
    MR_String ll_backend__fact_table__LabelName_27;
    MR_String ll_backend__fact_table__LabelName2_28;
    MR_String ll_backend__fact_table__HashCode_29;
    MR_String ll_backend__fact_table__StringHashLookupCode_30;
    MR_String ll_backend__fact_table__IntHashLookupCode_31;
    MR_String ll_backend__fact_table__FloatHashLookupCode_32;
    MR_String ll_backend__fact_table__FactLookupCode_33;
    MR_Integer ll_backend__fact_table__Arity_34;
    MR_String ll_backend__fact_table__Var_139;
    MR_Word ll_backend__fact_table__Var_145;
    MR_String ll_backend__fact_table__Var_147;
    MR_String ll_backend__fact_table__Var_149;
    MR_String ll_backend__fact_table__Var_151;
    MR_String ll_backend__fact_table__Var_152;
    MR_String ll_backend__fact_table__Var_154;
    MR_String ll_backend__fact_table__Var_155;
    MR_String ll_backend__fact_table__Var_157;
    MR_String ll_backend__fact_table__Var_158;
    MR_String ll_backend__fact_table__Var_160;
    MR_String ll_backend__fact_table__Var_161;
    MR_String ll_backend__fact_table__Var_163;
    MR_String ll_backend__fact_table__Var_164;
    MR_String ll_backend__fact_table__Var_166;
    MR_String ll_backend__fact_table__Var_167;
    MR_String ll_backend__fact_table__Var_169;
    MR_String ll_backend__fact_table__Var_170;
    MR_String ll_backend__fact_table__Var_172;
    MR_String ll_backend__fact_table__Var_173;
    MR_String ll_backend__fact_table__Var_175;
    MR_String ll_backend__fact_table__Var_176;
    MR_String ll_backend__fact_table__Var_178;
    MR_String ll_backend__fact_table__Var_179;
    MR_String ll_backend__fact_table__Var_181;
    MR_String ll_backend__fact_table__Var_182;
    MR_String ll_backend__fact_table__Var_184;
    MR_String ll_backend__fact_table__Var_185;
    MR_String ll_backend__fact_table__Var_187;
    MR_String ll_backend__fact_table__Var_188;
    MR_String ll_backend__fact_table__Var_190;
    MR_String ll_backend__fact_table__Var_191;
    MR_String ll_backend__fact_table__Var_193;
    MR_String ll_backend__fact_table__Var_194;
    MR_String ll_backend__fact_table__Var_196;
    MR_String ll_backend__fact_table__Var_197;
    MR_String ll_backend__fact_table__Var_199;
    MR_String ll_backend__fact_table__Var_200;
    MR_String ll_backend__fact_table__Var_202;
    MR_String ll_backend__fact_table__Var_203;
    MR_String ll_backend__fact_table__Var_205;
    MR_String ll_backend__fact_table__Var_206;
    MR_String ll_backend__fact_table__Var_208;
    MR_String ll_backend__fact_table__Var_209;
    MR_String ll_backend__fact_table__Var_211;
    MR_String ll_backend__fact_table__Var_212;
    MR_String ll_backend__fact_table__Var_214;
    MR_String ll_backend__fact_table__Var_215;
    MR_String ll_backend__fact_table__Var_217;
    MR_String ll_backend__fact_table__Var_218;
    MR_String ll_backend__fact_table__Var_225;
    MR_String ll_backend__fact_table__Var_227;
    MR_String ll_backend__fact_table__Var_228;
    MR_String ll_backend__fact_table__Var_230;
    MR_String ll_backend__fact_table__Var_231;
    MR_String ll_backend__fact_table__Var_233;
    MR_String ll_backend__fact_table__Var_234;
    MR_String ll_backend__fact_table__Var_236;
    MR_String ll_backend__fact_table__Var_237;
    MR_String ll_backend__fact_table__Var_239;
    MR_String ll_backend__fact_table__Var_240;
    MR_String ll_backend__fact_table__Var_242;
    MR_String ll_backend__fact_table__Var_243;
    MR_String ll_backend__fact_table__Var_245;
    MR_String ll_backend__fact_table__Var_246;
    MR_String ll_backend__fact_table___SaveRegsCode_22;
    MR_String ll_backend__fact_table___GetRegsCode_23;
    MR_Integer ll_backend__fact_table___NumFrameVars_24;

    {
      ll_backend__fact_table__generate_nondet_proc_code_5_p_0(ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__PredName_9, ll_backend__fact_table__ProcID_11, &ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__ProcCode_15);
    }
    {
      ll_backend__fact_table__generate_argument_vars_code_9_p_0(ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgTypes_12, ll_backend__fact_table__ModuleInfo_13, &ll_backend__fact_table__ArgDeclCode_19, &ll_backend__fact_table__InputCode_20, &ll_backend__fact_table__OutputCode_21, &ll_backend__fact_table___SaveRegsCode_22, &ll_backend__fact_table___GetRegsCode_23, &ll_backend__fact_table___NumFrameVars_24);
    }
    {
      ll_backend__fact_table__generate_decl_code_3_p_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__ProcID_11, &ll_backend__fact_table__DeclCode_25);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_11, &ll_backend__fact_table__ProcInt_26);
    }
    ll_backend__fact_table__Var_145 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_145, ll_backend__fact_table__ProcInt_26, &ll_backend__fact_table__Var_139);
    }
    {
      ll_backend__fact_table__Var_147 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__fact_table__Var_139);
    }
    {
      ll_backend__fact_table__LabelName_27 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__Var_147);
    }
    {
      mercury__string__append_3_p_2(ll_backend__fact_table__LabelName_27, (MR_String) "_2", &ll_backend__fact_table__LabelName2_28);
    }
    {
      ll_backend__fact_table__generate_hash_code_9_p_0(ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgTypes_12, ll_backend__fact_table__ModuleInfo_13, ll_backend__fact_table__LabelName_27, (MR_Integer) 0, ll_backend__fact_table__PredName_9, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_14, &ll_backend__fact_table__HashCode_29);
    }
    {
      ll_backend__fact_table__generate_hash_lookup_code_13_p_0((MR_String) "(char *) MR_framevar(4)", ll_backend__fact_table__LabelName2_28, (MR_Integer) 0, (MR_Integer) 1, (MR_Char) 115, (MR_Integer) 0, (MR_String) "", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__fact_table__ModuleInfo_13, (MR_Integer) 0, (MR_Integer) 0, &ll_backend__fact_table__StringHashLookupCode_30);
    }
    {
      ll_backend__fact_table__generate_hash_lookup_code_13_p_0((MR_String) "MR_framevar(4)", ll_backend__fact_table__LabelName2_28, (MR_Integer) 1, (MR_Integer) 0, (MR_Char) 105, (MR_Integer) 0, (MR_String) "", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__fact_table__ModuleInfo_13, (MR_Integer) 0, (MR_Integer) 0, &ll_backend__fact_table__IntHashLookupCode_31);
    }
    {
      ll_backend__fact_table__generate_hash_lookup_code_13_p_0((MR_String) "MR_word_to_float(MR_framevar(4))", ll_backend__fact_table__LabelName2_28, (MR_Integer) 2, (MR_Integer) 0, (MR_Char) 102, (MR_Integer) 0, (MR_String) "", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__fact_table__ModuleInfo_13, (MR_Integer) 0, (MR_Integer) 0, &ll_backend__fact_table__FloatHashLookupCode_32);
    }
    {
      ll_backend__fact_table__generate_fact_lookup_code_7_p_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgTypes_12, ll_backend__fact_table__ModuleInfo_13, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_14, &ll_backend__fact_table__FactLookupCode_33);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0, ll_backend__fact_table__PragmaVars_10, &ll_backend__fact_table__Arity_34);
    }
    {
      ll_backend__fact_table__Var_149 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
    }
    {
      ll_backend__fact_table__Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", ll_backend__fact_table__Var_149);
    }
    {
      ll_backend__fact_table__Var_152 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_151);
    }
    {
      ll_backend__fact_table__Var_154 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", ll_backend__fact_table__Var_152);
    }
    {
      ll_backend__fact_table__Var_155 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_154);
    }
    {
      ll_backend__fact_table__Var_157 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", ll_backend__fact_table__Var_155);
    }
    {
      ll_backend__fact_table__Var_158 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_157);
    }
    {
      ll_backend__fact_table__Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", ll_backend__fact_table__Var_158);
    }
    {
      ll_backend__fact_table__Var_161 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_160);
    }
    {
      ll_backend__fact_table__Var_163 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_END_MODULE\n\nextern MR_ModuleFunc ", ll_backend__fact_table__Var_161);
    }
    {
      ll_backend__fact_table__Var_164 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName2_28, ll_backend__fact_table__Var_163);
    }
    {
      ll_backend__fact_table__Var_166 = mercury__string__f_43_43_2_f_0((MR_String) "\n        if (hashval == -1) MR_succeed_discard();\n        MR_framevar(1) = hashval;\n        MR_succeed();\n    failure_code_", ll_backend__fact_table__Var_164);
    }
    {
      ll_backend__fact_table__Var_167 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__OutputCode_21, ll_backend__fact_table__Var_166);
    }
    {
      ll_backend__fact_table__Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", ll_backend__fact_table__Var_167);
    }
    {
      ll_backend__fact_table__Var_170 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FactLookupCode_33, ll_backend__fact_table__Var_169);
    }
    {
      ll_backend__fact_table__Var_172 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        /* lookup fact table */\n", ll_backend__fact_table__Var_170);
    }
    {
      ll_backend__fact_table__Var_173 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName2_28, ll_backend__fact_table__Var_172);
    }
    {
      ll_backend__fact_table__Var_175 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            default:\n                MR_fatal_error(\n                    \"fact table hash lookup: nondet stack corrupted\?\");\n        }\n " "   success_code_", ll_backend__fact_table__Var_173);
    }
    {
      ll_backend__fact_table__Var_176 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FloatHashLookupCode_32, ll_backend__fact_table__Var_175);
    }
    {
      ll_backend__fact_table__Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            case \'f\':\n", ll_backend__fact_table__Var_176);
    }
    {
      ll_backend__fact_table__Var_179 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__IntHashLookupCode_31, ll_backend__fact_table__Var_178);
    }
    {
      ll_backend__fact_table__Var_181 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            case \'i\':\n", ll_backend__fact_table__Var_179);
    }
    {
      ll_backend__fact_table__Var_182 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__StringHashLookupCode_30, ll_backend__fact_table__Var_181);
    }
    {
      ll_backend__fact_table__Var_184 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Integer  hashval = MR_framevar(1);\n        MR_Word     ind;\n        void        *current_table = (void *) MR_framevar(2);\n        char        keytyp" "e = (char) MR_framevar(3);\n\n        /* lookup hash table */\n        switch(keytype)\n        {\n            case \'s\':\n", ll_backend__fact_table__Var_182);
    }
    {
      ll_backend__fact_table__Var_185 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ArgDeclCode_19, ll_backend__fact_table__Var_184);
    }
    {
      ll_backend__fact_table__Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    {\n        /* create argument vars */\n", ll_backend__fact_table__Var_185);
    }
    {
      ll_backend__fact_table__Var_188 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_187);
    }
    {
      ll_backend__fact_table__Var_190 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_define_label(", ll_backend__fact_table__Var_188);
    }
    {
      ll_backend__fact_table__Var_191 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_27, ll_backend__fact_table__Var_190);
    }
    {
      ll_backend__fact_table__Var_193 = mercury__string__f_43_43_2_f_0((MR_String) "\n        if (hashval == -1) MR_succeed_discard();\n        MR_framevar(1) = hashval;\n        MR_framevar(2) = (MR_Word) current_table;\n        MR_framevar(3) = (" "MR_Word) keytype;\n        MR_framevar(4) = current_key;\n        MR_succeed();\n    failure_code_", ll_backend__fact_table__Var_191);
    }
    {
      ll_backend__fact_table__Var_194 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__OutputCode_21, ll_backend__fact_table__Var_193);
    }
    {
      ll_backend__fact_table__Var_196 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", ll_backend__fact_table__Var_194);
    }
    {
      ll_backend__fact_table__Var_197 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FactLookupCode_33, ll_backend__fact_table__Var_196);
    }
    {
      ll_backend__fact_table__Var_199 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        /* lookup fact table */\n", ll_backend__fact_table__Var_197);
    }
    {
      ll_backend__fact_table__Var_200 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_27, ll_backend__fact_table__Var_199);
    }
    {
      ll_backend__fact_table__Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\n    success_code_", ll_backend__fact_table__Var_200);
    }
    {
      ll_backend__fact_table__Var_203 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashCode_29, ll_backend__fact_table__Var_202);
    }
    {
      ll_backend__fact_table__Var_205 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* lookup hash table */\n", ll_backend__fact_table__Var_203);
    }
    {
      ll_backend__fact_table__Var_206 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__InputCode_20, ll_backend__fact_table__Var_205);
    }
    {
      ll_backend__fact_table__Var_208 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* copy registers to input arg vars */\n", ll_backend__fact_table__Var_206);
    }
    {
      ll_backend__fact_table__Var_209 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__DeclCode_25, ll_backend__fact_table__Var_208);
    }
    {
      ll_backend__fact_table__Var_211 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* declare local variables */\n", ll_backend__fact_table__Var_209);
    }
    {
      ll_backend__fact_table__Var_212 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ArgDeclCode_19, ll_backend__fact_table__Var_211);
    }
    {
      ll_backend__fact_table__Var_214 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    {\n        /* create argument vars */\n", ll_backend__fact_table__Var_212);
    }
    {
      ll_backend__fact_table__Var_215 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_214);
    }
    {
      ll_backend__fact_table__Var_217 = mercury__string__f_43_43_2_f_0((MR_String) "\", 4, MR_LABEL(", ll_backend__fact_table__Var_215);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_145, ll_backend__fact_table__Arity_34, &ll_backend__fact_table__Var_218);
    }
    {
      ll_backend__fact_table__Var_225 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_218, ll_backend__fact_table__Var_217);
    }
    {
      ll_backend__fact_table__Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__fact_table__Var_225);
    }
    {
      ll_backend__fact_table__Var_228 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__Var_227);
    }
    {
      ll_backend__fact_table__Var_230 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", ll_backend__fact_table__Var_228);
    }
    {
      ll_backend__fact_table__Var_231 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_230);
    }
    {
      ll_backend__fact_table__Var_233 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", ll_backend__fact_table__Var_231);
    }
    {
      ll_backend__fact_table__Var_234 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_233);
    }
    {
      ll_backend__fact_table__Var_236 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", ll_backend__fact_table__Var_234);
    }
    {
      ll_backend__fact_table__Var_237 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_236);
    }
    {
      ll_backend__fact_table__Var_239 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", ll_backend__fact_table__Var_237);
    }
    {
      ll_backend__fact_table__Var_240 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_239);
    }
    {
      ll_backend__fact_table__Var_242 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", ll_backend__fact_table__Var_240);
    }
    {
      ll_backend__fact_table__Var_243 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_242);
    }
    {
      ll_backend__fact_table__Var_245 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", ll_backend__fact_table__Var_243);
    }
    {
      ll_backend__fact_table__Var_246 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_245);
    }
    {
      *ll_backend__fact_table__ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", ll_backend__fact_table__Var_246);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_primary_nondet_code_8_p_0(
  MR_String ll_backend__fact_table__PredName_9,
  MR_Word ll_backend__fact_table__PragmaVars_10,
  MR_Integer ll_backend__fact_table__ProcID_11,
  MR_Word ll_backend__fact_table__ArgTypes_12,
  MR_Word ll_backend__fact_table__ModuleInfo_13,
  MR_Integer ll_backend__fact_table__FactTableSize_14,
  MR_String * ll_backend__fact_table__ProcCode_15,
  MR_String * ll_backend__fact_table__ExtraCode_16)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__ExtraCodeLabel_17;
    MR_String ll_backend__fact_table__ArgDeclCode_19;
    MR_String ll_backend__fact_table__InputCode_20;
    MR_String ll_backend__fact_table__OutputCode_21;
    MR_String ll_backend__fact_table__SaveRegsCode_22;
    MR_String ll_backend__fact_table__GetRegsCode_23;
    MR_Integer ll_backend__fact_table__NumFrameVars_24;
    MR_String ll_backend__fact_table__DeclCode_25;
    MR_Integer ll_backend__fact_table__ProcInt_26;
    MR_String ll_backend__fact_table__LabelName_27;
    MR_String ll_backend__fact_table__HashCode_28;
    MR_String ll_backend__fact_table__FactLookupCode_29;
    MR_String ll_backend__fact_table__FactTestCode_30;
    MR_String ll_backend__fact_table__NumFactsVar_31;
    MR_Integer ll_backend__fact_table__Arity_32;
    MR_Word ll_backend__fact_table__Var_42;
    MR_Word ll_backend__fact_table__Var_44;
    MR_String ll_backend__fact_table__Var_114;
    MR_Word ll_backend__fact_table__Var_120;
    MR_String ll_backend__fact_table__Var_122;
    MR_String ll_backend__fact_table__Var_124;
    MR_String ll_backend__fact_table__Var_126;
    MR_String ll_backend__fact_table__Var_127;
    MR_String ll_backend__fact_table__Var_129;
    MR_String ll_backend__fact_table__Var_130;
    MR_String ll_backend__fact_table__Var_132;
    MR_String ll_backend__fact_table__Var_133;
    MR_String ll_backend__fact_table__Var_135;
    MR_String ll_backend__fact_table__Var_136;
    MR_String ll_backend__fact_table__Var_138;
    MR_String ll_backend__fact_table__Var_139;
    MR_String ll_backend__fact_table__Var_141;
    MR_String ll_backend__fact_table__Var_142;
    MR_String ll_backend__fact_table__Var_144;
    MR_String ll_backend__fact_table__Var_145;
    MR_String ll_backend__fact_table__Var_147;
    MR_String ll_backend__fact_table__Var_148;
    MR_String ll_backend__fact_table__Var_150;
    MR_String ll_backend__fact_table__Var_151;
    MR_String ll_backend__fact_table__Var_153;
    MR_String ll_backend__fact_table__Var_154;
    MR_String ll_backend__fact_table__Var_156;
    MR_String ll_backend__fact_table__Var_157;
    MR_String ll_backend__fact_table__Var_159;
    MR_String ll_backend__fact_table__Var_160;
    MR_String ll_backend__fact_table__Var_162;
    MR_String ll_backend__fact_table__Var_163;
    MR_String ll_backend__fact_table__Var_165;
    MR_String ll_backend__fact_table__Var_166;
    MR_String ll_backend__fact_table__Var_168;
    MR_String ll_backend__fact_table__Var_169;
    MR_String ll_backend__fact_table__Var_171;
    MR_String ll_backend__fact_table__Var_172;
    MR_String ll_backend__fact_table__Var_174;
    MR_String ll_backend__fact_table__Var_175;
    MR_String ll_backend__fact_table__Var_177;
    MR_String ll_backend__fact_table__Var_178;
    MR_String ll_backend__fact_table__Var_180;
    MR_String ll_backend__fact_table__Var_181;
    MR_String ll_backend__fact_table__Var_183;
    MR_String ll_backend__fact_table__Var_184;
    MR_String ll_backend__fact_table__Var_186;
    MR_String ll_backend__fact_table__Var_187;
    MR_String ll_backend__fact_table__Var_189;
    MR_String ll_backend__fact_table__Var_190;
    MR_String ll_backend__fact_table__Var_192;
    MR_String ll_backend__fact_table__Var_193;
    MR_String ll_backend__fact_table__Var_200;
    MR_String ll_backend__fact_table__Var_202;
    MR_String ll_backend__fact_table__Var_203;
    MR_String ll_backend__fact_table__Var_210;
    MR_String ll_backend__fact_table__Var_212;
    MR_String ll_backend__fact_table__Var_213;
    MR_String ll_backend__fact_table__Var_215;
    MR_String ll_backend__fact_table__Var_216;
    MR_String ll_backend__fact_table__Var_218;
    MR_String ll_backend__fact_table__Var_219;
    MR_String ll_backend__fact_table__Var_221;
    MR_String ll_backend__fact_table__Var_222;
    MR_String ll_backend__fact_table__Var_224;
    MR_String ll_backend__fact_table__Var_225;
    MR_String ll_backend__fact_table__Var_227;
    MR_String ll_backend__fact_table__Var_228;
    MR_String ll_backend__fact_table__Var_230;
    MR_String ll_backend__fact_table__Var_231;

    {
      ll_backend__fact_table__generate_nondet_proc_code_5_p_0(ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__PredName_9, ll_backend__fact_table__ProcID_11, &ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__ProcCode_15);
    }
    {
      ll_backend__fact_table__generate_argument_vars_code_9_p_0(ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgTypes_12, ll_backend__fact_table__ModuleInfo_13, &ll_backend__fact_table__ArgDeclCode_19, &ll_backend__fact_table__InputCode_20, &ll_backend__fact_table__OutputCode_21, &ll_backend__fact_table__SaveRegsCode_22, &ll_backend__fact_table__GetRegsCode_23, &ll_backend__fact_table__NumFrameVars_24);
    }
    {
      ll_backend__fact_table__generate_decl_code_3_p_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__ProcID_11, &ll_backend__fact_table__DeclCode_25);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_11, &ll_backend__fact_table__ProcInt_26);
    }
    ll_backend__fact_table__Var_120 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_120, ll_backend__fact_table__ProcInt_26, &ll_backend__fact_table__Var_114);
    }
    {
      ll_backend__fact_table__Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__fact_table__Var_114);
    }
    {
      ll_backend__fact_table__LabelName_27 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__Var_122);
    }
    {
      ll_backend__fact_table__generate_hash_code_9_p_0(ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgTypes_12, ll_backend__fact_table__ModuleInfo_13, ll_backend__fact_table__LabelName_27, (MR_Integer) 0, ll_backend__fact_table__PredName_9, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_14, &ll_backend__fact_table__HashCode_28);
    }
    {
      ll_backend__fact_table__generate_fact_lookup_code_7_p_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgTypes_12, ll_backend__fact_table__ModuleInfo_13, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_14, &ll_backend__fact_table__FactLookupCode_29);
    }
    {
      ll_backend__fact_table__generate_fact_test_code_6_p_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgTypes_12, ll_backend__fact_table__ModuleInfo_13, ll_backend__fact_table__FactTableSize_14, &ll_backend__fact_table__FactTestCode_30);
    }
    {
      ll_backend__fact_table__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_44, 0) = ((MR_Box) (ll_backend__fact_table__PredName_9));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[68])));
    }
    {
      ll_backend__fact_table__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_42, 0) = ((MR_Box) ((MR_String) "mercury__"));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_42, 1) = ((MR_Box) (ll_backend__fact_table__Var_44));
    }
    {
      mercury__string__append_list_2_p_0(ll_backend__fact_table__Var_42, &ll_backend__fact_table__NumFactsVar_31);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0, ll_backend__fact_table__PragmaVars_10, &ll_backend__fact_table__Arity_32);
    }
    {
      ll_backend__fact_table__Var_124 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
    }
    {
      ll_backend__fact_table__Var_126 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", ll_backend__fact_table__Var_124);
    }
    {
      ll_backend__fact_table__Var_127 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_126);
    }
    {
      ll_backend__fact_table__Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", ll_backend__fact_table__Var_127);
    }
    {
      ll_backend__fact_table__Var_130 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_129);
    }
    {
      ll_backend__fact_table__Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", ll_backend__fact_table__Var_130);
    }
    {
      ll_backend__fact_table__Var_133 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_132);
    }
    {
      ll_backend__fact_table__Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", ll_backend__fact_table__Var_133);
    }
    {
      ll_backend__fact_table__Var_136 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_135);
    }
    {
      ll_backend__fact_table__Var_138 = mercury__string__f_43_43_2_f_0((MR_String) "\n    }\n    MR_framevar(1)++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc ", ll_backend__fact_table__Var_136);
    }
    {
      ll_backend__fact_table__Var_139 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__OutputCode_21, ll_backend__fact_table__Var_138);
    }
    {
      ll_backend__fact_table__Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", ll_backend__fact_table__Var_139);
    }
    {
      ll_backend__fact_table__Var_142 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FactLookupCode_29, ll_backend__fact_table__Var_141);
    }
    {
      ll_backend__fact_table__Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* lookup fact table */\n", ll_backend__fact_table__Var_142);
    }
    {
      ll_backend__fact_table__Var_145 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FactTestCode_30, ll_backend__fact_table__Var_144);
    }
    {
      ll_backend__fact_table__Var_147 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* test fact table entry */\n", ll_backend__fact_table__Var_145);
    }
    {
      ll_backend__fact_table__Var_148 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__InputCode_20, ll_backend__fact_table__Var_147);
    }
    {
      ll_backend__fact_table__Var_150 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* copy registers to input arg vars */\n", ll_backend__fact_table__Var_148);
    }
    {
      ll_backend__fact_table__Var_151 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__GetRegsCode_23, ll_backend__fact_table__Var_150);
    }
    {
      ll_backend__fact_table__Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "\n        int ind = MR_framevar(1);\n        /* copy framevars to registers */\n", ll_backend__fact_table__Var_151);
    }
    {
      ll_backend__fact_table__Var_154 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ArgDeclCode_19, ll_backend__fact_table__Var_153);
    }
    {
      ll_backend__fact_table__Var_156 = mercury__string__f_43_43_2_f_0((MR_String) ")\n        MR_fail();\n    {\n        /* create argument vars */\n", ll_backend__fact_table__Var_154);
    }
    {
      ll_backend__fact_table__Var_157 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__NumFactsVar_31, ll_backend__fact_table__Var_156);
    }
    {
      ll_backend__fact_table__Var_159 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    if (MR_framevar(1) >= ", ll_backend__fact_table__Var_157);
    }
    {
      ll_backend__fact_table__Var_160 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_159);
    }
    {
      ll_backend__fact_table__Var_162 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_define_label(", ll_backend__fact_table__Var_160);
    }
    {
      ll_backend__fact_table__Var_163 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_27, ll_backend__fact_table__Var_162);
    }
    {
      ll_backend__fact_table__Var_165 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_framevar(1) = ind + 1;\n        MR_succeed();\n    failure_code_", ll_backend__fact_table__Var_163);
    }
    {
      ll_backend__fact_table__Var_166 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__OutputCode_21, ll_backend__fact_table__Var_165);
    }
    {
      ll_backend__fact_table__Var_168 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", ll_backend__fact_table__Var_166);
    }
    {
      ll_backend__fact_table__Var_169 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FactLookupCode_29, ll_backend__fact_table__Var_168);
    }
    {
      ll_backend__fact_table__Var_171 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        /* lookup fact table */\n", ll_backend__fact_table__Var_169);
    }
    {
      ll_backend__fact_table__Var_172 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_27, ll_backend__fact_table__Var_171);
    }
    {
      ll_backend__fact_table__Var_174 = mercury__string__f_43_43_2_f_0((MR_String) "\n    success_code_", ll_backend__fact_table__Var_172);
    }
    {
      ll_backend__fact_table__Var_175 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashCode_28, ll_backend__fact_table__Var_174);
    }
    {
      ll_backend__fact_table__Var_177 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* lookup hash table */\n", ll_backend__fact_table__Var_175);
    }
    {
      ll_backend__fact_table__Var_178 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__SaveRegsCode_22, ll_backend__fact_table__Var_177);
    }
    {
      ll_backend__fact_table__Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* copy registers to framevars */\n", ll_backend__fact_table__Var_178);
    }
    {
      ll_backend__fact_table__Var_181 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__InputCode_20, ll_backend__fact_table__Var_180);
    }
    {
      ll_backend__fact_table__Var_183 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* copy registers to input arg vars */\n", ll_backend__fact_table__Var_181);
    }
    {
      ll_backend__fact_table__Var_184 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__DeclCode_25, ll_backend__fact_table__Var_183);
    }
    {
      ll_backend__fact_table__Var_186 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* declare local variables */\n", ll_backend__fact_table__Var_184);
    }
    {
      ll_backend__fact_table__Var_187 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ArgDeclCode_19, ll_backend__fact_table__Var_186);
    }
    {
      ll_backend__fact_table__Var_189 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    {\n        /* create argument vars */\n", ll_backend__fact_table__Var_187);
    }
    {
      ll_backend__fact_table__Var_190 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_189);
    }
    {
      ll_backend__fact_table__Var_192 = mercury__string__f_43_43_2_f_0((MR_String) ", MR_LABEL(", ll_backend__fact_table__Var_190);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_120, ll_backend__fact_table__NumFrameVars_24, &ll_backend__fact_table__Var_193);
    }
    {
      ll_backend__fact_table__Var_200 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_193, ll_backend__fact_table__Var_192);
    }
    {
      ll_backend__fact_table__Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", ll_backend__fact_table__Var_200);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_120, ll_backend__fact_table__Arity_32, &ll_backend__fact_table__Var_203);
    }
    {
      ll_backend__fact_table__Var_210 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_203, ll_backend__fact_table__Var_202);
    }
    {
      ll_backend__fact_table__Var_212 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__fact_table__Var_210);
    }
    {
      ll_backend__fact_table__Var_213 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__Var_212);
    }
    {
      ll_backend__fact_table__Var_215 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", ll_backend__fact_table__Var_213);
    }
    {
      ll_backend__fact_table__Var_216 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_215);
    }
    {
      ll_backend__fact_table__Var_218 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", ll_backend__fact_table__Var_216);
    }
    {
      ll_backend__fact_table__Var_219 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_218);
    }
    {
      ll_backend__fact_table__Var_221 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", ll_backend__fact_table__Var_219);
    }
    {
      ll_backend__fact_table__Var_222 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_221);
    }
    {
      ll_backend__fact_table__Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", ll_backend__fact_table__Var_222);
    }
    {
      ll_backend__fact_table__Var_225 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_224);
    }
    {
      ll_backend__fact_table__Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", ll_backend__fact_table__Var_225);
    }
    {
      ll_backend__fact_table__Var_228 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_227);
    }
    {
      ll_backend__fact_table__Var_230 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", ll_backend__fact_table__Var_228);
    }
    {
      ll_backend__fact_table__Var_231 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_230);
    }
    {
      *ll_backend__fact_table__ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", ll_backend__fact_table__Var_231);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_fact_test_code_6_p_0(
  MR_String ll_backend__fact_table__PredName_7,
  MR_Word ll_backend__fact_table__PragmaVars_8,
  MR_Word ll_backend__fact_table__ArgTypes_9,
  MR_Word ll_backend__fact_table__ModuleInfo_10,
  MR_Integer ll_backend__fact_table__FactTableSize_11,
  MR_String * ll_backend__fact_table__FactTestCode_12)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__FactTableName_13;
    MR_String ll_backend__fact_table__CondCode_14;
    MR_String ll_backend__fact_table__Var_16;
    MR_String ll_backend__fact_table__Var_21;

    {
      ll_backend__fact_table__Var_16 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_7, (MR_String) "_fact_table");
    }
    {
      ll_backend__fact_table__FactTableName_13 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ll_backend__fact_table__Var_16);
    }
    {
      ll_backend__fact_table__generate_test_condition_code_8_p_0(ll_backend__fact_table__FactTableName_13, ll_backend__fact_table__PragmaVars_8, ll_backend__fact_table__ArgTypes_9, ll_backend__fact_table__ModuleInfo_10, (MR_Integer) 1, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_11, &ll_backend__fact_table__CondCode_14);
    }
    {
      ll_backend__fact_table__Var_21 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__CondCode_14, (MR_String) "\t\t) MR_fail();\n");
    }
    {
      *ll_backend__fact_table__FactTestCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif(", ll_backend__fact_table__Var_21);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_decl_code_3_p_0(
  MR_String ll_backend__fact_table__Name_4,
  MR_Integer ll_backend__fact_table__ProcID_5,
  MR_String * ll_backend__fact_table__DeclCode_6)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__ProcInt_8;
    MR_String ll_backend__fact_table__Var_15;
    MR_String ll_backend__fact_table__Var_22;
    MR_String ll_backend__fact_table__Var_24;
    MR_String ll_backend__fact_table__Var_25;

    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_5, &ll_backend__fact_table__ProcInt_8);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__ProcInt_8, &ll_backend__fact_table__Var_15);
    }
    {
      ll_backend__fact_table__Var_22 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_15, (MR_String) "_0;\n\n    ");
    }
    {
      ll_backend__fact_table__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", ll_backend__fact_table__Var_22);
    }
    {
      ll_backend__fact_table__Var_25 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_4, ll_backend__fact_table__Var_24);
    }
    {
      *ll_backend__fact_table__DeclCode_6 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            /*\n            ** Initialise current_table to the top level hash table\n            ** for this ProcID.\n            */\n            curre" "nt_table =\n                &mercury__", ll_backend__fact_table__Var_25);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_semidet_in_out_code_7_p_0(
  MR_String ll_backend__fact_table__PredName_8,
  MR_Word ll_backend__fact_table__PragmaVars_9,
  MR_Integer ll_backend__fact_table__ProcID_10,
  MR_Word ll_backend__fact_table__ArgTypes_11,
  MR_Word ll_backend__fact_table__ModuleInfo_12,
  MR_Integer ll_backend__fact_table__FactTableSize_13,
  MR_String * ll_backend__fact_table__ProcCode_14)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__DeclCode_15;
    MR_Integer ll_backend__fact_table__ProcInt_16;
    MR_String ll_backend__fact_table__LabelName_17;
    MR_String ll_backend__fact_table__HashCode_18;
    MR_String ll_backend__fact_table__SuccessCode_20;
    MR_String ll_backend__fact_table__FactLookupCode_21;
    MR_String ll_backend__fact_table__FailCode_23;
    MR_String ll_backend__fact_table__Var_44;
    MR_String ll_backend__fact_table__Var_45;
    MR_String ll_backend__fact_table__Var_46;
    MR_String ll_backend__fact_table__Var_47;
    MR_String ll_backend__fact_table__Var_48;
    MR_String ll_backend__fact_table__Var_50;
    MR_String ll_backend__fact_table__Var_58;
    MR_String ll_backend__fact_table__Var_60;
    MR_String ll_backend__fact_table__Var_63;
    MR_String ll_backend__fact_table__Var_65;
    MR_String ll_backend__fact_table__Var_66;
    MR_String ll_backend__fact_table__Var_68;
    MR_String ll_backend__fact_table__Var_69;
    MR_Integer ll_backend__fact_table__ProcInt_75;
    MR_String ll_backend__fact_table__Var_82;
    MR_Word ll_backend__fact_table__Var_88;
    MR_String ll_backend__fact_table__Var_89;
    MR_String ll_backend__fact_table__Var_91;
    MR_String ll_backend__fact_table__Var_92;

    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_10, &ll_backend__fact_table__ProcInt_75);
    }
    ll_backend__fact_table__Var_88 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_88, ll_backend__fact_table__ProcInt_75, &ll_backend__fact_table__Var_82);
    }
    {
      ll_backend__fact_table__Var_89 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_82, (MR_String) "_0;\n\n    ");
    }
    {
      ll_backend__fact_table__Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", ll_backend__fact_table__Var_89);
    }
    {
      ll_backend__fact_table__Var_92 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_8, ll_backend__fact_table__Var_91);
    }
    {
      ll_backend__fact_table__DeclCode_15 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            /*\n            ** Initialise current_table to the top level hash table\n            ** for this ProcID.\n            */\n            curre" "nt_table =\n                &mercury__", ll_backend__fact_table__Var_92);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_10, &ll_backend__fact_table__ProcInt_16);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_88, ll_backend__fact_table__ProcInt_16, &ll_backend__fact_table__Var_50);
    }
    {
      ll_backend__fact_table__Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__fact_table__Var_50);
    }
    {
      ll_backend__fact_table__LabelName_17 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_8, ll_backend__fact_table__Var_58);
    }
    {
      ll_backend__fact_table__generate_hash_code_9_p_0(ll_backend__fact_table__PragmaVars_9, ll_backend__fact_table__ArgTypes_11, ll_backend__fact_table__ModuleInfo_12, ll_backend__fact_table__LabelName_17, (MR_Integer) 0, ll_backend__fact_table__PredName_8, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_13, &ll_backend__fact_table__HashCode_18);
    }
    {
      ll_backend__fact_table__Var_60 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_17, (MR_String) ":\n            SUCCESS_INDICATOR = MR_TRUE;\n    ");
    }
    {
      ll_backend__fact_table__SuccessCode_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n        success_code_", ll_backend__fact_table__Var_60);
    }
    {
      ll_backend__fact_table__generate_fact_lookup_code_7_p_0(ll_backend__fact_table__PredName_8, ll_backend__fact_table__PragmaVars_9, ll_backend__fact_table__ArgTypes_11, ll_backend__fact_table__ModuleInfo_12, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_13, &ll_backend__fact_table__FactLookupCode_21);
    }
    {
      ll_backend__fact_table__Var_63 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_17, (MR_String) ":\n            ;\n    ");
    }
    {
      ll_backend__fact_table__Var_65 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_", ll_backend__fact_table__Var_63);
    }
    {
      ll_backend__fact_table__Var_66 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_17, ll_backend__fact_table__Var_65);
    }
    {
      ll_backend__fact_table__Var_68 = mercury__string__f_43_43_2_f_0((MR_String) ";\n        failure_code_", ll_backend__fact_table__Var_66);
    }
    {
      ll_backend__fact_table__Var_69 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_17, ll_backend__fact_table__Var_68);
    }
    {
      ll_backend__fact_table__FailCode_23 = mercury__string__f_43_43_2_f_0((MR_String) "\n            goto skip_", ll_backend__fact_table__Var_69);
    }
    {
      ll_backend__fact_table__Var_48 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FailCode_23, (MR_String) "\t}\n");
    }
    {
      ll_backend__fact_table__Var_47 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FactLookupCode_21, ll_backend__fact_table__Var_48);
    }
    {
      ll_backend__fact_table__Var_46 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__SuccessCode_20, ll_backend__fact_table__Var_47);
    }
    {
      ll_backend__fact_table__Var_45 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashCode_18, ll_backend__fact_table__Var_46);
    }
    {
      ll_backend__fact_table__Var_44 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__DeclCode_15, ll_backend__fact_table__Var_45);
    }
    {
      *ll_backend__fact_table__ProcCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t{\n", ll_backend__fact_table__Var_44);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_all_in_code_7_p_0(
  MR_String ll_backend__fact_table__PredName_8,
  MR_Word ll_backend__fact_table__PragmaVars_9,
  MR_Integer ll_backend__fact_table__ProcID_10,
  MR_Word ll_backend__fact_table__ArgTypes_11,
  MR_Word ll_backend__fact_table__ModuleInfo_12,
  MR_Integer ll_backend__fact_table__FactTableSize_13,
  MR_String * ll_backend__fact_table__ProcCode_14)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__DeclCode_15;
    MR_Integer ll_backend__fact_table__ProcInt_16;
    MR_String ll_backend__fact_table__LabelName_17;
    MR_String ll_backend__fact_table__HashCode_18;
    MR_String ll_backend__fact_table__SuccessCode_20;
    MR_String ll_backend__fact_table__Var_39;
    MR_String ll_backend__fact_table__Var_40;
    MR_String ll_backend__fact_table__Var_41;
    MR_String ll_backend__fact_table__Var_43;
    MR_String ll_backend__fact_table__Var_51;
    MR_String ll_backend__fact_table__Var_53;
    MR_String ll_backend__fact_table__Var_55;
    MR_String ll_backend__fact_table__Var_56;
    MR_String ll_backend__fact_table__Var_58;
    MR_String ll_backend__fact_table__Var_59;
    MR_String ll_backend__fact_table__Var_61;
    MR_String ll_backend__fact_table__Var_62;
    MR_Integer ll_backend__fact_table__ProcInt_68;
    MR_String ll_backend__fact_table__Var_75;
    MR_Word ll_backend__fact_table__Var_81;
    MR_String ll_backend__fact_table__Var_82;
    MR_String ll_backend__fact_table__Var_84;
    MR_String ll_backend__fact_table__Var_85;

    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_10, &ll_backend__fact_table__ProcInt_68);
    }
    ll_backend__fact_table__Var_81 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_81, ll_backend__fact_table__ProcInt_68, &ll_backend__fact_table__Var_75);
    }
    {
      ll_backend__fact_table__Var_82 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_75, (MR_String) "_0;\n\n    ");
    }
    {
      ll_backend__fact_table__Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", ll_backend__fact_table__Var_82);
    }
    {
      ll_backend__fact_table__Var_85 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_8, ll_backend__fact_table__Var_84);
    }
    {
      ll_backend__fact_table__DeclCode_15 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            /*\n            ** Initialise current_table to the top level hash table\n            ** for this ProcID.\n            */\n            curre" "nt_table =\n                &mercury__", ll_backend__fact_table__Var_85);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_10, &ll_backend__fact_table__ProcInt_16);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_81, ll_backend__fact_table__ProcInt_16, &ll_backend__fact_table__Var_43);
    }
    {
      ll_backend__fact_table__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__fact_table__Var_43);
    }
    {
      ll_backend__fact_table__LabelName_17 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_8, ll_backend__fact_table__Var_51);
    }
    {
      ll_backend__fact_table__generate_hash_code_9_p_0(ll_backend__fact_table__PragmaVars_9, ll_backend__fact_table__ArgTypes_11, ll_backend__fact_table__ModuleInfo_12, ll_backend__fact_table__LabelName_17, (MR_Integer) 0, ll_backend__fact_table__PredName_8, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_13, &ll_backend__fact_table__HashCode_18);
    }
    {
      ll_backend__fact_table__Var_53 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_17, (MR_String) ":\n            ;\n    ");
    }
    {
      ll_backend__fact_table__Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_", ll_backend__fact_table__Var_53);
    }
    {
      ll_backend__fact_table__Var_56 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_17, ll_backend__fact_table__Var_55);
    }
    {
      ll_backend__fact_table__Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ";\n        failure_code_", ll_backend__fact_table__Var_56);
    }
    {
      ll_backend__fact_table__Var_59 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_17, ll_backend__fact_table__Var_58);
    }
    {
      ll_backend__fact_table__Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_TRUE;\n            goto skip_", ll_backend__fact_table__Var_59);
    }
    {
      ll_backend__fact_table__Var_62 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_17, ll_backend__fact_table__Var_61);
    }
    {
      ll_backend__fact_table__SuccessCode_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n        success_code_", ll_backend__fact_table__Var_62);
    }
    {
      ll_backend__fact_table__Var_41 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__SuccessCode_20, (MR_String) "\t}\n");
    }
    {
      ll_backend__fact_table__Var_40 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashCode_18, ll_backend__fact_table__Var_41);
    }
    {
      ll_backend__fact_table__Var_39 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__DeclCode_15, ll_backend__fact_table__Var_40);
    }
    {
      *ll_backend__fact_table__ProcCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t{\n", ll_backend__fact_table__Var_39);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_code_9_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__ModuleInfo_3,
  MR_String ll_backend__fact_table__LabelName_4,
  MR_Integer ll_backend__fact_table__LabelNum_5,
  MR_String ll_backend__fact_table__PredName_6,
  MR_Integer ll_backend__fact_table__ArgNum_7,
  MR_Integer ll_backend__fact_table__FactTableSize_8,
  MR_String * ll_backend__fact_table__HeadVar__9_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *ll_backend__fact_table__HeadVar__9_9 = (MR_String) "";
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.generate_hash_code\'/9", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word ll_backend__fact_table__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));

            if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.generate_hash_code\'/9", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_String ll_backend__fact_table__Name_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_68, (MR_Integer) 1)));
                MR_Word ll_backend__fact_table__Mode_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_68, (MR_Integer) 2)));
                MR_Word ll_backend__fact_table__Type_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__Types_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
                MR_Integer ll_backend__fact_table__NextArgNum_54 = (ll_backend__fact_table__ArgNum_7 + (MR_Integer) 1);
                MR_Word ll_backend__fact_table__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_68, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_68, (MR_Integer) 3)));

                {
                  ll_backend__fact_table__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ll_backend__fact_table__ModuleInfo_3, ll_backend__fact_table__Mode_42);
                }
                if (ll_backend__fact_table__succeeded)
                  {
                    MR_String ll_backend__fact_table__C_Code0_55;
                    MR_String ll_backend__fact_table__C_Code1_56;
                    MR_Integer ll_backend__fact_table__Var_65;
                    MR_Word ll_backend__fact_table__Var_59;

                    ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_45)) == (MR_mktag((MR_Integer) 2)));
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_45, (MR_Integer) 0)));
                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_59 == (MR_Integer) 0);
                      }
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__generate_hash_int_code_10_p_0(ll_backend__fact_table__Name_41, ll_backend__fact_table__LabelName_4, ll_backend__fact_table__LabelNum_5, ll_backend__fact_table__PredName_6, ll_backend__fact_table__Var_67, ll_backend__fact_table__Types_46, ll_backend__fact_table__ModuleInfo_3, ll_backend__fact_table__NextArgNum_54, ll_backend__fact_table__FactTableSize_8, &ll_backend__fact_table__C_Code0_55);
                      }
                    else
                      {
                        MR_Word ll_backend__fact_table__Var_60;

                        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_45)) == (MR_mktag((MR_Integer) 2)));
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_45, (MR_Integer) 0)));
                            ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_60 == (MR_Integer) 2);
                          }
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__generate_hash_float_code_10_p_0(ll_backend__fact_table__Name_41, ll_backend__fact_table__LabelName_4, ll_backend__fact_table__LabelNum_5, ll_backend__fact_table__PredName_6, ll_backend__fact_table__Var_67, ll_backend__fact_table__Types_46, ll_backend__fact_table__ModuleInfo_3, ll_backend__fact_table__NextArgNum_54, ll_backend__fact_table__FactTableSize_8, &ll_backend__fact_table__C_Code0_55);
                          }
                        else
                          {
                            MR_Word ll_backend__fact_table__Var_61;

                            ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_45)) == (MR_mktag((MR_Integer) 2)));
                            if (ll_backend__fact_table__succeeded)
                              {
                                ll_backend__fact_table__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_45, (MR_Integer) 0)));
                                ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_61 == (MR_Integer) 3);
                              }
                            if (ll_backend__fact_table__succeeded)
                              {
                                ll_backend__fact_table__generate_hash_string_code_10_p_0(ll_backend__fact_table__Name_41, ll_backend__fact_table__LabelName_4, ll_backend__fact_table__LabelNum_5, ll_backend__fact_table__PredName_6, ll_backend__fact_table__Var_67, ll_backend__fact_table__Types_46, ll_backend__fact_table__ModuleInfo_3, ll_backend__fact_table__NextArgNum_54, ll_backend__fact_table__FactTableSize_8, &ll_backend__fact_table__C_Code0_55);
                              }
                            else
                              {
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.generate_hash_code\'/9", (MR_String) "unsupported type");
                                  return;
                                }
                              }
                          }
                      }
                    ll_backend__fact_table__Var_65 = (ll_backend__fact_table__LabelNum_5 + (MR_Integer) 1);
                    {
                      ll_backend__fact_table__generate_hash_code_9_p_0(ll_backend__fact_table__Var_67, ll_backend__fact_table__Types_46, ll_backend__fact_table__ModuleInfo_3, ll_backend__fact_table__LabelName_4, ll_backend__fact_table__Var_65, ll_backend__fact_table__PredName_6, ll_backend__fact_table__NextArgNum_54, ll_backend__fact_table__FactTableSize_8, &ll_backend__fact_table__C_Code1_56);
                    }
                    {
                      mercury__string__append_3_p_2(ll_backend__fact_table__C_Code0_55, ll_backend__fact_table__C_Code1_56, ll_backend__fact_table__HeadVar__9_9);
                    }
                  }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__Var_67;
                      MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Types_46;
                      MR_Integer ll_backend__fact_table__next_value_of_ArgNum_7 = ll_backend__fact_table__NextArgNum_54;

                      ll_backend__fact_table__ArgNum_7 = ll_backend__fact_table__next_value_of_ArgNum_7;
                      ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
                      ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_string_code_10_p_0(
  MR_String ll_backend__fact_table__Name_11,
  MR_String ll_backend__fact_table__LabelName_12,
  MR_Integer ll_backend__fact_table__LabelNum_13,
  MR_String ll_backend__fact_table__PredName_14,
  MR_Word ll_backend__fact_table__PragmaVars_15,
  MR_Word ll_backend__fact_table__Types_16,
  MR_Word ll_backend__fact_table__ModuleInfo_17,
  MR_Integer ll_backend__fact_table__ArgNum_18,
  MR_Integer ll_backend__fact_table__FactTableSize_19,
  MR_String * ll_backend__fact_table__C_Code_20)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__HashLookupCode_21;
    MR_String ll_backend__fact_table__Var_34;
    MR_String ll_backend__fact_table__Var_36;
    MR_String ll_backend__fact_table__Var_37;
    MR_String ll_backend__fact_table__Var_39;
    MR_String ll_backend__fact_table__Var_40;

    {
      ll_backend__fact_table__generate_hash_lookup_code_13_p_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__LabelName_12, ll_backend__fact_table__LabelNum_13, (MR_Integer) 1, (MR_Char) 115, (MR_Integer) 1, ll_backend__fact_table__PredName_14, ll_backend__fact_table__PragmaVars_15, ll_backend__fact_table__Types_16, ll_backend__fact_table__ModuleInfo_17, ll_backend__fact_table__ArgNum_18, ll_backend__fact_table__FactTableSize_19, &ll_backend__fact_table__HashLookupCode_21);
    }
    {
      ll_backend__fact_table__Var_34 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashLookupCode_21, (MR_String) "\n\n    ");
    }
    {
      ll_backend__fact_table__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n        /* lookup the hash table */\n        ", ll_backend__fact_table__Var_34);
    }
    {
      ll_backend__fact_table__Var_37 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__Var_36);
    }
    {
      ll_backend__fact_table__Var_39 = mercury__string__f_43_43_2_f_0((MR_String) " ; *p != \'\\0\' ; p++) {\n                hashval = (*p + 31 * hashval) % hashsize;\n            }\n        }\n\n        current_key = (MR_Word) ", ll_backend__fact_table__Var_37);
    }
    {
      ll_backend__fact_table__Var_40 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__Var_39);
    }
    {
      *ll_backend__fact_table__C_Code_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        hashsize = ((struct MR_fact_table_hash_table_s *) current_table)->size;\n\n        /* calculate hash value for a string */\n        {\n            char *p" ";\n            hashval = 0;\n            for (p = ", ll_backend__fact_table__Var_40);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_float_code_10_p_0(
  MR_String ll_backend__fact_table__Name_11,
  MR_String ll_backend__fact_table__LabelName_12,
  MR_Integer ll_backend__fact_table__LabelNum_13,
  MR_String ll_backend__fact_table__PredName_14,
  MR_Word ll_backend__fact_table__PragmaVars_15,
  MR_Word ll_backend__fact_table__Types_16,
  MR_Word ll_backend__fact_table__ModuleInfo_17,
  MR_Integer ll_backend__fact_table__ArgNum_18,
  MR_Integer ll_backend__fact_table__FactTableSize_19,
  MR_String * ll_backend__fact_table__C_Code_20)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__HashLookupCode_21;
    MR_String ll_backend__fact_table__Var_34;
    MR_String ll_backend__fact_table__Var_36;
    MR_String ll_backend__fact_table__Var_37;
    MR_String ll_backend__fact_table__Var_39;
    MR_String ll_backend__fact_table__Var_40;

    {
      ll_backend__fact_table__generate_hash_lookup_code_13_p_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__LabelName_12, ll_backend__fact_table__LabelNum_13, (MR_Integer) 0, (MR_Char) 102, (MR_Integer) 1, ll_backend__fact_table__PredName_14, ll_backend__fact_table__PragmaVars_15, ll_backend__fact_table__Types_16, ll_backend__fact_table__ModuleInfo_17, ll_backend__fact_table__ArgNum_18, ll_backend__fact_table__FactTableSize_19, &ll_backend__fact_table__HashLookupCode_21);
    }
    {
      ll_backend__fact_table__Var_34 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashLookupCode_21, (MR_String) "\n\n    ");
    }
    {
      ll_backend__fact_table__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ");\n\n        /* lookup the hash table */\n        ", ll_backend__fact_table__Var_34);
    }
    {
      ll_backend__fact_table__Var_37 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__Var_36);
    }
    {
      ll_backend__fact_table__Var_39 = mercury__string__f_43_43_2_f_0((MR_String) ");\n        hashval = (hashval >= 0 \? hashval : -hashval) % hashsize;\n\n        current_key = MR_float_to_word(", ll_backend__fact_table__Var_37);
    }
    {
      ll_backend__fact_table__Var_40 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__Var_39);
    }
    {
      *ll_backend__fact_table__C_Code_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        /* calculate hash value for a float */\n\n        hashsize = ((struct MR_fact_table_hash_table_f *)current_table)\n            ->size;\n\n        hashval =" " MR_hash_float(", ll_backend__fact_table__Var_40);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_int_code_10_p_0(
  MR_String ll_backend__fact_table__Name_11,
  MR_String ll_backend__fact_table__LabelName_12,
  MR_Integer ll_backend__fact_table__LabelNum_13,
  MR_String ll_backend__fact_table__PredName_14,
  MR_Word ll_backend__fact_table__PragmaVars_15,
  MR_Word ll_backend__fact_table__Types_16,
  MR_Word ll_backend__fact_table__ModuleInfo_17,
  MR_Integer ll_backend__fact_table__ArgNum_18,
  MR_Integer ll_backend__fact_table__FactTableSize_19,
  MR_String * ll_backend__fact_table__C_Code_20)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__HashLookupCode_21;
    MR_String ll_backend__fact_table__Var_38;
    MR_String ll_backend__fact_table__Var_40;
    MR_String ll_backend__fact_table__Var_41;
    MR_String ll_backend__fact_table__Var_43;
    MR_String ll_backend__fact_table__Var_44;
    MR_String ll_backend__fact_table__Var_46;
    MR_String ll_backend__fact_table__Var_47;
    MR_String ll_backend__fact_table__Var_49;
    MR_String ll_backend__fact_table__Var_50;

    {
      ll_backend__fact_table__generate_hash_lookup_code_13_p_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__LabelName_12, ll_backend__fact_table__LabelNum_13, (MR_Integer) 0, (MR_Char) 105, (MR_Integer) 1, ll_backend__fact_table__PredName_14, ll_backend__fact_table__PragmaVars_15, ll_backend__fact_table__Types_16, ll_backend__fact_table__ModuleInfo_17, ll_backend__fact_table__ArgNum_18, ll_backend__fact_table__FactTableSize_19, &ll_backend__fact_table__HashLookupCode_21);
    }
    {
      ll_backend__fact_table__Var_38 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashLookupCode_21, (MR_String) "\n\n    ");
    }
    {
      ll_backend__fact_table__Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n        /* lookup the hash table */\n        ", ll_backend__fact_table__Var_38);
    }
    {
      ll_backend__fact_table__Var_41 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__Var_40);
    }
    {
      ll_backend__fact_table__Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ") % hashsize;\n\n        current_key = ", ll_backend__fact_table__Var_41);
    }
    {
      ll_backend__fact_table__Var_44 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__Var_43);
    }
    {
      ll_backend__fact_table__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " : -", ll_backend__fact_table__Var_44);
    }
    {
      ll_backend__fact_table__Var_47 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__Var_46);
    }
    {
      ll_backend__fact_table__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) " >= 0 \? ", ll_backend__fact_table__Var_47);
    }
    {
      ll_backend__fact_table__Var_50 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_11, ll_backend__fact_table__Var_49);
    }
    {
      *ll_backend__fact_table__C_Code_20 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        /* calculate hash value for an integer */\n\n        hashsize = ((struct MR_fact_table_hash_table_i *)current_table)\n            ->size;\n\n        hashva" "l = (", ll_backend__fact_table__Var_50);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_hash_lookup_code_13_p_0(
  MR_String ll_backend__fact_table__VarName_14,
  MR_String ll_backend__fact_table__LabelName_15,
  MR_Integer ll_backend__fact_table__LabelNum_16,
  MR_Word ll_backend__fact_table__ComparisonKind_17,
  MR_Char ll_backend__fact_table__KeyType_18,
  MR_Word ll_backend__fact_table__CheckKeys_19,
  MR_String ll_backend__fact_table__PredName_20,
  MR_Word ll_backend__fact_table__PragmaVars_21,
  MR_Word ll_backend__fact_table__Types_22,
  MR_Word ll_backend__fact_table__ModuleInfo_23,
  MR_Integer ll_backend__fact_table__ArgNum_24,
  MR_Integer ll_backend__fact_table__FactTableSize_25,
  MR_String * ll_backend__fact_table__HashLookupCode_26)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__HashTableEntry_27;
    MR_String ll_backend__fact_table__HashTableKey_28;
    MR_String ll_backend__fact_table__CompareString_29;
    MR_String ll_backend__fact_table__TestCode_33;
    MR_String ll_backend__fact_table__Var_93;
    MR_Word ll_backend__fact_table__Var_99 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
    MR_String ll_backend__fact_table__Var_100;
    MR_String ll_backend__fact_table__Var_117;
    MR_String ll_backend__fact_table__Var_119;
    MR_String ll_backend__fact_table__Var_120;
    MR_String ll_backend__fact_table__Var_122;
    MR_String ll_backend__fact_table__Var_123;
    MR_String ll_backend__fact_table__Var_130;
    MR_String ll_backend__fact_table__Var_132;
    MR_String ll_backend__fact_table__Var_133;
    MR_String ll_backend__fact_table__Var_135;
    MR_String ll_backend__fact_table__Var_136;
    MR_String ll_backend__fact_table__Var_138;
    MR_String ll_backend__fact_table__Var_139;
    MR_String ll_backend__fact_table__Var_146;
    MR_String ll_backend__fact_table__Var_148;
    MR_String ll_backend__fact_table__Var_149;
    MR_String ll_backend__fact_table__Var_151;
    MR_String ll_backend__fact_table__Var_152;
    MR_String ll_backend__fact_table__Var_154;
    MR_String ll_backend__fact_table__Var_155;
    MR_String ll_backend__fact_table__Var_157;
    MR_String ll_backend__fact_table__Var_158;
    MR_String ll_backend__fact_table__Var_165;
    MR_String ll_backend__fact_table__Var_167;
    MR_String ll_backend__fact_table__Var_168;
    MR_String ll_backend__fact_table__Var_170;
    MR_String ll_backend__fact_table__Var_171;
    MR_String ll_backend__fact_table__Var_173;
    MR_String ll_backend__fact_table__Var_174;
    MR_String ll_backend__fact_table__Var_176;
    MR_String ll_backend__fact_table__Var_177;

    {
      mercury__string__format__format_char_component_nowidth_3_p_0(ll_backend__fact_table__Var_99, ll_backend__fact_table__KeyType_18, &ll_backend__fact_table__Var_93);
    }
    {
      ll_backend__fact_table__Var_100 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_93, (MR_String) " *) current_table)->table[hashval]");
    }
    {
      ll_backend__fact_table__HashTableEntry_27 = mercury__string__f_43_43_2_f_0((MR_String) "((struct MR_fact_table_hash_table_", ll_backend__fact_table__Var_100);
    }
    {
      mercury__string__append_3_p_2(ll_backend__fact_table__HashTableEntry_27, (MR_String) ".key", &ll_backend__fact_table__HashTableKey_28);
    }
    switch (ll_backend__fact_table__ComparisonKind_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ll_backend__fact_table__Var_109;

          {
            ll_backend__fact_table__Var_109 = mercury__string__f_43_43_2_f_0((MR_String) " == ", ll_backend__fact_table__VarName_14);
          }
          {
            ll_backend__fact_table__CompareString_29 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashTableKey_28, ll_backend__fact_table__Var_109);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__fact_table__Var_103;
          MR_String ll_backend__fact_table__Var_105;
          MR_String ll_backend__fact_table__Var_106;

          {
            ll_backend__fact_table__Var_103 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__VarName_14, (MR_String) ") == 0");
          }
          {
            ll_backend__fact_table__Var_105 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__fact_table__Var_103);
          }
          {
            ll_backend__fact_table__Var_106 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashTableKey_28, ll_backend__fact_table__Var_105);
          }
          {
            ll_backend__fact_table__CompareString_29 = mercury__string__f_43_43_2_f_0((MR_String) "strcmp(", ll_backend__fact_table__Var_106);
          }
        }
        break;
    }
    switch (ll_backend__fact_table__CheckKeys_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__fact_table__TestCode_33 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__fact_table__FactTableName_31;
          MR_String ll_backend__fact_table__CondCode_32;
          MR_String ll_backend__fact_table__Var_55;

          {
            ll_backend__fact_table__Var_55 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_20, (MR_String) "_fact_table");
          }
          {
            ll_backend__fact_table__FactTableName_31 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ll_backend__fact_table__Var_55);
          }
          {
            ll_backend__fact_table__generate_test_condition_code_8_p_0(ll_backend__fact_table__FactTableName_31, ll_backend__fact_table__PragmaVars_21, ll_backend__fact_table__Types_22, ll_backend__fact_table__ModuleInfo_23, ll_backend__fact_table__ArgNum_24, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_25, &ll_backend__fact_table__CondCode_32);
          }
          ll_backend__fact_table__succeeded = (strcmp(ll_backend__fact_table__CondCode_32, (MR_String) "") == 0);
          if (ll_backend__fact_table__succeeded)
            ll_backend__fact_table__TestCode_33 = (MR_String) "";
          else
            {
              MR_String ll_backend__fact_table__Var_111;
              MR_String ll_backend__fact_table__Var_113;
              MR_String ll_backend__fact_table__Var_114;

              {
                ll_backend__fact_table__Var_111 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_15, (MR_String) ";\n");
              }
              {
                ll_backend__fact_table__Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t) goto failure_code_", ll_backend__fact_table__Var_111);
              }
              {
                ll_backend__fact_table__Var_114 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__CondCode_32, ll_backend__fact_table__Var_113);
              }
              {
                ll_backend__fact_table__TestCode_33 = mercury__string__f_43_43_2_f_0((MR_String) "if (", ll_backend__fact_table__Var_114);
              }
            }
        }
        break;
    }
    {
      ll_backend__fact_table__Var_117 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_15, (MR_String) ";\n        }\n\n        current_table = (void *) MR_FACT_TABLE_HASH_POINTER(ind);\n\n    ");
    }
    {
      ll_backend__fact_table__Var_119 = mercury__string__f_43_43_2_f_0((MR_String) ".next;\n            goto success_code_", ll_backend__fact_table__Var_117);
    }
    {
      ll_backend__fact_table__Var_120 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashTableEntry_27, ll_backend__fact_table__Var_119);
    }
    {
      ll_backend__fact_table__Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "\';\n            hashval = ", ll_backend__fact_table__Var_120);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(ll_backend__fact_table__Var_99, ll_backend__fact_table__KeyType_18, &ll_backend__fact_table__Var_123);
    }
    {
      ll_backend__fact_table__Var_130 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_123, ll_backend__fact_table__Var_122);
    }
    {
      ll_backend__fact_table__Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "\n            keytype = \'", ll_backend__fact_table__Var_130);
    }
    {
      ll_backend__fact_table__Var_133 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__TestCode_33, ll_backend__fact_table__Var_132);
    }
    {
      ll_backend__fact_table__Var_135 = mercury__string__f_43_43_2_f_0((MR_String) ") == 1) {\n            ind = MR_FACT_TABLE_HASH_INDEX(ind);\n\n            /* check that any remaining input arguments match */\n            ", ll_backend__fact_table__Var_133);
    }
    {
      ll_backend__fact_table__Var_136 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashTableEntry_27, ll_backend__fact_table__Var_135);
    }
    {
      ll_backend__fact_table__Var_138 = mercury__string__f_43_43_2_f_0((MR_String) ":\n\n        if (MR_FACT_TABLE_HASH_ENTRY_TYPE(", ll_backend__fact_table__Var_136);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_99, ll_backend__fact_table__LabelNum_16, &ll_backend__fact_table__Var_139);
    }
    {
      ll_backend__fact_table__Var_146 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_139, ll_backend__fact_table__Var_138);
    }
    {
      ll_backend__fact_table__Var_148 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__fact_table__Var_146);
    }
    {
      ll_backend__fact_table__Var_149 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_15, ll_backend__fact_table__Var_148);
    }
    {
      ll_backend__fact_table__Var_151 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n    found_", ll_backend__fact_table__Var_149);
    }
    {
      ll_backend__fact_table__Var_152 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_15, ll_backend__fact_table__Var_151);
    }
    {
      ll_backend__fact_table__Var_154 = mercury__string__f_43_43_2_f_0((MR_String) ".next) != -1);\n\n        /* key not found */\n        goto failure_code_", ll_backend__fact_table__Var_152);
    }
    {
      ll_backend__fact_table__Var_155 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashTableEntry_27, ll_backend__fact_table__Var_154);
    }
    {
      ll_backend__fact_table__Var_157 = mercury__string__f_43_43_2_f_0((MR_String) ";\n            }\n        } while ((hashval = ", ll_backend__fact_table__Var_155);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_99, ll_backend__fact_table__LabelNum_16, &ll_backend__fact_table__Var_158);
    }
    {
      ll_backend__fact_table__Var_165 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_158, ll_backend__fact_table__Var_157);
    }
    {
      ll_backend__fact_table__Var_167 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__fact_table__Var_165);
    }
    {
      ll_backend__fact_table__Var_168 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__LabelName_15, ll_backend__fact_table__Var_167);
    }
    {
      ll_backend__fact_table__Var_170 = mercury__string__f_43_43_2_f_0((MR_String) ".index;\n                goto found_", ll_backend__fact_table__Var_168);
    }
    {
      ll_backend__fact_table__Var_171 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashTableEntry_27, ll_backend__fact_table__Var_170);
    }
    {
      ll_backend__fact_table__Var_173 = mercury__string__f_43_43_2_f_0((MR_String) ")\n            {\n                ind = (MR_Word) ", ll_backend__fact_table__Var_171);
    }
    {
      ll_backend__fact_table__Var_174 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__CompareString_29, ll_backend__fact_table__Var_173);
    }
    {
      ll_backend__fact_table__Var_176 = mercury__string__f_43_43_2_f_0((MR_String) ") != 0 && ", ll_backend__fact_table__Var_174);
    }
    {
      ll_backend__fact_table__Var_177 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashTableEntry_27, ll_backend__fact_table__Var_176);
    }
    {
      *ll_backend__fact_table__HashLookupCode_26 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        do {\n            if (MR_FACT_TABLE_HASH_ENTRY_TYPE(", ll_backend__fact_table__Var_177);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_test_condition_code_8_p_0(
  MR_String ll_backend__fact_table__FactTableName_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_Integer ll_backend__fact_table__ArgNum_5,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_IsFirstInputArg_0_6,
  MR_Integer ll_backend__fact_table__FactTableSize_7,
  MR_String * ll_backend__fact_table__HeadVar__8_8)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__fact_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__fact_table__HeadVar__8_8 = (MR_String) "";
      else
        {
          *ll_backend__fact_table__HeadVar__8_8 = (MR_String) "";
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.generate_test_condition_code\'/8", (MR_String) "too many ArgTypes");
            return;
          }
        }
    else
      {
        MR_Word ll_backend__fact_table__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));

        if ((ll_backend__fact_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__fact_table__HeadVar__8_8 = (MR_String) "";
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.generate_test_condition_code\'/8", (MR_String) "too many PragmaVars");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__fact_table__Type_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Types_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)));
            MR_String ll_backend__fact_table__Name_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_82, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_82, (MR_Integer) 2)));
            MR_String ll_backend__fact_table__CondCode1_50;
            MR_String ll_backend__fact_table__CondCode2_51;
            MR_Word ll_backend__fact_table__STATE_VARIABLE_IsFirstInputArg_77_77;
            MR_Integer ll_backend__fact_table__Var_78;
            MR_Word ll_backend__fact_table__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_82, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_82, (MR_Integer) 3)));

            {
              ll_backend__fact_table__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ll_backend__fact_table__ModuleInfo_4, ll_backend__fact_table__Mode_46);
            }
            if (ll_backend__fact_table__succeeded)
              {
                MR_String ll_backend__fact_table__CondCode0_49;
                MR_Word ll_backend__fact_table__Var_53;

                ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_37)) == (MR_mktag((MR_Integer) 2)));
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_37, (MR_Integer) 0)));
                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_53 == (MR_Integer) 3);
                  }
                if (ll_backend__fact_table__succeeded)
                  {
                    MR_String ll_backend__fact_table__Var_84;
                    MR_String ll_backend__fact_table__Var_86;
                    MR_String ll_backend__fact_table__Var_87;
                    MR_Word ll_backend__fact_table__Var_93;
                    MR_String ll_backend__fact_table__Var_94;
                    MR_String ll_backend__fact_table__Var_96;
                    MR_String ll_backend__fact_table__Var_97;
                    MR_String ll_backend__fact_table__Var_104;
                    MR_String ll_backend__fact_table__Var_106;
                    MR_String ll_backend__fact_table__Var_107;
                    MR_String ll_backend__fact_table__Var_114;
                    MR_String ll_backend__fact_table__Var_116;
                    MR_String ll_backend__fact_table__Var_117;

                    {
                      ll_backend__fact_table__Var_84 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_45, (MR_String) ") != 0\n");
                    }
                    {
                      ll_backend__fact_table__Var_86 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__fact_table__Var_84);
                    }
                    ll_backend__fact_table__Var_93 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_93, ll_backend__fact_table__ArgNum_5, &ll_backend__fact_table__Var_87);
                    }
                    {
                      ll_backend__fact_table__Var_94 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_87, ll_backend__fact_table__Var_86);
                    }
                    {
                      ll_backend__fact_table__Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", ll_backend__fact_table__Var_94);
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_93, ll_backend__fact_table__FactTableSize_7, &ll_backend__fact_table__Var_97);
                    }
                    {
                      ll_backend__fact_table__Var_104 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_97, ll_backend__fact_table__Var_96);
                    }
                    {
                      ll_backend__fact_table__Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", ll_backend__fact_table__Var_104);
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_93, ll_backend__fact_table__FactTableSize_7, &ll_backend__fact_table__Var_107);
                    }
                    {
                      ll_backend__fact_table__Var_114 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_107, ll_backend__fact_table__Var_106);
                    }
                    {
                      ll_backend__fact_table__Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "[ind/", ll_backend__fact_table__Var_114);
                    }
                    {
                      ll_backend__fact_table__Var_117 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FactTableName_1, ll_backend__fact_table__Var_116);
                    }
                    {
                      ll_backend__fact_table__CondCode0_49 = mercury__string__f_43_43_2_f_0((MR_String) "strcmp(", ll_backend__fact_table__Var_117);
                    }
                  }
                else
                  {
                    MR_String ll_backend__fact_table__Var_120;
                    MR_String ll_backend__fact_table__Var_122;
                    MR_String ll_backend__fact_table__Var_123;
                    MR_Word ll_backend__fact_table__Var_129;
                    MR_String ll_backend__fact_table__Var_130;
                    MR_String ll_backend__fact_table__Var_132;
                    MR_String ll_backend__fact_table__Var_133;
                    MR_String ll_backend__fact_table__Var_140;
                    MR_String ll_backend__fact_table__Var_142;
                    MR_String ll_backend__fact_table__Var_143;
                    MR_String ll_backend__fact_table__Var_150;
                    MR_String ll_backend__fact_table__Var_152;

                    {
                      ll_backend__fact_table__Var_120 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_45, (MR_String) "\n");
                    }
                    {
                      ll_backend__fact_table__Var_122 = mercury__string__f_43_43_2_f_0((MR_String) " != ", ll_backend__fact_table__Var_120);
                    }
                    ll_backend__fact_table__Var_129 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_129, ll_backend__fact_table__ArgNum_5, &ll_backend__fact_table__Var_123);
                    }
                    {
                      ll_backend__fact_table__Var_130 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_123, ll_backend__fact_table__Var_122);
                    }
                    {
                      ll_backend__fact_table__Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", ll_backend__fact_table__Var_130);
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_129, ll_backend__fact_table__FactTableSize_7, &ll_backend__fact_table__Var_133);
                    }
                    {
                      ll_backend__fact_table__Var_140 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_133, ll_backend__fact_table__Var_132);
                    }
                    {
                      ll_backend__fact_table__Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", ll_backend__fact_table__Var_140);
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_129, ll_backend__fact_table__FactTableSize_7, &ll_backend__fact_table__Var_143);
                    }
                    {
                      ll_backend__fact_table__Var_150 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_143, ll_backend__fact_table__Var_142);
                    }
                    {
                      ll_backend__fact_table__Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "[ind/", ll_backend__fact_table__Var_150);
                    }
                    {
                      ll_backend__fact_table__CondCode0_49 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FactTableName_1, ll_backend__fact_table__Var_152);
                    }
                  }
                switch (ll_backend__fact_table__STATE_VARIABLE_IsFirstInputArg_0_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        ll_backend__fact_table__CondCode1_50 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t|| ", ll_backend__fact_table__CondCode0_49);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    ll_backend__fact_table__CondCode1_50 = ll_backend__fact_table__CondCode0_49;
                    break;
                }
                ll_backend__fact_table__STATE_VARIABLE_IsFirstInputArg_77_77 = (MR_Integer) 0;
              }
            else
              {
                ll_backend__fact_table__CondCode1_50 = (MR_String) "";
                ll_backend__fact_table__STATE_VARIABLE_IsFirstInputArg_77_77 = ll_backend__fact_table__STATE_VARIABLE_IsFirstInputArg_0_6;
              }
            ll_backend__fact_table__Var_78 = (ll_backend__fact_table__ArgNum_5 + (MR_Integer) 1);
            {
              ll_backend__fact_table__generate_test_condition_code_8_p_0(ll_backend__fact_table__FactTableName_1, ll_backend__fact_table__Var_81, ll_backend__fact_table__Types_38, ll_backend__fact_table__ModuleInfo_4, ll_backend__fact_table__Var_78, ll_backend__fact_table__STATE_VARIABLE_IsFirstInputArg_77_77, ll_backend__fact_table__FactTableSize_7, &ll_backend__fact_table__CondCode2_51);
            }
            {
              *ll_backend__fact_table__HeadVar__8_8 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__CondCode1_50, ll_backend__fact_table__CondCode2_51);
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_cc_multi_code_2_5_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_String ll_backend__fact_table__StructName_2,
  MR_Integer ll_backend__fact_table__ArgNum_3,
  MR_String ll_backend__fact_table__STATE_VARIABLE_ProcCode_0_4,
  MR_String * ll_backend__fact_table__STATE_VARIABLE_ProcCode_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__STATE_VARIABLE_ProcCode_5 = ll_backend__fact_table__STATE_VARIABLE_ProcCode_0_4;
        else
          {
            MR_String ll_backend__fact_table__VarName_12;
            MR_Word ll_backend__fact_table__PragmaVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_String ll_backend__fact_table__NewProcCode_19;
            MR_Word ll_backend__fact_table__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_String ll_backend__fact_table__STATE_VARIABLE_ProcCode_31_31;
            MR_Integer ll_backend__fact_table__Var_32;
            MR_String ll_backend__fact_table__Var_36;
            MR_String ll_backend__fact_table__Var_43;
            MR_String ll_backend__fact_table__Var_45;
            MR_String ll_backend__fact_table__Var_46;
            MR_String ll_backend__fact_table__Var_48;
            MR_String ll_backend__fact_table__Var_49;
            MR_Word ll_backend__fact_table__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_22, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_13;
            MR_Word ll_backend__fact_table__Var_14;

            ll_backend__fact_table__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_22, (MR_Integer) 1)));
            ll_backend__fact_table__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_22, (MR_Integer) 2)));
            ll_backend__fact_table__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_22, (MR_Integer) 3)));
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__ArgNum_3, &ll_backend__fact_table__Var_36);
            }
            {
              ll_backend__fact_table__Var_43 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_36, (MR_String) ";\n");
            }
            {
              ll_backend__fact_table__Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "[0][0].V_", ll_backend__fact_table__Var_43);
            }
            {
              ll_backend__fact_table__Var_46 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__StructName_2, ll_backend__fact_table__Var_45);
            }
            {
              ll_backend__fact_table__Var_48 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ll_backend__fact_table__Var_46);
            }
            {
              ll_backend__fact_table__Var_49 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__VarName_12, ll_backend__fact_table__Var_48);
            }
            {
              ll_backend__fact_table__NewProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__fact_table__Var_49);
            }
            {
              mercury__string__append_3_p_2(ll_backend__fact_table__NewProcCode_19, ll_backend__fact_table__STATE_VARIABLE_ProcCode_0_4, &ll_backend__fact_table__STATE_VARIABLE_ProcCode_31_31);
            }
            ll_backend__fact_table__Var_32 = (ll_backend__fact_table__ArgNum_3 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__PragmaVars_15;
              MR_Integer ll_backend__fact_table__next_value_of_ArgNum_3 = ll_backend__fact_table__Var_32;
              MR_String ll_backend__fact_table__next_value_of_STATE_VARIABLE_ProcCode_0_4 = ll_backend__fact_table__STATE_VARIABLE_ProcCode_31_31;

              ll_backend__fact_table__STATE_VARIABLE_ProcCode_0_4 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_ProcCode_0_4;
              ll_backend__fact_table__ArgNum_3 = ll_backend__fact_table__next_value_of_ArgNum_3;
              ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__generate_multidet_code_8_p_0(
  MR_String ll_backend__fact_table__PredName_9,
  MR_Word ll_backend__fact_table__PragmaVars_10,
  MR_Integer ll_backend__fact_table__ProcID_11,
  MR_Word ll_backend__fact_table__ArgTypes_12,
  MR_Word ll_backend__fact_table__ModuleInfo_13,
  MR_Integer ll_backend__fact_table__FactTableSize_14,
  MR_String * ll_backend__fact_table__ProcCode_15,
  MR_String * ll_backend__fact_table__ExtraCode_16)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__ExtraCodeLabel_17;
    MR_String ll_backend__fact_table__NumFactsVar_19;
    MR_Integer ll_backend__fact_table__Arity_20;
    MR_String ll_backend__fact_table__ArgDeclCode_21;
    MR_String ll_backend__fact_table__OutputCode_23;
    MR_String ll_backend__fact_table__FactLookupCode_27;
    MR_String ll_backend__fact_table__Var_29;
    MR_String ll_backend__fact_table__Var_75;
    MR_String ll_backend__fact_table__Var_77;
    MR_String ll_backend__fact_table__Var_78;
    MR_String ll_backend__fact_table__Var_80;
    MR_String ll_backend__fact_table__Var_81;
    MR_String ll_backend__fact_table__Var_83;
    MR_String ll_backend__fact_table__Var_84;
    MR_String ll_backend__fact_table__Var_86;
    MR_String ll_backend__fact_table__Var_87;
    MR_String ll_backend__fact_table__Var_89;
    MR_String ll_backend__fact_table__Var_90;
    MR_String ll_backend__fact_table__Var_92;
    MR_String ll_backend__fact_table__Var_93;
    MR_String ll_backend__fact_table__Var_95;
    MR_String ll_backend__fact_table__Var_96;
    MR_String ll_backend__fact_table__Var_98;
    MR_String ll_backend__fact_table__Var_99;
    MR_String ll_backend__fact_table__Var_101;
    MR_String ll_backend__fact_table__Var_102;
    MR_String ll_backend__fact_table__Var_104;
    MR_String ll_backend__fact_table__Var_105;
    MR_String ll_backend__fact_table__Var_107;
    MR_String ll_backend__fact_table__Var_108;
    MR_String ll_backend__fact_table__Var_110;
    MR_String ll_backend__fact_table__Var_111;
    MR_String ll_backend__fact_table__Var_118;
    MR_String ll_backend__fact_table__Var_120;
    MR_String ll_backend__fact_table__Var_121;
    MR_String ll_backend__fact_table__Var_123;
    MR_String ll_backend__fact_table__Var_124;
    MR_String ll_backend__fact_table__Var_126;
    MR_String ll_backend__fact_table__Var_127;
    MR_String ll_backend__fact_table__Var_129;
    MR_String ll_backend__fact_table__Var_130;
    MR_String ll_backend__fact_table__Var_132;
    MR_String ll_backend__fact_table__Var_133;
    MR_String ll_backend__fact_table__Var_135;
    MR_String ll_backend__fact_table__Var_136;
    MR_String ll_backend__fact_table__Var_138;
    MR_String ll_backend__fact_table__Var_139;
    MR_String ll_backend__fact_table___InputCode_22;
    MR_String ll_backend__fact_table__Var_24;
    MR_String ll_backend__fact_table__Var_25;
    MR_Integer ll_backend__fact_table__Var_26;

    {
      ll_backend__fact_table__generate_nondet_proc_code_5_p_0(ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__PredName_9, ll_backend__fact_table__ProcID_11, &ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__ProcCode_15);
    }
    {
      ll_backend__fact_table__Var_29 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_9, (MR_String) "_fact_table_num_facts");
    }
    {
      ll_backend__fact_table__NumFactsVar_19 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ll_backend__fact_table__Var_29);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0, ll_backend__fact_table__PragmaVars_10, &ll_backend__fact_table__Arity_20);
    }
    {
      ll_backend__fact_table__generate_argument_vars_code_9_p_0(ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgTypes_12, ll_backend__fact_table__ModuleInfo_13, &ll_backend__fact_table__ArgDeclCode_21, &ll_backend__fact_table___InputCode_22, &ll_backend__fact_table__OutputCode_23, &ll_backend__fact_table__Var_24, &ll_backend__fact_table__Var_25, &ll_backend__fact_table__Var_26);
    }
    {
      ll_backend__fact_table__generate_fact_lookup_code_7_p_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgTypes_12, ll_backend__fact_table__ModuleInfo_13, (MR_Integer) 1, ll_backend__fact_table__FactTableSize_14, &ll_backend__fact_table__FactLookupCode_27);
    }
    {
      ll_backend__fact_table__Var_75 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
    }
    {
      ll_backend__fact_table__Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", ll_backend__fact_table__Var_75);
    }
    {
      ll_backend__fact_table__Var_78 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_77);
    }
    {
      ll_backend__fact_table__Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", ll_backend__fact_table__Var_78);
    }
    {
      ll_backend__fact_table__Var_81 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_80);
    }
    {
      ll_backend__fact_table__Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", ll_backend__fact_table__Var_81);
    }
    {
      ll_backend__fact_table__Var_84 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_83);
    }
    {
      ll_backend__fact_table__Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", ll_backend__fact_table__Var_84);
    }
    {
      ll_backend__fact_table__Var_87 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_86);
    }
    {
      ll_backend__fact_table__Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "\n    }\n    MR_framevar(1)++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc ", ll_backend__fact_table__Var_87);
    }
    {
      ll_backend__fact_table__Var_90 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__OutputCode_23, ll_backend__fact_table__Var_89);
    }
    {
      ll_backend__fact_table__Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "\n        /* save output args to registers */\n", ll_backend__fact_table__Var_90);
    }
    {
      ll_backend__fact_table__Var_93 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FactLookupCode_27, ll_backend__fact_table__Var_92);
    }
    {
      ll_backend__fact_table__Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Word ind = MR_framevar(1), tmp;\n        /* lookup fact table */\n", ll_backend__fact_table__Var_93);
    }
    {
      ll_backend__fact_table__Var_96 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ArgDeclCode_21, ll_backend__fact_table__Var_95);
    }
    {
      ll_backend__fact_table__Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ") MR_fail();\n    {\n        /* declare argument vars */\n", ll_backend__fact_table__Var_96);
    }
    {
      ll_backend__fact_table__Var_99 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__NumFactsVar_19, ll_backend__fact_table__Var_98);
    }
    {
      ll_backend__fact_table__Var_101 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    if (MR_framevar(1) >= ", ll_backend__fact_table__Var_99);
    }
    {
      ll_backend__fact_table__Var_102 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_101);
    }
    {
      ll_backend__fact_table__Var_104 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\nMR_define_label(", ll_backend__fact_table__Var_102);
    }
    {
      ll_backend__fact_table__Var_105 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_104);
    }
    {
      ll_backend__fact_table__Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    MR_framevar(1) = (MR_Integer) 0;\n    MR_GOTO(MR_LABEL(", ll_backend__fact_table__Var_105);
    }
    {
      ll_backend__fact_table__Var_108 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_107);
    }
    {
      ll_backend__fact_table__Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "\", 1, MR_LABEL(", ll_backend__fact_table__Var_108);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__Arity_20, &ll_backend__fact_table__Var_111);
    }
    {
      ll_backend__fact_table__Var_118 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_111, ll_backend__fact_table__Var_110);
    }
    {
      ll_backend__fact_table__Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__fact_table__Var_118);
    }
    {
      ll_backend__fact_table__Var_121 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_9, ll_backend__fact_table__Var_120);
    }
    {
      ll_backend__fact_table__Var_123 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", ll_backend__fact_table__Var_121);
    }
    {
      ll_backend__fact_table__Var_124 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_123);
    }
    {
      ll_backend__fact_table__Var_126 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", ll_backend__fact_table__Var_124);
    }
    {
      ll_backend__fact_table__Var_127 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_126);
    }
    {
      ll_backend__fact_table__Var_129 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", ll_backend__fact_table__Var_127);
    }
    {
      ll_backend__fact_table__Var_130 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_129);
    }
    {
      ll_backend__fact_table__Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", ll_backend__fact_table__Var_130);
    }
    {
      ll_backend__fact_table__Var_133 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_132);
    }
    {
      ll_backend__fact_table__Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", ll_backend__fact_table__Var_133);
    }
    {
      ll_backend__fact_table__Var_136 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_135);
    }
    {
      ll_backend__fact_table__Var_138 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", ll_backend__fact_table__Var_136);
    }
    {
      ll_backend__fact_table__Var_139 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ExtraCodeLabel_17, ll_backend__fact_table__Var_138);
    }
    {
      *ll_backend__fact_table__ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", ll_backend__fact_table__Var_139);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box * ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_Box ll_backend__fact_table__closure = ll_backend__fact_table__closure_arg;
    MR_Word ll_backend__fact_table__conv0_LambdaHeadVar__2_28;

    {
      ll_backend__fact_table__IntroducedFrom__pred__generate_argument_vars_code__3063__1_2_p_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), &ll_backend__fact_table__conv0_LambdaHeadVar__2_28);
    }
    *ll_backend__fact_table__wrapper_arg_2 = ((MR_Box) (ll_backend__fact_table__conv0_LambdaHeadVar__2_28));
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_9_p_0(
  MR_Word ll_backend__fact_table__PragmaVars_10,
  MR_Word ll_backend__fact_table__Types_11,
  MR_Word ll_backend__fact_table__ModuleInfo_12,
  MR_String * ll_backend__fact_table__DeclCode_13,
  MR_String * ll_backend__fact_table__InputCode_14,
  MR_String * ll_backend__fact_table__OutputCode_15,
  MR_String * ll_backend__fact_table__SaveRegsCode_16,
  MR_String * ll_backend__fact_table__GetRegsCode_17,
  MR_Integer * ll_backend__fact_table__NumInputArgs_18)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Modes_24;
    MR_Word ll_backend__fact_table__ArgInfos_25;

    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &ll_backend__fact_table_scalar_common_2[5], ll_backend__fact_table__PragmaVars_10, &ll_backend__fact_table__Modes_24);
    }
    {
      hlds__arg_info__make_standard_arg_infos_5_p_0(ll_backend__fact_table__Types_11, ll_backend__fact_table__Modes_24, (MR_Integer) 2, ll_backend__fact_table__ModuleInfo_12, &ll_backend__fact_table__ArgInfos_25);
    }
    {
      ll_backend__fact_table__generate_argument_vars_code_2_11_p_0(ll_backend__fact_table__PragmaVars_10, ll_backend__fact_table__ArgInfos_25, ll_backend__fact_table__Types_11, ll_backend__fact_table__ModuleInfo_12, ll_backend__fact_table__DeclCode_13, ll_backend__fact_table__InputCode_14, ll_backend__fact_table__OutputCode_15, ll_backend__fact_table__SaveRegsCode_16, ll_backend__fact_table__GetRegsCode_17, (MR_Integer) 1, ll_backend__fact_table__NumInputArgs_18);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_argument_vars_code_2_11_p_0(
  MR_Word ll_backend__fact_table__PragmaVars0_12,
  MR_Word ll_backend__fact_table__ArgInfos0_13,
  MR_Word ll_backend__fact_table__Types0_14,
  MR_Word ll_backend__fact_table__Module_15,
  MR_String * ll_backend__fact_table__DeclCode_16,
  MR_String * ll_backend__fact_table__InputCode_17,
  MR_String * ll_backend__fact_table__OutputCode_18,
  MR_String * ll_backend__fact_table__SaveRegsCode_19,
  MR_String * ll_backend__fact_table__GetRegsCode_20,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_0_42,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_43)
{
  {
    MR_bool ll_backend__fact_table__succeeded = (ll_backend__fact_table__PragmaVars0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (ll_backend__fact_table__succeeded)
      {
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgInfos0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ll_backend__fact_table__succeeded)
          ll_backend__fact_table__succeeded = (ll_backend__fact_table__Types0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ll_backend__fact_table__succeeded)
      {
        *ll_backend__fact_table__DeclCode_16 = (MR_String) "";
        *ll_backend__fact_table__InputCode_17 = (MR_String) "";
        *ll_backend__fact_table__OutputCode_18 = (MR_String) "";
        *ll_backend__fact_table__SaveRegsCode_19 = (MR_String) "";
        *ll_backend__fact_table__GetRegsCode_20 = (MR_String) "";
        *ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_43 = ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_0_42;
      }
    else
      {
        MR_String ll_backend__fact_table__VarName_23;
        MR_Word ll_backend__fact_table__PragmaVars_26;
        MR_Word ll_backend__fact_table__Loc_27;
        MR_Word ll_backend__fact_table__ArgMode_28;
        MR_Word ll_backend__fact_table__ArgInfos_29;
        MR_Word ll_backend__fact_table__Type_30;
        MR_Word ll_backend__fact_table__Types_31;
        MR_Word ll_backend__fact_table__Var_44;
        MR_Word ll_backend__fact_table__Var_45;
        MR_Word ll_backend__fact_table__Var_22;
        MR_Word ll_backend__fact_table__Var_24;
        MR_Word ll_backend__fact_table__Var_25;

        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__PragmaVars0_12)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__PragmaVars0_12, (MR_Integer) 0)));
            ll_backend__fact_table__PragmaVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__PragmaVars0_12, (MR_Integer) 1)));
            ll_backend__fact_table__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_44, (MR_Integer) 0)));
            ll_backend__fact_table__VarName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_44, (MR_Integer) 1)));
            ll_backend__fact_table__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_44, (MR_Integer) 2)));
            ll_backend__fact_table__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_44, (MR_Integer) 3)));
            ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__ArgInfos0_13)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__ArgInfos0_13, (MR_Integer) 0)));
                ll_backend__fact_table__ArgInfos_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__ArgInfos0_13, (MR_Integer) 1)));
                ll_backend__fact_table__Loc_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_45, (MR_Integer) 0)));
                ll_backend__fact_table__ArgMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_45, (MR_Integer) 1)));
                ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Types0_14)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Types0_14, (MR_Integer) 0)));
                    ll_backend__fact_table__Types_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Types0_14, (MR_Integer) 1)));
                  }
              }
          }
        if (ll_backend__fact_table__succeeded)
          {
            MR_String ll_backend__fact_table__DeclCode0_32;
            MR_String ll_backend__fact_table__InputCode0_33;
            MR_String ll_backend__fact_table__SaveRegsCode0_34;
            MR_String ll_backend__fact_table__GetRegsCode0_35;
            MR_String ll_backend__fact_table__OutputCode0_36;
            MR_String ll_backend__fact_table__DeclCode1_37;
            MR_String ll_backend__fact_table__InputCode1_38;
            MR_String ll_backend__fact_table__OutputCode1_39;
            MR_String ll_backend__fact_table__SaveRegsCode1_40;
            MR_String ll_backend__fact_table__GetRegsCode1_41;
            MR_Integer ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_46_46;
            MR_String ll_backend__fact_table__C_Type_59;
            MR_String ll_backend__fact_table__Var_68;
            MR_String ll_backend__fact_table__Var_70;
            MR_String ll_backend__fact_table__Var_71;

            {
              ll_backend__fact_table__C_Type_59 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ll_backend__fact_table__Module_15, (MR_Integer) 0, ll_backend__fact_table__Type_30);
            }
            {
              ll_backend__fact_table__Var_68 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__VarName_23, (MR_String) ";\n");
            }
            {
              ll_backend__fact_table__Var_70 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__fact_table__Var_68);
            }
            {
              ll_backend__fact_table__Var_71 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__C_Type_59, ll_backend__fact_table__Var_70);
            }
            {
              ll_backend__fact_table__DeclCode0_32 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__fact_table__Var_71);
            }
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgMode_28 == (MR_Integer) 0);
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_46_46 = (ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_0_42 + (MR_Integer) 1);
                {
                  ll_backend__fact_table__generate_arg_input_code_7_p_0(ll_backend__fact_table__VarName_23, ll_backend__fact_table__Type_30, ll_backend__fact_table__Loc_27, ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_46_46, &ll_backend__fact_table__InputCode0_33, &ll_backend__fact_table__SaveRegsCode0_34, &ll_backend__fact_table__GetRegsCode0_35);
                }
                ll_backend__fact_table__OutputCode0_36 = (MR_String) "";
              }
            else
              {
                ll_backend__fact_table__succeeded = (ll_backend__fact_table__ArgMode_28 == (MR_Integer) 1);
                if (ll_backend__fact_table__succeeded)
                  {
                    MR_Word ll_backend__fact_table__RegType_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Loc_27, (MR_Integer) 0)));
                    MR_Integer ll_backend__fact_table__RegNum_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Loc_27, (MR_Integer) 1)));
                    MR_String ll_backend__fact_table__RegName_79;
                    MR_String ll_backend__fact_table__Converted_80;
                    MR_String ll_backend__fact_table__Var_88;
                    MR_String ll_backend__fact_table__Var_90;
                    MR_String ll_backend__fact_table__Var_91;

                    {
                      ll_backend__fact_table__RegName_79 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(ll_backend__fact_table__RegType_77, ll_backend__fact_table__RegNum_78);
                    }
                    {
                      backend_libs__export__convert_type_to_mercury_4_p_0(ll_backend__fact_table__VarName_23, ll_backend__fact_table__Type_30, ll_backend__fact_table__Loc_27, &ll_backend__fact_table__Converted_80);
                    }
                    {
                      ll_backend__fact_table__Var_88 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Converted_80, (MR_String) ";\n");
                    }
                    {
                      ll_backend__fact_table__Var_90 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ll_backend__fact_table__Var_88);
                    }
                    {
                      ll_backend__fact_table__Var_91 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__RegName_79, ll_backend__fact_table__Var_90);
                    }
                    {
                      ll_backend__fact_table__OutputCode0_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__fact_table__Var_91);
                    }
                    ll_backend__fact_table__InputCode0_33 = (MR_String) "";
                    ll_backend__fact_table__SaveRegsCode0_34 = (MR_String) "";
                    ll_backend__fact_table__GetRegsCode0_35 = (MR_String) "";
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.generate_argument_vars_code_2\'/11", (MR_String) "invalid mode");
                      return;
                    }
                  }
                ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_46_46 = ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_0_42;
              }
            {
              ll_backend__fact_table__generate_argument_vars_code_2_11_p_0(ll_backend__fact_table__PragmaVars_26, ll_backend__fact_table__ArgInfos_29, ll_backend__fact_table__Types_31, ll_backend__fact_table__Module_15, &ll_backend__fact_table__DeclCode1_37, &ll_backend__fact_table__InputCode1_38, &ll_backend__fact_table__OutputCode1_39, &ll_backend__fact_table__SaveRegsCode1_40, &ll_backend__fact_table__GetRegsCode1_41, ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_46_46, ll_backend__fact_table__STATE_VARIABLE_NumInputArgs_43);
            }
            {
              *ll_backend__fact_table__DeclCode_16 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__DeclCode0_32, ll_backend__fact_table__DeclCode1_37);
            }
            {
              *ll_backend__fact_table__InputCode_17 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__InputCode0_33, ll_backend__fact_table__InputCode1_38);
            }
            {
              *ll_backend__fact_table__OutputCode_18 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__OutputCode0_36, ll_backend__fact_table__OutputCode1_39);
            }
            {
              *ll_backend__fact_table__SaveRegsCode_19 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__SaveRegsCode0_34, ll_backend__fact_table__SaveRegsCode1_40);
            }
            {
              *ll_backend__fact_table__GetRegsCode_20 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__GetRegsCode0_35, ll_backend__fact_table__GetRegsCode1_41);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.generate_argument_vars_code_2\'/11", (MR_String) "list length mismatch");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_arg_input_code_7_p_0(
  MR_String ll_backend__fact_table__Name_8,
  MR_Word ll_backend__fact_table__Type_9,
  MR_Word ll_backend__fact_table__ArgLoc_10,
  MR_Integer ll_backend__fact_table__FrameVarNum_11,
  MR_String * ll_backend__fact_table__InputCode_12,
  MR_String * ll_backend__fact_table__SaveRegCode_13,
  MR_String * ll_backend__fact_table__GetRegCode_14)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__RegType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__ArgLoc_10, (MR_Integer) 0)));
    MR_Integer ll_backend__fact_table__RegNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__ArgLoc_10, (MR_Integer) 1)));
    MR_String ll_backend__fact_table__ConvertToFrameVar_17;
    MR_String ll_backend__fact_table__ConvertFromFrameVar_18;
    MR_String ll_backend__fact_table__RegName_19;
    MR_String ll_backend__fact_table__Converted_20;
    MR_String ll_backend__fact_table__Var_44;
    MR_String ll_backend__fact_table__Var_46;
    MR_String ll_backend__fact_table__Var_47;
    MR_String ll_backend__fact_table__Var_50;
    MR_String ll_backend__fact_table__Var_52;
    MR_String ll_backend__fact_table__Var_53;
    MR_String ll_backend__fact_table__Var_55;
    MR_String ll_backend__fact_table__Var_56;
    MR_Word ll_backend__fact_table__Var_62;
    MR_String ll_backend__fact_table__Var_63;
    MR_String ll_backend__fact_table__Var_66;
    MR_String ll_backend__fact_table__Var_73;
    MR_String ll_backend__fact_table__Var_75;
    MR_String ll_backend__fact_table__Var_76;
    MR_String ll_backend__fact_table__Var_78;
    MR_String ll_backend__fact_table__Var_79;

    switch (ll_backend__fact_table__RegType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ll_backend__fact_table__ConvertToFrameVar_17 = (MR_String) "MR_float_to_word";
          ll_backend__fact_table__ConvertFromFrameVar_18 = (MR_String) "MR_word_to_float";
        }
        break;
      case (MR_Integer) 0:
        {
          ll_backend__fact_table__ConvertToFrameVar_17 = (MR_String) "";
          ll_backend__fact_table__ConvertFromFrameVar_18 = (MR_String) "";
        }
        break;
    }
    {
      ll_backend__fact_table__RegName_19 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(ll_backend__fact_table__RegType_15, ll_backend__fact_table__RegNum_16);
    }
    {
      backend_libs__export__convert_type_from_mercury_4_p_0(ll_backend__fact_table__ArgLoc_10, ll_backend__fact_table__RegName_19, ll_backend__fact_table__Type_9, &ll_backend__fact_table__Converted_20);
    }
    {
      ll_backend__fact_table__Var_44 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Converted_20, (MR_String) ";\n");
    }
    {
      ll_backend__fact_table__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ll_backend__fact_table__Var_44);
    }
    {
      ll_backend__fact_table__Var_47 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Name_8, ll_backend__fact_table__Var_46);
    }
    {
      *ll_backend__fact_table__InputCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__fact_table__Var_47);
    }
    {
      ll_backend__fact_table__Var_50 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__RegName_19, (MR_String) ");\n");
    }
    {
      ll_backend__fact_table__Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__fact_table__Var_50);
    }
    {
      ll_backend__fact_table__Var_53 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ConvertToFrameVar_17, ll_backend__fact_table__Var_52);
    }
    {
      ll_backend__fact_table__Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", ll_backend__fact_table__Var_53);
    }
    ll_backend__fact_table__Var_62 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_62, ll_backend__fact_table__FrameVarNum_11, &ll_backend__fact_table__Var_56);
    }
    {
      ll_backend__fact_table__Var_63 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_56, ll_backend__fact_table__Var_55);
    }
    {
      *ll_backend__fact_table__SaveRegCode_13 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_framevar(", ll_backend__fact_table__Var_63);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_62, ll_backend__fact_table__FrameVarNum_11, &ll_backend__fact_table__Var_66);
    }
    {
      ll_backend__fact_table__Var_73 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_66, (MR_String) "));\n");
    }
    {
      ll_backend__fact_table__Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_framevar(", ll_backend__fact_table__Var_73);
    }
    {
      ll_backend__fact_table__Var_76 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ConvertFromFrameVar_18, ll_backend__fact_table__Var_75);
    }
    {
      ll_backend__fact_table__Var_78 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ll_backend__fact_table__Var_76);
    }
    {
      ll_backend__fact_table__Var_79 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__RegName_19, ll_backend__fact_table__Var_78);
    }
    {
      *ll_backend__fact_table__GetRegCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__fact_table__Var_79);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__generate_fact_lookup_code_7_p_0(
  MR_String ll_backend__fact_table__PredName_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_Integer ll_backend__fact_table__ArgNum_5,
  MR_Integer ll_backend__fact_table__FactTableSize_6,
  MR_String * ll_backend__fact_table__HeadVar__7_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ll_backend__fact_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *ll_backend__fact_table__HeadVar__7_7 = (MR_String) "";
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.generate_fact_lookup_code\'/7", (MR_String) "too many types");
                return;
              }
            }
        else
          {
            MR_Word ll_backend__fact_table__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));

            if ((ll_backend__fact_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.generate_fact_lookup_code\'/7", (MR_String) "too many pragma vars");
                  return;
                }
              }
            else
              {
                MR_String ll_backend__fact_table__VarName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_88, (MR_Integer) 1)));
                MR_Word ll_backend__fact_table__Mode_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_88, (MR_Integer) 2)));
                MR_Word ll_backend__fact_table__Type_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__Types_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)));
                MR_Integer ll_backend__fact_table__NextArgNum_44 = (ll_backend__fact_table__ArgNum_5 + (MR_Integer) 1);
                MR_Word ll_backend__fact_table__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_88, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_88, (MR_Integer) 3)));

                {
                  ll_backend__fact_table__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ll_backend__fact_table__ModuleInfo_4, ll_backend__fact_table__Mode_35);
                }
                if (ll_backend__fact_table__succeeded)
                  {
                    MR_String ll_backend__fact_table__TableEntry_46;
                    MR_String ll_backend__fact_table__C_Code0_50;
                    MR_String ll_backend__fact_table__C_Code1_51;
                    MR_String ll_backend__fact_table__Var_89;
                    MR_Word ll_backend__fact_table__Var_95 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
                    MR_String ll_backend__fact_table__Var_97;
                    MR_String ll_backend__fact_table__Var_98;
                    MR_String ll_backend__fact_table__Var_105;
                    MR_String ll_backend__fact_table__Var_107;
                    MR_String ll_backend__fact_table__Var_108;
                    MR_String ll_backend__fact_table__Var_115;
                    MR_String ll_backend__fact_table__Var_117;
                    MR_String ll_backend__fact_table__Var_118;
                    MR_Word ll_backend__fact_table__Var_63;

                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_95, ll_backend__fact_table__ArgNum_5, &ll_backend__fact_table__Var_89);
                    }
                    {
                      ll_backend__fact_table__Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", ll_backend__fact_table__Var_89);
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_95, ll_backend__fact_table__FactTableSize_6, &ll_backend__fact_table__Var_98);
                    }
                    {
                      ll_backend__fact_table__Var_105 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_98, ll_backend__fact_table__Var_97);
                    }
                    {
                      ll_backend__fact_table__Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", ll_backend__fact_table__Var_105);
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_95, ll_backend__fact_table__FactTableSize_6, &ll_backend__fact_table__Var_108);
                    }
                    {
                      ll_backend__fact_table__Var_115 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_108, ll_backend__fact_table__Var_107);
                    }
                    {
                      ll_backend__fact_table__Var_117 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table[ind/", ll_backend__fact_table__Var_115);
                    }
                    {
                      ll_backend__fact_table__Var_118 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_1, ll_backend__fact_table__Var_117);
                    }
                    {
                      ll_backend__fact_table__TableEntry_46 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ll_backend__fact_table__Var_118);
                    }
                    ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_38)) == (MR_mktag((MR_Integer) 2)));
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_38, (MR_Integer) 0)));
                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_63 == (MR_Integer) 3);
                      }
                    if (ll_backend__fact_table__succeeded)
                      {
                        MR_Word ll_backend__fact_table__FinalInst_48;
                        MR_Word ll_backend__fact_table__Var_47;

                        {
                          check_hlds__mode_util__mode_get_insts_4_p_0(ll_backend__fact_table__ModuleInfo_4, ll_backend__fact_table__Mode_35, &ll_backend__fact_table__Var_47, &ll_backend__fact_table__FinalInst_48);
                        }
                        {
                          ll_backend__fact_table__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ll_backend__fact_table__ModuleInfo_4, ll_backend__fact_table__FinalInst_48);
                        }
                        if (ll_backend__fact_table__succeeded)
                          {
                            MR_String ll_backend__fact_table__Var_121;
                            MR_String ll_backend__fact_table__Var_123;
                            MR_String ll_backend__fact_table__Var_124;

                            {
                              ll_backend__fact_table__Var_121 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__TableEntry_46, (MR_String) ");\n");
                            }
                            {
                              ll_backend__fact_table__Var_123 = mercury__string__f_43_43_2_f_0((MR_String) ", (MR_String) (MR_Word) ", ll_backend__fact_table__Var_121);
                            }
                            {
                              ll_backend__fact_table__Var_124 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__VarName_34, ll_backend__fact_table__Var_123);
                            }
                            {
                              ll_backend__fact_table__C_Code0_50 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_make_aligned_string(", ll_backend__fact_table__Var_124);
                            }
                          }
                        else
                          {
                            MR_String ll_backend__fact_table__Var_127;
                            MR_String ll_backend__fact_table__Var_129;
                            MR_String ll_backend__fact_table__Var_130;
                            MR_String ll_backend__fact_table__Var_132;
                            MR_String ll_backend__fact_table__Var_133;
                            MR_String ll_backend__fact_table__Var_135;
                            MR_String ll_backend__fact_table__Var_136;

                            {
                              ll_backend__fact_table__Var_127 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__TableEntry_46, (MR_String) ");\n                    ");
                            }
                            {
                              ll_backend__fact_table__Var_129 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__fact_table__Var_127);
                            }
                            {
                              ll_backend__fact_table__Var_130 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__VarName_34, ll_backend__fact_table__Var_129);
                            }
                            {
                              ll_backend__fact_table__Var_132 = mercury__string__f_43_43_2_f_0((MR_String) " = (MR_String) tmp;\n                            strcpy(", ll_backend__fact_table__Var_130);
                            }
                            {
                              ll_backend__fact_table__Var_133 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__VarName_34, ll_backend__fact_table__Var_132);
                            }
                            {
                              ll_backend__fact_table__Var_135 = mercury__string__f_43_43_2_f_0((MR_String) ") + sizeof(MR_Word))\n                                    / sizeof(MR_Word));\n                            ", ll_backend__fact_table__Var_133);
                            }
                            {
                              ll_backend__fact_table__Var_136 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__TableEntry_46, ll_backend__fact_table__Var_135);
                            }
                            {
                              ll_backend__fact_table__C_Code0_50 = mercury__string__f_43_43_2_f_0((MR_String) "       MR_incr_hp_atomic(tmp,\n                                (strlen(", ll_backend__fact_table__Var_136);
                            }
                          }
                      }
                    else
                      {
                        MR_String ll_backend__fact_table__Var_139;
                        MR_String ll_backend__fact_table__Var_141;
                        MR_String ll_backend__fact_table__Var_142;

                        {
                          ll_backend__fact_table__Var_139 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__TableEntry_46, (MR_String) ";\n");
                        }
                        {
                          ll_backend__fact_table__Var_141 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ll_backend__fact_table__Var_139);
                        }
                        {
                          ll_backend__fact_table__Var_142 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__VarName_34, ll_backend__fact_table__Var_141);
                        }
                        {
                          ll_backend__fact_table__C_Code0_50 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__fact_table__Var_142);
                        }
                      }
                    {
                      ll_backend__fact_table__generate_fact_lookup_code_7_p_0(ll_backend__fact_table__PredName_1, ll_backend__fact_table__Var_87, ll_backend__fact_table__Types_39, ll_backend__fact_table__ModuleInfo_4, ll_backend__fact_table__NextArgNum_44, ll_backend__fact_table__FactTableSize_6, &ll_backend__fact_table__C_Code1_51);
                    }
                    {
                      mercury__string__append_3_p_2(ll_backend__fact_table__C_Code0_50, ll_backend__fact_table__C_Code1_51, ll_backend__fact_table__HeadVar__7_7);
                    }
                  }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Var_87;
                      MR_Word ll_backend__fact_table__next_value_of_HeadVar__3_3 = ll_backend__fact_table__Types_39;
                      MR_Integer ll_backend__fact_table__next_value_of_ArgNum_5 = ll_backend__fact_table__NextArgNum_44;

                      ll_backend__fact_table__ArgNum_5 = ll_backend__fact_table__next_value_of_ArgNum_5;
                      ll_backend__fact_table__HeadVar__3_3 = ll_backend__fact_table__next_value_of_HeadVar__3_3;
                      ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__generate_nondet_proc_code_5_p_0(
  MR_Word ll_backend__fact_table__PragmaVars_6,
  MR_String ll_backend__fact_table__PredName_7,
  MR_Integer ll_backend__fact_table__ProcID_8,
  MR_String * ll_backend__fact_table__ExtraCodeLabel_9,
  MR_String * ll_backend__fact_table__ProcCode_10)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__Arity_12;
    MR_Integer ll_backend__fact_table__ProcInt_13;
    MR_String ll_backend__fact_table__NamesString_14;
    MR_String ll_backend__fact_table__Var_32;
    MR_Word ll_backend__fact_table__Var_38;
    MR_String ll_backend__fact_table__Var_39;
    MR_String ll_backend__fact_table__Var_41;
    MR_String ll_backend__fact_table__Var_42;
    MR_String ll_backend__fact_table__Var_49;
    MR_String ll_backend__fact_table__Var_51;
    MR_String ll_backend__fact_table__Var_52;
    MR_String ll_backend__fact_table__Var_55;
    MR_String ll_backend__fact_table__Var_57;
    MR_String ll_backend__fact_table__Var_58;
    MR_String ll_backend__fact_table__Var_60;
    MR_String ll_backend__fact_table__Var_61;

    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0, ll_backend__fact_table__PragmaVars_6, &ll_backend__fact_table__Arity_12);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_8, &ll_backend__fact_table__ProcInt_13);
    }
    ll_backend__fact_table__Var_38 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_38, ll_backend__fact_table__ProcInt_13, &ll_backend__fact_table__Var_32);
    }
    {
      ll_backend__fact_table__Var_39 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_32, (MR_String) "_xx");
    }
    {
      ll_backend__fact_table__Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__fact_table__Var_39);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_38, ll_backend__fact_table__Arity_12, &ll_backend__fact_table__Var_42);
    }
    {
      ll_backend__fact_table__Var_49 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_42, ll_backend__fact_table__Var_41);
    }
    {
      ll_backend__fact_table__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__fact_table__Var_49);
    }
    {
      ll_backend__fact_table__Var_52 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredName_7, ll_backend__fact_table__Var_51);
    }
    {
      *ll_backend__fact_table__ExtraCodeLabel_9 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ll_backend__fact_table__Var_52);
    }
    {
      ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(ll_backend__fact_table__PragmaVars_6, &ll_backend__fact_table__NamesString_14);
    }
    {
      ll_backend__fact_table__Var_55 = mercury__string__f_43_43_2_f_0(*ll_backend__fact_table__ExtraCodeLabel_9, (MR_String) "));\n    }\n    ");
    }
    {
      ll_backend__fact_table__Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ");\n        MR_GOTO(MR_ENTRY(", ll_backend__fact_table__Var_55);
    }
    {
      ll_backend__fact_table__Var_58 = mercury__string__f_43_43_2_f_0(*ll_backend__fact_table__ExtraCodeLabel_9, ll_backend__fact_table__Var_57);
    }
    {
      ll_backend__fact_table__Var_60 = mercury__string__f_43_43_2_f_0((MR_String) " to stop the compiler giving a warning.\n    **\n    ** Pop off the nondet stack frame that the pragma c_code generates\n    ** then jump to the code where the wor" "k is actually done.\n    */\n\n    MR_maxfr_word = MR_prevfr_slot_word(MR_curfr);\n    MR_curfr_word = MR_succfr_slot_word(MR_curfr);\n    {\n        MR_declare_entry" "(", ll_backend__fact_table__Var_58);
    }
    {
      ll_backend__fact_table__Var_61 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__NamesString_14, ll_backend__fact_table__Var_60);
    }
    {
      *ll_backend__fact_table__ProcCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n    /*\n    ** Mention arguments ", ll_backend__fact_table__Var_61);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_String * ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__fact_table__HeadVar__2_2 = (MR_String) "";
    else
      {
        MR_String ll_backend__fact_table__Name_4;
        MR_Word ll_backend__fact_table__PVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ll_backend__fact_table__NamesString0_9;
        MR_Word ll_backend__fact_table__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Var_11;
        MR_Word ll_backend__fact_table__Var_12;
        MR_Word ll_backend__fact_table__Var_14;
        MR_Word ll_backend__fact_table__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_10, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Var_5;
        MR_Word ll_backend__fact_table__Var_6;

        ll_backend__fact_table__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_10, (MR_Integer) 1)));
        ll_backend__fact_table__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_10, (MR_Integer) 2)));
        ll_backend__fact_table__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_10, (MR_Integer) 3)));
        {
          ll_backend__fact_table__pragma_vars_to_names_string_2_p_0(ll_backend__fact_table__PVars_7, &ll_backend__fact_table__NamesString0_9);
        }
        {
          ll_backend__fact_table__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_14, 0) = ((MR_Box) (ll_backend__fact_table__NamesString0_9));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__fact_table__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_12, 0) = ((MR_Box) ((MR_String) ", "));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_12, 1) = ((MR_Box) (ll_backend__fact_table__Var_14));
        }
        {
          ll_backend__fact_table__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_11, 0) = ((MR_Box) (ll_backend__fact_table__Name_4));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_11, 1) = ((MR_Box) (ll_backend__fact_table__Var_12));
        }
        {
          mercury__string__append_list_2_p_0(ll_backend__fact_table__Var_11, ll_backend__fact_table__HeadVar__2_2);
        }
      }
  }
}

void MR_CALL 
ll_backend__fact_table__fact_table_compile_facts_11_p_0(
  MR_Word ll_backend__fact_table__PredName_12,
  MR_Integer ll_backend__fact_table__Arity_13,
  MR_String ll_backend__fact_table__FileName_14,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_28,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_PredInfo_29,
  MR_Word ll_backend__fact_table__Context_16,
  MR_Word ll_backend__fact_table__ModuleInfo_17,
  MR_String * ll_backend__fact_table__C_HeaderCode_18,
  MR_Integer * ll_backend__fact_table__PrimaryProcID_19)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Globals_21;
    MR_Word ll_backend__fact_table__SeeResult_22;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_17, &ll_backend__fact_table__Globals_21);
    }
    {
      mercury__io__see_4_p_0(ll_backend__fact_table__FileName_14, &ll_backend__fact_table__SeeResult_22);
    }
    if ((ll_backend__fact_table__SeeResult_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__fact_table__ModuleName_23;
        MR_String ll_backend__fact_table__OutputFileName_24;
        MR_Word ll_backend__fact_table__OpenResult_25;

        {
          hlds__hlds_module__module_info_get_name_2_p_0(ll_backend__fact_table__ModuleInfo_17, &ll_backend__fact_table__ModuleName_23);
        }
        {
          parse_tree__file_names__fact_table_file_name_8_p_0(ll_backend__fact_table__Globals_21, ll_backend__fact_table__ModuleName_23, ll_backend__fact_table__FileName_14, (MR_String) ".c", (MR_Integer) 0, &ll_backend__fact_table__OutputFileName_24);
        }
        {
          mercury__io__open_output_4_p_0(ll_backend__fact_table__OutputFileName_24, &ll_backend__fact_table__OpenResult_25);
        }
        if (((MR_tag((MR_Word) ll_backend__fact_table__OpenResult_25)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__fact_table__Error_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__OpenResult_25, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_40;

            {
              ll_backend__fact_table__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_40, 0) = ((MR_Box) (ll_backend__fact_table__Context_16));
            }
            {
              ll_backend__fact_table__print_file_open_error_7_p_0(ll_backend__fact_table__Globals_21, ll_backend__fact_table__Var_40, ll_backend__fact_table__FileName_14, (MR_String) "output", ll_backend__fact_table__Error_27);
            }
            *ll_backend__fact_table__C_HeaderCode_18 = (MR_String) "";
            {
              *ll_backend__fact_table__PrimaryProcID_19 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
            *ll_backend__fact_table__STATE_VARIABLE_PredInfo_29 = ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_28;
          }
        else
          {
            MR_Word ll_backend__fact_table__OutputStream_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__OpenResult_25, (MR_Integer) 0)));

            {
              ll_backend__fact_table__fact_table_compile_facts_2_13_p_0(ll_backend__fact_table__PredName_12, ll_backend__fact_table__Arity_13, ll_backend__fact_table__FileName_14, ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_28, ll_backend__fact_table__STATE_VARIABLE_PredInfo_29, ll_backend__fact_table__Context_16, ll_backend__fact_table__ModuleInfo_17, ll_backend__fact_table__C_HeaderCode_18, ll_backend__fact_table__PrimaryProcID_19, ll_backend__fact_table__OutputFileName_24, ll_backend__fact_table__OutputStream_26);
            }
          }
      }
    else
      {
        MR_Word ll_backend__fact_table__Var_33;
        MR_Word ll_backend__fact_table__Error_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__SeeResult_22, (MR_Integer) 0)));
        MR_String ll_backend__fact_table__ErrorMsg_54;
        MR_String ll_backend__fact_table__Msg_55;
        MR_Word ll_backend__fact_table__Pieces_56;
        MR_Word ll_backend__fact_table__Var_63;
        MR_Word ll_backend__fact_table__Var_64;
        MR_Word ll_backend__fact_table__Var_66;
        MR_Word ll_backend__fact_table__Var_67;
        MR_Word ll_backend__fact_table__Var_71;
        MR_String ll_backend__fact_table__Var_77;

        {
          ll_backend__fact_table__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_33, 0) = ((MR_Box) (ll_backend__fact_table__Context_16));
        }
        {
          mercury__io__error_message_2_p_0(ll_backend__fact_table__Error_45, &ll_backend__fact_table__ErrorMsg_54);
        }
        {
          ll_backend__fact_table__Var_77 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FileName_14, (MR_String) "\' for input:");
        }
        {
          ll_backend__fact_table__Msg_55 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", ll_backend__fact_table__Var_77);
        }
        {
          ll_backend__fact_table__Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_63, 1) = ((MR_Box) (ll_backend__fact_table__Msg_55));
        }
        {
          ll_backend__fact_table__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_67, 1) = ((MR_Box) (ll_backend__fact_table__ErrorMsg_54));
        }
        {
          ll_backend__fact_table__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_66, 0) = ((MR_Box) (ll_backend__fact_table__Var_67));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[63])));
        }
        {
          ll_backend__fact_table__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_64, 1) = ((MR_Box) (ll_backend__fact_table__Var_66));
        }
        {
          ll_backend__fact_table__Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Pieces_56, 0) = ((MR_Box) (ll_backend__fact_table__Var_63));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Pieces_56, 1) = ((MR_Box) (ll_backend__fact_table__Var_64));
        }
        {
          ll_backend__fact_table__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_71, 0) = ((MR_Box) (ll_backend__fact_table__Var_33));
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_71, 1) = ((MR_Box) (ll_backend__fact_table__Pieces_56));
        }
        {
          ll_backend__fact_table__print_error_report_4_p_0(ll_backend__fact_table__Globals_21, ll_backend__fact_table__Var_71);
        }
        *ll_backend__fact_table__C_HeaderCode_18 = (MR_String) "";
        {
          *ll_backend__fact_table__PrimaryProcID_19 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
        *ll_backend__fact_table__STATE_VARIABLE_PredInfo_29 = ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_28;
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__fact_table_compile_facts_2_13_p_0(
  MR_Word ll_backend__fact_table__PredName_14,
  MR_Integer ll_backend__fact_table__Arity_15,
  MR_String ll_backend__fact_table__FileName_16,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_62,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_PredInfo_63,
  MR_Word ll_backend__fact_table__Context_18,
  MR_Word ll_backend__fact_table__ModuleInfo_19,
  MR_String * ll_backend__fact_table__C_HeaderCode_20,
  MR_Integer * ll_backend__fact_table__PrimaryProcID_21,
  MR_String ll_backend__fact_table__OutputFileName_22,
  MR_Word ll_backend__fact_table__OutputStream_23)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Types_25;
    MR_Word ll_backend__fact_table__FactArgInfos0_26;
    MR_Word ll_backend__fact_table__CheckProcs_27;
    MR_Word ll_backend__fact_table__ExistsAllInMode_28;
    MR_Word ll_backend__fact_table__WriteHashTables_29;
    MR_Word ll_backend__fact_table__WriteDataTable_30;
    MR_Word ll_backend__fact_table__FactArgInfos_31;
    MR_Word ll_backend__fact_table__Pass1Errors_32;
    MR_String ll_backend__fact_table__C_HeaderCode0_33;
    MR_String ll_backend__fact_table__StructName_34;
    MR_Word ll_backend__fact_table__Pass1HeaderErrors_35;
    MR_Word ll_backend__fact_table__Globals_36;
    MR_Word ll_backend__fact_table__WriteDataAfterSorting_40;
    MR_String ll_backend__fact_table__DataFileName_53;
    MR_Word ll_backend__fact_table__STATE_VARIABLE_PredInfo_66_66;

    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_62, &ll_backend__fact_table__Types_25);
    }
    {
      ll_backend__fact_table__init_fact_arg_infos_2_p_0(ll_backend__fact_table__Types_25, &ll_backend__fact_table__FactArgInfos0_26);
    }
    {
      ll_backend__fact_table__infer_determinism_pass_1_12_p_0(ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_62, &ll_backend__fact_table__STATE_VARIABLE_PredInfo_66_66, ll_backend__fact_table__Context_18, ll_backend__fact_table__ModuleInfo_19, &ll_backend__fact_table__CheckProcs_27, &ll_backend__fact_table__ExistsAllInMode_28, &ll_backend__fact_table__WriteHashTables_29, &ll_backend__fact_table__WriteDataTable_30, ll_backend__fact_table__FactArgInfos0_26, &ll_backend__fact_table__FactArgInfos_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__Pass1Errors_32);
    }
    {
      ll_backend__fact_table__create_fact_table_header_7_p_0(ll_backend__fact_table__PredName_14, ll_backend__fact_table__STATE_VARIABLE_PredInfo_66_66, ll_backend__fact_table__FactArgInfos_31, &ll_backend__fact_table__C_HeaderCode0_33, &ll_backend__fact_table__StructName_34, ll_backend__fact_table__Pass1Errors_32, &ll_backend__fact_table__Pass1HeaderErrors_35);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_19, &ll_backend__fact_table__Globals_36);
    }
    if ((ll_backend__fact_table__Pass1HeaderErrors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__fact_table__ProcStreams_37;
        MR_Word ll_backend__fact_table__OpenErrors_38;
        MR_Word ll_backend__fact_table__MaybeOutput_39;
        MR_Integer ll_backend__fact_table__NumFacts_43;
        MR_Word ll_backend__fact_table__CompileErrors_44;
        MR_String ll_backend__fact_table__C_HeaderCode2_47;
        MR_Word ll_backend__fact_table__ProcFiles_48;
        MR_Word ll_backend__fact_table__OpenCompileErrors_49;
        MR_String ll_backend__fact_table__Var_69;

        {
          ll_backend__fact_table__Var_69 = ll_backend__fact_table__fact_table_file_header_1_f_0(ll_backend__fact_table__FileName_16);
        }
        {
          mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_23, ll_backend__fact_table__Var_69);
        }
        {
          mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_23, ll_backend__fact_table__C_HeaderCode0_33);
        }
        {
          ll_backend__fact_table__open_sort_files_6_p_0(ll_backend__fact_table__CheckProcs_27, &ll_backend__fact_table__ProcStreams_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__OpenErrors_38);
        }
        switch (ll_backend__fact_table__WriteDataTable_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ll_backend__fact_table__MaybeOutput_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__fact_table__WriteDataAfterSorting_40 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            if ((ll_backend__fact_table__CheckProcs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ll_backend__fact_table__Var_74;

                {
                  ll_backend__fact_table__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_74, 0) = ((MR_Box) (ll_backend__fact_table__OutputStream_23));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_74, 1) = ((MR_Box) (ll_backend__fact_table__StructName_34));
                }
                {
                  ll_backend__fact_table__MaybeOutput_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeOutput_39, 0) = ((MR_Box) (ll_backend__fact_table__Var_74));
                }
                {
                  ll_backend__fact_table__write_new_data_array_5_p_0(ll_backend__fact_table__OutputStream_23, ll_backend__fact_table__StructName_34, (MR_Integer) 0);
                }
                ll_backend__fact_table__WriteDataAfterSorting_40 = (MR_Integer) 0;
              }
            else
              {
                ll_backend__fact_table__MaybeOutput_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__fact_table__WriteDataAfterSorting_40 = (MR_Integer) 1;
              }
            break;
        }
        {
          ll_backend__fact_table__compile_facts_13_p_0(ll_backend__fact_table__PredName_14, ll_backend__fact_table__Arity_15, ll_backend__fact_table__STATE_VARIABLE_PredInfo_66_66, ll_backend__fact_table__ModuleInfo_19, ll_backend__fact_table__FactArgInfos_31, ll_backend__fact_table__ProcStreams_37, ll_backend__fact_table__MaybeOutput_39, (MR_Integer) 0, &ll_backend__fact_table__NumFacts_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__CompileErrors_44);
        }
        {
          mercury__io__seen_2_p_0();
        }
        if ((ll_backend__fact_table__MaybeOutput_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__fact_table__C_HeaderCode2_47 = (MR_String) "";
        else
          {
            MR_Integer ll_backend__fact_table__FactTableSize_46;

            {
              ll_backend__fact_table__write_closing_brace_3_p_0(ll_backend__fact_table__OutputStream_23);
            }
            {
              ll_backend__fact_table__fact_table_size_2_p_0(ll_backend__fact_table__Globals_36, &ll_backend__fact_table__FactTableSize_46);
            }
            {
              ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(ll_backend__fact_table__NumFacts_43, ll_backend__fact_table__FactTableSize_46, ll_backend__fact_table__StructName_34, ll_backend__fact_table__OutputStream_23, &ll_backend__fact_table__C_HeaderCode2_47);
            }
          }
        {
          ll_backend__fact_table__close_sort_files_4_p_0(ll_backend__fact_table__ProcStreams_37, &ll_backend__fact_table__ProcFiles_48);
        }
        {
          ll_backend__fact_table__OpenCompileErrors_49 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__fact_table_scalar_common_2[0], ll_backend__fact_table__OpenErrors_38, ll_backend__fact_table__CompileErrors_44);
        }
        if ((ll_backend__fact_table__OpenCompileErrors_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__fact_table__ProcTable0_50;
            MR_Word ll_backend__fact_table__ProcTable_51;
            MR_Word ll_backend__fact_table__DataFileNameResult_52;

            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__fact_table__STATE_VARIABLE_PredInfo_66_66, &ll_backend__fact_table__ProcTable0_50);
            }
            {
              ll_backend__fact_table__infer_determinism_pass_2_7_p_0(ll_backend__fact_table__ProcFiles_48, ll_backend__fact_table__Globals_36, ll_backend__fact_table__ExistsAllInMode_28, ll_backend__fact_table__ProcTable0_50, &ll_backend__fact_table__ProcTable_51);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ll_backend__fact_table__ProcTable_51, ll_backend__fact_table__STATE_VARIABLE_PredInfo_66_66, ll_backend__fact_table__STATE_VARIABLE_PredInfo_63);
            }
            {
              mercury__io__make_temp_file_3_p_0(&ll_backend__fact_table__DataFileNameResult_52);
            }
            if (((MR_tag((MR_Word) ll_backend__fact_table__DataFileNameResult_52)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word ll_backend__fact_table__Error_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__DataFileNameResult_52, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__ErrorReport_57;
                MR_Word ll_backend__fact_table__Var_89;
                MR_Word ll_backend__fact_table__Var_92;
                MR_Word ll_backend__fact_table__Var_93;
                MR_String ll_backend__fact_table__Var_94;

                {
                  ll_backend__fact_table__Var_94 = mercury__io__error_message_1_f_0(ll_backend__fact_table__Error_56);
                }
                {
                  ll_backend__fact_table__Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_93, 1) = ((MR_Box) (ll_backend__fact_table__Var_94));
                }
                {
                  ll_backend__fact_table__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_92, 0) = ((MR_Box) (ll_backend__fact_table__Var_93));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[63])));
                }
                {
                  ll_backend__fact_table__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[67])));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_89, 1) = ((MR_Box) (ll_backend__fact_table__Var_92));
                }
                {
                  ll_backend__fact_table__ErrorReport_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__ErrorReport_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__ErrorReport_57, 1) = ((MR_Box) (ll_backend__fact_table__Var_89));
                }
                {
                  ll_backend__fact_table__print_error_report_4_p_0(ll_backend__fact_table__Globals_36, ll_backend__fact_table__ErrorReport_57);
                }
                *ll_backend__fact_table__C_HeaderCode_20 = ll_backend__fact_table__C_HeaderCode0_33;
                {
                  *ll_backend__fact_table__PrimaryProcID_21 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                }
                ll_backend__fact_table__DataFileName_53 = (MR_String) "";
              }
            else
              {
                MR_String ll_backend__fact_table__C_HeaderCode1_54;
                MR_String ll_backend__fact_table__C_HeaderCode3_55;
                MR_Word ll_backend__fact_table__Var_101;
                MR_Word ll_backend__fact_table__Var_102;
                MR_Word ll_backend__fact_table__Var_103;
                MR_Word ll_backend__fact_table__Var_104;

                ll_backend__fact_table__DataFileName_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__DataFileNameResult_52, (MR_Integer) 0)));
                {
                  ll_backend__fact_table__write_fact_table_arrays_14_p_0(ll_backend__fact_table__ProcFiles_48, ll_backend__fact_table__DataFileName_53, ll_backend__fact_table__StructName_34, ll_backend__fact_table__ProcTable_51, ll_backend__fact_table__ModuleInfo_19, ll_backend__fact_table__NumFacts_43, ll_backend__fact_table__FactArgInfos_31, ll_backend__fact_table__WriteHashTables_29, ll_backend__fact_table__WriteDataAfterSorting_40, ll_backend__fact_table__OutputStream_23, &ll_backend__fact_table__C_HeaderCode1_54, ll_backend__fact_table__PrimaryProcID_21);
                }
                {
                  ll_backend__fact_table__write_fact_table_numfacts_6_p_0(ll_backend__fact_table__OutputStream_23, ll_backend__fact_table__PredName_14, ll_backend__fact_table__NumFacts_43, &ll_backend__fact_table__C_HeaderCode3_55);
                }
                {
                  ll_backend__fact_table__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_104, 0) = ((MR_Box) (ll_backend__fact_table__C_HeaderCode3_55));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ll_backend__fact_table__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_103, 0) = ((MR_Box) (ll_backend__fact_table__C_HeaderCode2_47));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_103, 1) = ((MR_Box) (ll_backend__fact_table__Var_104));
                }
                {
                  ll_backend__fact_table__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_102, 0) = ((MR_Box) (ll_backend__fact_table__C_HeaderCode1_54));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_102, 1) = ((MR_Box) (ll_backend__fact_table__Var_103));
                }
                {
                  ll_backend__fact_table__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_101, 0) = ((MR_Box) (ll_backend__fact_table__C_HeaderCode0_33));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_101, 1) = ((MR_Box) (ll_backend__fact_table__Var_102));
                }
                {
                  mercury__string__append_list_2_p_0(ll_backend__fact_table__Var_101, ll_backend__fact_table__C_HeaderCode_20);
                }
              }
          }
        else
          {
            {
              ll_backend__fact_table__print_error_reports_4_p_0(ll_backend__fact_table__Globals_36, ll_backend__fact_table__OpenCompileErrors_49);
            }
            *ll_backend__fact_table__C_HeaderCode_20 = ll_backend__fact_table__C_HeaderCode0_33;
            {
              *ll_backend__fact_table__PrimaryProcID_21 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
            ll_backend__fact_table__DataFileName_53 = (MR_String) "";
            *ll_backend__fact_table__STATE_VARIABLE_PredInfo_63 = ll_backend__fact_table__STATE_VARIABLE_PredInfo_66_66;
          }
      }
    else
      {
        {
          ll_backend__fact_table__print_error_reports_4_p_0(ll_backend__fact_table__Globals_36, ll_backend__fact_table__Pass1HeaderErrors_35);
        }
        *ll_backend__fact_table__C_HeaderCode_20 = ll_backend__fact_table__C_HeaderCode0_33;
        {
          *ll_backend__fact_table__PrimaryProcID_21 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
        ll_backend__fact_table__WriteDataAfterSorting_40 = (MR_Integer) 0;
        ll_backend__fact_table__DataFileName_53 = (MR_String) "";
        *ll_backend__fact_table__STATE_VARIABLE_PredInfo_63 = ll_backend__fact_table__STATE_VARIABLE_PredInfo_66_66;
      }
    {
      mercury__io__close_output_3_p_0(ll_backend__fact_table__OutputStream_23);
    }
    {
      ll_backend__fact_table__maybe_append_data_table_6_p_0(ll_backend__fact_table__Globals_36, ll_backend__fact_table__WriteDataAfterSorting_40, ll_backend__fact_table__OutputFileName_22, ll_backend__fact_table__DataFileName_53);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__print_error_reports_4_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box ll_backend__fact_table__wrapper_arg_2,
  MR_Box * ll_backend__fact_table__wrapper_arg_3)
{
  {
    MR_Box ll_backend__fact_table__closure = ll_backend__fact_table__closure_arg;

    {
      ll_backend__fact_table__print_error_report_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__fact_table__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__print_error_reports_4_p_0(
  MR_Word ll_backend__fact_table__Globals_5,
  MR_Word ll_backend__fact_table__RevErrors_6)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__TypeInfo_13_13 = (MR_Word) &ll_backend__fact_table_scalar_common_2[0];
    MR_Word ll_backend__fact_table__Errors_8;
    MR_Word ll_backend__fact_table__Var_11;
    MR_Box ll_backend__fact_table__conv0_STATE_VARIABLE_IO_10;

    {
      mercury__list__reverse_2_p_0(ll_backend__fact_table__TypeInfo_13_13, ll_backend__fact_table__RevErrors_6, &ll_backend__fact_table__Errors_8);
    }
    {
      ll_backend__fact_table__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_11, 0) = ((MR_Box) (&ll_backend__fact_table_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_11, 1) = ((MR_Box) (ll_backend__fact_table__print_error_reports_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_11, 3) = ((MR_Box) (ll_backend__fact_table__Globals_5));
    }
    {
      mercury__list__foldl_4_p_2(ll_backend__fact_table__TypeInfo_13_13, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__fact_table__Var_11, ll_backend__fact_table__Errors_8, ((MR_Box) ((MR_Integer) 0)), &ll_backend__fact_table__conv0_STATE_VARIABLE_IO_10);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_numfacts_6_p_0(
  MR_Word ll_backend__fact_table__OutputStream_7,
  MR_Word ll_backend__fact_table__PredName_8,
  MR_Integer ll_backend__fact_table__NumFacts_9,
  MR_String * ll_backend__fact_table__C_HeaderCode_10)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__OldOutputStream_12;
    MR_String ll_backend__fact_table__Identifier_13;
    MR_Word ll_backend__fact_table__Var_18;
    MR_Word ll_backend__fact_table__Var_21;
    MR_String ll_backend__fact_table__Var_29;
    MR_Word ll_backend__fact_table__Var_14;

    {
      mercury__io__set_output_stream_4_p_0(ll_backend__fact_table__OutputStream_7, &ll_backend__fact_table__OldOutputStream_12);
    }
    {
      ll_backend__fact_table__Identifier_13 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__fact_table__PredName_8);
    }
    {
      ll_backend__fact_table__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_21, 0) = ((MR_Box) (ll_backend__fact_table__Identifier_13));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[66])));
    }
    {
      ll_backend__fact_table__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_18, 0) = ((MR_Box) ((MR_String) "const MR_Integer mercury__"));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_18, 1) = ((MR_Box) (ll_backend__fact_table__Var_21));
    }
    {
      mercury__io__write_strings_3_p_0(ll_backend__fact_table__Var_18);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__fact_table__NumFacts_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n\n");
    }
    {
      ll_backend__fact_table__Var_29 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Identifier_13, (MR_String) "_fact_table_num_facts;\n");
    }
    {
      *ll_backend__fact_table__C_HeaderCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "extern const MR_Integer mercury__", ll_backend__fact_table__Var_29);
    }
    {
      mercury__io__set_output_stream_4_p_0(ll_backend__fact_table__OldOutputStream_12, &ll_backend__fact_table__Var_14);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__maybe_append_data_table_6_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_String ll_backend__fact_table__OutputFileName_3,
  MR_String ll_backend__fact_table__DataFileName_4)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    switch (ll_backend__fact_table__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__fact_table__Command_17;
          MR_Word ll_backend__fact_table__Verbose_18;
          MR_Word ll_backend__fact_table__Result_19;
          MR_String ll_backend__fact_table__Var_25;
          MR_String ll_backend__fact_table__Var_54;
          MR_String ll_backend__fact_table__Var_55;

          {
            ll_backend__fact_table__Var_54 = mercury__string__f_43_43_2_f_0((MR_String) " >>", ll_backend__fact_table__OutputFileName_3);
          }
          {
            ll_backend__fact_table__Var_55 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__DataFileName_4, ll_backend__fact_table__Var_54);
          }
          {
            ll_backend__fact_table__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "cat ", ll_backend__fact_table__Var_55);
          }
          {
            parse_tree__module_cmds__make_command_string_3_p_0(ll_backend__fact_table__Var_25, (MR_Integer) 0, &ll_backend__fact_table__Command_17);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 56, &ll_backend__fact_table__Verbose_18);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(ll_backend__fact_table__Verbose_18, (MR_String) "% Invoking system command \140");
          }
          {
            libs__file_util__maybe_write_string_4_p_0(ll_backend__fact_table__Verbose_18, ll_backend__fact_table__Command_17);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(ll_backend__fact_table__Verbose_18, (MR_String) ", ...");
          }
          {
            mercury__io__call_system_4_p_0(ll_backend__fact_table__Command_17, &ll_backend__fact_table__Result_19);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(ll_backend__fact_table__Verbose_18, (MR_String) "done.\n");
          }
          if (((MR_tag((MR_Word) ll_backend__fact_table__Result_19)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ll_backend__fact_table__ErrorCode_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Result_19, (MR_Integer) 0)));
              MR_String ll_backend__fact_table__ErrorMsg_63;
              MR_String ll_backend__fact_table__ProgName_64;
              MR_String ll_backend__fact_table__Msg_65;
              MR_Word ll_backend__fact_table__Var_74;
              MR_Word ll_backend__fact_table__Var_76;
              MR_Word ll_backend__fact_table__Var_77;
              MR_Word ll_backend__fact_table__Var_79;
              MR_Word ll_backend__fact_table__Var_80;

              {
                mercury__io__error_message_2_p_0(ll_backend__fact_table__ErrorCode_22, &ll_backend__fact_table__ErrorMsg_63);
              }
              {
                mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ll_backend__fact_table__ProgName_64);
              }
              {
                ll_backend__fact_table__Msg_65 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ProgName_64, (MR_String) ": error executing system command \140cat:");
              }
              {
                ll_backend__fact_table__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_76, 1) = ((MR_Box) (ll_backend__fact_table__Msg_65));
              }
              {
                ll_backend__fact_table__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_80, 1) = ((MR_Box) (ll_backend__fact_table__ErrorMsg_63));
              }
              {
                ll_backend__fact_table__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_79, 0) = ((MR_Box) (ll_backend__fact_table__Var_80));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__fact_table__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_77, 1) = ((MR_Box) (ll_backend__fact_table__Var_79));
              }
              {
                ll_backend__fact_table__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_74, 0) = ((MR_Box) (ll_backend__fact_table__Var_76));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_74, 1) = ((MR_Box) (ll_backend__fact_table__Var_77));
              }
              {
                parse_tree__error_util__write_error_pieces_plain_4_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__Var_74);
              }
              {
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
            }
          else
            {
              MR_Integer ll_backend__fact_table__ExitStatus_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Result_19, (MR_Integer) 0)));

              ll_backend__fact_table__succeeded = (ll_backend__fact_table__ExitStatus_20 == (MR_Integer) 0);
              if (ll_backend__fact_table__succeeded)
                {
                }
              else
                {
                  {
                    parse_tree__error_util__write_error_pieces_plain_4_p_0(ll_backend__fact_table__HeadVar__1_1, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[65]));
                  }
                  {
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  }
                }
            }
          {
            ll_backend__fact_table__delete_temporary_file_4_p_0(ll_backend__fact_table__HeadVar__1_1, ll_backend__fact_table__DataFileName_4);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_arrays_14_p_0(
  MR_Word ll_backend__fact_table__ProcFiles0_15,
  MR_String ll_backend__fact_table__DataFileName_16,
  MR_String ll_backend__fact_table__StructName_17,
  MR_Word ll_backend__fact_table__ProcTable_18,
  MR_Word ll_backend__fact_table__ModuleInfo_19,
  MR_Integer ll_backend__fact_table__NumFacts_20,
  MR_Word ll_backend__fact_table__FactArgInfos_21,
  MR_Word ll_backend__fact_table__WriteHashTables_22,
  MR_Word ll_backend__fact_table__WriteDataTable_23,
  MR_Word ll_backend__fact_table__OutputStream_24,
  MR_String * ll_backend__fact_table__C_HeaderCode_25,
  MR_Integer * ll_backend__fact_table__PrimaryProcID_26)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__ProcFiles0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__fact_table__C_HeaderCode_25 = (MR_String) "";
        {
          *ll_backend__fact_table__PrimaryProcID_26 = hlds__hlds_pred__initial_proc_id_0_f_0();
        }
      }
    else
      {
        MR_String ll_backend__fact_table__FileName_28;
        MR_Word ll_backend__fact_table__ProcFiles1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__ProcFiles0_15, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__ProcFiles0_15, (MR_Integer) 0)));

        *ll_backend__fact_table__PrimaryProcID_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_39, (MR_Integer) 0)));
        ll_backend__fact_table__FileName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_39, (MR_Integer) 1)));
        switch (ll_backend__fact_table__WriteHashTables_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__fact_table__C_HeaderCode_25 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__fact_table__CreateFactMap_32;
              MR_Word ll_backend__fact_table__Result0_33;
              MR_Word ll_backend__fact_table__FactMap_34;
              MR_String ll_backend__fact_table__C_HeaderCode0_35;

              if ((ll_backend__fact_table__ProcFiles1_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__fact_table__CreateFactMap_32 = (MR_Integer) 0;
              else
                ll_backend__fact_table__CreateFactMap_32 = (MR_Integer) 1;
              {
                ll_backend__fact_table__write_primary_hash_table_16_p_0(*ll_backend__fact_table__PrimaryProcID_26, ll_backend__fact_table__FileName_28, ll_backend__fact_table__DataFileName_16, ll_backend__fact_table__StructName_17, ll_backend__fact_table__ProcTable_18, ll_backend__fact_table__ModuleInfo_19, ll_backend__fact_table__OutputStream_24, ll_backend__fact_table__FactArgInfos_21, ll_backend__fact_table__WriteDataTable_23, ll_backend__fact_table__NumFacts_20, ll_backend__fact_table__CreateFactMap_32, &ll_backend__fact_table__Result0_33, &ll_backend__fact_table__FactMap_34, &ll_backend__fact_table__C_HeaderCode0_35);
              }
              switch (ll_backend__fact_table__Result0_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *ll_backend__fact_table__C_HeaderCode_25 = ll_backend__fact_table__C_HeaderCode0_35;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String ll_backend__fact_table__C_HeaderCode1_36;

                    {
                      ll_backend__fact_table__write_secondary_hash_tables_11_p_0(ll_backend__fact_table__ProcFiles1_29, ll_backend__fact_table__StructName_17, ll_backend__fact_table__ProcTable_18, ll_backend__fact_table__ModuleInfo_19, ll_backend__fact_table__OutputStream_24, ll_backend__fact_table__FactMap_34, ll_backend__fact_table__FactArgInfos_21, (MR_String) "", &ll_backend__fact_table__C_HeaderCode1_36);
                    }
                    {
                      *ll_backend__fact_table__C_HeaderCode_25 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__C_HeaderCode0_35, ll_backend__fact_table__C_HeaderCode1_36);
                    }
                  }
                  break;
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_secondary_hash_tables_11_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_String ll_backend__fact_table__StructName_2,
  MR_Word ll_backend__fact_table__ProcTable_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_Word ll_backend__fact_table__OutputStream_5,
  MR_Word ll_backend__fact_table__FactMap_6,
  MR_Word ll_backend__fact_table__FactArgInfos_7,
  MR_String ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_0_8,
  MR_String * ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_9 = ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_0_8;
        else
          {
            MR_Integer ll_backend__fact_table__ProcID_24;
            MR_String ll_backend__fact_table__FileName_25;
            MR_Word ll_backend__fact_table__ProcFiles_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Globals_35;
            MR_Word ll_backend__fact_table__SeeResult_36;
            MR_Word ll_backend__fact_table__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));

            ll_backend__fact_table__ProcID_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_50, (MR_Integer) 0)));
            ll_backend__fact_table__FileName_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_50, (MR_Integer) 1)));
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_4, &ll_backend__fact_table__Globals_35);
            }
            {
              mercury__io__see_4_p_0(ll_backend__fact_table__FileName_25, &ll_backend__fact_table__SeeResult_36);
            }
            if ((ll_backend__fact_table__SeeResult_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Integer ll_backend__fact_table__ProcInt_37;
                MR_String ll_backend__fact_table__HashTableName_38;
                MR_String ll_backend__fact_table__New_C_HeaderCode_39;
                MR_Word ll_backend__fact_table__ProcInfo_40;
                MR_Word ll_backend__fact_table__ArgModes_41;
                MR_Word ll_backend__fact_table__MaybeFirstFact_42;
                MR_String ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_65_65;
                MR_String ll_backend__fact_table__Var_82;
                MR_String ll_backend__fact_table__Var_89;
                MR_String ll_backend__fact_table__Var_91;
                MR_String ll_backend__fact_table__Var_93;
                MR_Box ll_backend__fact_table__conv0_ProcInfo_40;

                {
                  hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_24, &ll_backend__fact_table__ProcInt_37);
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__ProcInt_37, &ll_backend__fact_table__Var_82);
                }
                {
                  ll_backend__fact_table__Var_89 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_82, (MR_String) "_");
                }
                {
                  ll_backend__fact_table__Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "_hash_table_", ll_backend__fact_table__Var_89);
                }
                {
                  ll_backend__fact_table__HashTableName_38 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__StructName_2, ll_backend__fact_table__Var_91);
                }
                {
                  ll_backend__fact_table__Var_93 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashTableName_38, (MR_String) "0;\n");
                }
                {
                  ll_backend__fact_table__New_C_HeaderCode_39 = mercury__string__f_43_43_2_f_0((MR_String) "extern struct MR_fact_table_hash_table_i ", ll_backend__fact_table__Var_93);
                }
                {
                  mercury__string__append_3_p_2(ll_backend__fact_table__New_C_HeaderCode_39, ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_0_8, &ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_65_65);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__fact_table__ProcTable_3, ll_backend__fact_table__ProcID_24, &ll_backend__fact_table__conv0_ProcInfo_40);
                }
                ll_backend__fact_table__ProcInfo_40 = ((MR_Word) ll_backend__fact_table__conv0_ProcInfo_40);
                {
                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__fact_table__ProcInfo_40, &ll_backend__fact_table__ArgModes_41);
                }
                {
                  ll_backend__fact_table__read_sort_file_line_6_p_0(ll_backend__fact_table__FactArgInfos_7, ll_backend__fact_table__ArgModes_41, ll_backend__fact_table__ModuleInfo_4, &ll_backend__fact_table__MaybeFirstFact_42);
                }
                if ((ll_backend__fact_table__MaybeFirstFact_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__io__seen_2_p_0();
                    }
                    *ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_9 = ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_65_65;
                  }
                else
                  {
                    MR_Word ll_backend__fact_table__FirstFact_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeFirstFact_42, (MR_Integer) 0)));
                    MR_Word ll_backend__fact_table__Var_44;

                    {
                      ll_backend__fact_table__build_hash_table_17_p_0((MR_Integer) 0, (MR_Integer) 0, ll_backend__fact_table__HashTableName_38, ll_backend__fact_table__StructName_2, (MR_Integer) 0, ll_backend__fact_table__ArgModes_41, ll_backend__fact_table__ModuleInfo_4, ll_backend__fact_table__FactArgInfos_7, (MR_Integer) 0, ll_backend__fact_table__OutputStream_5, ll_backend__fact_table__FirstFact_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, ll_backend__fact_table__FactMap_6, &ll_backend__fact_table__Var_44);
                    }
                    {
                      mercury__io__seen_2_p_0();
                    }
                    {
                      ll_backend__fact_table__delete_temporary_file_4_p_0(ll_backend__fact_table__Globals_35, ll_backend__fact_table__FileName_25);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__ProcFiles_26;
                      MR_String ll_backend__fact_table__next_value_of_STATE_VARIABLE_C_HeaderCode_0_8 = ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_65_65;

                      ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_0_8 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_C_HeaderCode_0_8;
                      ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
            else
              {
                MR_Word ll_backend__fact_table__Error_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__SeeResult_36, (MR_Integer) 0)));

                {
                  ll_backend__fact_table__print_file_open_error_7_p_0(ll_backend__fact_table__Globals_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__fact_table__FileName_25, (MR_String) "input", ll_backend__fact_table__Error_45);
                }
                *ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_9 = ll_backend__fact_table__STATE_VARIABLE_C_HeaderCode_0_8;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__write_primary_hash_table_16_p_0(
  MR_Integer ll_backend__fact_table__ProcID_17,
  MR_String ll_backend__fact_table__FileName_18,
  MR_String ll_backend__fact_table__DataFileName_19,
  MR_String ll_backend__fact_table__StructName_20,
  MR_Word ll_backend__fact_table__ProcTable_21,
  MR_Word ll_backend__fact_table__ModuleInfo_22,
  MR_Word ll_backend__fact_table__OutputStream_23,
  MR_Word ll_backend__fact_table__FactArgInfos_24,
  MR_Word ll_backend__fact_table__WriteDataTable_25,
  MR_Integer ll_backend__fact_table__NumFacts_26,
  MR_Word ll_backend__fact_table__CreateFactMap_27,
  MR_Word * ll_backend__fact_table__Result_28,
  MR_Word * ll_backend__fact_table__FactMap_29,
  MR_String * ll_backend__fact_table__C_HeaderCode_30)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word ll_backend__fact_table__FactMap0_32;
    MR_Word ll_backend__fact_table__Globals_33;
    MR_Word ll_backend__fact_table__SeeResult_34;

    {
      mercury__map__init_1_p_0(ll_backend__fact_table__TypeCtorInfo_84_84, ll_backend__fact_table__TypeCtorInfo_84_84, &ll_backend__fact_table__FactMap0_32);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_22, &ll_backend__fact_table__Globals_33);
    }
    {
      mercury__io__see_4_p_0(ll_backend__fact_table__FileName_18, &ll_backend__fact_table__SeeResult_34);
    }
    if ((ll_backend__fact_table__SeeResult_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        switch (ll_backend__fact_table__WriteDataTable_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__fact_table__Result_28 = (MR_Integer) 1;
              *ll_backend__fact_table__FactMap_29 = ll_backend__fact_table__FactMap0_32;
              *ll_backend__fact_table__C_HeaderCode_30 = (MR_String) "";
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__fact_table__OpenResult_35;
              MR_Word ll_backend__fact_table__MaybeDataStream_102;
              MR_String ll_backend__fact_table__C_HeaderCode0_103;

              {
                mercury__io__open_output_4_p_0(ll_backend__fact_table__DataFileName_19, &ll_backend__fact_table__OpenResult_35);
              }
              if (((MR_tag((MR_Word) ll_backend__fact_table__OpenResult_35)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ll_backend__fact_table__Error_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__OpenResult_35, (MR_Integer) 0)));

                  {
                    ll_backend__fact_table__print_file_open_error_7_p_0(ll_backend__fact_table__Globals_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__fact_table__DataFileName_19, (MR_String) "output", ll_backend__fact_table__Error_38);
                  }
                  ll_backend__fact_table__MaybeDataStream_102 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ll_backend__fact_table__Result_28 = (MR_Integer) 1;
                  *ll_backend__fact_table__FactMap_29 = ll_backend__fact_table__FactMap0_32;
                  ll_backend__fact_table__C_HeaderCode0_103 = (MR_String) "";
                }
              else
                {
                  MR_Word ll_backend__fact_table__DataStream_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__OpenResult_35, (MR_Integer) 0)));
                  MR_Integer ll_backend__fact_table__ProcInt_40;
                  MR_String ll_backend__fact_table__HashTableName_41;
                  MR_Word ll_backend__fact_table__ProcInfo_43;
                  MR_Word ll_backend__fact_table__ArgModes_44;
                  MR_Word ll_backend__fact_table__MaybeFirstFact_45;
                  MR_String ll_backend__fact_table__Var_87;
                  MR_String ll_backend__fact_table__Var_94;
                  MR_String ll_backend__fact_table__Var_96;
                  MR_String ll_backend__fact_table__Var_98;
                  MR_Box ll_backend__fact_table__conv0_ProcInfo_43;

                  {
                    ll_backend__fact_table__MaybeDataStream_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeDataStream_102, 0) = ((MR_Box) (ll_backend__fact_table__DataStream_36));
                  }
                  {
                    ll_backend__fact_table__write_new_data_array_5_p_0(ll_backend__fact_table__DataStream_36, ll_backend__fact_table__StructName_20, (MR_Integer) 0);
                  }
                  {
                    hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__fact_table__ProcID_17, &ll_backend__fact_table__ProcInt_40);
                  }
                  {
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__ProcInt_40, &ll_backend__fact_table__Var_87);
                  }
                  {
                    ll_backend__fact_table__Var_94 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_87, (MR_String) "_");
                  }
                  {
                    ll_backend__fact_table__Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "_hash_table_", ll_backend__fact_table__Var_94);
                  }
                  {
                    ll_backend__fact_table__HashTableName_41 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__StructName_20, ll_backend__fact_table__Var_96);
                  }
                  {
                    ll_backend__fact_table__Var_98 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__HashTableName_41, (MR_String) "0;\n");
                  }
                  {
                    ll_backend__fact_table__C_HeaderCode0_103 = mercury__string__f_43_43_2_f_0((MR_String) "extern struct MR_fact_table_hash_table_i ", ll_backend__fact_table__Var_98);
                  }
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__fact_table__ProcTable_21, ll_backend__fact_table__ProcID_17, &ll_backend__fact_table__conv0_ProcInfo_43);
                  }
                  ll_backend__fact_table__ProcInfo_43 = ((MR_Word) ll_backend__fact_table__conv0_ProcInfo_43);
                  {
                    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__fact_table__ProcInfo_43, &ll_backend__fact_table__ArgModes_44);
                  }
                  {
                    ll_backend__fact_table__read_sort_file_line_6_p_0(ll_backend__fact_table__FactArgInfos_24, ll_backend__fact_table__ArgModes_44, ll_backend__fact_table__ModuleInfo_22, &ll_backend__fact_table__MaybeFirstFact_45);
                  }
                  if ((ll_backend__fact_table__MaybeFirstFact_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *ll_backend__fact_table__Result_28 = (MR_Integer) 1;
                      *ll_backend__fact_table__FactMap_29 = ll_backend__fact_table__FactMap0_32;
                    }
                  else
                    {
                      MR_Word ll_backend__fact_table__FirstFact_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeFirstFact_45, (MR_Integer) 0)));

                      {
                        ll_backend__fact_table__build_hash_table_17_p_0((MR_Integer) 0, (MR_Integer) 0, ll_backend__fact_table__HashTableName_41, ll_backend__fact_table__StructName_20, (MR_Integer) 0, ll_backend__fact_table__ArgModes_44, ll_backend__fact_table__ModuleInfo_22, ll_backend__fact_table__FactArgInfos_24, (MR_Integer) 1, ll_backend__fact_table__OutputStream_23, ll_backend__fact_table__FirstFact_46, ll_backend__fact_table__MaybeDataStream_102, ll_backend__fact_table__CreateFactMap_27, ll_backend__fact_table__FactMap0_32, ll_backend__fact_table__FactMap_29);
                      }
                      *ll_backend__fact_table__Result_28 = (MR_Integer) 0;
                    }
                }
              if ((ll_backend__fact_table__MaybeDataStream_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__fact_table__C_HeaderCode_30 = ll_backend__fact_table__C_HeaderCode0_103;
              else
                {
                  MR_Word ll_backend__fact_table__DataStream1_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeDataStream_102, (MR_Integer) 0)));
                  MR_Integer ll_backend__fact_table__FactTableSize_48;
                  MR_String ll_backend__fact_table__C_HeaderCode1_49;

                  {
                    ll_backend__fact_table__write_closing_brace_3_p_0(ll_backend__fact_table__DataStream1_47);
                  }
                  {
                    ll_backend__fact_table__fact_table_size_2_p_0(ll_backend__fact_table__Globals_33, &ll_backend__fact_table__FactTableSize_48);
                  }
                  {
                    ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(ll_backend__fact_table__NumFacts_26, ll_backend__fact_table__FactTableSize_48, ll_backend__fact_table__StructName_20, ll_backend__fact_table__DataStream1_47, &ll_backend__fact_table__C_HeaderCode1_49);
                  }
                  {
                    mercury__io__close_output_3_p_0(ll_backend__fact_table__DataStream1_47);
                  }
                  {
                    *ll_backend__fact_table__C_HeaderCode_30 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__C_HeaderCode0_103, ll_backend__fact_table__C_HeaderCode1_49);
                  }
                }
            }
            break;
        }
        {
          mercury__io__seen_2_p_0();
        }
        {
          ll_backend__fact_table__delete_temporary_file_4_p_0(ll_backend__fact_table__Globals_33, ll_backend__fact_table__FileName_18);
        }
      }
    else
      {
        MR_Word ll_backend__fact_table__Error_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__SeeResult_34, (MR_Integer) 0)));

        {
          ll_backend__fact_table__print_file_open_error_7_p_0(ll_backend__fact_table__Globals_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__fact_table__FileName_18, (MR_String) "input", ll_backend__fact_table__Error_83);
        }
        *ll_backend__fact_table__Result_28 = (MR_Integer) 1;
        *ll_backend__fact_table__FactMap_29 = ll_backend__fact_table__FactMap0_32;
        *ll_backend__fact_table__C_HeaderCode_30 = (MR_String) "";
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__print_file_open_error_7_p_0(
  MR_Word ll_backend__fact_table__Globals_8,
  MR_Word ll_backend__fact_table__MaybeContext_9,
  MR_String ll_backend__fact_table__FileName_10,
  MR_String ll_backend__fact_table__InOrOut_11,
  MR_Word ll_backend__fact_table__Error_12)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__ErrorMsg_14;
    MR_String ll_backend__fact_table__Msg_15;
    MR_Word ll_backend__fact_table__Pieces_16;
    MR_Word ll_backend__fact_table__Var_25;
    MR_Word ll_backend__fact_table__Var_26;
    MR_Word ll_backend__fact_table__Var_28;
    MR_Word ll_backend__fact_table__Var_29;
    MR_Word ll_backend__fact_table__Var_33;
    MR_String ll_backend__fact_table__Var_36;
    MR_String ll_backend__fact_table__Var_38;
    MR_String ll_backend__fact_table__Var_39;

    {
      mercury__io__error_message_2_p_0(ll_backend__fact_table__Error_12, &ll_backend__fact_table__ErrorMsg_14);
    }
    {
      ll_backend__fact_table__Var_36 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__InOrOut_11, (MR_String) ":");
    }
    {
      ll_backend__fact_table__Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "\' for ", ll_backend__fact_table__Var_36);
    }
    {
      ll_backend__fact_table__Var_39 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FileName_10, ll_backend__fact_table__Var_38);
    }
    {
      ll_backend__fact_table__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", ll_backend__fact_table__Var_39);
    }
    {
      ll_backend__fact_table__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_25, 1) = ((MR_Box) (ll_backend__fact_table__Msg_15));
    }
    {
      ll_backend__fact_table__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_29, 1) = ((MR_Box) (ll_backend__fact_table__ErrorMsg_14));
    }
    {
      ll_backend__fact_table__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, 0) = ((MR_Box) (ll_backend__fact_table__Var_29));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[63])));
    }
    {
      ll_backend__fact_table__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_26, 1) = ((MR_Box) (ll_backend__fact_table__Var_28));
    }
    {
      ll_backend__fact_table__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Pieces_16, 0) = ((MR_Box) (ll_backend__fact_table__Var_25));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Pieces_16, 1) = ((MR_Box) (ll_backend__fact_table__Var_26));
    }
    {
      ll_backend__fact_table__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_33, 0) = ((MR_Box) (ll_backend__fact_table__MaybeContext_9));
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_33, 1) = ((MR_Box) (ll_backend__fact_table__Pieces_16));
    }
    {
      ll_backend__fact_table__print_error_report_4_p_0(ll_backend__fact_table__Globals_8, ll_backend__fact_table__Var_33);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__print_error_report_4_p_0(
  MR_Word ll_backend__fact_table__Globals_5,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__MaybeContext_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ll_backend__fact_table__Pieces_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));

    if ((ll_backend__fact_table__MaybeContext_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__error_util__write_error_pieces_plain_4_p_0(ll_backend__fact_table__Globals_5, ll_backend__fact_table__Pieces_7);
      }
    else
      {
        MR_Word ll_backend__fact_table__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeContext_6, (MR_Integer) 0)));

        {
          parse_tree__error_util__write_error_pieces_6_p_0(ll_backend__fact_table__Globals_5, ll_backend__fact_table__Context_9, (MR_Integer) 0, ll_backend__fact_table__Pieces_7);
        }
      }
    {
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__delete_temporary_file_4_p_0(
  MR_Word ll_backend__fact_table__Globals_5,
  MR_String ll_backend__fact_table__FileName_6)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Result_8;

    {
      mercury__io__remove_file_4_p_0(ll_backend__fact_table__FileName_6, &ll_backend__fact_table__Result_8);
    }
    if ((ll_backend__fact_table__Result_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__fact_table__ErrorCode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Result_8, (MR_Integer) 0)));
        MR_String ll_backend__fact_table__ErrorMsg_10;
        MR_String ll_backend__fact_table__ProgName_11;
        MR_String ll_backend__fact_table__Msg_12;
        MR_Word ll_backend__fact_table__Pieces_13;
        MR_Word ll_backend__fact_table__Var_25;
        MR_Word ll_backend__fact_table__Var_26;
        MR_Word ll_backend__fact_table__Var_28;
        MR_Word ll_backend__fact_table__Var_29;
        MR_String ll_backend__fact_table__Var_37;
        MR_String ll_backend__fact_table__Var_39;

        {
          mercury__io__error_message_2_p_0(ll_backend__fact_table__ErrorCode_9, &ll_backend__fact_table__ErrorMsg_10);
        }
        {
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ll_backend__fact_table__ProgName_11);
        }
        {
          ll_backend__fact_table__Var_37 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FileName_6, (MR_String) ":");
        }
        {
          ll_backend__fact_table__Var_39 = mercury__string__f_43_43_2_f_0((MR_String) ": error deleting file \140", ll_backend__fact_table__Var_37);
        }
        {
          ll_backend__fact_table__Msg_12 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ProgName_11, ll_backend__fact_table__Var_39);
        }
        {
          ll_backend__fact_table__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_25, 1) = ((MR_Box) (ll_backend__fact_table__Msg_12));
        }
        {
          ll_backend__fact_table__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_29, 1) = ((MR_Box) (ll_backend__fact_table__ErrorMsg_10));
        }
        {
          ll_backend__fact_table__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, 0) = ((MR_Box) (ll_backend__fact_table__Var_29));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[63])));
        }
        {
          ll_backend__fact_table__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_26, 1) = ((MR_Box) (ll_backend__fact_table__Var_28));
        }
        {
          ll_backend__fact_table__Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Pieces_13, 0) = ((MR_Box) (ll_backend__fact_table__Var_25));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Pieces_13, 1) = ((MR_Box) (ll_backend__fact_table__Var_26));
        }
        {
          parse_tree__error_util__write_error_pieces_plain_4_p_0(ll_backend__fact_table__Globals_5, ll_backend__fact_table__Pieces_13);
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_7_p_0(
  MR_Integer ll_backend__fact_table__NumFacts_8,
  MR_Integer ll_backend__fact_table__FactTableSize_9,
  MR_String ll_backend__fact_table__StructName_10,
  MR_Word ll_backend__fact_table__OutputStream_11,
  MR_String * ll_backend__fact_table__C_HeaderCode_12)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__PointerArrayName_14;
    MR_String ll_backend__fact_table__Var_18;
    MR_String ll_backend__fact_table__Var_19;
    MR_String ll_backend__fact_table__Var_21;
    MR_String ll_backend__fact_table__Var_24;
    MR_Word ll_backend__fact_table__Var_26;

    {
      ll_backend__fact_table__Var_21 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__StructName_10, (MR_String) "[]");
    }
    {
      ll_backend__fact_table__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "_struct *", ll_backend__fact_table__Var_21);
    }
    {
      ll_backend__fact_table__Var_18 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__StructName_10, ll_backend__fact_table__Var_19);
    }
    {
      ll_backend__fact_table__PointerArrayName_14 = mercury__string__f_43_43_2_f_0((MR_String) "const struct ", ll_backend__fact_table__Var_18);
    }
    {
      ll_backend__fact_table__Var_24 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PointerArrayName_14, (MR_String) ";\n");
    }
    {
      *ll_backend__fact_table__C_HeaderCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "extern ", ll_backend__fact_table__Var_24);
    }
    {
      ll_backend__fact_table__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_26, 0) = ((MR_Box) (ll_backend__fact_table__PointerArrayName_14));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[62])));
    }
    {
      mercury__io__write_strings_4_p_0(ll_backend__fact_table__OutputStream_11, ll_backend__fact_table__Var_26);
    }
    {
      ll_backend__fact_table__write_fact_table_pointer_array_2_7_p_0((MR_Integer) 0, ll_backend__fact_table__NumFacts_8, ll_backend__fact_table__FactTableSize_9, ll_backend__fact_table__StructName_10, ll_backend__fact_table__OutputStream_11);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_11, (MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_pointer_array_2_7_p_0(
  MR_Integer ll_backend__fact_table__CurrFact_8,
  MR_Integer ll_backend__fact_table__NumFacts_9,
  MR_Integer ll_backend__fact_table__FactTableSize_10,
  MR_String ll_backend__fact_table__StructName_11,
  MR_Word ll_backend__fact_table__OutputStream_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded = (ll_backend__fact_table__CurrFact_8 >= ll_backend__fact_table__NumFacts_9);

        if (ll_backend__fact_table__succeeded)
          {
          }
        else
          {
            MR_Integer ll_backend__fact_table__NextFact_14;
            MR_String ll_backend__fact_table__Var_29;

            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_12, (MR_String) "\t");
            }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_12, ll_backend__fact_table__StructName_11);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__CurrFact_8, &ll_backend__fact_table__Var_29);
            }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_12, ll_backend__fact_table__Var_29);
            }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_12, (MR_String) ",\n");
            }
            ll_backend__fact_table__NextFact_14 = (ll_backend__fact_table__CurrFact_8 + ll_backend__fact_table__FactTableSize_10);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__fact_table__next_value_of_CurrFact_8 = ll_backend__fact_table__NextFact_14;

              ll_backend__fact_table__CurrFact_8 = ll_backend__fact_table__next_value_of_CurrFact_8;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_17_p_0(
  MR_Integer ll_backend__fact_table__FactNum_18,
  MR_Integer ll_backend__fact_table__InputArgNum_19,
  MR_String ll_backend__fact_table__HashTableName_20,
  MR_String ll_backend__fact_table__StructName_21,
  MR_Integer ll_backend__fact_table__TableNum_22,
  MR_Word ll_backend__fact_table__ArgModes_23,
  MR_Word ll_backend__fact_table__ModuleInfo_24,
  MR_Word ll_backend__fact_table__Infos_25,
  MR_Word ll_backend__fact_table__IsPrimaryTable_26,
  MR_Word ll_backend__fact_table__OutputStream_27,
  MR_Word ll_backend__fact_table__FirstFact_28,
  MR_Word ll_backend__fact_table__MaybeDataStream_29,
  MR_Word ll_backend__fact_table__CreateFactMap_30,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactMap_0_39,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactMap_40)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__HashList_33;
    MR_Integer ll_backend__fact_table__Len_34;
    MR_Word ll_backend__fact_table__Globals_35;
    MR_Integer ll_backend__fact_table__HashSize_36;
    MR_Word ll_backend__fact_table__HashTable0_37;
    MR_Word ll_backend__fact_table__HashTable_38;
    MR_Word ll_backend__fact_table__Var_43;
    MR_Word ll_backend__fact_table__Map_51;

    {
      ll_backend__fact_table__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_43, 0) = ((MR_Box) (ll_backend__fact_table__FirstFact_28));
    }
    {
      ll_backend__fact_table__build_hash_table_2_19_p_0(ll_backend__fact_table__FactNum_18, ll_backend__fact_table__InputArgNum_19, ll_backend__fact_table__HashTableName_20, ll_backend__fact_table__StructName_21, ll_backend__fact_table__TableNum_22, ll_backend__fact_table__ArgModes_23, ll_backend__fact_table__ModuleInfo_24, ll_backend__fact_table__Infos_25, ll_backend__fact_table__IsPrimaryTable_26, ll_backend__fact_table__OutputStream_27, ll_backend__fact_table__Var_43, ll_backend__fact_table__MaybeDataStream_29, ll_backend__fact_table__CreateFactMap_30, ll_backend__fact_table__STATE_VARIABLE_FactMap_0_39, ll_backend__fact_table__STATE_VARIABLE_FactMap_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__HashList_33);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__HashList_33, &ll_backend__fact_table__Len_34);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_24, &ll_backend__fact_table__Globals_35);
    }
    {
      ll_backend__fact_table__calculate_hash_table_size_3_p_0(ll_backend__fact_table__Globals_35, ll_backend__fact_table__Len_34, &ll_backend__fact_table__HashSize_36);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, &ll_backend__fact_table__Map_51);
    }
    {
      ll_backend__fact_table__HashTable0_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable0_37, 0) = ((MR_Box) (ll_backend__fact_table__HashSize_36));
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable0_37, 1) = ((MR_Box) (ll_backend__fact_table__Map_51));
    }
    {
      ll_backend__fact_table__hash_table_from_list_4_p_0(ll_backend__fact_table__HashList_33, ll_backend__fact_table__HashSize_36, ll_backend__fact_table__HashTable0_37, &ll_backend__fact_table__HashTable_38);
    }
    {
      ll_backend__fact_table__write_hash_table_6_p_0(ll_backend__fact_table__OutputStream_27, ll_backend__fact_table__HashTableName_20, ll_backend__fact_table__TableNum_22, ll_backend__fact_table__HashTable_38);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_2_19_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box * ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_Box ll_backend__fact_table__closure = ll_backend__fact_table__closure_arg;
    MR_Word ll_backend__fact_table__conv0_LambdaHeadVar__2_81;

    {
      ll_backend__fact_table__IntroducedFrom__pred__build_hash_table_2__1624__1_2_p_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), &ll_backend__fact_table__conv0_LambdaHeadVar__2_81);
    }
    *ll_backend__fact_table__wrapper_arg_2 = ((MR_Box) (ll_backend__fact_table__conv0_LambdaHeadVar__2_81));
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_2_19_p_0(
  MR_Integer ll_backend__fact_table__FactNum_1,
  MR_Integer ll_backend__fact_table__InputArgNum_2,
  MR_String ll_backend__fact_table__HashTableName_3,
  MR_String ll_backend__fact_table__StructName_4,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_TableNum_0_5,
  MR_Word ll_backend__fact_table__ArgModes_6,
  MR_Word ll_backend__fact_table__ModuleInfo_7,
  MR_Word ll_backend__fact_table__Infos_8,
  MR_Word ll_backend__fact_table__IsPrimaryTable_9,
  MR_Word ll_backend__fact_table__OutputStream_10,
  MR_Word ll_backend__fact_table__HeadVar__11_11,
  MR_Word ll_backend__fact_table__MaybeDataStream_12,
  MR_Word ll_backend__fact_table__CreateFactMap_13,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactMap_0_14,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactMap_15,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_0_16,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashList_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__fact_table__STATE_VARIABLE_HashList_17 = ll_backend__fact_table__STATE_VARIABLE_HashList_0_16;
            *ll_backend__fact_table__STATE_VARIABLE_FactMap_15 = ll_backend__fact_table__STATE_VARIABLE_FactMap_0_14;
          }
        else
          {
            MR_Word ll_backend__fact_table__FirstFact_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__11_11, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__MatchingFacts_57;
            MR_Word ll_backend__fact_table__MaybeNextFact_58;
            MR_Word ll_backend__fact_table__Globals_59;
            MR_Integer ll_backend__fact_table__Len_68;
            MR_Integer ll_backend__fact_table__NextFactNum_69;
            MR_Word ll_backend__fact_table__STATE_VARIABLE_FactMap_78_78;
            MR_Integer ll_backend__fact_table__STATE_VARIABLE_TableNum_84_84;
            MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_85_85;

            {
              ll_backend__fact_table__top_level_collect_matching_facts_8_p_0(ll_backend__fact_table__FirstFact_51, &ll_backend__fact_table__MatchingFacts_57, &ll_backend__fact_table__MaybeNextFact_58, ll_backend__fact_table__Infos_8, ll_backend__fact_table__ArgModes_6, ll_backend__fact_table__ModuleInfo_7);
            }
            switch (ll_backend__fact_table__CreateFactMap_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__fact_table__STATE_VARIABLE_FactMap_78_78 = ll_backend__fact_table__STATE_VARIABLE_FactMap_0_14;
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__fact_table__update_fact_map_4_p_0(ll_backend__fact_table__FactNum_1, ll_backend__fact_table__MatchingFacts_57, ll_backend__fact_table__STATE_VARIABLE_FactMap_0_14, &ll_backend__fact_table__STATE_VARIABLE_FactMap_78_78);
                }
                break;
            }
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_7, &ll_backend__fact_table__Globals_59);
            }
            if ((ll_backend__fact_table__MaybeDataStream_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word ll_backend__fact_table__DataStream_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeDataStream_12, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__OutputData_65;
                MR_Word ll_backend__fact_table__VeryVerbose_66;
                MR_Integer ll_backend__fact_table__FactTableSize_67;

                {
                  mercury__list__map_3_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0, (MR_Word) &ll_backend__fact_table_scalar_common_1[3], (MR_Word) &ll_backend__fact_table_scalar_common_2[4], ll_backend__fact_table__MatchingFacts_57, &ll_backend__fact_table__OutputData_65);
                }
                {
                  libs__globals__lookup_bool_option_3_p_0(ll_backend__fact_table__Globals_59, (MR_Integer) 57, &ll_backend__fact_table__VeryVerbose_66);
                }
                {
                  libs__globals__lookup_int_option_3_p_0(ll_backend__fact_table__Globals_59, (MR_Integer) 323, &ll_backend__fact_table__FactTableSize_67);
                }
                {
                  ll_backend__fact_table__write_fact_table_data_8_p_0(ll_backend__fact_table__VeryVerbose_66, ll_backend__fact_table__FactNum_1, ll_backend__fact_table__FactTableSize_67, ll_backend__fact_table__OutputData_65, ll_backend__fact_table__StructName_4, ll_backend__fact_table__DataStream_60);
                }
              }
            {
              ll_backend__fact_table__do_build_hash_table_14_p_0(ll_backend__fact_table__Globals_59, ll_backend__fact_table__FactNum_1, ll_backend__fact_table__InputArgNum_2, ll_backend__fact_table__HashTableName_3, ll_backend__fact_table__STATE_VARIABLE_TableNum_0_5, &ll_backend__fact_table__STATE_VARIABLE_TableNum_84_84, ll_backend__fact_table__IsPrimaryTable_9, ll_backend__fact_table__OutputStream_10, ll_backend__fact_table__MatchingFacts_57, ll_backend__fact_table__STATE_VARIABLE_FactMap_78_78, ll_backend__fact_table__STATE_VARIABLE_HashList_0_16, &ll_backend__fact_table__STATE_VARIABLE_HashList_85_85);
            }
            {
              mercury__list__length_2_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0, ll_backend__fact_table__MatchingFacts_57, &ll_backend__fact_table__Len_68);
            }
            ll_backend__fact_table__NextFactNum_69 = (ll_backend__fact_table__FactNum_1 + ll_backend__fact_table__Len_68);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__fact_table__next_value_of_FactNum_1 = ll_backend__fact_table__NextFactNum_69;
              MR_Integer ll_backend__fact_table__next_value_of_STATE_VARIABLE_TableNum_0_5 = ll_backend__fact_table__STATE_VARIABLE_TableNum_84_84;
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__11_11 = ll_backend__fact_table__MaybeNextFact_58;
              MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_FactMap_0_14 = ll_backend__fact_table__STATE_VARIABLE_FactMap_78_78;
              MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashList_0_16 = ll_backend__fact_table__STATE_VARIABLE_HashList_85_85;

              ll_backend__fact_table__STATE_VARIABLE_HashList_0_16 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashList_0_16;
              ll_backend__fact_table__STATE_VARIABLE_FactMap_0_14 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_FactMap_0_14;
              ll_backend__fact_table__HeadVar__11_11 = ll_backend__fact_table__next_value_of_HeadVar__11_11;
              ll_backend__fact_table__STATE_VARIABLE_TableNum_0_5 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_TableNum_0_5;
              ll_backend__fact_table__FactNum_1 = ll_backend__fact_table__next_value_of_FactNum_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__update_fact_map_4_p_0(
  MR_Integer ll_backend__fact_table__FactNum_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactMap_0_3,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__STATE_VARIABLE_FactMap_4 = ll_backend__fact_table__STATE_VARIABLE_FactMap_0_3;
        else
          {
            MR_Word ll_backend__fact_table__Fact_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Facts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer ll_backend__fact_table__Index_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_10, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__STATE_VARIABLE_FactMap_18_18;
            MR_Integer ll_backend__fact_table__Var_19;
            MR_Word ll_backend__fact_table__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_10, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_10, (MR_Integer) 2)));

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__fact_table__Index_14, ((MR_Box) (ll_backend__fact_table__FactNum_1)), ll_backend__fact_table__STATE_VARIABLE_FactMap_0_3, &ll_backend__fact_table__STATE_VARIABLE_FactMap_18_18);
            }
            ll_backend__fact_table__Var_19 = (ll_backend__fact_table__FactNum_1 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__fact_table__next_value_of_FactNum_1 = ll_backend__fact_table__Var_19;
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Facts_11;
              MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_FactMap_0_3 = ll_backend__fact_table__STATE_VARIABLE_FactMap_18_18;

              ll_backend__fact_table__STATE_VARIABLE_FactMap_0_3 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_FactMap_0_3;
              ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
              ll_backend__fact_table__FactNum_1 = ll_backend__fact_table__next_value_of_FactNum_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_8_p_0(
  MR_Word ll_backend__fact_table__Fact_9,
  MR_Word * ll_backend__fact_table__MatchingFacts_10,
  MR_Word * ll_backend__fact_table__MaybeNextFact_11,
  MR_Word ll_backend__fact_table__Infos_12,
  MR_Word ll_backend__fact_table__ArgModes_13,
  MR_Word ll_backend__fact_table__ModuleInfo_14)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__MatchingFacts0_16;
    MR_Word ll_backend__fact_table__MatchingFacts1_17;

    {
      ll_backend__fact_table__top_level_collect_matching_facts_2_9_p_0(ll_backend__fact_table__Fact_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__MatchingFacts0_16, ll_backend__fact_table__MaybeNextFact_11, ll_backend__fact_table__Infos_12, ll_backend__fact_table__ArgModes_13, ll_backend__fact_table__ModuleInfo_14);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0, ll_backend__fact_table__MatchingFacts0_16, &ll_backend__fact_table__MatchingFacts1_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__fact_table__MatchingFacts_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Fact_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__MatchingFacts1_17));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__top_level_collect_matching_facts_2_9_p_0(
  MR_Word ll_backend__fact_table__Fact_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_0_27,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_28,
  MR_Word * ll_backend__fact_table__MaybeNextFact_12,
  MR_Word ll_backend__fact_table__Infos_13,
  MR_Word ll_backend__fact_table__ArgModes_14,
  MR_Word ll_backend__fact_table__ModuleInfo_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;
        MR_Word ll_backend__fact_table__MaybeSortFileLine_17;

        {
          ll_backend__fact_table__read_sort_file_line_6_p_0(ll_backend__fact_table__Infos_13, ll_backend__fact_table__ArgModes_14, ll_backend__fact_table__ModuleInfo_15, &ll_backend__fact_table__MaybeSortFileLine_17);
        }
        if ((ll_backend__fact_table__MaybeSortFileLine_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__fact_table__MaybeNextFact_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_28 = ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_0_27;
          }
        else
          {
            MR_Word ll_backend__fact_table__Fact1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeSortFileLine_17, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Arg1_19;
            MR_Word ll_backend__fact_table__Arg_23;
            MR_Word ll_backend__fact_table__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact1_18, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_33;
            MR_Integer ll_backend__fact_table__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact1_18, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact1_18, (MR_Integer) 2)));
            MR_Word ll_backend__fact_table__Var_20;
            MR_Integer ll_backend__fact_table__Var_25;
            MR_Word ll_backend__fact_table__Var_26;
            MR_Word ll_backend__fact_table__Var_24;

            ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Var_32)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__Arg1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_32, (MR_Integer) 0)));
                ll_backend__fact_table__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_32, (MR_Integer) 1)));
                ll_backend__fact_table__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_10, (MR_Integer) 0)));
                ll_backend__fact_table__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_10, (MR_Integer) 1)));
                ll_backend__fact_table__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_10, (MR_Integer) 2)));
                ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Var_33)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__Arg_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_33, (MR_Integer) 0)));
                    ll_backend__fact_table__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_33, (MR_Integer) 1)));
                  }
              }
            if (ll_backend__fact_table__succeeded)
              {
                {
                  ll_backend__fact_table__succeeded = mercury__term____Unify____const_0_0(ll_backend__fact_table__Arg_23, ll_backend__fact_table__Arg1_19);
                }
                if (ll_backend__fact_table__succeeded)
                  {
                    MR_Word ll_backend__fact_table__Var_34;

                    {
                      ll_backend__fact_table__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_34, 0) = ((MR_Box) (ll_backend__fact_table__Fact1_18));
                      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_34, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_0_27));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_MatchingFacts_0_27 = ll_backend__fact_table__Var_34;

                      ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_0_27 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_MatchingFacts_0_27;
                    }
                    continue;
                  }
                else
                  {
                    *ll_backend__fact_table__MaybeNextFact_12 = ll_backend__fact_table__MaybeSortFileLine_17;
                    *ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_28 = ll_backend__fact_table__STATE_VARIABLE_MatchingFacts_0_27;
                  }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.top_level_collect_matching_facts_2\'/9", (MR_String) "no input args");
                  return;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__do_build_hash_table_14_p_0(
  MR_Word ll_backend__fact_table__Globals_15,
  MR_Integer ll_backend__fact_table__FactNum_16,
  MR_Integer ll_backend__fact_table__InputArgNum_17,
  MR_String ll_backend__fact_table__HashTableName_18,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_TableNum_0_38,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_TableNum_39,
  MR_Word ll_backend__fact_table__IsPrimaryTable_20,
  MR_Word ll_backend__fact_table__OutputStream_21,
  MR_Word ll_backend__fact_table__Facts_22,
  MR_Word ll_backend__fact_table__FactMap_23,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_0_40,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashList_41)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__Facts_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.do_build_hash_table\'/14", (MR_String) "no facts");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__fact_table__Fact_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Facts_22, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Facts1_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Facts_22, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__Arg_28;
        MR_Integer ll_backend__fact_table__Index_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_26, (MR_Integer) 1)));
        MR_Integer ll_backend__fact_table__HashIndex_30;
        MR_Word ll_backend__fact_table__InputArgs_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_26, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_26, (MR_Integer) 2)));
        MR_Word ll_backend__fact_table__ArgPrime_74;
        MR_Word ll_backend__fact_table__Var_76;
        MR_Word ll_backend__fact_table__Var_75;

        {
          ll_backend__fact_table__succeeded = mercury__list__drop_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_const_0, ll_backend__fact_table__InputArgNum_17, ll_backend__fact_table__InputArgs_72, &ll_backend__fact_table__Var_76);
        }
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Var_76)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__ArgPrime_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_76, (MR_Integer) 0)));
                ll_backend__fact_table__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_76, (MR_Integer) 1)));
              }
          }
        if (ll_backend__fact_table__succeeded)
          ll_backend__fact_table__Arg_28 = ll_backend__fact_table__ArgPrime_74;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.fact_get_arg_and_index\'/4", (MR_String) "not enough input args");
              return;
            }
          }
        switch (ll_backend__fact_table__IsPrimaryTable_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box ll_backend__fact_table__conv0_HashIndex_30;

              {
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__fact_table__FactMap_23, ll_backend__fact_table__Index_29, &ll_backend__fact_table__conv0_HashIndex_30);
              }
              ll_backend__fact_table__HashIndex_30 = ((MR_Integer) ll_backend__fact_table__conv0_HashIndex_30);
            }
            break;
          case (MR_Integer) 1:
            ll_backend__fact_table__HashIndex_30 = ll_backend__fact_table__FactNum_16;
            break;
        }
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Facts1_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ll_backend__fact_table__succeeded)
          {
            MR_Word ll_backend__fact_table__Var_45;
            MR_Word ll_backend__fact_table__Var_46;

            {
              ll_backend__fact_table__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_46, 0) = ((MR_Box) (ll_backend__fact_table__HashIndex_30));
            }
            {
              ll_backend__fact_table__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_45, 0) = ((MR_Box) (ll_backend__fact_table__Arg_28));
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_45, 1) = ((MR_Box) (ll_backend__fact_table__Var_46));
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_45, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__fact_table__STATE_VARIABLE_HashList_41 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_45));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_HashList_0_40));
            }
            *ll_backend__fact_table__STATE_VARIABLE_TableNum_39 = ll_backend__fact_table__STATE_VARIABLE_TableNum_0_38;
          }
        else
          {
            MR_Integer ll_backend__fact_table__NextInputArgNum_31 = (ll_backend__fact_table__InputArgNum_17 + (MR_Integer) 1);
            MR_Word ll_backend__fact_table__InputArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_26, (MR_Integer) 0)));
            MR_Integer ll_backend__fact_table__N_35 = (ll_backend__fact_table__NextInputArgNum_31 + (MR_Integer) 1);
            MR_Integer ll_backend__fact_table__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_26, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_26, (MR_Integer) 2)));
            MR_Word ll_backend__fact_table__Var_36;

            {
              ll_backend__fact_table__succeeded = mercury__list__drop_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_const_0, ll_backend__fact_table__N_35, ll_backend__fact_table__InputArgs_32, &ll_backend__fact_table__Var_36);
            }
            if (ll_backend__fact_table__succeeded)
              {
                MR_Integer ll_backend__fact_table__ThisTableNum_37 = (ll_backend__fact_table__STATE_VARIABLE_TableNum_0_38 + (MR_Integer) 1);
                MR_Word ll_backend__fact_table__Var_55;
                MR_Word ll_backend__fact_table__Var_56;

                {
                  ll_backend__fact_table__build_hash_table_lower_levels_12_p_0(ll_backend__fact_table__Globals_15, ll_backend__fact_table__FactNum_16, ll_backend__fact_table__NextInputArgNum_31, ll_backend__fact_table__HashTableName_18, ll_backend__fact_table__ThisTableNum_37, ll_backend__fact_table__STATE_VARIABLE_TableNum_39, ll_backend__fact_table__IsPrimaryTable_20, ll_backend__fact_table__OutputStream_21, ll_backend__fact_table__Facts_22, ll_backend__fact_table__FactMap_23);
                }
                {
                  ll_backend__fact_table__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_56, 0) = ((MR_Box) (ll_backend__fact_table__ThisTableNum_37));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_56, 1) = ((MR_Box) (ll_backend__fact_table__HashTableName_18));
                }
                {
                  ll_backend__fact_table__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_55, 0) = ((MR_Box) (ll_backend__fact_table__Arg_28));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_55, 1) = ((MR_Box) (ll_backend__fact_table__Var_56));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_55, 2) = ((MR_Box) ((MR_Integer) -1));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__fact_table__STATE_VARIABLE_HashList_41 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_55));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_HashList_0_40));
                }
              }
            else
              {
                ll_backend__fact_table__succeeded = (ll_backend__fact_table__IsPrimaryTable_20 == (MR_Integer) 0);
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__hash_list_insert_many_7_p_0(ll_backend__fact_table__Facts_22, ll_backend__fact_table__IsPrimaryTable_20, ll_backend__fact_table__FactMap_23, ll_backend__fact_table__FactNum_16, ll_backend__fact_table__InputArgNum_17, ll_backend__fact_table__STATE_VARIABLE_HashList_0_40, ll_backend__fact_table__STATE_VARIABLE_HashList_41);
                  }
                else
                  {
                    MR_Word ll_backend__fact_table__Var_60;
                    MR_Word ll_backend__fact_table__Var_61;

                    {
                      ll_backend__fact_table__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_61, 0) = ((MR_Box) (ll_backend__fact_table__HashIndex_30));
                    }
                    {
                      ll_backend__fact_table__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_60, 0) = ((MR_Box) (ll_backend__fact_table__Arg_28));
                      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_60, 1) = ((MR_Box) (ll_backend__fact_table__Var_61));
                      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_60, 2) = ((MR_Box) ((MR_Integer) -1));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__fact_table__STATE_VARIABLE_HashList_41 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_60));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_HashList_0_40));
                    }
                  }
                *ll_backend__fact_table__STATE_VARIABLE_TableNum_39 = ll_backend__fact_table__STATE_VARIABLE_TableNum_0_38;
              }
          }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_2_14_p_0(
  MR_Word ll_backend__fact_table__Globals_1,
  MR_Integer ll_backend__fact_table__FactNum_2,
  MR_Integer ll_backend__fact_table__InputArgNum_3,
  MR_String ll_backend__fact_table__HashTableName_4,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_TableNum_0_5,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_TableNum_6,
  MR_Word ll_backend__fact_table__IsPrimaryTable_7,
  MR_Word ll_backend__fact_table__OutputStream_8,
  MR_Word ll_backend__fact_table__HeadVar__9_9,
  MR_Word ll_backend__fact_table__FactMap_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_0_11,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashList_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__fact_table__STATE_VARIABLE_HashList_12 = ll_backend__fact_table__STATE_VARIABLE_HashList_0_11;
            *ll_backend__fact_table__STATE_VARIABLE_TableNum_6 = ll_backend__fact_table__STATE_VARIABLE_TableNum_0_5;
          }
        else
          {
            MR_Word ll_backend__fact_table__Fact_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__9_9, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Facts0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__9_9, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__MatchingFacts_43;
            MR_Word ll_backend__fact_table__Facts1_44;
            MR_Integer ll_backend__fact_table__Len_45;
            MR_Integer ll_backend__fact_table__NextFactNum_46;
            MR_Integer ll_backend__fact_table__STATE_VARIABLE_TableNum_53_53;
            MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_54_54;
            MR_Word ll_backend__fact_table__Matching0_65;
            MR_Word ll_backend__fact_table__Matching1_66;

            {
              ll_backend__fact_table__lower_level_collect_matching_facts_2_6_p_0(ll_backend__fact_table__Fact_38, ll_backend__fact_table__Facts0_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__Matching0_65, &ll_backend__fact_table__Facts1_44, ll_backend__fact_table__InputArgNum_3);
            }
            {
              mercury__list__reverse_2_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0, ll_backend__fact_table__Matching0_65, &ll_backend__fact_table__Matching1_66);
            }
            {
              ll_backend__fact_table__MatchingFacts_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__MatchingFacts_43, 0) = ((MR_Box) (ll_backend__fact_table__Fact_38));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__MatchingFacts_43, 1) = ((MR_Box) (ll_backend__fact_table__Matching1_66));
            }
            {
              ll_backend__fact_table__do_build_hash_table_14_p_0(ll_backend__fact_table__Globals_1, ll_backend__fact_table__FactNum_2, ll_backend__fact_table__InputArgNum_3, ll_backend__fact_table__HashTableName_4, ll_backend__fact_table__STATE_VARIABLE_TableNum_0_5, &ll_backend__fact_table__STATE_VARIABLE_TableNum_53_53, ll_backend__fact_table__IsPrimaryTable_7, ll_backend__fact_table__OutputStream_8, ll_backend__fact_table__MatchingFacts_43, ll_backend__fact_table__FactMap_10, ll_backend__fact_table__STATE_VARIABLE_HashList_0_11, &ll_backend__fact_table__STATE_VARIABLE_HashList_54_54);
            }
            {
              mercury__list__length_2_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_sort_file_line_0, ll_backend__fact_table__MatchingFacts_43, &ll_backend__fact_table__Len_45);
            }
            ll_backend__fact_table__NextFactNum_46 = (ll_backend__fact_table__FactNum_2 + ll_backend__fact_table__Len_45);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__fact_table__next_value_of_FactNum_2 = ll_backend__fact_table__NextFactNum_46;
              MR_Integer ll_backend__fact_table__next_value_of_STATE_VARIABLE_TableNum_0_5 = ll_backend__fact_table__STATE_VARIABLE_TableNum_53_53;
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__9_9 = ll_backend__fact_table__Facts1_44;
              MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashList_0_11 = ll_backend__fact_table__STATE_VARIABLE_HashList_54_54;

              ll_backend__fact_table__STATE_VARIABLE_HashList_0_11 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashList_0_11;
              ll_backend__fact_table__HeadVar__9_9 = ll_backend__fact_table__next_value_of_HeadVar__9_9;
              ll_backend__fact_table__STATE_VARIABLE_TableNum_0_5 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_TableNum_0_5;
              ll_backend__fact_table__FactNum_2 = ll_backend__fact_table__next_value_of_FactNum_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__build_hash_table_lower_levels_12_p_0(
  MR_Word ll_backend__fact_table__Globals_13,
  MR_Integer ll_backend__fact_table__FactNum_14,
  MR_Integer ll_backend__fact_table__InputArgNum_15,
  MR_String ll_backend__fact_table__HashTableName_16,
  MR_Integer ll_backend__fact_table__TableNum0_17,
  MR_Integer * ll_backend__fact_table__TableNum_18,
  MR_Word ll_backend__fact_table__IsPrimaryTable_19,
  MR_Word ll_backend__fact_table__OutputStream_20,
  MR_Word ll_backend__fact_table__Facts_21,
  MR_Word ll_backend__fact_table__FactMap_22)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__HashList_24;
    MR_Integer ll_backend__fact_table__Len_25;
    MR_Integer ll_backend__fact_table__HashSize_26;
    MR_Word ll_backend__fact_table__HashTable0_27;
    MR_Word ll_backend__fact_table__HashTable_28;
    MR_Word ll_backend__fact_table__Map_37;

    {
      ll_backend__fact_table__build_hash_table_lower_levels_2_14_p_0(ll_backend__fact_table__Globals_13, ll_backend__fact_table__FactNum_14, ll_backend__fact_table__InputArgNum_15, ll_backend__fact_table__HashTableName_16, ll_backend__fact_table__TableNum0_17, ll_backend__fact_table__TableNum_18, ll_backend__fact_table__IsPrimaryTable_19, ll_backend__fact_table__OutputStream_20, ll_backend__fact_table__Facts_21, ll_backend__fact_table__FactMap_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__HashList_24);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__HashList_24, &ll_backend__fact_table__Len_25);
    }
    {
      ll_backend__fact_table__calculate_hash_table_size_3_p_0(ll_backend__fact_table__Globals_13, ll_backend__fact_table__Len_25, &ll_backend__fact_table__HashSize_26);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, &ll_backend__fact_table__Map_37);
    }
    {
      ll_backend__fact_table__HashTable0_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable0_27, 0) = ((MR_Box) (ll_backend__fact_table__HashSize_26));
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable0_27, 1) = ((MR_Box) (ll_backend__fact_table__Map_37));
    }
    {
      ll_backend__fact_table__hash_table_from_list_4_p_0(ll_backend__fact_table__HashList_24, ll_backend__fact_table__HashSize_26, ll_backend__fact_table__HashTable0_27, &ll_backend__fact_table__HashTable_28);
    }
    {
      ll_backend__fact_table__write_hash_table_6_p_0(ll_backend__fact_table__OutputStream_20, ll_backend__fact_table__HashTableName_16, ll_backend__fact_table__TableNum0_17, ll_backend__fact_table__HashTable_28);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__hash_list_insert_many_7_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__IsPrimaryTable_2,
  MR_Word ll_backend__fact_table__FactMap_3,
  MR_Integer ll_backend__fact_table__FactNum_4,
  MR_Integer ll_backend__fact_table__InputArgNum_5,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_0_6,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashList_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__STATE_VARIABLE_HashList_7 = ll_backend__fact_table__STATE_VARIABLE_HashList_0_6;
        else
          {
            MR_Word ll_backend__fact_table__Fact_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Facts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Arg_22;
            MR_Integer ll_backend__fact_table__Index_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_15, (MR_Integer) 1)));
            MR_Integer ll_backend__fact_table__HashIndex_24;
            MR_Word ll_backend__fact_table__STATE_VARIABLE_HashList_27_27;
            MR_Word ll_backend__fact_table__Var_28;
            MR_Word ll_backend__fact_table__Var_29;
            MR_Word ll_backend__fact_table__InputArgs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_15, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_15, (MR_Integer) 2)));
            MR_Word ll_backend__fact_table__ArgPrime_39;
            MR_Word ll_backend__fact_table__Var_41;
            MR_Word ll_backend__fact_table__Var_40;

            {
              ll_backend__fact_table__succeeded = mercury__list__drop_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_const_0, ll_backend__fact_table__InputArgNum_5, ll_backend__fact_table__InputArgs_37, &ll_backend__fact_table__Var_41);
            }
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Var_41)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__ArgPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_41, (MR_Integer) 0)));
                    ll_backend__fact_table__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_41, (MR_Integer) 1)));
                  }
              }
            if (ll_backend__fact_table__succeeded)
              ll_backend__fact_table__Arg_22 = ll_backend__fact_table__ArgPrime_39;
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.fact_get_arg_and_index\'/4", (MR_String) "not enough input args");
                  return;
                }
              }
            switch (ll_backend__fact_table__IsPrimaryTable_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box ll_backend__fact_table__conv0_HashIndex_24;

                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__fact_table__FactMap_3, ll_backend__fact_table__Index_23, &ll_backend__fact_table__conv0_HashIndex_24);
                  }
                  ll_backend__fact_table__HashIndex_24 = ((MR_Integer) ll_backend__fact_table__conv0_HashIndex_24);
                }
                break;
              case (MR_Integer) 1:
                ll_backend__fact_table__HashIndex_24 = ll_backend__fact_table__FactNum_4;
                break;
            }
            {
              ll_backend__fact_table__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_29, 0) = ((MR_Box) (ll_backend__fact_table__HashIndex_24));
            }
            {
              ll_backend__fact_table__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_28, 0) = ((MR_Box) (ll_backend__fact_table__Arg_22));
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_28, 1) = ((MR_Box) (ll_backend__fact_table__Var_29));
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_28, 2) = ((MR_Box) ((MR_Integer) -1));
            }
            {
              ll_backend__fact_table__STATE_VARIABLE_HashList_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__STATE_VARIABLE_HashList_27_27, 0) = ((MR_Box) (ll_backend__fact_table__Var_28));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__STATE_VARIABLE_HashList_27_27, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_HashList_0_6));
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__Facts_16;
              MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashList_0_6 = ll_backend__fact_table__STATE_VARIABLE_HashList_27_27;

              ll_backend__fact_table__STATE_VARIABLE_HashList_0_6 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashList_0_6;
              ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__write_hash_table_6_p_0(
  MR_Word ll_backend__fact_table__OutputStream_7,
  MR_String ll_backend__fact_table__BaseName_8,
  MR_Integer ll_backend__fact_table__TableNum_9,
  MR_Word ll_backend__fact_table__HashTable_10)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Char ll_backend__fact_table__TableType_12;
    MR_String ll_backend__fact_table__HashTableDataName_13;
    MR_Integer ll_backend__fact_table__Size_14;
    MR_Integer ll_backend__fact_table__MaxIndex_16;
    MR_Word ll_backend__fact_table__Var_27;
    MR_String ll_backend__fact_table__Var_53;
    MR_Word ll_backend__fact_table__Var_59;
    MR_String ll_backend__fact_table__Var_60;
    MR_String ll_backend__fact_table__Var_61;
    MR_String ll_backend__fact_table__Var_63;
    MR_String ll_backend__fact_table__Var_64;
    MR_String ll_backend__fact_table__Var_71;
    MR_String ll_backend__fact_table__Var_76;
    MR_String ll_backend__fact_table__Var_87;
    MR_String ll_backend__fact_table__Var_97;
    MR_String ll_backend__fact_table__Var_108;
    MR_Word ll_backend__fact_table__Var_15;

    {
      ll_backend__fact_table__get_hash_table_type_2_p_0(ll_backend__fact_table__HashTable_10, &ll_backend__fact_table__TableType_12);
    }
    ll_backend__fact_table__Var_59 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_59, ll_backend__fact_table__TableNum_9, &ll_backend__fact_table__Var_53);
    }
    {
      ll_backend__fact_table__Var_60 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_53, (MR_String) "_data[]");
    }
    {
      ll_backend__fact_table__Var_61 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__BaseName_8, ll_backend__fact_table__Var_60);
    }
    {
      ll_backend__fact_table__Var_63 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__fact_table__Var_61);
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(ll_backend__fact_table__Var_59, ll_backend__fact_table__TableType_12, &ll_backend__fact_table__Var_64);
    }
    {
      ll_backend__fact_table__Var_71 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_64, ll_backend__fact_table__Var_63);
    }
    {
      ll_backend__fact_table__HashTableDataName_13 = mercury__string__f_43_43_2_f_0((MR_String) "struct MR_fact_table_hash_entry_", ll_backend__fact_table__Var_71);
    }
    {
      ll_backend__fact_table__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_27, 0) = ((MR_Box) (ll_backend__fact_table__HashTableDataName_13));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[62])));
    }
    {
      mercury__io__write_strings_4_p_0(ll_backend__fact_table__OutputStream_7, ll_backend__fact_table__Var_27);
    }
    ll_backend__fact_table__Size_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable_10, (MR_Integer) 0)));
    ll_backend__fact_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable_10, (MR_Integer) 1)));
    ll_backend__fact_table__MaxIndex_16 = (ll_backend__fact_table__Size_14 - (MR_Integer) 1);
    {
      ll_backend__fact_table__write_hash_table_loop_6_p_0(ll_backend__fact_table__OutputStream_7, ll_backend__fact_table__HashTable_10, (MR_Integer) 0, ll_backend__fact_table__MaxIndex_16);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, (MR_String) "};\n\n");
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, (MR_String) "\n\nstruct MR_fact_table_hash_table_");
    }
    {
      mercury__string__format__format_char_component_nowidth_3_p_0(ll_backend__fact_table__Var_59, ll_backend__fact_table__TableType_12, &ll_backend__fact_table__Var_76);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, ll_backend__fact_table__Var_76);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, (MR_String) " ");
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, ll_backend__fact_table__BaseName_8);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_59, ll_backend__fact_table__TableNum_9, &ll_backend__fact_table__Var_87);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, ll_backend__fact_table__Var_87);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, (MR_String) " = {\n    ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_59, ll_backend__fact_table__Size_14, &ll_backend__fact_table__Var_97);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, ll_backend__fact_table__Var_97);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, (MR_String) ",\n    ");
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, ll_backend__fact_table__BaseName_8);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_59, ll_backend__fact_table__TableNum_9, &ll_backend__fact_table__Var_108);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, ll_backend__fact_table__Var_108);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_7, (MR_String) "_data\n};\n");
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_p_0(
  MR_Word ll_backend__fact_table__HashTable_3,
  MR_Char * ll_backend__fact_table__TableType_4)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Map_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable_3, (MR_Integer) 1)));
    MR_Integer ll_backend__fact_table___Size_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable_3, (MR_Integer) 0)));

    {
      ll_backend__fact_table__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__Map_6);
    }
    if (ll_backend__fact_table__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.get_hash_table_type\'/2", (MR_String) "empty hash table");
          return;
        }
      }
    else
      {
        {
          ll_backend__fact_table__get_hash_table_type_2_3_p_0(ll_backend__fact_table__Map_6, (MR_Integer) 0, ll_backend__fact_table__TableType_4);
        }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__get_hash_table_type_2_3_p_0(
  MR_Word ll_backend__fact_table__Map_4,
  MR_Integer ll_backend__fact_table__Index_5,
  MR_Char * ll_backend__fact_table__TableType_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;
        MR_Word ll_backend__fact_table__Entry_7;
        MR_Box ll_backend__fact_table__conv0_Entry_7;

        {
          ll_backend__fact_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__Map_4, ll_backend__fact_table__Index_5, &ll_backend__fact_table__conv0_Entry_7);
        }
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__Entry_7 = ((MR_Word) ll_backend__fact_table__conv0_Entry_7);
            ll_backend__fact_table__succeeded = MR_TRUE;
          }
        if (ll_backend__fact_table__succeeded)
          {
            MR_Word ll_backend__fact_table__Key_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Entry_7, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Entry_7, (MR_Integer) 1)));
            MR_Integer ll_backend__fact_table__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Entry_7, (MR_Integer) 2)));
            MR_String ll_backend__fact_table__Var_11;

            ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Key_8)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Key_8, (MR_Integer) 0)));
                *ll_backend__fact_table__TableType_6 = (MR_Char) 115;
              }
            else
              {
                MR_Word ll_backend__fact_table__Var_12;
                MR_Word ll_backend__fact_table__Var_13;
                MR_Word ll_backend__fact_table__Var_14;
                MR_Word ll_backend__fact_table__Var_15;

                ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Key_8)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_8, (MR_Integer) 0)));
                    ll_backend__fact_table__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_8, (MR_Integer) 1)));
                    ll_backend__fact_table__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_8, (MR_Integer) 2)));
                    ll_backend__fact_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_8, (MR_Integer) 3)));
                    *ll_backend__fact_table__TableType_6 = (MR_Char) 105;
                  }
                else
                  {
                    MR_Float ll_backend__fact_table__Var_16;

                    ll_backend__fact_table__succeeded = ((((MR_tag((MR_Word) ll_backend__fact_table__Key_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__fact_table__Key_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__Var_16 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__fact_table__Key_8, (MR_Integer) 1)));
                        *ll_backend__fact_table__TableType_6 = (MR_Char) 102;
                      }
                    else
                      {
                        MR_String ll_backend__fact_table__Var_17;

                        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Key_8)) == (MR_mktag((MR_Integer) 0)));
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Key_8, (MR_Integer) 0)));
                            *ll_backend__fact_table__TableType_6 = (MR_Char) 97;
                          }
                        else
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.get_hash_table_type_2\'/3", (MR_String) "invalid term");
                              return;
                            }
                          }
                      }
                  }
              }
          }
        else
          {
            MR_Integer ll_backend__fact_table__Var_21 = (ll_backend__fact_table__Index_5 + (MR_Integer) 1);

            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__fact_table__next_value_of_Index_5 = ll_backend__fact_table__Var_21;

              ll_backend__fact_table__Index_5 = ll_backend__fact_table__next_value_of_Index_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__write_hash_table_loop_6_p_0(
  MR_Word ll_backend__fact_table__Stream_7,
  MR_Word ll_backend__fact_table__HashTable_8,
  MR_Integer ll_backend__fact_table__CurrIndex_9,
  MR_Integer ll_backend__fact_table__MaxIndex_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded = (ll_backend__fact_table__CurrIndex_9 > ll_backend__fact_table__MaxIndex_10);

        if (ll_backend__fact_table__succeeded)
          {
          }
        else
          {
            MR_Integer ll_backend__fact_table__Var_59;
            MR_Word ll_backend__fact_table__HashEntry_12;
            MR_Word ll_backend__fact_table__Map_90;
            MR_Integer ll_backend__fact_table__Var_89;
            MR_Box ll_backend__fact_table__conv0_HashEntry_12;

            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, (MR_String) "\t{ ");
            }
            ll_backend__fact_table__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable_8, (MR_Integer) 0)));
            ll_backend__fact_table__Map_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable_8, (MR_Integer) 1)));
            {
              ll_backend__fact_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__Map_90, ll_backend__fact_table__CurrIndex_9, &ll_backend__fact_table__conv0_HashEntry_12);
            }
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__HashEntry_12 = ((MR_Word) ll_backend__fact_table__conv0_HashEntry_12);
                ll_backend__fact_table__succeeded = MR_TRUE;
              }
            if (ll_backend__fact_table__succeeded)
              {
                MR_Word ll_backend__fact_table__Key_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashEntry_12, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__Index_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashEntry_12, (MR_Integer) 1)));
                MR_Integer ll_backend__fact_table__Next_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashEntry_12, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) ll_backend__fact_table__Key_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_hash_table_loop\'/6", (MR_String) "unsupported type");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__fact_table__Integer_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_13, (MR_Integer) 1)));
                      MR_Word ll_backend__fact_table__Signedness_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_13, (MR_Integer) 2)));
                      MR_Word ll_backend__fact_table__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_13, (MR_Integer) 0)));
                      MR_Word ll_backend__fact_table__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_13, (MR_Integer) 3)));

                      switch (ll_backend__fact_table__Signedness_19) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer ll_backend__fact_table__Int_21;

                            {
                              ll_backend__fact_table__Int_21 = mercury__integer__det_to_int_1_f_0(ll_backend__fact_table__Integer_18);
                            }
                            {
                              mercury__io__write_int_4_p_0(ll_backend__fact_table__Stream_7, ll_backend__fact_table__Int_21);
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_hash_table_loop\'/6", (MR_String) "NYI uints in fact tables");
                              return;
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String ll_backend__fact_table__String_16 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Key_13, (MR_Integer) 0)));

                      {
                        mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, (MR_String) "\"");
                      }
                      {
                        backend_libs__c_util__output_quoted_string_4_p_0(ll_backend__fact_table__Stream_7, ll_backend__fact_table__String_16);
                      }
                      {
                        mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, (MR_String) "\"");
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__fact_table__Key_13, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Float ll_backend__fact_table__Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__fact_table__Key_13, (MR_Integer) 1)));

                          {
                            mercury__io__write_float_4_p_0(ll_backend__fact_table__Stream_7, ll_backend__fact_table__Float_22);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table.write_hash_table_loop\'/6", (MR_String) "unsupported type");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
                if (((MR_tag((MR_Word) ll_backend__fact_table__Index_14)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Integer ll_backend__fact_table__I_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Index_14, (MR_Integer) 0)));
                    MR_String ll_backend__fact_table__Var_78;

                    {
                      mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, (MR_String) ", MR_FACT_TABLE_MAKE_TAGGED_INDEX(");
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__I_25, &ll_backend__fact_table__Var_78);
                    }
                    {
                      mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, ll_backend__fact_table__Var_78);
                    }
                    {
                      mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, (MR_String) ", 1), ");
                    }
                  }
                else
                  {
                    MR_String ll_backend__fact_table__H_26 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Index_14, (MR_Integer) 1)));
                    MR_Integer ll_backend__fact_table__I_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Index_14, (MR_Integer) 0)));
                    MR_String ll_backend__fact_table__Var_67;

                    {
                      mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, (MR_String) ", MR_FACT_TABLE_MAKE_TAGGED_POINTER(&");
                    }
                    {
                      mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, ll_backend__fact_table__H_26);
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__I_62, &ll_backend__fact_table__Var_67);
                    }
                    {
                      mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, ll_backend__fact_table__Var_67);
                    }
                    {
                      mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, (MR_String) ", 2), ");
                    }
                  }
                {
                  mercury__io__write_int_4_p_0(ll_backend__fact_table__Stream_7, ll_backend__fact_table__Next_15);
                }
              }
            else
              {
                {
                  mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, (MR_String) "0, MR_FACT_TABLE_MAKE_TAGGED_POINTER(NULL, 0), -1 ");
                }
              }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__Stream_7, (MR_String) "},\n");
            }
            ll_backend__fact_table__Var_59 = (ll_backend__fact_table__CurrIndex_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__fact_table__next_value_of_CurrIndex_9 = ll_backend__fact_table__Var_59;

              ll_backend__fact_table__CurrIndex_9 = ll_backend__fact_table__next_value_of_CurrIndex_9;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box * ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_Box ll_backend__fact_table__closure = ll_backend__fact_table__closure_arg;
    MR_Integer ll_backend__fact_table__conv0_HeadVar__2_2;

    {
      mercury__char__to_int_2_p_0(((MR_Char) (MR_Word) ll_backend__fact_table__wrapper_arg_1), &ll_backend__fact_table__conv0_HeadVar__2_2);
    }
    *ll_backend__fact_table__wrapper_arg_2 = ((MR_Box) (ll_backend__fact_table__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ll_backend__fact_table__hash_table_from_list_4_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Integer ll_backend__fact_table__HashSize_2,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashTable_0_3,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashTable_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__STATE_VARIABLE_HashTable_4 = ll_backend__fact_table__STATE_VARIABLE_HashTable_0_3;
        else
          {
            MR_Word ll_backend__fact_table__Entry_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Entrys_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__STATE_VARIABLE_HashTable_15_15;
            MR_Word ll_backend__fact_table__Key_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Entry_9, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Index_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Entry_9, (MR_Integer) 1)));
            MR_Integer ll_backend__fact_table__HashVal_25;
            MR_Word ll_backend__fact_table__Ns_39;
            MR_Integer ll_backend__fact_table__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Entry_9, (MR_Integer) 2)));
            MR_String ll_backend__fact_table__String_35;
            MR_Word ll_backend__fact_table__Map_67;
            MR_Integer ll_backend__fact_table__Var_66;
            MR_Word ll_backend__fact_table__Var_26;
            MR_Box ll_backend__fact_table__conv1_Var_26;

            ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Key_22)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__String_35 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Key_22, (MR_Integer) 0)));
                {
                  MR_Word ll_backend__fact_table__Cs_36;

                  {
                    mercury__string__to_char_list_2_p_0(ll_backend__fact_table__String_35, &ll_backend__fact_table__Cs_36);
                  }
                  {
                    mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__fact_table_scalar_common_2[3], ll_backend__fact_table__Cs_36, &ll_backend__fact_table__Ns_39);
                  }
                }
              }
            else
              {
                MR_Integer ll_backend__fact_table__Int_42;
                MR_Word ll_backend__fact_table__Integer_41;
                MR_Word ll_backend__fact_table__Var_48;
                MR_Word ll_backend__fact_table__Var_49;
                MR_Word ll_backend__fact_table__Var_40;

                ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Key_22)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_22, (MR_Integer) 0)));
                    ll_backend__fact_table__Integer_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_22, (MR_Integer) 1)));
                    ll_backend__fact_table__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_22, (MR_Integer) 2)));
                    ll_backend__fact_table__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Key_22, (MR_Integer) 3)));
                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_48 == (MR_Integer) 0);
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_49 == (MR_Integer) 0);
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__succeeded = mercury__integer__to_int_2_p_0(ll_backend__fact_table__Integer_41, &ll_backend__fact_table__Int_42);
                          }
                      }
                  }
                if (ll_backend__fact_table__succeeded)
                  {
                    MR_Integer ll_backend__fact_table__N_43;

                    {
                      mercury__int__abs_2_p_0(ll_backend__fact_table__Int_42, &ll_backend__fact_table__N_43);
                    }
                    {
                      ll_backend__fact_table__Ns_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ns_39, 0) = ((MR_Box) (ll_backend__fact_table__N_43));
                      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ns_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                else
                  {
                    MR_Float ll_backend__fact_table__Float_44;

                    ll_backend__fact_table__succeeded = ((((MR_tag((MR_Word) ll_backend__fact_table__Key_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__fact_table__Key_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__Float_44 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__fact_table__Key_22, (MR_Integer) 1)));
                        {
                          MR_Integer ll_backend__fact_table__Var_51;
                          MR_Integer ll_backend__fact_table__N_59;

                          {
                            ll_backend__fact_table__Var_51 = mercury__float__hash_1_f_0(ll_backend__fact_table__Float_44);
                          }
                          {
                            mercury__int__abs_2_p_0(ll_backend__fact_table__Var_51, &ll_backend__fact_table__N_59);
                          }
                          {
                            ll_backend__fact_table__Ns_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ns_39, 0) = ((MR_Box) (ll_backend__fact_table__N_59));
                            MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ns_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.fact_table_hash\'/3", (MR_String) "unsupported type in key");
                          return;
                        }
                      }
                  }
              }
            {
              ll_backend__fact_table__fact_table_hash_2_4_p_0(ll_backend__fact_table__HashSize_2, ll_backend__fact_table__Ns_39, (MR_Integer) 0, &ll_backend__fact_table__HashVal_25);
            }
            ll_backend__fact_table__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_3, (MR_Integer) 0)));
            ll_backend__fact_table__Map_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_3, (MR_Integer) 1)));
            {
              ll_backend__fact_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__Map_67, ll_backend__fact_table__HashVal_25, &ll_backend__fact_table__conv1_Var_26);
            }
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__Var_26 = ((MR_Word) ll_backend__fact_table__conv1_Var_26);
                ll_backend__fact_table__succeeded = MR_TRUE;
              }
            if (ll_backend__fact_table__succeeded)
              {
                MR_Integer ll_backend__fact_table__Var_27;

                {
                  ll_backend__fact_table__hash_table_insert_2_6_p_0(ll_backend__fact_table__HashVal_25, &ll_backend__fact_table__Var_27, ll_backend__fact_table__Index_23, ll_backend__fact_table__Key_22, ll_backend__fact_table__STATE_VARIABLE_HashTable_0_3, &ll_backend__fact_table__STATE_VARIABLE_HashTable_15_15);
                }
              }
            else
              {
                MR_Word ll_backend__fact_table__Var_29;
                MR_Integer ll_backend__fact_table__Size_74;
                MR_Word ll_backend__fact_table__Map0_75;
                MR_Word ll_backend__fact_table__Map_76;

                {
                  ll_backend__fact_table__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_29, 0) = ((MR_Box) (ll_backend__fact_table__Key_22));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_29, 1) = ((MR_Box) (ll_backend__fact_table__Index_23));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_29, 2) = ((MR_Box) ((MR_Integer) -1));
                }
                ll_backend__fact_table__Size_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_3, (MR_Integer) 0)));
                ll_backend__fact_table__Map0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_3, (MR_Integer) 1)));
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__HashVal_25, ((MR_Box) (ll_backend__fact_table__Var_29)), ll_backend__fact_table__Map0_75, &ll_backend__fact_table__Map_76);
                }
                {
                  ll_backend__fact_table__STATE_VARIABLE_HashTable_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_15_15, 0) = ((MR_Box) (ll_backend__fact_table__Size_74));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_15_15, 1) = ((MR_Box) (ll_backend__fact_table__Map_76));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__Entrys_10;
              MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashTable_0_3 = ll_backend__fact_table__STATE_VARIABLE_HashTable_15_15;

              ll_backend__fact_table__STATE_VARIABLE_HashTable_0_3 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashTable_0_3;
              ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__fact_table_hash_2_4_p_0(
  MR_Integer ll_backend__fact_table__HashSize_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_HashVal_0_3,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_HashVal_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__STATE_VARIABLE_HashVal_4 = ll_backend__fact_table__STATE_VARIABLE_HashVal_0_3;
        else
          {
            MR_Integer ll_backend__fact_table__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Ns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer ll_backend__fact_table__STATE_VARIABLE_HashVal_15_15;
            MR_Integer ll_backend__fact_table__Var_16;
            MR_Integer ll_backend__fact_table__Var_17 = ((MR_Integer) 31 * ll_backend__fact_table__STATE_VARIABLE_HashVal_0_3);

            ll_backend__fact_table__Var_16 = (ll_backend__fact_table__N_10 + ll_backend__fact_table__Var_17);
            {
              ll_backend__fact_table__STATE_VARIABLE_HashVal_15_15 = mercury__int__mod_2_f_0(ll_backend__fact_table__Var_16, ll_backend__fact_table__HashSize_1);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Ns_11;
              MR_Integer ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashVal_0_3 = ll_backend__fact_table__STATE_VARIABLE_HashVal_15_15;

              ll_backend__fact_table__STATE_VARIABLE_HashVal_0_3 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_HashVal_0_3;
              ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__hash_table_insert_2_6_p_0(
  MR_Integer ll_backend__fact_table__HashVal_7,
  MR_Integer * ll_backend__fact_table__FreeVal_8,
  MR_Word ll_backend__fact_table__Index0_9,
  MR_Word ll_backend__fact_table__Key0_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_HashTable_0_15,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_HashTable_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;
        MR_Word ll_backend__fact_table__Key1_12;
        MR_Word ll_backend__fact_table__Index1_13;
        MR_Integer ll_backend__fact_table__Next_14;
        MR_Word ll_backend__fact_table__Var_17;
        MR_Word ll_backend__fact_table__Map_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_15, (MR_Integer) 1)));
        MR_Integer ll_backend__fact_table__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_15, (MR_Integer) 0)));
        MR_Box ll_backend__fact_table__conv0_Var_17;

        {
          ll_backend__fact_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__Map_31, ll_backend__fact_table__HashVal_7, &ll_backend__fact_table__conv0_Var_17);
        }
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__Var_17 = ((MR_Word) ll_backend__fact_table__conv0_Var_17);
            ll_backend__fact_table__succeeded = MR_TRUE;
          }
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__Key1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_17, (MR_Integer) 0)));
            ll_backend__fact_table__Index1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_17, (MR_Integer) 1)));
            ll_backend__fact_table__Next_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_17, (MR_Integer) 2)));
            ll_backend__fact_table__succeeded = MR_TRUE;
          }
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__Next_14 == (MR_Integer) -1);
            if (ll_backend__fact_table__succeeded)
              {
                MR_Word ll_backend__fact_table__Var_18;
                MR_Word ll_backend__fact_table__Var_21;
                MR_Integer ll_backend__fact_table__Size_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_15, (MR_Integer) 0)));
                MR_Integer ll_backend__fact_table__Max_39 = (ll_backend__fact_table__Size_37 - (MR_Integer) 1);
                MR_Word ll_backend__fact_table__Map0_46;
                MR_Integer ll_backend__fact_table__Size_54;
                MR_Word ll_backend__fact_table__Map0_55;
                MR_Word ll_backend__fact_table__Map_56;
                MR_Word ll_backend__fact_table__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_15, (MR_Integer) 1)));

                {
                  ll_backend__fact_table__get_free_hash_slot_2_4_p_0(ll_backend__fact_table__STATE_VARIABLE_HashTable_0_15, ll_backend__fact_table__HashVal_7, ll_backend__fact_table__Max_39, ll_backend__fact_table__FreeVal_8);
                }
                {
                  ll_backend__fact_table__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_18, 0) = ((MR_Box) (ll_backend__fact_table__Key0_10));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_18, 1) = ((MR_Box) (ll_backend__fact_table__Index0_9));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_18, 2) = ((MR_Box) ((MR_Integer) -1));
                }
                ll_backend__fact_table__Size_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_15, (MR_Integer) 0)));
                ll_backend__fact_table__Map0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__STATE_VARIABLE_HashTable_0_15, (MR_Integer) 1)));
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, *ll_backend__fact_table__FreeVal_8, ((MR_Box) (ll_backend__fact_table__Var_18)), ll_backend__fact_table__Map0_46, &ll_backend__fact_table__Map0_55);
                }
                {
                  ll_backend__fact_table__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_21, 0) = ((MR_Box) (ll_backend__fact_table__Key1_12));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_21, 1) = ((MR_Box) (ll_backend__fact_table__Index1_13));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_21, 2) = ((MR_Box) (*ll_backend__fact_table__FreeVal_8));
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__HashVal_7, ((MR_Box) (ll_backend__fact_table__Var_21)), ll_backend__fact_table__Map0_55, &ll_backend__fact_table__Map_56);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *ll_backend__fact_table__STATE_VARIABLE_HashTable_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__fact_table__Size_54));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__fact_table__Map_56));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer ll_backend__fact_table__next_value_of_HashVal_7 = ll_backend__fact_table__Next_14;

                  ll_backend__fact_table__HashVal_7 = ll_backend__fact_table__next_value_of_HashVal_7;
                }
                continue;
              }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.hash_table_insert_2\'/6", (MR_String) "hash table entry empty");
              return;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__get_free_hash_slot_2_4_p_0(
  MR_Word ll_backend__fact_table__HashTable_5,
  MR_Integer ll_backend__fact_table__Start_6,
  MR_Integer ll_backend__fact_table__Max_7,
  MR_Integer * ll_backend__fact_table__Free_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;
        MR_Integer ll_backend__fact_table__Next_9;
        MR_Integer ll_backend__fact_table__Var_11 = (ll_backend__fact_table__Start_6 + (MR_Integer) 1);
        MR_Word ll_backend__fact_table__Map_17;
        MR_Integer ll_backend__fact_table__Var_16;
        MR_Word ll_backend__fact_table__Var_10;
        MR_Box ll_backend__fact_table__conv0_Var_10;

        {
          ll_backend__fact_table__Next_9 = mercury__int__mod_2_f_0(ll_backend__fact_table__Var_11, ll_backend__fact_table__Max_7);
        }
        ll_backend__fact_table__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable_5, (MR_Integer) 0)));
        ll_backend__fact_table__Map_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HashTable_5, (MR_Integer) 1)));
        {
          ll_backend__fact_table__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_hash_entry_0, ll_backend__fact_table__Map_17, ll_backend__fact_table__Next_9, &ll_backend__fact_table__conv0_Var_10);
        }
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__Var_10 = ((MR_Word) ll_backend__fact_table__conv0_Var_10);
            ll_backend__fact_table__succeeded = MR_TRUE;
          }
        if (ll_backend__fact_table__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__fact_table__next_value_of_Start_6 = ll_backend__fact_table__Next_9;

              ll_backend__fact_table__Start_6 = ll_backend__fact_table__next_value_of_Start_6;
            }
            continue;
          }
        else
          *ll_backend__fact_table__Free_8 = ll_backend__fact_table__Next_9;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__calculate_hash_table_size_3_p_0(
  MR_Word ll_backend__fact_table__Globals_4,
  MR_Integer ll_backend__fact_table__NumEntries_5,
  MR_Integer * ll_backend__fact_table__HashTableSize_6)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__PercentFull_7;
    MR_Word ll_backend__fact_table__Primes_8;
    MR_Integer ll_backend__fact_table__N_9;
    MR_Integer ll_backend__fact_table__Var_75;
    MR_Integer ll_backend__fact_table__P_83;
    MR_Word ll_backend__fact_table__Ps_84;

    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__fact_table__Globals_4, (MR_Integer) 324, &ll_backend__fact_table__PercentFull_7);
    }
    ll_backend__fact_table__Primes_8 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[49]);
    ll_backend__fact_table__Var_75 = (ll_backend__fact_table__NumEntries_5 * (MR_Integer) 100);
    {
      ll_backend__fact_table__N_9 = mercury__int__f_47_47_2_f_0(ll_backend__fact_table__Var_75, ll_backend__fact_table__PercentFull_7);
    }
    ll_backend__fact_table__P_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Primes_8, (MR_Integer) 0)));
    ll_backend__fact_table__Ps_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Primes_8, (MR_Integer) 1)));
    ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_83 > ll_backend__fact_table__N_9);
    if (ll_backend__fact_table__succeeded)
      *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_83;
    else
      {
        MR_Integer ll_backend__fact_table__P_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_84, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Ps_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_84, (MR_Integer) 1)));

        ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_92 > ll_backend__fact_table__N_9);
        if (ll_backend__fact_table__succeeded)
          *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_92;
        else
          {
            MR_Integer ll_backend__fact_table__P_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_93, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Ps_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_93, (MR_Integer) 1)));

            ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_101 > ll_backend__fact_table__N_9);
            if (ll_backend__fact_table__succeeded)
              *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_101;
            else
              {
                MR_Integer ll_backend__fact_table__P_110 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_102, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__Ps_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_102, (MR_Integer) 1)));

                ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_110 > ll_backend__fact_table__N_9);
                if (ll_backend__fact_table__succeeded)
                  *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_110;
                else
                  {
                    MR_Integer ll_backend__fact_table__P_119 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_111, (MR_Integer) 0)));
                    MR_Word ll_backend__fact_table__Ps_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_111, (MR_Integer) 1)));

                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_119 > ll_backend__fact_table__N_9);
                    if (ll_backend__fact_table__succeeded)
                      *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_119;
                    else
                      {
                        MR_Integer ll_backend__fact_table__P_128 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_120, (MR_Integer) 0)));
                        MR_Word ll_backend__fact_table__Ps_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_120, (MR_Integer) 1)));

                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_128 > ll_backend__fact_table__N_9);
                        if (ll_backend__fact_table__succeeded)
                          *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_128;
                        else
                          {
                            MR_Integer ll_backend__fact_table__P_137 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_129, (MR_Integer) 0)));
                            MR_Word ll_backend__fact_table__Ps_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_129, (MR_Integer) 1)));

                            ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_137 > ll_backend__fact_table__N_9);
                            if (ll_backend__fact_table__succeeded)
                              *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_137;
                            else
                              {
                                MR_Integer ll_backend__fact_table__P_146 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_138, (MR_Integer) 0)));
                                MR_Word ll_backend__fact_table__Ps_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_138, (MR_Integer) 1)));

                                ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_146 > ll_backend__fact_table__N_9);
                                if (ll_backend__fact_table__succeeded)
                                  *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_146;
                                else
                                  {
                                    MR_Integer ll_backend__fact_table__P_155 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_147, (MR_Integer) 0)));
                                    MR_Word ll_backend__fact_table__Ps_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_147, (MR_Integer) 1)));

                                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_155 > ll_backend__fact_table__N_9);
                                    if (ll_backend__fact_table__succeeded)
                                      *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_155;
                                    else
                                      {
                                        MR_Integer ll_backend__fact_table__P_164 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_156, (MR_Integer) 0)));
                                        MR_Word ll_backend__fact_table__Ps_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_156, (MR_Integer) 1)));

                                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_164 > ll_backend__fact_table__N_9);
                                        if (ll_backend__fact_table__succeeded)
                                          *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_164;
                                        else
                                          {
                                            MR_Integer ll_backend__fact_table__P_173 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_165, (MR_Integer) 0)));
                                            MR_Word ll_backend__fact_table__Ps_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_165, (MR_Integer) 1)));

                                            ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_173 > ll_backend__fact_table__N_9);
                                            if (ll_backend__fact_table__succeeded)
                                              *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_173;
                                            else
                                              {
                                                MR_Integer ll_backend__fact_table__P_182 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_174, (MR_Integer) 0)));
                                                MR_Word ll_backend__fact_table__Ps_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_174, (MR_Integer) 1)));

                                                ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_182 > ll_backend__fact_table__N_9);
                                                if (ll_backend__fact_table__succeeded)
                                                  *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_182;
                                                else
                                                  {
                                                    MR_Integer ll_backend__fact_table__P_191 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_183, (MR_Integer) 0)));
                                                    MR_Word ll_backend__fact_table__Ps_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_183, (MR_Integer) 1)));

                                                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_191 > ll_backend__fact_table__N_9);
                                                    if (ll_backend__fact_table__succeeded)
                                                      *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_191;
                                                    else
                                                      {
                                                        MR_Integer ll_backend__fact_table__P_200 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_192, (MR_Integer) 0)));
                                                        MR_Word ll_backend__fact_table__Ps_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Ps_192, (MR_Integer) 1)));

                                                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_200 > ll_backend__fact_table__N_9);
                                                        if (ll_backend__fact_table__succeeded)
                                                          *ll_backend__fact_table__HashTableSize_6 = ll_backend__fact_table__P_200;
                                                        else
                                                          {
                                                            ll_backend__fact_table__calculate_hash_table_size_2_3_p_0(ll_backend__fact_table__N_9, ll_backend__fact_table__Ps_201, ll_backend__fact_table__HashTableSize_6);
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
  MR_Integer ll_backend__fact_table__N_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Integer * ll_backend__fact_table__H_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.calculate_hash_table_size_2\'/3", (MR_String) "hash table too large (max size 2147483647)");
              return;
            }
          }
        else
          {
            MR_Integer ll_backend__fact_table__P_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Ps_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));

            ll_backend__fact_table__succeeded = (ll_backend__fact_table__P_10 > ll_backend__fact_table__N_1);
            if (ll_backend__fact_table__succeeded)
              *ll_backend__fact_table__H_3 = ll_backend__fact_table__P_10;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Ps_11;

                  ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__lower_level_collect_matching_facts_2_6_p_0(
  MR_Word ll_backend__fact_table__Fact_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3,
  MR_Word * ll_backend__fact_table__Matching_4,
  MR_Word * ll_backend__fact_table__HeadVar__5_5,
  MR_Integer ll_backend__fact_table__InputArgNum_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__fact_table__Matching_4 = ll_backend__fact_table__HeadVar__3_3;
            *ll_backend__fact_table__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word ll_backend__fact_table__Fact0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Facts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__InputArgs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact0_11, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__InputArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_1, (MR_Integer) 0)));
            MR_Integer ll_backend__fact_table__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact0_11, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact0_11, (MR_Integer) 2)));
            MR_Integer ll_backend__fact_table__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Fact_1, (MR_Integer) 2)));
            MR_Word ll_backend__fact_table__Arg0_23;
            MR_Word ll_backend__fact_table__Arg_25;
            MR_Word ll_backend__fact_table__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_const_0;
            MR_Word ll_backend__fact_table__Var_27;
            MR_Word ll_backend__fact_table__Var_28;
            MR_Word ll_backend__fact_table__Var_24;
            MR_Word ll_backend__fact_table__Var_26;

            {
              ll_backend__fact_table__succeeded = mercury__list__drop_3_p_0(ll_backend__fact_table__TypeCtorInfo_33_33, ll_backend__fact_table__InputArgNum_6, ll_backend__fact_table__InputArgs0_17, &ll_backend__fact_table__Var_27);
            }
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Var_27)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__Arg0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_27, (MR_Integer) 0)));
                    ll_backend__fact_table__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_27, (MR_Integer) 1)));
                    {
                      ll_backend__fact_table__succeeded = mercury__list__drop_3_p_0(ll_backend__fact_table__TypeCtorInfo_33_33, ll_backend__fact_table__InputArgNum_6, ll_backend__fact_table__InputArgs_20, &ll_backend__fact_table__Var_28);
                    }
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Var_28)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, (MR_Integer) 0)));
                            ll_backend__fact_table__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, (MR_Integer) 1)));
                          }
                      }
                  }
              }
            if (ll_backend__fact_table__succeeded)
              {
                {
                  ll_backend__fact_table__succeeded = mercury__term____Unify____const_0_0(ll_backend__fact_table__Arg_25, ll_backend__fact_table__Arg0_23);
                }
                if (ll_backend__fact_table__succeeded)
                  {
                    MR_Word ll_backend__fact_table__Var_29;

                    {
                      ll_backend__fact_table__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_29, 0) = ((MR_Box) (ll_backend__fact_table__Fact0_11));
                      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_29, 1) = ((MR_Box) (ll_backend__fact_table__HeadVar__3_3));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Facts0_12;
                      MR_Word ll_backend__fact_table__next_value_of_HeadVar__3_3 = ll_backend__fact_table__Var_29;

                      ll_backend__fact_table__HeadVar__3_3 = ll_backend__fact_table__next_value_of_HeadVar__3_3;
                      ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
                    }
                    continue;
                  }
                else
                  {
                    *ll_backend__fact_table__Matching_4 = ll_backend__fact_table__HeadVar__3_3;
                    *ll_backend__fact_table__HeadVar__5_5 = ll_backend__fact_table__HeadVar__2_2;
                  }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.lower_level_collect_matching_facts_2\'/6", (MR_String) "not enough input args");
                  return;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_table_data_8_p_0(
  MR_Word ll_backend__fact_table__VeryVerbose_1,
  MR_Integer ll_backend__fact_table__FactNum_2,
  MR_Integer ll_backend__fact_table__FactTableSize_3,
  MR_Word ll_backend__fact_table__HeadVar__4_4,
  MR_String ll_backend__fact_table__StructName_5,
  MR_Word ll_backend__fact_table__OutputStream_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__fact_table__Fact_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Facts_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer ll_backend__fact_table__Var_28;

            {
              ll_backend__fact_table__write_fact_data_8_p_0(ll_backend__fact_table__VeryVerbose_1, ll_backend__fact_table__FactNum_2, ll_backend__fact_table__FactTableSize_3, ll_backend__fact_table__Fact_20, ll_backend__fact_table__StructName_5, ll_backend__fact_table__OutputStream_6);
            }
            ll_backend__fact_table__Var_28 = (ll_backend__fact_table__FactNum_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__fact_table__next_value_of_FactNum_2 = ll_backend__fact_table__Var_28;
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__4_4 = ll_backend__fact_table__Facts_21;

              ll_backend__fact_table__HeadVar__4_4 = ll_backend__fact_table__next_value_of_HeadVar__4_4;
              ll_backend__fact_table__FactNum_2 = ll_backend__fact_table__next_value_of_FactNum_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__read_sort_file_line_6_p_0(
  MR_Word ll_backend__fact_table__FactArgInfos_7,
  MR_Word ll_backend__fact_table__ArgModes_8,
  MR_Word ll_backend__fact_table__ModuleInfo_9,
  MR_Word * ll_backend__fact_table__MaybeSortFileLine_10)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Result_12;

    {
      mercury__io__read_line_3_p_0(&ll_backend__fact_table__Result_12);
    }
    switch (MR_tag((MR_Word) ll_backend__fact_table__Result_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__fact_table__MaybeSortFileLine_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__fact_table__LineChars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Result_12, (MR_Integer) 0)));
          MR_String ll_backend__fact_table__LineString_14;
          MR_Word ll_backend__fact_table__SortFileLine_15;
          MR_String ll_backend__fact_table__InputArgsString_48;
          MR_String ll_backend__fact_table__OutputArgsString_57;
          MR_Integer ll_backend__fact_table__Index0_58;
          MR_Integer ll_backend__fact_table__Pos0_47;
          MR_String ll_backend__fact_table__Line1_49;
          MR_String ll_backend__fact_table__Line2_51;
          MR_Integer ll_backend__fact_table__Pos1_52;
          MR_String ll_backend__fact_table__IndexString_53;
          MR_String ll_backend__fact_table__Line3_54;
          MR_String ll_backend__fact_table__Line4_56;
          MR_String ll_backend__fact_table__Var_66;
          MR_String ll_backend__fact_table__Var_67;
          MR_Char ll_backend__fact_table__Var_50;
          MR_Char ll_backend__fact_table__Var_55;

          {
            mercury__string__from_char_list_2_p_0(ll_backend__fact_table__LineChars_13, &ll_backend__fact_table__LineString_14);
          }
          {
            ll_backend__fact_table__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__fact_table__LineString_14, (MR_String) "~", &ll_backend__fact_table__Pos0_47);
          }
          if (ll_backend__fact_table__succeeded)
            {
              {
                mercury__string__split_4_p_0(ll_backend__fact_table__LineString_14, ll_backend__fact_table__Pos0_47, &ll_backend__fact_table__InputArgsString_48, &ll_backend__fact_table__Line1_49);
              }
              {
                ll_backend__fact_table__succeeded = mercury__string__first_char_3_p_3(ll_backend__fact_table__Line1_49, &ll_backend__fact_table__Var_50, &ll_backend__fact_table__Line2_51);
              }
              if (ll_backend__fact_table__succeeded)
                {
                  ll_backend__fact_table__Var_66 = (MR_String) "~";
                  {
                    ll_backend__fact_table__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__fact_table__Line2_51, ll_backend__fact_table__Var_66, &ll_backend__fact_table__Pos1_52);
                  }
                  if (ll_backend__fact_table__succeeded)
                    {
                      {
                        mercury__string__split_4_p_0(ll_backend__fact_table__Line2_51, ll_backend__fact_table__Pos1_52, &ll_backend__fact_table__IndexString_53, &ll_backend__fact_table__Line3_54);
                      }
                      {
                        ll_backend__fact_table__succeeded = mercury__string__first_char_3_p_3(ll_backend__fact_table__Line3_54, &ll_backend__fact_table__Var_55, &ll_backend__fact_table__Line4_56);
                      }
                      if (ll_backend__fact_table__succeeded)
                        {
                          ll_backend__fact_table__Var_67 = (MR_String) "\n";
                          {
                            ll_backend__fact_table__succeeded = mercury__string__remove_suffix_3_p_0(ll_backend__fact_table__Line4_56, ll_backend__fact_table__Var_67, &ll_backend__fact_table__OutputArgsString_57);
                          }
                          if (ll_backend__fact_table__succeeded)
                            {
                              ll_backend__fact_table__succeeded = mercury__string__to_int_2_p_0(ll_backend__fact_table__IndexString_53, &ll_backend__fact_table__Index0_58);
                            }
                        }
                    }
                }
            }
          if (ll_backend__fact_table__succeeded)
            {
              MR_Word ll_backend__fact_table__InputArgStrings_59;
              MR_Word ll_backend__fact_table__InputArgs_60;
              MR_Word ll_backend__fact_table__OutputArgStrings_61;
              MR_Word ll_backend__fact_table__OutputArgs_64;

              {
                ll_backend__fact_table__split_key_to_arg_strings_2_p_0(ll_backend__fact_table__InputArgsString_48, &ll_backend__fact_table__InputArgStrings_59);
              }
              {
                ll_backend__fact_table__get_input_args_list_5_p_0(ll_backend__fact_table__FactArgInfos_7, ll_backend__fact_table__ArgModes_8, ll_backend__fact_table__ModuleInfo_9, ll_backend__fact_table__InputArgStrings_59, &ll_backend__fact_table__InputArgs_60);
              }
              {
                ll_backend__fact_table__split_key_to_arg_strings_2_p_0(ll_backend__fact_table__OutputArgsString_57, &ll_backend__fact_table__OutputArgStrings_61);
              }
              if ((ll_backend__fact_table__OutputArgStrings_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__fact_table__OutputArgs_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  ll_backend__fact_table__get_output_args_list_3_p_0(ll_backend__fact_table__FactArgInfos_7, ll_backend__fact_table__OutputArgStrings_61, &ll_backend__fact_table__OutputArgs_64);
                }
              {
                ll_backend__fact_table__SortFileLine_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__fact_table__SortFileLine_15, 0) = ((MR_Box) (ll_backend__fact_table__InputArgs_60));
                MR_hl_field(MR_mktag(0), ll_backend__fact_table__SortFileLine_15, 1) = ((MR_Box) (ll_backend__fact_table__Index0_58));
                MR_hl_field(MR_mktag(0), ll_backend__fact_table__SortFileLine_15, 2) = ((MR_Box) (ll_backend__fact_table__OutputArgs_64));
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.split_sort_file_line\'/5", (MR_String) "sort file format incorrect");
                return;
              }
            }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__fact_table__MaybeSortFileLine_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__SortFileLine_15));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__fact_table__ErrorCode_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Result_12, (MR_Integer) 0)));
          MR_String ll_backend__fact_table__ErrorMessage_17;
          MR_String ll_backend__fact_table__FileName_18;
          MR_String ll_backend__fact_table__Msg_19;
          MR_Word ll_backend__fact_table__Globals_20;
          MR_Word ll_backend__fact_table__Var_29;
          MR_Word ll_backend__fact_table__Var_31;
          MR_Word ll_backend__fact_table__Var_32;
          MR_Word ll_backend__fact_table__Var_34;
          MR_Word ll_backend__fact_table__Var_35;
          MR_String ll_backend__fact_table__Var_40;

          {
            mercury__io__error_message_2_p_0(ll_backend__fact_table__ErrorCode_16, &ll_backend__fact_table__ErrorMessage_17);
          }
          {
            mercury__io__input_stream_name_3_p_0(&ll_backend__fact_table__FileName_18);
          }
          {
            ll_backend__fact_table__Var_40 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FileName_18, (MR_String) "\':");
          }
          {
            ll_backend__fact_table__Msg_19 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading file \140", ll_backend__fact_table__Var_40);
          }
          {
            hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_9, &ll_backend__fact_table__Globals_20);
          }
          {
            ll_backend__fact_table__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_31, 1) = ((MR_Box) (ll_backend__fact_table__Msg_19));
          }
          {
            ll_backend__fact_table__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_35, 1) = ((MR_Box) (ll_backend__fact_table__ErrorMessage_17));
          }
          {
            ll_backend__fact_table__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_34, 0) = ((MR_Box) (ll_backend__fact_table__Var_35));
            MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__fact_table__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_32, 1) = ((MR_Box) (ll_backend__fact_table__Var_34));
          }
          {
            ll_backend__fact_table__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_29, 0) = ((MR_Box) (ll_backend__fact_table__Var_31));
            MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_29, 1) = ((MR_Box) (ll_backend__fact_table__Var_32));
          }
          {
            parse_tree__error_util__write_error_pieces_plain_4_p_0(ll_backend__fact_table__Globals_20, ll_backend__fact_table__Var_29);
          }
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          *ll_backend__fact_table__MaybeSortFileLine_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__get_output_args_list_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ArgStrings0_2,
  MR_Word * ll_backend__fact_table__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word ll_backend__fact_table__Info_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Infos_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_5, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__IsOutput_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word ll_backend__fact_table__Var_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);

            switch (ll_backend__fact_table__IsOutput_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__Infos_6;

                    ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                if ((ll_backend__fact_table__ArgStrings0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.get_output_args_list\'/3", (MR_String) "not enough ArgStrings");
                      return;
                    }
                  }
                else
                  {
                    MR_String ll_backend__fact_table__ArgString_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__ArgStrings0_2, (MR_Integer) 0)));
                    MR_Word ll_backend__fact_table__ArgStrings_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__ArgStrings0_2, (MR_Integer) 1)));
                    MR_Word ll_backend__fact_table__Arg_14;
                    MR_Word ll_backend__fact_table__Args0_15;
                    MR_Word ll_backend__fact_table__Var_28;

                    ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_9)) == (MR_mktag((MR_Integer) 2)));
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_9, (MR_Integer) 0)));
                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_28 == (MR_Integer) 0);
                      }
                    if (ll_backend__fact_table__succeeded)
                      {
                        MR_Integer ll_backend__fact_table__I_22;

                        {
                          ll_backend__fact_table__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 36, ll_backend__fact_table__ArgString_12, &ll_backend__fact_table__I_22);
                        }
                        if (ll_backend__fact_table__succeeded)
                          {
                            MR_Word ll_backend__fact_table__Var_31;

                            {
                              ll_backend__fact_table__Var_31 = mercury__integer__integer_1_f_0(ll_backend__fact_table__I_22);
                            }
                            {
                              ll_backend__fact_table__Arg_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_14, 0) = ((MR_Box) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_14, 1) = ((MR_Box) (ll_backend__fact_table__Var_31));
                              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_14, 2) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_14, 3) = ((MR_Box) ((MR_Integer) 0));
                            }
                          }
                        else
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to int");
                              return;
                            }
                          }
                      }
                    else
                      {
                        MR_Word ll_backend__fact_table__Var_37;

                        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_9)) == (MR_mktag((MR_Integer) 2)));
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_9, (MR_Integer) 0)));
                            ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_37 == (MR_Integer) 3);
                          }
                        if (ll_backend__fact_table__succeeded)
                          {
                            MR_Word ll_backend__fact_table__Cs0_23;
                            MR_Word ll_backend__fact_table__Cs1_24;
                            MR_Word ll_backend__fact_table__Cs_25;
                            MR_String ll_backend__fact_table__S_26;

                            {
                              mercury__string__to_char_list_2_p_0(ll_backend__fact_table__ArgString_12, &ll_backend__fact_table__Cs0_23);
                            }
                            {
                              ll_backend__fact_table__remove_sort_file_escapes_3_p_0(ll_backend__fact_table__Cs0_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__Cs1_24);
                            }
                            {
                              mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, ll_backend__fact_table__Cs1_24, &ll_backend__fact_table__Cs_25);
                            }
                            {
                              mercury__string__from_char_list_2_p_0(ll_backend__fact_table__Cs_25, &ll_backend__fact_table__S_26);
                            }
                            {
                              ll_backend__fact_table__Arg_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), ll_backend__fact_table__Arg_14, 0) = ((MR_Box) (ll_backend__fact_table__S_26));
                            }
                          }
                        else
                          {
                            MR_Word ll_backend__fact_table__Var_39;

                            ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_9)) == (MR_mktag((MR_Integer) 2)));
                            if (ll_backend__fact_table__succeeded)
                              {
                                ll_backend__fact_table__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_9, (MR_Integer) 0)));
                                ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_39 == (MR_Integer) 2);
                              }
                            if (ll_backend__fact_table__succeeded)
                              {
                                MR_Float ll_backend__fact_table__F_27;

                                {
                                  ll_backend__fact_table__succeeded = mercury__string__to_float_2_p_0(ll_backend__fact_table__ArgString_12, &ll_backend__fact_table__F_27);
                                }
                                if (ll_backend__fact_table__succeeded)
                                  {
                                    ll_backend__fact_table__Arg_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), ll_backend__fact_table__Arg_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                    MR_hl_field(MR_mktag(3), ll_backend__fact_table__Arg_14, 1) = MR_box_float(ll_backend__fact_table__F_27);
                                  }
                                else
                                  {
                                    {
                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to float");
                                      return;
                                    }
                                  }
                              }
                            else
                              {
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "unsupported type");
                                  return;
                                }
                              }
                          }
                      }
                    {
                      ll_backend__fact_table__get_output_args_list_3_p_0(ll_backend__fact_table__Infos_6, ll_backend__fact_table__ArgStrings_13, &ll_backend__fact_table__Args0_15);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__fact_table__HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Arg_14));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__Args0_15));
                    }
                  }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__get_input_args_list_5_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__ModuleInfo_3,
  MR_Word ll_backend__fact_table__ArgStrings0_4,
  MR_Word * ll_backend__fact_table__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *ll_backend__fact_table__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.get_input_args_list\'/5", (MR_String) "too many argmodes");
                return;
              }
            }
        else
          {
            MR_Word ll_backend__fact_table__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));

            if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.get_input_args_list\'/5", (MR_String) "too many fact_arg_infos");
                  return;
                }
              }
            else
              {
                MR_Word ll_backend__fact_table__Mode_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__Modes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));

                {
                  ll_backend__fact_table__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ll_backend__fact_table__ModuleInfo_3, ll_backend__fact_table__Mode_26);
                }
                if (ll_backend__fact_table__succeeded)
                  if ((ll_backend__fact_table__ArgStrings0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.get_input_args_list\'/5", (MR_String) "not enough ArgStrings");
                        return;
                      }
                    }
                  else
                    {
                      MR_String ll_backend__fact_table__ArgString_31 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__ArgStrings0_4, (MR_Integer) 0)));
                      MR_Word ll_backend__fact_table__ArgStrings_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__ArgStrings0_4, (MR_Integer) 1)));
                      MR_Word ll_backend__fact_table__Type_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_42, (MR_Integer) 0)));
                      MR_Word ll_backend__fact_table__Arg_36;
                      MR_Word ll_backend__fact_table__Args0_37;
                      MR_Word ll_backend__fact_table__Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_42, (MR_Integer) 1)))) & (MR_Integer) 1);
                      MR_Word ll_backend__fact_table__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_42, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word ll_backend__fact_table__Var_52;

                      ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_33)) == (MR_mktag((MR_Integer) 2)));
                      if (ll_backend__fact_table__succeeded)
                        {
                          ll_backend__fact_table__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_33, (MR_Integer) 0)));
                          ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_52 == (MR_Integer) 0);
                        }
                      if (ll_backend__fact_table__succeeded)
                        {
                          MR_Integer ll_backend__fact_table__I_46;

                          {
                            ll_backend__fact_table__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 36, ll_backend__fact_table__ArgString_31, &ll_backend__fact_table__I_46);
                          }
                          if (ll_backend__fact_table__succeeded)
                            {
                              MR_Word ll_backend__fact_table__Var_55;

                              {
                                ll_backend__fact_table__Var_55 = mercury__integer__integer_1_f_0(ll_backend__fact_table__I_46);
                              }
                              {
                                ll_backend__fact_table__Arg_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_36, 0) = ((MR_Box) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_36, 1) = ((MR_Box) (ll_backend__fact_table__Var_55));
                                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_36, 2) = ((MR_Box) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_36, 3) = ((MR_Box) ((MR_Integer) 0));
                              }
                            }
                          else
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to int");
                                return;
                              }
                            }
                        }
                      else
                        {
                          MR_Word ll_backend__fact_table__Var_61;

                          ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_33)) == (MR_mktag((MR_Integer) 2)));
                          if (ll_backend__fact_table__succeeded)
                            {
                              ll_backend__fact_table__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_33, (MR_Integer) 0)));
                              ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_61 == (MR_Integer) 3);
                            }
                          if (ll_backend__fact_table__succeeded)
                            {
                              MR_Word ll_backend__fact_table__Cs0_47;
                              MR_Word ll_backend__fact_table__Cs1_48;
                              MR_Word ll_backend__fact_table__Cs_49;
                              MR_String ll_backend__fact_table__S_50;

                              {
                                mercury__string__to_char_list_2_p_0(ll_backend__fact_table__ArgString_31, &ll_backend__fact_table__Cs0_47);
                              }
                              {
                                ll_backend__fact_table__remove_sort_file_escapes_3_p_0(ll_backend__fact_table__Cs0_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__Cs1_48);
                              }
                              {
                                mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, ll_backend__fact_table__Cs1_48, &ll_backend__fact_table__Cs_49);
                              }
                              {
                                mercury__string__from_char_list_2_p_0(ll_backend__fact_table__Cs_49, &ll_backend__fact_table__S_50);
                              }
                              {
                                ll_backend__fact_table__Arg_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), ll_backend__fact_table__Arg_36, 0) = ((MR_Box) (ll_backend__fact_table__S_50));
                              }
                            }
                          else
                            {
                              MR_Word ll_backend__fact_table__Var_63;

                              ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_33)) == (MR_mktag((MR_Integer) 2)));
                              if (ll_backend__fact_table__succeeded)
                                {
                                  ll_backend__fact_table__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_33, (MR_Integer) 0)));
                                  ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_63 == (MR_Integer) 2);
                                }
                              if (ll_backend__fact_table__succeeded)
                                {
                                  MR_Float ll_backend__fact_table__F_51;

                                  {
                                    ll_backend__fact_table__succeeded = mercury__string__to_float_2_p_0(ll_backend__fact_table__ArgString_31, &ll_backend__fact_table__F_51);
                                  }
                                  if (ll_backend__fact_table__succeeded)
                                    {
                                      ll_backend__fact_table__Arg_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Arg_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Arg_36, 1) = MR_box_float(ll_backend__fact_table__F_51);
                                    }
                                  else
                                    {
                                      {
                                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to float");
                                        return;
                                      }
                                    }
                                }
                              else
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.convert_key_string_to_arg\'/3", (MR_String) "unsupported type");
                                    return;
                                  }
                                }
                            }
                        }
                      {
                        ll_backend__fact_table__get_input_args_list_5_p_0(ll_backend__fact_table__Var_41, ll_backend__fact_table__Modes_27, ll_backend__fact_table__ModuleInfo_3, ll_backend__fact_table__ArgStrings_32, &ll_backend__fact_table__Args0_37);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__fact_table__HeadVar__5_5 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Arg_36));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__Args0_37));
                      }
                    }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__Var_41;
                      MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Modes_27;

                      ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
                      ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__remove_sort_file_escapes_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Word * ll_backend__fact_table__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__HeadVar__3_3 = ll_backend__fact_table__HeadVar__2_2;
        else
          {
            MR_Char ll_backend__fact_table__C0_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Cs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));

            ll_backend__fact_table__succeeded = (ll_backend__fact_table__C0_5 == (MR_Char) 92);
            if (ll_backend__fact_table__succeeded)
              if ((ll_backend__fact_table__Cs0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.remove_sort_file_escapes\'/3", (MR_String) "something went wrong");
                    return;
                  }
                }
              else
                {
                  MR_Char ll_backend__fact_table__C1_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Cs0_6, (MR_Integer) 0)));
                  MR_Word ll_backend__fact_table__Cs1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Cs0_6, (MR_Integer) 1)));
                  MR_Char ll_backend__fact_table__C_11;
                  MR_Word ll_backend__fact_table__Var_18;

                  ll_backend__fact_table__succeeded = (ll_backend__fact_table__C1_9 == (MR_Char) 92);
                  if (ll_backend__fact_table__succeeded)
                    ll_backend__fact_table__C_11 = (MR_Char) 92;
                  else
                    {
                      ll_backend__fact_table__succeeded = (ll_backend__fact_table__C1_9 == (MR_Char) 99);
                      if (ll_backend__fact_table__succeeded)
                        ll_backend__fact_table__C_11 = (MR_Char) 58;
                      else
                        {
                          ll_backend__fact_table__succeeded = (ll_backend__fact_table__C1_9 == (MR_Char) 116);
                          if (ll_backend__fact_table__succeeded)
                            ll_backend__fact_table__C_11 = (MR_Char) 126;
                          else
                            {
                              ll_backend__fact_table__succeeded = (ll_backend__fact_table__C1_9 == (MR_Char) 110);
                              if (ll_backend__fact_table__succeeded)
                                ll_backend__fact_table__C_11 = (MR_Char) 10;
                              else
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.remove_sort_file_escapes\'/3", (MR_String) "something went wrong");
                                    return;
                                  }
                                }
                            }
                        }
                    }
                  {
                    ll_backend__fact_table__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_18, 0) = ((MR_Box) (MR_Word) (ll_backend__fact_table__C_11));
                    MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_18, 1) = ((MR_Box) (ll_backend__fact_table__HeadVar__2_2));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__Cs1_10;
                    MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Var_18;

                    ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
                    ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
            else
              {
                MR_Word ll_backend__fact_table__Var_19;

                {
                  ll_backend__fact_table__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_19, 0) = ((MR_Box) (MR_Word) (ll_backend__fact_table__C0_5));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_19, 1) = ((MR_Box) (ll_backend__fact_table__HeadVar__2_2));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__Cs0_6;
                  MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Var_19;

                  ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
                  ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__split_key_to_arg_strings_2_p_0(
  MR_String ll_backend__fact_table__Key0_3,
  MR_Word * ll_backend__fact_table__ArgStrings_4)
{
  {
    MR_bool ll_backend__fact_table__succeeded = (strcmp(ll_backend__fact_table__Key0_3, (MR_String) "") == 0);

    if (ll_backend__fact_table__succeeded)
      *ll_backend__fact_table__ArgStrings_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String ll_backend__fact_table__ArgString_6;
        MR_String ll_backend__fact_table__Key2_9;
        MR_Integer ll_backend__fact_table__Pos_5;
        MR_String ll_backend__fact_table__Key1_7;
        MR_Char ll_backend__fact_table__Var_8;

        {
          ll_backend__fact_table__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__fact_table__Key0_3, (MR_String) ":", &ll_backend__fact_table__Pos_5);
        }
        if (ll_backend__fact_table__succeeded)
          {
            {
              mercury__string__split_4_p_0(ll_backend__fact_table__Key0_3, ll_backend__fact_table__Pos_5, &ll_backend__fact_table__ArgString_6, &ll_backend__fact_table__Key1_7);
            }
            {
              ll_backend__fact_table__succeeded = mercury__string__first_char_3_p_3(ll_backend__fact_table__Key1_7, &ll_backend__fact_table__Var_8, &ll_backend__fact_table__Key2_9);
            }
          }
        if (ll_backend__fact_table__succeeded)
          {
            MR_Word ll_backend__fact_table__ArgStrings0_10;

            {
              ll_backend__fact_table__split_key_to_arg_strings_2_p_0(ll_backend__fact_table__Key2_9, &ll_backend__fact_table__ArgStrings0_10);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__fact_table__ArgStrings_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__ArgString_6));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__ArgStrings0_10));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.split_key_to_arg_strings\'/2", (MR_String) "sort file key format is incorrect");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_closing_brace_3_p_0(
  MR_Word ll_backend__fact_table__OutputStream_4)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_4, (MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_new_data_array_5_p_0(
  MR_Word ll_backend__fact_table__OutputStream_6,
  MR_String ll_backend__fact_table__StructName_7,
  MR_Integer ll_backend__fact_table__FactNum_8)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__Var_28;

    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_6, (MR_String) "const struct ");
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_6, ll_backend__fact_table__StructName_7);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_6, (MR_String) "_struct ");
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_6, ll_backend__fact_table__StructName_7);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__FactNum_8, &ll_backend__fact_table__Var_28);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_6, ll_backend__fact_table__Var_28);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_6, (MR_String) "[] = {\n");
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_2_7_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__Globals_2,
  MR_Word ll_backend__fact_table__ExistsAllInMode_3,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__STATE_VARIABLE_ProcTable_5 = ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_4;
        else
          {
            MR_Word ll_backend__fact_table__TypeCtorInfo_83_83;
            MR_Integer ll_backend__fact_table__ProcID_16;
            MR_String ll_backend__fact_table__FileName_17;
            MR_Word ll_backend__fact_table__ProcFiles_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__ProcInfo0_23;
            MR_String ll_backend__fact_table__Command_24;
            MR_Word ll_backend__fact_table__Verbose_25;
            MR_Word ll_backend__fact_table__Result_26;
            MR_Word ll_backend__fact_table__Determinism_28;
            MR_Word ll_backend__fact_table__ProcInfo_33;
            MR_Word ll_backend__fact_table__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_String ll_backend__fact_table__Var_39;
            MR_Word ll_backend__fact_table__STATE_VARIABLE_ProcTable_79_79;
            MR_String ll_backend__fact_table__Var_86;
            MR_String ll_backend__fact_table__Var_88;
            MR_String ll_backend__fact_table__Var_89;
            MR_String ll_backend__fact_table__Var_91;
            MR_String ll_backend__fact_table__Var_92;
            MR_Box ll_backend__fact_table__conv0_ProcInfo0_23;

            ll_backend__fact_table__ProcID_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_38, (MR_Integer) 0)));
            ll_backend__fact_table__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_38, (MR_Integer) 1)));
            ll_backend__fact_table__TypeCtorInfo_83_83 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(ll_backend__fact_table__TypeCtorInfo_83_83, ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_4, ll_backend__fact_table__ProcID_16, &ll_backend__fact_table__conv0_ProcInfo0_23);
            }
            ll_backend__fact_table__ProcInfo0_23 = ((MR_Word) ll_backend__fact_table__conv0_ProcInfo0_23);
            {
              ll_backend__fact_table__Var_86 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FileName_17, (MR_String) " | LC_ALL=C sort -cu >/dev/null 2>&1");
            }
            {
              ll_backend__fact_table__Var_88 = mercury__string__f_43_43_2_f_0((MR_String) " && cut -d\'~\' -f1 ", ll_backend__fact_table__Var_86);
            }
            {
              ll_backend__fact_table__Var_89 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FileName_17, ll_backend__fact_table__Var_88);
            }
            {
              ll_backend__fact_table__Var_91 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__fact_table__Var_89);
            }
            {
              ll_backend__fact_table__Var_92 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__FileName_17, ll_backend__fact_table__Var_91);
            }
            {
              ll_backend__fact_table__Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "LC_ALL=C sort -o ", ll_backend__fact_table__Var_92);
            }
            {
              parse_tree__module_cmds__make_command_string_3_p_0(ll_backend__fact_table__Var_39, (MR_Integer) 1, &ll_backend__fact_table__Command_24);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(ll_backend__fact_table__Globals_2, (MR_Integer) 56, &ll_backend__fact_table__Verbose_25);
            }
            {
              libs__file_util__maybe_write_string_4_p_0(ll_backend__fact_table__Verbose_25, (MR_String) "% Invoking system command \140");
            }
            {
              libs__file_util__maybe_write_string_4_p_0(ll_backend__fact_table__Verbose_25, ll_backend__fact_table__Command_24);
            }
            {
              libs__file_util__maybe_write_string_4_p_0(ll_backend__fact_table__Verbose_25, (MR_String) "\'...");
            }
            {
              mercury__io__call_system_4_p_0(ll_backend__fact_table__Command_24, &ll_backend__fact_table__Result_26);
            }
            {
              libs__file_util__maybe_write_string_4_p_0(ll_backend__fact_table__Verbose_25, (MR_String) "done.\n");
            }
            if (((MR_tag((MR_Word) ll_backend__fact_table__Result_26)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word ll_backend__fact_table__ErrorCode_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Result_26, (MR_Integer) 0)));

                {
                  ll_backend__fact_table__write_call_system_error_msg_5_p_0(ll_backend__fact_table__Globals_2, (MR_String) "sort", ll_backend__fact_table__ErrorCode_32);
                }
                ll_backend__fact_table__Determinism_28 = (MR_Integer) 6;
              }
            else
              {
                MR_Integer ll_backend__fact_table__ExitStatus_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Result_26, (MR_Integer) 0)));

                ll_backend__fact_table__succeeded = (ll_backend__fact_table__ExitStatus_27 == (MR_Integer) 0);
                if (!(ll_backend__fact_table__succeeded))
                  {
                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__ExistsAllInMode_3 == (MR_Integer) 1);
                    if (ll_backend__fact_table__succeeded)
                      ll_backend__fact_table__succeeded = (ll_backend__fact_table__ProcFiles_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                if (ll_backend__fact_table__succeeded)
                  ll_backend__fact_table__Determinism_28 = (MR_Integer) 1;
                else
                  {
                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__ExitStatus_27 >= (MR_Integer) 1);
                    if (ll_backend__fact_table__succeeded)
                      {
                        MR_Word ll_backend__fact_table__MaybeDet_29;
                        MR_Word ll_backend__fact_table__Var_84;

                        {
                          hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ll_backend__fact_table__ProcInfo0_23, &ll_backend__fact_table__MaybeDet_29);
                        }
                        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__MaybeDet_29)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeDet_29, (MR_Integer) 0)));
                            switch (ll_backend__fact_table__Var_84) {
                              default:
                                ll_backend__fact_table__succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 4:
                                ll_backend__fact_table__succeeded = MR_TRUE;
                                break;
                              case (MR_Integer) 5:
                                ll_backend__fact_table__succeeded = MR_TRUE;
                                break;
                            }
                          }
                        if (ll_backend__fact_table__succeeded)
                          ll_backend__fact_table__Determinism_28 = (MR_Integer) 5;
                        else
                          ll_backend__fact_table__Determinism_28 = (MR_Integer) 3;
                      }
                    else
                      {
                        MR_String ll_backend__fact_table__ProgName_30;
                        MR_String ll_backend__fact_table__Msg_31;
                        MR_Word ll_backend__fact_table__Var_73;
                        MR_Word ll_backend__fact_table__Var_75;

                        {
                          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ll_backend__fact_table__ProgName_30);
                        }
                        {
                          ll_backend__fact_table__Msg_31 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ProgName_30, (MR_String) ": an error occurred in the \140sort\' program during fact table determinism inference.");
                        }
                        {
                          ll_backend__fact_table__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_75, 1) = ((MR_Box) (ll_backend__fact_table__Msg_31));
                        }
                        {
                          ll_backend__fact_table__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_73, 0) = ((MR_Box) (ll_backend__fact_table__Var_75));
                          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__error_util__write_error_pieces_plain_4_p_0(ll_backend__fact_table__Globals_2, ll_backend__fact_table__Var_73);
                        }
                        {
                          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                        }
                        ll_backend__fact_table__Determinism_28 = (MR_Integer) 6;
                      }
                  }
              }
            {
              hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(ll_backend__fact_table__Determinism_28, ll_backend__fact_table__ProcInfo0_23, &ll_backend__fact_table__ProcInfo_33);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(ll_backend__fact_table__TypeCtorInfo_83_83, ll_backend__fact_table__ProcID_16, ((MR_Box) (ll_backend__fact_table__ProcInfo_33)), ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_4, &ll_backend__fact_table__STATE_VARIABLE_ProcTable_79_79);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__ProcFiles_18;
              MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_ProcTable_0_4 = ll_backend__fact_table__STATE_VARIABLE_ProcTable_79_79;

              ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_4 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_ProcTable_0_4;
              ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__write_call_system_error_msg_5_p_0(
  MR_Word ll_backend__fact_table__Globals_6,
  MR_String ll_backend__fact_table__Cmd_7,
  MR_Word ll_backend__fact_table__ErrorCode_8)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__ErrorMsg_10;
    MR_String ll_backend__fact_table__ProgName_11;
    MR_String ll_backend__fact_table__Msg_12;
    MR_Word ll_backend__fact_table__Var_23;
    MR_Word ll_backend__fact_table__Var_25;
    MR_Word ll_backend__fact_table__Var_26;
    MR_Word ll_backend__fact_table__Var_28;
    MR_Word ll_backend__fact_table__Var_29;
    MR_String ll_backend__fact_table__Var_34;
    MR_String ll_backend__fact_table__Var_36;

    {
      mercury__io__error_message_2_p_0(ll_backend__fact_table__ErrorCode_8, &ll_backend__fact_table__ErrorMsg_10);
    }
    {
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ll_backend__fact_table__ProgName_11);
    }
    {
      ll_backend__fact_table__Var_34 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Cmd_7, (MR_String) ":");
    }
    {
      ll_backend__fact_table__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ": error executing system command \140", ll_backend__fact_table__Var_34);
    }
    {
      ll_backend__fact_table__Msg_12 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__ProgName_11, ll_backend__fact_table__Var_36);
    }
    {
      ll_backend__fact_table__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_25, 1) = ((MR_Box) (ll_backend__fact_table__Msg_12));
    }
    {
      ll_backend__fact_table__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_29, 1) = ((MR_Box) (ll_backend__fact_table__ErrorMsg_10));
    }
    {
      ll_backend__fact_table__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, 0) = ((MR_Box) (ll_backend__fact_table__Var_29));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__fact_table__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_26, 1) = ((MR_Box) (ll_backend__fact_table__Var_28));
    }
    {
      ll_backend__fact_table__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_23, 0) = ((MR_Box) (ll_backend__fact_table__Var_25));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_23, 1) = ((MR_Box) (ll_backend__fact_table__Var_26));
    }
    {
      parse_tree__error_util__write_error_pieces_plain_4_p_0(ll_backend__fact_table__Globals_6, ll_backend__fact_table__Var_23);
    }
    {
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__close_sort_files_4_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word * ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__fact_table__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer ll_backend__fact_table__ProcID_8;
        MR_Word ll_backend__fact_table__Stream_9;
        MR_Word ll_backend__fact_table__ProcStreams_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ll_backend__fact_table__FileName_11;
        MR_Word ll_backend__fact_table__ProcFiles_12;
        MR_Word ll_backend__fact_table__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Var_17;

        ll_backend__fact_table__ProcID_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_16, (MR_Integer) 0)));
        ll_backend__fact_table__Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_16, (MR_Integer) 1)));
        {
          mercury__io__output_stream_name_4_p_0(ll_backend__fact_table__Stream_9, &ll_backend__fact_table__FileName_11);
        }
        {
          ll_backend__fact_table__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_17, 0) = ((MR_Box) (ll_backend__fact_table__ProcID_8));
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_17, 1) = ((MR_Box) (ll_backend__fact_table__FileName_11));
        }
        {
          mercury__io__close_output_3_p_0(ll_backend__fact_table__Stream_9);
        }
        {
          ll_backend__fact_table__close_sort_files_4_p_0(ll_backend__fact_table__ProcStreams_10, &ll_backend__fact_table__ProcFiles_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__fact_table__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__ProcFiles_12));
        }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__open_sort_files_6_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word * ll_backend__fact_table__HeadVar__2_2,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_3,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_4)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__fact_table__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__fact_table__STATE_VARIABLE_Errors_4 = ll_backend__fact_table__STATE_VARIABLE_Errors_0_3;
      }
    else
      {
        MR_Integer ll_backend__fact_table__ProcID_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ProcIDs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__SortFileNameResult_18;

        {
          libs__file_util__open_temp_output_3_p_0(&ll_backend__fact_table__SortFileNameResult_18);
        }
        if (((MR_tag((MR_Word) ll_backend__fact_table__SortFileNameResult_18)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String ll_backend__fact_table__ErrorMessage_22 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__SortFileNameResult_18, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_28;
            MR_Word ll_backend__fact_table__Var_30;
            MR_Word ll_backend__fact_table__Var_41;

            *ll_backend__fact_table__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              ll_backend__fact_table__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_30, 1) = ((MR_Box) (ll_backend__fact_table__ErrorMessage_22));
            }
            {
              ll_backend__fact_table__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, 0) = ((MR_Box) (ll_backend__fact_table__Var_30));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__fact_table__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_41, 1) = ((MR_Box) (ll_backend__fact_table__Var_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__fact_table__STATE_VARIABLE_Errors_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_41));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_Errors_0_3));
            }
          }
        else
          {
            MR_Word ll_backend__fact_table__Stream_20;
            MR_Word ll_backend__fact_table__ProcStreams0_21;
            MR_Tuple ll_backend__fact_table__Var_32 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__SortFileNameResult_18, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_35;
            MR_String ll_backend__fact_table___SortFileName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_32, (MR_Integer) 0)));

            ll_backend__fact_table__Stream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_32, (MR_Integer) 1)));
            {
              ll_backend__fact_table__open_sort_files_6_p_0(ll_backend__fact_table__ProcIDs_14, &ll_backend__fact_table__ProcStreams0_21, ll_backend__fact_table__STATE_VARIABLE_Errors_0_3, ll_backend__fact_table__STATE_VARIABLE_Errors_4);
            }
            {
              ll_backend__fact_table__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_35, 0) = ((MR_Box) (ll_backend__fact_table__ProcID_13));
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_35, 1) = ((MR_Box) (ll_backend__fact_table__Stream_20));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__fact_table__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_35));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__ProcStreams0_21));
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__infer_determinism_pass_1_12_p_0(
  MR_Word ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_34,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_PredInfo_35,
  MR_Word ll_backend__fact_table__Context_14,
  MR_Word ll_backend__fact_table__ModuleInfo_15,
  MR_Word * ll_backend__fact_table__CheckProcs_16,
  MR_Word * ll_backend__fact_table__ExistsAllInMode_17,
  MR_Word * ll_backend__fact_table__WriteHashTables_18,
  MR_Word * ll_backend__fact_table__WriteDataTable_19,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_0_36,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_37,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_38,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_39)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__ProcTable0_22;
    MR_Word ll_backend__fact_table__ProcIDs_23;

    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_34, &ll_backend__fact_table__ProcTable0_22);
    }
    {
      ll_backend__fact_table__ProcIDs_23 = hlds__hlds_pred__pred_info_procids_1_f_0(ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_34);
    }
    if ((ll_backend__fact_table__ProcIDs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String ll_backend__fact_table__PredString_24;
        MR_Integer ll_backend__fact_table__Arity_25;
        MR_String ll_backend__fact_table__Msg_26;
        MR_Word ll_backend__fact_table__Var_50;
        MR_Word ll_backend__fact_table__Var_52;
        MR_String ll_backend__fact_table__Var_56;
        MR_String ll_backend__fact_table__Var_63;
        MR_String ll_backend__fact_table__Var_65;
        MR_String ll_backend__fact_table__Var_66;
        MR_Word ll_backend__fact_table__Var_74;
        MR_Word ll_backend__fact_table__Var_75;

        {
          ll_backend__fact_table__PredString_24 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_34);
        }
        {
          ll_backend__fact_table__Arity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_34);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__Arity_25, &ll_backend__fact_table__Var_56);
        }
        {
          ll_backend__fact_table__Var_63 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_56, (MR_String) "\'.\n");
        }
        {
          ll_backend__fact_table__Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__fact_table__Var_63);
        }
        {
          ll_backend__fact_table__Var_66 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredString_24, ll_backend__fact_table__Var_65);
        }
        {
          ll_backend__fact_table__Msg_26 = mercury__string__f_43_43_2_f_0((MR_String) "Error: no modes declared for fact table \140", ll_backend__fact_table__Var_66);
        }
        {
          ll_backend__fact_table__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_52, 1) = ((MR_Box) (ll_backend__fact_table__Msg_26));
        }
        {
          ll_backend__fact_table__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_50, 0) = ((MR_Box) (ll_backend__fact_table__Var_52));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__fact_table__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_75, 0) = ((MR_Box) (ll_backend__fact_table__Context_14));
        }
        {
          ll_backend__fact_table__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_74, 0) = ((MR_Box) (ll_backend__fact_table__Var_75));
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_74, 1) = ((MR_Box) (ll_backend__fact_table__Var_50));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__fact_table__STATE_VARIABLE_Errors_39 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_74));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_Errors_0_38));
        }
        *ll_backend__fact_table__CheckProcs_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__fact_table__ExistsAllInMode_17 = (MR_Integer) 0;
        *ll_backend__fact_table__WriteHashTables_18 = (MR_Integer) 0;
        *ll_backend__fact_table__WriteDataTable_19 = (MR_Integer) 0;
        *ll_backend__fact_table__STATE_VARIABLE_PredInfo_35 = ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_34;
        *ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_37 = ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_0_36;
      }
    else
      {
        MR_Word ll_backend__fact_table__ProcTable_29;
        MR_Word ll_backend__fact_table__CheckProcs0_30;
        MR_Word ll_backend__fact_table__MaybeAllInProc_31;
        MR_Word ll_backend__fact_table__CheckProcs1_33;

        {
          ll_backend__fact_table__infer_proc_determinism_pass_1_13_p_0(ll_backend__fact_table__ProcIDs_23, ll_backend__fact_table__ModuleInfo_15, ll_backend__fact_table__ProcTable0_22, &ll_backend__fact_table__ProcTable_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__fact_table__CheckProcs0_30, ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_0_36, ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_37, &ll_backend__fact_table__MaybeAllInProc_31, ll_backend__fact_table__WriteHashTables_18, ll_backend__fact_table__WriteDataTable_19, ll_backend__fact_table__STATE_VARIABLE_Errors_0_38, ll_backend__fact_table__STATE_VARIABLE_Errors_39);
        }
        if ((ll_backend__fact_table__MaybeAllInProc_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__fact_table__CheckProcs1_33 = ll_backend__fact_table__CheckProcs0_30;
            *ll_backend__fact_table__ExistsAllInMode_17 = (MR_Integer) 0;
          }
        else
          {
            MR_Integer ll_backend__fact_table__ProcID_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeAllInProc_31, (MR_Integer) 0)));

            {
              ll_backend__fact_table__CheckProcs1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__CheckProcs1_33, 0) = ((MR_Box) (ll_backend__fact_table__ProcID_32));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__CheckProcs1_33, 1) = ((MR_Box) (ll_backend__fact_table__CheckProcs0_30));
            }
            *ll_backend__fact_table__ExistsAllInMode_17 = (MR_Integer) 1;
          }
        {
          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__fact_table__CheckProcs1_33, ll_backend__fact_table__CheckProcs_16);
        }
        {
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ll_backend__fact_table__ProcTable_29, ll_backend__fact_table__STATE_VARIABLE_PredInfo_0_34, ll_backend__fact_table__STATE_VARIABLE_PredInfo_35);
        }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__infer_proc_determinism_pass_1_13_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ModuleInfo_2,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_3,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_ProcTable_4,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_CheckProcs_0_5,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_CheckProcs_6,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_0_7,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_8,
  MR_Word * ll_backend__fact_table__HeadVar__9_9,
  MR_Word * ll_backend__fact_table__HeadVar__10_10,
  MR_Word * ll_backend__fact_table__HeadVar__11_11,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_12,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_13)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__fact_table__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__fact_table__HeadVar__10_10 = (MR_Integer) 0;
        *ll_backend__fact_table__HeadVar__11_11 = (MR_Integer) 0;
        *ll_backend__fact_table__STATE_VARIABLE_Errors_13 = ll_backend__fact_table__STATE_VARIABLE_Errors_0_12;
        *ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_8 = ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_0_7;
        *ll_backend__fact_table__STATE_VARIABLE_CheckProcs_6 = ll_backend__fact_table__STATE_VARIABLE_CheckProcs_0_5;
        *ll_backend__fact_table__STATE_VARIABLE_ProcTable_4 = ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_3;
      }
    else
      {
        MR_Word ll_backend__fact_table__TypeCtorInfo_86_86 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        MR_Integer ll_backend__fact_table__ProcID_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__ProcIDs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ProcInfo0_37;
        MR_Word ll_backend__fact_table__ArgModes_38;
        MR_Word ll_backend__fact_table__ModeType_39;
        MR_Word ll_backend__fact_table__InferredDetism_40;
        MR_Word ll_backend__fact_table__WriteHashTables0_41;
        MR_Word ll_backend__fact_table__WriteDataTable0_42;
        MR_Word ll_backend__fact_table__MaybeAllInProc0_43;
        MR_Word ll_backend__fact_table__MaybeAllInProc1_49;
        MR_Word ll_backend__fact_table__WriteHashTables1_50;
        MR_Word ll_backend__fact_table__WriteDataTable1_51;
        MR_Word ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_61_61;
        MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_69_69;
        MR_Word ll_backend__fact_table__STATE_VARIABLE_CheckProcs_72_72;
        MR_Word ll_backend__fact_table__STATE_VARIABLE_ProcTable_78_78;
        MR_Box ll_backend__fact_table__conv0_ProcInfo0_37;
        MR_Word ll_backend__fact_table__Determinism_47;

        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(ll_backend__fact_table__TypeCtorInfo_86_86, ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_3, ll_backend__fact_table__ProcID_27, &ll_backend__fact_table__conv0_ProcInfo0_37);
        }
        ll_backend__fact_table__ProcInfo0_37 = ((MR_Word) ll_backend__fact_table__conv0_ProcInfo0_37);
        {
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__fact_table__ProcInfo0_37, &ll_backend__fact_table__ArgModes_38);
        }
        {
          ll_backend__fact_table__fill_in_fact_arg_infos_4_p_0(ll_backend__fact_table__ArgModes_38, ll_backend__fact_table__ModuleInfo_2, ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_0_7, &ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_61_61);
        }
        {
          ll_backend__fact_table__fact_table_mode_type_3_p_0(ll_backend__fact_table__ArgModes_38, ll_backend__fact_table__ModuleInfo_2, &ll_backend__fact_table__ModeType_39);
        }
        switch (ll_backend__fact_table__ModeType_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ll_backend__fact_table__InferredDetism_40 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[5]);
              ll_backend__fact_table__WriteHashTables0_41 = (MR_Integer) 1;
              ll_backend__fact_table__WriteDataTable0_42 = (MR_Integer) 0;
              {
                ll_backend__fact_table__MaybeAllInProc0_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeAllInProc0_43, 0) = ((MR_Box) (ll_backend__fact_table__ProcID_27));
              }
              ll_backend__fact_table__STATE_VARIABLE_CheckProcs_72_72 = ll_backend__fact_table__STATE_VARIABLE_CheckProcs_0_5;
              ll_backend__fact_table__STATE_VARIABLE_Errors_69_69 = ll_backend__fact_table__STATE_VARIABLE_Errors_0_12;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__fact_table__MaybeDet_44;
              MR_Word ll_backend__fact_table__Var_87;

              {
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ll_backend__fact_table__ProcInfo0_37, &ll_backend__fact_table__MaybeDet_44);
              }
              ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__MaybeDet_44)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__fact_table__succeeded)
                {
                  ll_backend__fact_table__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeDet_44, (MR_Integer) 0)));
                  switch (ll_backend__fact_table__Var_87) {
                    default:
                      ll_backend__fact_table__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 4:
                      ll_backend__fact_table__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 5:
                      ll_backend__fact_table__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (ll_backend__fact_table__succeeded)
                {
                  ll_backend__fact_table__InferredDetism_40 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[6]);
                }
              else
                {
                  ll_backend__fact_table__InferredDetism_40 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[7]);
                }
              ll_backend__fact_table__WriteHashTables0_41 = (MR_Integer) 0;
              ll_backend__fact_table__WriteDataTable0_42 = (MR_Integer) 1;
              ll_backend__fact_table__MaybeAllInProc0_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__fact_table__STATE_VARIABLE_CheckProcs_72_72 = ll_backend__fact_table__STATE_VARIABLE_CheckProcs_0_5;
              ll_backend__fact_table__STATE_VARIABLE_Errors_69_69 = ll_backend__fact_table__STATE_VARIABLE_Errors_0_12;
            }
            break;
          case (MR_Integer) 2:
            {
              ll_backend__fact_table__InferredDetism_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ll_backend__fact_table__STATE_VARIABLE_CheckProcs_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__STATE_VARIABLE_CheckProcs_72_72, 0) = ((MR_Box) (ll_backend__fact_table__ProcID_27));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__STATE_VARIABLE_CheckProcs_72_72, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_CheckProcs_0_5));
              }
              ll_backend__fact_table__WriteHashTables0_41 = (MR_Integer) 1;
              ll_backend__fact_table__WriteDataTable0_42 = (MR_Integer) 1;
              ll_backend__fact_table__MaybeAllInProc0_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__fact_table__STATE_VARIABLE_Errors_69_69 = ll_backend__fact_table__STATE_VARIABLE_Errors_0_12;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__fact_table__Context_45;
              MR_Word ll_backend__fact_table__Var_94;
              MR_Word ll_backend__fact_table__Var_95;

              ll_backend__fact_table__InferredDetism_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                hlds__hlds_pred__proc_info_get_context_2_p_0(ll_backend__fact_table__ProcInfo0_37, &ll_backend__fact_table__Context_45);
              }
              {
                ll_backend__fact_table__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_95, 0) = ((MR_Box) (ll_backend__fact_table__Context_45));
              }
              {
                ll_backend__fact_table__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_94, 0) = ((MR_Box) (ll_backend__fact_table__Var_95));
                MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[59])));
              }
              {
                ll_backend__fact_table__STATE_VARIABLE_Errors_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__STATE_VARIABLE_Errors_69_69, 0) = ((MR_Box) (ll_backend__fact_table__Var_94));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__STATE_VARIABLE_Errors_69_69, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_Errors_0_12));
              }
              ll_backend__fact_table__WriteHashTables0_41 = (MR_Integer) 0;
              ll_backend__fact_table__WriteDataTable0_42 = (MR_Integer) 0;
              ll_backend__fact_table__MaybeAllInProc0_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__fact_table__STATE_VARIABLE_CheckProcs_72_72 = ll_backend__fact_table__STATE_VARIABLE_CheckProcs_0_5;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__fact_table__Context_83;

              ll_backend__fact_table__InferredDetism_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              {
                hlds__hlds_pred__proc_info_get_context_2_p_0(ll_backend__fact_table__ProcInfo0_37, &ll_backend__fact_table__Context_83);
              }
              {
                ll_backend__fact_table__add_error_report_4_p_0(ll_backend__fact_table__Context_83, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[61]), ll_backend__fact_table__STATE_VARIABLE_Errors_0_12, &ll_backend__fact_table__STATE_VARIABLE_Errors_69_69);
              }
              ll_backend__fact_table__WriteHashTables0_41 = (MR_Integer) 0;
              ll_backend__fact_table__WriteDataTable0_42 = (MR_Integer) 0;
              ll_backend__fact_table__MaybeAllInProc0_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__fact_table__STATE_VARIABLE_CheckProcs_72_72 = ll_backend__fact_table__STATE_VARIABLE_CheckProcs_0_5;
            }
            break;
        }
        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__InferredDetism_40)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__Determinism_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__InferredDetism_40, (MR_Integer) 0)));
            {
              MR_Word ll_backend__fact_table__ProcInfo_48;

              {
                hlds__hlds_pred__proc_info_set_inferred_determinism_3_p_0(ll_backend__fact_table__Determinism_47, ll_backend__fact_table__ProcInfo0_37, &ll_backend__fact_table__ProcInfo_48);
              }
              {
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(ll_backend__fact_table__TypeCtorInfo_86_86, ll_backend__fact_table__ProcID_27, ((MR_Box) (ll_backend__fact_table__ProcInfo_48)), ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_3, &ll_backend__fact_table__STATE_VARIABLE_ProcTable_78_78);
              }
            }
          }
        else
          ll_backend__fact_table__STATE_VARIABLE_ProcTable_78_78 = ll_backend__fact_table__STATE_VARIABLE_ProcTable_0_3;
        {
          ll_backend__fact_table__infer_proc_determinism_pass_1_13_p_0(ll_backend__fact_table__ProcIDs_28, ll_backend__fact_table__ModuleInfo_2, ll_backend__fact_table__STATE_VARIABLE_ProcTable_78_78, ll_backend__fact_table__STATE_VARIABLE_ProcTable_4, ll_backend__fact_table__STATE_VARIABLE_CheckProcs_72_72, ll_backend__fact_table__STATE_VARIABLE_CheckProcs_6, ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_61_61, ll_backend__fact_table__STATE_VARIABLE_FactArgInfos_8, &ll_backend__fact_table__MaybeAllInProc1_49, &ll_backend__fact_table__WriteHashTables1_50, &ll_backend__fact_table__WriteDataTable1_51, ll_backend__fact_table__STATE_VARIABLE_Errors_69_69, ll_backend__fact_table__STATE_VARIABLE_Errors_13);
        }
        if ((ll_backend__fact_table__MaybeAllInProc0_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__HeadVar__9_9 = ll_backend__fact_table__MaybeAllInProc1_49;
        else
          *ll_backend__fact_table__HeadVar__9_9 = ll_backend__fact_table__MaybeAllInProc0_43;
        {
          mercury__bool__or_3_p_0(ll_backend__fact_table__WriteHashTables0_41, ll_backend__fact_table__WriteHashTables1_50, ll_backend__fact_table__HeadVar__10_10);
        }
        {
          mercury__bool__or_3_p_0(ll_backend__fact_table__WriteDataTable0_42, ll_backend__fact_table__WriteDataTable1_51, ll_backend__fact_table__HeadVar__11_11);
        }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__fact_table_mode_type_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ModuleInfo_2,
  MR_Word * ll_backend__fact_table__HeadVar__3_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__fact_table__HeadVar__3_3 = (MR_Integer) 4;
    else
      {
        MR_Word ll_backend__fact_table__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Modes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__ModeType0_9;

        {
          ll_backend__fact_table__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ll_backend__fact_table__ModuleInfo_2, ll_backend__fact_table__Mode_5);
        }
        if (ll_backend__fact_table__succeeded)
          ll_backend__fact_table__ModeType0_9 = (MR_Integer) 0;
        else
          {
            {
              ll_backend__fact_table__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ll_backend__fact_table__ModuleInfo_2, ll_backend__fact_table__Mode_5);
            }
            if (ll_backend__fact_table__succeeded)
              ll_backend__fact_table__ModeType0_9 = (MR_Integer) 1;
            else
              ll_backend__fact_table__ModeType0_9 = (MR_Integer) 3;
          }
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType0_9 == (MR_Integer) 3);
        if (ll_backend__fact_table__succeeded)
          *ll_backend__fact_table__HeadVar__3_3 = (MR_Integer) 3;
        else
          {
            MR_Word ll_backend__fact_table__ModeType1_10;

            {
              ll_backend__fact_table__fact_table_mode_type_3_p_0(ll_backend__fact_table__Modes_6, ll_backend__fact_table__ModuleInfo_2, &ll_backend__fact_table__ModeType1_10);
            }
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType1_10 == (MR_Integer) 4);
            if (ll_backend__fact_table__succeeded)
              *ll_backend__fact_table__HeadVar__3_3 = ll_backend__fact_table__ModeType0_9;
            else
              {
                ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType1_10 == (MR_Integer) 3);
                if (ll_backend__fact_table__succeeded)
                  *ll_backend__fact_table__HeadVar__3_3 = (MR_Integer) 3;
                else
                  {
                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__ModeType1_10 == ll_backend__fact_table__ModeType0_9);
                    if (ll_backend__fact_table__succeeded)
                      *ll_backend__fact_table__HeadVar__3_3 = ll_backend__fact_table__ModeType0_9;
                    else
                      *ll_backend__fact_table__HeadVar__3_3 = (MR_Integer) 2;
                  }
              }
          }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__fill_in_fact_arg_infos_4_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ModuleInfo_2,
  MR_Word ll_backend__fact_table__HeadVar__3_3,
  MR_Word * ll_backend__fact_table__HeadVar__4_4)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__fact_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__fact_table__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.fill_in_fact_arg_infos\'/4", (MR_String) "too many fact_arg_infos");
            return;
          }
        }
    else
      {
        MR_Word ll_backend__fact_table__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));

        if ((ll_backend__fact_table__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.fill_in_fact_arg_infos\'/4", (MR_String) "too many argmodes");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__fact_table__Info0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Infos0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Info_25;
            MR_Word ll_backend__fact_table__Infos_26;
            MR_Word ll_backend__fact_table__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info0_23, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__IsInput_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info0_23, (MR_Integer) 1)))) & (MR_Integer) 1);
            MR_Word ll_backend__fact_table___IsOutput_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info0_23, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

            {
              ll_backend__fact_table__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ll_backend__fact_table__ModuleInfo_2, ll_backend__fact_table__Var_34);
            }
            if (ll_backend__fact_table__succeeded)
              {
                {
                  ll_backend__fact_table__Info_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_25, 0) = ((MR_Box) (ll_backend__fact_table__Type_27));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_25, 1) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 1 << (MR_Integer) 1)))));
                }
              }
            else
              {
                {
                  ll_backend__fact_table__succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ll_backend__fact_table__ModuleInfo_2, ll_backend__fact_table__Var_34);
                }
                if (ll_backend__fact_table__succeeded)
                  {
                    {
                      ll_backend__fact_table__Info_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_25, 0) = ((MR_Box) (ll_backend__fact_table__Type_27));
                      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_25, 1) = ((MR_Box) ((ll_backend__fact_table__IsInput_28 | (((MR_Integer) 1 << (MR_Integer) 1)))));
                    }
                  }
                else
                  ll_backend__fact_table__Info_25 = ll_backend__fact_table__Info0_23;
              }
            {
              ll_backend__fact_table__fill_in_fact_arg_infos_4_p_0(ll_backend__fact_table__Var_33, ll_backend__fact_table__ModuleInfo_2, ll_backend__fact_table__Infos0_24, &ll_backend__fact_table__Infos_26);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__fact_table__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Info_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__Infos_26));
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__init_fact_arg_infos_2_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word * ll_backend__fact_table__HeadVar__2_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__fact_table__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__fact_table__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__Info_5;
        MR_Word ll_backend__fact_table__Infos_6;

        {
          ll_backend__fact_table__Info_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_5, 0) = ((MR_Box) (ll_backend__fact_table__Type_3));
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_5, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
        }
        {
          ll_backend__fact_table__init_fact_arg_infos_2_p_0(ll_backend__fact_table__Types_4, &ll_backend__fact_table__Infos_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__fact_table__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Info_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__Infos_6));
        }
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__create_fact_table_header_7_p_0(
  MR_Word ll_backend__fact_table__PredName_8,
  MR_Word ll_backend__fact_table__PredInfo_9,
  MR_Word ll_backend__fact_table__FactArgInfos_10,
  MR_String * ll_backend__fact_table__C_HeaderCode_11,
  MR_String * ll_backend__fact_table__StructName_12,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_19,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_20)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__Identifier_14;
    MR_Word ll_backend__fact_table__Context_15;
    MR_String ll_backend__fact_table__StructContents_16;
    MR_String ll_backend__fact_table__StructDef_17;
    MR_String ll_backend__fact_table__Var_22;

    {
      ll_backend__fact_table__Identifier_14 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__fact_table__PredName_8);
    }
    {
      ll_backend__fact_table__Var_22 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Identifier_14, (MR_String) "_fact_table");
    }
    {
      *ll_backend__fact_table__StructName_12 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ll_backend__fact_table__Var_22);
    }
    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(ll_backend__fact_table__PredInfo_9, &ll_backend__fact_table__Context_15);
    }
    {
      ll_backend__fact_table__create_fact_table_struct_6_p_0(ll_backend__fact_table__FactArgInfos_10, (MR_Integer) 1, ll_backend__fact_table__Context_15, &ll_backend__fact_table__StructContents_16, ll_backend__fact_table__STATE_VARIABLE_Errors_0_19, ll_backend__fact_table__STATE_VARIABLE_Errors_20);
    }
    ll_backend__fact_table__succeeded = (strcmp(ll_backend__fact_table__StructContents_16, (MR_String) "") == 0);
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__StructDef_17 = (MR_String) "";
    else
      {
        MR_String ll_backend__fact_table__Var_27;
        MR_String ll_backend__fact_table__Var_28;
        MR_String ll_backend__fact_table__Var_30;

        {
          ll_backend__fact_table__Var_30 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__StructContents_16, (MR_String) "};\n\n");
        }
        {
          ll_backend__fact_table__Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "_struct {\n", ll_backend__fact_table__Var_30);
        }
        {
          ll_backend__fact_table__Var_27 = mercury__string__f_43_43_2_f_0(*ll_backend__fact_table__StructName_12, ll_backend__fact_table__Var_28);
        }
        {
          ll_backend__fact_table__StructDef_17 = mercury__string__f_43_43_2_f_0((MR_String) "struct ", ll_backend__fact_table__Var_27);
        }
      }
    {
      mercury__string__append_3_p_2(ll_backend__fact_table__StructDef_17, (MR_String) "\n#ifndef MERCURY_FACT_TABLE_HASH_TABLES\n#define MERCURY_FACT_TABLE_HASH_TABLES\n\nstruct MR_fact_table_hash_table_s {\n    MR_Integer size;                        " "    /* size of the hash table */\n    struct MR_fact_table_hash_entry_s *table;   /* the actual table */\n};\n\nstruct MR_fact_table_hash_table_f {\n    MR_Integer s" "ize;                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_f *table;   /* the actual table */\n};\n\nstruct MR_fact_table_has" "h_table_i {\n    MR_Integer size;                            /* size of the hash table */\n    struct MR_fact_table_hash_entry_i *table;   /* the actual table */\n" "};\n\n/* hash table for string keys */\nstruct MR_fact_table_hash_entry_s {\n    MR_ConstString  key;        /* lookup key */\n    const MR_Word   *index;     /* ind" "ex into fact table data array or       */\n                                /* pointer to hash table for next argument   */\n#if TAGBITS < 2\n    short type;       " "          /* 0 if entry empty,                         */\n                                /* 1 if entry is a pointer to the data table */\n                      " "          /* 2 if entry is a pointer to another        */\n                                /*   hash table                              */\n#endif\n    int next;  " "                 /* location of next entry with the same hash */\n                                /* value */\n};\n\n/* hash table for float keys */\nstruct MR_fact_" "table_hash_entry_f {\n    MR_Float        key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    short           type;\n#endif\n    int             next;\n};\n\n/* hash" " table for int keys */\nstruct MR_fact_table_hash_entry_i {\n    MR_Integer      key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    short           type;\n#endif" "\n    int             next;\n};\n\n#if TAGBITS >= 2\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           MR_mkword(MR_mktag(t), MR_mkbody(i))\n    #define MR_" "FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         MR_mkword(MR_mktag(t), p)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)                MR_tag((MR_Word)((p).index))\n" "    #define MR_FACT_TABLE_HASH_INDEX(w)                     MR_unmkbody(w)\n    #define MR_FACT_TABLE_HASH_POINTER(w)                   MR_body(w, MR_tag(w))\n#el" "se\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           ((const MR_Word *) i), (t)\n    #define MR_FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         ((const MR" "_Word *) p), (t)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)       ((p).type)\n    #define MR_FACT_TABLE_HASH_INDEX(w)            (w)\n    #define MR_FACT_TABLE_" "HASH_POINTER(w)          (w)\n#endif\n\n#endif /* not MERCURY_FACT_TABLE_HASH_TABLES */\n", ll_backend__fact_table__C_HeaderCode_11);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__create_fact_table_struct_6_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Integer ll_backend__fact_table__I_2,
  MR_Word ll_backend__fact_table__Context_3,
  MR_String * ll_backend__fact_table__HeadVar__4_4,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_5,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_6)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__fact_table__HeadVar__4_4 = (MR_String) "";
        *ll_backend__fact_table__STATE_VARIABLE_Errors_6 = ll_backend__fact_table__STATE_VARIABLE_Errors_0_5;
      }
    else
      {
        MR_Word ll_backend__fact_table__Info_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Infos_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ll_backend__fact_table__StructContentsTail_18;
        MR_Word ll_backend__fact_table__Type_19;
        MR_Word ll_backend__fact_table__IsOutput_21;
        MR_Integer ll_backend__fact_table__Var_27 = (ll_backend__fact_table__I_2 + (MR_Integer) 1);
        MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_28_28;
        MR_Word ll_backend__fact_table___IsInput_20;
        MR_String ll_backend__fact_table__TypeStr_22;
        MR_Word ll_backend__fact_table__Var_47;

        {
          ll_backend__fact_table__create_fact_table_struct_6_p_0(ll_backend__fact_table__Infos_13, ll_backend__fact_table__Var_27, ll_backend__fact_table__Context_3, &ll_backend__fact_table__StructContentsTail_18, ll_backend__fact_table__STATE_VARIABLE_Errors_0_5, &ll_backend__fact_table__STATE_VARIABLE_Errors_28_28);
        }
        ll_backend__fact_table__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_12, (MR_Integer) 0)));
        ll_backend__fact_table___IsInput_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_12, (MR_Integer) 1)))) & (MR_Integer) 1);
        ll_backend__fact_table__IsOutput_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Info_12, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_19)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_19, (MR_Integer) 0)));
            switch (ll_backend__fact_table__Var_47) {
              default:
                ll_backend__fact_table__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  ll_backend__fact_table__TypeStr_22 = (MR_String) "MR_Float";
                  ll_backend__fact_table__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                {
                  ll_backend__fact_table__TypeStr_22 = (MR_String) "MR_Integer";
                  ll_backend__fact_table__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  ll_backend__fact_table__TypeStr_22 = (MR_String) "MR_ConstString";
                  ll_backend__fact_table__succeeded = MR_TRUE;
                }
                break;
            }
          }
        if (ll_backend__fact_table__succeeded)
          {
            switch (ll_backend__fact_table__IsOutput_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__fact_table__HeadVar__4_4 = ll_backend__fact_table__StructContentsTail_18;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ll_backend__fact_table__StructField_23;
                  MR_String ll_backend__fact_table__Var_49;
                  MR_String ll_backend__fact_table__Var_56;
                  MR_String ll_backend__fact_table__Var_58;
                  MR_String ll_backend__fact_table__Var_59;

                  {
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__I_2, &ll_backend__fact_table__Var_49);
                  }
                  {
                    ll_backend__fact_table__Var_56 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_49, (MR_String) ";\n");
                  }
                  {
                    ll_backend__fact_table__Var_58 = mercury__string__f_43_43_2_f_0((MR_String) " V_", ll_backend__fact_table__Var_56);
                  }
                  {
                    ll_backend__fact_table__Var_59 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__TypeStr_22, ll_backend__fact_table__Var_58);
                  }
                  {
                    ll_backend__fact_table__StructField_23 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__fact_table__Var_59);
                  }
                  {
                    mercury__string__append_3_p_2(ll_backend__fact_table__StructField_23, ll_backend__fact_table__StructContentsTail_18, ll_backend__fact_table__HeadVar__4_4);
                  }
                }
                break;
            }
            *ll_backend__fact_table__STATE_VARIABLE_Errors_6 = ll_backend__fact_table__STATE_VARIABLE_Errors_28_28;
          }
        else
          {
            MR_Word ll_backend__fact_table__Var_67;
            MR_Word ll_backend__fact_table__Var_68;

            {
              ll_backend__fact_table__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_68, 0) = ((MR_Box) (ll_backend__fact_table__Context_3));
            }
            {
              ll_backend__fact_table__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_67, 0) = ((MR_Box) (ll_backend__fact_table__Var_68));
              MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[57])));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__fact_table__STATE_VARIABLE_Errors_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_67));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_Errors_28_28));
            }
            *ll_backend__fact_table__HeadVar__4_4 = ll_backend__fact_table__StructContentsTail_18;
          }
      }
  }
}

static MR_String MR_CALL 
ll_backend__fact_table__fact_table_file_header_1_f_0(
  MR_String ll_backend__fact_table__FileName_3)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_String ll_backend__fact_table__FileHeader_4;
    MR_String ll_backend__fact_table__Version_5;
    MR_String ll_backend__fact_table__Fullarch_6;
    MR_Word ll_backend__fact_table__Var_7;
    MR_Word ll_backend__fact_table__Var_9;
    MR_Word ll_backend__fact_table__Var_11;
    MR_Word ll_backend__fact_table__Var_12;
    MR_Word ll_backend__fact_table__Var_14;
    MR_Word ll_backend__fact_table__Var_16;
    MR_Word ll_backend__fact_table__Var_17;
    MR_Word ll_backend__fact_table__Var_19;
    MR_Word ll_backend__fact_table__Var_21;

    {
      mercury__library__version_2_p_0(&ll_backend__fact_table__Version_5, &ll_backend__fact_table__Fullarch_6);
    }
    {
      ll_backend__fact_table__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_21, 0) = ((MR_Box) (ll_backend__fact_table__Fullarch_6));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[9])));
    }
    {
      ll_backend__fact_table__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_19, 0) = ((MR_Box) ((MR_String) "** configured for "));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_19, 1) = ((MR_Box) (ll_backend__fact_table__Var_21));
    }
    {
      ll_backend__fact_table__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_17, 0) = ((MR_Box) ((MR_String) ",\n"));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_17, 1) = ((MR_Box) (ll_backend__fact_table__Var_19));
    }
    {
      ll_backend__fact_table__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_16, 0) = ((MR_Box) (ll_backend__fact_table__Version_5));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_16, 1) = ((MR_Box) (ll_backend__fact_table__Var_17));
    }
    {
      ll_backend__fact_table__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_14, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler, version "));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_14, 1) = ((MR_Box) (ll_backend__fact_table__Var_16));
    }
    {
      ll_backend__fact_table__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_12, 0) = ((MR_Box) ((MR_String) "\'\n"));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_12, 1) = ((MR_Box) (ll_backend__fact_table__Var_14));
    }
    {
      ll_backend__fact_table__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_11, 0) = ((MR_Box) (ll_backend__fact_table__FileName_3));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_11, 1) = ((MR_Box) (ll_backend__fact_table__Var_12));
    }
    {
      ll_backend__fact_table__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_9, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_9, 1) = ((MR_Box) (ll_backend__fact_table__Var_11));
    }
    {
      ll_backend__fact_table__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_7, 0) = ((MR_Box) ((MR_String) "/*\n"));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_7, 1) = ((MR_Box) (ll_backend__fact_table__Var_9));
    }
    {
      mercury__string__append_list_2_p_0(ll_backend__fact_table__Var_7, &ll_backend__fact_table__FileHeader_4);
    }
    return ll_backend__fact_table__FileHeader_4;
  }
}

static void MR_CALL 
ll_backend__fact_table__compile_facts_13_p_0(
  MR_Word ll_backend__fact_table__PredName_14,
  MR_Integer ll_backend__fact_table__Arity_15,
  MR_Word ll_backend__fact_table__PredInfo_16,
  MR_Word ll_backend__fact_table__ModuleInfo_17,
  MR_Word ll_backend__fact_table__FactArgInfos_18,
  MR_Word ll_backend__fact_table__ProcStreams_19,
  MR_Word ll_backend__fact_table__MaybeOutput_20,
  MR_Integer ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35,
  MR_Integer * ll_backend__fact_table__STATE_VARIABLE_NumFacts_36,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_37,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_38)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;
        MR_Word ll_backend__fact_table__Result0_24;

        {
          mercury__parser__read_term_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &ll_backend__fact_table__Result0_24);
        }
        switch (MR_tag((MR_Word) ll_backend__fact_table__Result0_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__fact_table__STATE_VARIABLE_NumFacts_36 = ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35;
              *ll_backend__fact_table__STATE_VARIABLE_Errors_38 = ll_backend__fact_table__STATE_VARIABLE_Errors_0_37;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__fact_table__Message_25 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Result0_24, (MR_Integer) 0)));
              MR_Integer ll_backend__fact_table__LineNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Result0_24, (MR_Integer) 1)));
              MR_String ll_backend__fact_table__FileName_27;
              MR_Word ll_backend__fact_table__Context_28;
              MR_Word ll_backend__fact_table__Var_57;
              MR_Word ll_backend__fact_table__Var_59;
              MR_Word ll_backend__fact_table__Var_80;
              MR_Word ll_backend__fact_table__Var_81;

              {
                mercury__io__input_stream_name_3_p_0(&ll_backend__fact_table__FileName_27);
              }
              {
                mercury__term__context_init_3_p_0(ll_backend__fact_table__FileName_27, ll_backend__fact_table__LineNum_26, &ll_backend__fact_table__Context_28);
              }
              {
                ll_backend__fact_table__Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_59, 1) = ((MR_Box) (ll_backend__fact_table__Message_25));
              }
              {
                ll_backend__fact_table__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_57, 0) = ((MR_Box) (ll_backend__fact_table__Var_59));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__fact_table__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_81, 0) = ((MR_Box) (ll_backend__fact_table__Context_28));
              }
              {
                ll_backend__fact_table__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_80, 0) = ((MR_Box) (ll_backend__fact_table__Var_81));
                MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_80, 1) = ((MR_Box) (ll_backend__fact_table__Var_57));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__fact_table__STATE_VARIABLE_Errors_38 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_80));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_Errors_0_37));
              }
              *ll_backend__fact_table__STATE_VARIABLE_NumFacts_36 = ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__fact_table__Term_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Result0_24, (MR_Integer) 1)));
              MR_Word ll_backend__fact_table__Globals_31;
              MR_Integer ll_backend__fact_table__FactTableSize_32;
              MR_Word ll_backend__fact_table__Result_34;
              MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_49_49;
              MR_Integer ll_backend__fact_table__STATE_VARIABLE_NumFacts_51_51;
              MR_Word ll_backend__fact_table___VarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Result0_24, (MR_Integer) 0)));
              MR_Integer ll_backend__fact_table__Var_62;

              {
                hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_17, &ll_backend__fact_table__Globals_31);
              }
              {
                libs__globals__lookup_int_option_3_p_0(ll_backend__fact_table__Globals_31, (MR_Integer) 323, &ll_backend__fact_table__FactTableSize_32);
              }
              {
                ll_backend__fact_table__Var_62 = mercury__int__mod_2_f_0(ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35, ll_backend__fact_table__FactTableSize_32);
              }
              ll_backend__fact_table__succeeded = ((MR_Integer) 0 == ll_backend__fact_table__Var_62);
              if (ll_backend__fact_table__succeeded)
                {
                  MR_Word ll_backend__fact_table__VeryVerbose_33;

                  {
                    libs__globals__lookup_bool_option_3_p_0(ll_backend__fact_table__Globals_31, (MR_Integer) 57, &ll_backend__fact_table__VeryVerbose_33);
                  }
                  switch (ll_backend__fact_table__VeryVerbose_33) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String ll_backend__fact_table__Var_66;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "% Read fact ");
                        }
                        {
                          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35, &ll_backend__fact_table__Var_66);
                        }
                        {
                          mercury__io__write_string_3_p_0(ll_backend__fact_table__Var_66);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\n");
                        }
                      }
                      break;
                  }
                }
              else
                {
                }
              {
                ll_backend__fact_table__check_fact_term_14_p_0(ll_backend__fact_table__PredName_14, ll_backend__fact_table__Arity_15, ll_backend__fact_table__PredInfo_16, ll_backend__fact_table__ModuleInfo_17, ll_backend__fact_table__Term_30, ll_backend__fact_table__FactArgInfos_18, ll_backend__fact_table__ProcStreams_19, ll_backend__fact_table__MaybeOutput_20, ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35, &ll_backend__fact_table__Result_34, ll_backend__fact_table__STATE_VARIABLE_Errors_0_37, &ll_backend__fact_table__STATE_VARIABLE_Errors_49_49);
              }
              switch (ll_backend__fact_table__Result_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__fact_table__STATE_VARIABLE_NumFacts_51_51 = ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35;
                  break;
                case (MR_Integer) 0:
                  {
                    ll_backend__fact_table__STATE_VARIABLE_NumFacts_51_51 = (ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35 + (MR_Integer) 1);
                  }
                  break;
              }
              /* direct tailcall eliminated */
              {
                MR_Integer ll_backend__fact_table__next_value_of_STATE_VARIABLE_NumFacts_0_35 = ll_backend__fact_table__STATE_VARIABLE_NumFacts_51_51;
                MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_Errors_0_37 = ll_backend__fact_table__STATE_VARIABLE_Errors_49_49;

                ll_backend__fact_table__STATE_VARIABLE_Errors_0_37 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_Errors_0_37;
                ll_backend__fact_table__STATE_VARIABLE_NumFacts_0_35 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_NumFacts_0_35;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__check_fact_term_14_p_0(
  MR_Word ll_backend__fact_table__PredName_1,
  MR_Integer ll_backend__fact_table__Arity0_2,
  MR_Word ll_backend__fact_table__PredInfo_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_Word ll_backend__fact_table__HeadVar__5_5,
  MR_Word ll_backend__fact_table__FactArgInfos_6,
  MR_Word ll_backend__fact_table__ProcStreams_7,
  MR_Word ll_backend__fact_table__MaybeOutput_8,
  MR_Integer ll_backend__fact_table__FactNum_9,
  MR_Word * ll_backend__fact_table__HeadVar__10_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_11,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_12)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    if (((MR_tag((MR_Word) ll_backend__fact_table__HeadVar__5_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ll_backend__fact_table__Const_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word ll_backend__fact_table__Terms0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word ll_backend__fact_table__Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__HeadVar__5_5, (MR_Integer) 2)));
        MR_Word ll_backend__fact_table__PredOrFunc_55;
        MR_String ll_backend__fact_table__PredString_56;
        MR_String ll_backend__fact_table__TopLevel_57;

        {
          ll_backend__fact_table__PredOrFunc_55 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ll_backend__fact_table__PredInfo_3);
        }
        {
          ll_backend__fact_table__PredString_56 = mdbcomp__sym_name__unqualify_name_1_f_0(ll_backend__fact_table__PredName_1);
        }
        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Const_45)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__TopLevel_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Const_45, (MR_Integer) 0)));
            {
              MR_Word ll_backend__fact_table__Terms_58;
              MR_Integer ll_backend__fact_table__Arity_59;

              switch (ll_backend__fact_table__PredOrFunc_55) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__fact_table__TypeInfo_95_95;
                    MR_Word ll_backend__fact_table__FuncHeadTerm_60;
                    MR_Word ll_backend__fact_table__Terms1_62;
                    MR_Word ll_backend__fact_table__Var_70;
                    MR_Word ll_backend__fact_table__Var_71;
                    MR_Word ll_backend__fact_table__Var_72;
                    MR_Integer ll_backend__fact_table__Var_75;
                    MR_String ll_backend__fact_table__Var_96;
                    MR_Word ll_backend__fact_table__FuncResultTerm_61;
                    MR_Word ll_backend__fact_table__Var_63;

                    ll_backend__fact_table__succeeded = (strcmp(ll_backend__fact_table__TopLevel_57, (MR_String) "=") == 0);
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Terms0_46)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__FuncHeadTerm_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Terms0_46, (MR_Integer) 0)));
                            ll_backend__fact_table__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Terms0_46, (MR_Integer) 1)));
                            ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Var_70)) == (MR_mktag((MR_Integer) 1)));
                            if (ll_backend__fact_table__succeeded)
                              {
                                ll_backend__fact_table__FuncResultTerm_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_70, (MR_Integer) 0)));
                                ll_backend__fact_table__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_70, (MR_Integer) 1)));
                                ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (ll_backend__fact_table__succeeded)
                                  {
                                    ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__FuncHeadTerm_60)) == (MR_mktag((MR_Integer) 0)));
                                    if (ll_backend__fact_table__succeeded)
                                      {
                                        ll_backend__fact_table__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__FuncHeadTerm_60, (MR_Integer) 0)));
                                        ll_backend__fact_table__Terms1_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__FuncHeadTerm_60, (MR_Integer) 1)));
                                        ll_backend__fact_table__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__FuncHeadTerm_60, (MR_Integer) 2)));
                                        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Var_72)) == (MR_mktag((MR_Integer) 0)));
                                        if (ll_backend__fact_table__succeeded)
                                          {
                                            ll_backend__fact_table__Var_96 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_72, (MR_Integer) 0)));
                                            ll_backend__fact_table__succeeded = (strcmp(ll_backend__fact_table__PredString_56, ll_backend__fact_table__Var_96) == 0);
                                            if (ll_backend__fact_table__succeeded)
                                              {
                                                ll_backend__fact_table__TypeInfo_95_95 = (MR_Word) &ll_backend__fact_table_scalar_common_1[2];
                                                {
                                                  mercury__list__append_3_p_1(ll_backend__fact_table__TypeInfo_95_95, ll_backend__fact_table__Terms1_62, ll_backend__fact_table__Var_70, &ll_backend__fact_table__Terms_58);
                                                }
                                                ll_backend__fact_table__Var_75 = (MR_Integer) 1;
                                                ll_backend__fact_table__Arity_59 = (ll_backend__fact_table__Arity0_2 + ll_backend__fact_table__Var_75);
                                                ll_backend__fact_table__succeeded = MR_TRUE;
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
                    ll_backend__fact_table__succeeded = (strcmp(ll_backend__fact_table__TopLevel_57, ll_backend__fact_table__PredString_56) == 0);
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__Terms_58 = ll_backend__fact_table__Terms0_46;
                        ll_backend__fact_table__Arity_59 = ll_backend__fact_table__Arity0_2;
                        ll_backend__fact_table__succeeded = MR_TRUE;
                      }
                  }
                  break;
              }
              if (ll_backend__fact_table__succeeded)
                {
                  ll_backend__fact_table__check_fact_term_2_15_p_0(ll_backend__fact_table__PredOrFunc_55, ll_backend__fact_table__Arity_59, ll_backend__fact_table__PredInfo_3, ll_backend__fact_table__ModuleInfo_4, ll_backend__fact_table__Terms_58, ll_backend__fact_table__Context_47, ll_backend__fact_table__FactArgInfos_6, ll_backend__fact_table__ProcStreams_7, ll_backend__fact_table__MaybeOutput_8, ll_backend__fact_table__FactNum_9, ll_backend__fact_table__HeadVar__10_10, ll_backend__fact_table__STATE_VARIABLE_Errors_0_11, ll_backend__fact_table__STATE_VARIABLE_Errors_12);
                }
              else
                {
                  MR_String ll_backend__fact_table__PFStr_64;
                  MR_String ll_backend__fact_table__Msg_65;
                  MR_Word ll_backend__fact_table__Var_86;
                  MR_Word ll_backend__fact_table__Var_88;
                  MR_String ll_backend__fact_table__Var_98;
                  MR_String ll_backend__fact_table__Var_105;
                  MR_String ll_backend__fact_table__Var_107;
                  MR_String ll_backend__fact_table__Var_108;
                  MR_String ll_backend__fact_table__Var_110;
                  MR_String ll_backend__fact_table__Var_111;

                  {
                    ll_backend__fact_table__PFStr_64 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(ll_backend__fact_table__PredOrFunc_55);
                  }
                  {
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__Arity0_2, &ll_backend__fact_table__Var_98);
                  }
                  {
                    ll_backend__fact_table__Var_105 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_98, (MR_String) "\'.");
                  }
                  {
                    ll_backend__fact_table__Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__fact_table__Var_105);
                  }
                  {
                    ll_backend__fact_table__Var_108 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PredString_56, ll_backend__fact_table__Var_107);
                  }
                  {
                    ll_backend__fact_table__Var_110 = mercury__string__f_43_43_2_f_0((MR_String) " \140", ll_backend__fact_table__Var_108);
                  }
                  {
                    ll_backend__fact_table__Var_111 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__PFStr_64, ll_backend__fact_table__Var_110);
                  }
                  {
                    ll_backend__fact_table__Msg_65 = mercury__string__f_43_43_2_f_0((MR_String) "Error: invalid clause for ", ll_backend__fact_table__Var_111);
                  }
                  {
                    ll_backend__fact_table__Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_88, 1) = ((MR_Box) (ll_backend__fact_table__Msg_65));
                  }
                  {
                    ll_backend__fact_table__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_86, 0) = ((MR_Box) (ll_backend__fact_table__Var_88));
                    MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__fact_table__add_error_report_4_p_0(ll_backend__fact_table__Context_47, ll_backend__fact_table__Var_86, ll_backend__fact_table__STATE_VARIABLE_Errors_0_11, ll_backend__fact_table__STATE_VARIABLE_Errors_12);
                  }
                  *ll_backend__fact_table__HeadVar__10_10 = (MR_Integer) 1;
                }
            }
          }
        else
          {
            {
              ll_backend__fact_table__add_error_report_4_p_0(ll_backend__fact_table__Context_47, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[55]), ll_backend__fact_table__STATE_VARIABLE_Errors_0_11, ll_backend__fact_table__STATE_VARIABLE_Errors_12);
            }
            *ll_backend__fact_table__HeadVar__10_10 = (MR_Integer) 1;
          }
      }
    else
      {
        MR_Integer ll_backend__fact_table__LineNum_27;
        MR_String ll_backend__fact_table__FileName_28;
        MR_Word ll_backend__fact_table__Context_29;

        *ll_backend__fact_table__HeadVar__10_10 = (MR_Integer) 1;
        {
          mercury__io__get_line_number_3_p_0(&ll_backend__fact_table__LineNum_27);
        }
        {
          mercury__io__input_stream_name_3_p_0(&ll_backend__fact_table__FileName_28);
        }
        {
          ll_backend__fact_table__Context_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Context_29, 0) = ((MR_Box) (ll_backend__fact_table__FileName_28));
          MR_hl_field(MR_mktag(0), ll_backend__fact_table__Context_29, 1) = ((MR_Box) (ll_backend__fact_table__LineNum_27));
        }
        {
          ll_backend__fact_table__add_error_report_4_p_0(ll_backend__fact_table__Context_29, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[55]), ll_backend__fact_table__STATE_VARIABLE_Errors_0_11, ll_backend__fact_table__STATE_VARIABLE_Errors_12);
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table__check_fact_term_2_15_p_0_1(
  MR_Box ll_backend__fact_table__closure_arg,
  MR_Box ll_backend__fact_table__wrapper_arg_1,
  MR_Box * ll_backend__fact_table__wrapper_arg_2)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Box ll_backend__fact_table__closure = ll_backend__fact_table__closure_arg;
    MR_Word ll_backend__fact_table__conv0_LambdaHeadVar__2_56;

    {
      ll_backend__fact_table__succeeded = ll_backend__fact_table__IntroducedFrom__pred__check_fact_term_2__488__1_2_p_0(((MR_Word) ll_backend__fact_table__wrapper_arg_1), &ll_backend__fact_table__conv0_LambdaHeadVar__2_56);
    }
    if (ll_backend__fact_table__succeeded)
      {
        *ll_backend__fact_table__wrapper_arg_2 = ((MR_Box) (ll_backend__fact_table__conv0_LambdaHeadVar__2_56));
        ll_backend__fact_table__succeeded = MR_TRUE;
      }
    return ll_backend__fact_table__succeeded;
  }
}

static void MR_CALL 
ll_backend__fact_table__check_fact_term_2_15_p_0(
  MR_Word ll_backend__fact_table__PredOrFunc_16,
  MR_Integer ll_backend__fact_table__Arity_17,
  MR_Word ll_backend__fact_table__PredInfo_18,
  MR_Word ll_backend__fact_table__ModuleInfo_19,
  MR_Word ll_backend__fact_table__Terms_20,
  MR_Word ll_backend__fact_table__Context_21,
  MR_Word ll_backend__fact_table__FactArgInfos_22,
  MR_Word ll_backend__fact_table__ProcStreams_23,
  MR_Word ll_backend__fact_table__MaybeOutput_24,
  MR_Integer ll_backend__fact_table__FactNum_25,
  MR_Word * ll_backend__fact_table__Result_26,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_46,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_47)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__TypeInfo_73_73 = (MR_Word) &ll_backend__fact_table_scalar_common_1[2];
    MR_Integer ll_backend__fact_table__Len_29;

    {
      mercury__list__length_2_p_0(ll_backend__fact_table__TypeInfo_73_73, ll_backend__fact_table__Terms_20, &ll_backend__fact_table__Len_29);
    }
    ll_backend__fact_table__succeeded = (ll_backend__fact_table__Len_29 == ll_backend__fact_table__Arity_17);
    if (ll_backend__fact_table__succeeded)
      {
        MR_Word ll_backend__fact_table__Types_30;
        MR_Word ll_backend__fact_table__ProcTable_31;
        MR_String ll_backend__fact_table__FactNumStr_32;
        MR_Word ll_backend__fact_table__OutputStream_33;
        MR_String ll_backend__fact_table__StructName_34;
        MR_Word ll_backend__fact_table__FactArgs_40;
        MR_Word ll_backend__fact_table__TypeCtorInfo_74_74;
        MR_Word ll_backend__fact_table__TermToArg_35;
        MR_Word ll_backend__fact_table__Var_54;

        {
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ll_backend__fact_table__PredInfo_18, &ll_backend__fact_table__Types_30);
        }
        {
          ll_backend__fact_table__check_fact_type_and_mode_8_p_0(ll_backend__fact_table__Types_30, ll_backend__fact_table__Terms_20, (MR_Integer) 0, ll_backend__fact_table__PredOrFunc_16, ll_backend__fact_table__Context_21, ll_backend__fact_table__Result_26, ll_backend__fact_table__STATE_VARIABLE_Errors_0_46, ll_backend__fact_table__STATE_VARIABLE_Errors_47);
        }
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__fact_table__PredInfo_18, &ll_backend__fact_table__ProcTable_31);
        }
        {
          mercury__string__int_to_string_2_p_0(ll_backend__fact_table__FactNum_25, &ll_backend__fact_table__FactNumStr_32);
        }
        {
          ll_backend__fact_table__write_sort_file_lines_9_p_0(ll_backend__fact_table__ProcStreams_23, ll_backend__fact_table__ProcTable_31, ll_backend__fact_table__Terms_20, ll_backend__fact_table__ModuleInfo_19, ll_backend__fact_table__FactNumStr_32, ll_backend__fact_table__FactArgInfos_22, (MR_Integer) 1);
        }
        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__MaybeOutput_24)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__fact_table__succeeded)
          {
            ll_backend__fact_table__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__MaybeOutput_24, (MR_Integer) 0)));
            ll_backend__fact_table__OutputStream_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_54, (MR_Integer) 0)));
            ll_backend__fact_table__StructName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_54, (MR_Integer) 1)));
            ll_backend__fact_table__TermToArg_35 = (MR_Word) &ll_backend__fact_table_scalar_common_2[2];
            ll_backend__fact_table__TypeCtorInfo_74_74 = (MR_Word) &mercury__term__term__type_ctor_info_const_0;
            {
              ll_backend__fact_table__succeeded = mercury__list__map_3_p_2(ll_backend__fact_table__TypeInfo_73_73, ll_backend__fact_table__TypeCtorInfo_74_74, ll_backend__fact_table__TermToArg_35, ll_backend__fact_table__Terms_20, &ll_backend__fact_table__FactArgs_40);
            }
          }
        if (ll_backend__fact_table__succeeded)
          {
            MR_Word ll_backend__fact_table__Globals_41;
            MR_Word ll_backend__fact_table__VeryVerbose_42;
            MR_Integer ll_backend__fact_table__FactTableSize_43;

            {
              hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__fact_table__ModuleInfo_19, &ll_backend__fact_table__Globals_41);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(ll_backend__fact_table__Globals_41, (MR_Integer) 57, &ll_backend__fact_table__VeryVerbose_42);
            }
            {
              libs__globals__lookup_int_option_3_p_0(ll_backend__fact_table__Globals_41, (MR_Integer) 323, &ll_backend__fact_table__FactTableSize_43);
            }
            {
              ll_backend__fact_table__write_fact_data_8_p_0(ll_backend__fact_table__VeryVerbose_42, ll_backend__fact_table__FactNum_25, ll_backend__fact_table__FactTableSize_43, ll_backend__fact_table__FactArgs_40, ll_backend__fact_table__StructName_34, ll_backend__fact_table__OutputStream_33);
            }
          }
        else
          {
          }
      }
    else
      {
        MR_String ll_backend__fact_table__Msg2_45;
        MR_Word ll_backend__fact_table__Var_65;
        MR_Word ll_backend__fact_table__Var_68;
        MR_Word ll_backend__fact_table__Var_69;
        MR_String ll_backend__fact_table__Var_76;
        MR_Word ll_backend__fact_table__Var_82 = (MR_Word) &ll_backend__fact_table_scalar_common_3[0];
        MR_String ll_backend__fact_table__Var_83;
        MR_String ll_backend__fact_table__Var_85;
        MR_String ll_backend__fact_table__Var_86;
        MR_String ll_backend__fact_table__Var_93;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_82, ll_backend__fact_table__Len_29, &ll_backend__fact_table__Var_76);
        }
        {
          ll_backend__fact_table__Var_83 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_76, (MR_String) " arguments.");
        }
        {
          ll_backend__fact_table__Var_85 = mercury__string__f_43_43_2_f_0((MR_String) " arguments, but fact has ", ll_backend__fact_table__Var_83);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__fact_table__Var_82, ll_backend__fact_table__Arity_17, &ll_backend__fact_table__Var_86);
        }
        {
          ll_backend__fact_table__Var_93 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_86, ll_backend__fact_table__Var_85);
        }
        {
          ll_backend__fact_table__Msg2_45 = mercury__string__f_43_43_2_f_0((MR_String) "Expecting ", ll_backend__fact_table__Var_93);
        }
        {
          ll_backend__fact_table__Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_69, 1) = ((MR_Box) (ll_backend__fact_table__Msg2_45));
        }
        {
          ll_backend__fact_table__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_68, 0) = ((MR_Box) (ll_backend__fact_table__Var_69));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__fact_table__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__fact_table_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_65, 1) = ((MR_Box) (ll_backend__fact_table__Var_68));
        }
        {
          ll_backend__fact_table__add_error_report_4_p_0(ll_backend__fact_table__Context_21, ll_backend__fact_table__Var_65, ll_backend__fact_table__STATE_VARIABLE_Errors_0_46, ll_backend__fact_table__STATE_VARIABLE_Errors_47);
        }
        *ll_backend__fact_table__Result_26 = (MR_Integer) 1;
      }
  }
}

static void MR_CALL 
ll_backend__fact_table__add_error_report_4_p_0(
  MR_Word ll_backend__fact_table__Context_5,
  MR_Word ll_backend__fact_table__Pieces_6,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_8,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_9)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Word ll_backend__fact_table__Var_11;
    MR_Word ll_backend__fact_table__Var_12;

    {
      ll_backend__fact_table__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_12, 0) = ((MR_Box) (ll_backend__fact_table__Context_5));
    }
    {
      ll_backend__fact_table__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_11, 0) = ((MR_Box) (ll_backend__fact_table__Var_12));
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_11, 1) = ((MR_Box) (ll_backend__fact_table__Pieces_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__fact_table__STATE_VARIABLE_Errors_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_Errors_0_8));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_data_8_p_0(
  MR_Word ll_backend__fact_table__VeryVerbose_9,
  MR_Integer ll_backend__fact_table__FactNum_10,
  MR_Integer ll_backend__fact_table__FactTableSize_11,
  MR_Word ll_backend__fact_table__Args_12,
  MR_String ll_backend__fact_table__StructName_13,
  MR_Word ll_backend__fact_table__OutputStream_14)
{
  {
    MR_bool ll_backend__fact_table__succeeded;
    MR_Integer ll_backend__fact_table__Var_31;

    {
      ll_backend__fact_table__Var_31 = mercury__int__mod_2_f_0(ll_backend__fact_table__FactNum_10, ll_backend__fact_table__FactTableSize_11);
    }
    ll_backend__fact_table__succeeded = ((MR_Integer) 0 == ll_backend__fact_table__Var_31);
    if (ll_backend__fact_table__succeeded)
      {
        ll_backend__fact_table__succeeded = (ll_backend__fact_table__FactNum_10 == (MR_Integer) 0);
        if (ll_backend__fact_table__succeeded)
          {
          }
        else
          {
            MR_String ll_backend__fact_table__Var_71;

            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_14, (MR_String) "};\n\n");
            }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_14, (MR_String) "const struct ");
            }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_14, ll_backend__fact_table__StructName_13);
            }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_14, (MR_String) "_struct ");
            }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_14, ll_backend__fact_table__StructName_13);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__FactNum_10, &ll_backend__fact_table__Var_71);
            }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_14, ll_backend__fact_table__Var_71);
            }
            {
              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_14, (MR_String) "[] = {\n");
            }
          }
        switch (ll_backend__fact_table__VeryVerbose_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__fact_table__Var_35;

              {
                mercury__io__write_string_3_p_0((MR_String) "% Writing fact ");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__FactNum_10, &ll_backend__fact_table__Var_35);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__fact_table__Var_35);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            break;
        }
      }
    else
      {
      }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_14, (MR_String) "\t{");
    }
    {
      ll_backend__fact_table__write_fact_args_4_p_0(ll_backend__fact_table__OutputStream_14, ll_backend__fact_table__Args_12);
    }
    {
      mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_14, (MR_String) " },\n");
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__write_fact_args_4_p_0(
  MR_Word ll_backend__fact_table__OutputStream_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__fact_table__Arg_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ll_backend__fact_table__Arg_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.write_fact_args\'/4", (MR_String) "unsupported type");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__fact_table__Base_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_10, (MR_Integer) 0)));
                  MR_Word ll_backend__fact_table__Integer_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_10, (MR_Integer) 1)));
                  MR_Word ll_backend__fact_table__Signedness_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_10, (MR_Integer) 2)));
                  MR_Word ll_backend__fact_table__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Arg_10, (MR_Integer) 3)));

                  switch (ll_backend__fact_table__Signedness_16) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__fact_table__Int_18;

                        {
                          ll_backend__fact_table__succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(ll_backend__fact_table__Base_14, ll_backend__fact_table__Integer_15, &ll_backend__fact_table__Int_18);
                        }
                        if (ll_backend__fact_table__succeeded)
                          {
                            {
                              mercury__io__write_int_4_p_0(ll_backend__fact_table__OutputStream_1, ll_backend__fact_table__Int_18);
                            }
                            {
                              mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_1, (MR_String) ", ");
                            }
                          }
                        else
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.write_fact_args\'/4", (MR_String) "integer too big");
                              return;
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.write_fact_args\'/4", (MR_String) "NYI uints in fact tables");
                          return;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String ll_backend__fact_table__String_13 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Arg_10, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_1, (MR_String) "\"");
                  }
                  {
                    backend_libs__c_util__output_quoted_string_4_p_0(ll_backend__fact_table__OutputStream_1, ll_backend__fact_table__String_13);
                  }
                  {
                    mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_1, (MR_String) "\", ");
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__fact_table__Arg_10, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Float ll_backend__fact_table__Float_19 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__fact_table__Arg_10, (MR_Integer) 1)));

                      {
                        mercury__io__write_float_4_p_0(ll_backend__fact_table__OutputStream_1, ll_backend__fact_table__Float_19);
                      }
                      {
                        mercury__io__write_string_4_p_0(ll_backend__fact_table__OutputStream_1, (MR_String) ", ");
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.write_fact_args\'/4", (MR_String) "implementation-defined literal");
                        return;
                      }
                    }
                    break;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Args_11;

              ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__write_sort_file_lines_9_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ProcTable_2,
  MR_Word ll_backend__fact_table__Terms_3,
  MR_Word ll_backend__fact_table__ModuleInfo_4,
  MR_String ll_backend__fact_table__FactNumStr_5,
  MR_Word ll_backend__fact_table__FactArgInfos_6,
  MR_Word ll_backend__fact_table__IsPrimary_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__fact_table__TypeInfo_55_55;
            MR_Integer ll_backend__fact_table__ProcID_19;
            MR_Word ll_backend__fact_table__Stream_20;
            MR_Word ll_backend__fact_table__ProcStreams_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__ProcInfo_29;
            MR_Word ll_backend__fact_table__ArgModes_30;
            MR_Word ll_backend__fact_table__ModeTerms_31;
            MR_String ll_backend__fact_table__Key_32;
            MR_String ll_backend__fact_table__DataString_34;
            MR_Word ll_backend__fact_table__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_38;
            MR_Word ll_backend__fact_table__Var_40;
            MR_Word ll_backend__fact_table__Var_42;
            MR_Word ll_backend__fact_table__Var_43;
            MR_Word ll_backend__fact_table__Var_45;
            MR_Box ll_backend__fact_table__conv0_ProcInfo_29;

            ll_backend__fact_table__ProcID_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_37, (MR_Integer) 0)));
            ll_backend__fact_table__Stream_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_37, (MR_Integer) 1)));
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__fact_table__ProcTable_2, ll_backend__fact_table__ProcID_19, &ll_backend__fact_table__conv0_ProcInfo_29);
            }
            ll_backend__fact_table__ProcInfo_29 = ((MR_Word) ll_backend__fact_table__conv0_ProcInfo_29);
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__fact_table__ProcInfo_29, &ll_backend__fact_table__ArgModes_30);
            }
            ll_backend__fact_table__TypeInfo_55_55 = (MR_Word) &ll_backend__fact_table_scalar_common_1[2];
            {
              mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, ll_backend__fact_table__TypeInfo_55_55, ll_backend__fact_table__ArgModes_30, ll_backend__fact_table__Terms_3, &ll_backend__fact_table__ModeTerms_31);
            }
            {
              ll_backend__fact_table__make_sort_file_key_3_p_0(ll_backend__fact_table__ModeTerms_31, ll_backend__fact_table__ModuleInfo_4, &ll_backend__fact_table__Key_32);
            }
            switch (ll_backend__fact_table__IsPrimary_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__fact_table__DataString_34 = (MR_String) "";
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__fact_table__InfoTerms_33;

                  {
                    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__fact_table__ll_backend__fact_table__type_ctor_info_fact_arg_info_0, ll_backend__fact_table__TypeInfo_55_55, ll_backend__fact_table__FactArgInfos_6, ll_backend__fact_table__Terms_3, &ll_backend__fact_table__InfoTerms_33);
                  }
                  {
                    ll_backend__fact_table__DataString_34 = ll_backend__fact_table__make_fact_data_string_1_f_0(ll_backend__fact_table__InfoTerms_33);
                  }
                }
                break;
            }
            {
              ll_backend__fact_table__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_45, 0) = ((MR_Box) (ll_backend__fact_table__DataString_34));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[52])));
            }
            {
              ll_backend__fact_table__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_43, 0) = ((MR_Box) ((MR_String) "~"));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_43, 1) = ((MR_Box) (ll_backend__fact_table__Var_45));
            }
            {
              ll_backend__fact_table__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_42, 0) = ((MR_Box) (ll_backend__fact_table__FactNumStr_5));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_42, 1) = ((MR_Box) (ll_backend__fact_table__Var_43));
            }
            {
              ll_backend__fact_table__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_40, 0) = ((MR_Box) ((MR_String) "~"));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_40, 1) = ((MR_Box) (ll_backend__fact_table__Var_42));
            }
            {
              ll_backend__fact_table__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_38, 0) = ((MR_Box) (ll_backend__fact_table__Key_32));
              MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_38, 1) = ((MR_Box) (ll_backend__fact_table__Var_40));
            }
            {
              mercury__io__write_strings_4_p_0(ll_backend__fact_table__Stream_20, ll_backend__fact_table__Var_38);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__ProcStreams_21;

              ll_backend__fact_table__IsPrimary_7 = (MR_Integer) 0;
              ll_backend__fact_table__FactArgInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_String MR_CALL 
ll_backend__fact_table__make_fact_data_string_1_f_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;
        MR_String ll_backend__fact_table__HeadVar__2_2;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__fact_table__HeadVar__2_2 = (MR_String) "";
        else
          {
            MR_Word ll_backend__fact_table__IsOutput_5;
            MR_Word ll_backend__fact_table__Term_6;
            MR_Word ll_backend__fact_table__InfoTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_13, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Var_3;
            MR_Word ll_backend__fact_table__Var_4;
            MR_Word ll_backend__fact_table__Const_9;
            MR_Word ll_backend__fact_table__Var_15;
            MR_Word ll_backend__fact_table__Var_10;

            ll_backend__fact_table__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_13, (MR_Integer) 1)));
            ll_backend__fact_table__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_14, (MR_Integer) 0)));
            ll_backend__fact_table__Var_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_14, (MR_Integer) 1)))) & (MR_Integer) 1);
            ll_backend__fact_table__IsOutput_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_14, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            ll_backend__fact_table__succeeded = (ll_backend__fact_table__IsOutput_5 == (MR_Integer) 1);
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Term_6)) == (MR_mktag((MR_Integer) 0)));
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__Const_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Term_6, (MR_Integer) 0)));
                    ll_backend__fact_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Term_6, (MR_Integer) 1)));
                    ll_backend__fact_table__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Term_6, (MR_Integer) 2)));
                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (ll_backend__fact_table__succeeded)
              {
                MR_String ll_backend__fact_table__KeyPart_11;
                MR_String ll_backend__fact_table__String0_12;
                MR_Word ll_backend__fact_table__Var_16;
                MR_Word ll_backend__fact_table__Var_17;
                MR_Word ll_backend__fact_table__Var_19;

                switch (MR_tag((MR_Word) ll_backend__fact_table__Const_9)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "enumerated types are not supported yet.");
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__fact_table__Base_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Const_9, (MR_Integer) 0)));
                      MR_Word ll_backend__fact_table__Integer_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Const_9, (MR_Integer) 1)));
                      MR_Word ll_backend__fact_table__Signedness_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Const_9, (MR_Integer) 2)));
                      MR_Word ll_backend__fact_table___Size_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Const_9, (MR_Integer) 3)));

                      switch (ll_backend__fact_table__Signedness_26) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer ll_backend__fact_table__I_28;

                            {
                              ll_backend__fact_table__succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(ll_backend__fact_table__Base_24, ll_backend__fact_table__Integer_25, &ll_backend__fact_table__I_28);
                            }
                            if (ll_backend__fact_table__succeeded)
                              {
                                {
                                  ll_backend__fact_table__KeyPart_11 = mercury__string__int_to_base_string_2_f_0(ll_backend__fact_table__I_28, (MR_Integer) 36);
                                }
                              }
                            else
                              {
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "integer too big");
                                }
                              }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "NYI uints and fact tables");
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ll_backend__fact_table__TypeCtorInfo_7_51;
                      MR_String ll_backend__fact_table__Str_30 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Const_9, (MR_Integer) 0)));
                      MR_Word ll_backend__fact_table__Chars_31;
                      MR_Word ll_backend__fact_table__EscapedChars_32;
                      MR_Word ll_backend__fact_table__EscapedCharsCord_49;
                      MR_Word ll_backend__fact_table__Var_50;

                      {
                        mercury__string__to_char_list_2_p_0(ll_backend__fact_table__Str_30, &ll_backend__fact_table__Chars_31);
                      }
                      ll_backend__fact_table__TypeCtorInfo_7_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                      {
                        ll_backend__fact_table__Var_50 = mercury__cord__init_0_f_0(ll_backend__fact_table__TypeCtorInfo_7_51);
                      }
                      {
                        ll_backend__fact_table__key_from_chars_loop_3_p_0(ll_backend__fact_table__Chars_31, ll_backend__fact_table__Var_50, &ll_backend__fact_table__EscapedCharsCord_49);
                      }
                      {
                        ll_backend__fact_table__EscapedChars_32 = mercury__cord__to_list_1_f_0(ll_backend__fact_table__TypeCtorInfo_7_51, ll_backend__fact_table__EscapedCharsCord_49);
                      }
                      {
                        mercury__string__from_char_list_2_p_0(ll_backend__fact_table__EscapedChars_32, &ll_backend__fact_table__KeyPart_11);
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__fact_table__Const_9, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Float ll_backend__fact_table__F_29 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__fact_table__Const_9, (MR_Integer) 1)));

                          {
                            ll_backend__fact_table__KeyPart_11 = mercury__string__float_to_string_1_f_0(ll_backend__fact_table__F_29);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "implementation-defined literal");
                          }
                        }
                        break;
                    }
                    break;
                }
                {
                  ll_backend__fact_table__String0_12 = ll_backend__fact_table__make_fact_data_string_1_f_0(ll_backend__fact_table__InfoTerms_7);
                }
                {
                  ll_backend__fact_table__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_19, 0) = ((MR_Box) (ll_backend__fact_table__String0_12));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ll_backend__fact_table__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_17, 0) = ((MR_Box) ((MR_String) ":"));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_17, 1) = ((MR_Box) (ll_backend__fact_table__Var_19));
                }
                {
                  ll_backend__fact_table__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_16, 0) = ((MR_Box) (ll_backend__fact_table__KeyPart_11));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_16, 1) = ((MR_Box) (ll_backend__fact_table__Var_17));
                }
                {
                  mercury__string__append_list_2_p_0(ll_backend__fact_table__Var_16, &ll_backend__fact_table__HeadVar__2_2);
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__InfoTerms_7;

                  ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__fact_table__HeadVar__2_2;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__make_sort_file_key_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__ModuleInfo_2,
  MR_String * ll_backend__fact_table__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__HeadVar__3_3 = (MR_String) "";
        else
          {
            MR_Word ll_backend__fact_table__Mode_5;
            MR_Word ll_backend__fact_table__Term_6;
            MR_Word ll_backend__fact_table__ModeTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Const_10;
            MR_Word ll_backend__fact_table__Var_16;
            MR_Word ll_backend__fact_table___Context_11;

            ll_backend__fact_table__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_15, (MR_Integer) 0)));
            ll_backend__fact_table__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_15, (MR_Integer) 1)));
            {
              ll_backend__fact_table__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ll_backend__fact_table__ModuleInfo_2, ll_backend__fact_table__Mode_5);
            }
            if (ll_backend__fact_table__succeeded)
              {
                ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Term_6)) == (MR_mktag((MR_Integer) 0)));
                if (ll_backend__fact_table__succeeded)
                  {
                    ll_backend__fact_table__Const_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Term_6, (MR_Integer) 0)));
                    ll_backend__fact_table__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Term_6, (MR_Integer) 1)));
                    ll_backend__fact_table___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Term_6, (MR_Integer) 2)));
                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (ll_backend__fact_table__succeeded)
              {
                MR_String ll_backend__fact_table__KeyPart_12;
                MR_String ll_backend__fact_table__Key0_13;
                MR_String ll_backend__fact_table__Key1_14;

                switch (MR_tag((MR_Word) ll_backend__fact_table__Const_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "enumerated types are not supported yet.");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__fact_table__Base_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Const_10, (MR_Integer) 0)));
                      MR_Word ll_backend__fact_table__Integer_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Const_10, (MR_Integer) 1)));
                      MR_Word ll_backend__fact_table__Signedness_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Const_10, (MR_Integer) 2)));
                      MR_Word ll_backend__fact_table___Size_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Const_10, (MR_Integer) 3)));

                      switch (ll_backend__fact_table__Signedness_23) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer ll_backend__fact_table__I_25;

                            {
                              ll_backend__fact_table__succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(ll_backend__fact_table__Base_21, ll_backend__fact_table__Integer_22, &ll_backend__fact_table__I_25);
                            }
                            if (ll_backend__fact_table__succeeded)
                              {
                                {
                                  ll_backend__fact_table__KeyPart_12 = mercury__string__int_to_base_string_2_f_0(ll_backend__fact_table__I_25, (MR_Integer) 36);
                                }
                              }
                            else
                              {
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "integer too big");
                                  return;
                                }
                              }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "NYI uints and fact tables");
                              return;
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ll_backend__fact_table__TypeCtorInfo_7_48;
                      MR_String ll_backend__fact_table__Str_27 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Const_10, (MR_Integer) 0)));
                      MR_Word ll_backend__fact_table__Chars_28;
                      MR_Word ll_backend__fact_table__EscapedChars_29;
                      MR_Word ll_backend__fact_table__EscapedCharsCord_46;
                      MR_Word ll_backend__fact_table__Var_47;

                      {
                        mercury__string__to_char_list_2_p_0(ll_backend__fact_table__Str_27, &ll_backend__fact_table__Chars_28);
                      }
                      ll_backend__fact_table__TypeCtorInfo_7_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                      {
                        ll_backend__fact_table__Var_47 = mercury__cord__init_0_f_0(ll_backend__fact_table__TypeCtorInfo_7_48);
                      }
                      {
                        ll_backend__fact_table__key_from_chars_loop_3_p_0(ll_backend__fact_table__Chars_28, ll_backend__fact_table__Var_47, &ll_backend__fact_table__EscapedCharsCord_46);
                      }
                      {
                        ll_backend__fact_table__EscapedChars_29 = mercury__cord__to_list_1_f_0(ll_backend__fact_table__TypeCtorInfo_7_48, ll_backend__fact_table__EscapedCharsCord_46);
                      }
                      {
                        mercury__string__from_char_list_2_p_0(ll_backend__fact_table__EscapedChars_29, &ll_backend__fact_table__KeyPart_12);
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__fact_table__Const_10, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Float ll_backend__fact_table__F_26 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__fact_table__Const_10, (MR_Integer) 1)));

                          {
                            ll_backend__fact_table__KeyPart_12 = mercury__string__float_to_string_1_f_0(ll_backend__fact_table__F_26);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "function \140ll_backend.fact_table.make_key_part\'/1", (MR_String) "implementation-defined literal");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
                {
                  ll_backend__fact_table__make_sort_file_key_3_p_0(ll_backend__fact_table__ModeTerms_7, ll_backend__fact_table__ModuleInfo_2, &ll_backend__fact_table__Key0_13);
                }
                {
                  mercury__string__append_3_p_2((MR_String) ":", ll_backend__fact_table__Key0_13, &ll_backend__fact_table__Key1_14);
                }
                {
                  mercury__string__append_3_p_2(ll_backend__fact_table__KeyPart_12, ll_backend__fact_table__Key1_14, ll_backend__fact_table__HeadVar__3_3);
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__ModeTerms_7;

                  ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__key_from_chars_loop_3_p_0(
  MR_Word ll_backend__fact_table__HeadVar__1_1,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_0_2,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_3 = ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_0_2;
        else
          {
            MR_Char ll_backend__fact_table__Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Chars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_12_12;

            ll_backend__fact_table__succeeded = (ll_backend__fact_table__Char_7 == (MR_Char) 92);
            if (ll_backend__fact_table__succeeded)
              {
                MR_Word ll_backend__fact_table__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                MR_Word ll_backend__fact_table__Var_13;

                {
                  ll_backend__fact_table__Var_13 = mercury__cord__from_list_1_f_0(ll_backend__fact_table__TypeCtorInfo_42_42, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[11]));
                }
                {
                  ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0(ll_backend__fact_table__TypeCtorInfo_42_42, ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_0_2, ll_backend__fact_table__Var_13);
                }
              }
            else
              {
                ll_backend__fact_table__succeeded = (ll_backend__fact_table__Char_7 == (MR_Char) 10);
                if (ll_backend__fact_table__succeeded)
                  {
                    MR_Word ll_backend__fact_table__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                    MR_Word ll_backend__fact_table__Var_20;

                    {
                      ll_backend__fact_table__Var_20 = mercury__cord__from_list_1_f_0(ll_backend__fact_table__TypeCtorInfo_43_43, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[13]));
                    }
                    {
                      ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0(ll_backend__fact_table__TypeCtorInfo_43_43, ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_0_2, ll_backend__fact_table__Var_20);
                    }
                  }
                else
                  {
                    ll_backend__fact_table__succeeded = (ll_backend__fact_table__Char_7 == (MR_Char) 58);
                    if (ll_backend__fact_table__succeeded)
                      {
                        MR_Word ll_backend__fact_table__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                        MR_Word ll_backend__fact_table__Var_27;

                        {
                          ll_backend__fact_table__Var_27 = mercury__cord__from_list_1_f_0(ll_backend__fact_table__TypeCtorInfo_44_44, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[15]));
                        }
                        {
                          ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0(ll_backend__fact_table__TypeCtorInfo_44_44, ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_0_2, ll_backend__fact_table__Var_27);
                        }
                      }
                    else
                      {
                        ll_backend__fact_table__succeeded = (ll_backend__fact_table__Char_7 == (MR_Char) 126);
                        if (ll_backend__fact_table__succeeded)
                          {
                            MR_Word ll_backend__fact_table__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                            MR_Word ll_backend__fact_table__Var_34;

                            {
                              ll_backend__fact_table__Var_34 = mercury__cord__from_list_1_f_0(ll_backend__fact_table__TypeCtorInfo_45_45, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[17]));
                            }
                            {
                              ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__f_43_43_2_f_0(ll_backend__fact_table__TypeCtorInfo_45_45, ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_0_2, ll_backend__fact_table__Var_34);
                            }
                          }
                        else
                          {
                            {
                              ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_12_12 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_0_2, ((MR_Box) (MR_Word) (ll_backend__fact_table__Char_7)));
                            }
                          }
                      }
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__fact_table__next_value_of_HeadVar__1_1 = ll_backend__fact_table__Chars_8;
              MR_Word ll_backend__fact_table__next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2 = ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_12_12;

              ll_backend__fact_table__STATE_VARIABLE_EscapedCharsCord_0_2 = ll_backend__fact_table__next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2;
              ll_backend__fact_table__HeadVar__1_1 = ll_backend__fact_table__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__check_fact_type_and_mode_8_p_0(
  MR_Word ll_backend__fact_table__Types0_1,
  MR_Word ll_backend__fact_table__HeadVar__2_2,
  MR_Integer ll_backend__fact_table__ArgNum0_3,
  MR_Word ll_backend__fact_table__PredOrFunc_4,
  MR_Word ll_backend__fact_table__Context0_5,
  MR_Word * ll_backend__fact_table__HeadVar__6_6,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_7,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__fact_table__succeeded;

        if ((ll_backend__fact_table__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__fact_table__HeadVar__6_6 = (MR_Integer) 0;
            *ll_backend__fact_table__STATE_VARIABLE_Errors_8 = ll_backend__fact_table__STATE_VARIABLE_Errors_0_7;
          }
        else
          {
            MR_Word ll_backend__fact_table__Term_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__fact_table__Terms_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer ll_backend__fact_table__ArgNum_24 = (ll_backend__fact_table__ArgNum0_3 + (MR_Integer) 1);

            if (((MR_tag((MR_Word) ll_backend__fact_table__Term_17)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word ll_backend__fact_table__Functor_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Term_17, (MR_Integer) 0)));
                MR_Word ll_backend__fact_table__Items_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Term_17, (MR_Integer) 1)));
                MR_Word ll_backend__fact_table__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__fact_table__Term_17, (MR_Integer) 2)));
                MR_Word ll_backend__fact_table__RequiredType_32;

                switch (MR_tag((MR_Word) ll_backend__fact_table__Functor_28)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__fact_table__RequiredType_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__fact_table__Signedness_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Functor_28, (MR_Integer) 2)));
                      MR_Word ll_backend__fact_table__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Functor_28, (MR_Integer) 0)));
                      MR_Word ll_backend__fact_table__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Functor_28, (MR_Integer) 1)));
                      MR_Word ll_backend__fact_table__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Functor_28, (MR_Integer) 3)));

                      switch (ll_backend__fact_table__Signedness_35) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            ll_backend__fact_table__RequiredType_32 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[2]);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            ll_backend__fact_table__RequiredType_32 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[3]);
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ll_backend__fact_table__RequiredType_32 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[4]);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__fact_table__Functor_28, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ll_backend__fact_table__RequiredType_32 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_3[1]);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.fact_table", (MR_String) "predicate \140ll_backend.fact_table.check_fact_type_and_mode\'/8", (MR_String) "implementation-defined literal");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
                if ((ll_backend__fact_table__RequiredType_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word ll_backend__fact_table__Var_59;
                    MR_Word ll_backend__fact_table__Var_61;
                    MR_String ll_backend__fact_table__Msg_67;
                    MR_Word ll_backend__fact_table__Var_77;
                    MR_Word ll_backend__fact_table__Var_78;

                    if ((ll_backend__fact_table__Items_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ll_backend__fact_table__Msg_67 = (MR_String) "Error: enumeration types are not yet supported in fact tables.";
                    else
                      ll_backend__fact_table__Msg_67 = (MR_String) "Error: compound types are not supported in fact tables.";
                    {
                      ll_backend__fact_table__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_61, 1) = ((MR_Box) (ll_backend__fact_table__Msg_67));
                    }
                    {
                      ll_backend__fact_table__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_59, 0) = ((MR_Box) (ll_backend__fact_table__Var_61));
                      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ll_backend__fact_table__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_78, 0) = ((MR_Box) (ll_backend__fact_table__Context_30));
                    }
                    {
                      ll_backend__fact_table__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_77, 0) = ((MR_Box) (ll_backend__fact_table__Var_78));
                      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_77, 1) = ((MR_Box) (ll_backend__fact_table__Var_59));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__fact_table__STATE_VARIABLE_Errors_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_77));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_Errors_0_7));
                    }
                    *ll_backend__fact_table__HeadVar__6_6 = (MR_Integer) 1;
                  }
                else
                  {
                    MR_Word ll_backend__fact_table__BuiltinType_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__RequiredType_32, (MR_Integer) 0)));
                    MR_Word ll_backend__fact_table__Types_44;
                    MR_Word ll_backend__fact_table__Type_43;
                    MR_Word ll_backend__fact_table__Var_70;

                    ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Types0_1)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__fact_table__succeeded)
                      {
                        ll_backend__fact_table__Type_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Types0_1, (MR_Integer) 0)));
                        ll_backend__fact_table__Types_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__fact_table__Types0_1, (MR_Integer) 1)));
                        ll_backend__fact_table__succeeded = ((MR_tag((MR_Word) ll_backend__fact_table__Type_43)) == (MR_mktag((MR_Integer) 2)));
                        if (ll_backend__fact_table__succeeded)
                          {
                            ll_backend__fact_table__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__fact_table__Type_43, (MR_Integer) 0)));
                            ll_backend__fact_table__succeeded = (ll_backend__fact_table__BuiltinType_42 == ll_backend__fact_table__Var_70);
                          }
                      }
                    if (ll_backend__fact_table__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__fact_table__next_value_of_Types0_1 = ll_backend__fact_table__Types_44;
                          MR_Word ll_backend__fact_table__next_value_of_HeadVar__2_2 = ll_backend__fact_table__Terms_18;
                          MR_Integer ll_backend__fact_table__next_value_of_ArgNum0_3 = ll_backend__fact_table__ArgNum_24;

                          ll_backend__fact_table__ArgNum0_3 = ll_backend__fact_table__next_value_of_ArgNum0_3;
                          ll_backend__fact_table__HeadVar__2_2 = ll_backend__fact_table__next_value_of_HeadVar__2_2;
                          ll_backend__fact_table__Types0_1 = ll_backend__fact_table__next_value_of_Types0_1;
                        }
                        continue;
                      }
                    else
                      {
                        {
                          ll_backend__fact_table__report_type_error_6_p_0(ll_backend__fact_table__Context_30, ll_backend__fact_table__ArgNum_24, ll_backend__fact_table__Terms_18, ll_backend__fact_table__PredOrFunc_4, ll_backend__fact_table__STATE_VARIABLE_Errors_0_7, ll_backend__fact_table__STATE_VARIABLE_Errors_8);
                        }
                        *ll_backend__fact_table__HeadVar__6_6 = (MR_Integer) 1;
                      }
                  }
              }
            else
              {
                MR_Word ll_backend__fact_table__Var_85;
                MR_Word ll_backend__fact_table__Var_86;

                {
                  ll_backend__fact_table__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_86, 0) = ((MR_Box) (ll_backend__fact_table__Context0_5));
                }
                {
                  ll_backend__fact_table__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_85, 0) = ((MR_Box) (ll_backend__fact_table__Var_86));
                  MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__fact_table_scalar_common_1[51])));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__fact_table__STATE_VARIABLE_Errors_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_85));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_Errors_0_7));
                }
                *ll_backend__fact_table__HeadVar__6_6 = (MR_Integer) 1;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__fact_table__report_type_error_6_p_0(
  MR_Word ll_backend__fact_table__Context_7,
  MR_Integer ll_backend__fact_table__ArgNum_8,
  MR_Word ll_backend__fact_table__RemainingTerms_9,
  MR_Word ll_backend__fact_table__PredOrFunc_10,
  MR_Word ll_backend__fact_table__STATE_VARIABLE_Errors_0_13,
  MR_Word * ll_backend__fact_table__STATE_VARIABLE_Errors_14)
{
  {
    MR_bool ll_backend__fact_table__succeeded = (ll_backend__fact_table__PredOrFunc_10 == (MR_Integer) 1);
    MR_String ll_backend__fact_table__Msg_12;
    MR_Word ll_backend__fact_table__Var_19;
    MR_Word ll_backend__fact_table__Var_21;
    MR_Word ll_backend__fact_table__Var_39;
    MR_Word ll_backend__fact_table__Var_40;

    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__succeeded = (ll_backend__fact_table__RemainingTerms_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ll_backend__fact_table__succeeded)
      ll_backend__fact_table__Msg_12 = (MR_String) "Type error in return value of function.";
    else
      {
        MR_String ll_backend__fact_table__Var_24;
        MR_String ll_backend__fact_table__Var_31;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__fact_table_scalar_common_3[0], ll_backend__fact_table__ArgNum_8, &ll_backend__fact_table__Var_24);
        }
        {
          ll_backend__fact_table__Var_31 = mercury__string__f_43_43_2_f_0(ll_backend__fact_table__Var_24, (MR_String) ".");
        }
        {
          ll_backend__fact_table__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "Type error in argument ", ll_backend__fact_table__Var_31);
        }
      }
    {
      ll_backend__fact_table__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__fact_table__Var_21, 1) = ((MR_Box) (ll_backend__fact_table__Msg_12));
    }
    {
      ll_backend__fact_table__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_19, 0) = ((MR_Box) (ll_backend__fact_table__Var_21));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__fact_table__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__fact_table__Var_40, 0) = ((MR_Box) (ll_backend__fact_table__Context_7));
    }
    {
      ll_backend__fact_table__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_39, 0) = ((MR_Box) (ll_backend__fact_table__Var_40));
      MR_hl_field(MR_mktag(0), ll_backend__fact_table__Var_39, 1) = ((MR_Box) (ll_backend__fact_table__Var_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__fact_table__STATE_VARIABLE_Errors_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__fact_table__Var_39));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__fact_table__STATE_VARIABLE_Errors_0_13));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table__fact_table_size_2_p_0(
  MR_Word ll_backend__fact_table__Globals_3,
  MR_Integer * ll_backend__fact_table__FactTableSize_4)
{
  {
    MR_bool ll_backend__fact_table__succeeded;

    {
      libs__globals__lookup_int_option_3_p_0(ll_backend__fact_table__Globals_3, (MR_Integer) 323, ll_backend__fact_table__FactTableSize_4);
    }
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

/* :- end_module ll_backend.fact_table. */
