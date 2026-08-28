/*
** Automatically generated from `fact_table_compile.m'
** by the Mercury compiler,
** version rotd-2026-08-28
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


// :- module ll_backend.fact_table_compile.
// :- implementation.

/*
INIT mercury__ll_backend__fact_table_compile__init
ENDINIT
*/

#include "ll_backend.fact_table_compile.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "io.call_system.mih"
#include "io.file.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.system_cmds.mih"
#include "libs.trace_params.mih"
#include "ll_backend.fact_table_check.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table_compile__list__pti_list_1__plain_ll_backend__fact_table_compile__type_ctor_info_fact_arg_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_arg_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_arg_0_1[1];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_1;

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_arg_0_2[1];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_2;

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_arg_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_arg_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_arg_0_2[1];

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_fact_arg_0[3];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_fact_arg_0[3];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_fact_arg_0[3];

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table_compile__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_result_0_0[2];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_result_0_0;

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_result_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_result_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_result_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_fact_result_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_fact_result_0[2];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_fact_result_0[2];

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_entry_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_entry_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_entry_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_hash_entry_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_hash_entry_0[1];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_hash_entry_0[1];

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_index_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_index_0_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_index_0_1[2];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_index_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_index_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_index_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_hash_index_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_hash_index_0[2];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_hash_index_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table_compile__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table_compile__type_ctor_info_hash_entry_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_table_0_0[2];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_table_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_table_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_hash_table_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_hash_table_0[1];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_hash_table_0[1];

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_inferred_determinism_0_0[1];

static const MR_DuArgLocn ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_locns_inferred_determinism_0_0[1];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_0;

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_1;

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_2;

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_inferred_determinism_0_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_inferred_determinism_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_inferred_determinism_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_inferred_determinism_0[3];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_inferred_determinism_0[3];

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_create_fact_map_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_create_fact_map_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_create_fact_map_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_create_fact_map_0[2];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_create_fact_map_0[2];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_maybe_primary_proc_0_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_maybe_primary_proc_0_1[1];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_maybe_primary_proc_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_maybe_primary_proc_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_maybe_primary_proc_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_maybe_primary_proc_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_maybe_primary_proc_0[2];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_primary_proc_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_primary_table_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_primary_table_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_primary_table_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_primary_table_0[2];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_primary_table_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_data_table_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_data_table_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_write_data_table_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_write_data_table_0[2];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_write_data_table_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_hash_tables_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_hash_tables_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_write_hash_tables_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_write_hash_tables_0[2];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_write_hash_tables_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_proc_stream_0_0[4];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_proc_stream_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_proc_stream_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_proc_stream_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_proc_stream_0[1];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_proc_stream_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_compile__type_ctor_info_fact_arg_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_sort_file_line_0_0[3];

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_sort_file_line_0_0;

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_sort_file_line_0_0[1];

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_sort_file_line_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_sort_file_line_0[1];

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_sort_file_line_0[1];

static MR_Word MR_CALL 
ll_backend__fact_table_compile__IntroducedFrom__func__build_hash_table_loop__1725__1_1_f_0(
  MR_Word LambdaHeadVar__1_71);

static MR_Word MR_CALL 
ll_backend__fact_table_compile__IntroducedFrom__func__write_secondary_hash_tables__1442__1_1_f_0(
  MR_Word LambdaHeadVar__1_85);

static MR_Word MR_CALL 
ll_backend__fact_table_compile__IntroducedFrom__func__write_primary_hash_table__1361__1_1_f_0(
  MR_Word LambdaHeadVar__1_76);

static MR_Word MR_CALL 
ll_backend__fact_table_compile__IntroducedFrom__func__open_sort_files__890__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____sort_file_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____sort_file_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____proc_stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____proc_stream_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_write_hash_tables_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_write_hash_tables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_write_data_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_write_data_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_primary_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_primary_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_primary_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_primary_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_create_fact_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_create_fact_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____inferred_determinism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____inferred_determinism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____fact_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____fact_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____fact_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____fact_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile__append_data_table_7_p_0(
  MR_Word MaybeProgressStream_8,
  MR_String OutputFileName_9,
  MR_String DataFileName_10,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
ll_backend__fact_table_compile__compile_fact_table_in_file_17_p_0(
  MR_Word MaybeProgressStream_18,
  MR_Word FileStream_19,
  MR_String FileName_20,
  MR_Word OutputStream_21,
  MR_Integer FactTableArraySize_22,
  MR_Word ModuleInfo_23,
  MR_Word PredSymName_24,
  MR_Word GenInfo_25,
  MR_String * HeaderCode_26,
  MR_Integer * PrimaryProcId_27,
  MR_Word * MaybeDataFileName_28,
  MR_Word STATE_VARIABLE_PredInfo_0_70,
  MR_Word * STATE_VARIABLE_PredInfo_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73);

static void MR_CALL 
ll_backend__fact_table_compile__add_error_pieces_3_p_0(
  MR_Word Pieces_4,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_numfacts_6_p_0(
  MR_Word OutputStream_7,
  MR_Word PredSymName_8,
  MR_Integer NumFacts_9,
  MR_String * HeaderCode_10);

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_arrays_18_p_0(
  MR_Word MaybeProgressStream_19,
  MR_Word OutputStream_20,
  MR_Integer FactTableArraySize_21,
  MR_Word ModuleInfo_22,
  MR_Word ProcFiles_23,
  MR_String DataFileName_24,
  MR_Word FactTableProcMap_25,
  MR_String StructName_26,
  MR_Integer NumFacts_27,
  MR_Word FactArgInfos_28,
  MR_Word WriteHashTables_29,
  MR_Word WriteDataTable_30,
  MR_String * HeaderCode_31,
  MR_Integer * PrimaryProcId_32,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static MR_Box MR_CALL 
ll_backend__fact_table_compile__write_secondary_hash_tables_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table_compile__write_secondary_hash_tables_15_p_0(
  MR_Word MaybeProgressStream_1,
  MR_Word OutputStream_2,
  MR_Integer FactTableArraySize_3,
  MR_Word ModuleInfo_4,
  MR_Word FactTableProcMap_5,
  MR_String StructName_6,
  MR_Word FactArgInfos_7,
  MR_Word FactMap_8,
  MR_Word HeadVar__9_9,
  MR_String STATE_VARIABLE_HeaderCode_0_10,
  MR_String * STATE_VARIABLE_HeaderCode_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static MR_Box MR_CALL 
ll_backend__fact_table_compile__write_primary_hash_table_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table_compile__write_primary_hash_table_18_p_0(
  MR_Word MaybeProgressStream_19,
  MR_Word OutputStream_20,
  MR_Integer FactTableArraySize_21,
  MR_Word ModuleInfo_22,
  MR_Word FactTableProcMap_23,
  MR_Integer ProcId_24,
  MR_String FileName_25,
  MR_String DataFileName_26,
  MR_String StructName_27,
  MR_Word FactArgInfos_28,
  MR_Word WriteDataTable_29,
  MR_Integer NumFacts_30,
  MR_Word CreateFactMap_31,
  MR_Word * Result_32,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

static void MR_CALL 
ll_backend__fact_table_compile__add_file_open_error_8_p_0(
  MR_Word MaybeContext_9,
  MR_String FileName_10,
  MR_String InOrOut_11,
  MR_Word Error_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
ll_backend__fact_table_compile__delete_temporary_file_5_p_0(
  MR_String FileName_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_pointer_array_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer FactTableArraySize_9,
  MR_String StructName_10,
  MR_Integer NumFacts_11,
  MR_String * HeaderCode_12);

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_pointer_array_loop_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer FactTableArraySize_9,
  MR_String StructName_10,
  MR_Integer CurFact_11,
  MR_Integer NumFacts_12);

static void MR_CALL 
ll_backend__fact_table_compile__build_hash_table_23_p_0(
  MR_Word MaybeProgressStream_24,
  MR_Word InputStream_25,
  MR_String InputFileName_26,
  MR_Word OutputStream_27,
  MR_Word MaybeDataStream_28,
  MR_Integer FactTableArraySize_29,
  MR_Word ModuleInfo_30,
  MR_Word IsPrimaryTable_31,
  MR_String StructName_32,
  MR_Word Infos_33,
  MR_Word Modes_34,
  MR_Integer InputArgNum_35,
  MR_String HashTableName_36,
  MR_Integer TableNum_37,
  MR_Word FirstFact_38,
  MR_Integer FactNum_39,
  MR_Word CreateFactMap_40,
  MR_Word STATE_VARIABLE_FactMap_0_50,
  MR_Word * STATE_VARIABLE_FactMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53);

static MR_Box MR_CALL 
ll_backend__fact_table_compile__build_hash_table_loop_25_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table_compile__build_hash_table_loop_25_p_0(
  MR_Word MaybeProgressStream_26,
  MR_Word InputStream_27,
  MR_String InputFileName_28,
  MR_Word OutputStream_29,
  MR_Word MaybeDataStream_30,
  MR_Integer FactTableArraySize_31,
  MR_Word ModuleInfo_32,
  MR_Word IsPrimaryTable_33,
  MR_String StructName_34,
  MR_Word Infos_35,
  MR_Word Modes_36,
  MR_Integer InputArgNum_37,
  MR_String HashTableName_38,
  MR_Integer STATE_VARIABLE_TableNum_0_58,
  MR_Word FirstFact_40,
  MR_Integer FactNum_41,
  MR_Word CreateFactMap_42,
  MR_Word STATE_VARIABLE_FactMap_0_59,
  MR_Word * STATE_VARIABLE_FactMap_60,
  MR_Word STATE_VARIABLE_HashList_0_61,
  MR_Word * STATE_VARIABLE_HashList_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64);

static void MR_CALL 
ll_backend__fact_table_compile__update_fact_map_4_p_0(
  MR_Integer FactNum_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FactMap_0_3,
  MR_Word * STATE_VARIABLE_FactMap_4);

static void MR_CALL 
ll_backend__fact_table_compile__top_level_collect_matching_facts_loop_12_p_0(
  MR_Word InputStream_13,
  MR_String InputFileName_14,
  MR_Word Infos_15,
  MR_Word Modes_16,
  MR_Word Fact_17,
  MR_Word STATE_VARIABLE_RevMatchingFacts_0_32,
  MR_Word * STATE_VARIABLE_RevMatchingFacts_33,
  MR_Word * MaybeNextFact_19,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
ll_backend__fact_table_compile__build_hash_table_lower_levels_loop_14_p_0(
  MR_Word OutputStream_1,
  MR_Word Globals_2,
  MR_Word IsPrimaryTable_3,
  MR_Word FactMap_4,
  MR_Integer InputArgNum_5,
  MR_String HashTableName_6,
  MR_Word HeadVar__7_7,
  MR_Integer FactNum_8,
  MR_Integer STATE_VARIABLE_TableNum_0_9,
  MR_Integer * STATE_VARIABLE_TableNum_10,
  MR_Word STATE_VARIABLE_HashList_0_11,
  MR_Word * STATE_VARIABLE_HashList_12);

static void MR_CALL 
ll_backend__fact_table_compile__do_build_hash_table_14_p_0(
  MR_Word OutputStream_15,
  MR_Word Globals_16,
  MR_Word IsPrimaryTable_17,
  MR_Word FactMap_18,
  MR_Integer FactNum_19,
  MR_Integer InputArgNum_20,
  MR_String HashTableName_21,
  MR_Word Facts_22,
  MR_Integer STATE_VARIABLE_TableNum_0_42,
  MR_Integer * STATE_VARIABLE_TableNum_43,
  MR_Word STATE_VARIABLE_HashList_0_44,
  MR_Word * STATE_VARIABLE_HashList_45);

static void MR_CALL 
ll_backend__fact_table_compile__write_hash_table_6_p_0(
  MR_Word OutputStream_7,
  MR_String BaseName_8,
  MR_Integer TableNum_9,
  MR_Word HashTable_10);

static void MR_CALL 
ll_backend__fact_table_compile__get_hash_table_type_2_p_0(
  MR_Word HashTable_3,
  MR_Char * TableType_4);

static void MR_CALL 
ll_backend__fact_table_compile__get_hash_table_type_loop_3_p_0(
  MR_Word Map_4,
  MR_Integer Index_5,
  MR_Char * TableType_6);

static void MR_CALL 
ll_backend__fact_table_compile__write_hash_table_loop_6_p_0(
  MR_Word Stream_7,
  MR_Word HashTable_8,
  MR_Integer CurIndex_9,
  MR_Integer MaxIndex_10);

static void MR_CALL 
ll_backend__fact_table_compile__hash_table_from_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile__hash_table_from_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HashSize_2,
  MR_Word STATE_VARIABLE_HashTable_0_3,
  MR_Word * STATE_VARIABLE_HashTable_4);

static void MR_CALL 
ll_backend__fact_table_compile__fact_table_hash_2_4_p_0(
  MR_Integer HashSize_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_HashVal_0_3,
  MR_Integer * STATE_VARIABLE_HashVal_4);

static void MR_CALL 
ll_backend__fact_table_compile__hash_table_insert_open_address_loop_5_p_0(
  MR_Integer HashVal_6,
  MR_Word Key0_7,
  MR_Word Index0_8,
  MR_Word STATE_VARIABLE_HashTable_0_17,
  MR_Word * STATE_VARIABLE_HashTable_18);

static void MR_CALL 
ll_backend__fact_table_compile__get_free_hash_slot_loop_4_p_0(
  MR_Word HashTable_5,
  MR_Integer Start_6,
  MR_Integer Max_7,
  MR_Integer * Free_8);

static void MR_CALL 
ll_backend__fact_table_compile__hash_list_insert_many_7_p_0(
  MR_Word IsPrimaryTable_1,
  MR_Word FactMap_2,
  MR_Integer FactNum_3,
  MR_Integer InputArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HashList_0_6,
  MR_Word * STATE_VARIABLE_HashList_7);

static void MR_CALL 
ll_backend__fact_table_compile__find_first_big_enough_prime_3_p_0(
  MR_Integer NumSlotsNeeded_1,
  MR_Word HeadVar__2_2,
  MR_Integer * Size_3);

static void MR_CALL 
ll_backend__fact_table_compile__lower_level_collect_matching_facts_loop_6_p_0(
  MR_Integer InputArgNum_1,
  MR_Word MatchArg_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevMatchingFacts_0_4,
  MR_Word * STATE_VARIABLE_RevMatchingFacts_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_data_8_p_0(
  MR_Word OutputStream_1,
  MR_Word MaybeProgressStream_2,
  MR_Integer FactTableArraySize_3,
  MR_String StructName_4,
  MR_Word HeadVar__5_5,
  MR_Integer FactNum_6);

static void MR_CALL 
ll_backend__fact_table_compile__read_sort_file_line_9_p_0(
  MR_Word InputStream_10,
  MR_String InputFileName_11,
  MR_Word FactArgInfos_12,
  MR_Word Modes_13,
  MR_Word * MaybeSortFileLine_14,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
ll_backend__fact_table_compile__get_output_args_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgStrings0_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table_compile__get_input_args_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ArgStrings0_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__fact_table_compile__remove_sort_file_escapes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevChars_0_2,
  MR_Word * STATE_VARIABLE_RevChars_3);

static void MR_CALL 
ll_backend__fact_table_compile__split_key_to_arg_strings_2_p_0(
  MR_String Key0_3,
  MR_Word * ArgStrings_4);

static void MR_CALL 
ll_backend__fact_table_compile__write_new_data_array_opening_brace_5_p_0(
  MR_Word OutputStream_6,
  MR_String StructName_7,
  MR_Integer FactNum_8);

static void MR_CALL 
ll_backend__fact_table_compile__infer_determinism_pass_2_9_p_0(
  MR_Word MaybeProgressStream_1,
  MR_Word GenInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
ll_backend__fact_table_compile__add_call_system_error_6_p_0(
  MR_String Cmd_7,
  MR_Word ErrorCode_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
ll_backend__fact_table_compile__close_sort_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Box MR_CALL 
ll_backend__fact_table_compile__open_sort_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table_compile__open_sort_files_7_p_0(
  MR_Word ProcMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
ll_backend__fact_table_compile__create_fact_table_header_4_p_0(
  MR_Word PredSymName_5,
  MR_Word FactArgInfos_6,
  MR_String * HeaderCode_7,
  MR_String * StructName_8);

static void MR_CALL 
ll_backend__fact_table_compile__create_fact_table_struct_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_String * HeadVar__3_3);

static MR_String MR_CALL 
ll_backend__fact_table_compile__fact_table_file_header_1_f_0(
  MR_String FileName_3);

static void MR_CALL 
ll_backend__fact_table_compile__read_in_and_compile_facts_15_p_0(
  MR_Word FileStream_16,
  MR_String FileName_17,
  MR_Word MaybeProgressStream_18,
  MR_Integer FactTableArraySize_19,
  MR_Word PredInfo_20,
  MR_Integer NumFactArgInfos_21,
  MR_Word FactArgInfos_22,
  MR_Word ProcStreams_23,
  MR_Word MaybeOutput_24,
  MR_Integer STATE_VARIABLE_FactNum_0_38,
  MR_Integer * STATE_VARIABLE_FactNum_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
ll_backend__fact_table_compile__check_and_compile_fact_term_15_p_0(
  MR_Word FileStream_16,
  MR_String FileName_17,
  MR_Word MaybeProgressStream_18,
  MR_Integer FactTableArraySize_19,
  MR_Word PredInfo_20,
  MR_Integer NumFactArgInfos_21,
  MR_Word FactArgInfos_22,
  MR_Integer FactNum_23,
  MR_Word VarSet_24,
  MR_Word Term_25,
  MR_Word ProcStreams_26,
  MR_Word MaybeOutput_27,
  MR_Word * Specs_28);

static void MR_CALL 
ll_backend__fact_table_compile__add_error_context_and_pieces_4_p_0(
  MR_Word Context_5,
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
ll_backend__fact_table_compile__check_and_compile_fact_term_args_14_p_0(
  MR_Word MaybeProgressStream_15,
  MR_Integer FactTableArraySize_16,
  MR_Word PredInfo_17,
  MR_Integer NumFactArgInfos_18,
  MR_Word FactArgInfos_19,
  MR_Integer FactNum_20,
  MR_Word VarSet_21,
  MR_Word ArgTerms_22,
  MR_Word Context_23,
  MR_Word ProcStreams_24,
  MR_Word MaybeOutput_25,
  MR_Word * Specs_26);

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_data_8_p_0(
  MR_Word OutputStream_9,
  MR_Word MaybeProgressStream_10,
  MR_Integer FactTableArraySize_11,
  MR_String StructName_12,
  MR_Word Args_13,
  MR_Integer FactNum_14);

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_args_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_compile__write_sort_file_lines_6_p_0(
  MR_String FactNumStr_1,
  MR_Word FactArgs_2,
  MR_Word IsPrimary_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ll_backend__fact_table_compile__make_fact_data_string_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table_compile__make_sort_file_key_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
ll_backend__fact_table_compile__key_from_chars_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_EscapedCharsCord_0_2,
  MR_Word * STATE_VARIABLE_EscapedCharsCord_3);

static void MR_CALL 
ll_backend__fact_table_compile__check_fact_type_and_mode_8_p_0(
  MR_Word PredOrFunc_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
ll_backend__fact_table_compile__report_arg_error_11_p_0(
  MR_Word PredOrFunc_12,
  MR_Word VarSet_13,
  MR_Integer ArgNum_14,
  MR_Word ArgTerm_15,
  MR_Word RemainingArgTerms_16,
  MR_String TypeOrMode_17,
  MR_String AAn_18,
  MR_String Expected_19,
  MR_Word * DummyFactArg_20,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
ll_backend__fact_table_compile__infer_procs_determinism_pass_1_8_p_0(
  MR_Word GenInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4,
  MR_Word STATE_VARIABLE_WriteHashTables_0_5,
  MR_Word * STATE_VARIABLE_WriteHashTables_6,
  MR_Word STATE_VARIABLE_WriteDataTable_0_7,
  MR_Word * STATE_VARIABLE_WriteDataTable_8);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____fact_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____fact_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____fact_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____fact_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____inferred_determinism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____inferred_determinism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_create_fact_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_create_fact_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_primary_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_primary_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_primary_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_primary_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_write_data_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_write_data_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_write_hash_tables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_write_hash_tables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____proc_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____proc_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____sort_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_compile____Compare____sort_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_1[104][2];

static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_2[7][3];

static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_3[6][1];

static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_4[3][5];

static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_5[1][4];




static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_1[104][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Could not create temporary file:"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this clause is"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this term is"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not a fact."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: fact has wrong number of arguments."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments,"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error in"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "return value of function:"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "#include \"mercury_imp.h\"\n\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "// Do not edit.\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 110)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 99)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 116)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "during fact table determinism inference."))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "program"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cut"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or the"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "sort"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in ether the"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "an error occurred"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "fact table output files."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "An error occurred while concatenating"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error reading file"))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Integer) 2147483647)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_Integer) 1073741827)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Integer) 536870923)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Integer) 268435459)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_Integer) 134217757)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_Integer) 67108879)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_Integer) 33555799)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[71])))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_Integer) 16777903)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Integer) 8388949)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_Integer) 4194493)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_Integer) 2097257)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_Integer) 1048627)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_Integer) 524309)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[77])))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Integer) 262147)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_Integer) 131101)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_Integer) 65537)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_Integer) 32771)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_Integer) 16411)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_Integer) 8209)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_Integer) 4099)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_Integer) 2053)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_Integer) 1031)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_Integer) 521)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) ((MR_Integer) 257)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_Integer) 131)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_Integer) 67)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[93])))
  },
  /* row  95 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_String) " = {\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error deleting file"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error executing system command"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error opening file"))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cat"))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__fact_table_compile_scalar_common_4[0])),
    ((MR_Box) (ll_backend__fact_table_compile__open_sort_files_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__fact_table_compile_scalar_common_4[1])),
    ((MR_Box) (ll_backend__fact_table_compile__hash_table_from_list_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__fact_table_compile_scalar_common_4[2])),
    ((MR_Box) (ll_backend__fact_table_compile__build_hash_table_loop_25_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__fact_table_compile_scalar_common_4[0])),
    ((MR_Box) (ll_backend__fact_table_compile__write_primary_hash_table_18_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__fact_table_compile_scalar_common_4[0])),
    ((MR_Box) (ll_backend__fact_table_compile__write_secondary_hash_tables_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_3[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   3 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "dummy")) },
};

static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_sort_file_line_0)),
    ((MR_Box) (&ll_backend__fact_table_compile__list__pti_list_1__plain_ll_backend__fact_table_compile__type_ctor_info_fact_arg_0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_compile_scalar_common_5[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.append_data_table\'/7")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 80U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[64])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__fact_table_compile__list__pti_list_1__plain_ll_backend__fact_table_compile__type_ctor_info_fact_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0) }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_arg_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_0 = {
  (MR_String) "fact_arg_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_arg_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_1 = {
  (MR_String) "fact_arg_float",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_arg_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_arg_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_2 = {
  (MR_String) "fact_arg_string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_arg_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_arg_0_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_0 };

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_arg_0_1[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_1 };

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_arg_0_2[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_2 };

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_fact_arg_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_arg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_arg_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_fact_arg_0[3] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_1,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_arg_0_2
};

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_fact_arg_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____fact_arg_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____fact_arg_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "fact_arg",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_fact_arg_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_fact_arg_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_fact_arg_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table_compile__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_compile__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_result_0_0 = {
  (MR_String) "ok",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_fact_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_result_0_1 = {
  (MR_String) "error",
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

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_result_0_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_result_0_1 };

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_result_0_1[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_result_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_fact_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_fact_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_fact_result_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_result_0_1,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_fact_result_0_0
};

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_fact_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____fact_result_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____fact_result_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "fact_result",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_fact_result_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_fact_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_fact_result_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_entry_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_index_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_entry_0_0 = {
  (MR_String) "hash_entry",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_entry_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_entry_0_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_entry_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_hash_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_hash_entry_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_entry_0_0 };

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_hash_entry_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____hash_entry_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____hash_entry_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "hash_entry",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_hash_entry_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_hash_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_hash_entry_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_index_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_index_0_0 = {
  (MR_String) "fact",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_index_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_index_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_index_0_1 = {
  (MR_String) "hash_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_index_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_index_0_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_index_0_0 };

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_index_0_1[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_index_0_1 };

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_hash_index_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_index_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_index_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_hash_index_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_index_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_index_0_1
};

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_hash_index_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_index_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____hash_index_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____hash_index_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "hash_index",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_hash_index_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_hash_index_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_hash_index_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__fact_table_compile__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table_compile__type_ctor_info_hash_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_compile__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__fact_table_compile__type_ctor_info_hash_entry_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_table_0_0 = {
  (MR_String) "hash_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_hash_table_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_table_0_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_table_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_hash_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_hash_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_hash_table_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_hash_table_0_0 };

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_hash_table_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____hash_table_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____hash_table_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "hash_table",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_hash_table_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_hash_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_hash_table_0,

};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_inferred_determinism_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0) };

static const MR_DuArgLocn ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_locns_inferred_determinism_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_0 = {
  (MR_String) "inferred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_inferred_determinism_0_0,
  NULL,
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_locns_inferred_determinism_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_1 = {
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

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_2 = {
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

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_inferred_determinism_0_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_1,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_2
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_inferred_determinism_0_1[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_inferred_determinism_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_inferred_determinism_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_inferred_determinism_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_inferred_determinism_0[3] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_2,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_inferred_determinism_0_1
};

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_inferred_determinism_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_inferred_determinism_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____inferred_determinism_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____inferred_determinism_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "inferred_determinism",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_inferred_determinism_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_inferred_determinism_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_inferred_determinism_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_create_fact_map_0_0 = {
  (MR_String) "do_not_create_fact_map",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_create_fact_map_0_1 = {
  (MR_String) "create_fact_map",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_create_fact_map_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_create_fact_map_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_create_fact_map_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_create_fact_map_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_create_fact_map_0_1,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_create_fact_map_0_0
};

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_create_fact_map_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_create_fact_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____maybe_create_fact_map_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____maybe_create_fact_map_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "maybe_create_fact_map",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_create_fact_map_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_create_fact_map_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_create_fact_map_0,

};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_maybe_primary_proc_0_0 = {
  (MR_String) "is_not_primary_proc",
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

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0) }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_maybe_primary_proc_0_1[1] = { (MR_PseudoTypeInfo) (&ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0) };

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_maybe_primary_proc_0_1 = {
  (MR_String) "is_primary_proc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_maybe_primary_proc_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_maybe_primary_proc_0_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_maybe_primary_proc_0_0 };

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_maybe_primary_proc_0_1[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_maybe_primary_proc_0_1 };

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_maybe_primary_proc_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_maybe_primary_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_maybe_primary_proc_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_maybe_primary_proc_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_maybe_primary_proc_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_maybe_primary_proc_0_1
};

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_primary_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_primary_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____maybe_primary_proc_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____maybe_primary_proc_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "maybe_primary_proc",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_maybe_primary_proc_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_maybe_primary_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_primary_proc_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_primary_table_0_0 = {
  (MR_String) "not_primary_table",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_primary_table_0_1 = {
  (MR_String) "primary_table",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_primary_table_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_primary_table_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_primary_table_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_primary_table_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_primary_table_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_primary_table_0_1
};

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_primary_table_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_primary_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____maybe_primary_table_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____maybe_primary_table_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "maybe_primary_table",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_primary_table_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_primary_table_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_primary_table_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_data_table_0_0 = {
  (MR_String) "do_not_write_data_table",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_data_table_0_1 = {
  (MR_String) "write_data_table",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_write_data_table_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_data_table_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_data_table_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_write_data_table_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_data_table_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_data_table_0_1
};

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_write_data_table_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_write_data_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____maybe_write_data_table_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____maybe_write_data_table_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "maybe_write_data_table",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_write_data_table_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_write_data_table_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_write_data_table_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_hash_tables_0_0 = {
  (MR_String) "do_not_write_hash_tables",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_hash_tables_0_1 = {
  (MR_String) "write_hash_tables",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_write_hash_tables_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_hash_tables_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_hash_tables_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_write_hash_tables_0[2] = {
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_hash_tables_0_0,
  &ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_functor_desc_maybe_write_hash_tables_0_1
};

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_write_hash_tables_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_write_hash_tables_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____maybe_write_hash_tables_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____maybe_write_hash_tables_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "maybe_write_hash_tables",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_name_ordered_maybe_write_hash_tables_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__enum_ordinal_ordered_maybe_write_hash_tables_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_maybe_write_hash_tables_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0) }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_proc_stream_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_proc_stream_0_0 = {
  (MR_String) "proc_stream",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_proc_stream_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_proc_stream_0_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_proc_stream_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_proc_stream_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_proc_stream_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_proc_stream_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_proc_stream_0_0 };

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_proc_stream_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_proc_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____proc_stream_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____proc_stream_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "proc_stream",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_proc_stream_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_proc_stream_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_proc_stream_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_compile__type_ctor_info_fact_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0) }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_sort_file_line_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_compile__type_ctor_info_fact_arg_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_compile__list__ti_list_1ll_backend__fact_table_compile__type_ctor_info_fact_arg_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_sort_file_line_0_0 = {
  (MR_String) "sort_file_line",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__field_types_sort_file_line_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_sort_file_line_0_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_sort_file_line_0_0 };

static const MR_DuPtagLayout ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_sort_file_line_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_stag_ordered_sort_file_line_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_sort_file_line_0[1] = { &ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_functor_desc_sort_file_line_0_0 };

static const MR_Integer ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_sort_file_line_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_sort_file_line_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_compile____Unify____sort_file_line_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_compile____Compare____sort_file_line_0_0_10001)),
  (MR_String) "ll_backend.fact_table_compile",
  (MR_String) "sort_file_line",
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_name_ordered_sort_file_line_0 },
  { ll_backend__fact_table_compile__ll_backend__fact_table_compile__du_ptag_ordered_sort_file_line_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__fact_table_compile__ll_backend__fact_table_compile__functor_number_map_sort_file_line_0,

};

static MR_Word MR_CALL 
ll_backend__fact_table_compile__IntroducedFrom__func__build_hash_table_loop__1725__1_1_f_0(
  MR_Word LambdaHeadVar__1_71)
{
  MR_Word LambdaHeadVar__2_72 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_71, 2))));

  return LambdaHeadVar__2_72;
}

static MR_Word MR_CALL 
ll_backend__fact_table_compile__IntroducedFrom__func__write_secondary_hash_tables__1442__1_1_f_0(
  MR_Word LambdaHeadVar__1_85)
{
  MR_Word LambdaHeadVar__2_86 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_85, 1))) >> 1)) & (MR_Integer) 1);

  return LambdaHeadVar__2_86;
}

static MR_Word MR_CALL 
ll_backend__fact_table_compile__IntroducedFrom__func__write_primary_hash_table__1361__1_1_f_0(
  MR_Word LambdaHeadVar__1_76)
{
  MR_Word LambdaHeadVar__2_77 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_76, 1))) >> 1)) & (MR_Integer) 1);

  return LambdaHeadVar__2_77;
}

static MR_Word MR_CALL 
ll_backend__fact_table_compile__IntroducedFrom__func__open_sort_files__890__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  MR_Word LambdaHeadVar__2_44 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_43, 1))) >> 1)) & (MR_Integer) 1);

  return LambdaHeadVar__2_44;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____sort_file_line_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____sort_file_line_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____proc_stream_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__io____Compare____text_output_stream_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____proc_stream_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
        if (succeeded)
          succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_write_hash_tables_0_0(
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
ll_backend__fact_table_compile____Unify____maybe_write_hash_tables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_write_data_table_0_0(
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
ll_backend__fact_table_compile____Unify____maybe_write_data_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_primary_table_0_0(
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
ll_backend__fact_table_compile____Unify____maybe_primary_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_primary_proc_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_primary_proc_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_create_fact_map_0_0(
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
ll_backend__fact_table_compile____Unify____maybe_create_fact_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____inferred_determinism_0_0(
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 7);
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
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____inferred_determinism_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 7);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_table_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_table_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&ll_backend__fact_table_compile_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_entry_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    ll_backend__fact_table_compile____Compare____fact_arg_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ll_backend__fact_table_compile____Compare____hash_index_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
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

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));

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
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_String ArgY2_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_8;

    succeeded = (ArgX1_6 < ArgY1_7);
    if (succeeded)
    {
      SubResult1_8 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_6 > ArgY1_7);
      if (succeeded)
      {
        SubResult1_8 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_9, ArgY2_10);
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_entry_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer CastX_17 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_18 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ArgX1_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(0, ArgX1_3, 0))));
            MR_Integer ArgY1_12;

            succeeded = ((MR_tag((MR_Word) ArgY1_4)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Integer) ((MR_hl_field(0, ArgY1_4, 0))));
              succeeded = (ArgX1_11 == ArgY1_12);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float ArgX1_13 = MR_unbox_float((MR_hl_field(1, ArgX1_3, 0)));
            MR_Float ArgY1_14;

            succeeded = ((MR_tag((MR_Word) ArgY1_4)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_14 = MR_unbox_float((MR_hl_field(1, ArgY1_4, 0)));
              succeeded = (ArgX1_13 == ArgY1_14);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(2, ArgX1_3, 0))));
            MR_String ArgY1_16;

            succeeded = ((MR_tag((MR_Word) ArgY1_4)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_16 = ((MR_String) ((MR_hl_field(2, ArgY1_4, 0))));
              succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
            }
          }
          break;
      }
    if (succeeded)
    {
      succeeded = ll_backend__fact_table_compile____Unify____hash_index_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_index_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer ArgY1_6;
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = (ArgX1_5 == ArgY1_6);
      if (succeeded)
        succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____fact_result_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____fact_result_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&ll_backend__fact_table_compile_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____fact_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));

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
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Float ArgX1_6 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 0)));
              MR_Float ArgY1_7 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, 0)));

              mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_9 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____fact_arg_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float ArgX1_5 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, 0)));
          MR_Float ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 0)));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
ll_backend__fact_table_compile__fact_table_compile_facts_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word ModuleInfo_15,
  MR_String FactTableFileName_16,
  MR_Word Context_17,
  MR_Word GenInfo_18,
  MR_String * HeaderCode_19,
  MR_Integer * PrimaryProcId_20,
  MR_Word STATE_VARIABLE_PredInfo_0_43,
  MR_Word * STATE_VARIABLE_PredInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  MR_Word FactTableFileResult_24;

  mercury__io__open_input_4_p_0(FactTableFileName_16, &FactTableFileResult_24);
  if (((MR_tag((MR_Word) FactTableFileResult_24)) == (MR_Integer) 1))
  {
    MR_Word PredMarkers0_41;
    MR_Word PredMarkers_42;
    MR_Word Var_69;
    MR_Word Error_73 = ((MR_Word) ((MR_hl_field(1, FactTableFileResult_24, 0))));

    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_43, &PredMarkers0_41);
    hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 31, PredMarkers0_41, &PredMarkers_42);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(PredMarkers_42, STATE_VARIABLE_PredInfo_0_43, STATE_VARIABLE_PredInfo_44);
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (Context_17));
    }
    ll_backend__fact_table_compile__add_file_open_error_8_p_0(Var_69, FactTableFileName_16, (MR_String) "input", Error_73, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
    *HeaderCode_19 = (MR_String) "";
    *PrimaryProcId_20 = hlds__pred_proc_id__invalid_proc_id_0_f_0();
  }
  else
  {
    MR_Word FactTableFileStream_25 = ((MR_Word) ((MR_hl_field(0, FactTableFileResult_24, 0))));
    MR_Word Globals_26;
    MR_Word Dirs_27;
    MR_String OutputFileName_29;
    MR_Word OpenResult_31;
    MR_Word _DirsProposed_28;
    MR_String _OutFileNameProposed_30;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_15, &Globals_26);
    parse_tree__file_names__fact_table_file_name_return_dirs_8_p_0(Globals_26, (MR_String) "predicate \140ll_backend.fact_table_compile.fact_table_compile_facts\'/13", (MR_Word) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[4])), FactTableFileName_16, &Dirs_27, &_DirsProposed_28, &OutputFileName_29, &_OutFileNameProposed_30);
    parse_tree__file_names__create_any_dirs_on_path_3_p_0(Dirs_27);
    mercury__io__open_output_4_p_0(OutputFileName_29, &OpenResult_31);
    if (((MR_tag((MR_Word) OpenResult_31)) == (MR_Integer) 1))
    {
      MR_Word Error_40 = ((MR_Word) ((MR_hl_field(1, OpenResult_31, 0))));
      MR_Word Var_62;

      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (Context_17));
      }
      ll_backend__fact_table_compile__add_file_open_error_8_p_0(Var_62, FactTableFileName_16, (MR_String) "output", Error_40, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
      *HeaderCode_19 = (MR_String) "";
      *PrimaryProcId_20 = hlds__pred_proc_id__invalid_proc_id_0_f_0();
      *STATE_VARIABLE_PredInfo_44 = STATE_VARIABLE_PredInfo_0_43;
    }
    else
    {
      MR_Word OutputStream_32 = ((MR_Word) ((MR_hl_field(0, OpenResult_31, 0))));
      MR_Word ModuleName_33;
      MR_String PredName_34;
      MR_Word PredSymName_35;
      MR_Integer FactTableArraySize_36;
      MR_Word MaybeProgressStream_37;
      MR_Word MaybeDataFileName_38;
      MR_Word STATE_VARIABLE_Specs_1_57;
      MR_Word Globals_74;
      MR_Word VeryVerbose_75;

      hlds__hlds_pred__pred_info_get_module_name_2_p_0(STATE_VARIABLE_PredInfo_0_43, &ModuleName_33);
      hlds__hlds_pred__pred_info_get_name_2_p_0(STATE_VARIABLE_PredInfo_0_43, &PredName_34);
      {
        PredSymName_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PredSymName_35, 0) = ((MR_Box) (ModuleName_33));
        MR_hl_field(1, PredSymName_35, 1) = ((MR_Box) (PredName_34));
      }
      libs__globals__lookup_int_option_3_p_0(Globals_26, (MR_Integer) 666, &FactTableArraySize_36);
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_15, &Globals_74);
      libs__globals__lookup_bool_option_3_p_0(Globals_74, (MR_Integer) 132, &VeryVerbose_75);
      switch (VeryVerbose_75) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeProgressStream_37 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MaybeProgressStream_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeProgressStream_37, 0) = ((MR_Box) (ProgressStream_14));
          }
          break;
      }
      ll_backend__fact_table_compile__compile_fact_table_in_file_17_p_0(MaybeProgressStream_37, FactTableFileStream_25, FactTableFileName_16, OutputStream_32, FactTableArraySize_36, ModuleInfo_15, PredSymName_35, GenInfo_18, HeaderCode_19, PrimaryProcId_20, &MaybeDataFileName_38, STATE_VARIABLE_PredInfo_0_43, STATE_VARIABLE_PredInfo_44, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_1_57);
      mercury__io__close_output_3_p_0(OutputStream_32);
      if ((MaybeDataFileName_38 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_1_57;
      else
      {
        MR_String DataFileName_39 = ((MR_String) ((MR_hl_field(1, MaybeDataFileName_38, 0))));

        ll_backend__fact_table_compile__append_data_table_7_p_0(MaybeProgressStream_37, OutputFileName_29, DataFileName_39, STATE_VARIABLE_Specs_1_57, STATE_VARIABLE_Specs_46);
      }
    }
    mercury__io__close_input_3_p_0(FactTableFileStream_25);
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__append_data_table_7_p_0(
  MR_Word MaybeProgressStream_8,
  MR_String OutputFileName_9,
  MR_String DataFileName_10,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_String Command_13;
  MR_Word Result_14;
  MR_String Var_24;
  MR_Word STATE_VARIABLE_Specs_1_52;
  MR_String Var_57;
  MR_String Var_58;

  Var_57 = mercury__string__f_43_43_2_f_0((MR_String) " >>", OutputFileName_9);
  Var_58 = mercury__string__f_43_43_2_f_0(DataFileName_10, Var_57);
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "cat ", Var_58);
  libs__system_cmds__make_command_string_3_p_0(Var_24, (MR_Integer) 0, &Command_13);
  if ((MaybeProgressStream_8 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__call_system__call_system_4_p_0(Command_13, &Result_14);
  else
  {
    MR_Word ProgressStream_15 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_8, 0))));

    mercury__io__write_string_4_p_0(ProgressStream_15, (MR_String) "% Invoking system command \140");
    mercury__io__write_string_4_p_0(ProgressStream_15, Command_13);
    mercury__io__write_string_4_p_0(ProgressStream_15, (MR_String) "\' ...");
    mercury__io__call_system__call_system_4_p_0(Command_13, &Result_14);
    mercury__io__write_string_4_p_0(ProgressStream_15, (MR_String) "done.\n");
  }
  if (((MR_tag((MR_Word) Result_14)) == (MR_Integer) 1))
  {
    MR_Word ErrorCode_19 = ((MR_Word) ((MR_hl_field(1, Result_14, 0))));
    MR_String ProgName_64;
    MR_String ErrorMsg_65;
    MR_Word Pieces_66;
    MR_Word Spec_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_94;
    MR_Word Var_95;

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_64);
    mercury__io__error_message_2_p_0(ErrorCode_19, &ErrorMsg_65);
    {
      Var_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_69, 0) = ((MR_Box) (ProgName_64));
    }
    Var_71 = (MR_Word) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[33]));
    {
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_84, 1) = ((MR_Box) (ErrorMsg_65));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[100])));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[103])));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[101])));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
    }
    {
      Pieces_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_66, 0) = ((MR_Box) (Var_69));
      MR_hl_field(1, Pieces_66, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_95, 0) = ((MR_Box) (Pieces_66));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_90, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Var_90, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_90, 4) = ((MR_Box) (Var_94));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_67, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.add_call_system_error\'/6"));
      MR_hl_field(2, Spec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_67, 2) = ((MR_Box) ((MR_Unsigned) 80U));
      MR_hl_field(2, Spec_67, 3) = ((MR_Box) (Var_89));
    }
    {
      STATE_VARIABLE_Specs_1_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_52, 0) = ((MR_Box) (Spec_67));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_52, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
  }
  else
  {
    MR_Integer ExitStatus_16 = ((MR_Integer) ((MR_hl_field(0, Result_14, 0))));

    succeeded = (ExitStatus_16 == (MR_Integer) 0);
    if (succeeded)
      STATE_VARIABLE_Specs_1_52 = STATE_VARIABLE_Specs_0_20;
    else
      {
        STATE_VARIABLE_Specs_1_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_52, 0) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_5[0])));
        MR_hl_field(1, STATE_VARIABLE_Specs_1_52, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
      }
  }
  ll_backend__fact_table_compile__delete_temporary_file_5_p_0(DataFileName_10, STATE_VARIABLE_Specs_1_52, STATE_VARIABLE_Specs_21);
}

static void MR_CALL 
ll_backend__fact_table_compile__compile_fact_table_in_file_17_p_0(
  MR_Word MaybeProgressStream_18,
  MR_Word FileStream_19,
  MR_String FileName_20,
  MR_Word OutputStream_21,
  MR_Integer FactTableArraySize_22,
  MR_Word ModuleInfo_23,
  MR_Word PredSymName_24,
  MR_Word GenInfo_25,
  MR_String * HeaderCode_26,
  MR_Integer * PrimaryProcId_27,
  MR_Word * MaybeDataFileName_28,
  MR_Word STATE_VARIABLE_PredInfo_0_70,
  MR_Word * STATE_VARIABLE_PredInfo_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73)
{
  MR_Word WriteHashTables_32;
  MR_Word WriteDataTable_33;
  MR_Word FactArgInfos_34;
  MR_String HeaderCode0_35;
  MR_String StructName_36;
  MR_Word FactTableProcMap_37;
  MR_Word MaybeAllInProcId_38;
  MR_Word InOutProcIds_39;
  MR_Word ProcsToCheck_41;
  MR_Word ProcStreams_42;
  MR_Word OpenSpecs_43;
  MR_Word WriteDataAfterSorting_45;
  MR_Integer NumFactArgInfos_48;
  MR_Word CompileSpecs_52;
  MR_Integer NumFacts_53;
  MR_String HeaderCode2_55;
  MR_Word ProcFiles_56;
  MR_Word OpenCompileSpecs_57;
  MR_Word STATE_VARIABLE_PredInfo_1_76;
  MR_String Var_79;
  MR_Word ProcTable0_114;
  MR_Word ProcIds_115;
  MR_Word ProcTable_116;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_70, &ProcTable0_114);
  ProcIds_115 = hlds__hlds_pred__pred_info_all_proc_ids_1_f_0(STATE_VARIABLE_PredInfo_0_70);
  ll_backend__fact_table_compile__infer_procs_determinism_pass_1_8_p_0(GenInfo_25, ProcIds_115, ProcTable0_114, &ProcTable_116, (MR_Integer) 0, &WriteHashTables_32, (MR_Integer) 0, &WriteDataTable_33);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_116, STATE_VARIABLE_PredInfo_0_70, &STATE_VARIABLE_PredInfo_1_76);
  FactArgInfos_34 = ((MR_Word) ((MR_hl_field(0, GenInfo_25, 0))));
  FactTableProcMap_37 = ((MR_Word) ((MR_hl_field(0, GenInfo_25, 1))));
  MaybeAllInProcId_38 = ((MR_Word) ((MR_hl_field(0, GenInfo_25, 2))));
  InOutProcIds_39 = ((MR_Word) ((MR_hl_field(0, GenInfo_25, 3))));
  ll_backend__fact_table_compile__create_fact_table_header_4_p_0(PredSymName_24, FactArgInfos_34, &HeaderCode0_35, &StructName_36);
  if ((MaybeAllInProcId_38 == (MR_Word) ((MR_Unsigned) 0U)))
    ProcsToCheck_41 = InOutProcIds_39;
  else
  {
    MR_Integer AllInProcId_40 = ((MR_Integer) ((MR_hl_field(1, MaybeAllInProcId_38, 0))));
    MR_Word Var_77;

    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (AllInProcId_40));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ProcsToCheck_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), InOutProcIds_39, Var_77);
  }
  Var_79 = ll_backend__fact_table_compile__fact_table_file_header_1_f_0(FileName_20);
  mercury__io__write_string_4_p_0(OutputStream_21, Var_79);
  mercury__io__write_string_4_p_0(OutputStream_21, HeaderCode0_35);
  ll_backend__fact_table_compile__open_sort_files_7_p_0(FactTableProcMap_37, ProcsToCheck_41, &ProcStreams_42, (MR_Word) ((MR_Unsigned) 0U), &OpenSpecs_43);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0), FactArgInfos_34, &NumFactArgInfos_48);
  switch (WriteDataTable_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        WriteDataAfterSorting_45 = (MR_Integer) 0;
        ll_backend__fact_table_compile__read_in_and_compile_facts_15_p_0(FileStream_19, FileName_20, MaybeProgressStream_18, FactTableArraySize_22, STATE_VARIABLE_PredInfo_1_76, NumFactArgInfos_48, FactArgInfos_34, ProcStreams_42, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &NumFacts_53, (MR_Word) ((MR_Unsigned) 0U), &CompileSpecs_52);
        HeaderCode2_55 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      if ((ProcsToCheck_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_84;
        MR_Word MaybeOutput_124;

        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (OutputStream_21));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) (StructName_36));
        }
        {
          MaybeOutput_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOutput_124, 0) = ((MR_Box) (Var_84));
        }
        ll_backend__fact_table_compile__write_new_data_array_opening_brace_5_p_0(OutputStream_21, StructName_36, (MR_Integer) 0);
        WriteDataAfterSorting_45 = (MR_Integer) 0;
        ll_backend__fact_table_compile__read_in_and_compile_facts_15_p_0(FileStream_19, FileName_20, MaybeProgressStream_18, FactTableArraySize_22, STATE_VARIABLE_PredInfo_1_76, NumFactArgInfos_48, FactArgInfos_34, ProcStreams_42, MaybeOutput_124, (MR_Integer) 0, &NumFacts_53, (MR_Word) ((MR_Unsigned) 0U), &CompileSpecs_52);
        mercury__io__write_string_4_p_0(OutputStream_21, (MR_String) "};\n\n");
        ll_backend__fact_table_compile__write_fact_table_pointer_array_7_p_0(OutputStream_21, FactTableArraySize_22, StructName_36, NumFacts_53, &HeaderCode2_55);
      }
      else
      {
        WriteDataAfterSorting_45 = (MR_Integer) 1;
        ll_backend__fact_table_compile__read_in_and_compile_facts_15_p_0(FileStream_19, FileName_20, MaybeProgressStream_18, FactTableArraySize_22, STATE_VARIABLE_PredInfo_1_76, NumFactArgInfos_48, FactArgInfos_34, ProcStreams_42, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &NumFacts_53, (MR_Word) ((MR_Unsigned) 0U), &CompileSpecs_52);
        HeaderCode2_55 = (MR_String) "";
      }
      break;
  }
  ll_backend__fact_table_compile__close_sort_files_4_p_0(ProcStreams_42, &ProcFiles_56);
  OpenCompileSpecs_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OpenSpecs_43, CompileSpecs_52);
  if ((OpenCompileSpecs_57 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProcTable0_58;
    MR_Word ProcTable_59;
    MR_Word DataFileNameResult_60;
    MR_Word STATE_VARIABLE_Specs_1_91;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_1_76, &ProcTable0_58);
    ll_backend__fact_table_compile__infer_determinism_pass_2_9_p_0(MaybeProgressStream_18, GenInfo_25, ProcFiles_56, ProcTable0_58, &ProcTable_59, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_1_91);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_59, STATE_VARIABLE_PredInfo_1_76, STATE_VARIABLE_PredInfo_71);
    mercury__io__file__make_temp_file_3_p_0(&DataFileNameResult_60);
    if (((MR_tag((MR_Word) DataFileNameResult_60)) == (MR_Integer) 1))
    {
      MR_Word Error_64 = ((MR_Word) ((MR_hl_field(1, DataFileNameResult_60, 0))));
      MR_Word TmpPieces_65;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_String Var_104;

      Var_104 = mercury__io__error_message_1_f_0(Error_64);
      {
        Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_103, 1) = ((MR_Box) (Var_104));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])));
      }
      {
        TmpPieces_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TmpPieces_65, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[5])));
        MR_hl_field(1, TmpPieces_65, 1) = ((MR_Box) (Var_102));
      }
      ll_backend__fact_table_compile__add_error_pieces_3_p_0(TmpPieces_65, STATE_VARIABLE_Specs_1_91, STATE_VARIABLE_Specs_73);
      *HeaderCode_26 = HeaderCode0_35;
      *PrimaryProcId_27 = hlds__pred_proc_id__invalid_proc_id_0_f_0();
      *MaybeDataFileName_28 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String DataFileName_61 = ((MR_String) ((MR_hl_field(0, DataFileNameResult_60, 0))));
      MR_String HeaderCode1_62;
      MR_String HeaderCode3_63;
      MR_String Var_98;
      MR_String Var_99;

      ll_backend__fact_table_compile__write_fact_table_arrays_18_p_0(MaybeProgressStream_18, OutputStream_21, FactTableArraySize_22, ModuleInfo_23, ProcFiles_56, DataFileName_61, FactTableProcMap_37, StructName_36, NumFacts_53, FactArgInfos_34, WriteHashTables_32, WriteDataAfterSorting_45, &HeaderCode1_62, PrimaryProcId_27, STATE_VARIABLE_Specs_1_91, STATE_VARIABLE_Specs_73);
      ll_backend__fact_table_compile__write_fact_table_numfacts_6_p_0(OutputStream_21, PredSymName_24, NumFacts_53, &HeaderCode3_63);
      Var_99 = mercury__string__f_43_43_2_f_0(HeaderCode2_55, HeaderCode3_63);
      Var_98 = mercury__string__f_43_43_2_f_0(HeaderCode1_62, Var_99);
      *HeaderCode_26 = mercury__string__f_43_43_2_f_0(HeaderCode0_35, Var_98);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDataFileName_28 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DataFileName_61));
      }
    }
  }
  else
  {
    MR_Word PredMarkers0_68;
    MR_Word PredMarkers_69;

    *STATE_VARIABLE_Specs_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), OpenCompileSpecs_57, STATE_VARIABLE_Specs_0_72);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_1_76, &PredMarkers0_68);
    hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 31, PredMarkers0_68, &PredMarkers_69);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(PredMarkers_69, STATE_VARIABLE_PredInfo_1_76, STATE_VARIABLE_PredInfo_71);
    *HeaderCode_26 = HeaderCode0_35;
    *PrimaryProcId_27 = hlds__pred_proc_id__invalid_proc_id_0_f_0();
    *MaybeDataFileName_28 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__add_error_pieces_3_p_0(
  MR_Word Pieces_4,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  MR_Word Spec_6;

  {
    Spec_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_6, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.add_error_pieces\'/3"));
    MR_hl_field(1, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 80U));
    MR_hl_field(1, Spec_6, 3) = ((MR_Box) (Pieces_4));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_6));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_7));
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_numfacts_6_p_0(
  MR_Word OutputStream_7,
  MR_Word PredSymName_8,
  MR_Integer NumFacts_9,
  MR_String * HeaderCode_10)
{
  MR_String PredSymNameStr_12;
  MR_String Var_32;
  MR_String Var_41;

  PredSymNameStr_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredSymName_8);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "const MR_Integer mercury__");
  mercury__io__write_string_4_p_0(OutputStream_7, PredSymNameStr_12);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "_fact_table_num_facts = ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), NumFacts_9, &Var_32);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_32);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ";\n\n");
  Var_41 = mercury__string__f_43_43_2_f_0(PredSymNameStr_12, (MR_String) "_fact_table_num_facts;\n");
  *HeaderCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "extern const MR_Integer mercury__", Var_41);
}

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_arrays_18_p_0(
  MR_Word MaybeProgressStream_19,
  MR_Word OutputStream_20,
  MR_Integer FactTableArraySize_21,
  MR_Word ModuleInfo_22,
  MR_Word ProcFiles_23,
  MR_String DataFileName_24,
  MR_Word FactTableProcMap_25,
  MR_String StructName_26,
  MR_Integer NumFacts_27,
  MR_Word FactArgInfos_28,
  MR_Word WriteHashTables_29,
  MR_Word WriteDataTable_30,
  MR_String * HeaderCode_31,
  MR_Integer * PrimaryProcId_32,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  if ((ProcFiles_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeaderCode_31 = (MR_String) "";
    *PrimaryProcId_32 = hlds__pred_proc_id__initial_proc_id_0_f_0();
    *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
  }
  else
  {
    MR_String FileName_35;
    MR_Word TailProcFiles_36 = ((MR_Word) ((MR_hl_field(1, ProcFiles_23, 1))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, ProcFiles_23, 0))));

    *PrimaryProcId_32 = ((MR_Integer) ((MR_hl_field(0, Var_48, 0))));
    FileName_35 = ((MR_String) ((MR_hl_field(0, Var_48, 1))));
    switch (WriteHashTables_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeaderCode_31 = (MR_String) "";
          *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CreateFactMap_37;
          MR_Word PrimaryResult_40;
          MR_Word STATE_VARIABLE_Specs_1_49;

          if ((TailProcFiles_36 == (MR_Word) ((MR_Unsigned) 0U)))
            CreateFactMap_37 = (MR_Integer) 0;
          else
            CreateFactMap_37 = (MR_Integer) 1;
          ll_backend__fact_table_compile__write_primary_hash_table_18_p_0(MaybeProgressStream_19, OutputStream_20, FactTableArraySize_21, ModuleInfo_22, FactTableProcMap_25, *PrimaryProcId_32, FileName_35, DataFileName_24, StructName_26, FactArgInfos_28, WriteDataTable_30, NumFacts_27, CreateFactMap_37, &PrimaryResult_40, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_1_49);
          if ((PrimaryResult_40 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *HeaderCode_31 = (MR_String) "";
            *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_1_49;
          }
          else
          {
            MR_Word FactMap_41 = ((MR_Word) ((MR_hl_field(1, PrimaryResult_40, 0))));
            MR_String PrimaryHeaderCode_42 = ((MR_String) ((MR_hl_field(1, PrimaryResult_40, 1))));
            MR_String SecondaryHeadCode_43;

            ll_backend__fact_table_compile__write_secondary_hash_tables_15_p_0(MaybeProgressStream_19, OutputStream_20, FactTableArraySize_21, ModuleInfo_22, FactTableProcMap_25, StructName_26, FactArgInfos_28, FactMap_41, TailProcFiles_36, (MR_String) "", &SecondaryHeadCode_43, STATE_VARIABLE_Specs_1_49, STATE_VARIABLE_Specs_45);
            *HeaderCode_31 = mercury__string__f_43_43_2_f_0(PrimaryHeaderCode_42, SecondaryHeadCode_43);
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ll_backend__fact_table_compile__write_secondary_hash_tables_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_86;

  conv1_LambdaHeadVar__2_86 = ll_backend__fact_table_compile__IntroducedFrom__func__write_secondary_hash_tables__1442__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_86));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table_compile__write_secondary_hash_tables_15_p_0(
  MR_Word MaybeProgressStream_1,
  MR_Word OutputStream_2,
  MR_Integer FactTableArraySize_3,
  MR_Word ModuleInfo_4,
  MR_Word FactTableProcMap_5,
  MR_String StructName_6,
  MR_Word FactArgInfos_7,
  MR_Word FactMap_8,
  MR_Word HeadVar__9_9,
  MR_String STATE_VARIABLE_HeaderCode_0_10,
  MR_String * STATE_VARIABLE_HeaderCode_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_HeaderCode_11 = STATE_VARIABLE_HeaderCode_0_10;
    }
    else
    {
      MR_Integer ProcId_41;
      MR_String FileName_42;
      MR_Word ProcFiles_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 1))));
      MR_Word FileResult_47;
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 0))));

      ProcId_41 = ((MR_Integer) ((MR_hl_field(0, Var_71, 0))));
      FileName_42 = ((MR_String) ((MR_hl_field(0, Var_71, 1))));
      mercury__io__open_input_4_p_0(FileName_42, &FileResult_47);
      if (((MR_tag((MR_Word) FileResult_47)) == (MR_Integer) 1))
      {
        MR_Word Error_64 = ((MR_Word) ((MR_hl_field(1, FileResult_47, 0))));

        ll_backend__fact_table_compile__add_file_open_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), FileName_42, (MR_String) "input", Error_64, STATE_VARIABLE_Specs_0_12, STATE_VARIABLE_Specs_13);
        *STATE_VARIABLE_HeaderCode_11 = STATE_VARIABLE_HeaderCode_0_10;
      }
      else
      {
        MR_Word FileStream_48 = ((MR_Word) ((MR_hl_field(0, FileResult_47, 0))));
        MR_Integer ProcIdInt_49;
        MR_String HashTableName_50;
        MR_String StructDeclCode_51;
        MR_Word FactTableProcInfo_52;
        MR_Word FactTableVars_53;
        MR_Word FactTableModes_56;
        MR_Word MaybeFirstFact_61;
        MR_String STATE_VARIABLE_HeaderCode_1_83;
        MR_Word STATE_VARIABLE_Specs_1_87;
        MR_String Var_118;
        MR_String Var_125;
        MR_String Var_127;
        MR_String Var_129;
        MR_Box conv0_FactTableProcInfo_52;

        hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_41, &ProcIdInt_49);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), ProcIdInt_49, &Var_118);
        Var_125 = mercury__string__f_43_43_2_f_0(Var_118, (MR_String) "_");
        Var_127 = mercury__string__f_43_43_2_f_0((MR_String) "_hash_table_", Var_125);
        HashTableName_50 = mercury__string__f_43_43_2_f_0(StructName_6, Var_127);
        Var_129 = mercury__string__f_43_43_2_f_0(HashTableName_50, (MR_String) "0;\n");
        StructDeclCode_51 = mercury__string__f_43_43_2_f_0((MR_String) "extern struct MR_fact_table_hash_table_i ", Var_129);
        STATE_VARIABLE_HeaderCode_1_83 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_HeaderCode_0_10, StructDeclCode_51);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0), FactTableProcMap_5, ((MR_Box) (ProcId_41)), &conv0_FactTableProcInfo_52);
        FactTableProcInfo_52 = ((MR_Word) (conv0_FactTableProcInfo_52));
        FactTableVars_53 = ((MR_Word) ((MR_hl_field(0, FactTableProcInfo_52, 0))));
        FactTableModes_56 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0), (MR_Word) (&ll_backend__fact_table_compile_scalar_common_2[6]), FactTableVars_53);
        ll_backend__fact_table_compile__read_sort_file_line_9_p_0(FileStream_48, FileName_42, FactArgInfos_7, FactTableModes_56, &MaybeFirstFact_61, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_1_87);
        if ((MaybeFirstFact_61 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__close_input_3_p_0(FileStream_48);
          *STATE_VARIABLE_HeaderCode_11 = STATE_VARIABLE_HeaderCode_1_83;
          *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_1_87;
        }
        else
        {
          MR_Word FirstFact_62 = ((MR_Word) ((MR_hl_field(1, MaybeFirstFact_61, 0))));
          MR_Word STATE_VARIABLE_Specs_2_95;
          MR_Word STATE_VARIABLE_Specs_3_98;
          MR_Word Var_63;
          MR_Word next_value_of_HeadVar__9_9;
          MR_String next_value_of_STATE_VARIABLE_HeaderCode_0_10;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

          ll_backend__fact_table_compile__build_hash_table_23_p_0(MaybeProgressStream_1, FileStream_48, FileName_42, OutputStream_2, (MR_Word) ((MR_Unsigned) 0U), FactTableArraySize_3, ModuleInfo_4, (MR_Integer) 0, StructName_6, FactArgInfos_7, FactTableModes_56, (MR_Integer) 0, HashTableName_50, (MR_Integer) 0, FirstFact_62, (MR_Integer) 0, (MR_Integer) 0, FactMap_8, &Var_63, STATE_VARIABLE_Specs_1_87, &STATE_VARIABLE_Specs_2_95);
          mercury__io__close_input_3_p_0(FileStream_48);
          ll_backend__fact_table_compile__delete_temporary_file_5_p_0(FileName_42, STATE_VARIABLE_Specs_2_95, &STATE_VARIABLE_Specs_3_98);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__9_9 = ProcFiles_43;
          next_value_of_STATE_VARIABLE_HeaderCode_0_10 = STATE_VARIABLE_HeaderCode_1_83;
          next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_3_98;
          HeadVar__9_9 = next_value_of_HeadVar__9_9;
          STATE_VARIABLE_HeaderCode_0_10 = next_value_of_STATE_VARIABLE_HeaderCode_0_10;
          STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
          continue;
        }
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
ll_backend__fact_table_compile__write_primary_hash_table_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_77;

  conv1_LambdaHeadVar__2_77 = ll_backend__fact_table_compile__IntroducedFrom__func__write_primary_hash_table__1361__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_77));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table_compile__write_primary_hash_table_18_p_0(
  MR_Word MaybeProgressStream_19,
  MR_Word OutputStream_20,
  MR_Integer FactTableArraySize_21,
  MR_Word ModuleInfo_22,
  MR_Word FactTableProcMap_23,
  MR_Integer ProcId_24,
  MR_String FileName_25,
  MR_String DataFileName_26,
  MR_String StructName_27,
  MR_Word FactArgInfos_28,
  MR_Word WriteDataTable_29,
  MR_Integer NumFacts_30,
  MR_Word CreateFactMap_31,
  MR_Word * Result_32,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  MR_Word FileResult_35;

  mercury__io__open_input_4_p_0(FileName_25, &FileResult_35);
  if (((MR_tag((MR_Word) FileResult_35)) == (MR_Integer) 1))
  {
    MR_Word Error_111 = ((MR_Word) ((MR_hl_field(1, FileResult_35, 0))));

    ll_backend__fact_table_compile__add_file_open_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), FileName_25, (MR_String) "input", Error_111, STATE_VARIABLE_Specs_0_59, STATE_VARIABLE_Specs_60);
    *Result_32 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word FileStream_36 = ((MR_Word) ((MR_hl_field(0, FileResult_35, 0))));
    MR_Word STATE_VARIABLE_Specs_2_88;

    switch (WriteDataTable_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Result_32 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Specs_2_88 = STATE_VARIABLE_Specs_0_59;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OpenResult_37;

          mercury__io__open_output_4_p_0(DataFileName_26, &OpenResult_37);
          if (((MR_tag((MR_Word) OpenResult_37)) == (MR_Integer) 1))
          {
            MR_Word Error_58 = ((MR_Word) ((MR_hl_field(1, OpenResult_37, 0))));

            ll_backend__fact_table_compile__add_file_open_error_8_p_0((MR_Word) ((MR_Unsigned) 0U), DataFileName_26, (MR_String) "output", Error_58, STATE_VARIABLE_Specs_0_59, &STATE_VARIABLE_Specs_2_88);
            *Result_32 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word DataStream_38 = ((MR_Word) ((MR_hl_field(0, OpenResult_37, 0))));
            MR_Integer ProcIdInt_39;
            MR_String HashTableName_40;
            MR_String HeaderCode0_41;
            MR_Word FactTableProcInfo_42;
            MR_Word FactTableVars_43;
            MR_Word FactTableModes_46;
            MR_Word MaybeFirstFact_51;
            MR_Word MaybeFactMap_54;
            MR_String HeaderCode1_55;
            MR_Word STATE_VARIABLE_Specs_1_78;
            MR_String Var_118;
            MR_String Var_125;
            MR_String Var_127;
            MR_String Var_129;
            MR_Box conv0_FactTableProcInfo_42;

            hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_24, &ProcIdInt_39);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), ProcIdInt_39, &Var_118);
            Var_125 = mercury__string__f_43_43_2_f_0(Var_118, (MR_String) "_");
            Var_127 = mercury__string__f_43_43_2_f_0((MR_String) "_hash_table_", Var_125);
            HashTableName_40 = mercury__string__f_43_43_2_f_0(StructName_27, Var_127);
            Var_129 = mercury__string__f_43_43_2_f_0(HashTableName_40, (MR_String) "0;\n");
            HeaderCode0_41 = mercury__string__f_43_43_2_f_0((MR_String) "extern struct MR_fact_table_hash_table_i ", Var_129);
            mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0), FactTableProcMap_23, ((MR_Box) (ProcId_24)), &conv0_FactTableProcInfo_42);
            FactTableProcInfo_42 = ((MR_Word) (conv0_FactTableProcInfo_42));
            FactTableVars_43 = ((MR_Word) ((MR_hl_field(0, FactTableProcInfo_42, 0))));
            FactTableModes_46 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0), (MR_Word) (&ll_backend__fact_table_compile_scalar_common_2[5]), FactTableVars_43);
            ll_backend__fact_table_compile__read_sort_file_line_9_p_0(FileStream_36, FileName_25, FactArgInfos_28, FactTableModes_46, &MaybeFirstFact_51, STATE_VARIABLE_Specs_0_59, &STATE_VARIABLE_Specs_1_78);
            ll_backend__fact_table_compile__write_new_data_array_opening_brace_5_p_0(DataStream_38, StructName_27, (MR_Integer) 0);
            if ((MaybeFirstFact_51 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeFactMap_54 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Specs_2_88 = STATE_VARIABLE_Specs_1_78;
            }
            else
            {
              MR_Word FirstFact_52 = ((MR_Word) ((MR_hl_field(1, MaybeFirstFact_51, 0))));
              MR_Word FactMap1_53;
              MR_Word Var_82;
              MR_Word Var_87;

              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (DataStream_38));
              }
              Var_87 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
              ll_backend__fact_table_compile__build_hash_table_23_p_0(MaybeProgressStream_19, FileStream_36, FileName_25, OutputStream_20, Var_82, FactTableArraySize_21, ModuleInfo_22, (MR_Integer) 1, StructName_27, FactArgInfos_28, FactTableModes_46, (MR_Integer) 0, HashTableName_40, (MR_Integer) 0, FirstFact_52, (MR_Integer) 0, CreateFactMap_31, Var_87, &FactMap1_53, STATE_VARIABLE_Specs_1_78, &STATE_VARIABLE_Specs_2_88);
              {
                MaybeFactMap_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeFactMap_54, 0) = ((MR_Box) (FactMap1_53));
              }
            }
            mercury__io__write_string_4_p_0(DataStream_38, (MR_String) "};\n\n");
            ll_backend__fact_table_compile__write_fact_table_pointer_array_7_p_0(DataStream_38, FactTableArraySize_21, StructName_27, NumFacts_30, &HeaderCode1_55);
            mercury__io__close_output_3_p_0(DataStream_38);
            if ((MaybeFactMap_54 == (MR_Word) ((MR_Unsigned) 0U)))
              *Result_32 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word FactMap_56 = ((MR_Word) ((MR_hl_field(1, MaybeFactMap_54, 0))));
              MR_String HeaderCode_57;

              HeaderCode_57 = mercury__string__f_43_43_2_f_0(HeaderCode0_41, HeaderCode1_55);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Result_32 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (FactMap_56));
                MR_hl_field(1, base, 1) = ((MR_Box) (HeaderCode_57));
              }
            }
          }
        }
        break;
    }
    mercury__io__close_input_3_p_0(FileStream_36);
    ll_backend__fact_table_compile__delete_temporary_file_5_p_0(FileName_25, STATE_VARIABLE_Specs_2_88, STATE_VARIABLE_Specs_60);
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__add_file_open_error_8_p_0(
  MR_Word MaybeContext_9,
  MR_String FileName_10,
  MR_String InOrOut_11,
  MR_Word Error_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_String ProgName_15;
  MR_String ErrorMsg_16;
  MR_Word Pieces_17;
  MR_Word Spec_18;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_57;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_15);
  mercury__io__error_message_2_p_0(Error_12, &ErrorMsg_16);
  {
    Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_25, 0) = ((MR_Box) (ProgName_15));
  }
  Var_27 = (MR_Word) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[33]));
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (FileName_10));
  }
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (InOrOut_11));
  }
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (ErrorMsg_16));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[13])));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[102])));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Pieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_17, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Pieces_17, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (Pieces_17));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_53, 1) = ((MR_Box) (MaybeContext_9));
    MR_hl_field(3, Var_53, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_53, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_53, 4) = ((MR_Box) (Var_56));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.add_file_open_error\'/8"));
    MR_hl_field(2, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 80U));
    MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_52));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_20 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__delete_temporary_file_5_p_0(
  MR_String FileName_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word Result_9;

  mercury__io__file__remove_file_4_p_0(FileName_6, &Result_9);
  if ((Result_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
  else
  {
    MR_Word ErrorCode_10 = ((MR_Word) ((MR_hl_field(1, Result_9, 0))));
    MR_String ErrorMsg_11;
    MR_String ProgName_12;
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_52;
    MR_Word Var_53;

    mercury__io__error_message_2_p_0(ErrorCode_10, &ErrorMsg_11);
    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_12);
    {
      Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_22, 0) = ((MR_Box) (ProgName_12));
    }
    Var_24 = (MR_Word) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[33]));
    {
      Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_30, 1) = ((MR_Box) (FileName_6));
    }
    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (ErrorMsg_11));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[100])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[99])));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (Var_22));
      MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_48, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Var_48, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_48, 4) = ((MR_Box) (Var_52));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.delete_temporary_file\'/5"));
      MR_hl_field(2, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 80U));
      MR_hl_field(2, Spec_14, 3) = ((MR_Box) (Var_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_pointer_array_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer FactTableArraySize_9,
  MR_String StructName_10,
  MR_Integer NumFacts_11,
  MR_String * HeaderCode_12)
{
  MR_String PointerArrayName_14;
  MR_String Var_24;
  MR_String Var_35;
  MR_String Var_37;
  MR_String Var_38;

  Var_35 = mercury__string__f_43_43_2_f_0(StructName_10, (MR_String) "[]");
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "_struct *", Var_35);
  Var_38 = mercury__string__f_43_43_2_f_0(StructName_10, Var_37);
  PointerArrayName_14 = mercury__string__f_43_43_2_f_0((MR_String) "const struct ", Var_38);
  Var_24 = mercury__string__f_43_43_2_f_0(PointerArrayName_14, (MR_String) ";\n");
  *HeaderCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "extern ", Var_24);
  mercury__io__write_string_4_p_0(OutputStream_8, PointerArrayName_14);
  mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) " = {\n");
  ll_backend__fact_table_compile__write_fact_table_pointer_array_loop_7_p_0(OutputStream_8, FactTableArraySize_9, StructName_10, (MR_Integer) 0, NumFacts_11);
  mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_pointer_array_loop_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer FactTableArraySize_9,
  MR_String StructName_10,
  MR_Integer CurFact_11,
  MR_Integer NumFacts_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurFact_11 >= NumFacts_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer NextFact_14;
      MR_String Var_28;
      MR_Integer next_value_of_CurFact_11;

      mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "\t");
      mercury__io__write_string_4_p_0(OutputStream_8, StructName_10);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), CurFact_11, &Var_28);
      mercury__io__write_string_4_p_0(OutputStream_8, Var_28);
      mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) ",\n");
      NextFact_14 = (MR_Integer) ((MR_Unsigned) CurFact_11 + (MR_Unsigned) FactTableArraySize_9);
      // direct tailcall eliminated
      ;
      next_value_of_CurFact_11 = NextFact_14;
      CurFact_11 = next_value_of_CurFact_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__build_hash_table_23_p_0(
  MR_Word MaybeProgressStream_24,
  MR_Word InputStream_25,
  MR_String InputFileName_26,
  MR_Word OutputStream_27,
  MR_Word MaybeDataStream_28,
  MR_Integer FactTableArraySize_29,
  MR_Word ModuleInfo_30,
  MR_Word IsPrimaryTable_31,
  MR_String StructName_32,
  MR_Word Infos_33,
  MR_Word Modes_34,
  MR_Integer InputArgNum_35,
  MR_String HashTableName_36,
  MR_Integer TableNum_37,
  MR_Word FirstFact_38,
  MR_Integer FactNum_39,
  MR_Word CreateFactMap_40,
  MR_Word STATE_VARIABLE_FactMap_0_50,
  MR_Word * STATE_VARIABLE_FactMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53)
{
  MR_bool succeeded;
  MR_Word HashList_44;
  MR_Integer Len_45;
  MR_Word Globals_46;
  MR_Integer HashSize_47;
  MR_Word HashTable0_48;
  MR_Word HashTable_49;
  MR_Integer PercentFull_61;
  MR_Word Primes_62;
  MR_Integer N_63;
  MR_Integer Var_65;
  MR_Word Map_67;
  MR_Integer Prime_75;
  MR_Word Primes_76;

  ll_backend__fact_table_compile__build_hash_table_loop_25_p_0(MaybeProgressStream_24, InputStream_25, InputFileName_26, OutputStream_27, MaybeDataStream_28, FactTableArraySize_29, ModuleInfo_30, IsPrimaryTable_31, StructName_32, Infos_33, Modes_34, InputArgNum_35, HashTableName_36, TableNum_37, FirstFact_38, FactNum_39, CreateFactMap_40, STATE_VARIABLE_FactMap_0_50, STATE_VARIABLE_FactMap_51, (MR_Word) ((MR_Unsigned) 0U), &HashList_44, STATE_VARIABLE_Specs_0_52, STATE_VARIABLE_Specs_53);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), HashList_44, &Len_45);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_30, &Globals_46);
  libs__globals__lookup_int_option_3_p_0(Globals_46, (MR_Integer) 667, &PercentFull_61);
  Primes_62 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[97]));
  Var_65 = (MR_Integer) ((MR_Unsigned) Len_45 * (MR_Unsigned) 100);
  N_63 = mercury__int__f_47_47_2_f_0(Var_65, PercentFull_61);
  Prime_75 = ((MR_Integer) ((MR_hl_field(1, Primes_62, 0))));
  Primes_76 = ((MR_Word) ((MR_hl_field(1, Primes_62, 1))));
  succeeded = (Prime_75 > N_63);
  if (succeeded)
    HashSize_47 = Prime_75;
  else
  {
    MR_Integer Prime_83 = ((MR_Integer) ((MR_hl_field(1, Primes_76, 0))));
    MR_Word Primes_84 = ((MR_Word) ((MR_hl_field(1, Primes_76, 1))));

    succeeded = (Prime_83 > N_63);
    if (succeeded)
      HashSize_47 = Prime_83;
    else
    {
      MR_Integer Prime_91 = ((MR_Integer) ((MR_hl_field(1, Primes_84, 0))));
      MR_Word Primes_92 = ((MR_Word) ((MR_hl_field(1, Primes_84, 1))));

      succeeded = (Prime_91 > N_63);
      if (succeeded)
        HashSize_47 = Prime_91;
      else
      {
        MR_Integer Prime_99 = ((MR_Integer) ((MR_hl_field(1, Primes_92, 0))));
        MR_Word Primes_100 = ((MR_Word) ((MR_hl_field(1, Primes_92, 1))));

        succeeded = (Prime_99 > N_63);
        if (succeeded)
          HashSize_47 = Prime_99;
        else
        {
          MR_Integer Prime_107 = ((MR_Integer) ((MR_hl_field(1, Primes_100, 0))));
          MR_Word Primes_108 = ((MR_Word) ((MR_hl_field(1, Primes_100, 1))));

          succeeded = (Prime_107 > N_63);
          if (succeeded)
            HashSize_47 = Prime_107;
          else
          {
            MR_Integer Prime_115 = ((MR_Integer) ((MR_hl_field(1, Primes_108, 0))));
            MR_Word Primes_116 = ((MR_Word) ((MR_hl_field(1, Primes_108, 1))));

            succeeded = (Prime_115 > N_63);
            if (succeeded)
              HashSize_47 = Prime_115;
            else
            {
              MR_Integer Prime_123 = ((MR_Integer) ((MR_hl_field(1, Primes_116, 0))));
              MR_Word Primes_124 = ((MR_Word) ((MR_hl_field(1, Primes_116, 1))));

              succeeded = (Prime_123 > N_63);
              if (succeeded)
                HashSize_47 = Prime_123;
              else
              {
                MR_Integer Prime_131 = ((MR_Integer) ((MR_hl_field(1, Primes_124, 0))));
                MR_Word Primes_132 = ((MR_Word) ((MR_hl_field(1, Primes_124, 1))));

                succeeded = (Prime_131 > N_63);
                if (succeeded)
                  HashSize_47 = Prime_131;
                else
                {
                  MR_Integer Prime_139 = ((MR_Integer) ((MR_hl_field(1, Primes_132, 0))));
                  MR_Word Primes_140 = ((MR_Word) ((MR_hl_field(1, Primes_132, 1))));

                  succeeded = (Prime_139 > N_63);
                  if (succeeded)
                    HashSize_47 = Prime_139;
                  else
                  {
                    MR_Integer Prime_147 = ((MR_Integer) ((MR_hl_field(1, Primes_140, 0))));
                    MR_Word Primes_148 = ((MR_Word) ((MR_hl_field(1, Primes_140, 1))));

                    succeeded = (Prime_147 > N_63);
                    if (succeeded)
                      HashSize_47 = Prime_147;
                    else
                    {
                      MR_Integer Prime_155 = ((MR_Integer) ((MR_hl_field(1, Primes_148, 0))));
                      MR_Word Primes_156 = ((MR_Word) ((MR_hl_field(1, Primes_148, 1))));

                      succeeded = (Prime_155 > N_63);
                      if (succeeded)
                        HashSize_47 = Prime_155;
                      else
                      {
                        MR_Integer Prime_163 = ((MR_Integer) ((MR_hl_field(1, Primes_156, 0))));
                        MR_Word Primes_164 = ((MR_Word) ((MR_hl_field(1, Primes_156, 1))));

                        succeeded = (Prime_163 > N_63);
                        if (succeeded)
                          HashSize_47 = Prime_163;
                        else
                        {
                          MR_Integer Prime_171 = ((MR_Integer) ((MR_hl_field(1, Primes_164, 0))));
                          MR_Word Primes_172 = ((MR_Word) ((MR_hl_field(1, Primes_164, 1))));

                          succeeded = (Prime_171 > N_63);
                          if (succeeded)
                            HashSize_47 = Prime_171;
                          else
                          {
                            MR_Integer Prime_179 = ((MR_Integer) ((MR_hl_field(1, Primes_172, 0))));
                            MR_Word Primes_180 = ((MR_Word) ((MR_hl_field(1, Primes_172, 1))));

                            succeeded = (Prime_179 > N_63);
                            if (succeeded)
                              HashSize_47 = Prime_179;
                            else
                            {
                              MR_Integer Prime_187 = ((MR_Integer) ((MR_hl_field(1, Primes_180, 0))));
                              MR_Word Primes_188 = ((MR_Word) ((MR_hl_field(1, Primes_180, 1))));

                              succeeded = (Prime_187 > N_63);
                              if (succeeded)
                                HashSize_47 = Prime_187;
                              else
                              {
                                MR_Integer Prime_195 = ((MR_Integer) ((MR_hl_field(1, Primes_188, 0))));
                                MR_Word Primes_196 = ((MR_Word) ((MR_hl_field(1, Primes_188, 1))));

                                succeeded = (Prime_195 > N_63);
                                if (succeeded)
                                  HashSize_47 = Prime_195;
                                else
                                {
                                  MR_Integer Prime_203 = ((MR_Integer) ((MR_hl_field(1, Primes_196, 0))));
                                  MR_Word Primes_204 = ((MR_Word) ((MR_hl_field(1, Primes_196, 1))));

                                  succeeded = (Prime_203 > N_63);
                                  if (succeeded)
                                    HashSize_47 = Prime_203;
                                  else
                                  {
                                    MR_Integer Prime_211 = ((MR_Integer) ((MR_hl_field(1, Primes_204, 0))));
                                    MR_Word Primes_212 = ((MR_Word) ((MR_hl_field(1, Primes_204, 1))));

                                    succeeded = (Prime_211 > N_63);
                                    if (succeeded)
                                      HashSize_47 = Prime_211;
                                    else
                                    {
                                      MR_Integer Prime_219 = ((MR_Integer) ((MR_hl_field(1, Primes_212, 0))));
                                      MR_Word Primes_220 = ((MR_Word) ((MR_hl_field(1, Primes_212, 1))));

                                      succeeded = (Prime_219 > N_63);
                                      if (succeeded)
                                        HashSize_47 = Prime_219;
                                      else
                                      {
                                        MR_Integer Prime_227 = ((MR_Integer) ((MR_hl_field(1, Primes_220, 0))));
                                        MR_Word Primes_228 = ((MR_Word) ((MR_hl_field(1, Primes_220, 1))));

                                        succeeded = (Prime_227 > N_63);
                                        if (succeeded)
                                          HashSize_47 = Prime_227;
                                        else
                                          ll_backend__fact_table_compile__find_first_big_enough_prime_3_p_0(N_63, Primes_228, &HashSize_47);
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
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), &Map_67);
  {
    HashTable0_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HashTable0_48, 0) = ((MR_Box) (HashSize_47));
    MR_hl_field(0, HashTable0_48, 1) = ((MR_Box) (Map_67));
  }
  ll_backend__fact_table_compile__hash_table_from_list_4_p_0(HashList_44, HashSize_47, HashTable0_48, &HashTable_49);
  ll_backend__fact_table_compile__write_hash_table_6_p_0(OutputStream_27, HashTableName_36, TableNum_37, HashTable_49);
}

static MR_Box MR_CALL 
ll_backend__fact_table_compile__build_hash_table_loop_25_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_72;

  conv0_LambdaHeadVar__2_72 = ll_backend__fact_table_compile__IntroducedFrom__func__build_hash_table_loop__1725__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_72));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table_compile__build_hash_table_loop_25_p_0(
  MR_Word MaybeProgressStream_26,
  MR_Word InputStream_27,
  MR_String InputFileName_28,
  MR_Word OutputStream_29,
  MR_Word MaybeDataStream_30,
  MR_Integer FactTableArraySize_31,
  MR_Word ModuleInfo_32,
  MR_Word IsPrimaryTable_33,
  MR_String StructName_34,
  MR_Word Infos_35,
  MR_Word Modes_36,
  MR_Integer InputArgNum_37,
  MR_String HashTableName_38,
  MR_Integer STATE_VARIABLE_TableNum_0_58,
  MR_Word FirstFact_40,
  MR_Integer FactNum_41,
  MR_Word CreateFactMap_42,
  MR_Word STATE_VARIABLE_FactMap_0_59,
  MR_Word * STATE_VARIABLE_FactMap_60,
  MR_Word STATE_VARIABLE_HashList_0_61,
  MR_Word * STATE_VARIABLE_HashList_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
{
  while (MR_TRUE)
  {
    MR_Word MatchingFacts_47;
    MR_Word MaybeNextFact_48;
    MR_Word Globals_54;
    MR_Word STATE_VARIABLE_Specs_1_67;
    MR_Word STATE_VARIABLE_FactMap_1_69;
    MR_Integer STATE_VARIABLE_TableNum_1_74;
    MR_Word STATE_VARIABLE_HashList_1_75;
    MR_Word RevMatchingFacts_89;
    MR_Word MatchingFactsTail_90;

    // setup for model_det tailcalls optimized into a loop
    ;
    ll_backend__fact_table_compile__top_level_collect_matching_facts_loop_12_p_0(InputStream_27, InputFileName_28, Infos_35, Modes_36, FirstFact_40, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingFacts_89, &MaybeNextFact_48, STATE_VARIABLE_Specs_0_63, &STATE_VARIABLE_Specs_1_67);
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_sort_file_line_0), RevMatchingFacts_89, &MatchingFactsTail_90);
    {
      MatchingFacts_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MatchingFacts_47, 0) = ((MR_Box) (FirstFact_40));
      MR_hl_field(1, MatchingFacts_47, 1) = ((MR_Box) (MatchingFactsTail_90));
    }
    switch (CreateFactMap_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Index_100 = ((MR_Integer) ((MR_hl_field(0, FirstFact_40, 1))));
          MR_Word STATE_VARIABLE_FactMap_1_104;
          MR_Integer Var_105;

          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Index_100, ((MR_Box) (FactNum_41)), STATE_VARIABLE_FactMap_0_59, &STATE_VARIABLE_FactMap_1_104);
          Var_105 = (MR_Integer) ((MR_Unsigned) FactNum_41 + (MR_Unsigned) 1);
          ll_backend__fact_table_compile__update_fact_map_4_p_0(Var_105, MatchingFactsTail_90, STATE_VARIABLE_FactMap_1_104, &STATE_VARIABLE_FactMap_1_69);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_FactMap_1_69 = STATE_VARIABLE_FactMap_0_59;
        break;
    }
    if (!((MaybeDataStream_30 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DataStream_49 = ((MR_Word) ((MR_hl_field(1, MaybeDataStream_30, 0))));
      MR_Word OutputData_50;

      OutputData_50 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_sort_file_line_0), (MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[1]), (MR_Word) (&ll_backend__fact_table_compile_scalar_common_2[4]), MatchingFacts_47);
      ll_backend__fact_table_compile__write_fact_table_data_8_p_0(DataStream_49, MaybeProgressStream_26, FactTableArraySize_31, StructName_34, OutputData_50, FactNum_41);
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_32, &Globals_54);
    ll_backend__fact_table_compile__do_build_hash_table_14_p_0(OutputStream_29, Globals_54, IsPrimaryTable_33, STATE_VARIABLE_FactMap_1_69, FactNum_41, InputArgNum_37, HashTableName_38, MatchingFacts_47, STATE_VARIABLE_TableNum_0_58, &STATE_VARIABLE_TableNum_1_74, STATE_VARIABLE_HashList_0_61, &STATE_VARIABLE_HashList_1_75);
    if ((MaybeNextFact_48 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FactMap_60 = STATE_VARIABLE_FactMap_1_69;
      *STATE_VARIABLE_HashList_62 = STATE_VARIABLE_HashList_1_75;
      *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_1_67;
    }
    else
    {
      MR_Word NextFact_55 = ((MR_Word) ((MR_hl_field(1, MaybeNextFact_48, 0))));
      MR_Integer Len_56;
      MR_Integer NextFactNum_57;
      MR_Integer next_value_of_STATE_VARIABLE_TableNum_0_58;
      MR_Word next_value_of_FirstFact_40;
      MR_Integer next_value_of_FactNum_41;
      MR_Word next_value_of_STATE_VARIABLE_FactMap_0_59;
      MR_Word next_value_of_STATE_VARIABLE_HashList_0_61;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_63;

      mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_sort_file_line_0), MatchingFacts_47, &Len_56);
      NextFactNum_57 = (MR_Integer) ((MR_Unsigned) FactNum_41 + (MR_Unsigned) Len_56);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_TableNum_0_58 = STATE_VARIABLE_TableNum_1_74;
      next_value_of_FirstFact_40 = NextFact_55;
      next_value_of_FactNum_41 = NextFactNum_57;
      next_value_of_STATE_VARIABLE_FactMap_0_59 = STATE_VARIABLE_FactMap_1_69;
      next_value_of_STATE_VARIABLE_HashList_0_61 = STATE_VARIABLE_HashList_1_75;
      next_value_of_STATE_VARIABLE_Specs_0_63 = STATE_VARIABLE_Specs_1_67;
      STATE_VARIABLE_TableNum_0_58 = next_value_of_STATE_VARIABLE_TableNum_0_58;
      FirstFact_40 = next_value_of_FirstFact_40;
      FactNum_41 = next_value_of_FactNum_41;
      STATE_VARIABLE_FactMap_0_59 = next_value_of_STATE_VARIABLE_FactMap_0_59;
      STATE_VARIABLE_HashList_0_61 = next_value_of_STATE_VARIABLE_HashList_0_61;
      STATE_VARIABLE_Specs_0_63 = next_value_of_STATE_VARIABLE_Specs_0_63;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__update_fact_map_4_p_0(
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
      MR_Word Fact_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Facts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer Index_14 = ((MR_Integer) ((MR_hl_field(0, Fact_10, 1))));
      MR_Word STATE_VARIABLE_FactMap_1_18;
      MR_Integer Var_19;
      MR_Integer next_value_of_FactNum_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FactMap_0_3;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Index_14, ((MR_Box) (FactNum_1)), STATE_VARIABLE_FactMap_0_3, &STATE_VARIABLE_FactMap_1_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) FactNum_1 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_FactNum_1 = Var_19;
      next_value_of_HeadVar__2_2 = Facts_11;
      next_value_of_STATE_VARIABLE_FactMap_0_3 = STATE_VARIABLE_FactMap_1_18;
      FactNum_1 = next_value_of_FactNum_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_FactMap_0_3 = next_value_of_STATE_VARIABLE_FactMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__top_level_collect_matching_facts_loop_12_p_0(
  MR_Word InputStream_13,
  MR_String InputFileName_14,
  MR_Word Infos_15,
  MR_Word Modes_16,
  MR_Word Fact_17,
  MR_Word STATE_VARIABLE_RevMatchingFacts_0_32,
  MR_Word * STATE_VARIABLE_RevMatchingFacts_33,
  MR_Word * MaybeNextFact_19,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeSortFileLine_22;
    MR_Word STATE_VARIABLE_Specs_1_38;

    // setup for model_det tailcalls optimized into a loop
    ;
    ll_backend__fact_table_compile__read_sort_file_line_9_p_0(InputStream_13, InputFileName_14, Infos_15, Modes_16, &MaybeSortFileLine_22, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_1_38);
    if ((MaybeSortFileLine_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeNextFact_19 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevMatchingFacts_33 = STATE_VARIABLE_RevMatchingFacts_0_32;
      *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_1_38;
    }
    else
    {
      MR_Word Fact1_23 = ((MR_Word) ((MR_hl_field(1, MaybeSortFileLine_22, 0))));
      MR_Word Arg1_24;
      MR_Word Arg_28;
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Fact1_23, 0))));
      MR_Word Var_41;

      succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Arg1_24 = ((MR_Word) ((MR_hl_field(1, Var_40, 0))));
        Var_41 = ((MR_Word) ((MR_hl_field(0, Fact_17, 0))));
        succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          Arg_28 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));
      }
      if (succeeded)
      {
        MR_Integer CastX_54 = (MR_Integer) (Arg_28);
        MR_Integer CastY_55 = (MR_Integer) (Arg1_24);

        succeeded = (CastX_54 == CastY_55);
        if (succeeded)
          succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) Arg_28)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_48 = ((MR_Integer) ((MR_hl_field(0, Arg_28, 0))));
                MR_Integer ArgY1_49;

                succeeded = ((MR_tag((MR_Word) Arg1_24)) == (MR_Integer) 0);
                if (succeeded)
                {
                  ArgY1_49 = ((MR_Integer) ((MR_hl_field(0, Arg1_24, 0))));
                  succeeded = (ArgX1_48 == ArgY1_49);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Float ArgX1_50 = MR_unbox_float((MR_hl_field(1, Arg_28, 0)));
                MR_Float ArgY1_51;

                succeeded = ((MR_tag((MR_Word) Arg1_24)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_51 = MR_unbox_float((MR_hl_field(1, Arg1_24, 0)));
                  succeeded = (ArgX1_50 == ArgY1_51);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_52 = ((MR_String) ((MR_hl_field(2, Arg_28, 0))));
                MR_String ArgY1_53;

                succeeded = ((MR_tag((MR_Word) Arg1_24)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_53 = ((MR_String) ((MR_hl_field(2, Arg1_24, 0))));
                  succeeded = (strcmp(ArgX1_52, ArgY1_53) == 0);
                }
              }
              break;
          }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_RevMatchingFacts_1_42;
          MR_Word next_value_of_STATE_VARIABLE_RevMatchingFacts_0_32;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_34;

          {
            STATE_VARIABLE_RevMatchingFacts_1_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevMatchingFacts_1_42, 0) = ((MR_Box) (Fact1_23));
            MR_hl_field(1, STATE_VARIABLE_RevMatchingFacts_1_42, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingFacts_0_32));
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_RevMatchingFacts_0_32 = STATE_VARIABLE_RevMatchingFacts_1_42;
          next_value_of_STATE_VARIABLE_Specs_0_34 = STATE_VARIABLE_Specs_1_38;
          STATE_VARIABLE_RevMatchingFacts_0_32 = next_value_of_STATE_VARIABLE_RevMatchingFacts_0_32;
          STATE_VARIABLE_Specs_0_34 = next_value_of_STATE_VARIABLE_Specs_0_34;
          continue;
        }
        else
        {
          *MaybeNextFact_19 = MaybeSortFileLine_22;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_1_38;
          *STATE_VARIABLE_RevMatchingFacts_33 = STATE_VARIABLE_RevMatchingFacts_0_32;
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.top_level_collect_matching_facts_loop\'/12", (MR_String) "no input args");
          return;
        }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__build_hash_table_lower_levels_loop_14_p_0(
  MR_Word OutputStream_1,
  MR_Word Globals_2,
  MR_Word IsPrimaryTable_3,
  MR_Word FactMap_4,
  MR_Integer InputArgNum_5,
  MR_String HashTableName_6,
  MR_Word HeadVar__7_7,
  MR_Integer FactNum_8,
  MR_Integer STATE_VARIABLE_TableNum_0_9,
  MR_Integer * STATE_VARIABLE_TableNum_10,
  MR_Word STATE_VARIABLE_HashList_0_11,
  MR_Word * STATE_VARIABLE_HashList_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HashList_12 = STATE_VARIABLE_HashList_0_11;
      *STATE_VARIABLE_TableNum_10 = STATE_VARIABLE_TableNum_0_9;
    }
    else
    {
      MR_Word Fact_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word Facts0_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_Word MatchingFacts_43;
      MR_Word RemainingFacts_44;
      MR_Integer Len_45;
      MR_Integer NextFactNum_46;
      MR_Integer STATE_VARIABLE_TableNum_1_53;
      MR_Word STATE_VARIABLE_HashList_1_54;
      MR_Word InputArgs_57 = ((MR_Word) ((MR_hl_field(0, Fact_37, 0))));
      MR_Word MatchArg_60;
      MR_Word RevMatchingFacts_61;
      MR_Word TailMatchingFacts_62;
      MR_Box conv0_MatchArg_60;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Integer next_value_of_FactNum_8;
      MR_Integer next_value_of_STATE_VARIABLE_TableNum_0_9;
      MR_Word next_value_of_STATE_VARIABLE_HashList_0_11;

      mercury__list__det_index0_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0), InputArgs_57, InputArgNum_5, &conv0_MatchArg_60);
      MatchArg_60 = ((MR_Word) (conv0_MatchArg_60));
      ll_backend__fact_table_compile__lower_level_collect_matching_facts_loop_6_p_0(InputArgNum_5, MatchArg_60, Facts0_38, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingFacts_61, &RemainingFacts_44);
      mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_sort_file_line_0), RevMatchingFacts_61, &TailMatchingFacts_62);
      {
        MatchingFacts_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MatchingFacts_43, 0) = ((MR_Box) (Fact_37));
        MR_hl_field(1, MatchingFacts_43, 1) = ((MR_Box) (TailMatchingFacts_62));
      }
      ll_backend__fact_table_compile__do_build_hash_table_14_p_0(OutputStream_1, Globals_2, IsPrimaryTable_3, FactMap_4, FactNum_8, InputArgNum_5, HashTableName_6, MatchingFacts_43, STATE_VARIABLE_TableNum_0_9, &STATE_VARIABLE_TableNum_1_53, STATE_VARIABLE_HashList_0_11, &STATE_VARIABLE_HashList_1_54);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_sort_file_line_0), MatchingFacts_43, &Len_45);
      NextFactNum_46 = (MR_Integer) ((MR_Unsigned) FactNum_8 + (MR_Unsigned) Len_45);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = RemainingFacts_44;
      next_value_of_FactNum_8 = NextFactNum_46;
      next_value_of_STATE_VARIABLE_TableNum_0_9 = STATE_VARIABLE_TableNum_1_53;
      next_value_of_STATE_VARIABLE_HashList_0_11 = STATE_VARIABLE_HashList_1_54;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      FactNum_8 = next_value_of_FactNum_8;
      STATE_VARIABLE_TableNum_0_9 = next_value_of_STATE_VARIABLE_TableNum_0_9;
      STATE_VARIABLE_HashList_0_11 = next_value_of_STATE_VARIABLE_HashList_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__do_build_hash_table_14_p_0(
  MR_Word OutputStream_15,
  MR_Word Globals_16,
  MR_Word IsPrimaryTable_17,
  MR_Word FactMap_18,
  MR_Integer FactNum_19,
  MR_Integer InputArgNum_20,
  MR_String HashTableName_21,
  MR_Word Facts_22,
  MR_Integer STATE_VARIABLE_TableNum_0_42,
  MR_Integer * STATE_VARIABLE_TableNum_43,
  MR_Word STATE_VARIABLE_HashList_0_44,
  MR_Word * STATE_VARIABLE_HashList_45)
{
  MR_bool succeeded;

  if ((Facts_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.do_build_hash_table\'/14", (MR_String) "no facts");
      return;
    }
  else
  {
    MR_Word Fact_26 = ((MR_Word) ((MR_hl_field(1, Facts_22, 0))));
    MR_Word TailFacts_27 = ((MR_Word) ((MR_hl_field(1, Facts_22, 1))));
    MR_Word Arg_28;
    MR_Integer Index_29 = ((MR_Integer) ((MR_hl_field(0, Fact_26, 1))));
    MR_Integer HashIndex_30;
    MR_Word InputArgs_67 = ((MR_Word) ((MR_hl_field(0, Fact_26, 0))));
    MR_Box conv0_Arg_28;

    mercury__list__det_index0_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0), InputArgs_67, InputArgNum_20, &conv0_Arg_28);
    Arg_28 = ((MR_Word) (conv0_Arg_28));
    switch (IsPrimaryTable_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box conv1_HashIndex_30;

          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FactMap_18, Index_29, &conv1_HashIndex_30);
          HashIndex_30 = ((MR_Integer) (conv1_HashIndex_30));
        }
        break;
      case (MR_Integer) 1:
        HashIndex_30 = FactNum_19;
        break;
    }
    if ((TailFacts_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_51;
      MR_Word Var_52;

      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (HashIndex_30));
      }
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (Arg_28));
        MR_hl_field(0, Var_51, 1) = ((MR_Box) (Var_52));
        MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_HashList_45 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_44));
      }
      *STATE_VARIABLE_TableNum_43 = STATE_VARIABLE_TableNum_0_42;
    }
    else
    {
      MR_Integer NextInputArgNum_33 = (MR_Integer) ((MR_Unsigned) InputArgNum_20 + (MR_Unsigned) 1);
      MR_Word InputArgs_34 = ((MR_Word) ((MR_hl_field(0, Fact_26, 0))));
      MR_Integer N_37 = (MR_Integer) ((MR_Unsigned) NextInputArgNum_33 + (MR_Unsigned) 1);
      MR_Word Var_38;

      succeeded = mercury__list__drop_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0), N_37, InputArgs_34, &Var_38);
      if (succeeded)
      {
        MR_Integer ThisTableNum_39 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TableNum_0_42 + (MR_Unsigned) 1);
        MR_Word EntryIndex_40;
        MR_Word Var_61;
        MR_Word HashList_70;
        MR_Integer Len_71;
        MR_Integer HashSize_72;
        MR_Word HashTable0_73;
        MR_Word HashTable_74;
        MR_Integer PercentFull_78;
        MR_Word Primes_79;
        MR_Integer N_80;
        MR_Integer Var_82;
        MR_Word Map_84;
        MR_Integer Prime_92;
        MR_Word Primes_93;

        ll_backend__fact_table_compile__build_hash_table_lower_levels_loop_14_p_0(OutputStream_15, Globals_16, IsPrimaryTable_17, FactMap_18, NextInputArgNum_33, HashTableName_21, Facts_22, FactNum_19, ThisTableNum_39, STATE_VARIABLE_TableNum_43, (MR_Word) ((MR_Unsigned) 0U), &HashList_70);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), HashList_70, &Len_71);
        libs__globals__lookup_int_option_3_p_0(Globals_16, (MR_Integer) 667, &PercentFull_78);
        Primes_79 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[97]));
        Var_82 = (MR_Integer) ((MR_Unsigned) Len_71 * (MR_Unsigned) 100);
        N_80 = mercury__int__f_47_47_2_f_0(Var_82, PercentFull_78);
        Prime_92 = ((MR_Integer) ((MR_hl_field(1, Primes_79, 0))));
        Primes_93 = ((MR_Word) ((MR_hl_field(1, Primes_79, 1))));
        succeeded = (Prime_92 > N_80);
        if (succeeded)
          HashSize_72 = Prime_92;
        else
        {
          MR_Integer Prime_100 = ((MR_Integer) ((MR_hl_field(1, Primes_93, 0))));
          MR_Word Primes_101 = ((MR_Word) ((MR_hl_field(1, Primes_93, 1))));

          succeeded = (Prime_100 > N_80);
          if (succeeded)
            HashSize_72 = Prime_100;
          else
          {
            MR_Integer Prime_108 = ((MR_Integer) ((MR_hl_field(1, Primes_101, 0))));
            MR_Word Primes_109 = ((MR_Word) ((MR_hl_field(1, Primes_101, 1))));

            succeeded = (Prime_108 > N_80);
            if (succeeded)
              HashSize_72 = Prime_108;
            else
            {
              MR_Integer Prime_116 = ((MR_Integer) ((MR_hl_field(1, Primes_109, 0))));
              MR_Word Primes_117 = ((MR_Word) ((MR_hl_field(1, Primes_109, 1))));

              succeeded = (Prime_116 > N_80);
              if (succeeded)
                HashSize_72 = Prime_116;
              else
              {
                MR_Integer Prime_124 = ((MR_Integer) ((MR_hl_field(1, Primes_117, 0))));
                MR_Word Primes_125 = ((MR_Word) ((MR_hl_field(1, Primes_117, 1))));

                succeeded = (Prime_124 > N_80);
                if (succeeded)
                  HashSize_72 = Prime_124;
                else
                {
                  MR_Integer Prime_132 = ((MR_Integer) ((MR_hl_field(1, Primes_125, 0))));
                  MR_Word Primes_133 = ((MR_Word) ((MR_hl_field(1, Primes_125, 1))));

                  succeeded = (Prime_132 > N_80);
                  if (succeeded)
                    HashSize_72 = Prime_132;
                  else
                  {
                    MR_Integer Prime_140 = ((MR_Integer) ((MR_hl_field(1, Primes_133, 0))));
                    MR_Word Primes_141 = ((MR_Word) ((MR_hl_field(1, Primes_133, 1))));

                    succeeded = (Prime_140 > N_80);
                    if (succeeded)
                      HashSize_72 = Prime_140;
                    else
                    {
                      MR_Integer Prime_148 = ((MR_Integer) ((MR_hl_field(1, Primes_141, 0))));
                      MR_Word Primes_149 = ((MR_Word) ((MR_hl_field(1, Primes_141, 1))));

                      succeeded = (Prime_148 > N_80);
                      if (succeeded)
                        HashSize_72 = Prime_148;
                      else
                      {
                        MR_Integer Prime_156 = ((MR_Integer) ((MR_hl_field(1, Primes_149, 0))));
                        MR_Word Primes_157 = ((MR_Word) ((MR_hl_field(1, Primes_149, 1))));

                        succeeded = (Prime_156 > N_80);
                        if (succeeded)
                          HashSize_72 = Prime_156;
                        else
                        {
                          MR_Integer Prime_164 = ((MR_Integer) ((MR_hl_field(1, Primes_157, 0))));
                          MR_Word Primes_165 = ((MR_Word) ((MR_hl_field(1, Primes_157, 1))));

                          succeeded = (Prime_164 > N_80);
                          if (succeeded)
                            HashSize_72 = Prime_164;
                          else
                          {
                            MR_Integer Prime_172 = ((MR_Integer) ((MR_hl_field(1, Primes_165, 0))));
                            MR_Word Primes_173 = ((MR_Word) ((MR_hl_field(1, Primes_165, 1))));

                            succeeded = (Prime_172 > N_80);
                            if (succeeded)
                              HashSize_72 = Prime_172;
                            else
                            {
                              MR_Integer Prime_180 = ((MR_Integer) ((MR_hl_field(1, Primes_173, 0))));
                              MR_Word Primes_181 = ((MR_Word) ((MR_hl_field(1, Primes_173, 1))));

                              succeeded = (Prime_180 > N_80);
                              if (succeeded)
                                HashSize_72 = Prime_180;
                              else
                              {
                                MR_Integer Prime_188 = ((MR_Integer) ((MR_hl_field(1, Primes_181, 0))));
                                MR_Word Primes_189 = ((MR_Word) ((MR_hl_field(1, Primes_181, 1))));

                                succeeded = (Prime_188 > N_80);
                                if (succeeded)
                                  HashSize_72 = Prime_188;
                                else
                                {
                                  MR_Integer Prime_196 = ((MR_Integer) ((MR_hl_field(1, Primes_189, 0))));
                                  MR_Word Primes_197 = ((MR_Word) ((MR_hl_field(1, Primes_189, 1))));

                                  succeeded = (Prime_196 > N_80);
                                  if (succeeded)
                                    HashSize_72 = Prime_196;
                                  else
                                  {
                                    MR_Integer Prime_204 = ((MR_Integer) ((MR_hl_field(1, Primes_197, 0))));
                                    MR_Word Primes_205 = ((MR_Word) ((MR_hl_field(1, Primes_197, 1))));

                                    succeeded = (Prime_204 > N_80);
                                    if (succeeded)
                                      HashSize_72 = Prime_204;
                                    else
                                    {
                                      MR_Integer Prime_212 = ((MR_Integer) ((MR_hl_field(1, Primes_205, 0))));
                                      MR_Word Primes_213 = ((MR_Word) ((MR_hl_field(1, Primes_205, 1))));

                                      succeeded = (Prime_212 > N_80);
                                      if (succeeded)
                                        HashSize_72 = Prime_212;
                                      else
                                      {
                                        MR_Integer Prime_220 = ((MR_Integer) ((MR_hl_field(1, Primes_213, 0))));
                                        MR_Word Primes_221 = ((MR_Word) ((MR_hl_field(1, Primes_213, 1))));

                                        succeeded = (Prime_220 > N_80);
                                        if (succeeded)
                                          HashSize_72 = Prime_220;
                                        else
                                          ll_backend__fact_table_compile__find_first_big_enough_prime_3_p_0(N_80, Primes_221, &HashSize_72);
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
        mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), &Map_84);
        {
          HashTable0_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HashTable0_73, 0) = ((MR_Box) (HashSize_72));
          MR_hl_field(0, HashTable0_73, 1) = ((MR_Box) (Map_84));
        }
        ll_backend__fact_table_compile__hash_table_from_list_4_p_0(HashList_70, HashSize_72, HashTable0_73, &HashTable_74);
        ll_backend__fact_table_compile__write_hash_table_6_p_0(OutputStream_15, HashTableName_21, ThisTableNum_39, HashTable_74);
        {
          EntryIndex_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, EntryIndex_40, 0) = ((MR_Box) (ThisTableNum_39));
          MR_hl_field(1, EntryIndex_40, 1) = ((MR_Box) (HashTableName_21));
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (Arg_28));
          MR_hl_field(0, Var_61, 1) = ((MR_Box) (EntryIndex_40));
          MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_HashList_45 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_61));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_44));
        }
      }
      else
      {
        switch (IsPrimaryTable_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__fact_table_compile__hash_list_insert_many_7_p_0(IsPrimaryTable_17, FactMap_18, FactNum_19, InputArgNum_20, Facts_22, STATE_VARIABLE_HashList_0_44, STATE_VARIABLE_HashList_45);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Entry_41;
              MR_Word Var_63;

              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (HashIndex_30));
              }
              {
                Entry_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Entry_41, 0) = ((MR_Box) (Arg_28));
                MR_hl_field(0, Entry_41, 1) = ((MR_Box) (Var_63));
                MR_hl_field(0, Entry_41, 2) = ((MR_Box) ((MR_Integer) -1));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_HashList_45 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Entry_41));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_44));
              }
            }
            break;
        }
        *STATE_VARIABLE_TableNum_43 = STATE_VARIABLE_TableNum_0_42;
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__write_hash_table_6_p_0(
  MR_Word OutputStream_7,
  MR_String BaseName_8,
  MR_Integer TableNum_9,
  MR_Word HashTable_10)
{
  MR_Char TableType_12;
  MR_String HashTableDataName_13;
  MR_Integer Size_14;
  MR_Integer MaxIndex_16;
  MR_Word Var_28;
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

  ll_backend__fact_table_compile__get_hash_table_type_2_p_0(HashTable_10, &TableType_12);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), TableNum_9, &Var_53);
  Var_60 = mercury__string__f_43_43_2_f_0(Var_53, (MR_String) "_data[]");
  Var_61 = mercury__string__f_43_43_2_f_0(BaseName_8, Var_60);
  Var_63 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_61);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), TableType_12, &Var_64);
  Var_71 = mercury__string__f_43_43_2_f_0(Var_64, Var_63);
  HashTableDataName_13 = mercury__string__f_43_43_2_f_0((MR_String) "struct MR_fact_table_hash_entry_", Var_71);
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (HashTableDataName_13));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[98])));
  }
  mercury__io__write_strings_4_p_0(OutputStream_7, Var_28);
  Size_14 = ((MR_Integer) ((MR_hl_field(0, HashTable_10, 0))));
  MaxIndex_16 = (MR_Integer) ((MR_Unsigned) Size_14 - (MR_Unsigned) 1);
  ll_backend__fact_table_compile__write_hash_table_loop_6_p_0(OutputStream_7, HashTable_10, (MR_Integer) 0, MaxIndex_16);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "};\n\n");
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n\nstruct MR_fact_table_hash_table_");
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), TableType_12, &Var_76);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_76);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) " ");
  mercury__io__write_string_4_p_0(OutputStream_7, BaseName_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), TableNum_9, &Var_87);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_87);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) " = {\n    ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), Size_14, &Var_97);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_97);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ",\n    ");
  mercury__io__write_string_4_p_0(OutputStream_7, BaseName_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), TableNum_9, &Var_108);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_108);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "_data\n};\n");
}

static void MR_CALL 
ll_backend__fact_table_compile__get_hash_table_type_2_p_0(
  MR_Word HashTable_3,
  MR_Char * TableType_4)
{
  MR_bool succeeded;
  MR_Word Map_6 = ((MR_Word) ((MR_hl_field(0, HashTable_3, 1))));

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), Map_6);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.get_hash_table_type\'/2", (MR_String) "empty hash table");
      return;
    }
  else
    ll_backend__fact_table_compile__get_hash_table_type_loop_3_p_0(Map_6, (MR_Integer) 0, TableType_4);
}

static void MR_CALL 
ll_backend__fact_table_compile__get_hash_table_type_loop_3_p_0(
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
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), Map_4, Index_5, &conv0_Entry_7);
    if (succeeded)
    {
      Entry_7 = ((MR_Word) (conv0_Entry_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Key_8 = ((MR_Word) ((MR_hl_field(0, Entry_7, 0))));

      switch (MR_tag((MR_Word) Key_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *TableType_6 = (MR_Char) 105;
          break;
        case (MR_Integer) 1:
          *TableType_6 = (MR_Char) 102;
          break;
        case (MR_Integer) 2:
          *TableType_6 = (MR_Char) 115;
          break;
      }
    }
    else
    {
      MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Index_5 + (MR_Unsigned) 1);
      MR_Integer next_value_of_Index_5 = Var_14;

      // direct tailcall eliminated
      ;
      Index_5 = next_value_of_Index_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__write_hash_table_loop_6_p_0(
  MR_Word Stream_7,
  MR_Word HashTable_8,
  MR_Integer CurIndex_9,
  MR_Integer MaxIndex_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (CurIndex_9 > MaxIndex_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer Var_45;
      MR_Word HashEntry_12;
      MR_Word Map_73;
      MR_Box conv0_HashEntry_12;
      MR_Integer next_value_of_CurIndex_9;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\t{ ");
      Map_73 = ((MR_Word) ((MR_hl_field(0, HashTable_8, 1))));
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), Map_73, CurIndex_9, &conv0_HashEntry_12);
      if (succeeded)
      {
        HashEntry_12 = ((MR_Word) (conv0_HashEntry_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Key_13 = ((MR_Word) ((MR_hl_field(0, HashEntry_12, 0))));
        MR_Word Index_14 = ((MR_Word) ((MR_hl_field(0, HashEntry_12, 1))));
        MR_Integer Next_15 = ((MR_Integer) ((MR_hl_field(0, HashEntry_12, 2))));

        switch (MR_tag((MR_Word) Key_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_17 = ((MR_Integer) ((MR_hl_field(0, Key_13, 0))));

              mercury__io__write_int_4_p_0(Stream_7, Int_17);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float Float_18 = MR_unbox_float((MR_hl_field(1, Key_13, 0)));

              mercury__io__write_float_4_p_0(Stream_7, Float_18);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String String_16 = ((MR_String) ((MR_hl_field(2, Key_13, 0))));

              backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_7, String_16);
            }
            break;
        }
        if (((MR_tag((MR_Word) Index_14)) == (MR_Integer) 0))
        {
          MR_Integer I_19 = ((MR_Integer) ((MR_hl_field(0, Index_14, 0))));
          MR_String Var_64;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", MR_FACT_TABLE_MAKE_TAGGED_INDEX(");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), I_19, &Var_64);
          mercury__io__write_string_4_p_0(Stream_7, Var_64);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", 1), ");
        }
        else
        {
          MR_String H_20 = ((MR_String) ((MR_hl_field(1, Index_14, 1))));
          MR_Integer I_48 = ((MR_Integer) ((MR_hl_field(1, Index_14, 0))));
          MR_String Var_53;

          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", MR_FACT_TABLE_MAKE_TAGGED_POINTER(&");
          mercury__io__write_string_4_p_0(Stream_7, H_20);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), I_48, &Var_53);
          mercury__io__write_string_4_p_0(Stream_7, Var_53);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", 2), ");
        }
        mercury__io__write_int_4_p_0(Stream_7, Next_15);
      }
      else
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "0, MR_FACT_TABLE_MAKE_TAGGED_POINTER(NULL, 0), -1 ");
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n");
      Var_45 = (MR_Integer) ((MR_Unsigned) CurIndex_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_9 = Var_45;
      CurIndex_9 = next_value_of_CurIndex_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__hash_table_from_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  mercury__char__to_int_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
ll_backend__fact_table_compile__hash_table_from_list_4_p_0(
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
      MR_Word Entry_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Entrys_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_HashTable_1_15;
      MR_Word Key_16 = ((MR_Word) ((MR_hl_field(0, Entry_9, 0))));
      MR_Word Index_17 = ((MR_Word) ((MR_hl_field(0, Entry_9, 1))));
      MR_Integer HashVal_19;
      MR_Word Map_38;
      MR_Box conv1_Var_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HashTable_0_3;

      switch (MR_tag((MR_Word) Key_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Int_26 = ((MR_Integer) ((MR_hl_field(0, Key_16, 0))));
            MR_Integer N_74;
            MR_Integer Var_79;

            mercury__int__abs_2_p_0(Int_26, &N_74);
            Var_79 = (MR_Integer) ((MR_Unsigned) N_74 + (MR_Unsigned) ((MR_Integer) ((MR_Unsigned) 31 * (MR_Unsigned) 0)));
            HashVal_19 = mercury__int__mod_2_f_0(Var_79, HashSize_2);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float Float_28 = MR_unbox_float((MR_hl_field(1, Key_16, 0)));
            MR_Integer Var_31;
            MR_Integer N_50;
            MR_Integer Var_55;

            Var_31 = mercury__float__hash_1_f_0(Float_28);
            mercury__int__abs_2_p_0(Var_31, &N_50);
            Var_55 = (MR_Integer) ((MR_Unsigned) N_50 + (MR_Unsigned) ((MR_Integer) ((MR_Unsigned) 31 * (MR_Unsigned) 0)));
            HashVal_19 = mercury__int__mod_2_f_0(Var_55, HashSize_2);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String String_23 = ((MR_String) ((MR_hl_field(2, Key_16, 0))));
            MR_Word Cs_24;
            MR_Word Ns_96;

            mercury__string__to_char_list_2_p_0(String_23, &Cs_24);
            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__fact_table_compile_scalar_common_2[3]), Cs_24, &Ns_96);
            ll_backend__fact_table_compile__fact_table_hash_2_4_p_0(HashSize_2, Ns_96, (MR_Integer) 0, &HashVal_19);
          }
          break;
      }
      Map_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_3, 1))));
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), Map_38, HashVal_19, &conv1_Var_20);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        ll_backend__fact_table_compile__hash_table_insert_open_address_loop_5_p_0(HashVal_19, Key_16, Index_17, STATE_VARIABLE_HashTable_0_3, &STATE_VARIABLE_HashTable_1_15);
      else
      {
        MR_Word Var_21;
        MR_Integer Size_41;
        MR_Word Map0_42;
        MR_Word Map_43;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (Key_16));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (Index_17));
          MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        Size_41 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_3, 0))));
        Map0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_3, 1))));
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), HashVal_19, ((MR_Box) (Var_21)), Map0_42, &Map_43);
        {
          STATE_VARIABLE_HashTable_1_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_HashTable_1_15, 0) = ((MR_Box) (Size_41));
          MR_hl_field(0, STATE_VARIABLE_HashTable_1_15, 1) = ((MR_Box) (Map_43));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Entrys_10;
      next_value_of_STATE_VARIABLE_HashTable_0_3 = STATE_VARIABLE_HashTable_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HashTable_0_3 = next_value_of_STATE_VARIABLE_HashTable_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__fact_table_hash_2_4_p_0(
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
      MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Ns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer STATE_VARIABLE_HashVal_1_15;
      MR_Integer Var_16;
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) 31 * (MR_Unsigned) STATE_VARIABLE_HashVal_0_3);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_3;

      Var_16 = (MR_Integer) ((MR_Unsigned) N_10 + (MR_Unsigned) Var_17);
      STATE_VARIABLE_HashVal_1_15 = mercury__int__mod_2_f_0(Var_16, HashSize_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Ns_11;
      next_value_of_STATE_VARIABLE_HashVal_0_3 = STATE_VARIABLE_HashVal_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_HashVal_0_3 = next_value_of_STATE_VARIABLE_HashVal_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__hash_table_insert_open_address_loop_5_p_0(
  MR_Integer HashVal_6,
  MR_Word Key0_7,
  MR_Word Index0_8,
  MR_Word STATE_VARIABLE_HashTable_0_17,
  MR_Word * STATE_VARIABLE_HashTable_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word OldEntry1_10;
    MR_Word Map_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_17, 1))));
    MR_Box conv0_OldEntry1_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), Map_26, HashVal_6, &conv0_OldEntry1_10);
    if (succeeded)
    {
      OldEntry1_10 = ((MR_Word) (conv0_OldEntry1_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Key1_11 = ((MR_Word) ((MR_hl_field(0, OldEntry1_10, 0))));
      MR_Word Index1_12 = ((MR_Word) ((MR_hl_field(0, OldEntry1_10, 1))));
      MR_Integer Next_13 = ((MR_Integer) ((MR_hl_field(0, OldEntry1_10, 2))));

      succeeded = (Next_13 == (MR_Integer) -1);
      if (succeeded)
      {
        MR_Integer FreeVal_14;
        MR_Word NewEntry_15;
        MR_Word OldEntry_16;
        MR_Integer Size_29 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_17, 0))));
        MR_Integer Max_31 = (MR_Integer) ((MR_Unsigned) Size_29 - (MR_Unsigned) 1);
        MR_Word Map0_34;
        MR_Integer Size_38;
        MR_Word Map0_39;
        MR_Word Map_40;

        ll_backend__fact_table_compile__get_free_hash_slot_loop_4_p_0(STATE_VARIABLE_HashTable_0_17, HashVal_6, Max_31, &FreeVal_14);
        {
          NewEntry_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NewEntry_15, 0) = ((MR_Box) (Key0_7));
          MR_hl_field(0, NewEntry_15, 1) = ((MR_Box) (Index0_8));
          MR_hl_field(0, NewEntry_15, 2) = ((MR_Box) ((MR_Integer) -1));
        }
        Size_38 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_17, 0))));
        Map0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HashTable_0_17, 1))));
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), FreeVal_14, ((MR_Box) (NewEntry_15)), Map0_34, &Map0_39);
        {
          OldEntry_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OldEntry_16, 0) = ((MR_Box) (Key1_11));
          MR_hl_field(0, OldEntry_16, 1) = ((MR_Box) (Index1_12));
          MR_hl_field(0, OldEntry_16, 2) = ((MR_Box) (FreeVal_14));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), HashVal_6, ((MR_Box) (OldEntry_16)), Map0_39, &Map_40);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_HashTable_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Size_38));
          MR_hl_field(0, base, 1) = ((MR_Box) (Map_40));
        }
      }
      else
      {
        MR_Integer next_value_of_HashVal_6 = Next_13;

        // direct tailcall eliminated
        ;
        HashVal_6 = next_value_of_HashVal_6;
        continue;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.hash_table_insert_open_address_loop\'/5", (MR_String) "hash table entry empty");
        return;
      }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__get_free_hash_slot_loop_4_p_0(
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
    MR_Word Map_14;
    MR_Box conv0_Var_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    Next_9 = mercury__int__mod_2_f_0(Var_11, Max_7);
    Map_14 = ((MR_Word) ((MR_hl_field(0, HashTable_5, 1))));
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0), Map_14, Next_9, &conv0_Var_10);
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
ll_backend__fact_table_compile__hash_list_insert_many_7_p_0(
  MR_Word IsPrimaryTable_1,
  MR_Word FactMap_2,
  MR_Integer FactNum_3,
  MR_Integer InputArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_HashList_0_6,
  MR_Word * STATE_VARIABLE_HashList_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HashList_7 = STATE_VARIABLE_HashList_0_6;
    else
    {
      MR_Word Fact_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Facts_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word Arg_22;
      MR_Integer Index_23 = ((MR_Integer) ((MR_hl_field(0, Fact_19, 1))));
      MR_Integer HashIndex_24;
      MR_Word STATE_VARIABLE_HashList_1_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word InputArgs_32 = ((MR_Word) ((MR_hl_field(0, Fact_19, 0))));
      MR_Box conv0_Arg_22;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_HashList_0_6;

      mercury__list__det_index0_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0), InputArgs_32, InputArgNum_4, &conv0_Arg_22);
      Arg_22 = ((MR_Word) (conv0_Arg_22));
      switch (IsPrimaryTable_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box conv1_HashIndex_24;

            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FactMap_2, Index_23, &conv1_HashIndex_24);
            HashIndex_24 = ((MR_Integer) (conv1_HashIndex_24));
          }
          break;
        case (MR_Integer) 1:
          HashIndex_24 = FactNum_3;
          break;
      }
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (HashIndex_24));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (Arg_22));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (Var_29));
        MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        STATE_VARIABLE_HashList_1_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_HashList_1_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(1, STATE_VARIABLE_HashList_1_27, 1) = ((MR_Box) (STATE_VARIABLE_HashList_0_6));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Facts_20;
      next_value_of_STATE_VARIABLE_HashList_0_6 = STATE_VARIABLE_HashList_1_27;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_HashList_0_6 = next_value_of_STATE_VARIABLE_HashList_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__find_first_big_enough_prime_3_p_0(
  MR_Integer NumSlotsNeeded_1,
  MR_Word HeadVar__2_2,
  MR_Integer * Size_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.find_first_big_enough_prime\'/3", (MR_String) "hash table too large (max size 2147483647)");
        return;
      }
    else
    {
      MR_Integer Prime_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Primes_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

      succeeded = (Prime_9 > NumSlotsNeeded_1);
      if (succeeded)
        *Size_3 = Prime_9;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Primes_10;

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
ll_backend__fact_table_compile__lower_level_collect_matching_facts_loop_6_p_0(
  MR_Integer InputArgNum_1,
  MR_Word MatchArg_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevMatchingFacts_0_4,
  MR_Word * STATE_VARIABLE_RevMatchingFacts_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevMatchingFacts_5 = STATE_VARIABLE_RevMatchingFacts_0_4;
    }
    else
    {
      MR_Word Fact_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Facts_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word InputArgs_18 = ((MR_Word) ((MR_hl_field(0, Fact_14, 0))));
      MR_Word Arg_21;
      MR_Box conv0_Arg_21;
      MR_Integer CastX_32;
      MR_Integer CastY_33;

      mercury__list__det_index0_3_p_0((MR_Word) (&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0), InputArgs_18, InputArgNum_1, &conv0_Arg_21);
      Arg_21 = ((MR_Word) (conv0_Arg_21));
      CastX_32 = (MR_Integer) (MatchArg_2);
      CastY_33 = (MR_Integer) (Arg_21);
      succeeded = (CastX_32 == CastY_33);
      if (succeeded)
        succeeded = MR_TRUE;
      else
        switch (MR_tag((MR_Word) MatchArg_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_26 = ((MR_Integer) ((MR_hl_field(0, MatchArg_2, 0))));
              MR_Integer ArgY1_27;

              succeeded = ((MR_tag((MR_Word) Arg_21)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_27 = ((MR_Integer) ((MR_hl_field(0, Arg_21, 0))));
                succeeded = (ArgX1_26 == ArgY1_27);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float ArgX1_28 = MR_unbox_float((MR_hl_field(1, MatchArg_2, 0)));
              MR_Float ArgY1_29;

              succeeded = ((MR_tag((MR_Word) Arg_21)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_29 = MR_unbox_float((MR_hl_field(1, Arg_21, 0)));
                succeeded = (ArgX1_28 == ArgY1_29);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_30 = ((MR_String) ((MR_hl_field(2, MatchArg_2, 0))));
              MR_String ArgY1_31;

              succeeded = ((MR_tag((MR_Word) Arg_21)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_31 = ((MR_String) ((MR_hl_field(2, Arg_21, 0))));
                succeeded = (strcmp(ArgX1_30, ArgY1_31) == 0);
              }
            }
            break;
        }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevMatchingFacts_1_24;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_RevMatchingFacts_0_4;

        {
          STATE_VARIABLE_RevMatchingFacts_1_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingFacts_1_24, 0) = ((MR_Box) (Fact_14));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingFacts_1_24, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingFacts_0_4));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Facts_15;
        next_value_of_STATE_VARIABLE_RevMatchingFacts_0_4 = STATE_VARIABLE_RevMatchingFacts_1_24;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_RevMatchingFacts_0_4 = next_value_of_STATE_VARIABLE_RevMatchingFacts_0_4;
        continue;
      }
      else
      {
        *HeadVar__6_6 = HeadVar__3_3;
        *STATE_VARIABLE_RevMatchingFacts_5 = STATE_VARIABLE_RevMatchingFacts_0_4;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_table_data_8_p_0(
  MR_Word OutputStream_1,
  MR_Word MaybeProgressStream_2,
  MR_Integer FactTableArraySize_3,
  MR_String StructName_4,
  MR_Word HeadVar__5_5,
  MR_Integer FactNum_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Fact_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Facts_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Integer Var_28;
      MR_Integer Var_44;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Integer next_value_of_FactNum_6;

      Var_44 = mercury__int__mod_2_f_0(FactNum_6, FactTableArraySize_3);
      succeeded = ((MR_Integer) 0 == Var_44);
      if (succeeded)
      {
        succeeded = (FactNum_6 == (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_String Var_72;

          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "};\n\n");
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "const struct ");
          mercury__io__write_string_4_p_0(OutputStream_1, StructName_4);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "_struct ");
          mercury__io__write_string_4_p_0(OutputStream_1, StructName_4);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), FactNum_6, &Var_72);
          mercury__io__write_string_4_p_0(OutputStream_1, Var_72);
          mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "[] = {\n");
        }
        if (!((MaybeProgressStream_2 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word ProgressStream_31 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_2, 0))));
          MR_String Var_48;

          mercury__io__write_string_4_p_0(ProgressStream_31, (MR_String) "% Writing fact ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), FactNum_6, &Var_48);
          mercury__io__write_string_4_p_0(ProgressStream_31, Var_48);
          mercury__io__write_string_4_p_0(ProgressStream_31, (MR_String) "\n");
        }
      }
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) "\t{");
      ll_backend__fact_table_compile__write_fact_args_4_p_0(OutputStream_1, Fact_21);
      mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) " },\n");
      Var_28 = (MR_Integer) ((MR_Unsigned) FactNum_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Facts_22;
      next_value_of_FactNum_6 = Var_28;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      FactNum_6 = next_value_of_FactNum_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__read_sort_file_line_9_p_0(
  MR_Word InputStream_10,
  MR_String InputFileName_11,
  MR_Word FactArgInfos_12,
  MR_Word Modes_13,
  MR_Word * MaybeSortFileLine_14,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_bool succeeded;
  MR_Word Result_17;

  mercury__io__read_line_4_p_0(InputStream_10, &Result_17);
  switch (MR_tag((MR_Word) Result_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *MaybeSortFileLine_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LineChars_18 = ((MR_Word) ((MR_hl_field(1, Result_17, 0))));
        MR_String LineString_19;
        MR_Word SortFileLine_20;
        MR_String InputArgsString_48;
        MR_String OutputArgsString_57;
        MR_Integer Index0_58;
        MR_Integer Pos0_47;
        MR_String Line1_49;
        MR_String Line2_51;
        MR_Integer Pos1_52;
        MR_String IndexString_53;
        MR_String Line3_54;
        MR_String Line4_56;
        MR_String Var_66;
        MR_String Var_67;
        MR_Char Var_50;
        MR_Char Var_55;

        mercury__string__from_char_list_2_p_0(LineChars_18, &LineString_19);
        succeeded = mercury__string__sub_string_search_3_p_0(LineString_19, (MR_String) "~", &Pos0_47);
        if (succeeded)
        {
          mercury__string__split_4_p_0(LineString_19, Pos0_47, &InputArgsString_48, &Line1_49);
          succeeded = mercury__string__first_char_3_p_3(Line1_49, &Var_50, &Line2_51);
          if (succeeded)
          {
            Var_66 = (MR_String) "~";
            succeeded = mercury__string__sub_string_search_3_p_0(Line2_51, Var_66, &Pos1_52);
            if (succeeded)
            {
              mercury__string__split_4_p_0(Line2_51, Pos1_52, &IndexString_53, &Line3_54);
              succeeded = mercury__string__first_char_3_p_3(Line3_54, &Var_55, &Line4_56);
              if (succeeded)
              {
                Var_67 = (MR_String) "\n";
                succeeded = mercury__string__remove_suffix_3_p_0(Line4_56, Var_67, &OutputArgsString_57);
                if (succeeded)
                  succeeded = mercury__string__to_int_2_p_0(IndexString_53, &Index0_58);
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word InputArgStrings_59;
          MR_Word InputArgs_60;
          MR_Word OutputArgStrings_61;
          MR_Word OutputArgs_64;

          ll_backend__fact_table_compile__split_key_to_arg_strings_2_p_0(InputArgsString_48, &InputArgStrings_59);
          ll_backend__fact_table_compile__get_input_args_list_4_p_0(FactArgInfos_12, Modes_13, InputArgStrings_59, &InputArgs_60);
          ll_backend__fact_table_compile__split_key_to_arg_strings_2_p_0(OutputArgsString_57, &OutputArgStrings_61);
          if ((OutputArgStrings_61 == (MR_Word) ((MR_Unsigned) 0U)))
            OutputArgs_64 = (MR_Word) ((MR_Unsigned) 0U);
          else
            ll_backend__fact_table_compile__get_output_args_list_3_p_0(FactArgInfos_12, OutputArgStrings_61, &OutputArgs_64);
          {
            SortFileLine_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SortFileLine_20, 0) = ((MR_Box) (InputArgs_60));
            MR_hl_field(0, SortFileLine_20, 1) = ((MR_Box) (Index0_58));
            MR_hl_field(0, SortFileLine_20, 2) = ((MR_Box) (OutputArgs_64));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.split_sort_file_line\'/4", (MR_String) "sort file format incorrect");
            return;
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSortFileLine_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SortFileLine_20));
        }
        *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ErrorCode_21 = ((MR_Word) ((MR_hl_field(2, Result_17, 0))));
        MR_String ErrorMessage_22;
        MR_Word Pieces_23;
        MR_Word Spec_24;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_Word Var_40;

        mercury__io__error_message_2_p_0(ErrorCode_21, &ErrorMessage_22);
        {
          Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_33, 1) = ((MR_Box) (InputFileName_11));
        }
        {
          Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_40, 1) = ((MR_Box) (ErrorMessage_22));
        }
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[33])));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
        }
        {
          Pieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_23, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[65])));
          MR_hl_field(1, Pieces_23, 1) = ((MR_Box) (Var_32));
        }
        {
          Spec_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.read_sort_file_line\'/9"));
          MR_hl_field(1, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 80U));
          MR_hl_field(1, Spec_24, 3) = ((MR_Box) (Pieces_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_26 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
        }
        *MaybeSortFileLine_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__get_output_args_list_3_p_0(
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
      MR_Word Info_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Infos_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Type_9 = ((((MR_Unsigned) ((MR_hl_field(0, Info_5, 0))) >> 2)) & (MR_Integer) 3);
      MR_Word IsOutput_11 = ((MR_Unsigned) ((MR_hl_field(0, Info_5, 0))) & (MR_Integer) 1);

      switch (IsOutput_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          if ((ArgStrings0_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.get_output_args_list\'/3", (MR_String) "not enough ArgStrings");
              return;
            }
          else
          {
            MR_String ArgString_12 = ((MR_String) ((MR_hl_field(1, ArgStrings0_2, 0))));
            MR_Word ArgStrings_13 = ((MR_Word) ((MR_hl_field(1, ArgStrings0_2, 1))));
            MR_Word Arg_14;
            MR_Word Args0_15;

            switch (Type_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Float F_19;

                  succeeded = mercury__string__to_float_2_p_0(ArgString_12, &F_19);
                  if (succeeded)
                    {
                      Arg_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Arg_14, 0) = MR_box_float(F_19);
                    }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to float");
                      return;
                    }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Integer Int_18;

                  succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 36, ArgString_12, &Int_18);
                  if (succeeded)
                    {
                      Arg_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Arg_14, 0) = ((MR_Box) (Int_18));
                    }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to int");
                      return;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Chars0_20;
                  MR_Word RevChars_21;
                  MR_Word Chars_22;
                  MR_String S_23;

                  mercury__string__to_char_list_2_p_0(ArgString_12, &Chars0_20);
                  ll_backend__fact_table_compile__remove_sort_file_escapes_3_p_0(Chars0_20, (MR_Word) ((MR_Unsigned) 0U), &RevChars_21);
                  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevChars_21, &Chars_22);
                  mercury__string__from_char_list_2_p_0(Chars_22, &S_23);
                  {
                    Arg_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Arg_14, 0) = ((MR_Box) (S_23));
                  }
                }
                break;
            }
            ll_backend__fact_table_compile__get_output_args_list_3_p_0(Infos_6, ArgStrings_13, &Args0_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Arg_14));
              MR_hl_field(1, base, 1) = ((MR_Box) (Args0_15));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Infos_6;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__get_input_args_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ArgStrings0_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.get_input_args_list\'/4", (MR_String) "too many argmodes");
          return;
        }
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.get_input_args_list\'/4", (MR_String) "too many fact_arg_infos");
          return;
        }
      else
      {
        MR_Word Mode_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word Modes_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

        switch (Mode_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((ArgStrings0_3 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.get_input_args_list\'/4", (MR_String) "not enough ArgStrings");
                return;
              }
            else
            {
              MR_String ArgString_24 = ((MR_String) ((MR_hl_field(1, ArgStrings0_3, 0))));
              MR_Word ArgStrings_25 = ((MR_Word) ((MR_hl_field(1, ArgStrings0_3, 1))));
              MR_Word Type_26 = ((((MR_Unsigned) ((MR_hl_field(0, Var_34, 0))) >> 2)) & (MR_Integer) 3);
              MR_Word Arg_29;
              MR_Word ArgsTail_30;

              switch (Type_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Float F_36;

                    succeeded = mercury__string__to_float_2_p_0(ArgString_24, &F_36);
                    if (succeeded)
                      {
                        Arg_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Arg_29, 0) = MR_box_float(F_36);
                      }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to float");
                        return;
                      }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_35;

                    succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 36, ArgString_24, &Int_35);
                    if (succeeded)
                      {
                        Arg_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Arg_29, 0) = ((MR_Box) (Int_35));
                      }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.convert_key_string_to_arg\'/3", (MR_String) "could not convert string to int");
                        return;
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Chars0_37;
                    MR_Word RevChars_38;
                    MR_Word Chars_39;
                    MR_String S_40;

                    mercury__string__to_char_list_2_p_0(ArgString_24, &Chars0_37);
                    ll_backend__fact_table_compile__remove_sort_file_escapes_3_p_0(Chars0_37, (MR_Word) ((MR_Unsigned) 0U), &RevChars_38);
                    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevChars_38, &Chars_39);
                    mercury__string__from_char_list_2_p_0(Chars_39, &S_40);
                    {
                      Arg_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Arg_29, 0) = ((MR_Box) (S_40));
                    }
                  }
                  break;
              }
              ll_backend__fact_table_compile__get_input_args_list_4_p_0(Var_33, Modes_21, ArgStrings_25, &ArgsTail_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Arg_29));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArgsTail_30));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_33;
              MR_Word next_value_of_HeadVar__2_2 = Modes_21;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__remove_sort_file_escapes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevChars_0_2,
  MR_Word * STATE_VARIABLE_RevChars_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevChars_3 = STATE_VARIABLE_RevChars_0_2;
    else
    {
      MR_Char C0_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
      MR_Word Cs0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      succeeded = (C0_7 == (MR_Char) 92);
      if (succeeded)
        if ((Cs0_8 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.remove_sort_file_escapes\'/3", (MR_String) "something went wrong");
            return;
          }
        else
        {
          MR_Char C1_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, Cs0_8, 0)));
          MR_Word Cs1_11 = ((MR_Word) ((MR_hl_field(1, Cs0_8, 1))));
          MR_Char C_12;
          MR_Word STATE_VARIABLE_RevChars_1_17;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_RevChars_0_2;

          succeeded = (C1_10 == (MR_Char) 92);
          if (succeeded)
            C_12 = (MR_Char) 92;
          else
          {
            succeeded = (C1_10 == (MR_Char) 99);
            if (succeeded)
              C_12 = (MR_Char) 58;
            else
            {
              succeeded = (C1_10 == (MR_Char) 116);
              if (succeeded)
                C_12 = (MR_Char) 126;
              else
              {
                succeeded = (C1_10 == (MR_Char) 110);
                if (succeeded)
                  C_12 = (MR_Char) 10;
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.remove_sort_file_escapes\'/3", (MR_String) "something went wrong");
                    return;
                  }
              }
            }
          }
          {
            STATE_VARIABLE_RevChars_1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevChars_1_17, 0) = ((MR_Box) (MR_Word) (C_12));
            MR_hl_field(1, STATE_VARIABLE_RevChars_1_17, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_2));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Cs1_11;
          next_value_of_STATE_VARIABLE_RevChars_0_2 = STATE_VARIABLE_RevChars_1_17;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_RevChars_0_2 = next_value_of_STATE_VARIABLE_RevChars_0_2;
          continue;
        }
      else
      {
        MR_Word STATE_VARIABLE_RevChars_3_21;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_RevChars_0_2;

        {
          STATE_VARIABLE_RevChars_3_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevChars_3_21, 0) = ((MR_Box) (MR_Word) (C0_7));
          MR_hl_field(1, STATE_VARIABLE_RevChars_3_21, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_2));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Cs0_8;
        next_value_of_STATE_VARIABLE_RevChars_0_2 = STATE_VARIABLE_RevChars_3_21;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_RevChars_0_2 = next_value_of_STATE_VARIABLE_RevChars_0_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__split_key_to_arg_strings_2_p_0(
  MR_String Key0_3,
  MR_Word * ArgStrings_4)
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

      ll_backend__fact_table_compile__split_key_to_arg_strings_2_p_0(Key2_9, &ArgStrings0_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ArgStrings_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgString_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgStrings0_10));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.split_key_to_arg_strings\'/2", (MR_String) "sort file key format is incorrect");
        return;
      }
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__write_new_data_array_opening_brace_5_p_0(
  MR_Word OutputStream_6,
  MR_String StructName_7,
  MR_Integer FactNum_8)
{
  MR_String Var_28;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "const struct ");
  mercury__io__write_string_4_p_0(OutputStream_6, StructName_7);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "_struct ");
  mercury__io__write_string_4_p_0(OutputStream_6, StructName_7);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), FactNum_8, &Var_28);
  mercury__io__write_string_4_p_0(OutputStream_6, Var_28);
  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "[] = {\n");
}

static void MR_CALL 
ll_backend__fact_table_compile__infer_determinism_pass_2_9_p_0(
  MR_Word MaybeProgressStream_1,
  MR_Word GenInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_ProcTable_5 = STATE_VARIABLE_ProcTable_0_4;
    }
    else
    {
      MR_Integer ProcId_23;
      MR_String FileName_24;
      MR_Word ProcFiles_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ProcInfo0_29;
      MR_String Command0_30;
      MR_String Command_31;
      MR_Word Result_32;
      MR_Word Determinism_40;
      MR_Word ProcInfo_46;
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word STATE_VARIABLE_Specs_1_110;
      MR_Word STATE_VARIABLE_ProcTable_1_114;
      MR_String Var_119;
      MR_String Var_121;
      MR_String Var_122;
      MR_String Var_124;
      MR_String Var_125;
      MR_Box conv0_ProcInfo0_29;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      ProcId_23 = ((MR_Integer) ((MR_hl_field(0, Var_53, 0))));
      FileName_24 = ((MR_String) ((MR_hl_field(0, Var_53, 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (ProcId_23)), &conv0_ProcInfo0_29);
      ProcInfo0_29 = ((MR_Word) (conv0_ProcInfo0_29));
      Var_119 = mercury__string__f_43_43_2_f_0(FileName_24, (MR_String) " | LC_ALL=C sort -cu >/dev/null 2>&1");
      Var_121 = mercury__string__f_43_43_2_f_0((MR_String) " && cut -d\'~\' -f1 ", Var_119);
      Var_122 = mercury__string__f_43_43_2_f_0(FileName_24, Var_121);
      Var_124 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_122);
      Var_125 = mercury__string__f_43_43_2_f_0(FileName_24, Var_124);
      Command0_30 = mercury__string__f_43_43_2_f_0((MR_String) "LC_ALL=C sort -o ", Var_125);
      libs__system_cmds__make_command_string_3_p_0(Command0_30, (MR_Integer) 1, &Command_31);
      if ((MaybeProgressStream_1 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__call_system__call_system_4_p_0(Command_31, &Result_32);
      else
      {
        MR_Word ProgressStream_33 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_1, 0))));

        mercury__io__write_string_4_p_0(ProgressStream_33, (MR_String) "% Invoking system command \140");
        mercury__io__write_string_4_p_0(ProgressStream_33, Command_31);
        mercury__io__write_string_4_p_0(ProgressStream_33, (MR_String) "\' ...");
        mercury__io__call_system__call_system_4_p_0(Command_31, &Result_32);
        mercury__io__write_string_4_p_0(ProgressStream_33, (MR_String) "done.\n");
      }
      if (((MR_tag((MR_Word) Result_32)) == (MR_Integer) 1))
      {
        MR_Word ErrorCode_45 = ((MR_Word) ((MR_hl_field(1, Result_32, 0))));

        ll_backend__fact_table_compile__add_call_system_error_6_p_0((MR_String) "sort", ErrorCode_45, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_1_110);
        Determinism_40 = (MR_Integer) 6;
      }
      else
      {
        MR_Integer ExitStatus_34 = ((MR_Integer) ((MR_hl_field(0, Result_32, 0))));

        succeeded = (ExitStatus_34 == (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_Word MaybeAllInProcId_37;

          succeeded = (ProcFiles_25 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeAllInProcId_37 = ((MR_Word) ((MR_hl_field(0, GenInfo_2, 2))));
            succeeded = (MaybeAllInProcId_37 != (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          Determinism_40 = (MR_Integer) 1;
          STATE_VARIABLE_Specs_1_110 = STATE_VARIABLE_Specs_0_6;
        }
        else
        {
          succeeded = (ExitStatus_34 >= (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word MaybeDet_41;
            MR_Word Var_117;

            hlds__hlds_proc__proc_info_get_declared_determinism_2_p_0(ProcInfo0_29, &MaybeDet_41);
            succeeded = (MaybeDet_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_117 = ((MR_Word) ((MR_hl_field(1, MaybeDet_41, 0))));
              switch (Var_117) {
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
              Determinism_40 = (MR_Integer) 5;
            else
              Determinism_40 = (MR_Integer) 3;
            STATE_VARIABLE_Specs_1_110 = STATE_VARIABLE_Specs_0_6;
          }
          else
          {
            MR_String ProgName_42;
            MR_Word Pieces_43;
            MR_Word Spec_44;
            MR_Word Var_79;

            mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_42);
            {
              Var_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_79, 0) = ((MR_Box) (ProgName_42));
            }
            {
              Pieces_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_43, 0) = ((MR_Box) (Var_79));
              MR_hl_field(1, Pieces_43, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[60])));
            }
            {
              Spec_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.infer_determinism_pass_2\'/9"));
              MR_hl_field(1, Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 80U));
              MR_hl_field(1, Spec_44, 3) = ((MR_Box) (Pieces_43));
            }
            {
              STATE_VARIABLE_Specs_1_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_110, 0) = ((MR_Box) (Spec_44));
              MR_hl_field(1, STATE_VARIABLE_Specs_1_110, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_6));
            }
            Determinism_40 = (MR_Integer) 6;
          }
        }
      }
      hlds__hlds_proc__proc_info_set_inferred_determinism_3_p_0(Determinism_40, ProcInfo0_29, &ProcInfo_46);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_46)), STATE_VARIABLE_ProcTable_0_4, &STATE_VARIABLE_ProcTable_1_114);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcFiles_25;
      next_value_of_STATE_VARIABLE_ProcTable_0_4 = STATE_VARIABLE_ProcTable_1_114;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_1_110;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ProcTable_0_4 = next_value_of_STATE_VARIABLE_ProcTable_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__add_call_system_error_6_p_0(
  MR_String Cmd_7,
  MR_Word ErrorCode_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_String ProgName_11;
  MR_String ErrorMsg_12;
  MR_Word Pieces_13;
  MR_Word Spec_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_51;
  MR_Word Var_52;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_11);
  mercury__io__error_message_2_p_0(ErrorCode_8, &ErrorMsg_12);
  {
    Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_21, 0) = ((MR_Box) (ProgName_11));
  }
  Var_23 = (MR_Word) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[33]));
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (Cmd_7));
  }
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (ErrorMsg_12));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[100])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[101])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
  }
  {
    Pieces_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_13, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Pieces_13, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (Pieces_13));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_47, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_47, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_47, 4) = ((MR_Box) (Var_51));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.add_call_system_error\'/6"));
    MR_hl_field(2, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 80U));
    MR_hl_field(2, Spec_14, 3) = ((MR_Box) (Var_46));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__close_sort_files_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ProcStream_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ProcStreams_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(0, ProcStream_8, 0))));
    MR_String FileName_11 = ((MR_String) ((MR_hl_field(0, ProcStream_8, 2))));
    MR_Word ProcFiles_12;
    MR_Word Stream_15 = ((MR_Word) ((MR_hl_field(0, ProcStream_8, 3))));
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (ProcId_10));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (FileName_11));
    }
    mercury__io__close_output_3_p_0(Stream_15);
    ll_backend__fact_table_compile__close_sort_files_4_p_0(ProcStreams_9, &ProcFiles_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (ProcFiles_12));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__fact_table_compile__open_sort_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_44;

  conv1_LambdaHeadVar__2_44 = ll_backend__fact_table_compile__IntroducedFrom__func__open_sort_files__890__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_44));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table_compile__open_sort_files_7_p_0(
  MR_Word ProcMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
  }
  else
  {
    MR_Integer HeadProcId_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailProcIds_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word SortFileNameResult_21;

    libs__file_util__open_temp_output_3_p_0(&SortFileNameResult_21);
    if (((MR_tag((MR_Word) SortFileNameResult_21)) == (MR_Integer) 1))
    {
      MR_String ErrorMessage_35 = ((MR_String) ((MR_hl_field(1, SortFileNameResult_21, 0))));
      MR_Word Var_47;
      MR_Word Var_49;
      MR_Word Spec_60;

      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (ErrorMessage_35));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) (*HeadVar__3_3));
      }
      {
        Spec_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_60, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.add_error_pieces\'/3"));
        MR_hl_field(1, Spec_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_60, 2) = ((MR_Box) ((MR_Unsigned) 80U));
        MR_hl_field(1, Spec_60, 3) = ((MR_Box) (Var_47));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_60));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
      }
    }
    else
    {
      MR_String SortFileName_22;
      MR_Word Stream_23;
      MR_Word ProcEntry_24;
      MR_Word FactTableVars_25;
      MR_Word Modes_28;
      MR_Word HeadProcStream_33;
      MR_Word TailProcStreams_34;
      MR_Tuple Var_41 = ((MR_Tuple) ((MR_hl_field(0, SortFileNameResult_21, 0))));
      MR_Box conv0_ProcEntry_24;

      SortFileName_22 = ((MR_String) ((MR_hl_field(0, Var_41, 0))));
      Stream_23 = ((MR_Word) ((MR_hl_field(0, Var_41, 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0), ProcMap_1, ((MR_Box) (HeadProcId_16)), &conv0_ProcEntry_24);
      ProcEntry_24 = ((MR_Word) (conv0_ProcEntry_24));
      FactTableVars_25 = ((MR_Word) ((MR_hl_field(0, ProcEntry_24, 0))));
      Modes_28 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_mode_0), (MR_Word) (&ll_backend__fact_table_compile_scalar_common_2[2]), FactTableVars_25);
      {
        HeadProcStream_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadProcStream_33, 0) = ((MR_Box) (HeadProcId_16));
        MR_hl_field(0, HeadProcStream_33, 1) = ((MR_Box) (Modes_28));
        MR_hl_field(0, HeadProcStream_33, 2) = ((MR_Box) (SortFileName_22));
        MR_hl_field(0, HeadProcStream_33, 3) = ((MR_Box) (Stream_23));
      }
      ll_backend__fact_table_compile__open_sort_files_7_p_0(ProcMap_1, TailProcIds_17, &TailProcStreams_34, STATE_VARIABLE_Specs_0_4, STATE_VARIABLE_Specs_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadProcStream_33));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailProcStreams_34));
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__create_fact_table_header_4_p_0(
  MR_Word PredSymName_5,
  MR_Word FactArgInfos_6,
  MR_String * HeaderCode_7,
  MR_String * StructName_8)
{
  MR_bool succeeded;
  MR_String PredSymNameStr_9;
  MR_String StructContents_10;
  MR_String StructDef_11;
  MR_String Var_14;

  PredSymNameStr_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredSymName_5);
  Var_14 = mercury__string__f_43_43_2_f_0(PredSymNameStr_9, (MR_String) "_fact_table");
  *StructName_8 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_14);
  ll_backend__fact_table_compile__create_fact_table_struct_3_p_0(FactArgInfos_6, (MR_Integer) 1, &StructContents_10);
  succeeded = (strcmp(StructContents_10, (MR_String) "") == 0);
  if (succeeded)
    StructDef_11 = (MR_String) "";
  else
  {
    MR_String Var_18;
    MR_String Var_19;
    MR_String Var_21;

    Var_21 = mercury__string__f_43_43_2_f_0(StructContents_10, (MR_String) "};\n\n");
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "_struct {\n", Var_21);
    Var_18 = mercury__string__f_43_43_2_f_0(*StructName_8, Var_19);
    StructDef_11 = mercury__string__f_43_43_2_f_0((MR_String) "struct ", Var_18);
  }
  *HeaderCode_7 = mercury__string__f_43_43_2_f_0(StructDef_11, (MR_String) "\n#ifndef MERCURY_FACT_TABLE_HASH_TABLES\n#define MERCURY_FACT_TABLE_HASH_TABLES\n\nstruct MR_fact_table_hash_table_s {\n    MR_Integer size;                        " "    // size of the hash table\n    struct MR_fact_table_hash_entry_s *table;   // the actual table\n};\n\nstruct MR_fact_table_hash_table_f {\n    MR_Integer size;  " "                          // size of the hash table\n    struct MR_fact_table_hash_entry_f *table;   // the actual table\n};\n\nstruct MR_fact_table_hash_table_i {\n" "    MR_Integer size;                            // size of the hash table\n    struct MR_fact_table_hash_entry_i *table;   // the actual table\n};\n\n// hash table " "for string keys\nstruct MR_fact_table_hash_entry_s {\n    MR_ConstString  key;        // lookup key\n    const MR_Word   *index;     // index into fact table data " "array or\n                                // pointer to hash table for next argument\n#if TAGBITS < 2\n    short type;                 // 0 if entry empty,\n       " "                         // 1 if entry is a pointer to the data table\n                                // 2 if entry is a pointer to another\n                    " "            //   hash table\n#endif\n    int next;                   // location of next entry with the same hash\n                                // value\n};\n\n// " "hash table for float keys\nstruct MR_fact_table_hash_entry_f {\n    MR_Float        key;\n    const MR_Word   *index;\n#if TAGBITS < 2\n    short           type;\n#en" "dif\n    int             next;\n};\n\n// hash table for int keys\nstruct MR_fact_table_hash_entry_i {\n    MR_Integer      key;\n    const MR_Word   *index;\n#if TAGBIT" "S < 2\n    short           type;\n#endif\n    int             next;\n};\n\n#if TAGBITS >= 2\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           MR_mkword(MR_m" "ktag(t), MR_mkbody(i))\n    #define MR_FACT_TABLE_MAKE_TAGGED_POINTER(p, t)         MR_mkword(MR_mktag(t), p)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)       " "         MR_tag((MR_Word)((p).index))\n    #define MR_FACT_TABLE_HASH_INDEX(w)                     MR_unmkbody(w)\n    #define MR_FACT_TABLE_HASH_POINTER(w)      " "             MR_body(w, MR_tag(w))\n#else\n    #define MR_FACT_TABLE_MAKE_TAGGED_INDEX(i, t)           ((const MR_Word *) i), (t)\n    #define MR_FACT_TABLE_MAKE_T" "AGGED_POINTER(p, t)         ((const MR_Word *) p), (t)\n    #define MR_FACT_TABLE_HASH_ENTRY_TYPE(p)       ((p).type)\n    #define MR_FACT_TABLE_HASH_INDEX(w)    " "        (w)\n    #define MR_FACT_TABLE_HASH_POINTER(w)          (w)\n#endif\n\n#endif // not MERCURY_FACT_TABLE_HASH_TABLES\n");
}

static void MR_CALL 
ll_backend__fact_table_compile__create_fact_table_struct_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_String * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Info_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Infos_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String StructContentsTail_9;
    MR_Word Type_10;
    MR_Word IsOutput_12;
    MR_String TypeStr_13;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);

    ll_backend__fact_table_compile__create_fact_table_struct_3_p_0(Infos_6, Var_15, &StructContentsTail_9);
    Type_10 = ((((MR_Unsigned) ((MR_hl_field(0, Info_5, 0))) >> 2)) & (MR_Integer) 3);
    IsOutput_12 = ((MR_Unsigned) ((MR_hl_field(0, Info_5, 0))) & (MR_Integer) 1);
    switch (Type_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        TypeStr_13 = (MR_String) "MR_Float";
        break;
      case (MR_Integer) 0:
        TypeStr_13 = (MR_String) "MR_Integer";
        break;
      case (MR_Integer) 2:
        TypeStr_13 = (MR_String) "MR_ConstString";
        break;
    }
    switch (IsOutput_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String StructField_14;
          MR_String Var_24;
          MR_String Var_31;
          MR_String Var_33;
          MR_String Var_34;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), ArgNum_2, &Var_24);
          Var_31 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) ";\n");
          Var_33 = mercury__string__f_43_43_2_f_0((MR_String) " V_", Var_31);
          Var_34 = mercury__string__f_43_43_2_f_0(TypeStr_13, Var_33);
          StructField_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_34);
          mercury__string__append_3_p_2(StructField_14, StructContentsTail_9, HeadVar__3_3);
        }
        break;
      case (MR_Integer) 0:
        *HeadVar__3_3 = StructContentsTail_9;
        break;
    }
  }
}

static MR_String MR_CALL 
ll_backend__fact_table_compile__fact_table_file_header_1_f_0(
  MR_String FileName_3)
{
  MR_String FileHeader_4;
  MR_String Version_5;
  MR_String Fullarch_6;
  MR_Word Var_7;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_19;

  mercury__library__version_2_p_0(&Version_5, &Fullarch_6);
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Fullarch_6));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[37])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) ((MR_String) "// configured for "));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) ((MR_String) ",\n"));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Version_5));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) ((MR_String) "// by the Mercury compiler, version "));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) ((MR_String) "\'\n"));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_12));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (FileName_3));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_10));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) ((MR_String) "// Automatically generated from \140"));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (Var_9));
  }
  mercury__string__append_list_2_p_0(Var_7, &FileHeader_4);
  return FileHeader_4;
}

static void MR_CALL 
ll_backend__fact_table_compile__read_in_and_compile_facts_15_p_0(
  MR_Word FileStream_16,
  MR_String FileName_17,
  MR_Word MaybeProgressStream_18,
  MR_Integer FactTableArraySize_19,
  MR_Word PredInfo_20,
  MR_Integer NumFactArgInfos_21,
  MR_Word FactArgInfos_22,
  MR_Word ProcStreams_23,
  MR_Word MaybeOutput_24,
  MR_Integer STATE_VARIABLE_FactNum_0_38,
  MR_Integer * STATE_VARIABLE_FactNum_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result0_28;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FileStream_16, &Result0_28);
    switch (MR_tag((MR_Word) Result0_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_FactNum_39 = STATE_VARIABLE_FactNum_0_38;
          *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Message_29 = ((MR_String) ((MR_hl_field(1, Result0_28, 0))));
          MR_Integer LineNum_30 = ((MR_Integer) ((MR_hl_field(1, Result0_28, 1))));
          MR_Word Context_31;
          MR_Word Var_45;
          MR_Word Var_47;
          MR_Word Spec_73;

          {
            Context_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Context_31, 0) = ((MR_Box) (FileName_17));
            MR_hl_field(0, Context_31, 1) = ((MR_Box) (LineNum_30));
          }
          {
            Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_47, 1) = ((MR_Box) (Message_29));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_47));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.add_error_context_and_pieces\'/4"));
            MR_hl_field(0, Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 80U));
            MR_hl_field(0, Spec_73, 3) = ((MR_Box) (Context_31));
            MR_hl_field(0, Spec_73, 4) = ((MR_Box) (Var_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_41 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_73));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
          }
          *STATE_VARIABLE_FactNum_39 = STATE_VARIABLE_FactNum_0_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word VarSet_32 = ((MR_Word) ((MR_hl_field(2, Result0_28, 0))));
          MR_Word Term_33 = ((MR_Word) ((MR_hl_field(2, Result0_28, 1))));
          MR_Word CheckSpecs_35;
          MR_Integer STATE_VARIABLE_FactNum_1_56;
          MR_Word STATE_VARIABLE_Specs_2_58;
          MR_Integer Var_61;
          MR_Integer next_value_of_STATE_VARIABLE_FactNum_0_38;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_40;

          Var_61 = mercury__int__mod_2_f_0(STATE_VARIABLE_FactNum_0_38, FactTableArraySize_19);
          succeeded = ((MR_Integer) 0 == Var_61);
          if (succeeded)
            if (!((MaybeProgressStream_18 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word ProgressStream_34 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_18, 0))));
              MR_String Var_65;

              mercury__io__write_string_4_p_0(ProgressStream_34, (MR_String) "% Read fact ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), STATE_VARIABLE_FactNum_0_38, &Var_65);
              mercury__io__write_string_4_p_0(ProgressStream_34, Var_65);
              mercury__io__write_string_4_p_0(ProgressStream_34, (MR_String) "\n");
            }
          ll_backend__fact_table_compile__check_and_compile_fact_term_15_p_0(FileStream_16, FileName_17, MaybeProgressStream_18, FactTableArraySize_19, PredInfo_20, NumFactArgInfos_21, FactArgInfos_22, STATE_VARIABLE_FactNum_0_38, VarSet_32, Term_33, ProcStreams_23, MaybeOutput_24, &CheckSpecs_35);
          if ((CheckSpecs_35 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_FactNum_1_56 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FactNum_0_38 + (MR_Unsigned) 1);
            STATE_VARIABLE_Specs_2_58 = STATE_VARIABLE_Specs_0_40;
          }
          else
          {
            STATE_VARIABLE_Specs_2_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), CheckSpecs_35, STATE_VARIABLE_Specs_0_40);
            STATE_VARIABLE_FactNum_1_56 = STATE_VARIABLE_FactNum_0_38;
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_FactNum_0_38 = STATE_VARIABLE_FactNum_1_56;
          next_value_of_STATE_VARIABLE_Specs_0_40 = STATE_VARIABLE_Specs_2_58;
          STATE_VARIABLE_FactNum_0_38 = next_value_of_STATE_VARIABLE_FactNum_0_38;
          STATE_VARIABLE_Specs_0_40 = next_value_of_STATE_VARIABLE_Specs_0_40;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__check_and_compile_fact_term_15_p_0(
  MR_Word FileStream_16,
  MR_String FileName_17,
  MR_Word MaybeProgressStream_18,
  MR_Integer FactTableArraySize_19,
  MR_Word PredInfo_20,
  MR_Integer NumFactArgInfos_21,
  MR_Word FactArgInfos_22,
  MR_Integer FactNum_23,
  MR_Word VarSet_24,
  MR_Word Term_25,
  MR_Word ProcStreams_26,
  MR_Word MaybeOutput_27,
  MR_Word * Specs_28)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_25)) == (MR_Integer) 0))
  {
    MR_Word Functor_35 = ((MR_Word) ((MR_hl_field(0, Term_25, 0))));
    MR_Word ArgTerms0_36 = ((MR_Word) ((MR_hl_field(0, Term_25, 1))));
    MR_Word Context_115 = ((MR_Word) ((MR_hl_field(0, Term_25, 2))));
    MR_String FunctorAtom_37;

    succeeded = ((MR_tag((MR_Word) Functor_35)) == (MR_Integer) 0);
    if (succeeded)
    {
      FunctorAtom_37 = ((MR_String) ((MR_hl_field(0, Functor_35, 0))));
      {
        MR_Word PredOrFunc_38;
        MR_String PredName_39;
        MR_Word ArgTerms_40;

        PredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_20);
        hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_20, &PredName_39);
        switch (PredOrFunc_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_117_117;
              MR_Word BeforeEqualTerm_41;
              MR_Word BeforeEqualTerms_43;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_String Var_120;

              succeeded = (strcmp(FunctorAtom_37, (MR_String) "=") == 0);
              if (succeeded)
              {
                succeeded = (ArgTerms0_36 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BeforeEqualTerm_41 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_36, 0))));
                  Var_63 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_36, 1))));
                  succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_64 = ((MR_Word) ((MR_hl_field(1, Var_63, 1))));
                    succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) BeforeEqualTerm_41)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_65 = ((MR_Word) ((MR_hl_field(0, BeforeEqualTerm_41, 0))));
                        BeforeEqualTerms_43 = ((MR_Word) ((MR_hl_field(0, BeforeEqualTerm_41, 1))));
                        succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_120 = ((MR_String) ((MR_hl_field(0, Var_65, 0))));
                          succeeded = (strcmp(PredName_39, Var_120) == 0);
                          if (succeeded)
                          {
                            TypeInfo_117_117 = (MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[0]);
                            ArgTerms_40 = mercury__list__f_43_43_2_f_0(TypeInfo_117_117, BeforeEqualTerms_43, Var_63);
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
              succeeded = (strcmp(FunctorAtom_37, PredName_39) == 0);
              if (succeeded)
              {
                ArgTerms_40 = ArgTerms0_36;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        if (succeeded)
          ll_backend__fact_table_compile__check_and_compile_fact_term_args_14_p_0(MaybeProgressStream_18, FactTableArraySize_19, PredInfo_20, NumFactArgInfos_21, FactArgInfos_22, FactNum_23, VarSet_24, ArgTerms_40, Context_115, ProcStreams_26, MaybeOutput_27, Specs_28);
        else
        {
          MR_Word PredDotPieces_45;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_86;
          MR_Word Var_91;
          MR_Word Pieces_110;

          PredDotPieces_45 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_3[4])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[8])), PredInfo_20);
          Var_81 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[12])));
          Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredDotPieces_45, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])));
          Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[14])), Var_91);
          Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, Var_86);
          Pieces_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[10])), Var_80);
          ll_backend__fact_table_compile__add_error_context_and_pieces_4_p_0(Context_115, Pieces_110, (MR_Word) ((MR_Unsigned) 0U), Specs_28);
        }
      }
    }
    else
    {
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Pieces_113;

      Var_101 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[18])));
      Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])));
      Pieces_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[16])), Var_100);
      ll_backend__fact_table_compile__add_error_context_and_pieces_4_p_0(Context_115, Pieces_113, (MR_Word) ((MR_Unsigned) 0U), Specs_28);
    }
  }
  else
  {
    MR_Integer LineNum_32;
    MR_Word Context_33;
    MR_Word Pieces_34;
    MR_Word Var_53;
    MR_Word Var_54;

    mercury__io__get_line_number_4_p_0(FileStream_16, &LineNum_32);
    {
      Context_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Context_33, 0) = ((MR_Box) (FileName_17));
      MR_hl_field(0, Context_33, 1) = ((MR_Box) (LineNum_32));
    }
    Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[18])));
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])));
    Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[16])), Var_53);
    ll_backend__fact_table_compile__add_error_context_and_pieces_4_p_0(Context_33, Pieces_34, (MR_Word) ((MR_Unsigned) 0U), Specs_28);
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__add_error_context_and_pieces_4_p_0(
  MR_Word Context_5,
  MR_Word Pieces_6,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  MR_Word Spec_8;

  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.add_error_context_and_pieces\'/4"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 80U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_8));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__check_and_compile_fact_term_args_14_p_0(
  MR_Word MaybeProgressStream_15,
  MR_Integer FactTableArraySize_16,
  MR_Word PredInfo_17,
  MR_Integer NumFactArgInfos_18,
  MR_Word FactArgInfos_19,
  MR_Integer FactNum_20,
  MR_Word VarSet_21,
  MR_Word ArgTerms_22,
  MR_Word Context_23,
  MR_Word ProcStreams_24,
  MR_Word MaybeOutput_25,
  MR_Word * Specs_26)
{
  MR_bool succeeded;
  MR_Integer NumArgTerms_28;

  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_1[0]), ArgTerms_22, &NumArgTerms_28);
  succeeded = (NumFactArgInfos_18 == NumArgTerms_28);
  if (succeeded)
  {
    MR_Word PredOrFunc_29;
    MR_Word FactArgs_30;
    MR_String FactNumStr_31;
    MR_Word Var_39;
    MR_Word OutputStream_32;
    MR_String StructName_33;
    MR_Word Var_41;

    PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_17);
    ll_backend__fact_table_compile__check_fact_type_and_mode_8_p_0(PredOrFunc_29, VarSet_21, FactArgInfos_19, ArgTerms_22, (MR_Integer) 1, &FactArgs_30, (MR_Word) ((MR_Unsigned) 0U), Specs_26);
    mercury__string__int_to_string_2_p_0(FactNum_20, &FactNumStr_31);
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (FactArgInfos_19));
    }
    ll_backend__fact_table_compile__write_sort_file_lines_6_p_0(FactNumStr_31, FactArgs_30, Var_39, ProcStreams_24);
    succeeded = (*Specs_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeOutput_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_41 = ((MR_Word) ((MR_hl_field(1, MaybeOutput_25, 0))));
        OutputStream_32 = ((MR_Word) ((MR_hl_field(0, Var_41, 0))));
        StructName_33 = ((MR_String) ((MR_hl_field(0, Var_41, 1))));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      ll_backend__fact_table_compile__write_fact_data_8_p_0(OutputStream_32, MaybeProgressStream_15, FactTableArraySize_16, StructName_33, FactArgs_30, FactNum_20);
  }
  else
  {
    MR_Word Pieces_34;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Spec_77;

    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (NumFactArgInfos_18));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_51 = parse_tree__error_spec__color_as_correct_1_f_0(Var_52);
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_66, 1) = ((MR_Box) (NumArgTerms_28));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[8])));
    }
    Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_65);
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])));
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[26])), Var_63);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_55);
    Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[22])), Var_50);
    {
      Spec_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.add_error_context_and_pieces\'/4"));
      MR_hl_field(0, Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 80U));
      MR_hl_field(0, Spec_77, 3) = ((MR_Box) (Context_23));
      MR_hl_field(0, Spec_77, 4) = ((MR_Box) (Pieces_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_26 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_77));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_data_8_p_0(
  MR_Word OutputStream_9,
  MR_Word MaybeProgressStream_10,
  MR_Integer FactTableArraySize_11,
  MR_String StructName_12,
  MR_Word Args_13,
  MR_Integer FactNum_14)
{
  MR_bool succeeded;
  MR_Integer Var_31;

  Var_31 = mercury__int__mod_2_f_0(FactNum_14, FactTableArraySize_11);
  succeeded = ((MR_Integer) 0 == Var_31);
  if (succeeded)
  {
    succeeded = (FactNum_14 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_59;

      mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "};\n\n");
      mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "const struct ");
      mercury__io__write_string_4_p_0(OutputStream_9, StructName_12);
      mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "_struct ");
      mercury__io__write_string_4_p_0(OutputStream_9, StructName_12);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), FactNum_14, &Var_59);
      mercury__io__write_string_4_p_0(OutputStream_9, Var_59);
      mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "[] = {\n");
    }
    if (!((MaybeProgressStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProgressStream_16 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_10, 0))));
      MR_String Var_35;

      mercury__io__write_string_4_p_0(ProgressStream_16, (MR_String) "% Writing fact ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_compile_scalar_common_3[3]), FactNum_14, &Var_35);
      mercury__io__write_string_4_p_0(ProgressStream_16, Var_35);
      mercury__io__write_string_4_p_0(ProgressStream_16, (MR_String) "\n");
    }
  }
  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "\t{");
  ll_backend__fact_table_compile__write_fact_args_4_p_0(OutputStream_9, Args_13);
  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) " },\n");
}

static void MR_CALL 
ll_backend__fact_table_compile__write_fact_args_4_p_0(
  MR_Word OutputStream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FactArg_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word FactArgs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) FactArg_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Int_14 = ((MR_Integer) ((MR_hl_field(0, FactArg_10, 0))));

            mercury__io__write_int_4_p_0(OutputStream_1, Int_14);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ", ");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float Float_15 = MR_unbox_float((MR_hl_field(1, FactArg_10, 0)));

            mercury__io__write_float_4_p_0(OutputStream_1, Float_15);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ", ");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String String_13 = ((MR_String) ((MR_hl_field(2, FactArg_10, 0))));

            backend_libs__c_util__output_quoted_string_c_4_p_0(OutputStream_1, String_13);
            mercury__io__write_string_4_p_0(OutputStream_1, (MR_String) ", ");
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = FactArgs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__write_sort_file_lines_6_p_0(
  MR_String FactNumStr_1,
  MR_Word FactArgs_2,
  MR_Word IsPrimary_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ProcStream_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ProcStreams_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Modes_20 = ((MR_Word) ((MR_hl_field(0, ProcStream_16, 1))));
      MR_Word Stream_22 = ((MR_Word) ((MR_hl_field(0, ProcStream_16, 3))));
      MR_String Key_23;
      MR_String DataString_25;
      MR_Word next_value_of_HeadVar__4_4;

      ll_backend__fact_table_compile__make_sort_file_key_3_p_0(Modes_20, FactArgs_2, &Key_23);
      if ((IsPrimary_3 == (MR_Word) ((MR_Unsigned) 0U)))
        DataString_25 = (MR_String) "";
      else
      {
        MR_Word FactArgInfos_24 = ((MR_Word) ((MR_hl_field(1, IsPrimary_3, 0))));

        ll_backend__fact_table_compile__make_fact_data_string_3_p_0(FactArgInfos_24, FactArgs_2, &DataString_25);
      }
      mercury__io__write_string_4_p_0(Stream_22, Key_23);
      mercury__io__write_string_4_p_0(Stream_22, (MR_String) "~");
      mercury__io__write_string_4_p_0(Stream_22, FactNumStr_1);
      mercury__io__write_string_4_p_0(Stream_22, (MR_String) "~");
      mercury__io__write_string_4_p_0(Stream_22, DataString_25);
      mercury__io__write_string_4_p_0(Stream_22, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcStreams_17;
      IsPrimary_3 = (MR_Word) ((MR_Unsigned) 0U);
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__make_fact_data_string_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_String) "";
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.make_fact_data_string\'/3", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.make_fact_data_string\'/3", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_String TailString_19;
      MR_Word HeadIsOutput_22;

      ll_backend__fact_table_compile__make_fact_data_string_3_p_0(Var_26, TailArgs_17, &TailString_19);
      HeadIsOutput_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_27, 0))) & (MR_Integer) 1);
      switch (HeadIsOutput_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String HeadString_23;
            MR_String Var_24;

            switch (MR_tag((MR_Word) HeadArg_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_28 = ((MR_Integer) ((MR_hl_field(0, HeadArg_16, 0))));

                  HeadString_23 = mercury__string__int_to_base_string_2_f_0(Int_28, (MR_Integer) 36);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Float F_29 = MR_unbox_float((MR_hl_field(1, HeadArg_16, 0)));

                  HeadString_23 = mercury__string__float_to_string_1_f_0(F_29);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Str_30 = ((MR_String) ((MR_hl_field(2, HeadArg_16, 0))));
                  MR_Word Chars_31;
                  MR_Word EscapedChars_32;
                  MR_Word EscapedCharsCord_34;
                  MR_Word Var_35;

                  mercury__string__to_char_list_2_p_0(Str_30, &Chars_31);
                  Var_35 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
                  ll_backend__fact_table_compile__key_from_chars_loop_3_p_0(Chars_31, Var_35, &EscapedCharsCord_34);
                  EscapedChars_32 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapedCharsCord_34);
                  mercury__string__from_char_list_2_p_0(EscapedChars_32, &HeadString_23);
                }
                break;
            }
            Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ":", TailString_19);
            *HeadVar__3_3 = mercury__string__f_43_43_2_f_0(HeadString_23, Var_24);
          }
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = TailString_19;
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__make_sort_file_key_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_String) "";
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.make_sort_file_key\'/3", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.make_sort_file_key\'/3", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word HeadArg_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TailArgs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_String TailKey_19;

      ll_backend__fact_table_compile__make_sort_file_key_3_p_0(Var_23, TailArgs_17, &TailKey_19);
      switch (Var_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String HeadKey_20;
            MR_String Var_21;

            switch (MR_tag((MR_Word) HeadArg_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_25 = ((MR_Integer) ((MR_hl_field(0, HeadArg_16, 0))));

                  HeadKey_20 = mercury__string__int_to_base_string_2_f_0(Int_25, (MR_Integer) 36);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Float F_26 = MR_unbox_float((MR_hl_field(1, HeadArg_16, 0)));

                  HeadKey_20 = mercury__string__float_to_string_1_f_0(F_26);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Str_27 = ((MR_String) ((MR_hl_field(2, HeadArg_16, 0))));
                  MR_Word Chars_28;
                  MR_Word EscapedChars_29;
                  MR_Word EscapedCharsCord_31;
                  MR_Word Var_32;

                  mercury__string__to_char_list_2_p_0(Str_27, &Chars_28);
                  Var_32 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
                  ll_backend__fact_table_compile__key_from_chars_loop_3_p_0(Chars_28, Var_32, &EscapedCharsCord_31);
                  EscapedChars_29 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), EscapedCharsCord_31);
                  mercury__string__from_char_list_2_p_0(EscapedChars_29, &HeadKey_20);
                }
                break;
            }
            Var_21 = mercury__string__f_43_43_2_f_0((MR_String) ":", TailKey_19);
            *HeadVar__3_3 = mercury__string__f_43_43_2_f_0(HeadKey_20, Var_21);
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = TailKey_19;
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__key_from_chars_loop_3_p_0(
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
      MR_Char Char_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
      MR_Word Chars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_EscapedCharsCord_1_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2;

      succeeded = (Char_7 == (MR_Char) 92);
      if (succeeded)
        mercury__cord__snoc_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[39])), STATE_VARIABLE_EscapedCharsCord_0_2, &STATE_VARIABLE_EscapedCharsCord_1_13);
      else
      {
        succeeded = (Char_7 == (MR_Char) 10);
        if (succeeded)
          mercury__cord__snoc_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[41])), STATE_VARIABLE_EscapedCharsCord_0_2, &STATE_VARIABLE_EscapedCharsCord_1_13);
        else
        {
          succeeded = (Char_7 == (MR_Char) 58);
          if (succeeded)
            mercury__cord__snoc_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[43])), STATE_VARIABLE_EscapedCharsCord_0_2, &STATE_VARIABLE_EscapedCharsCord_1_13);
          else
          {
            succeeded = (Char_7 == (MR_Char) 126);
            if (succeeded)
              mercury__cord__snoc_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[45])), STATE_VARIABLE_EscapedCharsCord_0_2, &STATE_VARIABLE_EscapedCharsCord_1_13);
            else
              mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) (Char_7)), STATE_VARIABLE_EscapedCharsCord_0_2, &STATE_VARIABLE_EscapedCharsCord_1_13);
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Chars_8;
      next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2 = STATE_VARIABLE_EscapedCharsCord_1_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_EscapedCharsCord_0_2 = next_value_of_STATE_VARIABLE_EscapedCharsCord_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__check_fact_type_and_mode_8_p_0(
  MR_Word PredOrFunc_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.check_fact_type_and_mode\'/8", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_compile.check_fact_type_and_mode\'/8", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word ArgTerm_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ArgTerms_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word FactArg_44;
      MR_Word FactArgs_45;
      MR_Word STATE_VARIABLE_Specs_1_65;
      MR_Integer Var_84;

      if (((MR_tag((MR_Word) ArgTerm_41)) == (MR_Integer) 0))
      {
        MR_Word Functor_49 = ((MR_Word) ((MR_hl_field(0, ArgTerm_41, 0))));
        MR_Word ArgType_52 = ((((MR_Unsigned) ((MR_hl_field(0, Var_88, 0))) >> 2)) & (MR_Integer) 3);

        switch (ArgType_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Float Float_58;

              succeeded = ((((MR_tag((MR_Word) Functor_49)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_49, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Float_58 = MR_unbox_float((MR_hl_field(3, Functor_49, 1)));
                {
                  FactArg_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, FactArg_44, 0) = MR_box_float(Float_58);
                }
                STATE_VARIABLE_Specs_1_65 = STATE_VARIABLE_Specs_0_7;
              }
              else
                ll_backend__fact_table_compile__report_arg_error_11_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Type", (MR_String) "a", (MR_String) "float", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_65);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Base_55;
              MR_Word Integer_56;
              MR_Word Var_66;
              MR_Word Var_67;

              succeeded = ((MR_tag((MR_Word) Functor_49)) == (MR_Integer) 1);
              if (succeeded)
              {
                Base_55 = ((MR_Unsigned) ((MR_hl_field(1, Functor_49, 0))) & (MR_Integer) 3);
                Integer_56 = ((MR_Word) ((MR_hl_field(1, Functor_49, 1))));
                Var_66 = ((((MR_Unsigned) ((MR_hl_field(1, Functor_49, 2))) >> 3)) & (MR_Integer) 1);
                Var_67 = ((MR_Unsigned) ((MR_hl_field(1, Functor_49, 2))) & (MR_Integer) 7);
                succeeded = (Var_66 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (Var_67 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Integer Int_57;

                succeeded = parse_tree__prog_util__source_integer_to_int_3_p_0(Base_55, Integer_56, &Int_57);
                if (succeeded)
                {
                  {
                    FactArg_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FactArg_44, 0) = ((MR_Box) (Int_57));
                  }
                  STATE_VARIABLE_Specs_1_65 = STATE_VARIABLE_Specs_0_7;
                }
                else
                  ll_backend__fact_table_compile__report_arg_error_11_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Type", (MR_String) "an", (MR_String) "int that fits in a word", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_65);
              }
              else
                ll_backend__fact_table_compile__report_arg_error_11_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Type", (MR_String) "an", (MR_String) "int", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_65);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Str_59;

              succeeded = ((MR_tag((MR_Word) Functor_49)) == (MR_Integer) 2);
              if (succeeded)
              {
                Str_59 = ((MR_String) ((MR_hl_field(2, Functor_49, 0))));
                {
                  FactArg_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, FactArg_44, 0) = ((MR_Box) (Str_59));
                }
                STATE_VARIABLE_Specs_1_65 = STATE_VARIABLE_Specs_0_7;
              }
              else
                ll_backend__fact_table_compile__report_arg_error_11_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Type", (MR_String) "a", (MR_String) "string", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_65);
            }
            break;
        }
      }
      else
        ll_backend__fact_table_compile__report_arg_error_11_p_0(PredOrFunc_1, VarSet_2, ArgNum_5, ArgTerm_41, ArgTerms_42, (MR_String) "Mode", (MR_String) "a", (MR_String) "ground term", &FactArg_44, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_65);
      Var_84 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
      ll_backend__fact_table_compile__check_fact_type_and_mode_8_p_0(PredOrFunc_1, VarSet_2, Var_87, ArgTerms_42, Var_84, &FactArgs_45, STATE_VARIABLE_Specs_1_65, STATE_VARIABLE_Specs_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FactArg_44));
        MR_hl_field(1, base, 1) = ((MR_Box) (FactArgs_45));
      }
    }
  }
}

static void MR_CALL 
ll_backend__fact_table_compile__report_arg_error_11_p_0(
  MR_Word PredOrFunc_12,
  MR_Word VarSet_13,
  MR_Integer ArgNum_14,
  MR_Word ArgTerm_15,
  MR_Word RemainingArgTerms_16,
  MR_String TypeOrMode_17,
  MR_String AAn_18,
  MR_String Expected_19,
  MR_Word * DummyFactArg_20,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_String ArgStr_22;
  MR_Word ExpectedGotPieces_23;
  MR_Word Pieces_24;
  MR_Word Context_25;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_42;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Spec_81;

  ArgStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, ArgTerm_15);
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (AAn_18));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[27])));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (Expected_19));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[29])));
  }
  Var_35 = parse_tree__error_spec__color_as_correct_1_f_0(Var_36);
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (ArgStr_22));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[8])));
  }
  Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_49);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[6])));
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_1[24])), Var_47);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_42);
  ExpectedGotPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_34);
  succeeded = (PredOrFunc_12 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (RemainingArgTerms_16 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_62;

    {
      Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_58, 1) = ((MR_Box) (TypeOrMode_17));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[31])));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (ExpectedGotPieces_23));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[30])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
    }
    {
      Pieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_24, 0) = ((MR_Box) (Var_58));
      MR_hl_field(1, Pieces_24, 1) = ((MR_Box) (Var_59));
    }
  }
  else
  {
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;

    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (TypeOrMode_17));
    }
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (ArgNum_14));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[33])));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) (ExpectedGotPieces_23));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[32])));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &ll_backend__fact_table_compile_scalar_common_1[30])));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
    }
    {
      Pieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_24, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Pieces_24, 1) = ((MR_Box) (Var_66));
    }
  }
  Context_25 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgTerm_15);
  {
    Spec_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_81, 0) = ((MR_Box) ((MR_String) "predicate \140ll_backend.fact_table_compile.add_error_context_and_pieces\'/4"));
    MR_hl_field(0, Spec_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_81, 2) = ((MR_Box) ((MR_Unsigned) 80U));
    MR_hl_field(0, Spec_81, 3) = ((MR_Box) (Context_25));
    MR_hl_field(0, Spec_81, 4) = ((MR_Box) (Pieces_24));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_27 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_81));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
  }
  *DummyFactArg_20 = (MR_Word) (MR_mkword(2, &ll_backend__fact_table_compile_scalar_common_3[5]));
}

static void MR_CALL 
ll_backend__fact_table_compile__infer_procs_determinism_pass_1_8_p_0(
  MR_Word GenInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4,
  MR_Word STATE_VARIABLE_WriteHashTables_0_5,
  MR_Word * STATE_VARIABLE_WriteHashTables_6,
  MR_Word STATE_VARIABLE_WriteDataTable_0_7,
  MR_Word * STATE_VARIABLE_WriteDataTable_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WriteDataTable_8 = STATE_VARIABLE_WriteDataTable_0_7;
      *STATE_VARIABLE_WriteHashTables_6 = STATE_VARIABLE_WriteHashTables_0_5;
      *STATE_VARIABLE_ProcTable_4 = STATE_VARIABLE_ProcTable_0_3;
    }
    else
    {
      MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ProcIds_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ProcInfo0_25;
      MR_Word FactTableProcMap_27;
      MR_Word FactTableProcInfo_30;
      MR_Word ModeClass_32;
      MR_Word InferredDetism_34;
      MR_Word STATE_VARIABLE_WriteHashTables_1_46;
      MR_Word STATE_VARIABLE_WriteDataTable_1_49;
      MR_Word STATE_VARIABLE_ProcTable_1_52;
      MR_Box conv0_ProcInfo0_25;
      MR_Box conv1_FactTableProcInfo_30;
      MR_Word Determinism_37;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_3;
      MR_Word next_value_of_STATE_VARIABLE_WriteHashTables_0_5;
      MR_Word next_value_of_STATE_VARIABLE_WriteDataTable_0_7;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_3, ((MR_Box) (ProcId_20)), &conv0_ProcInfo0_25);
      ProcInfo0_25 = ((MR_Word) (conv0_ProcInfo0_25));
      FactTableProcMap_27 = ((MR_Word) ((MR_hl_field(0, GenInfo_1, 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0), FactTableProcMap_27, ((MR_Box) (ProcId_20)), &conv1_FactTableProcInfo_30);
      FactTableProcInfo_30 = ((MR_Word) (conv1_FactTableProcInfo_30));
      ModeClass_32 = ((MR_Unsigned) ((MR_hl_field(0, FactTableProcInfo_30, 1))) & (MR_Integer) 3);
      switch (ModeClass_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            InferredDetism_34 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_3[0]));
            STATE_VARIABLE_WriteHashTables_1_46 = (MR_Integer) 1;
            STATE_VARIABLE_WriteDataTable_1_49 = STATE_VARIABLE_WriteDataTable_0_7;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeDetism_35;
            MR_Word Detism_36;

            hlds__hlds_proc__proc_info_get_declared_determinism_2_p_0(ProcInfo0_25, &MaybeDetism_35);
            succeeded = (MaybeDetism_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Detism_36 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_35, 0))));
              switch (Detism_36) {
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
              InferredDetism_34 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_3[1]));
            else
              InferredDetism_34 = (MR_Word) (MR_mkword(1, &ll_backend__fact_table_compile_scalar_common_3[2]));
            STATE_VARIABLE_WriteDataTable_1_49 = (MR_Integer) 1;
            STATE_VARIABLE_WriteHashTables_1_46 = STATE_VARIABLE_WriteHashTables_0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            InferredDetism_34 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_WriteHashTables_1_46 = (MR_Integer) 1;
            STATE_VARIABLE_WriteDataTable_1_49 = (MR_Integer) 1;
          }
          break;
      }
      succeeded = ((MR_tag((MR_Word) InferredDetism_34)) == (MR_Integer) 1);
      if (succeeded)
      {
        Determinism_37 = ((MR_Unsigned) ((MR_hl_field(1, InferredDetism_34, 0))) & (MR_Integer) 7);
        {
          MR_Word ProcInfo_38;

          hlds__hlds_proc__proc_info_set_inferred_determinism_3_p_0(Determinism_37, ProcInfo0_25, &ProcInfo_38);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_20)), ((MR_Box) (ProcInfo_38)), STATE_VARIABLE_ProcTable_0_3, &STATE_VARIABLE_ProcTable_1_52);
        }
      }
      else
        STATE_VARIABLE_ProcTable_1_52 = STATE_VARIABLE_ProcTable_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcIds_21;
      next_value_of_STATE_VARIABLE_ProcTable_0_3 = STATE_VARIABLE_ProcTable_1_52;
      next_value_of_STATE_VARIABLE_WriteHashTables_0_5 = STATE_VARIABLE_WriteHashTables_1_46;
      next_value_of_STATE_VARIABLE_WriteDataTable_0_7 = STATE_VARIABLE_WriteDataTable_1_49;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ProcTable_0_3 = next_value_of_STATE_VARIABLE_ProcTable_0_3;
      STATE_VARIABLE_WriteHashTables_0_5 = next_value_of_STATE_VARIABLE_WriteHashTables_0_5;
      STATE_VARIABLE_WriteDataTable_0_7 = next_value_of_STATE_VARIABLE_WriteDataTable_0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____fact_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____fact_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____fact_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____fact_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____fact_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____fact_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____fact_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____fact_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____hash_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____hash_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____hash_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____hash_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____hash_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____hash_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____hash_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____hash_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____inferred_determinism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____inferred_determinism_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____inferred_determinism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____inferred_determinism_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_create_fact_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____maybe_create_fact_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_create_fact_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____maybe_create_fact_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_primary_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____maybe_primary_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_primary_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____maybe_primary_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_primary_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____maybe_primary_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_primary_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____maybe_primary_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_write_data_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____maybe_write_data_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_write_data_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____maybe_write_data_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____maybe_write_hash_tables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____maybe_write_hash_tables_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____maybe_write_hash_tables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____maybe_write_hash_tables_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____proc_stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____proc_stream_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____proc_stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____proc_stream_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_compile____Unify____sort_file_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_compile____Unify____sort_file_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_compile____Compare____sort_file_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_compile____Compare____sort_file_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__fact_table_compile__init(void)
{
}

void mercury__ll_backend__fact_table_compile__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_arg_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_fact_result_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_entry_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_index_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_hash_table_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_inferred_determinism_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_create_fact_map_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_primary_proc_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_primary_table_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_write_data_table_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_maybe_write_hash_tables_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_proc_stream_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_compile__ll_backend__fact_table_compile__type_ctor_info_sort_file_line_0);
}

void mercury__ll_backend__fact_table_compile__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__fact_table_compile__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.fact_table_compile.
