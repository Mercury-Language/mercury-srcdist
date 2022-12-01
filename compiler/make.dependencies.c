/*
** Automatically generated from `make.dependencies.m'
** by the Mercury compiler,
** version rotd-2022-12-01
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

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__pseudo_1;

static const MR_FA_TypeInfo_Struct2 make__dependencies__pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__make_info__type_ctor_info_dependency_status_0;

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

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

static const MR_VA_PseudoTypeInfo_Struct9 make__dependencies____vpti_pred_9__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3__pseudo_4__pseudo_4;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_0;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_1;

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_module_locn_0[2];

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_module_locn_0[2];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_module_locn_0[2];

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
  MR_Word Var_42,
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__debug_newer_dependencies_2__1545__1_3_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word MaybeTimestamp_8,
  MR_Word LambdaHeadVar__1_29);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1439__1_3_p_0(
  MR_Word TypeInfo_for_File_38,
  MR_Word LambdaHeadVar__1_23,
  MR_Box * LambdaHeadVar__2_24);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__find_transitive_module_dependencies_2__1207__1_2_p_0(
  MR_Word LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__find_transitive_module_dependencies_2__1199__1_2_p_0(
  MR_Word LambdaHeadVar__1_59,
  MR_Word * LambdaHeadVar__2_60);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__find_transitive_module_dependencies_2__1184__1_2_p_0(
  MR_Word ModuleName_26,
  MR_Word MDI_ModuleName_31);

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__fact_table_files__874__1_1_f_0(
  MR_String LambdaHeadVar__1_27);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__846__1_3_p_0(
  MR_Word Languages_10,
  MR_Word LambdaHeadVar__1_31,
  MR_Word * LambdaHeadVar__2_32);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__compiled_code_dependencies__367__1_8_p_0(
  MR_Word HeadVar__1_77,
  MR_Word HeadVar__2_78,
  MR_Word * HeadVar__3_79,
  MR_Word * HeadVar__4_80,
  MR_Word HeadVar__5_81,
  MR_Word * HeadVar__6_82);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_100_95_99_111_100_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_51_54_55_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_79,
  MR_Word * HeadVar__4_80,
  MR_Word HeadVar__5_81,
  MR_Word * HeadVar__6_82);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies__1394__1_1_p_0(
  MR_Word LambdaHeadVar__1_35);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__remove_nested_modules__1253__1_2_p_0(
  MR_Word NestedModules_13,
  MR_Word HeadVar__2_34);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__243__1_8_p_0(
  MR_Word HeadVar__1_99,
  MR_Word HeadVar__2_100,
  MR_Word * HeadVar__3_101,
  MR_Word * HeadVar__4_102,
  MR_Word HeadVar__5_103,
  MR_Word * HeadVar__6_104);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_50_52_51_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_101,
  MR_Word * HeadVar__4_102,
  MR_Word HeadVar__5_103,
  MR_Word * HeadVar__6_104);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__290__1_8_p_0(
  MR_Word HeadVar__1_157,
  MR_Word HeadVar__2_158,
  MR_Word * HeadVar__3_159,
  MR_Word * HeadVar__4_160,
  MR_Word HeadVar__5_161,
  MR_Word * HeadVar__6_162);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_50_57_48_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_159,
  MR_Word * HeadVar__4_160,
  MR_Word HeadVar__5_161,
  MR_Word * HeadVar__6_162);

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
make__dependencies____Compare____module_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__dependencies____Unify____module_locn_0_0(
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

static MR_bool MR_CALL 
make__dependencies__debug_newer_dependencies_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__dependencies__debug_newer_dependencies_2_6_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_String TargetFileName_7,
  MR_Word MaybeTimestamp_8,
  MR_Word DepFiles_9,
  MR_Word DepTimestamps_10);

static void MR_CALL 
make__dependencies__make_write_dependency_file_and_timestamp_list_3_p_0(
  MR_Word TypeInfo_for_T_21,
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
make__dependencies__combine_deps_2_10_p_0(
  MR_Word TypeInfo_for_T_51,
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
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_108_111_111_112_95_109_105_95_95_104_111_50_50_95_95_91_51_93_95_48_12_p_0(
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
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word Var_29,
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word ModuleIndexes_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Deps_0_20,
  MR_Word * STATE_VARIABLE_Deps_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_108_111_111_112_95_109_105_95_95_104_111_50_51_95_95_91_51_93_95_48_12_p_0(
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
make__dependencies__indirect_imports_2__ho6_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * IndirectImports_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi__ho21_12_p_0(
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
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho7_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word ModuleIndexes_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Deps_0_20,
  MR_Word * STATE_VARIABLE_Deps_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi__ho20_12_p_0(
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
make__dependencies__intermod_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_2_8_p_0(
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
make__dependencies__map_find_module_deps_fi_10_p_0(
  MR_Word FindDeps1_11,
  MR_Word FindDeps2_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Result_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__map_find_module_deps_mi_10_p_0(
  MR_Word FindDeps1_11,
  MR_Word FindDeps2_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Result_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

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
  MR_Word ModuleLocn_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_109_105_95_95_104_111_49_95_95_91_53_93_95_48_11_p_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_50_52_95_95_91_53_93_95_48_12_p_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Acc_0_7,
  MR_Word * STATE_VARIABLE_Acc_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0(
  MR_Word KeepGoing_13,
  MR_Word DependenciesType_14,
  MR_Word ModuleLocn_15,
  MR_Word Globals_16,
  MR_Word ModuleIndex_17,
  MR_Word * Succeeded_18,
  MR_Word Modules0_19,
  MR_Word * Modules_20,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_fi_12_p_0(
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
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_plain_union_loop_mi_12_p_0(
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
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi_12_p_0(
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
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Box STATE_VARIABLE_Acc_0_7,
  MR_Box * STATE_VARIABLE_Acc_8,
  MR_Box STATE_VARIABLE_Info_0_9,
  MR_Box * STATE_VARIABLE_Info_10,
  MR_Box STATE_VARIABLE_IO_0_11,
  MR_Box * STATE_VARIABLE_IO_12);

static void MR_CALL 
make__dependencies__target_dependencies_2_f_0_16(
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
make__dependencies__target_dependencies_2_f_0_15(
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
make__dependencies__target_dependencies_2_f_0_14(
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
make__dependencies__target_dependencies_2_f_0_13(
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
make__dependencies__target_dependencies_2_f_0_12(
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
make__dependencies__target_dependencies_2_f_0_11(
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
make__dependencies__target_dependencies_2_f_0_10(
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
make__dependencies__target_dependencies_2_f_0_9(
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
make__dependencies__target_dependencies_2_f_0_8(
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
make__dependencies__target_dependencies_2_f_0_7(
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
make__dependencies__target_dependencies_2_f_0_6(
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
make__dependencies__target_dependencies_2_f_0_5(
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
make__dependencies__target_dependencies_2_f_0_4(
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
make__dependencies__target_dependencies_2_f_0_3(
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
make__dependencies__target_dependencies_2_f_0_2(
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
make__dependencies__target_dependencies_2_f_0_1(
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
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0_2(
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
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0_1(
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
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0(
  MR_Word Globals_4);

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
make__dependencies__of__ho13_2_f_0_2(
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
make__dependencies__of__ho13_2_f_0_1(
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
make__dependencies__of__ho13_2_f_0(
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
make__dependencies__compiled_code_dependencies_1_f_0_37(
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
make__dependencies__compiled_code_dependencies_1_f_0_36(
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
make__dependencies__compiled_code_dependencies_1_f_0_35(
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
make__dependencies__compiled_code_dependencies_1_f_0_34(
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
make__dependencies__compiled_code_dependencies_1_f_0_33(
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
make__dependencies__compiled_code_dependencies_1_f_0_32(
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
make__dependencies__compiled_code_dependencies_1_f_0_31(
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
make__dependencies__compiled_code_dependencies_1_f_0_30(
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
make__dependencies__compiled_code_dependencies_1_f_0_29(
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
make__dependencies__compiled_code_dependencies_1_f_0_28(
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
make__dependencies__compiled_code_dependencies_1_f_0_27(
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
make__dependencies__compiled_code_dependencies_1_f_0_26(
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
make__dependencies__compiled_code_dependencies_1_f_0_25(
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
make__dependencies__compiled_code_dependencies_1_f_0_24(
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
make__dependencies__compiled_code_dependencies_1_f_0_23(
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
make__dependencies__compiled_code_dependencies_1_f_0_22(
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
make__dependencies__imports_0_f_0_8(
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
make__dependencies__imports_0_f_0_7(
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
make__dependencies__imports_0_f_0_6(
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
make__dependencies__imports_0_f_0_5(
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
make__dependencies__imports_0_f_0_4(
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
make__dependencies__imports_0_f_0_3(
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
make__dependencies__imports_0_f_0_2(
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
make__dependencies__imports_0_f_0_1(
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
make__dependencies__imports_0_f_0(void);

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
make__dependencies____Unify____foldl3_pred_with_status_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static void MR_CALL 
make__dependencies____Compare____foldl3_pred_with_status_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7);

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
make__dependencies____Unify____module_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____module_locn_0_0_10001(
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


static /* final */ const MR_Box make__dependencies_scalar_common_1[13][2];

static /* final */ const MR_Box make__dependencies_scalar_common_2[47][3];

static /* final */ const MR_Box make__dependencies_scalar_common_3[3][1];

static /* final */ const MR_Box make__dependencies_scalar_common_4[6][11];

static /* final */ const MR_Box make__dependencies_scalar_common_5[4][13];

static /* final */ const MR_Box make__dependencies_scalar_common_6[31][5];

static /* final */ const MR_Integer make__dependencies_scalar_common_7[1][2];

static /* final */ const MR_Box make__dependencies_scalar_common_8[1][14];

static /* final */ const MR_Box make__dependencies_scalar_common_9[12][6];

static /* final */ const MR_Box make__dependencies_scalar_common_10[1][12];

static /* final */ const MR_Box make__dependencies_scalar_common_11[2][4];

static /* final */ const MR_Box make__dependencies_scalar_common_12[3][10];

static /* final */ const MR_Box make__dependencies_scalar_common_13[3][7];

static /* final */ const MR_Box make__dependencies_scalar_common_14[1][8];

static /* final */ const MR_Box make__dependencies_scalar_common_15[1][9];


struct make__dependencies__vector_common_type_16_0_s {
  const MR_String make__dependencies__vector_common_type_16_0__vct_16_f_0;
};

static /* final */ const struct make__dependencies__vector_common_type_16_0_s make__dependencies_vector_common_16[4];



static /* final */ const MR_Box make__dependencies_scalar_common_1[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__deps_set__dependency_file_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[1])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[5])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[15])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[14])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[11])))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_2[47][3] = {
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
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_1[3]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0)),
    ((MR_Box) (&make__dependencies_scalar_common_1[3]))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[1])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[2])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[2])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_31)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_34)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_36)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__of__ho8_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__of__ho9_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__of__ho10_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__of__ho13_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__of__ho14_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__of__ho16_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__of__ho17_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__of__ho18_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[0])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[1])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_4[1])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  41 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[28])),
    ((MR_Box) (make__dependencies__find_transitive_module_dependencies_2_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  42 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[28])),
    ((MR_Box) (make__dependencies__find_transitive_module_dependencies_2_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  43 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[7])),
    ((MR_Box) (make__dependencies__make_local_module_id_options_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  44 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies_scalar_common_2[1]))
  },
  /* row  45 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_11[1])),
    ((MR_Box) (make__dependencies__check_dependencies_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  46 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[30])),
    ((MR_Box) (make__dependencies__fact_table_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_3[3][1] = {
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

static /* final */ const MR_Box make__dependencies_scalar_common_4[6][11] = {
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
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
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

static /* final */ const MR_Box make__dependencies_scalar_common_5[4][13] = {
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
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
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
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_6[31][5] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[4]))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[5]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[6]))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_8)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[7]))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[8]))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[9]))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[10]))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[12]))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[13]))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[1])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_7)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_2[14])),
    ((MR_Box) (&make__dependencies_scalar_common_2[13]))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[1])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_9)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_2[15])),
    ((MR_Box) (&make__dependencies_scalar_common_2[13]))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_10)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[13]))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_12)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[16]))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_14)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[16]))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_16)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[18]))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_18)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[19]))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[2])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_21)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_2[17])),
    ((MR_Box) (&make__dependencies_scalar_common_9[6]))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_27)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[20]))
  },
  /* row  18 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_29)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[21]))
  },
  /* row  19 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[3])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_32)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_2[22])),
    ((MR_Box) (&make__dependencies_scalar_common_2[23]))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_35)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[24]))
  },
  /* row  21 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_37)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[25]))
  },
  /* row  22 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[34]))
  },
  /* row  23 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[35]))
  },
  /* row  24 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[36]))
  },
  /* row  25 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[37]))
  },
  /* row  26 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_8)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (&make__dependencies_scalar_common_2[38]))
  },
  /* row  27 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  28 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  29 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  30 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Integer make__dependencies_scalar_common_7[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_8[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
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

static /* final */ const MR_Box make__dependencies_scalar_common_9[12][6] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_9)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (&make__dependencies_scalar_common_6[3]))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_10)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_6[1])),
    ((MR_Box) (&make__dependencies_scalar_common_9[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_11)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (&make__dependencies_scalar_common_9[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_7)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_6[5])),
    ((MR_Box) (&make__dependencies_scalar_common_6[6]))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_8)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_6[4])),
    ((MR_Box) (&make__dependencies_scalar_common_9[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_19)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_6[14])),
    ((MR_Box) (&make__dependencies_scalar_common_6[15]))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_20)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_6[13])),
    ((MR_Box) (&make__dependencies_scalar_common_9[5]))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_10[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
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

static /* final */ const MR_Box make__dependencies_scalar_common_11[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[8])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_dependency_status_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_12[3][10] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
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

static /* final */ const MR_Box make__dependencies_scalar_common_13[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row   2 */
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

static /* final */ const MR_Box make__dependencies_scalar_common_14[1][8] = {
  /* row   0 */
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

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
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

static const MR_VA_PseudoTypeInfo_Struct9 make__dependencies____vpti_pred_9__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3__pseudo_4__pseudo_4 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 9,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3),
    (MR_PseudoTypeInfo) ((MR_Integer) 3),
    (MR_PseudoTypeInfo) ((MR_Integer) 4),
    (MR_PseudoTypeInfo) ((MR_Integer) 4)
  }
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_foldl3_pred_with_status_4 = {
  (MR_Integer) 4,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__dependencies____Unify____foldl3_pred_with_status_4_0_10001)),
  ((MR_Box) (make__dependencies____Compare____foldl3_pred_with_status_4_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "foldl3_pred_with_status",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__dependencies____vpti_pred_9__plain_libs__globals__type_ctor_info_globals_0__pseudo_1__plain_libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0__pseudo_2__pseudo_2__pseudo_3__pseudo_3__pseudo_4__pseudo_4) },
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

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_0 = {
  (MR_String) "local_module",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_1 = {
  (MR_String) "any_module",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_ordinal_ordered_module_locn_0[2] = {
  &make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_0,
  &make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_1
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_module_locn_0[2] = {
  &make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_1,
  &make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_module_locn_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_module_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__dependencies____Unify____module_locn_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____module_locn_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "module_locn",
  { make__dependencies__make__dependencies__enum_name_ordered_module_locn_0 },
  { make__dependencies__make__dependencies__enum_ordinal_ordered_module_locn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_module_locn_0,

};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_transitive_dependencies_root_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_type_0),
  (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_module_locn_0)
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
  MR_Word Var_42,
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0(TargetFileName_8, BuildDepsSucceeded_9, DepFiles_10, WriteDepFile_11, DepTimestamps_12);
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__debug_newer_dependencies_2__1545__1_3_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word MaybeTimestamp_8,
  MR_Word LambdaHeadVar__1_29)
{
  MR_bool succeeded;
  MR_Word MaybeDepTimestamp_34 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_29, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) MaybeDepTimestamp_34)) == (MR_Integer) 1))
    succeeded = MR_TRUE;
  else
  {
    MR_Word DepTimestamp_16 = ((MR_Word) ((MR_hl_field(0, MaybeDepTimestamp_34, (MR_Integer) 0))));
    MR_Word Timestamp_17;
    MR_Word Var_30;
    MR_Word Var_40;

    succeeded = ((MR_tag((MR_Word) MaybeTimestamp_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Timestamp_17 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_8, (MR_Integer) 0))));
      Var_30 = (MR_Integer) 2;
      libs__timestamp____Compare____timestamp_0_0(&Var_40, DepTimestamp_16, Timestamp_17);
      succeeded = (Var_30 == Var_40);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1439__1_3_p_0(
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
make__dependencies__IntroducedFrom__pred__find_transitive_module_dependencies_2__1207__1_2_p_0(
  MR_Word LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68)
{
  *LambdaHeadVar__2_68 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_67, (MR_Integer) 1))));
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__find_transitive_module_dependencies_2__1199__1_2_p_0(
  MR_Word LambdaHeadVar__1_59,
  MR_Word * LambdaHeadVar__2_60)
{
  *LambdaHeadVar__2_60 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_59, (MR_Integer) 1))));
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__find_transitive_module_dependencies_2__1184__1_2_p_0(
  MR_Word ModuleName_26,
  MR_Word MDI_ModuleName_31)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_26, MDI_ModuleName_31);
  return succeeded;
}

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__fact_table_files__874__1_1_f_0(
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
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__846__1_3_p_0(
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

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__compiled_code_dependencies__367__1_8_p_0(
  MR_Word HeadVar__1_77,
  MR_Word HeadVar__2_78,
  MR_Word * HeadVar__3_79,
  MR_Word * HeadVar__4_80,
  MR_Word HeadVar__5_81,
  MR_Word * HeadVar__6_82)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_100_95_99_111_100_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_51_54_55_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(HeadVar__3_79, HeadVar__4_80, HeadVar__5_81, HeadVar__6_82);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_111_109_112_105_108_101_100_95_99_111_100_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_51_54_55_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_79,
  MR_Word * HeadVar__4_80,
  MR_Word HeadVar__5_81,
  MR_Word * HeadVar__6_82)
{
  *HeadVar__3_79 = (MR_Integer) 1;
  *HeadVar__4_80 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  *HeadVar__6_82 = HeadVar__5_81;
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies__1394__1_1_p_0(
  MR_Word LambdaHeadVar__1_35)
{
  MR_bool succeeded;
  MR_Word DepStatus_49 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_35, (MR_Integer) 1))));

  succeeded = (DepStatus_49 != (MR_Integer) 2);
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__remove_nested_modules__1253__1_2_p_0(
  MR_Word NestedModules_13,
  MR_Word HeadVar__2_34)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedModules_13, ((MR_Box) (HeadVar__2_34)));
  return succeeded;
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__243__1_8_p_0(
  MR_Word HeadVar__1_99,
  MR_Word HeadVar__2_100,
  MR_Word * HeadVar__3_101,
  MR_Word * HeadVar__4_102,
  MR_Word HeadVar__5_103,
  MR_Word * HeadVar__6_104)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_50_52_51_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(HeadVar__3_101, HeadVar__4_102, HeadVar__5_103, HeadVar__6_104);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_50_52_51_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_101,
  MR_Word * HeadVar__4_102,
  MR_Word HeadVar__5_103,
  MR_Word * HeadVar__6_104)
{
  *HeadVar__3_101 = (MR_Integer) 1;
  *HeadVar__4_102 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  *HeadVar__6_104 = HeadVar__5_103;
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__290__1_8_p_0(
  MR_Word HeadVar__1_157,
  MR_Word HeadVar__2_158,
  MR_Word * HeadVar__3_159,
  MR_Word * HeadVar__4_160,
  MR_Word HeadVar__5_161,
  MR_Word * HeadVar__6_162)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_50_57_48_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(HeadVar__3_159, HeadVar__4_160, HeadVar__5_161, HeadVar__6_162);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_50_57_48_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_159,
  MR_Word * HeadVar__4_160,
  MR_Word HeadVar__5_161,
  MR_Word * HeadVar__6_162)
{
  *HeadVar__3_159 = (MR_Integer) 1;
  *HeadVar__4_160 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  *HeadVar__6_162 = HeadVar__5_161;
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
make__dependencies____Compare____module_locn_0_0(
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
make__dependencies____Unify____module_locn_0_0(
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

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

void MR_CALL 
make__dependencies____Compare____foldl3_pred_with_status_4_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_Acc_7,
  MR_Word TypeInfo_for_Info_8,
  MR_Word TypeInfo_for_IO_9,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
make__dependencies____Unify____foldl3_pred_with_status_4_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_Acc_6,
  MR_Word TypeInfo_for_Info_7,
  MR_Word TypeInfo_for_IO_8,
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
make__dependencies____Compare____find_module_deps_plain_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_plain_set_1_0(
  MR_Word TypeInfo_for_T_5,
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
make__dependencies____Compare____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_5,
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

void MR_CALL 
make__dependencies____Compare____cached_transitive_foreign_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_foreign_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_dependencies_0_0(
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
make__dependencies____Compare____cached_indirect_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_indirect_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

  mercury__builtin__compare_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_direct_imports_0_0(
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

  succeeded = make__dependencies__IntroducedFrom__pred__debug_newer_dependencies_2__1545__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__dependencies__debug_newer_dependencies_2_6_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_String TargetFileName_7,
  MR_Word MaybeTimestamp_8,
  MR_Word DepFiles_9,
  MR_Word DepTimestamps_10)
{
  MR_bool succeeded;
  MR_Word TypeInfo_39_39;
  MR_Word DepTimestampAL_12;
  MR_Word NewerDepsAL0_18;
  MR_Word NewerDepsAL_19;
  MR_Word Var_28;
  MR_Word conv0_NewerDepsAL0_18;
  MR_Word conv1_NewerDepsAL_19;

  mercury__io__write_string_3_p_0(TargetFileName_7);
  mercury__io__write_string_3_p_0((MR_String) " [");
  mercury__io__write_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[1]), ((MR_Box) (MaybeTimestamp_8)));
  mercury__io__write_string_3_p_0((MR_String) "]: newer dependencies:\n");
  mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_T_35, (MR_Word) (&make__dependencies_scalar_common_2[1]), DepFiles_9, DepTimestamps_10, &DepTimestampAL_12);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[11]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (make__dependencies__debug_newer_dependencies_2_6_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (TypeInfo_for_T_35));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (MaybeTimestamp_8));
  }
  {
    TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_39_39, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_for_T_35));
    MR_hl_field(0, TypeInfo_39_39, 2) = ((MR_Box) (&make__dependencies_scalar_common_2[1]));
  }
  mercury__list__filter_3_p_0(TypeInfo_39_39, (MR_Word) (Var_28), (MR_Word) (DepTimestampAL_12), &conv0_NewerDepsAL0_18);
  NewerDepsAL0_18 = (MR_Word) (conv0_NewerDepsAL0_18);
  mercury__list__sort_2_p_0(TypeInfo_39_39, (MR_Word) (NewerDepsAL0_18), &conv1_NewerDepsAL_19);
  NewerDepsAL_19 = (MR_Word) (conv1_NewerDepsAL_19);
  make__dependencies__make_write_dependency_file_and_timestamp_list_3_p_0(TypeInfo_for_T_35, NewerDepsAL_19);
}

static void MR_CALL 
make__dependencies__make_write_dependency_file_and_timestamp_list_3_p_0(
  MR_Word TypeInfo_for_T_21,
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
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_char_3_p_0((MR_Char) 9);
      mercury__io__write_3_p_0(TypeInfo_for_T_21, DepFile_10);
      mercury__io__write_char_3_p_0((MR_Char) 32);
      mercury__io__write_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[1]), ((MR_Box) (MaybeTimestamp_11)));
      mercury__io__nl_2_p_0();
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
  MR_Word Var_16;

  mercury__io__write_string_3_p_0(TargetFileName_7);
  mercury__io__write_string_3_p_0((MR_String) ": dependencies could not be built.\n\t");
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&make__dependencies_scalar_common_13[2]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (make__dependencies__check_dependencies_debug_unbuilt_5_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (Globals_6));
  }
  mercury__io__write_list_5_p_0((MR_Word) (&make__dependencies_scalar_common_2[0]), UnbuiltDependencies_8, (MR_String) ",\n\t", Var_16);
  mercury__io__nl_2_p_0();
}

static void MR_CALL 
make__dependencies__make_write_target_dependency_status_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2)
{
  MR_Word DepTarget_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word DepStatus_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String DepStatusStr_9 = ((&make__dependencies_vector_common_16[0 + DepStatus_7]))->make__dependencies__vector_common_type_16_0__vct_16_f_0;

  make__util__make_write_dependency_file_4_p_0(Globals_5, DepTarget_6);
  mercury__io__write_string_3_p_0((MR_String) " - ");
  mercury__io__write_string_3_p_0(DepStatusStr_9);
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
make__dependencies__combine_deps_2_10_p_0(
  MR_Word TypeInfo_for_T_51,
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
    Var_29 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_27_27, (MR_Integer) 14))) & (MR_Integer) 1);
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
    *Deps_16 = mercury__sparse_bitset__union_2_f_0(TypeInfo_for_T_51, Deps1_20, Deps2_22);
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
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__dependencies_scalar_common_13[1]));
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

  conv0_LambdaHeadVar__2_28 = make__dependencies__IntroducedFrom__func__fact_table_files__874__1_1_f_0(((MR_String) (wrapper_arg_1)));
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
    *Files_12 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies_scalar_common_2[46]), FactTableFiles_18);
  }
}

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word Languages_15;
  MR_Word IntermodSucceeded_16;
  MR_Word IntermodModules_17;
  MR_Word ForeignSucceeded_18;
  MR_Word STATE_VARIABLE_Info_23_23;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_64;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &Languages_15);
  make__dependencies__intermod_imports_8_p_0(Globals_9, ModuleIndex_10, &IntermodSucceeded_16, &IntermodModules_17, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_23);
  Var_25 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 14))) & (MR_Integer) 1);
  Var_31 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_15);
  Var_27 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), IntermodModules_17, ((MR_Box) (ModuleIndex_10)));
  Var_28 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
  Var_64 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Var_27);
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_108_111_111_112_95_109_105_95_95_104_111_50_50_95_95_91_51_93_95_48_12_p_0(Var_31, Var_25, Globals_9, Var_64, (MR_Integer) 1, &ForeignSucceeded_18, Var_28, Modules_12, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
  *Succeeded_11 = libs__maybe_succeeded__and_2_f_0(IntermodSucceeded_16, ForeignSucceeded_18);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_108_111_111_112_95_109_105_95_95_104_111_50_50_95_95_91_51_93_95_48_12_p_0(
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
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word CachedForeignImports0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 13))));
  MR_Word CachedResult_18;
  MR_Box conv0_CachedResult_18;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), CachedForeignImports0_17, ((MR_Box) (ModuleIndex_12)), &conv0_CachedResult_18);
  if (succeeded)
  {
    CachedResult_18 = ((MR_Word) (conv0_CachedResult_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Succeeded_13 = ((MR_Unsigned) ((MR_hl_field(0, CachedResult_18, (MR_Integer) 0))) & (MR_Integer) 1);
    *ForeignModules_14 = ((MR_Word) ((MR_hl_field(0, CachedResult_18, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
  }
  else
  {
    MR_Word Succeeded0_19;
    MR_Word ImportedModules_20;
    MR_Word STATE_VARIABLE_Info_28_28;

    make__dependencies__find_transitive_implementation_imports_8_p_0(Globals_11, ModuleIndex_12, &Succeeded0_19, &ImportedModules_20, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
    switch (Succeeded0_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_13 = (MR_Integer) 0;
          *ForeignModules_14 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_28_28;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Result_21;
          MR_Word CachedForeignImports1_22;
          MR_Word CachedForeignImports_23;
          MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_28_28, (MR_Integer) 14))) & (MR_Integer) 1);
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word STATE_VARIABLE_Info_34_34;
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
          MR_Word Var_110;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Integer Var_117;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Unsigned packed_word_4;

          Var_32 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ImportedModules_20, ((MR_Box) (ModuleIndex_12)));
          Var_33 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_50_95_95_91_51_93_95_48_11_p_0(Languages_10, Var_30, Globals_11, Var_32, Succeeded_13, Var_33, ForeignModules_14, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_34_34);
          {
            Result_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Result_21, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_13));
            MR_hl_field(0, Result_21, 1) = ((MR_Box) (*ForeignModules_14));
          }
          CachedForeignImports1_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 13))));
          mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (ModuleIndex_12)), ((MR_Box) (Result_21)), CachedForeignImports1_22, &CachedForeignImports_23);
          Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 0))));
          Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 1))));
          Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 2))));
          Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 3))));
          Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 4))));
          Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 5))));
          Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 6))));
          Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 7))));
          Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 8))));
          Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 9))));
          Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 10))));
          Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 11))));
          Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 12))));
          packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 14)));
          Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 15))));
          Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 16))));
          Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 17))));
          Var_117 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 18))));
          Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 19))));
          Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_34_34, (MR_Integer) 20))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_25 = base;
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
            MR_hl_field(0, base, 12) = ((MR_Box) (Var_110));
            MR_hl_field(0, base, 13) = ((MR_Box) (CachedForeignImports_23));
            MR_hl_field(0, base, 14) = (MR_Box) (packed_word_4);
            MR_hl_field(0, base, 15) = ((MR_Box) (Var_114));
            MR_hl_field(0, base, 16) = ((MR_Box) (Var_115));
            MR_hl_field(0, base, 17) = ((MR_Box) (Var_116));
            MR_hl_field(0, base, 18) = ((MR_Box) (Var_117));
            MR_hl_field(0, base, 19) = ((MR_Box) (Var_118));
            MR_hl_field(0, base, 20) = ((MR_Box) (Var_119));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word Var_29,
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word ModuleIndexes_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Deps_0_20,
  MR_Word * STATE_VARIABLE_Deps_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word Var_26;

  Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ModuleIndexes_15);
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_108_111_111_112_95_109_105_95_95_104_111_50_51_95_95_91_51_93_95_48_12_p_0(Var_29, KeepGoing_12, Globals_14, Var_26, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Deps_0_20, STATE_VARIABLE_Deps_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_108_111_111_112_95_109_105_95_95_104_111_50_51_95_95_91_51_93_95_48_12_p_0(
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

  succeeded = make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__846__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_32);
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
      MR_hl_field(0, ForLangsPred_21, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[10]));
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
  *Modules_12 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules0_15, ((MR_Box) (ModuleIndex_10)));
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
  KeepGoing_23 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 14))) & (MR_Integer) 1);
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
    MR_Word Var_30;
    MR_Word Var_56;

    Var_29 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    Var_56 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), DirectImports_22);
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi__ho21_12_p_0(KeepGoing_23, Globals_9, Var_56, (MR_Integer) 1, &IndirectSucceeded_24, Var_29, &IndirectImports0_25, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_16);
    Var_30 = mercury__sparse_bitset__delete_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), IndirectImports0_25, ((MR_Box) (ModuleIndex_10)));
    *Modules_12 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Var_30, DirectImports_22);
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

  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), CachedIndirectImports0_15, ((MR_Box) (ModuleIndex_10)), &conv0_CachedResult_16);
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
    MR_Word Var_68;
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
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Integer Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Unsigned packed_word_3;

    make__dependencies__indirect_imports_2__ho6_9_p_0(Globals_9, ModuleIndex_10, Succeeded_11, Modules_12, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_25_25);
    {
      Result_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_17, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_17, 1) = ((MR_Box) (*Modules_12));
    }
    CachedIndirectImports1_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 11))));
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (ModuleIndex_10)), ((MR_Box) (Result_17)), CachedIndirectImports1_18, &CachedIndirectImports_19);
    Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 0))));
    Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 1))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 2))));
    Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 3))));
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 4))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 5))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 6))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 7))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 8))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 9))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 10))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 12))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 13))));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 14)));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 15))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 16))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 17))));
    Var_87 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 18))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 19))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_25_25, (MR_Integer) 20))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_69));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_75));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_76));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_77));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_78));
      MR_hl_field(0, base, 11) = ((MR_Box) (CachedIndirectImports_19));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_80));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_81));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_3);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_85));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_89));
    }
  }
}

static void MR_CALL 
make__dependencies__indirect_imports_2__ho6_9_p_0(
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
  KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_26_26, (MR_Integer) 14))) & (MR_Integer) 1);
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
    MR_Word Var_32;
    MR_Word Var_66;

    Var_29 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    Var_66 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), DirectImports_18);
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi__ho21_12_p_0(KeepGoing_19, Globals_10, Var_66, (MR_Integer) 1, &IndirectSucceeded_20, Var_29, &IndirectImports0_21, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_23);
    Var_32 = mercury__sparse_bitset__delete_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), IndirectImports0_21, ((MR_Box) (ModuleIndex_12)));
    *IndirectImports_14 = mercury__sparse_bitset__difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Var_32, DirectImports_18);
    *Succeeded_13 = libs__maybe_succeeded__and_2_f_0(DirectSucceeded_17, IndirectSucceeded_20);
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi__ho21_12_p_0(
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
      NewDeps_38 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules0_52, ((MR_Box) (MI_31)));
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

  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), CachedDirectImports0_15, ((MR_Box) (ModuleIndex_10)), &conv0_Result0_16);
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
    MR_Word KeepGoing_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Word Succeeded0_18;
    MR_Word Modules0_19;
    MR_Word Result_25;
    MR_Word CachedDirectImports1_26;
    MR_Word CachedDirectImports_27;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Integer Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Unsigned packed_word_4;

    make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded0_18, &Modules0_19, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32);
    succeeded = (Succeeded0_18 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_17 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_11 = (MR_Integer) 0;
      *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_37_37 = STATE_VARIABLE_Info_32_32;
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
        STATE_VARIABLE_Info_37_37 = STATE_VARIABLE_Info_34_34;
      }
      else
      {
        MR_Word Modules1_22;
        MR_Word Succeeded2_23;
        MR_Word Modules2_24;
        MR_Word Var_39;

        mercury__sparse_bitset__union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Modules0_19, IntermodModules_21, &Modules1_22);
        make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho7_11_p_0(KeepGoing_17, Globals_9, IntermodModules_21, &Succeeded2_23, Modules1_22, &Modules2_24, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_37_37);
        Var_39 = libs__maybe_succeeded__and_2_f_0(Succeeded0_18, Succeeded1_20);
        *Succeeded_11 = libs__maybe_succeeded__and_2_f_0(Var_39, Succeeded2_23);
        *Modules_12 = mercury__sparse_bitset__delete_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules2_24, ((MR_Box) (ModuleIndex_10)));
      }
    }
    {
      Result_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_25, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_25, 1) = ((MR_Box) (*Modules_12));
    }
    CachedDirectImports1_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 9))));
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (ModuleIndex_10)), ((MR_Box) (Result_25)), CachedDirectImports1_26, &CachedDirectImports_27);
    Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 0))));
    Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 1))));
    Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 2))));
    Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 3))));
    Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 4))));
    Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 5))));
    Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 6))));
    Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 7))));
    Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 8))));
    Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 10))));
    Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 11))));
    Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 12))));
    Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 13))));
    packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 14)));
    Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 15))));
    Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 16))));
    Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 17))));
    Var_122 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 18))));
    Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 19))));
    Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_37_37, (MR_Integer) 20))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_29 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_103));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_104));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_105));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_106));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_107));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_108));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_110));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_111));
      MR_hl_field(0, base, 9) = ((MR_Box) (CachedDirectImports_27));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_113));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_114));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_115));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_116));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_4);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_119));
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_120));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_121));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_122));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_123));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_124));
    }
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho7_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word ModuleIndexes_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Deps_0_20,
  MR_Word * STATE_VARIABLE_Deps_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word Var_26;

  Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ModuleIndexes_15);
  make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi__ho20_12_p_0(KeepGoing_12, Globals_14, Var_26, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Deps_0_20, STATE_VARIABLE_Deps_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi__ho20_12_p_0(
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

        libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 498, &Transitive_16);
        switch (Transitive_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, Succeeded_11, Modules_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modules0_23;

              make__dependencies__find_transitive_module_dependencies_10_p_0(Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, Succeeded_11, &Modules0_23, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
              *Modules_12 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules0_23, ((MR_Box) (ModuleIndex_10)));
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_2_8_p_0(
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

  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), CachedNonIntermodDirectImports0_15, ((MR_Box) (ModuleIndex_10)), &conv0_Result0_16);
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
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Integer Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Unsigned packed_word_3;

    make__dependencies__non_intermod_direct_imports_2_8_p_0(Globals_9, ModuleIndex_10, Succeeded_11, Modules_12, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_24);
    {
      Result_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_17, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_17, 1) = ((MR_Box) (*Modules_12));
    }
    CachedNonIntermodDirectImports1_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 10))));
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (ModuleIndex_10)), ((MR_Box) (Result_17)), CachedNonIntermodDirectImports1_18, &CachedNonIntermodDirectImports_19);
    Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 0))));
    Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 1))));
    Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 2))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 3))));
    Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 4))));
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 5))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 6))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 7))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 8))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 9))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 11))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 12))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 13))));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 14)));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 15))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 16))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 17))));
    Var_86 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 18))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 19))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_24_24, (MR_Integer) 20))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_68));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_69));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_75));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_76));
      MR_hl_field(0, base, 10) = ((MR_Box) (CachedNonIntermodDirectImports_19));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_78));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_79));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_80));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_3);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_83));
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_85));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_88));
    }
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
  *HeadVar__4_4 = mercury__sparse_bitset__make_singleton_set_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_10)));
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
make__dependencies__map_find_module_deps_fi_10_p_0(
  MR_Word FindDeps1_11,
  MR_Word FindDeps2_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Result_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 14))) & (MR_Integer) 1);
  MR_Word Succeeded1_20;
  MR_Word Modules1_21;
  MR_Word STATE_VARIABLE_Info_27_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps1_11, (MR_Integer) 1))));
  MR_Box conv4_Succeeded1_20;
  MR_Box conv3_Modules1_21;
  MR_Box conv2_STATE_VARIABLE_Info_27_27;
  MR_Box conv1_STATE_VARIABLE_IO_28_28;

  func_0(((MR_Box) (FindDeps1_11)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Succeeded1_20, &conv3_Modules1_21, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv2_STATE_VARIABLE_Info_27_27, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
  Succeeded1_20 = ((MR_Word) (conv4_Succeeded1_20));
  Modules1_21 = ((MR_Word) (conv3_Modules1_21));
  STATE_VARIABLE_Info_27_27 = ((MR_Word) (conv2_STATE_VARIABLE_Info_27_27));
  succeeded = (Succeeded1_20 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_15 = (MR_Integer) 0;
    *Result_16 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
  }
  else
  {
    MR_Word Succeeded2_22;
    MR_Word Var_29;
    MR_Word Var_53;

    Var_29 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    Var_53 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules1_21);
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_fi_12_p_0(KeepGoing_19, FindDeps2_12, Globals_13, Var_53, (MR_Integer) 1, &Succeeded2_22, Var_29, Result_16, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_24);
    *Succeeded_15 = libs__maybe_succeeded__and_2_f_0(Succeeded1_20, Succeeded2_22);
  }
}

static void MR_CALL 
make__dependencies__map_find_module_deps_mi_10_p_0(
  MR_Word FindDeps1_11,
  MR_Word FindDeps2_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Result_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 14))) & (MR_Integer) 1);
  MR_Word Succeeded1_20;
  MR_Word Modules1_21;
  MR_Word STATE_VARIABLE_Info_27_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps1_11, (MR_Integer) 1))));
  MR_Box conv4_Succeeded1_20;
  MR_Box conv3_Modules1_21;
  MR_Box conv2_STATE_VARIABLE_Info_27_27;
  MR_Box conv1_STATE_VARIABLE_IO_28_28;

  func_0(((MR_Box) (FindDeps1_11)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Succeeded1_20, &conv3_Modules1_21, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv2_STATE_VARIABLE_Info_27_27, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
  Succeeded1_20 = ((MR_Word) (conv4_Succeeded1_20));
  Modules1_21 = ((MR_Word) (conv3_Modules1_21));
  STATE_VARIABLE_Info_27_27 = ((MR_Word) (conv2_STATE_VARIABLE_Info_27_27));
  succeeded = (Succeeded1_20 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_15 = (MR_Integer) 0;
    *Result_16 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
  }
  else
  {
    MR_Word Succeeded2_22;
    MR_Word Var_29;
    MR_Word Var_53;

    Var_29 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    Var_53 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules1_21);
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi_12_p_0(KeepGoing_19, FindDeps2_12, Globals_13, Var_53, (MR_Integer) 1, &Succeeded2_22, Var_29, Result_16, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_24);
    *Succeeded_15 = libs__maybe_succeeded__and_2_f_0(Succeeded1_20, Succeeded2_22);
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
  MR_Word KeepGoing_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 14))) & (MR_Integer) 1);
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
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Var_33;
    MR_Word Var_57;

    Var_30 = mercury__set__init_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
    Var_57 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ModuleIndices_21);
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_plain_union_loop_mi_12_p_0(KeepGoing_19, FindFiles_11, Globals_13, Var_57, (MR_Integer) 1, &Succeeded2_22, Var_30, &FileNames_23, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_31_31);
    *Succeeded_15 = libs__maybe_succeeded__and_2_f_0(Succeeded1_20, Succeeded2_22);
    Var_33 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), FileNames_23);
    make__deps_set__dependency_files_to_index_set_4_p_0(Var_33, DepIndices_16, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_25);
  }
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
  mercury__sparse_bitset__foldl2_6_p_0((MR_Word) (&make__dependencies_scalar_common_1[4]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_1[0]), Var_27, ModuleIndexes_19, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_TargetFileIndexes_20, ((MR_Box) (STATE_VARIABLE_Info_25_25)), &conv7_STATE_VARIABLE_Info_22);
  TargetFileIndexes_20 = ((MR_Word) (conv8_TargetFileIndexes_20));
  *STATE_VARIABLE_Info_22 = ((MR_Word) (conv7_STATE_VARIABLE_Info_22));
  mercury__sparse_bitset__list_to_set_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[5]), TargetFileIndexes_20, TargetFiles_16);
}

MR_Word MR_CALL 
make__dependencies__init_cached_transitive_dependencies_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__dependencies_scalar_common_1[3]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__dependencies__init_cached_transitive_foreign_imports_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__dependencies__init_cached_indirect_imports_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__dependencies__init_cached_direct_imports_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]));
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

  mercury__io__write_string_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0(
  MR_Word TypeInfo_for_File_33,
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
    MR_String Var_28;

    *DepsResult_18 = (MR_Integer) 1;
    Var_28 = mercury__string__f_43_43_2_f_0(TargetFileName_12, (MR_String) " does not exist.\n");
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[9]));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps_10_p_0_1));
      MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_26, 3) = ((MR_Box) (Var_28));
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
        MR_hl_field(0, WriteMissingDeps_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_4[5]));
        MR_hl_field(0, WriteMissingDeps_22, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps_10_p_0_2));
        MR_hl_field(0, WriteMissingDeps_22, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, WriteMissingDeps_22, 3) = ((MR_Box) (TypeInfo_for_File_33));
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
          make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0(TypeInfo_for_File_33, TargetFileName_12, BuildDepsSucceeded_14, DepFiles_15, WriteDepFile_16, DepTimestamps_17);
          break;
      }
    }
    else
    {
      MR_Word Rebuild_23;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 661, &Rebuild_23);
      switch (Rebuild_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            succeeded = make__dependencies__newer_timestamp_2_p_0(DepTimestamps_17, Timestamp_21);
            if (succeeded)
            {
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[2]));
                MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps_10_p_0_3));
                MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(0, Var_34, 3) = ((MR_Box) (TypeInfo_for_File_33));
                MR_hl_field(0, Var_34, 4) = ((MR_Box) (TargetFileName_12));
                MR_hl_field(0, Var_34, 5) = ((MR_Box) (MaybeTimestamp_13));
                MR_hl_field(0, Var_34, 6) = ((MR_Box) (DepFiles_15));
                MR_hl_field(0, Var_34, 7) = ((MR_Box) (DepTimestamps_17));
              }
              make__util__debug_make_msg_4_p_0(Globals_11, Var_34);
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

  succeeded = make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1439__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2);
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
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[8]));
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

  mercury__io__write_string_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
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

  mercury__io__write_string_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
}

static MR_bool MR_CALL 
make__dependencies__check_dependencies_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__dependencies__IntroducedFrom__pred__check_dependencies__1394__1_1_p_0(((MR_Word) (wrapper_arg_1)));
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
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Globals_11));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, DepFiles_15, &DepStatusList_19, ((MR_Box) (STATE_VARIABLE_Info_0_27)), &conv3_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_33_33);
  STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv3_STATE_VARIABLE_Info_32_32));
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepFiles_15, DepStatusList_19, &DepStatusAL_20);
  mercury__list__filter_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[0]), (MR_Word) (&make__dependencies_scalar_common_2[45]), DepStatusAL_20, &UnbuiltDependencies_23);
  if ((UnbuiltDependencies_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word DepTimestamps_26;
    MR_Word Var_38;
    MR_String Var_40;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Box conv7_STATE_VARIABLE_Info_28;
    MR_Box conv6_STATE_VARIABLE_IO_44_44;

    Var_40 = mercury__string__f_43_43_2_f_0(TargetFileName_12, (MR_String) ": finished dependencies\n");
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[9]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_3));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (Var_40));
    }
    make__util__debug_make_msg_4_p_0(Globals_11, Var_38);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[1]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_4));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (Globals_11));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_42, DepFiles_15, &DepTimestamps_26, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv7_STATE_VARIABLE_Info_28, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_44_44);
    *STATE_VARIABLE_Info_28 = ((MR_Word) (conv7_STATE_VARIABLE_Info_28));
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__dependencies_scalar_common_13[0]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_5));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (Globals_11));
    }
    if (((MR_tag((MR_Word) MaybeTimestamp_13)) == (MR_Integer) 1))
    {
      MR_Word Var_75;
      MR_String Var_76;

      *DepsResult_16 = (MR_Integer) 1;
      Var_76 = mercury__string__f_43_43_2_f_0(TargetFileName_12, (MR_String) " does not exist.\n");
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_75, 0) = ((MR_Box) (&make__dependencies_scalar_common_9[9]));
        MR_hl_field(0, Var_75, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_6));
        MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_75, 3) = ((MR_Box) (Var_76));
      }
      make__util__debug_make_msg_4_p_0(Globals_11, Var_75);
    }
    else
    {
      MR_Word Timestamp_72 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_13, (MR_Integer) 0))));

      succeeded = make__dependencies__error_in_timestamps_1_p_0(DepTimestamps_26);
      if (succeeded)
      {
        MR_Word WriteMissingDeps_73;

        *DepsResult_16 = (MR_Integer) 2;
        {
          WriteMissingDeps_73 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, WriteMissingDeps_73, 0) = ((MR_Box) (&make__dependencies_scalar_common_4[4]));
          MR_hl_field(0, WriteMissingDeps_73, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_7));
          MR_hl_field(0, WriteMissingDeps_73, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, WriteMissingDeps_73, 3) = ((MR_Box) (Globals_11));
          MR_hl_field(0, WriteMissingDeps_73, 4) = ((MR_Box) (TargetFileName_12));
          MR_hl_field(0, WriteMissingDeps_73, 5) = ((MR_Box) (BuildDepsSucceeded_14));
          MR_hl_field(0, WriteMissingDeps_73, 6) = ((MR_Box) (DepFiles_15));
          MR_hl_field(0, WriteMissingDeps_73, 7) = ((MR_Box) (Var_45));
          MR_hl_field(0, WriteMissingDeps_73, 8) = ((MR_Box) (DepTimestamps_26));
        }
        switch (BuildDepsSucceeded_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__util__debug_make_msg_4_p_0(Globals_11, WriteMissingDeps_73);
            break;
          case (MR_Integer) 1:
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_49_57_95_95_91_49_93_95_48_7_p_0(TargetFileName_12, BuildDepsSucceeded_14, DepFiles_15, Var_45, DepTimestamps_26);
            break;
        }
      }
      else
      {
        MR_Word Rebuild_74;

        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 661, &Rebuild_74);
        switch (Rebuild_74) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = make__dependencies__newer_timestamp_2_p_0(DepTimestamps_26, Timestamp_72);
              if (succeeded)
              {
                MR_Word Var_80;

                {
                  Var_80 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_80, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[2]));
                  MR_hl_field(0, Var_80, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_8));
                  MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(0, Var_80, 3) = ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
                  MR_hl_field(0, Var_80, 4) = ((MR_Box) (TargetFileName_12));
                  MR_hl_field(0, Var_80, 5) = ((MR_Box) (MaybeTimestamp_13));
                  MR_hl_field(0, Var_80, 6) = ((MR_Box) (DepFiles_15));
                  MR_hl_field(0, Var_80, 7) = ((MR_Box) (DepTimestamps_26));
                }
                make__util__debug_make_msg_4_p_0(Globals_11, Var_80);
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
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[0]));
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

  succeeded = make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1439__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2);
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
  mercury__list__filter_map_3_p_0((MR_Word) (&make__dependencies_scalar_common_2[44]), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies_scalar_common_11[0]), DepTimestampAL_14, &ErrorDeps0_18);
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
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Integer Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
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
      Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 0))));
      Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 1))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 2))));
      Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 3))));
      Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 4))));
      Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 5))));
      Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 6))));
      Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 7))));
      Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 9))));
      Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 10))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 11))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 12))));
      Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 13))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 14)));
      Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 15))));
      Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 16))));
      Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 17))));
      Var_117 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 18))));
      Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 19))));
      Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_35_35, (MR_Integer) 20))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_32 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_98));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_99));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_100));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_101));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_102));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_103));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_104));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_105));
        MR_hl_field(0, base, 8) = ((MR_Box) (DepStatusMap_19));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_107));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_108));
        MR_hl_field(0, base, 11) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 12) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 13) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 14) = (MR_Box) (packed_word_1);
        MR_hl_field(0, base, 15) = ((MR_Box) (Var_114));
        MR_hl_field(0, base, 16) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 17) = ((MR_Box) (Var_116));
        MR_hl_field(0, base, 18) = ((MR_Box) (Var_117));
        MR_hl_field(0, base, 19) = ((MR_Box) (Var_118));
        MR_hl_field(0, base, 20) = ((MR_Box) (Var_119));
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
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (&make__dependencies_scalar_common_3[2]));
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
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_175;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Integer Var_181;
        MR_Word Var_182;
        MR_Word Var_183;
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
          MR_String Var_192;

          parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_25, &ModuleDir_26);
          Var_192 = mercury__dir__this_directory_0_f_0();
          succeeded = (strcmp(ModuleDir_26, Var_192) == 0);
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
              MR_String Var_194;
              MR_String Var_196;
              MR_String Var_197;

              *Status_10 = (MR_Integer) 3;
              make__util__get_make_target_file_name_5_p_0(Globals_8, Target_20, &TargetFileName_28);
              Var_194 = mercury__string__f_43_43_2_f_0(Error_62, (MR_String) "\n");
              Var_196 = mercury__string__f_43_43_2_f_0((MR_String) "\' not found: ", Var_194);
              Var_197 = mercury__string__f_43_43_2_f_0(TargetFileName_28, Var_196);
              ErrorMsg_29 = mercury__string__f_43_43_2_f_0((MR_String) "** Error: file \140", Var_197);
              mercury__io__write_string_3_p_0(ErrorMsg_29);
            }
            else
              *Status_10 = (MR_Integer) 2;
          }
        }
        DepStatusMap1_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 8))));
        mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_9)), ((MR_Box) (*Status_10)), DepStatusMap1_30, &DepStatusMap_74);
        Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 0))));
        Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 1))));
        Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 2))));
        Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 3))));
        Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 4))));
        Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 5))));
        Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 6))));
        Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 7))));
        Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 9))));
        Var_172 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 10))));
        Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 11))));
        Var_174 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 12))));
        Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 13))));
        packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 14)));
        Var_178 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 15))));
        Var_179 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 16))));
        Var_180 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 17))));
        Var_181 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 18))));
        Var_182 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 19))));
        Var_183 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_50_50, (MR_Integer) 20))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_32 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_162));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_163));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_164));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_165));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_166));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_167));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_168));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_169));
          MR_hl_field(0, base, 8) = ((MR_Box) (DepStatusMap_74));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_171));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_172));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_173));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_174));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_175));
          MR_hl_field(0, base, 14) = (MR_Box) (packed_word_4);
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_178));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_179));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_180));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_181));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_182));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_183));
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
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), (MR_Word) (&make__dependencies_scalar_common_2[43]), LocalModules_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Options_12);
  *Options_12 = ((MR_Word) (conv1_Options_12));
}

static MR_bool MR_CALL 
make__dependencies__remove_nested_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__dependencies__IntroducedFrom__pred__remove_nested_modules__1253__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&make__dependencies_scalar_common_4[3]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (make__dependencies__remove_nested_modules_7_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Globals_8));
  }
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, Modules0_9, ((MR_Box) (Var_19)), &conv4_NestedModules_13, ((MR_Box) (STATE_VARIABLE_Info_0_14)), &conv3_STATE_VARIABLE_Info_15, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_17);
  NestedModules_13 = ((MR_Word) (conv4_NestedModules_13));
  *STATE_VARIABLE_Info_15 = ((MR_Word) (conv3_STATE_VARIABLE_Info_15));
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[29]));
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
  MR_Word ModuleLocn_13,
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
    MR_hl_field(0, DepsRoot_19, 1) = (MR_Box) (((((MR_Unsigned) (DependenciesType_12) << 1)) | (MR_Unsigned) (ModuleLocn_13)));
  }
  CachedTransDeps0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 12))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), CachedTransDeps0_20, ((MR_Box) (DepsRoot_19)), &conv0_Result0_21);
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
    MR_Word KeepGoing_22 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Word Result_23;
    MR_Word CachedTransDeps1_24;
    MR_Word CachedTransDeps_25;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_Info_31_31;
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
    MR_Word Var_108;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Integer Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Unsigned packed_word_4;

    Var_30 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__find_transitive_module_dependencies_2_12_p_0(KeepGoing_22, DependenciesType_12, ModuleLocn_13, Globals_11, ModuleIndex_14, Succeeded_15, Var_30, Modules_16, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_31_31);
    {
      Result_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_23, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_23, 1) = ((MR_Box) (*Modules_16));
    }
    CachedTransDeps1_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 12))));
    mercury__map__det_insert_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (DepsRoot_19)), ((MR_Box) (Result_23)), CachedTransDeps1_24, &CachedTransDeps_25);
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 1))));
    Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 2))));
    Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
    Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 4))));
    Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
    Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 6))));
    Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 7))));
    Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 8))));
    Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 9))));
    Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 10))));
    Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 11))));
    Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 13))));
    packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 14)));
    Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 15))));
    Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 16))));
    Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 17))));
    Var_114 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 18))));
    Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 19))));
    Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_31_31, (MR_Integer) 20))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_27 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_96));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_97));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_98));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_99));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_100));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_101));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_102));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_103));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_104));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_105));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_106));
      MR_hl_field(0, base, 12) = ((MR_Box) (CachedTransDeps_25));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_108));
      MR_hl_field(0, base, 14) = (MR_Box) (packed_word_4);
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_111));
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_112));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_113));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_114));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_115));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_116));
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_109_105_95_95_104_111_49_95_95_91_53_93_95_48_11_p_0(
  MR_Word Var_33,
  MR_Word Var_34,
  MR_Word Var_35,
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word Var_26;

  Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Ts_15);
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_50_52_95_95_91_53_93_95_48_12_p_0(Var_33, Var_34, Var_35, KeepGoing_12, Globals_14, Var_26, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Acc_0_20, STATE_VARIABLE_Acc_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_104_111_50_52_95_95_91_53_93_95_48_12_p_0(
  MR_Word Var_54,
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Acc_0_7,
  MR_Word * STATE_VARIABLE_Acc_8,
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
      *STATE_VARIABLE_Acc_8 = STATE_VARIABLE_Acc_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word T_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ts_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_37;
      MR_Word STATE_VARIABLE_Acc_46_46;
      MR_Word STATE_VARIABLE_Info_47_47;

      make__dependencies__find_transitive_module_dependencies_2_12_p_0(Var_54, Var_55, Var_56, HeadVar__3_3, T_31, &NewSucceeded_37, STATE_VARIABLE_Acc_0_7, &STATE_VARIABLE_Acc_46_46, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_49_49;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Acc_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_49_49 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Ts_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_49_49;
        next_value_of_STATE_VARIABLE_Acc_0_7 = STATE_VARIABLE_Acc_46_46;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Acc_0_7 = next_value_of_STATE_VARIABLE_Acc_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Acc_8 = STATE_VARIABLE_Acc_46_46;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_68;

  make__dependencies__IntroducedFrom__pred__find_transitive_module_dependencies_2__1207__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_68);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_68));
}

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_60;

  make__dependencies__IntroducedFrom__pred__find_transitive_module_dependencies_2__1199__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_60);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_60));
}

static MR_bool MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__dependencies__IntroducedFrom__pred__find_transitive_module_dependencies_2__1184__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0(
  MR_Word KeepGoing_13,
  MR_Word DependenciesType_14,
  MR_Word ModuleLocn_15,
  MR_Word Globals_16,
  MR_Word ModuleIndex_17,
  MR_Word * Succeeded_18,
  MR_Word Modules0_19,
  MR_Word * Modules_20,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  MR_bool succeeded;

  succeeded = mercury__sparse_bitset__member_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_17)), Modules0_19);
  if (succeeded)
  {
    *Succeeded_18 = (MR_Integer) 1;
    *Modules_20 = Modules0_19;
    *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
  }
  else
  {
    MR_Word Result0_24;
    MR_Word DepsRoot_23;
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, (MR_Integer) 12))));
    MR_Box conv0_Result0_24;

    {
      DepsRoot_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DepsRoot_23, 0) = ((MR_Box) (ModuleIndex_17));
      MR_hl_field(0, DepsRoot_23, 1) = (MR_Box) (((((MR_Unsigned) (DependenciesType_14) << 1)) | (MR_Unsigned) (ModuleLocn_15)));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), Var_52, ((MR_Box) (DepsRoot_23)), &conv0_Result0_24);
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
      *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
    }
    else
    {
      MR_Word ModuleName_26;
      MR_Word MaybeModuleDepInfo_27;
      MR_Word STATE_VARIABLE_Info_53_53;

      make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_48, ModuleIndex_17, &ModuleName_26);
      make__module_dep_file__get_module_dependencies_7_p_0(Globals_16, ModuleName_26, &MaybeModuleDepInfo_27, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_53_53);
      if ((MaybeModuleDepInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Succeeded_18 = (MR_Integer) 0;
        *Modules_20 = Modules0_19;
        *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_53_53;
      }
      else
      {
        MR_Word ModuleDepInfo_28 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_27, (MR_Integer) 0))));
        MR_String ModuleDir_29;

        parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_28, &ModuleDir_29);
        switch (ModuleLocn_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            {
              MR_String Var_240;

              Var_240 = mercury__dir__this_directory_0_f_0();
              succeeded = (strcmp(ModuleDir_29, Var_240) == 0);
            }
            break;
        }
        if (succeeded)
        {
          MR_Word FIMSpecs_30;
          MR_Word MDI_ModuleName_31;
          MR_Word Ancestors_32;
          MR_Word Children_33;
          MR_Word IntDeps_34;
          MR_Word ImpDeps_35;
          MR_Word ImportsToCheck_36;
          MR_Word IncludesToCheck_37;
          MR_Word ImportsToCheckSet_42;
          MR_Word IncludesToCheckSet_43;
          MR_Word OldImportingModule_44;
          MR_Word SucceededA_45;
          MR_Word Modules2_46;
          MR_Word SucceededB_47;
          MR_Word Var_55;
          MR_Word Var_74;
          MR_Word STATE_VARIABLE_Info_75_75;
          MR_Word Var_76;
          MR_Word STATE_VARIABLE_Info_77_77;
          MR_Word STATE_VARIABLE_Info_78_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word STATE_VARIABLE_Info_82_82;
          MR_Word STATE_VARIABLE_Info_84_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word STATE_VARIABLE_Info_88_88;
          MR_Word Modules1_98;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_131;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_136;
          MR_Word Var_137;
          MR_Integer Var_138;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Unsigned packed_word_2;
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
          MR_Word Var_179;
          MR_Word Var_181;
          MR_Integer Var_182;
          MR_Word Var_183;
          MR_Word Var_184;
          MR_Unsigned packed_word_3;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Word Var_188;
          MR_Word Var_189;
          MR_Word Var_190;
          MR_Word Var_191;
          MR_Word Var_192;
          MR_Word Var_193;
          MR_Word Var_194;
          MR_Word Var_195;
          MR_Word Var_196;
          MR_Word Var_197;
          MR_Word Var_198;
          MR_Word Var_201;
          MR_Word Var_203;
          MR_Integer Var_204;
          MR_Word Var_205;
          MR_Word Var_206;
          MR_Unsigned packed_word_4;

          parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(ModuleDepInfo_28, &FIMSpecs_30);
          parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ModuleDepInfo_28, &MDI_ModuleName_31);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[27]));
            MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__dependencies__find_transitive_module_dependencies_2_12_p_0_1));
            MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_55, 3) = ((MR_Box) (ModuleName_26));
            MR_hl_field(0, Var_55, 4) = ((MR_Box) (MDI_ModuleName_31));
          }
          mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140make.dependencies.find_transitive_module_dependencies_2\'/12", (MR_String) "ModuleName != MDI_ModuleName");
          Ancestors_32 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_26);
          parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_28, &Children_33);
          parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_28, &IntDeps_34);
          parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_28, &ImpDeps_35);
          switch (DependenciesType_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_Word ForeignDeps_40;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Word Var_63;
                MR_Word Var_64;

                mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies_scalar_common_2[41]), FIMSpecs_30, &ForeignDeps_40);
                {
                  Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_64, 0) = ((MR_Box) (ForeignDeps_40));
                  MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_63, 0) = ((MR_Box) (ImpDeps_35));
                  MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
                }
                {
                  Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_62, 0) = ((MR_Box) (IntDeps_34));
                  MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
                }
                {
                  Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_61, 0) = ((MR_Box) (Ancestors_32));
                  MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
                }
                ImportsToCheck_36 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_61);
                IncludesToCheck_37 = Children_33;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word ForeignDeps_97;

                mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies_scalar_common_2[42]), FIMSpecs_30, &ForeignDeps_97);
                {
                  Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_72, 0) = ((MR_Box) (ForeignDeps_97));
                  MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_71, 0) = ((MR_Box) (ImpDeps_35));
                  MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
                }
                {
                  Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_70, 0) = ((MR_Box) (IntDeps_34));
                  MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
                }
                {
                  Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_69, 0) = ((MR_Box) (Ancestors_32));
                  MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
                }
                ImportsToCheck_36 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_69);
                IncludesToCheck_37 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
              }
              break;
            case (MR_Integer) 0:
              {
                ImportsToCheck_36 = IntDeps_34;
                IncludesToCheck_37 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
              }
              break;
          }
          Var_74 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportsToCheck_36);
          make__deps_set__module_names_to_index_set_4_p_0(Var_74, &ImportsToCheckSet_42, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_75_75);
          Var_76 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IncludesToCheck_37);
          make__deps_set__module_names_to_index_set_4_p_0(Var_76, &IncludesToCheckSet_43, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_77_77);
          Modules1_98 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules0_19, ((MR_Box) (ModuleIndex_17)));
          Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 0))));
          Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 1))));
          Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 2))));
          Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 3))));
          Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 4))));
          Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 5))));
          Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 6))));
          Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 7))));
          Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 8))));
          Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 9))));
          Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 10))));
          Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 11))));
          Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 12))));
          Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 13))));
          packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 14)));
          Var_136 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 15))));
          OldImportingModule_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 16))));
          Var_137 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 17))));
          Var_138 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 18))));
          Var_139 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 19))));
          Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_77_77, (MR_Integer) 20))));
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_80, 0) = ((MR_Box) (ModuleName_26));
          }
          {
            Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
          }
          {
            STATE_VARIABLE_Info_78_78 = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 0) = ((MR_Box) (Var_120));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 1) = ((MR_Box) (Var_121));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 2) = ((MR_Box) (Var_122));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 3) = ((MR_Box) (Var_123));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 4) = ((MR_Box) (Var_124));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 5) = ((MR_Box) (Var_125));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 6) = ((MR_Box) (Var_126));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 7) = ((MR_Box) (Var_127));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 8) = ((MR_Box) (Var_128));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 9) = ((MR_Box) (Var_129));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 10) = ((MR_Box) (Var_130));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 11) = ((MR_Box) (Var_131));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 12) = ((MR_Box) (Var_132));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 13) = ((MR_Box) (Var_133));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 14) = (MR_Box) (packed_word_2);
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 15) = ((MR_Box) (Var_136));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 16) = ((MR_Box) (Var_79));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 17) = ((MR_Box) (Var_137));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 18) = ((MR_Box) (Var_138));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 19) = ((MR_Box) (Var_139));
            MR_hl_field(0, STATE_VARIABLE_Info_78_78, 20) = ((MR_Box) (Var_140));
          }
          make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_109_105_95_95_104_111_49_95_95_91_53_93_95_48_11_p_0(KeepGoing_13, DependenciesType_14, ModuleLocn_15, KeepGoing_13, Globals_16, ImportsToCheckSet_42, &SucceededA_45, Modules1_98, &Modules2_46, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_82_82);
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (ModuleName_26));
          }
          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
          }
          Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 0))));
          Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 1))));
          Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 2))));
          Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 3))));
          Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 4))));
          Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 5))));
          Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 6))));
          Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 7))));
          Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 8))));
          Var_172 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 9))));
          Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 10))));
          Var_174 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 11))));
          Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 12))));
          Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 13))));
          packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 14)));
          Var_179 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 15))));
          Var_181 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 17))));
          Var_182 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 18))));
          Var_183 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 19))));
          Var_184 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_82_82, (MR_Integer) 20))));
          {
            STATE_VARIABLE_Info_84_84 = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 0) = ((MR_Box) (Var_163));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 1) = ((MR_Box) (Var_164));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 2) = ((MR_Box) (Var_165));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 3) = ((MR_Box) (Var_166));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 4) = ((MR_Box) (Var_167));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 5) = ((MR_Box) (Var_168));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 6) = ((MR_Box) (Var_169));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 7) = ((MR_Box) (Var_170));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 8) = ((MR_Box) (Var_171));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 9) = ((MR_Box) (Var_172));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 10) = ((MR_Box) (Var_173));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 11) = ((MR_Box) (Var_174));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 12) = ((MR_Box) (Var_175));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 13) = ((MR_Box) (Var_176));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 14) = (MR_Box) (packed_word_3);
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 15) = ((MR_Box) (Var_179));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 16) = ((MR_Box) (Var_85));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 17) = ((MR_Box) (Var_181));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 18) = ((MR_Box) (Var_182));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 19) = ((MR_Box) (Var_183));
            MR_hl_field(0, STATE_VARIABLE_Info_84_84, 20) = ((MR_Box) (Var_184));
          }
          make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_109_105_95_95_104_111_49_95_95_91_53_93_95_48_11_p_0(KeepGoing_13, DependenciesType_14, ModuleLocn_15, KeepGoing_13, Globals_16, IncludesToCheckSet_43, &SucceededB_47, Modules2_46, Modules_20, STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_88_88);
          Var_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 0))));
          Var_186 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 1))));
          Var_187 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 2))));
          Var_188 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 3))));
          Var_189 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 4))));
          Var_190 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 5))));
          Var_191 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 6))));
          Var_192 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 7))));
          Var_193 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 8))));
          Var_194 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 9))));
          Var_195 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 10))));
          Var_196 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 11))));
          Var_197 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 12))));
          Var_198 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 13))));
          packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 14)));
          Var_201 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 15))));
          Var_203 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 17))));
          Var_204 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 18))));
          Var_205 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 19))));
          Var_206 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_88_88, (MR_Integer) 20))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (21 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_49 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_185));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_186));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_187));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_188));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_189));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_190));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_191));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_192));
            MR_hl_field(0, base, 8) = ((MR_Box) (Var_193));
            MR_hl_field(0, base, 9) = ((MR_Box) (Var_194));
            MR_hl_field(0, base, 10) = ((MR_Box) (Var_195));
            MR_hl_field(0, base, 11) = ((MR_Box) (Var_196));
            MR_hl_field(0, base, 12) = ((MR_Box) (Var_197));
            MR_hl_field(0, base, 13) = ((MR_Box) (Var_198));
            MR_hl_field(0, base, 14) = (MR_Box) (packed_word_4);
            MR_hl_field(0, base, 15) = ((MR_Box) (Var_201));
            MR_hl_field(0, base, 16) = ((MR_Box) (OldImportingModule_44));
            MR_hl_field(0, base, 17) = ((MR_Box) (Var_203));
            MR_hl_field(0, base, 18) = ((MR_Box) (Var_204));
            MR_hl_field(0, base, 19) = ((MR_Box) (Var_205));
            MR_hl_field(0, base, 20) = ((MR_Box) (Var_206));
          }
          *Succeeded_18 = libs__maybe_succeeded__and_2_f_0(SucceededA_45, SucceededB_47);
        }
        else
        {
          *Succeeded_18 = (MR_Integer) 1;
          *Modules_20 = Modules0_19;
          *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_53_53;
        }
      }
    }
  }
}

void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_fi_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word FindDeps_13,
  MR_Word Globals_14,
  MR_Word ModuleIndexes_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Deps_0_20,
  MR_Word * STATE_VARIABLE_Deps_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word Var_26;

  Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ModuleIndexes_15);
  make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_fi_12_p_0(KeepGoing_12, FindDeps_13, Globals_14, Var_26, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Deps_0_20, STATE_VARIABLE_Deps_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_fi_12_p_0(
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

void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_plain_union_mi_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word FindDeps_13,
  MR_Word Globals_14,
  MR_Word ModuleIndexes_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Deps_0_20,
  MR_Word * STATE_VARIABLE_Deps_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word Var_26;

  Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ModuleIndexes_15);
  make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_plain_union_loop_mi_12_p_0(KeepGoing_12, FindDeps_13, Globals_14, Var_26, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Deps_0_20, STATE_VARIABLE_Deps_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_plain_union_loop_mi_12_p_0(
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

void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word FindDeps_13,
  MR_Word Globals_14,
  MR_Word ModuleIndexes_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Deps_0_20,
  MR_Word * STATE_VARIABLE_Deps_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word Var_26;

  Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ModuleIndexes_15);
  make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi_12_p_0(KeepGoing_12, FindDeps_13, Globals_14, Var_26, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Deps_0_20, STATE_VARIABLE_Deps_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_loop_mi_12_p_0(
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

void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_mi_11_p_0(
  MR_Word TypeInfo_for_Acc_28,
  MR_Word TypeInfo_for_Info_29,
  MR_Word TypeInfo_for_IO_30,
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Succeeded_16,
  MR_Box STATE_VARIABLE_Acc_0_20,
  MR_Box * STATE_VARIABLE_Acc_21,
  MR_Box STATE_VARIABLE_Info_0_22,
  MR_Box * STATE_VARIABLE_Info_23,
  MR_Box STATE_VARIABLE_IO_0_24,
  MR_Box * STATE_VARIABLE_IO_25)
{
  MR_Word Var_26;

  Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Ts_15);
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(KeepGoing_12, P_13, Globals_14, Var_26, (MR_Integer) 1, Succeeded_16, STATE_VARIABLE_Acc_0_20, STATE_VARIABLE_Acc_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23, STATE_VARIABLE_IO_0_24, STATE_VARIABLE_IO_25);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_108_111_111_112_95_95_91_49_44_32_50_44_32_51_44_32_52_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Box STATE_VARIABLE_Acc_0_7,
  MR_Box * STATE_VARIABLE_Acc_8,
  MR_Box STATE_VARIABLE_Info_0_9,
  MR_Box * STATE_VARIABLE_Info_10,
  MR_Box STATE_VARIABLE_IO_0_11,
  MR_Box * STATE_VARIABLE_IO_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_0_11;
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      *STATE_VARIABLE_Acc_8 = STATE_VARIABLE_Acc_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Box T_31 = (MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0));
      MR_Word Ts_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word NewSucceeded_37;
      MR_Box STATE_VARIABLE_Acc_46_46;
      MR_Box STATE_VARIABLE_Info_47_47;
      MR_Box STATE_VARIABLE_IO_48_48;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      MR_Box conv1_NewSucceeded_37;

      func_0(((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), T_31, &conv1_NewSucceeded_37, STATE_VARIABLE_Acc_0_7, &STATE_VARIABLE_Acc_46_46, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_IO_0_11, &STATE_VARIABLE_IO_48_48);
      NewSucceeded_37 = ((MR_Word) (conv1_NewSucceeded_37));
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_49_49;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Box next_value_of_STATE_VARIABLE_Acc_0_7;
        MR_Box next_value_of_STATE_VARIABLE_Info_0_9;
        MR_Box next_value_of_STATE_VARIABLE_IO_0_11;

        STATE_VARIABLE_Succeeded_49_49 = libs__maybe_succeeded__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Ts_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_49_49;
        next_value_of_STATE_VARIABLE_Acc_0_7 = STATE_VARIABLE_Acc_46_46;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        next_value_of_STATE_VARIABLE_IO_0_11 = STATE_VARIABLE_IO_48_48;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_Acc_0_7 = next_value_of_STATE_VARIABLE_Acc_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        STATE_VARIABLE_IO_0_11 = next_value_of_STATE_VARIABLE_IO_0_11;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_IO_12 = STATE_VARIABLE_IO_48_48;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_Acc_8 = STATE_VARIABLE_Acc_46_46;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__target_dependencies_2_f_0_16(
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
  MR_Word conv47_HeadVar__3_101;
  MR_Word conv46_HeadVar__4_102;
  MR_Word conv45_HeadVar__6_104;

  make__dependencies__IntroducedFrom__pred__target_dependencies__243__1_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv47_HeadVar__3_101, &conv46_HeadVar__4_102, ((MR_Word) (wrapper_arg_5)), &conv45_HeadVar__6_104);
  *wrapper_arg_3 = ((MR_Box) (conv47_HeadVar__3_101));
  *wrapper_arg_4 = ((MR_Box) (conv46_HeadVar__4_102));
  *wrapper_arg_6 = ((MR_Box) (conv45_HeadVar__6_104));
}

static void MR_CALL 
make__dependencies__target_dependencies_2_f_0_15(
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
  MR_Word conv44_HeadVar__3_159;
  MR_Word conv43_HeadVar__4_160;
  MR_Word conv42_HeadVar__6_162;

  make__dependencies__IntroducedFrom__pred__target_dependencies__290__1_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv44_HeadVar__3_159, &conv43_HeadVar__4_160, ((MR_Word) (wrapper_arg_5)), &conv42_HeadVar__6_162);
  *wrapper_arg_3 = ((MR_Box) (conv44_HeadVar__3_159));
  *wrapper_arg_4 = ((MR_Box) (conv43_HeadVar__4_160));
  *wrapper_arg_6 = ((MR_Box) (conv42_HeadVar__6_162));
}

static void MR_CALL 
make__dependencies__target_dependencies_2_f_0_14(
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
  MR_Word conv40_Deps_16;
  MR_Word conv39_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv41_Succeeded_15, &conv40_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv39_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv41_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv40_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv39_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__target_dependencies_2_f_0_13(
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
  MR_Word conv38_Succeeded_15;
  MR_Word conv37_Deps_16;
  MR_Word conv36_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv38_Succeeded_15, &conv37_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv36_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv38_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv37_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv36_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__target_dependencies_2_f_0_12(
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
  MR_Word conv35_Succeeded_15;
  MR_Word conv34_Deps_16;
  MR_Word conv33_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv35_Succeeded_15, &conv34_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv33_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv35_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv34_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv33_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__target_dependencies_2_f_0_11(
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
make__dependencies__target_dependencies_2_f_0_10(
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
make__dependencies__target_dependencies_2_f_0_9(
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
make__dependencies__target_dependencies_2_f_0_8(
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
make__dependencies__target_dependencies_2_f_0_7(
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
  MR_Word conv18_STATE_VARIABLE_Info_16;

  make__dependencies__non_intermod_indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_Succeeded_11, &conv19_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv20_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv19_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__dependencies__target_dependencies_2_f_0_6(
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
make__dependencies__target_dependencies_2_f_0_5(
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

  make__dependencies__non_intermod_direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_11, &conv13_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv13_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__target_dependencies_2_f_0_4(
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
make__dependencies__target_dependencies_2_f_0_3(
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
make__dependencies__target_dependencies_2_f_0_2(
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
make__dependencies__target_dependencies_2_f_0_1(
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

MR_Word MR_CALL 
make__dependencies__target_dependencies_2_f_0(
  MR_Word Globals_4,
  MR_Word Target_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FindDeps_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Target_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Target_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 8:
            FindDeps_6 = (MR_Word) (&make__dependencies_scalar_common_2[40]);
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
            FindDeps_6 = make__dependencies__compiled_code_dependencies_1_f_0(Globals_4);
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            FindDeps_6 = make__dependencies__interface_file_dependencies_0_f_0();
            break;
          case (MR_Integer) 5:
            FindDeps_6 = make__dependencies__of__ho13_2_f_0((MR_Word) ((MR_Unsigned) 0U));
            break;
          case (MR_Integer) 6:
          case (MR_Integer) 13:
            {
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_64;
              MR_Word Var_65;

              Var_53 = make__dependencies__of__ho13_2_f_0((MR_Word) ((MR_Unsigned) 0U));
              Var_57 = make__dependencies__of__ho10_2_f_0((MR_Word) ((MR_Unsigned) 8U));
              Var_61 = make__dependencies__of__ho17_2_f_0((MR_Word) ((MR_Unsigned) 12U));
              Var_65 = make__dependencies__of__ho16_2_f_0((MR_Word) ((MR_Unsigned) 16U));
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_64));
              }
              {
                Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
                MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_60));
              }
              {
                Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
                MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_56));
              }
              FindDeps_6 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_52);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_77;
              MR_Word Var_81;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_278;
              MR_Word Var_281;
              MR_Word Var_308;
              MR_Word Var_311;
              MR_Word Var_338;
              MR_Word Var_73;

              Var_86 = make__dependencies__of__ho9_2_f_0((MR_Word) ((MR_Unsigned) 24U));
              Var_90 = make__dependencies__of__ho8_2_f_0((MR_Word) ((MR_Unsigned) 24U));
              Var_94 = make__dependencies__of__ho14_2_f_0((MR_Word) ((MR_Unsigned) 24U));
              {
                Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
                MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
                MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_93));
              }
              {
                Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
                MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_89));
              }
              {
                Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_81, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[26]));
                MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_85));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[25]));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_81));
              }
              {
                Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_73, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[24]));
                MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_338 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_338, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
                MR_hl_field(0, Var_338, 1) = ((MR_Box) (make__dependencies__target_dependencies_2_f_0_9));
                MR_hl_field(0, Var_338, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_338, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                MR_hl_field(0, Var_338, 4) = ((MR_Box) (Var_90));
                MR_hl_field(0, Var_338, 5) = ((MR_Box) (Var_94));
              }
              {
                Var_311 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_311, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
                MR_hl_field(0, Var_311, 1) = ((MR_Box) (make__dependencies__target_dependencies_2_f_0_10));
                MR_hl_field(0, Var_311, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_311, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                MR_hl_field(0, Var_311, 4) = ((MR_Box) (Var_86));
                MR_hl_field(0, Var_311, 5) = ((MR_Box) (Var_338));
              }
              {
                Var_308 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_308, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
                MR_hl_field(0, Var_308, 1) = ((MR_Box) (make__dependencies__target_dependencies_2_f_0_11));
                MR_hl_field(0, Var_308, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_308, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                MR_hl_field(0, Var_308, 4) = ((MR_Box) (&make__dependencies_scalar_common_6[26]));
                MR_hl_field(0, Var_308, 5) = ((MR_Box) (Var_311));
              }
              {
                Var_281 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_281, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
                MR_hl_field(0, Var_281, 1) = ((MR_Box) (make__dependencies__target_dependencies_2_f_0_12));
                MR_hl_field(0, Var_281, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_281, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                MR_hl_field(0, Var_281, 4) = ((MR_Box) (&make__dependencies_scalar_common_6[25]));
                MR_hl_field(0, Var_281, 5) = ((MR_Box) (Var_308));
              }
              {
                Var_278 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_278, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
                MR_hl_field(0, Var_278, 1) = ((MR_Box) (make__dependencies__target_dependencies_2_f_0_13));
                MR_hl_field(0, Var_278, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_278, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                MR_hl_field(0, Var_278, 4) = ((MR_Box) (&make__dependencies_scalar_common_6[24]));
                MR_hl_field(0, Var_278, 5) = ((MR_Box) (Var_281));
              }
              {
                FindDeps_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FindDeps_6, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
                MR_hl_field(0, FindDeps_6, 1) = ((MR_Box) (make__dependencies__target_dependencies_2_f_0_14));
                MR_hl_field(0, FindDeps_6, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, FindDeps_6, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
                MR_hl_field(0, FindDeps_6, 4) = ((MR_Box) (&make__dependencies_scalar_common_6[23]));
                MR_hl_field(0, FindDeps_6, 5) = ((MR_Box) (Var_278));
              }
            }
            break;
          case (MR_Integer) 12:
            FindDeps_6 = make__dependencies__of__ho13_2_f_0((MR_Word) ((MR_Unsigned) 44U));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          // direct tailcall eliminated
          ;
          Target_5 = (MR_Word) ((MR_Unsigned) 36U);
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CompilationTarget_11;
          MR_Word TargetCode_12;
          MR_Word HighLevelCode_13;
          MR_Word HeaderDeps_14;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_50;

          libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_11);
          TargetCode_12 = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0();
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 307, &HighLevelCode_13);
          succeeded = (CompilationTarget_11 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (HighLevelCode_13 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word Var_21;
            MR_Word Var_22;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word Var_36;
            MR_Word Var_37;

            Var_22 = make__dependencies__of__ho9_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_3[0])));
            Var_27 = make__dependencies__of__ho8_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_3[0])));
            Var_32 = make__dependencies__of__ho10_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_3[0])));
            Var_37 = make__dependencies__of__ho14_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_3[0])));
            {
              Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
              MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
              MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_36));
            }
            {
              Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
              MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_31));
            }
            {
              Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
              MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_26));
            }
            HeaderDeps_14 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_21);
          }
          else
            HeaderDeps_14 = (MR_Word) (&make__dependencies_scalar_common_2[39]);
          Var_43 = make__dependencies__of__ho13_2_f_0(TargetCode_12);
          Var_46 = make__dependencies__of__ho18_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_3[1])));
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (HeaderDeps_14));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
          }
          FindDeps_6 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_42);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Target_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            FindDeps_6 = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0(Globals_4);
            break;
          case (MR_Integer) 1:
            FindDeps_6 = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0(Globals_4);
            break;
        }
        break;
    }
    return FindDeps_6;
    break;
  }
}

static MR_Word MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 36U);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0_2(
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
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0_1(
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
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0(
  MR_Word Globals_4)
{
  MR_Word CompilationTarget_7;

  libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_7);
  return (MR_Word) (&make__dependencies_scalar_common_6[22]);
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
  MR_Word conv0_STATE_VARIABLE_Info_20;

  make__dependencies__foreign_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
}

static MR_Word MR_CALL 
make__dependencies__of__ho18_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho18_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[33]));
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
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho17_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[32]));
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
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho16_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[31]));
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
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho14_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[30]));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
make__dependencies__of__ho13_2_f_0_2(
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
make__dependencies__of__ho13_2_f_0_1(
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
make__dependencies__of__ho13_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho13_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[29]));
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
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho10_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[28]));
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
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho9_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[27]));
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
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho8_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[26]));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_37(
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
  MR_Word conv110_Succeeded_15;
  MR_Word conv109_TargetFiles_16;
  MR_Word conv108_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv110_Succeeded_15, &conv109_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv108_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv110_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv109_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv108_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_36(
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
  MR_Word conv107_Succeeded_11;
  MR_Word conv106_Modules_12;
  MR_Word conv105_STATE_VARIABLE_Info_29;

  make__dependencies__direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv107_Succeeded_11, &conv106_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv105_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv107_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv106_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv105_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_35(
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
  MR_Word conv104_Succeeded_15;
  MR_Word conv103_TargetFiles_16;
  MR_Word conv102_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv104_Succeeded_15, &conv103_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv102_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv104_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv103_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv102_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_34(
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
  MR_Word conv101_HeadVar__3_3;
  MR_Word conv100_HeadVar__4_4;
  MR_Word conv99_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv101_HeadVar__3_3, &conv100_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv99_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv101_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv100_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv99_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_33(
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
  MR_Word conv98_Succeeded_15;
  MR_Word conv97_Result_16;
  MR_Word conv96_STATE_VARIABLE_Info_24;

  make__dependencies__map_find_module_deps_fi_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv98_Succeeded_15, &conv97_Result_16, ((MR_Word) (wrapper_arg_5)), &conv96_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv98_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv97_Result_16));
  *wrapper_arg_6 = ((MR_Box) (conv96_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_32(
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
  MR_Word conv95_Succeeded_15;
  MR_Word conv94_Result_16;
  MR_Word conv93_STATE_VARIABLE_Info_24;

  make__dependencies__map_find_module_deps_mi_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv95_Succeeded_15, &conv94_Result_16, ((MR_Word) (wrapper_arg_5)), &conv93_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv95_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv94_Result_16));
  *wrapper_arg_6 = ((MR_Box) (conv93_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_31(
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
  MR_Word conv92_HeadVar__3_3;
  MR_Word conv91_AncestorIndices_11;
  MR_Word conv90_STATE_VARIABLE_Info_17;

  make__dependencies__ancestors_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv92_HeadVar__3_3, &conv91_AncestorIndices_11, ((MR_Word) (wrapper_arg_5)), &conv90_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv92_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv91_AncestorIndices_11));
  *wrapper_arg_6 = ((MR_Box) (conv90_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_30(
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
  MR_Word conv89_Succeeded_11;
  MR_Word conv88_Modules_12;
  MR_Word conv87_STATE_VARIABLE_Info_18;

  make__dependencies__intermod_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv89_Succeeded_11, &conv88_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv87_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv89_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv88_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv87_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_29(
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
  MR_Word conv86_Succeeded_15;
  MR_Word conv85_TargetFiles_16;
  MR_Word conv84_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv86_Succeeded_15, &conv85_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv84_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv86_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv85_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv84_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_28(
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
  MR_Word conv83_Succeeded_11;
  MR_Word conv82_Modules_12;
  MR_Word conv81_STATE_VARIABLE_Info_18;

  make__dependencies__intermod_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv83_Succeeded_11, &conv82_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv81_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv83_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv82_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv81_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_27(
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
  MR_Word conv80_Succeeded_15;
  MR_Word conv79_TargetFiles_16;
  MR_Word conv78_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv80_Succeeded_15, &conv79_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv78_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv80_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv79_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv78_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_26(
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
  MR_Word conv77_HeadVar__3_3;
  MR_Word conv76_HeadVar__4_4;
  MR_Word conv75_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv77_HeadVar__3_3, &conv76_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv75_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv77_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv76_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv75_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_25(
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
  MR_Word conv74_Succeeded_15;
  MR_Word conv73_Deps_16;
  MR_Word conv72_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv74_Succeeded_15, &conv73_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv72_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv74_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv73_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv72_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_24(
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
  MR_Word conv71_Succeeded_15;
  MR_Word conv70_Deps_16;
  MR_Word conv69_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv71_Succeeded_15, &conv70_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv69_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv71_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv70_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv69_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_23(
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
  MR_Word conv68_Succeeded_15;
  MR_Word conv67_Deps_16;
  MR_Word conv66_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv68_Succeeded_15, &conv67_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv66_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv68_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv67_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv66_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0_22(
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
  MR_Word conv65_Succeeded_15;
  MR_Word conv64_Deps_16;
  MR_Word conv63_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv65_Succeeded_15, &conv64_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv63_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv65_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv64_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv63_STATE_VARIABLE_Info_24));
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
  MR_Word conv61_Result_16;
  MR_Word conv60_STATE_VARIABLE_Info_24;

  make__dependencies__map_find_module_deps_fi_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv62_Succeeded_15, &conv61_Result_16, ((MR_Word) (wrapper_arg_5)), &conv60_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv62_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv61_Result_16));
  *wrapper_arg_6 = ((MR_Box) (conv60_STATE_VARIABLE_Info_24));
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
  MR_Word conv59_Succeeded_15;
  MR_Word conv58_Deps_16;
  MR_Word conv57_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv59_Succeeded_15, &conv58_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv57_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv59_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv58_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv57_STATE_VARIABLE_Info_24));
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
  MR_Word conv55_Deps_16;
  MR_Word conv54_STATE_VARIABLE_Info_24;

  make__dependencies__combine_deps_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv56_Succeeded_15, &conv55_Deps_16, ((MR_Word) (wrapper_arg_5)), &conv54_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv56_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv55_Deps_16));
  *wrapper_arg_6 = ((MR_Box) (conv54_STATE_VARIABLE_Info_24));
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
  MR_Word conv53_Succeeded_15;
  MR_Word conv52_TargetFiles_16;
  MR_Word conv51_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv53_Succeeded_15, &conv52_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv51_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv53_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv52_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv51_STATE_VARIABLE_Info_22));
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
  MR_Word conv49_Modules_12;
  MR_Word conv48_STATE_VARIABLE_Info_21;

  make__dependencies__indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv50_Succeeded_11, &conv49_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv48_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv50_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv49_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv48_STATE_VARIABLE_Info_21));
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
  MR_Word conv42_STATE_VARIABLE_Info_29;

  make__dependencies__direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv44_Succeeded_11, &conv43_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv42_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv44_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv43_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv42_STATE_VARIABLE_Info_29));
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
  MR_Word conv35_Succeeded_15;
  MR_Word conv34_TargetFiles_16;
  MR_Word conv33_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv35_Succeeded_15, &conv34_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv33_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv35_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv34_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv33_STATE_VARIABLE_Info_22));
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
  MR_Word conv32_HeadVar__3_3;
  MR_Word conv31_AncestorIndices_11;
  MR_Word conv30_STATE_VARIABLE_Info_17;

  make__dependencies__ancestors_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_HeadVar__3_3, &conv31_AncestorIndices_11, ((MR_Word) (wrapper_arg_5)), &conv30_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv32_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv31_AncestorIndices_11));
  *wrapper_arg_6 = ((MR_Box) (conv30_STATE_VARIABLE_Info_17));
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
  MR_Word conv29_Succeeded_15;
  MR_Word conv28_TargetFiles_16;
  MR_Word conv27_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv29_Succeeded_15, &conv28_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv27_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv29_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv28_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv27_STATE_VARIABLE_Info_22));
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
  MR_Word conv25_DepIndices_16;
  MR_Word conv24_STATE_VARIABLE_Info_25;

  make__dependencies__files_of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_Succeeded_15, &conv25_DepIndices_16, ((MR_Word) (wrapper_arg_5)), &conv24_STATE_VARIABLE_Info_25);
  *wrapper_arg_3 = ((MR_Box) (conv26_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv25_DepIndices_16));
  *wrapper_arg_6 = ((MR_Box) (conv24_STATE_VARIABLE_Info_25));
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
  MR_Word conv23_Succeeded_11;
  MR_Word conv22_Files_12;
  MR_Word conv21_STATE_VARIABLE_Info_23;

  make__dependencies__foreign_include_files_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_Succeeded_11, &conv22_Files_12, ((MR_Word) (wrapper_arg_5)), &conv21_STATE_VARIABLE_Info_23);
  *wrapper_arg_3 = ((MR_Box) (conv23_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv22_Files_12));
  *wrapper_arg_6 = ((MR_Box) (conv21_STATE_VARIABLE_Info_23));
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
  MR_Word conv20_Succeeded_15;
  MR_Word conv19_DepIndices_16;
  MR_Word conv18_STATE_VARIABLE_Info_25;

  make__dependencies__files_of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_Succeeded_15, &conv19_DepIndices_16, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Info_25);
  *wrapper_arg_3 = ((MR_Box) (conv20_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv19_DepIndices_16));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Info_25));
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
  MR_Word conv17_Succeeded_11;
  MR_Word conv16_Files_12;
  MR_Word conv15_STATE_VARIABLE_Info_21;

  make__dependencies__fact_table_files_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_Succeeded_11, &conv16_Files_12, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv17_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv16_Files_12));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_21));
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
  MR_Word conv14_Succeeded_15;
  MR_Word conv13_TargetFiles_16;
  MR_Word conv12_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_15, &conv13_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv13_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_22));
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
  MR_Word conv11_HeadVar__3_3;
  MR_Word conv10_HeadVar__4_4;
  MR_Word conv9_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_HeadVar__3_3, &conv10_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv10_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_14));
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
  MR_Word conv8_Succeeded_15;
  MR_Word conv7_TargetFiles_16;
  MR_Word conv6_STATE_VARIABLE_Info_22;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_Succeeded_15, &conv7_TargetFiles_16, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv8_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv7_TargetFiles_16));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_22));
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
  MR_Word conv5_HeadVar__3_3;
  MR_Word conv4_HeadVar__4_4;
  MR_Word conv3_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__3_3, &conv4_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_14));
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
  MR_Word conv2_HeadVar__3_79;
  MR_Word conv1_HeadVar__4_80;
  MR_Word conv0_HeadVar__6_82;

  make__dependencies__IntroducedFrom__pred__compiled_code_dependencies__367__1_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_79, &conv1_HeadVar__4_80, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_82);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_79));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_80));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_82));
}

static MR_Word MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0(
  MR_Word Globals_3)
{
  MR_Word Deps_4;
  MR_Word TrackFlags_5;
  MR_Word Deps0_6;
  MR_Word Deps1_7;
  MR_Word IntermodOpt_8;
  MR_Word IntermodAnalysis_9;
  MR_Word AnyIntermod_10;
  MR_Word Deps2_11;
  MR_Word Var_23;
  MR_Word Var_27;
  MR_Word Var_31;
  MR_Word Var_35;
  MR_Word Var_39;
  MR_Word Var_160;
  MR_Word Var_163;
  MR_Word Var_190;
  MR_Word Var_193;
  MR_Word Var_19;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 664, &TrackFlags_5);
  switch (TrackFlags_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Deps0_6 = (MR_Word) (&make__dependencies_scalar_common_2[11]);
      break;
    case (MR_Integer) 1:
      Deps0_6 = (MR_Word) (&make__dependencies_scalar_common_6[7]);
      break;
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Deps0_6));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[16]));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[12]));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[11]));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[10]));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[9]));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_23));
  }
  Var_193 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_31);
  {
    Var_190 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_190, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
    MR_hl_field(0, Var_190, 1) = ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_22));
    MR_hl_field(0, Var_190, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_190, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    MR_hl_field(0, Var_190, 4) = ((MR_Box) (&make__dependencies_scalar_common_6[11]));
    MR_hl_field(0, Var_190, 5) = ((MR_Box) (Var_193));
  }
  {
    Var_163 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_163, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
    MR_hl_field(0, Var_163, 1) = ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_23));
    MR_hl_field(0, Var_163, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_163, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    MR_hl_field(0, Var_163, 4) = ((MR_Box) (&make__dependencies_scalar_common_6[10]));
    MR_hl_field(0, Var_163, 5) = ((MR_Box) (Var_190));
  }
  {
    Var_160 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_160, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
    MR_hl_field(0, Var_160, 1) = ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_24));
    MR_hl_field(0, Var_160, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_160, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    MR_hl_field(0, Var_160, 4) = ((MR_Box) (&make__dependencies_scalar_common_6[9]));
    MR_hl_field(0, Var_160, 5) = ((MR_Box) (Var_163));
  }
  {
    Deps1_7 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Deps1_7, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
    MR_hl_field(0, Deps1_7, 1) = ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_25));
    MR_hl_field(0, Deps1_7, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Deps1_7, 3) = ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    MR_hl_field(0, Deps1_7, 4) = ((MR_Box) (&make__dependencies_scalar_common_6[8]));
    MR_hl_field(0, Deps1_7, 5) = ((MR_Box) (Var_160));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 497, &IntermodOpt_8);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 502, &IntermodAnalysis_9);
  AnyIntermod_10 = mercury__bool__or_2_f_0(IntermodOpt_8, IntermodAnalysis_9);
  switch (AnyIntermod_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Deps2_11 = Deps1_7;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_43;
        MR_Word Var_47;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_56;
        MR_Word Var_57;

        Var_56 = make__dependencies__imports_0_f_0();
        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_52, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[2]));
          MR_hl_field(0, Var_52, 1) = ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_33));
          MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_52, 3) = ((MR_Box) (&make__dependencies_scalar_common_6[19]));
          MR_hl_field(0, Var_52, 4) = ((MR_Box) (Var_56));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (Deps1_7));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[18]));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[17]));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_47));
        }
        Deps2_11 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_43);
      }
      break;
  }
  switch (IntermodAnalysis_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Deps_4 = Deps2_11;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_59;
        MR_Word Var_63;
        MR_Word Var_67;

        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Deps2_11));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[21]));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[20]));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_63));
        }
        Deps_4 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_59);
      }
      break;
  }
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
      MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[0]));
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
          MR_hl_field(0, Var_9, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
          MR_hl_field(0, Var_9, 1) = ((MR_Box) (make__dependencies__combine_deps_list_1_f_0_2));
          MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_9, 3) = ((MR_Box) (TypeInfo_for_T_11));
          MR_hl_field(0, Var_9, 4) = ((MR_Box) (Var_24));
          MR_hl_field(0, Var_9, 5) = ((MR_Box) (Var_22));
        }
      }
      {
        HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[0]));
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
make__dependencies__imports_0_f_0_8(
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
make__dependencies__imports_0_f_0_7(
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
make__dependencies__imports_0_f_0_6(
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
make__dependencies__imports_0_f_0_5(
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
make__dependencies__imports_0_f_0_4(
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
make__dependencies__imports_0_f_0_3(
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
make__dependencies__imports_0_f_0_2(
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
make__dependencies__imports_0_f_0_1(
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
make__dependencies__imports_0_f_0(void)
{
  return (MR_Word) (&make__dependencies_scalar_common_9[4]);
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
  return (MR_Word) (&make__dependencies_scalar_common_9[2]);
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
make__dependencies____Unify____foldl3_pred_with_status_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____foldl3_pred_with_status_4_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____foldl3_pred_with_status_4_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____foldl3_pred_with_status_4_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__1_1));
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
make__dependencies____Unify____module_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____module_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____module_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____module_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_indirect_imports_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_foreign_imports_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dependencies_result_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dependency_file_with_module_index_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_deps_result_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_find_module_deps_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_find_module_deps_plain_set_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_foldl3_pred_with_status_4);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_module_deps_result_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_module_locn_0);
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
