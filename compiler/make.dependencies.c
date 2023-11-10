/*
** Automatically generated from `make.dependencies.m'
** by the Mercury compiler,
** version rotd-2023-11-10
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

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_12;

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_0[5];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_1[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_2[1];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_3[6];

static const MR_DuPtagLayout make__dependencies__make__dependencies__du_ptag_ordered_dep_spec_0[4];

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_dep_spec_0[13];

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dep_spec_0[13];

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct10 make__dependencies____vpti_pred_10__plain_io__type_ctor_info_text_output_stream_0__plain_make__make_info__type_ctor_info_maybe_keep_going_0__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

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
make__dependencies__acc_dep_file_index_for_foreign_include_if_in_langset_7_p_0(
  MR_Word LangSet_8,
  MR_String SourceFileName_9,
  MR_Word ForeignInclude_10,
  MR_Word STATE_VARIABLE_DepFileIndexSet_0_18,
  MR_Word * STATE_VARIABLE_DepFileIndexSet_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__dependencies__index_get_ancestors_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word * AncestorModuleIndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__dependencies__acc_module_index_if_for_lang_in_set_6_p_0(
  MR_Word LangSet_7,
  MR_Word FIMSpec_8,
  MR_Word STATE_VARIABLE_DepsSet_0_14,
  MR_Word * STATE_VARIABLE_DepsSet_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__dependencies__find_target_dependencies_of_module_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word KeepGoing_14,
  MR_Word Globals_15,
  MR_Word TargetType_16,
  MR_Word ModuleIndex_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Deps_0_36,
  MR_Word * STATE_VARIABLE_Deps_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
make__dependencies__find_dep_spec_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word KeepGoing_13,
  MR_Word Globals_14,
  MR_Word ModuleIndex_15,
  MR_Word DepSpec_16,
  MR_Word * Succeeded_17,
  MR_Word * DepFileIndexSet_18,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
make__dependencies__fold_dep_spec_over_modules_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word DepSpec_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_DepFileIndexSet_0_8,
  MR_Word * STATE_VARIABLE_DepFileIndexSet_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__dependencies__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__dependencies__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * DepFileIndexSet_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__find_dep_specs_11_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word ModuleIndex_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_109_111_100_95_105_109_112_111_114_116_115_95_95_91_50_93_95_48_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__dependencies__get_foreign_include_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__dependencies__get_foreign_include_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * DepFileIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__dependencies__get_fact_table_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * DepFileIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__dependencies__get_foreign_imports_intermod_trans_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_50_95_95_91_53_93_95_48_13_p_0(
  MR_Word Var_56,
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_8,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__dependencies__get_foreign_imports_non_intermod_trans_11_p_0(
  MR_Word LangSet_12,
  MR_Word ProgressStream_13,
  MR_Word KeepGoing_14,
  MR_Word Globals_15,
  MR_Word ModuleIndex_16,
  MR_Word * Succeeded_17,
  MR_Word * ForeignModules_18,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_49_95_95_91_53_93_95_48_13_p_0(
  MR_Word Var_56,
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_8,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0(
  MR_Word LangSet_12,
  MR_Word ProgressStream_13,
  MR_Word Globals_15,
  MR_Word ModuleIndex_16,
  MR_Word * Succeeded_17,
  MR_Word * ForeignModules_18,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__dependencies__get_indirect_imports_intermod_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * IndirectIntermodImportModules_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__dependencies__get_indirect_imports_uncached_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word KeepGoing_14,
  MR_Word Globals_15,
  MR_Word ModuleIndex_16,
  MR_Word DirectSucceeded_17,
  MR_Word DirectImports_18,
  MR_Word * Succeeded_19,
  MR_Word * IndirectImports_20,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
make__dependencies__get_indirect_imports_non_intermod_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * IndirectNonIntermodImportModules_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__dependencies__fold_find_modules_over_modules__ho3_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_8,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__dependencies__get_direct_imports_intermod_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__dependencies__fold_find_modules_over_modules__ho4_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_8,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

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


static /* final */ const MR_Box make__dependencies_scalar_common_1[56][2];

static /* final */ const MR_Box make__dependencies_scalar_common_2[11][1];

static /* final */ const MR_Box make__dependencies_scalar_common_3[2][9];

static /* final */ const MR_Box make__dependencies_scalar_common_4[1][10];

static /* final */ const MR_Box make__dependencies_scalar_common_5[1][7];

static /* final */ const MR_Box make__dependencies_scalar_common_6[1][3];




static /* final */ const MR_Box make__dependencies_scalar_common_1[56][2] = {
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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[3])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[4])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[4])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[4])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 28U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &make__dependencies_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(2, &make__dependencies_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[27])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &make__dependencies_scalar_common_1[28])))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_2[11][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
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

static /* final */ const MR_Box make__dependencies_scalar_common_3[2][9] = {
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&make__dependencies__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__dependencies__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__dependencies_scalar_common_5[1][7] = {
  /* row   0 */
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

static /* final */ const MR_Box make__dependencies_scalar_common_6[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__dependencies_scalar_common_5[0])),
    ((MR_Box) (make__dependencies__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
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
  (MR_String) "direct_imports_non_intermod",
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
  (MR_String) "direct_imports_intermod",
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
  (MR_String) "indirect_imports_non_intermod",
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
  (MR_String) "indirect_imports_intermod",
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
  (MR_String) "foreign_imports_intermod_trans",
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
  (MR_String) "anc0_dir1_indir2_non_intermod",
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
  (MR_String) "anc0_dir1_indir2_intermod",
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
  (MR_String) "anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports",
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
  (MR_String) "self_fact_table_files",
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

static const MR_DuFunctorDesc make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_12 = {
  (MR_String) "self_foreign_include_files",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_stag_ordered_dep_spec_0_0[5] = {
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_9,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_10,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_11,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_12
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
    UINT32_C(5),
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

static const MR_DuFunctorDescPtr make__dependencies__make__dependencies__du_name_ordered_dep_spec_0[13] = {
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_9,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_10,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_8,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_1,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_3,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_2,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_7,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_5,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_4,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_6,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_0,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_11,
  &make__dependencies__make__dependencies__du_functor_desc_dep_spec_0_12
};

static const MR_Integer make__dependencies__make__dependencies__functor_number_map_dep_spec_0[13] = {
  (MR_Integer) 10,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 11,
  (MR_Integer) 12
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
  (MR_Integer) 13,
  UINT16_C(12),
  make__dependencies__make__dependencies__functor_number_map_dep_spec_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 make__dependencies__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct10 make__dependencies____vpti_pred_10__plain_io__type_ctor_info_text_output_stream_0__plain_make__make_info__type_ctor_info_maybe_keep_going_0__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 10,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0),
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
  { (MR_PseudoTypeInfo) (&make__dependencies____vpti_pred_10__plain_io__type_ctor_info_text_output_stream_0__plain_make__make_info__type_ctor_info_maybe_keep_going_0__plain_libs__globals__type_ctor_info_globals_0__plain_make__deps_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

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
  MR_Integer CastX_212 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_213 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_212 == CastY_213);
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
                  case (MR_Integer) 4:
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
                  case (MR_Integer) 4:
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
                  case (MR_Integer) 4:
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
                  case (MR_Integer) 4:
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
          case (MR_Integer) 4:
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
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
          MR_Word Var_229 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_229, ArgY1_5);
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
          MR_Word Var_222 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_28 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_222, ArgY1_28);
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
              MR_Word Var_224 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 4:
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
                        MR_Word ArgY1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_224, ArgY1_51);
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
              MR_Word Var_223 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 4:
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
                        MR_Word ArgY1_74 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_223, ArgY1_74);
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
              MR_Word Var_227 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 4:
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
                        MR_Word ArgY1_97 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_227, ArgY1_97);
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
              MR_Word Var_226 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 4:
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
                        MR_Word ArgY1_120 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_226, ArgY1_120);
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
              MR_Word Var_228 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 4:
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
                        MR_Word ArgY1_143 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_228, ArgY1_143);
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
              MR_Word Var_225 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 4:
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
                        MR_Word ArgY1_166 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, Var_225, ArgY1_166);
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
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_29 == CastY_30);
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
          case (MR_Integer) 4:
            {
              MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_28 == CastX_27);
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

static void MR_CALL 
make__dependencies__acc_dep_file_index_for_foreign_include_if_in_langset_7_p_0(
  MR_Word LangSet_8,
  MR_String SourceFileName_9,
  MR_Word ForeignInclude_10,
  MR_Word STATE_VARIABLE_DepFileIndexSet_0_18,
  MR_Word * STATE_VARIABLE_DepFileIndexSet_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(0, ForeignInclude_10, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_String IncludeFileName_14 = ((MR_String) ((MR_hl_field(0, ForeignInclude_10, (MR_Integer) 1))));

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_8, ((MR_Box) (Lang_13)));
  if (succeeded)
  {
    MR_String IncludePath_15;
    MR_Word DepFile_16;
    MR_Word DepFileIndex_17;

    parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_9, IncludeFileName_14, &IncludePath_15);
    {
      DepFile_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DepFile_16, 0) = ((MR_Box) (IncludePath_15));
    }
    make__deps_set__dependency_file_to_index_4_p_0(DepFile_16, &DepFileIndex_17, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
    make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[2]), ((MR_Box) (DepFileIndex_17)), STATE_VARIABLE_DepFileIndexSet_0_18, STATE_VARIABLE_DepFileIndexSet_19);
  }
  else
  {
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    *STATE_VARIABLE_DepFileIndexSet_19 = STATE_VARIABLE_DepFileIndexSet_0_18;
  }
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

static void MR_CALL 
make__dependencies__acc_module_index_if_for_lang_in_set_6_p_0(
  MR_Word LangSet_7,
  MR_Word FIMSpec_8,
  MR_Word STATE_VARIABLE_DepsSet_0_14,
  MR_Word * STATE_VARIABLE_DepsSet_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word Lang_11 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, FIMSpec_8, (MR_Integer) 1))));

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_7, ((MR_Box) (Lang_11)));
  if (succeeded)
  {
    MR_Word ModuleIndex_13;

    make__deps_set__module_name_to_index_4_p_0(ModuleName_12, &ModuleIndex_13, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_13)), STATE_VARIABLE_DepsSet_0_14, STATE_VARIABLE_DepsSet_15);
  }
  else
  {
    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
    *STATE_VARIABLE_DepsSet_15 = STATE_VARIABLE_DepsSet_0_14;
  }
}

void MR_CALL 
make__dependencies__find_target_dependencies_of_modules_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word TargetType_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_Deps_0_8,
  MR_Word * STATE_VARIABLE_Deps_9,
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
      *STATE_VARIABLE_Deps_9 = STATE_VARIABLE_Deps_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word ModuleIndex_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ModuleIndexes_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadSucceeded_40;
      MR_Word STATE_VARIABLE_Deps_49_49;
      MR_Word STATE_VARIABLE_Info_50_50;

      make__dependencies__find_target_dependencies_of_module_12_p_0(ProgressStream_1, KeepGoing_2, Globals_3, TargetType_4, ModuleIndex_34, &HeadSucceeded_40, STATE_VARIABLE_Deps_0_8, &STATE_VARIABLE_Deps_49_49, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_50_50);
      succeeded = (HeadSucceeded_40 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_2 == (MR_Integer) 0);
      if (succeeded)
      {
        *STATE_VARIABLE_Succeeded_7 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_50_50;
        *STATE_VARIABLE_Deps_9 = STATE_VARIABLE_Deps_49_49;
      }
      else
      {
        MR_Word STATE_VARIABLE_Succeeded_53_53;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6;
        MR_Word next_value_of_STATE_VARIABLE_Deps_0_8;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

        STATE_VARIABLE_Succeeded_53_53 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_6, HeadSucceeded_40);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = ModuleIndexes_35;
        next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_53_53;
        next_value_of_STATE_VARIABLE_Deps_0_8 = STATE_VARIABLE_Deps_49_49;
        next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_50_50;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
        STATE_VARIABLE_Deps_0_8 = next_value_of_STATE_VARIABLE_Deps_0_8;
        STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__find_target_dependencies_of_module_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word KeepGoing_14,
  MR_Word Globals_15,
  MR_Word TargetType_16,
  MR_Word ModuleIndex_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Deps_0_36,
  MR_Word * STATE_VARIABLE_Deps_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TargetType_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 8:
          {
            *Succeeded_18 = (MR_Integer) 1;
            *STATE_VARIABLE_Deps_37 = STATE_VARIABLE_Deps_0_36;
            *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            MR_Word DepSpecs_118;
            MR_Word NewDeps_119;
            MR_Word TrackFlags_146;
            MR_Word DepSpecsTracks_147;
            MR_Word IntermodOpt_149;
            MR_Word IntermodAnalysis_150;
            MR_Word AnyIntermod_151;
            MR_Word DepSpecsOpts_152;
            MR_Word DepSpecsRegistries_153;
            MR_Word Var_160;
            MR_Word Var_161;

            libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 669, &TrackFlags_146);
            switch (TrackFlags_146) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                DepSpecsTracks_147 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                DepSpecsTracks_147 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[31]));
                break;
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 502, &IntermodOpt_149);
            libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 507, &IntermodAnalysis_150);
            AnyIntermod_151 = mercury__bool__or_2_f_0(IntermodOpt_149, IntermodAnalysis_150);
            switch (AnyIntermod_151) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                DepSpecsOpts_152 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                DepSpecsOpts_152 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[40]));
                break;
            }
            switch (IntermodAnalysis_150) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                DepSpecsRegistries_153 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                DepSpecsRegistries_153 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[43]));
                break;
            }
            Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsOpts_152, DepSpecsRegistries_153);
            Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[37])), Var_161);
            DepSpecs_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsTracks_147, Var_160);
            make__dependencies__find_dep_specs_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, DepSpecs_118, Succeeded_18, &NewDeps_119, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_119, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            MR_Word NewDeps_117;

            make__dependencies__find_dep_specs_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[17])), Succeeded_18, &NewDeps_117, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_117, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word NewDeps_23;

            make__dependencies__find_dep_specs_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[18])), Succeeded_18, &NewDeps_23, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_23, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
          }
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 13:
          {
            MR_Word NewDeps_129;

            make__dependencies__find_dep_specs_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[30])), Succeeded_18, &NewDeps_129, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_129, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word NewDeps_131;

            make__dependencies__find_dep_specs_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[11])), Succeeded_18, &NewDeps_131, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_131, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word NewDeps_120;

            make__dependencies__find_dep_spec_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_2[2])), Succeeded_18, &NewDeps_120, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_120, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DepSpecs_118;
        MR_Word NewDeps_119;
        MR_Word TrackFlags_146;
        MR_Word DepSpecsTracks_147;
        MR_Word IntermodOpt_149;
        MR_Word IntermodAnalysis_150;
        MR_Word AnyIntermod_151;
        MR_Word DepSpecsOpts_152;
        MR_Word DepSpecsRegistries_153;
        MR_Word Var_160;
        MR_Word Var_161;

        libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 669, &TrackFlags_146);
        switch (TrackFlags_146) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DepSpecsTracks_147 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            DepSpecsTracks_147 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[31]));
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 502, &IntermodOpt_149);
        libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 507, &IntermodAnalysis_150);
        AnyIntermod_151 = mercury__bool__or_2_f_0(IntermodOpt_149, IntermodAnalysis_150);
        switch (AnyIntermod_151) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DepSpecsOpts_152 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            DepSpecsOpts_152 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[40]));
            break;
        }
        switch (IntermodAnalysis_150) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DepSpecsRegistries_153 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            DepSpecsRegistries_153 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[43]));
            break;
        }
        Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsOpts_152, DepSpecsRegistries_153);
        Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[37])), Var_161);
        DepSpecs_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dep_spec_0), DepSpecsTracks_147, Var_160);
        make__dependencies__find_dep_specs_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, DepSpecs_118, Succeeded_18, &NewDeps_119, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_119, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HighLevelCode_31;
        MR_Word DepSpecs_123;
        MR_Word NewDeps_124;
        MR_Word CompilationTarget_126;

        libs__globals__get_target_2_p_0(Globals_15, &CompilationTarget_126);
        libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 312, &HighLevelCode_31);
        succeeded = (CompilationTarget_126 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (HighLevelCode_31 == (MR_Integer) 1);
        if (succeeded)
          DepSpecs_123 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[54]));
        else
          DepSpecs_123 = (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[55]));
        make__dependencies__find_dep_specs_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, DepSpecs_123, Succeeded_18, &NewDeps_124, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_124, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TargetType_16, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word NewDeps_143;
            MR_Word CompilationTarget_141;

            libs__globals__get_target_2_p_0(Globals_15, &CompilationTarget_141);
            make__dependencies__find_dep_spec_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_2[10])), Succeeded_18, &NewDeps_143, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_143, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word NewDeps_121;
            MR_Word CompilationTarget_29;

            libs__globals__get_target_2_p_0(Globals_15, &CompilationTarget_29);
            make__dependencies__find_dep_spec_11_p_0(ProgressStream_13, KeepGoing_14, Globals_15, ModuleIndex_17, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_2[10])), Succeeded_18, &NewDeps_121, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
            make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), NewDeps_121, STATE_VARIABLE_Deps_0_36, STATE_VARIABLE_Deps_37);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__find_dep_spec_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word KeepGoing_13,
  MR_Word Globals_14,
  MR_Word ModuleIndex_15,
  MR_Word DepSpec_16,
  MR_Word * Succeeded_17,
  MR_Word * DepFileIndexSet_18,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) DepSpec_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(DepSpec_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__dependencies__find_dep_specs_11_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[53])), Succeeded_17, DepFileIndexSet_18, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Result0_29;

            succeeded = make__deps_cache__search_anc0_dir1_indir2_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_36, ModuleIndex_15, &Result0_29);
            if (succeeded)
            {
              *Succeeded_17 = ((MR_Unsigned) ((MR_hl_field(0, Result0_29, (MR_Integer) 0))) & (MR_Integer) 1);
              *DepFileIndexSet_18 = ((MR_Word) ((MR_hl_field(0, Result0_29, (MR_Integer) 1))));
              *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
            }
            else
            {
              MR_Word Result_30;
              MR_Word STATE_VARIABLE_Info_118_118;

              make__dependencies__find_dep_specs_11_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__dependencies_scalar_common_1[48])), Succeeded_17, DepFileIndexSet_18, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_118_118);
              {
                Result_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Result_30, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_17));
                MR_hl_field(0, Result_30, 1) = ((MR_Box) (*DepFileIndexSet_18));
              }
              make__deps_cache__add_to_anc0_dir1_indir2_intermod_cache_4_p_0(ModuleIndex_15, Result_30, STATE_VARIABLE_Info_118_118, STATE_VARIABLE_Info_37);
            }
          }
          break;
        case (MR_Integer) 2:
          make__dependencies__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, DepFileIndexSet_18, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
          break;
        case (MR_Integer) 3:
          make__dependencies__get_fact_table_files_9_p_0(ProgressStream_12, Globals_14, ModuleIndex_15, Succeeded_17, DepFileIndexSet_18, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
          break;
        case (MR_Integer) 4:
          make__dependencies__get_foreign_include_files_9_p_0(ProgressStream_12, Globals_14, ModuleIndex_15, Succeeded_17, DepFileIndexSet_18, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TargetType_24 = ((MR_Word) ((MR_hl_field(1, DepSpec_16, (MR_Integer) 0))));
        MR_Word Var_49;

        *Succeeded_17 = (MR_Integer) 1;
        Var_49 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
        make__dependencies__acc_rev_dfmi_target_6_p_0(TargetType_24, ModuleIndex_15, Var_49, DepFileIndexSet_18, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_25;
        MR_Word Ancestors_26;
        MR_Word ModuleIndexSet_27;
        MR_Word STATE_VARIABLE_Info_51_51;
        MR_Word TargetType_180 = ((MR_Word) ((MR_hl_field(2, DepSpec_16, (MR_Integer) 0))));

        *Succeeded_17 = (MR_Integer) 1;
        make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_36, ModuleIndex_15, &ModuleName_25);
        Ancestors_26 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_25);
        make__deps_set__module_names_to_index_set_4_p_0(Ancestors_26, &ModuleIndexSet_27, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_51_51);
        make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_27, TargetType_180, DepFileIndexSet_18, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_37);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DepSpec_16, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Info_53_53;
            MR_Word TargetType_181 = ((MR_Word) ((MR_hl_field(3, DepSpec_16, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_182;

            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_12, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_182, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_53_53);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_182, TargetType_181, DepFileIndexSet_18, STATE_VARIABLE_Info_53_53, STATE_VARIABLE_Info_37);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_56_56;
            MR_Word TargetType_183 = ((MR_Word) ((MR_hl_field(3, DepSpec_16, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_184;

            make__dependencies__get_direct_imports_intermod_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_184, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_56_56);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_184, TargetType_183, DepFileIndexSet_18, STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Info_37);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_Info_59_59;
            MR_Word TargetType_185 = ((MR_Word) ((MR_hl_field(3, DepSpec_16, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_186;

            make__dependencies__get_indirect_imports_non_intermod_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_186, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_59_59);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_186, TargetType_185, DepFileIndexSet_18, STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_37);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_Info_62_62;
            MR_Word TargetType_187 = ((MR_Word) ((MR_hl_field(3, DepSpec_16, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_188;

            make__dependencies__get_indirect_imports_intermod_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_188, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_62_62);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_188, TargetType_187, DepFileIndexSet_18, STATE_VARIABLE_Info_62_62, STATE_VARIABLE_Info_37);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word STATE_VARIABLE_Info_65_65;
            MR_Word TargetType_189 = ((MR_Word) ((MR_hl_field(3, DepSpec_16, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_190;

            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_109_111_100_95_105_109_112_111_114_116_115_95_95_91_50_93_95_48_10_p_0(ProgressStream_12, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_190, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_65_65);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_190, TargetType_189, DepFileIndexSet_18, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_37);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word STATE_VARIABLE_Info_68_68;
            MR_Word TargetType_191 = ((MR_Word) ((MR_hl_field(3, DepSpec_16, (MR_Integer) 1))));
            MR_Word ModuleIndexSet_192;

            make__dependencies__get_foreign_imports_intermod_trans_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_192, STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_68_68);
            make__dependencies__dfmi_targets_5_p_0(ModuleIndexSet_192, TargetType_191, DepFileIndexSet_18, STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Info_37);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__fold_dep_spec_over_modules_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word DepSpec_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_DepFileIndexSet_0_8,
  MR_Word * STATE_VARIABLE_DepFileIndexSet_9,
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
      *STATE_VARIABLE_DepFileIndexSet_9 = STATE_VARIABLE_DepFileIndexSet_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadDepFileIndexSet_41;
      MR_Word STATE_VARIABLE_Info_50_50;
      MR_Word STATE_VARIABLE_DepFileIndexSet_52_52;

      make__dependencies__find_dep_spec_11_p_0(ProgressStream_1, KeepGoing_2, Globals_3, MI_34, DepSpec_4, &HeadSucceeded_40, &HeadDepFileIndexSet_41, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_50_50);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), HeadDepFileIndexSet_41, STATE_VARIABLE_DepFileIndexSet_0_8, &STATE_VARIABLE_DepFileIndexSet_52_52);
      succeeded = (HeadSucceeded_40 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_2 == (MR_Integer) 0);
      if (succeeded)
      {
        *STATE_VARIABLE_Succeeded_7 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_50_50;
        *STATE_VARIABLE_DepFileIndexSet_9 = STATE_VARIABLE_DepFileIndexSet_52_52;
      }
      else
      {
        MR_Word STATE_VARIABLE_Succeeded_54_54;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6;
        MR_Word next_value_of_STATE_VARIABLE_DepFileIndexSet_0_8;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

        STATE_VARIABLE_Succeeded_54_54 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_6, HeadSucceeded_40);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = MIs_35;
        next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_54_54;
        next_value_of_STATE_VARIABLE_DepFileIndexSet_0_8 = STATE_VARIABLE_DepFileIndexSet_52_52;
        next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_50_50;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
        STATE_VARIABLE_DepFileIndexSet_0_8 = next_value_of_STATE_VARIABLE_DepFileIndexSet_0_8;
        STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0_1(
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
make__dependencies__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * DepFileIndexSet_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word Succeeded1_19;
  MR_Word Modules1_20;
  MR_Word STATE_VARIABLE_Info_27_27;
  MR_Word Succeeded1_35;
  MR_Word Modules1_36;
  MR_Word STATE_VARIABLE_Info_27_39;
  MR_Word AnyIntermod_46;

  libs__globals__get_any_intermod_2_p_0(Globals_13, &AnyIntermod_46);
  switch (AnyIntermod_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Succeeded1_35 = (MR_Integer) 1;
        Modules1_36 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_27_39 = STATE_VARIABLE_Info_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_47;

        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 503, &Transitive_47);
        switch (Transitive_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded1_35, &Modules1_36, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_39);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modules0_50;

              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &Succeeded1_35, &Modules0_50, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_27_39);
              make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_50, &Modules1_36);
            }
            break;
        }
      }
      break;
  }
  succeeded = (Succeeded1_35 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_12 == (MR_Integer) 0);
  if (succeeded)
  {
    Succeeded1_19 = (MR_Integer) 0;
    Modules1_20 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_27_39;
  }
  else
  {
    MR_Word ModuleList1_37;
    MR_Word AncestorModuleIndexSets_38;
    MR_Box conv2_STATE_VARIABLE_Info_27_27;

    ModuleList1_37 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules1_36);
    mercury__list__map_foldl_5_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__dependencies_scalar_common_6[0]), ModuleList1_37, &AncestorModuleIndexSets_38, ((MR_Box) (STATE_VARIABLE_Info_27_39)), &conv2_STATE_VARIABLE_Info_27_27);
    STATE_VARIABLE_Info_27_27 = ((MR_Word) (conv2_STATE_VARIABLE_Info_27_27));
    Modules1_20 = make__deps_set__deps_set_union_list_1_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), AncestorModuleIndexSets_38);
    Succeeded1_19 = Succeeded1_35;
  }
  succeeded = (Succeeded1_19 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_12 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_15 = (MR_Integer) 0;
    *DepFileIndexSet_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_27_27;
  }
  else
  {
    MR_Word ModuleList1_21;
    MR_Word Succeeded2_22;
    MR_Word Var_31;

    ModuleList1_21 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Modules1_20);
    Var_31 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    make__dependencies__fold_dep_spec_over_modules_13_p_0(ProgressStream_11, KeepGoing_12, Globals_13, (MR_Word) ((MR_Unsigned) 4U), ModuleList1_21, (MR_Integer) 1, &Succeeded2_22, Var_31, DepFileIndexSet_16, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_24);
    *Succeeded_15 = libs__maybe_util__and_2_f_0(Succeeded1_19, Succeeded2_22);
  }
}

static void MR_CALL 
make__dependencies__find_dep_specs_11_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word ModuleIndex_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Integer) 1;
    *HeadVar__7_7 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  }
  else
  {
    MR_Word HeadDepSpec_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word TailDepSpecs_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word HeadSucceeded_32;
    MR_Word HeadDepFileIndexSet_33;
    MR_Word STATE_VARIABLE_Info_40_40;

    make__dependencies__find_dep_spec_11_p_0(ProgressStream_1, KeepGoing_2, Globals_3, ModuleIndex_4, HeadDepSpec_26, &HeadSucceeded_32, &HeadDepFileIndexSet_33, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_40_40);
    succeeded = (HeadSucceeded_32 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_2 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__6_6 = (MR_Integer) 0;
      *HeadVar__7_7 = HeadDepFileIndexSet_33;
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_40_40;
    }
    else
    {
      MR_Word TailSucceeded_34;
      MR_Word TailDepFileIndexSet_35;

      make__dependencies__find_dep_specs_11_p_0(ProgressStream_1, KeepGoing_2, Globals_3, ModuleIndex_4, TailDepSpecs_27, &TailSucceeded_34, &TailDepFileIndexSet_35, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_9);
      *HeadVar__6_6 = libs__maybe_util__and_2_f_0(HeadSucceeded_32, TailSucceeded_34);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), HeadDepFileIndexSet_33, TailDepFileIndexSet_35, HeadVar__7_7);
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_109_111_100_95_105_109_112_111_114_116_115_95_95_91_50_93_95_48_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word AnyIntermod_19;

  libs__globals__get_any_intermod_2_p_0(Globals_13, &AnyIntermod_19);
  switch (AnyIntermod_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_15 = (MR_Integer) 1;
        *Modules_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_20;

        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 503, &Transitive_20);
        switch (Transitive_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, Succeeded_15, Modules_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modules0_27;

              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, Succeeded_15, &Modules0_27, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
              make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_27, Modules_16);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
make__dependencies__get_foreign_include_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DepFileIndexSet_19;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  make__dependencies__acc_dep_file_index_for_foreign_include_if_in_langset_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DepFileIndexSet_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepFileIndexSet_19));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__dependencies__get_foreign_include_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * DepFileIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word Languages_17;
  MR_Word ModuleName_18;
  MR_Word MaybeModuleDepInfo_19;
  MR_Word STATE_VARIABLE_Info_28_28;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_11, &Languages_17);
  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_24, ModuleIndex_12, &ModuleName_18);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_18, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
  if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_13 = (MR_Integer) 0;
    *DepFileIndexSet_14 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_28_28;
  }
  else
  {
    MR_Word ModuleDepInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_19, (MR_Integer) 0))));
    MR_String SourceFileName_21;
    MR_Word ForeignIncludeFiles_22;
    MR_Word LangSet_23;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Box conv3_DepFileIndexSet_14;
    MR_Box conv2_STATE_VARIABLE_Info_25;

    *Succeeded_13 = (MR_Integer) 1;
    parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo_20, &SourceFileName_21);
    parse_tree__module_dep_info__module_dep_info_get_foreign_include_files_2_p_0(ModuleDepInfo_20, &ForeignIncludeFiles_22);
    LangSet_23 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_17);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__dependencies_scalar_common_4[0]));
      MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__dependencies__get_foreign_include_files_9_p_0_1));
      MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_30, 3) = ((MR_Box) (LangSet_23));
      MR_hl_field(0, Var_30, 4) = ((MR_Box) (SourceFileName_21));
    }
    Var_31 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__dependencies_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_30, ForeignIncludeFiles_22, ((MR_Box) (Var_31)), &conv3_DepFileIndexSet_14, ((MR_Box) (STATE_VARIABLE_Info_28_28)), &conv2_STATE_VARIABLE_Info_25);
    *DepFileIndexSet_14 = ((MR_Word) (conv3_DepFileIndexSet_14));
    *STATE_VARIABLE_Info_25 = ((MR_Word) (conv2_STATE_VARIABLE_Info_25));
  }
}

static void MR_CALL 
make__dependencies__get_fact_table_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * DepFileIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word ModuleName_17;
  MR_Word MaybeModuleDepInfo_18;
  MR_Word STATE_VARIABLE_Info_25_25;

  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_21, ModuleIndex_12, &ModuleName_17);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_17, &MaybeModuleDepInfo_18, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_25_25);
  if ((MaybeModuleDepInfo_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_13 = (MR_Integer) 0;
    *DepFileIndexSet_14 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_25_25;
  }
  else
  {
    MR_Word ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, (MR_Integer) 0))));
    MR_Word FactTableFileNames_20;
    MR_Word Var_27;

    *Succeeded_13 = (MR_Integer) 1;
    parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_19, &FactTableFileNames_20);
    Var_27 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFileNames_20);
    make__deps_set__file_names_to_index_set_4_p_0(Var_27, DepFileIndexSet_14, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_22);
  }
}

static void MR_CALL 
make__dependencies__get_foreign_imports_intermod_trans_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_Word Languages_19;
  MR_Word LanguagesSet_20;
  MR_Word IntermodSucceeded_21;
  MR_Word IntermodModules_22;
  MR_Word IntermodSelfModules_23;
  MR_Word ForeignSucceeded_24;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word AnyIntermod_48;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_13, &Languages_19);
  LanguagesSet_20 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_19);
  libs__globals__get_any_intermod_2_p_0(Globals_13, &AnyIntermod_48);
  switch (AnyIntermod_48) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        IntermodSucceeded_21 = (MR_Integer) 1;
        IntermodModules_22 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_49;

        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 503, &Transitive_49);
        switch (Transitive_49) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &IntermodSucceeded_21, &IntermodModules_22, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modules0_52;

              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &IntermodSucceeded_21, &Modules0_52, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
              make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_52, &IntermodModules_22);
            }
            break;
        }
      }
      break;
  }
  make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), IntermodModules_22, &IntermodSelfModules_23);
  Var_32 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), IntermodSelfModules_23);
  Var_34 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_50_95_95_91_53_93_95_48_13_p_0(LanguagesSet_20, ProgressStream_11, KeepGoing_12, Globals_13, Var_32, (MR_Integer) 1, &ForeignSucceeded_24, Var_34, Modules_16, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26);
  *Succeeded_15 = libs__maybe_util__and_2_f_0(IntermodSucceeded_21, ForeignSucceeded_24);
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_50_95_95_91_53_93_95_48_13_p_0(
  MR_Word Var_56,
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_8,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_9,
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
      *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadModuleIndexSet_41;
      MR_Word STATE_VARIABLE_Info_50_50;
      MR_Word STATE_VARIABLE_ModuleIndexSet_52_52;

      make__dependencies__get_foreign_imports_non_intermod_trans_11_p_0(Var_56, ProgressStream_1, KeepGoing_2, Globals_3, MI_34, &HeadSucceeded_40, &HeadModuleIndexSet_41, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_50_50);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), HeadModuleIndexSet_41, STATE_VARIABLE_ModuleIndexSet_0_8, &STATE_VARIABLE_ModuleIndexSet_52_52);
      succeeded = (HeadSucceeded_40 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_2 == (MR_Integer) 0);
      if (succeeded)
      {
        *STATE_VARIABLE_Succeeded_7 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_50_50;
        *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_52_52;
      }
      else
      {
        MR_Word STATE_VARIABLE_Succeeded_54_54;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6;
        MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

        STATE_VARIABLE_Succeeded_54_54 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_6, HeadSucceeded_40);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = MIs_35;
        next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_54_54;
        next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8 = STATE_VARIABLE_ModuleIndexSet_52_52;
        next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_50_50;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
        STATE_VARIABLE_ModuleIndexSet_0_8 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
        STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__get_foreign_imports_non_intermod_trans_11_p_0(
  MR_Word LangSet_12,
  MR_Word ProgressStream_13,
  MR_Word KeepGoing_14,
  MR_Word Globals_15,
  MR_Word ModuleIndex_16,
  MR_Word * Succeeded_17,
  MR_Word * ForeignModules_18,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word Result0_21;

  succeeded = make__deps_cache__search_foreign_imports_non_intermod_trans_cache_3_p_0(STATE_VARIABLE_Info_0_25, ModuleIndex_16, &Result0_21);
  if (succeeded)
  {
    *Succeeded_17 = ((MR_Unsigned) ((MR_hl_field(0, Result0_21, (MR_Integer) 0))) & (MR_Integer) 1);
    *ForeignModules_18 = ((MR_Word) ((MR_hl_field(0, Result0_21, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
  {
    MR_Word Succeeded0_22;
    MR_Word ImportedModules_23;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word Modules0_51;

    make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_13, Globals_15, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_16, &Succeeded0_22, &Modules0_51, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
    make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_16)), Modules0_51, &ImportedModules_23);
    switch (Succeeded0_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_17 = (MR_Integer) 0;
          *ForeignModules_18 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_29_29;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Result_24;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word STATE_VARIABLE_Info_35_35;
          MR_Word Var_37;

          Var_37 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ImportedModules_23, ((MR_Box) (ModuleIndex_16)));
          Var_32 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), Var_37);
          Var_34 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_49_95_95_91_53_93_95_48_13_p_0(LangSet_12, ProgressStream_13, KeepGoing_14, Globals_15, Var_32, (MR_Integer) 1, Succeeded_17, Var_34, ForeignModules_18, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_35_35);
          {
            Result_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Result_24, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_17));
            MR_hl_field(0, Result_24, 1) = ((MR_Box) (*ForeignModules_18));
          }
          make__deps_cache__add_to_foreign_imports_non_intermod_trans_cache_4_p_0(ModuleIndex_16, Result_24, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_26);
        }
        break;
    }
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_49_95_95_91_53_93_95_48_13_p_0(
  MR_Word Var_56,
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_8,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_9,
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
      *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadModuleIndexSet_41;
      MR_Word STATE_VARIABLE_Info_50_50;
      MR_Word STATE_VARIABLE_ModuleIndexSet_52_52;

      make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0(Var_56, ProgressStream_1, Globals_3, MI_34, &HeadSucceeded_40, &HeadModuleIndexSet_41, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_50_50);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), HeadModuleIndexSet_41, STATE_VARIABLE_ModuleIndexSet_0_8, &STATE_VARIABLE_ModuleIndexSet_52_52);
      succeeded = (HeadSucceeded_40 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_2 == (MR_Integer) 0);
      if (succeeded)
      {
        *STATE_VARIABLE_Succeeded_7 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_50_50;
        *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_52_52;
      }
      else
      {
        MR_Word STATE_VARIABLE_Succeeded_54_54;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6;
        MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

        STATE_VARIABLE_Succeeded_54_54 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_6, HeadSucceeded_40);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = MIs_35;
        next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_54_54;
        next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8 = STATE_VARIABLE_ModuleIndexSet_52_52;
        next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_50_50;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
        STATE_VARIABLE_ModuleIndexSet_0_8 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
        STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_DepsSet_15;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  make__dependencies__acc_module_index_if_for_lang_in_set_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_DepsSet_15, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DepsSet_15));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0(
  MR_Word LangSet_12,
  MR_Word ProgressStream_13,
  MR_Word Globals_15,
  MR_Word ModuleIndex_16,
  MR_Word * Succeeded_17,
  MR_Word * ForeignModules_18,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_Word ModuleName_21;
  MR_Word MaybeModuleDepInfo_22;
  MR_Word STATE_VARIABLE_Info_29_29;

  make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_25, ModuleIndex_16, &ModuleName_21);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_13, Globals_15, ModuleName_21, &MaybeModuleDepInfo_22, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
  if ((MaybeModuleDepInfo_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ForeignModules_18 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *Succeeded_17 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_29_29;
  }
  else
  {
    MR_Word ModuleDepInfo_23 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_22, (MR_Integer) 0))));
    MR_Word FIMSpecs_24;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv3_ForeignModules_18;
    MR_Box conv2_STATE_VARIABLE_Info_26;

    parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(ModuleDepInfo_23, &FIMSpecs_24);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&make__dependencies_scalar_common_3[1]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0_1));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (LangSet_12));
    }
    Var_32 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&make__dependencies_scalar_common_1[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_31, FIMSpecs_24, ((MR_Box) (Var_32)), &conv3_ForeignModules_18, ((MR_Box) (STATE_VARIABLE_Info_29_29)), &conv2_STATE_VARIABLE_Info_26);
    *ForeignModules_18 = ((MR_Word) (conv3_ForeignModules_18));
    *STATE_VARIABLE_Info_26 = ((MR_Word) (conv2_STATE_VARIABLE_Info_26));
    *Succeeded_17 = (MR_Integer) 1;
  }
}

static void MR_CALL 
make__dependencies__get_indirect_imports_intermod_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * IndirectIntermodImportModules_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word Result0_19;

  succeeded = make__deps_cache__search_indirect_imports_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_23, ModuleIndex_14, &Result0_19);
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, Result0_19, (MR_Integer) 0))) & (MR_Integer) 1);
    *IndirectIntermodImportModules_16 = ((MR_Word) ((MR_hl_field(0, Result0_19, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word DirectSucceeded_20;
    MR_Word DirectImportModules_21;
    MR_Word Result_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word Result0_30;

    succeeded = make__deps_cache__search_direct_imports_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_23, ModuleIndex_14, &Result0_30);
    if (succeeded)
    {
      DirectSucceeded_20 = ((MR_Unsigned) ((MR_hl_field(0, Result0_30, (MR_Integer) 0))) & (MR_Integer) 1);
      DirectImportModules_21 = ((MR_Word) ((MR_hl_field(0, Result0_30, (MR_Integer) 1))));
      STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word Succeeded0_31;
      MR_Word Modules0_32;
      MR_Word Result_38;
      MR_Word STATE_VARIABLE_Info_32_39;
      MR_Word STATE_VARIABLE_Info_39_46;

      make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded0_31, &Modules0_32, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_32_39);
      succeeded = (Succeeded0_31 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_12 == (MR_Integer) 0);
      if (succeeded)
      {
        DirectSucceeded_20 = (MR_Integer) 0;
        DirectImportModules_21 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_39_46 = STATE_VARIABLE_Info_32_39;
      }
      else
      {
        MR_Word Succeeded1_33;
        MR_Word IntermodModules_34;
        MR_Word STATE_VARIABLE_Info_34_41;
        MR_Word AnyIntermod_52;

        libs__globals__get_any_intermod_2_p_0(Globals_13, &AnyIntermod_52);
        switch (AnyIntermod_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Succeeded1_33 = (MR_Integer) 1;
              IntermodModules_34 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
              STATE_VARIABLE_Info_34_41 = STATE_VARIABLE_Info_32_39;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Transitive_53;

              libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 503, &Transitive_53);
              switch (Transitive_53) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded1_33, &IntermodModules_34, STATE_VARIABLE_Info_32_39, &STATE_VARIABLE_Info_34_41);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Modules0_56;

                    make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &Succeeded1_33, &Modules0_56, STATE_VARIABLE_Info_32_39, &STATE_VARIABLE_Info_34_41);
                    make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_56, &IntermodModules_34);
                  }
                  break;
              }
            }
            break;
        }
        succeeded = (Succeeded1_33 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_12 == (MR_Integer) 0);
        if (succeeded)
        {
          DirectSucceeded_20 = (MR_Integer) 0;
          DirectImportModules_21 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
          STATE_VARIABLE_Info_39_46 = STATE_VARIABLE_Info_34_41;
        }
        else
        {
          MR_Word Modules1_35;
          MR_Word Succeeded2_36;
          MR_Word Modules2_37;
          MR_Word Var_44;
          MR_Word Var_47;

          make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IntermodModules_34, Modules0_32, &Modules1_35);
          Var_44 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), IntermodModules_34);
          make__dependencies__fold_find_modules_over_modules__ho4_13_p_0(ProgressStream_11, KeepGoing_12, Globals_13, Var_44, (MR_Integer) 1, &Succeeded2_36, Modules1_35, &Modules2_37, STATE_VARIABLE_Info_34_41, &STATE_VARIABLE_Info_39_46);
          Var_47 = libs__maybe_util__and_2_f_0(Succeeded0_31, Succeeded1_33);
          DirectSucceeded_20 = libs__maybe_util__and_2_f_0(Var_47, Succeeded2_36);
          make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules2_37, &DirectImportModules_21);
        }
      }
      {
        Result_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_38, 0) = (MR_Box) ((MR_Unsigned) (DirectSucceeded_20));
        MR_hl_field(0, Result_38, 1) = ((MR_Box) (DirectImportModules_21));
      }
      make__deps_cache__add_to_direct_imports_intermod_cache_4_p_0(ModuleIndex_14, Result_38, STATE_VARIABLE_Info_39_46, &STATE_VARIABLE_Info_27_27);
    }
    make__dependencies__get_indirect_imports_uncached_12_p_0(ProgressStream_11, KeepGoing_12, Globals_13, ModuleIndex_14, DirectSucceeded_20, DirectImportModules_21, Succeeded_15, IndirectIntermodImportModules_16, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_29_29);
    {
      Result_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_22, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_22, 1) = ((MR_Box) (*IndirectIntermodImportModules_16));
    }
    make__deps_cache__add_to_indirect_imports_intermod_cache_4_p_0(ModuleIndex_14, Result_22, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
make__dependencies__get_indirect_imports_uncached_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word KeepGoing_14,
  MR_Word Globals_15,
  MR_Word ModuleIndex_16,
  MR_Word DirectSucceeded_17,
  MR_Word DirectImports_18,
  MR_Word * Succeeded_19,
  MR_Word * IndirectImports_20,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded = (DirectSucceeded_17 == (MR_Integer) 0);

  if (succeeded)
    succeeded = (KeepGoing_14 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_19 = (MR_Integer) 0;
    *IndirectImports_20 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  }
  else
  {
    MR_Word IndirectSucceeded_23;
    MR_Word IndirectImports0_24;
    MR_Word IndirectImports1_25;
    MR_Word Var_31;
    MR_Word Var_33;

    Var_31 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), DirectImports_18);
    Var_33 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__fold_find_modules_over_modules__ho3_13_p_0(ProgressStream_13, KeepGoing_14, Globals_15, Var_31, (MR_Integer) 1, &IndirectSucceeded_23, Var_33, &IndirectImports0_24, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
    make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_16)), IndirectImports0_24, &IndirectImports1_25);
    *IndirectImports_20 = make__deps_set__deps_set_difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IndirectImports1_25, DirectImports_18);
    *Succeeded_19 = libs__maybe_util__and_2_f_0(DirectSucceeded_17, IndirectSucceeded_23);
  }
}

static void MR_CALL 
make__dependencies__get_indirect_imports_non_intermod_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * IndirectNonIntermodImportModules_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word DirectSucceeded_19;
  MR_Word DirectImportModules_20;
  MR_Word STATE_VARIABLE_Info_25_25;

  make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &DirectSucceeded_19, &DirectImportModules_20, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_25_25);
  succeeded = (DirectSucceeded_19 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_12 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_15 = (MR_Integer) 0;
    *IndirectNonIntermodImportModules_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_25_25;
  }
  else
  {
    MR_Word IndirectSucceeded_27;
    MR_Word IndirectImports0_28;
    MR_Word IndirectImports1_29;
    MR_Word Var_31;
    MR_Word Var_33;

    Var_31 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), DirectImportModules_20);
    Var_33 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__dependencies__fold_find_modules_over_modules__ho3_13_p_0(ProgressStream_11, KeepGoing_12, Globals_13, Var_31, (MR_Integer) 1, &IndirectSucceeded_27, Var_33, &IndirectImports0_28, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_22);
    make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), IndirectImports0_28, &IndirectImports1_29);
    *IndirectNonIntermodImportModules_16 = make__deps_set__deps_set_difference_2_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IndirectImports1_29, DirectImportModules_20);
    *Succeeded_15 = libs__maybe_util__and_2_f_0(DirectSucceeded_19, IndirectSucceeded_27);
  }
}

static void MR_CALL 
make__dependencies__fold_find_modules_over_modules__ho3_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_8,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_9,
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
      *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadModuleIndexSet_41;
      MR_Word STATE_VARIABLE_Info_50_50;
      MR_Word STATE_VARIABLE_ModuleIndexSet_52_52;
      MR_Word Modules0_56;

      make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_1, Globals_3, (MR_Integer) 1, (MR_Integer) 1, MI_34, &HeadSucceeded_40, &Modules0_56, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_50_50);
      make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (MI_34)), Modules0_56, &HeadModuleIndexSet_41);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), HeadModuleIndexSet_41, STATE_VARIABLE_ModuleIndexSet_0_8, &STATE_VARIABLE_ModuleIndexSet_52_52);
      succeeded = (HeadSucceeded_40 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_2 == (MR_Integer) 0);
      if (succeeded)
      {
        *STATE_VARIABLE_Succeeded_7 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_50_50;
        *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_52_52;
      }
      else
      {
        MR_Word STATE_VARIABLE_Succeeded_54_54;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6;
        MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

        STATE_VARIABLE_Succeeded_54_54 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_6, HeadSucceeded_40);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = MIs_35;
        next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_54_54;
        next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8 = STATE_VARIABLE_ModuleIndexSet_52_52;
        next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_50_50;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
        STATE_VARIABLE_ModuleIndexSet_0_8 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
        STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__get_direct_imports_intermod_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word Result0_19;

  succeeded = make__deps_cache__search_direct_imports_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_28, ModuleIndex_14, &Result0_19);
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, Result0_19, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_16 = ((MR_Word) ((MR_hl_field(0, Result0_19, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
  }
  else
  {
    MR_Word Succeeded0_20;
    MR_Word Modules0_21;
    MR_Word Result_27;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_39_39;

    make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded0_20, &Modules0_21, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32);
    succeeded = (Succeeded0_20 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_12 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_15 = (MR_Integer) 0;
      *Modules_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_32_32;
    }
    else
    {
      MR_Word Succeeded1_22;
      MR_Word IntermodModules_23;
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word AnyIntermod_56;

      libs__globals__get_any_intermod_2_p_0(Globals_13, &AnyIntermod_56);
      switch (AnyIntermod_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Succeeded1_22 = (MR_Integer) 1;
            IntermodModules_23 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
            STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_32_32;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Transitive_57;

            libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 503, &Transitive_57);
            switch (Transitive_57) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded1_22, &IntermodModules_23, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_34_34);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Modules0_60;

                  make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &Succeeded1_22, &Modules0_60, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_34_34);
                  make__deps_set__deps_set_insert_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_60, &IntermodModules_23);
                }
                break;
            }
          }
          break;
      }
      succeeded = (Succeeded1_22 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_12 == (MR_Integer) 0);
      if (succeeded)
      {
        *Succeeded_15 = (MR_Integer) 0;
        *Modules_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_34_34;
      }
      else
      {
        MR_Word Modules1_24;
        MR_Word Succeeded2_25;
        MR_Word Modules2_26;
        MR_Word Var_37;
        MR_Word Var_41;

        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), IntermodModules_23, Modules0_21, &Modules1_24);
        Var_37 = make__deps_set__deps_set_to_sorted_list_1_f_0((MR_Word) (&make__dependencies_scalar_common_1[0]), IntermodModules_23);
        make__dependencies__fold_find_modules_over_modules__ho4_13_p_0(ProgressStream_11, KeepGoing_12, Globals_13, Var_37, (MR_Integer) 1, &Succeeded2_25, Modules1_24, &Modules2_26, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_39_39);
        Var_41 = libs__maybe_util__and_2_f_0(Succeeded0_20, Succeeded1_22);
        *Succeeded_15 = libs__maybe_util__and_2_f_0(Var_41, Succeeded2_25);
        make__deps_set__deps_set_delete_3_p_0((MR_Word) (&make__dependencies_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules2_26, Modules_16);
      }
    }
    {
      Result_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_27, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_27, 1) = ((MR_Box) (*Modules_16));
    }
    make__deps_cache__add_to_direct_imports_intermod_cache_4_p_0(ModuleIndex_14, Result_27, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_29);
  }
}

static void MR_CALL 
make__dependencies__fold_find_modules_over_modules__ho4_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_8,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_9,
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
      *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadModuleIndexSet_41;
      MR_Word STATE_VARIABLE_Info_50_50;
      MR_Word STATE_VARIABLE_ModuleIndexSet_52_52;

      make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_1, Globals_3, MI_34, &HeadSucceeded_40, &HeadModuleIndexSet_41, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_50_50);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), HeadModuleIndexSet_41, STATE_VARIABLE_ModuleIndexSet_0_8, &STATE_VARIABLE_ModuleIndexSet_52_52);
      succeeded = (HeadSucceeded_40 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_2 == (MR_Integer) 0);
      if (succeeded)
      {
        *STATE_VARIABLE_Succeeded_7 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_50_50;
        *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_52_52;
      }
      else
      {
        MR_Word STATE_VARIABLE_Succeeded_54_54;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6;
        MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

        STATE_VARIABLE_Succeeded_54_54 = libs__maybe_util__and_2_f_0(STATE_VARIABLE_Succeeded_0_6, HeadSucceeded_40);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = MIs_35;
        next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_54_54;
        next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8 = STATE_VARIABLE_ModuleIndexSet_52_52;
        next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_50_50;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
        STATE_VARIABLE_ModuleIndexSet_0_8 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
        STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word Result0_19;

  succeeded = make__deps_cache__search_direct_imports_non_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_21, ModuleIndex_14, &Result0_19);
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, Result0_19, (MR_Integer) 0))) & (MR_Integer) 1);
    *Modules_16 = ((MR_Word) ((MR_hl_field(0, Result0_19, (MR_Integer) 1))));
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
  else
  {
    MR_Word Result_20;
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Word ModuleName_26;
    MR_Word MaybeModuleDepInfo_27;
    MR_Word STATE_VARIABLE_Info_36_39;

    make__deps_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_21, ModuleIndex_14, &ModuleName_26);
    make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_13, ModuleName_26, &MaybeModuleDepInfo_27, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_36_39);
    if ((MaybeModuleDepInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_15 = (MR_Integer) 0;
      *Modules_16 = make__deps_set__deps_set_init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_25_25 = STATE_VARIABLE_Info_36_39;
    }
    else
    {
      MR_Word ModuleDepInfo_28 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_27, (MR_Integer) 0))));
      MR_Word IntDeps_29;
      MR_Word ImpDeps_30;
      MR_Word DepsInt_31;
      MR_Word DepsImp_32;
      MR_Word Modules0_33;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_Info_39_42;
      MR_Word Var_43;
      MR_Word STATE_VARIABLE_Info_41_44;

      parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_28, &IntDeps_29);
      parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_28, &ImpDeps_30);
      Var_41 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_29);
      make__deps_set__module_names_to_index_set_4_p_0(Var_41, &DepsInt_31, STATE_VARIABLE_Info_36_39, &STATE_VARIABLE_Info_39_42);
      Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDeps_30);
      make__deps_set__module_names_to_index_set_4_p_0(Var_43, &DepsImp_32, STATE_VARIABLE_Info_39_42, &STATE_VARIABLE_Info_41_44);
      make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), DepsInt_31, DepsImp_32, &Modules0_33);
      if (((MR_tag((MR_Word) ModuleName_26)) == (MR_Integer) 1))
      {
        MR_Word ParentModule_34 = ((MR_Word) ((MR_hl_field(1, ModuleName_26, (MR_Integer) 0))));
        MR_Word ParentIndex_36;
        MR_Word ParentImports_37;
        MR_Word STATE_VARIABLE_Info_42_45;

        make__deps_set__module_name_to_index_4_p_0(ParentModule_34, &ParentIndex_36, STATE_VARIABLE_Info_41_44, &STATE_VARIABLE_Info_42_45);
        make__dependencies__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ParentIndex_36, Succeeded_15, &ParentImports_37, STATE_VARIABLE_Info_42_45, &STATE_VARIABLE_Info_25_25);
        make__deps_set__deps_set_union_3_p_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ParentImports_37, Modules0_33, Modules_16);
      }
      else
      {
        *Succeeded_15 = (MR_Integer) 1;
        *Modules_16 = Modules0_33;
        STATE_VARIABLE_Info_25_25 = STATE_VARIABLE_Info_41_44;
      }
    }
    {
      Result_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_20, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_20, 1) = ((MR_Box) (*Modules_16));
    }
    make__deps_cache__add_to_direct_imports_non_intermod_cache_4_p_0(ModuleIndex_14, Result_20, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_22);
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
