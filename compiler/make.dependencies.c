/*
** Automatically generated from `make.dependencies.m'
** by the Mercury compiler,
** version rotd-2023-10-14
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




static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_0[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_0;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_1[1];

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_1;

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_2[1];

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

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8;

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

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct8 make__dependencies____vpti_pred_8__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__get_fact_table_files__908__1_1_f_0(
  MR_String LambdaHeadVar__1_29);

static MR_bool MR_CALL 
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__817__1_3_p_0(
  MR_Word LanguageSet_12,
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34);

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

static MR_bool MR_CALL 
make__dependencies__dep_file_for_foreign_include_if_in_langset_4_p_0(
  MR_Word LangSet_5,
  MR_String SourceFileName_6,
  MR_Word ForeignInclude_7,
  MR_Word * DepFile_8);

static void MR_CALL 
make__dependencies__index_get_ancestors_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word * AncestorModuleIndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__dependencies__find_target_dependencies_of_module_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word TargetType_14,
  MR_Word ModuleIndex_15,
  MR_Word * NewSucceeded_16,
  MR_Word STATE_VARIABLE_Deps_0_32,
  MR_Word * STATE_VARIABLE_Deps_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
make__dependencies__find_dep_spec_10_p_0(
  MR_Word KeepGoing_11,
  MR_Word Globals_12,
  MR_Word ModuleIndex_13,
  MR_Word DepSpec_14,
  MR_Word * Succeeded_15,
  MR_Word * DepFileIndexSet_16,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
make__dependencies__fold_dep_spec_over_modules_12_p_0(
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
make__dependencies__get_anc0_dir1_indir2_of_ancestors_of_intermod_imports_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__dependencies__get_anc0_dir1_indir2_of_ancestors_of_intermod_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * DepFileIndexSet_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__find_dep_specs_10_p_0(
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word ModuleIndex_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static MR_bool MR_CALL 
make__dependencies__get_foreign_include_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__dependencies__get_foreign_include_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * DepFiles_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static MR_Box MR_CALL 
make__dependencies__get_fact_table_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__dependencies__get_fact_table_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Files_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__dependencies__get_foreign_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_50_95_95_91_53_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_7,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__find_module_foreign_imports_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word LanguageSet_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * ForeignModules_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_49_95_95_91_53_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_7,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_8,
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
  MR_Word LanguageSet_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * ForeignModules_16,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
make__dependencies__get_intermod_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__dependencies__get_indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__dependencies__get_non_intermod_indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_51_95_95_91_52_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_7,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__get_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__dependencies__fold_find_modules_over_modules__ho6_12_p_0(
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_7,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__dependencies__get_non_intermod_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

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


static /* final */ const MR_Box make__dependencies_scalar_common_1[57][2];

static /* final */ const MR_Box make__dependencies_scalar_common_2[11][1];

static /* final */ const MR_Box make__dependencies_scalar_common_3[1][9];

static /* final */ const MR_Box make__dependencies_scalar_common_4[1][6];

static /* final */ const MR_Box make__dependencies_scalar_common_5[1][5];

static /* final */ const MR_Box make__dependencies_scalar_common_6[2][3];

static /* final */ const MR_Box make__dependencies_scalar_common_7[2][7];




static /* final */ const MR_Box make__dependencies_scalar_common_1[57][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__dependency_file_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[3])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[4])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[4])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[4])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 28U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[30])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[31])))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_2[11][1] = {
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
  { ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[4]))) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 32U)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 24U)) },
  /* row   9 */
  { ((MR_Box) ((MR_Unsigned) 28U)) },
  /* row  10 */
  { ((MR_Box) ((MR_Unsigned) 36U)) },
};

static /* final */ const MR_Box make__dependencies_scalar_common_3[1][9] = {
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

static /* final */ const MR_Box make__dependencies_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_6[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__get_fact_table_files_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_7[1])),
    ((MR_Box) (make__dependencies__get_anc0_dir1_indir2_of_ancestors_of_intermod_imports_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_7[2][7] = {
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
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0) }
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

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_1[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_1 = {
  (MR_String) "ancestors",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  make__dependencies__make__dependencies__field_types_dep_spec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_2[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_2 = {
  (MR_String) "non_intermod_direct_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  make__dependencies__make__dependencies__field_types_dep_spec_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__dependencies__make__dependencies__field_types_dep_spec_0_3[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_3 = {
  (MR_String) "direct_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
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
  (MR_String) "non_intermod_indirect_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
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
  (MR_Integer) 3,
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
  (MR_String) "intermod_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
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
  (MR_String) "foreign_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(7),
  make__dependencies__make__dependencies__field_types_dep_spec_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8 = {
  (MR_String) "anc0_dir1_indir2",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_9 = {
  (MR_String) "anc0_dir1_indir2_of_ancestors_of_intermod_imports",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_10 = {
  (MR_String) "self_fact_table_files",
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
  (MR_String) "self_foreign_include_files",
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
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_9,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_10,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_11
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_1[1] = { &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_0 };

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_2[1] = { &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_1 };

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_3[6] = {
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_2,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_3,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_4,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_5,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_6,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_7
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
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_9,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_1,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_3,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_7,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_5,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_6,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_2,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_4,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_0,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_10,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_11
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dep_spec_0[12] = {
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 10,
  (MR_Integer) 11
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

static MR_Word MR_CALL 
make__dependencies__IntroducedFrom__func__get_fact_table_files__908__1_1_f_0(
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
make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__817__1_3_p_0(
  MR_Word LanguageSet_12,
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34)
{
  MR_bool succeeded;
  MR_Word Lang_37 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_33, (MR_Integer) 0))) & (MR_Integer) 3);

  *LambdaHeadVar__2_34 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_33, (MR_Integer) 1))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LanguageSet_12, ((MR_Box) (Lang_37)));
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
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_206, ArgY1_27);
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
              MR_Word Var_211 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_211, ArgY1_49);
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
              MR_Word Var_207 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_207, ArgY1_71);
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
              MR_Word Var_212 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_93 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_212, ArgY1_93);
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
              MR_Word Var_209 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_115 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_209, ArgY1_115);
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
                        MR_Word ArgY1_137 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_210, ArgY1_137);
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
                        MR_Word ArgY1_159 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_208, ArgY1_159);
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
              MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_20 == CastX_19);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_22 == CastX_21);
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
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_7, ArgY1_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_9, ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_11, ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_13, ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_15, ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_17, ArgY1_18);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
make__dependencies__dep_file_for_foreign_include_if_in_langset_4_p_0(
  MR_Word LangSet_5,
  MR_String SourceFileName_6,
  MR_Word ForeignInclude_7,
  MR_Word * DepFile_8)
{
  MR_bool succeeded;
  MR_Word Lang_9 = ((MR_Unsigned) ((MR_hl_field(0, ForeignInclude_7, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_String IncludeFileName_10 = ((MR_String) ((MR_hl_field(0, ForeignInclude_7, (MR_Integer) 1))));
  MR_String IncludePath_11;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_9)), LangSet_5);
  if (succeeded)
  {
    parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_6, IncludeFileName_10, &IncludePath_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *DepFile_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IncludePath_11));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
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

      make__dependencies__find_target_dependencies_of_module_11_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ModuleIndex_31, &NewSucceeded_37, STATE_VARIABLE_Deps_0_7, &STATE_VARIABLE_Deps_46_46, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
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
make__dependencies__find_target_dependencies_of_module_11_p_0(
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word TargetType_14,
  MR_Word ModuleIndex_15,
  MR_Word * NewSucceeded_16,
  MR_Word STATE_VARIABLE_Deps_0_32,
  MR_Word * STATE_VARIABLE_Deps_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
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
            *STATE_VARIABLE_Deps_33 = STATE_VARIABLE_Deps_0_32;
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            MR_Word DepSpecs_136;
            MR_Word NewDeps_137;
            MR_Word TrackFlags_164;
            MR_Word DepSpecsTracks_165;
            MR_Word IntermodOpt_167;
            MR_Word IntermodAnalysis_168;
            MR_Word AnyIntermod_169;
            MR_Word DepSpecsOpts_170;
            MR_Word DepSpecsRegistries_171;
            MR_Word Var_178;
            MR_Word Var_179;

            libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 669, &TrackFlags_164);
            switch (TrackFlags_164) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                DepSpecsTracks_165 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                DepSpecsTracks_165 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[36]));
                break;
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 502, &IntermodOpt_167);
            libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 507, &IntermodAnalysis_168);
            AnyIntermod_169 = mercury__bool__or_2_f_0(IntermodOpt_167, IntermodAnalysis_168);
            switch (AnyIntermod_169) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                DepSpecsOpts_170 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                DepSpecsOpts_170 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[45]));
                break;
            }
            switch (IntermodAnalysis_168) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                DepSpecsRegistries_171 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                DepSpecsRegistries_171 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[48]));
                break;
            }
            Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsOpts_170, DepSpecsRegistries_171);
            Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[42])), Var_179);
            DepSpecs_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsTracks_165, Var_178);
            make__dependencies__find_dep_specs_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, DepSpecs_136, NewSucceeded_16, &NewDeps_137, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_137, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            MR_Word NewDeps_135;

            make__dependencies__find_dep_specs_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[21])), NewSucceeded_16, &NewDeps_135, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_135, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word NewDeps_21;

            make__dependencies__find_dep_specs_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[22])), NewSucceeded_16, &NewDeps_21, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_21, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
          }
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 13:
          {
            MR_Word NewDeps_147;

            make__dependencies__find_dep_specs_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[35])), NewSucceeded_16, &NewDeps_147, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_147, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word NewDeps_149;

            make__dependencies__find_dep_specs_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[15])), NewSucceeded_16, &NewDeps_149, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_149, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word NewDeps_138;

            make__dependencies__find_dep_spec_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_2[2])), NewSucceeded_16, &NewDeps_138, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_138, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DepSpecs_136;
        MR_Word NewDeps_137;
        MR_Word TrackFlags_164;
        MR_Word DepSpecsTracks_165;
        MR_Word IntermodOpt_167;
        MR_Word IntermodAnalysis_168;
        MR_Word AnyIntermod_169;
        MR_Word DepSpecsOpts_170;
        MR_Word DepSpecsRegistries_171;
        MR_Word Var_178;
        MR_Word Var_179;

        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 669, &TrackFlags_164);
        switch (TrackFlags_164) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DepSpecsTracks_165 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            DepSpecsTracks_165 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[36]));
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 502, &IntermodOpt_167);
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 507, &IntermodAnalysis_168);
        AnyIntermod_169 = mercury__bool__or_2_f_0(IntermodOpt_167, IntermodAnalysis_168);
        switch (AnyIntermod_169) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DepSpecsOpts_170 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            DepSpecsOpts_170 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[45]));
            break;
        }
        switch (IntermodAnalysis_168) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DepSpecsRegistries_171 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            DepSpecsRegistries_171 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[48]));
            break;
        }
        Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsOpts_170, DepSpecsRegistries_171);
        Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[42])), Var_179);
        DepSpecs_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsTracks_165, Var_178);
        make__dependencies__find_dep_specs_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, DepSpecs_136, NewSucceeded_16, &NewDeps_137, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_137, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HighLevelCode_29;
        MR_Word DepSpecs_141;
        MR_Word NewDeps_142;
        MR_Word CompilationTarget_144;

        libs__globals__get_target_2_p_0(Globals_13, &CompilationTarget_144);
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 312, &HighLevelCode_29);
        succeeded = (CompilationTarget_144 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (HighLevelCode_29 == (MR_Integer) 1);
        if (succeeded)
          DepSpecs_141 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[55]));
        else
          DepSpecs_141 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[56]));
        make__dependencies__find_dep_specs_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, DepSpecs_141, NewSucceeded_16, &NewDeps_142, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_142, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TargetType_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word NewDeps_161;
            MR_Word CompilationTarget_159;

            libs__globals__get_target_2_p_0(Globals_13, &CompilationTarget_159);
            make__dependencies__find_dep_spec_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_2[10])), NewSucceeded_16, &NewDeps_161, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_161, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word NewDeps_139;
            MR_Word CompilationTarget_27;

            libs__globals__get_target_2_p_0(Globals_13, &CompilationTarget_27);
            make__dependencies__find_dep_spec_10_p_0(KeepGoing_12, Globals_13, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_2[10])), NewSucceeded_16, &NewDeps_139, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_139, STATE_VARIABLE_Deps_0_32, STATE_VARIABLE_Deps_33);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__find_dep_spec_10_p_0(
  MR_Word KeepGoing_11,
  MR_Word Globals_12,
  MR_Word ModuleIndex_13,
  MR_Word DepSpec_14,
  MR_Word * Succeeded_15,
  MR_Word * DepFileIndexSet_16,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) DepSpec_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(DepSpec_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Result0_28;

            succeeded = make__deps_cache__search_anc0_dir1_indir2_cache_3_p_0(STATE_VARIABLE_Info_0_37, ModuleIndex_13, &Result0_28);
            if (succeeded)
            {
              *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, Result0_28, (MR_Integer) 0))) & (MR_Integer) 1);
              *DepFileIndexSet_16 = ((MR_Word) ((MR_hl_field(0, Result0_28, (MR_Integer) 1))));
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
            }
            else
            {
              MR_Word Result_29;
              MR_Word STATE_VARIABLE_Info_92_92;

              make__dependencies__find_dep_specs_10_p_0(KeepGoing_11, Globals_12, ModuleIndex_13, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[53])), Succeeded_15, DepFileIndexSet_16, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_92_92);
              {
                Result_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Result_29, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
                MR_hl_field(0, Result_29, 1) = ((MR_Box) (*DepFileIndexSet_16));
              }
              make__deps_cache__add_to_anc0_dir1_indir2_cache_4_p_0(ModuleIndex_13, Result_29, STATE_VARIABLE_Info_92_92, STATE_VARIABLE_Info_38);
            }
          }
          break;
        case (MR_Integer) 1:
          make__dependencies__get_anc0_dir1_indir2_of_ancestors_of_intermod_imports_8_p_0(Globals_12, ModuleIndex_13, Succeeded_15, DepFileIndexSet_16, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
          break;
        case (MR_Integer) 2:
          {
            MR_Word FactTableDepFiles_30;
            MR_Word STATE_VARIABLE_Info_127_127;
            MR_Word Var_129;

            make__dependencies__get_fact_table_files_8_p_0(Globals_12, ModuleIndex_13, Succeeded_15, &FactTableDepFiles_30, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_127_127);
            Var_129 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), FactTableDepFiles_30);
            make__deps_set__dependency_files_to_index_set_4_p_0(Var_129, DepFileIndexSet_16, STATE_VARIABLE_Info_127_127, STATE_VARIABLE_Info_38);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ForeignDepFiles_31;
            MR_Word STATE_VARIABLE_Info_131_131;
            MR_Word Var_133;

            make__dependencies__get_foreign_include_files_8_p_0(Globals_12, ModuleIndex_13, Succeeded_15, &ForeignDepFiles_31, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_131_131);
            Var_133 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), ForeignDepFiles_31);
            make__deps_set__dependency_files_to_index_set_4_p_0(Var_133, DepFileIndexSet_16, STATE_VARIABLE_Info_131_131, STATE_VARIABLE_Info_38);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TargetType_23 = ((MR_Word) ((MR_hl_field(1, DepSpec_14, (MR_Integer) 0))));
        MR_Word Var_51;

        *Succeeded_15 = (MR_Integer) 1;
        Var_51 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
        make__dependencies__acc_rev_dfmi_target_6_p_0(TargetType_23, ModuleIndex_13, Var_51, DepFileIndexSet_16, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_24;
        MR_Word Ancestors_25;
        MR_Word ModuleIndexSet_26;
        MR_Word STATE_VARIABLE_Info_53_53;
        MR_Word TargetType_163 = ((MR_Word) ((MR_hl_field(2, DepSpec_14, (MR_Integer) 0))));

        *Succeeded_15 = (MR_Integer) 1;
        make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_37, ModuleIndex_13, &ModuleName_24);
        Ancestors_25 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_24);
        make__deps_set__module_names_to_index_set_4_p_0(Ancestors_25, &ModuleIndexSet_26, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_53_53);
        make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_26, TargetType_163, DepFileIndexSet_16, STATE_VARIABLE_Info_53_53, STATE_VARIABLE_Info_38);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DepSpec_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Info_55_55;
            MR_Word TargetType_164 = ((MR_Word) ((MR_hl_field(3, DepSpec_14, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_165;

            make__dependencies__get_non_intermod_direct_imports_8_p_0(Globals_12, ModuleIndex_13, Succeeded_15, &ModuleIndexSet_165, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_55_55);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_165, TargetType_164, DepFileIndexSet_16, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_38);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_58_58;
            MR_Word TargetType_166 = ((MR_Word) ((MR_hl_field(3, DepSpec_14, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_167;

            make__dependencies__get_direct_imports_8_p_0(Globals_12, ModuleIndex_13, Succeeded_15, &ModuleIndexSet_167, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_58_58);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_167, TargetType_166, DepFileIndexSet_16, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_38);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_Info_61_61;
            MR_Word TargetType_168 = ((MR_Word) ((MR_hl_field(3, DepSpec_14, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_169;

            make__dependencies__get_non_intermod_indirect_imports_8_p_0(Globals_12, ModuleIndex_13, Succeeded_15, &ModuleIndexSet_169, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_61_61);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_169, TargetType_168, DepFileIndexSet_16, STATE_VARIABLE_Info_61_61, STATE_VARIABLE_Info_38);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_Info_64_64;
            MR_Word TargetType_170 = ((MR_Word) ((MR_hl_field(3, DepSpec_14, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_171;

            make__dependencies__get_indirect_imports_8_p_0(Globals_12, ModuleIndex_13, Succeeded_15, &ModuleIndexSet_171, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_64_64);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_171, TargetType_170, DepFileIndexSet_16, STATE_VARIABLE_Info_64_64, STATE_VARIABLE_Info_38);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word STATE_VARIABLE_Info_67_67;
            MR_Word TargetType_172 = ((MR_Word) ((MR_hl_field(3, DepSpec_14, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_173;

            make__dependencies__get_intermod_imports_8_p_0(Globals_12, ModuleIndex_13, Succeeded_15, &ModuleIndexSet_173, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_67_67);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_173, TargetType_172, DepFileIndexSet_16, STATE_VARIABLE_Info_67_67, STATE_VARIABLE_Info_38);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word STATE_VARIABLE_Info_70_70;
            MR_Word TargetType_174 = ((MR_Word) ((MR_hl_field(3, DepSpec_14, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_175;

            make__dependencies__get_foreign_imports_8_p_0(Globals_12, ModuleIndex_13, Succeeded_15, &ModuleIndexSet_175, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_70_70);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_175, TargetType_174, DepFileIndexSet_16, STATE_VARIABLE_Info_70_70, STATE_VARIABLE_Info_38);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__fold_dep_spec_over_modules_12_p_0(
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

      make__dependencies__find_dep_spec_10_p_0(KeepGoing_1, Globals_2, MI_31, DepSpec_3, &HeadSucceeded_37, &HeadDepFileIndexSet_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
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
make__dependencies__get_anc0_dir1_indir2_of_ancestors_of_intermod_imports_8_p_0_1(
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
make__dependencies__get_anc0_dir1_indir2_of_ancestors_of_intermod_imports_8_p_0(
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
  MR_Word AnyIntermod_44;

  KeepGoing_15 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_20);
  KeepGoing_32 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_20);
  libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_44);
  switch (AnyIntermod_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Succeeded1_33 = (MR_Integer) 1;
        Modules1_34 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_24_37 = STATE_VARIABLE_Info_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_45;

        libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 503, &Transitive_45);
        switch (Transitive_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__dependencies__get_non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded1_33, &Modules1_34, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_37);
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_46;
              MR_Word Modules0_50;

              mercury__io__output_stream_3_p_0(&ProgressStream_46);
              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_46, Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, &Succeeded1_33, &Modules0_50, STATE_VARIABLE_Info_0_20, &STATE_VARIABLE_Info_24_37);
              make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_10)), Modules0_50, &Modules1_34);
            }
            break;
        }
      }
      break;
  }
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

    ModuleList1_35 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules1_34);
    mercury__list__map_foldl_5_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_6[1]), ModuleList1_35, &AncestorModuleIndexSets_36, ((MR_Box) (STATE_VARIABLE_Info_24_37)), &conv2_STATE_VARIABLE_Info_24_24);
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

    ModuleList1_18 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules1_17);
    Var_28 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    make__dependencies__fold_dep_spec_over_modules_12_p_0(KeepGoing_15, Globals_9, (MR_Word) ((MR_Unsigned) 0U), ModuleList1_18, (MR_Integer) 1, &Succeeded2_19, Var_28, DepFileIndexSet_12, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_21);
    *Succeeded_11 = libs__maybe_util__and_2_f_0(Succeeded1_16, Succeeded2_19);
  }
}

static void MR_CALL 
make__dependencies__find_dep_specs_10_p_0(
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word ModuleIndex_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Integer) 1;
    *HeadVar__6_6 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
  else
  {
    MR_Word HeadDepSpec_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailDepSpecs_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word HeadSucceeded_29;
    MR_Word HeadDepFileIndexSet_30;
    MR_Word STATE_VARIABLE_Info_37_37;

    make__dependencies__find_dep_spec_10_p_0(KeepGoing_1, Globals_2, ModuleIndex_3, HeadDepSpec_23, &HeadSucceeded_29, &HeadDepFileIndexSet_30, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37);
    succeeded = (HeadSucceeded_29 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (KeepGoing_1 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word TailSucceeded_31;
      MR_Word TailDepFileIndexSet_32;

      make__dependencies__find_dep_specs_10_p_0(KeepGoing_1, Globals_2, ModuleIndex_3, TailDepSpecs_24, &TailSucceeded_31, &TailDepFileIndexSet_32, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_8);
      *HeadVar__5_5 = libs__maybe_util__and_2_f_0(HeadSucceeded_29, TailSucceeded_31);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), HeadDepFileIndexSet_30, TailDepFileIndexSet_32, HeadVar__6_6);
    }
    else
    {
      *HeadVar__5_5 = (MR_Integer) 0;
      *HeadVar__6_6 = HeadDepFileIndexSet_30;
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_37_37;
    }
  }
}

static MR_bool MR_CALL 
make__dependencies__get_foreign_include_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_DepFile_8;

  succeeded = make__dependencies__dep_file_for_foreign_include_if_in_langset_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_DepFile_8);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_DepFile_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__dependencies__get_foreign_include_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * DepFiles_12,
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
    *DepFiles_12 = mercury__set__init_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0));
  }
  else
  {
    MR_Word ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, (MR_Integer) 0))));
    MR_String SourceFileName_20;
    MR_Word ForeignIncludeFiles_21;
    MR_Word LangSet_22;
    MR_Word Var_30;

    *Succeeded_11 = (MR_Integer) 1;
    parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo_19, &SourceFileName_20);
    parse_tree__module_dep_info__module_dep_info_get_foreign_include_files_2_p_0(ModuleDepInfo_19, &ForeignIncludeFiles_21);
    LangSet_22 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_15);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__dependencies_scalar_common_7[0]));
      MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__dependencies__get_foreign_include_files_8_p_0_1));
      MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_30, 3) = ((MR_Box) (LangSet_22));
      MR_hl_field(0, Var_30, 4) = ((MR_Box) (SourceFileName_20));
    }
    mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), Var_30, ForeignIncludeFiles_21, DepFiles_12);
  }
}

static MR_Box MR_CALL 
make__dependencies__get_fact_table_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_30;

  conv0_LambdaHeadVar__2_30 = make__dependencies__IntroducedFrom__func__get_fact_table_files__908__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_30));
  return wrapper_arg_2;
}

static void MR_CALL 
make__dependencies__get_fact_table_files_8_p_0(
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
    *Files_12 = mercury__set__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__dependencies_scalar_common_6[0]), FactTableFiles_19);
  }
}

static void MR_CALL 
make__dependencies__get_foreign_imports_8_p_0(
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
  MR_Word AnyIntermod_45;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &Languages_15);
  LanguagesSet_16 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_15);
  libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_45);
  switch (AnyIntermod_45) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        IntermodSucceeded_17 = (MR_Integer) 1;
        IntermodModules_18 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_46;

        libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 503, &Transitive_46);
        switch (Transitive_46) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__dependencies__get_non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &IntermodSucceeded_17, &IntermodModules_18, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_27);
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_47;
              MR_Word Modules0_51;

              mercury__io__output_stream_3_p_0(&ProgressStream_47);
              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_47, Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, &IntermodSucceeded_17, &Modules0_51, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_27);
              make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_10)), Modules0_51, &IntermodModules_18);
            }
            break;
        }
      }
      break;
  }
  KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_27_27);
  mercury__io__output_stream_3_p_0(&ProgressStream_20);
  make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_10)), IntermodModules_18, &IntermodSelfModules_21);
  Var_31 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), IntermodSelfModules_21);
  Var_33 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_50_95_95_91_53_93_95_48_12_p_0(ProgressStream_20, LanguagesSet_16, KeepGoing_19, Globals_9, Var_31, (MR_Integer) 1, &ForeignSucceeded_22, Var_33, Modules_12, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_24);
  *Succeeded_11 = libs__maybe_util__and_2_f_0(IntermodSucceeded_17, ForeignSucceeded_22);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_50_95_95_91_53_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_7,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_8,
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
      *STATE_VARIABLE_ModuleIndexSet_8 = STATE_VARIABLE_ModuleIndexSet_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HeadSucceeded_37;
      MR_Word HeadModuleIndexSet_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_ModuleIndexSet_49_49;

      make__dependencies__find_module_foreign_imports_10_p_0(Var_52, Var_53, Globals_2, MI_31, &HeadSucceeded_37, &HeadModuleIndexSet_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), HeadModuleIndexSet_38, STATE_VARIABLE_ModuleIndexSet_0_7, &STATE_VARIABLE_ModuleIndexSet_49_49);
      succeeded = (HeadSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (KeepGoing_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, HeadSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7 = STATE_VARIABLE_ModuleIndexSet_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_ModuleIndexSet_0_7 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_ModuleIndexSet_8 = STATE_VARIABLE_ModuleIndexSet_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__find_module_foreign_imports_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word LanguageSet_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * ForeignModules_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word Result0_19;

  succeeded = make__deps_cache__search_trans_foreign_imports_cache_3_p_0(STATE_VARIABLE_Info_0_24, ModuleIndex_14, &Result0_19);
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, Result0_19, (MR_Integer) 0))) & (MR_Integer) 1);
    *ForeignModules_16 = ((MR_Word) ((MR_hl_field(0, Result0_19, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
  }
  else
  {
    MR_Word Succeeded0_20;
    MR_Word ImportedModules_21;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word Modules0_48;

    make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &Succeeded0_20, &Modules0_48, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
    make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_48, &ImportedModules_21);
    switch (Succeeded0_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_15 = (MR_Integer) 0;
          *ForeignModules_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_28_28;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word KeepGoing_22;
          MR_Word Result_23;
          MR_Word Var_31;
          MR_Word Var_33;
          MR_Word STATE_VARIABLE_Info_34_34;
          MR_Word Var_36;

          KeepGoing_22 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_28_28);
          Var_36 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ImportedModules_21, ((MR_Box) (ModuleIndex_14)));
          Var_31 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Var_36);
          Var_33 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_49_95_95_91_53_93_95_48_12_p_0(ProgressStream_11, LanguageSet_12, KeepGoing_22, Globals_13, Var_31, (MR_Integer) 1, Succeeded_15, Var_33, ForeignModules_16, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_34_34);
          {
            Result_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Result_23, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
            MR_hl_field(0, Result_23, 1) = ((MR_Box) (*ForeignModules_16));
          }
          make__deps_cache__add_to_trans_foreign_imports_cache_4_p_0(ModuleIndex_14, Result_23, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_25);
        }
        break;
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_49_95_95_91_53_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word Var_53,
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_7,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_8,
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
      *STATE_VARIABLE_ModuleIndexSet_8 = STATE_VARIABLE_ModuleIndexSet_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HeadSucceeded_37;
      MR_Word HeadModuleIndexSet_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_ModuleIndexSet_49_49;

      make__dependencies__find_module_foreign_imports_uncached_10_p_0(Var_52, Var_53, Globals_2, MI_31, &HeadSucceeded_37, &HeadModuleIndexSet_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), HeadModuleIndexSet_38, STATE_VARIABLE_ModuleIndexSet_0_7, &STATE_VARIABLE_ModuleIndexSet_49_49);
      succeeded = (HeadSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (KeepGoing_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, HeadSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7 = STATE_VARIABLE_ModuleIndexSet_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_ModuleIndexSet_0_7 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_ModuleIndexSet_8 = STATE_VARIABLE_ModuleIndexSet_49_49;
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

  succeeded = make__dependencies__IntroducedFrom__pred__find_module_foreign_imports_uncached__817__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_34);
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
  MR_Word LanguageSet_12,
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
      MR_hl_field(0, ForLangsPred_23, 0) = ((MR_Box) (&make__dependencies_scalar_common_4[0]));
      MR_hl_field(0, ForLangsPred_23, 1) = ((MR_Box) (make__dependencies__find_module_foreign_imports_uncached_10_p_0_1));
      MR_hl_field(0, ForLangsPred_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, ForLangsPred_23, 3) = ((MR_Box) (LanguageSet_12));
    }
    mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForLangsPred_23, FIMSpecs_22, &ForeignModuleNameSet_26);
    Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignModuleNameSet_26);
    make__deps_set__module_names_to_index_set_4_p_0(Var_35, ForeignModules_16, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_28);
    *Succeeded_15 = (MR_Integer) 1;
  }
}

static void MR_CALL 
make__dependencies__get_intermod_imports_8_p_0(
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

        libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 503, &Transitive_16);
        switch (Transitive_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__dependencies__get_non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, Succeeded_11, Modules_12, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_17;
              MR_Word Modules0_25;

              mercury__io__output_stream_3_p_0(&ProgressStream_17);
              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_17, Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, Succeeded_11, &Modules0_25, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
              make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_10)), Modules0_25, Modules_12);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__get_indirect_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded;
  MR_Word Result0_15;

  succeeded = make__deps_cache__search_indirect_imports_cache_3_p_0(STATE_VARIABLE_Info_0_18, ModuleIndex_10, &Result0_15);
  if (succeeded)
  {
    *Succeeded_11 = ((MR_Unsigned) ((MR_hl_field(0, Result0_15, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_12 = ((MR_Word) ((MR_hl_field(0, Result0_15, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
  }
  else
  {
    MR_Word ProgressStream_16;
    MR_Word Result_17;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word DirectSucceeded_26;
    MR_Word DirectImports_27;
    MR_Word KeepGoing_28;
    MR_Word STATE_VARIABLE_Info_29_32;

    mercury__io__output_stream_3_p_0(&ProgressStream_16);
    make__dependencies__get_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &DirectSucceeded_26, &DirectImports_27, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_29_32);
    KeepGoing_28 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_29_32);
    succeeded = (DirectSucceeded_26 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_28 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_11 = (MR_Integer) 0;
      *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_24_24 = STATE_VARIABLE_Info_29_32;
    }
    else
    {
      MR_Word IndirectSucceeded_29;
      MR_Word IndirectImports0_30;
      MR_Word IndirectImports1_31;
      MR_Word Var_35;
      MR_Word Var_37;

      Var_35 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), DirectImports_27);
      Var_37 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_51_95_95_91_52_93_95_48_12_p_0(ProgressStream_16, KeepGoing_28, Globals_9, Var_35, (MR_Integer) 1, &IndirectSucceeded_29, Var_37, &IndirectImports0_30, STATE_VARIABLE_Info_29_32, &STATE_VARIABLE_Info_24_24);
      make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_10)), IndirectImports0_30, &IndirectImports1_31);
      *Modules_12 = make__deps_set__deps_set_difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IndirectImports1_31, DirectImports_27);
      *Succeeded_11 = libs__maybe_util__and_2_f_0(DirectSucceeded_26, IndirectSucceeded_29);
    }
    {
      Result_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_17, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_17, 1) = ((MR_Box) (*Modules_12));
    }
    make__deps_cache__add_to_indirect_imports_cache_4_p_0(ModuleIndex_10, Result_17, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_19);
  }
}

static void MR_CALL 
make__dependencies__get_non_intermod_indirect_imports_8_p_0(
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
  make__dependencies__get_non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &DirectSucceeded_23, &DirectImports_24, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_29_29);
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

    Var_32 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), DirectImports_24);
    Var_34 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_51_95_95_91_52_93_95_48_12_p_0(ProgressStream_15, KeepGoing_25, Globals_9, Var_32, (MR_Integer) 1, &IndirectSucceeded_26, Var_34, &IndirectImports0_27, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_17);
    make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_10)), IndirectImports0_27, &IndirectImports1_28);
    *Modules_12 = make__deps_set__deps_set_difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IndirectImports1_28, DirectImports_24);
    *Succeeded_11 = libs__maybe_util__and_2_f_0(DirectSucceeded_23, IndirectSucceeded_26);
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_51_95_95_91_52_93_95_48_12_p_0(
  MR_Word Var_52,
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_7,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_8,
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
      *STATE_VARIABLE_ModuleIndexSet_8 = STATE_VARIABLE_ModuleIndexSet_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HeadSucceeded_37;
      MR_Word HeadModuleIndexSet_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_ModuleIndexSet_49_49;
      MR_Word Modules0_53;

      make__find_local_modules__find_transitive_module_dependencies_11_p_0(Var_52, Globals_2, (MR_Integer) 1, (MR_Integer) 1, MI_31, &HeadSucceeded_37, &Modules0_53, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (MI_31)), Modules0_53, &HeadModuleIndexSet_38);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), HeadModuleIndexSet_38, STATE_VARIABLE_ModuleIndexSet_0_7, &STATE_VARIABLE_ModuleIndexSet_49_49);
      succeeded = (HeadSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (KeepGoing_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, HeadSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7 = STATE_VARIABLE_ModuleIndexSet_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_ModuleIndexSet_0_7 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_ModuleIndexSet_8 = STATE_VARIABLE_ModuleIndexSet_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__get_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word Result0_15;

  succeeded = make__deps_cache__search_direct_imports_cache_3_p_0(STATE_VARIABLE_Info_0_25, ModuleIndex_10, &Result0_15);
  if (succeeded)
  {
    *Succeeded_11 = ((MR_Unsigned) ((MR_hl_field(0, Result0_15, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_12 = ((MR_Word) ((MR_hl_field(0, Result0_15, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
  {
    MR_Word KeepGoing_16;
    MR_Word Succeeded0_17;
    MR_Word Modules0_18;
    MR_Word Result_24;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Info_36_36;

    KeepGoing_16 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_25);
    make__dependencies__get_non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded0_17, &Modules0_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
    succeeded = (Succeeded0_17 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_16 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_11 = (MR_Integer) 0;
      *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_36_36 = STATE_VARIABLE_Info_29_29;
    }
    else
    {
      MR_Word Succeeded1_19;
      MR_Word IntermodModules_20;
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Word AnyIntermod_51;

      libs__globals__get_any_intermod_2_p_0(Globals_9, &AnyIntermod_51);
      switch (AnyIntermod_51) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Succeeded1_19 = (MR_Integer) 1;
            IntermodModules_20 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
            STATE_VARIABLE_Info_31_31 = STATE_VARIABLE_Info_29_29;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Transitive_52;

            libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 503, &Transitive_52);
            switch (Transitive_52) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                make__dependencies__get_non_intermod_direct_imports_8_p_0(Globals_9, ModuleIndex_10, &Succeeded1_19, &IntermodModules_20, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_31_31);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ProgressStream_53;
                  MR_Word Modules0_57;

                  mercury__io__output_stream_3_p_0(&ProgressStream_53);
                  make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_53, Globals_9, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_10, &Succeeded1_19, &Modules0_57, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_31_31);
                  make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_10)), Modules0_57, &IntermodModules_20);
                }
                break;
            }
          }
          break;
      }
      succeeded = (Succeeded1_19 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_16 == (MR_Integer) 0);
      if (succeeded)
      {
        *Succeeded_11 = (MR_Integer) 0;
        *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_36_36 = STATE_VARIABLE_Info_31_31;
      }
      else
      {
        MR_Word Modules1_21;
        MR_Word Succeeded2_22;
        MR_Word Modules2_23;
        MR_Word Var_34;
        MR_Word Var_38;

        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IntermodModules_20, Modules0_18, &Modules1_21);
        Var_34 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), IntermodModules_20);
        make__dependencies__fold_find_modules_over_modules__ho6_12_p_0(KeepGoing_16, Globals_9, Var_34, (MR_Integer) 1, &Succeeded2_22, Modules1_21, &Modules2_23, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_36_36);
        Var_38 = libs__maybe_util__and_2_f_0(Succeeded0_17, Succeeded1_19);
        *Succeeded_11 = libs__maybe_util__and_2_f_0(Var_38, Succeeded2_22);
        make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_10)), Modules2_23, Modules_12);
      }
    }
    {
      Result_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_24, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_24, 1) = ((MR_Box) (*Modules_12));
    }
    make__deps_cache__add_to_direct_imports_cache_4_p_0(ModuleIndex_10, Result_24, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_26);
  }
}

static void MR_CALL 
make__dependencies__fold_find_modules_over_modules__ho6_12_p_0(
  MR_Word KeepGoing_1,
  MR_Word Globals_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_7,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_8,
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
      *STATE_VARIABLE_ModuleIndexSet_8 = STATE_VARIABLE_ModuleIndexSet_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word MI_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word MIs_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HeadSucceeded_37;
      MR_Word HeadModuleIndexSet_38;
      MR_Word STATE_VARIABLE_Info_47_47;
      MR_Word STATE_VARIABLE_ModuleIndexSet_49_49;

      make__dependencies__get_non_intermod_direct_imports_8_p_0(Globals_2, MI_31, &HeadSucceeded_37, &HeadModuleIndexSet_38, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_47_47);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), HeadModuleIndexSet_38, STATE_VARIABLE_ModuleIndexSet_0_7, &STATE_VARIABLE_ModuleIndexSet_49_49);
      succeeded = (HeadSucceeded_37 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (KeepGoing_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Succeeded_50_50;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5;
        MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_9;

        STATE_VARIABLE_Succeeded_50_50 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_5, HeadSucceeded_37);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = MIs_32;
        next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_50_50;
        next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7 = STATE_VARIABLE_ModuleIndexSet_49_49;
        next_value_of_STATE_VARIABLE_Info_0_9 = STATE_VARIABLE_Info_47_47;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
        STATE_VARIABLE_ModuleIndexSet_0_7 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_7;
        STATE_VARIABLE_Info_0_9 = next_value_of_STATE_VARIABLE_Info_0_9;
        continue;
      }
      else
      {
        *STATE_VARIABLE_Succeeded_6 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_47_47;
        *STATE_VARIABLE_ModuleIndexSet_8 = STATE_VARIABLE_ModuleIndexSet_49_49;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__get_non_intermod_direct_imports_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleIndex_10,
  MR_Word * Succeeded_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded;
  MR_Word Result0_15;

  succeeded = make__deps_cache__search_non_intermod_direct_imports_cache_3_p_0(STATE_VARIABLE_Info_0_18, ModuleIndex_10, &Result0_15);
  if (succeeded)
  {
    *Succeeded_11 = ((MR_Unsigned) ((MR_hl_field(0, Result0_15, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_12 = ((MR_Word) ((MR_hl_field(0, Result0_15, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
  }
  else
  {
    MR_Word ProgressStream_16;
    MR_Word Result_17;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word ModuleName_24;
    MR_Word MaybeModuleDepInfo_25;
    MR_Word STATE_VARIABLE_Info_34_37;

    mercury__io__output_stream_3_p_0(&ProgressStream_16);
    make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_18, ModuleIndex_10, &ModuleName_24);
    make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_16, Globals_9, ModuleName_24, &MaybeModuleDepInfo_25, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_34_37);
    if ((MaybeModuleDepInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_11 = (MR_Integer) 0;
      *Modules_12 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_23_23 = STATE_VARIABLE_Info_34_37;
    }
    else
    {
      MR_Word ModuleDepInfo_26 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_25, (MR_Integer) 0))));
      MR_Word IntDeps_27;
      MR_Word ImpDeps_28;
      MR_Word DepsInt_29;
      MR_Word DepsImp_30;
      MR_Word Modules0_31;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_Info_37_40;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_Info_39_42;

      parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_26, &IntDeps_27);
      parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_26, &ImpDeps_28);
      Var_39 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_27);
      make__deps_set__module_names_to_index_set_4_p_0(Var_39, &DepsInt_29, STATE_VARIABLE_Info_34_37, &STATE_VARIABLE_Info_37_40);
      Var_41 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDeps_28);
      make__deps_set__module_names_to_index_set_4_p_0(Var_41, &DepsImp_30, STATE_VARIABLE_Info_37_40, &STATE_VARIABLE_Info_39_42);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), DepsInt_29, DepsImp_30, &Modules0_31);
      if (((MR_tag((MR_Word) ModuleName_24)) == (MR_Integer) 1))
      {
        MR_Word ParentModule_32 = ((MR_Word) ((MR_hl_field(1, ModuleName_24, (MR_Integer) 0))));
        MR_Word ParentIndex_34;
        MR_Word ParentImports_35;
        MR_Word STATE_VARIABLE_Info_40_43;

        make__deps_set__module_name_to_index_4_p_0(ParentModule_32, &ParentIndex_34, STATE_VARIABLE_Info_39_42, &STATE_VARIABLE_Info_40_43);
        make__dependencies__get_non_intermod_direct_imports_8_p_0(Globals_9, ParentIndex_34, Succeeded_11, &ParentImports_35, STATE_VARIABLE_Info_40_43, &STATE_VARIABLE_Info_23_23);
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ParentImports_35, Modules0_31, Modules_12);
      }
      else
      {
        *Succeeded_11 = (MR_Integer) 1;
        *Modules_12 = Modules0_31;
        STATE_VARIABLE_Info_23_23 = STATE_VARIABLE_Info_39_42;
      }
    }
    {
      Result_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_17, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_11));
      MR_hl_field(0, Result_17, 1) = ((MR_Box) (*Modules_12));
    }
    make__deps_cache__add_to_non_intermod_direct_imports_cache_4_p_0(ModuleIndex_10, Result_17, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_19);
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
  make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (TargetFileIndex_12)), STATE_VARIABLE_DepFileIndexSet_0_13, STATE_VARIABLE_DepFileIndexSet_14);
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
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&make__dependencies_scalar_common_3[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (make__dependencies__dfmi_targets_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TargetType_7));
  }
  Var_13 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  make__deps_set__deps_set_foldl2_6_p_0((MR_Word) (&make__dependencies_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_1[0]), Var_12, ModuleIndexSet_6, ((MR_Box) (Var_13)), &conv3_DepFileIndexSet_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
  *DepFileIndexSet_8 = ((MR_Word) (conv3_DepFileIndexSet_8));
  *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
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
