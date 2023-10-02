/*
** Automatically generated from `make.dependencies.m'
** by the Mercury compiler,
** version rotd-2023-10-02
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.find_local_modules.mih"
#include "make.get_module_dep_info.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
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

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__make_info__type_ctor_info_dependency_file_0;

static const MR_FA_TypeInfo_Struct1 make__dependencies__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_dependency_file_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_0[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_0;

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_1;

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_2;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_3[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_3;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_4[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_4;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_5[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_5;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_6[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_6;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_7[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_7;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_8[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_9[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_9;

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_10;

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_11;

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_0[4];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_1[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_2[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_3[6];

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_dep_spec_0[4];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_dep_spec_0[12];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dep_spec_0[12];

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__fact_table_files__903__1_1_f_0(
  MR_String LambdaHeadVar__1_29);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__833__1_3_p_0(
  MR_Word Languages_12,
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34);

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__find_target_dependencies_of_module__242__1_8_p_0(
  MR_Word HeadVar__1_344,
  MR_Word HeadVar__2_345,
  MR_Word * HeadVar__3_346,
  MR_Word * HeadVar__4_347,
  MR_Word HeadVar__5_348,
  MR_Word * HeadVar__6_349);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_95_95_50_52_50_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_346,
  MR_Word * HeadVar__4_347,
  MR_Word HeadVar__5_348,
  MR_Word * HeadVar__6_349);

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
make__dependencies____Compare____dep_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__dependencies____Unify____dep_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
make__dependencies__of_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__dependencies__of_2_10_p_0(
  MR_Word TargetType_11,
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * DepFileIndexSet_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__combine_deps_2_10_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word FindDeps1_11,
  MR_Word FindDeps2_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Deps_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

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
make__dependencies__report_assoc_list_element_3_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Msgs_0_7,
  MR_Word * STATE_VARIABLE_Msgs_8);

static void MR_CALL 
make__dependencies__report_list_element_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Msgs_0_6,
  MR_Word * STATE_VARIABLE_Msgs_7);

static void MR_CALL 
make__dependencies__index_get_ancestors_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word * AncestorModuleIndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static MR_bool MR_CALL 
make__dependencies__get_foreign_include_files_2_4_p_0(
  MR_Word Languages_5,
  MR_String SourceFileName_6,
  MR_Word ForeignInclude_7,
  MR_Word * File_8);

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
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

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
make__dependencies__target_of_module_to_dep_file_index_5_p_0(
  MR_Word TargetType_6,
  MR_Word ModuleIndex_7,
  MR_Word * TargetFileIndex_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_95_95_91_49_93_95_48_11_p_0_1(
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
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_95_95_91_49_93_95_48_11_p_0(
  MR_Word Globals_13,
  MR_Word TargetType_14,
  MR_Word ModuleIndex_15,
  MR_Word * NewSucceeded_16,
  MR_Word STATE_VARIABLE_Deps_0_48,
  MR_Word * STATE_VARIABLE_Deps_49,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word SucceededA_12,
  MR_Word SucceededB_13,
  MR_Word * Succeeded_14,
  MR_Word DepsA_15,
  MR_Word DepsB_16,
  MR_Word * Deps_17,
  MR_Word InfoA_18,
  MR_Word InfoB_19,
  MR_Word * Info_20);

static void MR_CALL 
make__dependencies__report_assoc_list_mismatch_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__dependencies__report_assoc_list_mismatch_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__dependencies__report_assoc_list_mismatch_4_p_0(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word AssocListA_5,
  MR_Word AssocListB_6,
  MR_Word STATE_VARIABLE_Msgs_0_11,
  MR_Word * STATE_VARIABLE_Msgs_12);

static void MR_CALL 
make__dependencies__report_list_mismatch_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__dependencies__report_list_mismatch_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word ListA_5,
  MR_Word ListB_6,
  MR_Word STATE_VARIABLE_Msgs_0_8,
  MR_Word * STATE_VARIABLE_Msgs_9);

static MR_Word MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

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
make__dependencies__find_dep_spec_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleIndex_11,
  MR_Word DepSpec_12,
  MR_Word * Succeeded_13,
  MR_Word * DepFileIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
make__dependencies__fold_dep_spec_over_modules_stop_at_error_fi_12_p_0(
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word DepSpec_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_DepFileIndexSet_0_7,
  MR_Word * STATE_VARIABLE_DepFileIndexSet_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__new_get_intermod_imports_their_ancestors_and_012_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__dependencies__new_get_intermod_imports_their_ancestors_and_012_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * DepFileIndexSet_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__find_dep_specs_9_p_0(
  MR_Word Globals_1,
  MR_Word ModuleIndex_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
make__dependencies__acc_rev_dfmi_target_6_p_0(
  MR_Word TargetType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_DepFileIndexSet_0_13,
  MR_Word * STATE_VARIABLE_DepFileIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__dependencies__dfmi_targets_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__dependencies__dfmi_targets_5_p_0(
  MR_Word ModuleIndexSet_6,
  MR_Word TargetType_7,
  MR_Word * DepFileIndexSet_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

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
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

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
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_50_95_95_91_52_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
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
make__dependencies__find_module_foreign_imports_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Languages_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * ForeignModules_16,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
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
make__dependencies__find_module_foreign_imports_uncached_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__find_module_foreign_imports_uncached_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Languages_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * ForeignModules_16,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__dependencies__non_intermod_indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__dependencies__indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_51_95_95_91_51_93_95_48_12_p_0(
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
make__dependencies__intermod_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

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
make__dependencies__compiled_code_dependencies_3_p_0_20(
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
make__dependencies__compiled_code_dependencies_3_p_0_19(
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
make__dependencies__compiled_code_dependencies_3_p_0_18(
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
make__dependencies__compiled_code_dependencies_3_p_0_17(
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
make__dependencies__compiled_code_dependencies_3_p_0_16(
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
make__dependencies__compiled_code_dependencies_3_p_0_15(
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
make__dependencies__compiled_code_dependencies_3_p_0_14(
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
make__dependencies__compiled_code_dependencies_3_p_0_13(
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
make__dependencies__compiled_code_dependencies_3_p_0_12(
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
make__dependencies__compiled_code_dependencies_3_p_0_11(
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
make__dependencies__compiled_code_dependencies_3_p_0_10(
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
make__dependencies__compiled_code_dependencies_3_p_0_9(
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
make__dependencies__compiled_code_dependencies_3_p_0_8(
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
make__dependencies__compiled_code_dependencies_3_p_0_7(
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
make__dependencies__compiled_code_dependencies_3_p_0_6(
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
make__dependencies__compiled_code_dependencies_3_p_0_5(
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
make__dependencies__compiled_code_dependencies_3_p_0_4(
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
make__dependencies__compiled_code_dependencies_3_p_0_3(
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
make__dependencies__compiled_code_dependencies_3_p_0_2(
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
make__dependencies__compiled_code_dependencies_3_p_0_1(
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
make__dependencies__compiled_code_dependencies_3_p_0(
  MR_Word Globals_4,
  MR_Word * Deps_5,
  MR_Word * DepSpecs_6);

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
make__dependencies__imports_012_0_f_0_9(
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
make__dependencies__imports_012_0_f_0_8(
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
make__dependencies__imports_012_0_f_0_7(
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
make__dependencies__imports_012_0_f_0_6(
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
make__dependencies__imports_012_0_f_0_5(
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
make__dependencies__imports_012_0_f_0_4(
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
make__dependencies__imports_012_0_f_0_3(
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
make__dependencies__imports_012_0_f_0_2(
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
make__dependencies__imports_012_0_f_0_1(
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
make__dependencies__imports_012_0_f_0(void);

static void MR_CALL 
make__dependencies__interface_file_dependencies_2_p_0_11(
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
make__dependencies__interface_file_dependencies_2_p_0_10(
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
make__dependencies__interface_file_dependencies_2_p_0_9(
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
make__dependencies__interface_file_dependencies_2_p_0_8(
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
make__dependencies__interface_file_dependencies_2_p_0_7(
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
make__dependencies__interface_file_dependencies_2_p_0_6(
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
make__dependencies__interface_file_dependencies_2_p_0_5(
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
make__dependencies__interface_file_dependencies_2_p_0_4(
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
make__dependencies__interface_file_dependencies_2_p_0_3(
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
make__dependencies__interface_file_dependencies_2_p_0_2(
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
make__dependencies__interface_file_dependencies_2_p_0_1(
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
make__dependencies__interface_file_dependencies_2_p_0(
  MR_Word * Deps_3,
  MR_Word * DepSpecs_4);

static MR_bool MR_CALL 
make__dependencies____Unify____dep_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__dependencies____Compare____dep_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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


static /* final */ const MR_Box make__dependencies_scalar_common_1[83][2];

static /* final */ const MR_Box make__dependencies_scalar_common_2[1][10];

static /* final */ const MR_Box make__dependencies_scalar_common_3[37][3];

static /* final */ const MR_Box make__dependencies_scalar_common_4[10][1];

static /* final */ const MR_Box make__dependencies_scalar_common_5[3][11];

static /* final */ const MR_Box make__dependencies_scalar_common_6[3][13];

static /* final */ const MR_Box make__dependencies_scalar_common_7[23][5];

static /* final */ const MR_Integer make__dependencies_scalar_common_8[1][2];

static /* final */ const MR_Box make__dependencies_scalar_common_9[1][14];

static /* final */ const MR_Box make__dependencies_scalar_common_10[8][6];

static /* final */ const MR_Box make__dependencies_scalar_common_11[1][12];

static /* final */ const MR_Box make__dependencies_scalar_common_12[2][8];

static /* final */ const MR_Box make__dependencies_scalar_common_13[3][7];

static /* final */ const MR_Box make__dependencies_scalar_common_14[1][9];

static /* final */ const MR_Box make__dependencies_scalar_common_15[1][4];

static /* final */ const MR_Integer make__dependencies_scalar_common_16[1][3];




static /* final */ const MR_Box make__dependencies_scalar_common_1[83][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__dependency_file_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_import_or_include_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[3])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[4])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_4[5]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[4])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[4])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_4[7]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[7]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[8]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 28U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[9]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row  59 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  60 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0))
  },
  /* row  61 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies_scalar_common_3[5]))
  },
  /* row  62 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies_scalar_common_3[6]))
  },
  /* row  63 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies_scalar_common_3[1]))
  },
  /* row  64 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies_scalar_common_3[2]))
  },
  /* row  65 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  66 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies_scalar_common_3[3]))
  },
  /* row  67 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0))
  },
  /* row  68 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies_scalar_common_3[4]))
  },
  /* row  69 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[2])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[1])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[5])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_3[21])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[15])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[14])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[17])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[16])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[28])))
  },
  /* row  81 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[21])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[20])),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[81])))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_2[1][10] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies_scalar_common_1[0])),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_3[37][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies_scalar_common_3[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__imports_012_0_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__imports_012_0_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__imports_012_0_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[1])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[1])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[2])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[18])),
    ((MR_Box) (make__dependencies__fact_table_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_13[1])),
    ((MR_Box) (make__dependencies__new_get_intermod_imports_their_ancestors_and_012_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho8_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho9_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho10_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho14_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho15_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho16_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__of__ho17_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[2])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_95_95_91_49_93_95_48_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_4[10][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 44U)) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_4[4]))) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 32U)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 24U)) },
  /* row   9 */
  { ((MR_Box) ((MR_Unsigned) 28U)) },
};

static /* final */ const MR_Box make__dependencies_scalar_common_5[3][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
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
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__make_info__type_ctor_info_dependency_file_0)),
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
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
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
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
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
    ((MR_Box) (&make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_label_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
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
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_7[23][5] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[7]))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[8]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[9]))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_8)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[10]))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__imports_012_0_f_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[11]))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__imports_012_0_f_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[12]))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__imports_012_0_f_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[13]))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[1])),
    ((MR_Box) (make__dependencies__imports_012_0_f_0_9)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&make__dependencies_scalar_common_10[4]))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[14]))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[15]))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_3[16])),
    ((MR_Box) (&make__dependencies_scalar_common_3[15]))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[2])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__dependencies_scalar_common_3[17])),
    ((MR_Box) (&make__dependencies_scalar_common_3[15]))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[15]))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_11)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[18]))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_13)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[19]))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_15)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[20]))
  },
  /* row  16 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_18)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[22]))
  },
  /* row  17 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__compiled_code_dependencies_3_p_0_20)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[23]))
  },
  /* row  18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[34]))
  },
  /* row  20 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[35]))
  },
  /* row  21 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (&make__dependencies_scalar_common_3[36]))
  },
  /* row  22 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_6[1])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_9)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&make__dependencies_scalar_common_10[7]))
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
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_10[8][6] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_9)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[2])),
    ((MR_Box) (&make__dependencies_scalar_common_7[3]))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_10)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[1])),
    ((MR_Box) (&make__dependencies_scalar_common_10[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__interface_file_dependencies_2_p_0_11)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[0])),
    ((MR_Box) (&make__dependencies_scalar_common_10[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__imports_012_0_f_0_7)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[5])),
    ((MR_Box) (&make__dependencies_scalar_common_7[6]))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__imports_012_0_f_0_8)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[4])),
    ((MR_Box) (&make__dependencies_scalar_common_10[3]))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[20])),
    ((MR_Box) (&make__dependencies_scalar_common_7[21]))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_9[0])),
    ((MR_Box) (make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies_scalar_common_7[19])),
    ((MR_Box) (&make__dependencies_scalar_common_10[6]))
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
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
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
    ((MR_Box) (&make__dependencies_scalar_common_16[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&make__dependencies__pair__pti_pair_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&make__dependencies__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_13[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&make__dependencies_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&make__dependencies__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__dependencies__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_14[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_15[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_12[0])),
    ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 36U))
  },
};

static /* final */ const MR_Integer make__dependencies_scalar_common_16[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0) }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0) }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0) }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__dependencies__sparse_bitset__ti_sparse_bitset_1make__deps_set__type_ctor_info_dependency_file_index_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_make__make_info__type_ctor_info_dependency_file_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0) }
};

static const MR_FA_TypeInfo_Struct1 make__dependencies__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_dependency_file_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0) }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__plain_set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_dependency_file_0__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__dependencies__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_dependency_file_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__dependencies__pair__pti_pair_2__pseudo_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_0[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_0 = {
  (MR_String) "self",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  make__dependencies__make__dependencies__field_types_dep_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_1 = {
  (MR_String) "self_fact_table_files",
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

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_2 = {
  (MR_String) "self_foreign_include_files",
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

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_3[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_3 = {
  (MR_String) "ancestors",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  make__dependencies__make__dependencies__field_types_dep_spec_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_4[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_4 = {
  (MR_String) "direct_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  make__dependencies__make__dependencies__field_types_dep_spec_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_5[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_5 = {
  (MR_String) "indirect_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(5),
  make__dependencies__make__dependencies__field_types_dep_spec_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_6[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_6 = {
  (MR_String) "non_intermod_direct_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(6),
  make__dependencies__make__dependencies__field_types_dep_spec_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_7[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_7 = {
  (MR_String) "non_intermod_indirect_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(7),
  make__dependencies__make__dependencies__field_types_dep_spec_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_8[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8 = {
  (MR_String) "intermod_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(8),
  make__dependencies__make__dependencies__field_types_dep_spec_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_9[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_9 = {
  (MR_String) "foreign_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(9),
  make__dependencies__make__dependencies__field_types_dep_spec_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_10 = {
  (MR_String) "imports_012",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_11 = {
  (MR_String) "intermod_imports_their_ancestors_and_012",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_0[4] = {
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_1,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_2,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_10,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_11
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_1[1] = { &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_0 };

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_2[1] = { &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_3 };

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_3[6] = {
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_4,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_5,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_6,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_7,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_9
};

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_dep_spec_0[4] = {
  {
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_dep_spec_0[12] = {
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_3,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_4,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_9,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_10,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_5,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_11,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_6,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_7,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_0,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_1,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_2
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dep_spec_0[12] = {
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct make__dependencies__make__dependencies__type_ctor_info_dep_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__dependencies____Unify____dep_spec_0_0_10001)),
  ((MR_Box) (make__dependencies____Compare____dep_spec_0_0_10001)),
  (MR_String) "make.dependencies",
  (MR_String) "dep_spec",
  { make__dependencies__make__dependencies__du_name_ordered_dep_spec_0 },
  { make__dependencies__make__dependencies__du_ptag_ordered_dep_spec_0 },
  (MR_Integer) 12,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_dep_spec_0,

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
  { (MR_PseudoTypeInfo) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
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
  { (MR_PseudoTypeInfo) (&make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__fact_table_files__903__1_1_f_0(
  MR_String LambdaHeadVar__1_29)
{
  MR_Word LambdaHeadVar__2_30;

  {
    LambdaHeadVar__2_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_30, 0) = ((MR_Box) (LambdaHeadVar__1_29));
  }
  return LambdaHeadVar__2_30;
}

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__833__1_3_p_0(
  MR_Word Languages_12,
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34)
{
  MR_bool succeeded;
  MR_Word Lang_37 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_33, (MR_Integer) 0))) & (MR_Integer) 3);

  *LambdaHeadVar__2_34 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_33, (MR_Integer) 1))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_12, ((MR_Box) (Lang_37)));
  return succeeded;
}

static void MR_CALL 
make__dependencies__IntroducedFrom__pred__find_target_dependencies_of_module__242__1_8_p_0(
  MR_Word HeadVar__1_344,
  MR_Word HeadVar__2_345,
  MR_Word * HeadVar__3_346,
  MR_Word * HeadVar__4_347,
  MR_Word HeadVar__5_348,
  MR_Word * HeadVar__6_349)
{
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_95_95_50_52_50_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(HeadVar__3_346, HeadVar__4_347, HeadVar__5_348, HeadVar__6_349);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_95_95_50_52_50_95_95_49_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word * HeadVar__3_346,
  MR_Word * HeadVar__4_347,
  MR_Word HeadVar__5_348,
  MR_Word * HeadVar__6_349)
{
  *HeadVar__3_346 = (MR_Integer) 1;
  *HeadVar__4_347 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  *HeadVar__6_349 = HeadVar__5_348;
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

static void MR_CALL 
make__dependencies____Compare____dep_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_196 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_197 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_196 == CastY_197);
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_213 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_213, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_206 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_45 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_206, ArgY1_45);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_207 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_207, ArgY1_67);
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_209 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_209, ArgY1_89);
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_211 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgY1_111 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_211, ArgY1_111);
                      }
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_212 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ArgY1_133 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_212, ArgY1_133);
                      }
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_210 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ArgY1_155 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_210, ArgY1_155);
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_208 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ArgY1_177 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_208, ArgY1_177);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
make__dependencies____Unify____dep_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
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
          case (MR_Integer) 2:
            {
              MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_24 == CastX_23);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_26 == CastX_25);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_9, ArgY1_10);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_11, ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_13, ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_15, ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_17, ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_19, ArgY1_20);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_21, ArgY1_22);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
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
  MR_Word KeepGoing_19;
  MR_Word Succeeded1_20;
  MR_Word ModuleIndices_21;
  MR_Word STATE_VARIABLE_Info_28_28;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
  MR_Box conv4_Succeeded1_20;
  MR_Box conv3_ModuleIndices_21;
  MR_Box conv2_STATE_VARIABLE_Info_28_28;
  MR_Box conv1_STATE_VARIABLE_IO_29_29;

  KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_24);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_12, (MR_Integer) 1))));
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
    *DepIndices_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
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

    Var_30 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ModuleIndices_21);
    Var_32 = mercury__set__init_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0));
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_plain_union_mi_12_p_0(KeepGoing_19, FindFiles_11, Globals_13, Var_30, (MR_Integer) 1, &Succeeded2_22, Var_32, &FileNames_23, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_33_33);
    *Succeeded_15 = libs__maybe_util__and_2_f_0(Succeeded1_20, Succeeded2_22);
    Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), FileNames_23);
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
      mercury__set__union_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
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

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
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
make__dependencies__of_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_DepFileIndexSet_14;
  MR_Word conv5_STATE_VARIABLE_Info_16;

  make__dependencies__acc_rev_dfmi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_DepFileIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_DepFileIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__dependencies__of_2_10_p_0(
  MR_Word TargetType_11,
  MR_Word FindDeps_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * DepFileIndexSet_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word ModuleIndexes_19;
  MR_Word STATE_VARIABLE_Info_24_24;
  MR_Word Var_26;
  MR_Word Var_27;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_12, (MR_Integer) 1))));
  MR_Box conv4_Succeeded_15;
  MR_Box conv3_ModuleIndexes_19;
  MR_Box conv2_STATE_VARIABLE_Info_24_24;
  MR_Box conv1_STATE_VARIABLE_IO_23;
  MR_Box conv8_DepFileIndexSet_16;
  MR_Box conv7_STATE_VARIABLE_Info_21;

  func_0(((MR_Box) (FindDeps_12)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv4_Succeeded_15, &conv3_ModuleIndexes_19, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv2_STATE_VARIABLE_Info_24_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23);
  *Succeeded_15 = ((MR_Word) (conv4_Succeeded_15));
  ModuleIndexes_19 = ((MR_Word) (conv3_ModuleIndexes_19));
  STATE_VARIABLE_Info_24_24 = ((MR_Word) (conv2_STATE_VARIABLE_Info_24_24));
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (make__dependencies__of_2_10_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (TargetType_11));
  }
  Var_27 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  make__deps_set__deps_set_foldl2_6_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), Var_26, ModuleIndexes_19, ((MR_Box) (Var_27)), &conv8_DepFileIndexSet_16, ((MR_Box) (STATE_VARIABLE_Info_24_24)), &conv7_STATE_VARIABLE_Info_21);
  *DepFileIndexSet_16 = ((MR_Word) (conv8_DepFileIndexSet_16));
  *STATE_VARIABLE_Info_21 = ((MR_Word) (conv7_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__combine_deps_2_10_p_0(
  MR_Word TypeInfo_for_T_30,
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
    Var_29 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_27_27);
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
    *Succeeded_15 = libs__maybe_util__and_2_f_0(Succeeded1_19, Succeeded2_21);
    make__deps_set__deps_set_union_3_p_0(TypeInfo_for_T_30, Deps1_20, Deps2_22, Deps_16);
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
  MR_Word Cache0_19;
  MR_Word Key_20;
  MR_Word CachedResult_21;
  MR_Box conv0_CachedResult_21;

  Cache0_19 = make__make_info__make_info_get_cached_computed_module_deps_1_f_0(STATE_VARIABLE_Info_0_25);
  {
    Key_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Key_20, 0) = ((MR_Box) (ModuleIndex_14));
    MR_hl_field(0, Key_20, 1) = NULL;
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_key_0), (MR_Word) (&make__dependencies_scalar_common_1[7]), Cache0_19, ((MR_Box) (Key_20)), &conv0_CachedResult_21);
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

    func_1(((MR_Box) (FindDeps_12)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_14)), &conv5_Succeeded_15, &conv4_Deps_16, ((MR_Box) (STATE_VARIABLE_Info_0_25)), &conv3_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_28);
    *Succeeded_15 = ((MR_Word) (conv5_Succeeded_15));
    *Deps_16 = ((MR_Word) (conv4_Deps_16));
    STATE_VARIABLE_Info_29_29 = ((MR_Word) (conv3_STATE_VARIABLE_Info_29_29));
    Cache1_22 = make__make_info__make_info_get_cached_computed_module_deps_1_f_0(STATE_VARIABLE_Info_29_29);
    {
      Result_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_23, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_23, 1) = ((MR_Box) (*Deps_16));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_key_0), (MR_Word) (&make__dependencies_scalar_common_1[7]), ((MR_Box) (Key_20)), ((MR_Box) (Result_23)), Cache1_22, &Cache_24);
    make__make_info__make_info_set_cached_computed_module_deps_3_p_0(Cache_24, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26);
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
  *HeadVar__4_4 = mercury__sparse_bitset__make_singleton_set_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_10)));
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
  *HeadVar__4_4 = make__deps_set__deps_set_init_0_f_0(TypeInfo_for_T_17);
  *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
}

static void MR_CALL 
make__dependencies__report_assoc_list_element_3_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Msgs_0_7,
  MR_Word * STATE_VARIABLE_Msgs_8)
{
  MR_Box K_4 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
  MR_Box V_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
  MR_String Var_9;
  MR_Word STATE_VARIABLE_Msgs_10_10;
  MR_String Var_11;
  MR_String Var_14;

  Var_9 = mercury__string__string_1_f_0(TypeInfo_for_K_15, K_4);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_9)), STATE_VARIABLE_Msgs_0_7, &STATE_VARIABLE_Msgs_10_10);
  Var_14 = mercury__string__string_1_f_0(TypeInfo_for_V_16, V_5);
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_14);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_11)), STATE_VARIABLE_Msgs_10_10, STATE_VARIABLE_Msgs_8);
}

static void MR_CALL 
make__dependencies__report_list_element_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Msgs_0_6,
  MR_Word * STATE_VARIABLE_Msgs_7)
{
  MR_String Var_8;

  Var_8 = mercury__string__string_1_f_0(TypeInfo_for_T_9, X_4);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_8)), STATE_VARIABLE_Msgs_0_6, STATE_VARIABLE_Msgs_7);
}

static void MR_CALL 
make__dependencies__index_get_ancestors_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word * AncestorModuleIndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word ModuleName_8;
  MR_Word AncestorModuleNames_9;

  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_10, ModuleIndex_5, &ModuleName_8);
  AncestorModuleNames_9 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_8);
  make__deps_set__module_names_to_index_set_4_p_0(AncestorModuleNames_9, AncestorModuleIndexSet_6, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
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
  MR_Word conv16_DepFileIndexSet_16;
  MR_Word conv15_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_Succeeded_15, &conv16_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv17_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv16_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_21));
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
  MR_Word conv12_STATE_VARIABLE_Info_22;

  make__dependencies__indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_11, &conv13_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv13_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_22));
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
  MR_Word conv10_DepFileIndexSet_16;
  MR_Word conv9_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_Succeeded_15, &conv10_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv11_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv10_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_21));
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
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
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word KeepGoing_15;
  MR_Word Succeeded1_16;
  MR_Word Modules1_17;
  MR_Word STATE_VARIABLE_Info_24_24;
  MR_Word KeepGoing_32;
  MR_Word Succeeded1_33;
  MR_Word Modules1_34;
  MR_Word STATE_VARIABLE_Info_23_36;

  KeepGoing_15 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_20);
  KeepGoing_32 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_20);
  make__dependencies__intermod_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded1_33, &Modules1_34, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_23_36);
  succeeded = (Succeeded1_33 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_32 == (MR_Integer) 0);
  if (succeeded)
  {
    Succeeded1_16 = (MR_Integer) 0;
    Modules1_17 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    STATE_VARIABLE_Info_24_24 = STATE_VARIABLE_Info_23_36;
  }
  else
  {
    MR_Word Succeeded2_35;
    MR_Word Var_39;
    MR_Word Var_41;

    Var_39 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), Modules1_34);
    Var_41 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_55_95_95_91_50_93_95_48_12_p_0(KeepGoing_32, Var_39, (MR_Integer) 1, &Succeeded2_35, Var_41, &Modules1_17, STATE_VARIABLE_Info_23_36, &STATE_VARIABLE_Info_24_24);
    Succeeded1_16 = libs__maybe_util__and_2_f_0(Succeeded1_33, Succeeded2_35);
  }
  succeeded = (Succeeded1_16 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_15 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_11 = (MR_Integer) 0;
    *Result_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_24_24;
  }
  else
  {
    MR_Word ModulesList1_18;
    MR_Word Succeeded2_19;
    MR_Word Var_28;

    ModulesList1_18 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), Modules1_17);
    Var_28 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_fi_12_p_0(KeepGoing_15, (MR_Word) (&make__dependencies_scalar_common_7[22]), Globals_9, ModulesList1_18, (MR_Integer) 1, &Succeeded2_19, Var_28, Result_12, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_21);
    *Succeeded_11 = libs__maybe_util__and_2_f_0(Succeeded1_16, Succeeded2_19);
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
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
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

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, (MR_Integer) 1);
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
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
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

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
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
      MR_Word STATE_VARIABLE_Deps_46_46;
      MR_Word STATE_VARIABLE_Info_47_47;

      make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_95_95_91_49_93_95_48_11_p_0(HeadVar__2_2, HeadVar__3_3, ModuleIndex_31, &NewSucceeded_37, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_46_46, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      succeeded = (NewSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_49_49;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_49_49 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = ModuleIndexes_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_49_49;
        next_value_of_STATE_VARIABLE_Deps_0_7 = STATE_VARIABLE_Deps_46_46;
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
        *STATE_VARIABLE_Deps_8 = STATE_VARIABLE_Deps_46_46;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_95_95_91_49_93_95_48_11_p_0_1(
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
  MR_Word conv17_HeadVar__3_346;
  MR_Word conv16_HeadVar__4_347;
  MR_Word conv15_HeadVar__6_349;

  make__dependencies__IntroducedFrom__pred__find_target_dependencies_of_module__242__1_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_HeadVar__3_346, &conv16_HeadVar__4_347, ((MR_Word) (wrapper_arg_5)), &conv15_HeadVar__6_349);
  *wrapper_arg_3 = ((MR_Box) (conv17_HeadVar__3_346));
  *wrapper_arg_4 = ((MR_Box) (conv16_HeadVar__4_347));
  *wrapper_arg_6 = ((MR_Box) (conv15_HeadVar__6_349));
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_116_97_114_103_101_116_95_100_101_112_101_110_100_101_110_99_105_101_115_95_111_102_95_109_111_100_117_108_101_95_95_91_49_93_95_48_11_p_0(
  MR_Word Globals_13,
  MR_Word TargetType_14,
  MR_Word ModuleIndex_15,
  MR_Word * NewSucceeded_16,
  MR_Word STATE_VARIABLE_Deps_0_48,
  MR_Word * STATE_VARIABLE_Deps_49,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TargetType_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 8:
          {
            *NewSucceeded_16 = (MR_Integer) 1;
            *STATE_VARIABLE_Deps_49 = STATE_VARIABLE_Deps_0_48;
            *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_0_50;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            MR_Word DepSpecs_233;
            MR_Word NewSucceededB_234;
            MR_Word NewDepsB_235;
            MR_Word InfoB_236;
            MR_Word InfoA_237;
            MR_Word NewSucceededA_238;
            MR_Word FindDeps_239;
            MR_Word NewDepsA_240;
            MR_Word NewDeps_241;
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv9_NewSucceededA_238;
            MR_Box conv8_NewDepsA_240;
            MR_Box conv7_InfoA_237;
            MR_Box conv6_STATE_VARIABLE_IO_53;

            make__dependencies__compiled_code_dependencies_3_p_0(Globals_13, &FindDeps_239, &DepSpecs_233);
            make__dependencies__find_dep_specs_9_p_0(Globals_13, ModuleIndex_15, DepSpecs_233, &NewSucceededB_234, &NewDepsB_235, STATE_VARIABLE_Info_0_50, &InfoB_236);
            func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_239, (MR_Integer) 1))));
            func_5(((MR_Box) (FindDeps_239)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_15)), &conv9_NewSucceededA_238, &conv8_NewDepsA_240, ((MR_Box) (STATE_VARIABLE_Info_0_50)), &conv7_InfoA_237, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_53);
            NewSucceededA_238 = ((MR_Word) (conv9_NewSucceededA_238));
            NewDepsA_240 = ((MR_Word) (conv8_NewDepsA_240));
            InfoA_237 = ((MR_Word) (conv7_InfoA_237));
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0(NewSucceededA_238, NewSucceededB_234, NewSucceeded_16, NewDepsA_240, NewDepsB_235, &NewDeps_241, InfoA_237, InfoB_236, STATE_VARIABLE_Info_51);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_241, STATE_VARIABLE_Deps_0_48, STATE_VARIABLE_Deps_49);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            MR_Word FindDeps_30;
            MR_Word NewDepsA_31;
            MR_Word NewDeps_32;
            MR_Word DepSpecs_226;
            MR_Word NewSucceededB_227;
            MR_Word NewDepsB_228;
            MR_Word InfoB_229;
            MR_Word InfoA_230;
            MR_Word NewSucceededA_231;
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv14_NewSucceededA_231;
            MR_Box conv13_NewDepsA_31;
            MR_Box conv12_InfoA_230;
            MR_Box conv11_STATE_VARIABLE_IO_53;

            make__dependencies__interface_file_dependencies_2_p_0(&FindDeps_30, &DepSpecs_226);
            make__dependencies__find_dep_specs_9_p_0(Globals_13, ModuleIndex_15, DepSpecs_226, &NewSucceededB_227, &NewDepsB_228, STATE_VARIABLE_Info_0_50, &InfoB_229);
            func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_30, (MR_Integer) 1))));
            func_10(((MR_Box) (FindDeps_30)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_15)), &conv14_NewSucceededA_231, &conv13_NewDepsA_31, ((MR_Box) (STATE_VARIABLE_Info_0_50)), &conv12_InfoA_230, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_53);
            NewSucceededA_231 = ((MR_Word) (conv14_NewSucceededA_231));
            NewDepsA_31 = ((MR_Word) (conv13_NewDepsA_31));
            InfoA_230 = ((MR_Word) (conv12_InfoA_230));
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0(NewSucceededA_231, NewSucceededB_227, NewSucceeded_16, NewDepsA_31, NewDepsB_228, &NewDeps_32, InfoA_230, InfoB_229, STATE_VARIABLE_Info_51);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_32, STATE_VARIABLE_Deps_0_48, STATE_VARIABLE_Deps_49);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word NewSucceededB_23;
            MR_Word NewDepsB_24;
            MR_Word InfoB_25;
            MR_Word DepsB_26;
            MR_Word DepsA_27;
            MR_Word InfoA_28;
            MR_Word Var_59;

            make__dependencies__find_dep_specs_9_p_0(Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[20])), &NewSucceededB_23, &NewDepsB_24, STATE_VARIABLE_Info_0_50, &InfoB_25);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDepsB_24, STATE_VARIABLE_Deps_0_48, &DepsB_26);
            {
              Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_59, 0) = ((MR_Box) (ModuleIndex_15));
              MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            make__dependencies__add_targets_of_modules_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 0U), Var_59, STATE_VARIABLE_Deps_0_48, &DepsA_27, STATE_VARIABLE_Info_0_50, &InfoA_28);
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0((MR_Integer) 1, NewSucceededB_23, NewSucceeded_16, DepsA_27, DepsB_26, STATE_VARIABLE_Deps_49, InfoA_28, InfoB_25, STATE_VARIABLE_Info_51);
          }
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 13:
          {
            MR_Word Deps2A_46;
            MR_Word Info2A_47;
            MR_Word Var_158;
            MR_Word Var_161;
            MR_Word Var_162;
            MR_Word Var_165;
            MR_Word Var_166;
            MR_Word NewSucceededB_279;
            MR_Word NewDepsB_280;
            MR_Word InfoB_281;
            MR_Word DepsB_282;
            MR_Word DepsA_283;
            MR_Word InfoA_284;
            MR_Word NewSucceededA_285;
            MR_Word FindDeps_286;
            MR_Word NewDepsA_287;
            MR_Word Deps1A_288;
            MR_Word Info1A_289;
            void MR_CALL (* func_23)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv27_NewSucceededA_285;
            MR_Box conv26_NewDepsA_287;
            MR_Box conv25_InfoA_284;
            MR_Box conv24_STATE_VARIABLE_IO_53;

            make__dependencies__find_dep_specs_9_p_0(Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[33])), &NewSucceededB_279, &NewDepsB_280, STATE_VARIABLE_Info_0_50, &InfoB_281);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDepsB_280, STATE_VARIABLE_Deps_0_48, &DepsB_282);
            {
              Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_158, 0) = ((MR_Box) (ModuleIndex_15));
              MR_hl_field(1, Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            make__dependencies__add_targets_of_modules_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 0U), Var_158, STATE_VARIABLE_Deps_0_48, &Deps1A_288, STATE_VARIABLE_Info_0_50, &Info1A_289);
            make__dependencies__add_targets_of_ancestors_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 8U), ModuleIndex_15, Deps1A_288, &Deps2A_46, Info1A_289, &Info2A_47);
            Var_162 = make__dependencies__of__ho16_2_f_0((MR_Word) ((MR_Unsigned) 12U));
            Var_166 = make__dependencies__of__ho15_2_f_0((MR_Word) ((MR_Unsigned) 16U));
            {
              Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
              MR_hl_field(1, Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
              MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_165));
            }
            FindDeps_286 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_161);
            func_23 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_286, (MR_Integer) 1))));
            func_23(((MR_Box) (FindDeps_286)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_15)), &conv27_NewSucceededA_285, &conv26_NewDepsA_287, ((MR_Box) (Info2A_47)), &conv25_InfoA_284, ((MR_Box) ((MR_Integer) 0)), &conv24_STATE_VARIABLE_IO_53);
            NewSucceededA_285 = ((MR_Word) (conv27_NewSucceededA_285));
            NewDepsA_287 = ((MR_Word) (conv26_NewDepsA_287));
            InfoA_284 = ((MR_Word) (conv25_InfoA_284));
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDepsA_287, Deps2A_46, &DepsA_283);
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0(NewSucceededA_285, NewSucceededB_279, NewSucceeded_16, DepsA_283, DepsB_282, STATE_VARIABLE_Deps_49, InfoA_284, InfoB_281, STATE_VARIABLE_Info_51);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_197;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_204;
            MR_Word Var_205;
            MR_Word Var_208;
            MR_Word Var_209;
            MR_Word Var_212;
            MR_Word Var_213;
            MR_Word Var_216;
            MR_Word Var_217;
            MR_Word NewSucceededB_293;
            MR_Word NewDepsB_294;
            MR_Word InfoB_295;
            MR_Word DepsB_296;
            MR_Word DepsA_297;
            MR_Word InfoA_298;
            MR_Word NewSucceededA_299;
            MR_Word FindDeps_300;
            MR_Word NewDepsA_301;
            MR_Word Deps1A_302;
            MR_Word Info1A_303;
            MR_Word Deps2A_304;
            MR_Word Info2A_305;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
            MR_Box conv4_NewSucceededA_299;
            MR_Box conv3_NewDepsA_301;
            MR_Box conv2_InfoA_298;
            MR_Box conv1_STATE_VARIABLE_IO_53;

            make__dependencies__find_dep_specs_9_p_0(Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[19])), &NewSucceededB_293, &NewDepsB_294, STATE_VARIABLE_Info_0_50, &InfoB_295);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDepsB_294, STATE_VARIABLE_Deps_0_48, &DepsB_296);
            {
              Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_197, 0) = ((MR_Box) (ModuleIndex_15));
              MR_hl_field(1, Var_197, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            make__dependencies__add_targets_of_modules_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 0U), Var_197, STATE_VARIABLE_Deps_0_48, &Deps1A_302, STATE_VARIABLE_Info_0_50, &Info1A_303);
            make__dependencies__add_targets_of_ancestors_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 8U), ModuleIndex_15, Deps1A_302, &Deps2A_304, Info1A_303, &Info2A_305);
            Var_201 = make__dependencies__of__ho16_2_f_0((MR_Word) ((MR_Unsigned) 12U));
            Var_205 = make__dependencies__of__ho15_2_f_0((MR_Word) ((MR_Unsigned) 16U));
            Var_209 = make__dependencies__of__ho9_2_f_0((MR_Word) ((MR_Unsigned) 24U));
            Var_213 = make__dependencies__of__ho8_2_f_0((MR_Word) ((MR_Unsigned) 24U));
            Var_217 = make__dependencies__of__ho14_2_f_0((MR_Word) ((MR_Unsigned) 24U));
            {
              Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_216, 0) = ((MR_Box) (Var_217));
              MR_hl_field(1, Var_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_212, 0) = ((MR_Box) (Var_213));
              MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_216));
            }
            {
              Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_208, 0) = ((MR_Box) (Var_209));
              MR_hl_field(1, Var_208, 1) = ((MR_Box) (Var_212));
            }
            {
              Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_204, 0) = ((MR_Box) (Var_205));
              MR_hl_field(1, Var_204, 1) = ((MR_Box) (Var_208));
            }
            {
              Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_200, 0) = ((MR_Box) (Var_201));
              MR_hl_field(1, Var_200, 1) = ((MR_Box) (Var_204));
            }
            FindDeps_300 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_200);
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_300, (MR_Integer) 1))));
            func_0(((MR_Box) (FindDeps_300)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_15)), &conv4_NewSucceededA_299, &conv3_NewDepsA_301, ((MR_Box) (Info2A_305)), &conv2_InfoA_298, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_53);
            NewSucceededA_299 = ((MR_Word) (conv4_NewSucceededA_299));
            NewDepsA_301 = ((MR_Word) (conv3_NewDepsA_301));
            InfoA_298 = ((MR_Word) (conv2_InfoA_298));
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDepsA_301, Deps2A_304, &DepsA_297);
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0(NewSucceededA_299, NewSucceededB_293, NewSucceeded_16, DepsA_297, DepsB_296, STATE_VARIABLE_Deps_49, InfoA_298, InfoB_295, STATE_VARIABLE_Info_51);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word Var_77;
            MR_Word NewSucceededB_244;
            MR_Word NewDepsB_245;
            MR_Word InfoB_246;
            MR_Word DepsB_247;
            MR_Word DepsA_248;
            MR_Word InfoA_249;

            make__dependencies__find_dep_spec_9_p_0(Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[2])), &NewSucceededB_244, &NewDepsB_245, STATE_VARIABLE_Info_0_50, &InfoB_246);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), STATE_VARIABLE_Deps_0_48, NewDepsB_245, &DepsB_247);
            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (ModuleIndex_15));
              MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            make__dependencies__add_targets_of_modules_as_deps_6_p_0((MR_Word) ((MR_Unsigned) 44U), Var_77, STATE_VARIABLE_Deps_0_48, &DepsA_248, STATE_VARIABLE_Info_0_50, &InfoA_249);
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0((MR_Integer) 1, NewSucceededB_244, NewSucceeded_16, DepsA_248, DepsB_247, STATE_VARIABLE_Deps_49, InfoA_249, InfoB_246, STATE_VARIABLE_Info_51);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DepSpecs_233;
        MR_Word NewSucceededB_234;
        MR_Word NewDepsB_235;
        MR_Word InfoB_236;
        MR_Word InfoA_237;
        MR_Word NewSucceededA_238;
        MR_Word FindDeps_239;
        MR_Word NewDepsA_240;
        MR_Word NewDeps_241;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Box conv9_NewSucceededA_238;
        MR_Box conv8_NewDepsA_240;
        MR_Box conv7_InfoA_237;
        MR_Box conv6_STATE_VARIABLE_IO_53;

        make__dependencies__compiled_code_dependencies_3_p_0(Globals_13, &FindDeps_239, &DepSpecs_233);
        make__dependencies__find_dep_specs_9_p_0(Globals_13, ModuleIndex_15, DepSpecs_233, &NewSucceededB_234, &NewDepsB_235, STATE_VARIABLE_Info_0_50, &InfoB_236);
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_239, (MR_Integer) 1))));
        func_5(((MR_Box) (FindDeps_239)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_15)), &conv9_NewSucceededA_238, &conv8_NewDepsA_240, ((MR_Box) (STATE_VARIABLE_Info_0_50)), &conv7_InfoA_237, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_53);
        NewSucceededA_238 = ((MR_Word) (conv9_NewSucceededA_238));
        NewDepsA_240 = ((MR_Word) (conv8_NewDepsA_240));
        InfoA_237 = ((MR_Word) (conv7_InfoA_237));
        make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0(NewSucceededA_238, NewSucceededB_234, NewSucceeded_16, NewDepsA_240, NewDepsB_235, &NewDeps_241, InfoA_237, InfoB_236, STATE_VARIABLE_Info_51);
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_241, STATE_VARIABLE_Deps_0_48, STATE_VARIABLE_Deps_49);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HighLevelCode_40;
        MR_Word DepSpecSelf_41;
        MR_Word Deps1A_43;
        MR_Word Info1A_44;
        MR_Word HeaderDeps_45;
        MR_Word Var_110;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_138;
        MR_Word DepSpecs_263;
        MR_Word NewSucceededB_264;
        MR_Word NewDepsB_265;
        MR_Word InfoB_266;
        MR_Word DepsB_267;
        MR_Word DepsA_268;
        MR_Word InfoA_269;
        MR_Word NewSucceededA_270;
        MR_Word FindDeps_271;
        MR_Word NewDepsA_272;
        MR_Word CompilationTarget_274;
        MR_Word TargetCodeType_275;
        void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
        MR_Box conv22_NewSucceededA_270;
        MR_Box conv21_NewDepsA_272;
        MR_Box conv20_InfoA_269;
        MR_Box conv19_STATE_VARIABLE_IO_53;

        libs__globals__get_target_2_p_0(Globals_13, &CompilationTarget_274);
        TargetCodeType_275 = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0();
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 311, &HighLevelCode_40);
        {
          DepSpecSelf_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DepSpecSelf_41, 0) = ((MR_Box) (TargetCodeType_275));
        }
        succeeded = (CompilationTarget_274 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (HighLevelCode_40 == (MR_Integer) 1);
        if (succeeded)
          {
            DepSpecs_263 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DepSpecs_263, 0) = ((MR_Box) (DepSpecSelf_41));
            MR_hl_field(1, DepSpecs_263, 1) = ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[80])));
          }
        else
          {
            DepSpecs_263 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DepSpecs_263, 0) = ((MR_Box) (DepSpecSelf_41));
            MR_hl_field(1, DepSpecs_263, 1) = ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[29])));
          }
        make__dependencies__find_dep_specs_9_p_0(Globals_13, ModuleIndex_15, DepSpecs_263, &NewSucceededB_264, &NewDepsB_265, STATE_VARIABLE_Info_0_50, &InfoB_266);
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDepsB_265, STATE_VARIABLE_Deps_0_48, &DepsB_267);
        {
          Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_110, 0) = ((MR_Box) (ModuleIndex_15));
          MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        make__dependencies__add_targets_of_modules_as_deps_6_p_0(TargetCodeType_275, Var_110, STATE_VARIABLE_Deps_0_48, &Deps1A_43, STATE_VARIABLE_Info_0_50, &Info1A_44);
        succeeded = (CompilationTarget_274 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (HighLevelCode_40 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word Var_112;
          MR_Word Var_113;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_127;
          MR_Word Var_128;

          Var_113 = make__dependencies__of__ho9_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[4])));
          Var_118 = make__dependencies__of__ho8_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[4])));
          Var_123 = make__dependencies__of__ho10_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[4])));
          Var_128 = make__dependencies__of__ho14_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[4])));
          {
            Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_128));
            MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
            MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_127));
          }
          {
            Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
            MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_122));
          }
          {
            Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
            MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_117));
          }
          HeaderDeps_45 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_112);
        }
        else
          HeaderDeps_45 = (MR_Word) (&make__dependencies_scalar_common_3[33]);
        Var_134 = make__dependencies__of__ho17_2_f_0((MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_4[3])));
        {
          Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_138, 0) = ((MR_Box) (HeaderDeps_45));
          MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
          MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_138));
        }
        FindDeps_271 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_133);
        func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindDeps_271, (MR_Integer) 1))));
        func_18(((MR_Box) (FindDeps_271)), ((MR_Box) (Globals_13)), ((MR_Box) (ModuleIndex_15)), &conv22_NewSucceededA_270, &conv21_NewDepsA_272, ((MR_Box) (Info1A_44)), &conv20_InfoA_269, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_53);
        NewSucceededA_270 = ((MR_Word) (conv22_NewSucceededA_270));
        NewDepsA_272 = ((MR_Word) (conv21_NewDepsA_272));
        InfoA_269 = ((MR_Word) (conv20_InfoA_269));
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDepsA_272, Deps1A_43, &DepsA_268);
        make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0(NewSucceededA_270, NewSucceededB_264, NewSucceeded_16, DepsA_268, DepsB_267, STATE_VARIABLE_Deps_49, InfoA_269, InfoB_266, STATE_VARIABLE_Info_51);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TargetType_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TargetCodeType_421;
            MR_Word NewSucceededB_425;
            MR_Word NewDepsB_426;
            MR_Word InfoB_427;
            MR_Word DepsB_428;
            MR_Word DepsA_429;
            MR_Word InfoA_430;
            MR_Word DepSpec_432;
            MR_Word CompilationTarget_420;

            libs__globals__get_target_2_p_0(Globals_13, &CompilationTarget_420);
            TargetCodeType_421 = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0();
            {
              DepSpec_432 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DepSpec_432, 0) = ((MR_Box) (TargetCodeType_421));
            }
            make__dependencies__find_dep_spec_9_p_0(Globals_13, ModuleIndex_15, DepSpec_432, &NewSucceededB_425, &NewDepsB_426, STATE_VARIABLE_Info_0_50, &InfoB_427);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), STATE_VARIABLE_Deps_0_48, NewDepsB_426, &DepsB_428);
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0(Globals_13, ModuleIndex_15, STATE_VARIABLE_Deps_0_48, &DepsA_429, STATE_VARIABLE_Info_0_50, &InfoA_430);
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0((MR_Integer) 1, NewSucceededB_425, NewSucceeded_16, DepsA_429, DepsB_428, STATE_VARIABLE_Deps_49, InfoA_430, InfoB_427, STATE_VARIABLE_Info_51);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TargetCodeType_39;
            MR_Word NewSucceededB_253;
            MR_Word NewDepsB_254;
            MR_Word InfoB_255;
            MR_Word DepsB_256;
            MR_Word DepsA_257;
            MR_Word InfoA_258;
            MR_Word DepSpec_260;
            MR_Word CompilationTarget_38;

            libs__globals__get_target_2_p_0(Globals_13, &CompilationTarget_38);
            TargetCodeType_39 = make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0();
            {
              DepSpec_260 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DepSpec_260, 0) = ((MR_Box) (TargetCodeType_39));
            }
            make__dependencies__find_dep_spec_9_p_0(Globals_13, ModuleIndex_15, DepSpec_260, &NewSucceededB_253, &NewDepsB_254, STATE_VARIABLE_Info_0_50, &InfoB_255);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), STATE_VARIABLE_Deps_0_48, NewDepsB_254, &DepsB_256);
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_109_112_105_108_97_116_105_111_110_95_116_97_114_103_101_116_115_95_111_102_95_109_111_100_117_108_101_95_97_115_95_100_101_112_115_95_95_91_50_93_95_48_7_p_0(Globals_13, ModuleIndex_15, STATE_VARIABLE_Deps_0_48, &DepsA_257, STATE_VARIABLE_Info_0_50, &InfoA_258);
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0((MR_Integer) 1, NewSucceededB_253, NewSucceeded_16, DepsA_257, DepsB_256, STATE_VARIABLE_Deps_49, InfoA_258, InfoB_255, STATE_VARIABLE_Info_51);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_118_95_115_116_97_116_101_115_95_95_91_49_93_95_48_10_p_0(
  MR_Word SucceededA_12,
  MR_Word SucceededB_13,
  MR_Word * Succeeded_14,
  MR_Word DepsA_15,
  MR_Word DepsB_16,
  MR_Word * Deps_17,
  MR_Word InfoA_18,
  MR_Word InfoB_19,
  MR_Word * Info_20)
{
  MR_bool succeeded;
  MR_Word DepsALA_22;
  MR_Word DepsALB_23;
  MR_Word OptionArgsA_24;
  MR_Word OptionArgsB_25;
  MR_Word CmdLineTargetSetA_26;
  MR_Word CmdLineTargetSetB_27;
  MR_Word CmdLineTargetsA_28;
  MR_Word CmdLineTargetsB_29;
  MR_Word RebuildDepsA_30;
  MR_Word RebuildDepsB_31;
  MR_Integer ReanalysisPassesA_32;
  MR_Integer ReanalysisPassesB_33;
  MR_Word ModuleDepsMapA_34;
  MR_Word ModuleDepsMapB_35;
  MR_Word ModuleDepsALA_36;
  MR_Word ModuleDepsALB_37;
  MR_Word FileTimestampsMapA_38;
  MR_Word FileTimestampsMapB_39;
  MR_Word FileTimestampsA_40;
  MR_Word FileTimestampsB_41;
  MR_Word TargetFileTimestampHashA_42;
  MR_Word TargetFileTimestampHashB_43;
  MR_Word TargetFileTimestampsA_44;
  MR_Word TargetFileTimestampsB_45;
  MR_Word SortedTargetFileTimestampsA_46;
  MR_Word SortedTargetFileTimestampsB_47;
  MR_Word ModuleIndexMapA_48;
  MR_Word ModuleIndexMapB_49;
  MR_Word ModuleForwardHashA_50;
  MR_Box ModuleReverseA_51;
  MR_Unsigned ModuleCntA_52;
  MR_Word ModuleForwardHashB_53;
  MR_Box ModuleReverseB_54;
  MR_Unsigned ModuleCntB_55;
  MR_Word ModuleForwardALA_56;
  MR_Word ModuleForwardALB_57;
  MR_Word SortedModuleForwardALA_58;
  MR_Word SortedModuleForwardALB_59;
  MR_Word ModuleReverseListA_60;
  MR_Word ModuleReverseListB_61;
  MR_Word SortedModuleReverseListA_62;
  MR_Word SortedModuleReverseListB_63;
  MR_Word DepIndexMapA_64;
  MR_Word DepIndexMapB_65;
  MR_Word DepForwardHashA_66;
  MR_Box DepReverseA_67;
  MR_Unsigned DepCntA_68;
  MR_Word DepForwardHashB_69;
  MR_Box DepReverseB_70;
  MR_Unsigned DepCntB_71;
  MR_Word DepForwardALA_72;
  MR_Word DepForwardALB_73;
  MR_Word SortedDepForwardALA_74;
  MR_Word SortedDepForwardALB_75;
  MR_Word DepReverseListA_76;
  MR_Word DepReverseListB_77;
  MR_Word SortedDepReverseListA_78;
  MR_Word SortedDepReverseListB_79;
  MR_Word DepStatusHashA_80;
  MR_Word DepStatusHashB_81;
  MR_Word DepStatusALA_82;
  MR_Word DepStatusALB_83;
  MR_Word SortedDepStatusALA_84;
  MR_Word SortedDepStatusALB_85;
  MR_Word ErrorModuleSetA_86;
  MR_Word ErrorModuleSetB_87;
  MR_Word ErrorModulesA_88;
  MR_Word ErrorModulesB_89;
  MR_Word ImportingModuleA_90;
  MR_Word ImportingModuleB_91;
  MR_Word STATE_VARIABLE_Msgs_94_94;
  MR_Word STATE_VARIABLE_Msgs_100_100;
  MR_Word STATE_VARIABLE_Msgs_103_103;
  MR_Word STATE_VARIABLE_Msgs_106_106;
  MR_Word STATE_VARIABLE_Msgs_109_109;
  MR_Word STATE_VARIABLE_Msgs_115_115;
  MR_Word STATE_VARIABLE_Msgs_121_121;
  MR_Word STATE_VARIABLE_Msgs_124_124;
  MR_Word STATE_VARIABLE_Msgs_127_127;
  MR_Word STATE_VARIABLE_Msgs_130_130;
  MR_Word STATE_VARIABLE_Msgs_136_136;
  MR_Word STATE_VARIABLE_Msgs_139_139;
  MR_Word STATE_VARIABLE_Msgs_142_142;
  MR_Word STATE_VARIABLE_Msgs_148_148;
  MR_Word STATE_VARIABLE_Msgs_151_151;
  MR_Word STATE_VARIABLE_Msgs_154_154;
  MR_Word STATE_VARIABLE_Msgs_157_157;
  MR_Word STATE_VARIABLE_Msgs_160_160;
  MR_Word STATE_VARIABLE_Msgs_166_166;

  STATE_VARIABLE_Msgs_94_94 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  succeeded = (SucceededA_12 == SucceededB_13);
  if (succeeded)
    STATE_VARIABLE_Msgs_100_100 = STATE_VARIABLE_Msgs_94_94;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_96_96;
    MR_String Var_97;
    MR_Word STATE_VARIABLE_Msgs_98_98;
    MR_String Var_99;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "succeeded mismatch")), STATE_VARIABLE_Msgs_94_94, &STATE_VARIABLE_Msgs_96_96);
    Var_97 = mercury__string__string_1_f_0((MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), ((MR_Box) (SucceededA_12)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_97)), STATE_VARIABLE_Msgs_96_96, &STATE_VARIABLE_Msgs_98_98);
    Var_99 = mercury__string__string_1_f_0((MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), ((MR_Box) (SucceededB_13)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_99)), STATE_VARIABLE_Msgs_98_98, &STATE_VARIABLE_Msgs_100_100);
  }
  DepsALA_22 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[1]), DepsA_15);
  DepsALB_23 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[1]), DepsB_16);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[58]), ((MR_Box) (DepsALA_22)), ((MR_Box) (DepsALB_23)));
  if (succeeded)
    STATE_VARIABLE_Msgs_103_103 = STATE_VARIABLE_Msgs_100_100;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_102_102;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "deps mismatch")), STATE_VARIABLE_Msgs_100_100, &STATE_VARIABLE_Msgs_102_102);
    make__dependencies__report_list_mismatch_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), DepsALA_22, DepsALB_23, STATE_VARIABLE_Msgs_102_102, &STATE_VARIABLE_Msgs_103_103);
  }
  OptionArgsA_24 = make__make_info__make_info_get_option_args_1_f_0(InfoA_18);
  OptionArgsB_25 = make__make_info__make_info_get_option_args_1_f_0(InfoB_19);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[59]), ((MR_Box) (OptionArgsA_24)), ((MR_Box) (OptionArgsB_25)));
  if (succeeded)
    STATE_VARIABLE_Msgs_106_106 = STATE_VARIABLE_Msgs_103_103;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_105_105;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "option args mismatch")), STATE_VARIABLE_Msgs_103_103, &STATE_VARIABLE_Msgs_105_105);
    make__dependencies__report_list_mismatch_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionArgsA_24, OptionArgsB_25, STATE_VARIABLE_Msgs_105_105, &STATE_VARIABLE_Msgs_106_106);
  }
  CmdLineTargetSetA_26 = make__make_info__make_info_get_command_line_targets_1_f_0(InfoA_18);
  CmdLineTargetSetB_27 = make__make_info__make_info_get_command_line_targets_1_f_0(InfoB_19);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), CmdLineTargetSetA_26, &CmdLineTargetsA_28);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), CmdLineTargetSetB_27, &CmdLineTargetsB_29);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[60]), ((MR_Box) (CmdLineTargetsA_28)), ((MR_Box) (CmdLineTargetsB_29)));
  if (succeeded)
    STATE_VARIABLE_Msgs_109_109 = STATE_VARIABLE_Msgs_106_106;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_108_108;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "command line targets mismatch")), STATE_VARIABLE_Msgs_106_106, &STATE_VARIABLE_Msgs_108_108);
    make__dependencies__report_list_mismatch_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), CmdLineTargetsA_28, CmdLineTargetsB_29, STATE_VARIABLE_Msgs_108_108, &STATE_VARIABLE_Msgs_109_109);
  }
  RebuildDepsA_30 = make__make_info__make_info_get_rebuild_module_deps_1_f_0(InfoA_18);
  RebuildDepsB_31 = make__make_info__make_info_get_rebuild_module_deps_1_f_0(InfoB_19);
  succeeded = (RebuildDepsA_30 == RebuildDepsB_31);
  if (succeeded)
    STATE_VARIABLE_Msgs_115_115 = STATE_VARIABLE_Msgs_109_109;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_111_111;
    MR_String Var_112;
    MR_Word STATE_VARIABLE_Msgs_113_113;
    MR_String Var_114;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "rebuild deps mismatch")), STATE_VARIABLE_Msgs_109_109, &STATE_VARIABLE_Msgs_111_111);
    Var_112 = mercury__string__string_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_rebuild_module_deps_0), ((MR_Box) (RebuildDepsA_30)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_112)), STATE_VARIABLE_Msgs_111_111, &STATE_VARIABLE_Msgs_113_113);
    Var_114 = mercury__string__string_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_rebuild_module_deps_0), ((MR_Box) (RebuildDepsB_31)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_114)), STATE_VARIABLE_Msgs_113_113, &STATE_VARIABLE_Msgs_115_115);
  }
  ReanalysisPassesA_32 = make__make_info__make_info_get_reanalysis_passes_1_f_0(InfoA_18);
  ReanalysisPassesB_33 = make__make_info__make_info_get_reanalysis_passes_1_f_0(InfoB_19);
  succeeded = (ReanalysisPassesA_32 == ReanalysisPassesB_33);
  if (succeeded)
    STATE_VARIABLE_Msgs_121_121 = STATE_VARIABLE_Msgs_115_115;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_117_117;
    MR_String Var_118;
    MR_Word STATE_VARIABLE_Msgs_119_119;
    MR_String Var_120;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "reanalysis passes mismatch")), STATE_VARIABLE_Msgs_115_115, &STATE_VARIABLE_Msgs_117_117);
    Var_118 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ReanalysisPassesA_32)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_118)), STATE_VARIABLE_Msgs_117_117, &STATE_VARIABLE_Msgs_119_119);
    Var_120 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ReanalysisPassesB_33)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_120)), STATE_VARIABLE_Msgs_119_119, &STATE_VARIABLE_Msgs_121_121);
  }
  ModuleDepsMapA_34 = make__make_info__make_info_get_module_dependencies_1_f_0(InfoA_18);
  ModuleDepsMapB_35 = make__make_info__make_info_get_module_dependencies_1_f_0(InfoB_19);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepsMapA_34, &ModuleDepsALA_36);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepsMapB_35, &ModuleDepsALB_37);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[61]), ((MR_Box) (ModuleDepsALA_36)), ((MR_Box) (ModuleDepsALB_37)));
  if (succeeded)
    STATE_VARIABLE_Msgs_124_124 = STATE_VARIABLE_Msgs_121_121;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_123_123;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "module dependencies mismatch")), STATE_VARIABLE_Msgs_121_121, &STATE_VARIABLE_Msgs_123_123);
    make__dependencies__report_assoc_list_mismatch_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepsALA_36, ModuleDepsALB_37, STATE_VARIABLE_Msgs_123_123, &STATE_VARIABLE_Msgs_124_124);
  }
  FileTimestampsMapA_38 = make__make_info__make_info_get_file_timestamps_1_f_0(InfoA_18);
  FileTimestampsMapB_39 = make__make_info__make_info_get_file_timestamps_1_f_0(InfoB_19);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies_scalar_common_3[0]), FileTimestampsMapA_38, &FileTimestampsA_40);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies_scalar_common_3[0]), FileTimestampsMapB_39, &FileTimestampsB_41);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[62]), ((MR_Box) (FileTimestampsA_40)), ((MR_Box) (FileTimestampsB_41)));
  if (succeeded)
    STATE_VARIABLE_Msgs_127_127 = STATE_VARIABLE_Msgs_124_124;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_126_126;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "file timestamps mismatch")), STATE_VARIABLE_Msgs_124_124, &STATE_VARIABLE_Msgs_126_126);
    make__dependencies__report_assoc_list_mismatch_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__dependencies_scalar_common_3[0]), FileTimestampsA_40, FileTimestampsB_41, STATE_VARIABLE_Msgs_126_126, &STATE_VARIABLE_Msgs_127_127);
  }
  TargetFileTimestampHashA_42 = make__make_info__make_info_get_target_file_timestamps_1_f_0(InfoA_18);
  TargetFileTimestampHashB_43 = make__make_info__make_info_get_target_file_timestamps_1_f_0(InfoB_19);
  TargetFileTimestampsA_44 = mercury__version_hash_table__to_assoc_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), TargetFileTimestampHashA_42);
  TargetFileTimestampsB_45 = mercury__version_hash_table__to_assoc_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), TargetFileTimestampHashB_43);
  mercury__list__sort_2_p_0((MR_Word) (&make__dependencies_scalar_common_3[1]), TargetFileTimestampsA_44, &SortedTargetFileTimestampsA_46);
  mercury__list__sort_2_p_0((MR_Word) (&make__dependencies_scalar_common_3[1]), TargetFileTimestampsB_45, &SortedTargetFileTimestampsB_47);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[63]), ((MR_Box) (SortedTargetFileTimestampsA_46)), ((MR_Box) (SortedTargetFileTimestampsB_47)));
  if (succeeded)
    STATE_VARIABLE_Msgs_130_130 = STATE_VARIABLE_Msgs_127_127;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_129_129;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "target file timestamps mismatch")), STATE_VARIABLE_Msgs_127_127, &STATE_VARIABLE_Msgs_129_129);
    make__dependencies__report_assoc_list_mismatch_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), SortedTargetFileTimestampsA_46, SortedTargetFileTimestampsB_47, STATE_VARIABLE_Msgs_129_129, &STATE_VARIABLE_Msgs_130_130);
  }
  ModuleIndexMapA_48 = make__make_info__make_info_get_module_index_map_1_f_0(InfoA_18);
  ModuleIndexMapB_49 = make__make_info__make_info_get_module_index_map_1_f_0(InfoB_19);
  ModuleForwardHashA_50 = ((MR_Word) ((MR_hl_field(0, ModuleIndexMapA_48, (MR_Integer) 0))));
  ModuleReverseA_51 = ((MR_Box) ((MR_hl_field(0, ModuleIndexMapA_48, (MR_Integer) 1))));
  ModuleCntA_52 = ((MR_Unsigned) ((MR_hl_field(0, ModuleIndexMapA_48, (MR_Integer) 2))));
  ModuleForwardHashB_53 = ((MR_Word) ((MR_hl_field(0, ModuleIndexMapB_49, (MR_Integer) 0))));
  ModuleReverseB_54 = ((MR_Box) ((MR_hl_field(0, ModuleIndexMapB_49, (MR_Integer) 1))));
  ModuleCntB_55 = ((MR_Unsigned) ((MR_hl_field(0, ModuleIndexMapB_49, (MR_Integer) 2))));
  succeeded = (ModuleCntA_52 == ModuleCntB_55);
  if (succeeded)
    STATE_VARIABLE_Msgs_136_136 = STATE_VARIABLE_Msgs_130_130;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_132_132;
    MR_String Var_133;
    MR_Word STATE_VARIABLE_Msgs_134_134;
    MR_String Var_135;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "module index count mismatch")), STATE_VARIABLE_Msgs_130_130, &STATE_VARIABLE_Msgs_132_132);
    Var_133 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (ModuleCntA_52)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_133)), STATE_VARIABLE_Msgs_132_132, &STATE_VARIABLE_Msgs_134_134);
    Var_135 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (ModuleCntB_55)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_135)), STATE_VARIABLE_Msgs_134_134, &STATE_VARIABLE_Msgs_136_136);
  }
  ModuleForwardALA_56 = mercury__version_hash_table__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ModuleForwardHashA_50);
  ModuleForwardALB_57 = mercury__version_hash_table__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ModuleForwardHashB_53);
  mercury__list__sort_2_p_0((MR_Word) (&make__dependencies_scalar_common_3[2]), ModuleForwardALA_56, &SortedModuleForwardALA_58);
  mercury__list__sort_2_p_0((MR_Word) (&make__dependencies_scalar_common_3[2]), ModuleForwardALB_57, &SortedModuleForwardALB_59);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[64]), ((MR_Box) (SortedModuleForwardALA_58)), ((MR_Box) (SortedModuleForwardALB_59)));
  if (succeeded)
    STATE_VARIABLE_Msgs_139_139 = STATE_VARIABLE_Msgs_136_136;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_138_138;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "module index forward mismatch")), STATE_VARIABLE_Msgs_136_136, &STATE_VARIABLE_Msgs_138_138);
    make__dependencies__report_assoc_list_mismatch_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), SortedModuleForwardALA_58, SortedModuleForwardALB_59, STATE_VARIABLE_Msgs_138_138, &STATE_VARIABLE_Msgs_139_139);
  }
  ModuleReverseListA_60 = mercury__version_array__to_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleReverseA_51);
  ModuleReverseListB_61 = mercury__version_array__to_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleReverseB_54);
  mercury__list__sort_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleReverseListA_60, &SortedModuleReverseListA_62);
  mercury__list__sort_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleReverseListB_61, &SortedModuleReverseListB_63);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[65]), ((MR_Box) (SortedModuleReverseListA_62)), ((MR_Box) (SortedModuleReverseListB_63)));
  if (succeeded)
    STATE_VARIABLE_Msgs_142_142 = STATE_VARIABLE_Msgs_139_139;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_141_141;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "module index reverse mismatch")), STATE_VARIABLE_Msgs_139_139, &STATE_VARIABLE_Msgs_141_141);
    make__dependencies__report_list_mismatch_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SortedModuleReverseListA_62, SortedModuleReverseListB_63, STATE_VARIABLE_Msgs_141_141, &STATE_VARIABLE_Msgs_142_142);
  }
  DepIndexMapA_64 = make__make_info__make_info_get_dep_file_index_map_1_f_0(InfoA_18);
  DepIndexMapB_65 = make__make_info__make_info_get_dep_file_index_map_1_f_0(InfoB_19);
  DepForwardHashA_66 = ((MR_Word) ((MR_hl_field(0, DepIndexMapA_64, (MR_Integer) 0))));
  DepReverseA_67 = ((MR_Box) ((MR_hl_field(0, DepIndexMapA_64, (MR_Integer) 1))));
  DepCntA_68 = ((MR_Unsigned) ((MR_hl_field(0, DepIndexMapA_64, (MR_Integer) 2))));
  DepForwardHashB_69 = ((MR_Word) ((MR_hl_field(0, DepIndexMapB_65, (MR_Integer) 0))));
  DepReverseB_70 = ((MR_Box) ((MR_hl_field(0, DepIndexMapB_65, (MR_Integer) 1))));
  DepCntB_71 = ((MR_Unsigned) ((MR_hl_field(0, DepIndexMapB_65, (MR_Integer) 2))));
  succeeded = (DepCntA_68 == DepCntB_71);
  if (succeeded)
    STATE_VARIABLE_Msgs_148_148 = STATE_VARIABLE_Msgs_142_142;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_144_144;
    MR_String Var_145;
    MR_Word STATE_VARIABLE_Msgs_146_146;
    MR_String Var_147;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "dep file index count mismatch")), STATE_VARIABLE_Msgs_142_142, &STATE_VARIABLE_Msgs_144_144);
    Var_145 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (DepCntA_68)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_145)), STATE_VARIABLE_Msgs_144_144, &STATE_VARIABLE_Msgs_146_146);
    Var_147 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (DepCntB_71)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_147)), STATE_VARIABLE_Msgs_146_146, &STATE_VARIABLE_Msgs_148_148);
  }
  DepForwardALA_72 = mercury__version_hash_table__to_assoc_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), DepForwardHashA_66);
  DepForwardALB_73 = mercury__version_hash_table__to_assoc_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), DepForwardHashB_69);
  mercury__list__sort_2_p_0((MR_Word) (&make__dependencies_scalar_common_3[3]), DepForwardALA_72, &SortedDepForwardALA_74);
  mercury__list__sort_2_p_0((MR_Word) (&make__dependencies_scalar_common_3[3]), DepForwardALB_73, &SortedDepForwardALB_75);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[66]), ((MR_Box) (SortedDepForwardALA_74)), ((MR_Box) (SortedDepForwardALB_75)));
  if (succeeded)
    STATE_VARIABLE_Msgs_151_151 = STATE_VARIABLE_Msgs_148_148;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_150_150;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "dep file index forward mismatch")), STATE_VARIABLE_Msgs_148_148, &STATE_VARIABLE_Msgs_150_150);
    make__dependencies__report_assoc_list_mismatch_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), SortedDepForwardALA_74, SortedDepForwardALB_75, STATE_VARIABLE_Msgs_150_150, &STATE_VARIABLE_Msgs_151_151);
  }
  DepReverseListA_76 = mercury__version_array__to_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), DepReverseA_67);
  DepReverseListB_77 = mercury__version_array__to_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), DepReverseB_70);
  mercury__list__sort_2_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), DepReverseListA_76, &SortedDepReverseListA_78);
  mercury__list__sort_2_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), DepReverseListB_77, &SortedDepReverseListB_79);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[67]), ((MR_Box) (SortedDepReverseListA_78)), ((MR_Box) (SortedDepReverseListB_79)));
  if (succeeded)
    STATE_VARIABLE_Msgs_154_154 = STATE_VARIABLE_Msgs_151_151;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_153_153;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "dep file index reverse mismatch")), STATE_VARIABLE_Msgs_151_151, &STATE_VARIABLE_Msgs_153_153);
    make__dependencies__report_list_mismatch_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), SortedDepReverseListA_78, SortedDepReverseListB_79, STATE_VARIABLE_Msgs_153_153, &STATE_VARIABLE_Msgs_154_154);
  }
  DepStatusHashA_80 = make__make_info__make_info_get_dependency_status_1_f_0(InfoA_18);
  DepStatusHashB_81 = make__make_info__make_info_get_dependency_status_1_f_0(InfoB_19);
  DepStatusALA_82 = mercury__version_hash_table__to_assoc_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepStatusHashA_80);
  DepStatusALB_83 = mercury__version_hash_table__to_assoc_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepStatusHashB_81);
  mercury__list__sort_2_p_0((MR_Word) (&make__dependencies_scalar_common_3[4]), DepStatusALA_82, &SortedDepStatusALA_84);
  mercury__list__sort_2_p_0((MR_Word) (&make__dependencies_scalar_common_3[4]), DepStatusALB_83, &SortedDepStatusALB_85);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[68]), ((MR_Box) (SortedDepStatusALA_84)), ((MR_Box) (SortedDepStatusALB_85)));
  if (succeeded)
    STATE_VARIABLE_Msgs_157_157 = STATE_VARIABLE_Msgs_154_154;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_156_156;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "dep status mismatch")), STATE_VARIABLE_Msgs_154_154, &STATE_VARIABLE_Msgs_156_156);
    make__dependencies__report_assoc_list_mismatch_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), SortedDepStatusALA_84, SortedDepStatusALB_85, STATE_VARIABLE_Msgs_156_156, &STATE_VARIABLE_Msgs_157_157);
  }
  ErrorModuleSetA_86 = make__make_info__make_info_get_error_file_modules_1_f_0(InfoA_18);
  ErrorModuleSetB_87 = make__make_info__make_info_get_error_file_modules_1_f_0(InfoB_19);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ErrorModuleSetA_86, &ErrorModulesA_88);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ErrorModuleSetB_87, &ErrorModulesB_89);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[65]), ((MR_Box) (ErrorModulesA_88)), ((MR_Box) (ErrorModulesB_89)));
  if (succeeded)
    STATE_VARIABLE_Msgs_160_160 = STATE_VARIABLE_Msgs_157_157;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_159_159;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "error file modules mismatch")), STATE_VARIABLE_Msgs_157_157, &STATE_VARIABLE_Msgs_159_159);
    make__dependencies__report_list_mismatch_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ErrorModulesA_88, ErrorModulesB_89, STATE_VARIABLE_Msgs_159_159, &STATE_VARIABLE_Msgs_160_160);
  }
  ImportingModuleA_90 = make__make_info__make_info_get_importing_module_1_f_0(InfoA_18);
  ImportingModuleB_91 = make__make_info__make_info_get_importing_module_1_f_0(InfoB_19);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__dependencies_scalar_common_1[5]), ((MR_Box) (ImportingModuleA_90)), ((MR_Box) (ImportingModuleB_91)));
  if (succeeded)
    STATE_VARIABLE_Msgs_166_166 = STATE_VARIABLE_Msgs_160_160;
  else
  {
    MR_Word STATE_VARIABLE_Msgs_162_162;
    MR_String Var_163;
    MR_Word STATE_VARIABLE_Msgs_164_164;
    MR_String Var_165;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "importing module mismatch")), STATE_VARIABLE_Msgs_160_160, &STATE_VARIABLE_Msgs_162_162);
    Var_163 = mercury__string__string_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), ((MR_Box) (ImportingModuleA_90)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_163)), STATE_VARIABLE_Msgs_162_162, &STATE_VARIABLE_Msgs_164_164);
    Var_165 = mercury__string__string_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[5]), ((MR_Box) (ImportingModuleB_91)));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_165)), STATE_VARIABLE_Msgs_164_164, &STATE_VARIABLE_Msgs_166_166);
  }
  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Msgs_166_166);
  if (succeeded)
  {
    *Succeeded_14 = SucceededB_13;
    *Deps_17 = DepsB_16;
    *Info_20 = InfoB_19;
  }
  else
  {
    *Succeeded_14 = SucceededB_13;
    *Deps_17 = DepsB_16;
    *Info_20 = InfoB_19;
  }
}

static void MR_CALL 
make__dependencies__report_assoc_list_mismatch_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Msgs_8;

  make__dependencies__report_assoc_list_element_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Msgs_8);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Msgs_8));
}

static void MR_CALL 
make__dependencies__report_assoc_list_mismatch_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Msgs_7;

  make__dependencies__report_list_element_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Msgs_7);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Msgs_7));
}

static void MR_CALL 
make__dependencies__report_assoc_list_mismatch_4_p_0(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_V_25,
  MR_Word AssocListA_5,
  MR_Word AssocListB_6,
  MR_Word STATE_VARIABLE_Msgs_0_11,
  MR_Word * STATE_VARIABLE_Msgs_12)
{
  MR_Word TypeInfo_35_35;
  MR_Word KeysBoth_8;
  MR_Word PairListOnlyA_9;
  MR_Word PairListOnlyB_10;
  MR_Word STATE_VARIABLE_Msgs_14_14;
  MR_Word Var_15;
  MR_Word STATE_VARIABLE_Msgs_16_16;
  MR_Word STATE_VARIABLE_Msgs_18_18;
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_Msgs_20_20;
  MR_Word STATE_VARIABLE_Msgs_22_22;
  MR_Word PairSetA_36;
  MR_Word PairSetB_37;
  MR_Word PairSetBoth_38;
  MR_Word KeySetBoth_39;
  MR_Word PairSetOnlyA_40;
  MR_Word PairSetOnlyB_41;
  MR_Word conv0_PairSetA_36;
  MR_Word conv1_PairSetB_37;
  MR_Word conv2_PairSetBoth_38;
  MR_Word conv3_KeySetBoth_39;
  MR_Word conv4_PairSetOnlyA_40;
  MR_Word conv5_PairSetOnlyB_41;
  MR_Word conv6_PairListOnlyA_9;
  MR_Word conv7_PairListOnlyB_10;
  MR_Box conv9_STATE_VARIABLE_Msgs_16_16;
  MR_Box conv11_STATE_VARIABLE_Msgs_20_20;
  MR_Box conv12_STATE_VARIABLE_Msgs_12;

  {
    TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_35_35, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_K_24));
    MR_hl_field(0, TypeInfo_35_35, 2) = ((MR_Box) (TypeInfo_for_V_25));
  }
  conv0_PairSetA_36 = mercury__set__from_sorted_list_1_f_0(TypeInfo_35_35, (MR_Word) (AssocListA_5));
  PairSetA_36 = (MR_Word) (conv0_PairSetA_36);
  conv1_PairSetB_37 = mercury__set__from_sorted_list_1_f_0(TypeInfo_35_35, (MR_Word) (AssocListB_6));
  PairSetB_37 = (MR_Word) (conv1_PairSetB_37);
  mercury__set__intersect_3_p_0(TypeInfo_35_35, (MR_Word) (PairSetA_36), (MR_Word) (PairSetB_37), &conv2_PairSetBoth_38);
  PairSetBoth_38 = (MR_Word) (conv2_PairSetBoth_38);
  mercury__set__to_sorted_list_2_p_0(TypeInfo_35_35, (MR_Word) (PairSetBoth_38), &conv3_KeySetBoth_39);
  KeySetBoth_39 = (MR_Word) (conv3_KeySetBoth_39);
  mercury__assoc_list__keys_2_p_0(TypeInfo_for_K_24, TypeInfo_for_V_25, KeySetBoth_39, &KeysBoth_8);
  mercury__set__difference_3_p_0(TypeInfo_35_35, (MR_Word) (PairSetA_36), (MR_Word) (PairSetBoth_38), &conv4_PairSetOnlyA_40);
  PairSetOnlyA_40 = (MR_Word) (conv4_PairSetOnlyA_40);
  mercury__set__difference_3_p_0(TypeInfo_35_35, (MR_Word) (PairSetB_37), (MR_Word) (PairSetBoth_38), &conv5_PairSetOnlyB_41);
  PairSetOnlyB_41 = (MR_Word) (conv5_PairSetOnlyB_41);
  mercury__set__to_sorted_list_2_p_0(TypeInfo_35_35, (MR_Word) (PairSetOnlyA_40), &conv6_PairListOnlyA_9);
  PairListOnlyA_9 = (MR_Word) (conv6_PairListOnlyA_9);
  mercury__set__to_sorted_list_2_p_0(TypeInfo_35_35, (MR_Word) (PairSetOnlyB_41), &conv7_PairListOnlyB_10);
  PairListOnlyB_10 = (MR_Word) (conv7_PairListOnlyB_10);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "common keys:")), STATE_VARIABLE_Msgs_0_11, &STATE_VARIABLE_Msgs_14_14);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&make__dependencies_scalar_common_13[2]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (make__dependencies__report_assoc_list_mismatch_4_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (TypeInfo_for_K_24));
  }
  mercury__list__foldl_4_p_0(TypeInfo_for_K_24, (MR_Word) (&make__dependencies_scalar_common_1[6]), Var_15, KeysBoth_8, ((MR_Box) (STATE_VARIABLE_Msgs_14_14)), &conv9_STATE_VARIABLE_Msgs_16_16);
  STATE_VARIABLE_Msgs_16_16 = ((MR_Word) (conv9_STATE_VARIABLE_Msgs_16_16));
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "version A only:")), STATE_VARIABLE_Msgs_16_16, &STATE_VARIABLE_Msgs_18_18);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[1]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (make__dependencies__report_assoc_list_mismatch_4_p_0_2));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (TypeInfo_for_K_24));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (TypeInfo_for_V_25));
  }
  mercury__list__foldl_4_p_0(TypeInfo_35_35, (MR_Word) (&make__dependencies_scalar_common_1[6]), (MR_Word) (Var_19), (MR_Word) (PairListOnlyA_9), ((MR_Box) (STATE_VARIABLE_Msgs_18_18)), &conv11_STATE_VARIABLE_Msgs_20_20);
  STATE_VARIABLE_Msgs_20_20 = ((MR_Word) (conv11_STATE_VARIABLE_Msgs_20_20));
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "version B only:")), STATE_VARIABLE_Msgs_20_20, &STATE_VARIABLE_Msgs_22_22);
  mercury__list__foldl_4_p_0(TypeInfo_35_35, (MR_Word) (&make__dependencies_scalar_common_1[6]), (MR_Word) (Var_19), (MR_Word) (PairListOnlyB_10), ((MR_Box) (STATE_VARIABLE_Msgs_22_22)), &conv12_STATE_VARIABLE_Msgs_12);
  *STATE_VARIABLE_Msgs_12 = ((MR_Word) (conv12_STATE_VARIABLE_Msgs_12));
}

static void MR_CALL 
make__dependencies__report_list_mismatch_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Msgs_7;

  make__dependencies__report_list_element_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Msgs_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Msgs_7));
}

static void MR_CALL 
make__dependencies__report_list_mismatch_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word ListA_5,
  MR_Word ListB_6,
  MR_Word STATE_VARIABLE_Msgs_0_8,
  MR_Word * STATE_VARIABLE_Msgs_9)
{
  MR_Word STATE_VARIABLE_Msgs_11_11;
  MR_Word Var_12;
  MR_Word STATE_VARIABLE_Msgs_13_13;
  MR_Word STATE_VARIABLE_Msgs_15_15;
  MR_Box conv1_STATE_VARIABLE_Msgs_13_13;
  MR_Box conv2_STATE_VARIABLE_Msgs_9;

  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "version A:")), STATE_VARIABLE_Msgs_0_8, &STATE_VARIABLE_Msgs_11_11);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&make__dependencies_scalar_common_13[2]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (make__dependencies__report_list_mismatch_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TypeInfo_for_T_17));
  }
  mercury__list__foldl_4_p_0(TypeInfo_for_T_17, (MR_Word) (&make__dependencies_scalar_common_1[6]), Var_12, ListA_5, ((MR_Box) (STATE_VARIABLE_Msgs_11_11)), &conv1_STATE_VARIABLE_Msgs_13_13);
  STATE_VARIABLE_Msgs_13_13 = ((MR_Word) (conv1_STATE_VARIABLE_Msgs_13_13));
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "version B:")), STATE_VARIABLE_Msgs_13_13, &STATE_VARIABLE_Msgs_15_15);
  mercury__list__foldl_4_p_0(TypeInfo_for_T_17, (MR_Word) (&make__dependencies_scalar_common_1[6]), Var_12, ListB_6, ((MR_Box) (STATE_VARIABLE_Msgs_15_15)), &conv2_STATE_VARIABLE_Msgs_9);
  *STATE_VARIABLE_Msgs_9 = ((MR_Word) (conv2_STATE_VARIABLE_Msgs_9));
}

static MR_Word MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_97_114_103_101_116_95_116_111_95_109_111_100_117_108_101_95_116_97_114_103_101_116_95_99_111_100_101_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 36U);
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
  mercury__list__map_foldl_5_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_15[0]), Var_19, &TargetFileIndexes_23, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv2_STATE_VARIABLE_Info_18);
  *STATE_VARIABLE_Info_18 = ((MR_Word) (conv2_STATE_VARIABLE_Info_18));
  Var_25 = make__deps_set__list_to_deps_set_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[1]), TargetFileIndexes_23);
  make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_25, STATE_VARIABLE_Deps_0_15, STATE_VARIABLE_Deps_16);
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
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
  MR_Word conv0_STATE_VARIABLE_Info_24;

  make__dependencies__foreign_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_24));
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
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_3[32]));
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
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
  MR_Word conv0_STATE_VARIABLE_Info_22;

  make__dependencies__non_intermod_direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_22));
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
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_3[31]));
  }
  return HeadVar__3_3;
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
  MR_Box closure = closure_arg;
  MR_Word conv5_Succeeded_15;
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
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
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_11;
  MR_Word conv1_Modules_12;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  make__dependencies__non_intermod_indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
}

static MR_Word MR_CALL 
make__dependencies__of__ho15_2_f_0(
  MR_Word FileType_4)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (&make__dependencies_scalar_common_6[0]));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (make__dependencies__of__ho15_2_f_0_2));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) (FileType_4));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_3[30]));
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
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
  MR_Word conv0_STATE_VARIABLE_Info_19;

  make__dependencies__intermod_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_19);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_19));
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
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_3[29]));
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
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
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_3[28]));
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
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
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_3[27]));
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
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
  MR_Word conv0_STATE_VARIABLE_Info_22;

  make__dependencies__indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_11, &conv1_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv1_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_22));
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
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) (&make__dependencies_scalar_common_3[26]));
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
  Var_19 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), AncestorModuleIndexSet_12);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&make__dependencies_scalar_common_12[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (make__dependencies__add_targets_of_ancestors_as_deps_6_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (TargetType_7));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_22, Var_19, &TargetFileIndexes_21, ((MR_Box) (STATE_VARIABLE_Info_18_18)), &conv2_STATE_VARIABLE_Info_16);
  *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
  Var_23 = make__deps_set__list_to_deps_set_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[1]), TargetFileIndexes_21);
  make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_23, STATE_VARIABLE_Deps_0_13, STATE_VARIABLE_Deps_14);
}

static void MR_CALL 
make__dependencies__find_dep_spec_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleIndex_11,
  MR_Word DepSpec_12,
  MR_Word * Succeeded_13,
  MR_Word * DepFileIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  switch (MR_tag((MR_Word) DepSpec_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(DepSpec_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FactTableDepFiles_22;
            MR_Word STATE_VARIABLE_Info_49_49;
            MR_Word Var_51;

            make__dependencies__fact_table_files_8_p_0(Globals_10, ModuleIndex_11, Succeeded_13, &FactTableDepFiles_22, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_49_49);
            Var_51 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), FactTableDepFiles_22);
            make__deps_set__dependency_files_to_index_set_4_p_0(Var_51, DepFileIndexSet_14, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_34);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignDepFiles_23;
            MR_Word STATE_VARIABLE_Info_53_53;
            MR_Word Var_55;

            make__dependencies__foreign_include_files_8_p_0(Globals_10, ModuleIndex_11, Succeeded_13, &ForeignDepFiles_23, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_53_53);
            Var_55 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), ForeignDepFiles_23);
            make__deps_set__dependency_files_to_index_set_4_p_0(Var_55, DepFileIndexSet_14, STATE_VARIABLE_Info_53_53, STATE_VARIABLE_Info_34);
          }
          break;
        case (MR_Integer) 2:
          make__dependencies__find_dep_specs_9_p_0(Globals_10, ModuleIndex_11, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[57])), Succeeded_13, DepFileIndexSet_14, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          break;
        case (MR_Integer) 3:
          make__dependencies__new_get_intermod_imports_their_ancestors_and_012_8_p_0(Globals_10, ModuleIndex_11, Succeeded_13, DepFileIndexSet_14, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TargetType_21 = ((MR_Word) ((MR_hl_field(1, DepSpec_12, (MR_Integer) 0))));
        MR_Word Var_47;

        *Succeeded_13 = (MR_Integer) 1;
        Var_47 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
        make__dependencies__acc_rev_dfmi_target_6_p_0(TargetType_21, ModuleIndex_11, Var_47, DepFileIndexSet_14, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_24;
        MR_Word Ancestors_25;
        MR_Word ModuleIndexSet_26;
        MR_Word STATE_VARIABLE_Info_57_57;
        MR_Word TargetType_158 = ((MR_Word) ((MR_hl_field(2, DepSpec_12, (MR_Integer) 0))));

        *Succeeded_13 = (MR_Integer) 1;
        make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_33, ModuleIndex_11, &ModuleName_24);
        Ancestors_25 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_24);
        make__deps_set__module_names_to_index_set_4_p_0(Ancestors_25, &ModuleIndexSet_26, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_57_57);
        make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_26, TargetType_158, DepFileIndexSet_14, STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_34);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DepSpec_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Info_59_59;
            MR_Word TargetType_159 = ((MR_Word) ((MR_hl_field(3, DepSpec_12, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_160;

            make__dependencies__direct_imports_8_p_0(Globals_10, ModuleIndex_11, Succeeded_13, &ModuleIndexSet_160, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_59_59);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_160, TargetType_159, DepFileIndexSet_14, STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_34);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_62_62;
            MR_Word TargetType_161 = ((MR_Word) ((MR_hl_field(3, DepSpec_12, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_162;

            make__dependencies__indirect_imports_8_p_0(Globals_10, ModuleIndex_11, Succeeded_13, &ModuleIndexSet_162, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_62_62);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_162, TargetType_161, DepFileIndexSet_14, STATE_VARIABLE_Info_62_62, STATE_VARIABLE_Info_34);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_Info_65_65;
            MR_Word TargetType_163 = ((MR_Word) ((MR_hl_field(3, DepSpec_12, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_164;

            make__dependencies__non_intermod_direct_imports_8_p_0(Globals_10, ModuleIndex_11, Succeeded_13, &ModuleIndexSet_164, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_65_65);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_164, TargetType_163, DepFileIndexSet_14, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_34);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_Info_68_68;
            MR_Word TargetType_165 = ((MR_Word) ((MR_hl_field(3, DepSpec_12, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_166;

            make__dependencies__non_intermod_indirect_imports_8_p_0(Globals_10, ModuleIndex_11, Succeeded_13, &ModuleIndexSet_166, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_68_68);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_166, TargetType_165, DepFileIndexSet_14, STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Info_34);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word STATE_VARIABLE_Info_71_71;
            MR_Word TargetType_167 = ((MR_Word) ((MR_hl_field(3, DepSpec_12, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_168;

            make__dependencies__intermod_imports_8_p_0(Globals_10, ModuleIndex_11, Succeeded_13, &ModuleIndexSet_168, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_71_71);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_168, TargetType_167, DepFileIndexSet_14, STATE_VARIABLE_Info_71_71, STATE_VARIABLE_Info_34);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word STATE_VARIABLE_Info_74_74;
            MR_Word TargetType_169 = ((MR_Word) ((MR_hl_field(3, DepSpec_12, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_170;

            make__dependencies__foreign_imports_8_p_0(Globals_10, ModuleIndex_11, Succeeded_13, &ModuleIndexSet_170, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_74_74);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_170, TargetType_169, DepFileIndexSet_14, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_34);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__fold_dep_spec_over_modules_stop_at_error_fi_12_p_0(
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word DepSpec_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_DepFileIndexSet_0_7,
  MR_Word * STATE_VARIABLE_DepFileIndexSet_8,
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
      *STATE_VARIABLE_DepFileIndexSet_8 = STATE_VARIABLE_DepFileIndexSet_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HeadSucceeded_37;
      MR_Word HeadDepFileIndexSet_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_DepFileIndexSet_49_49;

      make__dependencies__find_dep_spec_9_p_0(Globals_2, MI_31, DepSpec_3, &HeadSucceeded_37, &HeadDepFileIndexSet_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), HeadDepFileIndexSet_38, STATE_VARIABLE_DepFileIndexSet_0_7, &STATE_VARIABLE_DepFileIndexSet_49_49);
      succeeded = (HeadSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (KeepGoing_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_DepFileIndexSet_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, HeadSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_DepFileIndexSet_0_7 = STATE_VARIABLE_DepFileIndexSet_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_DepFileIndexSet_0_7 = next_value_of_STATE_VARIABLE_DepFileIndexSet_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_DepFileIndexSet_8 = STATE_VARIABLE_DepFileIndexSet_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__new_get_intermod_imports_their_ancestors_and_012_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_AncestorModuleIndexSet_6;
  MR_Word conv0_STATE_VARIABLE_Info_11;

  make__dependencies__index_get_ancestors_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_AncestorModuleIndexSet_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_11);
  *wrapper_arg_2 = ((MR_Box) (conv1_AncestorModuleIndexSet_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
make__dependencies__new_get_intermod_imports_their_ancestors_and_012_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * DepFileIndexSet_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word KeepGoing_15;
  MR_Word Succeeded1_16;
  MR_Word Modules1_17;
  MR_Word STATE_VARIABLE_Info_24_24;
  MR_Word KeepGoing_32;
  MR_Word Succeeded1_33;
  MR_Word Modules1_34;
  MR_Word STATE_VARIABLE_Info_24_37;

  KeepGoing_15 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_20);
  KeepGoing_32 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_20);
  make__dependencies__intermod_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded1_33, &Modules1_34, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_37);
  succeeded = (Succeeded1_33 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_32 == (MR_Integer) 0);
  if (succeeded)
  {
    Succeeded1_16 = (MR_Integer) 0;
    Modules1_17 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    STATE_VARIABLE_Info_24_24 = STATE_VARIABLE_Info_24_37;
  }
  else
  {
    MR_Word ModuleList1_35;
    MR_Word AncestorModuleIndexSets_36;
    MR_Box conv2_STATE_VARIABLE_Info_24_24;

    ModuleList1_35 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), Modules1_34);
    mercury__list__map_foldl_5_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[4]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_3[25]), ModuleList1_35, &AncestorModuleIndexSets_36, ((MR_Box) (STATE_VARIABLE_Info_24_37)), &conv2_STATE_VARIABLE_Info_24_24);
    STATE_VARIABLE_Info_24_24 = ((MR_Word) (conv2_STATE_VARIABLE_Info_24_24));
    Modules1_17 = make__deps_set__deps_set_union_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), AncestorModuleIndexSets_36);
    Succeeded1_16 = Succeeded1_33;
  }
  succeeded = (Succeeded1_16 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_15 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_11 = (MR_Integer) 0;
    *DepFileIndexSet_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_24_24;
  }
  else
  {
    MR_Word ModuleList1_18;
    MR_Word Succeeded2_19;
    MR_Word Var_28;

    ModuleList1_18 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), Modules1_17);
    Var_28 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    make__dependencies__fold_dep_spec_over_modules_stop_at_error_fi_12_p_0(KeepGoing_15, Globals_9, (MR_Word) ((MR_Unsigned) 8U), ModuleList1_18, (MR_Integer) 1, &Succeeded2_19, Var_28, DepFileIndexSet_12, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_21);
    *Succeeded_11 = libs__maybe_util__and_2_f_0(Succeeded1_16, Succeeded2_19);
  }
}

static void MR_CALL 
make__dependencies__find_dep_specs_9_p_0(
  MR_Word Globals_1,
  MR_Word ModuleIndex_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Integer) 1;
    *HeadVar__5_5 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word HeadDepSpec_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailDepSpecs_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word HeadSucceeded_26;
    MR_Word HeadDepFileIndexSet_27;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word Var_36;

    make__dependencies__find_dep_spec_9_p_0(Globals_1, ModuleIndex_2, HeadDepSpec_20, &HeadSucceeded_26, &HeadDepFileIndexSet_27, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_34_34);
    succeeded = (HeadSucceeded_26 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_36 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_34_34);
      succeeded = (Var_36 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *HeadVar__5_5 = HeadDepFileIndexSet_27;
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_34_34;
    }
    else
    {
      MR_Word TailSucceeded_28;
      MR_Word TailDepFileIndexSet_29;

      make__dependencies__find_dep_specs_9_p_0(Globals_1, ModuleIndex_2, TailDepSpecs_21, &TailSucceeded_28, &TailDepFileIndexSet_29, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_7);
      *HeadVar__4_4 = libs__maybe_util__and_2_f_0(HeadSucceeded_26, TailSucceeded_28);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), HeadDepFileIndexSet_27, TailDepFileIndexSet_29, HeadVar__5_5);
    }
  }
}

static void MR_CALL 
make__dependencies__acc_rev_dfmi_target_6_p_0(
  MR_Word TargetType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_DepFileIndexSet_0_13,
  MR_Word * STATE_VARIABLE_DepFileIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word TargetFile_11;
  MR_Word TargetFileIndex_12;

  {
    TargetFile_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TargetFile_11, 0) = ((MR_Box) (ModuleIndex_8));
    MR_hl_field(0, TargetFile_11, 1) = ((MR_Box) (TargetType_7));
  }
  make__deps_set__dependency_file_to_index_4_p_0(TargetFile_11, &TargetFileIndex_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[1]), ((MR_Box) (TargetFileIndex_12)), STATE_VARIABLE_DepFileIndexSet_0_13, STATE_VARIABLE_DepFileIndexSet_14);
}

static void MR_CALL 
make__dependencies__dfmi_targets_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DepFileIndexSet_14;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  make__dependencies__acc_rev_dfmi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DepFileIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepFileIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__dependencies__dfmi_targets_5_p_0(
  MR_Word ModuleIndexSet_6,
  MR_Word TargetType_7,
  MR_Word * DepFileIndexSet_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Box conv3_DepFileIndexSet_8;
  MR_Box conv2_STATE_VARIABLE_Info_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&make__dependencies_scalar_common_14[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (make__dependencies__dfmi_targets_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TargetType_7));
  }
  Var_13 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  make__deps_set__deps_set_foldl2_6_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_1[2]), Var_12, ModuleIndexSet_6, ((MR_Box) (Var_13)), &conv3_DepFileIndexSet_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
  *DepFileIndexSet_8 = ((MR_Word) (conv3_DepFileIndexSet_8));
  *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
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
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word Languages_15;
  MR_Word ModuleName_16;
  MR_Word ProgressStream_17;
  MR_Word MaybeModuleDepInfo_18;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &Languages_15);
  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_23, ModuleIndex_10, &ModuleName_16);
  mercury__io__output_stream_3_p_0(&ProgressStream_17);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_17, Globals_9, ModuleName_16, &MaybeModuleDepInfo_18, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
  if ((MaybeModuleDepInfo_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_11 = (MR_Integer) 0;
    *Files_12 = mercury__set__init_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0));
  }
  else
  {
    MR_Word ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, (MR_Integer) 0))));
    MR_String SourceFileName_20;
    MR_Word ForeignIncludeFiles_21;
    MR_Word FilesList_22;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;

    *Succeeded_11 = (MR_Integer) 1;
    parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo_19, &SourceFileName_20);
    parse_tree__module_dep_info__module_dep_info_get_foreign_include_files_2_p_0(ModuleDepInfo_19, &ForeignIncludeFiles_21);
    Var_30 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_15);
    Var_31 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFiles_21);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&make__dependencies_scalar_common_13[0]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (make__dependencies__foreign_include_files_8_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (Var_30));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (SourceFileName_20));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), Var_36, Var_31, &FilesList_22);
    *Files_12 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), FilesList_22);
  }
}

static MR_Box MR_CALL 
make__dependencies__fact_table_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_30;

  conv0_LambdaHeadVar__2_30 = make__dependencies__IntroducedFrom__func__fact_table_files__903__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_30));
  return wrapper_arg_2;
}

static void MR_CALL 
make__dependencies__fact_table_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Files_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word ModuleName_15;
  MR_Word ProgressStream_16;
  MR_Word MaybeModuleDepInfo_17;

  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_21, ModuleIndex_10, &ModuleName_15);
  mercury__io__output_stream_3_p_0(&ProgressStream_16);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_16, Globals_9, ModuleName_15, &MaybeModuleDepInfo_17, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_11 = (MR_Integer) 0;
    *Files_12 = mercury__set__init_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0));
  }
  else
  {
    MR_Word ModuleDepInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_17, (MR_Integer) 0))));
    MR_Word FactTableFiles_19;

    *Succeeded_11 = (MR_Integer) 1;
    parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_18, &FactTableFiles_19);
    *Files_12 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies_scalar_common_3[24]), FactTableFiles_19);
  }
}

static void MR_CALL 
make__dependencies__foreign_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_Word Languages_15;
  MR_Word LanguagesSet_16;
  MR_Word IntermodSucceeded_17;
  MR_Word IntermodModules_18;
  MR_Word KeepGoing_19;
  MR_Word ProgressStream_20;
  MR_Word IntermodSelfModules_21;
  MR_Word ForeignSucceeded_22;
  MR_Word STATE_VARIABLE_Info_27_27;
  MR_Word Var_31;
  MR_Word Var_33;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &Languages_15);
  LanguagesSet_16 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_15);
  make__dependencies__intermod_imports_8_p_0(Globals_9, ModuleIndex_10, &IntermodSucceeded_17, &IntermodModules_18, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_27);
  KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_27_27);
  mercury__io__output_stream_3_p_0(&ProgressStream_20);
  make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_10)), IntermodModules_18, &IntermodSelfModules_21);
  Var_31 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), IntermodSelfModules_21);
  Var_33 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_50_95_95_91_52_93_95_48_12_p_0(ProgressStream_20, LanguagesSet_16, KeepGoing_19, Globals_9, Var_31, (MR_Integer) 1, &ForeignSucceeded_22, Var_33, Modules_12, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_24);
  *Succeeded_11 = libs__maybe_util__and_2_f_0(IntermodSucceeded_17, ForeignSucceeded_22);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_50_95_95_91_52_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
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

      make__dependencies__find_module_foreign_imports_10_p_0(Var_52, Var_53, HeadVar__3_3, MI_31, &NewSucceeded_37, &NewDeps_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
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

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
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
make__dependencies__find_module_foreign_imports_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Languages_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * ForeignModules_16,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word CachedForeignImports0_19;
  MR_Word CachedResult_20;
  MR_Box conv0_CachedResult_20;

  CachedForeignImports0_19 = make__make_info__make_info_get_cached_transitive_foreign_imports_1_f_0(STATE_VARIABLE_Info_0_27);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), CachedForeignImports0_19, ((MR_Box) (ModuleIndex_14)), &conv0_CachedResult_20);
  if (succeeded)
  {
    CachedResult_20 = ((MR_Word) (conv0_CachedResult_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, CachedResult_20, (MR_Integer) 0))) & (MR_Integer) 1);
    *ForeignModules_16 = ((MR_Word) ((MR_hl_field(0, CachedResult_20, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
  }
  else
  {
    MR_Word Succeeded0_21;
    MR_Word ImportedModules_22;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Modules0_54;

    make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &Succeeded0_21, &Modules0_54, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_31_31);
    make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_14)), Modules0_54, &ImportedModules_22);
    switch (Succeeded0_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_15 = (MR_Integer) 0;
          *ForeignModules_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_31_31;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word KeepGoing_23;
          MR_Word Result_24;
          MR_Word CachedForeignImports1_25;
          MR_Word CachedForeignImports_26;
          MR_Word Var_34;
          MR_Word Var_36;
          MR_Word STATE_VARIABLE_Info_37_37;
          MR_Word Var_39;

          KeepGoing_23 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_31_31);
          Var_39 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ImportedModules_22, ((MR_Box) (ModuleIndex_14)));
          Var_34 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), Var_39);
          Var_36 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(ProgressStream_11, Languages_12, KeepGoing_23, Globals_13, Var_34, (MR_Integer) 1, Succeeded_15, Var_36, ForeignModules_16, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_37_37);
          {
            Result_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Result_24, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
            MR_hl_field(0, Result_24, 1) = ((MR_Box) (*ForeignModules_16));
          }
          CachedForeignImports1_25 = make__make_info__make_info_get_cached_transitive_foreign_imports_1_f_0(STATE_VARIABLE_Info_37_37);
          mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (ModuleIndex_14)), ((MR_Box) (Result_24)), CachedForeignImports1_25, &CachedForeignImports_26);
          make__make_info__make_info_set_cached_transitive_foreign_imports_3_p_0(CachedForeignImports_26, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_28);
        }
        break;
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_49_95_95_91_52_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
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

      make__dependencies__find_module_foreign_imports_uncached_10_p_0(Var_52, Var_53, HeadVar__3_3, MI_31, &NewSucceeded_37, &NewDeps_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
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

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
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
make__dependencies__find_module_foreign_imports_uncached_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_34;

  succeeded = make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__833__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_34);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_34));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__dependencies__find_module_foreign_imports_uncached_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Languages_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * ForeignModules_16,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word ModuleName_19;
  MR_Word MaybeModuleDepInfo_20;
  MR_Word STATE_VARIABLE_Info_31_31;

  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_27, ModuleIndex_14, &ModuleName_19);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_13, ModuleName_19, &MaybeModuleDepInfo_20, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_31_31);
  if ((MaybeModuleDepInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ForeignModules_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *Succeeded_15 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_31_31;
  }
  else
  {
    MR_Word ModuleDepInfo_21 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_20, (MR_Integer) 0))));
    MR_Word FIMSpecs_22;
    MR_Word ForLangsPred_23;
    MR_Word ForeignModuleNameSet_26;
    MR_Word Var_35;

    parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(ModuleDepInfo_21, &FIMSpecs_22);
    {
      ForLangsPred_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ForLangsPred_23, 0) = ((MR_Box) (&make__dependencies_scalar_common_10[5]));
      MR_hl_field(0, ForLangsPred_23, 1) = ((MR_Box) (make__dependencies__find_module_foreign_imports_uncached_10_p_0_1));
      MR_hl_field(0, ForLangsPred_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ForLangsPred_23, 3) = ((MR_Box) (Languages_12));
    }
    mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForLangsPred_23, FIMSpecs_22, &ForeignModuleNameSet_26);
    Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignModuleNameSet_26);
    make__deps_set__module_names_to_index_set_4_p_0(Var_35, ForeignModules_16, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_28);
    *Succeeded_15 = (MR_Integer) 1;
  }
}

static void MR_CALL 
make__dependencies__non_intermod_indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word ProgressStream_15;
  MR_Word DirectSucceeded_23;
  MR_Word DirectImports_24;
  MR_Word KeepGoing_25;
  MR_Word STATE_VARIABLE_Info_29_29;

  mercury__io__output_stream_3_p_0(&ProgressStream_15);
  make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &DirectSucceeded_23, &DirectImports_24, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_29_29);
  KeepGoing_25 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_29_29);
  succeeded = (DirectSucceeded_23 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_25 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_11 = (MR_Integer) 0;
    *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_29_29;
  }
  else
  {
    MR_Word IndirectSucceeded_26;
    MR_Word IndirectImports0_27;
    MR_Word IndirectImports1_28;
    MR_Word Var_32;
    MR_Word Var_34;

    Var_32 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), DirectImports_24);
    Var_34 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_51_95_95_91_51_93_95_48_12_p_0(ProgressStream_15, KeepGoing_25, Globals_9, Var_32, (MR_Integer) 1, &IndirectSucceeded_26, Var_34, &IndirectImports0_27, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_17);
    make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_10)), IndirectImports0_27, &IndirectImports1_28);
    *Modules_12 = make__deps_set__deps_set_difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IndirectImports1_28, DirectImports_24);
    *Succeeded_11 = libs__maybe_util__and_2_f_0(DirectSucceeded_23, IndirectSucceeded_26);
  }
}

static void MR_CALL 
make__dependencies__indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word CachedIndirectImports0_15;
  MR_Word CachedResult_16;
  MR_Box conv0_CachedResult_16;

  CachedIndirectImports0_15 = make__make_info__make_info_get_cached_indirect_imports_1_f_0(STATE_VARIABLE_Info_0_21);
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
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
  else
  {
    MR_Word ProgressStream_17;
    MR_Word Result_18;
    MR_Word CachedIndirectImports1_19;
    MR_Word CachedIndirectImports_20;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word DirectSucceeded_41;
    MR_Word DirectImports_42;
    MR_Word KeepGoing_43;
    MR_Word STATE_VARIABLE_Info_29_47;

    mercury__io__output_stream_3_p_0(&ProgressStream_17);
    make__dependencies__direct_imports_8_p_0(Globals_9, ModuleIndex_10, &DirectSucceeded_41, &DirectImports_42, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_29_47);
    KeepGoing_43 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_29_47);
    succeeded = (DirectSucceeded_41 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_43 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_11 = (MR_Integer) 0;
      *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_29_47;
    }
    else
    {
      MR_Word IndirectSucceeded_44;
      MR_Word IndirectImports0_45;
      MR_Word IndirectImports1_46;
      MR_Word Var_50;
      MR_Word Var_52;

      Var_50 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), DirectImports_42);
      Var_52 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_51_95_95_91_51_93_95_48_12_p_0(ProgressStream_17, KeepGoing_43, Globals_9, Var_50, (MR_Integer) 1, &IndirectSucceeded_44, Var_52, &IndirectImports0_45, STATE_VARIABLE_Info_29_47, &STATE_VARIABLE_Info_27_27);
      make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_10)), IndirectImports0_45, &IndirectImports1_46);
      *Modules_12 = make__deps_set__deps_set_difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IndirectImports1_46, DirectImports_42);
      *Succeeded_11 = libs__maybe_util__and_2_f_0(DirectSucceeded_41, IndirectSucceeded_44);
    }
    {
      Result_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_18, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_18, 1) = ((MR_Box) (*Modules_12));
    }
    CachedIndirectImports1_19 = make__make_info__make_info_get_cached_indirect_imports_1_f_0(STATE_VARIABLE_Info_27_27);
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (ModuleIndex_10)), ((MR_Box) (Result_18)), CachedIndirectImports1_19, &CachedIndirectImports_20);
    make__make_info__make_info_set_cached_indirect_imports_3_p_0(CachedIndirectImports_20, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_22);
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_112_115_95_115_101_116_95_102_111_108_100_108_51_95_109_97_121_98_101_95_115_116_111_112_95_97_116_95_101_114_114_111_114_95_102_105_110_100_95_117_110_105_111_110_95_109_105_95_95_104_111_51_95_95_91_51_93_95_48_12_p_0(
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
      MR_Word Modules0_53;

      make__find_local_modules__find_transitive_module_dependencies_11_p_0(Var_52, HeadVar__3_3, (MR_Integer) 1, (MR_Integer) 1, MI_31, &NewSucceeded_37, &Modules0_53, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (MI_31)), Modules0_53, &NewDeps_38);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
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

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
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
  MR_Word CachedDirectImports0_15;
  MR_Word Result0_16;
  MR_Box conv0_Result0_16;

  CachedDirectImports0_15 = make__make_info__make_info_get_cached_direct_imports_1_f_0(STATE_VARIABLE_Info_0_28);
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
    MR_Word KeepGoing_17;
    MR_Word Succeeded0_18;
    MR_Word Modules0_19;
    MR_Word Result_25;
    MR_Word CachedDirectImports1_26;
    MR_Word CachedDirectImports_27;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_39_39;

    KeepGoing_17 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_28);
    make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded0_18, &Modules0_19, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32);
    succeeded = (Succeeded0_18 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_17 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_11 = (MR_Integer) 0;
      *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
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
        *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_34_34;
      }
      else
      {
        MR_Word Modules1_22;
        MR_Word Succeeded2_23;
        MR_Word Modules2_24;
        MR_Word Var_37;
        MR_Word Var_41;

        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IntermodModules_21, Modules0_19, &Modules1_22);
        Var_37 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[2]), IntermodModules_21);
        make__dependencies__deps_set_foldl3_maybe_stop_at_error_find_union_mi__ho6_12_p_0(KeepGoing_17, Globals_9, Var_37, (MR_Integer) 1, &Succeeded2_23, Modules1_22, &Modules2_24, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_39_39);
        Var_41 = libs__maybe_util__and_2_f_0(Succeeded0_18, Succeeded1_20);
        *Succeeded_11 = libs__maybe_util__and_2_f_0(Var_41, Succeeded2_23);
        make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_10)), Modules2_24, Modules_12);
      }
    }
    {
      Result_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_25, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_25, 1) = ((MR_Box) (*Modules_12));
    }
    CachedDirectImports1_26 = make__make_info__make_info_get_cached_direct_imports_1_f_0(STATE_VARIABLE_Info_39_39);
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (ModuleIndex_10)), ((MR_Box) (Result_25)), CachedDirectImports1_26, &CachedDirectImports_27);
    make__make_info__make_info_set_cached_direct_imports_3_p_0(CachedDirectImports_27, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_29);
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
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), NewDeps_38, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_49_49);
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

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, NewSucceeded_37);
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
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word AnyIntermod_15;

  libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_15);
  switch (AnyIntermod_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_11 = (MR_Integer) 1;
        *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_16;

        libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 502, &Transitive_16);
        switch (Transitive_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, Succeeded_11, Modules_12, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_17;
              MR_Word Modules0_25;

              mercury__io__output_stream_3_p_0(&ProgressStream_17);
              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_17, Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, Succeeded_11, &Modules0_25, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
              make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (ModuleIndex_10)), Modules0_25, Modules_12);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__non_intermod_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word CachedNonIntermodDirectImports0_15;
  MR_Word Result0_16;
  MR_Box conv0_Result0_16;

  CachedNonIntermodDirectImports0_15 = make__make_info__make_info_get_cached_non_intermod_direct_imports_1_f_0(STATE_VARIABLE_Info_0_21);
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
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
  else
  {
    MR_Word ProgressStream_17;
    MR_Word Result_18;
    MR_Word CachedNonIntermodDirectImports1_19;
    MR_Word CachedNonIntermodDirectImports_20;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word ModuleName_31;
    MR_Word MaybeModuleDepInfo_32;
    MR_Word STATE_VARIABLE_Info_34_44;

    mercury__io__output_stream_3_p_0(&ProgressStream_17);
    make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_21, ModuleIndex_10, &ModuleName_31);
    make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_17, Globals_9, ModuleName_31, &MaybeModuleDepInfo_32, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_34_44);
    if ((MaybeModuleDepInfo_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_11 = (MR_Integer) 0;
      *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_26_26 = STATE_VARIABLE_Info_34_44;
    }
    else
    {
      MR_Word ModuleDepInfo_33 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_32, (MR_Integer) 0))));
      MR_Word IntDeps_34;
      MR_Word ImpDeps_35;
      MR_Word DepsInt_36;
      MR_Word DepsImp_37;
      MR_Word Modules0_38;
      MR_Word Var_46;
      MR_Word STATE_VARIABLE_Info_37_47;
      MR_Word Var_48;
      MR_Word STATE_VARIABLE_Info_39_49;

      parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_33, &IntDeps_34);
      parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_33, &ImpDeps_35);
      Var_46 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_34);
      make__deps_set__module_names_to_index_set_4_p_0(Var_46, &DepsInt_36, STATE_VARIABLE_Info_34_44, &STATE_VARIABLE_Info_37_47);
      Var_48 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDeps_35);
      make__deps_set__module_names_to_index_set_4_p_0(Var_48, &DepsImp_37, STATE_VARIABLE_Info_37_47, &STATE_VARIABLE_Info_39_49);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), DepsInt_36, DepsImp_37, &Modules0_38);
      if (((MR_tag((MR_Word) ModuleName_31)) == (MR_Integer) 1))
      {
        MR_Word ParentModule_39 = ((MR_Word) ((MR_hl_field(1, ModuleName_31, (MR_Integer) 0))));
        MR_Word ParentIndex_41;
        MR_Word ParentImports_42;
        MR_Word STATE_VARIABLE_Info_40_50;

        make__deps_set__module_name_to_index_4_p_0(ParentModule_39, &ParentIndex_41, STATE_VARIABLE_Info_39_49, &STATE_VARIABLE_Info_40_50);
        make__dependencies__non_intermod_direct_imports_8_p_0(Globals_9, ParentIndex_41, Succeeded_11, &ParentImports_42, STATE_VARIABLE_Info_40_50, &STATE_VARIABLE_Info_26_26);
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ParentImports_42, Modules0_38, Modules_12);
      }
      else
      {
        *Succeeded_11 = (MR_Integer) 1;
        *Modules_12 = Modules0_38;
        STATE_VARIABLE_Info_26_26 = STATE_VARIABLE_Info_39_49;
      }
    }
    {
      Result_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_18, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_18, 1) = ((MR_Box) (*Modules_12));
    }
    CachedNonIntermodDirectImports1_19 = make__make_info__make_info_get_cached_non_intermod_direct_imports_1_f_0(STATE_VARIABLE_Info_26_26);
    mercury__map__det_insert_4_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), ((MR_Box) (ModuleIndex_10)), ((MR_Box) (Result_18)), CachedNonIntermodDirectImports1_19, &CachedNonIntermodDirectImports_20);
    make__make_info__make_info_set_cached_non_intermod_direct_imports_3_p_0(CachedNonIntermodDirectImports_20, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_22);
  }
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
  Var_18 = make__deps_set__list_to_deps_set_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[1]), TargetFileIndexes_11);
  make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), Var_18, STATE_VARIABLE_Deps_0_12, STATE_VARIABLE_Deps_13);
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_20(
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
  MR_Word conv58_DepFileIndexSet_16;
  MR_Word conv57_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv59_Succeeded_15, &conv58_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv57_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv59_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv58_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv57_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_19(
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
  MR_Word conv56_Succeeded_11;
  MR_Word conv55_Modules_12;
  MR_Word conv54_STATE_VARIABLE_Info_29;

  make__dependencies__direct_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv56_Succeeded_11, &conv55_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv54_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv56_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv55_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv54_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_18(
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
  MR_Word conv52_DepFileIndexSet_16;
  MR_Word conv51_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv53_Succeeded_15, &conv52_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv51_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv53_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv52_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv51_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_17(
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
  MR_Word conv50_HeadVar__3_3;
  MR_Word conv49_HeadVar__4_4;
  MR_Word conv48_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv50_HeadVar__3_3, &conv49_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv48_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv50_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv49_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv48_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_16(
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
  MR_Word conv47_Succeeded_11;
  MR_Word conv46_Result_12;
  MR_Word conv45_STATE_VARIABLE_Info_21;

  make__dependencies__get_intermod_imports_their_ancestors_and_012_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv47_Succeeded_11, &conv46_Result_12, ((MR_Word) (wrapper_arg_5)), &conv45_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv47_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv46_Result_12));
  *wrapper_arg_6 = ((MR_Box) (conv45_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_15(
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
  MR_Word conv44_Succeeded_15;
  MR_Word conv43_DepFileIndexSet_16;
  MR_Word conv42_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv44_Succeeded_15, &conv43_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv42_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv44_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv43_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv42_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_14(
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
  MR_Word conv41_Succeeded_11;
  MR_Word conv40_Modules_12;
  MR_Word conv39_STATE_VARIABLE_Info_19;

  make__dependencies__intermod_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv41_Succeeded_11, &conv40_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv39_STATE_VARIABLE_Info_19);
  *wrapper_arg_3 = ((MR_Box) (conv41_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv40_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv39_STATE_VARIABLE_Info_19));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_13(
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
  MR_Word conv37_DepFileIndexSet_16;
  MR_Word conv36_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv38_Succeeded_15, &conv37_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv36_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv38_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv37_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv36_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_12(
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
  MR_Word conv35_HeadVar__3_3;
  MR_Word conv34_HeadVar__4_4;
  MR_Word conv33_STATE_VARIABLE_Info_14;

  make__dependencies__self_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv35_HeadVar__3_3, &conv34_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv33_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv35_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv34_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv33_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_11(
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
  MR_Word conv31_DepFileIndexSet_16;
  MR_Word conv30_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_Succeeded_15, &conv31_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv30_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv32_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv31_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv30_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_10(
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
make__dependencies__compiled_code_dependencies_3_p_0_9(
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
  MR_Word conv25_DepFileIndexSet_16;
  MR_Word conv24_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_Succeeded_15, &conv25_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv24_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv26_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv25_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv24_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_8(
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
make__dependencies__compiled_code_dependencies_3_p_0_7(
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
  MR_Word conv18_STATE_VARIABLE_Info_24;

  make__dependencies__foreign_include_files_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_Succeeded_11, &conv19_Files_12, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv20_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv19_Files_12));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_6(
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
make__dependencies__compiled_code_dependencies_3_p_0_5(
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
  MR_Word conv12_STATE_VARIABLE_Info_22;

  make__dependencies__fact_table_files_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_11, &conv13_Files_12, ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv13_Files_12));
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_4(
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
  MR_Word conv10_DepFileIndexSet_16;
  MR_Word conv9_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_Succeeded_15, &conv10_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv11_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv10_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_3(
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
make__dependencies__compiled_code_dependencies_3_p_0_2(
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0_1(
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

static void MR_CALL 
make__dependencies__compiled_code_dependencies_3_p_0(
  MR_Word Globals_4,
  MR_Word * Deps_5,
  MR_Word * DepSpecs_6)
{
  MR_Word TrackFlags_7;
  MR_Word DepsTracks_8;
  MR_Word DepSpecsTracks_9;
  MR_Word DepsSrcInts_10;
  MR_Word IntermodOpt_12;
  MR_Word IntermodAnalysis_13;
  MR_Word AnyIntermod_14;
  MR_Word DepsOpts_15;
  MR_Word DepSpecsOpts_16;
  MR_Word DepsRegistries_17;
  MR_Word DepSpecsRegistries_18;
  MR_Word DepsAll_19;
  MR_Word Var_31;
  MR_Word Var_35;
  MR_Word Var_39;
  MR_Word Var_43;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_104;
  MR_Word Var_105;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 668, &TrackFlags_7);
  switch (TrackFlags_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        DepsTracks_8 = (MR_Word) ((MR_Unsigned) 0U);
        DepSpecsTracks_9 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        DepsTracks_8 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[74]));
        DepSpecsTracks_9 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[40]));
      }
      break;
  }
  Var_48 = make__dependencies__imports_012_0_f_0();
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[13]));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[12]));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[11]));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[10]));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_35));
  }
  {
    DepsSrcInts_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, DepsSrcInts_10, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[9]));
    MR_hl_field(1, DepsSrcInts_10, 1) = ((MR_Box) (Var_31));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 501, &IntermodOpt_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 506, &IntermodAnalysis_13);
  AnyIntermod_14 = mercury__bool__or_2_f_0(IntermodOpt_12, IntermodAnalysis_13);
  switch (AnyIntermod_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        DepsOpts_15 = (MR_Word) ((MR_Unsigned) 0U);
        DepSpecsOpts_16 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        DepsOpts_15 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[77]));
        DepSpecsOpts_16 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[49]));
      }
      break;
  }
  switch (IntermodAnalysis_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        DepsRegistries_17 = (MR_Word) ((MR_Unsigned) 0U);
        DepSpecsRegistries_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        DepsRegistries_17 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[79]));
        DepSpecsRegistries_18 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[52]));
      }
      break;
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (DepsRegistries_17));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (DepsOpts_15));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (DepsSrcInts_10));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (DepsTracks_8));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
  }
  DepsAll_19 = mercury__list__inst_preserving_condense_1_f_0((MR_Word) (&make__dependencies_scalar_common_2[0]), Var_99);
  *Deps_5 = make__dependencies__combine_deps_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), DepsAll_19);
  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsOpts_16, DepSpecsRegistries_18);
  Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[46])), Var_105);
  *DepSpecs_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsTracks_9, Var_104);
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
make__dependencies__imports_012_0_f_0_9(
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
make__dependencies__imports_012_0_f_0_8(
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
make__dependencies__imports_012_0_f_0_7(
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
make__dependencies__imports_012_0_f_0_6(
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
  MR_Word conv16_DepFileIndexSet_16;
  MR_Word conv15_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_Succeeded_15, &conv16_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv17_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv16_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__imports_012_0_f_0_5(
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
  MR_Word conv12_STATE_VARIABLE_Info_22;

  make__dependencies__indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Succeeded_11, &conv13_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv12_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv14_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv13_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv12_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__imports_012_0_f_0_4(
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
  MR_Word conv10_DepFileIndexSet_16;
  MR_Word conv9_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_Succeeded_15, &conv10_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv11_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv10_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__imports_012_0_f_0_3(
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
make__dependencies__imports_012_0_f_0_2(
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__imports_012_0_f_0_1(
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
make__dependencies__imports_012_0_f_0(void)
{
  return (MR_Word) (&make__dependencies_scalar_common_7[7]);
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_2_p_0_11(
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
make__dependencies__interface_file_dependencies_2_p_0_10(
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
make__dependencies__interface_file_dependencies_2_p_0_9(
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
make__dependencies__interface_file_dependencies_2_p_0_8(
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
  MR_Word conv22_DepFileIndexSet_16;
  MR_Word conv21_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_Succeeded_15, &conv22_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv21_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv23_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv22_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv21_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_2_p_0_7(
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
  MR_Word conv18_STATE_VARIABLE_Info_22;

  make__dependencies__indirect_imports_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_Succeeded_11, &conv19_Modules_12, ((MR_Word) (wrapper_arg_5)), &conv18_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv20_Succeeded_11));
  *wrapper_arg_4 = ((MR_Box) (conv19_Modules_12));
  *wrapper_arg_6 = ((MR_Box) (conv18_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_2_p_0_6(
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
  MR_Word conv16_DepFileIndexSet_16;
  MR_Word conv15_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_Succeeded_15, &conv16_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv17_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv16_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_2_p_0_5(
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
make__dependencies__interface_file_dependencies_2_p_0_4(
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
  MR_Word conv10_DepFileIndexSet_16;
  MR_Word conv9_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_Succeeded_15, &conv10_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv11_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv10_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_2_p_0_3(
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
make__dependencies__interface_file_dependencies_2_p_0_2(
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
  MR_Word conv4_DepFileIndexSet_16;
  MR_Word conv3_STATE_VARIABLE_Info_21;

  make__dependencies__of_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_15, &conv4_DepFileIndexSet_16, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_15));
  *wrapper_arg_4 = ((MR_Box) (conv4_DepFileIndexSet_16));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__interface_file_dependencies_2_p_0_1(
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

static void MR_CALL 
make__dependencies__interface_file_dependencies_2_p_0(
  MR_Word * Deps_3,
  MR_Word * DepSpecs_4)
{
  *Deps_3 = (MR_Word) (&make__dependencies_scalar_common_10[2]);
  *DepSpecs_4 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[39]));
}

static MR_bool MR_CALL 
make__dependencies____Unify____dep_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__dependencies____Unify____dep_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__dependencies____Compare____dep_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__dependencies____Compare____dep_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

void mercury__make__dependencies__init(void)
{
}

void mercury__make__dependencies__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_find_module_deps_1);
	MR_register_type_ctor_info(&make__dependencies__make__dependencies__type_ctor_info_find_module_deps_plain_set_1);
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
