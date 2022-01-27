/*
** Automatically generated from `get_dependencies.m'
** by the Mercury compiler,
** version DEV
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


/* :- module parse_tree.get_dependencies. */
/* :- implementation. */

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
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;

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
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3);

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5);

static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__231__1_2_p_0(
  MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10,
  MR_Word parse_tree__get_dependencies__HeadVar__2_33);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2);

static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
  MR_Word parse_tree__get_dependencies__TypeInfo_14_14,
  MR_Word parse_tree__get_dependencies__ItemBlock_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_11,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_12);

static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
  MR_Word parse_tree__get_dependencies__Term_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
  MR_Word parse_tree__get_dependencies__Goal_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
  MR_Word parse_tree__get_dependencies__ItemClause_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
  MR_Word parse_tree__get_dependencies__ItemMutableInfo_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
  MR_Box parse_tree__get_dependencies__closure_arg,
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
  MR_Word parse_tree__get_dependencies__InstanceMethod_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
  MR_Box parse_tree__get_dependencies__closure_arg,
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
  MR_Box parse_tree__get_dependencies__closure_arg,
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);

static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
  MR_Box parse_tree__get_dependencies__closure_arg);

static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
  MR_Word parse_tree__get_dependencies__Globals_5,
  MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_6,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24);

static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5);

static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9);

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
  MR_Box parse_tree__get_dependencies__closure_arg,
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[1][1];

static /* final */ const MR_Integer parse_tree__get_dependencies_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[1][7];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_6[3][6];

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_7[3][3];


/* sealed */ struct parse_tree__get_dependencies__vector_common_type_8_0_s {
  const MR_String parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct parse_tree__get_dependencies__vector_common_type_8_0_s parse_tree__get_dependencies_vector_common_8[36];



static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | (((MR_Integer) 0 << (MR_Integer) 6)))))))))))))))
  },
};

static /* final */ const MR_Integer parse_tree__get_dependencies_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__prog_item__pti_item_block_1__pseudo_1)),
    ((MR_Box) (&parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0)),
    ((MR_Box) (&parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0))
  },
};

static /* final */ const MR_Box parse_tree__get_dependencies_scalar_common_7[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_6[0])),
    ((MR_Box) (parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_6[1])),
    ((MR_Box) (parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__get_dependencies_scalar_common_6[2])),
    ((MR_Box) (parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__get_dependencies__vector_common_type_8_0_s parse_tree__get_dependencies_vector_common_8[36] = {
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
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__get_dependencies__cord__pti_cord_1__plain_parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0
  }
};

static const MR_PseudoTypeInfo parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0[7] = {
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_tabling_statistics_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stm_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_exception_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_string_format_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_stream_format_0,
  (MR_PseudoTypeInfo) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_maybe_need_io_0
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
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0 = {
  (MR_String) "implicit_import_needs",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_types_implicit_import_needs_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_names_implicit_import_needs_0_0,
  parse_tree__get_dependencies__parse_tree__get_dependencies__field_locns_implicit_import_needs_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0[1] = {
  &parse_tree__get_dependencies__parse_tree__get_dependencies__du_functor_desc_implicit_import_needs_0_0
};

static const MR_DuPtagLayout parse_tree__get_dependencies__parse_tree__get_dependencies__du_ptag_ordered_implicit_import_needs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__get_dependencies__parse_tree__get_dependencies__du_stag_ordered_implicit_import_needs_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
parse_tree__get_dependencies____Unify____implicit_import_needs_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    {
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____implicit_import_needs_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

    {
      parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    {
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

    {
      parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    {
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_io_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

    {
      parse_tree__get_dependencies____Compare____maybe_need_io_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    {
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

    {
      parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    {
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

    {
      parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    {
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

    {
      parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    {
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

    {
      parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0_10001(
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    {
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2));
    }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0_10001(
  MR_Box * parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Word parse_tree__get_dependencies__conv0_HeadVar__1_1;

    {
      parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(&parse_tree__get_dependencies__conv0_HeadVar__1_1, ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_3));
    }
    *parse_tree__get_dependencies__wrapper_arg_1 = ((MR_Box) (parse_tree__get_dependencies__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
        else
          {
            MR_Word parse_tree__get_dependencies__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 4)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_17_17;
            MR_Box parse_tree__get_dependencies__V_10_10 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 0));
            MR_Word parse_tree__get_dependencies__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 2)));
            MR_Word parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 3)));

            {
              parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(parse_tree__get_dependencies__Items_14, parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_8;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_17_17;

              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
        else
          {
            MR_Word parse_tree__get_dependencies__ItemBlock_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__ItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 4)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17_17;
            MR_Box parse_tree__get_dependencies___Section_10 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 0));
            MR_Word parse_tree__get_dependencies___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies___Incls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 2)));
            MR_Word parse_tree__get_dependencies___Imports_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_7, (MR_Integer) 3)));

            {
              parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(parse_tree__get_dependencies__Items_14, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_8;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17_17;

              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
            *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
          }
        else
          {
            MR_Word parse_tree__get_dependencies__ItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__ItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__Imports_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 3)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25;
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;
            MR_Box parse_tree__get_dependencies___Section_16 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 0));
            MR_Word parse_tree__get_dependencies___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies___Incls_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 2)));
            MR_Word parse_tree__get_dependencies___Items_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_12, (MR_Integer) 4)));

            {
              parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Imports_19, parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__ItemBlocks_13;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_25_25;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;

              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4;
              parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__231__1_2_p_0(
  MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10,
  MR_Word parse_tree__get_dependencies__HeadVar__2_33)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10 == parse_tree__get_dependencies__HeadVar__2_33);

    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_statistics_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_statistics_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_tabling_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_tabling_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_string_format_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_string_format_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stream_format_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stream_format_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_stm_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_stm_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_io_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_io_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____maybe_need_exception_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar1_4 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
    MR_Integer parse_tree__get_dependencies__Cast_HeadVar2_5 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__Cast_HeadVar1_4, parse_tree__get_dependencies__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies____Unify____maybe_need_exception_0_0(
  MR_Word parse_tree__get_dependencies__HeadVar__2_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HeadVar__2_1 == parse_tree__get_dependencies__HeadVar__2_2);

    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies____Compare____implicit_import_needs_0_0(
  MR_Word * parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2,
  MR_Word parse_tree__get_dependencies__HeadVar__3_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Integer parse_tree__get_dependencies__CastX_24 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;
    MR_Integer parse_tree__get_dependencies__CastY_25 = (MR_Integer) parse_tree__get_dependencies__HeadVar__3_3;

    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__CastX_24 == parse_tree__get_dependencies__CastY_25);
    if (parse_tree__get_dependencies__succeeded)
      *parse_tree__get_dependencies__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__get_dependencies__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_18_18;
        MR_Integer parse_tree__get_dependencies__V_33_33 = (MR_Integer) parse_tree__get_dependencies__V_4_4;
        MR_Integer parse_tree__get_dependencies__V_34_34 = (MR_Integer) parse_tree__get_dependencies__V_11_11;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_18_18, parse_tree__get_dependencies__V_33_33, parse_tree__get_dependencies__V_34_34);
        }
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_18_18 == (MR_Integer) 0);
        parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
        if (parse_tree__get_dependencies__succeeded)
          *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_18_18;
        else
          {
            MR_Word parse_tree__get_dependencies__V_19_19;
            MR_Integer parse_tree__get_dependencies__V_35_35 = (MR_Integer) parse_tree__get_dependencies__V_5_5;
            MR_Integer parse_tree__get_dependencies__V_36_36 = (MR_Integer) parse_tree__get_dependencies__V_12_12;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_19_19, parse_tree__get_dependencies__V_35_35, parse_tree__get_dependencies__V_36_36);
            }
            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_19_19 == (MR_Integer) 0);
            parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
            if (parse_tree__get_dependencies__succeeded)
              *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_19_19;
            else
              {
                MR_Word parse_tree__get_dependencies__V_20_20;
                MR_Integer parse_tree__get_dependencies__V_37_37 = (MR_Integer) parse_tree__get_dependencies__V_6_6;
                MR_Integer parse_tree__get_dependencies__V_38_38 = (MR_Integer) parse_tree__get_dependencies__V_13_13;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_20_20, parse_tree__get_dependencies__V_37_37, parse_tree__get_dependencies__V_38_38);
                }
                parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_20_20 == (MR_Integer) 0);
                parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
                if (parse_tree__get_dependencies__succeeded)
                  *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_20_20;
                else
                  {
                    MR_Word parse_tree__get_dependencies__V_21_21;
                    MR_Integer parse_tree__get_dependencies__V_39_39 = (MR_Integer) parse_tree__get_dependencies__V_7_7;
                    MR_Integer parse_tree__get_dependencies__V_40_40 = (MR_Integer) parse_tree__get_dependencies__V_14_14;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_21_21, parse_tree__get_dependencies__V_39_39, parse_tree__get_dependencies__V_40_40);
                    }
                    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_21_21 == (MR_Integer) 0);
                    parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
                    if (parse_tree__get_dependencies__succeeded)
                      *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_21_21;
                    else
                      {
                        MR_Word parse_tree__get_dependencies__V_22_22;
                        MR_Integer parse_tree__get_dependencies__V_41_41 = (MR_Integer) parse_tree__get_dependencies__V_8_8;
                        MR_Integer parse_tree__get_dependencies__V_42_42 = (MR_Integer) parse_tree__get_dependencies__V_15_15;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_22_22, parse_tree__get_dependencies__V_41_41, parse_tree__get_dependencies__V_42_42);
                        }
                        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_22_22 == (MR_Integer) 0);
                        parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
                        if (parse_tree__get_dependencies__succeeded)
                          *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_22_22;
                        else
                          {
                            MR_Word parse_tree__get_dependencies__V_23_23;
                            MR_Integer parse_tree__get_dependencies__V_43_43 = (MR_Integer) parse_tree__get_dependencies__V_9_9;
                            MR_Integer parse_tree__get_dependencies__V_44_44 = (MR_Integer) parse_tree__get_dependencies__V_16_16;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__get_dependencies__V_23_23, parse_tree__get_dependencies__V_43_43, parse_tree__get_dependencies__V_44_44);
                            }
                            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_23_23 == (MR_Integer) 0);
                            parse_tree__get_dependencies__succeeded = !(parse_tree__get_dependencies__succeeded);
                            if (parse_tree__get_dependencies__succeeded)
                              *parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__V_23_23;
                            else
                              {
                                MR_Integer parse_tree__get_dependencies__V_45_45 = (MR_Integer) parse_tree__get_dependencies__V_10_10;
                                MR_Integer parse_tree__get_dependencies__V_46_46 = (MR_Integer) parse_tree__get_dependencies__V_17_17;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__get_dependencies__HeadVar__1_1, parse_tree__get_dependencies__V_45_45, parse_tree__get_dependencies__V_46_46);
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
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__HeadVar__2_2)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Integer parse_tree__get_dependencies__CastX_17 = (MR_Integer) parse_tree__get_dependencies__HeadVar__1_1;
    MR_Integer parse_tree__get_dependencies__CastY_18 = (MR_Integer) parse_tree__get_dependencies__HeadVar__2_2;

    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__CastX_17 == parse_tree__get_dependencies__CastY_18);
    if (parse_tree__get_dependencies__succeeded)
      parse_tree__get_dependencies__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__get_dependencies__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word parse_tree__get_dependencies__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_3_3 == parse_tree__get_dependencies__V_10_10);
        if (parse_tree__get_dependencies__succeeded)
          {
            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_4_4 == parse_tree__get_dependencies__V_11_11);
            if (parse_tree__get_dependencies__succeeded)
              {
                parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_5_5 == parse_tree__get_dependencies__V_12_12);
                if (parse_tree__get_dependencies__succeeded)
                  {
                    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_6_6 == parse_tree__get_dependencies__V_13_13);
                    if (parse_tree__get_dependencies__succeeded)
                      {
                        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_7_7 == parse_tree__get_dependencies__V_14_14);
                        if (parse_tree__get_dependencies__succeeded)
                          {
                            parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_8_8 == parse_tree__get_dependencies__V_15_15);
                            if (parse_tree__get_dependencies__succeeded)
                              parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__V_9_9 == parse_tree__get_dependencies__V_16_16);
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_3 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
        else
          {
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25;
            MR_Word parse_tree__get_dependencies__Lang_16;
            MR_Word parse_tree__get_dependencies__LiteralOrInclude_18;
            MR_Word parse_tree__get_dependencies__ItemPragma_10;
            MR_Word parse_tree__get_dependencies__Pragma_11;
            MR_Word parse_tree__get_dependencies__V_12_12;
            MR_Word parse_tree__get_dependencies__V_13_13;
            MR_Integer parse_tree__get_dependencies__V_14_14;

            parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (parse_tree__get_dependencies__succeeded)
              {
                parse_tree__get_dependencies__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
                parse_tree__get_dependencies__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 0)));
                parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 1)));
                parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 2)));
                parse_tree__get_dependencies__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 3)));
                if (((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word parse_tree__get_dependencies__FCInfo_19 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Pragma_11), (MR_Integer) 1);

                    parse_tree__get_dependencies__Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FCInfo_19, (MR_Integer) 0)));
                    parse_tree__get_dependencies__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FCInfo_19, (MR_Integer) 1)));
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
                  }
                else
                if (((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word parse_tree__get_dependencies__FDInfo_15 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Pragma_11), (MR_Integer) 0);
                    MR_Word parse_tree__get_dependencies___IsLocal_17;

                    parse_tree__get_dependencies__Lang_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 0)))) & (MR_Integer) 3);
                    parse_tree__get_dependencies___IsLocal_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    parse_tree__get_dependencies__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FDInfo_15, (MR_Integer) 1)));
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
                  }
                else
                  parse_tree__get_dependencies__succeeded = MR_FALSE;
              }
            if (parse_tree__get_dependencies__succeeded)
              if (((MR_tag((MR_Word) parse_tree__get_dependencies__LiteralOrInclude_18)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_String parse_tree__get_dependencies__FileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__LiteralOrInclude_18, (MR_Integer) 0)));
                  MR_Word parse_tree__get_dependencies__IncludeFile_22;

                  {
                    parse_tree__get_dependencies__IncludeFile_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__IncludeFile_22, 0) = ((MR_Box) (parse_tree__get_dependencies__Lang_16));
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__IncludeFile_22, 1) = ((MR_Box) (parse_tree__get_dependencies__FileName_21));
                  }
                  {
                    parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2, ((MR_Box) (parse_tree__get_dependencies__IncludeFile_22)));
                  }
                }
              else
                parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
            else
              parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2;
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_25_25;

              parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(
  MR_Word parse_tree__get_dependencies__TypeInfo_14_14,
  MR_Word parse_tree__get_dependencies__ItemBlock_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_11,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_12)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 4)));
    MR_Box parse_tree__get_dependencies__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 0));
    MR_Word parse_tree__get_dependencies__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 1)));
    MR_Word parse_tree__get_dependencies__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 2)));
    MR_Word parse_tree__get_dependencies__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemBlock_4, (MR_Integer) 3)));

    {
      parse_tree__get_dependencies__gather_foreign_include_files_in_items_acc_3_p_0(parse_tree__get_dependencies__Items_10, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_0_11, parse_tree__get_dependencies__STATE_VARIABLE_IncludeFiles_12);
    }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_fact_table_dependencies_in_items_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_3 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
        else
          {
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20;
            MR_String parse_tree__get_dependencies__FileName_17;
            MR_Word parse_tree__get_dependencies__ItemPragma_10;
            MR_Word parse_tree__get_dependencies__Pragma_11;
            MR_Word parse_tree__get_dependencies__FTInfo_15;
            MR_Word parse_tree__get_dependencies__V_12_12;
            MR_Word parse_tree__get_dependencies__V_13_13;
            MR_Integer parse_tree__get_dependencies__V_14_14;
            MR_Word parse_tree__get_dependencies___PredNameArity_16;

            parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (parse_tree__get_dependencies__succeeded)
              {
                parse_tree__get_dependencies__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
                parse_tree__get_dependencies__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 0)));
                parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 1)));
                parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 2)));
                parse_tree__get_dependencies__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_10, (MR_Integer) 3)));
                parse_tree__get_dependencies__succeeded = ((((MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 16)));
                if (parse_tree__get_dependencies__succeeded)
                  {
                    parse_tree__get_dependencies__FTInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_11, (MR_Integer) 1)));
                    parse_tree__get_dependencies___PredNameArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FTInfo_15, (MR_Integer) 0)));
                    parse_tree__get_dependencies__FileName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__FTInfo_15, (MR_Integer) 1)));
                    parse_tree__get_dependencies__succeeded = MR_TRUE;
                  }
              }
            if (parse_tree__get_dependencies__succeeded)
              {
                parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20, 0) = ((MR_Box) (parse_tree__get_dependencies__FileName_17));
                MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20, 1) = ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2));
              }
            else
              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2;
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_20_20;

              parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_RevFactTableFileNames_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
        else
          {
            MR_Word parse_tree__get_dependencies__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

            {
              parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__Term_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Terms_8;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(
  MR_Word parse_tree__get_dependencies__Term_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    if (((MR_tag((MR_Word) parse_tree__get_dependencies__Term_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__get_dependencies__Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 0)));
        MR_Word parse_tree__get_dependencies__ArgTerms_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 1)));
        MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21;
        MR_Word parse_tree__get_dependencies___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Term_4, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__get_dependencies__Const_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__get_dependencies__Atom_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Const_8, (MR_Integer) 0)));

              parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__Atom_10, (MR_String) "format") == 0);
              if (parse_tree__get_dependencies__succeeded)
                {
                  MR_Word parse_tree__get_dependencies__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

                  {
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_32_32 | ((((parse_tree__get_dependencies__V_33_33 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_34_34 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_35_35 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_38_38 << (MR_Integer) 6)))))))))))))));
                  }
                }
              else
                {
                  MR_Integer parse_tree__get_dependencies__lo_0;
                  MR_Integer parse_tree__get_dependencies__hi_1;
                  MR_Integer parse_tree__get_dependencies__mid_2;
                  MR_Integer parse_tree__get_dependencies__result_3;

                  /* binary string simple lookup switch */
                  parse_tree__get_dependencies__lo_0 = (MR_Integer) 0;
                  parse_tree__get_dependencies__hi_1 = (MR_Integer) 3;
                  do
                    {
                      parse_tree__get_dependencies__mid_2 = (((parse_tree__get_dependencies__lo_0 + parse_tree__get_dependencies__hi_1)) / (MR_Integer) 2);
                      parse_tree__get_dependencies__result_3 = MR_strcmp(parse_tree__get_dependencies__Atom_10, ((&parse_tree__get_dependencies_vector_common_8[0 + parse_tree__get_dependencies__mid_2]))->parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0);
                      if ((parse_tree__get_dependencies__result_3 == (MR_Integer) 0))
                        {
                          parse_tree__get_dependencies__succeeded = MR_TRUE;
                          /* jump out of search loop */
                          goto label_0;
                        }
                      else
                      if ((parse_tree__get_dependencies__result_3 < (MR_Integer) 0))
                        parse_tree__get_dependencies__hi_1 = (parse_tree__get_dependencies__mid_2 - (MR_Integer) 1);
                      else
                        parse_tree__get_dependencies__lo_0 = (parse_tree__get_dependencies__mid_2 + (MR_Integer) 1);
                    }
                  while ((parse_tree__get_dependencies__lo_0 <= parse_tree__get_dependencies__hi_1));
                  parse_tree__get_dependencies__succeeded = MR_FALSE;
                label_0:;
                  if (parse_tree__get_dependencies__succeeded)
                    {
                      MR_Word parse_tree__get_dependencies__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                      {
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_46_46 | ((((parse_tree__get_dependencies__V_47_47 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_48_48 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_49_49 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_51_51 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_52_52 << (MR_Integer) 6)))))))))))))));
                      }
                    }
                  else
                    {
                      MR_Integer parse_tree__get_dependencies__slot_4;
                      MR_String parse_tree__get_dependencies__str_5;

                      /* hashed string simple lookup switch */
                      /* compute the hash value of the input string */
                      parse_tree__get_dependencies__slot_4 = ((MR_hash_string5(parse_tree__get_dependencies__Atom_10)) & (MR_Integer) 31);
                      /* no collisions; no hash chain loop */
                      /* lookup the string for this hash slot */
                      parse_tree__get_dependencies__str_5 = ((&parse_tree__get_dependencies_vector_common_8[4 + parse_tree__get_dependencies__slot_4]))->parse_tree__get_dependencies__vector_common_type_8_0__vct_8_f_0;
                      /* did we find a match? */
                      if ((((parse_tree__get_dependencies__str_5 != NULL)) && ((strcmp(parse_tree__get_dependencies__str_5, parse_tree__get_dependencies__Atom_10) == 0))))
                        {
                          /* we found a match; look up the results */
                          parse_tree__get_dependencies__succeeded = MR_TRUE;
                          /* jump out of search loop */
                          goto label_1;
                        }
                      parse_tree__get_dependencies__succeeded = MR_FALSE;
                    label_1:;
                      if (parse_tree__get_dependencies__succeeded)
                        {
                          MR_Word parse_tree__get_dependencies__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

                          {
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_53_53 | ((((parse_tree__get_dependencies__V_54_54 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_55_55 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_56_56 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_59_59 << (MR_Integer) 6)))))))))))))));
                          }
                        }
                      else
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
            break;
          case (MR_Integer) 2:
            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Const_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
                break;
              case (MR_Integer) 1:
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
                break;
              case (MR_Integer) 2:
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
                break;
            }
            break;
        }
        {
          parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__ArgTerms_9, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_21_21, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18);
        }
      }
    else
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_17;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
    else
      {
        MR_Word parse_tree__get_dependencies__CatchAnyExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__get_dependencies__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchAnyExpr_7, (MR_Integer) 1)));
        MR_Word parse_tree__get_dependencies___Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchAnyExpr_7, (MR_Integer) 0)));

        {
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_10, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);
        }
      }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
        else
          {
            MR_Word parse_tree__get_dependencies__CatchExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__CatchExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchExpr_7, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14;
            MR_Word parse_tree__get_dependencies___Pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CatchExpr_7, (MR_Integer) 0)));

            {
              parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_11, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__CatchExprs_8;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14_14;

              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;

    if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
    else
      {
        MR_Word parse_tree__get_dependencies__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));

        {
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3);
        }
      }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
        else
          {
            MR_Word parse_tree__get_dependencies__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

            {
              parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_7, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Goals_8;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_12_12;

              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(
  MR_Word parse_tree__get_dependencies__Goal_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        switch (MR_tag((MR_Word) parse_tree__get_dependencies__Goal_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__get_dependencies__TermA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
              MR_Word parse_tree__get_dependencies__TermB_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68_68;
              MR_Word parse_tree__get_dependencies__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));
              MR_Word parse_tree__get_dependencies___Purity_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));

              {
                parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__TermA_64, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68_68);
              }
              {
                parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__TermB_65, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_68_68, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__get_dependencies__CalleeSymName_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
              MR_Word parse_tree__get_dependencies__Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74;
              MR_Word parse_tree__get_dependencies__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));
              MR_Word parse_tree__get_dependencies___Purity_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
              MR_Word parse_tree__get_dependencies__ModuleName_59;
              MR_String parse_tree__get_dependencies__V_71_71;

              parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__CalleeSymName_57)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__get_dependencies__succeeded)
                {
                  parse_tree__get_dependencies__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__CalleeSymName_57, (MR_Integer) 0)));
                  parse_tree__get_dependencies__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__CalleeSymName_57, (MR_Integer) 1)));
                  parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_71_71, (MR_String) "format") == 0);
                }
              if (parse_tree__get_dependencies__succeeded)
                {
                  MR_String parse_tree__get_dependencies__V_217_217;

                  parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__ModuleName_59)) == (MR_mktag((MR_Integer) 0)));
                  if (parse_tree__get_dependencies__succeeded)
                    {
                      parse_tree__get_dependencies__V_217_217 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ModuleName_59, (MR_Integer) 0)));
                      if ((strcmp(parse_tree__get_dependencies__V_217_217, (MR_String) "io") == 0))
                        parse_tree__get_dependencies__succeeded = MR_TRUE;
                      else
                      if ((strcmp(parse_tree__get_dependencies__V_217_217, (MR_String) "string") == 0))
                        parse_tree__get_dependencies__succeeded = MR_TRUE;
                      else
                        parse_tree__get_dependencies__succeeded = MR_FALSE;
                    }
                  if (parse_tree__get_dependencies__succeeded)
                    {
                      MR_Word parse_tree__get_dependencies__V_162_162 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_163_163 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_164_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_167_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_168_168 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_166_166 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                      {
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_162_162 | ((((parse_tree__get_dependencies__V_163_163 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_164_164 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_165_165 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_167_167 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_168_168 << (MR_Integer) 6)))))))))))))));
                      }
                    }
                  else
                    {
                      if (((MR_tag((MR_Word) parse_tree__get_dependencies__ModuleName_59)) == (MR_mktag((MR_Integer) 1))))
                        {
                          MR_Word parse_tree__get_dependencies__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ModuleName_59, (MR_Integer) 0)));
                          MR_String parse_tree__get_dependencies__V_77_77;
                          MR_String parse_tree__get_dependencies__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ModuleName_59, (MR_Integer) 1)));

                          parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_78_78, (MR_String) "string_writer") == 0);
                          if (parse_tree__get_dependencies__succeeded)
                            {
                              parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__V_76_76)) == (MR_mktag((MR_Integer) 0)));
                              if (parse_tree__get_dependencies__succeeded)
                                {
                                  parse_tree__get_dependencies__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_76_76, (MR_Integer) 0)));
                                  parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_77_77, (MR_String) "stream") == 0);
                                }
                            }
                        }
                      else
                        {
                          MR_String parse_tree__get_dependencies__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ModuleName_59, (MR_Integer) 0)));

                          if ((strcmp(parse_tree__get_dependencies__V_218_218, (MR_String) "stream") == 0))
                            parse_tree__get_dependencies__succeeded = MR_TRUE;
                          else
                          if ((strcmp(parse_tree__get_dependencies__V_218_218, (MR_String) "string_writer") == 0))
                            parse_tree__get_dependencies__succeeded = MR_TRUE;
                          else
                            parse_tree__get_dependencies__succeeded = MR_FALSE;
                        }
                      if (parse_tree__get_dependencies__succeeded)
                        {
                          MR_Word parse_tree__get_dependencies__V_169_169 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_171_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_172_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_175_175 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_173_173 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                          MR_Word parse_tree__get_dependencies__V_174_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

                          {
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_169_169 | ((((parse_tree__get_dependencies__V_170_170 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_171_171 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_172_172 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_175_175 << (MR_Integer) 6)))))))))))))));
                          }
                        }
                      else
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
                    }
                }
              else
                {
                  MR_String parse_tree__get_dependencies__V_85_85;

                  parse_tree__get_dependencies__succeeded = ((MR_tag((MR_Word) parse_tree__get_dependencies__CalleeSymName_57)) == (MR_mktag((MR_Integer) 0)));
                  if (parse_tree__get_dependencies__succeeded)
                    {
                      parse_tree__get_dependencies__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__CalleeSymName_57, (MR_Integer) 0)));
                      parse_tree__get_dependencies__succeeded = (strcmp(parse_tree__get_dependencies__V_85_85, (MR_String) "format") == 0);
                    }
                  if (parse_tree__get_dependencies__succeeded)
                    {
                      MR_Word parse_tree__get_dependencies__V_183_183 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_188_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

                      {
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_183_183 | ((((parse_tree__get_dependencies__V_184_184 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_185_185 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_186_186 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((((MR_Integer) 1 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_189_189 << (MR_Integer) 6)))))))))))))));
                      }
                    }
                  else
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
                }
              {
                parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__Args_58, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_74_74, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__get_dependencies__SubGoalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
              MR_Word parse_tree__get_dependencies__SubGoalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_111;
              MR_Word parse_tree__get_dependencies__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)));

              {
                parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_9, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_111);
              }
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_10;
                MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_111;

                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
                parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__get_dependencies__Cond_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__get_dependencies__Else_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_97_97;
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98;
                  MR_Word parse_tree__get_dependencies__Then_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__get_dependencies__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___Vars_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies___StateVars_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));

                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Cond_48, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_97_97);
                  }
                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Then_129, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_97_97, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__Else_49;
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_98_98;

                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__get_dependencies__SubGoalA_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies__SubGoalB_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_199;
                  MR_Word parse_tree__get_dependencies__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_197, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_199);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_198;
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_199;

                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__get_dependencies__SubGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_16;

                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
                break;
              case (MR_Integer) 5:
                {
                  MR_Word parse_tree__get_dependencies__SubGoalA_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies__SubGoalB_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_208;
                  MR_Word parse_tree__get_dependencies__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_206, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_208);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_207;
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_208;

                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word parse_tree__get_dependencies__SubGoal_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__get_dependencies__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)))) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies___Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_213;

                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word parse_tree__get_dependencies__SubGoal_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___Purity_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_212;

                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word parse_tree__get_dependencies__SubGoal_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__get_dependencies__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___OrdVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies___StateVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies___DotVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__get_dependencies___ColonVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_211;

                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word parse_tree__get_dependencies__SubGoal_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__get_dependencies__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___OrdVars_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies___StateVars_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies___DotVars_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__get_dependencies___ColonVars_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_210;

                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word parse_tree__get_dependencies__SubGoal_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__get_dependencies__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___OrdVars_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies___StateVars_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies___DotVars_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__get_dependencies___ColonVars_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_209;

                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word parse_tree__get_dependencies__SubGoal_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___Detism_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_215;

                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word parse_tree__get_dependencies__SubGoal_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___SwitchVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_214;

                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word parse_tree__get_dependencies__SubGoal_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__get_dependencies__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___Detism_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies___SwitchVar_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_216;

                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word parse_tree__get_dependencies__MaybeIO_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107;
                  MR_Word parse_tree__get_dependencies__SubGoal_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__get_dependencies__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___CompCond_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies___RunCond_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies___Mutables_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));

                  if ((parse_tree__get_dependencies__MaybeIO_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66;
                  else
                    {
                      MR_Word parse_tree__get_dependencies__V_134_134 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      MR_Word parse_tree__get_dependencies__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

                      {
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_134_134 | ((((parse_tree__get_dependencies__V_135_135 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_136_136 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_137_137 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_138_138 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_139_139 << (MR_Integer) 5)) | (((MR_Integer) 1 << (MR_Integer) 6)))))))))))))));
                      }
                    }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoal_123;
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_107_107;

                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word parse_tree__get_dependencies__MainGoal_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__get_dependencies__OrElseGoals_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_93_93;
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_95_95;
                  MR_Word parse_tree__get_dependencies__V_148_148 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_152_152 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_153_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___Outer_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies___Inner_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies___OutputVars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__get_dependencies__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_151_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

                  {
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_93_93, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_148_148 | ((((parse_tree__get_dependencies__V_149_149 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_152_152 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_153_153 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_154_154 << (MR_Integer) 6)))))))))))))));
                  }
                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__MainGoal_54, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_93_93, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_95_95);
                  }
                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goals_3_p_0(parse_tree__get_dependencies__OrElseGoals_55, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_95_95, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word parse_tree__get_dependencies__Then_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__get_dependencies__MaybeElse_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__get_dependencies__Catches_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__get_dependencies__MaybeCatchAny_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 7)));
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_100_100;
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_102_102;
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103;
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105;
                  MR_Word parse_tree__get_dependencies__SubGoal_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___MaybeIO_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies__V_141_141 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

                  {
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_100_100, 0) = ((MR_Box) ((parse_tree__get_dependencies__V_141_141 | ((((parse_tree__get_dependencies__V_142_142 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_143_143 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_145_145 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_146_146 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_147_147 << (MR_Integer) 6)))))))))))))));
                  }
                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoal_124, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_100_100, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_102_102);
                  }
                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Then_43, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_102_102, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103);
                  }
                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_goal_3_p_0(parse_tree__get_dependencies__MaybeElse_44, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_103_103, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104);
                  }
                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_catch_exprs_3_p_0(parse_tree__get_dependencies__Catches_45, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105);
                  }
                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_maybe_catch_any_expr_3_p_0(parse_tree__get_dependencies__MaybeCatchAny_46, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_105_105, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word parse_tree__get_dependencies__SubGoalA_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies__SubGoalB_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_205;
                  MR_Word parse_tree__get_dependencies__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_203, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_205);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_204;
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_205;

                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Word parse_tree__get_dependencies__SubGoalA_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies__SubGoalB_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_202;
                  MR_Word parse_tree__get_dependencies__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__SubGoalA_200, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_202);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__get_dependencies__Goal__tmp_copy_4 = parse_tree__get_dependencies__SubGoalB_201;
                    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_111_202;

                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_66;
                    parse_tree__get_dependencies__Goal_4 = parse_tree__get_dependencies__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_Word parse_tree__get_dependencies__EventArgs_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 1)));
                  MR_String parse_tree__get_dependencies___EventName_61 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__EventArgs_62, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_66, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_67);
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(
  MR_Word parse_tree__get_dependencies__ItemClause_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__HeadTerms_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 2)));
    MR_Word parse_tree__get_dependencies__MaybeGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 5)));
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18_18;
    MR_Word parse_tree__get_dependencies___PredName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 0)));
    MR_Word parse_tree__get_dependencies___PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 1)));
    MR_Word parse_tree__get_dependencies___Origin_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 3)));
    MR_Word parse_tree__get_dependencies___VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 4)));
    MR_Word parse_tree__get_dependencies___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 6)));
    MR_Integer parse_tree__get_dependencies___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemClause_4, (MR_Integer) 7)));

    {
      parse_tree__get_dependencies__gather_implicit_import_needs_in_terms_3_p_0(parse_tree__get_dependencies__HeadTerms_8, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18_18);
    }
    if (((MR_tag((MR_Word) parse_tree__get_dependencies__MaybeGoal_11)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18_18;
    else
      {
        MR_Word parse_tree__get_dependencies__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__MaybeGoal_11, (MR_Integer) 0)));

        {
          parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_14, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_18_18, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17);
        }
      }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(
  MR_Word parse_tree__get_dependencies__ItemMutableInfo_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__InitValue_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 5)));
    MR_String parse_tree__get_dependencies___Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 0)));
    MR_Word parse_tree__get_dependencies___OrigType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__get_dependencies___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 2)));
    MR_Word parse_tree__get_dependencies___OrigInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 3)));
    MR_Word parse_tree__get_dependencies___Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 4)));
    MR_Word parse_tree__get_dependencies___Attrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 6)));
    MR_Word parse_tree__get_dependencies___VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 7)));
    MR_Word parse_tree__get_dependencies___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 8)));
    MR_Integer parse_tree__get_dependencies___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemMutableInfo_4, (MR_Integer) 9)));

    {
      parse_tree__get_dependencies__gather_implicit_import_needs_in_term_3_p_0(parse_tree__get_dependencies__InitValue_11, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_16, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_17);
    }
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0_1(
  MR_Box parse_tree__get_dependencies__closure_arg,
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_17;

    {
      parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_17);
    }
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(
  MR_Word parse_tree__get_dependencies__InstanceMethod_4,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__ProcDef_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 2)));
    MR_Word parse_tree__get_dependencies___PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 0)));
    MR_Word parse_tree__get_dependencies___MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 1)));
    MR_Integer parse_tree__get_dependencies___Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 3)));
    MR_Word parse_tree__get_dependencies___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__InstanceMethod_4, (MR_Integer) 4)));

    if (((MR_tag((MR_Word) parse_tree__get_dependencies__ProcDef_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__get_dependencies__ItemClauses_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__ProcDef_8, (MR_Integer) 0)));
        MR_Box parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14;

        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[2], parse_tree__get_dependencies__ItemClauses_12, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13)), &parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14);
        }
        *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14 = ((MR_Word) parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_14);
      }
    else
      *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_14 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_13;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_2(
  MR_Box parse_tree__get_dependencies__closure_arg,
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
    MR_Word parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_17;

    {
      parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_17);
    }
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv2_STATE_VARIABLE_ImplicitImportNeeds_17));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0_1(
  MR_Box parse_tree__get_dependencies__closure_arg,
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14;

    {
      parse_tree__get_dependencies__gather_implicit_import_needs_in_instance_method_3_p_0(((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14);
    }
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_ImplicitImportNeeds_14));
  }
}

static void MR_CALL 
parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
        else
          {
            MR_Word parse_tree__get_dependencies__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108;

            switch (MR_tag((MR_Word) parse_tree__get_dependencies__Item_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__get_dependencies__ItemClause_10 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Item_7), (MR_Integer) 0);

                  {
                    parse_tree__get_dependencies__gather_implicit_import_needs_in_clause_3_p_0(parse_tree__get_dependencies__ItemClause_10, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__get_dependencies__ItemTypeDefn_71 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Item_7), (MR_Integer) 1);
                  MR_Word parse_tree__get_dependencies__TypeDefn_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_71, (MR_Integer) 2)));
                  MR_Word parse_tree__get_dependencies___TypeCtorName_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_71, (MR_Integer) 0)));
                  MR_Word parse_tree__get_dependencies___TypeParams_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_71, (MR_Integer) 1)));
                  MR_Word parse_tree__get_dependencies___TVarSet_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_71, (MR_Integer) 3)));
                  MR_Word parse_tree__get_dependencies___Context_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_71, (MR_Integer) 4)));
                  MR_Integer parse_tree__get_dependencies___SeqNum_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemTypeDefn_71, (MR_Integer) 5)));

                  switch (MR_tag((MR_Word) parse_tree__get_dependencies__TypeDefn_74)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                      break;
                    case (MR_Integer) 1:
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                      break;
                    case (MR_Integer) 2:
                      parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_74, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word parse_tree__get_dependencies__SolverTypeDetails_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_74, (MR_Integer) 1)));
                            MR_Word parse_tree__get_dependencies__MutableItems_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_81, (MR_Integer) 3)));
                            MR_Word parse_tree__get_dependencies___MaybeUnifyComparePredNames_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__TypeDefn_74, (MR_Integer) 2)));
                            MR_Word parse_tree__get_dependencies___RepresentationType_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_81, (MR_Integer) 0)));
                            MR_Word parse_tree__get_dependencies___GroundInst_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_81, (MR_Integer) 1)));
                            MR_Word parse_tree__get_dependencies___AnyInst_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__SolverTypeDetails_81, (MR_Integer) 2)));
                            MR_Box parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_108_108;

                            {
                              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[1], parse_tree__get_dependencies__MutableItems_85, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2)), &parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_108_108);
                            }
                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = ((MR_Word) parse_tree__get_dependencies__conv3_STATE_VARIABLE_ImplicitImportNeeds_108_108);
                          }
                          break;
                        case (MR_Integer) 1:
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 1:
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 2:
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word parse_tree__get_dependencies__ItemPragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
                      MR_Word parse_tree__get_dependencies__Pragma_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 0)));
                      MR_Word parse_tree__get_dependencies___Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 1)));
                      MR_Word parse_tree__get_dependencies___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 2)));
                      MR_Integer parse_tree__get_dependencies___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPragma_11, (MR_Integer) 3)));

                      switch (MR_tag((MR_Word) parse_tree__get_dependencies__Pragma_12)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          break;
                        case (MR_Integer) 1:
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          break;
                        case (MR_Integer) 2:
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                          break;
                        case (MR_Integer) 3:
                          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_12, (MR_Integer) 0)))) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 1:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 2:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 3:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 4:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 5:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 6:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 7:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 8:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 9:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 10:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 11:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 12:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 13:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 14:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 15:
                              {
                                MR_Word parse_tree__get_dependencies__TableInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Pragma_12, (MR_Integer) 1)));
                                MR_Word parse_tree__get_dependencies__MaybeAttributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 3)));
                                MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
                                MR_Word parse_tree__get_dependencies__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                MR_Word parse_tree__get_dependencies__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                MR_Word parse_tree__get_dependencies__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                MR_Word parse_tree__get_dependencies__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                                MR_Word parse_tree__get_dependencies__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                                MR_Word parse_tree__get_dependencies__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 0)));
                                MR_Word parse_tree__get_dependencies__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 1)));
                                MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TableInfo_16, (MR_Integer) 2)));
                                MR_Word parse_tree__get_dependencies__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                MR_Word parse_tree__get_dependencies__V_128_128 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, (MR_Integer) 0)))) & (MR_Integer) 1);

                                {
                                  parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104, 0) = ((MR_Box) (((MR_Integer) 1 | ((((parse_tree__get_dependencies__V_129_129 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_130_130 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_131_131 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_132_132 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_133_133 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_134_134 << (MR_Integer) 6)))))))))))))));
                                }
                                if ((parse_tree__get_dependencies__MaybeAttributes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
                                else
                                  {
                                    MR_Word parse_tree__get_dependencies__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__MaybeAttributes_20, (MR_Integer) 0)));
                                    MR_Word parse_tree__get_dependencies__StatsAttr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 2)));
                                    MR_Word parse_tree__get_dependencies__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 0)));
                                    MR_Word parse_tree__get_dependencies__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 1)));
                                    MR_Word parse_tree__get_dependencies__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__Attributes_21, (MR_Integer) 3)));

                                    switch (parse_tree__get_dependencies__StatsAttr_22) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 1:
                                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_104_104;
                                        break;
                                      case (MR_Integer) 0:
                                        {
                                          {
                                            parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108, 0) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | ((((parse_tree__get_dependencies__V_130_130 << (MR_Integer) 2)) | ((((parse_tree__get_dependencies__V_131_131 << (MR_Integer) 3)) | ((((parse_tree__get_dependencies__V_132_132 << (MR_Integer) 4)) | ((((parse_tree__get_dependencies__V_133_133 << (MR_Integer) 5)) | ((parse_tree__get_dependencies__V_134_134 << (MR_Integer) 6)))))))))))))));
                                          }
                                        }
                                        break;
                                    }
                                  }
                              }
                              break;
                            case (MR_Integer) 16:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 17:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 18:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 19:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 20:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 21:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 22:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 23:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 24:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 25:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 26:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 27:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 28:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 29:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 30:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                            case (MR_Integer) 31:
                              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                              break;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word parse_tree__get_dependencies__ItemPromise_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
                      MR_Word parse_tree__get_dependencies__Goal_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_57, (MR_Integer) 1)));
                      MR_Word parse_tree__get_dependencies___PromiseType_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_57, (MR_Integer) 0)));
                      MR_Word parse_tree__get_dependencies___VarSet_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_57, (MR_Integer) 2)));
                      MR_Word parse_tree__get_dependencies___UnivQuantVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_57, (MR_Integer) 3)));
                      MR_Word parse_tree__get_dependencies___Context_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_57, (MR_Integer) 4)));
                      MR_Integer parse_tree__get_dependencies___SeqNum_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemPromise_57, (MR_Integer) 5)));

                      {
                        parse_tree__get_dependencies__gather_implicit_import_needs_in_goal_3_p_0(parse_tree__get_dependencies__Goal_59, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108);
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word parse_tree__get_dependencies__ItemInstance_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));
                      MR_Word parse_tree__get_dependencies__InstanceBody_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_62, (MR_Integer) 4)));
                      MR_Word parse_tree__get_dependencies___DerivingClass_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_62, (MR_Integer) 0)));
                      MR_Word parse_tree__get_dependencies___ClassName_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_62, (MR_Integer) 1)));
                      MR_Word parse_tree__get_dependencies___Types_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_62, (MR_Integer) 2)));
                      MR_Word parse_tree__get_dependencies___OriginalTypes_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_62, (MR_Integer) 3)));
                      MR_Word parse_tree__get_dependencies___ModuleContainingInstance_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_62, (MR_Integer) 6)));
                      MR_Word parse_tree__get_dependencies___Context_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_62, (MR_Integer) 7)));
                      MR_Integer parse_tree__get_dependencies___SeqNum_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_62, (MR_Integer) 8)));
                      MR_Word parse_tree__get_dependencies___VarSet_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ItemInstance_62, (MR_Integer) 5)));

                      if ((parse_tree__get_dependencies__InstanceBody_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                      else
                        {
                          MR_Word parse_tree__get_dependencies__InstanceMethods_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__InstanceBody_67, (MR_Integer) 0)));
                          MR_Box parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_108_108;

                          {
                            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &parse_tree__get_dependencies__parse_tree__get_dependencies__type_ctor_info_implicit_import_needs_0, (MR_Word) &parse_tree__get_dependencies_scalar_common_7[0], parse_tree__get_dependencies__InstanceMethods_69, ((MR_Box) (parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2)), &parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_108_108);
                          }
                          parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = ((MR_Word) parse_tree__get_dependencies__conv1_STATE_VARIABLE_ImplicitImportNeeds_108_108);
                        }
                    }
                    break;
                  case (MR_Integer) 7:
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 8:
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                  case (MR_Integer) 9:
                    {
                      MR_Word parse_tree__get_dependencies__ItemMutableInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__get_dependencies__Item_7, (MR_Integer) 1)));

                      {
                        parse_tree__get_dependencies__gather_implicit_import_needs_in_mutable_3_p_0(parse_tree__get_dependencies__ItemMutableInfo_70, parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108);
                      }
                    }
                    break;
                  case (MR_Integer) 10:
                    parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2;
                    break;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Items_8;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_108_108;

              parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImplicitImportNeeds_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1(
  MR_Box parse_tree__get_dependencies__closure_arg)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;

    {
      parse_tree__get_dependencies__succeeded = parse_tree__get_dependencies__IntroducedFrom__pred__compute_implicit_import_needs__231__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 4))));
    }
    return parse_tree__get_dependencies__succeeded;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(
  MR_Word parse_tree__get_dependencies__Globals_5,
  MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_6,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_85_85 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__get_dependencies__ItemsNeedTabling_9;
    MR_Word parse_tree__get_dependencies__ItemsNeedTablingStatistics_10;
    MR_Word parse_tree__get_dependencies__ItemsNeedSTM_11;
    MR_Word parse_tree__get_dependencies__ItemsNeedException_12;
    MR_Word parse_tree__get_dependencies__ItemsNeedStringFormat_13;
    MR_Word parse_tree__get_dependencies__ItemsNeedStreamFormat_14;
    MR_Word parse_tree__get_dependencies__ItemsNeedIO_15;
    MR_Word parse_tree__get_dependencies__Deep_16;
    MR_Word parse_tree__get_dependencies__Target_17;
    MR_Word parse_tree__get_dependencies__HighLevelCode_18;
    MR_Word parse_tree__get_dependencies__Parallel_19;
    MR_Word parse_tree__get_dependencies__UseRegions_20;
    MR_Word parse_tree__get_dependencies__SSDBTraceLevel_21;
    MR_Word parse_tree__get_dependencies__DisableSSDB_22;
    MR_Word parse_tree__get_dependencies__V_26_26;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27;
    MR_Word parse_tree__get_dependencies__V_28_28;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78;
    MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81;

    {
      parse_tree__get_dependencies__V_26_26 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_23 = mercury__set__make_singleton_set_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_26_26)));
    }
    {
      parse_tree__get_dependencies__V_28_28 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27 = mercury__set__make_singleton_set_1_f_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_28_28)));
    }
    parse_tree__get_dependencies__ItemsNeedTabling_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) & (MR_Integer) 1);
    parse_tree__get_dependencies__ItemsNeedTablingStatistics_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    parse_tree__get_dependencies__ItemsNeedSTM_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    parse_tree__get_dependencies__ItemsNeedException_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    parse_tree__get_dependencies__ItemsNeedStringFormat_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    parse_tree__get_dependencies__ItemsNeedStreamFormat_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    parse_tree__get_dependencies__ItemsNeedIO_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__ImplicitImportNeeds_6, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    switch (parse_tree__get_dependencies__ItemsNeedTabling_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__get_dependencies__V_42_42;
          MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43;

          {
            parse_tree__get_dependencies__V_42_42 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
          }
          {
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_42_42)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43);
          }
          switch (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__get_dependencies__V_44_44;

                {
                  parse_tree__get_dependencies__V_44_44 = mdbcomp__builtin_modules__mercury_table_statistics_module_0_f_0();
                }
                {
                  mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_44_44)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45);
                }
              }
              break;
            case (MR_Integer) 0:
              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_43_43;
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__get_dependencies__V_29_29;

          {
            parse_tree__get_dependencies__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 1) = ((MR_Box) (parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 3) = ((MR_Box) (parse_tree__get_dependencies__ItemsNeedTablingStatistics_10));
            MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_29_29, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            mercury__require__expect_4_p_0(parse_tree__get_dependencies__V_29_29, (MR_String) "parse_tree.get_dependencies", (MR_String) "predicate \140parse_tree.get_dependencies.compute_implicit_import_needs\'/4", (MR_String) "tabling statistics without tabling");
          }
          {
            parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 220, (MR_Integer) 1);
          }
          if (!(parse_tree__get_dependencies__succeeded))
            {
              {
                parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 221, (MR_Integer) 1);
              }
              if (!(parse_tree__get_dependencies__succeeded))
                {
                  {
                    parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 124, (MR_Integer) 1);
                  }
                }
            }
          if (parse_tree__get_dependencies__succeeded)
            {
              MR_Word parse_tree__get_dependencies__V_40_40;

              {
                parse_tree__get_dependencies__V_40_40 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
              }
              {
                mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_40_40)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45);
              }
            }
          else
            parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_27_27;
        }
        break;
    }
    switch (parse_tree__get_dependencies__ItemsNeedSTM_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__get_dependencies__V_46_46;
          MR_Word parse_tree__get_dependencies__V_48_48;
          MR_Word parse_tree__get_dependencies__V_49_49;
          MR_Word parse_tree__get_dependencies__V_50_50;
          MR_Word parse_tree__get_dependencies__V_51_51;
          MR_Word parse_tree__get_dependencies__V_52_52;

          {
            parse_tree__get_dependencies__V_48_48 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          }
          {
            parse_tree__get_dependencies__V_50_50 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
          {
            parse_tree__get_dependencies__V_52_52 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
          }
          {
            parse_tree__get_dependencies__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_51_51, 0) = ((MR_Box) (parse_tree__get_dependencies__V_52_52));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__get_dependencies__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_49_49, 0) = ((MR_Box) (parse_tree__get_dependencies__V_50_50));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_49_49, 1) = ((MR_Box) (parse_tree__get_dependencies__V_51_51));
          }
          {
            parse_tree__get_dependencies__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_46_46, 0) = ((MR_Box) (parse_tree__get_dependencies__V_48_48));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_46_46, 1) = ((MR_Box) (parse_tree__get_dependencies__V_49_49));
          }
          {
            mercury__set__insert_list_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, parse_tree__get_dependencies__V_46_46, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47);
          }
        }
        break;
      case (MR_Integer) 0:
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_45_45;
        break;
    }
    switch (parse_tree__get_dependencies__ItemsNeedException_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__get_dependencies__V_54_54;

          {
            parse_tree__get_dependencies__V_54_54 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
          {
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_54_54)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55);
          }
        }
        break;
      case (MR_Integer) 0:
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_47_47;
        break;
    }
    switch (parse_tree__get_dependencies__ItemsNeedStringFormat_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__get_dependencies__V_56_56;
          MR_Word parse_tree__get_dependencies__V_58_58;
          MR_Word parse_tree__get_dependencies__V_59_59;
          MR_Word parse_tree__get_dependencies__V_60_60;

          {
            parse_tree__get_dependencies__V_58_58 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
          }
          {
            parse_tree__get_dependencies__V_60_60 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
          }
          {
            parse_tree__get_dependencies__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_59_59, 0) = ((MR_Box) (parse_tree__get_dependencies__V_60_60));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__get_dependencies__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_56_56, 0) = ((MR_Box) (parse_tree__get_dependencies__V_58_58));
            MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__V_56_56, 1) = ((MR_Box) (parse_tree__get_dependencies__V_59_59));
          }
          {
            mercury__set__insert_list_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, parse_tree__get_dependencies__V_56_56, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57);
          }
        }
        break;
      case (MR_Integer) 0:
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_55_55;
        break;
    }
    switch (parse_tree__get_dependencies__ItemsNeedStreamFormat_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__get_dependencies__V_62_62;

          {
            parse_tree__get_dependencies__V_62_62 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
          }
          {
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_62_62)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63);
          }
        }
        break;
      case (MR_Integer) 0:
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_57_57;
        break;
    }
    switch (parse_tree__get_dependencies__ItemsNeedIO_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__get_dependencies__V_64_64;

          {
            parse_tree__get_dependencies__V_64_64 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
          }
          {
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_64_64)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65);
          }
        }
        break;
      case (MR_Integer) 0:
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_63_63;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 195, &parse_tree__get_dependencies__Deep_16);
    }
    switch (parse_tree__get_dependencies__Deep_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__get_dependencies__V_67_67;

          {
            parse_tree__get_dependencies__V_67_67 = mdbcomp__builtin_modules__mercury_profiling_builtin_module_0_f_0();
          }
          {
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_67_67)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_65_65, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68);
          }
        }
        break;
    }
    {
      parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 212, (MR_Integer) 1);
    }
    if (!(parse_tree__get_dependencies__succeeded))
      {
        {
          parse_tree__get_dependencies__succeeded = libs__globals__lookup_bool_option_3_p_1(parse_tree__get_dependencies__Globals_5, (MR_Integer) 213, (MR_Integer) 1);
        }
      }
    if (parse_tree__get_dependencies__succeeded)
      {
        MR_Word parse_tree__get_dependencies__V_73_73;

        {
          parse_tree__get_dependencies__V_73_73 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
        }
        {
          mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_73_73)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74);
        }
      }
    else
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_68_68;
    {
      libs__globals__get_target_2_p_0(parse_tree__get_dependencies__Globals_5, &parse_tree__get_dependencies__Target_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 254, &parse_tree__get_dependencies__HighLevelCode_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 216, &parse_tree__get_dependencies__Parallel_19);
    }
    parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__Target_17 == (MR_Integer) 0);
    if (parse_tree__get_dependencies__succeeded)
      {
        parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__HighLevelCode_18 == (MR_Integer) 0);
        if (parse_tree__get_dependencies__succeeded)
          parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__Parallel_19 == (MR_Integer) 1);
      }
    if (parse_tree__get_dependencies__succeeded)
      {
        MR_Word parse_tree__get_dependencies__V_77_77;

        {
          parse_tree__get_dependencies__V_77_77 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
        }
        {
          mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_77_77)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78);
        }
      }
    else
      parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_74_74;
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 229, &parse_tree__get_dependencies__UseRegions_20);
    }
    switch (parse_tree__get_dependencies__UseRegions_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__get_dependencies__V_80_80;

          {
            parse_tree__get_dependencies__V_80_80 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
          }
          {
            mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_80_80)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_78_78, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81);
          }
        }
        break;
    }
    {
      libs__globals__get_ssdb_trace_level_2_p_0(parse_tree__get_dependencies__Globals_5, &parse_tree__get_dependencies__SSDBTraceLevel_21);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__get_dependencies__Globals_5, (MR_Integer) 137, &parse_tree__get_dependencies__DisableSSDB_22);
    }
    switch (parse_tree__get_dependencies__SSDBTraceLevel_21) {
      default:
        parse_tree__get_dependencies__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        parse_tree__get_dependencies__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        parse_tree__get_dependencies__succeeded = MR_TRUE;
        break;
    }
    if (parse_tree__get_dependencies__succeeded)
      parse_tree__get_dependencies__succeeded = (parse_tree__get_dependencies__DisableSSDB_22 == (MR_Integer) 0);
    if (parse_tree__get_dependencies__succeeded)
      {
        MR_Word parse_tree__get_dependencies__V_83_83;

        {
          parse_tree__get_dependencies__V_83_83 = mdbcomp__builtin_modules__mercury_ssdb_builtin_module_0_f_0();
        }
        {
          mercury__set__insert_3_p_0(parse_tree__get_dependencies__TypeCtorInfo_85_85, ((MR_Box) (parse_tree__get_dependencies__V_83_83)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81, parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24);
        }
      }
    else
      *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_24 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_81_81;
  }
}

static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
            *parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
          }
        else
          {
            MR_Word parse_tree__get_dependencies__Avail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__Avails_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28;

            if (((MR_tag((MR_Word) parse_tree__get_dependencies__Avail_12)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__get_dependencies__ModuleName_16;
                MR_Word parse_tree__get_dependencies__V_27_27 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Avail_12), (MR_Integer) 0);
                MR_Word parse_tree__get_dependencies__V_17_17;
                MR_Integer parse_tree__get_dependencies__V_18_18;

                parse_tree__get_dependencies__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_27_27, (MR_Integer) 0)));
                parse_tree__get_dependencies__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_27_27, (MR_Integer) 1)));
                parse_tree__get_dependencies__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_27_27, (MR_Integer) 2)));
                {
                  mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__get_dependencies__ModuleName_16)), parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28);
                }
                parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4;
              }
            else
              {
                MR_Word parse_tree__get_dependencies__V_25_25 = (MR_Word) MR_body(((MR_Word) parse_tree__get_dependencies__Avail_12), (MR_Integer) 1);
                MR_Word parse_tree__get_dependencies__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_25_25, (MR_Integer) 0)));
                MR_Word parse_tree__get_dependencies__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_25_25, (MR_Integer) 1)));
                MR_Integer parse_tree__get_dependencies__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_25_25, (MR_Integer) 2)));

                {
                  mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__get_dependencies__ModuleName_31)), parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26);
                }
                parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2;
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__Avails_13;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_28_28;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_26_26;

              parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_UseDeps_0__tmp_copy_4;
              parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_ImportDeps_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(
  MR_Word parse_tree__get_dependencies__HeadVar__1_1,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7,
  MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8,
  MR_Word * parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__get_dependencies__succeeded;

        if ((parse_tree__get_dependencies__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_9 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8;
            *parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_7 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6;
            *parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_5 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4;
            *parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_3 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2;
          }
        else
          {
            MR_Word parse_tree__get_dependencies__RawItemBlock_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__RawItemBlocks_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__get_dependencies__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies__Section_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 0)));
            MR_Word parse_tree__get_dependencies__Imports_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 3)));
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41;
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42;
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43;
            MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44;
            MR_Word parse_tree__get_dependencies___Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 1)));
            MR_Word parse_tree__get_dependencies___Incls_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 2)));
            MR_Word parse_tree__get_dependencies___Items_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__RawItemBlock_22, (MR_Integer) 4)));

            switch (parse_tree__get_dependencies__Section_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Imports_31, parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6, &parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41, parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8, &parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42);
                  }
                  parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2;
                  parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4;
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Imports_31, parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2, &parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43, parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4, &parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44);
                  }
                  parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6;
                  parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__get_dependencies__HeadVar__1__tmp_copy_1 = parse_tree__get_dependencies__RawItemBlocks_23;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_43_43;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_44_44;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_41_41;
              MR_Word parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_42_42;

              parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0_8 = parse_tree__get_dependencies__STATE_VARIABLE_ImpUseDeps_0__tmp_copy_8;
              parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0_6 = parse_tree__get_dependencies__STATE_VARIABLE_ImpImportDeps_0__tmp_copy_6;
              parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0_4 = parse_tree__get_dependencies__STATE_VARIABLE_IntUseDeps_0__tmp_copy_4;
              parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0_2 = parse_tree__get_dependencies__STATE_VARIABLE_IntImportDeps_0__tmp_copy_2;
              parse_tree__get_dependencies__HeadVar__1_1 = parse_tree__get_dependencies__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1(
  MR_Box parse_tree__get_dependencies__closure_arg,
  MR_Box parse_tree__get_dependencies__wrapper_arg_1,
  MR_Box parse_tree__get_dependencies__wrapper_arg_2,
  MR_Box * parse_tree__get_dependencies__wrapper_arg_3)
{
  {
    MR_Box parse_tree__get_dependencies__closure = parse_tree__get_dependencies__closure_arg;
    MR_Word parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_12;

    {
      parse_tree__get_dependencies__gather_foreign_include_files_in_item_blocks_acc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_1), ((MR_Word) parse_tree__get_dependencies__wrapper_arg_2), &parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_12);
    }
    *parse_tree__get_dependencies__wrapper_arg_3 = ((MR_Box) (parse_tree__get_dependencies__conv0_STATE_VARIABLE_IncludeFiles_12));
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0(
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_7,
  MR_Word parse_tree__get_dependencies__ItemBlocks_3,
  MR_Word * parse_tree__get_dependencies__IncludeFiles_4)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__TypeInfo_13_13;
    MR_Word parse_tree__get_dependencies__V_5_5;
    MR_Word parse_tree__get_dependencies__V_6_6;
    MR_Box parse_tree__get_dependencies__conv1_IncludeFiles_4;

    {
      parse_tree__get_dependencies__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 0) = ((MR_Box) (&parse_tree__get_dependencies_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 1) = ((MR_Box) (parse_tree__get_dependencies__get_foreign_include_files_in_item_blocks_2_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__V_5_5, 3) = ((MR_Box) (parse_tree__get_dependencies__TypeInfo_for_MS_7));
    }
    {
      parse_tree__get_dependencies__V_6_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0);
    }
    {
      parse_tree__get_dependencies__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TypeInfo_13_13, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1));
      MR_hl_field(MR_mktag(0), parse_tree__get_dependencies__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__get_dependencies__TypeInfo_for_MS_7));
    }
    {
      mercury__list__foldl_4_p_0(parse_tree__get_dependencies__TypeInfo_13_13, (MR_Word) &parse_tree__get_dependencies_scalar_common_1[0], (MR_Word) parse_tree__get_dependencies__V_5_5, (MR_Word) parse_tree__get_dependencies__ItemBlocks_3, ((MR_Box) (parse_tree__get_dependencies__V_6_6)), &parse_tree__get_dependencies__conv1_IncludeFiles_4);
    }
    *parse_tree__get_dependencies__IncludeFiles_4 = ((MR_Word) parse_tree__get_dependencies__conv1_IncludeFiles_4);
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_fact_table_dependencies_in_item_blocks_2_p_0(
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_7,
  MR_Word parse_tree__get_dependencies__ItemBlocks_3,
  MR_Word * parse_tree__get_dependencies__FactTableFileNames_4)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__RevFactTableFileNames_5;

    {
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_102_97_99_116_95_116_97_98_108_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__get_dependencies__ItemBlocks_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__get_dependencies__RevFactTableFileNames_5);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__get_dependencies__RevFactTableFileNames_5, parse_tree__get_dependencies__FactTableFileNames_4);
    }
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(
  MR_Word parse_tree__get_dependencies__Globals_5,
  MR_Word parse_tree__get_dependencies__Items_6,
  MR_Word * parse_tree__get_dependencies__ImportDeps_7,
  MR_Word * parse_tree__get_dependencies__UseDeps_8)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_10;

    {
      parse_tree__get_dependencies__gather_implicit_import_needs_in_items_3_p_0(parse_tree__get_dependencies__Items_6, (MR_Word) &parse_tree__get_dependencies_scalar_common_2[0], &parse_tree__get_dependencies__ImplicitImportNeeds_10);
    }
    {
      parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(parse_tree__get_dependencies__Globals_5, parse_tree__get_dependencies__ImplicitImportNeeds_10, parse_tree__get_dependencies__ImportDeps_7, parse_tree__get_dependencies__UseDeps_8);
    }
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_11,
  MR_Word parse_tree__get_dependencies__Globals_5,
  MR_Word parse_tree__get_dependencies__ItemBlocks_6,
  MR_Word * parse_tree__get_dependencies__ImportDeps_7,
  MR_Word * parse_tree__get_dependencies__UseDeps_8)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__ImplicitImportNeeds_10;

    {
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_105_109_112_108_105_99_105_116_95_105_109_112_111_114_116_95_110_101_101_100_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_3_p_0(parse_tree__get_dependencies__ItemBlocks_6, (MR_Word) &parse_tree__get_dependencies_scalar_common_2[0], &parse_tree__get_dependencies__ImplicitImportNeeds_10);
    }
    {
      parse_tree__get_dependencies__compute_implicit_import_needs_4_p_0(parse_tree__get_dependencies__Globals_5, parse_tree__get_dependencies__ImplicitImportNeeds_10, parse_tree__get_dependencies__ImportDeps_7, parse_tree__get_dependencies__UseDeps_8);
    }
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_dependencies_int_imp_in_raw_item_blocks_5_p_0(
  MR_Word parse_tree__get_dependencies__RawItemBlocks_6,
  MR_Word * parse_tree__get_dependencies__IntImportDeps_7,
  MR_Word * parse_tree__get_dependencies__IntUseDeps_8,
  MR_Word * parse_tree__get_dependencies__ImpImportDeps_9,
  MR_Word * parse_tree__get_dependencies__ImpUseDeps_10)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_15_15 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__get_dependencies__V_11_11;
    MR_Word parse_tree__get_dependencies__V_12_12;
    MR_Word parse_tree__get_dependencies__V_13_13;
    MR_Word parse_tree__get_dependencies__V_14_14;

    {
      parse_tree__get_dependencies__V_11_11 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
    {
      parse_tree__get_dependencies__V_12_12 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
    {
      parse_tree__get_dependencies__V_13_13 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
    {
      parse_tree__get_dependencies__V_14_14 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_15_15);
    }
    {
      parse_tree__get_dependencies__get_dependencies_in_int_imp_in_raw_item_blocks_acc_9_p_0(parse_tree__get_dependencies__RawItemBlocks_6, parse_tree__get_dependencies__V_11_11, parse_tree__get_dependencies__IntImportDeps_7, parse_tree__get_dependencies__V_12_12, parse_tree__get_dependencies__IntUseDeps_8, parse_tree__get_dependencies__V_13_13, parse_tree__get_dependencies__ImpImportDeps_9, parse_tree__get_dependencies__V_14_14, parse_tree__get_dependencies__ImpUseDeps_10);
    }
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(
  MR_Word parse_tree__get_dependencies__TypeInfo_for_MS_9,
  MR_Word parse_tree__get_dependencies__ItemBlocks_4,
  MR_Word * parse_tree__get_dependencies__ImportDeps_5,
  MR_Word * parse_tree__get_dependencies__UseDeps_6)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_10_10 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__get_dependencies__V_7_7;
    MR_Word parse_tree__get_dependencies__V_8_8;

    {
      parse_tree__get_dependencies__V_7_7 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_10_10);
    }
    {
      parse_tree__get_dependencies__V_8_8 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_10_10);
    }
    {
      parse_tree__get_dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_97_99_99_95_95_91_49_93_95_48_5_p_0(parse_tree__get_dependencies__ItemBlocks_4, parse_tree__get_dependencies__V_7_7, parse_tree__get_dependencies__ImportDeps_5, parse_tree__get_dependencies__V_8_8, parse_tree__get_dependencies__UseDeps_6);
    }
  }
}

void MR_CALL 
parse_tree__get_dependencies__get_dependencies_in_avails_3_p_0(
  MR_Word parse_tree__get_dependencies__Avails_4,
  MR_Word * parse_tree__get_dependencies__ImportDeps_5,
  MR_Word * parse_tree__get_dependencies__UseDeps_6)
{
  {
    MR_bool parse_tree__get_dependencies__succeeded;
    MR_Word parse_tree__get_dependencies__TypeCtorInfo_9_9 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__get_dependencies__V_7_7;
    MR_Word parse_tree__get_dependencies__V_8_8;

    {
      parse_tree__get_dependencies__V_7_7 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_9_9);
    }
    {
      parse_tree__get_dependencies__V_8_8 = mercury__set__init_0_f_0(parse_tree__get_dependencies__TypeCtorInfo_9_9);
    }
    {
      parse_tree__get_dependencies__get_dependencies_in_avails_acc_5_p_0(parse_tree__get_dependencies__Avails_4, parse_tree__get_dependencies__V_7_7, parse_tree__get_dependencies__ImportDeps_5, parse_tree__get_dependencies__V_8_8, parse_tree__get_dependencies__UseDeps_6);
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.get_dependencies. */
