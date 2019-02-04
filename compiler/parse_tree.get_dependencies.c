/*
** Automatically generated from `get_dependencies.m'
** by the Mercury compiler,
** version DEV
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


// :- module parse_tree.get_dependencies.
// :- implementation.

/*
INIT mercury__parse_tree__get_dependencies__init
ENDINIT
*/

#include "parse_tree.get_dependencies.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;

static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0[7];

static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0[7];

static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_import_needs_0_0[7];

static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0;

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0[1];

static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0[1];

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_import_needs_0[1];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_import_needs_0[1];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2];

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0;

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1;

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0[2];

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2];

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2];

static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__252__1_2_p_0(
  MR_Word ItemsNeedTablingStatistics_10,
  MR_Word HeadVar__2_37);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
  MR_Word TypeInfo_14_14,
  MR_Word ItemBlock_4,
  MR_Word STATE_VARIABLE_IncludeFiles_0_11,
  MR_Word * STATE_VARIABLE_IncludeFiles_12);

static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IncludeFiles_0_2,
  MR_Word * STATE_VARIABLE_IncludeFiles_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
  MR_Word InstanceMethod_4,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_13,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_14);

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevFactTableFileNames_0_2,
  MR_Word * STATE_VARIABLE_RevFactTableFileNames_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevFactTableFileNames_0_2,
  MR_Word * STATE_VARIABLE_RevFactTableFileNames_3);

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
  MR_Word ItemClause_4,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_17);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitImportNeeds_70);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitImportNeeds_70);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
  MR_Word ItemMutableInfo_4,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_17);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_18,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_19);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
  MR_Word Globals_5,
  MR_Word ImplicitImportNeeds_6,
  MR_Word * STATE_VARIABLE_ImportDeps_23,
  MR_Word * STATE_VARIABLE_UseDeps_24);

static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntImportDeps_0_2,
  MR_Word * STATE_VARIABLE_IntImportDeps_3,
  MR_Word STATE_VARIABLE_IntUseDeps_0_4,
  MR_Word * STATE_VARIABLE_IntUseDeps_5,
  MR_Word STATE_VARIABLE_ImpImportDeps_0_6,
  MR_Word * STATE_VARIABLE_ImpImportDeps_7,
  MR_Word STATE_VARIABLE_ImpUseDeps_0_8,
  MR_Word * STATE_VARIABLE_ImpUseDeps_9);

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportDeps_0_2,
  MR_Word * STATE_VARIABLE_ImportDeps_3,
  MR_Word STATE_VARIABLE_UseDeps_0_4,
  MR_Word * STATE_VARIABLE_UseDeps_5);

static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportDeps_0_2,
  MR_Word * STATE_VARIABLE_ImportDeps_3,
  MR_Word STATE_VARIABLE_UseDeps_0_4,
  MR_Word * STATE_VARIABLE_UseDeps_5);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_6[3][3];

static /* final */ const MR_Integer parse_tree__get_dependencies_scalar_common_7[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_8[1][7];


/* sealed */ struct parse_tree__get_dependencies__vector_common_type_4_0_s {
  const MR_String parse_tree__get_dependencies__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__get_dependencies__vector_common_type_4_0_s parse_tree__get_dependencies_vector_common_4[36];



static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 6)) | (((((MR_Unsigned) 0U << 5)) | (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))))))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_6[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_5[0])),
    ((MR_Box) (parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_5[1])),
    ((MR_Box) (parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_5[2])),
    ((MR_Box) (parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer parse_tree__get_dependencies_scalar_common_7[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1)),
    ((MR_Box) (&parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
};


static /* final */ const struct parse_tree__get_dependencies__vector_common_type_4_0_s parse_tree__get_dependencies_vector_common_4[36] = {
  /* row 0 */   {     (MR_String) "io.format" },
  /* row 1 */   {     (MR_String) "io__format" },
  /* row 2 */   {     (MR_String) "string.format" },
  /* row 3 */   {     (MR_String) "string__format" },
  /* row 4 */   {     (MR_String) "stream__string_writer.format" },
  /* row 5 */   {     NULL },
  /* row 6 */   {     (MR_String) "stream.format" },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     (MR_String) "stream__format" },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     (MR_String) "string_writer__format" },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     (MR_String) "stream__string_writer__format" },
  /* row 22 */   {     (MR_String) "string_writer.format" },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "stream.string_writer.format" },
  /* row 32 */   {     (MR_String) "stream.string_writer__format" },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0[7] = {
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0),
  (MR_PseudoTypeInfo) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0)
};

static const MR_ConstString parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0[7] = {
  (MR_String) "iin_tabling",
  (MR_String) "iin_tabling_statistics",
  (MR_String) "iin_stm",
  (MR_String) "iin_exception",
  (MR_String) "iin_string_format",
  (MR_String) "iin_stream_format",
  (MR_String) "iin_io"
};

static const MR_DuArgLocn parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_import_needs_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0 = {
  (MR_String) "implicit_import_needs",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_import_needs_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0
};

static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_import_needs_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_import_needs_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "implicit_import_needs",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__du_name_ordered_implicit_import_needs_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_implicit_import_needs_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0 = {
  (MR_String) "dont_need_exception",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1 = {
  (MR_String) "do_need_exception",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_exception_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_exception",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_exception_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_exception_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_exception_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0 = {
  (MR_String) "dont_need_io",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1 = {
  (MR_String) "do_need_io",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_io_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_io",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_io_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_io_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_io_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0 = {
  (MR_String) "dont_need_stm",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1 = {
  (MR_String) "do_need_stm",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stm_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_stm",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stm_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stm_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stm_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0 = {
  (MR_String) "dont_need_stream_format",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1 = {
  (MR_String) "do_need_stream_format",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_stream_format_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_stream_format",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_stream_format_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_stream_format_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_stream_format_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0 = {
  (MR_String) "dont_need_string_format",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1 = {
  (MR_String) "do_need_string_format",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_string_format_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_string_format",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_string_format_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_string_format_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_string_format_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0 = {
  (MR_String) "dont_need_tabling",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1 = {
  (MR_String) "do_need_tabling",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_tabling",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0 = {
  (MR_String) "dont_need_tabling_statistics",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1 = {
  (MR_String) "do_need_tabling_statistics",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0[2] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_1,
  &parse_tree__get_dependencies__parse_tree__get_dependencies__enum_functor_desc_maybe_need_tabling_statistics_0_0
};

static const MR_Integer parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001)),
  ((MR_Box) (parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001)),
  (MR_String) "parse_tree.get_dependencies",
  (MR_String) "maybe_need_tabling_statistics",
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_name_ordered_maybe_need_tabling_statistics_0 },
  {     parse_tree__get_dependencies__parse_tree__get_dependencies__enum_value_ordered_maybe_need_tabling_statistics_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__get_dependencies__parse_tree__get_dependencies__functor_number_map_maybe_need_tabling_statistics_0
};

static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__252__1_2_p_0(
  MR_Word ItemsNeedTablingStatistics_10,
  MR_Word HeadVar__2_37)
{
  {
    MR_bool succeeded = (ItemsNeedTablingStatistics_10 == HeadVar__2_37);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
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
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_33 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_34 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_33 < Var_34);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_33 > Var_34);
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
      {
        MR_Word SubResult2_9;
        MR_Integer Var_35 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_36 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_35 < Var_36);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_35 > Var_36);
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
          MR_Word SubResult3_12;
          MR_Integer Var_37 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_38 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_37 < Var_38);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_37 > Var_38);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_39 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_40 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_39 < Var_40);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_39 > Var_40);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_41 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_42 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_41 < Var_42);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_41 > Var_42);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;
                MR_Integer Var_43 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_44 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_43 < Var_44);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_43 > Var_44);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Integer Var_45 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_46 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_45 < Var_46);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_45 > Var_46);
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
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
  MR_Word TypeInfo_14_14,
  MR_Word ItemBlock_4,
  MR_Word STATE_VARIABLE_IncludeFiles_0_11,
  MR_Word * STATE_VARIABLE_IncludeFiles_12)
{
  {
    MR_Word Items_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_4, (MR_Integer) 4))));

    parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(Items_10, STATE_VARIABLE_IncludeFiles_0_11, STATE_VARIABLE_IncludeFiles_12);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IncludeFiles_0_2,
  MR_Word * STATE_VARIABLE_IncludeFiles_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IncludeFiles_3 = STATE_VARIABLE_IncludeFiles_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_IncludeFiles_25_25;
      MR_Word Lang_16;
      MR_Word LiteralOrInclude_18;
      MR_Word ItemPragma_10;
      MR_Word Pragma_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IncludeFiles_0_2;

      succeeded = ((((MR_tag((MR_Word) Item_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        ItemPragma_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
        Pragma_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_10, (MR_Integer) 0))));
        if (((MR_tag((MR_Word) Pragma_11)) == (MR_Integer) 1))
        {
          MR_Word FCInfo_19 = (MR_Word) (MR_body((MR_Word) (Pragma_11), (MR_Integer) 1));

          Lang_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FCInfo_19, (MR_Integer) 0))) & (MR_Integer) 3);
          LiteralOrInclude_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FCInfo_19, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        else
        if (((MR_tag((MR_Word) Pragma_11)) == (MR_Integer) 0))
        {
          MR_Word FDInfo_15 = (MR_Word) ((MR_Word) (Pragma_11));

          Lang_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FDInfo_15, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
          LiteralOrInclude_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FDInfo_15, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
        if (((MR_tag((MR_Word) LiteralOrInclude_18)) == (MR_Integer) 1))
        {
          MR_String FileName_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_18, (MR_Integer) 0))));
          MR_Word IncludeFile_22;

          {
            IncludeFile_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IncludeFile_22, 0) = (MR_Box) ((MR_Unsigned) (Lang_16));
            MR_hl_field(MR_mktag(0), IncludeFile_22, 1) = ((MR_Box) (FileName_21));
          }
          STATE_VARIABLE_IncludeFiles_25_25 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), STATE_VARIABLE_IncludeFiles_0_2, ((MR_Box) (IncludeFile_22)));
        }
        else
          STATE_VARIABLE_IncludeFiles_25_25 = STATE_VARIABLE_IncludeFiles_0_2;
      else
        STATE_VARIABLE_IncludeFiles_25_25 = STATE_VARIABLE_IncludeFiles_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_IncludeFiles_0_2 = STATE_VARIABLE_IncludeFiles_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IncludeFiles_0_2 = next_value_of_STATE_VARIABLE_IncludeFiles_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitImportNeeds_17;

    parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitImportNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitImportNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
  MR_Word InstanceMethod_4,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_13,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_14)
{
  {
    MR_Word ProcDef_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod_4, (MR_Integer) 2))));

    if (((MR_tag((MR_Word) ProcDef_8)) == (MR_Integer) 1))
    {
      MR_Word ItemClauses_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcDef_8, (MR_Integer) 0))));
      MR_Box conv1_STATE_VARIABLE_ImplicitImportNeeds_14;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_6[2]), ItemClauses_12, ((MR_Box) (STATE_VARIABLE_ImplicitImportNeeds_0_13)), &conv1_STATE_VARIABLE_ImplicitImportNeeds_14);
      *STATE_VARIABLE_ImplicitImportNeeds_14 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitImportNeeds_14));
    }
    else
      *STATE_VARIABLE_ImplicitImportNeeds_14 = STATE_VARIABLE_ImplicitImportNeeds_0_13;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IncludeFiles_12;

    parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IncludeFiles_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IncludeFiles_12));
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0(
  MR_Word TypeInfo_for_MS_7,
  MR_Word ItemBlocks_3,
  MR_Word * IncludeFiles_4)
{
  {
    MR_Word TypeInfo_13_13;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Box conv1_IncludeFiles_4;

    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) (parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_5, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_5, 3) = ((MR_Box) (TypeInfo_for_MS_7));
    }
    Var_6 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0));
    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
      MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_MS_7));
    }
    mercury__list__foldl_4_p_0(TypeInfo_13_13, (MR_Word) (&parse_tree__get_dependencies_scalar_common_1[0]), (MR_Word) (Var_5), (MR_Word) (ItemBlocks_3), ((MR_Box) (Var_6)), &conv1_IncludeFiles_4);
    *IncludeFiles_4 = ((MR_Word) (conv1_IncludeFiles_4));
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(
  MR_Word TypeInfo_for_MS_7,
  MR_Word ItemBlocks_3,
  MR_Word * FactTableFileNames_4)
{
  {
    MR_Word RevFactTableFileNames_5;

    parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(ItemBlocks_3, (MR_Word) ((MR_Unsigned) 0U), &RevFactTableFileNames_5);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevFactTableFileNames_5, FactTableFileNames_4);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevFactTableFileNames_0_2,
  MR_Word * STATE_VARIABLE_RevFactTableFileNames_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevFactTableFileNames_3 = STATE_VARIABLE_RevFactTableFileNames_0_2;
    else
    {
      MR_Word ItemBlock_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_7, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_RevFactTableFileNames_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevFactTableFileNames_0_2;

      parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(Items_14, STATE_VARIABLE_RevFactTableFileNames_0_2, &STATE_VARIABLE_RevFactTableFileNames_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_8;
      next_value_of_STATE_VARIABLE_RevFactTableFileNames_0_2 = STATE_VARIABLE_RevFactTableFileNames_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevFactTableFileNames_0_2 = next_value_of_STATE_VARIABLE_RevFactTableFileNames_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevFactTableFileNames_0_2,
  MR_Word * STATE_VARIABLE_RevFactTableFileNames_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevFactTableFileNames_3 = STATE_VARIABLE_RevFactTableFileNames_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevFactTableFileNames_20_20;
      MR_String FileName_17;
      MR_Word ItemPragma_10;
      MR_Word Pragma_11;
      MR_Word FTInfo_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevFactTableFileNames_0_2;

      succeeded = ((((MR_tag((MR_Word) Item_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        ItemPragma_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
        Pragma_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_10, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Pragma_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 16)));
        if (succeeded)
        {
          FTInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_11, (MR_Integer) 1))));
          FileName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), FTInfo_15, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        {
          STATE_VARIABLE_RevFactTableFileNames_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFactTableFileNames_20_20, 0) = ((MR_Box) (FileName_17));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFactTableFileNames_20_20, 1) = ((MR_Box) (STATE_VARIABLE_RevFactTableFileNames_0_2));
        }
      else
        STATE_VARIABLE_RevFactTableFileNames_20_20 = STATE_VARIABLE_RevFactTableFileNames_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_RevFactTableFileNames_0_2 = STATE_VARIABLE_RevFactTableFileNames_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevFactTableFileNames_0_2 = next_value_of_STATE_VARIABLE_RevFactTableFileNames_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(
  MR_Word Globals_5,
  MR_Word Items_6,
  MR_Word * ImportDeps_7,
  MR_Word * UseDeps_8)
{
  {
    MR_Word ImplicitImportNeeds_10;

    parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(Items_6, (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[0]), &ImplicitImportNeeds_10);
    parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(Globals_5, ImplicitImportNeeds_10, ImportDeps_7, UseDeps_8);
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(
  MR_Word TypeInfo_for_MS_11,
  MR_Word Globals_5,
  MR_Word ItemBlocks_6,
  MR_Word * ImportDeps_7,
  MR_Word * UseDeps_8)
{
  {
    MR_Word ImplicitImportNeeds_10;

    parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(ItemBlocks_6, (MR_Word) (&parse_tree__get_dependencies_scalar_common_2[0]), &ImplicitImportNeeds_10);
    parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(Globals_5, ImplicitImportNeeds_10, ImportDeps_7, UseDeps_8);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitImportNeeds_3 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
    else
    {
      MR_Word ItemBlock_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Items_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_7, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;

      parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(Items_14, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_8;
      next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2 = STATE_VARIABLE_ImplicitImportNeeds_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitImportNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImplicitImportNeeds_17;

    parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImplicitImportNeeds_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImplicitImportNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ImplicitImportNeeds_14;

    parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ImplicitImportNeeds_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ImplicitImportNeeds_14));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitImportNeeds_3 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
    else
    {
      MR_Word Item_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_109_109;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;

      switch (MR_tag((MR_Word) Item_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemClause_10 = (MR_Word) ((MR_Word) (Item_7));

            parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(ItemClause_10, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_109_109);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemTypeDefn_70 = (MR_Word) (MR_body((MR_Word) (Item_7), (MR_Integer) 1));
            MR_Word TypeDefn_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_70, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) TypeDefn_73)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word DetailsSolver_79 = (MR_Word) (MR_body((MR_Word) (TypeDefn_73), (MR_Integer) 1));
                  MR_Word SolverTypeDetails_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_79, (MR_Integer) 0))));
                  MR_Word MutableItems_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_80, (MR_Integer) 3))));
                  MR_Box conv3_STATE_VARIABLE_ImplicitImportNeeds_109_109;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_6[1]), MutableItems_85, ((MR_Box) (STATE_VARIABLE_ImplicitImportNeeds_0_2)), &conv3_STATE_VARIABLE_ImplicitImportNeeds_109_109);
                  STATE_VARIABLE_ImplicitImportNeeds_109_109 = ((MR_Word) (conv3_STATE_VARIABLE_ImplicitImportNeeds_109_109));
                }
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_73, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ItemPragma_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word Pragma_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma_11, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) Pragma_12)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma_12, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 1:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 2:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 3:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 4:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 5:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 6:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 7:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 8:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 9:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 10:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 11:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 12:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 13:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 14:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 15:
                        {
                          MR_Word TableInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma_12, (MR_Integer) 1))));
                          MR_Word MaybeAttributes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_16, (MR_Integer) 3))));
                          MR_Word STATE_VARIABLE_ImplicitImportNeeds_105_105;
                          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)));

                          {
                            STATE_VARIABLE_ImplicitImportNeeds_105_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_105_105, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
                          }
                          if ((MaybeAttributes_20 == (MR_Word) ((MR_Unsigned) 0U)))
                            STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_105_105;
                          else
                          {
                            MR_Word Attributes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_20, (MR_Integer) 0))));
                            MR_Word StatsAttr_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_21, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);

                            switch (StatsAttr_22) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_105_105;
                                break;
                              case (MR_Integer) 0:
                                {
                                  {
                                    STATE_VARIABLE_ImplicitImportNeeds_109_109 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_109_109, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 96U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((MR_Unsigned) ((MR_Integer) 1) << 6))))));
                                  }
                                }
                                break;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 16:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 17:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 18:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 19:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 20:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 21:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 22:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 23:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 24:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 25:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 26:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 27:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 28:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 29:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                      case (MR_Integer) 30:
                        STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ItemPromise_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word Goal_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_56, (MR_Integer) 1))));

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Goal_58, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_109_109);
              }
              break;
            case (MR_Integer) 5:
              STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
              break;
            case (MR_Integer) 6:
              {
                MR_Word ItemInstance_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));
                MR_Word InstanceBody_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_61, (MR_Integer) 4))));

                if ((InstanceBody_66 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
                else
                {
                  MR_Word InstanceMethods_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstanceBody_66, (MR_Integer) 0))));
                  MR_Box conv1_STATE_VARIABLE_ImplicitImportNeeds_109_109;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0), (MR_Word) (&parse_tree__get_dependencies_scalar_common_6[0]), InstanceMethods_68, ((MR_Box) (STATE_VARIABLE_ImplicitImportNeeds_0_2)), &conv1_STATE_VARIABLE_ImplicitImportNeeds_109_109);
                  STATE_VARIABLE_ImplicitImportNeeds_109_109 = ((MR_Word) (conv1_STATE_VARIABLE_ImplicitImportNeeds_109_109));
                }
              }
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
              break;
            case (MR_Integer) 9:
              {
                MR_Word ItemMutableInfo_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_7, (MR_Integer) 1))));

                parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(ItemMutableInfo_69, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_109_109);
              }
              break;
            case (MR_Integer) 10:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.get_dependencies.gather_implicit_import_needs_in_items\'/3", (MR_String) "item_type_repn nyi");
                  return;
                }
              }
              break;
            case (MR_Integer) 11:
              STATE_VARIABLE_ImplicitImportNeeds_109_109 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_8;
      next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2 = STATE_VARIABLE_ImplicitImportNeeds_109_109;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitImportNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
  MR_Word ItemClause_4,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_17)
{
  {
    MR_Word HeadTerms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_4, (MR_Integer) 2))));
    MR_Word MaybeGoal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_4, (MR_Integer) 5))));
    MR_Word STATE_VARIABLE_ImplicitImportNeeds_18_18;

    parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(HeadTerms_8, STATE_VARIABLE_ImplicitImportNeeds_0_16, &STATE_VARIABLE_ImplicitImportNeeds_18_18);
    if (((MR_tag((MR_Word) MaybeGoal_11)) == (MR_Integer) 0))
      *STATE_VARIABLE_ImplicitImportNeeds_17 = STATE_VARIABLE_ImplicitImportNeeds_18_18;
    else
    {
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_11, (MR_Integer) 0))));

      parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Goal_14, STATE_VARIABLE_ImplicitImportNeeds_18_18, STATE_VARIABLE_ImplicitImportNeeds_17);
    }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitImportNeeds_70)
{
  {
    MR_Word tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2;
    MR_Word tscc_output_1_STATE_VARIABLE_ImplicitImportNeeds_70;

    // The code for TSCC PROC 1: pred parse_tree.get_dependencies.gather_implicit_import_needs_in_goal/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.get_dependencies.gather_implicit_import_needs_in_goal/3-0
    ;
    // proc 2 in TSCC: pred parse_tree.get_dependencies.gather_implicit_import_needs_in_maybe_catch_any_expr/3-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_69 = tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_70;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Goal_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TermA_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
            MR_Word TermB_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitImportNeeds_71_71;

            parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(TermA_67, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_71_71);
            parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(TermB_68, STATE_VARIABLE_ImplicitImportNeeds_71_71, &STATE_VARIABLE_ImplicitImportNeeds_70);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CalleeSymName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_4, (MR_Integer) 1))));
            MR_Word Args_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitImportNeeds_77_77;
            MR_Word ModuleName_62;
            MR_String Var_74;

            succeeded = ((MR_tag((MR_Word) CalleeSymName_60)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleName_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeSymName_60, (MR_Integer) 0))));
              Var_74 = ((MR_String) ((MR_hl_field(MR_mktag(1), CalleeSymName_60, (MR_Integer) 1))));
              succeeded = (strcmp(Var_74, (MR_String) "format") == 0);
            }
            if (succeeded)
            {
              MR_String Var_221;

              succeeded = ((MR_tag((MR_Word) ModuleName_62)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_221 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_62, (MR_Integer) 0))));
                if ((strcmp(Var_221, (MR_String) "io") == 0))
                  succeeded = MR_TRUE;
                else
                if ((strcmp(Var_221, (MR_String) "string") == 0))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitImportNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_77_77, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
                }
              }
              else
              {
                if (((MR_tag((MR_Word) ModuleName_62)) == (MR_Integer) 1))
                {
                  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleName_62, (MR_Integer) 0))));
                  MR_String Var_80;
                  MR_String Var_81 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModuleName_62, (MR_Integer) 1))));

                  succeeded = (strcmp(Var_81, (MR_String) "string_writer") == 0);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_80 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_80, (MR_String) "stream") == 0);
                    }
                  }
                }
                else
                {
                  MR_String Var_222 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_62, (MR_Integer) 0))));

                  if ((strcmp(Var_222, (MR_String) "stream") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_222, (MR_String) "string_writer") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                if (succeeded)
                {
                  MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitImportNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_77_77, 0) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                  }
                }
                else
                  STATE_VARIABLE_ImplicitImportNeeds_77_77 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
              }
            }
            else
            {
              MR_String Var_88;

              succeeded = ((MR_tag((MR_Word) CalleeSymName_60)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_88 = ((MR_String) ((MR_hl_field(MR_mktag(0), CalleeSymName_60, (MR_Integer) 0))));
                succeeded = (strcmp(Var_88, (MR_String) "format") == 0);
              }
              if (succeeded)
              {
                MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitImportNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_77_77, 0) = (MR_Box) ((((packed_word_4 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                }
              }
              else
                STATE_VARIABLE_ImplicitImportNeeds_77_77 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
            }
            parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(Args_61, STATE_VARIABLE_ImplicitImportNeeds_77_77, &STATE_VARIABLE_ImplicitImportNeeds_70);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoalA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 1))));
            MR_Word SubGoalB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_114;
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

            parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_9, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_114);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_10;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_114;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImplicitImportNeeds_70 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Cond_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word Else_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_100_100;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_101_101;
                MR_Word Then_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Cond_51, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_100_100);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Then_132, STATE_VARIABLE_ImplicitImportNeeds_100_100, &STATE_VARIABLE_ImplicitImportNeeds_101_101);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_52;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_101_101;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoalA_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_202;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_200, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_202);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_201;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_202;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoal_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_209;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ImplicitImportNeeds_70 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoalA_210 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_212;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_210, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_212);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_211;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_212;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word SubGoal_217 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_217;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word SubGoal_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_216;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word SubGoal_215 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_215;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word SubGoal_214 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_214;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word SubGoal_213 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_213;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word SubGoal_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_219;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word SubGoal_218 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_218;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word SubGoal_220 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_220;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word SubGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_16;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word MaybeIO_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_110_110;
                MR_Word SubGoal_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                if ((MaybeIO_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_ImplicitImportNeeds_110_110 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
                else
                {
                  MR_Unsigned packed_word_10 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitImportNeeds_110_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_110_110, 0) = (MR_Box) ((((packed_word_10 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_126;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_110_110;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word MainGoal_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word OrElseGoals_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_96_96;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_98_98;
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitImportNeeds_96_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_96_96, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((MR_Unsigned) ((MR_Integer) 1) << 4))))));
                }
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(MainGoal_57, STATE_VARIABLE_ImplicitImportNeeds_96_96, &STATE_VARIABLE_ImplicitImportNeeds_98_98);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(OrElseGoals_58, STATE_VARIABLE_ImplicitImportNeeds_98_98, &STATE_VARIABLE_ImplicitImportNeeds_70);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word Then_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word MaybeElse_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word Catches_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word MaybeCatchAny_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 7))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_103_103;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_105_105;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_106_106;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_107_107;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_108_108;
                MR_Word SubGoal_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2;

                {
                  STATE_VARIABLE_ImplicitImportNeeds_103_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_103_103, 0) = (MR_Box) ((((packed_word_11 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 3))));
                }
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoal_127, STATE_VARIABLE_ImplicitImportNeeds_103_103, &STATE_VARIABLE_ImplicitImportNeeds_105_105);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Then_46, STATE_VARIABLE_ImplicitImportNeeds_105_105, &STATE_VARIABLE_ImplicitImportNeeds_106_106);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(MaybeElse_47, STATE_VARIABLE_ImplicitImportNeeds_106_106, &STATE_VARIABLE_ImplicitImportNeeds_107_107);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(Catches_48, STATE_VARIABLE_ImplicitImportNeeds_107_107, &STATE_VARIABLE_ImplicitImportNeeds_108_108);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = MaybeCatchAny_49;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2 = STATE_VARIABLE_ImplicitImportNeeds_108_108;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word SubGoalA_206 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_208;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_206, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_208);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_207;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_208;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word SubGoalA_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_205;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_203, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_205);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_204;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_205;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_Word EventArgs_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));

                parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(EventArgs_65, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_70);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_ImplicitImportNeeds_70 = STATE_VARIABLE_ImplicitImportNeeds_70;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2 = tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2;
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_3;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ImplicitImportNeeds_3 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
      else
      {
        MR_Word CatchAnyExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchAnyExpr_7, (MR_Integer) 1))));
        MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_10;
        MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_2;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
        tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
        goto top_of_proc_1;
      }
      tscc_output_1_STATE_VARIABLE_ImplicitImportNeeds_70 = STATE_VARIABLE_ImplicitImportNeeds_3;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_ImplicitImportNeeds_70 = tscc_output_1_STATE_VARIABLE_ImplicitImportNeeds_70;
    return;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_ImplicitImportNeeds_70)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
    MR_Word tscc_output_1_STATE_VARIABLE_ImplicitImportNeeds_70;

    // The code for TSCC PROC 2: pred parse_tree.get_dependencies.gather_implicit_import_needs_in_maybe_catch_any_expr/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.get_dependencies.gather_implicit_import_needs_in_goal/3-0
    ;
    // proc 2 in TSCC: pred parse_tree.get_dependencies.gather_implicit_import_needs_in_maybe_catch_any_expr/3-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_69 = tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_70;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Goal_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TermA_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
            MR_Word TermB_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitImportNeeds_71_71;

            parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(TermA_67, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_71_71);
            parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(TermB_68, STATE_VARIABLE_ImplicitImportNeeds_71_71, &STATE_VARIABLE_ImplicitImportNeeds_70);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CalleeSymName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_4, (MR_Integer) 1))));
            MR_Word Args_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitImportNeeds_77_77;
            MR_Word ModuleName_62;
            MR_String Var_74;

            succeeded = ((MR_tag((MR_Word) CalleeSymName_60)) == (MR_Integer) 1);
            if (succeeded)
            {
              ModuleName_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalleeSymName_60, (MR_Integer) 0))));
              Var_74 = ((MR_String) ((MR_hl_field(MR_mktag(1), CalleeSymName_60, (MR_Integer) 1))));
              succeeded = (strcmp(Var_74, (MR_String) "format") == 0);
            }
            if (succeeded)
            {
              MR_String Var_221;

              succeeded = ((MR_tag((MR_Word) ModuleName_62)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_221 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_62, (MR_Integer) 0))));
                if ((strcmp(Var_221, (MR_String) "io") == 0))
                  succeeded = MR_TRUE;
                else
                if ((strcmp(Var_221, (MR_String) "string") == 0))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitImportNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_77_77, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
                }
              }
              else
              {
                if (((MR_tag((MR_Word) ModuleName_62)) == (MR_Integer) 1))
                {
                  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleName_62, (MR_Integer) 0))));
                  MR_String Var_80;
                  MR_String Var_81 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModuleName_62, (MR_Integer) 1))));

                  succeeded = (strcmp(Var_81, (MR_String) "string_writer") == 0);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_80 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_80, (MR_String) "stream") == 0);
                    }
                  }
                }
                else
                {
                  MR_String Var_222 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_62, (MR_Integer) 0))));

                  if ((strcmp(Var_222, (MR_String) "stream") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_222, (MR_String) "string_writer") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                if (succeeded)
                {
                  MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitImportNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_77_77, 0) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                  }
                }
                else
                  STATE_VARIABLE_ImplicitImportNeeds_77_77 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
              }
            }
            else
            {
              MR_String Var_88;

              succeeded = ((MR_tag((MR_Word) CalleeSymName_60)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_88 = ((MR_String) ((MR_hl_field(MR_mktag(0), CalleeSymName_60, (MR_Integer) 0))));
                succeeded = (strcmp(Var_88, (MR_String) "format") == 0);
              }
              if (succeeded)
              {
                MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitImportNeeds_77_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_77_77, 0) = (MR_Box) ((((packed_word_4 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                }
              }
              else
                STATE_VARIABLE_ImplicitImportNeeds_77_77 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
            }
            parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(Args_61, STATE_VARIABLE_ImplicitImportNeeds_77_77, &STATE_VARIABLE_ImplicitImportNeeds_70);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoalA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 1))));
            MR_Word SubGoalB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_114;
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

            parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_9, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_114);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_10;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_114;
            tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
            tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImplicitImportNeeds_70 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Cond_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word Else_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_100_100;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_101_101;
                MR_Word Then_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Cond_51, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_100_100);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Then_132, STATE_VARIABLE_ImplicitImportNeeds_100_100, &STATE_VARIABLE_ImplicitImportNeeds_101_101);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = Else_52;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_101_101;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoalA_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_201 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_202;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_200, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_202);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_201;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_202;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoal_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_209;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_ImplicitImportNeeds_70 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoalA_210 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_212;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_210, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_212);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_211;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_212;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word SubGoal_217 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_217;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word SubGoal_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_216;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word SubGoal_215 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_215;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word SubGoal_214 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_214;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word SubGoal_213 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_213;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word SubGoal_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_219;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word SubGoal_218 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_218;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word SubGoal_220 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_220;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word SubGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_16;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_69;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word MaybeIO_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_110_110;
                MR_Word SubGoal_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                if ((MaybeIO_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_ImplicitImportNeeds_110_110 = STATE_VARIABLE_ImplicitImportNeeds_0_69;
                else
                {
                  MR_Unsigned packed_word_10 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitImportNeeds_110_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_110_110, 0) = (MR_Box) ((((packed_word_10 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_126;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_110_110;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word MainGoal_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word OrElseGoals_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_96_96;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_98_98;
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitImportNeeds_96_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_96_96, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((MR_Unsigned) ((MR_Integer) 1) << 4))))));
                }
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(MainGoal_57, STATE_VARIABLE_ImplicitImportNeeds_96_96, &STATE_VARIABLE_ImplicitImportNeeds_98_98);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(OrElseGoals_58, STATE_VARIABLE_ImplicitImportNeeds_98_98, &STATE_VARIABLE_ImplicitImportNeeds_70);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word Then_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
                MR_Word MaybeElse_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
                MR_Word Catches_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
                MR_Word MaybeCatchAny_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 7))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_103_103;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_105_105;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_106_106;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_107_107;
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_108_108;
                MR_Word SubGoal_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_69, (MR_Integer) 0)));
                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2;

                {
                  STATE_VARIABLE_ImplicitImportNeeds_103_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_103_103, 0) = (MR_Box) ((((packed_word_11 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 3))));
                }
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoal_127, STATE_VARIABLE_ImplicitImportNeeds_103_103, &STATE_VARIABLE_ImplicitImportNeeds_105_105);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Then_46, STATE_VARIABLE_ImplicitImportNeeds_105_105, &STATE_VARIABLE_ImplicitImportNeeds_106_106);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(MaybeElse_47, STATE_VARIABLE_ImplicitImportNeeds_106_106, &STATE_VARIABLE_ImplicitImportNeeds_107_107);
                parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(Catches_48, STATE_VARIABLE_ImplicitImportNeeds_107_107, &STATE_VARIABLE_ImplicitImportNeeds_108_108);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = MaybeCatchAny_49;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2 = STATE_VARIABLE_ImplicitImportNeeds_108_108;
                tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word SubGoalA_206 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_208;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_206, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_208);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_207;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_208;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word SubGoalA_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
                MR_Word SubGoalB_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_ImplicitImportNeeds_114_205;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;

                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(SubGoalA_203, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_114_205);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoalB_204;
                next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_114_205;
                tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_Word EventArgs_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));

                parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(EventArgs_65, STATE_VARIABLE_ImplicitImportNeeds_0_69, &STATE_VARIABLE_ImplicitImportNeeds_70);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_ImplicitImportNeeds_70 = STATE_VARIABLE_ImplicitImportNeeds_70;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2 = tscc_proc_2_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_2;
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_3;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_ImplicitImportNeeds_3 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
      else
      {
        MR_Word CatchAnyExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchAnyExpr_7, (MR_Integer) 1))));
        MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_10;
        MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = STATE_VARIABLE_ImplicitImportNeeds_0_2;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
        tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_ImplicitImportNeeds_0_69;
        goto top_of_proc_1;
      }
      tscc_output_1_STATE_VARIABLE_ImplicitImportNeeds_70 = STATE_VARIABLE_ImplicitImportNeeds_3;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_ImplicitImportNeeds_70 = tscc_output_1_STATE_VARIABLE_ImplicitImportNeeds_70;
    return;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ImplicitImportNeeds_3 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
  else
  {
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Goal_7, STATE_VARIABLE_ImplicitImportNeeds_0_2, STATE_VARIABLE_ImplicitImportNeeds_3);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitImportNeeds_3 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
    else
    {
      MR_Word CatchExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CatchExprs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchExpr_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;

      parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Goal_11, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CatchExprs_8;
      next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2 = STATE_VARIABLE_ImplicitImportNeeds_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitImportNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitImportNeeds_3 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;

      parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(Goal_7, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2 = STATE_VARIABLE_ImplicitImportNeeds_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitImportNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
  MR_Word ItemMutableInfo_4,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_16,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_17)
{
  {
    MR_Word InitValue_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutableInfo_4, (MR_Integer) 5))));

    parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(InitValue_11, STATE_VARIABLE_ImplicitImportNeeds_0_16, STATE_VARIABLE_ImplicitImportNeeds_17);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_18,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_19)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0))
    {
      MR_Word Const_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 0))));
      MR_Word ArgTerms_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_22_22;

      switch (MR_tag((MR_Word) Const_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Atom_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_8, (MR_Integer) 0))));

            succeeded = (strcmp(Atom_10, (MR_String) "format") == 0);
            if (succeeded)
            {
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_18, (MR_Integer) 0)));

              {
                STATE_VARIABLE_ImplicitImportNeeds_22_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_22_22, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
              }
            }
            else
            {
              MR_Integer lo_0 = (MR_Integer) 0;
              MR_Integer hi_1 = (MR_Integer) 3;
              MR_Integer mid_2;
              MR_Integer result_3;

              // binary string simple lookup switch
              ;
              do
              {
                mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                result_3 = MR_strcmp(Atom_10, ((&parse_tree__get_dependencies_vector_common_4[0 + mid_2]))->parse_tree__get_dependencies__vector_common_type_4_0__vct_4_f_0);
                if ((result_3 == (MR_Integer) 0))
                {
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_0;
                }
                else
                if ((result_3 < (MR_Integer) 0))
                  hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
                else
                  lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
              }
              while ((lo_0 <= hi_1));
              succeeded = MR_FALSE;
            label_0:;
              if (succeeded)
              {
                MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_18, (MR_Integer) 0)));

                {
                  STATE_VARIABLE_ImplicitImportNeeds_22_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_22_22, 0) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
                }
              }
              else
              {
                MR_Integer slot_4 = ((MR_hash_string5(Atom_10)) & (MR_Integer) 31);
                MR_String str_5 = ((&parse_tree__get_dependencies_vector_common_4[4 + slot_4]))->parse_tree__get_dependencies__vector_common_type_4_0__vct_4_f_0;

                // hashed string simple lookup switch
                ;
                // compute the hash value of the input string
                ;
                // no collisions; no hash chain loop
                ;
                // lookup the string for this hash slot
                ;
                // did we find a match?
                ;
                if ((((str_5 != NULL)) && ((strcmp(str_5, Atom_10) == 0))))
                {
                  // we found a match; look up the results
                  ;
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_1;
                }
                succeeded = MR_FALSE;
              label_1:;
                if (succeeded)
                {
                  MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_0_18, (MR_Integer) 0)));

                  {
                    STATE_VARIABLE_ImplicitImportNeeds_22_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_ImplicitImportNeeds_22_22, 0) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 6U)))) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
                  }
                }
                else
                  STATE_VARIABLE_ImplicitImportNeeds_22_22 = STATE_VARIABLE_ImplicitImportNeeds_0_18;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_ImplicitImportNeeds_22_22 = STATE_VARIABLE_ImplicitImportNeeds_0_18;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_ImplicitImportNeeds_22_22 = STATE_VARIABLE_ImplicitImportNeeds_0_18;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_ImplicitImportNeeds_22_22 = STATE_VARIABLE_ImplicitImportNeeds_0_18;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_ImplicitImportNeeds_22_22 = STATE_VARIABLE_ImplicitImportNeeds_0_18;
              break;
          }
          break;
      }
      parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(ArgTerms_9, STATE_VARIABLE_ImplicitImportNeeds_22_22, STATE_VARIABLE_ImplicitImportNeeds_19);
    }
    else
      *STATE_VARIABLE_ImplicitImportNeeds_19 = STATE_VARIABLE_ImplicitImportNeeds_0_18;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImplicitImportNeeds_3 = STATE_VARIABLE_ImplicitImportNeeds_0_2;
    else
    {
      MR_Word Term_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ImplicitImportNeeds_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;

      parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(Term_7, STATE_VARIABLE_ImplicitImportNeeds_0_2, &STATE_VARIABLE_ImplicitImportNeeds_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Terms_8;
      next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2 = STATE_VARIABLE_ImplicitImportNeeds_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImplicitImportNeeds_0_2 = next_value_of_STATE_VARIABLE_ImplicitImportNeeds_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__252__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
  MR_Word Globals_5,
  MR_Word ImplicitImportNeeds_6,
  MR_Word * STATE_VARIABLE_ImportDeps_23,
  MR_Word * STATE_VARIABLE_UseDeps_24)
{
  {
    MR_bool succeeded;
    MR_Word ItemsNeedTabling_9;
    MR_Word ItemsNeedTablingStatistics_10;
    MR_Word ItemsNeedSTM_11;
    MR_Word ItemsNeedException_12;
    MR_Word ItemsNeedStringFormat_13;
    MR_Word ItemsNeedStreamFormat_14;
    MR_Word ItemsNeedIO_15;
    MR_Word Deep_16;
    MR_Word Target_17;
    MR_Word HighLevelCode_18;
    MR_Word Parallel_19;
    MR_Word UseRegions_20;
    MR_Word SSDBTraceLevel_21;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_UseDeps_32_32;
    MR_Word STATE_VARIABLE_UseDeps_52_52;
    MR_Word STATE_VARIABLE_UseDeps_61_61;
    MR_Word STATE_VARIABLE_UseDeps_64_64;
    MR_Word STATE_VARIABLE_UseDeps_70_70;
    MR_Word STATE_VARIABLE_UseDeps_73_73;
    MR_Word STATE_VARIABLE_UseDeps_76_76;
    MR_Word STATE_VARIABLE_UseDeps_80_80;
    MR_Word STATE_VARIABLE_UseDeps_87_87;
    MR_Word STATE_VARIABLE_UseDeps_92_92;
    MR_Word STATE_VARIABLE_UseDeps_96_96;

    Var_25 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    Var_26 = mercury__term__context_init_0_f_0();
    Var_27 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_25)), ((MR_Box) (Var_26)), Var_27, STATE_VARIABLE_ImportDeps_23);
    Var_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_30 = mercury__term__context_init_0_f_0();
    Var_31 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_29)), ((MR_Box) (Var_30)), Var_31, &STATE_VARIABLE_UseDeps_32_32);
    ItemsNeedTabling_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitImportNeeds_6, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    ItemsNeedTablingStatistics_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitImportNeeds_6, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    ItemsNeedSTM_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitImportNeeds_6, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    ItemsNeedException_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitImportNeeds_6, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    ItemsNeedStringFormat_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitImportNeeds_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    ItemsNeedStreamFormat_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitImportNeeds_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    ItemsNeedIO_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ImplicitImportNeeds_6, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (ItemsNeedTabling_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word STATE_VARIABLE_UseDeps_49_49;

          Var_47 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
          Var_48 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_47)), ((MR_Box) (Var_48)), STATE_VARIABLE_UseDeps_32_32, &STATE_VARIABLE_UseDeps_49_49);
          switch (ItemsNeedTablingStatistics_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_50;
                MR_Word Var_51;

                Var_50 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
                Var_51 = mercury__term__context_init_0_f_0();
                mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_50)), ((MR_Box) (Var_51)), STATE_VARIABLE_UseDeps_49_49, &STATE_VARIABLE_UseDeps_52_52);
              }
              break;
            case (MR_Integer) 0:
              STATE_VARIABLE_UseDeps_52_52 = STATE_VARIABLE_UseDeps_49_49;
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_33;

          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ItemsNeedTablingStatistics_10));
            MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_4_p_0(Var_33, (MR_String) "parse_tree.get_dependencies", (MR_String) "predicate \140parse_tree.get_dependencies.compute_implicit_import_needs\'/4", (MR_String) "tabling statistics without tabling");
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_5, (MR_Integer) 241, (MR_Integer) 1);
          if (!(succeeded))
          {
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_5, (MR_Integer) 242, (MR_Integer) 1);
            if (!(succeeded))
            {
              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_5, (MR_Integer) 137, (MR_Integer) 1);
            }
          }
          if (succeeded)
          {
            MR_Word Var_44;
            MR_Word Var_45;

            Var_44 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
            Var_45 = mercury__term__context_init_0_f_0();
            mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_44)), ((MR_Box) (Var_45)), STATE_VARIABLE_UseDeps_32_32, &STATE_VARIABLE_UseDeps_52_52);
          }
          else
            STATE_VARIABLE_UseDeps_52_52 = STATE_VARIABLE_UseDeps_32_32;
        }
        break;
    }
    switch (ItemsNeedSTM_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word STATE_VARIABLE_UseDeps_55_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word STATE_VARIABLE_UseDeps_58_58;
          MR_Word Var_59;
          MR_Word Var_60;

          Var_53 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          Var_54 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_53)), ((MR_Box) (Var_54)), STATE_VARIABLE_UseDeps_52_52, &STATE_VARIABLE_UseDeps_55_55);
          Var_56 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          Var_57 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_56)), ((MR_Box) (Var_57)), STATE_VARIABLE_UseDeps_55_55, &STATE_VARIABLE_UseDeps_58_58);
          Var_59 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
          Var_60 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_59)), ((MR_Box) (Var_60)), STATE_VARIABLE_UseDeps_58_58, &STATE_VARIABLE_UseDeps_61_61);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_UseDeps_61_61 = STATE_VARIABLE_UseDeps_52_52;
        break;
    }
    switch (ItemsNeedException_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_62;
          MR_Word Var_63;

          Var_62 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          Var_63 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_62)), ((MR_Box) (Var_63)), STATE_VARIABLE_UseDeps_61_61, &STATE_VARIABLE_UseDeps_64_64);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_UseDeps_64_64 = STATE_VARIABLE_UseDeps_61_61;
        break;
    }
    switch (ItemsNeedStringFormat_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word STATE_VARIABLE_UseDeps_67_67;
          MR_Word Var_68;
          MR_Word Var_69;

          Var_65 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
          Var_66 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_65)), ((MR_Box) (Var_66)), STATE_VARIABLE_UseDeps_64_64, &STATE_VARIABLE_UseDeps_67_67);
          Var_68 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
          Var_69 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_68)), ((MR_Box) (Var_69)), STATE_VARIABLE_UseDeps_67_67, &STATE_VARIABLE_UseDeps_70_70);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_UseDeps_70_70 = STATE_VARIABLE_UseDeps_64_64;
        break;
    }
    switch (ItemsNeedStreamFormat_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_71;
          MR_Word Var_72;

          Var_71 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
          Var_72 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_71)), ((MR_Box) (Var_72)), STATE_VARIABLE_UseDeps_70_70, &STATE_VARIABLE_UseDeps_73_73);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_UseDeps_73_73 = STATE_VARIABLE_UseDeps_70_70;
        break;
    }
    switch (ItemsNeedIO_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_74;
          MR_Word Var_75;

          Var_74 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
          Var_75 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_74)), ((MR_Box) (Var_75)), STATE_VARIABLE_UseDeps_73_73, &STATE_VARIABLE_UseDeps_76_76);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_UseDeps_76_76 = STATE_VARIABLE_UseDeps_73_73;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 216, &Deep_16);
    switch (Deep_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_UseDeps_80_80 = STATE_VARIABLE_UseDeps_76_76;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_78;
          MR_Word Var_79;

          Var_78 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
          Var_79 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_78)), ((MR_Box) (Var_79)), STATE_VARIABLE_UseDeps_76_76, &STATE_VARIABLE_UseDeps_80_80);
        }
        break;
    }
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_5, (MR_Integer) 233, (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_5, (MR_Integer) 234, (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word Var_85;
      MR_Word Var_86;

      Var_85 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
      Var_86 = mercury__term__context_init_0_f_0();
      mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_85)), ((MR_Box) (Var_86)), STATE_VARIABLE_UseDeps_80_80, &STATE_VARIABLE_UseDeps_87_87);
    }
    else
      STATE_VARIABLE_UseDeps_87_87 = STATE_VARIABLE_UseDeps_80_80;
    libs__globals__get_target_2_p_0(Globals_5, &Target_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 280, &HighLevelCode_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 237, &Parallel_19);
    succeeded = (Target_17 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (HighLevelCode_18 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Parallel_19 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word Var_90;
      MR_Word Var_91;

      Var_90 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
      Var_91 = mercury__term__context_init_0_f_0();
      mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_90)), ((MR_Box) (Var_91)), STATE_VARIABLE_UseDeps_87_87, &STATE_VARIABLE_UseDeps_92_92);
    }
    else
      STATE_VARIABLE_UseDeps_92_92 = STATE_VARIABLE_UseDeps_87_87;
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 250, &UseRegions_20);
    switch (UseRegions_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_UseDeps_96_96 = STATE_VARIABLE_UseDeps_92_92;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_94;
          MR_Word Var_95;

          Var_94 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          Var_95 = mercury__term__context_init_0_f_0();
          mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_94)), ((MR_Box) (Var_95)), STATE_VARIABLE_UseDeps_92_92, &STATE_VARIABLE_UseDeps_96_96);
        }
        break;
    }
    libs__globals__get_ssdb_trace_level_2_p_0(Globals_5, &SSDBTraceLevel_21);
    switch (SSDBTraceLevel_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word DisableSSDB_22;

          libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 150, &DisableSSDB_22);
          switch (DisableSSDB_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_98;
                MR_Word Var_99;

                Var_98 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
                Var_99 = mercury__term__context_init_0_f_0();
                mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_98)), ((MR_Box) (Var_99)), STATE_VARIABLE_UseDeps_96_96, STATE_VARIABLE_UseDeps_24);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_UseDeps_24 = STATE_VARIABLE_UseDeps_96_96;
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_UseDeps_24 = STATE_VARIABLE_UseDeps_96_96;
        break;
    }
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(
  MR_Word RawItemBlocks_6,
  MR_Word * IntImportDeps_7,
  MR_Word * IntUseDeps_8,
  MR_Word * ImpImportDeps_9,
  MR_Word * ImpUseDeps_10)
{
  {
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_11 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_12 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_13 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_14 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(RawItemBlocks_6, Var_11, IntImportDeps_7, Var_12, IntUseDeps_8, Var_13, ImpImportDeps_9, Var_14, ImpUseDeps_10);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_IntImportDeps_0_2,
  MR_Word * STATE_VARIABLE_IntImportDeps_3,
  MR_Word STATE_VARIABLE_IntUseDeps_0_4,
  MR_Word * STATE_VARIABLE_IntUseDeps_5,
  MR_Word STATE_VARIABLE_ImpImportDeps_0_6,
  MR_Word * STATE_VARIABLE_ImpImportDeps_7,
  MR_Word STATE_VARIABLE_ImpUseDeps_0_8,
  MR_Word * STATE_VARIABLE_ImpUseDeps_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ImpUseDeps_9 = STATE_VARIABLE_ImpUseDeps_0_8;
      *STATE_VARIABLE_ImpImportDeps_7 = STATE_VARIABLE_ImpImportDeps_0_6;
      *STATE_VARIABLE_IntUseDeps_5 = STATE_VARIABLE_IntUseDeps_0_4;
      *STATE_VARIABLE_IntImportDeps_3 = STATE_VARIABLE_IntImportDeps_0_2;
    }
    else
    {
      MR_Word RawItemBlock_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_22, (MR_Integer) 0))));
      MR_Word Imports_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_22, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_ImpImportDeps_41_41;
      MR_Word STATE_VARIABLE_ImpUseDeps_42_42;
      MR_Word STATE_VARIABLE_IntImportDeps_43_43;
      MR_Word STATE_VARIABLE_IntUseDeps_44_44;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntImportDeps_0_2;
      MR_Word next_value_of_STATE_VARIABLE_IntUseDeps_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ImpImportDeps_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ImpUseDeps_0_8;

      switch (Section_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(Imports_31, STATE_VARIABLE_ImpImportDeps_0_6, &STATE_VARIABLE_ImpImportDeps_41_41, STATE_VARIABLE_ImpUseDeps_0_8, &STATE_VARIABLE_ImpUseDeps_42_42);
            STATE_VARIABLE_IntImportDeps_43_43 = STATE_VARIABLE_IntImportDeps_0_2;
            STATE_VARIABLE_IntUseDeps_44_44 = STATE_VARIABLE_IntUseDeps_0_4;
          }
          break;
        case (MR_Integer) 0:
          {
            parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(Imports_31, STATE_VARIABLE_IntImportDeps_0_2, &STATE_VARIABLE_IntImportDeps_43_43, STATE_VARIABLE_IntUseDeps_0_4, &STATE_VARIABLE_IntUseDeps_44_44);
            STATE_VARIABLE_ImpImportDeps_41_41 = STATE_VARIABLE_ImpImportDeps_0_6;
            STATE_VARIABLE_ImpUseDeps_42_42 = STATE_VARIABLE_ImpUseDeps_0_8;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RawItemBlocks_23;
      next_value_of_STATE_VARIABLE_IntImportDeps_0_2 = STATE_VARIABLE_IntImportDeps_43_43;
      next_value_of_STATE_VARIABLE_IntUseDeps_0_4 = STATE_VARIABLE_IntUseDeps_44_44;
      next_value_of_STATE_VARIABLE_ImpImportDeps_0_6 = STATE_VARIABLE_ImpImportDeps_41_41;
      next_value_of_STATE_VARIABLE_ImpUseDeps_0_8 = STATE_VARIABLE_ImpUseDeps_42_42;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntImportDeps_0_2 = next_value_of_STATE_VARIABLE_IntImportDeps_0_2;
      STATE_VARIABLE_IntUseDeps_0_4 = next_value_of_STATE_VARIABLE_IntUseDeps_0_4;
      STATE_VARIABLE_ImpImportDeps_0_6 = next_value_of_STATE_VARIABLE_ImpImportDeps_0_6;
      STATE_VARIABLE_ImpUseDeps_0_8 = next_value_of_STATE_VARIABLE_ImpUseDeps_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(
  MR_Word TypeInfo_for_MS_9,
  MR_Word ItemBlocks_4,
  MR_Word * ImportDeps_5,
  MR_Word * UseDeps_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;

    Var_7 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_8 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(ItemBlocks_4, Var_7, ImportDeps_5, Var_8, UseDeps_6);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportDeps_0_2,
  MR_Word * STATE_VARIABLE_ImportDeps_3,
  MR_Word STATE_VARIABLE_UseDeps_0_4,
  MR_Word * STATE_VARIABLE_UseDeps_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UseDeps_5 = STATE_VARIABLE_UseDeps_0_4;
      *STATE_VARIABLE_ImportDeps_3 = STATE_VARIABLE_ImportDeps_0_2;
    }
    else
    {
      MR_Word ItemBlock_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ItemBlocks_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Imports_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_12, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_ImportDeps_25_25;
      MR_Word STATE_VARIABLE_UseDeps_26_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportDeps_0_2;
      MR_Word next_value_of_STATE_VARIABLE_UseDeps_0_4;

      parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(Imports_19, STATE_VARIABLE_ImportDeps_0_2, &STATE_VARIABLE_ImportDeps_25_25, STATE_VARIABLE_UseDeps_0_4, &STATE_VARIABLE_UseDeps_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ItemBlocks_13;
      next_value_of_STATE_VARIABLE_ImportDeps_0_2 = STATE_VARIABLE_ImportDeps_25_25;
      next_value_of_STATE_VARIABLE_UseDeps_0_4 = STATE_VARIABLE_UseDeps_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportDeps_0_2 = next_value_of_STATE_VARIABLE_ImportDeps_0_2;
      STATE_VARIABLE_UseDeps_0_4 = next_value_of_STATE_VARIABLE_UseDeps_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(
  MR_Word Avails_4,
  MR_Word * ImportDeps_5,
  MR_Word * UseDeps_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;

    Var_7 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_8 = mercury__multi_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(Avails_4, Var_7, ImportDeps_5, Var_8, UseDeps_6);
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImportDeps_0_2,
  MR_Word * STATE_VARIABLE_ImportDeps_3,
  MR_Word STATE_VARIABLE_UseDeps_0_4,
  MR_Word * STATE_VARIABLE_UseDeps_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UseDeps_5 = STATE_VARIABLE_UseDeps_0_4;
      *STATE_VARIABLE_ImportDeps_3 = STATE_VARIABLE_ImportDeps_0_2;
    }
    else
    {
      MR_Word Avail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Avails_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UseDeps_25_25;
      MR_Word STATE_VARIABLE_ImportDeps_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImportDeps_0_2;
      MR_Word next_value_of_STATE_VARIABLE_UseDeps_0_4;

      if (((MR_tag((MR_Word) Avail_12)) == (MR_Integer) 0))
      {
        MR_Word ModuleName_16;
        MR_Word Context_17;
        MR_Word Var_26 = (MR_Word) ((MR_Word) (Avail_12));

        ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
        Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
        mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_16)), ((MR_Box) (Context_17)), STATE_VARIABLE_ImportDeps_0_2, &STATE_VARIABLE_ImportDeps_27_27);
        STATE_VARIABLE_UseDeps_25_25 = STATE_VARIABLE_UseDeps_0_4;
      }
      else
      {
        MR_Word Var_24 = (MR_Word) (MR_body((MR_Word) (Avail_12), (MR_Integer) 1));
        MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        MR_Word Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));

        mercury__multi_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_30)), ((MR_Box) (Context_31)), STATE_VARIABLE_UseDeps_0_4, &STATE_VARIABLE_UseDeps_25_25);
        STATE_VARIABLE_ImportDeps_27_27 = STATE_VARIABLE_ImportDeps_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Avails_13;
      next_value_of_STATE_VARIABLE_ImportDeps_0_2 = STATE_VARIABLE_ImportDeps_27_27;
      next_value_of_STATE_VARIABLE_UseDeps_0_4 = STATE_VARIABLE_UseDeps_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImportDeps_0_2 = next_value_of_STATE_VARIABLE_ImportDeps_0_2;
      STATE_VARIABLE_UseDeps_0_4 = next_value_of_STATE_VARIABLE_UseDeps_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_io_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_io_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__get_dependencies__init(void)
{
}

void mercury__parse_tree__get_dependencies__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0);
	MR_register_type_ctor_info(&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0);
}

void mercury__parse_tree__get_dependencies__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__get_dependencies__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.get_dependencies.
