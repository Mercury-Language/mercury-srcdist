/*
** Automatically generated from `make.dependencies.m'
** by the Mercury compiler,
** version rotd-2023-02-02
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


// :- module make.dependencies.
// :- implementation.

/*
INIT mercury__make__dependencies__init
ENDINIT
*/

#include "make.dependencies.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "make.module_dep_file.mih"
#include "make.options_file.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__pseudo_1;

static const MR_FA_TypeInfo_Struct2 make__dependencies__pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0;

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_computed_module_deps_key_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_computed_module_deps_key_0_0[2];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_computed_module_deps_key_0_0;

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_computed_module_deps_key_0_0[1];

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_computed_module_deps_key_0[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_computed_module_deps_key_0[1];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_computed_module_deps_key_0[1];

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_computed_module_deps_label_0_0;

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_computed_module_deps_label_0[1];

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_computed_module_deps_label_0[1];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_computed_module_deps_label_0[1];

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_0;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_1;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_2;

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_dependencies_result_0[3];

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_dependencies_result_0[3];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependencies_result_0[3];

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_0_0[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_0;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_0_1[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_1;

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_0[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_1[1];

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_dependency_file_0[2];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_dependency_file_0[2];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependency_file_0[2];

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_with_module_index_0_0[2];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_with_module_index_0_0;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_with_module_index_0_1[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_with_module_index_0_1;

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_with_module_index_0_0[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_with_module_index_0_1[1];

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_dependency_file_with_module_index_0[2];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_dependency_file_with_module_index_0[2];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependency_file_with_module_index_0[2];

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_deps_result_1_0[2];

static const MR_ConstString make__dependencies__make__dependencies__field_names_deps_result_1_0[2];

static const MR_DuArgLocn make__dependencies__make__dependencies__field_locns_deps_result_1_0[2];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_deps_result_1_0;

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_deps_result_1_0[1];

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_deps_result_1[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_deps_result_1[1];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_deps_result_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_process_modules_where_0_0;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_process_modules_where_0_1;

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_process_modules_where_0[2];

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_process_modules_where_0[2];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_process_modules_where_0[2];

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_transitive_dependencies_root_0_0[3];

static const MR_DuArgLocn make__dependencies__make__dependencies__field_locns_transitive_dependencies_root_0_0[3];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_transitive_dependencies_root_0_0;

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_transitive_dependencies_root_0_0[1];

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_transitive_dependencies_root_0[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_transitive_dependencies_root_0[1];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_transitive_dependencies_root_0[1];

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_0;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_1;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_2;

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_transitive_dependencies_type_0[3];

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_transitive_dependencies_type_0[3];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_transitive_dependencies_type_0[3];

static void MR_CALL 
make__dependencies__check_dependencies_timestamps_write_missing_deps__ho19_7_p_0(
  MR_Word Var_46,
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__debug_newer_dependencies_2__1618__1_3_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word MaybeTimestamp_8,
  MR_Word LambdaHeadVar__1_31);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1516__1_3_p_0(
  MR_Word TypeInfo_for_File_38,
  MR_Word LambdaHeadVar__1_23,
  MR_Box * LambdaHeadVar__2_24);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__1300__1_2_p_0(
  MR_Word LambdaHeadVar__1_62,
  MR_Word * LambdaHeadVar__2_63);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__1292__1_2_p_0(
  MR_Word LambdaHeadVar__1_54,
  MR_Word * LambdaHeadVar__2_55);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__1277__1_2_p_0(
  MR_Word ModuleName_20,
  MR_Word MDI_ModuleName_28);

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__fact_table_files__920__1_1_f_0(
  MR_String LambdaHeadVar__1_27);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__892__1_3_p_0(
  MR_Word Languages_10,
  MR_Word LambdaHeadVar__1_31,
  MR_Word * LambdaHeadVar__2_32);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies__1471__1_1_p_0(
  MR_Word LambdaHeadVar__1_35);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__remove_nested_modules__1332__1_2_p_0(
  MR_Word NestedModules_13,
  MR_Word HeadVar__2_34);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__find_target_dependencies_of_modules__265__1_8_p_0(
  MR_Word HeadVar__1_209,
  MR_Word HeadVar__2_210,
  MR_Word * HeadVar__3_211,
  MR_Word * HeadVar__4_212,
  MR_Word HeadVar__5_213,
  MR_Word * HeadVar__6_214);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_115_95_95_50_54_53_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_211,
  MR_Word * HeadVar__4_212,
  MR_Word HeadVar__5_213,
  MR_Word * HeadVar__6_214);

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__dependencies____Compare____process_modules_where_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__dependencies____Unify____process_modules_where_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__dependencies____Compare____module_deps_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__dependencies____Unify____module_deps_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__dependencies____Compare____find_module_deps_plain_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_112_108_97_105_110_95_115_101_116_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_plain_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_112_108_97_105_110_95_115_101_116_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__dependencies____Compare____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__dependencies____Compare____computed_module_deps_label_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_99_111_109_112_117_116_101_100_95_109_111_100_117_108_101_95_100_101_112_115_95_108_97_98_101_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
make__dependencies____Unify____computed_module_deps_label_0_0(void);

static MR_bool MR_CALL 
make__dependencies__debug_newer_dependencies_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__dependencies__debug_newer_dependencies_2_6_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_String TargetFileName_7,
  MR_Word MaybeTimestamp_8,
  MR_Word DepFiles_9,
  MR_Word DepTimestamps_10);

static void MR_CALL 
make__dependencies__write_dependency_file_and_timestamp_list_3_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__dependencies__check_dependencies_debug_unbuilt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__dependencies__check_dependencies_debug_unbuilt_5_p_0(
  MR_Word Globals_6,
  MR_String TargetFileName_7,
  MR_Word UnbuiltDependencies_8);

static void MR_CALL 
make__dependencies__make_write_target_dependency_status_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__dependencies__make_local_module_id_option_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Opts0_5,
  MR_Word * Opts_6);

static void MR_CALL 
make__dependencies__collect_nested_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_NestedModules_0_18,
  MR_Word * STATE_VARIABLE_NestedModules_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__cache_computed_module_deps_10_p_0(
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__dependencies__combine_deps_2_10_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word FindDeps1_11,
  MR_Word FindDeps2_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
make__dependencies__get_foreign_include_files_2_4_p_0(
  MR_Word Languages_5,
  MR_String SourceFileName_6,
  MR_Word ForeignInclude_7,
  MR_Word * File_8);

static MR_bool MR_CALL 
make__dependencies__foreign_include_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__foreign_include_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Files_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static MR_Box MR_CALL 
make__dependencies__fact_table_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__dependencies__fact_table_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Files_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_50_95_95_91_51_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__find_module_foreign_imports_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_49_95_95_91_51_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static MR_bool MR_CALL 
make__dependencies__find_module_foreign_imports_uncached_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__find_module_foreign_imports_uncached_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__dependencies__find_transitive_implementation_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__dependencies__non_intermod_indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__dependencies__indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__indirect_imports_uncached__ho5_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * IndirectImports_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho3_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho6_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__ancestors_8_p_0(
  MR_Word _Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * AncestorIndices_11,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_99_101_115_116_111_114_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * AncestorIndices_11,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__dependencies__self_8_p_0(
  MR_Word _Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_102_95_95_91_49_93_95_48_8_p_0(
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__dependencies__no_deps_8_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_9,
  MR_Word HeadVar__2_10,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_95_100_101_112_115_95_95_91_50_44_32_51_93_95_48_8_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_55_95_95_91_50_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_fi_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__intermod_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_uncached_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__files_of_2_10_p_0(
  MR_Word FindFiles_11,
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * DepIndices_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_plain_union_mi_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__target_of_module_to_dep_file_index_5_p_0(
  MR_Word TargetType_6,
  MR_Word ModuleIndex_7,
  MR_Word * TargetFileIndex_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
make__dependencies__of_3_6_p_0(
  MR_Word FileType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_List_0_13,
  MR_Word * STATE_VARIABLE_List_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__dependencies__of_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__dependencies__of_2_10_p_0(
  MR_Word FileType_11,
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * TargetFiles_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0(
  MR_Word TypeInfo_for_File_38,
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12);

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__dependencies__check_dependencies_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0(
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12);

static MR_bool MR_CALL 
make__dependencies__newer_timestamp_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Timestamp_5);

static MR_bool MR_CALL 
make__dependencies__error_in_timestamps_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__dependencies__make_local_module_id_options_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies__remove_nested_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__dependencies__remove_nested_modules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_10_p_0(
  MR_Word Globals_11,
  MR_Word DependenciesType_12,
  MR_Word IsModuleInCurDir_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_uncached_12_p_0(
  MR_Word KeepGoing_13,
  MR_Word DependenciesType_14,
  MR_Word IsModuleInCurDir_15,
  MR_Word Globals_16,
  MR_Word ModuleIndex_17,
  MR_Word * Succeeded_18,
  MR_Word Modules0_19,
  MR_Word * Modules_20,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
make__dependencies__deps_set_foldl3_find_trans_deps_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0(
  MR_Word KeepGoing_15,
  MR_Word DependenciesType_16,
  MR_Word IsModuleInCurDir_17,
  MR_Word Globals_18,
  MR_Word ModuleIndex_19,
  MR_Word ModuleName_20,
  MR_Word ModuleDepInfo_21,
  MR_Word * Succeeded_22,
  MR_Word Modules0_23,
  MR_Word * Modules_24,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleIndex_10,
  MR_Word STATE_VARIABLE_Deps_0_15,
  MR_Word * STATE_VARIABLE_Deps_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__dependencies__of__ho18_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__of__ho18_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__of__ho18_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__of__ho17_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__of__ho17_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__of__ho17_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__of__ho16_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__of__ho16_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__of__ho16_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__of__ho14_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__of__ho14_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__of__ho14_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__of__ho10_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__of__ho10_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__of__ho10_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__of__ho9_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__of__ho9_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__of__ho9_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__of__ho8_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__of__ho8_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__of__ho8_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__add_targets_of_ancestors_as_deps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__dependencies__add_targets_of_ancestors_as_deps_6_p_0(
  MR_Word TargetType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_Deps_0_13,
  MR_Word * STATE_VARIABLE_Deps_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__dependencies__add_targets_of_modules_as_deps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__dependencies__add_targets_of_modules_as_deps_6_p_0(
  MR_Word TargetType_7,
  MR_Word ModuleIndexes_8,
  MR_Word STATE_VARIABLE_Deps_0_12,
  MR_Word * STATE_VARIABLE_Deps_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0(
  MR_Word Globals_3);

static void MR_CALL 
make__dependencies__combine_deps_list_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__combine_deps_list_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__combine_deps_list_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__combine_deps_list_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Word MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0(void);

static MR_bool MR_CALL 
make__dependencies____Unify____cached_computed_module_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____cached_computed_module_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____cached_direct_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____cached_direct_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____cached_indirect_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____cached_indirect_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_dependencies_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____cached_transitive_dependencies_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____cached_transitive_foreign_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____computed_module_deps_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____computed_module_deps_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____computed_module_deps_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____computed_module_deps_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____dependencies_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____dependencies_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____dependency_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_with_module_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____dependency_file_with_module_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__dependencies____Compare____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__dependencies____Compare____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_plain_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__dependencies____Compare____find_module_deps_plain_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__dependencies____Unify____module_deps_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____module_deps_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____process_modules_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____process_modules_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_root_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_root_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__dependencies_scalar_common_1[27][2];

static /* final */ const MR_Box make__dependencies_scalar_common_2[40][3];

static /* final */ const MR_Box make__dependencies_scalar_common_3[4][10];

static /* final */ const MR_Box make__dependencies_scalar_common_4[3][1];

static /* final */ const MR_Box make__dependencies_scalar_common_5[6][11];

static /* final */ const MR_Box make__dependencies_scalar_common_6[3][13];

static /* final */ const MR_Box make__dependencies_scalar_common_7[26][5];

static /* final */ const MR_Integer make__dependencies_scalar_common_8[1][2];

static /* final */ const MR_Box make__dependencies_scalar_common_9[1][14];

static /* final */ const MR_Box make__dependencies_scalar_common_10[11][6];

static /* final */ const MR_Box make__dependencies_scalar_common_11[1][12];

static /* final */ const MR_Box make__dependencies_scalar_common_12[2][8];

static /* final */ const MR_Box make__dependencies_scalar_common_13[3][4];

static /* final */ const MR_Box make__dependencies_scalar_common_14[4][7];

static /* final */ const MR_Box make__dependencies_scalar_common_15[1][9];


struct make__dependencies__vector_common_type_16_0_s {
  const MR_String make__dependencies__vector_common_type_16_0__vct_16_f_0;
};

static /* final */ const struct make__dependencies__vector_common_type_16_0_s make__dependencies_vector_common_16[4];



static /* final */ const MR_Box make__dependencies_scalar_common_1[27][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   7 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__dependency_file_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[2])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[1])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_2[14])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[9])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[8])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[7])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[6])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[5])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_2[17])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[11])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[10])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[12])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[19])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[18])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[23])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[22])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[25])))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_2[40][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_key_0)),
    ((MR_Box) (&make__dependencies_scalar_common_1[3]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0)),
    ((MR_Box) (&make__dependencies_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[1])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[1])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[2])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[2])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho8_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho9_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho10_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho14_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho16_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho17_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho18_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[2])),
    ((MR_Box) (make__dependencies__find_target_dependencies_of_modules_12_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[15])),
    ((MR_Box) (make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[15])),
    ((MR_Box) (make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_10[3])),
    ((MR_Box) (make__dependencies__make_local_module_id_options_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies_scalar_common_2[1]))
  },
  /* row  32 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_13[2])),
    ((MR_Box) (make__dependencies__check_dependencies_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__find_own_imports_012_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__find_own_imports_012_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__find_own_imports_012_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[25])),
    ((MR_Box) (make__dependencies__fact_table_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_3[4][10] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies_scalar_common_1[4])),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_4[3][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_5[6][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__dependencies____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_6[3][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_label_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_7[26][5] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[5]))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[6]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[7]))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_8)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[8]))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[9]))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[10]))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[1])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_2[11])),
    ((MR_Box) (&make__dependencies_scalar_common_2[10]))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[1])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_2[12])),
    ((MR_Box) (&make__dependencies_scalar_common_2[10]))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_9)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[10]))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_11)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[13]))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_14)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[15]))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_16)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[16]))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_19)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[18]))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_21)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[19]))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[33]))
  },
  /* row  18 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[34]))
  },
  /* row  19 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[35]))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_9)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&make__dependencies_scalar_common_10[6]))
  },
  /* row  21 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__find_own_imports_012_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[36]))
  },
  /* row  22 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__find_own_imports_012_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[37]))
  },
  /* row  23 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__find_own_imports_012_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[38]))
  },
  /* row  24 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (make__dependencies__find_own_imports_012_8_p_0_9)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&make__dependencies_scalar_common_10[8]))
  },
  /* row  25 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Integer make__dependencies_scalar_common_8[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_9[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_10[11][6] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_9)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[2])),
    ((MR_Box) (&make__dependencies_scalar_common_7[3]))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_10)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[1])),
    ((MR_Box) (&make__dependencies_scalar_common_10[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_11)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (&make__dependencies_scalar_common_10[1]))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[18])),
    ((MR_Box) (&make__dependencies_scalar_common_7[19]))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[17])),
    ((MR_Box) (&make__dependencies_scalar_common_10[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__find_own_imports_012_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[22])),
    ((MR_Box) (&make__dependencies_scalar_common_7[23]))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__find_own_imports_012_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[21])),
    ((MR_Box) (&make__dependencies_scalar_common_10[7]))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_11[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_12[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_13[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_12[0])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 36U))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_10[4])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_14[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_15[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
};


static /* final */ const struct make__dependencies__vector_common_type_16_0_s make__dependencies_vector_common_16[4] = {
  /* row   0 */   { (MR_String) "deps_status_not_considered" },
  /* row   1 */   { (MR_String) "deps_status_being_built" },
  /* row   2 */   { (MR_String) "deps_status_up_to_date" },
  /* row   3 */   { (MR_String) "deps_status_error" },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__dependencies__set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__dependencies__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&make__dependencies__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_TypeInfo_Struct2 make__dependencies__pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0),
    (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_computed_module_deps_key_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_key_0),
    (MR_TypeInfo) (&make__dependencies__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_cached_computed_module_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____cached_computed_module_deps_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____cached_computed_module_deps_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "cached_computed_module_deps",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_computed_module_deps_key_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 make__dependencies__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)
  }
};

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_TypeInfo) (&make__dependencies__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0)
  }
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____cached_direct_imports_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____cached_direct_imports_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "cached_direct_imports",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__dependencies__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_cached_indirect_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____cached_indirect_imports_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____cached_indirect_imports_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "cached_indirect_imports",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__dependencies__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0),
    (MR_TypeInfo) (&make__dependencies__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0)
  }
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____cached_transitive_dependencies_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____cached_transitive_dependencies_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "cached_transitive_dependencies",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_cached_transitive_foreign_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____cached_transitive_foreign_imports_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____cached_transitive_foreign_imports_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "cached_transitive_foreign_imports",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__dependencies__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_computed_module_deps_key_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_label_0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_computed_module_deps_key_0_0 = {
  (MR_String) "computed_module_deps_key",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__dependencies__make__dependencies__field_types_computed_module_deps_key_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_computed_module_deps_key_0_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_computed_module_deps_key_0_0
};

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_computed_module_deps_key_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_computed_module_deps_key_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_computed_module_deps_key_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_computed_module_deps_key_0_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_computed_module_deps_key_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_key_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__dependencies____Unify____computed_module_deps_key_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____computed_module_deps_key_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "computed_module_deps_key",
  { make__dependencies__make__dependencies__du_name_ordered_computed_module_deps_key_0 },
  { make__dependencies__make__dependencies__du_ptag_ordered_computed_module_deps_key_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_computed_module_deps_key_0,

};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_computed_module_deps_label_0_0 = {
  (MR_String) "computed_module_deps_import_012",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_computed_module_deps_label_0[1] = {
  &make__dependencies__make__dependencies__enum_functor_desc_computed_module_deps_label_0_0
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_computed_module_deps_label_0[1] = {
  &make__dependencies__make__dependencies__enum_functor_desc_computed_module_deps_label_0_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_computed_module_deps_label_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_label_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (make__dependencies____Unify____computed_module_deps_label_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____computed_module_deps_label_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "computed_module_deps_label",
  { make__dependencies__make__dependencies__enum_name_ordered_computed_module_deps_label_0 },
  { make__dependencies__make__dependencies__enum_ordinal_ordered_computed_module_deps_label_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_computed_module_deps_label_0,

};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_0 = {
  (MR_String) "deps_up_to_date",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_1 = {
  (MR_String) "deps_out_of_date",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_2 = {
  (MR_String) "deps_error",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_dependencies_result_0[3] = {
  &make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_0,
  &make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_1,
  &make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_2
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_dependencies_result_0[3] = {
  &make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_2,
  &make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_1,
  &make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependencies_result_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_dependencies_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__dependencies____Unify____dependencies_result_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____dependencies_result_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "dependencies_result",
  { make__dependencies__make__dependencies__enum_name_ordered_dependencies_result_0 },
  { make__dependencies__make__dependencies__enum_ordinal_ordered_dependencies_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_dependencies_result_0,

};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_0_0[1] = {
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_file_0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_0 = {
  (MR_String) "dep_target",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__dependencies__make__dependencies__field_types_dependency_file_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_1 = {
  (MR_String) "dep_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__dependencies__make__dependencies__field_types_dependency_file_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_0
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_1[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_1
};

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_dependency_file_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_dependency_file_0[2] = {
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_1,
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependency_file_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_dependency_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__dependencies____Unify____dependency_file_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____dependency_file_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "dependency_file",
  { make__dependencies__make__dependencies__du_name_ordered_dependency_file_0 },
  { make__dependencies__make__dependencies__du_ptag_ordered_dependency_file_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_dependency_file_0,

};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_with_module_index_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_with_module_index_0_0 = {
  (MR_String) "dfmi_target",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__dependencies__make__dependencies__field_types_dependency_file_with_module_index_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_with_module_index_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_with_module_index_0_1 = {
  (MR_String) "dfmi_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__dependencies__make__dependencies__field_types_dependency_file_with_module_index_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_with_module_index_0_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_with_module_index_0_0
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_with_module_index_0_1[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_with_module_index_0_1
};

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_dependency_file_with_module_index_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_dependency_file_with_module_index_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_dependency_file_with_module_index_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_dependency_file_with_module_index_0[2] = {
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_with_module_index_0_1,
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_with_module_index_0_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependency_file_with_module_index_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__dependencies____Unify____dependency_file_with_module_index_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____dependency_file_with_module_index_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "dependency_file_with_module_index",
  { make__dependencies__make__dependencies__du_name_ordered_dependency_file_with_module_index_0 },
  { make__dependencies__make__dependencies__du_ptag_ordered_dependency_file_with_module_index_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_dependency_file_with_module_index_0,

};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_deps_result_1_0[2] = {
  (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
  (MR_PseudoTypeInfo) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1)
};

static const MR_ConstString make__dependencies__make__dependencies__field_names_deps_result_1_0[2] = {
  (MR_String) "dr_success",
  (MR_String) "dr_set"
};

static const MR_DuArgLocn make__dependencies__make__dependencies__field_locns_deps_result_1_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_deps_result_1_0 = {
  (MR_String) "deps_result",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__dependencies__make__dependencies__field_types_deps_result_1_0,
  make__dependencies__make__dependencies__field_names_deps_result_1_0,
  make__dependencies__make__dependencies__field_locns_deps_result_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_deps_result_1_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_deps_result_1_0
};

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_deps_result_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_deps_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_deps_result_1[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_deps_result_1_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_deps_result_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_deps_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__dependencies____Unify____deps_result_1_0_10001)),
  ((MR_Box) (make__dependencies____Compare____deps_result_1_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "deps_result",
  { make__dependencies__make__dependencies__du_name_ordered_deps_result_1 },
  { make__dependencies__make__dependencies__du_ptag_ordered_deps_result_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_deps_result_1,

};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_find_module_deps_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__dependencies____Unify____find_module_deps_1_0_10001)),
  ((MR_Box) (make__dependencies____Compare____find_module_deps_1_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "find_module_deps",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__dependencies__set_ordlist__pti_set_ordlist_1__pseudo_1),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_find_module_deps_plain_set_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__dependencies____Unify____find_module_deps_plain_set_1_0_10001)),
  ((MR_Box) (make__dependencies____Compare____find_module_deps_plain_set_1_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "find_module_deps_plain_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_module_deps_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____module_deps_result_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____module_deps_result_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "module_deps_result",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_process_modules_where_0_0 = {
  (MR_String) "process_only_modules_in_cur_dir",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_process_modules_where_0_1 = {
  (MR_String) "process_modules_anywhere",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_process_modules_where_0[2] = {
  &make__dependencies__make__dependencies__enum_functor_desc_process_modules_where_0_0,
  &make__dependencies__make__dependencies__enum_functor_desc_process_modules_where_0_1
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_process_modules_where_0[2] = {
  &make__dependencies__make__dependencies__enum_functor_desc_process_modules_where_0_1,
  &make__dependencies__make__dependencies__enum_functor_desc_process_modules_where_0_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_process_modules_where_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_process_modules_where_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__dependencies____Unify____process_modules_where_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____process_modules_where_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "process_modules_where",
  { make__dependencies__make__dependencies__enum_name_ordered_process_modules_where_0 },
  { make__dependencies__make__dependencies__enum_ordinal_ordered_process_modules_where_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_process_modules_where_0,

};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_transitive_dependencies_root_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_type_0),
  (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_process_modules_where_0)
};

static const MR_DuArgLocn make__dependencies__make__dependencies__field_locns_transitive_dependencies_root_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_transitive_dependencies_root_0_0 = {
  (MR_String) "transitive_dependencies_root",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__dependencies__make__dependencies__field_types_transitive_dependencies_root_0_0,
  NULL,
  make__dependencies__make__dependencies__field_locns_transitive_dependencies_root_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_transitive_dependencies_root_0_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_transitive_dependencies_root_0_0
};

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_transitive_dependencies_root_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_transitive_dependencies_root_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_transitive_dependencies_root_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_transitive_dependencies_root_0_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_transitive_dependencies_root_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__dependencies____Unify____transitive_dependencies_root_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____transitive_dependencies_root_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "transitive_dependencies_root",
  { make__dependencies__make__dependencies__du_name_ordered_transitive_dependencies_root_0 },
  { make__dependencies__make__dependencies__du_ptag_ordered_transitive_dependencies_root_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_transitive_dependencies_root_0,

};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_0 = {
  (MR_String) "interface_imports",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_1 = {
  (MR_String) "all_imports",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_2 = {
  (MR_String) "all_dependencies",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_transitive_dependencies_type_0[3] = {
  &make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_0,
  &make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_1,
  &make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_2
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_transitive_dependencies_type_0[3] = {
  &make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_2,
  &make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_1,
  &make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_transitive_dependencies_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__dependencies____Unify____transitive_dependencies_type_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____transitive_dependencies_type_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "transitive_dependencies_type",
  { make__dependencies__make__dependencies__enum_name_ordered_transitive_dependencies_type_0 },
  { make__dependencies__make__dependencies__enum_ordinal_ordered_transitive_dependencies_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_transitive_dependencies_type_0,

};

static void MR_CALL 
make__dependencies__check_dependencies_timestamps_write_missing_deps__ho19_7_p_0(
  MR_Word Var_46,
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0(TargetFileName_8, BuildDepsSucceeded_9, DepFiles_10, WriteDepFile_11, DepTimestamps_12);
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__debug_newer_dependencies_2__1618__1_3_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word MaybeTimestamp_8,
  MR_Word LambdaHeadVar__1_31)
{
  MR_bool succeeded;
  MR_Word MaybeDepTimestamp_36 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_31, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) MaybeDepTimestamp_36)) == (MR_Integer) 1))
    succeeded = MR_TRUE;
  else
  {
    MR_Word DepTimestamp_16 = ((MR_Word) ((MR_hl_field(0, MaybeDepTimestamp_36, (MR_Integer) 0))));
    MR_Word Timestamp_17;
    MR_Word Var_32;
    MR_Word Var_42;

    succeeded = ((MR_tag((MR_Word) MaybeTimestamp_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Timestamp_17 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_8, (MR_Integer) 0))));
      Var_32 = (MR_Integer) 2;
      libs__timestamp____Compare____timestamp_0_0(&Var_42, DepTimestamp_16, Timestamp_17);
      succeeded = (Var_32 == Var_42);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1516__1_3_p_0(
  MR_Word TypeInfo_for_File_38,
  MR_Word LambdaHeadVar__1_23,
  MR_Box * LambdaHeadVar__2_24)
{
  MR_bool succeeded;
  MR_Word Var_25;

  *LambdaHeadVar__2_24 = (MR_hl_field(0, LambdaHeadVar__1_23, (MR_Integer) 0));
  Var_25 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_23, (MR_Integer) 1))));
  succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1);
  if (succeeded)
  {
  }
  return succeeded;
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__1300__1_2_p_0(
  MR_Word LambdaHeadVar__1_62,
  MR_Word * LambdaHeadVar__2_63)
{
  *LambdaHeadVar__2_63 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_62, (MR_Integer) 1))));
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__1292__1_2_p_0(
  MR_Word LambdaHeadVar__1_54,
  MR_Word * LambdaHeadVar__2_55)
{
  *LambdaHeadVar__2_55 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_54, (MR_Integer) 1))));
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__1277__1_2_p_0(
  MR_Word ModuleName_20,
  MR_Word MDI_ModuleName_28)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_20, MDI_ModuleName_28);
  return succeeded;
}

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__fact_table_files__920__1_1_f_0(
  MR_String LambdaHeadVar__1_27)
{
  MR_Word LambdaHeadVar__2_28;

  {
    LambdaHeadVar__2_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_28, 0) = ((MR_Box) (LambdaHeadVar__1_27));
  }
  return LambdaHeadVar__2_28;
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__892__1_3_p_0(
  MR_Word Languages_10,
  MR_Word LambdaHeadVar__1_31,
  MR_Word * LambdaHeadVar__2_32)
{
  MR_bool succeeded;
  MR_Word Lang_35 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_31, (MR_Integer) 0))) & (MR_Integer) 3);

  *LambdaHeadVar__2_32 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_31, (MR_Integer) 1))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_10, ((MR_Box) (Lang_35)));
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies__1471__1_1_p_0(
  MR_Word LambdaHeadVar__1_35)
{
  MR_bool succeeded;
  MR_Word DepStatus_51 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_35, (MR_Integer) 1))));

  succeeded = (DepStatus_51 != (MR_Integer) 2);
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__remove_nested_modules__1332__1_2_p_0(
  MR_Word NestedModules_13,
  MR_Word HeadVar__2_34)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedModules_13, ((MR_Box) (HeadVar__2_34)));
  return succeeded;
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__find_target_dependencies_of_modules__265__1_8_p_0(
  MR_Word HeadVar__1_209,
  MR_Word HeadVar__2_210,
  MR_Word * HeadVar__3_211,
  MR_Word * HeadVar__4_212,
  MR_Word HeadVar__5_213,
  MR_Word * HeadVar__6_214)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_115_95_95_50_54_53_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(HeadVar__3_211, HeadVar__4_212, HeadVar__5_213, HeadVar__6_214);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_115_95_95_50_54_53_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_211,
  MR_Word * HeadVar__4_212,
  MR_Word HeadVar__5_213,
  MR_Word * HeadVar__6_214)
{
  *HeadVar__3_211 = (MR_Integer) 1;
  *HeadVar__4_212 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  *HeadVar__6_214 = HeadVar__5_213;
}

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_type_0_0(
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
make__dependencies____Unify____transitive_dependencies_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____transitive_dependencies_root_0_0(
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
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    make__deps_set____Compare____module_index_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_root_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = make__deps_set____Unify____module_index_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____process_modules_where_0_0(
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
make__dependencies____Unify____process_modules_where_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____module_deps_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
make__dependencies____Unify____module_deps_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = make__dependencies____Unify____deps_result_1_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____find_module_deps_plain_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_112_108_97_105_110_95_115_101_116_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_112_108_97_105_110_95_115_101_116_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_plain_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_112_108_97_105_110_95_115_101_116_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_112_108_97_105_110_95_115_101_116_95_49_95_95_91_49_93_95_48_2_p_0(
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
make__dependencies____Compare____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____deps_result_1_0(
  MR_Word TypeInfo_for_T_11,
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_15 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_16 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_15 < Var_16);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_15 > Var_16);
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
      mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_for_T_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____deps_result_1_0(
  MR_Word TypeInfo_for_T_9,
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____dependency_file_with_module_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String Var_22 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgY1_16 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_22, ArgY1_16);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      make__deps_set____Compare____module_index_0_0(&SubResult1_6, Var_24, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_23, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_with_module_index_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = make__deps_set____Unify____module_index_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = make__make_info____Unify____module_target_type_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____dependency_file_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String Var_16 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      make__make_info____Compare____target_file_0_0(HeadVar__1_1, Var_17, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = make__make_info____Unify____target_file_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____dependencies_result_0_0(
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

MR_bool MR_CALL 
make__dependencies____Unify____dependencies_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____computed_module_deps_label_0_0(
  MR_Word * HeadVar__1_1)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_99_111_109_112_117_116_101_100_95_109_111_100_117_108_101_95_100_101_112_115_95_108_97_98_101_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_99_111_109_112_117_116_101_100_95_109_111_100_117_108_101_95_100_101_112_115_95_108_97_98_101_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
make__dependencies____Unify____computed_module_deps_label_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
make__dependencies____Compare____computed_module_deps_key_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word SubResult1_6;

    make__deps_set____Compare____module_index_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____computed_module_deps_key_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    succeeded = make__deps_set____Unify____module_index_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____cached_transitive_foreign_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_foreign_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____cached_transitive_dependencies_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_dependencies_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____cached_indirect_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_indirect_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____cached_direct_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_direct_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__dependencies____Compare____cached_computed_module_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_computed_module_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__debug_newer_dependencies_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__dependencies__IntroducedFrom__pred__debug_newer_dependencies_2__1618__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__dependencies__debug_newer_dependencies_2_6_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_String TargetFileName_7,
  MR_Word MaybeTimestamp_8,
  MR_Word DepFiles_9,
  MR_Word DepTimestamps_10)
{
  MR_bool succeeded;
  MR_Word TypeInfo_41_41;
  MR_Word DepTimestampAL_12;
  MR_Word NewerDepsAL0_18;
  MR_Word NewerDepsAL_19;
  MR_String Var_28;
  MR_Word Var_30;
  MR_Word conv0_NewerDepsAL0_18;
  MR_Word conv1_NewerDepsAL_19;

  Var_28 = mercury__string__string_1_f_0((MR_Word) (&make__dependencies_scalar_common_2[1]), ((MR_Box) (MaybeTimestamp_8)));
  mercury__io__write_string_3_p_0(TargetFileName_7);
  mercury__io__write_string_3_p_0((MR_String) " [");
  mercury__io__write_string_3_p_0(Var_28);
  mercury__io__write_string_3_p_0((MR_String) "]: newer dependencies:\n");
  mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_T_37, (MR_Word) (&make__dependencies_scalar_common_2[1]), DepFiles_9, DepTimestamps_10, &DepTimestampAL_12);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[10]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__dependencies__debug_newer_dependencies_2_6_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (TypeInfo_for_T_37));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (MaybeTimestamp_8));
  }
  {
    TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_41_41, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_for_T_37));
    MR_hl_field(0, TypeInfo_41_41, 2) = ((MR_Box) (&make__dependencies_scalar_common_2[1]));
  }
  mercury__list__filter_3_p_0(TypeInfo_41_41, (MR_Word) (Var_30), (MR_Word) (DepTimestampAL_12), &conv0_NewerDepsAL0_18);
  NewerDepsAL0_18 = (MR_Word) (conv0_NewerDepsAL0_18);
  mercury__list__sort_2_p_0(TypeInfo_41_41, (MR_Word) (NewerDepsAL0_18), &conv1_NewerDepsAL_19);
  NewerDepsAL_19 = (MR_Word) (conv1_NewerDepsAL_19);
  make__dependencies__write_dependency_file_and_timestamp_list_3_p_0(TypeInfo_for_T_37, NewerDepsAL_19);
}

static void MR_CALL 
make__dependencies__write_dependency_file_and_timestamp_list_3_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Head_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Box DepFile_10 = (MR_hl_field(0, Head_7, (MR_Integer) 0));
      MR_Word MaybeTimestamp_11 = ((MR_Word) ((MR_hl_field(0, Head_7, (MR_Integer) 1))));
      MR_String Var_18;
      MR_String Var_21;
      MR_Word next_value_of_HeadVar__1_1;

      Var_18 = mercury__string__string_1_f_0(TypeInfo_for_T_23, DepFile_10);
      Var_21 = mercury__string__string_1_f_0((MR_Word) (&make__dependencies_scalar_common_2[1]), ((MR_Box) (MaybeTimestamp_11)));
      mercury__io__write_string_3_p_0((MR_String) "\t");
      mercury__io__write_string_3_p_0(Var_18);
      mercury__io__write_string_3_p_0((MR_String) " ");
      mercury__io__write_string_3_p_0(Var_21);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Tail_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__check_dependencies_debug_unbuilt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__dependencies__make_write_target_dependency_status_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
make__dependencies__check_dependencies_debug_unbuilt_5_p_0(
  MR_Word Globals_6,
  MR_String TargetFileName_7,
  MR_Word UnbuiltDependencies_8)
{
  MR_Word Var_17;
  MR_Box conv0_STATE_VARIABLE_IO_11;

  mercury__io__write_string_3_p_0(TargetFileName_7);
  mercury__io__write_string_3_p_0((MR_String) ": dependencies could not be built.\n\t");
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[3]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (make__dependencies__check_dependencies_debug_unbuilt_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Globals_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&make__dependencies_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, UnbuiltDependencies_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

static void MR_CALL 
make__dependencies__make_write_target_dependency_status_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2)
{
  MR_Word DepTarget_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word DepStatus_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String DepStatusStr_9 = ((&make__dependencies_vector_common_16[0 + DepStatus_7]))->make__dependencies__vector_common_type_16_0__vct_16_f_0;
  MR_String DepTargetFileName_10;

  make__util__dependency_file_to_file_name_5_p_0(Globals_5, DepTarget_6, &DepTargetFileName_10);
  mercury__io__write_string_3_p_0((MR_String) "\t");
  mercury__io__write_string_3_p_0(DepTargetFileName_10);
  mercury__io__write_string_3_p_0((MR_String) " - ");
  mercury__io__write_string_3_p_0(DepStatusStr_9);
  mercury__io__write_string_3_p_0((MR_String) "\n");
}

static void MR_CALL 
make__dependencies__make_local_module_id_option_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Opts0_5,
  MR_Word * Opts_6)
{
  MR_String ModuleNameStr_7;
  MR_Word Var_9;

  ModuleNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_4);
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (ModuleNameStr_7));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Opts0_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Opts_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "--local-module-id"));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_9));
  }
}

static void MR_CALL 
make__dependencies__collect_nested_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_NestedModules_0_18,
  MR_Word * STATE_VARIABLE_NestedModules_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word MaybeModuleDepInfo_14;

  make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_10, &MaybeModuleDepInfo_14, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  if ((MaybeModuleDepInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_NestedModules_19 = STATE_VARIABLE_NestedModules_0_18;
  else
  {
    MR_Word ModuleDepInfo_15 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_14, (MR_Integer) 0))));
    MR_Word MaybeTopModule_16;
    MR_Word NestedSubModules_17;

    parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_15, &MaybeTopModule_16);
    NestedSubModules_17 = parse_tree__module_baggage__get_nested_children_of_top_module_1_f_0(MaybeTopModule_16);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedSubModules_17, STATE_VARIABLE_NestedModules_0_18, STATE_VARIABLE_NestedModules_19);
  }
}

static void MR_CALL 
make__dependencies__cache_computed_module_deps_10_p_0(
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word Cache0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 14))));
  MR_Word Key_20;
  MR_Word CachedResult_21;
  MR_Box conv0_CachedResult_21;

  {
    Key_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Key_20, 0) = ((MR_Box) (ModuleIndex_14));
    MR_hl_field(0, Key_20, 1) = NULL;
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_key_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), Cache0_19, ((MR_Box) (Key_20)), &conv0_CachedResult_21);
  if (succeeded)
  {
    CachedResult_21 = ((MR_Word) (conv0_CachedResult_21));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, CachedResult_21, (MR_Integer) 0))) & (MR_Integer) 1);
    *Deps_16 = ((MR_Word) ((MR_hl_field(0, CachedResult_21, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
  {
    MR_Word Cache1_22;
    MR_Word Result_23;
    MR_Word Cache_24;
    MR_Word STATE_VARIABLE_Info_29_29;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_12, (MR_Integer) 1))));
    MR_Box conv5_Succeeded_15;
    MR_Box conv4_Deps_16;
    MR_Box conv3_STATE_VARIABLE_Info_29_29;
    MR_Box conv2_STATE_VARIABLE_IO_28;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Integer Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Unsigned packed_word_3;

    func_1(((MR_Box) (FindDeps_12)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv5_Succeeded_15, &conv4_Deps_16, ((MR_Box) (STATE_VARIABLE_Info_0_25)), &conv3_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_28);
    *Succeeded_15 = ((MR_Word) (conv5_Succeeded_15));
    *Deps_16 = ((MR_Word) (conv4_Deps_16));
    STATE_VARIABLE_Info_29_29 = ((MR_Word) (conv3_STATE_VARIABLE_Info_29_29));
    Cache1_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 14))));
    {
      Result_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_23, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_23, 1) = ((MR_Box) (*Deps_16));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_key_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (Key_20)), ((MR_Box) (Result_23)), Cache1_22, &Cache_24);
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 0))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 1))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 2))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 3))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 5))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 7))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 8))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 9))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 10))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 11))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 12))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 13))));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 16))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 17))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 18))));
    Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 19))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 20))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 21))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_75));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_76));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_77));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_78));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_79));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_80));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_81));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_82));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_83));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_85));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 14) = ((MR_Box) (Cache_24));
      MR_hl_field(0, base, 15) = (MR_Box) (packed_word_3);
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_92));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_93));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_94));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_95));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_96));
    }
  }
}

static void MR_CALL 
make__dependencies__combine_deps_2_10_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word FindDeps1_11,
  MR_Word FindDeps2_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word Succeeded1_19;
  MR_Word Deps1_20;
  MR_Word STATE_VARIABLE_Info_27_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps1_11, (MR_Integer) 1))));
  MR_Box conv4_Succeeded1_19;
  MR_Box conv3_Deps1_20;
  MR_Box conv2_STATE_VARIABLE_Info_27_27;
  MR_Box conv1_STATE_VARIABLE_IO_28_28;
  MR_Word Var_29;

  func_0(((MR_Box) (FindDeps1_11)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Succeeded1_19, &conv3_Deps1_20, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv2_STATE_VARIABLE_Info_27_27, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
  Succeeded1_19 = ((MR_Word) (conv4_Succeeded1_19));
  Deps1_20 = ((MR_Word) (conv3_Deps1_20));
  STATE_VARIABLE_Info_27_27 = ((MR_Word) (conv2_STATE_VARIABLE_Info_27_27));
  succeeded = (Succeeded1_19 == (MR_Integer) 0);
  if (succeeded)
  {
    Var_29 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_27_27, (MR_Integer) 15))) & (MR_Integer) 1);
    succeeded = (Var_29 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    *Succeeded_15 = (MR_Integer) 0;
    *Deps_16 = Deps1_20;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
  }
  else
  {
    MR_Word Succeeded2_21;
    MR_Word Deps2_22;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps2_12, (MR_Integer) 1))));
    MR_Box conv9_Succeeded2_21;
    MR_Box conv8_Deps2_22;
    MR_Box conv7_STATE_VARIABLE_Info_24;
    MR_Box conv6_STATE_VARIABLE_IO_26;

    func_5(((MR_Box) (FindDeps2_12)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv9_Succeeded2_21, &conv8_Deps2_22, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv7_STATE_VARIABLE_Info_24, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_26);
    Succeeded2_21 = ((MR_Word) (conv9_Succeeded2_21));
    Deps2_22 = ((MR_Word) (conv8_Deps2_22));
    *STATE_VARIABLE_Info_24 = ((MR_Word) (conv7_STATE_VARIABLE_Info_24));
    *Succeeded_15 = libs__maybe_succeeded__and_2_f_0(Succeeded1_19, Succeeded2_21);
    *Deps_16 = mercury__sparse_bitset__union_2_f_0(TypeInfo_for_T_52, Deps1_20, Deps2_22);
  }
}

static MR_bool MR_CALL 
make__dependencies__get_foreign_include_files_2_4_p_0(
  MR_Word Languages_5,
  MR_String SourceFileName_6,
  MR_Word ForeignInclude_7,
  MR_Word * File_8)
{
  MR_bool succeeded;
  MR_Word Language_9 = ((MR_Unsigned) ((MR_hl_field(0, ForeignInclude_7, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_String IncludeFileName_10 = ((MR_String) ((MR_hl_field(0, ForeignInclude_7, (MR_Integer) 1))));
  MR_String IncludePath_11;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Language_9)), Languages_5);
  if (succeeded)
  {
    parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_6, IncludeFileName_10, &IncludePath_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *File_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IncludePath_11));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__foreign_include_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_File_8;

  succeeded = make__dependencies__get_foreign_include_files_2_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_File_8);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_File_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__dependencies__foreign_include_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Files_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word Languages_15;
  MR_Word ModuleName_16;
  MR_Word MaybeModuleDepInfo_17;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &Languages_15);
  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_22, ModuleIndex_10, &ModuleName_16);
  make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_16, &MaybeModuleDepInfo_17, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_11 = (MR_Integer) 0;
    *Files_12 = mercury__set__init_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
  }
  else
  {
    MR_Word ModuleDepInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_17, (MR_Integer) 0))));
    MR_String SourceFileName_19;
    MR_Word ForeignIncludeFiles_20;
    MR_Word FilesList_21;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_34;

    *Succeeded_11 = (MR_Integer) 1;
    parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo_18, &SourceFileName_19);
    parse_tree__module_dep_info__module_dep_info_get_foreign_include_files_2_p_0(ModuleDepInfo_18, &ForeignIncludeFiles_20);
    Var_28 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_15);
    Var_29 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFiles_20);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[2]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__dependencies__foreign_include_files_8_p_0_1));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (Var_28));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (SourceFileName_19));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_34, Var_29, &FilesList_21);
    *Files_12 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), FilesList_21);
  }
}

static MR_Box MR_CALL 
make__dependencies__fact_table_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_28;

  conv0_LambdaHeadVar__2_28 = make__dependencies__IntroducedFrom__func__fact_table_files__920__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_28));
  return wrapper_arg_2;
}

static void MR_CALL 
make__dependencies__fact_table_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Files_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word ModuleName_15;
  MR_Word MaybeModuleDepInfo_16;

  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_20, ModuleIndex_10, &ModuleName_15);
  make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_15, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  if ((MaybeModuleDepInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_11 = (MR_Integer) 0;
    *Files_12 = mercury__set__init_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
  }
  else
  {
    MR_Word ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_16, (MR_Integer) 0))));
    MR_Word FactTableFiles_18;

    *Succeeded_11 = (MR_Integer) 1;
    parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_17, &FactTableFiles_18);
    *Files_12 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies_scalar_common_2[39]), FactTableFiles_18);
  }
}

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word Languages_15;
  MR_Word IntermodSucceeded_16;
  MR_Word IntermodModules_17;
  MR_Word KeepGoing_18;
  MR_Word ForeignSucceeded_19;
  MR_Word STATE_VARIABLE_Info_24_24;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &Languages_15);
  make__dependencies__intermod_imports_8_p_0(Globals_9, ModuleIndex_10, &IntermodSucceeded_16, &IntermodModules_17, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_24);
  KeepGoing_18 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 15))) & (MR_Integer) 1);
  Var_32 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_15);
  Var_33 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), IntermodModules_17, ((MR_Box) (ModuleIndex_10)));
  Var_27 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), Var_33);
  Var_29 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_50_95_95_91_51_93_95_48_12_p_0(Var_32, KeepGoing_18, Globals_9, Var_27, (MR_Integer) 1, &ForeignSucceeded_19, Var_29, Modules_12, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_21);
  *Succeeded_11 = libs__maybe_succeeded__and_2_f_0(IntermodSucceeded_16, ForeignSucceeded_19);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_50_95_95_91_51_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_37;
      MR_Word NewDeps_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_Deps_49_49;

      make__dependencies__find_module_foreign_imports_9_p_0(Var_52, HeadVar__3_3, MI_31, &NewSucceeded_37, &NewDeps_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_Deps_0_7 = STATE_VARIABLE_Deps_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Deps_0_7 = next_value_of_STATE_VARIABLE_Deps_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__find_module_foreign_imports_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word CachedForeignImports0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 13))));
  MR_Word CachedResult_18;
  MR_Box conv0_CachedResult_18;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), CachedForeignImports0_17, ((MR_Box) (ModuleIndex_12)), &conv0_CachedResult_18);
  if (succeeded)
  {
    CachedResult_18 = ((MR_Word) (conv0_CachedResult_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Succeeded_13 = ((MR_Unsigned) ((MR_hl_field(0, CachedResult_18, (MR_Integer) 0))) & (MR_Integer) 1);
    *ForeignModules_14 = ((MR_Word) ((MR_hl_field(0, CachedResult_18, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
  {
    MR_Word Succeeded0_19;
    MR_Word ImportedModules_20;
    MR_Word STATE_VARIABLE_Info_29_29;

    make__dependencies__find_transitive_implementation_imports_8_p_0(Globals_11, ModuleIndex_12, &Succeeded0_19, &ImportedModules_20, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
    switch (Succeeded0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_13 = (MR_Integer) 0;
          *ForeignModules_14 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_29_29;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word KeepGoing_21 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 15))) & (MR_Integer) 1);
          MR_Word Result_22;
          MR_Word CachedForeignImports1_23;
          MR_Word CachedForeignImports_24;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word STATE_VARIABLE_Info_35_35;
          MR_Word Var_37;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_112;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_118;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Integer Var_124;
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Unsigned packed_word_4;

          Var_37 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), ImportedModules_20, ((MR_Box) (ModuleIndex_12)));
          Var_32 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), Var_37);
          Var_34 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_49_95_95_91_51_93_95_48_12_p_0(Languages_10, KeepGoing_21, Globals_11, Var_32, (MR_Integer) 1, Succeeded_13, Var_34, ForeignModules_14, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_35_35);
          {
            Result_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Result_22, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_13));
            MR_hl_field(0, Result_22, 1) = ((MR_Box) (*ForeignModules_14));
          }
          CachedForeignImports1_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 13))));
          mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_12)), ((MR_Box) (Result_22)), CachedForeignImports1_23, &CachedForeignImports_24);
          Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 0))));
          Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 1))));
          Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 2))));
          Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 3))));
          Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 4))));
          Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 5))));
          Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 6))));
          Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 7))));
          Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 8))));
          Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 9))));
          Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 10))));
          Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 11))));
          Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 12))));
          Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 14))));
          packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 15)));
          Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 16))));
          Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 17))));
          Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 18))));
          Var_124 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 19))));
          Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 20))));
          Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 21))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_105));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_106));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_107));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_108));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_109));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_110));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_111));
            MR_hl_field(0, base, 8) = ((MR_Box) (Var_112));
            MR_hl_field(0, base, 9) = ((MR_Box) (Var_113));
            MR_hl_field(0, base, 10) = ((MR_Box) (Var_114));
            MR_hl_field(0, base, 11) = ((MR_Box) (Var_115));
            MR_hl_field(0, base, 12) = ((MR_Box) (Var_116));
            MR_hl_field(0, base, 13) = ((MR_Box) (CachedForeignImports_24));
            MR_hl_field(0, base, 14) = ((MR_Box) (Var_118));
            MR_hl_field(0, base, 15) = (MR_Box) (packed_word_4);
            MR_hl_field(0, base, 16) = ((MR_Box) (Var_121));
            MR_hl_field(0, base, 17) = ((MR_Box) (Var_122));
            MR_hl_field(0, base, 18) = ((MR_Box) (Var_123));
            MR_hl_field(0, base, 19) = ((MR_Box) (Var_124));
            MR_hl_field(0, base, 20) = ((MR_Box) (Var_125));
            MR_hl_field(0, base, 21) = ((MR_Box) (Var_126));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_49_95_95_91_51_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_37;
      MR_Word NewDeps_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_Deps_49_49;

      make__dependencies__find_module_foreign_imports_uncached_9_p_0(Var_52, HeadVar__3_3, MI_31, &NewSucceeded_37, &NewDeps_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_Deps_0_7 = STATE_VARIABLE_Deps_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Deps_0_7 = next_value_of_STATE_VARIABLE_Deps_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_49_49;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
make__dependencies__find_module_foreign_imports_uncached_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_32;

  succeeded = make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__892__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_32);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__dependencies__find_module_foreign_imports_uncached_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word ModuleName_17;
  MR_Word MaybeModuleDepInfo_18;
  MR_Word STATE_VARIABLE_Info_29_29;

  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_25, ModuleIndex_12, &ModuleName_17);
  make__module_dep_file__get_module_dependencies_7_p_0(Globals_11, ModuleName_17, &MaybeModuleDepInfo_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
  if ((MaybeModuleDepInfo_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ForeignModules_14 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *Succeeded_13 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_29_29;
  }
  else
  {
    MR_Word ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, (MR_Integer) 0))));
    MR_Word FIMSpecs_20;
    MR_Word ForLangsPred_21;
    MR_Word ForeignModuleNameSet_24;
    MR_Word Var_33;

    parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(ModuleDepInfo_19, &FIMSpecs_20);
    {
      ForLangsPred_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ForLangsPred_21, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[9]));
      MR_hl_field(0, ForLangsPred_21, 1) = ((MR_Box) (make__dependencies__find_module_foreign_imports_uncached_9_p_0_1));
      MR_hl_field(0, ForLangsPred_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ForLangsPred_21, 3) = ((MR_Box) (Languages_10));
    }
    mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForLangsPred_21, FIMSpecs_20, &ForeignModuleNameSet_24);
    Var_33 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignModuleNameSet_24);
    make__deps_set__module_names_to_index_set_4_p_0(Var_33, ForeignModules_14, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26);
    *Succeeded_13 = (MR_Integer) 1;
  }
}

static void MR_CALL 
make__dependencies__find_transitive_implementation_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word Modules0_15;

  make__dependencies__find_transitive_module_dependencies_10_p_0(Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, Succeeded_11, &Modules0_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  *Modules_12 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), Modules0_15, ((MR_Box) (ModuleIndex_10)));
}

static void MR_CALL 
make__dependencies__non_intermod_indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_bool succeeded;
  MR_Word DirectSucceeded_21;
  MR_Word DirectImports_22;
  MR_Word KeepGoing_23;
  MR_Word STATE_VARIABLE_Info_26_26;

  make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &DirectSucceeded_21, &DirectImports_22, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_26_26);
  KeepGoing_23 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 15))) & (MR_Integer) 1);
  succeeded = (DirectSucceeded_21 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_23 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_11 = (MR_Integer) 0;
    *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_26_26;
  }
  else
  {
    MR_Word IndirectSucceeded_24;
    MR_Word IndirectImports0_25;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;

    Var_29 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), DirectImports_22);
    Var_31 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho3_12_p_0(KeepGoing_23, Globals_9, Var_29, (MR_Integer) 1, &IndirectSucceeded_24, Var_31, &IndirectImports0_25, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_16);
    Var_32 = mercury__sparse_bitset__delete_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), IndirectImports0_25, ((MR_Box) (ModuleIndex_10)));
    *Modules_12 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Var_32, DirectImports_22);
    *Succeeded_11 = libs__maybe_succeeded__and_2_f_0(DirectSucceeded_21, IndirectSucceeded_24);
  }
}

static void MR_CALL 
make__dependencies__indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word CachedIndirectImports0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 11))));
  MR_Word CachedResult_16;
  MR_Box conv0_CachedResult_16;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), CachedIndirectImports0_15, ((MR_Box) (ModuleIndex_10)), &conv0_CachedResult_16);
  if (succeeded)
  {
    CachedResult_16 = ((MR_Word) (conv0_CachedResult_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Succeeded_11 = ((MR_Unsigned) ((MR_hl_field(0, CachedResult_16, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_12 = ((MR_Word) ((MR_hl_field(0, CachedResult_16, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
  else
  {
    MR_Word Result_17;
    MR_Word CachedIndirectImports1_18;
    MR_Word CachedIndirectImports_19;
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Integer Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Unsigned packed_word_3;

    make__dependencies__indirect_imports_uncached__ho5_9_p_0(Globals_9, ModuleIndex_10, Succeeded_11, Modules_12, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_25_25);
    {
      Result_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_17, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_17, 1) = ((MR_Box) (*Modules_12));
    }
    CachedIndirectImports1_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 11))));
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_10)), ((MR_Box) (Result_17)), CachedIndirectImports1_18, &CachedIndirectImports_19);
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 0))));
    Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 1))));
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 2))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 3))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 4))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 5))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 6))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 7))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 8))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 9))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 10))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 12))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 13))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 14))));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 15)));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 16))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 17))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 18))));
    Var_90 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 19))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 20))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 21))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_75));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_76));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_77));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_78));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_79));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_80));
      MR_hl_field(0, base, 11) = ((MR_Box) (CachedIndirectImports_19));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_82));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_83));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 15) = (MR_Box) (packed_word_3);
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_90));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_92));
    }
  }
}

static void MR_CALL 
make__dependencies__indirect_imports_uncached__ho5_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * IndirectImports_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word DirectSucceeded_17;
  MR_Word DirectImports_18;
  MR_Word KeepGoing_19;
  MR_Word STATE_VARIABLE_Info_26_26;

  make__dependencies__direct_imports_8_p_0(Globals_10, ModuleIndex_12, &DirectSucceeded_17, &DirectImports_18, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
  KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 15))) & (MR_Integer) 1);
  succeeded = (DirectSucceeded_17 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_13 = (MR_Integer) 0;
    *IndirectImports_14 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_26_26;
  }
  else
  {
    MR_Word IndirectSucceeded_20;
    MR_Word IndirectImports0_21;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_34;

    Var_29 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), DirectImports_18);
    Var_31 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho3_12_p_0(KeepGoing_19, Globals_10, Var_29, (MR_Integer) 1, &IndirectSucceeded_20, Var_31, &IndirectImports0_21, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_23);
    Var_34 = mercury__sparse_bitset__delete_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), IndirectImports0_21, ((MR_Box) (ModuleIndex_12)));
    *IndirectImports_14 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Var_34, DirectImports_18);
    *Succeeded_13 = libs__maybe_succeeded__and_2_f_0(DirectSucceeded_17, IndirectSucceeded_20);
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho3_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_37;
      MR_Word NewDeps_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_Deps_49_49;
      MR_Word Modules0_52;

      make__dependencies__find_transitive_module_dependencies_10_p_0(HeadVar__3_3, (MR_Integer) 1, (MR_Integer) 1, MI_31, &NewSucceeded_37, &Modules0_52, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      NewDeps_38 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), Modules0_52, ((MR_Box) (MI_31)));
      mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_Deps_0_7 = STATE_VARIABLE_Deps_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Deps_0_7 = next_value_of_STATE_VARIABLE_Deps_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word CachedDirectImports0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 9))));
  MR_Word Result0_16;
  MR_Box conv0_Result0_16;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), CachedDirectImports0_15, ((MR_Box) (ModuleIndex_10)), &conv0_Result0_16);
  if (succeeded)
  {
    Result0_16 = ((MR_Word) (conv0_Result0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Succeeded_11 = ((MR_Unsigned) ((MR_hl_field(0, Result0_16, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_12 = ((MR_Word) ((MR_hl_field(0, Result0_16, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
  }
  else
  {
    MR_Word KeepGoing_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 15))) & (MR_Integer) 1);
    MR_Word Succeeded0_18;
    MR_Word Modules0_19;
    MR_Word Result_25;
    MR_Word CachedDirectImports1_26;
    MR_Word CachedDirectImports_27;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Integer Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Unsigned packed_word_4;

    make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded0_18, &Modules0_19, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32);
    succeeded = (Succeeded0_18 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_17 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_11 = (MR_Integer) 0;
      *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_32_32;
    }
    else
    {
      MR_Word Succeeded1_20;
      MR_Word IntermodModules_21;
      MR_Word STATE_VARIABLE_Info_34_34;

      make__dependencies__intermod_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded1_20, &IntermodModules_21, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_34_34);
      succeeded = (Succeeded1_20 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_17 == (MR_Integer) 0);
      if (succeeded)
      {
        *Succeeded_11 = (MR_Integer) 0;
        *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_34_34;
      }
      else
      {
        MR_Word Modules1_22;
        MR_Word Succeeded2_23;
        MR_Word Modules2_24;
        MR_Word Var_37;
        MR_Word Var_41;

        mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Modules0_19, IntermodModules_21, &Modules1_22);
        Var_37 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), IntermodModules_21);
        make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho6_12_p_0(KeepGoing_17, Globals_9, Var_37, (MR_Integer) 1, &Succeeded2_23, Modules1_22, &Modules2_24, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_39_39);
        Var_41 = libs__maybe_succeeded__and_2_f_0(Succeeded0_18, Succeeded1_20);
        *Succeeded_11 = libs__maybe_succeeded__and_2_f_0(Var_41, Succeeded2_23);
        *Modules_12 = mercury__sparse_bitset__delete_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), Modules2_24, ((MR_Box) (ModuleIndex_10)));
      }
    }
    {
      Result_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_25, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_25, 1) = ((MR_Box) (*Modules_12));
    }
    CachedDirectImports1_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 9))));
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_10)), ((MR_Box) (Result_25)), CachedDirectImports1_26, &CachedDirectImports_27);
    Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 0))));
    Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 1))));
    Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 2))));
    Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 3))));
    Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 4))));
    Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 5))));
    Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 6))));
    Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 7))));
    Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 8))));
    Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 10))));
    Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 11))));
    Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 12))));
    Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 13))));
    Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 14))));
    packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 15)));
    Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 16))));
    Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 17))));
    Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 18))));
    Var_128 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 19))));
    Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 20))));
    Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 21))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_29 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_108));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_109));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_110));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_111));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_112));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_113));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_114));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_115));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_116));
      MR_hl_field(0, base, 9) = ((MR_Box) (CachedDirectImports_27));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_118));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_119));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_120));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_121));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_122));
      MR_hl_field(0, base, 15) = (MR_Box) (packed_word_4);
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_125));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_126));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_127));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_128));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_129));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_130));
    }
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho6_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_37;
      MR_Word NewDeps_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_Deps_49_49;

      make__dependencies__non_intermod_direct_imports_8_p_0(HeadVar__3_3, MI_31, &NewSucceeded_37, &NewDeps_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_Deps_0_7 = STATE_VARIABLE_Deps_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Deps_0_7 = next_value_of_STATE_VARIABLE_Deps_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__ancestors_8_p_0(
  MR_Word _Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * AncestorIndices_11,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_99_101_115_116_111_114_115_95_95_91_49_93_95_48_8_p_0(ModuleIndex_10, HeadVar__3_3, AncestorIndices_11, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_110_99_101_115_116_111_114_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * AncestorIndices_11,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word ModuleName_14;
  MR_Word Ancestors_15;

  *HeadVar__3_3 = (MR_Integer) 1;
  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_16, ModuleIndex_10, &ModuleName_14);
  Ancestors_15 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_14);
  make__deps_set__module_names_to_index_set_4_p_0(Ancestors_15, AncestorIndices_11, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
}

static void MR_CALL 
make__dependencies__self_8_p_0(
  MR_Word _Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_102_95_95_91_49_93_95_48_8_p_0(ModuleIndex_10, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_102_95_95_91_49_93_95_48_8_p_0(
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  *HeadVar__3_3 = (MR_Integer) 1;
  *HeadVar__4_4 = mercury__sparse_bitset__make_singleton_set_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), ((MR_Box) (ModuleIndex_10)));
  *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
}

static void MR_CALL 
make__dependencies__no_deps_8_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_9,
  MR_Word HeadVar__2_10,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_95_100_101_112_115_95_95_91_50_44_32_51_93_95_48_8_p_0(TypeInfo_for_T_17, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_95_100_101_112_115_95_95_91_50_44_32_51_93_95_48_8_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  *HeadVar__3_3 = (MR_Integer) 1;
  *HeadVar__4_4 = mercury__sparse_bitset__init_0_f_0(TypeInfo_for_T_17);
  *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv26_Succeeded_15;
  MR_Word conv25_Deps_16;
  MR_Word conv24_STATE_VARIABLE_Info_26;

  make__dependencies__cache_computed_module_deps_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_Succeeded_15, &conv25_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv24_STATE_VARIABLE_Info_26);
  *wrapper_arg_3 = ((MR_Box) (conv26_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv25_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv24_STATE_VARIABLE_Info_26));
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv23_Succeeded_15;
  MR_Word conv22_Deps_16;
  MR_Word conv21_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_Succeeded_15, &conv22_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv21_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv23_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv22_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv21_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_Succeeded_15;
  MR_Word conv19_Deps_16;
  MR_Word conv18_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_Succeeded_15, &conv19_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv20_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv19_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_Succeeded_15;
  MR_Word conv16_TargetFiles_16;
  MR_Word conv15_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_Succeeded_15, &conv16_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv17_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv16_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_Succeeded_11;
  MR_Word conv13_Modules_12;
  MR_Word conv12_STATE_VARIABLE_Info_21;

  make__dependencies__indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_11, &conv13_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv13_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_Succeeded_15;
  MR_Word conv10_TargetFiles_16;
  MR_Word conv9_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_Succeeded_15, &conv10_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv11_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv10_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Succeeded_11;
  MR_Word conv7_Modules_12;
  MR_Word conv6_STATE_VARIABLE_Info_29;

  make__dependencies__direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_Succeeded_11, &conv7_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv8_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv7_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Word conv1_AncestorIndices_11;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  make__dependencies__ancestors_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3, &conv1_AncestorIndices_11, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv1_AncestorIndices_11));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__dependencies__find_own_imports_012_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word KeepGoing_15 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_16, (MR_Integer) 15))) & (MR_Integer) 1);
  MR_Word Var_21;
  MR_Word Var_23;

  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (ModuleIndex_10));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_23 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_fi_12_p_0(KeepGoing_15, (MR_Word) (&make__dependencies_scalar_common_7[24]), Globals_9, Var_21, (MR_Integer) 1, Succeeded_11, Var_23, Result_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv26_Succeeded_15;
  MR_Word conv25_Deps_16;
  MR_Word conv24_STATE_VARIABLE_Info_26;

  make__dependencies__cache_computed_module_deps_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_Succeeded_15, &conv25_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv24_STATE_VARIABLE_Info_26);
  *wrapper_arg_3 = ((MR_Box) (conv26_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv25_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv24_STATE_VARIABLE_Info_26));
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv23_Succeeded_15;
  MR_Word conv22_Deps_16;
  MR_Word conv21_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_Succeeded_15, &conv22_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv21_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv23_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv22_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv21_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_Succeeded_15;
  MR_Word conv19_Deps_16;
  MR_Word conv18_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_Succeeded_15, &conv19_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv20_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv19_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_Succeeded_15;
  MR_Word conv16_TargetFiles_16;
  MR_Word conv15_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_Succeeded_15, &conv16_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv17_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv16_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_Succeeded_11;
  MR_Word conv13_Modules_12;
  MR_Word conv12_STATE_VARIABLE_Info_21;

  make__dependencies__indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_11, &conv13_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv13_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_Succeeded_15;
  MR_Word conv10_TargetFiles_16;
  MR_Word conv9_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_Succeeded_15, &conv10_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv11_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv10_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Succeeded_11;
  MR_Word conv7_Modules_12;
  MR_Word conv6_STATE_VARIABLE_Info_29;

  make__dependencies__direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_Succeeded_11, &conv7_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv8_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv7_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Word conv1_AncestorIndices_11;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  make__dependencies__ancestors_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3, &conv1_AncestorIndices_11, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv1_AncestorIndices_11));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word Succeeded1_16;
  MR_Word Modules1_17;
  MR_Word STATE_VARIABLE_Info_23_23;
  MR_Word KeepGoing_54 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 15))) & (MR_Integer) 1);
  MR_Word Succeeded1_55;
  MR_Word Modules1_56;
  MR_Word STATE_VARIABLE_Info_23_58;

  make__dependencies__intermod_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded1_55, &Modules1_56, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_58);
  succeeded = (Succeeded1_55 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_54 == (MR_Integer) 0);
  if (succeeded)
  {
    Succeeded1_16 = (MR_Integer) 0;
    Modules1_17 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    STATE_VARIABLE_Info_23_23 = STATE_VARIABLE_Info_23_58;
  }
  else
  {
    MR_Word Succeeded2_57;
    MR_Word Var_61;
    MR_Word Var_63;

    Var_61 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), Modules1_56);
    Var_63 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_55_95_95_91_50_93_95_48_12_p_0(KeepGoing_54, Var_61, (MR_Integer) 1, &Succeeded2_57, Var_63, &Modules1_17, STATE_VARIABLE_Info_23_58, &STATE_VARIABLE_Info_23_23);
    Succeeded1_16 = libs__maybe_succeeded__and_2_f_0(Succeeded1_55, Succeeded2_57);
  }
  succeeded = (Succeeded1_16 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_54 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_11 = (MR_Integer) 0;
    *Result_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_23_23;
  }
  else
  {
    MR_Word Succeeded2_18;
    MR_Word Var_26;
    MR_Word Var_28;

    Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), Modules1_17);
    Var_28 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_fi_12_p_0(KeepGoing_54, (MR_Word) (&make__dependencies_scalar_common_7[20]), Globals_9, Var_26, (MR_Integer) 1, &Succeeded2_18, Var_28, Result_12, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
    *Succeeded_11 = libs__maybe_succeeded__and_2_f_0(Succeeded1_16, Succeeded2_18);
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_55_95_95_91_50_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewDeps_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_Deps_49_49;
      MR_Word ModuleName_52;
      MR_Word Ancestors_53;

      make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_9, MI_31, &ModuleName_52);
      Ancestors_53 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_52);
      make__deps_set__module_names_to_index_set_4_p_0(Ancestors_53, &NewDeps_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
      succeeded = MR_TRUE;
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, (MR_Integer) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_Deps_0_7 = STATE_VARIABLE_Deps_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Deps_0_7 = next_value_of_STATE_VARIABLE_Deps_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_fi_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_37;
      MR_Word NewDeps_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_Deps_49_49;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box conv4_NewSucceeded_37;
      MR_Box conv3_NewDeps_38;
      MR_Box conv2_STATE_VARIABLE_Info_47_47;
      MR_Box conv1_STATE_VARIABLE_IO_48_48;

      func_0(((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (MI_31)), &conv4_NewSucceeded_37, &conv3_NewDeps_38, ((MR_Box) (STATE_VARIABLE_Info_0_9)), &conv2_STATE_VARIABLE_Info_47_47, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_48_48);
      NewSucceeded_37 = ((MR_Word) (conv4_NewSucceeded_37));
      NewDeps_38 = ((MR_Word) (conv3_NewDeps_38));
      STATE_VARIABLE_Info_47_47 = ((MR_Word) (conv2_STATE_VARIABLE_Info_47_47));
      mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_Deps_0_7 = STATE_VARIABLE_Deps_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Deps_0_7 = next_value_of_STATE_VARIABLE_Deps_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__intermod_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word AnyIntermod_15;

  libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_15);
  switch (AnyIntermod_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_11 = (MR_Integer) 1;
        *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_16;

        libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 499, &Transitive_16);
        switch (Transitive_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, Succeeded_11, Modules_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modules0_23;

              make__dependencies__find_transitive_module_dependencies_10_p_0(Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, Succeeded_11, &Modules0_23, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
              *Modules_12 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), Modules0_23, ((MR_Box) (ModuleIndex_10)));
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_uncached_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_Word ModuleName_15;
  MR_Word MaybeModuleDepInfo_16;
  MR_Word STATE_VARIABLE_Info_32_32;

  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_28, ModuleIndex_10, &ModuleName_15);
  make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_15, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32);
  if ((MaybeModuleDepInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_11 = (MR_Integer) 0;
    *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_32_32;
  }
  else
  {
    MR_Word ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_16, (MR_Integer) 0))));
    MR_Word IntDeps_18;
    MR_Word ImpDeps_19;
    MR_Word DepsInt_20;
    MR_Word DepsImp_21;
    MR_Word Modules0_22;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_Info_37_37;

    parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_17, &IntDeps_18);
    parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_17, &ImpDeps_19);
    Var_34 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_18);
    make__deps_set__module_names_to_index_set_4_p_0(Var_34, &DepsInt_20, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_35_35);
    Var_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDeps_19);
    make__deps_set__module_names_to_index_set_4_p_0(Var_36, &DepsImp_21, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_37_37);
    Modules0_22 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), DepsInt_20, DepsImp_21);
    if (((MR_tag((MR_Word) ModuleName_15)) == (MR_Integer) 1))
    {
      MR_Word ParentModule_23 = ((MR_Word) ((MR_hl_field(1, ModuleName_15, (MR_Integer) 0))));
      MR_Word ParentIndex_25;
      MR_Word ParentImports_26;
      MR_Word STATE_VARIABLE_Info_38_38;

      make__deps_set__module_name_to_index_4_p_0(ParentModule_23, &ParentIndex_25, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38);
      make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ParentIndex_25, Succeeded_11, &ParentImports_26, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_29);
      *Modules_12 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ParentImports_26, Modules0_22);
    }
    else
    {
      *Succeeded_11 = (MR_Integer) 1;
      *Modules_12 = Modules0_22;
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_37_37;
    }
  }
}

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word CachedNonIntermodDirectImports0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 10))));
  MR_Word Result0_16;
  MR_Box conv0_Result0_16;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), CachedNonIntermodDirectImports0_15, ((MR_Box) (ModuleIndex_10)), &conv0_Result0_16);
  if (succeeded)
  {
    Result0_16 = ((MR_Word) (conv0_Result0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Succeeded_11 = ((MR_Unsigned) ((MR_hl_field(0, Result0_16, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_12 = ((MR_Word) ((MR_hl_field(0, Result0_16, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
  else
  {
    MR_Word Result_17;
    MR_Word CachedNonIntermodDirectImports1_18;
    MR_Word CachedNonIntermodDirectImports_19;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Integer Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Unsigned packed_word_3;

    make__dependencies__non_intermod_direct_imports_uncached_8_p_0(Globals_9, ModuleIndex_10, Succeeded_11, Modules_12, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_24);
    {
      Result_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_17, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_17, 1) = ((MR_Box) (*Modules_12));
    }
    CachedNonIntermodDirectImports1_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 10))));
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_10)), ((MR_Box) (Result_17)), CachedNonIntermodDirectImports1_18, &CachedNonIntermodDirectImports_19);
    Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 0))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 1))));
    Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 2))));
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 3))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 4))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 5))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 6))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 7))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 8))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 9))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 11))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 12))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 13))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 14))));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 15)));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 16))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 17))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 18))));
    Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 19))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 20))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 21))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_75));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_76));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_77));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_78));
      MR_hl_field(0, base, 10) = ((MR_Box) (CachedNonIntermodDirectImports_19));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_80));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_81));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_82));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_83));
      MR_hl_field(0, base, 15) = (MR_Box) (packed_word_3);
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_90));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_91));
    }
  }
}

static void MR_CALL 
make__dependencies__files_of_2_10_p_0(
  MR_Word FindFiles_11,
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * DepIndices_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 15))) & (MR_Integer) 1);
  MR_Word Succeeded1_20;
  MR_Word ModuleIndices_21;
  MR_Word STATE_VARIABLE_Info_28_28;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_12, (MR_Integer) 1))));
  MR_Box conv4_Succeeded1_20;
  MR_Box conv3_ModuleIndices_21;
  MR_Box conv2_STATE_VARIABLE_Info_28_28;
  MR_Box conv1_STATE_VARIABLE_IO_29_29;

  func_0(((MR_Box) (FindDeps_12)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Succeeded1_20, &conv3_ModuleIndices_21, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv2_STATE_VARIABLE_Info_28_28, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29_29);
  Succeeded1_20 = ((MR_Word) (conv4_Succeeded1_20));
  ModuleIndices_21 = ((MR_Word) (conv3_ModuleIndices_21));
  STATE_VARIABLE_Info_28_28 = ((MR_Word) (conv2_STATE_VARIABLE_Info_28_28));
  succeeded = (Succeeded1_20 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_15 = (MR_Integer) 0;
    *DepIndices_16 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_28_28;
  }
  else
  {
    MR_Word Succeeded2_22;
    MR_Word FileNames_23;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Info_33_33;
    MR_Word Var_35;

    Var_30 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), ModuleIndices_21);
    Var_32 = mercury__set__init_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_plain_union_mi_12_p_0(KeepGoing_19, FindFiles_11, Globals_13, Var_30, (MR_Integer) 1, &Succeeded2_22, Var_32, &FileNames_23, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_33_33);
    *Succeeded_15 = libs__maybe_succeeded__and_2_f_0(Succeeded1_20, Succeeded2_22);
    Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), FileNames_23);
    make__deps_set__dependency_files_to_index_set_4_p_0(Var_35, DepIndices_16, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_25);
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_plain_union_mi_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_37;
      MR_Word NewDeps_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_Deps_49_49;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box conv4_NewSucceeded_37;
      MR_Box conv3_NewDeps_38;
      MR_Box conv2_STATE_VARIABLE_Info_47_47;
      MR_Box conv1_STATE_VARIABLE_IO_48_48;

      func_0(((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (MI_31)), &conv4_NewSucceeded_37, &conv3_NewDeps_38, ((MR_Box) (STATE_VARIABLE_Info_0_9)), &conv2_STATE_VARIABLE_Info_47_47, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_48_48);
      NewSucceeded_37 = ((MR_Word) (conv4_NewSucceeded_37));
      NewDeps_38 = ((MR_Word) (conv3_NewDeps_38));
      STATE_VARIABLE_Info_47_47 = ((MR_Word) (conv2_STATE_VARIABLE_Info_47_47));
      mercury__set__union_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_Deps_0_7 = STATE_VARIABLE_Deps_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Deps_0_7 = next_value_of_STATE_VARIABLE_Deps_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__target_of_module_to_dep_file_index_5_p_0(
  MR_Word TargetType_6,
  MR_Word ModuleIndex_7,
  MR_Word * TargetFileIndex_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word TargetFile_10;

  {
    TargetFile_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TargetFile_10, 0) = ((MR_Box) (ModuleIndex_7));
    MR_hl_field(0, TargetFile_10, 1) = ((MR_Box) (TargetType_6));
  }
  make__deps_set__dependency_file_to_index_4_p_0(TargetFile_10, TargetFileIndex_8, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
}

static void MR_CALL 
make__dependencies__of_3_6_p_0(
  MR_Word FileType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_List_0_13,
  MR_Word * STATE_VARIABLE_List_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word TargetFile_11;
  MR_Word TargetFileIndex_12;

  {
    TargetFile_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TargetFile_11, 0) = ((MR_Box) (ModuleIndex_8));
    MR_hl_field(0, TargetFile_11, 1) = ((MR_Box) (FileType_7));
  }
  make__deps_set__dependency_file_to_index_4_p_0(TargetFile_11, &TargetFileIndex_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_List_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (TargetFileIndex_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_List_0_13));
  }
}

static void MR_CALL 
make__dependencies__of_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_List_14;
  MR_Word conv5_STATE_VARIABLE_Info_16;

  make__dependencies__of_3_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_List_14, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_List_14));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__dependencies__of_2_10_p_0(
  MR_Word FileType_11,
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * TargetFiles_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word ModuleIndexes_19;
  MR_Word TargetFileIndexes_20;
  MR_Word STATE_VARIABLE_Info_25_25;
  MR_Word Var_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_12, (MR_Integer) 1))));
  MR_Box conv4_Succeeded_15;
  MR_Box conv3_ModuleIndexes_19;
  MR_Box conv2_STATE_VARIABLE_Info_25_25;
  MR_Box conv1_STATE_VARIABLE_IO_24;
  MR_Box conv8_TargetFileIndexes_20;
  MR_Box conv7_STATE_VARIABLE_Info_22;

  func_0(((MR_Box) (FindDeps_12)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Succeeded_15, &conv3_ModuleIndexes_19, ((MR_Box) (STATE_VARIABLE_Info_0_21)), &conv2_STATE_VARIABLE_Info_25_25, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24);
  *Succeeded_15 = ((MR_Word) (conv4_Succeeded_15));
  ModuleIndexes_19 = ((MR_Word) (conv3_ModuleIndexes_19));
  STATE_VARIABLE_Info_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_Info_25_25));
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&make__dependencies_scalar_common_15[0]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (make__dependencies__of_2_10_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (FileType_11));
  }
  mercury__sparse_bitset__foldl2_6_p_0((MR_Word) (&make__dependencies_scalar_common_1[6]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_1[5]), Var_27, ModuleIndexes_19, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_TargetFileIndexes_20, ((MR_Box) (STATE_VARIABLE_Info_25_25)), &conv7_STATE_VARIABLE_Info_22);
  TargetFileIndexes_20 = ((MR_Word) (conv8_TargetFileIndexes_20));
  *STATE_VARIABLE_Info_22 = ((MR_Word) (conv7_STATE_VARIABLE_Info_22));
  mercury__sparse_bitset__list_to_set_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[7]), TargetFileIndexes_20, TargetFiles_16);
}

MR_Word MR_CALL 
make__dependencies__init_cached_computed_module_deps_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_key_0), (MR_Word) (&make__dependencies_scalar_common_1[3]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__dependencies__init_cached_transitive_dependencies_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__dependencies_scalar_common_1[2]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__dependencies__init_cached_transitive_foreign_imports_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__dependencies__init_cached_indirect_imports_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__dependencies__init_cached_direct_imports_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[2]));
  return HeadVar__1_1;
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__dependencies__debug_newer_dependencies_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))));
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))));
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
}

void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0(
  MR_Word TypeInfo_for_File_35,
  MR_Word Globals_11,
  MR_String TargetFileName_12,
  MR_Word MaybeTimestamp_13,
  MR_Word BuildDepsSucceeded_14,
  MR_Word DepFiles_15,
  MR_Word WriteDepFile_16,
  MR_Word DepTimestamps_17,
  MR_Word * DepsResult_18)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) MaybeTimestamp_13)) == (MR_Integer) 1))
  {
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;

    *DepsResult_18 = (MR_Integer) 1;
    {
      Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_30, 1) = ((MR_Box) (TargetFileName_12));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[0]));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps_10_p_0_1));
      MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_26, 3) = ((MR_Box) ((MR_String) "%s does not exist.\n"));
      MR_hl_field(0, Var_26, 4) = ((MR_Box) (Var_29));
    }
    make__util__debug_make_msg_4_p_0(Globals_11, Var_26);
  }
  else
  {
    MR_Word Timestamp_21 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_13, (MR_Integer) 0))));

    succeeded = make__dependencies__error_in_timestamps_1_p_0(DepTimestamps_17);
    if (succeeded)
    {
      MR_Word WriteMissingDeps_22;

      *DepsResult_18 = (MR_Integer) 2;
      {
        WriteMissingDeps_22 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WriteMissingDeps_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[5]));
        MR_hl_field(0, WriteMissingDeps_22, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps_10_p_0_2));
        MR_hl_field(0, WriteMissingDeps_22, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, WriteMissingDeps_22, 3) = ((MR_Box) (TypeInfo_for_File_35));
        MR_hl_field(0, WriteMissingDeps_22, 4) = ((MR_Box) (TargetFileName_12));
        MR_hl_field(0, WriteMissingDeps_22, 5) = ((MR_Box) (BuildDepsSucceeded_14));
        MR_hl_field(0, WriteMissingDeps_22, 6) = ((MR_Box) (DepFiles_15));
        MR_hl_field(0, WriteMissingDeps_22, 7) = ((MR_Box) (WriteDepFile_16));
        MR_hl_field(0, WriteMissingDeps_22, 8) = ((MR_Box) (DepTimestamps_17));
      }
      switch (BuildDepsSucceeded_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__util__debug_make_msg_4_p_0(Globals_11, WriteMissingDeps_22);
          break;
        case (MR_Integer) 1:
          make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0(TypeInfo_for_File_35, TargetFileName_12, BuildDepsSucceeded_14, DepFiles_15, WriteDepFile_16, DepTimestamps_17);
          break;
      }
    }
    else
    {
      MR_Word Rebuild_23;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 662, &Rebuild_23);
      switch (Rebuild_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            succeeded = make__dependencies__newer_timestamp_2_p_0(DepTimestamps_17, Timestamp_21);
            if (succeeded)
            {
              MR_Word Var_36;

              {
                Var_36 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_36, 0) = ((MR_Box) (&make__dependencies_scalar_common_3[3]));
                MR_hl_field(0, Var_36, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps_10_p_0_3));
                MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_36, 3) = ((MR_Box) (TypeInfo_for_File_35));
                MR_hl_field(0, Var_36, 4) = ((MR_Box) (TargetFileName_12));
                MR_hl_field(0, Var_36, 5) = ((MR_Box) (MaybeTimestamp_13));
                MR_hl_field(0, Var_36, 6) = ((MR_Box) (DepFiles_15));
                MR_hl_field(0, Var_36, 7) = ((MR_Box) (DepTimestamps_17));
              }
              make__util__debug_make_msg_4_p_0(Globals_11, Var_36);
              *DepsResult_18 = (MR_Integer) 1;
            }
            else
              *DepsResult_18 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          *DepsResult_18 = (MR_Integer) 1;
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1516__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2);
  return succeeded;
}

static void MR_CALL 
make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0(
  MR_Word TypeInfo_for_File_38,
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_41_41;
  MR_Word DepTimestampAL_14;
  MR_Word ErrorDeps0_18;
  MR_Word ErrorDeps_19;
  MR_Word Var_22;

  mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_File_38, (MR_Word) (&make__dependencies_scalar_common_2[1]), DepFiles_10, DepTimestamps_12, &DepTimestampAL_14);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[4]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (TypeInfo_for_File_38));
  }
  {
    TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_41_41, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_for_File_38));
    MR_hl_field(0, TypeInfo_41_41, 2) = ((MR_Box) (&make__dependencies_scalar_common_2[1]));
  }
  mercury__list__filter_map_3_p_0(TypeInfo_41_41, TypeInfo_for_File_38, (MR_Word) (Var_22), (MR_Word) (DepTimestampAL_14), &ErrorDeps0_18);
  mercury__list__sort_2_p_0(TypeInfo_for_File_38, ErrorDeps0_18, &ErrorDeps_19);
  mercury__io__write_string_3_p_0((MR_String) "** dependencies for \140");
  mercury__io__write_string_3_p_0(TargetFileName_8);
  mercury__io__write_string_3_p_0((MR_String) "\' do not exist: ");
  mercury__io__write_list_5_p_0(TypeInfo_for_File_38, ErrorDeps_19, (MR_String) ", ", WriteDepFile_11);
  mercury__io__nl_2_p_0();
  switch (BuildDepsSucceeded_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_3_p_0((MR_String) "** This indicates a bug in \140mmc --make\'.\n");
      break;
  }
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__dependencies__check_dependencies_debug_unbuilt_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__dependencies__debug_newer_dependencies_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))));
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__dependencies__check_dependencies_timestamps_write_missing_deps__ho19_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))));
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__util__make_write_dependency_file_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__3_3;
  MR_Word conv4_HeadVar__5_5;

  make__util__get_dependency_timestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__5_5));
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
}

static MR_bool MR_CALL 
make__dependencies__check_dependencies_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__dependencies__IntroducedFrom__pred__check_dependencies__1471__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Status_10;
  MR_Word conv0_STATE_VARIABLE_Info_32;

  make__dependencies__dependency_status_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Status_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_32);
  *wrapper_arg_2 = ((MR_Box) (conv1_Status_10));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_32));
}

void MR_CALL 
make__dependencies__check_dependencies_10_p_0(
  MR_Word Globals_11,
  MR_String TargetFileName_12,
  MR_Word MaybeTimestamp_13,
  MR_Word BuildDepsSucceeded_14,
  MR_Word DepFiles_15,
  MR_Word * DepsResult_16,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word DepStatusList_19;
  MR_Word DepStatusAL_20;
  MR_Word UnbuiltDependencies_23;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Box conv3_STATE_VARIABLE_Info_32_32;
  MR_Box conv2_STATE_VARIABLE_IO_33_33;

  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&make__dependencies_scalar_common_3[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Globals_11));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, DepFiles_15, &DepStatusList_19, ((MR_Box) (STATE_VARIABLE_Info_0_27)), &conv3_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_33_33);
  STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv3_STATE_VARIABLE_Info_32_32));
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepFiles_15, DepStatusList_19, &DepStatusAL_20);
  mercury__list__filter_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[0]), (MR_Word) (&make__dependencies_scalar_common_2[32]), DepStatusAL_20, &UnbuiltDependencies_23);
  if ((UnbuiltDependencies_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word DepTimestamps_26;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Box conv7_STATE_VARIABLE_Info_28;
    MR_Box conv6_STATE_VARIABLE_IO_46_46;

    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (TargetFileName_12));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[0]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_3));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) ((MR_String) "%s: finished dependencies\n"));
      MR_hl_field(0, Var_38, 4) = ((MR_Box) (Var_41));
    }
    make__util__debug_make_msg_4_p_0(Globals_11, Var_38);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&make__dependencies_scalar_common_3[2]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_4));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Globals_11));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_44, DepFiles_15, &DepTimestamps_26, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv7_STATE_VARIABLE_Info_28, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_46_46);
    *STATE_VARIABLE_Info_28 = ((MR_Word) (conv7_STATE_VARIABLE_Info_28));
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[1]));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_5));
      MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_47, 3) = ((MR_Box) (Globals_11));
    }
    if (((MR_tag((MR_Word) MaybeTimestamp_13)) == (MR_Integer) 1))
    {
      MR_Word Var_77;

      *DepsResult_16 = (MR_Integer) 1;
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_77, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[0]));
        MR_hl_field(0, Var_77, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_6));
        MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_77, 3) = ((MR_Box) ((MR_String) "%s does not exist.\n"));
        MR_hl_field(0, Var_77, 4) = ((MR_Box) (Var_41));
      }
      make__util__debug_make_msg_4_p_0(Globals_11, Var_77);
    }
    else
    {
      MR_Word Timestamp_74 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_13, (MR_Integer) 0))));

      succeeded = make__dependencies__error_in_timestamps_1_p_0(DepTimestamps_26);
      if (succeeded)
      {
        MR_Word WriteMissingDeps_75;

        *DepsResult_16 = (MR_Integer) 2;
        {
          WriteMissingDeps_75 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, WriteMissingDeps_75, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[4]));
          MR_hl_field(0, WriteMissingDeps_75, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_7));
          MR_hl_field(0, WriteMissingDeps_75, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, WriteMissingDeps_75, 3) = ((MR_Box) (Globals_11));
          MR_hl_field(0, WriteMissingDeps_75, 4) = ((MR_Box) (TargetFileName_12));
          MR_hl_field(0, WriteMissingDeps_75, 5) = ((MR_Box) (BuildDepsSucceeded_14));
          MR_hl_field(0, WriteMissingDeps_75, 6) = ((MR_Box) (DepFiles_15));
          MR_hl_field(0, WriteMissingDeps_75, 7) = ((MR_Box) (Var_47));
          MR_hl_field(0, WriteMissingDeps_75, 8) = ((MR_Box) (DepTimestamps_26));
        }
        switch (BuildDepsSucceeded_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__util__debug_make_msg_4_p_0(Globals_11, WriteMissingDeps_75);
            break;
          case (MR_Integer) 1:
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0(TargetFileName_12, BuildDepsSucceeded_14, DepFiles_15, Var_47, DepTimestamps_26);
            break;
        }
      }
      else
      {
        MR_Word Rebuild_76;

        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 662, &Rebuild_76);
        switch (Rebuild_76) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = make__dependencies__newer_timestamp_2_p_0(DepTimestamps_26, Timestamp_74);
              if (succeeded)
              {
                MR_Word Var_84;

                {
                  Var_84 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_84, 0) = ((MR_Box) (&make__dependencies_scalar_common_3[3]));
                  MR_hl_field(0, Var_84, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_8));
                  MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(0, Var_84, 3) = ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
                  MR_hl_field(0, Var_84, 4) = ((MR_Box) (TargetFileName_12));
                  MR_hl_field(0, Var_84, 5) = ((MR_Box) (MaybeTimestamp_13));
                  MR_hl_field(0, Var_84, 6) = ((MR_Box) (DepFiles_15));
                  MR_hl_field(0, Var_84, 7) = ((MR_Box) (DepTimestamps_26));
                }
                make__util__debug_make_msg_4_p_0(Globals_11, Var_84);
                *DepsResult_16 = (MR_Integer) 1;
              }
              else
                *DepsResult_16 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            *DepsResult_16 = (MR_Integer) 1;
            break;
        }
      }
    }
  }
  else
  {
    MR_Word Var_36;

    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[1]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_9));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (Globals_11));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (TargetFileName_12));
      MR_hl_field(0, Var_36, 5) = ((MR_Box) (UnbuiltDependencies_23));
    }
    make__util__debug_make_msg_4_p_0(Globals_11, Var_36);
    *DepsResult_16 = (MR_Integer) 2;
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_32_32;
  }
}

static MR_bool MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1516__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2);
  return succeeded;
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0(
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12)
{
  MR_bool succeeded;
  MR_Word DepTimestampAL_14;
  MR_Word ErrorDeps0_18;
  MR_Word ErrorDeps_19;

  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies_scalar_common_2[1]), DepFiles_10, DepTimestamps_12, &DepTimestampAL_14);
  mercury__list__filter_map_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[31]), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies_scalar_common_13[1]), DepTimestampAL_14, &ErrorDeps0_18);
  mercury__list__sort_2_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), ErrorDeps0_18, &ErrorDeps_19);
  mercury__io__write_string_3_p_0((MR_String) "** dependencies for \140");
  mercury__io__write_string_3_p_0(TargetFileName_8);
  mercury__io__write_string_3_p_0((MR_String) "\' do not exist: ");
  mercury__io__write_list_5_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), ErrorDeps_19, (MR_String) ", ", WriteDepFile_11);
  mercury__io__nl_2_p_0();
  switch (BuildDepsSucceeded_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_3_p_0((MR_String) "** This indicates a bug in \140mmc --make\'.\n");
      break;
  }
}

static MR_bool MR_CALL 
make__dependencies__newer_timestamp_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Timestamp_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word H_3;
    MR_Word T_4;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      H_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      T_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word DepTimestamp_6;
        MR_Word Var_7;
        MR_Word Var_9;

        succeeded = ((MR_tag((MR_Word) H_3)) == (MR_Integer) 0);
        if (succeeded)
        {
          DepTimestamp_6 = ((MR_Word) ((MR_hl_field(0, H_3, (MR_Integer) 0))));
          Var_7 = (MR_Integer) 2;
          libs__timestamp____Compare____timestamp_0_0(&Var_9, DepTimestamp_6, Timestamp_5);
          succeeded = (Var_7 == Var_9);
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = T_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
make__dependencies__error_in_timestamps_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word H_2;
    MR_Word T_3;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      H_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      T_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) H_2)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = T_3;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
make__dependencies__dependency_status_7_p_0(
  MR_Word Globals_8,
  MR_Word Dep_9,
  MR_Word * Status_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Dep_9)) == (MR_Integer) 1))
  {
    MR_Word DepStatusMap0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 8))));
    MR_Word StatusPrime_15;
    MR_Box conv0_StatusPrime_15;

    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepStatusMap0_14, ((MR_Box) (Dep_9)), &conv0_StatusPrime_15);
    if (succeeded)
    {
      StatusPrime_15 = ((MR_Word) (conv0_StatusPrime_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Status_10 = StatusPrime_15;
      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
    }
    else
    {
      MR_Word MaybeTimestamp_16;
      MR_Word DepStatusMap_19;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Integer Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Unsigned packed_word_1;

      make__util__get_dependency_timestamp_7_p_0(Globals_8, Dep_9, &MaybeTimestamp_16, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_35_35);
      if (((MR_tag((MR_Word) MaybeTimestamp_16)) == (MR_Integer) 1))
      {
        MR_String Error_18 = ((MR_String) ((MR_hl_field(1, MaybeTimestamp_16, (MR_Integer) 0))));

        *Status_10 = (MR_Integer) 3;
        mercury__io__write_string_3_p_0((MR_String) "** Error: ");
        mercury__io__write_string_3_p_0(Error_18);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      else
        *Status_10 = (MR_Integer) 2;
      mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_9)), ((MR_Box) (*Status_10)), DepStatusMap0_14, &DepStatusMap_19);
      Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 0))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 1))));
      Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 2))));
      Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 3))));
      Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 4))));
      Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 5))));
      Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 6))));
      Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 7))));
      Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 9))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 10))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 11))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 12))));
      Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 13))));
      Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 14))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 15)));
      Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 16))));
      Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 17))));
      Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 18))));
      Var_119 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 19))));
      Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 20))));
      Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 21))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_32 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_99));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_100));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_101));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_102));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_103));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_104));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_105));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_106));
        MR_hl_field(0, base, 8) = ((MR_Box) (DepStatusMap_19));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_108));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 11) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 12) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 13) = ((MR_Box) (Var_112));
        MR_hl_field(0, base, 14) = ((MR_Box) (Var_113));
        MR_hl_field(0, base, 15) = (MR_Box) (packed_word_1);
        MR_hl_field(0, base, 16) = ((MR_Box) (Var_116));
        MR_hl_field(0, base, 17) = ((MR_Box) (Var_117));
        MR_hl_field(0, base, 18) = ((MR_Box) (Var_118));
        MR_hl_field(0, base, 19) = ((MR_Box) (Var_119));
        MR_hl_field(0, base, 20) = ((MR_Box) (Var_120));
        MR_hl_field(0, base, 21) = ((MR_Box) (Var_121));
      }
    }
  }
  else
  {
    MR_Word Target_20 = ((MR_Word) ((MR_hl_field(0, Dep_9, (MR_Integer) 0))));
    MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(0, Target_20, (MR_Integer) 0))));
    MR_Word FileType_22 = ((MR_Word) ((MR_hl_field(0, Target_20, (MR_Integer) 1))));

    if ((FileType_22 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if ((FileType_22 == (MR_Word) ((MR_Unsigned) 32U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word Var_44;

      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (ModuleName_21));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (&make__dependencies_scalar_common_4[2]));
      }
      make__util__maybe_warn_up_to_date_target_6_p_0(Globals_8, Var_44, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
      *Status_10 = (MR_Integer) 2;
    }
    else
    {
      MR_Word StatusPrime_76;
      MR_Word DepStatusMap0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 8))));
      MR_Box conv1_StatusPrime_76;

      succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepStatusMap0_61, ((MR_Box) (Dep_9)), &conv1_StatusPrime_76);
      if (succeeded)
      {
        StatusPrime_76 = ((MR_Word) (conv1_StatusPrime_76));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        *Status_10 = StatusPrime_76;
        *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
      }
      else
      {
        MR_Word MaybeModuleDepInfo_24;
        MR_Word DepStatusMap1_30;
        MR_Word STATE_VARIABLE_Info_47_47;
        MR_Word STATE_VARIABLE_Info_50_50;
        MR_Word DepStatusMap_74;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_183;
        MR_Word Var_184;
        MR_Word Var_185;
        MR_Integer Var_186;
        MR_Word Var_187;
        MR_Word Var_188;
        MR_Unsigned packed_word_4;

        make__module_dep_file__get_module_dependencies_7_p_0(Globals_8, ModuleName_21, &MaybeModuleDepInfo_24, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_47_47);
        if ((MaybeModuleDepInfo_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Status_10 = (MR_Integer) 3;
          STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_47_47;
        }
        else
        {
          MR_Word ModuleDepInfo_25 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_24, (MR_Integer) 0))));
          MR_String ModuleDir_26;
          MR_String Var_197;

          parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_25, &ModuleDir_26);
          Var_197 = mercury__dir__this_directory_0_f_0();
          succeeded = (strcmp(ModuleDir_26, Var_197) == 0);
          if (succeeded)
          {
            *Status_10 = (MR_Integer) 0;
            STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_47_47;
          }
          else
          {
            MR_Word MaybeTimestamp_64;

            make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 0, Target_20, &MaybeTimestamp_64, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_50_50);
            if (((MR_tag((MR_Word) MaybeTimestamp_64)) == (MR_Integer) 1))
            {
              MR_String TargetFileName_28;
              MR_String ErrorMsg_29;
              MR_String Error_62 = ((MR_String) ((MR_hl_field(1, MaybeTimestamp_64, (MR_Integer) 0))));
              MR_String Var_199;
              MR_String Var_201;
              MR_String Var_202;

              *Status_10 = (MR_Integer) 3;
              make__util__get_make_target_file_name_5_p_0(Globals_8, Target_20, &TargetFileName_28);
              Var_199 = mercury__string__f_43_43_2_f_0(Error_62, (MR_String) "\n");
              Var_201 = mercury__string__f_43_43_2_f_0((MR_String) "\' not found: ", Var_199);
              Var_202 = mercury__string__f_43_43_2_f_0(TargetFileName_28, Var_201);
              ErrorMsg_29 = mercury__string__f_43_43_2_f_0((MR_String) "** Error: file \140", Var_202);
              mercury__io__write_string_3_p_0(ErrorMsg_29);
            }
            else
              *Status_10 = (MR_Integer) 2;
          }
        }
        DepStatusMap1_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 8))));
        mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_9)), ((MR_Box) (*Status_10)), DepStatusMap1_30, &DepStatusMap_74);
        Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 0))));
        Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 1))));
        Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 2))));
        Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 3))));
        Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 4))));
        Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 5))));
        Var_172 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 6))));
        Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 7))));
        Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 9))));
        Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 10))));
        Var_177 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 11))));
        Var_178 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 12))));
        Var_179 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 13))));
        Var_180 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 14))));
        packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 15)));
        Var_183 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 16))));
        Var_184 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 17))));
        Var_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 18))));
        Var_186 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 19))));
        Var_187 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 20))));
        Var_188 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 21))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_32 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_166));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_167));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_168));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_169));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_170));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_171));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_172));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_173));
          MR_hl_field(0, base, 8) = ((MR_Box) (DepStatusMap_74));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_175));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_176));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_177));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_178));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_179));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_180));
          MR_hl_field(0, base, 15) = (MR_Box) (packed_word_4);
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_183));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_184));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_185));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_186));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_187));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_188));
        }
      }
    }
  }
}

static void MR_CALL 
make__dependencies__make_local_module_id_options_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Opts_6;

  make__dependencies__make_local_module_id_option_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Opts_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Opts_6));
}

void MR_CALL 
make__dependencies__make_local_module_id_options_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word * Succeeded_11,
  MR_Word * Options_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word LocalModules_15;
  MR_Word ModuleIndex_29;
  MR_Word Modules0_30;
  MR_Word STATE_VARIABLE_Info_21_31;
  MR_Box conv1_Options_12;

  make__deps_set__module_name_to_index_4_p_0(ModuleName_10, &ModuleIndex_29, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_21_31);
  make__dependencies__find_transitive_module_dependencies_10_p_0(Globals_9, (MR_Integer) 2, (MR_Integer) 0, ModuleIndex_29, Succeeded_11, &Modules0_30, STATE_VARIABLE_Info_21_31, STATE_VARIABLE_Info_17);
  make__deps_set__module_index_set_to_plain_set_3_p_0(*STATE_VARIABLE_Info_17, Modules0_30, &LocalModules_15);
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies_scalar_common_1[1]), (MR_Word) (&make__dependencies_scalar_common_2[30]), LocalModules_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Options_12);
  *Options_12 = ((MR_Word) (conv1_Options_12));
}

static MR_bool MR_CALL 
make__dependencies__remove_nested_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__dependencies__IntroducedFrom__pred__remove_nested_modules__1332__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__dependencies__remove_nested_modules_7_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_NestedModules_19;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  make__dependencies__collect_nested_modules_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NestedModules_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NestedModules_19));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

void MR_CALL 
make__dependencies__remove_nested_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word Modules0_9,
  MR_Word * Modules_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_bool succeeded;
  MR_Word NestedModules_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_22;
  MR_Box conv4_NestedModules_13;
  MR_Box conv3_STATE_VARIABLE_Info_15;
  MR_Box conv2_STATE_VARIABLE_IO_17;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[3]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (make__dependencies__remove_nested_modules_7_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Globals_8));
  }
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, Modules0_9, ((MR_Box) (Var_19)), &conv4_NestedModules_13, ((MR_Box) (STATE_VARIABLE_Info_0_14)), &conv3_STATE_VARIABLE_Info_15, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_17);
  NestedModules_13 = ((MR_Word) (conv4_NestedModules_13));
  *STATE_VARIABLE_Info_15 = ((MR_Word) (conv3_STATE_VARIABLE_Info_15));
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[16]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (make__dependencies__remove_nested_modules_7_p_0_2));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (NestedModules_13));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_22, Modules0_9, Modules_10);
}

void MR_CALL 
make__dependencies__find_reachable_local_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word ModuleIndex_15;
  MR_Word Modules0_16;
  MR_Word STATE_VARIABLE_Info_21_21;

  make__deps_set__module_name_to_index_4_p_0(ModuleName_10, &ModuleIndex_15, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_21_21);
  make__dependencies__find_transitive_module_dependencies_10_p_0(Globals_9, (MR_Integer) 2, (MR_Integer) 0, ModuleIndex_15, Succeeded_11, &Modules0_16, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_18);
  make__deps_set__module_index_set_to_plain_set_3_p_0(*STATE_VARIABLE_Info_18, Modules0_16, Modules_12);
}

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_10_p_0(
  MR_Word Globals_11,
  MR_Word DependenciesType_12,
  MR_Word IsModuleInCurDir_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded;
  MR_Word DepsRoot_19;
  MR_Word CachedTransDeps0_20;
  MR_Word Result0_21;
  MR_Box conv0_Result0_21;

  {
    DepsRoot_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DepsRoot_19, 0) = ((MR_Box) (ModuleIndex_14));
    MR_hl_field(0, DepsRoot_19, 1) = (MR_Box) (((((MR_Unsigned) (DependenciesType_12) << 1)) | (MR_Unsigned) (IsModuleInCurDir_13)));
  }
  CachedTransDeps0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 12))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), CachedTransDeps0_20, ((MR_Box) (DepsRoot_19)), &conv0_Result0_21);
  if (succeeded)
  {
    Result0_21 = ((MR_Word) (conv0_Result0_21));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, Result0_21, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_16 = ((MR_Word) ((MR_hl_field(0, Result0_21, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  }
  else
  {
    MR_Word KeepGoing_22 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 15))) & (MR_Integer) 1);
    MR_Word Result_23;
    MR_Word CachedTransDeps1_24;
    MR_Word CachedTransDeps_25;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Integer Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Unsigned packed_word_4;

    Var_30 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__find_transitive_module_dependencies_uncached_12_p_0(KeepGoing_22, DependenciesType_12, IsModuleInCurDir_13, Globals_11, ModuleIndex_14, Succeeded_15, Var_30, Modules_16, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_31_31);
    {
      Result_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_23, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_23, 1) = ((MR_Box) (*Modules_16));
    }
    CachedTransDeps1_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 12))));
    mercury__map__det_insert_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (DepsRoot_19)), ((MR_Box) (Result_23)), CachedTransDeps1_24, &CachedTransDeps_25);
    Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
    Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 1))));
    Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 2))));
    Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
    Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 4))));
    Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
    Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 6))));
    Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 7))));
    Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 8))));
    Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 9))));
    Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 10))));
    Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 11))));
    Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 13))));
    Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 14))));
    packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 15)));
    Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 16))));
    Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 17))));
    Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 18))));
    Var_118 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 19))));
    Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 20))));
    Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 21))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_27 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_98));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_99));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_100));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_101));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_102));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_103));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_104));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_105));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_106));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_107));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_108));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_109));
      MR_hl_field(0, base, 12) = ((MR_Box) (CachedTransDeps_25));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_111));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_112));
      MR_hl_field(0, base, 15) = (MR_Box) (packed_word_4);
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_115));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_116));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_117));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_118));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_119));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_120));
    }
  }
}

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_uncached_12_p_0(
  MR_Word KeepGoing_13,
  MR_Word DependenciesType_14,
  MR_Word IsModuleInCurDir_15,
  MR_Word Globals_16,
  MR_Word ModuleIndex_17,
  MR_Word * Succeeded_18,
  MR_Word Modules0_19,
  MR_Word * Modules_20,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_bool succeeded;

  succeeded = mercury__sparse_bitset__member_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[5]), ((MR_Box) (ModuleIndex_17)), Modules0_19);
  if (succeeded)
  {
    *Succeeded_18 = (MR_Integer) 1;
    *Modules_20 = Modules0_19;
    *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
  }
  else
  {
    MR_Word Result0_24;
    MR_Word DepsRoot_23;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 12))));
    MR_Box conv0_Result0_24;

    {
      DepsRoot_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DepsRoot_23, 0) = ((MR_Box) (ModuleIndex_17));
      MR_hl_field(0, DepsRoot_23, 1) = (MR_Box) (((((MR_Unsigned) (DependenciesType_14) << 1)) | (MR_Unsigned) (IsModuleInCurDir_15)));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), Var_34, ((MR_Box) (DepsRoot_23)), &conv0_Result0_24);
    if (succeeded)
    {
      Result0_24 = ((MR_Word) (conv0_Result0_24));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Modules1_25;

      *Succeeded_18 = ((MR_Unsigned) ((MR_hl_field(0, Result0_24, (MR_Integer) 0))) & (MR_Integer) 1);
      Modules1_25 = ((MR_Word) ((MR_hl_field(0, Result0_24, (MR_Integer) 1))));
      *Modules_20 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Modules0_19, Modules1_25);
      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
    }
    else
    {
      MR_Word ModuleName_26;
      MR_Word MaybeModuleDepInfo_27;
      MR_Word STATE_VARIABLE_Info_35_35;

      make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_30, ModuleIndex_17, &ModuleName_26);
      make__module_dep_file__get_module_dependencies_7_p_0(Globals_16, ModuleName_26, &MaybeModuleDepInfo_27, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_35_35);
      if ((MaybeModuleDepInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Succeeded_18 = (MR_Integer) 0;
        *Modules_20 = Modules0_19;
        *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_35_35;
      }
      else
      {
        MR_Word ModuleDepInfo_28 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_27, (MR_Integer) 0))));
        MR_String ModuleDir_29;

        parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_28, &ModuleDir_29);
        switch (IsModuleInCurDir_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            {
              MR_String Var_63;

              Var_63 = mercury__dir__this_directory_0_f_0();
              succeeded = (strcmp(ModuleDir_29, Var_63) == 0);
            }
            break;
        }
        if (succeeded)
          make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0(KeepGoing_13, DependenciesType_14, IsModuleInCurDir_15, Globals_16, ModuleIndex_17, ModuleName_26, ModuleDepInfo_28, Succeeded_18, Modules0_19, Modules_20, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_31);
        else
        {
          *Succeeded_18 = (MR_Integer) 1;
          *Modules_20 = Modules0_19;
          *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_35_35;
        }
      }
    }
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_find_trans_deps_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      *STATE_VARIABLE_Acc_9 = STATE_VARIABLE_Acc_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word T_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Ts_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word NewSucceeded_40;
      MR_Word STATE_VARIABLE_Acc_49_49;
      MR_Word STATE_VARIABLE_Info_50_50;

      succeeded = mercury__sparse_bitset__member_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[5]), ((MR_Box) (T_34)), STATE_VARIABLE_Acc_0_8);
      if (succeeded)
      {
        NewSucceeded_40 = (MR_Integer) 1;
        STATE_VARIABLE_Acc_49_49 = STATE_VARIABLE_Acc_0_8;
        STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_0_10;
      }
      else
      {
        MR_Word Result0_54;
        MR_Word DepsRoot_53;
        MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 12))));
        MR_Box conv0_Result0_54;

        {
          DepsRoot_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DepsRoot_53, 0) = ((MR_Box) (T_34));
          MR_hl_field(0, DepsRoot_53, 1) = (MR_Box) (((((MR_Unsigned) (HeadVar__2_2) << 1)) | (MR_Unsigned) (HeadVar__3_3)));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), Var_60, ((MR_Box) (DepsRoot_53)), &conv0_Result0_54);
        if (succeeded)
        {
          Result0_54 = ((MR_Word) (conv0_Result0_54));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Modules1_55;

          NewSucceeded_40 = ((MR_Unsigned) ((MR_hl_field(0, Result0_54, (MR_Integer) 0))) & (MR_Integer) 1);
          Modules1_55 = ((MR_Word) ((MR_hl_field(0, Result0_54, (MR_Integer) 1))));
          STATE_VARIABLE_Acc_49_49 = mercury__sparse_bitset__union_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), STATE_VARIABLE_Acc_0_8, Modules1_55);
          STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_0_10;
        }
        else
        {
          MR_Word ModuleName_56;
          MR_Word MaybeModuleDepInfo_57;
          MR_Word STATE_VARIABLE_Info_35_61;

          make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_10, T_34, &ModuleName_56);
          make__module_dep_file__get_module_dependencies_7_p_0(HeadVar__4_4, ModuleName_56, &MaybeModuleDepInfo_57, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_35_61);
          if ((MaybeModuleDepInfo_57 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            NewSucceeded_40 = (MR_Integer) 0;
            STATE_VARIABLE_Acc_49_49 = STATE_VARIABLE_Acc_0_8;
            STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_35_61;
          }
          else
          {
            MR_Word ModuleDepInfo_58 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_57, (MR_Integer) 0))));
            MR_String ModuleDir_59;

            parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_58, &ModuleDir_59);
            switch (HeadVar__3_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                {
                  MR_String Var_89;

                  Var_89 = mercury__dir__this_directory_0_f_0();
                  succeeded = (strcmp(ModuleDir_59, Var_89) == 0);
                }
                break;
            }
            if (succeeded)
              make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, T_34, ModuleName_56, ModuleDepInfo_58, &NewSucceeded_40, STATE_VARIABLE_Acc_0_8, &STATE_VARIABLE_Acc_49_49, STATE_VARIABLE_Info_35_61, &STATE_VARIABLE_Info_50_50);
            else
            {
              NewSucceeded_40 = (MR_Integer) 1;
              STATE_VARIABLE_Acc_49_49 = STATE_VARIABLE_Acc_0_8;
              STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_35_61;
            }
          }
        }
      }
      succeeded = (NewSucceeded_40 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_52_52;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6;
        MR_Word next_value_of_STATE_VARIABLE_Acc_0_8;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

        STATE_VARIABLE_Succeeded_52_52 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_6, NewSucceeded_40);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = Ts_35;
        next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_52_52;
        next_value_of_STATE_VARIABLE_Acc_0_8 = STATE_VARIABLE_Acc_49_49;
        next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_50_50;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
        STATE_VARIABLE_Acc_0_8 = next_value_of_STATE_VARIABLE_Acc_0_8;
        STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_7 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_50_50;
        *STATE_VARIABLE_Acc_9 = STATE_VARIABLE_Acc_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_63;

  make__dependencies__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__1300__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_63);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_63));
}

static void MR_CALL 
make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_55;

  make__dependencies__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__1292__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_55);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_55));
}

static MR_bool MR_CALL 
make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__dependencies__IntroducedFrom__pred__do_find_transitive_module_dependencies_uncached__1277__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0(
  MR_Word KeepGoing_15,
  MR_Word DependenciesType_16,
  MR_Word IsModuleInCurDir_17,
  MR_Word Globals_18,
  MR_Word ModuleIndex_19,
  MR_Word ModuleName_20,
  MR_Word ModuleDepInfo_21,
  MR_Word * Succeeded_22,
  MR_Word Modules0_23,
  MR_Word * Modules_24,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  MR_bool succeeded;
  MR_Word FIMSpecs_27;
  MR_Word MDI_ModuleName_28;
  MR_Word Ancestors_29;
  MR_Word Children_30;
  MR_Word IntDeps_31;
  MR_Word ImpDeps_32;
  MR_Word ImportsToCheck_33;
  MR_Word IncludesToCheck_34;
  MR_Word ImportsToCheckSet_39;
  MR_Word IncludesToCheckSet_40;
  MR_Word Modules1_41;
  MR_Word OldImportingModule_42;
  MR_Word SucceededImports_43;
  MR_Word Modules2_44;
  MR_Word SucceededIncludes_45;
  MR_Word Var_50;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_Info_70_70;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_Info_72_72;
  MR_Word STATE_VARIABLE_Info_73_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_Info_78_78;
  MR_Word STATE_VARIABLE_Info_80_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word STATE_VARIABLE_Info_85_85;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Integer Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Unsigned packed_word_0;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_157;
  MR_Word Var_159;
  MR_Integer Var_160;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Unsigned packed_word_1;
  MR_Word Var_163;
  MR_Word Var_164;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word Var_167;
  MR_Word Var_168;
  MR_Word Var_169;
  MR_Word Var_170;
  MR_Word Var_171;
  MR_Word Var_172;
  MR_Word Var_173;
  MR_Word Var_174;
  MR_Word Var_175;
  MR_Word Var_176;
  MR_Word Var_177;
  MR_Word Var_180;
  MR_Word Var_182;
  MR_Integer Var_183;
  MR_Word Var_184;
  MR_Word Var_185;
  MR_Unsigned packed_word_2;

  parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(ModuleDepInfo_21, &FIMSpecs_27);
  parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ModuleDepInfo_21, &MDI_ModuleName_28);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[14]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__dependencies__do_find_transitive_module_dependencies_uncached_14_p_0_1));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (ModuleName_20));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) (MDI_ModuleName_28));
  }
  mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140make.dependencies.do_find_transitive_module_dependencies_uncached\'/14", (MR_String) "ModuleName != MDI_ModuleName");
  Ancestors_29 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_20);
  parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_21, &Children_30);
  parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_21, &IntDeps_31);
  parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_21, &ImpDeps_32);
  switch (DependenciesType_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word ForeignDeps_37;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;

        mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies_scalar_common_2[28]), FIMSpecs_27, &ForeignDeps_37);
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (ForeignDeps_37));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (ImpDeps_32));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (IntDeps_31));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Ancestors_29));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
        }
        ImportsToCheck_33 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_56);
        IncludesToCheck_34 = Children_30;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word ForeignDeps_94;

        mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies_scalar_common_2[29]), FIMSpecs_27, &ForeignDeps_94);
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (ForeignDeps_94));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (ImpDeps_32));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (IntDeps_31));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (Ancestors_29));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
        }
        ImportsToCheck_33 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_64);
        IncludesToCheck_34 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      }
      break;
    case (MR_Integer) 0:
      {
        ImportsToCheck_33 = IntDeps_31;
        IncludesToCheck_34 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      }
      break;
  }
  Var_69 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportsToCheck_33);
  make__deps_set__module_names_to_index_set_4_p_0(Var_69, &ImportsToCheckSet_39, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_70_70);
  Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IncludesToCheck_34);
  make__deps_set__module_names_to_index_set_4_p_0(Var_71, &IncludesToCheckSet_40, STATE_VARIABLE_Info_70_70, &STATE_VARIABLE_Info_72_72);
  Modules1_41 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), Modules0_23, ((MR_Box) (ModuleIndex_19)));
  Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 0))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 1))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 2))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 3))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 4))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 5))));
  Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 6))));
  Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 7))));
  Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 8))));
  Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 9))));
  Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 10))));
  Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 11))));
  Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 12))));
  Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 13))));
  Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 14))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 15)));
  Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 16))));
  OldImportingModule_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 17))));
  Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 18))));
  Var_114 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 19))));
  Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 20))));
  Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_72_72, (MR_Integer) 21))));
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (ModuleName_20));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
  }
  {
    STATE_VARIABLE_Info_73_73 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 0) = ((MR_Box) (Var_95));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 1) = ((MR_Box) (Var_96));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 2) = ((MR_Box) (Var_97));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 3) = ((MR_Box) (Var_98));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 4) = ((MR_Box) (Var_99));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 5) = ((MR_Box) (Var_100));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 6) = ((MR_Box) (Var_101));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 7) = ((MR_Box) (Var_102));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 8) = ((MR_Box) (Var_103));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 9) = ((MR_Box) (Var_104));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 10) = ((MR_Box) (Var_105));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 11) = ((MR_Box) (Var_106));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 12) = ((MR_Box) (Var_107));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 13) = ((MR_Box) (Var_108));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 14) = ((MR_Box) (Var_109));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 15) = (MR_Box) (packed_word_0);
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 16) = ((MR_Box) (Var_112));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 17) = ((MR_Box) (Var_74));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 18) = ((MR_Box) (Var_113));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 19) = ((MR_Box) (Var_114));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 20) = ((MR_Box) (Var_115));
    MR_hl_field(0, STATE_VARIABLE_Info_73_73, 21) = ((MR_Box) (Var_116));
  }
  Var_76 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), ImportsToCheckSet_39);
  make__dependencies__deps_set_foldl3_find_trans_deps_13_p_0(KeepGoing_15, DependenciesType_16, IsModuleInCurDir_17, Globals_18, Var_76, (MR_Integer) 1, &SucceededImports_43, Modules1_41, &Modules2_44, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_78_78);
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (ModuleName_20));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
  }
  Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 0))));
  Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 1))));
  Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 2))));
  Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 3))));
  Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 4))));
  Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 5))));
  Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 6))));
  Var_147 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 7))));
  Var_148 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 8))));
  Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 9))));
  Var_150 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 10))));
  Var_151 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 11))));
  Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 12))));
  Var_153 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 13))));
  Var_154 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 14))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 15)));
  Var_157 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 16))));
  Var_159 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 18))));
  Var_160 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 19))));
  Var_161 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 20))));
  Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 21))));
  {
    STATE_VARIABLE_Info_80_80 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 0) = ((MR_Box) (Var_140));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 1) = ((MR_Box) (Var_141));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 2) = ((MR_Box) (Var_142));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 3) = ((MR_Box) (Var_143));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 4) = ((MR_Box) (Var_144));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 5) = ((MR_Box) (Var_145));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 6) = ((MR_Box) (Var_146));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 7) = ((MR_Box) (Var_147));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 8) = ((MR_Box) (Var_148));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 9) = ((MR_Box) (Var_149));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 10) = ((MR_Box) (Var_150));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 11) = ((MR_Box) (Var_151));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 12) = ((MR_Box) (Var_152));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 13) = ((MR_Box) (Var_153));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 14) = ((MR_Box) (Var_154));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 15) = (MR_Box) (packed_word_1);
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 16) = ((MR_Box) (Var_157));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 17) = ((MR_Box) (Var_81));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 18) = ((MR_Box) (Var_159));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 19) = ((MR_Box) (Var_160));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 20) = ((MR_Box) (Var_161));
    MR_hl_field(0, STATE_VARIABLE_Info_80_80, 21) = ((MR_Box) (Var_162));
  }
  Var_83 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), IncludesToCheckSet_40);
  make__dependencies__deps_set_foldl3_find_trans_deps_13_p_0(KeepGoing_15, DependenciesType_16, IsModuleInCurDir_17, Globals_18, Var_83, (MR_Integer) 1, &SucceededIncludes_45, Modules2_44, Modules_24, STATE_VARIABLE_Info_80_80, &STATE_VARIABLE_Info_85_85);
  Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 0))));
  Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 1))));
  Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 2))));
  Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 3))));
  Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 4))));
  Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 5))));
  Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 6))));
  Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 7))));
  Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 8))));
  Var_172 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 9))));
  Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 10))));
  Var_174 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 11))));
  Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 12))));
  Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 13))));
  Var_177 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 14))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 15)));
  Var_180 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 16))));
  Var_182 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 18))));
  Var_183 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 19))));
  Var_184 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 20))));
  Var_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_85_85, (MR_Integer) 21))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_47 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_163));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_164));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_165));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_166));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_167));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_168));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_169));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_170));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_171));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_172));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_173));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_174));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_175));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_176));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_177));
    MR_hl_field(0, base, 15) = (MR_Box) (packed_word_2);
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_180));
    MR_hl_field(0, base, 17) = ((MR_Box) (OldImportingModule_42));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_182));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_183));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_184));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_185));
  }
  *Succeeded_22 = libs__maybe_succeeded__and_2_f_0(SucceededImports_43, SucceededIncludes_45);
}

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv35_HeadVar__3_211;
  MR_Word conv34_HeadVar__4_212;
  MR_Word conv33_HeadVar__6_214;

  make__dependencies__IntroducedFrom__pred__find_target_dependencies_of_modules__265__1_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv35_HeadVar__3_211, &conv34_HeadVar__4_212, ((MR_Word) (wrapper_arg_5)), &conv33_HeadVar__6_214);
  *wrapper_arg_3 = ((MR_Box) (conv35_HeadVar__3_211));
  *wrapper_arg_4 = ((MR_Box) (conv34_HeadVar__4_212));
  *wrapper_arg_6 = ((MR_Box) (conv33_HeadVar__6_214));
}

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv32_Succeeded_15;
  MR_Word conv31_Deps_16;
  MR_Word conv30_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_Succeeded_15, &conv31_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv30_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv32_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv31_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv30_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv29_Succeeded_15;
  MR_Word conv28_Deps_16;
  MR_Word conv27_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv29_Succeeded_15, &conv28_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv27_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv29_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv28_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv27_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_Succeeded_15;
  MR_Word conv10_Deps_16;
  MR_Word conv9_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_Succeeded_15, &conv10_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv11_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv10_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Succeeded_15;
  MR_Word conv7_Deps_16;
  MR_Word conv6_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_Succeeded_15, &conv7_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv8_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv7_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_Deps_16;
  MR_Word conv3_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_15;
  MR_Word conv1_Deps_16;
  MR_Word conv0_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_15, &conv1_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv1_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_24));
}

void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Deps_0_7,
  MR_Word * STATE_VARIABLE_Deps_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word ModuleIndex_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ModuleIndexes_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_37;
      MR_Word STATE_VARIABLE_Deps_57_57;
      MR_Word STATE_VARIABLE_Info_58_58;

      switch (MR_tag((MR_Word) HeadVar__3_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 8:
              {
                NewSucceeded_37 = (MR_Integer) 1;
                STATE_VARIABLE_Deps_57_57 = STATE_VARIABLE_Deps_0_7;
                STATE_VARIABLE_Info_58_58 = STATE_VARIABLE_Info_0_9;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
              {
                MR_Word FindDeps_165;
                MR_Word NewDeps_166;
                void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
                MR_Box conv21_NewSucceeded_37;
                MR_Box conv20_NewDeps_166;
                MR_Box conv19_STATE_VARIABLE_Info_58_58;
                MR_Box conv18_STATE_VARIABLE_IO_61_61;

                FindDeps_165 = make__dependencies__compiled_code_dependencies_1_f_0(HeadVar__2_2);
                func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_165, (MR_Integer) 1))));
                func_17(((MR_Box) (FindDeps_165)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ModuleIndex_31)), &conv21_NewSucceeded_37, &conv20_NewDeps_166, ((MR_Box) (STATE_VARIABLE_Info_0_9)), &conv19_STATE_VARIABLE_Info_58_58, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_61_61);
                NewSucceeded_37 = ((MR_Word) (conv21_NewSucceeded_37));
                NewDeps_166 = ((MR_Word) (conv20_NewDeps_166));
                STATE_VARIABLE_Info_58_58 = ((MR_Word) (conv19_STATE_VARIABLE_Info_58_58));
                mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_166, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_57_57);
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
              {
                MR_Word FindDeps_38;
                MR_Word NewDeps_39;
                void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
                MR_Box conv26_NewSucceeded_37;
                MR_Box conv25_NewDeps_39;
                MR_Box conv24_STATE_VARIABLE_Info_58_58;
                MR_Box conv23_STATE_VARIABLE_IO_61_61;

                FindDeps_38 = make__dependencies__interface_file_dependencies_0_f_0();
                func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_38, (MR_Integer) 1))));
                func_22(((MR_Box) (FindDeps_38)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ModuleIndex_31)), &conv26_NewSucceeded_37, &conv25_NewDeps_39, ((MR_Box) (STATE_VARIABLE_Info_0_9)), &conv24_STATE_VARIABLE_Info_58_58, ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_IO_61_61);
                NewSucceeded_37 = ((MR_Word) (conv26_NewSucceeded_37));
                NewDeps_39 = ((MR_Word) (conv25_NewDeps_39));
                STATE_VARIABLE_Info_58_58 = ((MR_Word) (conv24_STATE_VARIABLE_Info_58_58));
                mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_39, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_57_57);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_56;

                {
                  Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_56, 0) = ((MR_Box) (ModuleIndex_31));
                  MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                make__dependencies__add_targets_of_modules_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 0U), Var_56, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_57_57, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_58_58);
                NewSucceeded_37 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 6:
            case (MR_Integer) 13:
              {
                MR_Word Var_108;
                MR_Word STATE_VARIABLE_Deps_109_109;
                MR_Word STATE_VARIABLE_Info_110_110;
                MR_Word STATE_VARIABLE_Deps_113_113;
                MR_Word STATE_VARIABLE_Info_114_114;
                MR_Word Var_115;
                MR_Word Var_116;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word FindDeps_170;
                MR_Word NewDeps_171;
                void MR_CALL (* func_41)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
                MR_Box conv45_NewSucceeded_37;
                MR_Box conv44_NewDeps_171;
                MR_Box conv43_STATE_VARIABLE_Info_58_58;
                MR_Box conv42_STATE_VARIABLE_IO_61_61;

                {
                  Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_108, 0) = ((MR_Box) (ModuleIndex_31));
                  MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                make__dependencies__add_targets_of_modules_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 0U), Var_108, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_109_109, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_110_110);
                make__dependencies__add_targets_of_ancestors_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 8U), ModuleIndex_31, STATE_VARIABLE_Deps_109_109, &STATE_VARIABLE_Deps_113_113, STATE_VARIABLE_Info_110_110, &STATE_VARIABLE_Info_114_114);
                Var_116 = make__dependencies__of__ho17_2_f_0((MR_Word) ((MR_Unsigned) 12U));
                Var_120 = make__dependencies__of__ho16_2_f_0((MR_Word) ((MR_Unsigned) 16U));
                {
                  Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
                  MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
                  MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_119));
                }
                FindDeps_170 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_115);
                func_41 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_170, (MR_Integer) 1))));
                func_41(((MR_Box) (FindDeps_170)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ModuleIndex_31)), &conv45_NewSucceeded_37, &conv44_NewDeps_171, ((MR_Box) (STATE_VARIABLE_Info_114_114)), &conv43_STATE_VARIABLE_Info_58_58, ((MR_Box) ((MR_Integer) 0)), &conv42_STATE_VARIABLE_IO_61_61);
                NewSucceeded_37 = ((MR_Word) (conv45_NewSucceeded_37));
                NewDeps_171 = ((MR_Word) (conv44_NewDeps_171));
                STATE_VARIABLE_Info_58_58 = ((MR_Word) (conv43_STATE_VARIABLE_Info_58_58));
                mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_171, STATE_VARIABLE_Deps_113_113, &STATE_VARIABLE_Deps_57_57);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Var_128;
                MR_Word STATE_VARIABLE_Deps_129_129;
                MR_Word STATE_VARIABLE_Info_130_130;
                MR_Word STATE_VARIABLE_Deps_133_133;
                MR_Word STATE_VARIABLE_Info_134_134;
                MR_Word Var_136;
                MR_Word Var_140;
                MR_Word Var_143;
                MR_Word Var_144;
                MR_Word Var_147;
                MR_Word Var_148;
                MR_Word Var_151;
                MR_Word Var_152;
                MR_Word FindDeps_172;
                MR_Word NewDeps_173;
                MR_Word Var_286;
                MR_Word Var_289;
                MR_Word Var_316;
                MR_Word Var_139;
                void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
                MR_Box conv16_NewSucceeded_37;
                MR_Box conv15_NewDeps_173;
                MR_Box conv14_STATE_VARIABLE_Info_58_58;
                MR_Box conv13_STATE_VARIABLE_IO_61_61;

                {
                  Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_128, 0) = ((MR_Box) (ModuleIndex_31));
                  MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                make__dependencies__add_targets_of_modules_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 0U), Var_128, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_129_129, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_130_130);
                make__dependencies__add_targets_of_ancestors_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 8U), ModuleIndex_31, STATE_VARIABLE_Deps_129_129, &STATE_VARIABLE_Deps_133_133, STATE_VARIABLE_Info_130_130, &STATE_VARIABLE_Info_134_134);
                Var_136 = make__dependencies__of__ho17_2_f_0((MR_Word) ((MR_Unsigned) 12U));
                Var_140 = make__dependencies__of__ho16_2_f_0((MR_Word) ((MR_Unsigned) 16U));
                Var_144 = make__dependencies__of__ho9_2_f_0((MR_Word) ((MR_Unsigned) 24U));
                Var_148 = make__dependencies__of__ho8_2_f_0((MR_Word) ((MR_Unsigned) 24U));
                Var_152 = make__dependencies__of__ho14_2_f_0((MR_Word) ((MR_Unsigned) 24U));
                {
                  Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
                  MR_hl_field(1, Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_147, 0) = ((MR_Box) (Var_148));
                  MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_151));
                }
                {
                  Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_143, 0) = ((MR_Box) (Var_144));
                  MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_147));
                }
                {
                  Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
                  MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_143));
                }
                {
                  Var_316 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_316, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[0]));
                  MR_hl_field(0, Var_316, 1) = ((MR_Box) (make__dependencies__find_target_dependencies_of_modules_12_p_0_1));
                  MR_hl_field(0, Var_316, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_316, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                  MR_hl_field(0, Var_316, 4) = ((MR_Box) (Var_148));
                  MR_hl_field(0, Var_316, 5) = ((MR_Box) (Var_152));
                }
                {
                  Var_289 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_289, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[0]));
                  MR_hl_field(0, Var_289, 1) = ((MR_Box) (make__dependencies__find_target_dependencies_of_modules_12_p_0_2));
                  MR_hl_field(0, Var_289, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_289, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                  MR_hl_field(0, Var_289, 4) = ((MR_Box) (Var_144));
                  MR_hl_field(0, Var_289, 5) = ((MR_Box) (Var_316));
                }
                {
                  Var_286 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_286, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[0]));
                  MR_hl_field(0, Var_286, 1) = ((MR_Box) (make__dependencies__find_target_dependencies_of_modules_12_p_0_3));
                  MR_hl_field(0, Var_286, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_286, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                  MR_hl_field(0, Var_286, 4) = ((MR_Box) (Var_140));
                  MR_hl_field(0, Var_286, 5) = ((MR_Box) (Var_289));
                }
                {
                  FindDeps_172 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FindDeps_172, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[0]));
                  MR_hl_field(0, FindDeps_172, 1) = ((MR_Box) (make__dependencies__find_target_dependencies_of_modules_12_p_0_4));
                  MR_hl_field(0, FindDeps_172, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, FindDeps_172, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                  MR_hl_field(0, FindDeps_172, 4) = ((MR_Box) (Var_136));
                  MR_hl_field(0, FindDeps_172, 5) = ((MR_Box) (Var_286));
                }
                func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_172, (MR_Integer) 1))));
                func_12(((MR_Box) (FindDeps_172)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ModuleIndex_31)), &conv16_NewSucceeded_37, &conv15_NewDeps_173, ((MR_Box) (STATE_VARIABLE_Info_134_134)), &conv14_STATE_VARIABLE_Info_58_58, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_61_61);
                NewSucceeded_37 = ((MR_Word) (conv16_NewSucceeded_37));
                NewDeps_173 = ((MR_Word) (conv15_NewDeps_173));
                STATE_VARIABLE_Info_58_58 = ((MR_Word) (conv14_STATE_VARIABLE_Info_58_58));
                mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_173, STATE_VARIABLE_Deps_133_133, &STATE_VARIABLE_Deps_57_57);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word Var_67;

                {
                  Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_67, 0) = ((MR_Box) (ModuleIndex_31));
                  MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                make__dependencies__add_targets_of_modules_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 44U), Var_67, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_57_57, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_58_58);
                NewSucceeded_37 = (MR_Integer) 1;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FindDeps_165;
            MR_Word NewDeps_166;
            void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv21_NewSucceeded_37;
            MR_Box conv20_NewDeps_166;
            MR_Box conv19_STATE_VARIABLE_Info_58_58;
            MR_Box conv18_STATE_VARIABLE_IO_61_61;

            FindDeps_165 = make__dependencies__compiled_code_dependencies_1_f_0(HeadVar__2_2);
            func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_165, (MR_Integer) 1))));
            func_17(((MR_Box) (FindDeps_165)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ModuleIndex_31)), &conv21_NewSucceeded_37, &conv20_NewDeps_166, ((MR_Box) (STATE_VARIABLE_Info_0_9)), &conv19_STATE_VARIABLE_Info_58_58, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_61_61);
            NewSucceeded_37 = ((MR_Word) (conv21_NewSucceeded_37));
            NewDeps_166 = ((MR_Word) (conv20_NewDeps_166));
            STATE_VARIABLE_Info_58_58 = ((MR_Word) (conv19_STATE_VARIABLE_Info_58_58));
            mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_166, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_57_57);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CompilationTarget_44;
            MR_Word HighLevelCode_45;
            MR_Word HeaderDeps_46;
            MR_Word STATE_VARIABLE_Deps_73_73;
            MR_Word STATE_VARIABLE_Info_74_74;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_102;
            MR_Word FindDeps_167;
            MR_Word NewDeps_168;
            void MR_CALL (* func_36)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv40_NewSucceeded_37;
            MR_Box conv39_NewDeps_168;
            MR_Box conv38_STATE_VARIABLE_Info_58_58;
            MR_Box conv37_STATE_VARIABLE_IO_61_61;

            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0(HeadVar__2_2, ModuleIndex_31, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_73_73, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_74_74);
            libs__globals__get_target_2_p_0(HeadVar__2_2, &CompilationTarget_44);
            libs__globals__lookup_bool_option_3_p_0(HeadVar__2_2, (MR_Integer) 308, &HighLevelCode_45);
            succeeded = (CompilationTarget_44 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (HighLevelCode_45 == (MR_Integer) 1);
            if (succeeded)
            {
              MR_Word Var_77;
              MR_Word Var_82;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_360;
              MR_Word Var_363;
              MR_Word Var_81;

              Var_77 = make__dependencies__of__ho9_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[0])));
              Var_82 = make__dependencies__of__ho8_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[0])));
              Var_87 = make__dependencies__of__ho10_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[0])));
              Var_92 = make__dependencies__of__ho14_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[0])));
              {
                Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
                MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
                MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_91));
              }
              {
                Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
                MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_86));
              }
              Var_363 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_86);
              {
                Var_360 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_360, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[0]));
                MR_hl_field(0, Var_360, 1) = ((MR_Box) (make__dependencies__find_target_dependencies_of_modules_12_p_0_5));
                MR_hl_field(0, Var_360, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_360, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                MR_hl_field(0, Var_360, 4) = ((MR_Box) (Var_82));
                MR_hl_field(0, Var_360, 5) = ((MR_Box) (Var_363));
              }
              {
                HeaderDeps_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HeaderDeps_46, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[0]));
                MR_hl_field(0, HeaderDeps_46, 1) = ((MR_Box) (make__dependencies__find_target_dependencies_of_modules_12_p_0_6));
                MR_hl_field(0, HeaderDeps_46, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, HeaderDeps_46, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                MR_hl_field(0, HeaderDeps_46, 4) = ((MR_Box) (Var_77));
                MR_hl_field(0, HeaderDeps_46, 5) = ((MR_Box) (Var_360));
              }
            }
            else
              HeaderDeps_46 = (MR_Word) (&make__dependencies_scalar_common_2[27]);
            Var_98 = make__dependencies__of__ho18_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[1])));
            {
              Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_102, 0) = ((MR_Box) (HeaderDeps_46));
              MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
              MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_102));
            }
            FindDeps_167 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_97);
            func_36 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_167, (MR_Integer) 1))));
            func_36(((MR_Box) (FindDeps_167)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (ModuleIndex_31)), &conv40_NewSucceeded_37, &conv39_NewDeps_168, ((MR_Box) (STATE_VARIABLE_Info_74_74)), &conv38_STATE_VARIABLE_Info_58_58, ((MR_Box) ((MR_Integer) 0)), &conv37_STATE_VARIABLE_IO_61_61);
            NewSucceeded_37 = ((MR_Word) (conv40_NewSucceeded_37));
            NewDeps_168 = ((MR_Word) (conv39_NewDeps_168));
            STATE_VARIABLE_Info_58_58 = ((MR_Word) (conv38_STATE_VARIABLE_Info_58_58));
            mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_168, STATE_VARIABLE_Deps_73_73, &STATE_VARIABLE_Deps_57_57);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0(HeadVar__2_2, ModuleIndex_31, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_57_57, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_58_58);
                NewSucceeded_37 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              {
                make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0(HeadVar__2_2, ModuleIndex_31, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_57_57, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_58_58);
                NewSucceeded_37 = (MR_Integer) 1;
              }
              break;
          }
          break;
      }
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_159_159;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_159_159 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = ModuleIndexes_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_159_159;
        next_value_of_STATE_VARIABLE_Deps_0_7 = STATE_VARIABLE_Deps_57_57;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_58_58;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Deps_0_7 = next_value_of_STATE_VARIABLE_Deps_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_58_58;
        *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_57_57;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TargetFileIndex_8;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__dependencies__target_of_module_to_dep_file_index_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TargetFileIndex_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_TargetFileIndex_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleIndex_10,
  MR_Word STATE_VARIABLE_Deps_0_15,
  MR_Word * STATE_VARIABLE_Deps_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Var_19;
  MR_Word TargetFileIndexes_23;
  MR_Word Var_25;
  MR_Word CompilationTarget_13;
  MR_Box conv2_STATE_VARIABLE_Info_18;

  libs__globals__get_target_2_p_0(Globals_8, &CompilationTarget_13);
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (ModuleIndex_10));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_13[0]), Var_19, &TargetFileIndexes_23, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv2_STATE_VARIABLE_Info_18);
  *STATE_VARIABLE_Info_18 = ((MR_Word) (conv2_STATE_VARIABLE_Info_18));
  Var_25 = mercury__sparse_bitset__list_to_set_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[7]), TargetFileIndexes_23);
  mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_25, STATE_VARIABLE_Deps_0_15, STATE_VARIABLE_Deps_16);
}

static void MR_CALL 
make__dependencies__of__ho18_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__of__ho18_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_11;
  MR_Word conv1_Modules_12;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  make__dependencies__foreign_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

static MR_Word MR_CALL 
make__dependencies__of__ho18_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho18_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[26]));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
make__dependencies__of__ho17_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__of__ho17_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_11;
  MR_Word conv1_Modules_12;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  make__dependencies__non_intermod_direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

static MR_Word MR_CALL 
make__dependencies__of__ho17_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho17_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[25]));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
make__dependencies__of__ho16_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__of__ho16_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_11;
  MR_Word conv1_Modules_12;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  make__dependencies__non_intermod_indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

static MR_Word MR_CALL 
make__dependencies__of__ho16_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho16_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[24]));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
make__dependencies__of__ho14_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__of__ho14_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_11;
  MR_Word conv1_Modules_12;
  MR_Word conv0_STATE_VARIABLE_Info_18;

  make__dependencies__intermod_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
}

static MR_Word MR_CALL 
make__dependencies__of__ho14_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho14_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[23]));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
make__dependencies__of__ho10_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__of__ho10_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Word conv1_AncestorIndices_11;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  make__dependencies__ancestors_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3, &conv1_AncestorIndices_11, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv1_AncestorIndices_11));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
}

static MR_Word MR_CALL 
make__dependencies__of__ho10_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho10_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[22]));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
make__dependencies__of__ho9_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__of__ho9_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_11;
  MR_Word conv1_Modules_12;
  MR_Word conv0_STATE_VARIABLE_Info_29;

  make__dependencies__direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_29));
}

static MR_Word MR_CALL 
make__dependencies__of__ho9_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho9_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[21]));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
make__dependencies__of__ho8_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__of__ho8_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_11;
  MR_Word conv1_Modules_12;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  make__dependencies__indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

static MR_Word MR_CALL 
make__dependencies__of__ho8_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho8_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[20]));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
make__dependencies__add_targets_of_ancestors_as_deps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TargetFileIndex_8;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__dependencies__target_of_module_to_dep_file_index_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TargetFileIndex_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_TargetFileIndex_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__dependencies__add_targets_of_ancestors_as_deps_6_p_0(
  MR_Word TargetType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_Deps_0_13,
  MR_Word * STATE_VARIABLE_Deps_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word ModuleName_11;
  MR_Word AncestorModuleIndexSet_12;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_Info_18_18;
  MR_Word Var_19;
  MR_Word TargetFileIndexes_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Box conv2_STATE_VARIABLE_Info_16;

  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_15, ModuleIndex_8, &ModuleName_11);
  Var_17 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_11);
  make__deps_set__module_names_to_index_set_4_p_0(Var_17, &AncestorModuleIndexSet_12, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_18_18);
  Var_19 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), AncestorModuleIndexSet_12);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (make__dependencies__add_targets_of_ancestors_as_deps_6_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (TargetType_7));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_22, Var_19, &TargetFileIndexes_21, ((MR_Box) (STATE_VARIABLE_Info_18_18)), &conv2_STATE_VARIABLE_Info_16);
  *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
  Var_23 = mercury__sparse_bitset__list_to_set_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[7]), TargetFileIndexes_21);
  mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_23, STATE_VARIABLE_Deps_0_13, STATE_VARIABLE_Deps_14);
}

static void MR_CALL 
make__dependencies__add_targets_of_modules_as_deps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TargetFileIndex_8;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__dependencies__target_of_module_to_dep_file_index_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TargetFileIndex_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_TargetFileIndex_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__dependencies__add_targets_of_modules_as_deps_6_p_0(
  MR_Word TargetType_7,
  MR_Word ModuleIndexes_8,
  MR_Word STATE_VARIABLE_Deps_0_12,
  MR_Word * STATE_VARIABLE_Deps_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word TargetFileIndexes_11;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Box conv2_STATE_VARIABLE_Info_15;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (make__dependencies__add_targets_of_modules_as_deps_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (TargetType_7));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_16, ModuleIndexes_8, &TargetFileIndexes_11, ((MR_Box) (STATE_VARIABLE_Info_0_14)), &conv2_STATE_VARIABLE_Info_15);
  *STATE_VARIABLE_Info_15 = ((MR_Word) (conv2_STATE_VARIABLE_Info_15));
  Var_18 = mercury__sparse_bitset__list_to_set_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[7]), TargetFileIndexes_11);
  mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_18, STATE_VARIABLE_Deps_0_12, STATE_VARIABLE_Deps_13);
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv62_Succeeded_15;
  MR_Word conv61_TargetFiles_16;
  MR_Word conv60_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv62_Succeeded_15, &conv61_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv60_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv62_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv61_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv60_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv59_Succeeded_11;
  MR_Word conv58_Modules_12;
  MR_Word conv57_STATE_VARIABLE_Info_29;

  make__dependencies__direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv59_Succeeded_11, &conv58_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv57_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv59_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv58_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv57_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv56_Succeeded_15;
  MR_Word conv55_TargetFiles_16;
  MR_Word conv54_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv56_Succeeded_15, &conv55_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv54_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv56_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv55_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv54_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv53_HeadVar__3_3;
  MR_Word conv52_HeadVar__4_4;
  MR_Word conv51_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv53_HeadVar__3_3, &conv52_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv51_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv53_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv52_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv51_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv50_Succeeded_11;
  MR_Word conv49_Result_12;
  MR_Word conv48_STATE_VARIABLE_Info_20;

  make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv50_Succeeded_11, &conv49_Result_12, ((MR_Word) (wrapper_arg_5)), &conv48_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv50_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv49_Result_12));
  *wrapper_arg_6 = ((MR_Box) (conv48_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv47_Succeeded_15;
  MR_Word conv46_TargetFiles_16;
  MR_Word conv45_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv47_Succeeded_15, &conv46_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv45_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv47_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv46_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv45_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv44_Succeeded_11;
  MR_Word conv43_Modules_12;
  MR_Word conv42_STATE_VARIABLE_Info_18;

  make__dependencies__intermod_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv44_Succeeded_11, &conv43_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv42_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv44_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv43_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv42_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv41_Succeeded_15;
  MR_Word conv40_TargetFiles_16;
  MR_Word conv39_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv41_Succeeded_15, &conv40_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv39_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv41_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv40_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv39_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv38_HeadVar__3_3;
  MR_Word conv37_HeadVar__4_4;
  MR_Word conv36_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv38_HeadVar__3_3, &conv37_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv36_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv38_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv37_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv36_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv35_Succeeded_11;
  MR_Word conv34_Result_12;
  MR_Word conv33_STATE_VARIABLE_Info_17;

  make__dependencies__find_own_imports_012_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv35_Succeeded_11, &conv34_Result_12, ((MR_Word) (wrapper_arg_5)), &conv33_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv35_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv34_Result_12));
  *wrapper_arg_6 = ((MR_Box) (conv33_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv32_Succeeded_15;
  MR_Word conv31_TargetFiles_16;
  MR_Word conv30_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_Succeeded_15, &conv31_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv30_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv32_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv31_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv30_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv29_HeadVar__3_3;
  MR_Word conv28_AncestorIndices_11;
  MR_Word conv27_STATE_VARIABLE_Info_17;

  make__dependencies__ancestors_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv29_HeadVar__3_3, &conv28_AncestorIndices_11, ((MR_Word) (wrapper_arg_5)), &conv27_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv29_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv28_AncestorIndices_11));
  *wrapper_arg_6 = ((MR_Box) (conv27_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv26_Succeeded_15;
  MR_Word conv25_TargetFiles_16;
  MR_Word conv24_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_Succeeded_15, &conv25_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv24_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv26_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv25_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv24_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv23_Succeeded_15;
  MR_Word conv22_DepIndices_16;
  MR_Word conv21_STATE_VARIABLE_Info_25;

  make__dependencies__files_of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_Succeeded_15, &conv22_DepIndices_16, ((MR_Word) (wrapper_arg_5)), &conv21_STATE_VARIABLE_Info_25);
  *wrapper_arg_3 = ((MR_Box) (conv23_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv22_DepIndices_16));
  *wrapper_arg_6 = ((MR_Box) (conv21_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_Succeeded_11;
  MR_Word conv19_Files_12;
  MR_Word conv18_STATE_VARIABLE_Info_23;

  make__dependencies__foreign_include_files_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_Succeeded_11, &conv19_Files_12, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Info_23);
  *wrapper_arg_3 = ((MR_Box) (conv20_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv19_Files_12));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Info_23));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_Succeeded_15;
  MR_Word conv16_DepIndices_16;
  MR_Word conv15_STATE_VARIABLE_Info_25;

  make__dependencies__files_of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_Succeeded_15, &conv16_DepIndices_16, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Info_25);
  *wrapper_arg_3 = ((MR_Box) (conv17_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv16_DepIndices_16));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_Succeeded_11;
  MR_Word conv13_Files_12;
  MR_Word conv12_STATE_VARIABLE_Info_21;

  make__dependencies__fact_table_files_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_11, &conv13_Files_12, ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv13_Files_12));
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_Succeeded_15;
  MR_Word conv10_TargetFiles_16;
  MR_Word conv9_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_Succeeded_15, &conv10_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv11_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv10_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__3_3;
  MR_Word conv7_HeadVar__4_4;
  MR_Word conv6_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__3_3, &conv7_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

static MR_Word MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0(
  MR_Word Globals_3)
{
  MR_Word Deps_4;
  MR_Word TrackFlags_5;
  MR_Word DepsTracks_6;
  MR_Word IntermodOpt_8;
  MR_Word IntermodAnalysis_9;
  MR_Word AnyIntermod_10;
  MR_Word DepsOpts_11;
  MR_Word DepsRegistries_12;
  MR_Word DepsAll_13;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 665, &TrackFlags_5);
  switch (TrackFlags_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DepsTracks_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      DepsTracks_6 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[11]));
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 498, &IntermodOpt_8);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 503, &IntermodAnalysis_9);
  AnyIntermod_10 = mercury__bool__or_2_f_0(IntermodOpt_8, IntermodAnalysis_9);
  switch (AnyIntermod_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DepsOpts_11 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      DepsOpts_11 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[20]));
      break;
  }
  switch (IntermodAnalysis_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DepsRegistries_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      DepsRegistries_12 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[22]));
      break;
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (DepsRegistries_12));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (DepsOpts_11));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[17])));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (DepsTracks_6));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  DepsAll_13 = mercury__list__inst_preserving_condense_1_f_0((MR_Word) (&make__dependencies_scalar_common_3[0]), Var_61);
  Deps_4 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), DepsAll_13);
  return Deps_4;
}

static void MR_CALL 
make__dependencies__combine_deps_list_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Succeeded_15;
  MR_Word conv7_Deps_16;
  MR_Word conv6_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_Succeeded_15, &conv7_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv8_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv7_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__combine_deps_list_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_Deps_16;
  MR_Word conv3_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__combine_deps_list_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__dependencies__no_deps_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

static MR_Word MR_CALL 
make__dependencies__combine_deps_list_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (&make__dependencies_scalar_common_11[0]));
      MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (make__dependencies__combine_deps_list_1_f_0_1));
      MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (TypeInfo_for_T_11));
    }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_20 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = Var_21;
    else
    {
      MR_Word Var_9;
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 0))));

      if ((Var_23 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_9 = Var_24;
      else
      {
        MR_Word Var_22;

        Var_22 = make__dependencies__combine_deps_list_1_f_0(TypeInfo_for_T_11, Var_23);
        {
          Var_9 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_9, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[0]));
          MR_hl_field(0, Var_9, 1) = ((MR_Box) (make__dependencies__combine_deps_list_1_f_0_2));
          MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_9, 3) = ((MR_Box) (TypeInfo_for_T_11));
          MR_hl_field(0, Var_9, 4) = ((MR_Box) (Var_24));
          MR_hl_field(0, Var_9, 5) = ((MR_Box) (Var_22));
        }
      }
      {
        HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[0]));
        MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (make__dependencies__combine_deps_list_1_f_0_3));
        MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (TypeInfo_for_T_11));
        MR_hl_field(0, HeadVar__2_2, 4) = ((MR_Box) (Var_21));
        MR_hl_field(0, HeadVar__2_2, 5) = ((MR_Box) (Var_9));
      }
    }
  }
  return HeadVar__2_2;
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv32_Succeeded_15;
  MR_Word conv31_Deps_16;
  MR_Word conv30_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_Succeeded_15, &conv31_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv30_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv32_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv31_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv30_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv29_Succeeded_15;
  MR_Word conv28_Deps_16;
  MR_Word conv27_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv29_Succeeded_15, &conv28_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv27_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv29_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv28_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv27_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv26_Succeeded_15;
  MR_Word conv25_Deps_16;
  MR_Word conv24_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_Succeeded_15, &conv25_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv24_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv26_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv25_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv24_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv23_Succeeded_15;
  MR_Word conv22_TargetFiles_16;
  MR_Word conv21_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_Succeeded_15, &conv22_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv21_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv23_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv22_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv21_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_Succeeded_11;
  MR_Word conv19_Modules_12;
  MR_Word conv18_STATE_VARIABLE_Info_21;

  make__dependencies__indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_Succeeded_11, &conv19_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv20_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv19_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_Succeeded_15;
  MR_Word conv16_TargetFiles_16;
  MR_Word conv15_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_Succeeded_15, &conv16_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv17_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv16_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_Succeeded_11;
  MR_Word conv13_Modules_12;
  MR_Word conv12_STATE_VARIABLE_Info_29;

  make__dependencies__direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_11, &conv13_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv13_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_Succeeded_15;
  MR_Word conv10_TargetFiles_16;
  MR_Word conv9_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_Succeeded_15, &conv10_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv11_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv10_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__3_3;
  MR_Word conv7_AncestorIndices_11;
  MR_Word conv6_STATE_VARIABLE_Info_17;

  make__dependencies__ancestors_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__3_3, &conv7_AncestorIndices_11, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv7_AncestorIndices_11));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_TargetFiles_16;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

static MR_Word MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0(void)
{
  return (MR_Word) (&make__dependencies_scalar_common_10[2]);
}

static MR_bool MR_CALL 
make__dependencies____Unify____cached_computed_module_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____cached_computed_module_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____cached_computed_module_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____cached_computed_module_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____cached_direct_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____cached_direct_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____cached_direct_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____cached_direct_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____cached_indirect_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____cached_indirect_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____cached_indirect_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____cached_indirect_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_dependencies_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____cached_transitive_dependencies_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____cached_transitive_dependencies_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____cached_transitive_dependencies_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____cached_transitive_foreign_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____cached_transitive_foreign_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____cached_transitive_foreign_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____computed_module_deps_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____computed_module_deps_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____computed_module_deps_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____computed_module_deps_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____computed_module_deps_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____computed_module_deps_label_0_0();
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____computed_module_deps_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____computed_module_deps_label_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____dependencies_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____dependencies_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____dependencies_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____dependencies_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____dependency_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____dependency_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____dependency_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_with_module_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____dependency_file_with_module_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____dependency_file_with_module_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____dependency_file_with_module_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____deps_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____deps_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____find_module_deps_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____find_module_deps_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_plain_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____find_module_deps_plain_set_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____find_module_deps_plain_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____find_module_deps_plain_set_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____module_deps_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____module_deps_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____module_deps_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____module_deps_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____process_modules_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____process_modules_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____process_modules_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____process_modules_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_root_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____transitive_dependencies_root_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_root_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____transitive_dependencies_root_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____transitive_dependencies_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____transitive_dependencies_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__dependencies__init(void)
{
}

void mercury__make__dependencies__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_computed_module_deps_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_indirect_imports_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_foreign_imports_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_key_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_computed_module_deps_label_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dependencies_result_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_deps_result_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_find_module_deps_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_find_module_deps_plain_set_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_module_deps_result_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_process_modules_where_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_type_0);
}

void mercury__make__dependencies__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__dependencies__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.dependencies.
