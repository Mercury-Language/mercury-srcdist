/*
** Automatically generated from `make.prereqs.m'
** by the Mercury compiler,
** version rotd-2026-01-29
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


// :- module make.prereqs.
// :- implementation.

/*
INIT mercury__make__prereqs__init
ENDINIT
*/

#include "make.prereqs.mih"


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
#include "backend_libs.link_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.file_names.mih"
#include "make.find_local_modules.mih"
#include "make.get_module_dep_info.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.prereqs_cache.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_module_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_target_id_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct10 make__prereqs____vpti_pred_10__plain_io__type_ctor_info_text_output_stream_0__plain_make__make_info__type_ctor_info_maybe_keep_going_0__plain_libs__globals__type_ctor_info_globals_0__plain_make__index_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 make__prereqs__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_target_id_0;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_find_prereqs_result_0_0[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_find_prereqs_result_0_0;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_find_prereqs_result_0_1[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_find_prereqs_result_0_1;

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_find_prereqs_result_0_0[1];

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_find_prereqs_result_0_1[1];

static const MR_DuPtagLayout make__prereqs__make__prereqs__du_ptag_ordered_find_prereqs_result_0[2];

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_name_ordered_find_prereqs_result_0[2];

static const MR_Integer make__prereqs__make__prereqs__functor_number_map_find_prereqs_result_0[2];

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_0[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_0;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_1[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_1;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_2[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_2;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_3[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_3;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_4[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_4;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_5[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_5;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_6[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_6;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_7[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_7;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_8[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_8;

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_9[1];

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_9;

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_10;

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_11;

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_12;

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_13;

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_0[4];

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_1[1];

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_2[1];

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_3[8];

static const MR_DuPtagLayout make__prereqs__make__prereqs__du_ptag_ordered_prereq_spec_0[4];

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_name_ordered_prereq_spec_0[14];

static const MR_Integer make__prereqs__make__prereqs__functor_number_map_prereq_spec_0[14];

static void MR_CALL 
make__prereqs__IntroducedFrom__pred__find_direct_prereqs_of_target_file__244__1_4_p_0(
  MR_Word ProgressStream_11,
  MR_String LambdaHeadVar__1_69);

static void MR_CALL 
make__prereqs____Compare____prereq_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__prereqs____Unify____prereq_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__prereqs____Compare____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_101_114_101_113_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__prereqs____Unify____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_101_114_101_113_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__prereqs__acc_dep_file_index_for_foreign_include_if_in_langset_7_p_0(
  MR_Word LangSet_8,
  MR_String SourceFileName_9,
  MR_Word ForeignInclude_10,
  MR_Word STATE_VARIABLE_TargetIdIndexSet_0_18,
  MR_Word * STATE_VARIABLE_TargetIdIndexSet_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
make__prereqs__index_get_ancestors_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word * AncestorModuleIndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__prereqs__acc_module_index_if_for_lang_in_set_6_p_0(
  MR_Word LangSet_7,
  MR_Word FIMSpec_8,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_14,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__prereqs__acc_rev_timi_target_6_p_0(
  MR_Word TargetType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_TargetIdIndexSet_0_13,
  MR_Word * STATE_VARIABLE_TargetIdIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
make__prereqs__find_direct_prereqs_of_target_file_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__prereqs__find_direct_prereqs_of_target_file_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_direct_prereqs_of_nested_module_targets_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word TargetType_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_Prereqs_0_8,
  MR_Word * STATE_VARIABLE_Prereqs_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__prereqs__find_direct_prereqs_of_module_target_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word KeepGoing_13,
  MR_Word Globals_14,
  MR_Word TargetType_15,
  MR_Word ModuleIndex_16,
  MR_Word * Succeeded_17,
  MR_Word * Prereqs_18,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word KeepGoing_13,
  MR_Word Globals_14,
  MR_Word ModuleIndex_15,
  MR_Word PrereqSpec_16,
  MR_Word * Succeeded_17,
  MR_Word * TargetIdIndexSet_18,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
make__prereqs__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__prereqs__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * STATE_VARIABLE_Succeeded_23,
  MR_Word * TargetIdIndexSet_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__prereqs__fold_prereq_spec_over_modules_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word PrereqSpec_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_TargetIdIndexSet_0_8,
  MR_Word * STATE_VARIABLE_TargetIdIndexSet_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
make__prereqs__find_prereqs_from_specs_12_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word ModuleIndex_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Succeeded_0_7,
  MR_Word * STATE_VARIABLE_Succeeded_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_108_111_99_97_108_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalModuleIndexSet_0_3,
  MR_Word * STATE_VARIABLE_LocalModuleIndexSet_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_109_111_100_95_105_109_112_111_114_116_115_95_95_91_50_93_95_48_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__prereqs__get_foreign_incl_fact_table_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__get_foreign_incl_fact_table_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * TargetIdIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
make__prereqs__get_foreign_imports_intermod_trans_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_50_95_95_91_53_93_95_48_13_p_0(
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
make__prereqs__get_foreign_imports_non_intermod_trans_11_p_0(
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
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_49_95_95_91_53_93_95_48_13_p_0(
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
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0(
  MR_Word LangSet_12,
  MR_Word ProgressStream_13,
  MR_Word Globals_15,
  MR_Word ModuleIndex_16,
  MR_Word * Succeeded_17,
  MR_Word * ForeignModules_18,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__prereqs__get_indirect_imports_intermod_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * IndirectIntermodImportModules_16,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
make__prereqs__get_indirect_imports_uncached_12_p_0(
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
make__prereqs__get_indirect_imports_non_intermod_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * IndirectNonIntermodImportModules_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__prereqs__fold_find_modules_over_modules__ho3_13_p_0(
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
make__prereqs__get_direct_imports_intermod_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__prereqs__fold_find_modules_over_modules__ho4_13_p_0(
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
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * Succeeded_15,
  MR_Word * Modules_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static MR_bool MR_CALL 
make__prereqs____Unify____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__prereqs____Compare____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__prereqs____Unify____find_prereqs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs____Compare____find_prereqs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__prereqs____Unify____prereq_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs____Compare____prereq_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__prereqs_scalar_common_1[61][2];

static /* final */ const MR_Box make__prereqs_scalar_common_2[11][1];

static /* final */ const MR_Box make__prereqs_scalar_common_3[3][9];

static /* final */ const MR_Box make__prereqs_scalar_common_4[1][10];

static /* final */ const MR_Box make__prereqs_scalar_common_5[2][7];

static /* final */ const MR_Box make__prereqs_scalar_common_6[1][3];




static /* final */ const MR_Box make__prereqs_scalar_common_1[61][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__index_set__module_index__arity0__)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__index_set__target_id_index__arity0__)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_module_index_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(2, &make__prereqs_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 44U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[3])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[4])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[4])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[4])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(2, &make__prereqs_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(2, &make__prereqs_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 28U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(2, &make__prereqs_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &make__prereqs_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(2, &make__prereqs_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[33])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_1[34])))
  },
};

static /* final */ const MR_Box make__prereqs_scalar_common_2[11][1] = {
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
  { ((MR_Box) (MR_mkword(1, &make__prereqs_scalar_common_2[4]))) },
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

static /* final */ const MR_Box make__prereqs_scalar_common_3[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__prereqs__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_target_id_index_0)),
    ((MR_Box) (&make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_target_id_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__prereqs_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&make__prereqs__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_target_id_index_0)),
    ((MR_Box) (&make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_target_id_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__prereqs_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__prereqs_scalar_common_6[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__prereqs_scalar_common_5[0])),
    ((MR_Box) (make__prereqs__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0_1)),
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


static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_module_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&make__index_set__make__index_set__type_ctor_info_module_index_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs__sparse_bitset__pti_sparse_bitset_1__plain_make__index_set__type_ctor_info_target_id_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_VA_PseudoTypeInfo_Struct10 make__prereqs____vpti_pred_10__plain_io__type_ctor_info_text_output_stream_0__plain_make__make_info__type_ctor_info_maybe_keep_going_0__plain_libs__globals__type_ctor_info_globals_0__plain_make__index_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 10,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_maybe_keep_going_0),
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__index_set__make__index_set__type_ctor_info_module_index_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) (&make__prereqs__sparse_bitset__pti_sparse_bitset_1__pseudo_1),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct make__prereqs__make__prereqs__type_ctor_info_find_module_deps_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__prereqs____Unify____find_module_deps_1_0_10001)),
  ((MR_Box) (make__prereqs____Compare____find_module_deps_1_0_10001)),
  (MR_String) "make.prereqs",
  (MR_String) "find_module_deps",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__prereqs____vpti_pred_10__plain_io__type_ctor_info_text_output_stream_0__plain_make__make_info__type_ctor_info_maybe_keep_going_0__plain_libs__globals__type_ctor_info_globals_0__plain_make__index_set__type_ctor_info_module_index_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_sparse_bitset__pti_sparse_bitset_1__pseudo_1__plain_make__make_info__type_ctor_info_make_info_0__plain_make__make_info__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 make__prereqs__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_target_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_id_0) }
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_find_prereqs_result_0_0[1] = { (MR_PseudoTypeInfo) (&make__prereqs__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_target_id_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_find_prereqs_result_0_0 = {
  (MR_String) "could_not_find_some_prereqs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__prereqs__make__prereqs__field_types_find_prereqs_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_find_prereqs_result_0_1[1] = { (MR_PseudoTypeInfo) (&make__prereqs__set_ordlist__ti_set_ordlist_1make__make_info__type_ctor_info_target_id_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_find_prereqs_result_0_1 = {
  (MR_String) "found_all_prereqs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__prereqs__make__prereqs__field_types_find_prereqs_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_find_prereqs_result_0_0[1] = { &make__prereqs__make__prereqs__du_functor_desc_find_prereqs_result_0_0 };

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_find_prereqs_result_0_1[1] = { &make__prereqs__make__prereqs__du_functor_desc_find_prereqs_result_0_1 };

static const MR_DuPtagLayout make__prereqs__make__prereqs__du_ptag_ordered_find_prereqs_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__prereqs__make__prereqs__du_stag_ordered_find_prereqs_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__prereqs__make__prereqs__du_stag_ordered_find_prereqs_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_name_ordered_find_prereqs_result_0[2] = {
  &make__prereqs__make__prereqs__du_functor_desc_find_prereqs_result_0_0,
  &make__prereqs__make__prereqs__du_functor_desc_find_prereqs_result_0_1
};

static const MR_Integer make__prereqs__make__prereqs__functor_number_map_find_prereqs_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__prereqs__make__prereqs__type_ctor_info_find_prereqs_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__prereqs____Unify____find_prereqs_result_0_0_10001)),
  ((MR_Box) (make__prereqs____Compare____find_prereqs_result_0_0_10001)),
  (MR_String) "make.prereqs",
  (MR_String) "find_prereqs_result",
  { make__prereqs__make__prereqs__du_name_ordered_find_prereqs_result_0 },
  { make__prereqs__make__prereqs__du_ptag_ordered_find_prereqs_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__prereqs__make__prereqs__functor_number_map_find_prereqs_result_0,

};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_0[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_0 = {
  (MR_String) "self",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_1[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_1 = {
  (MR_String) "ancestors",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_2[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_2 = {
  (MR_String) "direct_imports_non_intermod_local",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_3[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_3 = {
  (MR_String) "direct_imports_non_intermod",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_4[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_4 = {
  (MR_String) "direct_imports_intermod",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_5[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_5 = {
  (MR_String) "indirect_imports_non_intermod_local",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_6[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_6 = {
  (MR_String) "indirect_imports_non_intermod",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(6),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_7[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_7 = {
  (MR_String) "indirect_imports_intermod",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(7),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_8[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_8 = {
  (MR_String) "intermod_imports",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(8),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__prereqs__make__prereqs__field_types_prereq_spec_0_9[1] = { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0) };

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_9 = {
  (MR_String) "foreign_imports_intermod_trans",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(9),
  make__prereqs__make__prereqs__field_types_prereq_spec_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_10 = {
  (MR_String) "anc0_dir1_indir2_non_intermod",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_11 = {
  (MR_String) "anc0_dir1_indir2_intermod",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_12 = {
  (MR_String) "anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_13 = {
  (MR_String) "self_foreign_incl_fact_table_files",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_0[4] = {
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_10,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_11,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_12,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_13
};

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_1[1] = { &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_0 };

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_2[1] = { &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_1 };

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_3[8] = {
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_2,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_3,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_4,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_5,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_6,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_7,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_8,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_9
};

static const MR_DuPtagLayout make__prereqs__make__prereqs__du_ptag_ordered_prereq_spec_0[4] = {
  {
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(8),
    MR_SECTAG_REMOTE_FULL_WORD,
    make__prereqs__make__prereqs__du_stag_ordered_prereq_spec_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__prereqs__make__prereqs__du_name_ordered_prereq_spec_0[14] = {
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_11,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_12,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_10,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_1,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_4,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_3,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_2,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_9,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_7,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_6,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_5,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_8,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_0,
  &make__prereqs__make__prereqs__du_functor_desc_prereq_spec_0_13
};

static const MR_Integer make__prereqs__make__prereqs__functor_number_map_prereq_spec_0[14] = {
  (MR_Integer) 12,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 10,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 13
};

const MR_TypeCtorInfo_Struct make__prereqs__make__prereqs__type_ctor_info_prereq_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__prereqs____Unify____prereq_spec_0_0_10001)),
  ((MR_Box) (make__prereqs____Compare____prereq_spec_0_0_10001)),
  (MR_String) "make.prereqs",
  (MR_String) "prereq_spec",
  { make__prereqs__make__prereqs__du_name_ordered_prereq_spec_0 },
  { make__prereqs__make__prereqs__du_ptag_ordered_prereq_spec_0 },
  (MR_Integer) 14,
  UINT16_C(12),
  make__prereqs__make__prereqs__functor_number_map_prereq_spec_0,

};

static void MR_CALL 
make__prereqs__IntroducedFrom__pred__find_direct_prereqs_of_target_file__244__1_4_p_0(
  MR_Word ProgressStream_11,
  MR_String LambdaHeadVar__1_69)
{
  MR_Word Var_73;
  MR_Word Var_74;

  {
    Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_74, 1) = ((MR_Box) (LambdaHeadVar__1_69));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_5_p_0(ProgressStream_11, (MR_String) "\t%s\n", Var_73);
}

static void MR_CALL 
make__prereqs____Compare____prereq_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
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
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_10, ArgY1_11);
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_12, ArgY1_13);
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_14, ArgY1_15);
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_16, ArgY1_17);
                    }
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ArgX1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_18, ArgY1_19);
                    }
                    break;
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 6:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ArgX1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_20, ArgY1_21);
                    }
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 7:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ArgX1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      make__make_info____Compare____module_target_type_0_0(HeadVar__1_1, ArgX1_22, ArgY1_23);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
make__prereqs____Unify____prereq_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_25 == CastY_26);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_24 == CastX_23);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_7, ArgY1_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_9, ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_11, ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_13, ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_15, ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_17, ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_19, ArgY1_20);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = make__make_info____Unify____module_target_type_0_0(ArgX1_21, ArgY1_22);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
make__prereqs____Compare____find_prereqs_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
  }
}

MR_bool MR_CALL 
make__prereqs____Unify____find_prereqs_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&make__prereqs_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_10_10 = (MR_Word) (&make__prereqs_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
make__prereqs____Compare____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_101_114_101_113_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_101_114_101_113_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
make__prereqs____Unify____find_module_deps_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_101_114_101_113_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_101_114_101_113_115_95_95_102_105_110_100_95_109_111_100_117_108_101_95_100_101_112_115_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
make__prereqs__acc_dep_file_index_for_foreign_include_if_in_langset_7_p_0(
  MR_Word LangSet_8,
  MR_String SourceFileName_9,
  MR_Word ForeignInclude_10,
  MR_Word STATE_VARIABLE_TargetIdIndexSet_0_18,
  MR_Word * STATE_VARIABLE_TargetIdIndexSet_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(0, ForeignInclude_10, 0))) & (MR_Integer) 3);
  MR_String IncludeFileName_14 = ((MR_String) ((MR_hl_field(0, ForeignInclude_10, 1))));

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_8, ((MR_Box) (Lang_13)));
  if (succeeded)
  {
    MR_String IncludePath_15;
    MR_Word TargetId_16;
    MR_Word TargetIdIndex_17;

    parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_9, IncludeFileName_14, &IncludePath_15);
    {
      TargetId_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TargetId_16, 0) = ((MR_Box) (IncludePath_15));
    }
    make__index_set__target_id_to_index_4_p_0(TargetId_16, &TargetIdIndex_17, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
    make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[2]), ((MR_Box) (TargetIdIndex_17)), STATE_VARIABLE_TargetIdIndexSet_0_18, STATE_VARIABLE_TargetIdIndexSet_19);
  }
  else
  {
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    *STATE_VARIABLE_TargetIdIndexSet_19 = STATE_VARIABLE_TargetIdIndexSet_0_18;
  }
}

static void MR_CALL 
make__prereqs__index_get_ancestors_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word * AncestorModuleIndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word ModuleName_8;
  MR_Word AncestorModuleNames_9;

  make__index_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_10, ModuleIndex_5, &ModuleName_8);
  AncestorModuleNames_9 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_8);
  make__index_set__module_names_to_index_set_4_p_0(AncestorModuleNames_9, AncestorModuleIndexSet_6, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
}

static void MR_CALL 
make__prereqs__acc_module_index_if_for_lang_in_set_6_p_0(
  MR_Word LangSet_7,
  MR_Word FIMSpec_8,
  MR_Word STATE_VARIABLE_ModuleIndexSet_0_14,
  MR_Word * STATE_VARIABLE_ModuleIndexSet_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word Lang_11 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_8, 0))) & (MR_Integer) 3);
  MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, FIMSpec_8, 1))));

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangSet_7, ((MR_Box) (Lang_11)));
  if (succeeded)
  {
    MR_Word ModuleIndex_13;

    make__index_set__module_name_to_index_4_p_0(ModuleName_12, &ModuleIndex_13, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_13)), STATE_VARIABLE_ModuleIndexSet_0_14, STATE_VARIABLE_ModuleIndexSet_15);
  }
  else
  {
    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
    *STATE_VARIABLE_ModuleIndexSet_15 = STATE_VARIABLE_ModuleIndexSet_0_14;
  }
}

static void MR_CALL 
make__prereqs__acc_rev_timi_target_6_p_0(
  MR_Word TargetType_7,
  MR_Word ModuleIndex_8,
  MR_Word STATE_VARIABLE_TargetIdIndexSet_0_13,
  MR_Word * STATE_VARIABLE_TargetIdIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word TargetId_11;
  MR_Word TargetIdIndex_12;

  {
    TargetId_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TargetId_11, 0) = ((MR_Box) (ModuleIndex_8));
    MR_hl_field(0, TargetId_11, 1) = ((MR_Box) (TargetType_7));
  }
  make__index_set__target_id_to_index_4_p_0(TargetId_11, &TargetIdIndex_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[2]), ((MR_Box) (TargetIdIndex_12)), STATE_VARIABLE_TargetIdIndexSet_0_13, STATE_VARIABLE_TargetIdIndexSet_14);
}

static void MR_CALL 
make__prereqs__find_direct_prereqs_of_target_file_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__prereqs__IntroducedFrom__pred__find_direct_prereqs_of_target_file__244__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
make__prereqs__find_direct_prereqs_of_target_file_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__3_3;
  MR_String conv0_HeadVar__4_4;

  make__file_names__target_id_to_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
make__prereqs__find_direct_prereqs_of_target_file_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word CompilationTaskType_13,
  MR_Word ModuleDepInfo_14,
  MR_Word TargetFile_15,
  MR_Word * PrereqsResult_16,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  MR_bool succeeded;
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(0, TargetFile_15, 0))));
  MR_Word TargetType_20 = ((MR_Word) ((MR_hl_field(0, TargetFile_15, 1))));
  MR_Word KeepGoing_27;
  MR_Word ModulesToCheck_28;
  MR_Word Succeeded_30;
  MR_Word PrereqIndexes0_31;
  MR_Word ToDelete_36;
  MR_Word PrereqIndexes_38;
  MR_Word Prereqs_39;
  MR_Word DebugMake_40;
  MR_Word STATE_VARIABLE_Info_2_57;

  KeepGoing_27 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_51);
  switch (MR_tag((MR_Word) CompilationTaskType_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeTopModule_22;
        MR_Word NestedSubModulesToCheck_130;

        parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_14, &MaybeTopModule_22);
        NestedSubModulesToCheck_130 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_22);
        if ((NestedSubModulesToCheck_130 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ModuleIndex_124;
          MR_Word STATE_VARIABLE_Info_1_126;

          {
            ModulesToCheck_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ModulesToCheck_28, 0) = ((MR_Box) (ModuleName_19));
            MR_hl_field(1, ModulesToCheck_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          make__index_set__module_name_to_index_4_p_0(ModuleName_19, &ModuleIndex_124, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_1_126);
          make__prereqs__find_direct_prereqs_of_module_target_11_p_0(ProgressStream_11, KeepGoing_27, Globals_12, TargetType_20, ModuleIndex_124, &Succeeded_30, &PrereqIndexes0_31, STATE_VARIABLE_Info_1_126, &STATE_VARIABLE_Info_2_57);
        }
        else
        {
          MR_Word ModuleIndexesToCheckSet_34;
          MR_Word ModuleIndexesToCheck_35;
          MR_Word STATE_VARIABLE_Info_3_59;
          MR_Word Var_61;

          {
            ModulesToCheck_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ModulesToCheck_28, 0) = ((MR_Box) (ModuleName_19));
            MR_hl_field(1, ModulesToCheck_28, 1) = ((MR_Box) (NestedSubModulesToCheck_130));
          }
          make__index_set__module_names_to_index_set_4_p_0(ModulesToCheck_28, &ModuleIndexesToCheckSet_34, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_3_59);
          ModuleIndexesToCheck_35 = make__index_set__index_set_to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ModuleIndexesToCheckSet_34);
          Var_61 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
          make__prereqs__find_direct_prereqs_of_nested_module_targets_13_p_0(ProgressStream_11, KeepGoing_27, Globals_12, TargetType_20, ModuleIndexesToCheck_35, (MR_Integer) 1, &Succeeded_30, Var_61, &PrereqIndexes0_31, STATE_VARIABLE_Info_3_59, &STATE_VARIABLE_Info_2_57);
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word ModuleIndex_29;
        MR_Word STATE_VARIABLE_Info_1_56;

        {
          ModulesToCheck_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ModulesToCheck_28, 0) = ((MR_Box) (ModuleName_19));
          MR_hl_field(1, ModulesToCheck_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        make__index_set__module_name_to_index_4_p_0(ModuleName_19, &ModuleIndex_29, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_1_56);
        make__prereqs__find_direct_prereqs_of_module_target_11_p_0(ProgressStream_11, KeepGoing_27, Globals_12, TargetType_20, ModuleIndex_29, &Succeeded_30, &PrereqIndexes0_31, STATE_VARIABLE_Info_1_56, &STATE_VARIABLE_Info_2_57);
      }
      break;
  }
  succeeded = (TargetType_20 == (MR_Word) ((MR_Unsigned) 8U));
  if (succeeded)
  {
    MR_Word ToDeleteIndexes_37;

    ToDelete_36 = make__util__make_target_id_list_2_f_0(ModulesToCheck_28, (MR_Word) ((MR_Unsigned) 8U));
    make__index_set__target_ids_to_index_set_4_p_0(ToDelete_36, &ToDeleteIndexes_37, STATE_VARIABLE_Info_2_57, STATE_VARIABLE_Info_52);
    PrereqIndexes_38 = make__index_set__index_set_difference_2_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0), PrereqIndexes0_31, ToDeleteIndexes_37);
  }
  else
  {
    ToDelete_36 = (MR_Word) ((MR_Unsigned) 0U);
    PrereqIndexes_38 = PrereqIndexes0_31;
    *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_2_57;
  }
  make__index_set__target_id_index_set_to_plain_set_3_p_0(*STATE_VARIABLE_Info_52, PrereqIndexes_38, &Prereqs_39);
  switch (Succeeded_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *PrereqsResult_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Prereqs_39));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *PrereqsResult_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Prereqs_39));
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 726, &DebugMake_40);
  switch (DebugMake_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PrereqFileNames_41;
        MR_Word WriteFileName_43;
        MR_Word Var_67;
        MR_String Var_80;
        MR_String Var_83;
        MR_Word _PrereqFileNamesProposed_42;
        MR_Box conv2_STATE_VARIABLE_IO_3_68;
        MR_Box conv3_STATE_VARIABLE_IO_5_85;

        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[2]));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (make__prereqs__find_direct_prereqs_of_target_file_10_p_0_1));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (Globals_12));
        }
        mercury__set__map2_fold_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, Prereqs_39, &PrereqFileNames_41, &_PrereqFileNamesProposed_42, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_3_68);
        {
          WriteFileName_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, WriteFileName_43, 0) = ((MR_Box) (&make__prereqs_scalar_common_5[1]));
          MR_hl_field(0, WriteFileName_43, 1) = ((MR_Box) (make__prereqs__find_direct_prereqs_of_target_file_10_p_0_2));
          MR_hl_field(0, WriteFileName_43, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, WriteFileName_43, 3) = ((MR_Box) (ProgressStream_11));
        }
        Var_80 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_19);
        Var_83 = mercury__string__string_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), ((MR_Box) (TargetType_20)));
        mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "direct prereqs of ");
        mercury__io__write_string_4_p_0(ProgressStream_11, Var_80);
        mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) " ");
        mercury__io__write_string_4_p_0(ProgressStream_11, Var_83);
        mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) ":\n");
        mercury__set__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteFileName_43, PrereqFileNames_41, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_5_85);
        if (!((ToDelete_36 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word ToDeleteFileNames_49;
          MR_Word _ToDeleteFileNamesProposed_50;
          MR_Box conv4_STATE_VARIABLE_IO_6_87;
          MR_Box conv5_STATE_VARIABLE_IO_8_90;

          mercury__list__map2_foldl_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, ToDelete_36, &ToDeleteFileNames_49, &_ToDeleteFileNamesProposed_50, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_6_87);
          mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "after deleting:\n");
          mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteFileName_43, ToDeleteFileNames_49, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_8_90);
        }
        mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "end direct prereqs\n");
      }
      break;
  }
}

static void MR_CALL 
make__prereqs__find_direct_prereqs_of_nested_module_targets_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word TargetType_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_Prereqs_0_8,
  MR_Word * STATE_VARIABLE_Prereqs_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      *STATE_VARIABLE_Prereqs_9 = STATE_VARIABLE_Prereqs_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word ModuleIndex_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ModuleIndexes_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadPrereqs_41;
      MR_Word StopOrContinue_42;
      MR_Word STATE_VARIABLE_Info_1_51;
      MR_Word STATE_VARIABLE_Prereqs_1_53;
      MR_Word STATE_VARIABLE_Succeeded_1_54;

      make__prereqs__find_direct_prereqs_of_module_target_11_p_0(ProgressStream_1, KeepGoing_2, Globals_3, TargetType_4, ModuleIndex_34, &HeadSucceeded_40, &HeadPrereqs_41, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_51);
      make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0), HeadPrereqs_41, STATE_VARIABLE_Prereqs_0_8, &STATE_VARIABLE_Prereqs_1_53);
      make__util__should_we_stop_or_continue_5_p_0(KeepGoing_2, HeadSucceeded_40, &StopOrContinue_42, STATE_VARIABLE_Succeeded_0_6, &STATE_VARIABLE_Succeeded_1_54);
      switch (StopOrContinue_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__5_5 = ModuleIndexes_35;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_1_54;
            MR_Word next_value_of_STATE_VARIABLE_Prereqs_0_8 = STATE_VARIABLE_Prereqs_1_53;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_1_51;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
            STATE_VARIABLE_Prereqs_0_8 = next_value_of_STATE_VARIABLE_Prereqs_0_8;
            STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_1_54;
            *STATE_VARIABLE_Prereqs_9 = STATE_VARIABLE_Prereqs_1_53;
            *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_1_51;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__prereqs__find_direct_prereqs_of_module_target_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word KeepGoing_13,
  MR_Word Globals_14,
  MR_Word TargetType_15,
  MR_Word ModuleIndex_16,
  MR_Word * Succeeded_17,
  MR_Word * Prereqs_18,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TargetType_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 8:
          {
            *Succeeded_17 = (MR_Integer) 1;
            *Prereqs_18 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
            *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            MR_Word PrereqSpecs_119;
            MR_Word TrackFlags_128;
            MR_Word PrereqSpecsTracks_129;
            MR_Word IntermodOpt_131;
            MR_Word IntermodAnalysis_132;
            MR_Word AnyIntermod_133;
            MR_Word PrereqSpecsOpts_134;
            MR_Word PrereqSpecsRegistries_135;
            MR_Word Var_142;
            MR_Word Var_143;

            libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 467, &TrackFlags_128);
            switch (TrackFlags_128) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                PrereqSpecsTracks_129 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                PrereqSpecsTracks_129 = (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[37]));
                break;
            }
            libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 427, &IntermodOpt_131);
            libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 434, &IntermodAnalysis_132);
            AnyIntermod_133 = mercury__bool__or_2_f_0(IntermodOpt_131, IntermodAnalysis_132);
            switch (AnyIntermod_133) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                PrereqSpecsOpts_134 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                PrereqSpecsOpts_134 = (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[45]));
                break;
            }
            switch (IntermodAnalysis_132) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                PrereqSpecsRegistries_135 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                PrereqSpecsRegistries_135 = (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[48]));
                break;
            }
            Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__prereqs__make__prereqs__type_ctor_info_prereq_spec_0), PrereqSpecsOpts_134, PrereqSpecsRegistries_135);
            Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__prereqs__make__prereqs__type_ctor_info_prereq_spec_0), (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[42])), Var_143);
            PrereqSpecs_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__prereqs__make__prereqs__type_ctor_info_prereq_spec_0), PrereqSpecsTracks_129, Var_142);
            make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_16, PrereqSpecs_119, Prereqs_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_16, (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[18])), Prereqs_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          break;
        case (MR_Integer) 5:
          make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_16, (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[19])), Prereqs_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          break;
        case (MR_Integer) 6:
        case (MR_Integer) 13:
          make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_16, (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[36])), Prereqs_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          break;
        case (MR_Integer) 7:
          make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_16, (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[12])), Prereqs_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          break;
        case (MR_Integer) 12:
          make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_16, (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[24])), Prereqs_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PrereqSpecs_119;
        MR_Word TrackFlags_128;
        MR_Word PrereqSpecsTracks_129;
        MR_Word IntermodOpt_131;
        MR_Word IntermodAnalysis_132;
        MR_Word AnyIntermod_133;
        MR_Word PrereqSpecsOpts_134;
        MR_Word PrereqSpecsRegistries_135;
        MR_Word Var_142;
        MR_Word Var_143;

        libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 467, &TrackFlags_128);
        switch (TrackFlags_128) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            PrereqSpecsTracks_129 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            PrereqSpecsTracks_129 = (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[37]));
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 427, &IntermodOpt_131);
        libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 434, &IntermodAnalysis_132);
        AnyIntermod_133 = mercury__bool__or_2_f_0(IntermodOpt_131, IntermodAnalysis_132);
        switch (AnyIntermod_133) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            PrereqSpecsOpts_134 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            PrereqSpecsOpts_134 = (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[45]));
            break;
        }
        switch (IntermodAnalysis_132) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            PrereqSpecsRegistries_135 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            PrereqSpecsRegistries_135 = (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[48]));
            break;
        }
        Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__prereqs__make__prereqs__type_ctor_info_prereq_spec_0), PrereqSpecsOpts_134, PrereqSpecsRegistries_135);
        Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__prereqs__make__prereqs__type_ctor_info_prereq_spec_0), (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[42])), Var_143);
        PrereqSpecs_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__prereqs__make__prereqs__type_ctor_info_prereq_spec_0), PrereqSpecsTracks_129, Var_142);
        make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_16, PrereqSpecs_119, Prereqs_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word HighLevelCode_28;
        MR_Word PrereqSpecs_121;
        MR_Word CompilationTarget_123;

        libs__globals__get_target_2_p_0(Globals_14, &CompilationTarget_123);
        libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 55, &HighLevelCode_28);
        succeeded = (CompilationTarget_123 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (HighLevelCode_28 == (MR_Integer) 1);
        if (succeeded)
          PrereqSpecs_121 = (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[59]));
        else
          PrereqSpecs_121 = (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[60]));
        make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_16, PrereqSpecs_121, Prereqs_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CompilationTarget_25;

        libs__globals__get_target_2_p_0(Globals_14, &CompilationTarget_25);
        make__prereqs__find_prereqs_from_spec_11_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_16, (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_2[10])), Succeeded_17, Prereqs_18, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      }
      break;
  }
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv33_STATE_VARIABLE_TargetIdIndexSet_14;
  MR_Word conv32_STATE_VARIABLE_Info_16;

  make__prereqs__acc_rev_timi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv33_STATE_VARIABLE_TargetIdIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv32_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv33_STATE_VARIABLE_TargetIdIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv32_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv29_STATE_VARIABLE_TargetIdIndexSet_14;
  MR_Word conv28_STATE_VARIABLE_Info_16;

  make__prereqs__acc_rev_timi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv29_STATE_VARIABLE_TargetIdIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv28_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv29_STATE_VARIABLE_TargetIdIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv28_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv25_STATE_VARIABLE_TargetIdIndexSet_14;
  MR_Word conv24_STATE_VARIABLE_Info_16;

  make__prereqs__acc_rev_timi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv25_STATE_VARIABLE_TargetIdIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv24_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv25_STATE_VARIABLE_TargetIdIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv24_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv21_STATE_VARIABLE_TargetIdIndexSet_14;
  MR_Word conv20_STATE_VARIABLE_Info_16;

  make__prereqs__acc_rev_timi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv21_STATE_VARIABLE_TargetIdIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv20_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv21_STATE_VARIABLE_TargetIdIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv20_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_STATE_VARIABLE_TargetIdIndexSet_14;
  MR_Word conv16_STATE_VARIABLE_Info_16;

  make__prereqs__acc_rev_timi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_STATE_VARIABLE_TargetIdIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv16_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv17_STATE_VARIABLE_TargetIdIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv16_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_TargetIdIndexSet_14;
  MR_Word conv12_STATE_VARIABLE_Info_16;

  make__prereqs__acc_rev_timi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_TargetIdIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_TargetIdIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_TargetIdIndexSet_14;
  MR_Word conv8_STATE_VARIABLE_Info_16;

  make__prereqs__acc_rev_timi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_TargetIdIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_TargetIdIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_TargetIdIndexSet_14;
  MR_Word conv4_STATE_VARIABLE_Info_16;

  make__prereqs__acc_rev_timi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_TargetIdIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_TargetIdIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TargetIdIndexSet_14;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  make__prereqs__acc_rev_timi_target_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TargetIdIndexSet_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TargetIdIndexSet_14));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
make__prereqs__find_prereqs_from_spec_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word KeepGoing_13,
  MR_Word Globals_14,
  MR_Word ModuleIndex_15,
  MR_Word PrereqSpec_16,
  MR_Word * Succeeded_17,
  MR_Word * TargetIdIndexSet_18,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) PrereqSpec_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(PrereqSpec_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[58])), TargetIdIndexSet_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Result0_31;

            succeeded = make__prereqs_cache__search_anc0_dir1_indir2_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_38, ModuleIndex_15, &Result0_31);
            if (succeeded)
            {
              *Succeeded_17 = ((MR_Unsigned) ((MR_hl_field(0, Result0_31, 0))) & (MR_Integer) 1);
              *TargetIdIndexSet_18 = ((MR_Word) ((MR_hl_field(0, Result0_31, 1))));
              *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
            }
            else
            {
              MR_Word Result_32;
              MR_Word STATE_VARIABLE_Info_23_133;

              make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, (MR_Word) (MR_mkword(1, &make__prereqs_scalar_common_1[53])), TargetIdIndexSet_18, (MR_Integer) 1, Succeeded_17, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_23_133);
              {
                Result_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Result_32, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_17));
                MR_hl_field(0, Result_32, 1) = ((MR_Box) (*TargetIdIndexSet_18));
              }
              make__prereqs_cache__add_to_anc0_dir1_indir2_intermod_cache_4_p_0(ModuleIndex_15, Result_32, STATE_VARIABLE_Info_23_133, STATE_VARIABLE_Info_39);
            }
          }
          break;
        case (MR_Integer) 2:
          make__prereqs__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, TargetIdIndexSet_18, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
          break;
        case (MR_Integer) 3:
          make__prereqs__get_foreign_incl_fact_table_files_9_p_0(ProgressStream_12, Globals_14, ModuleIndex_15, Succeeded_17, TargetIdIndexSet_18, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TargetType_24 = ((MR_Word) ((MR_hl_field(1, PrereqSpec_16, 0))));
        MR_Word Var_365;
        MR_Word TargetId_367;
        MR_Word TargetIdIndex_368;

        *Succeeded_17 = (MR_Integer) 1;
        Var_365 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
        {
          TargetId_367 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TargetId_367, 0) = ((MR_Box) (ModuleIndex_15));
          MR_hl_field(0, TargetId_367, 1) = ((MR_Box) (TargetType_24));
        }
        make__index_set__target_id_to_index_4_p_0(TargetId_367, &TargetIdIndex_368, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
        make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[2]), ((MR_Box) (TargetIdIndex_368)), Var_365, TargetIdIndexSet_18);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_25;
        MR_Word Ancestors_26;
        MR_Word ModuleIndexSet_27;
        MR_Word STATE_VARIABLE_Info_2_52;
        MR_Word TargetType_193 = ((MR_Word) ((MR_hl_field(2, PrereqSpec_16, 0))));
        MR_Word Var_311;
        MR_Word Var_312;
        MR_Box conv3_TargetIdIndexSet_18;
        MR_Box conv2_STATE_VARIABLE_Info_39;

        *Succeeded_17 = (MR_Integer) 1;
        make__index_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_38, ModuleIndex_15, &ModuleName_25);
        Ancestors_26 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_25);
        make__index_set__module_names_to_index_set_4_p_0(Ancestors_26, &ModuleIndexSet_27, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_2_52);
        {
          Var_311 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_311, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[1]));
          MR_hl_field(0, Var_311, 1) = ((MR_Box) (make__prereqs__find_prereqs_from_spec_11_p_0_1));
          MR_hl_field(0, Var_311, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_311, 3) = ((MR_Box) (TargetType_193));
        }
        Var_312 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
        make__index_set__index_set_foldl2_6_p_0((MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_1[0]), Var_311, ModuleIndexSet_27, ((MR_Box) (Var_312)), &conv3_TargetIdIndexSet_18, ((MR_Box) (STATE_VARIABLE_Info_2_52)), &conv2_STATE_VARIABLE_Info_39);
        *TargetIdIndexSet_18 = ((MR_Word) (conv3_TargetIdIndexSet_18));
        *STATE_VARIABLE_Info_39 = ((MR_Word) (conv2_STATE_VARIABLE_Info_39));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, PrereqSpec_16, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ModuleIndexSet0_28;
            MR_Word ModuleIndexes0_29;
            MR_Word STATE_VARIABLE_Info_4_54;
            MR_Word Var_56;
            MR_Word STATE_VARIABLE_Info_5_57;
            MR_Word TargetType_194 = ((MR_Word) ((MR_hl_field(3, PrereqSpec_16, 1))));
            MR_Word ModuleIndexSet_195;
            MR_Word Var_329;
            MR_Word Var_330;
            MR_Box conv15_TargetIdIndexSet_18;
            MR_Box conv14_STATE_VARIABLE_Info_39;

            make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_12, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet0_28, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_4_54);
            ModuleIndexes0_29 = make__index_set__index_set_to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ModuleIndexSet0_28);
            Var_56 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
            make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_108_111_99_97_108_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(ModuleIndexes0_29, Var_56, &ModuleIndexSet_195, STATE_VARIABLE_Info_4_54, &STATE_VARIABLE_Info_5_57);
            {
              Var_329 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_329, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[1]));
              MR_hl_field(0, Var_329, 1) = ((MR_Box) (make__prereqs__find_prereqs_from_spec_11_p_0_4));
              MR_hl_field(0, Var_329, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_329, 3) = ((MR_Box) (TargetType_194));
            }
            Var_330 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
            make__index_set__index_set_foldl2_6_p_0((MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_1[0]), Var_329, ModuleIndexSet_195, ((MR_Box) (Var_330)), &conv15_TargetIdIndexSet_18, ((MR_Box) (STATE_VARIABLE_Info_5_57)), &conv14_STATE_VARIABLE_Info_39);
            *TargetIdIndexSet_18 = ((MR_Word) (conv15_TargetIdIndexSet_18));
            *STATE_VARIABLE_Info_39 = ((MR_Word) (conv14_STATE_VARIABLE_Info_39));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_7_60;
            MR_Word TargetType_196 = ((MR_Word) ((MR_hl_field(3, PrereqSpec_16, 1))));
            MR_Word ModuleIndexSet_197;
            MR_Word Var_323;
            MR_Word Var_324;
            MR_Box conv11_TargetIdIndexSet_18;
            MR_Box conv10_STATE_VARIABLE_Info_39;

            make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_12, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_197, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_7_60);
            {
              Var_323 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_323, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[1]));
              MR_hl_field(0, Var_323, 1) = ((MR_Box) (make__prereqs__find_prereqs_from_spec_11_p_0_3));
              MR_hl_field(0, Var_323, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_323, 3) = ((MR_Box) (TargetType_196));
            }
            Var_324 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
            make__index_set__index_set_foldl2_6_p_0((MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_1[0]), Var_323, ModuleIndexSet_197, ((MR_Box) (Var_324)), &conv11_TargetIdIndexSet_18, ((MR_Box) (STATE_VARIABLE_Info_7_60)), &conv10_STATE_VARIABLE_Info_39);
            *TargetIdIndexSet_18 = ((MR_Word) (conv11_TargetIdIndexSet_18));
            *STATE_VARIABLE_Info_39 = ((MR_Word) (conv10_STATE_VARIABLE_Info_39));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_Info_9_63;
            MR_Word TargetType_198 = ((MR_Word) ((MR_hl_field(3, PrereqSpec_16, 1))));
            MR_Word ModuleIndexSet_199;
            MR_Word Var_317;
            MR_Word Var_318;
            MR_Box conv7_TargetIdIndexSet_18;
            MR_Box conv6_STATE_VARIABLE_Info_39;

            make__prereqs__get_direct_imports_intermod_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_199, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_9_63);
            {
              Var_317 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_317, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[1]));
              MR_hl_field(0, Var_317, 1) = ((MR_Box) (make__prereqs__find_prereqs_from_spec_11_p_0_2));
              MR_hl_field(0, Var_317, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_317, 3) = ((MR_Box) (TargetType_198));
            }
            Var_318 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
            make__index_set__index_set_foldl2_6_p_0((MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_1[0]), Var_317, ModuleIndexSet_199, ((MR_Box) (Var_318)), &conv7_TargetIdIndexSet_18, ((MR_Box) (STATE_VARIABLE_Info_9_63)), &conv6_STATE_VARIABLE_Info_39);
            *TargetIdIndexSet_18 = ((MR_Word) (conv7_TargetIdIndexSet_18));
            *STATE_VARIABLE_Info_39 = ((MR_Word) (conv6_STATE_VARIABLE_Info_39));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_Info_11_66;
            MR_Word Var_68;
            MR_Word STATE_VARIABLE_Info_12_69;
            MR_Word TargetType_200 = ((MR_Word) ((MR_hl_field(3, PrereqSpec_16, 1))));
            MR_Word ModuleIndexSet_201;
            MR_Word ModuleIndexSet0_202;
            MR_Word ModuleIndexes0_203;
            MR_Word Var_353;
            MR_Word Var_354;
            MR_Box conv31_TargetIdIndexSet_18;
            MR_Box conv30_STATE_VARIABLE_Info_39;

            make__prereqs__get_indirect_imports_non_intermod_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet0_202, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_11_66);
            ModuleIndexes0_203 = make__index_set__index_set_to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ModuleIndexSet0_202);
            Var_68 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
            make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_108_111_99_97_108_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(ModuleIndexes0_203, Var_68, &ModuleIndexSet_201, STATE_VARIABLE_Info_11_66, &STATE_VARIABLE_Info_12_69);
            {
              Var_353 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_353, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[1]));
              MR_hl_field(0, Var_353, 1) = ((MR_Box) (make__prereqs__find_prereqs_from_spec_11_p_0_8));
              MR_hl_field(0, Var_353, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_353, 3) = ((MR_Box) (TargetType_200));
            }
            Var_354 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
            make__index_set__index_set_foldl2_6_p_0((MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_1[0]), Var_353, ModuleIndexSet_201, ((MR_Box) (Var_354)), &conv31_TargetIdIndexSet_18, ((MR_Box) (STATE_VARIABLE_Info_12_69)), &conv30_STATE_VARIABLE_Info_39);
            *TargetIdIndexSet_18 = ((MR_Word) (conv31_TargetIdIndexSet_18));
            *STATE_VARIABLE_Info_39 = ((MR_Word) (conv30_STATE_VARIABLE_Info_39));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word STATE_VARIABLE_Info_14_72;
            MR_Word TargetType_204 = ((MR_Word) ((MR_hl_field(3, PrereqSpec_16, 1))));
            MR_Word ModuleIndexSet_205;
            MR_Word Var_347;
            MR_Word Var_348;
            MR_Box conv27_TargetIdIndexSet_18;
            MR_Box conv26_STATE_VARIABLE_Info_39;

            make__prereqs__get_indirect_imports_non_intermod_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_205, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_14_72);
            {
              Var_347 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_347, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[1]));
              MR_hl_field(0, Var_347, 1) = ((MR_Box) (make__prereqs__find_prereqs_from_spec_11_p_0_7));
              MR_hl_field(0, Var_347, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_347, 3) = ((MR_Box) (TargetType_204));
            }
            Var_348 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
            make__index_set__index_set_foldl2_6_p_0((MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_1[0]), Var_347, ModuleIndexSet_205, ((MR_Box) (Var_348)), &conv27_TargetIdIndexSet_18, ((MR_Box) (STATE_VARIABLE_Info_14_72)), &conv26_STATE_VARIABLE_Info_39);
            *TargetIdIndexSet_18 = ((MR_Word) (conv27_TargetIdIndexSet_18));
            *STATE_VARIABLE_Info_39 = ((MR_Word) (conv26_STATE_VARIABLE_Info_39));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word STATE_VARIABLE_Info_16_75;
            MR_Word TargetType_206 = ((MR_Word) ((MR_hl_field(3, PrereqSpec_16, 1))));
            MR_Word ModuleIndexSet_207;
            MR_Word Var_341;
            MR_Word Var_342;
            MR_Box conv23_TargetIdIndexSet_18;
            MR_Box conv22_STATE_VARIABLE_Info_39;

            make__prereqs__get_indirect_imports_intermod_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_207, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_16_75);
            {
              Var_341 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_341, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[1]));
              MR_hl_field(0, Var_341, 1) = ((MR_Box) (make__prereqs__find_prereqs_from_spec_11_p_0_6));
              MR_hl_field(0, Var_341, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_341, 3) = ((MR_Box) (TargetType_206));
            }
            Var_342 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
            make__index_set__index_set_foldl2_6_p_0((MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_1[0]), Var_341, ModuleIndexSet_207, ((MR_Box) (Var_342)), &conv23_TargetIdIndexSet_18, ((MR_Box) (STATE_VARIABLE_Info_16_75)), &conv22_STATE_VARIABLE_Info_39);
            *TargetIdIndexSet_18 = ((MR_Word) (conv23_TargetIdIndexSet_18));
            *STATE_VARIABLE_Info_39 = ((MR_Word) (conv22_STATE_VARIABLE_Info_39));
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word STATE_VARIABLE_Info_18_78;
            MR_Word TargetType_208 = ((MR_Word) ((MR_hl_field(3, PrereqSpec_16, 1))));
            MR_Word ModuleIndexSet_209;
            MR_Word Var_359;
            MR_Word Var_360;
            MR_Box conv35_TargetIdIndexSet_18;
            MR_Box conv34_STATE_VARIABLE_Info_39;

            make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_109_111_100_95_105_109_112_111_114_116_115_95_95_91_50_93_95_48_10_p_0(ProgressStream_12, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_209, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_18_78);
            {
              Var_359 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_359, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[1]));
              MR_hl_field(0, Var_359, 1) = ((MR_Box) (make__prereqs__find_prereqs_from_spec_11_p_0_9));
              MR_hl_field(0, Var_359, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_359, 3) = ((MR_Box) (TargetType_208));
            }
            Var_360 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
            make__index_set__index_set_foldl2_6_p_0((MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_1[0]), Var_359, ModuleIndexSet_209, ((MR_Box) (Var_360)), &conv35_TargetIdIndexSet_18, ((MR_Box) (STATE_VARIABLE_Info_18_78)), &conv34_STATE_VARIABLE_Info_39);
            *TargetIdIndexSet_18 = ((MR_Word) (conv35_TargetIdIndexSet_18));
            *STATE_VARIABLE_Info_39 = ((MR_Word) (conv34_STATE_VARIABLE_Info_39));
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word STATE_VARIABLE_Info_20_81;
            MR_Word TargetType_210 = ((MR_Word) ((MR_hl_field(3, PrereqSpec_16, 1))));
            MR_Word ModuleIndexSet_211;
            MR_Word Var_335;
            MR_Word Var_336;
            MR_Box conv19_TargetIdIndexSet_18;
            MR_Box conv18_STATE_VARIABLE_Info_39;

            make__prereqs__get_foreign_imports_intermod_trans_10_p_0(ProgressStream_12, KeepGoing_13, Globals_14, ModuleIndex_15, Succeeded_17, &ModuleIndexSet_211, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_20_81);
            {
              Var_335 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_335, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[1]));
              MR_hl_field(0, Var_335, 1) = ((MR_Box) (make__prereqs__find_prereqs_from_spec_11_p_0_5));
              MR_hl_field(0, Var_335, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_335, 3) = ((MR_Box) (TargetType_210));
            }
            Var_336 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
            make__index_set__index_set_foldl2_6_p_0((MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_1[0]), Var_335, ModuleIndexSet_211, ((MR_Box) (Var_336)), &conv19_TargetIdIndexSet_18, ((MR_Box) (STATE_VARIABLE_Info_20_81)), &conv18_STATE_VARIABLE_Info_39);
            *TargetIdIndexSet_18 = ((MR_Word) (conv19_TargetIdIndexSet_18));
            *STATE_VARIABLE_Info_39 = ((MR_Word) (conv18_STATE_VARIABLE_Info_39));
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
make__prereqs__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_AncestorModuleIndexSet_6;
  MR_Word conv0_STATE_VARIABLE_Info_11;

  make__prereqs__index_get_ancestors_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_AncestorModuleIndexSet_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_11);
  *wrapper_arg_2 = ((MR_Box) (conv1_AncestorModuleIndexSet_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
make__prereqs__get_anc0_dir1_indir2_intermod_of_ancestors_of_intermod_imports_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word KeepGoing_12,
  MR_Word Globals_13,
  MR_Word ModuleIndex_14,
  MR_Word * STATE_VARIABLE_Succeeded_23,
  MR_Word * TargetIdIndexSet_16,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word Succeeded1_19;
  MR_Word Modules1_20;
  MR_Word StopOrContinue_21;
  MR_Word STATE_VARIABLE_Info_1_28;
  MR_Word STATE_VARIABLE_Succeeded_1_31;
  MR_Word Succeeded1_38;
  MR_Word Modules1_39;
  MR_Word StopOrContinue_40;
  MR_Word STATE_VARIABLE_Info_1_43;
  MR_Word AnyIntermod_51;

  libs__globals__get_any_intermod_2_p_0(Globals_13, &AnyIntermod_51);
  switch (AnyIntermod_51) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Succeeded1_38 = (MR_Integer) 1;
        Modules1_39 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_1_43 = STATE_VARIABLE_Info_0_24;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_52;

        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 429, &Transitive_52);
        switch (Transitive_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded1_38, &Modules1_39, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_43);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modules0_55;

              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &Succeeded1_38, &Modules0_55, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_43);
              make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_55, &Modules1_39);
            }
            break;
        }
      }
      break;
  }
  make__util__should_we_stop_or_continue_5_p_0(KeepGoing_12, Succeeded1_38, &StopOrContinue_40, (MR_Integer) 1, &Succeeded1_19);
  switch (StopOrContinue_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ModuleList1_41;
        MR_Word AncestorModuleIndexSets_42;
        MR_Box conv2_STATE_VARIABLE_Info_1_28;

        ModuleList1_41 = make__index_set__index_set_to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), Modules1_39);
        mercury__list__map_foldl_5_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_scalar_common_1[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__prereqs_scalar_common_6[0]), ModuleList1_41, &AncestorModuleIndexSets_42, ((MR_Box) (STATE_VARIABLE_Info_1_43)), &conv2_STATE_VARIABLE_Info_1_28);
        STATE_VARIABLE_Info_1_28 = ((MR_Word) (conv2_STATE_VARIABLE_Info_1_28));
        Modules1_20 = make__index_set__index_set_union_list_1_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), AncestorModuleIndexSets_42);
      }
      break;
    case (MR_Integer) 0:
      {
        Modules1_20 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_1_28 = STATE_VARIABLE_Info_1_43;
      }
      break;
  }
  make__util__should_we_stop_or_continue_5_p_0(KeepGoing_12, Succeeded1_19, &StopOrContinue_21, (MR_Integer) 1, &STATE_VARIABLE_Succeeded_1_31);
  switch (StopOrContinue_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ModuleList1_22;
        MR_Word Var_34;

        ModuleList1_22 = make__index_set__index_set_to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), Modules1_20);
        Var_34 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
        make__prereqs__fold_prereq_spec_over_modules_13_p_0(ProgressStream_11, KeepGoing_12, Globals_13, (MR_Word) ((MR_Unsigned) 4U), ModuleList1_22, STATE_VARIABLE_Succeeded_1_31, STATE_VARIABLE_Succeeded_23, Var_34, TargetIdIndexSet_16, STATE_VARIABLE_Info_1_28, STATE_VARIABLE_Info_25);
      }
      break;
    case (MR_Integer) 0:
      {
        *TargetIdIndexSet_16 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
        *STATE_VARIABLE_Succeeded_23 = STATE_VARIABLE_Succeeded_1_31;
        *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_1_28;
      }
      break;
  }
}

static void MR_CALL 
make__prereqs__fold_prereq_spec_over_modules_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word PrereqSpec_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Succeeded_0_6,
  MR_Word * STATE_VARIABLE_Succeeded_7,
  MR_Word STATE_VARIABLE_TargetIdIndexSet_0_8,
  MR_Word * STATE_VARIABLE_TargetIdIndexSet_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      *STATE_VARIABLE_TargetIdIndexSet_9 = STATE_VARIABLE_TargetIdIndexSet_0_8;
      *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_0_6;
    }
    else
    {
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadTargetIdIndexSet_41;
      MR_Word StopOrContinue_42;
      MR_Word STATE_VARIABLE_Info_1_51;
      MR_Word STATE_VARIABLE_TargetIdIndexSet_1_53;
      MR_Word STATE_VARIABLE_Succeeded_1_54;

      make__prereqs__find_prereqs_from_spec_11_p_0(ProgressStream_1, KeepGoing_2, Globals_3, MI_34, PrereqSpec_4, &HeadSucceeded_40, &HeadTargetIdIndexSet_41, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_51);
      make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0), HeadTargetIdIndexSet_41, STATE_VARIABLE_TargetIdIndexSet_0_8, &STATE_VARIABLE_TargetIdIndexSet_1_53);
      make__util__should_we_stop_or_continue_5_p_0(KeepGoing_2, HeadSucceeded_40, &StopOrContinue_42, STATE_VARIABLE_Succeeded_0_6, &STATE_VARIABLE_Succeeded_1_54);
      switch (StopOrContinue_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__5_5 = MIs_35;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_1_54;
            MR_Word next_value_of_STATE_VARIABLE_TargetIdIndexSet_0_8 = STATE_VARIABLE_TargetIdIndexSet_1_53;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_1_51;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
            STATE_VARIABLE_TargetIdIndexSet_0_8 = next_value_of_STATE_VARIABLE_TargetIdIndexSet_0_8;
            STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_1_54;
            *STATE_VARIABLE_TargetIdIndexSet_9 = STATE_VARIABLE_TargetIdIndexSet_1_53;
            *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_1_51;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__prereqs__find_prereqs_from_specs_12_p_0(
  MR_Word ProgressStream_1,
  MR_Word KeepGoing_2,
  MR_Word Globals_3,
  MR_Word ModuleIndex_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Succeeded_0_7,
  MR_Word * STATE_VARIABLE_Succeeded_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
    *STATE_VARIABLE_Succeeded_8 = STATE_VARIABLE_Succeeded_0_7;
  }
  else
  {
    MR_Word HeadPrereqSpec_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word TailPrereqSpecs_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word HeadSucceeded_36;
    MR_Word HeadTargetIdIndexSet_37;
    MR_Word StopOrContinue_38;
    MR_Word STATE_VARIABLE_Info_1_46;
    MR_Word STATE_VARIABLE_Succeeded_1_48;

    make__prereqs__find_prereqs_from_spec_11_p_0(ProgressStream_1, KeepGoing_2, Globals_3, ModuleIndex_4, HeadPrereqSpec_30, &HeadSucceeded_36, &HeadTargetIdIndexSet_37, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_1_46);
    make__util__should_we_stop_or_continue_5_p_0(KeepGoing_2, HeadSucceeded_36, &StopOrContinue_38, STATE_VARIABLE_Succeeded_0_7, &STATE_VARIABLE_Succeeded_1_48);
    switch (StopOrContinue_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TailTargetIdIndexSet_39;

          make__prereqs__find_prereqs_from_specs_12_p_0(ProgressStream_1, KeepGoing_2, Globals_3, ModuleIndex_4, TailPrereqSpecs_31, &TailTargetIdIndexSet_39, STATE_VARIABLE_Succeeded_1_48, STATE_VARIABLE_Succeeded_8, STATE_VARIABLE_Info_1_46, STATE_VARIABLE_Info_10);
          make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0), HeadTargetIdIndexSet_37, TailTargetIdIndexSet_39, HeadVar__6_6);
        }
        break;
      case (MR_Integer) 0:
        {
          *HeadVar__6_6 = HeadTargetIdIndexSet_37;
          *STATE_VARIABLE_Succeeded_8 = STATE_VARIABLE_Succeeded_1_48;
          *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_1_46;
        }
        break;
    }
  }
}

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_108_111_99_97_108_95_109_111_100_117_108_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalModuleIndexSet_0_3,
  MR_Word * STATE_VARIABLE_LocalModuleIndexSet_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_LocalModuleIndexSet_4 = STATE_VARIABLE_LocalModuleIndexSet_0_3;
    }
    else
    {
      MR_Word ModuleIndex_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ModuleIndexes_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word SrcIsLocalMap0_25;
      MR_Word STATE_VARIABLE_LocalModuleIndexSet_1_40;
      MR_Word STATE_VARIABLE_Info_1_45;
      MR_Word IsLocal0_26;
      MR_Box conv0_IsLocal0_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_LocalModuleIndexSet_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      SrcIsLocalMap0_25 = make__make_info__make_info_get_module_src_is_local_map_1_f_0(STATE_VARIABLE_Info_0_5);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_is_src_local_0), SrcIsLocalMap0_25, ((MR_Box) (ModuleIndex_20)), &conv0_IsLocal0_26);
      if (succeeded)
      {
        IsLocal0_26 = ((MR_Word) (conv0_IsLocal0_26));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        switch (IsLocal0_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_20)), STATE_VARIABLE_LocalModuleIndexSet_0_3, &STATE_VARIABLE_LocalModuleIndexSet_1_40);
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_LocalModuleIndexSet_1_40 = STATE_VARIABLE_LocalModuleIndexSet_0_3;
            break;
        }
        STATE_VARIABLE_Info_1_45 = STATE_VARIABLE_Info_0_5;
      }
      else
      {
        MR_Word ModuleName_27;
        MR_String FileName_28;
        MR_Word OpenResult_29;
        MR_Word IsLocal_31;
        MR_Word SrcIsLocalMap_33;

        make__index_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_5, ModuleIndex_20, &ModuleName_27);
        parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_27, &FileName_28);
        mercury__io__open_input_4_p_0(FileName_28, &OpenResult_29);
        if (((MR_tag((MR_Word) OpenResult_29)) == (MR_Integer) 1))
        {
          IsLocal_31 = (MR_Integer) 0;
          STATE_VARIABLE_LocalModuleIndexSet_1_40 = STATE_VARIABLE_LocalModuleIndexSet_0_3;
        }
        else
        {
          MR_Word InputStream_30 = ((MR_Word) ((MR_hl_field(0, OpenResult_29, 0))));

          mercury__io__close_input_3_p_0(InputStream_30);
          make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_20)), STATE_VARIABLE_LocalModuleIndexSet_0_3, &STATE_VARIABLE_LocalModuleIndexSet_1_40);
          IsLocal_31 = (MR_Integer) 1;
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_is_src_local_0), ((MR_Box) (ModuleIndex_20)), ((MR_Box) (IsLocal_31)), SrcIsLocalMap0_25, &SrcIsLocalMap_33);
        make__make_info__make_info_set_module_src_is_local_map_3_p_0(SrcIsLocalMap_33, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_45);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ModuleIndexes_21;
      next_value_of_STATE_VARIABLE_LocalModuleIndexSet_0_3 = STATE_VARIABLE_LocalModuleIndexSet_1_40;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_45;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_LocalModuleIndexSet_0_3 = next_value_of_STATE_VARIABLE_LocalModuleIndexSet_0_3;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_105_110_116_101_114_109_111_100_95_105_109_112_111_114_116_115_95_95_91_50_93_95_48_10_p_0(
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
        *Modules_16 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
        *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_20;

        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 429, &Transitive_20);
        switch (Transitive_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, Succeeded_15, Modules_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modules0_27;

              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, Succeeded_15, &Modules0_27, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
              make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_27, Modules_16);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
make__prereqs__get_foreign_incl_fact_table_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TargetIdIndexSet_19;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  make__prereqs__acc_dep_file_index_for_foreign_include_if_in_langset_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TargetIdIndexSet_19, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TargetIdIndexSet_19));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__prereqs__get_foreign_incl_fact_table_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleIndex_12,
  MR_Word * Succeeded_13,
  MR_Word * TargetIdIndexSet_14,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_Word ModuleName_17;
  MR_Word MaybeModuleDepInfo_18;
  MR_Word STATE_VARIABLE_Info_1_30;

  make__index_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_26, ModuleIndex_12, &ModuleName_17);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_17, &MaybeModuleDepInfo_18, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_1_30);
  if ((MaybeModuleDepInfo_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_13 = (MR_Integer) 0;
    *TargetIdIndexSet_14 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0));
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_1_30;
  }
  else
  {
    MR_Word ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, 0))));
    MR_Word FactTableFileNames_20;
    MR_Word FactTargetIdIndexSet_21;
    MR_String SourceFileName_22;
    MR_Word ForeignIncludeFiles_23;
    MR_Word Languages_24;
    MR_Word LangSet_25;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Info_2_33;
    MR_Word Var_34;
    MR_Box conv3_TargetIdIndexSet_14;
    MR_Box conv2_STATE_VARIABLE_Info_27;

    *Succeeded_13 = (MR_Integer) 1;
    parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_19, &FactTableFileNames_20);
    Var_32 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFileNames_20);
    make__index_set__file_names_to_index_set_4_p_0(Var_32, &FactTargetIdIndexSet_21, STATE_VARIABLE_Info_1_30, &STATE_VARIABLE_Info_2_33);
    parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo_19, &SourceFileName_22);
    parse_tree__module_dep_info__module_dep_info_get_foreign_include_files_2_p_0(ModuleDepInfo_19, &ForeignIncludeFiles_23);
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_11, &Languages_24);
    LangSet_25 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Languages_24);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&make__prereqs_scalar_common_4[0]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (make__prereqs__get_foreign_incl_fact_table_files_9_p_0_1));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (LangSet_25));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (SourceFileName_22));
    }
    mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__prereqs_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_34, ForeignIncludeFiles_23, ((MR_Box) (FactTargetIdIndexSet_21)), &conv3_TargetIdIndexSet_14, ((MR_Box) (STATE_VARIABLE_Info_2_33)), &conv2_STATE_VARIABLE_Info_27);
    *TargetIdIndexSet_14 = ((MR_Word) (conv3_TargetIdIndexSet_14));
    *STATE_VARIABLE_Info_27 = ((MR_Word) (conv2_STATE_VARIABLE_Info_27));
  }
}

static void MR_CALL 
make__prereqs__get_foreign_imports_intermod_trans_10_p_0(
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
  MR_Word STATE_VARIABLE_Info_1_29;
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
        IntermodModules_22 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_1_29 = STATE_VARIABLE_Info_0_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Transitive_49;

        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 429, &Transitive_49);
        switch (Transitive_49) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &IntermodSucceeded_21, &IntermodModules_22, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_29);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modules0_52;

              make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &IntermodSucceeded_21, &Modules0_52, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_29);
              make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_52, &IntermodModules_22);
            }
            break;
        }
      }
      break;
  }
  make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), IntermodModules_22, &IntermodSelfModules_23);
  Var_32 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), IntermodSelfModules_23);
  Var_34 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
  make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_50_95_95_91_53_93_95_48_13_p_0(LanguagesSet_20, ProgressStream_11, KeepGoing_12, Globals_13, Var_32, (MR_Integer) 1, &ForeignSucceeded_24, Var_34, Modules_16, STATE_VARIABLE_Info_1_29, STATE_VARIABLE_Info_26);
  *Succeeded_15 = libs__maybe_util__and_2_f_0(IntermodSucceeded_21, ForeignSucceeded_24);
}

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_50_95_95_91_53_93_95_48_13_p_0(
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
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadModuleIndexSet_41;
      MR_Word StopOrContinue_42;
      MR_Word STATE_VARIABLE_Info_1_51;
      MR_Word STATE_VARIABLE_ModuleIndexSet_1_53;
      MR_Word STATE_VARIABLE_Succeeded_1_54;

      make__prereqs__get_foreign_imports_non_intermod_trans_11_p_0(Var_56, ProgressStream_1, KeepGoing_2, Globals_3, MI_34, &HeadSucceeded_40, &HeadModuleIndexSet_41, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_51);
      make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), HeadModuleIndexSet_41, STATE_VARIABLE_ModuleIndexSet_0_8, &STATE_VARIABLE_ModuleIndexSet_1_53);
      make__util__should_we_stop_or_continue_5_p_0(KeepGoing_2, HeadSucceeded_40, &StopOrContinue_42, STATE_VARIABLE_Succeeded_0_6, &STATE_VARIABLE_Succeeded_1_54);
      switch (StopOrContinue_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__5_5 = MIs_35;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_1_54;
            MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8 = STATE_VARIABLE_ModuleIndexSet_1_53;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_1_51;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
            STATE_VARIABLE_ModuleIndexSet_0_8 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
            STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_1_54;
            *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_1_53;
            *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_1_51;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__prereqs__get_foreign_imports_non_intermod_trans_11_p_0(
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

  succeeded = make__prereqs_cache__search_foreign_imports_non_intermod_trans_cache_3_p_0(STATE_VARIABLE_Info_0_25, ModuleIndex_16, &Result0_21);
  if (succeeded)
  {
    *Succeeded_17 = ((MR_Unsigned) ((MR_hl_field(0, Result0_21, 0))) & (MR_Integer) 1);
    *ForeignModules_18 = ((MR_Word) ((MR_hl_field(0, Result0_21, 1))));
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
  {
    MR_Word Succeeded0_22;
    MR_Word ImportedModules_23;
    MR_Word STATE_VARIABLE_Info_1_29;
    MR_Word Modules0_51;

    make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_13, Globals_15, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_16, &Succeeded0_22, &Modules0_51, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_29);
    make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_16)), Modules0_51, &ImportedModules_23);
    switch (Succeeded0_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_17 = (MR_Integer) 0;
          *ForeignModules_18 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
          *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_1_29;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Result_24;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word STATE_VARIABLE_Info_2_35;
          MR_Word Var_37;

          Var_37 = mercury__sparse_bitset__insert_2_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ImportedModules_23, ((MR_Box) (ModuleIndex_16)));
          Var_32 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), Var_37);
          Var_34 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
          make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_49_95_95_91_53_93_95_48_13_p_0(LangSet_12, ProgressStream_13, KeepGoing_14, Globals_15, Var_32, (MR_Integer) 1, Succeeded_17, Var_34, ForeignModules_18, STATE_VARIABLE_Info_1_29, &STATE_VARIABLE_Info_2_35);
          {
            Result_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Result_24, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_17));
            MR_hl_field(0, Result_24, 1) = ((MR_Box) (*ForeignModules_18));
          }
          make__prereqs_cache__add_to_foreign_imports_non_intermod_trans_cache_4_p_0(ModuleIndex_16, Result_24, STATE_VARIABLE_Info_2_35, STATE_VARIABLE_Info_26);
        }
        break;
    }
  }
}

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_102_105_110_100_95_109_111_100_117_108_101_115_95_111_118_101_114_95_109_111_100_117_108_101_115_95_95_104_111_49_95_95_91_53_93_95_48_13_p_0(
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
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadModuleIndexSet_41;
      MR_Word StopOrContinue_42;
      MR_Word STATE_VARIABLE_Info_1_51;
      MR_Word STATE_VARIABLE_ModuleIndexSet_1_53;
      MR_Word STATE_VARIABLE_Succeeded_1_54;

      make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0(Var_56, ProgressStream_1, Globals_3, MI_34, &HeadSucceeded_40, &HeadModuleIndexSet_41, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_51);
      make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), HeadModuleIndexSet_41, STATE_VARIABLE_ModuleIndexSet_0_8, &STATE_VARIABLE_ModuleIndexSet_1_53);
      make__util__should_we_stop_or_continue_5_p_0(KeepGoing_2, HeadSucceeded_40, &StopOrContinue_42, STATE_VARIABLE_Succeeded_0_6, &STATE_VARIABLE_Succeeded_1_54);
      switch (StopOrContinue_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__5_5 = MIs_35;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_1_54;
            MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8 = STATE_VARIABLE_ModuleIndexSet_1_53;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_1_51;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
            STATE_VARIABLE_ModuleIndexSet_0_8 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
            STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_1_54;
            *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_1_53;
            *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_1_51;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleIndexSet_15;
  MR_Word conv0_STATE_VARIABLE_Info_17;

  make__prereqs__acc_module_index_if_for_lang_in_set_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleIndexSet_15, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleIndexSet_15));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
}

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0(
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
  MR_Word STATE_VARIABLE_Info_1_29;

  make__index_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_25, ModuleIndex_16, &ModuleName_21);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_13, Globals_15, ModuleName_21, &MaybeModuleDepInfo_22, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_29);
  if ((MaybeModuleDepInfo_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ForeignModules_18 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
    *Succeeded_17 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_1_29;
  }
  else
  {
    MR_Word ModuleDepInfo_23 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_22, 0))));
    MR_Word FIMSpecs_24;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv3_ForeignModules_18;
    MR_Box conv2_STATE_VARIABLE_Info_26;

    parse_tree__module_dep_info__module_dep_info_get_fims_2_p_0(ModuleDepInfo_23, &FIMSpecs_24);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&make__prereqs_scalar_common_3[0]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_117_110_99_97_99_104_101_100_95_95_91_51_93_95_48_11_p_0_1));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (LangSet_12));
    }
    Var_32 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
    mercury__set__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&make__prereqs_scalar_common_1[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), Var_31, FIMSpecs_24, ((MR_Box) (Var_32)), &conv3_ForeignModules_18, ((MR_Box) (STATE_VARIABLE_Info_1_29)), &conv2_STATE_VARIABLE_Info_26);
    *ForeignModules_18 = ((MR_Word) (conv3_ForeignModules_18));
    *STATE_VARIABLE_Info_26 = ((MR_Word) (conv2_STATE_VARIABLE_Info_26));
    *Succeeded_17 = (MR_Integer) 1;
  }
}

static void MR_CALL 
make__prereqs__get_indirect_imports_intermod_10_p_0(
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

  succeeded = make__prereqs_cache__search_indirect_imports_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_23, ModuleIndex_14, &Result0_19);
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, Result0_19, 0))) & (MR_Integer) 1);
    *IndirectIntermodImportModules_16 = ((MR_Word) ((MR_hl_field(0, Result0_19, 1))));
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word DirectSucceeded_20;
    MR_Word DirectImportModules_21;
    MR_Word Result_22;
    MR_Word STATE_VARIABLE_Info_1_27;
    MR_Word STATE_VARIABLE_Info_2_29;
    MR_Word Result0_30;

    succeeded = make__prereqs_cache__search_direct_imports_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_23, ModuleIndex_14, &Result0_30);
    if (succeeded)
    {
      DirectSucceeded_20 = ((MR_Unsigned) ((MR_hl_field(0, Result0_30, 0))) & (MR_Integer) 1);
      DirectImportModules_21 = ((MR_Word) ((MR_hl_field(0, Result0_30, 1))));
      STATE_VARIABLE_Info_1_27 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word Succeeded0_31;
      MR_Word Modules0_32;
      MR_Word Result_38;
      MR_Word STATE_VARIABLE_Info_1_39;
      MR_Word STATE_VARIABLE_Info_3_46;

      make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded0_31, &Modules0_32, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_1_39);
      succeeded = (Succeeded0_31 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (KeepGoing_12 == (MR_Integer) 0);
      if (succeeded)
      {
        DirectSucceeded_20 = (MR_Integer) 0;
        DirectImportModules_21 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_3_46 = STATE_VARIABLE_Info_1_39;
      }
      else
      {
        MR_Word Succeeded1_33;
        MR_Word IntermodModules_34;
        MR_Word STATE_VARIABLE_Info_2_41;
        MR_Word AnyIntermod_52;

        libs__globals__get_any_intermod_2_p_0(Globals_13, &AnyIntermod_52);
        switch (AnyIntermod_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Succeeded1_33 = (MR_Integer) 1;
              IntermodModules_34 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
              STATE_VARIABLE_Info_2_41 = STATE_VARIABLE_Info_1_39;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Transitive_53;

              libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 429, &Transitive_53);
              switch (Transitive_53) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded1_33, &IntermodModules_34, STATE_VARIABLE_Info_1_39, &STATE_VARIABLE_Info_2_41);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Modules0_56;

                    make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &Succeeded1_33, &Modules0_56, STATE_VARIABLE_Info_1_39, &STATE_VARIABLE_Info_2_41);
                    make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_56, &IntermodModules_34);
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
          DirectImportModules_21 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
          STATE_VARIABLE_Info_3_46 = STATE_VARIABLE_Info_2_41;
        }
        else
        {
          MR_Word Modules1_35;
          MR_Word Succeeded2_36;
          MR_Word Modules2_37;
          MR_Word Var_44;
          MR_Word Var_47;

          make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), IntermodModules_34, Modules0_32, &Modules1_35);
          Var_44 = make__index_set__index_set_to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), IntermodModules_34);
          make__prereqs__fold_find_modules_over_modules__ho4_13_p_0(ProgressStream_11, KeepGoing_12, Globals_13, Var_44, (MR_Integer) 1, &Succeeded2_36, Modules1_35, &Modules2_37, STATE_VARIABLE_Info_2_41, &STATE_VARIABLE_Info_3_46);
          Var_47 = libs__maybe_util__and_2_f_0(Succeeded0_31, Succeeded1_33);
          DirectSucceeded_20 = libs__maybe_util__and_2_f_0(Var_47, Succeeded2_36);
          make__index_set__index_set_delete_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules2_37, &DirectImportModules_21);
        }
      }
      {
        Result_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Result_38, 0) = (MR_Box) ((MR_Unsigned) (DirectSucceeded_20));
        MR_hl_field(0, Result_38, 1) = ((MR_Box) (DirectImportModules_21));
      }
      make__prereqs_cache__add_to_direct_imports_intermod_cache_4_p_0(ModuleIndex_14, Result_38, STATE_VARIABLE_Info_3_46, &STATE_VARIABLE_Info_1_27);
    }
    make__prereqs__get_indirect_imports_uncached_12_p_0(ProgressStream_11, KeepGoing_12, Globals_13, ModuleIndex_14, DirectSucceeded_20, DirectImportModules_21, Succeeded_15, IndirectIntermodImportModules_16, STATE_VARIABLE_Info_1_27, &STATE_VARIABLE_Info_2_29);
    {
      Result_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_22, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_22, 1) = ((MR_Box) (*IndirectIntermodImportModules_16));
    }
    make__prereqs_cache__add_to_indirect_imports_intermod_cache_4_p_0(ModuleIndex_14, Result_22, STATE_VARIABLE_Info_2_29, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
make__prereqs__get_indirect_imports_uncached_12_p_0(
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
    *IndirectImports_20 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  }
  else
  {
    MR_Word IndirectSucceeded_23;
    MR_Word IndirectImports0_24;
    MR_Word IndirectImports1_25;
    MR_Word Var_31;
    MR_Word Var_33;

    Var_31 = make__index_set__index_set_to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), DirectImports_18);
    Var_33 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
    make__prereqs__fold_find_modules_over_modules__ho3_13_p_0(ProgressStream_13, KeepGoing_14, Globals_15, Var_31, (MR_Integer) 1, &IndirectSucceeded_23, Var_33, &IndirectImports0_24, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
    make__index_set__index_set_delete_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_16)), IndirectImports0_24, &IndirectImports1_25);
    *IndirectImports_20 = make__index_set__index_set_difference_2_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), IndirectImports1_25, DirectImports_18);
    *Succeeded_19 = libs__maybe_util__and_2_f_0(DirectSucceeded_17, IndirectSucceeded_23);
  }
}

static void MR_CALL 
make__prereqs__get_indirect_imports_non_intermod_10_p_0(
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
  MR_Word STATE_VARIABLE_Info_1_25;

  make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &DirectSucceeded_19, &DirectImportModules_20, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_25);
  succeeded = (DirectSucceeded_19 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_12 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_15 = (MR_Integer) 0;
    *IndirectNonIntermodImportModules_16 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_1_25;
  }
  else
  {
    MR_Word IndirectSucceeded_27;
    MR_Word IndirectImports0_28;
    MR_Word IndirectImports1_29;
    MR_Word Var_31;
    MR_Word Var_33;

    Var_31 = make__index_set__index_set_to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), DirectImportModules_20);
    Var_33 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
    make__prereqs__fold_find_modules_over_modules__ho3_13_p_0(ProgressStream_11, KeepGoing_12, Globals_13, Var_31, (MR_Integer) 1, &IndirectSucceeded_27, Var_33, &IndirectImports0_28, STATE_VARIABLE_Info_1_25, STATE_VARIABLE_Info_22);
    make__index_set__index_set_delete_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), IndirectImports0_28, &IndirectImports1_29);
    *IndirectNonIntermodImportModules_16 = make__index_set__index_set_difference_2_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), IndirectImports1_29, DirectImportModules_20);
    *Succeeded_15 = libs__maybe_util__and_2_f_0(DirectSucceeded_19, IndirectSucceeded_27);
  }
}

static void MR_CALL 
make__prereqs__fold_find_modules_over_modules__ho3_13_p_0(
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
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadModuleIndexSet_41;
      MR_Word StopOrContinue_42;
      MR_Word STATE_VARIABLE_Info_1_51;
      MR_Word STATE_VARIABLE_ModuleIndexSet_1_53;
      MR_Word STATE_VARIABLE_Succeeded_1_54;
      MR_Word Modules0_56;

      make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_1, Globals_3, (MR_Integer) 1, (MR_Integer) 1, MI_34, &HeadSucceeded_40, &Modules0_56, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_51);
      make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (MI_34)), Modules0_56, &HeadModuleIndexSet_41);
      make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), HeadModuleIndexSet_41, STATE_VARIABLE_ModuleIndexSet_0_8, &STATE_VARIABLE_ModuleIndexSet_1_53);
      make__util__should_we_stop_or_continue_5_p_0(KeepGoing_2, HeadSucceeded_40, &StopOrContinue_42, STATE_VARIABLE_Succeeded_0_6, &STATE_VARIABLE_Succeeded_1_54);
      switch (StopOrContinue_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__5_5 = MIs_35;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_1_54;
            MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8 = STATE_VARIABLE_ModuleIndexSet_1_53;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_1_51;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
            STATE_VARIABLE_ModuleIndexSet_0_8 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
            STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_1_54;
            *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_1_53;
            *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_1_51;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__prereqs__get_direct_imports_intermod_10_p_0(
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

  succeeded = make__prereqs_cache__search_direct_imports_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_28, ModuleIndex_14, &Result0_19);
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, Result0_19, 0))) & (MR_Integer) 1);
    *Modules_16 = ((MR_Word) ((MR_hl_field(0, Result0_19, 1))));
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
  }
  else
  {
    MR_Word Succeeded0_20;
    MR_Word Modules0_21;
    MR_Word Result_27;
    MR_Word STATE_VARIABLE_Info_1_32;
    MR_Word STATE_VARIABLE_Info_3_39;

    make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded0_20, &Modules0_21, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_1_32);
    succeeded = (Succeeded0_20 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_12 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_15 = (MR_Integer) 0;
      *Modules_16 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_3_39 = STATE_VARIABLE_Info_1_32;
    }
    else
    {
      MR_Word Succeeded1_22;
      MR_Word IntermodModules_23;
      MR_Word STATE_VARIABLE_Info_2_34;
      MR_Word AnyIntermod_56;

      libs__globals__get_any_intermod_2_p_0(Globals_13, &AnyIntermod_56);
      switch (AnyIntermod_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Succeeded1_22 = (MR_Integer) 1;
            IntermodModules_23 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
            STATE_VARIABLE_Info_2_34 = STATE_VARIABLE_Info_1_32;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Transitive_57;

            libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 429, &Transitive_57);
            switch (Transitive_57) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ModuleIndex_14, &Succeeded1_22, &IntermodModules_23, STATE_VARIABLE_Info_1_32, &STATE_VARIABLE_Info_2_34);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Modules0_60;

                  make__find_local_modules__find_transitive_module_dependencies_11_p_0(ProgressStream_11, Globals_13, (MR_Integer) 1, (MR_Integer) 1, ModuleIndex_14, &Succeeded1_22, &Modules0_60, STATE_VARIABLE_Info_1_32, &STATE_VARIABLE_Info_2_34);
                  make__index_set__index_set_insert_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules0_60, &IntermodModules_23);
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
        *Modules_16 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
        STATE_VARIABLE_Info_3_39 = STATE_VARIABLE_Info_2_34;
      }
      else
      {
        MR_Word Modules1_24;
        MR_Word Succeeded2_25;
        MR_Word Modules2_26;
        MR_Word Var_37;
        MR_Word Var_41;

        make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), IntermodModules_23, Modules0_21, &Modules1_24);
        Var_37 = make__index_set__index_set_to_sorted_list_1_f_0((MR_Word) (&make__prereqs_scalar_common_1[0]), IntermodModules_23);
        make__prereqs__fold_find_modules_over_modules__ho4_13_p_0(ProgressStream_11, KeepGoing_12, Globals_13, Var_37, (MR_Integer) 1, &Succeeded2_25, Modules1_24, &Modules2_26, STATE_VARIABLE_Info_2_34, &STATE_VARIABLE_Info_3_39);
        Var_41 = libs__maybe_util__and_2_f_0(Succeeded0_20, Succeeded1_22);
        *Succeeded_15 = libs__maybe_util__and_2_f_0(Var_41, Succeeded2_25);
        make__index_set__index_set_delete_3_p_0((MR_Word) (&make__prereqs_scalar_common_1[0]), ((MR_Box) (ModuleIndex_14)), Modules2_26, Modules_16);
      }
    }
    {
      Result_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_27, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_27, 1) = ((MR_Box) (*Modules_16));
    }
    make__prereqs_cache__add_to_direct_imports_intermod_cache_4_p_0(ModuleIndex_14, Result_27, STATE_VARIABLE_Info_3_39, STATE_VARIABLE_Info_29);
  }
}

static void MR_CALL 
make__prereqs__fold_find_modules_over_modules__ho4_13_p_0(
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
      MR_Word MI_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word MIs_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word HeadSucceeded_40;
      MR_Word HeadModuleIndexSet_41;
      MR_Word StopOrContinue_42;
      MR_Word STATE_VARIABLE_Info_1_51;
      MR_Word STATE_VARIABLE_ModuleIndexSet_1_53;
      MR_Word STATE_VARIABLE_Succeeded_1_54;

      make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_1, Globals_3, MI_34, &HeadSucceeded_40, &HeadModuleIndexSet_41, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_51);
      make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), HeadModuleIndexSet_41, STATE_VARIABLE_ModuleIndexSet_0_8, &STATE_VARIABLE_ModuleIndexSet_1_53);
      make__util__should_we_stop_or_continue_5_p_0(KeepGoing_2, HeadSucceeded_40, &StopOrContinue_42, STATE_VARIABLE_Succeeded_0_6, &STATE_VARIABLE_Succeeded_1_54);
      switch (StopOrContinue_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__5_5 = MIs_35;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_6 = STATE_VARIABLE_Succeeded_1_54;
            MR_Word next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8 = STATE_VARIABLE_ModuleIndexSet_1_53;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_1_51;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            STATE_VARIABLE_Succeeded_0_6 = next_value_of_STATE_VARIABLE_Succeeded_0_6;
            STATE_VARIABLE_ModuleIndexSet_0_8 = next_value_of_STATE_VARIABLE_ModuleIndexSet_0_8;
            STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_7 = STATE_VARIABLE_Succeeded_1_54;
            *STATE_VARIABLE_ModuleIndexSet_9 = STATE_VARIABLE_ModuleIndexSet_1_53;
            *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_1_51;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(
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

  succeeded = make__prereqs_cache__search_direct_imports_non_intermod_cache_3_p_0(STATE_VARIABLE_Info_0_21, ModuleIndex_14, &Result0_19);
  if (succeeded)
  {
    *Succeeded_15 = ((MR_Unsigned) ((MR_hl_field(0, Result0_19, 0))) & (MR_Integer) 1);
    *Modules_16 = ((MR_Word) ((MR_hl_field(0, Result0_19, 1))));
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
  else
  {
    MR_Word Result_20;
    MR_Word STATE_VARIABLE_Info_1_25;
    MR_Word ModuleName_26;
    MR_Word MaybeModuleDepInfo_27;
    MR_Word STATE_VARIABLE_Info_1_39;

    make__index_set__module_index_to_name_3_p_0(STATE_VARIABLE_Info_0_21, ModuleIndex_14, &ModuleName_26);
    make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_13, ModuleName_26, &MaybeModuleDepInfo_27, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_39);
    if ((MaybeModuleDepInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_15 = (MR_Integer) 0;
      *Modules_16 = make__index_set__index_set_init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0));
      STATE_VARIABLE_Info_1_25 = STATE_VARIABLE_Info_1_39;
    }
    else
    {
      MR_Word ModuleDepInfo_28 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_27, 0))));
      MR_Word IntModuleNames_29;
      MR_Word ImpModuleNames_30;
      MR_Word IntModules_31;
      MR_Word ImpModules_32;
      MR_Word Modules0_33;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_Info_2_42;
      MR_Word Var_43;
      MR_Word STATE_VARIABLE_Info_3_44;

      parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_28, &IntModuleNames_29);
      parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_28, &ImpModuleNames_30);
      Var_41 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntModuleNames_29);
      make__index_set__module_names_to_index_set_4_p_0(Var_41, &IntModules_31, STATE_VARIABLE_Info_1_39, &STATE_VARIABLE_Info_2_42);
      Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpModuleNames_30);
      make__index_set__module_names_to_index_set_4_p_0(Var_43, &ImpModules_32, STATE_VARIABLE_Info_2_42, &STATE_VARIABLE_Info_3_44);
      make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), IntModules_31, ImpModules_32, &Modules0_33);
      if (((MR_tag((MR_Word) ModuleName_26)) == (MR_Integer) 1))
      {
        MR_Word ParentModule_34 = ((MR_Word) ((MR_hl_field(1, ModuleName_26, 0))));
        MR_Word ParentIndex_36;
        MR_Word ParentImports_37;
        MR_Word STATE_VARIABLE_Info_4_45;

        make__index_set__module_name_to_index_4_p_0(ParentModule_34, &ParentIndex_36, STATE_VARIABLE_Info_3_44, &STATE_VARIABLE_Info_4_45);
        make__prereqs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_105_114_101_99_116_95_105_109_112_111_114_116_115_95_110_111_110_95_105_110_116_101_114_109_111_100_95_95_91_50_93_95_48_10_p_0(ProgressStream_11, Globals_13, ParentIndex_36, Succeeded_15, &ParentImports_37, STATE_VARIABLE_Info_4_45, &STATE_VARIABLE_Info_1_25);
        make__index_set__index_set_union_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), ParentImports_37, Modules0_33, Modules_16);
      }
      else
      {
        *Succeeded_15 = (MR_Integer) 1;
        *Modules_16 = Modules0_33;
        STATE_VARIABLE_Info_1_25 = STATE_VARIABLE_Info_3_44;
      }
    }
    {
      Result_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Result_20, 0) = (MR_Box) ((MR_Unsigned) (*Succeeded_15));
      MR_hl_field(0, Result_20, 1) = ((MR_Box) (*Modules_16));
    }
    make__prereqs_cache__add_to_direct_imports_non_intermod_cache_4_p_0(ModuleIndex_14, Result_20, STATE_VARIABLE_Info_1_25, STATE_VARIABLE_Info_22);
  }
}

static MR_bool MR_CALL 
make__prereqs____Unify____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__prereqs____Unify____find_module_deps_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__prereqs____Compare____find_module_deps_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs____Compare____find_module_deps_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs____Unify____find_prereqs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs____Unify____find_prereqs_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs____Compare____find_prereqs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs____Compare____find_prereqs_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs____Unify____prereq_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs____Unify____prereq_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs____Compare____prereq_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs____Compare____prereq_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__prereqs__init(void)
{
}

void mercury__make__prereqs__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&make__prereqs__make__prereqs__type_ctor_info_find_module_deps_1);
  MR_register_type_ctor_info(&make__prereqs__make__prereqs__type_ctor_info_find_prereqs_result_0);
  MR_register_type_ctor_info(&make__prereqs__make__prereqs__type_ctor_info_prereq_spec_0);
}

void mercury__make__prereqs__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__prereqs__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.prereqs.
