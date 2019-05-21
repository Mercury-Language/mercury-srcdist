/*
** Automatically generated from `make.dependencies.m'
** by the Mercury compiler,
** version rotd-2017-08-15
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


/* :- module make.dependencies. */
/* :- implementation. */

/*
INIT mercury__make__dependencies__init
ENDINIT
*/

#include "make.dependencies.mih"


#include "backend_libs.mih"
#include "libs.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.util.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "solutions.mih"
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
#include "version_array.mih"
#include "version_hash_table.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__type_ctor_info_dependency_status_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0;

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_0;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_1;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_2;

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_value_ordered_dependencies_result_0[3];

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_dependencies_result_0[3];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependencies_result_0[3];

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_0_0[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__maybe__ti_maybe_1libs__options__type_ctor_info_option_0;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_0_1[2];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_1;

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_0[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_1[1];

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_dependency_file_0[2];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_dependency_file_0[2];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependency_file_0[2];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependency_file_index_0[1];

static const MR_NotagFunctorDesc make__dependencies__make__dependencies__notag_functor_desc_dependency_file_index_0;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_deps_result_1_0[2];

static const MR_ConstString make__dependencies__make__dependencies__field_names_deps_result_1_0[2];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_deps_result_1_0;

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_deps_result_1_0[1];

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_deps_result_1[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_deps_result_1[1];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_deps_result_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_module_index_0[1];

static const MR_NotagFunctorDesc make__dependencies__make__dependencies__notag_functor_desc_module_index_0;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_0;

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_1;

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_value_ordered_module_locn_0[2];

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

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_value_ordered_transitive_dependencies_type_0[3];

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_name_ordered_transitive_dependencies_type_0[3];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_transitive_dependencies_type_0[3];

static void MR_CALL 
make__dependencies__check_dependencies_timestamps_write_missing_deps__ho21_7_p_0(
  MR_Word Var_42,
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__debug_newer_dependencies_2__1392__1_3_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word MaybeTimestamp_8,
  MR_Word LambdaHeadVar__1_29);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1286__1_3_p_0(
  MR_Word TypeInfo_for_File_38,
  MR_Word LambdaHeadVar__1_23,
  MR_Box * LambdaHeadVar__2_24);

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__fact_table_files__986__1_1_f_0(
  MR_String LambdaHeadVar__1_27);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports__925__1_10_p_0(
  MR_Word HeadVar__1_31,
  MR_Word HeadVar__2_51,
  MR_Word HeadVar__3_52,
  MR_Word * HeadVar__4_53,
  MR_Word HeadVar__5_54,
  MR_Word * HeadVar__6_55,
  MR_Word HeadVar__7_56,
  MR_Word * HeadVar__8_57);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__foreign_imports__909__1_10_p_0(
  MR_Word HeadVar__1_31,
  MR_Word HeadVar__2_52,
  MR_Word HeadVar__3_53,
  MR_Word * HeadVar__4_54,
  MR_Word HeadVar__5_55,
  MR_Word * HeadVar__6_56,
  MR_Word HeadVar__7_57,
  MR_Word * HeadVar__8_58);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__indirect_imports_2__852__1_10_p_0(
  MR_Word HeadVar__1_33,
  MR_Word HeadVar__2_74,
  MR_Word HeadVar__3_75,
  MR_Word * HeadVar__4_76,
  MR_Word HeadVar__5_77,
  MR_Word * HeadVar__6_78,
  MR_Word HeadVar__7_79,
  MR_Word * HeadVar__8_80);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__direct_imports__731__1_10_p_0(
  MR_Word HeadVar__1_37,
  MR_Word HeadVar__2_143,
  MR_Word HeadVar__3_144,
  MR_Word * HeadVar__4_145,
  MR_Word HeadVar__5_146,
  MR_Word * HeadVar__6_147,
  MR_Word HeadVar__7_148,
  MR_Word * HeadVar__8_149);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__files_of_2__643__1_10_p_0(
  MR_Word FindFiles_11,
  MR_Word HeadVar__2_56,
  MR_Word HeadVar__3_57,
  MR_Word * HeadVar__4_58,
  MR_Word HeadVar__5_59,
  MR_Word * HeadVar__6_60,
  MR_Word HeadVar__7_61,
  MR_Word * HeadVar__8_62);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__base_compiled_code_dependencies__574__1_10_p_0(
  MR_Word HeadVar__1_22,
  MR_Word HeadVar__2_23,
  MR_Word HeadVar__3_84,
  MR_Word HeadVar__4_85,
  MR_Word * HeadVar__5_86,
  MR_Word * HeadVar__6_87,
  MR_Word HeadVar__7_88,
  MR_Word * HeadVar__8_89);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__base_compiled_code_dependencies__568__1_8_p_0(
  MR_Word HeadVar__1_34,
  MR_Word HeadVar__2_35,
  MR_Word * HeadVar__3_36,
  MR_Word * HeadVar__4_37,
  MR_Word HeadVar__5_38,
  MR_Word * HeadVar__6_39);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_98_97_115_101_95_99_111_109_112_105_108_101_100_95_99_111_100_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_53_54_56_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_36,
  MR_Word * HeadVar__4_37,
  MR_Word HeadVar__5_38,
  MR_Word * HeadVar__6_39);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__compiled_code_dependencies__539__1_10_p_0(
  MR_Word HeadVar__1_23,
  MR_Word HeadVar__2_24,
  MR_Word HeadVar__3_57,
  MR_Word HeadVar__4_58,
  MR_Word * HeadVar__5_59,
  MR_Word * HeadVar__6_60,
  MR_Word HeadVar__7_61,
  MR_Word * HeadVar__8_62);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__compiled_code_dependencies__540__1_10_p_0(
  MR_Word HeadVar__1_25,
  MR_Word HeadVar__2_26,
  MR_Word HeadVar__3_66,
  MR_Word HeadVar__4_67,
  MR_Word * HeadVar__5_68,
  MR_Word * HeadVar__6_69,
  MR_Word HeadVar__7_70,
  MR_Word * HeadVar__8_71);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies__1254__1_1_p_0(
  MR_Word LambdaHeadVar__1_35);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__remove_nested_modules__1184__1_2_p_0(
  MR_Word NestedModules_13,
  MR_Word HeadVar__2_34);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__419__1_8_p_0(
  MR_Word HeadVar__1_171,
  MR_Word HeadVar__2_172,
  MR_Word * HeadVar__3_173,
  MR_Word * HeadVar__4_174,
  MR_Word HeadVar__5_175,
  MR_Word * HeadVar__6_176);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_52_49_57_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_173,
  MR_Word * HeadVar__4_174,
  MR_Word HeadVar__5_175,
  MR_Word * HeadVar__6_176);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__408__1_8_p_0(
  MR_Word HeadVar__1_154,
  MR_Word HeadVar__2_155,
  MR_Word * HeadVar__3_156,
  MR_Word * HeadVar__4_157,
  MR_Word HeadVar__5_158,
  MR_Word * HeadVar__6_159);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_52_48_56_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_156,
  MR_Word * HeadVar__4_157,
  MR_Word HeadVar__5_158,
  MR_Word * HeadVar__6_159);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__460__1_8_p_0(
  MR_Word HeadVar__1_254,
  MR_Word HeadVar__2_255,
  MR_Word * HeadVar__3_256,
  MR_Word * HeadVar__4_257,
  MR_Word HeadVar__5_258,
  MR_Word * HeadVar__6_259);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_52_54_48_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_256,
  MR_Word * HeadVar__4_257,
  MR_Word HeadVar__5_258,
  MR_Word * HeadVar__6_259);

static MR_bool MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__from_int_1_1_f_0(
  MR_Integer I_3,
  MR_Word * HeadVar__2_2);

static MR_Integer MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__to_int_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__from_int_1_1_f_0(
  MR_Integer I_3,
  MR_Word * HeadVar__2_2);

static MR_Integer MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__to_int_1_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__dependencies____Compare____module_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__dependencies____Unify____module_locn_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word TypeInfo_for_T_22,
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__dependencies__make_write_target_dependency_status_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2);

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
make__dependencies__make_local_module_id_option_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Opts0_5,
  MR_Word * Opts_6);

static void MR_CALL 
make__dependencies__collect_nested_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_NestedModules_0_16,
  MR_Word * STATE_VARIABLE_NestedModules_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__dependencies__find_transitive_implementation_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

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
  MR_Word * Success_11,
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
  MR_Word * Success_11,
  MR_Word * Files_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__find_module_foreign_imports_2_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static MR_Box MR_CALL 
make__dependencies__find_module_foreign_imports_3_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__dependencies__find_module_foreign_imports_3_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__find_module_foreign_imports_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__dependencies__find_module_foreign_imports_9_p_0_1(
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
make__dependencies__find_module_foreign_imports_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0_1(
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
make__dependencies__foreign_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_51_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__non_intermod_indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__dependencies__indirect_imports_2__ho5_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * IndirectImports_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__dependencies__indirect_imports_2__ho6_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * IndirectImports_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0_1(
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
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho7_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho7_11_p_0_1(
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
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho7_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__intermod_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_2_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__dependencies__parents_8_p_0(
  MR_Word _Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * AncestorIndices_11,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_101_110_116_115_95_95_91_49_93_95_48_8_p_0(
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
make__dependencies__map_find_module_deps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__dependencies__map_find_module_deps_10_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word FindDeps2_11,
  MR_Word FindDeps1_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Success_15,
  MR_Word * Result_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(
  MR_Word TypeInfo_for_Acc_31,
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__files_of_2_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__dependencies__files_of_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__dependencies__files_of_2_10_p_0(
  MR_Word FindFiles_11,
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Success_15,
  MR_Word * DepIndices_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_57_95_95_91_49_93_95_48_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__of_3_6_p_0(
  MR_Word FileType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_Set_0_14,
  MR_Word * STATE_VARIABLE_Set_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

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
  MR_Word * Success_15,
  MR_Word * TargetFiles_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__combine_deps_2_10_p_0(
  MR_Word TypeInfo_for_T_51,
  MR_Word FindDeps1_11,
  MR_Word FindDeps2_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Success_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__dependency_files_to_index_set_2_5_p_0(
  MR_Word DepFiles_6,
  MR_Word STATE_VARIABLE_Set_0_10,
  MR_Word * STATE_VARIABLE_Set_11,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
make__dependencies__dependency_file_index_set_to_plain_set_2_4_p_0(
  MR_Word Info_5,
  MR_Word DepIndex_6,
  MR_Word List0_7,
  MR_Word * List_8);

static void MR_CALL 
make__dependencies__dependency_file_to_index_4_p_0(
  MR_Word DepFile_5,
  MR_Word * Index_6,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__module_index_set_to_plain_set_2_4_p_0(
  MR_Word Info_5,
  MR_Word ModuleIndex_6,
  MR_Word STATE_VARIABLE_Set_0_9,
  MR_Word * STATE_VARIABLE_Set_10);

static void MR_CALL 
make__dependencies__module_name_to_index_4_p_0(
  MR_Word ModuleName_5,
  MR_Word * Index_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

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

static void MR_CALL 
make__dependencies__check_dependency_timestamps__ho17_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependency_timestamps__ho17_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependency_timestamps__ho17_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__check_dependency_timestamps__ho17_10_p_0(
  MR_Word Var_39,
  MR_Word Globals_11,
  MR_String TargetFileName_12,
  MR_Word MaybeTimestamp_13,
  MR_Word BuildDepsSucceeded_14,
  MR_Word DepFiles_15,
  MR_Word WriteDepFile_16,
  MR_Word DepTimestamps_17,
  MR_Word * DepsResult_18);

static MR_bool MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_50_49_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_50_49_95_95_91_49_93_95_48_7_p_0(
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
  MR_Word * Success_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0(
  MR_Word KeepGoing_13,
  MR_Word DependenciesType_14,
  MR_Word ModuleLocn_15,
  MR_Word Globals_16,
  MR_Word ModuleIndex_17,
  MR_Word * Success_18,
  MR_Word Modules0_19,
  MR_Word * Modules_20,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__dependencies__module_index_to_name_3_p_0(
  MR_Word Info_4,
  MR_Word Index_5,
  MR_Word * ModuleName_6);

static void MR_CALL 
make__dependencies__dependency_file_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__dependencies__module_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__dependencies__module_names_to_index_set_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

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
make__dependencies__of__ho20_2_f_0_2(
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
make__dependencies__of__ho20_2_f_0_1(
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
make__dependencies__of__ho20_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__of__ho19_2_f_0_2(
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
make__dependencies__of__ho19_2_f_0_1(
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
make__dependencies__of__ho19_2_f_0(
  MR_Word FileType_4);

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
make__dependencies__of__ho12_2_f_0_2(
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
make__dependencies__of__ho12_2_f_0_1(
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
make__dependencies__of__ho12_2_f_0(
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
make__dependencies__of__ho11_2_f_0_2(
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
make__dependencies__of__ho11_2_f_0_1(
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
make__dependencies__of__ho11_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__base_compiled_code_dependencies_1_f_0_3(
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
make__dependencies__base_compiled_code_dependencies_1_f_0_2(
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
make__dependencies__base_compiled_code_dependencies_1_f_0_1(
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
make__dependencies__base_compiled_code_dependencies_1_f_0(
  MR_Word TrackFlags_3);

static void MR_CALL 
make__dependencies__of__ho15_2_f_0_2(
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
make__dependencies__of__ho15_2_f_0_1(
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
make__dependencies__of__ho15_2_f_0(
  MR_Word FileType_4);

static void MR_CALL 
make__dependencies__files_of__ho14_2_f_0_3(
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
make__dependencies__files_of__ho14_2_f_0_2(
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
make__dependencies__files_of__ho14_2_f_0_1(
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
make__dependencies__files_of__ho14_2_f_0(void);

static void MR_CALL 
make__dependencies__files_of__ho13_2_f_0_3(
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
make__dependencies__files_of__ho13_2_f_0_2(
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
make__dependencies__files_of__ho13_2_f_0_1(
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
make__dependencies__files_of__ho13_2_f_0(void);

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
make__dependencies____Unify____cached_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____cached_foreign_imports_0_0_10001(
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
make__dependencies____Unify____dependency_file_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____dependency_file_index_0_0_10001(
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
make__dependencies____Unify____deps_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__dependencies____Compare____deps_set_1_0_10001(
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
make__dependencies____Unify____module_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____module_index_0_0_10001(
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

static MR_Box MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box make__dependencies_scalar_common_1[17][2];

static /* final */ const MR_Box make__dependencies_scalar_common_2[38][3];

static /* final */ const MR_Integer make__dependencies_scalar_common_3[1][2];

static /* final */ const MR_Box make__dependencies_scalar_common_4[2][12];

static /* final */ const MR_Box make__dependencies_scalar_common_5[2][14];

static /* final */ const MR_Box make__dependencies_scalar_common_6[6][11];

static /* final */ const MR_Box make__dependencies_scalar_common_7[6][13];

static /* final */ const MR_Box make__dependencies_scalar_common_8[13][5];

static /* final */ const MR_Box make__dependencies_scalar_common_9[3][1];

static /* final */ const MR_Box make__dependencies_scalar_common_10[5][7];

static /* final */ const MR_Box make__dependencies_scalar_common_11[1][15];

static /* final */ const MR_Box make__dependencies_scalar_common_12[5][6];

static /* final */ const MR_Box make__dependencies_scalar_common_13[4][4];

static /* final */ const MR_Box make__dependencies_scalar_common_14[3][10];

static /* final */ const MR_Box make__dependencies_scalar_common_15[2][8];

static /* final */ const MR_Box make__dependencies_scalar_common_16[1][9];


/* sealed */ struct make__dependencies__vector_common_type_17_0_s {
  const MR_String make__dependencies__vector_common_type_17_0__vct_17_f_0;
};

static /* final */ const struct make__dependencies__vector_common_type_17_0_s make__dependencies_vector_common_17[4];



static /* final */ const MR_Box make__dependencies_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__dependencies__module_index__arity0__)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__dependencies__dependency_file_index__arity0__)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[2])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__dependencies_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__dependencies_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__dependencies_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__dependencies_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[4])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &make__dependencies_scalar_common_1[15])))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_2[38][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_1[5]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0)),
    ((MR_Box) (&make__dependencies_scalar_common_1[5]))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[1])),
    ((MR_Box) (make__dependencies__files_of__ho13_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__files_of__ho13_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[1])),
    ((MR_Box) (make__dependencies__files_of__ho14_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__files_of__ho14_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__of__ho15_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (make__dependencies__base_compiled_code_dependencies_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__base_compiled_code_dependencies_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__of__ho11_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__of__ho16_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__of__ho10_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__of__ho12_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__of__ho18_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__of__ho19_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__of__ho20_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (make__dependencies__target_dependencies_2_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_12[0])),
    ((MR_Box) (make__dependencies__make_local_module_id_options_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies_scalar_common_2[1]))
  },
  /* row 33 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_13[1])),
    ((MR_Box) (make__dependencies__check_dependencies_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_15[1])),
    ((MR_Box) (make__dependencies__files_of_2_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho7_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_8[12])),
    ((MR_Box) (make__dependencies__fact_table_files_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer make__dependencies_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_4[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_5[2][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_6[6][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__dependencies____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_7[6][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&make__make__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_8[13][5] = {
  /* row 0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (&make__dependencies_scalar_common_2[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (&make__dependencies_scalar_common_2[5]))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (&make__dependencies_scalar_common_2[6]))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_0_f_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (&make__dependencies_scalar_common_2[7]))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (&make__dependencies_scalar_common_2[8]))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) (&make__dependencies_scalar_common_2[9]))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (make__dependencies__imports_0_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) (&make__dependencies_scalar_common_2[10]))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[1])),
    ((MR_Box) (make__dependencies__files_of__ho13_2_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_2[11])),
    ((MR_Box) (&make__dependencies_scalar_common_2[12]))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[1])),
    ((MR_Box) (make__dependencies__files_of__ho14_2_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_2[13])),
    ((MR_Box) (&make__dependencies_scalar_common_2[14]))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[3])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_2[20])),
    ((MR_Box) (&make__dependencies_scalar_common_2[21]))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))),
    ((MR_Box) (&make__dependencies_scalar_common_2[27]))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_9[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_10[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_11[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_type_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_locn_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_12[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_13[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_12[1])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_50_49_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__type_ctor_info_dependency_status_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[5])),
    ((MR_Box) (make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho7_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__dependencies_scalar_common_2[35]))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[5])),
    ((MR_Box) (make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&make__dependencies_scalar_common_2[36]))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_14[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_15[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__list__pti_list_1__plain_pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_16[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&make__make__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};


static /* final */ const struct make__dependencies__vector_common_type_17_0_s make__dependencies_vector_common_17[4] = {
  /* row 0 */   {     (MR_String) "deps_status_not_considered" },
  /* row 1 */   {     (MR_String) "deps_status_being_built" },
  /* row 2 */   {     (MR_String) "deps_status_up_to_date" },
  /* row 3 */   {     (MR_String) "deps_status_error" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__dependencies__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_module_index_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__dependencies__set_ordlist__ti_set_ordlist_1make__dependencies__type_ctor_info_dependency_file_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__plain_sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__dependencies__sparse_bitset__ti_sparse_bitset_1make__dependencies__type_ctor_info_dependency_file_index_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__dependencies__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__pseudo_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &make__dependencies__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__plain_make__dependencies__type_ctor_info_dependency_file_0__plain_make__type_ctor_info_dependency_status_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_dependency_status_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__dependencies__pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0,
    (MR_TypeInfo) &make__make__type_ctor_info_dependency_status_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__list__pti_list_1__plain_pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__dependencies__pair__ti_pair_2make__dependencies__type_ctor_info_dependency_file_0make__type_ctor_info_dependency_status_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 make__dependencies____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &make__dependencies__make__dependencies__type_ctor_info_deps_result_1,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0
  }
};

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_cached_direct_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____cached_direct_imports_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____cached_direct_imports_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "cached_direct_imports",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_cached_foreign_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____cached_foreign_imports_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____cached_foreign_imports_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "cached_foreign_imports",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_module_index_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0,
    (MR_TypeInfo) &make__dependencies__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0
  }
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____cached_transitive_dependencies_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____cached_transitive_dependencies_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "cached_transitive_dependencies",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__dependencies__tree234__ti_tree234_2make__dependencies__type_ctor_info_transitive_dependencies_root_0make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_0 = {
  (MR_String) "deps_up_to_date",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_1 = {
  (MR_String) "deps_out_of_date",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_dependencies_result_0_2 = {
  (MR_String) "deps_error",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_value_ordered_dependencies_result_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__dependencies____Unify____dependencies_result_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____dependencies_result_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "dependencies_result",
  {     make__dependencies__make__dependencies__enum_name_ordered_dependencies_result_0 },
  {     make__dependencies__make__dependencies__enum_value_ordered_dependencies_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__dependencies__make__dependencies__functor_number_map_dependencies_result_0
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_0_0[1] = {
  (MR_PseudoTypeInfo) &make__make__type_ctor_info_target_file_0
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_0 = {
  (MR_String) "dep_target",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__dependencies__make__dependencies__field_types_dependency_file_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__maybe__ti_maybe_1libs__options__type_ctor_info_option_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dependency_file_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &make__dependencies__maybe__ti_maybe_1libs__options__type_ctor_info_option_0
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_1 = {
  (MR_String) "dep_file",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  make__dependencies__make__dependencies__field_types_dependency_file_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_0
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_1[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_dependency_file_0_1
};

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_dependency_file_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_dependency_file_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__dependencies____Unify____dependency_file_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____dependency_file_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "dependency_file",
  {     make__dependencies__make__dependencies__du_name_ordered_dependency_file_0 },
  {     make__dependencies__make__dependencies__du_ptag_ordered_dependency_file_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__dependencies__make__dependencies__functor_number_map_dependency_file_0
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dependency_file_index_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc make__dependencies__make__dependencies__notag_functor_desc_dependency_file_index_0 = {
  (MR_String) "dependency_file_index",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__dependencies____Unify____dependency_file_index_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____dependency_file_index_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "dependency_file_index",
  {     &make__dependencies__make__dependencies__notag_functor_desc_dependency_file_index_0 },
  {     &make__dependencies__make__dependencies__notag_functor_desc_dependency_file_index_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__dependencies__make__dependencies__functor_number_map_dependency_file_index_0
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_deps_result_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1
};

static const MR_ConstString make__dependencies__make__dependencies__field_names_deps_result_1_0[2] = {
  (MR_String) "dr_success",
  (MR_String) "dr_set"
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_deps_result_1_0 = {
  (MR_String) "deps_result",
  (MR_Integer) 2,
  (MR_Integer) 2,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__dependencies__make__dependencies__field_types_deps_result_1_0,
  make__dependencies__make__dependencies__field_names_deps_result_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_deps_result_1_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_deps_result_1_0
};

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_deps_result_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_deps_result_1_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__dependencies____Unify____deps_result_1_0_10001)),
  ((MR_Box) (make__dependencies____Compare____deps_result_1_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "deps_result",
  {     make__dependencies__make__dependencies__du_name_ordered_deps_result_1 },
  {     make__dependencies__make__dependencies__du_ptag_ordered_deps_result_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__dependencies__make__dependencies__functor_number_map_deps_result_1
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_deps_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__dependencies____Unify____deps_set_1_0_10001)),
  ((MR_Box) (make__dependencies____Compare____deps_set_1_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "deps_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_find_module_deps_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__dependencies____Unify____find_module_deps_1_0_10001)),
  ((MR_Box) (make__dependencies____Compare____find_module_deps_1_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "find_module_deps",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__dependencies__set_ordlist__pti_set_ordlist_1__pseudo_1,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_find_module_deps_plain_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__dependencies____Unify____find_module_deps_plain_set_1_0_10001)),
  ((MR_Box) (make__dependencies____Compare____find_module_deps_plain_set_1_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "find_module_deps_plain_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__dependencies__type_ctor_info_module_index_0__plain_bool__type_ctor_info_bool_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_module_deps_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__dependencies____Unify____module_deps_result_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____module_deps_result_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "module_deps_result",
  {     NULL },
  {     (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__ti_deps_result_1make__dependencies__type_ctor_info_module_index_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_module_index_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc make__dependencies__make__dependencies__notag_functor_desc_module_index_0 = {
  (MR_String) "module_index",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_module_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__dependencies____Unify____module_index_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____module_index_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "module_index",
  {     &make__dependencies__make__dependencies__notag_functor_desc_module_index_0 },
  {     &make__dependencies__make__dependencies__notag_functor_desc_module_index_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__dependencies__make__dependencies__functor_number_map_module_index_0
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_0 = {
  (MR_String) "local_module",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_module_locn_0_1 = {
  (MR_String) "any_module",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_value_ordered_module_locn_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__dependencies____Unify____module_locn_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____module_locn_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "module_locn",
  {     make__dependencies__make__dependencies__enum_name_ordered_module_locn_0 },
  {     make__dependencies__make__dependencies__enum_value_ordered_module_locn_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__dependencies__make__dependencies__functor_number_map_module_locn_0
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_transitive_dependencies_root_0_0[3] = {
  (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_index_0,
  (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_type_0,
  (MR_PseudoTypeInfo) &make__dependencies__make__dependencies__type_ctor_info_module_locn_0
};

static const MR_DuArgLocn make__dependencies__make__dependencies__field_locns_transitive_dependencies_root_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_transitive_dependencies_root_0_0 = {
  (MR_String) "transitive_dependencies_root",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  make__dependencies__make__dependencies__field_types_transitive_dependencies_root_0_0,
  NULL,
  make__dependencies__make__dependencies__field_locns_transitive_dependencies_root_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_transitive_dependencies_root_0_0[1] = {
  &make__dependencies__make__dependencies__du_functor_desc_transitive_dependencies_root_0_0
};

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_transitive_dependencies_root_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_transitive_dependencies_root_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__dependencies____Unify____transitive_dependencies_root_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____transitive_dependencies_root_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "transitive_dependencies_root",
  {     make__dependencies__make__dependencies__du_name_ordered_transitive_dependencies_root_0 },
  {     make__dependencies__make__dependencies__du_ptag_ordered_transitive_dependencies_root_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  make__dependencies__make__dependencies__functor_number_map_transitive_dependencies_root_0
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_0 = {
  (MR_String) "interface_imports",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_1 = {
  (MR_String) "all_imports",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc make__dependencies__make__dependencies__enum_functor_desc_transitive_dependencies_type_0_2 = {
  (MR_String) "all_dependencies",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr make__dependencies__make__dependencies__enum_value_ordered_transitive_dependencies_type_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__dependencies____Unify____transitive_dependencies_type_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____transitive_dependencies_type_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "transitive_dependencies_type",
  {     make__dependencies__make__dependencies__enum_name_ordered_transitive_dependencies_type_0 },
  {     make__dependencies__make__dependencies__enum_value_ordered_transitive_dependencies_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  make__dependencies__make__dependencies__functor_number_map_transitive_dependencies_type_0
};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__make__dependencies__dependency_file_index__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__from_int_1_1_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__make__dependencies__module_index__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__from_int_1_1_f_0_10001))
};

static void MR_CALL 
make__dependencies__check_dependencies_timestamps_write_missing_deps__ho21_7_p_0(
  MR_Word Var_42,
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_50_49_95_95_91_49_93_95_48_7_p_0(TargetFileName_8, BuildDepsSucceeded_9, DepFiles_10, WriteDepFile_11, DepTimestamps_12);
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__debug_newer_dependencies_2__1392__1_3_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word MaybeTimestamp_8,
  MR_Word LambdaHeadVar__1_29)
{
  {
    MR_bool succeeded;
    MR_Word MaybeDepTimestamp_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_29, (MR_Integer) 1)));
    MR_Box _DepFile_32 = (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_29, (MR_Integer) 0));

    if (((MR_tag((MR_Word) MaybeDepTimestamp_34)) == (MR_mktag((MR_Integer) 1))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word DepTimestamp_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeDepTimestamp_34, (MR_Integer) 0)));
      MR_Word Timestamp_17;
      MR_Word Var_30;
      MR_Word Var_40;

      succeeded = ((MR_tag((MR_Word) MaybeTimestamp_8)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Timestamp_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeTimestamp_8, (MR_Integer) 0)));
        Var_30 = (MR_Integer) 2;
        libs__timestamp____Compare____timestamp_0_0(&Var_40, DepTimestamp_16, Timestamp_17);
        succeeded = (Var_30 == Var_40);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1286__1_3_p_0(
  MR_Word TypeInfo_for_File_38,
  MR_Word LambdaHeadVar__1_23,
  MR_Box * LambdaHeadVar__2_24)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;
    MR_String Var_17;

    *LambdaHeadVar__2_24 = (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 0));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 1)));
    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
      Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__fact_table_files__986__1_1_f_0(
  MR_String LambdaHeadVar__1_27)
{
  {
    MR_Word LambdaHeadVar__2_28;

    {
      LambdaHeadVar__2_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_28, 0) = ((MR_Box) (LambdaHeadVar__1_27));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return LambdaHeadVar__2_28;
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports__925__1_10_p_0(
  MR_Word HeadVar__1_31,
  MR_Word HeadVar__2_51,
  MR_Word HeadVar__3_52,
  MR_Word * HeadVar__4_53,
  MR_Word HeadVar__5_54,
  MR_Word * HeadVar__6_55,
  MR_Word HeadVar__7_56,
  MR_Word * HeadVar__8_57)
{
  {
    MR_Word Deps1_87;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), HeadVar__1_31, (MR_Integer) 1)));
    MR_Box conv4_HeadVar__4_53;
    MR_Box conv3_Deps1_87;
    MR_Box conv2_HeadVar__8_57;
    MR_Box conv1_HeadVar__10_59;

    func_0(((MR_Box) HeadVar__1_31), ((MR_Box) (HeadVar__2_51)), ((MR_Box) (HeadVar__3_52)), &conv4_HeadVar__4_53, &conv3_Deps1_87, ((MR_Box) (HeadVar__7_56)), &conv2_HeadVar__8_57, ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__10_59);
    *HeadVar__4_53 = ((MR_Word) conv4_HeadVar__4_53);
    Deps1_87 = ((MR_Word) conv3_Deps1_87);
    *HeadVar__8_57 = ((MR_Word) conv2_HeadVar__8_57);
    *HeadVar__6_55 = mercury__sparse_bitset__union_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, HeadVar__5_54, Deps1_87);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__foreign_imports__909__1_10_p_0(
  MR_Word HeadVar__1_31,
  MR_Word HeadVar__2_52,
  MR_Word HeadVar__3_53,
  MR_Word * HeadVar__4_54,
  MR_Word HeadVar__5_55,
  MR_Word * HeadVar__6_56,
  MR_Word HeadVar__7_57,
  MR_Word * HeadVar__8_58)
{
  {
    make__dependencies__union_deps_10_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, HeadVar__1_31, HeadVar__2_52, HeadVar__3_53, HeadVar__4_54, HeadVar__5_55, HeadVar__6_56, HeadVar__7_57, HeadVar__8_58);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__indirect_imports_2__852__1_10_p_0(
  MR_Word HeadVar__1_33,
  MR_Word HeadVar__2_74,
  MR_Word HeadVar__3_75,
  MR_Word * HeadVar__4_76,
  MR_Word HeadVar__5_77,
  MR_Word * HeadVar__6_78,
  MR_Word HeadVar__7_79,
  MR_Word * HeadVar__8_80)
{
  {
    make__dependencies__union_deps_10_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, HeadVar__1_33, HeadVar__2_74, HeadVar__3_75, HeadVar__4_76, HeadVar__5_77, HeadVar__6_78, HeadVar__7_79, HeadVar__8_80);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__direct_imports__731__1_10_p_0(
  MR_Word HeadVar__1_37,
  MR_Word HeadVar__2_143,
  MR_Word HeadVar__3_144,
  MR_Word * HeadVar__4_145,
  MR_Word HeadVar__5_146,
  MR_Word * HeadVar__6_147,
  MR_Word HeadVar__7_148,
  MR_Word * HeadVar__8_149)
{
  {
    make__dependencies__union_deps_10_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, HeadVar__1_37, HeadVar__2_143, HeadVar__3_144, HeadVar__4_145, HeadVar__5_146, HeadVar__6_147, HeadVar__7_148, HeadVar__8_149);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__files_of_2__643__1_10_p_0(
  MR_Word FindFiles_11,
  MR_Word HeadVar__2_56,
  MR_Word HeadVar__3_57,
  MR_Word * HeadVar__4_58,
  MR_Word HeadVar__5_59,
  MR_Word * HeadVar__6_60,
  MR_Word HeadVar__7_61,
  MR_Word * HeadVar__8_62)
{
  {
    MR_Word Deps1_83;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), FindFiles_11, (MR_Integer) 1)));
    MR_Box conv4_HeadVar__4_58;
    MR_Box conv3_Deps1_83;
    MR_Box conv2_HeadVar__8_62;
    MR_Box conv1_HeadVar__10_64;

    func_0(((MR_Box) FindFiles_11), ((MR_Box) (HeadVar__2_56)), ((MR_Box) (HeadVar__3_57)), &conv4_HeadVar__4_58, &conv3_Deps1_83, ((MR_Box) (HeadVar__7_61)), &conv2_HeadVar__8_62, ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__10_64);
    *HeadVar__4_58 = ((MR_Word) conv4_HeadVar__4_58);
    Deps1_83 = ((MR_Word) conv3_Deps1_83);
    *HeadVar__8_62 = ((MR_Word) conv2_HeadVar__8_62);
    *HeadVar__6_60 = mercury__set__union_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, HeadVar__5_59, Deps1_83);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__base_compiled_code_dependencies__574__1_10_p_0(
  MR_Word HeadVar__1_22,
  MR_Word HeadVar__2_23,
  MR_Word HeadVar__3_84,
  MR_Word HeadVar__4_85,
  MR_Word * HeadVar__5_86,
  MR_Word * HeadVar__6_87,
  MR_Word HeadVar__7_88,
  MR_Word * HeadVar__8_89)
{
  {
    make__dependencies__map_find_module_deps_10_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, HeadVar__1_22, HeadVar__2_23, HeadVar__3_84, HeadVar__4_85, HeadVar__5_86, HeadVar__6_87, HeadVar__7_88, HeadVar__8_89);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__base_compiled_code_dependencies__568__1_8_p_0(
  MR_Word HeadVar__1_34,
  MR_Word HeadVar__2_35,
  MR_Word * HeadVar__3_36,
  MR_Word * HeadVar__4_37,
  MR_Word HeadVar__5_38,
  MR_Word * HeadVar__6_39)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_98_97_115_101_95_99_111_109_112_105_108_101_100_95_99_111_100_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_53_54_56_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(HeadVar__3_36, HeadVar__4_37, HeadVar__5_38, HeadVar__6_39);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_98_97_115_101_95_99_111_109_112_105_108_101_100_95_99_111_100_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_53_54_56_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_36,
  MR_Word * HeadVar__4_37,
  MR_Word HeadVar__5_38,
  MR_Word * HeadVar__6_39)
{
  {
    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_95_100_101_112_115_95_95_91_50_44_32_51_93_95_48_8_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, HeadVar__3_36, HeadVar__4_37, HeadVar__5_38, HeadVar__6_39);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__compiled_code_dependencies__539__1_10_p_0(
  MR_Word HeadVar__1_23,
  MR_Word HeadVar__2_24,
  MR_Word HeadVar__3_57,
  MR_Word HeadVar__4_58,
  MR_Word * HeadVar__5_59,
  MR_Word * HeadVar__6_60,
  MR_Word HeadVar__7_61,
  MR_Word * HeadVar__8_62)
{
  {
    make__dependencies__map_find_module_deps_10_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, HeadVar__1_23, HeadVar__2_24, HeadVar__3_57, HeadVar__4_58, HeadVar__5_59, HeadVar__6_60, HeadVar__7_61, HeadVar__8_62);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__compiled_code_dependencies__540__1_10_p_0(
  MR_Word HeadVar__1_25,
  MR_Word HeadVar__2_26,
  MR_Word HeadVar__3_66,
  MR_Word HeadVar__4_67,
  MR_Word * HeadVar__5_68,
  MR_Word * HeadVar__6_69,
  MR_Word HeadVar__7_70,
  MR_Word * HeadVar__8_71)
{
  {
    make__dependencies__map_find_module_deps_10_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, HeadVar__1_25, HeadVar__2_26, HeadVar__3_66, HeadVar__4_67, HeadVar__5_68, HeadVar__6_69, HeadVar__7_70, HeadVar__8_71);
  }
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__check_dependencies__1254__1_1_p_0(
  MR_Word LambdaHeadVar__1_35)
{
  {
    MR_bool succeeded;
    MR_Word DepStatus_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 1)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 0)));

    succeeded = (DepStatus_49 == (MR_Integer) 2);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__remove_nested_modules__1184__1_2_p_0(
  MR_Word NestedModules_13,
  MR_Word HeadVar__2_34)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, NestedModules_13, ((MR_Box) (HeadVar__2_34)));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__419__1_8_p_0(
  MR_Word HeadVar__1_171,
  MR_Word HeadVar__2_172,
  MR_Word * HeadVar__3_173,
  MR_Word * HeadVar__4_174,
  MR_Word HeadVar__5_175,
  MR_Word * HeadVar__6_176)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_52_49_57_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(HeadVar__3_173, HeadVar__4_174, HeadVar__5_175, HeadVar__6_176);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_52_49_57_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_173,
  MR_Word * HeadVar__4_174,
  MR_Word HeadVar__5_175,
  MR_Word * HeadVar__6_176)
{
  {
    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_95_100_101_112_115_95_95_91_50_44_32_51_93_95_48_8_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, HeadVar__3_173, HeadVar__4_174, HeadVar__5_175, HeadVar__6_176);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__408__1_8_p_0(
  MR_Word HeadVar__1_154,
  MR_Word HeadVar__2_155,
  MR_Word * HeadVar__3_156,
  MR_Word * HeadVar__4_157,
  MR_Word HeadVar__5_158,
  MR_Word * HeadVar__6_159)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_52_48_56_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(HeadVar__3_156, HeadVar__4_157, HeadVar__5_158, HeadVar__6_159);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_52_48_56_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_156,
  MR_Word * HeadVar__4_157,
  MR_Word HeadVar__5_158,
  MR_Word * HeadVar__6_159)
{
  {
    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_95_100_101_112_115_95_95_91_50_44_32_51_93_95_48_8_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, HeadVar__3_156, HeadVar__4_157, HeadVar__5_158, HeadVar__6_159);
  }
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__target_dependencies__460__1_8_p_0(
  MR_Word HeadVar__1_254,
  MR_Word HeadVar__2_255,
  MR_Word * HeadVar__3_256,
  MR_Word * HeadVar__4_257,
  MR_Word HeadVar__5_258,
  MR_Word * HeadVar__6_259)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_52_54_48_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(HeadVar__3_256, HeadVar__4_257, HeadVar__5_258, HeadVar__6_259);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_95_52_54_48_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_256,
  MR_Word * HeadVar__4_257,
  MR_Word HeadVar__5_258,
  MR_Word * HeadVar__6_259)
{
  {
    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_95_100_101_112_115_95_95_91_50_44_32_51_93_95_48_8_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, HeadVar__3_256, HeadVar__4_257, HeadVar__5_258, HeadVar__6_259);
  }
}

static MR_bool MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__from_int_1_1_f_0(
  MR_Integer I_3,
  MR_Word * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = (MR_Word) I_3;
    return MR_TRUE;
  }
}

static MR_Integer MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__to_int_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer I_3 = (MR_Integer) HeadVar__1_1;

    return I_3;
  }
}

static MR_bool MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__from_int_1_1_f_0(
  MR_Integer I_3,
  MR_Word * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = (MR_Word) I_3;
    return MR_TRUE;
  }
}

static MR_Integer MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__to_int_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer I_3 = (MR_Integer) HeadVar__1_1;

    return I_3;
  }
}

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____transitive_dependencies_root_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) ArgX1_4;
      MR_Integer Var_18 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_19 = (MR_Integer) ArgX2_6;
        MR_Integer Var_20 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_19, Var_20);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_21 = (MR_Integer) ArgX3_8;
          MR_Integer Var_22 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_21, Var_22);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Integer CastX_13 = (MR_Integer) ArgX1_3;
      MR_Integer CastY_14 = (MR_Integer) ArgY1_4;

      succeeded = (CastX_13 == CastY_14);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_11 = (MR_Integer) ArgX1_3;
        MR_Integer ArgY1_12 = (MR_Integer) ArgY1_4;

        succeeded = (ArgX1_11 == ArgY1_12);
      }
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
make__dependencies____Compare____module_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____module_locn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____module_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____module_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____module_deps_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies_scalar_common_1[5], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____module_deps_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = make__dependencies____Unify____deps_result_1_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____find_module_deps_plain_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_plain_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____deps_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____deps_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____deps_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Integer Var_15 = (MR_Integer) ArgX1_4;
      MR_Integer Var_16 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_15, Var_16);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_for_T_11, HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____deps_result_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_9, ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____dependency_file_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____dependency_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String ArgY1_13 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_16;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_16, Var_23, ArgY1_13);
        succeeded = (Var_16 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_16;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies_scalar_common_1[9], HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY2_15)));
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        make____Compare____target_file_0_0(HeadVar__1_1, Var_24, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_11_11;
      MR_String ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
        if (succeeded)
        {
          TypeInfo_11_11 = (MR_Word) &make__dependencies_scalar_common_1[9];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = make____Unify____target_file_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____dependencies_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____dependencies_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____cached_transitive_dependencies_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies_scalar_common_2[3], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_dependencies_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__dependencies_scalar_common_2[3], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____cached_foreign_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_foreign_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__dependencies_scalar_common_2[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
make__dependencies____Compare____cached_direct_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &make__dependencies_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
make__dependencies____Unify____cached_direct_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &make__dependencies_scalar_common_2[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__dependencies__debug_newer_dependencies_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__dependencies__IntroducedFrom__pred__debug_newer_dependencies_2__1392__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies__debug_newer_dependencies_2_6_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_String TargetFileName_7,
  MR_Word MaybeTimestamp_8,
  MR_Word DepFiles_9,
  MR_Word DepTimestamps_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_39_39;
    MR_Word DepTimestampAL_12;
    MR_Word NewerDepsAL0_18;
    MR_Word NewerDepsAL_19;
    MR_Word Var_28;
    MR_Word conv0_NewerDepsAL0_18;
    MR_Word conv1_NewerDepsAL_19;

    mercury__io__write_string_3_p_0(TargetFileName_7);
    mercury__io__write_string_3_p_0((MR_String) " [");
    TypeInfo_36_36 = (MR_Word) &make__dependencies_scalar_common_2[1];
    mercury__io__write_3_p_0(TypeInfo_36_36, ((MR_Box) (MaybeTimestamp_8)));
    mercury__io__write_string_3_p_0((MR_String) "]: newer dependencies:\n");
    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_T_35, TypeInfo_36_36, DepFiles_9, DepTimestamps_10, &DepTimestampAL_12);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[4]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (make__dependencies__debug_newer_dependencies_2_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (TypeInfo_for_T_35));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (MaybeTimestamp_8));
    }
    {
      TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_39_39, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_for_T_35));
      MR_hl_field(MR_mktag(0), TypeInfo_39_39, 2) = ((MR_Box) (TypeInfo_36_36));
    }
    mercury__list__filter_3_p_0(TypeInfo_39_39, (MR_Word) Var_28, (MR_Word) DepTimestampAL_12, &conv0_NewerDepsAL0_18);
    NewerDepsAL0_18 = (MR_Word) conv0_NewerDepsAL0_18;
    mercury__list__sort_2_p_0(TypeInfo_39_39, (MR_Word) NewerDepsAL0_18, &conv1_NewerDepsAL_19);
    NewerDepsAL_19 = (MR_Word) conv1_NewerDepsAL_19;
    make__dependencies__make_write_dependency_file_and_timestamp_list_3_p_0(TypeInfo_for_T_35, NewerDepsAL_19);
  }
}

static void MR_CALL 
make__dependencies__make_write_dependency_file_and_timestamp_list_3_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if (!((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Box DepFile_10 = (MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 0));
      MR_Word MaybeTimestamp_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 1)));

      mercury__io__write_char_3_p_0((MR_Char) 9);
      mercury__io__write_3_p_0(TypeInfo_for_T_22, DepFile_10);
      mercury__io__write_char_3_p_0((MR_Char) 32);
      mercury__io__write_3_p_0((MR_Word) &make__dependencies_scalar_common_2[1], ((MR_Box) (MaybeTimestamp_11)));
      mercury__io__nl_2_p_0();
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Tail_8;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__make_write_target_dependency_status_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word DepTarget_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word DepStatus_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_String DepStatusStr_9 = ((&make__dependencies_vector_common_17[0 + DepStatus_7]))->make__dependencies__vector_common_type_17_0__vct_17_f_0;

    make__util__make_write_dependency_file_4_p_0(Globals_5, DepTarget_6);
    mercury__io__write_string_3_p_0((MR_String) " - ");
    mercury__io__write_string_3_p_0(DepStatusStr_9);
  }
}

static void MR_CALL 
make__dependencies__check_dependencies_debug_unbuilt_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    make__dependencies__make_write_target_dependency_status_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
make__dependencies__check_dependencies_debug_unbuilt_5_p_0(
  MR_Word Globals_6,
  MR_String TargetFileName_7,
  MR_Word UnbuiltDependencies_8)
{
  {
    MR_Word Var_16;

    mercury__io__write_string_3_p_0(TargetFileName_7);
    mercury__io__write_string_3_p_0((MR_String) ": dependencies could not be built.\n\t");
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[4]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__dependencies__check_dependencies_debug_unbuilt_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Globals_6));
    }
    mercury__io__write_list_5_p_0((MR_Word) &make__dependencies_scalar_common_2[0], UnbuiltDependencies_8, (MR_String) ",\n\t", Var_16);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
make__dependencies__make_local_module_id_option_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Opts0_5,
  MR_Word * Opts_6)
{
  {
    MR_String ModuleNameStr_7;
    MR_Word Var_9;

    ModuleNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_4);
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (ModuleNameStr_7));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Opts0_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Opts_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "--local-module-id"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_9));
    }
  }
}

static void MR_CALL 
make__dependencies__collect_nested_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_NestedModules_0_16,
  MR_Word * STATE_VARIABLE_NestedModules_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word MaybeImports_14;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_10, &MaybeImports_14, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
    if ((MaybeImports_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_NestedModules_17 = STATE_VARIABLE_NestedModules_0_16;
    else
    {
      MR_Word Imports_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImports_14, (MR_Integer) 0)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 10)));
      MR_String Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 0)));
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 1)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 2)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 3)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 4)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 5)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 6)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 7)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 8)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 9)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 11)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 12)));
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 13)));
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 14)));
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 15)));
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 16)));
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 17)));
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 18)));
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 19)));
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 20)));
      MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 21)));
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 22)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 23)));
      MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 24)));
      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 25)));
      MR_String Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_15, (MR_Integer) 26)));

      mercury__set__union_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, Var_24, STATE_VARIABLE_NestedModules_0_16, STATE_VARIABLE_NestedModules_17);
    }
  }
}

static void MR_CALL 
make__dependencies__find_transitive_implementation_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word Modules0_15;

    make__dependencies__find_transitive_module_dependencies_10_p_0(Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, Success_11, &Modules0_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    *Modules_12 = mercury__sparse_bitset__insert_2_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Modules0_15, ((MR_Box) (ModuleIndex_10)));
  }
}

static MR_bool MR_CALL 
make__dependencies__get_foreign_include_files_2_4_p_0(
  MR_Word Languages_5,
  MR_String SourceFileName_6,
  MR_Word ForeignInclude_7,
  MR_Word * File_8)
{
  {
    MR_bool succeeded;
    MR_Word Language_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignInclude_7, (MR_Integer) 0)));
    MR_String IncludeFileName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ForeignInclude_7, (MR_Integer) 1)));
    MR_String IncludePath_11;
    MR_Word Var_12;

    succeeded = mercury__set__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (Language_9)), Languages_5);
    if (succeeded)
    {
      parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_6, IncludeFileName_10, &IncludePath_11);
      Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *File_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IncludePath_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_12));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__dependencies__foreign_include_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_File_8;

    succeeded = make__dependencies__get_foreign_include_files_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_File_8);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_File_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies__foreign_include_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Files_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word Languages_15;
    MR_Word ModuleName_16;
    MR_Word MaybeImports_17;

    libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &Languages_15);
    make__dependencies__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_22, ModuleIndex_10, &ModuleName_16);
    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_16, &MaybeImports_17, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    if ((MaybeImports_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Success_11 = (MR_Integer) 0;
      *Files_12 = mercury__set__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0);
    }
    else
    {
      MR_Word Imports_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImports_17, (MR_Integer) 0)));
      MR_String SourceFileName_19;
      MR_Word ForeignIncludeFilesCord_20;
      MR_Word FilesList_21;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_90;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_String Var_55;

      *Success_11 = (MR_Integer) 1;
      SourceFileName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 0)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 1)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 2)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 3)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 4)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 5)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 6)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 7)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 8)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 9)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 10)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 11)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 12)));
      ForeignIncludeFilesCord_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 13)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 14)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 15)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 16)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 17)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 18)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 19)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 20)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 21)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 22)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 23)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 24)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 25)));
      Var_55 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_18, (MR_Integer) 26)));
      Var_28 = mercury__set__from_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, Languages_15);
      Var_29 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0, ForeignIncludeFilesCord_20);
      {
        Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[3]));
        MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (make__dependencies__foreign_include_files_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (SourceFileName_19));
      }
      mercury__list__filter_map_3_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, Var_90, Var_29, &FilesList_21);
      *Files_12 = mercury__set__from_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, FilesList_21);
    }
  }
}

static MR_Box MR_CALL 
make__dependencies__fact_table_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_28;

    conv1_LambdaHeadVar__2_28 = make__dependencies__IntroducedFrom__func__fact_table_files__986__1_1_f_0(((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_28));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__dependencies__fact_table_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Files_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word ModuleName_15;
    MR_Word MaybeImports_16;
    MR_Integer I_64 = (MR_Integer) ModuleIndex_10;
    MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
    MR_Box Var_66 = ((MR_Box) (MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1)));
    MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
    MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
    MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
    MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 7)));
    MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 8)));
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 9)));
    MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 10)));
    MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 11)));
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 12)));
    MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 13)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 14)));
    MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 15)));
    MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 16)));
    MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 17)));
    MR_Integer Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 18)));
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 19)));
    MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 0)));
    MR_Integer Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 2)));
    MR_Box conv0_ModuleName_15;

    conv0_ModuleName_15 = mercury__version_array__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, I_64, Var_66);
    ModuleName_15 = ((MR_Word) conv0_ModuleName_15);
    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_15, &MaybeImports_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
    if ((MaybeImports_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Success_11 = (MR_Integer) 0;
      *Files_12 = mercury__set__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0);
    }
    else
    {
      MR_Word TypeCtorInfo_59_59;
      MR_Word Imports_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImports_16, (MR_Integer) 0)));
      MR_Word FilesList_18;
      MR_Word Var_30;
      MR_String Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_String Var_57;

      *Success_11 = (MR_Integer) 1;
      TypeCtorInfo_59_59 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
      Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 0)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 1)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 2)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 3)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 4)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 5)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 6)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 7)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 8)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 9)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 10)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 11)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 12)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 13)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 14)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 15)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 16)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 17)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 18)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 19)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 20)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 21)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 22)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 23)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 24)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 25)));
      Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_17, (MR_Integer) 26)));
      FilesList_18 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_59_59, (MR_Word) &make__dependencies_scalar_common_2[37], Var_30);
      *Files_12 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_59_59, FilesList_18);
    }
  }
}

static void MR_CALL 
make__dependencies__find_module_foreign_imports_2_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Word Result0_17;
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 12)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 11)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 14)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 15)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 16)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 17)));
    MR_Integer Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 18)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 19)));
    MR_Box conv0_Result0_17;

    succeeded = mercury__map__elem_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[5], ((MR_Box) (ModuleIndex_12)), Var_22, &conv0_Result0_17);
    if (succeeded)
    {
      Result0_17 = ((MR_Word) conv0_Result0_17);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Success_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_17, (MR_Integer) 0)));
      *ForeignModules_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_17, (MR_Integer) 1)));
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_23_23;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Integer Var_65;
      MR_Word Var_66;
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
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Integer Var_85;
      MR_Word Var_86;
      MR_Word Var_79;

      make__dependencies__find_module_foreign_imports_3_9_p_0(Languages_10, Globals_11, ModuleIndex_12, Success_13, ForeignModules_14, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_23_23);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (*Success_13));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (*ForeignModules_14));
      }
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 0)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 1)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 2)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 3)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 4)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 5)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 6)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 7)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 8)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 9)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 10)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 11)));
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 12)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 13)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 14)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 15)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 16)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 17)));
      Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 18)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 19)));
      Var_28 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[5], ((MR_Box) (ModuleIndex_12)), Var_27, ((MR_Box) (Var_26)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 0)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 1)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 2)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 3)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 4)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 5)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 6)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 7)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 8)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 9)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 10)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 11)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 12)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 13)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 14)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 15)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 16)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 17)));
      Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 18)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 19)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_19 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_86));
      }
    }
  }
}

static MR_Box MR_CALL 
make__dependencies__find_module_foreign_imports_3_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__prog_data_foreign__get_lang_foreign_import_modules_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__dependencies__find_module_foreign_imports_3_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_Word ModuleName_17;
    MR_Word MaybeImports_18;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Integer I_67 = (MR_Integer) ModuleIndex_12;
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
    MR_Box Var_69 = ((MR_Box) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
    MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
    MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
    MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
    MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
    MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
    MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
    MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
    MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
    MR_Integer Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
    MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
    MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0)));
    MR_Integer Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 2)));
    MR_Box conv0_ModuleName_17;

    conv0_ModuleName_17 = mercury__version_array__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, I_67, Var_69);
    ModuleName_17 = ((MR_Word) conv0_ModuleName_17);
    make__module_dep_file__get_module_dependencies_7_p_0(Globals_11, ModuleName_17, &MaybeImports_18, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_27);
    if ((MaybeImports_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ForeignModules_14 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
      *Success_13 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
    }
    else
    {
      MR_Word TypeCtorInfo_62_62;
      MR_Word Imports_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImports_18, (MR_Integer) 0)));
      MR_Word ForeignModuleInfos_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 12)));
      MR_Word LangForeignModuleNameSets_21;
      MR_Word ForeignModuleNameSet_22;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_String Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 0)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 1)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 2)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 3)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 4)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 5)));
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 6)));
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 7)));
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 8)));
      MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 9)));
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 10)));
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 11)));
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 13)));
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 14)));
      MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 15)));
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 16)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 17)));
      MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 18)));
      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 19)));
      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 20)));
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 21)));
      MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 22)));
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 23)));
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 24)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 25)));
      MR_String Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_19, (MR_Integer) 26)));

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[3]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (make__dependencies__find_module_foreign_imports_3_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ForeignModuleInfos_20));
      }
      LangForeignModuleNameSets_21 = mercury__set__map_2_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &make__dependencies_scalar_common_1[1], Var_29, Languages_10);
      TypeCtorInfo_62_62 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      mercury__set__power_union_2_p_0(TypeCtorInfo_62_62, LangForeignModuleNameSets_21, &ForeignModuleNameSet_22);
      Var_30 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_62_62, ForeignModuleNameSet_22);
      make__dependencies__module_names_to_index_set_4_p_0(Var_30, ForeignModules_14, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_24);
      *Success_13 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
make__dependencies__find_module_foreign_imports_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_53;
    MR_Word conv4_HeadVar__6_55;
    MR_Word conv3_HeadVar__8_57;

    make__dependencies__IntroducedFrom__pred__find_module_foreign_imports__925__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_HeadVar__4_53, ((MR_Word) wrapper_arg_4), &conv4_HeadVar__6_55, ((MR_Word) wrapper_arg_6), &conv3_HeadVar__8_57);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_53));
    *wrapper_arg_5 = ((MR_Box) (conv4_HeadVar__6_55));
    *wrapper_arg_7 = ((MR_Box) (conv3_HeadVar__8_57));
  }
}

static void MR_CALL 
make__dependencies__find_module_foreign_imports_9_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_13;
    MR_Word conv1_ForeignModules_14;
    MR_Word conv0_STATE_VARIABLE_Info_19;

    make__dependencies__find_module_foreign_imports_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_13, &conv1_ForeignModules_14, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_13));
    *wrapper_arg_4 = ((MR_Box) (conv1_ForeignModules_14));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_19));
  }
}

static void MR_CALL 
make__dependencies__find_module_foreign_imports_9_p_0(
  MR_Word Languages_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * ForeignModules_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_Word Success0_17;
    MR_Word ImportedModules_18;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word Modules0_85;

    make__dependencies__find_transitive_module_dependencies_10_p_0(Globals_11, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_12, &Success0_17, &Modules0_85, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_23);
    ImportedModules_18 = mercury__sparse_bitset__insert_2_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Modules0_85, ((MR_Box) (ModuleIndex_12)));
    switch (Success0_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Success_13 = (MR_Integer) 0;
          *ForeignModules_14 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
          *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_23_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 14)));
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_31;
          MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 0)));
          MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 1)));
          MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 2)));
          MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 3)));
          MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 4)));
          MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 5)));
          MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 6)));
          MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 7)));
          MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 8)));
          MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 9)));
          MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 10)));
          MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 11)));
          MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 12)));
          MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 13)));
          MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 15)));
          MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 16)));
          MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 17)));
          MR_Integer Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 18)));
          MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 19)));

          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&make__dependencies_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (make__dependencies__find_module_foreign_imports_9_p_0_1));
            MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Languages_10));
          }
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[5]));
            MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (make__dependencies__find_module_foreign_imports_9_p_0_2));
            MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Var_31));
          }
          Var_27 = mercury__sparse_bitset__insert_2_f_0((MR_Word) &make__dependencies_scalar_common_1[0], ImportedModules_18, ((MR_Box) (ModuleIndex_12)));
          Var_28 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
          make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_50_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_25, Var_26, Globals_11, Var_27, Success_13, Var_28, ForeignModules_14, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
        }
        break;
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word Var_26;
    MR_Box conv2_STATE_VARIABLE_Acc_21;
    MR_Box conv1_STATE_VARIABLE_Info_23;
    MR_Box conv0_STATE_VARIABLE_IO_25;

    Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Ts_15);
    make__util__foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[8], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, KeepGoing_12, P_13, Globals_14, Var_26, Success_16, ((MR_Box) (STATE_VARIABLE_Acc_0_20)), &conv2_STATE_VARIABLE_Acc_21, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv1_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_Acc_21 = ((MR_Word) conv2_STATE_VARIABLE_Acc_21);
    *STATE_VARIABLE_Info_23 = ((MR_Word) conv1_STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_54;
    MR_Word conv4_HeadVar__6_56;
    MR_Word conv3_HeadVar__8_58;

    make__dependencies__IntroducedFrom__pred__foreign_imports__909__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_HeadVar__4_54, ((MR_Word) wrapper_arg_4), &conv4_HeadVar__6_56, ((MR_Word) wrapper_arg_6), &conv3_HeadVar__8_58);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_54));
    *wrapper_arg_5 = ((MR_Box) (conv4_HeadVar__6_56));
    *wrapper_arg_7 = ((MR_Box) (conv3_HeadVar__8_58));
  }
}

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_13;
    MR_Word conv1_ForeignModules_14;
    MR_Word conv0_STATE_VARIABLE_Info_20;

    make__dependencies__find_module_foreign_imports_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_13, &conv1_ForeignModules_14, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_13));
    *wrapper_arg_4 = ((MR_Box) (conv1_ForeignModules_14));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_Word Languages_15;
    MR_Word IntermodSuccess_16;
    MR_Word IntermodModules_17;
    MR_Word ForeignSuccess_18;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Integer Var_50;
    MR_Word Var_51;

    libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &Languages_15);
    make__dependencies__intermod_imports_8_p_0(Globals_9, ModuleIndex_10, &IntermodSuccess_16, &IntermodModules_17, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_23);
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 0)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 1)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 2)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 3)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 4)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 5)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 6)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 7)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 8)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 9)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 10)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 11)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 12)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 13)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 14)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 15)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 16)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 17)));
    Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 18)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 19)));
    Var_32 = mercury__set__list_to_set_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, Languages_15);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&make__dependencies_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (make__dependencies__foreign_imports_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[5]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (make__dependencies__foreign_imports_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Var_31));
    }
    Var_27 = mercury__sparse_bitset__insert_2_f_0((MR_Word) &make__dependencies_scalar_common_1[0], IntermodModules_17, ((MR_Box) (ModuleIndex_10)));
    Var_28 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_51_95_95_91_49_44_32_50_93_95_48_11_p_0(Var_25, Var_26, Globals_9, Var_27, &ForeignSuccess_18, Var_28, Modules_12, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
    *Success_11 = mercury__bool__and_2_f_0(IntermodSuccess_16, ForeignSuccess_18);
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_51_95_95_91_49_44_32_50_93_95_48_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word Var_26;
    MR_Box conv2_STATE_VARIABLE_Acc_21;
    MR_Box conv1_STATE_VARIABLE_Info_23;
    MR_Box conv0_STATE_VARIABLE_IO_25;

    Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Ts_15);
    make__util__foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[8], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, KeepGoing_12, P_13, Globals_14, Var_26, Success_16, ((MR_Box) (STATE_VARIABLE_Acc_0_20)), &conv2_STATE_VARIABLE_Acc_21, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv1_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_Acc_21 = ((MR_Word) conv2_STATE_VARIABLE_Acc_21);
    *STATE_VARIABLE_Info_23 = ((MR_Word) conv1_STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__dependencies__non_intermod_indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  make__dependencies__indirect_imports_2__ho5_9_p_0(Globals_9, ModuleIndex_10, Success_11, Modules_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
make__dependencies__indirect_imports_2__ho5_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * IndirectImports_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word DirectSuccess_17;
    MR_Word DirectImports_18;
    MR_Word KeepGoing_19;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Integer Var_52;
    MR_Word Var_53;

    make__dependencies__non_intermod_direct_imports_8_p_0(Globals_10, ModuleIndex_12, &DirectSuccess_17, &DirectImports_18, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 5)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 6)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 7)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 8)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 9)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 10)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 11)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 12)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 13)));
    KeepGoing_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 14)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 15)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 16)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 17)));
    Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 18)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 19)));
    succeeded = (DirectSuccess_17 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      *Success_13 = (MR_Integer) 0;
      *IndirectImports_14 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_26_26;
    }
    else
    {
      MR_Word TypeCtorInfo_92_92 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0;
      MR_Word IndirectSuccess_20;
      MR_Word IndirectImports0_21;
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 14)));
      MR_Word Var_30;
      MR_Word Var_34;
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 5)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 6)));
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 7)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 8)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 9)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 10)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 11)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 12)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 13)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 15)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 16)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 17)));
      MR_Integer Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 18)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 19)));

      Var_30 = mercury__sparse_bitset__init_0_f_0(TypeCtorInfo_92_92);
      make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0(Var_28, Globals_10, DirectImports_18, &IndirectSuccess_20, Var_30, &IndirectImports0_21, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_23);
      Var_34 = mercury__sparse_bitset__delete_2_f_0((MR_Word) &make__dependencies_scalar_common_1[0], IndirectImports0_21, ((MR_Box) (ModuleIndex_12)));
      *IndirectImports_14 = mercury__sparse_bitset__difference_2_f_0(TypeCtorInfo_92_92, Var_34, DirectImports_18);
      *Success_13 = mercury__bool__and_2_f_0(DirectSuccess_17, IndirectSuccess_20);
    }
  }
}

static void MR_CALL 
make__dependencies__indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  make__dependencies__indirect_imports_2__ho6_9_p_0(Globals_9, ModuleIndex_10, Success_11, Modules_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
make__dependencies__indirect_imports_2__ho6_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleIndex_12,
  MR_Word * Success_13,
  MR_Word * IndirectImports_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word DirectSuccess_17;
    MR_Word DirectImports_18;
    MR_Word KeepGoing_19;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Integer Var_52;
    MR_Word Var_53;

    make__dependencies__direct_imports_8_p_0(Globals_10, ModuleIndex_12, &DirectSuccess_17, &DirectImports_18, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 5)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 6)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 7)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 8)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 9)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 10)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 11)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 12)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 13)));
    KeepGoing_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 14)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 15)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 16)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 17)));
    Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 18)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 19)));
    succeeded = (DirectSuccess_17 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      *Success_13 = (MR_Integer) 0;
      *IndirectImports_14 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_26_26;
    }
    else
    {
      MR_Word TypeCtorInfo_92_92 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0;
      MR_Word IndirectSuccess_20;
      MR_Word IndirectImports0_21;
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 14)));
      MR_Word Var_30;
      MR_Word Var_34;
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 0)));
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 1)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 2)));
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 3)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 4)));
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 5)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 6)));
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 7)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 8)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 9)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 10)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 11)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 12)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 13)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 15)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 16)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 17)));
      MR_Integer Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 18)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, (MR_Integer) 19)));

      Var_30 = mercury__sparse_bitset__init_0_f_0(TypeCtorInfo_92_92);
      make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0(Var_28, Globals_10, DirectImports_18, &IndirectSuccess_20, Var_30, &IndirectImports0_21, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_23);
      Var_34 = mercury__sparse_bitset__delete_2_f_0((MR_Word) &make__dependencies_scalar_common_1[0], IndirectImports0_21, ((MR_Box) (ModuleIndex_12)));
      *IndirectImports_14 = mercury__sparse_bitset__difference_2_f_0(TypeCtorInfo_92_92, Var_34, DirectImports_18);
      *Success_13 = mercury__bool__and_2_f_0(DirectSuccess_17, IndirectSuccess_20);
    }
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_76;
    MR_Word conv4_HeadVar__6_78;
    MR_Word conv3_HeadVar__8_80;

    make__dependencies__IntroducedFrom__pred__indirect_imports_2__852__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_HeadVar__4_76, ((MR_Word) wrapper_arg_4), &conv4_HeadVar__6_78, ((MR_Word) wrapper_arg_6), &conv3_HeadVar__8_80);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_76));
    *wrapper_arg_5 = ((MR_Box) (conv4_HeadVar__6_78));
    *wrapper_arg_7 = ((MR_Box) (conv3_HeadVar__8_80));
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Modules_12;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    make__dependencies__find_transitive_implementation_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Modules_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho4_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word Var_26;
    MR_Box conv8_STATE_VARIABLE_Acc_21;
    MR_Box conv7_STATE_VARIABLE_Info_23;
    MR_Box conv6_STATE_VARIABLE_IO_25;

    Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Ts_15);
    make__util__foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[8], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, KeepGoing_12, (MR_Word) &make__dependencies_scalar_common_13[3], Globals_14, Var_26, Success_16, ((MR_Box) (STATE_VARIABLE_Acc_0_20)), &conv8_STATE_VARIABLE_Acc_21, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv7_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_Acc_21 = ((MR_Word) conv8_STATE_VARIABLE_Acc_21);
    *STATE_VARIABLE_Info_23 = ((MR_Word) conv7_STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__dependencies__direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded;
    MR_Word Result0_15;
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
    MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
    MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
    MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
    MR_Integer Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
    MR_Box conv0_Result0_15;

    succeeded = mercury__map__elem_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[5], ((MR_Box) (ModuleIndex_10)), Var_27, &conv0_Result0_15);
    if (succeeded)
    {
      Result0_15 = ((MR_Word) conv0_Result0_15);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Success_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_15, (MR_Integer) 0)));
      *Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_15, (MR_Integer) 1)));
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word KeepGoing_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
      MR_Word Success0_17;
      MR_Word Modules0_18;
      MR_Word STATE_VARIABLE_Info_28_28;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
      MR_Integer Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
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
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Integer Var_117;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Integer Var_137;
      MR_Word Var_138;
      MR_Word Var_128;

      make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &Success0_17, &Modules0_18, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_28_28);
      succeeded = (Success0_17 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_16 == (MR_Integer) 0);
      if (succeeded)
      {
        *Success_11 = (MR_Integer) 0;
        *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
        STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_28_28;
      }
      else
      {
        MR_Word Success1_19;
        MR_Word IntermodModules_20;
        MR_Word STATE_VARIABLE_Info_30_30;

        make__dependencies__intermod_imports_8_p_0(Globals_9, ModuleIndex_10, &Success1_19, &IntermodModules_20, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_30_30);
        succeeded = (Success1_19 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_16 == (MR_Integer) 0);
        if (succeeded)
        {
          *Success_11 = (MR_Integer) 0;
          *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
          STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_30_30;
        }
        else
        {
          MR_Word Success2_21;
          MR_Word Modules1_22;
          MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 14)));
          MR_Word Var_34;
          MR_Word Var_38;
          MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 0)));
          MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 1)));
          MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 2)));
          MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 3)));
          MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 4)));
          MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 5)));
          MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 6)));
          MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 7)));
          MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 8)));
          MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 9)));
          MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 10)));
          MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 11)));
          MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 12)));
          MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 13)));
          MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 15)));
          MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 16)));
          MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 17)));
          MR_Integer Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 18)));
          MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 19)));

          Var_34 = mercury__sparse_bitset__union_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, Modules0_18, IntermodModules_20);
          make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho7_11_p_0(Var_32, Globals_9, IntermodModules_20, &Success2_21, Var_34, &Modules1_22, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_35_35);
          Var_38 = mercury__bool__and_2_f_0(Success0_17, Success1_19);
          *Success_11 = mercury__bool__and_2_f_0(Var_38, Success2_21);
          *Modules_12 = mercury__sparse_bitset__delete_2_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Modules1_22, ((MR_Box) (ModuleIndex_10)));
        }
      }
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (*Success_11));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (*Modules_12));
      }
      Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 0)));
      Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 1)));
      Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 2)));
      Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 3)));
      Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 4)));
      Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 5)));
      Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 6)));
      Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 7)));
      Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 8)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 9)));
      Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 10)));
      Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 11)));
      Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 12)));
      Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 13)));
      Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 14)));
      Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 15)));
      Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 16)));
      Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 17)));
      Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 18)));
      Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 19)));
      Var_42 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[5], ((MR_Box) (ModuleIndex_10)), Var_41, ((MR_Box) (Var_40)));
      Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 0)));
      Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 1)));
      Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 2)));
      Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 3)));
      Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 4)));
      Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 5)));
      Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 6)));
      Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 7)));
      Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 8)));
      Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 9)));
      Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 10)));
      Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 11)));
      Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 12)));
      Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 13)));
      Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 14)));
      Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 15)));
      Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 16)));
      Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 17)));
      Var_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 18)));
      Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, (MR_Integer) 19)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_131));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_133));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_134));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_135));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_136));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_137));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_138));
      }
    }
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho7_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_145;
    MR_Word conv4_HeadVar__6_147;
    MR_Word conv3_HeadVar__8_149;

    make__dependencies__IntroducedFrom__pred__direct_imports__731__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_HeadVar__4_145, ((MR_Word) wrapper_arg_4), &conv4_HeadVar__6_147, ((MR_Word) wrapper_arg_6), &conv3_HeadVar__8_149);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_145));
    *wrapper_arg_5 = ((MR_Box) (conv4_HeadVar__6_147));
    *wrapper_arg_7 = ((MR_Box) (conv3_HeadVar__8_149));
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho7_11_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Modules_12;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    make__dependencies__non_intermod_direct_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Modules_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error__ho7_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word Var_26;
    MR_Box conv8_STATE_VARIABLE_Acc_21;
    MR_Box conv7_STATE_VARIABLE_Info_23;
    MR_Box conv6_STATE_VARIABLE_IO_25;

    Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Ts_15);
    make__util__foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[8], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, KeepGoing_12, (MR_Word) &make__dependencies_scalar_common_13[2], Globals_14, Var_26, Success_16, ((MR_Box) (STATE_VARIABLE_Acc_0_20)), &conv8_STATE_VARIABLE_Acc_21, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv7_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_Acc_21 = ((MR_Word) conv8_STATE_VARIABLE_Acc_21);
    *STATE_VARIABLE_Info_23 = ((MR_Word) conv7_STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__dependencies__intermod_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word AnyIntermod_15;

    libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_15);
    switch (AnyIntermod_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Success_11 = (MR_Integer) 1;
          *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
          *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Transitive_16;

          libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 333, &Transitive_16);
          switch (Transitive_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, Success_11, Modules_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
              break;
            case (MR_Integer) 1:
              {
                MR_Word Modules0_37;

                make__dependencies__find_transitive_module_dependencies_10_p_0(Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, Success_11, &Modules0_37, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
                *Modules_12 = mercury__sparse_bitset__insert_2_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Modules0_37, ((MR_Box) (ModuleIndex_10)));
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_2_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_Word ModuleName_15;
    MR_Word MaybeModuleAndImports_16;
    MR_Word STATE_VARIABLE_Info_32_32;

    make__dependencies__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_28, ModuleIndex_10, &ModuleName_15);
    make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_15, &MaybeModuleAndImports_16, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32);
    if ((MaybeModuleAndImports_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Success_11 = (MR_Integer) 0;
      *Modules_12 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_32_32;
    }
    else
    {
      MR_Word TypeCtorInfo_93_93 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      MR_Word TypeCtorInfo_94_94;
      MR_Word ModuleAndImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeModuleAndImports_16, (MR_Integer) 0)));
      MR_Word IntDeps_18;
      MR_Word ImpDeps_19;
      MR_Word DepsInt_20;
      MR_Word DepsImp_21;
      MR_Word Modules0_22;
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 5)));
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_Info_36_36;
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_String Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 0)));
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 1)));
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 2)));
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 3)));
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 4)));
      MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 6)));
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 7)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 8)));
      MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 9)));
      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 10)));
      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 11)));
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 12)));
      MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 13)));
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 14)));
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 15)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 16)));
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 17)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 18)));
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 19)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 20)));
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 21)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 22)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 23)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 24)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 25)));
      MR_String Var_66 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 26)));
      MR_String Var_67;
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
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_String Var_92;

      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_93_93, Var_34, &IntDeps_18);
      Var_67 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 0)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 1)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 2)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 3)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 4)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 5)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 6)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 7)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 8)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 9)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 10)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 11)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 12)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 13)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 14)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 15)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 16)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 17)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 18)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 19)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 20)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 21)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 22)));
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 23)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 24)));
      Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 25)));
      Var_92 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_17, (MR_Integer) 26)));
      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_93_93, Var_35, &ImpDeps_19);
      make__dependencies__module_names_to_index_set_4_p_0(IntDeps_18, &DepsInt_20, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_36_36);
      make__dependencies__module_names_to_index_set_4_p_0(ImpDeps_19, &DepsImp_21, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_37_37);
      TypeCtorInfo_94_94 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0;
      Modules0_22 = mercury__sparse_bitset__union_2_f_0(TypeCtorInfo_94_94, DepsInt_20, DepsImp_21);
      if (((MR_tag((MR_Word) ModuleName_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ParentModule_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ModuleName_15, (MR_Integer) 0)));
        MR_Word ParentIndex_25;
        MR_Word ParentImports_26;
        MR_Word STATE_VARIABLE_Info_38_38;
        MR_String Var_24 = ((MR_String) (MR_hl_field(MR_mktag(1), ModuleName_15, (MR_Integer) 1)));

        make__dependencies__module_name_to_index_4_p_0(ParentModule_23, &ParentIndex_25, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38);
        make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ParentIndex_25, Success_11, &ParentImports_26, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_29);
        *Modules_12 = mercury__sparse_bitset__union_2_f_0(TypeCtorInfo_94_94, ParentImports_26, Modules0_22);
      }
      else
      {
        *Success_11 = (MR_Integer) 1;
        *Modules_12 = Modules0_22;
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_37_37;
      }
    }
  }
}

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;
    MR_Word Result_15;
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
    MR_Integer Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
    MR_Box conv0_Result_15;

    succeeded = mercury__map__elem_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[5], ((MR_Box) (ModuleIndex_10)), Var_20, &conv0_Result_15);
    if (succeeded)
    {
      Result_15 = ((MR_Word) conv0_Result_15);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Success_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result_15, (MR_Integer) 0)));
      *Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result_15, (MR_Integer) 1)));
      *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_21_21;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Integer Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Integer Var_83;
      MR_Word Var_84;
      MR_Word Var_75;

      make__dependencies__non_intermod_direct_imports_2_8_p_0(Globals_9, ModuleIndex_10, Success_11, Modules_12, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_21_21);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (*Success_11));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (*Modules_12));
      }
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 1)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 11)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 12)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 13)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 14)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 15)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 16)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 17)));
      Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 18)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 19)));
      Var_26 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[5], ((MR_Box) (ModuleIndex_10)), Var_25, ((MR_Box) (Var_24)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 1)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 11)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 12)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 13)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 14)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 15)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 16)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 17)));
      Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 18)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 19)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_17 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_84));
      }
    }
  }
}

static void MR_CALL 
make__dependencies__parents_8_p_0(
  MR_Word _Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * AncestorIndices_11,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_101_110_116_115_95_95_91_49_93_95_48_8_p_0(ModuleIndex_10, HeadVar__3_3, AncestorIndices_11, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_101_110_116_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word ModuleIndex_10,
  MR_Word * HeadVar__3_3,
  MR_Word * AncestorIndices_11,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word ModuleName_14;
    MR_Word Ancestors_15;
    MR_Integer I_24;
    MR_Word Var_25;
    MR_Box Var_26;
    MR_Word Var_54;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Integer Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Var_47;
    MR_Box conv0_ModuleName_14;

    *HeadVar__3_3 = (MR_Integer) 1;
    I_24 = (MR_Integer) ModuleIndex_10;
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
    Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
    Var_26 = ((MR_Box) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
    Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 2)));
    conv0_ModuleName_14 = mercury__version_array__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, I_24, Var_26);
    ModuleName_14 = ((MR_Word) conv0_ModuleName_14);
    Ancestors_15 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_14);
    Var_54 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
    make__dependencies__module_names_to_index_set_2_5_p_0(Ancestors_15, Var_54, AncestorIndices_11, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
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
  {
    *HeadVar__3_3 = (MR_Integer) 1;
    *HeadVar__4_4 = mercury__sparse_bitset__make_singleton_set_1_f_0((MR_Word) &make__dependencies_scalar_common_1[0], ((MR_Box) (ModuleIndex_10)));
    *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
  }
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
  {
    *HeadVar__3_3 = (MR_Integer) 1;
    *HeadVar__4_4 = mercury__sparse_bitset__init_0_f_0(TypeInfo_for_T_17);
    *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
  }
}

static void MR_CALL 
make__dependencies__map_find_module_deps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Success_14;
    MR_Word conv6_Deps_16;
    MR_Word conv5_STATE_VARIABLE_Info_21;

    make__dependencies__union_deps_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_Success_14, ((MR_Word) wrapper_arg_4), &conv6_Deps_16, ((MR_Word) wrapper_arg_6), &conv5_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv7_Success_14));
    *wrapper_arg_5 = ((MR_Box) (conv6_Deps_16));
    *wrapper_arg_7 = ((MR_Box) (conv5_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
make__dependencies__map_find_module_deps_10_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word FindDeps2_11,
  MR_Word FindDeps1_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Success_15,
  MR_Word * Result_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded;
    MR_Word KeepGoing_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
    MR_Word Success0_20;
    MR_Word Modules0_21;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
    MR_Integer Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), FindDeps1_12, (MR_Integer) 1)));
    MR_Box conv4_Success0_20;
    MR_Box conv3_Modules0_21;
    MR_Box conv2_STATE_VARIABLE_Info_27_27;
    MR_Box conv1_STATE_VARIABLE_IO_28_28;

    func_0(((MR_Box) FindDeps1_12), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Success0_20, &conv3_Modules0_21, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv2_STATE_VARIABLE_Info_27_27, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
    Success0_20 = ((MR_Word) conv4_Success0_20);
    Modules0_21 = ((MR_Word) conv3_Modules0_21);
    STATE_VARIABLE_Info_27_27 = ((MR_Word) conv2_STATE_VARIABLE_Info_27_27);
    succeeded = (Success0_20 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      *Success_15 = (MR_Integer) 0;
      *Result_16 = mercury__sparse_bitset__init_0_f_0(TypeInfo_for_T_52);
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
    }
    else
    {
      MR_Word TypeInfo_64_64;
      MR_Word Success1_22;
      MR_Word Var_29;
      MR_Word Var_30;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (make__dependencies__map_find_module_deps_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (TypeInfo_for_T_52));
        MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (FindDeps2_11));
      }
      Var_30 = mercury__sparse_bitset__init_0_f_0(TypeInfo_for_T_52);
      {
        TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_64_64, 0) = ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1));
        MR_hl_field(MR_mktag(0), TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_for_T_52));
      }
      make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(TypeInfo_64_64, KeepGoing_19, Var_29, Globals_13, Modules0_21, &Success1_22, Var_30, Result_16, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_24);
      *Success_15 = mercury__bool__and_2_f_0(Success0_20, Success1_22);
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(
  MR_Word TypeInfo_for_Acc_31,
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word Var_26;
    MR_Box conv2_STATE_VARIABLE_Acc_21;
    MR_Box conv1_STATE_VARIABLE_Info_23;
    MR_Box conv0_STATE_VARIABLE_IO_25;

    Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Ts_15);
    make__util__foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, TypeInfo_for_Acc_31, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, KeepGoing_12, P_13, Globals_14, Var_26, Success_16, ((MR_Box) (STATE_VARIABLE_Acc_0_20)), &conv2_STATE_VARIABLE_Acc_21, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv1_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_Acc_21 = ((MR_Word) conv2_STATE_VARIABLE_Acc_21);
    *STATE_VARIABLE_Info_23 = ((MR_Word) conv1_STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__dependencies__files_of_2_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_Set_11;
    MR_Word conv8_STATE_VARIABLE_Info_13;

    make__dependencies__dependency_files_to_index_set_2_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv9_STATE_VARIABLE_Set_11, ((MR_Word) wrapper_arg_4), &conv8_STATE_VARIABLE_Info_13);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Set_11));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__dependencies__files_of_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__4_58;
    MR_Word conv6_HeadVar__6_60;
    MR_Word conv5_HeadVar__8_62;

    make__dependencies__IntroducedFrom__pred__files_of_2__643__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_HeadVar__4_58, ((MR_Word) wrapper_arg_4), &conv6_HeadVar__6_60, ((MR_Word) wrapper_arg_6), &conv5_HeadVar__8_62);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__4_58));
    *wrapper_arg_5 = ((MR_Box) (conv6_HeadVar__6_60));
    *wrapper_arg_7 = ((MR_Box) (conv5_HeadVar__8_62));
  }
}

static void MR_CALL 
make__dependencies__files_of_2_10_p_0(
  MR_Word FindFiles_11,
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Success_15,
  MR_Word * DepIndices_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_bool succeeded;
    MR_Word KeepGoing_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 14)));
    MR_Word Success0_20;
    MR_Word ModuleIndices_21;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 9)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 10)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 11)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 12)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 13)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 15)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 16)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 17)));
    MR_Integer Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 18)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 19)));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), FindDeps_12, (MR_Integer) 1)));
    MR_Box conv4_Success0_20;
    MR_Box conv3_ModuleIndices_21;
    MR_Box conv2_STATE_VARIABLE_Info_28_28;
    MR_Box conv1_STATE_VARIABLE_IO_29_29;

    func_0(((MR_Box) FindDeps_12), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Success0_20, &conv3_ModuleIndices_21, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv2_STATE_VARIABLE_Info_28_28, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29_29);
    Success0_20 = ((MR_Word) conv4_Success0_20);
    ModuleIndices_21 = ((MR_Word) conv3_ModuleIndices_21);
    STATE_VARIABLE_Info_28_28 = ((MR_Word) conv2_STATE_VARIABLE_Info_28_28);
    succeeded = (Success0_20 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      *Success_15 = (MR_Integer) 0;
      *DepIndices_16 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0);
      *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_28_28;
    }
    else
    {
      MR_Word TypeCtorInfo_66_66;
      MR_Word Success1_22;
      MR_Word FileNames_23;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word Var_34;
      MR_Word Var_77;
      MR_Box conv11_DepIndices_16;
      MR_Box conv10_STATE_VARIABLE_Info_25;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[4]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (make__dependencies__files_of_2_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (FindFiles_11));
      }
      TypeCtorInfo_66_66 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
      Var_31 = mercury__set__init_0_f_0(TypeCtorInfo_66_66);
      make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_57_95_95_91_49_93_95_48_11_p_0(KeepGoing_19, Var_30, Globals_13, ModuleIndices_21, &Success1_22, Var_31, &FileNames_23, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_32_32);
      *Success_15 = mercury__bool__and_2_f_0(Success0_20, Success1_22);
      Var_34 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_66_66, FileNames_23);
      Var_77 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0);
      mercury__list__foldl2_6_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__dependencies_scalar_common_1[6], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &make__dependencies_scalar_common_2[34], Var_34, ((MR_Box) (Var_77)), &conv11_DepIndices_16, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv10_STATE_VARIABLE_Info_25);
      *DepIndices_16 = ((MR_Word) conv11_DepIndices_16);
      *STATE_VARIABLE_Info_25 = ((MR_Word) conv10_STATE_VARIABLE_Info_25);
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_57_95_95_91_49_93_95_48_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word Var_26;
    MR_Box conv2_STATE_VARIABLE_Acc_21;
    MR_Box conv1_STATE_VARIABLE_Info_23;
    MR_Box conv0_STATE_VARIABLE_IO_25;

    Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Ts_15);
    make__util__foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[7], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, KeepGoing_12, P_13, Globals_14, Var_26, Success_16, ((MR_Box) (STATE_VARIABLE_Acc_0_20)), &conv2_STATE_VARIABLE_Acc_21, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv1_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_Acc_21 = ((MR_Word) conv2_STATE_VARIABLE_Acc_21);
    *STATE_VARIABLE_Info_23 = ((MR_Word) conv1_STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__dependencies__of_3_6_p_0(
  MR_Word FileType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_Set_0_14,
  MR_Word * STATE_VARIABLE_Set_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word ModuleName_11;
    MR_Word TargetFile_12;
    MR_Word TargetFileIndex_13;
    MR_Word Var_18;
    MR_Integer I_25 = (MR_Integer) ModuleIndex_8;
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    MR_Box Var_27 = ((MR_Box) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
    MR_Integer Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
    MR_Integer Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 2)));
    MR_Box conv0_ModuleName_11;

    conv0_ModuleName_11 = mercury__version_array__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, I_25, Var_27);
    ModuleName_11 = ((MR_Word) conv0_ModuleName_11);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (FileType_7));
    }
    {
      TargetFile_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetFile_12, 0) = ((MR_Box) (Var_18));
    }
    make__dependencies__dependency_file_to_index_4_p_0(TargetFile_12, &TargetFileIndex_13, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    mercury__sparse_bitset__insert_3_p_0((MR_Word) &make__dependencies_scalar_common_1[2], ((MR_Box) (TargetFileIndex_13)), STATE_VARIABLE_Set_0_14, STATE_VARIABLE_Set_15);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Set_15;
    MR_Word conv5_STATE_VARIABLE_Info_17;

    make__dependencies__of_3_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_Set_15, ((MR_Word) wrapper_arg_4), &conv5_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Set_15));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
make__dependencies__of_2_10_p_0(
  MR_Word FileType_11,
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Success_15,
  MR_Word * TargetFiles_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word ModuleIndexs_19;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word Var_26;
    MR_Word Var_27;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), FindDeps_12, (MR_Integer) 1)));
    MR_Box conv4_Success_15;
    MR_Box conv3_ModuleIndexs_19;
    MR_Box conv2_STATE_VARIABLE_Info_24_24;
    MR_Box conv1_STATE_VARIABLE_IO_23;
    MR_Box conv8_TargetFiles_16;
    MR_Box conv7_STATE_VARIABLE_Info_21;

    func_0(((MR_Box) FindDeps_12), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Success_15, &conv3_ModuleIndexs_19, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv2_STATE_VARIABLE_Info_24_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23);
    *Success_15 = ((MR_Word) conv4_Success_15);
    ModuleIndexs_19 = ((MR_Word) conv3_ModuleIndexs_19);
    STATE_VARIABLE_Info_24_24 = ((MR_Word) conv2_STATE_VARIABLE_Info_24_24);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&make__dependencies_scalar_common_16[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (make__dependencies__of_2_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (FileType_11));
    }
    Var_27 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0);
    mercury__sparse_bitset__foldl2_6_p_0((MR_Word) &make__dependencies_scalar_common_1[6], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &make__dependencies_scalar_common_1[0], Var_26, ModuleIndexs_19, ((MR_Box) (Var_27)), &conv8_TargetFiles_16, ((MR_Box) (STATE_VARIABLE_Info_24_24)), &conv7_STATE_VARIABLE_Info_21);
    *TargetFiles_16 = ((MR_Word) conv8_TargetFiles_16);
    *STATE_VARIABLE_Info_21 = ((MR_Word) conv7_STATE_VARIABLE_Info_21);
  }
}

static void MR_CALL 
make__dependencies__combine_deps_2_10_p_0(
  MR_Word TypeInfo_for_T_51,
  MR_Word FindDeps1_11,
  MR_Word FindDeps2_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Success_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded;
    MR_Word Success1_19;
    MR_Word Deps1_20;
    MR_Word STATE_VARIABLE_Info_27_27;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), FindDeps1_11, (MR_Integer) 1)));
    MR_Box conv4_Success1_19;
    MR_Box conv3_Deps1_20;
    MR_Box conv2_STATE_VARIABLE_Info_27_27;
    MR_Box conv1_STATE_VARIABLE_IO_28_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Integer Var_49;
    MR_Word Var_50;

    func_0(((MR_Box) FindDeps1_11), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Success1_19, &conv3_Deps1_20, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv2_STATE_VARIABLE_Info_27_27, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
    Success1_19 = ((MR_Word) conv4_Success1_19);
    Deps1_20 = ((MR_Word) conv3_Deps1_20);
    STATE_VARIABLE_Info_27_27 = ((MR_Word) conv2_STATE_VARIABLE_Info_27_27);
    succeeded = (Success1_19 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 5)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 6)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 7)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 8)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 9)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 10)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 11)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 12)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 13)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 14)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 15)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 16)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 17)));
      Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 18)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, (MR_Integer) 19)));
      succeeded = (Var_29 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      *Success_15 = (MR_Integer) 0;
      *Deps_16 = Deps1_20;
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
    }
    else
    {
      MR_Word Success2_21;
      MR_Word Deps2_22;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), FindDeps2_12, (MR_Integer) 1)));
      MR_Box conv9_Success2_21;
      MR_Box conv8_Deps2_22;
      MR_Box conv7_STATE_VARIABLE_Info_24;
      MR_Box conv6_STATE_VARIABLE_IO_26;

      func_5(((MR_Box) FindDeps2_12), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv9_Success2_21, &conv8_Deps2_22, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv7_STATE_VARIABLE_Info_24, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_26);
      Success2_21 = ((MR_Word) conv9_Success2_21);
      Deps2_22 = ((MR_Word) conv8_Deps2_22);
      *STATE_VARIABLE_Info_24 = ((MR_Word) conv7_STATE_VARIABLE_Info_24);
      *Success_15 = mercury__bool__and_2_f_0(Success1_19, Success2_21);
      *Deps_16 = mercury__sparse_bitset__union_2_f_0(TypeInfo_for_T_51, Deps1_20, Deps2_22);
    }
  }
}

static void MR_CALL 
make__dependencies__dependency_files_to_index_set_2_5_p_0(
  MR_Word DepFiles_6,
  MR_Word STATE_VARIABLE_Set_0_10,
  MR_Word * STATE_VARIABLE_Set_11,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_bool succeeded;
    MR_Word DepIndex_9;
    MR_Word Map0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
    MR_Word ForwardMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_22, (MR_Integer) 0)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 11)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 12)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 13)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 14)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 15)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 16)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 17)));
    MR_Integer Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 18)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 19)));
    MR_Box Var_55 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_22, (MR_Integer) 1)));
    MR_Integer Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_22, (MR_Integer) 2)));
    MR_Word Index0_24;
    MR_Box conv0_Index0_24;

    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, ForwardMap0_23, ((MR_Box) (DepFiles_6)), &conv0_Index0_24);
    if (succeeded)
    {
      Index0_24 = ((MR_Word) conv0_Index0_24);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      DepIndex_9 = Index0_24;
      *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
    }
    else
    {
      MR_Word TypeCtorInfo_67_79;
      MR_Word Forward0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_22, (MR_Integer) 0)));
      MR_Box Reverse0_26 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_22, (MR_Integer) 1)));
      MR_Integer Size0_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_22, (MR_Integer) 2)));
      MR_Integer Size_28;
      MR_Word Forward_29;
      MR_Integer TrueSize_30;
      MR_Box Reverse_32;
      MR_Word Map_33;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Integer Var_75;
      MR_Word Var_76;
      MR_Word Var_64;

      DepIndex_9 = (MR_Word) Size0_27;
      Size_28 = (Size0_27 + (MR_Integer) 1);
      TypeCtorInfo_67_79 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
      mercury__version_hash_table__det_insert_4_p_0(TypeCtorInfo_67_79, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, ((MR_Box) (DepFiles_6)), ((MR_Box) (DepIndex_9)), Forward0_25, &Forward_29);
      TrueSize_30 = mercury__version_array__size_1_f_0(TypeCtorInfo_67_79, Reverse0_26);
      succeeded = (Size_28 > TrueSize_30);
      if (succeeded)
      {
        MR_Integer NewSize_31;

        succeeded = (TrueSize_30 == (MR_Integer) 0);
        if (succeeded)
          NewSize_31 = (MR_Integer) 1;
        else
        {
          NewSize_31 = (TrueSize_30 * (MR_Integer) 2);
        }
        mercury__version_array__resize_4_p_0(TypeCtorInfo_67_79, NewSize_31, ((MR_Box) (DepFiles_6)), Reverse0_26, &Reverse_32);
      }
      else
        mercury__version_array__set_4_p_0(TypeCtorInfo_67_79, Size0_27, ((MR_Box) (DepFiles_6)), Reverse0_26, &Reverse_32);
      {
        Map_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Map_33, 0) = ((MR_Box) (Forward_29));
        MR_hl_field(MR_mktag(0), Map_33, 1) = ((MR_Box) (Reverse_32));
        MR_hl_field(MR_mktag(0), Map_33, 2) = ((MR_Box) (Size_28));
      }
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 11)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 12)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 13)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 14)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 15)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 16)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 17)));
      Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 18)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 19)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Map_33));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_76));
      }
    }
    mercury__sparse_bitset__insert_3_p_0((MR_Word) &make__dependencies_scalar_common_1[2], ((MR_Box) (DepIndex_9)), STATE_VARIABLE_Set_0_10, STATE_VARIABLE_Set_11);
  }
}

static void MR_CALL 
make__dependencies__dependency_file_index_set_to_plain_set_2_4_p_0(
  MR_Word Info_5,
  MR_Word DepIndex_6,
  MR_Word List0_7,
  MR_Word * List_8)
{
  {
    MR_Word DepFile_9;
    MR_Integer Int_13 = (MR_Integer) DepIndex_6;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)));
    MR_Box Var_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 9)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 10)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 11)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 12)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 13)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 14)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 15)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 16)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 17)));
    MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 18)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 19)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
    MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2)));
    MR_Box conv0_DepFile_9;

    conv0_DepFile_9 = mercury__version_array__elem_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, Int_13, Var_15);
    DepFile_9 = ((MR_Word) conv0_DepFile_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *List_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DepFile_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (List0_7));
    }
  }
}

static void MR_CALL 
make__dependencies__dependency_file_to_index_4_p_0(
  MR_Word DepFile_5,
  MR_Word * Index_6,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_bool succeeded;
    MR_Word Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 7)));
    MR_Word ForwardMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 0)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 8)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 9)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 10)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 11)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 12)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 13)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 14)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 15)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 16)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 17)));
    MR_Integer Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 18)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 19)));
    MR_Box Var_43 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 1)));
    MR_Integer Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 2)));
    MR_Word Index0_10;
    MR_Box conv0_Index0_10;

    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, ForwardMap0_9, ((MR_Box) (DepFile_5)), &conv0_Index0_10);
    if (succeeded)
    {
      Index0_10 = ((MR_Word) conv0_Index0_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Index_6 = Index0_10;
      *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    }
    else
    {
      MR_Word TypeCtorInfo_67_67;
      MR_Word Forward0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 0)));
      MR_Box Reverse0_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 1)));
      MR_Integer Size0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 2)));
      MR_Integer Size_14;
      MR_Word Forward_15;
      MR_Integer TrueSize_16;
      MR_Box Reverse_18;
      MR_Word Map_19;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Integer Var_63;
      MR_Word Var_64;
      MR_Word Var_52;

      *Index_6 = (MR_Word) Size0_13;
      Size_14 = (Size0_13 + (MR_Integer) 1);
      TypeCtorInfo_67_67 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
      mercury__version_hash_table__det_insert_4_p_0(TypeCtorInfo_67_67, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, ((MR_Box) (DepFile_5)), ((MR_Box) (*Index_6)), Forward0_11, &Forward_15);
      TrueSize_16 = mercury__version_array__size_1_f_0(TypeCtorInfo_67_67, Reverse0_12);
      succeeded = (Size_14 > TrueSize_16);
      if (succeeded)
      {
        MR_Integer NewSize_17;

        succeeded = (TrueSize_16 == (MR_Integer) 0);
        if (succeeded)
          NewSize_17 = (MR_Integer) 1;
        else
        {
          NewSize_17 = (TrueSize_16 * (MR_Integer) 2);
        }
        mercury__version_array__resize_4_p_0(TypeCtorInfo_67_67, NewSize_17, ((MR_Box) (DepFile_5)), Reverse0_12, &Reverse_18);
      }
      else
        mercury__version_array__set_4_p_0(TypeCtorInfo_67_67, Size0_13, ((MR_Box) (DepFile_5)), Reverse0_12, &Reverse_18);
      {
        Map_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Map_19, 0) = ((MR_Box) (Forward_15));
        MR_hl_field(MR_mktag(0), Map_19, 1) = ((MR_Box) (Reverse_18));
        MR_hl_field(MR_mktag(0), Map_19, 2) = ((MR_Box) (Size_14));
      }
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 7)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 8)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 9)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 10)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 11)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 12)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 13)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 14)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 15)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 16)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 17)));
      Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 18)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 19)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_21 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Map_19));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_64));
      }
    }
  }
}

static void MR_CALL 
make__dependencies__module_index_set_to_plain_set_2_4_p_0(
  MR_Word Info_5,
  MR_Word ModuleIndex_6,
  MR_Word STATE_VARIABLE_Set_0_9,
  MR_Word * STATE_VARIABLE_Set_10)
{
  {
    MR_Word ModuleName_8;
    MR_Integer I_16 = (MR_Integer) ModuleIndex_6;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
    MR_Box Var_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 9)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 10)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 11)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 12)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 13)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 14)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 15)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 16)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 17)));
    MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 18)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 19)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
    MR_Integer Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 2)));
    MR_Box conv0_ModuleName_8;

    conv0_ModuleName_8 = mercury__version_array__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, I_16, Var_18);
    ModuleName_8 = ((MR_Word) conv0_ModuleName_8);
    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (ModuleName_8)), STATE_VARIABLE_Set_0_9, STATE_VARIABLE_Set_10);
  }
}

static void MR_CALL 
make__dependencies__module_name_to_index_4_p_0(
  MR_Word ModuleName_5,
  MR_Word * Index_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Word Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 11)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 12)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 13)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 14)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 15)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 16)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 17)));
    MR_Integer Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 18)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 19)));
    MR_Word Index0_9;
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 0)));
    MR_Box Var_43 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 1)));
    MR_Integer Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 2)));
    MR_Box conv0_Index0_9;

    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, Var_21, ((MR_Box) (ModuleName_5)), &conv0_Index0_9);
    if (succeeded)
    {
      Index0_9 = ((MR_Word) conv0_Index0_9);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Index_6 = Index0_9;
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
    }
    else
    {
      MR_Word TypeCtorInfo_67_67;
      MR_Word Forward0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 0)));
      MR_Box Reverse0_11 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 1)));
      MR_Integer Size0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 2)));
      MR_Integer Size_13;
      MR_Word Forward_14;
      MR_Integer TrueSize_15;
      MR_Box Reverse_17;
      MR_Word Map_18;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Integer Var_63;
      MR_Word Var_64;
      MR_Word Var_51;

      *Index_6 = (MR_Word) Size0_12;
      Size_13 = (Size0_12 + (MR_Integer) 1);
      TypeCtorInfo_67_67 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      mercury__version_hash_table__det_insert_4_p_0(TypeCtorInfo_67_67, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, ((MR_Box) (ModuleName_5)), ((MR_Box) (*Index_6)), Forward0_10, &Forward_14);
      TrueSize_15 = mercury__version_array__size_1_f_0(TypeCtorInfo_67_67, Reverse0_11);
      succeeded = (Size_13 > TrueSize_15);
      if (succeeded)
      {
        MR_Integer NewSize_16;

        succeeded = (TrueSize_15 == (MR_Integer) 0);
        if (succeeded)
          NewSize_16 = (MR_Integer) 1;
        else
        {
          NewSize_16 = (TrueSize_15 * (MR_Integer) 2);
        }
        mercury__version_array__resize_4_p_0(TypeCtorInfo_67_67, NewSize_16, ((MR_Box) (ModuleName_5)), Reverse0_11, &Reverse_17);
      }
      else
        mercury__version_array__set_4_p_0(TypeCtorInfo_67_67, Size0_12, ((MR_Box) (ModuleName_5)), Reverse0_11, &Reverse_17);
      {
        Map_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Map_18, 0) = ((MR_Box) (Forward_14));
        MR_hl_field(MR_mktag(0), Map_18, 1) = ((MR_Box) (Reverse_17));
        MR_hl_field(MR_mktag(0), Map_18, 2) = ((MR_Box) (Size_13));
      }
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 11)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 12)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 13)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 14)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 15)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 16)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 17)));
      Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 18)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 19)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Map_18));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_64));
      }
    }
  }
}

MR_Word MR_CALL 
make__dependencies__init_cached_foreign_imports_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[5]);
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
make__dependencies__init_cached_transitive_dependencies_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0, (MR_Word) &make__dependencies_scalar_common_1[5]);
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
make__dependencies__init_cached_direct_imports_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[5]);
    return HeadVar__1_1;
  }
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__dependencies__debug_newer_dependencies_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))));
  }
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))));
  }
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

void MR_CALL 
make__dependencies__check_dependency_timestamps_10_p_0(
  MR_Word TypeInfo_for_File_34,
  MR_Word Globals_11,
  MR_String TargetFileName_12,
  MR_Word MaybeTimestamp_13,
  MR_Word BuildDepsSucceeded_14,
  MR_Word DepFiles_15,
  MR_Word WriteDepFile_16,
  MR_Word DepTimestamps_17,
  MR_Word * DepsResult_18)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) MaybeTimestamp_13)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_30;
      MR_String Var_32;

      *DepsResult_18 = (MR_Integer) 1;
      Var_32 = mercury__string__f_43_43_2_f_0(TargetFileName_12, (MR_String) " does not exist.\n");
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[2]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Var_32));
      }
      make__util__debug_make_msg_4_p_0(Globals_11, Var_30);
    }
    else
    {
      MR_Word Timestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeTimestamp_13, (MR_Integer) 0)));

      succeeded = make__dependencies__error_in_timestamps_1_p_0(DepTimestamps_17);
      if (succeeded)
      {
        MR_Word WriteMissingDeps_22;

        *DepsResult_18 = (MR_Integer) 2;
        {
          WriteMissingDeps_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[5]));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps_10_p_0_2));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 3) = ((MR_Box) (TypeInfo_for_File_34));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 4) = ((MR_Box) (TargetFileName_12));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 5) = ((MR_Box) (BuildDepsSucceeded_14));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 6) = ((MR_Box) (DepFiles_15));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 7) = ((MR_Box) (WriteDepFile_16));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 8) = ((MR_Box) (DepTimestamps_17));
        }
        switch (BuildDepsSucceeded_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__util__debug_make_msg_4_p_0(Globals_11, WriteMissingDeps_22);
            break;
          case (MR_Integer) 1:
            make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0(TypeInfo_for_File_34, TargetFileName_12, BuildDepsSucceeded_14, DepFiles_15, WriteDepFile_16, DepTimestamps_17);
            break;
        }
      }
      else
      {
        MR_Word Rebuild_23;

        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 628, &Rebuild_23);
        switch (Rebuild_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = make__dependencies__newer_timestamp_2_p_0(DepTimestamps_17, Timestamp_21);
              if (succeeded)
              {
                MR_Word Var_47;

                {
                  Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[0]));
                  MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps_10_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (TypeInfo_for_File_34));
                  MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (TargetFileName_12));
                  MR_hl_field(MR_mktag(0), Var_47, 5) = ((MR_Box) (MaybeTimestamp_13));
                  MR_hl_field(MR_mktag(0), Var_47, 6) = ((MR_Box) (DepFiles_15));
                  MR_hl_field(MR_mktag(0), Var_47, 7) = ((MR_Box) (DepTimestamps_17));
                }
                make__util__debug_make_msg_4_p_0(Globals_11, Var_47);
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
}

static MR_bool MR_CALL 
make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1286__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), wrapper_arg_2);
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeInfo_39_39 = (MR_Word) &make__dependencies_scalar_common_2[1];
    MR_Word TypeInfo_41_41;
    MR_Word DepTimestampAL_14;
    MR_Word ErrorDeps0_18;
    MR_Word ErrorDeps_19;
    MR_Word Var_22;

    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_File_38, TypeInfo_39_39, DepFiles_10, DepTimestamps_12, &DepTimestampAL_14);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (make__dependencies__check_dependencies_timestamps_write_missing_deps_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (TypeInfo_for_File_38));
    }
    {
      TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_41_41, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_for_File_38));
      MR_hl_field(MR_mktag(0), TypeInfo_41_41, 2) = ((MR_Box) (TypeInfo_39_39));
    }
    mercury__list__filter_map_3_p_0(TypeInfo_41_41, TypeInfo_for_File_38, (MR_Word) Var_22, (MR_Word) DepTimestampAL_14, &ErrorDeps0_18);
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
        {
          mercury__io__write_string_3_p_0((MR_String) "** This indicates a bug in \140mmc --make\'.\n");
        }
        break;
    }
  }
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__dependencies__check_dependencies_debug_unbuilt_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))));
  }
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    make__util__make_write_dependency_file_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__3_3;
    MR_Word conv4_HeadVar__5_5;

    make__util__get_dependency_timestamp_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv5_HeadVar__3_3, ((MR_Word) wrapper_arg_3), &conv4_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__5_5));
  }
}

static void MR_CALL 
make__dependencies__check_dependencies_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

static MR_bool MR_CALL 
make__dependencies__check_dependencies_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__dependencies__IntroducedFrom__pred__check_dependencies__1254__1_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Status_10;
    MR_Word conv0_STATE_VARIABLE_Info_28;

    make__dependencies__dependency_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_Status_10, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Info_28);
    *wrapper_arg_2 = ((MR_Box) (conv1_Status_10));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_28));
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_56_56;
    MR_Word TypeCtorInfo_57_57;
    MR_Word TypeCtorInfo_58_58;
    MR_Word TypeCtorInfo_59_59;
    MR_Word DepStatusList_19;
    MR_Word DepStatusAL_20;
    MR_Word UnbuiltDependencies_23;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Box conv3_STATE_VARIABLE_Info_32_32;
    MR_Box conv2_STATE_VARIABLE_IO_33_33;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[1]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Globals_11));
    }
    TypeCtorInfo_56_56 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
    TypeCtorInfo_57_57 = (MR_Word) &make__make__type_ctor_info_dependency_status_0;
    TypeCtorInfo_58_58 = (MR_Word) &make__make__type_ctor_info_make_info_0;
    TypeCtorInfo_59_59 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__map_foldl2_7_p_2(TypeCtorInfo_56_56, TypeCtorInfo_57_57, TypeCtorInfo_58_58, TypeCtorInfo_59_59, Var_31, DepFiles_15, &DepStatusList_19, ((MR_Box) (STATE_VARIABLE_Info_0_27)), &conv3_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_33_33);
    STATE_VARIABLE_Info_32_32 = ((MR_Word) conv3_STATE_VARIABLE_Info_32_32);
    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeCtorInfo_56_56, TypeCtorInfo_57_57, DepFiles_15, DepStatusList_19, &DepStatusAL_20);
    mercury__list__filter_3_p_0((MR_Word) &make__dependencies_scalar_common_2[0], (MR_Word) &make__dependencies_scalar_common_2[33], DepStatusAL_20, &UnbuiltDependencies_23);
    if ((UnbuiltDependencies_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word DepTimestamps_26;
      MR_Word Var_36;
      MR_String Var_38;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Box conv7_STATE_VARIABLE_Info_28;
      MR_Box conv6_STATE_VARIABLE_IO_42_42;

      Var_38 = mercury__string__f_43_43_2_f_0(TargetFileName_12, (MR_String) ": finished dependencies\n");
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[2]));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_3));
        MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Var_38));
      }
      make__util__debug_make_msg_4_p_0(Globals_11, Var_36);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[2]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_4));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Globals_11));
      }
      mercury__list__map_foldl2_7_p_2(TypeCtorInfo_56_56, (MR_Word) &make__dependencies_scalar_common_2[1], TypeCtorInfo_58_58, TypeCtorInfo_59_59, Var_40, DepFiles_15, &DepTimestamps_26, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv7_STATE_VARIABLE_Info_28, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_42_42);
      *STATE_VARIABLE_Info_28 = ((MR_Word) conv7_STATE_VARIABLE_Info_28);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[2]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_5));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Globals_11));
      }
      make__dependencies__check_dependency_timestamps__ho17_10_p_0(Globals_11, Globals_11, TargetFileName_12, MaybeTimestamp_13, BuildDepsSucceeded_14, DepFiles_15, Var_43, DepTimestamps_26, DepsResult_16);
    }
    else
    {
      MR_Word Var_45;

      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&make__dependencies_scalar_common_15[0]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (make__dependencies__check_dependencies_10_p_0_6));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Globals_11));
        MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (TargetFileName_12));
        MR_hl_field(MR_mktag(0), Var_45, 5) = ((MR_Box) (UnbuiltDependencies_23));
      }
      make__util__debug_make_msg_4_p_0(Globals_11, Var_45);
      *DepsResult_16 = (MR_Integer) 2;
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_32_32;
    }
  }
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps__ho17_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__dependencies__debug_newer_dependencies_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))));
  }
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps__ho17_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__dependencies__check_dependencies_timestamps_write_missing_deps__ho21_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))));
  }
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps__ho17_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
  }
}

static void MR_CALL 
make__dependencies__check_dependency_timestamps__ho17_10_p_0(
  MR_Word Var_39,
  MR_Word Globals_11,
  MR_String TargetFileName_12,
  MR_Word MaybeTimestamp_13,
  MR_Word BuildDepsSucceeded_14,
  MR_Word DepFiles_15,
  MR_Word WriteDepFile_16,
  MR_Word DepTimestamps_17,
  MR_Word * DepsResult_18)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) MaybeTimestamp_13)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_30;
      MR_String Var_32;

      *DepsResult_18 = (MR_Integer) 1;
      Var_32 = mercury__string__f_43_43_2_f_0(TargetFileName_12, (MR_String) " does not exist.\n");
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[2]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps__ho17_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Var_32));
      }
      make__util__debug_make_msg_4_p_0(Globals_11, Var_30);
    }
    else
    {
      MR_Word Timestamp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeTimestamp_13, (MR_Integer) 0)));

      succeeded = make__dependencies__error_in_timestamps_1_p_0(DepTimestamps_17);
      if (succeeded)
      {
        MR_Word WriteMissingDeps_22;

        *DepsResult_18 = (MR_Integer) 2;
        {
          WriteMissingDeps_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[4]));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps__ho17_10_p_0_2));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 3) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 4) = ((MR_Box) (TargetFileName_12));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 5) = ((MR_Box) (BuildDepsSucceeded_14));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 6) = ((MR_Box) (DepFiles_15));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 7) = ((MR_Box) (WriteDepFile_16));
          MR_hl_field(MR_mktag(0), WriteMissingDeps_22, 8) = ((MR_Box) (DepTimestamps_17));
        }
        switch (BuildDepsSucceeded_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__util__debug_make_msg_4_p_0(Globals_11, WriteMissingDeps_22);
            break;
          case (MR_Integer) 1:
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_50_49_95_95_91_49_93_95_48_7_p_0(TargetFileName_12, BuildDepsSucceeded_14, DepFiles_15, WriteDepFile_16, DepTimestamps_17);
            break;
        }
      }
      else
      {
        MR_Word Rebuild_23;

        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 628, &Rebuild_23);
        switch (Rebuild_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = make__dependencies__newer_timestamp_2_p_0(DepTimestamps_17, Timestamp_21);
              if (succeeded)
              {
                MR_Word Var_50;

                {
                  Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[0]));
                  MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (make__dependencies__check_dependency_timestamps__ho17_10_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0));
                  MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (TargetFileName_12));
                  MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (MaybeTimestamp_13));
                  MR_hl_field(MR_mktag(0), Var_50, 6) = ((MR_Box) (DepFiles_15));
                  MR_hl_field(MR_mktag(0), Var_50, 7) = ((MR_Box) (DepTimestamps_17));
                }
                make__util__debug_make_msg_4_p_0(Globals_11, Var_50);
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
}

static MR_bool MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_50_49_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__dependencies__IntroducedFrom__pred__check_dependencies_timestamps_write_missing_deps__1286__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), wrapper_arg_2);
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_112_101_110_100_101_110_99_105_101_115_95_116_105_109_101_115_116_97_109_112_115_95_119_114_105_116_101_95_109_105_115_115_105_110_103_95_100_101_112_115_95_95_104_111_50_49_95_95_91_49_93_95_48_7_p_0(
  MR_String TargetFileName_8,
  MR_Word BuildDepsSucceeded_9,
  MR_Word DepFiles_10,
  MR_Word WriteDepFile_11,
  MR_Word DepTimestamps_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_for_File_38 = (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0;
    MR_Word DepTimestampAL_14;
    MR_Word ErrorDeps0_18;
    MR_Word ErrorDeps_19;

    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_File_38, (MR_Word) &make__dependencies_scalar_common_2[1], DepFiles_10, DepTimestamps_12, &DepTimestampAL_14);
    mercury__list__filter_map_3_p_0((MR_Word) &make__dependencies_scalar_common_2[32], TypeInfo_for_File_38, (MR_Word) &make__dependencies_scalar_common_13[0], DepTimestampAL_14, &ErrorDeps0_18);
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
        {
          mercury__io__write_string_3_p_0((MR_String) "** This indicates a bug in \140mmc --make\'.\n");
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
make__dependencies__newer_timestamp_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Timestamp_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word H_3;
    MR_Word T_4;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      H_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      {
        MR_Word DepTimestamp_6;
        MR_Word Var_7;
        MR_Word Var_9;

        succeeded = ((MR_tag((MR_Word) H_3)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          DepTimestamp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), H_3, (MR_Integer) 0)));
          Var_7 = (MR_Integer) 2;
          libs__timestamp____Compare____timestamp_0_0(&Var_9, DepTimestamp_6, Timestamp_5);
          succeeded = (Var_7 == Var_9);
        }
      }
      if (!(succeeded))
      {
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__1_1 = T_4;

          HeadVar__1_1 = next_value_of_HeadVar__1_1;
        }
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
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word H_2;
    MR_Word T_3;

    /* setup for tailcalls optimized into a loop */
    if (succeeded)
    {
      H_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      T_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      {
        MR_String Var_4;

        succeeded = ((MR_tag((MR_Word) H_2)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_4 = ((MR_String) (MR_hl_field(MR_mktag(1), H_2, (MR_Integer) 0)));
      }
      if (!(succeeded))
      {
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__1_1 = T_3;

          HeadVar__1_1 = next_value_of_HeadVar__1_1;
        }
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
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Dep_9)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word DepStatusMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
      MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
      MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
      MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
      MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
      MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
      MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
      MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
      MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
      MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
      MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
      MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
      MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
      MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
      MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
      MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
      MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
      MR_Integer Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
      MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));
      MR_Word StatusPrime_16;
      MR_Box conv0_StatusPrime_16;

      succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, DepStatusMap_15, ((MR_Box) (Dep_9)), &conv0_StatusPrime_16);
      if (succeeded)
      {
        StatusPrime_16 = ((MR_Word) conv0_StatusPrime_16);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        *Status_10 = StatusPrime_16;
        *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
      }
      else
      {
        MR_Word MaybeTimestamp_17;
        MR_Word STATE_VARIABLE_Info_51_51;
        MR_Word Var_58;
        MR_Word Var_59;
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
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Integer Var_121;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_138;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Integer Var_141;
        MR_Word Var_142;
        MR_Word Var_131;

        make__util__get_dependency_timestamp_7_p_0(Globals_8, Dep_9, &MaybeTimestamp_17, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_51_51);
        if (((MR_tag((MR_Word) MaybeTimestamp_17)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_String Error_19 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeTimestamp_17, (MR_Integer) 0)));

          *Status_10 = (MR_Integer) 3;
          mercury__io__write_string_3_p_0((MR_String) "** Error: ");
          mercury__io__write_string_3_p_0(Error_19);
          mercury__io__nl_2_p_0();
        }
        else
          *Status_10 = (MR_Integer) 2;
        Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
        Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
        Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
        Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
        Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
        Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
        Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
        Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
        Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
        Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
        Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
        Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
        Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
        Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
        Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
        Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
        Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
        Var_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
        Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
        Var_59 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, ((MR_Box) (Dep_9)), Var_58, ((MR_Box) (*Status_10)));
        Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
        Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
        Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
        Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
        Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
        Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
        Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
        Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
        Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
        Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
        Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
        Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
        Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
        Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
        Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
        Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
        Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
        Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
        Var_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
        Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_28 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_128));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_132));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_133));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_134));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_135));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_136));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_137));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_138));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_140));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_141));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_142));
        }
      }
    }
    else
    {
      MR_Word Target_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Dep_9, (MR_Integer) 0)));
      MR_Word ModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_20, (MR_Integer) 0)));
      MR_Word FileType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Target_20, (MR_Integer) 1)));

      if ((FileType_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        succeeded = MR_TRUE;
      else
      if ((FileType_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (ModuleName_21));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (&make__dependencies_scalar_common_9[2]));
        }
        make__util__maybe_warn_up_to_date_target_6_p_0(Globals_8, Var_32, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
        *Status_10 = (MR_Integer) 2;
      }
      else
      {
        MR_Word StatusPrime_74;
        MR_Word DepStatusMap_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 8)));
        MR_Word Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 0)));
        MR_Word Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
        MR_Word Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 2)));
        MR_Word Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 3)));
        MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 4)));
        MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5)));
        MR_Word Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 6)));
        MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
        MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 9)));
        MR_Word Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 10)));
        MR_Word Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 11)));
        MR_Word Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 12)));
        MR_Word Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 13)));
        MR_Word Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 14)));
        MR_Word Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 15)));
        MR_Word Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 16)));
        MR_Word Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 17)));
        MR_Integer Var_160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 18)));
        MR_Word Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 19)));
        MR_Box conv1_StatusPrime_74;

        succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, DepStatusMap_60, ((MR_Box) (Dep_9)), &conv1_StatusPrime_74);
        if (succeeded)
        {
          StatusPrime_74 = ((MR_Word) conv1_StatusPrime_74);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          *Status_10 = StatusPrime_74;
          *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
        }
        else
        {
          MR_Word MaybeImports_24;
          MR_Word STATE_VARIABLE_Info_35_35;
          MR_Word STATE_VARIABLE_Info_39_39;
          MR_Word Var_49;
          MR_Word Var_50;
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
          MR_Word Var_199;
          MR_Word Var_200;
          MR_Word Var_201;
          MR_Word Var_202;
          MR_Word Var_203;
          MR_Word Var_204;
          MR_Integer Var_205;
          MR_Word Var_206;
          MR_Word Var_207;
          MR_Word Var_208;
          MR_Word Var_209;
          MR_Word Var_210;
          MR_Word Var_211;
          MR_Word Var_212;
          MR_Word Var_213;
          MR_Word Var_214;
          MR_Word Var_216;
          MR_Word Var_217;
          MR_Word Var_218;
          MR_Word Var_219;
          MR_Word Var_220;
          MR_Word Var_221;
          MR_Word Var_222;
          MR_Word Var_223;
          MR_Word Var_224;
          MR_Integer Var_225;
          MR_Word Var_226;
          MR_Word Var_215;

          make__module_dep_file__get_module_dependencies_7_p_0(Globals_8, ModuleName_21, &MaybeImports_24, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_35_35);
          if ((MaybeImports_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *Status_10 = (MR_Integer) 3;
            STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_35_35;
          }
          else
          {
            MR_Word Imports_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImports_24, (MR_Integer) 0)));
            MR_String Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 26)));
            MR_String Var_235;
            MR_String Var_162 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 0)));
            MR_Word Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 1)));
            MR_Word Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 2)));
            MR_Word Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 3)));
            MR_Word Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 4)));
            MR_Word Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 5)));
            MR_Word Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 6)));
            MR_Word Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 7)));
            MR_Word Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 8)));
            MR_Word Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 9)));
            MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 10)));
            MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 11)));
            MR_Word Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 12)));
            MR_Word Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 13)));
            MR_Word Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 14)));
            MR_Word Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 15)));
            MR_Word Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 16)));
            MR_Word Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 17)));
            MR_Word Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 18)));
            MR_Word Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 19)));
            MR_Word Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 20)));
            MR_Word Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 21)));
            MR_Word Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 22)));
            MR_Word Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 23)));
            MR_Word Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 24)));
            MR_Word Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_25, (MR_Integer) 25)));

            Var_235 = mercury__dir__this_directory_0_f_0();
            succeeded = (strcmp(Var_37, Var_235) == 0);
            if (succeeded)
            {
              *Status_10 = (MR_Integer) 0;
              STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_35_35;
            }
            else
            {
              MR_Word MaybeTimestamp_63;

              make__util__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 0, Target_20, &MaybeTimestamp_63, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_39_39);
              if (((MR_tag((MR_Word) MaybeTimestamp_63)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String Error_61 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeTimestamp_63, (MR_Integer) 0)));

                *Status_10 = (MR_Integer) 3;
                mercury__io__write_string_3_p_0((MR_String) "** Error: file \140");
                make__util__make_write_target_file_4_p_0(Globals_8, Target_20);
                mercury__io__write_string_3_p_0((MR_String) "\' not found: ");
                mercury__io__write_string_3_p_0(Error_61);
                mercury__io__nl_2_p_0();
              }
              else
                *Status_10 = (MR_Integer) 2;
            }
          }
          Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
          Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
          Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
          Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
          Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
          Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
          Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
          Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
          Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 8)));
          Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 9)));
          Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 10)));
          Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 11)));
          Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 12)));
          Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 13)));
          Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 14)));
          Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 15)));
          Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 16)));
          Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 17)));
          Var_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 18)));
          Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 19)));
          Var_50 = mercury__version_hash_table__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, (MR_Word) &make__make__type_ctor_info_dependency_status_0, ((MR_Box) (Dep_9)), Var_49, ((MR_Box) (*Status_10)));
          Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
          Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
          Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
          Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
          Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
          Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
          Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
          Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
          Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 8)));
          Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 9)));
          Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 10)));
          Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 11)));
          Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 12)));
          Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 13)));
          Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 14)));
          Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 15)));
          Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 16)));
          Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 17)));
          Var_225 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 18)));
          Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 19)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_28 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_207));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_208));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_209));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_210));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_211));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_212));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_213));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_214));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_216));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_217));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_218));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_219));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_220));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_221));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_222));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_223));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_224));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_225));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_226));
          }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Opts_6;

    make__dependencies__make_local_module_id_option_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_Opts_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Opts_6));
  }
}

void MR_CALL 
make__dependencies__make_local_module_id_options_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word * Success_11,
  MR_Word * Options_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word LocalModules_15;
    MR_Box conv1_Options_12;

    make__dependencies__find_reachable_local_modules_8_p_0(Globals_9, ModuleName_10, Success_11, &LocalModules_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__dependencies_scalar_common_1[4], (MR_Word) &make__dependencies_scalar_common_2[31], LocalModules_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_Options_12);
    *Options_12 = ((MR_Word) conv1_Options_12);
  }
}

static MR_bool MR_CALL 
make__dependencies__remove_nested_modules_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__dependencies__IntroducedFrom__pred__remove_nested_modules__1184__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_NestedModules_17;
    MR_Word conv0_STATE_VARIABLE_Info_19;

    make__dependencies__collect_nested_modules_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_NestedModules_17, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Info_19);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NestedModules_17));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_19));
  }
}

void MR_CALL 
make__dependencies__remove_nested_modules_7_p_0(
  MR_Word Globals_8,
  MR_Word Modules0_9,
  MR_Word * Modules_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_30_30;
    MR_Word NestedModules_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Box conv4_NestedModules_13;
    MR_Box conv3_STATE_VARIABLE_Info_15;
    MR_Box conv2_STATE_VARIABLE_IO_17;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (make__dependencies__remove_nested_modules_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Globals_8));
    }
    TypeCtorInfo_30_30 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    Var_19 = mercury__set__init_0_f_0(TypeCtorInfo_30_30);
    mercury__list__foldl3_8_p_2(TypeCtorInfo_30_30, (MR_Word) &make__dependencies_scalar_common_1[1], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_18, Modules0_9, ((MR_Box) (Var_19)), &conv4_NestedModules_13, ((MR_Box) (STATE_VARIABLE_Info_0_14)), &conv3_STATE_VARIABLE_Info_15, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_17);
    NestedModules_13 = ((MR_Word) conv4_NestedModules_13);
    *STATE_VARIABLE_Info_15 = ((MR_Word) conv3_STATE_VARIABLE_Info_15);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_8[11]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (make__dependencies__remove_nested_modules_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (NestedModules_13));
    }
    mercury__list__negated_filter_3_p_0(TypeCtorInfo_30_30, Var_22, Modules0_9, Modules_10);
  }
}

void MR_CALL 
make__dependencies__find_reachable_local_modules_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word * Success_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word ModuleIndex_15;
    MR_Word Modules0_16;
    MR_Word STATE_VARIABLE_Info_21_21;
    MR_Word Map0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
    MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
    MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
    MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
    MR_Integer Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
    MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
    MR_Word Index0_32;
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 0)));
    MR_Box Var_64 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 1)));
    MR_Integer Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 2)));
    MR_Box conv0_Index0_32;

    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, Var_42, ((MR_Box) (ModuleName_10)), &conv0_Index0_32);
    if (succeeded)
    {
      Index0_32 = ((MR_Word) conv0_Index0_32);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      ModuleIndex_15 = Index0_32;
      STATE_VARIABLE_Info_21_21 = STATE_VARIABLE_Info_0_17;
    }
    else
    {
      MR_Word TypeCtorInfo_67_88;
      MR_Word Forward0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 0)));
      MR_Box Reverse0_34 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 1)));
      MR_Integer Size0_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 2)));
      MR_Integer Size_36;
      MR_Word Forward_37;
      MR_Integer TrueSize_38;
      MR_Box Reverse_40;
      MR_Word Map_41;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_73;
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
      MR_Integer Var_84;
      MR_Word Var_85;
      MR_Word Var_72;

      ModuleIndex_15 = (MR_Word) Size0_35;
      Size_36 = (Size0_35 + (MR_Integer) 1);
      TypeCtorInfo_67_88 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      mercury__version_hash_table__det_insert_4_p_0(TypeCtorInfo_67_88, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, ((MR_Box) (ModuleName_10)), ((MR_Box) (ModuleIndex_15)), Forward0_33, &Forward_37);
      TrueSize_38 = mercury__version_array__size_1_f_0(TypeCtorInfo_67_88, Reverse0_34);
      succeeded = (Size_36 > TrueSize_38);
      if (succeeded)
      {
        MR_Integer NewSize_39;

        succeeded = (TrueSize_38 == (MR_Integer) 0);
        if (succeeded)
          NewSize_39 = (MR_Integer) 1;
        else
        {
          NewSize_39 = (TrueSize_38 * (MR_Integer) 2);
        }
        mercury__version_array__resize_4_p_0(TypeCtorInfo_67_88, NewSize_39, ((MR_Box) (ModuleName_10)), Reverse0_34, &Reverse_40);
      }
      else
        mercury__version_array__set_4_p_0(TypeCtorInfo_67_88, Size0_35, ((MR_Box) (ModuleName_10)), Reverse0_34, &Reverse_40);
      {
        Map_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Map_41, 0) = ((MR_Box) (Forward_37));
        MR_hl_field(MR_mktag(0), Map_41, 1) = ((MR_Box) (Reverse_40));
        MR_hl_field(MR_mktag(0), Map_41, 2) = ((MR_Box) (Size_36));
      }
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 14)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 15)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 16)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 17)));
      Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 18)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 19)));
      {
        STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (Map_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 9) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 10) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 11) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 12) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 13) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 14) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 15) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 16) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 17) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 18) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 19) = ((MR_Box) (Var_85));
      }
    }
    make__dependencies__find_transitive_module_dependencies_10_p_0(Globals_9, (MR_Integer) 2, (MR_Integer) 0, ModuleIndex_15, Success_11, &Modules0_16, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_18);
    make__dependencies__module_index_set_to_plain_set_3_p_0(*STATE_VARIABLE_Info_18, Modules0_16, Modules_12);
  }
}

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_10_p_0(
  MR_Word Globals_11,
  MR_Word DependenciesType_12,
  MR_Word ModuleLocn_13,
  MR_Word ModuleIndex_14,
  MR_Word * Success_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded;
    MR_Word DepsRoot_19;
    MR_Word CachedTransDeps_20;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Integer Var_52;
    MR_Word Var_53;
    MR_Word Result0_21;
    MR_Box conv0_Result0_21;

    {
      DepsRoot_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DepsRoot_19, 0) = ((MR_Box) (ModuleIndex_14));
      MR_hl_field(MR_mktag(0), DepsRoot_19, 1) = ((MR_Box) ((DependenciesType_12 | ((ModuleLocn_13 << (MR_Integer) 2)))));
    }
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10)));
    CachedTransDeps_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 11)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 12)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 13)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 14)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 15)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 16)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 17)));
    Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 18)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 19)));
    succeeded = mercury__map__search_3_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0, (MR_Word) &make__dependencies_scalar_common_1[5], CachedTransDeps_20, ((MR_Box) (DepsRoot_19)), &conv0_Result0_21);
    if (succeeded)
    {
      Result0_21 = ((MR_Word) conv0_Result0_21);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Success_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_21, (MR_Integer) 0)));
      *Modules_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_21, (MR_Integer) 1)));
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word KeepGoing_22;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Integer Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
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
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Integer Var_91;
      MR_Word Var_92;
      MR_Word Var_84;

      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 629, &KeepGoing_22);
      Var_28 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
      make__dependencies__find_transitive_module_dependencies_2_12_p_0(KeepGoing_22, DependenciesType_12, ModuleLocn_13, Globals_11, ModuleIndex_14, Success_15, Var_28, Modules_16, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_29_29);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (*Success_15));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (*Modules_16));
      }
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
      Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
      Var_34 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0, (MR_Word) &make__dependencies_scalar_common_1[5], ((MR_Box) (DepsRoot_19)), Var_33, ((MR_Box) (Var_32)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
      Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
      Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_92));
      }
    }
  }
}

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Success_18;
    MR_Word conv2_Modules_20;
    MR_Word conv1_STATE_VARIABLE_Info_33;

    make__dependencies__find_transitive_module_dependencies_2_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_Success_18, ((MR_Word) wrapper_arg_4), &conv2_Modules_20, ((MR_Word) wrapper_arg_6), &conv1_STATE_VARIABLE_Info_33);
    *wrapper_arg_3 = ((MR_Box) (conv3_Success_18));
    *wrapper_arg_5 = ((MR_Box) (conv2_Modules_20));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Info_33));
  }
}

static void MR_CALL 
make__dependencies__find_transitive_module_dependencies_2_12_p_0(
  MR_Word KeepGoing_13,
  MR_Word DependenciesType_14,
  MR_Word ModuleLocn_15,
  MR_Word Globals_16,
  MR_Word ModuleIndex_17,
  MR_Word * Success_18,
  MR_Word Modules0_19,
  MR_Word * Modules_20,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  {
    MR_bool succeeded;

    succeeded = mercury__sparse_bitset__member_2_p_0((MR_Word) &make__dependencies_scalar_common_1[0], ((MR_Box) (ModuleIndex_17)), Modules0_19);
    if (succeeded)
    {
      *Success_18 = (MR_Integer) 1;
      *Modules_20 = Modules0_19;
      *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
    }
    else
    {
      MR_Word Result0_24;
      MR_Word DepsRoot_23;
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 11)));
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 0)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 1)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 2)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 3)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 4)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 5)));
      MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 6)));
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 7)));
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 8)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 9)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 10)));
      MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 12)));
      MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 13)));
      MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 14)));
      MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 15)));
      MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 16)));
      MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 17)));
      MR_Integer Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 18)));
      MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 19)));
      MR_Box conv0_Result0_24;

      {
        DepsRoot_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DepsRoot_23, 0) = ((MR_Box) (ModuleIndex_17));
        MR_hl_field(MR_mktag(0), DepsRoot_23, 1) = ((MR_Box) ((DependenciesType_14 | ((ModuleLocn_15 << (MR_Integer) 2)))));
      }
      succeeded = mercury__map__elem_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_transitive_dependencies_root_0, (MR_Word) &make__dependencies_scalar_common_1[5], ((MR_Box) (DepsRoot_23)), Var_36, &conv0_Result0_24);
      if (succeeded)
      {
        Result0_24 = ((MR_Word) conv0_Result0_24);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Modules1_25;

        *Success_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_24, (MR_Integer) 0)));
        Modules1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_24, (MR_Integer) 1)));
        *Modules_20 = mercury__sparse_bitset__union_2_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, Modules0_19, Modules1_25);
        *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
      }
      else
      {
        MR_Word ModuleName_26;
        MR_Word MaybeImports_27;
        MR_Word STATE_VARIABLE_Info_37_37;

        make__dependencies__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_32, ModuleIndex_17, &ModuleName_26);
        make__module_dep_file__get_module_dependencies_7_p_0(Globals_16, ModuleName_26, &MaybeImports_27, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37);
        if ((MaybeImports_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *Success_18 = (MR_Integer) 0;
          *Modules_20 = Modules0_19;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_37_37;
        }
        else
        {
          MR_Word Imports_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeImports_27, (MR_Integer) 0)));

          switch (ModuleLocn_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              {
                MR_String Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 26)));
                MR_String Var_459;
                MR_String Var_94 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 0)));
                MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 1)));
                MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 2)));
                MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 3)));
                MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 4)));
                MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 5)));
                MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 6)));
                MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 7)));
                MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 8)));
                MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 9)));
                MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 10)));
                MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 11)));
                MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 12)));
                MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 13)));
                MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 14)));
                MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 15)));
                MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 16)));
                MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 17)));
                MR_Word Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 18)));
                MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 19)));
                MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 20)));
                MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 21)));
                MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 22)));
                MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 23)));
                MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 24)));
                MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 25)));

                Var_459 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(Var_39, Var_459) == 0);
              }
              break;
          }
          if (succeeded)
          {
            MR_Word ImportsToCheck_29;
            MR_Word ImportsToCheckSet_30;
            MR_Word ImportingModule_31;
            MR_Word Var_62;
            MR_Word STATE_VARIABLE_Info_63_63;
            MR_Word STATE_VARIABLE_Info_64_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word STATE_VARIABLE_Info_67_67;
            MR_Word Modules1_70;
            MR_Word Var_380;
            MR_Word Var_381;
            MR_Word Var_382;
            MR_Word Var_383;
            MR_Word Var_384;
            MR_Word Var_385;
            MR_Word Var_386;
            MR_Word Var_387;
            MR_Word Var_388;
            MR_Word Var_389;
            MR_Word Var_390;
            MR_Word Var_391;
            MR_Word Var_392;
            MR_Word Var_393;
            MR_Word Var_394;
            MR_Word Var_395;
            MR_Word Var_396;
            MR_Integer Var_397;
            MR_Word Var_398;
            MR_Word Var_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 12)));
            MR_Word Var_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 8)));
            MR_Word Var_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 6)));
            MR_Word Var_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 5)));
            MR_Word Var_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 4)));
            MR_String Var_460 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 26)));
            MR_Word Var_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 25)));
            MR_Word Var_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 24)));
            MR_Word Var_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 23)));
            MR_Word Var_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 22)));
            MR_Word Var_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 21)));
            MR_Word Var_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 20)));
            MR_Word Var_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 19)));
            MR_Word Var_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 18)));
            MR_Word Var_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 17)));
            MR_Word Var_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 16)));
            MR_Word Var_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 15)));
            MR_Word Var_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 14)));
            MR_Word Var_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 13)));
            MR_Word Var_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 11)));
            MR_Word Var_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 10)));
            MR_Word Var_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 9)));
            MR_Word Var_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 7)));
            MR_Word Var_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 3)));
            MR_Word Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 2)));
            MR_Word Var_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 1)));
            MR_String Var_486 = ((MR_String) (MR_hl_field(MR_mktag(0), Imports_28, (MR_Integer) 0)));
            MR_Word Var_419;
            MR_Word Var_420;
            MR_Word Var_421;
            MR_Word Var_422;
            MR_Word Var_423;
            MR_Word Var_424;
            MR_Word Var_425;
            MR_Word Var_426;
            MR_Word Var_427;
            MR_Word Var_428;
            MR_Word Var_429;
            MR_Word Var_430;
            MR_Word Var_431;
            MR_Word Var_432;
            MR_Word Var_433;
            MR_Word Var_434;
            MR_Word Var_436;
            MR_Integer Var_437;
            MR_Word Var_438;
            MR_Word Var_435;

            switch (DependenciesType_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word Var_50;
                  MR_Word Var_52;
                  MR_Word Var_54;
                  MR_Word Var_56;
                  MR_Word Var_58;
                  MR_Word Var_59;

                  Var_59 = parse_tree__prog_data_foreign__get_all_foreign_import_modules_1_f_0(Var_474);
                  {
                    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
                    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_478));
                    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
                  }
                  {
                    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_482));
                    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
                  }
                  {
                    Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_480));
                    MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
                  }
                  {
                    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_481));
                    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
                  }
                  ImportsToCheck_29 = mercury__set__union_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, Var_50);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_40;
                  MR_Word Var_42;
                  MR_Word Var_44;
                  MR_Word Var_46;
                  MR_Word Var_47;

                  Var_47 = parse_tree__prog_data_foreign__get_all_foreign_import_modules_1_f_0(Var_474);
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
                    MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_482));
                    MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
                  }
                  {
                    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_480));
                    MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
                  }
                  {
                    Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_481));
                    MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
                  }
                  ImportsToCheck_29 = mercury__set__union_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, Var_40);
                }
                break;
              case (MR_Integer) 0:
                ImportsToCheck_29 = Var_481;
                break;
            }
            Var_62 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ImportsToCheck_29);
            make__dependencies__module_names_to_index_set_4_p_0(Var_62, &ImportsToCheckSet_30, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_63_63);
            Var_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 0)));
            Var_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 1)));
            Var_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 2)));
            Var_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 3)));
            Var_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 4)));
            Var_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 5)));
            Var_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 6)));
            Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 7)));
            Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 8)));
            Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 9)));
            Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 10)));
            Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 11)));
            Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 12)));
            Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 13)));
            Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 14)));
            Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 15)));
            ImportingModule_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 16)));
            Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 17)));
            Var_397 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 18)));
            Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 19)));
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ModuleName_26));
            }
            {
              STATE_VARIABLE_Info_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 0) = ((MR_Box) (Var_380));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 1) = ((MR_Box) (Var_381));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 2) = ((MR_Box) (Var_382));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 3) = ((MR_Box) (Var_383));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 4) = ((MR_Box) (Var_384));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 5) = ((MR_Box) (Var_385));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 6) = ((MR_Box) (Var_386));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 7) = ((MR_Box) (Var_387));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 8) = ((MR_Box) (Var_388));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 9) = ((MR_Box) (Var_389));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 10) = ((MR_Box) (Var_390));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 11) = ((MR_Box) (Var_391));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 12) = ((MR_Box) (Var_392));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 13) = ((MR_Box) (Var_393));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 14) = ((MR_Box) (Var_394));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 15) = ((MR_Box) (Var_395));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 16) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 17) = ((MR_Box) (Var_396));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 18) = ((MR_Box) (Var_397));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_64_64, 19) = ((MR_Box) (Var_398));
            }
            Modules1_70 = mercury__sparse_bitset__insert_2_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Modules0_19, ((MR_Box) (ModuleIndex_17)));
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&make__dependencies_scalar_common_11[0]));
              MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (make__dependencies__find_transitive_module_dependencies_2_12_p_0_1));
              MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (KeepGoing_13));
              MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (DependenciesType_14));
              MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) (ModuleLocn_15));
            }
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(KeepGoing_13, Var_66, Globals_16, ImportsToCheckSet_30, Success_18, Modules1_70, Modules_20, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_67_67);
            Var_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 0)));
            Var_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 1)));
            Var_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 2)));
            Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 3)));
            Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 4)));
            Var_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 5)));
            Var_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 6)));
            Var_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 7)));
            Var_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 8)));
            Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 9)));
            Var_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 10)));
            Var_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 11)));
            Var_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 12)));
            Var_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 13)));
            Var_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 14)));
            Var_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 15)));
            Var_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 16)));
            Var_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 17)));
            Var_437 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 18)));
            Var_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, (MR_Integer) 19)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_33 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_419));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_420));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_421));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_422));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_423));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_424));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_425));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_426));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_427));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_428));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_429));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_430));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_431));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_432));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_433));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_434));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (ImportingModule_31));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_436));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_437));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_438));
            }
          }
          else
          {
            *Success_18 = (MR_Integer) 1;
            *Modules_20 = Modules0_19;
            *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_37_37;
          }
        }
      }
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_93_95_48_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Word STATE_VARIABLE_Acc_0_20,
  MR_Word * STATE_VARIABLE_Acc_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word Var_26;
    MR_Box conv2_STATE_VARIABLE_Acc_21;
    MR_Box conv1_STATE_VARIABLE_Info_23;
    MR_Box conv0_STATE_VARIABLE_IO_25;

    Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) &make__dependencies_scalar_common_1[0], Ts_15);
    make__util__foldl3_maybe_stop_at_error_11_p_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, (MR_Word) &make__dependencies_scalar_common_1[8], (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, KeepGoing_12, P_13, Globals_14, Var_26, Success_16, ((MR_Box) (STATE_VARIABLE_Acc_0_20)), &conv2_STATE_VARIABLE_Acc_21, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv1_STATE_VARIABLE_Info_23, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
    *STATE_VARIABLE_Acc_21 = ((MR_Word) conv2_STATE_VARIABLE_Acc_21);
    *STATE_VARIABLE_Info_23 = ((MR_Word) conv1_STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__dependencies__module_index_to_name_3_p_0(
  MR_Word Info_4,
  MR_Word Index_5,
  MR_Word * ModuleName_6)
{
  {
    MR_Integer I_7 = (MR_Integer) Index_5;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6)));
    MR_Box Var_9 = ((MR_Box) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 8)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 9)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 10)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 11)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 12)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 13)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 14)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 15)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 16)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 17)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 18)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 19)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Integer Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Box conv0_ModuleName_6;

    conv0_ModuleName_6 = mercury__version_array__elem_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, I_7, Var_9);
    *ModuleName_6 = ((MR_Word) conv0_ModuleName_6);
  }
}

static void MR_CALL 
make__dependencies__dependency_file_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_List_8;

    make__dependencies__dependency_file_index_set_to_plain_set_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_List_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_List_8));
  }
}

void MR_CALL 
make__dependencies__dependency_file_index_set_to_plain_set_3_p_0(
  MR_Word Info_4,
  MR_Word DepIndices_5,
  MR_Word * DepFiles_6)
{
  {
    MR_Word DepFilesList_7;
    MR_Word Var_8;
    MR_Box conv1_DepFilesList_7;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (make__dependencies__dependency_file_index_set_to_plain_set_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Info_4));
    }
    mercury__sparse_bitset__foldl_4_p_0((MR_Word) &make__dependencies_scalar_common_1[3], (MR_Word) &make__dependencies_scalar_common_1[2], Var_8, DepIndices_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_DepFilesList_7);
    DepFilesList_7 = ((MR_Word) conv1_DepFilesList_7);
    *DepFiles_6 = mercury__set__from_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_0, DepFilesList_7);
  }
}

static void MR_CALL 
make__dependencies__module_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Set_10;

    make__dependencies__module_index_set_to_plain_set_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Set_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Set_10));
  }
}

void MR_CALL 
make__dependencies__module_index_set_to_plain_set_3_p_0(
  MR_Word Info_4,
  MR_Word ModuleIndices_5,
  MR_Word * Modules_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Box conv1_Modules_6;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (make__dependencies__module_index_set_to_plain_set_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Info_4));
    }
    Var_8 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    mercury__sparse_bitset__foldl_4_p_0((MR_Word) &make__dependencies_scalar_common_1[1], (MR_Word) &make__dependencies_scalar_common_1[0], Var_7, ModuleIndices_5, ((MR_Box) (Var_8)), &conv1_Modules_6);
    *Modules_6 = ((MR_Word) conv1_Modules_6);
  }
}

void MR_CALL 
make__dependencies__module_names_to_index_set_4_p_0(
  MR_Word ModuleNames_5,
  MR_Word * IndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Var_10;

    Var_10 = mercury__sparse_bitset__init_0_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0);
    make__dependencies__module_names_to_index_set_2_5_p_0(ModuleNames_5, Var_10, IndexSet_6, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
  }
}

static void MR_CALL 
make__dependencies__module_names_to_index_set_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      MR_Word ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ModuleNames_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ModuleIndex_16;
      MR_Word STATE_VARIABLE_Info_21_21;
      MR_Word STATE_VARIABLE_Set_22_22;
      MR_Word Map0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
      MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
      MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 8)));
      MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 9)));
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 10)));
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 11)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 12)));
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 13)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 14)));
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 15)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 16)));
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 17)));
      MR_Integer Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 18)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 19)));
      MR_Word Index0_32;
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 0)));
      MR_Box Var_64 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 1)));
      MR_Integer Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 2)));
      MR_Box conv0_Index0_32;

      succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, Var_42, ((MR_Box) (ModuleName_12)), &conv0_Index0_32);
      if (succeeded)
      {
        Index0_32 = ((MR_Word) conv0_Index0_32);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        ModuleIndex_16 = Index0_32;
        STATE_VARIABLE_Info_21_21 = STATE_VARIABLE_Info_0_4;
      }
      else
      {
        MR_Word TypeCtorInfo_67_88;
        MR_Word Forward0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 0)));
        MR_Box Reverse0_34 = ((MR_Box) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 1)));
        MR_Integer Size0_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Map0_31, (MR_Integer) 2)));
        MR_Integer Size_36;
        MR_Word Forward_37;
        MR_Integer TrueSize_38;
        MR_Box Reverse_40;
        MR_Word Map_41;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_73;
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
        MR_Integer Var_84;
        MR_Word Var_85;
        MR_Word Var_72;

        ModuleIndex_16 = (MR_Word) Size0_35;
        Size_36 = (Size0_35 + (MR_Integer) 1);
        TypeCtorInfo_67_88 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        mercury__version_hash_table__det_insert_4_p_0(TypeCtorInfo_67_88, (MR_Word) &make__dependencies__make__dependencies__type_ctor_info_module_index_0, ((MR_Box) (ModuleName_12)), ((MR_Box) (ModuleIndex_16)), Forward0_33, &Forward_37);
        TrueSize_38 = mercury__version_array__size_1_f_0(TypeCtorInfo_67_88, Reverse0_34);
        succeeded = (Size_36 > TrueSize_38);
        if (succeeded)
        {
          MR_Integer NewSize_39;

          succeeded = (TrueSize_38 == (MR_Integer) 0);
          if (succeeded)
            NewSize_39 = (MR_Integer) 1;
          else
          {
            NewSize_39 = (TrueSize_38 * (MR_Integer) 2);
          }
          mercury__version_array__resize_4_p_0(TypeCtorInfo_67_88, NewSize_39, ((MR_Box) (ModuleName_12)), Reverse0_34, &Reverse_40);
        }
        else
          mercury__version_array__set_4_p_0(TypeCtorInfo_67_88, Size0_35, ((MR_Box) (ModuleName_12)), Reverse0_34, &Reverse_40);
        {
          Map_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Map_41, 0) = ((MR_Box) (Forward_37));
          MR_hl_field(MR_mktag(0), Map_41, 1) = ((MR_Box) (Reverse_40));
          MR_hl_field(MR_mktag(0), Map_41, 2) = ((MR_Box) (Size_36));
        }
        Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
        Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
        Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
        Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
        Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
        Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
        Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
        Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
        Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 8)));
        Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 9)));
        Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 10)));
        Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 11)));
        Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 12)));
        Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 13)));
        Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 14)));
        Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 15)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 16)));
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 17)));
        Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 18)));
        Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 19)));
        {
          STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (Map_41));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 9) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 10) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 11) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 12) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 13) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 14) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 15) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 16) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 17) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 18) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 19) = ((MR_Box) (Var_85));
        }
      }
      mercury__sparse_bitset__insert_3_p_0((MR_Word) &make__dependencies_scalar_common_1[0], ((MR_Box) (ModuleIndex_16)), HeadVar__2_2, &STATE_VARIABLE_Set_22_22);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = ModuleNames_13;
        MR_Word next_value_of_HeadVar__2_2 = STATE_VARIABLE_Set_22_22;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_21_21;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      }
      continue;
    }
    break;
  }
}

void MR_CALL 
make__dependencies__deps_set_foldl3_maybe_stop_at_error_11_p_0(
  MR_Word TypeInfo_for_Acc_31,
  MR_Word TypeInfo_for_Info_32,
  MR_Word TypeInfo_for_IO_33,
  MR_Word TypeClassInfo_for_enum_30,
  MR_Word KeepGoing_12,
  MR_Word P_13,
  MR_Word Globals_14,
  MR_Word Ts_15,
  MR_Word * Success_16,
  MR_Box STATE_VARIABLE_Acc_0_20,
  MR_Box * STATE_VARIABLE_Acc_21,
  MR_Box STATE_VARIABLE_Info_0_22,
  MR_Box * STATE_VARIABLE_Info_23,
  MR_Box STATE_VARIABLE_IO_0_24,
  MR_Box * STATE_VARIABLE_IO_25)
{
  {
    MR_Word TypeInfo_35_35;
    MR_Word Var_26;

    Var_26 = mercury__sparse_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_enum_30, Ts_15);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_enum_30, (MR_Integer) 1, &TypeInfo_35_35);
    make__util__foldl3_maybe_stop_at_error_11_p_0(TypeInfo_35_35, TypeInfo_for_Acc_31, TypeInfo_for_Info_32, TypeInfo_for_IO_33, KeepGoing_12, P_13, Globals_14, Var_26, Success_16, STATE_VARIABLE_Acc_0_20, STATE_VARIABLE_Acc_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23, STATE_VARIABLE_IO_0_24, STATE_VARIABLE_IO_25);
  }
}

void MR_CALL 
make__dependencies__union_deps_plain_set_10_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word FindDeps_11,
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_Word * Success_14,
  MR_Word Deps0_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word Deps1_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), FindDeps_11, (MR_Integer) 1)));
    MR_Box conv4_Success_14;
    MR_Box conv3_Deps1_19;
    MR_Box conv2_STATE_VARIABLE_Info_21;
    MR_Box conv1_STATE_VARIABLE_IO_23;

    func_0(((MR_Box) FindDeps_11), ((MR_Box) (Globals_12)), ((MR_Box) (ModuleName_13)), &conv4_Success_14, &conv3_Deps1_19, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv2_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23);
    *Success_14 = ((MR_Word) conv4_Success_14);
    Deps1_19 = ((MR_Word) conv3_Deps1_19);
    *STATE_VARIABLE_Info_21 = ((MR_Word) conv2_STATE_VARIABLE_Info_21);
    *Deps_16 = mercury__set__union_2_f_0(TypeInfo_for_T_26, Deps0_15, Deps1_19);
  }
}

void MR_CALL 
make__dependencies__union_deps_10_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word FindDeps_11,
  MR_Word Globals_12,
  MR_Word ModuleIndex_13,
  MR_Word * Success_14,
  MR_Word Deps0_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word Deps1_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), FindDeps_11, (MR_Integer) 1)));
    MR_Box conv4_Success_14;
    MR_Box conv3_Deps1_19;
    MR_Box conv2_STATE_VARIABLE_Info_21;
    MR_Box conv1_STATE_VARIABLE_IO_23;

    func_0(((MR_Box) FindDeps_11), ((MR_Box) (Globals_12)), ((MR_Box) (ModuleIndex_13)), &conv4_Success_14, &conv3_Deps1_19, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv2_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23);
    *Success_14 = ((MR_Word) conv4_Success_14);
    Deps1_19 = ((MR_Word) conv3_Deps1_19);
    *STATE_VARIABLE_Info_21 = ((MR_Word) conv2_STATE_VARIABLE_Info_21);
    *Deps_16 = mercury__sparse_bitset__union_2_f_0(TypeInfo_for_T_26, Deps0_15, Deps1_19);
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__3_173;
    MR_Word conv7_HeadVar__4_174;
    MR_Word conv6_HeadVar__6_176;

    make__dependencies__IntroducedFrom__pred__target_dependencies__419__1_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_HeadVar__3_173, &conv7_HeadVar__4_174, ((MR_Word) wrapper_arg_5), &conv6_HeadVar__6_176);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__3_173));
    *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__4_174));
    *wrapper_arg_6 = ((MR_Box) (conv6_HeadVar__6_176));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__3_156;
    MR_Word conv4_HeadVar__4_157;
    MR_Word conv3_HeadVar__6_159;

    make__dependencies__IntroducedFrom__pred__target_dependencies__408__1_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_HeadVar__3_156, &conv4_HeadVar__4_157, ((MR_Word) wrapper_arg_5), &conv3_HeadVar__6_159);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_156));
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_157));
    *wrapper_arg_6 = ((MR_Box) (conv3_HeadVar__6_159));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_256;
    MR_Word conv1_HeadVar__4_257;
    MR_Word conv0_HeadVar__6_259;

    make__dependencies__IntroducedFrom__pred__target_dependencies__460__1_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_256, &conv1_HeadVar__4_257, ((MR_Word) wrapper_arg_5), &conv0_HeadVar__6_259);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_256));
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_257));
    *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_259));
  }
}

MR_Word MR_CALL 
make__dependencies__target_dependencies_2_f_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    /* setup for tailcalls optimized into a loop */
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__3_3 = (MR_Word) &make__dependencies_scalar_common_2[29];
            break;
          case (MR_Integer) 1:
            HeadVar__3_3 = make__dependencies__compiled_code_dependencies_1_f_0(Globals_1);
            break;
          case (MR_Integer) 2:
            HeadVar__3_3 = make__dependencies__interface_file_dependencies_0_f_0();
            break;
          case (MR_Integer) 3:
            HeadVar__3_3 = make__dependencies__interface_file_dependencies_0_f_0();
            break;
          case (MR_Integer) 4:
            HeadVar__3_3 = make__dependencies__interface_file_dependencies_0_f_0();
            break;
          case (MR_Integer) 5:
            {
              HeadVar__3_3 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_95;
              MR_Word Var_96;

              Var_84 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              Var_88 = make__dependencies__of__ho12_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
              Var_92 = make__dependencies__of__ho19_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
              Var_96 = make__dependencies__of__ho18_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
                MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_95));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_91));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_87));
              }
              HeadVar__3_3 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, Var_83);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_117;
              MR_Word Var_118;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_125;
              MR_Word Var_126;

              Var_102 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              Var_106 = make__dependencies__of__ho12_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
              Var_110 = make__dependencies__of__ho19_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
              Var_114 = make__dependencies__of__ho18_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
              Var_118 = make__dependencies__of__ho11_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
              Var_122 = make__dependencies__of__ho10_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
              Var_126 = make__dependencies__of__ho16_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
              {
                Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
                MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_125));
              }
              {
                Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
                MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_121));
              }
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
                MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_117));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_113));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_109));
              }
              {
                Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
                MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_105));
              }
              HeadVar__3_3 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, Var_101);
            }
            break;
          case (MR_Integer) 8:
            HeadVar__3_3 = (MR_Word) &make__dependencies_scalar_common_2[30];
            break;
          case (MR_Integer) 9:
            HeadVar__3_3 = make__dependencies__compiled_code_dependencies_1_f_0(Globals_1);
            break;
          case (MR_Integer) 10:
            HeadVar__3_3 = make__dependencies__compiled_code_dependencies_1_f_0(Globals_1);
            break;
          case (MR_Integer) 11:
            HeadVar__3_3 = make__dependencies__compiled_code_dependencies_1_f_0(Globals_1);
            break;
          case (MR_Integer) 12:
            {
              HeadVar__3_3 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)));
            }
            break;
          case (MR_Integer) 13:
            {
              /* direct tailcall eliminated */
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14));
              continue;
            }
            break;
          case (MR_Integer) 14:
            HeadVar__3_3 = make__dependencies__compiled_code_dependencies_1_f_0(Globals_1);
            break;
          case (MR_Integer) 15:
            {
              MR_Word Var_26;
              MR_Word Var_27;
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Word Var_38;
              MR_Word Var_39;

              Var_27 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)));
              Var_31 = make__dependencies__of__ho11_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
              Var_35 = make__dependencies__of__ho10_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
              Var_39 = make__dependencies__of__ho16_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
                MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
                MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_38));
              }
              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_34));
              }
              {
                Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
                MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_30));
              }
              HeadVar__3_3 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, Var_26);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Var_137;
              MR_Word Var_138;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word Var_145;
              MR_Word Var_146;
              MR_Word Var_149;
              MR_Word Var_150;

              Var_138 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              Var_142 = make__dependencies__of__ho12_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
              Var_146 = make__dependencies__of__ho19_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
              Var_150 = make__dependencies__of__ho18_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
              {
                Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
                MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
                MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_149));
              }
              {
                Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_145));
              }
              {
                Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
                MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_141));
              }
              HeadVar__3_3 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, Var_137);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          /* direct tailcall eliminated */
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CompilationTarget_46;
          MR_Word TargetCode_47;
          MR_Word HighLevelCode_48;
          MR_Word HeaderDeps_49;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_80;

          libs__globals__get_target_2_p_0(Globals_1, &CompilationTarget_46);
          TargetCode_47 = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0();
          libs__globals__lookup_bool_option_3_p_0(Globals_1, (MR_Integer) 264, &HighLevelCode_48);
          succeeded = (CompilationTarget_46 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (HighLevelCode_48 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_53 = (MR_Word) MR_mkword(MR_mktag(1), &make__dependencies_scalar_common_9[0]);
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_66;
            MR_Word Var_67;

            Var_52 = make__dependencies__of__ho11_2_f_0(Var_53);
            Var_57 = make__dependencies__of__ho10_2_f_0(Var_53);
            Var_62 = make__dependencies__of__ho12_2_f_0(Var_53);
            Var_67 = make__dependencies__of__ho16_2_f_0(Var_53);
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
              MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_61));
            }
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
              MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_56));
            }
            HeaderDeps_49 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, Var_51);
          }
          else
            HeaderDeps_49 = (MR_Word) &make__dependencies_scalar_common_2[28];
          Var_73 = make__dependencies__of__ho15_2_f_0(TargetCode_47);
          Var_76 = make__dependencies__of__ho20_2_f_0((MR_Word) MR_mkword(MR_mktag(1), &make__dependencies_scalar_common_9[1]));
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (HeaderDeps_49));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
          }
          HeadVar__3_3 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, Var_72);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__3_3 = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0(Globals_1);
            break;
          case (MR_Integer) 1:
            HeadVar__3_3 = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0(Globals_1);
            break;
        }
        break;
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    make__dependencies__self_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static MR_Word MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_102_111_114_101_105_103_110_95_100_101_112_115_95_95_91_50_93_95_48_2_f_0(
  MR_Word Globals_4)
{
  {
    MR_Word CompilationTarget_7;

    libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_7);
    return (MR_Word) &make__dependencies_scalar_common_8[10];
  }
}

static void MR_CALL 
make__dependencies__of__ho20_2_f_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
make__dependencies__of__ho20_2_f_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Modules_12;
    MR_Word conv0_STATE_VARIABLE_Info_20;

    make__dependencies__foreign_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Modules_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
  }
}

static MR_Word MR_CALL 
make__dependencies__of__ho20_2_f_0(
  MR_Word FileType_4)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho20_2_f_0_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[26]));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
make__dependencies__of__ho19_2_f_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
make__dependencies__of__ho19_2_f_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Modules_12;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    make__dependencies__non_intermod_direct_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Modules_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static MR_Word MR_CALL 
make__dependencies__of__ho19_2_f_0(
  MR_Word FileType_4)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho19_2_f_0_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[25]));
    }
    return HeadVar__3_3;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Modules_12;
    MR_Word conv0_STATE_VARIABLE_Info_16;

    make__dependencies__non_intermod_indirect_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Modules_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
  }
}

static MR_Word MR_CALL 
make__dependencies__of__ho18_2_f_0(
  MR_Word FileType_4)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho18_2_f_0_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[24]));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
make__dependencies__of__ho12_2_f_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
make__dependencies__of__ho12_2_f_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;
    MR_Word conv1_AncestorIndices_11;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    make__dependencies__parents_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3, &conv1_AncestorIndices_11, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv1_AncestorIndices_11));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static MR_Word MR_CALL 
make__dependencies__of__ho12_2_f_0(
  MR_Word FileType_4)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho12_2_f_0_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[23]));
    }
    return HeadVar__3_3;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Modules_12;
    MR_Word conv0_STATE_VARIABLE_Info_16;

    make__dependencies__indirect_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Modules_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
  }
}

static MR_Word MR_CALL 
make__dependencies__of__ho10_2_f_0(
  MR_Word FileType_4)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho10_2_f_0_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[22]));
    }
    return HeadVar__3_3;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__5_59;
    MR_Word conv10_HeadVar__6_60;
    MR_Word conv9_HeadVar__8_62;

    make__dependencies__IntroducedFrom__pred__compiled_code_dependencies__539__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv11_HeadVar__5_59, &conv10_HeadVar__6_60, ((MR_Word) wrapper_arg_5), &conv9_HeadVar__8_62);
    *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__5_59));
    *wrapper_arg_4 = ((MR_Box) (conv10_HeadVar__6_60));
    *wrapper_arg_6 = ((MR_Box) (conv9_HeadVar__8_62));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__5_68;
    MR_Word conv7_HeadVar__6_69;
    MR_Word conv6_HeadVar__8_71;

    make__dependencies__IntroducedFrom__pred__compiled_code_dependencies__540__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_HeadVar__5_68, &conv7_HeadVar__6_69, ((MR_Word) wrapper_arg_5), &conv6_HeadVar__8_71);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__5_68));
    *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__6_69));
    *wrapper_arg_6 = ((MR_Box) (conv6_HeadVar__8_71));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_11;
    MR_Word conv4_Modules_12;
    MR_Word conv3_STATE_VARIABLE_Info_18;

    make__dependencies__intermod_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_11, &conv4_Modules_12, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_18);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv4_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_18));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;
    MR_Word conv1_AncestorIndices_11;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    make__dependencies__parents_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3, &conv1_AncestorIndices_11, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv1_AncestorIndices_11));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static MR_Word MR_CALL 
make__dependencies__compiled_code_dependencies_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_Word Deps_4;
    MR_Word IntermodOpt_5;
    MR_Word IntermodAnalysis_6;
    MR_Word TrackFlags_7;
    MR_Word AnyIntermod_8;
    MR_Word Deps0_9;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 332, &IntermodOpt_5);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 337, &IntermodAnalysis_6);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 631, &TrackFlags_7);
    AnyIntermod_8 = mercury__bool__or_2_f_0(IntermodOpt_5, IntermodAnalysis_6);
    switch (AnyIntermod_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Deps0_9 = make__dependencies__base_compiled_code_dependencies_1_f_0(TrackFlags_7);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_13;
          MR_Word Var_14;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Word Var_21;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_27;
          MR_Word Var_28;

          Var_14 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
          Var_18 = make__dependencies__of__ho16_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
          Var_23 = make__dependencies__imports_0_f_0();
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (make__dependencies__compiled_code_dependencies_1_f_0_4));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (&make__dependencies_scalar_common_8[9]));
          }
          Var_28 = make__dependencies__base_compiled_code_dependencies_1_f_0(TrackFlags_7);
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_27));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_21));
          }
          {
            Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
            MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_17));
          }
          Deps0_9 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, Var_13);
        }
        break;
    }
    switch (IntermodAnalysis_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Deps_4 = Deps0_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_38;

          Var_31 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
          Var_35 = make__dependencies__of__ho11_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Deps0_9));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_38));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_34));
          }
          Deps_4 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, Var_30);
        }
        break;
    }
    return Deps_4;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Modules_12;
    MR_Word conv0_STATE_VARIABLE_Info_18;

    make__dependencies__intermod_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Modules_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_18);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
  }
}

static MR_Word MR_CALL 
make__dependencies__of__ho16_2_f_0(
  MR_Word FileType_4)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho16_2_f_0_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[19]));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
make__dependencies__of__ho11_2_f_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
make__dependencies__of__ho11_2_f_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Modules_12;
    MR_Word conv0_STATE_VARIABLE_Info_24;

    make__dependencies__direct_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Modules_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_24);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_24));
  }
}

static MR_Word MR_CALL 
make__dependencies__of__ho11_2_f_0(
  MR_Word FileType_4)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho11_2_f_0_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[18]));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
make__dependencies__base_compiled_code_dependencies_1_f_0_3(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__5_86;
    MR_Word conv7_HeadVar__6_87;
    MR_Word conv6_HeadVar__8_89;

    make__dependencies__IntroducedFrom__pred__base_compiled_code_dependencies__574__1_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_HeadVar__5_86, &conv7_HeadVar__6_87, ((MR_Word) wrapper_arg_5), &conv6_HeadVar__8_89);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__5_86));
    *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__6_87));
    *wrapper_arg_6 = ((MR_Box) (conv6_HeadVar__8_89));
  }
}

static void MR_CALL 
make__dependencies__base_compiled_code_dependencies_1_f_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__3_3;
    MR_Word conv4_HeadVar__4_4;
    MR_Word conv3_STATE_VARIABLE_Info_14;

    make__dependencies__self_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_HeadVar__3_3, &conv4_HeadVar__4_4, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
make__dependencies__base_compiled_code_dependencies_1_f_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_36;
    MR_Word conv1_HeadVar__4_37;
    MR_Word conv0_HeadVar__6_39;

    make__dependencies__IntroducedFrom__pred__base_compiled_code_dependencies__568__1_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_36, &conv1_HeadVar__4_37, ((MR_Word) wrapper_arg_5), &conv0_HeadVar__6_39);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_36));
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_37));
    *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_39));
  }
}

static MR_Word MR_CALL 
make__dependencies__base_compiled_code_dependencies_1_f_0(
  MR_Word TrackFlags_3)
{
  {
    MR_Word Deps_4;
    MR_Word Deps0_5;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_24;

    switch (TrackFlags_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Deps0_5 = (MR_Word) &make__dependencies_scalar_common_2[16];
        break;
      case (MR_Integer) 1:
        {
          Deps0_5 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)));
        }
        break;
    }
    Var_9 = make__dependencies__of__ho15_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    Var_13 = make__dependencies__files_of__ho14_2_f_0();
    Var_17 = make__dependencies__files_of__ho13_2_f_0();
    Var_22 = make__dependencies__imports_0_f_0();
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (make__dependencies__base_compiled_code_dependencies_1_f_0_3));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[17]));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Deps0_5));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_12));
    }
    Deps_4 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, Var_8);
    return Deps_4;
  }
}

static void MR_CALL 
make__dependencies__of__ho15_2_f_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
make__dependencies__of__ho15_2_f_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    make__dependencies__self_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static MR_Word MR_CALL 
make__dependencies__of__ho15_2_f_0(
  MR_Word FileType_4)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho15_2_f_0_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_2[15]));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
make__dependencies__files_of__ho14_2_f_0_3(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_Success_15;
    MR_Word conv7_DepIndices_16;
    MR_Word conv6_STATE_VARIABLE_Info_25;

    make__dependencies__files_of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_Success_15, &conv7_DepIndices_16, ((MR_Word) wrapper_arg_5), &conv6_STATE_VARIABLE_Info_25);
    *wrapper_arg_3 = ((MR_Box) (conv8_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv7_DepIndices_16));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_25));
  }
}

static void MR_CALL 
make__dependencies__files_of__ho14_2_f_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__3_3;
    MR_Word conv4_HeadVar__4_4;
    MR_Word conv3_STATE_VARIABLE_Info_14;

    make__dependencies__self_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_HeadVar__3_3, &conv4_HeadVar__4_4, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
make__dependencies__files_of__ho14_2_f_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Files_12;
    MR_Word conv0_STATE_VARIABLE_Info_21;

    make__dependencies__fact_table_files_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Files_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Files_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
  }
}

static MR_Word MR_CALL 
make__dependencies__files_of__ho14_2_f_0(void)
{
  {
    return (MR_Word) &make__dependencies_scalar_common_8[8];
  }
}

static void MR_CALL 
make__dependencies__files_of__ho13_2_f_0_3(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_Success_15;
    MR_Word conv7_DepIndices_16;
    MR_Word conv6_STATE_VARIABLE_Info_25;

    make__dependencies__files_of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_Success_15, &conv7_DepIndices_16, ((MR_Word) wrapper_arg_5), &conv6_STATE_VARIABLE_Info_25);
    *wrapper_arg_3 = ((MR_Box) (conv8_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv7_DepIndices_16));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_25));
  }
}

static void MR_CALL 
make__dependencies__files_of__ho13_2_f_0_2(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__3_3;
    MR_Word conv4_HeadVar__4_4;
    MR_Word conv3_STATE_VARIABLE_Info_14;

    make__dependencies__self_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_HeadVar__3_3, &conv4_HeadVar__4_4, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
make__dependencies__files_of__ho13_2_f_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Success_11;
    MR_Word conv1_Files_12;
    MR_Word conv0_STATE_VARIABLE_Info_23;

    make__dependencies__foreign_include_files_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_Success_11, &conv1_Files_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_23);
    *wrapper_arg_3 = ((MR_Box) (conv2_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv1_Files_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_23));
  }
}

static MR_Word MR_CALL 
make__dependencies__files_of__ho13_2_f_0(void)
{
  {
    return (MR_Word) &make__dependencies_scalar_common_8[7];
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_Success_15;
    MR_Word conv16_TargetFiles_16;
    MR_Word conv15_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv17_Success_15, &conv16_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv15_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv17_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv16_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_Success_11;
    MR_Word conv13_Modules_12;
    MR_Word conv12_STATE_VARIABLE_Info_16;

    make__dependencies__indirect_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv14_Success_11, &conv13_Modules_12, ((MR_Word) wrapper_arg_5), &conv12_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv14_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv13_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_16));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_Success_15;
    MR_Word conv10_TargetFiles_16;
    MR_Word conv9_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv11_Success_15, &conv10_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv9_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv11_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv10_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_Success_11;
    MR_Word conv7_Modules_12;
    MR_Word conv6_STATE_VARIABLE_Info_24;

    make__dependencies__direct_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_Success_11, &conv7_Modules_12, ((MR_Word) wrapper_arg_5), &conv6_STATE_VARIABLE_Info_24);
    *wrapper_arg_3 = ((MR_Box) (conv8_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv7_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_24));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;
    MR_Word conv1_AncestorIndices_11;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    make__dependencies__parents_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3, &conv1_AncestorIndices_11, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv1_AncestorIndices_11));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static MR_Word MR_CALL 
make__dependencies__imports_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, (MR_Word) MR_mkword(MR_mktag(1), &make__dependencies_scalar_common_1[16]));
    return HeadVar__1_1;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv23_Success_15;
    MR_Word conv22_TargetFiles_16;
    MR_Word conv21_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv23_Success_15, &conv22_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv21_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv23_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv22_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv21_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv20_Success_11;
    MR_Word conv19_Modules_12;
    MR_Word conv18_STATE_VARIABLE_Info_16;

    make__dependencies__indirect_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv20_Success_11, &conv19_Modules_12, ((MR_Word) wrapper_arg_5), &conv18_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv20_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv19_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Info_16));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_Success_15;
    MR_Word conv16_TargetFiles_16;
    MR_Word conv15_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv17_Success_15, &conv16_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv15_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv17_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv16_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_Success_11;
    MR_Word conv13_Modules_12;
    MR_Word conv12_STATE_VARIABLE_Info_24;

    make__dependencies__direct_imports_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv14_Success_11, &conv13_Modules_12, ((MR_Word) wrapper_arg_5), &conv12_STATE_VARIABLE_Info_24);
    *wrapper_arg_3 = ((MR_Box) (conv14_Success_11));
    *wrapper_arg_4 = ((MR_Box) (conv13_Modules_12));
    *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_24));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_Success_15;
    MR_Word conv10_TargetFiles_16;
    MR_Word conv9_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv11_Success_15, &conv10_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv9_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv11_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv10_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__3_3;
    MR_Word conv7_AncestorIndices_11;
    MR_Word conv6_STATE_VARIABLE_Info_17;

    make__dependencies__parents_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_HeadVar__3_3, &conv7_AncestorIndices_11, ((MR_Word) wrapper_arg_5), &conv6_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv7_AncestorIndices_11));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_17));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_TargetFiles_16;
    MR_Word conv3_STATE_VARIABLE_Info_21;

    make__dependencies__of_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_TargetFiles_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_TargetFiles_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    make__dependencies__self_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static MR_Word MR_CALL 
make__dependencies__interface_file_dependencies_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = make__dependencies__combine_deps_list_1_f_0((MR_Word) &make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0, (MR_Word) MR_mkword(MR_mktag(1), &make__dependencies_scalar_common_1[13]));
    return HeadVar__1_1;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_Success_15;
    MR_Word conv7_Deps_16;
    MR_Word conv6_STATE_VARIABLE_Info_24;

    make__dependencies__combine_deps_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_Success_15, &conv7_Deps_16, ((MR_Word) wrapper_arg_5), &conv6_STATE_VARIABLE_Info_24);
    *wrapper_arg_3 = ((MR_Box) (conv8_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv7_Deps_16));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_24));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Success_15;
    MR_Word conv4_Deps_16;
    MR_Word conv3_STATE_VARIABLE_Info_24;

    make__dependencies__combine_deps_2_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_Success_15, &conv4_Deps_16, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_Info_24);
    *wrapper_arg_3 = ((MR_Box) (conv5_Success_15));
    *wrapper_arg_4 = ((MR_Box) (conv4_Deps_16));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_24));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    make__dependencies__no_deps_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static MR_Word MR_CALL 
make__dependencies__combine_deps_list_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (&make__dependencies_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (make__dependencies__combine_deps_list_1_f_0_1));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (TypeInfo_for_T_11));
      }
    else
    {
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        HeadVar__2_2 = Var_21;
      else
      {
        MR_Word Var_9;
        MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1)));
        MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));

        if ((Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          Var_9 = Var_49;
        else
        {
          MR_Word Var_38;

          Var_38 = make__dependencies__combine_deps_list_1_f_0(TypeInfo_for_T_11, Var_48);
          {
            Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (make__dependencies__combine_deps_list_1_f_0_2));
            MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_T_11));
            MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), Var_9, 5) = ((MR_Box) (Var_38));
          }
        }
        {
          HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (&make__dependencies_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (make__dependencies__combine_deps_list_1_f_0_3));
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (TypeInfo_for_T_11));
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_9));
        }
      }
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____cached_direct_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____cached_direct_imports_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____cached_direct_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____cached_direct_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____cached_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____cached_foreign_imports_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____cached_foreign_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____cached_foreign_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____cached_transitive_dependencies_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____cached_transitive_dependencies_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____cached_transitive_dependencies_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____cached_transitive_dependencies_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____dependencies_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____dependencies_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____dependencies_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____dependencies_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____dependency_file_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____dependency_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____dependency_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____dependency_file_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____dependency_file_index_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____dependency_file_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____dependency_file_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____deps_result_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____deps_result_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____deps_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____deps_set_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____deps_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____deps_set_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____find_module_deps_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____find_module_deps_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____find_module_deps_plain_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____find_module_deps_plain_set_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____find_module_deps_plain_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____find_module_deps_plain_set_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____module_deps_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____module_deps_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____module_deps_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____module_deps_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____module_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____module_index_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____module_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____module_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____module_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____module_locn_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____module_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____module_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_root_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____transitive_dependencies_root_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_root_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____transitive_dependencies_root_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__dependencies____Unify____transitive_dependencies_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__dependencies____Unify____transitive_dependencies_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
make__dependencies____Compare____transitive_dependencies_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__dependencies____Compare____transitive_dependencies_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_I_3;

    conv0_I_3 = make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__to_int_1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_I_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = make__dependencies__ClassMethod_for_enum__enum____make__dependencies__dependency_file_index__arity0______enum__from_int_1_1_f_0(((MR_Integer) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_I_3;

    conv0_I_3 = make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__to_int_1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_I_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = make__dependencies__ClassMethod_for_enum__enum____make__dependencies__module_index__arity0______enum__from_int_1_1_f_0(((MR_Integer) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
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
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_foreign_imports_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_cached_transitive_dependencies_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dependencies_result_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dependency_file_index_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_deps_result_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_deps_set_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_find_module_deps_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_find_module_deps_plain_set_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_module_deps_result_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_module_index_0);
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

/* :- end_module make.dependencies. */
