/*
** Automatically generated from `make.program_target.m'
** by the Mercury compiler,
** version rotd-2025-05-27
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


// :- module make.program_target.
// :- implementation.

/*
INIT mercury__make__program_target__init
ENDINIT
*/

#include "make.program_target.mih"


#include "analysis.mih"
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
#include "digraph.mih"
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.link_target_code.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.file.mih"
#include "libs.check_libgrades.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.system_cmds.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.check_up_to_date.mih"
#include "make.clean.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.find_local_modules.mih"
#include "make.get_module_dep_info.mih"
#include "make.library_install.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.timestamp.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"



struct make__program_target__build_linked_target_17_p_0_env_0_s {
  MR_bool make__program_target__build_linked_target_17_p_0_env_0__succeeded;
  MR_Word make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatuses_55;
  jmp_buf make__program_target__build_linked_target_17_p_0_env_0__commit_0;
  MR_Word make__program_target__build_linked_target_17_p_0_env_0__Var_74;
  MR_Word make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_80;
  MR_Box make__program_target__build_linked_target_17_p_0_env_0__conv5_ExtraObjDepStatus_80;
};


static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct2 make__program_target____vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct6 make__program_target____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct8 make__program_target____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_0;

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_1;

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_2;

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_3;

static const MR_EnumFunctorDescPtr make__program_target__make__program_target__enum_ordinal_ordered_build_what_0[4];

static const MR_EnumFunctorDescPtr make__program_target__make__program_target__enum_name_ordered_build_what_0[4];

static const MR_Integer make__program_target__make__program_target__functor_number_map_build_what_0[4];

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_0;

static const MR_PseudoTypeInfo make__program_target__make__program_target__field_types_maybe_use_analysis_cache_dir_0_1[2];

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_1;

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_2;

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_0[2];

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_1[1];

static const MR_DuPtagLayout make__program_target__make__program_target__du_ptag_ordered_maybe_use_analysis_cache_dir_0[2];

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_name_ordered_maybe_use_analysis_cache_dir_0[3];

static const MR_Integer make__program_target__make__program_target__functor_number_map_maybe_use_analysis_cache_dir_0[3];

static void MR_CALL 
make__program_target__IntroducedFrom__pred__get_bottom_up_ordered_modules__1524__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1416__1_2_p_0(
  MR_Word AllModules_13,
  MR_Word HeadVar__2_33);

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__800__1_1_f_0(
  MR_Word LambdaHeadVar__1_31);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__590__1_1_f_0(
  MR_String LambdaHeadVar__1_63);

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__496__1_3_f_0(
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_String LambdaHeadVar__1_32);

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__filter_out_nested_modules__449__1_2_p_0(
  MR_Word NestedModules_15,
  MR_Word HeadVar__2_36);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__389__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__385__1_3_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_45,
  MR_Word * HeadVar__3_46);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__394__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61);

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__393__1_3_p_0(
  MR_Word HeadVar__1_56,
  MR_Word HeadVar__2_57,
  MR_Word * HeadVar__3_58);

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__program_target____Unify____maybe_use_analysis_cache_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__program_target____Compare____build_what_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__program_target____Unify____build_what_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__program_target____Compare____build3_1_0(
  MR_Word TypeInfo_for_Info_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__program_target____Unify____build3_1_0(
  MR_Word TypeInfo_for_Info_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__program_target____Compare____build2_1_0(
  MR_Word TypeInfo_for_Info_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__program_target____Unify____build2_1_0(
  MR_Word TypeInfo_for_Info_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__program_target__make_local_module_id_option_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Opts0_5,
  MR_Word * Opts_6);

static void MR_CALL 
make__program_target__acc_nonnested_and_parent_modules_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_NonnestedModules_0_24,
  MR_Word * STATE_VARIABLE_NonnestedModules_25,
  MR_Word STATE_VARIABLE_ParentModules_0_26,
  MR_Word * STATE_VARIABLE_ParentModules_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__program_target__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static MR_Word MR_CALL 
make__program_target__lookup_module_dep_info_in_maybe_map_2_f_0(
  MR_Word ModuleDeps_4,
  MR_Word ModuleName_5);

static void MR_CALL 
make__program_target__add_module_relations_6_p_0(
  MR_Word LookupModuleImports_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * STATE_VARIABLE_IntDepsGraph_13,
  MR_Word STATE_VARIABLE_ImplDepsGraph_0_14,
  MR_Word * STATE_VARIABLE_ImplDepsGraph_15);

static void MR_CALL 
make__program_target__get_non_nested_target_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_TargetModulesCord_0_19,
  MR_Word * STATE_VARIABLE_TargetModulesCord_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__reinsert_timestamps_for_non_class_files_4_p_0(
  MR_String FileName_5,
  MR_Tuple DirNamesMaybeTimestamp_6,
  MR_Word STATE_VARIABLE_TimestampMap_0_8,
  MR_Word * STATE_VARIABLE_TimestampMap_9);

static void MR_CALL 
make__program_target__linked_target_cleanup_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word MainModuleName_13,
  MR_Word LinkedTargetType_14,
  MR_String FullMainModuleLinkedFileName_15,
  MR_String CurDirMainModuleLinkedFileName_16,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
make__program_target__link_and_write_error_specs_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word LinkTargetType_11,
  MR_Word ModuleName_12,
  MR_Word ObjectsList_13,
  MR_Word * Succeeded_14);

static MR_Box MR_CALL 
make__program_target__get_module_foreign_object_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__get_module_foreign_object_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ForeignObjectFiles_14,
  MR_Word STATE_VARIABLE_MakeInfo_0_23,
  MR_Word * STATE_VARIABLE_MakeInfo_24);

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ObjectTargets_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__program_target__collect_nested_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_NestedModules_0_20,
  MR_Word * STATE_VARIABLE_NestedModules_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__pair_module_with_name_2_p_0(
  MR_Word Module_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
make__program_target__pair_module_with_timestamp_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Module_11,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word MainModuleName_14,
  MR_Word TargetType_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
make__program_target__make_linked_target_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_linked_target_1_11_p_0(
  MR_Word Globals_12,
  MR_Word LinkedTargetFile_13,
  MR_Word ExtraOptions_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
make__program_target__remove_cache_dir_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String CacheDir_10,
  MR_Word Info_11,
  MR_Word * Info_5);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Var_50,
  MR_Word Var_51,
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Var_50,
  MR_Word Var_51,
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
make__program_target__build_analysis_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
make__program_target__build_analysis_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0(
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_Word Succeeded0_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word TargetModules_15,
  MR_Word LocalModulesOpts_16,
  MR_Word Succeeded0_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
make__program_target__should_we_use_analysis_cache_dir_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word Info_9,
  MR_Word * UseAnalysisCacheDir_10);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word LinkedTargetFile_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

static void MR_CALL 
make__program_target__build_int_opt_files_9_p_0_1(
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
make__program_target__build_int_opt_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word BuildWhat_12,
  MR_Word AllModules0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__program_target__make_java_files_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__program_target__make_java_files_9_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__make_java_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__program_target__make_java_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word ObjModules_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__program_target__out_of_date_java_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word ObjModules_11,
  MR_Word * OutOfDateModules_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
make__program_target__build_linked_target_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__program_target__build_linked_target_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word Globals_19,
  MR_Word MainModuleName_20,
  MR_Word LinkedTargetType_21,
  MR_String FullMainModuleLinkedFileName_22,
  MR_String CurDirMainModuleLinkedFileName_23,
  MR_Word MaybeOldestLhsTimestamp_24,
  MR_Word AllModules_25,
  MR_Word ObjModules_26,
  MR_Word CompilationTarget_27,
  MR_Word PIC_28,
  MR_Word ShouldRebuildLhs_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word NoLinkObjsGlobals_18,
  MR_Word MainModuleName_19,
  MR_Word LinkedTargetType_20,
  MR_String FullMainModuleLinkedFileName_21,
  MR_Word AllModulesList_22,
  MR_Word ObjModules_23,
  MR_Word InitObjectFileNames_24,
  MR_Word LinkObjectFileNames_25,
  MR_Word CompilationTarget_26,
  MR_Word PIC_27,
  MR_Word * Succeeded_28,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static MR_bool MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules0_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__program_target__order_target_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules_11,
  MR_Word * OrderedModules_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static MR_bool MR_CALL 
make__program_target____Unify____build2_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__program_target____Compare____build2_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__program_target____Unify____build3_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__program_target____Compare____build3_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__program_target____Unify____build_what_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__program_target____Compare____build_what_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__program_target____Unify____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__program_target_scalar_common_1[12][2];

static /* final */ const MR_Box make__program_target_scalar_common_2[16][3];

static /* final */ const MR_Box make__program_target_scalar_common_3[2][4];

static /* final */ const MR_Box make__program_target_scalar_common_4[1][1];

static /* final */ const MR_Box make__program_target_scalar_common_5[8][5];

static /* final */ const MR_Box make__program_target_scalar_common_6[5][6];

static /* final */ const MR_Box make__program_target_scalar_common_7[5][11];

static /* final */ const MR_Box make__program_target_scalar_common_8[4][12];

static /* final */ const MR_Box make__program_target_scalar_common_9[2][9];

static /* final */ const MR_Box make__program_target_scalar_common_10[3][10];

static /* final */ const MR_Box make__program_target_scalar_common_11[2][7];

static /* final */ const MR_Box make__program_target_scalar_common_12[1][14];

static /* final */ const MR_Box make__program_target_scalar_common_13[1][13];


struct make__program_target__vector_common_type_14_0_s {
  const MR_Word make__program_target__vector_common_type_14_0__vct_14_f_0;
};

static /* final */ const struct make__program_target__vector_common_type_14_0_s make__program_target_vector_common_14[7];



static /* final */ const MR_Box make__program_target_scalar_common_1[12][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
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
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "--compile-to-shared-lib")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_2[16][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target_scalar_common_3[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[0])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[0])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[1])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[1])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[2])),
    ((MR_Box) (make__program_target__order_target_modules_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[4])),
    ((MR_Box) (make__program_target__build_linked_target_17_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__program_target_scalar_common_11[0])),
    ((MR_Box) (make__program_target__make_java_files_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[2])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[2])),
    ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[5])),
    ((MR_Box) (make__program_target__build_analysis_files_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__program_target_scalar_common_6[4])),
    ((MR_Box) (make__program_target__build_analysis_files_10_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&make__program_target_scalar_common_5[7])),
    ((MR_Box) (make__program_target__get_module_foreign_object_files_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target_scalar_common_1[2])),
    ((MR_Box) (&make__program_target_scalar_common_2[2]))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__program_target_scalar_common_7[3])),
    ((MR_Box) (make__program_target__build_linked_target_17_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_4[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box make__program_target_scalar_common_5[8][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_6[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_7[5][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&backend_libs__link_target_code__backend_libs__link_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0)),
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
    ((MR_Box) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_dirs_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_8[4][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_9[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_10[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_11[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_12[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__program_target_scalar_common_13[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__link_target_code__backend_libs__link_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct make__program_target__vector_common_type_14_0_s make__program_target_vector_common_14[7] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_1[7])) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   6 */   { (MR_Word) ((MR_Unsigned) 0U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "libs.process_util.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_tuple_2__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&make__program_target__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_TypeInfo_Struct2 make__program_target____vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&make__program_target__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&make__program_target__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&make__program_target____vti_tuple_2list__ti_list_1builtin__type_ctor_info_string_0maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__program_target__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__program_target____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__program_target__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_VA_PseudoTypeInfo_Struct6 make__program_target____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct make__program_target__make__program_target__type_ctor_info_build2_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__program_target____Unify____build2_1_0_10001)),
  ((MR_Box) (make__program_target____Compare____build2_1_0_10001)),
  (MR_String) "make.program_target",
  (MR_String) "build2",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__program_target____vpti_pred_6__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_VA_PseudoTypeInfo_Struct8 make__program_target____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
    (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&make__program_target__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct make__program_target__make__program_target__type_ctor_info_build3_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__program_target____Unify____build3_1_0_10001)),
  ((MR_Box) (make__program_target____Compare____build3_1_0_10001)),
  (MR_String) "make.program_target",
  (MR_String) "build3",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__program_target____vpti_pred_8__plain_io__type_ctor_info_text_output_stream_0__plain_libs__maybe_util__type_ctor_info_maybe_succeeded_0__pseudo_1__pseudo_1__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_0 = {
  (MR_String) "build_int3s",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_1 = {
  (MR_String) "build_int3s_int0s",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_2 = {
  (MR_String) "build_all_ints",
  INT32_C(2)
};

static const MR_EnumFunctorDesc make__program_target__make__program_target__enum_functor_desc_build_what_0_3 = {
  (MR_String) "build_all_ints_opts",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr make__program_target__make__program_target__enum_ordinal_ordered_build_what_0[4] = {
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_0,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_1,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_2,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_3
};

static const MR_EnumFunctorDescPtr make__program_target__make__program_target__enum_name_ordered_build_what_0[4] = {
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_2,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_3,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_0,
  &make__program_target__make__program_target__enum_functor_desc_build_what_0_1
};

static const MR_Integer make__program_target__make__program_target__functor_number_map_build_what_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__program_target__make__program_target__type_ctor_info_build_what_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__program_target____Unify____build_what_0_0_10001)),
  ((MR_Box) (make__program_target____Compare____build_what_0_0_10001)),
  (MR_String) "make.program_target",
  (MR_String) "build_what",
  { make__program_target__make__program_target__enum_name_ordered_build_what_0 },
  { make__program_target__make__program_target__enum_ordinal_ordered_build_what_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  make__program_target__make__program_target__functor_number_map_build_what_0,

};

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_0 = {
  (MR_String) "do_not_use_analysis_cache_dir",
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

static const MR_PseudoTypeInfo make__program_target__make__program_target__field_types_maybe_use_analysis_cache_dir_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_1 = {
  (MR_String) "use_analysis_cache_dir",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__program_target__make__program_target__field_types_maybe_use_analysis_cache_dir_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_2 = {
  (MR_String) "analysis_cache_dir_create_failed",
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

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_0[2] = {
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_0,
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_2
};

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_1[1] = { &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_1 };

static const MR_DuPtagLayout make__program_target__make__program_target__du_ptag_ordered_maybe_use_analysis_cache_dir_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__program_target__make__program_target__du_stag_ordered_maybe_use_analysis_cache_dir_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__program_target__make__program_target__du_name_ordered_maybe_use_analysis_cache_dir_0[3] = {
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_2,
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_0,
  &make__program_target__make__program_target__du_functor_desc_maybe_use_analysis_cache_dir_0_1
};

static const MR_Integer make__program_target__make__program_target__functor_number_map_maybe_use_analysis_cache_dir_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__program_target__make__program_target__type_ctor_info_maybe_use_analysis_cache_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__program_target____Unify____maybe_use_analysis_cache_dir_0_0_10001)),
  ((MR_Box) (make__program_target____Compare____maybe_use_analysis_cache_dir_0_0_10001)),
  (MR_String) "make.program_target",
  (MR_String) "maybe_use_analysis_cache_dir",
  { make__program_target__make__program_target__du_name_ordered_maybe_use_analysis_cache_dir_0 },
  { make__program_target__make__program_target__du_ptag_ordered_maybe_use_analysis_cache_dir_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__program_target__make__program_target__functor_number_map_maybe_use_analysis_cache_dir_0,

};

static void MR_CALL 
make__program_target__IntroducedFrom__pred__get_bottom_up_ordered_modules__1524__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_25, HeadVar__2_26);
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__build_analysis_files_1__1416__1_2_p_0(
  MR_Word AllModules_13,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_13, ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_String MR_CALL 
make__program_target__IntroducedFrom__func__get_module_foreign_object_files__800__1_1_f_0(
  MR_Word LambdaHeadVar__1_31)
{
  MR_String LambdaHeadVar__2_32 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_31, 2))));

  return LambdaHeadVar__2_32;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__build_linked_target_2__590__1_1_f_0(
  MR_String LambdaHeadVar__1_63)
{
  MR_Word LambdaHeadVar__2_64;

  {
    LambdaHeadVar__2_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_64, 0) = ((MR_Box) (LambdaHeadVar__1_63));
  }
  return LambdaHeadVar__2_64;
}

static MR_Word MR_CALL 
make__program_target__IntroducedFrom__func__get_foreign_object_targets__496__1_3_f_0(
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_String LambdaHeadVar__1_32)
{
  MR_Word LambdaHeadVar__2_33;
  MR_Word Var_34;
  MR_Word Var_35;

  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = (MR_Box) ((MR_Unsigned) (PIC_12));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (LambdaHeadVar__1_32));
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (Var_35));
  }
  LambdaHeadVar__2_33 = (MR_Word) ((MR_Word) (Var_34));
  return LambdaHeadVar__2_33;
}

static MR_bool MR_CALL 
make__program_target__IntroducedFrom__pred__filter_out_nested_modules__449__1_2_p_0(
  MR_Word NestedModules_15,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedModules_15, ((MR_Box) (HeadVar__2_36)));
  return succeeded;
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__389__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49)
{
  MR_Box conv0_HeadVar__2_49;

  mercury__pair__snd_2_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_48, &conv0_HeadVar__2_49);
  *HeadVar__2_49 = ((MR_Word) (conv0_HeadVar__2_49));
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__385__1_3_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_45,
  MR_Word * HeadVar__3_46)
{
  MR_Word KeyA_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_44, 0))));
  MR_Word ModuleA_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_44, 1))));
  MR_Word KeyB_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_45, 0))));
  MR_Word ModuleB_51 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_45, 1))));
  MR_Word KeyResult_52;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), &KeyResult_52, ((MR_Box) (KeyA_48)), ((MR_Box) (KeyB_50)));
  switch (KeyResult_52) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *HeadVar__3_46 = KeyResult_52;
      break;
    case (MR_Integer) 0:
      {
        MR_String ModuleAStr_53;
        MR_String ModuleBStr_54;

        ModuleAStr_53 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleA_49);
        ModuleBStr_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleB_51);
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__3_46, ModuleAStr_53, ModuleBStr_54);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__394__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61)
{
  MR_Box conv0_HeadVar__2_61;

  mercury__pair__snd_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_60, &conv0_HeadVar__2_61);
  *HeadVar__2_61 = ((MR_Word) (conv0_HeadVar__2_61));
}

static void MR_CALL 
make__program_target__IntroducedFrom__pred__order_target_modules__393__1_3_p_0(
  MR_Word HeadVar__1_56,
  MR_Word HeadVar__2_57,
  MR_Word * HeadVar__3_58)
{
  MR_String KeyA_60 = ((MR_String) ((MR_hl_field(0, HeadVar__1_56, 0))));
  MR_Word ModuleA_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_56, 1))));
  MR_String KeyB_62 = ((MR_String) ((MR_hl_field(0, HeadVar__2_57, 0))));
  MR_Word ModuleB_63 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_57, 1))));
  MR_Word KeyResult_64;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &KeyResult_64, ((MR_Box) (KeyA_60)), ((MR_Box) (KeyB_62)));
  switch (KeyResult_64) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *HeadVar__3_58 = KeyResult_64;
      break;
    case (MR_Integer) 0:
      {
        MR_String ModuleAStr_65;
        MR_String ModuleBStr_66;

        ModuleAStr_65 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleA_61);
        ModuleBStr_66 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleB_63);
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__3_58, ModuleAStr_65, ModuleBStr_66);
      }
      break;
  }
}

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0(
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
                *HeadVar__1_1 = (MR_Integer) 1;
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
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
make__program_target____Unify____maybe_use_analysis_cache_dir_0_0(
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
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_4;
          MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_String ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build_what_0_0(
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
make__program_target____Unify____build_what_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build3_1_0(
  MR_Word TypeInfo_for_Info_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
make__program_target____Unify____build3_1_0(
  MR_Word TypeInfo_for_Info_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_51_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build2_1_0(
  MR_Word TypeInfo_for_Info_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

static MR_bool MR_CALL 
make__program_target____Unify____build2_1_0(
  MR_Word TypeInfo_for_Info_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_97_107_101_95_95_112_114_111_103_114_97_109_95_116_97_114_103_101_116_95_95_98_117_105_108_100_50_95_49_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static void MR_CALL 
make__program_target__make_local_module_id_option_3_p_0(
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
make__program_target__acc_nonnested_and_parent_modules_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_NonnestedModules_0_24,
  MR_Word * STATE_VARIABLE_NonnestedModules_25,
  MR_Word STATE_VARIABLE_ParentModules_0_26,
  MR_Word * STATE_VARIABLE_ParentModules_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_19;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_12, Globals_13, ModuleName_14, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
  if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_NonnestedModules_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NonnestedModules_0_24));
    }
    *STATE_VARIABLE_ParentModules_27 = STATE_VARIABLE_ParentModules_0_26;
  }
  else
  {
    MR_Word ModuleDepInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_19, 0))));
    MR_Word MaybeTopModule_21;

    parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_20, &MaybeTopModule_21);
    if ((MaybeTopModule_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NonnestedModules_25 = STATE_VARIABLE_NonnestedModules_0_24;
      *STATE_VARIABLE_ParentModules_27 = STATE_VARIABLE_ParentModules_0_26;
    }
    else
    {
      MR_Word Children_23;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_NonnestedModules_25 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NonnestedModules_0_24));
      }
      parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_20, &Children_23);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_23);
      if (succeeded)
        *STATE_VARIABLE_ParentModules_27 = STATE_VARIABLE_ParentModules_0_26;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParentModules_27 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParentModules_0_26));
        }
    }
  }
}

static void MR_CALL 
make__program_target__reset_analysis_registry_dependency_status_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word Dep_6;
  MR_Word DepStatusMap0_7;
  MR_Word DepStatusMap_8;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (ModuleName_4));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 28U));
  }
  Dep_6 = (MR_Word) ((MR_Word) (Var_11));
  DepStatusMap0_7 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_0_9);
  mercury__version_hash_table__set_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_6)), ((MR_Box) ((MR_Integer) 0)), DepStatusMap0_7, &DepStatusMap_8);
  make__make_info__make_info_set_dep_file_status_map_3_p_0(DepStatusMap_8, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
}

static MR_Word MR_CALL 
make__program_target__lookup_module_dep_info_in_maybe_map_2_f_0(
  MR_Word ModuleDeps_4,
  MR_Word ModuleName_5)
{
  MR_Word ModuleDepInfo_6;
  MR_Word MaybeModuleDepInfo_7;
  MR_Box conv0_MaybeModuleDepInfo_7;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDeps_4, ((MR_Box) (ModuleName_5)), &conv0_MaybeModuleDepInfo_7);
  MaybeModuleDepInfo_7 = ((MR_Word) (conv0_MaybeModuleDepInfo_7));
  if ((MaybeModuleDepInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140make.program_target.lookup_module_dep_info_in_maybe_map\'/2", (MR_String) "MaybeModuleDepInfo = no");
  else
    ModuleDepInfo_6 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_7, 0))));
  return ModuleDepInfo_6;
}

static void MR_CALL 
make__program_target__add_module_relations_6_p_0(
  MR_Word LookupModuleImports_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * STATE_VARIABLE_IntDepsGraph_13,
  MR_Word STATE_VARIABLE_ImplDepsGraph_0_14,
  MR_Word * STATE_VARIABLE_ImplDepsGraph_15)
{
  MR_Word ModuleDepInfo_11;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, LookupModuleImports_7, 1))));
  MR_Box conv1_ModuleDepInfo_11;

  conv1_ModuleDepInfo_11 = func_0(((MR_Box) (LookupModuleImports_7)), ((MR_Box) (ModuleName_8)));
  ModuleDepInfo_11 = ((MR_Word) (conv1_ModuleDepInfo_11));
  parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0(ModuleDepInfo_11, LookupModuleImports_7, STATE_VARIABLE_IntDepsGraph_0_12, STATE_VARIABLE_IntDepsGraph_13, STATE_VARIABLE_ImplDepsGraph_0_14, STATE_VARIABLE_ImplDepsGraph_15);
}

static void MR_CALL 
make__program_target__get_non_nested_target_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_TargetModulesCord_0_19,
  MR_Word * STATE_VARIABLE_TargetModulesCord_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_16;
  MR_Word ModuleDepInfo_17;
  MR_Word SourceFileModuleName_18;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_12, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  succeeded = (MaybeModuleDepInfo_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_16, 0))));
    parse_tree__module_dep_info__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_17, &SourceFileModuleName_18);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, SourceFileModuleName_18);
  }
  if (succeeded)
    mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_12)), STATE_VARIABLE_TargetModulesCord_0_19, STATE_VARIABLE_TargetModulesCord_20);
  else
    *STATE_VARIABLE_TargetModulesCord_20 = STATE_VARIABLE_TargetModulesCord_0_19;
}

static void MR_CALL 
make__program_target__reinsert_timestamps_for_non_class_files_4_p_0(
  MR_String FileName_5,
  MR_Tuple DirNamesMaybeTimestamp_6,
  MR_Word STATE_VARIABLE_TimestampMap_0_8,
  MR_Word * STATE_VARIABLE_TimestampMap_9)
{
  MR_bool succeeded;

  succeeded = mercury__string__suffix_2_p_0(FileName_5, (MR_String) ".class");
  if (succeeded)
    *STATE_VARIABLE_TimestampMap_9 = STATE_VARIABLE_TimestampMap_0_8;
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]), ((MR_Box) (FileName_5)), ((MR_Box) (DirNamesMaybeTimestamp_6)), STATE_VARIABLE_TimestampMap_0_8, STATE_VARIABLE_TimestampMap_9);
}

static void MR_CALL 
make__program_target__linked_target_cleanup_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word MainModuleName_13,
  MR_Word LinkedTargetType_14,
  MR_String FullMainModuleLinkedFileName_15,
  MR_String CurDirMainModuleLinkedFileName_16,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Info_1_24;
  MR_Word STATE_VARIABLE_Info_2_27;

  make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 87, FullMainModuleLinkedFileName_15, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_1_24);
  succeeded = (strcmp(FullMainModuleLinkedFileName_15, CurDirMainModuleLinkedFileName_16) == 0);
  if (succeeded)
    STATE_VARIABLE_Info_2_27 = STATE_VARIABLE_Info_1_24;
  else
    make__util__remove_file_for_make_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 87, CurDirMainModuleLinkedFileName_16, STATE_VARIABLE_Info_1_24, &STATE_VARIABLE_Info_2_27);
  switch (LinkedTargetType_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 4:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 0:
      make__clean__remove_init_files_8_p_0(ProgressStream_11, Globals_12, (MR_Integer) 87, MainModuleName_13, STATE_VARIABLE_Info_2_27, STATE_VARIABLE_Info_20);
      break;
    case (MR_Integer) 6:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 5:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_2_27;
      break;
  }
}

static void MR_CALL 
make__program_target__link_and_write_error_specs_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word LinkTargetType_11,
  MR_Word ModuleName_12,
  MR_Word ObjectsList_13,
  MR_Word * Succeeded_14)
{
  MR_Word Specs_16;

  backend_libs__link_target_code__link_files_into_executable_or_library_9_p_0(ProgressStream_10, Globals_9, LinkTargetType_11, ModuleName_12, ObjectsList_13, &Specs_16, Succeeded_14);
  parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_10, Globals_9, Specs_16);
}

static MR_Box MR_CALL 
make__program_target__get_module_foreign_object_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_32;

  conv0_LambdaHeadVar__2_32 = make__program_target__IntroducedFrom__func__get_module_foreign_object_files__800__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__get_module_foreign_object_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ForeignObjectFiles_14,
  MR_Word STATE_VARIABLE_MakeInfo_0_23,
  MR_Word * STATE_VARIABLE_MakeInfo_24)
{
  MR_Word MaybeModuleDepInfo_17;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_17, STATE_VARIABLE_MakeInfo_0_23, STATE_VARIABLE_MakeInfo_24);
  if ((MaybeModuleDepInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.get_module_foreign_object_files\'/9", (MR_String) "error in dependencies");
      return;
    }
  else
  {
    MR_Word ModuleDepInfo_18 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_17, 0))));
    MR_Word ForeignFiles_19;

    make__module_target__get_any_fact_table_object_code_files_6_p_0(Globals_11, PIC_12, ModuleDepInfo_18, &ForeignFiles_19);
    *ForeignObjectFiles_14 = mercury__list__map_2_f_0((MR_Word) (&make__module_target__make__module_target__type_ctor_info_foreign_code_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_2[15]), ForeignFiles_19);
  }
}

static MR_Box MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_33;

  conv0_LambdaHeadVar__2_33 = make__program_target__IntroducedFrom__func__get_foreign_object_targets__496__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_33));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__get_foreign_object_targets_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word PIC_12,
  MR_Word ModuleName_13,
  MR_Word * ObjectTargets_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word CompilationTarget_17;
  MR_Word MaybeModuleDepInfo_18;
  MR_Word ModuleDepInfo_19;

  libs__globals__get_target_2_p_0(Globals_11, &CompilationTarget_17);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_13, &MaybeModuleDepInfo_18, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
  if ((MaybeModuleDepInfo_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.program_target.get_foreign_object_targets\'/9", (MR_String) "unknown imports");
      return;
    }
  else
    ModuleDepInfo_19 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_18, 0))));
  switch (CompilationTarget_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FactFileToTarget_20;
        MR_Word FactTableFiles_22;
        MR_Word Var_36;

        {
          FactFileToTarget_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FactFileToTarget_20, 0) = ((MR_Box) (&make__program_target_scalar_common_11[1]));
          MR_hl_field(0, FactFileToTarget_20, 1) = ((MR_Box) (make__program_target__get_foreign_object_targets_9_p_0_1));
          MR_hl_field(0, FactFileToTarget_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, FactFileToTarget_20, 3) = ((MR_Box) (PIC_12));
          MR_hl_field(0, FactFileToTarget_20, 4) = ((MR_Box) (ModuleName_13));
        }
        parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_19, &FactTableFiles_22);
        Var_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFiles_22);
        *ObjectTargets_14 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), FactFileToTarget_20, Var_36);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *ObjectTargets_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static void MR_CALL 
make__program_target__collect_nested_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_NestedModules_0_20,
  MR_Word * STATE_VARIABLE_NestedModules_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word MaybeModuleDepInfo_16;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_12, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  if ((MaybeModuleDepInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_NestedModules_21 = STATE_VARIABLE_NestedModules_0_20;
  else
  {
    MR_Word ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_16, 0))));
    MR_Word MaybeTopModule_18;
    MR_Word NestedSubModules_19;

    parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_17, &MaybeTopModule_18);
    NestedSubModules_19 = parse_tree__module_baggage__get_nested_children_of_top_module_1_f_0(MaybeTopModule_18);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedSubModules_19, STATE_VARIABLE_NestedModules_0_20, STATE_VARIABLE_NestedModules_21);
  }
}

static void MR_CALL 
make__program_target__pair_module_with_name_2_p_0(
  MR_Word Module_3,
  MR_Word * HeadVar__2_2)
{
  MR_String Name_4;

  Name_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_3);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Module_3));
  }
}

static void MR_CALL 
make__program_target__pair_module_with_timestamp_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Module_11,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word Timestamp_12;
  MR_Word Target_15;
  MR_Word MaybeTimestamp_16;

  {
    Target_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Target_15, 0) = ((MR_Box) (Module_11));
    MR_hl_field(0, Target_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__timestamp__get_target_timestamp_8_p_0(ProgressStream_9, Globals_10, Target_15, &MaybeTimestamp_16, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
  if (((MR_tag((MR_Word) MaybeTimestamp_16)) == (MR_Integer) 1))
    Timestamp_12 = libs__timestamp__oldest_timestamp_0_f_0();
  else
    Timestamp_12 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_16, 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Module_11));
  }
}

void MR_CALL 
make__program_target__make_misc_target_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word HeadVar__3_3,
  MR_Word * Succeeded_15,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word MainModuleName_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word TargetType_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word DefaultOptionTable_19;
  MR_Word MaybeStdLibGrades_20;
  MR_Word EnvOptFileVariables_21;
  MR_Word EnvVarArgs_22;
  MR_Word OptionArgs_23;
  MR_Word MayBuild_25;

  libs__globals__get_default_options_2_p_0(Globals_12, &DefaultOptionTable_19);
  MaybeStdLibGrades_20 = make__make_info__make_info_get_maybe_stdlib_grades_1_f_0(STATE_VARIABLE_Info_0_29);
  EnvOptFileVariables_21 = make__make_info__make_info_get_env_optfile_variables_1_f_0(STATE_VARIABLE_Info_0_29);
  EnvVarArgs_22 = make__make_info__make_info_get_env_var_args_1_f_0(STATE_VARIABLE_Info_0_29);
  OptionArgs_23 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_29);
  make__build__setup_for_build_with_module_options_12_p_0(ProgressStream_11, DefaultOptionTable_19, MaybeStdLibGrades_20, (MR_Integer) 1, MainModuleName_13, EnvOptFileVariables_21, EnvVarArgs_22, OptionArgs_23, (MR_Word) ((MR_Unsigned) 0U), &MayBuild_25);
  if (((MR_tag((MR_Word) MayBuild_25)) == (MR_Integer) 1))
  {
    MR_Word BuildGlobals_27 = ((MR_Word) ((MR_hl_field(1, MayBuild_25, 1))));

    make__program_target__make_misc_target_builder_11_p_0(ProgressStream_11, BuildGlobals_27, MainModuleName_13, TargetType_14, Succeeded_15, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30, STATE_VARIABLE_Specs_0_31, STATE_VARIABLE_Specs_32);
  }
  else
  {
    MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(0, MayBuild_25, 0))));
    MR_Word ErrorStream_28;

    libs__globals__get_error_output_stream_5_p_0(Globals_12, MainModuleName_13, &ErrorStream_28);
    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_28, Globals_12, Specs_17);
    *Succeeded_15 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
  }
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__5_5;

  make__clean__make_module_realclean_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__5_5;

  make__clean__make_module_clean_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_TargetModulesCord_20;
  MR_Word conv0_STATE_VARIABLE_Info_22;

  make__program_target__get_non_nested_target_modules_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TargetModulesCord_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TargetModulesCord_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
make__program_target__make_misc_target_builder_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word MainModuleName_14,
  MR_Word TargetType_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;
  MR_Word RebuildModuleDeps_20;
  MR_Word Succeeded0_21;
  MR_Word AllModulesSet_22;
  MR_Word AllModules_23;
  MR_Word STATE_VARIABLE_Info_1_44;
  MR_Word STATE_VARIABLE_Info_2_45;
  MR_Word STATE_VARIABLE_Info_3_47;

  RebuildModuleDeps_20 = make__make_info__make_info_get_rebuild_module_deps_1_f_0(STATE_VARIABLE_Info_0_37);
  if ((TargetType_15 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if ((TargetType_15 == (MR_Word) ((MR_Unsigned) 4U)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
    make__make_info__make_info_set_rebuild_module_deps_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_1_44);
  else
    STATE_VARIABLE_Info_1_44 = STATE_VARIABLE_Info_0_37;
  make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_12, Globals_13, MainModuleName_14, &Succeeded0_21, &AllModulesSet_22, STATE_VARIABLE_Info_1_44, &STATE_VARIABLE_Info_2_45);
  make__make_info__make_info_set_rebuild_module_deps_3_p_0(RebuildModuleDeps_20, STATE_VARIABLE_Info_2_45, &STATE_VARIABLE_Info_3_47);
  AllModules_23 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModulesSet_22);
  switch (MR_tag((MR_Word) TargetType_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TargetType_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_48;
            MR_Word STATE_VARIABLE_Info_4_49;
            MR_Box conv7_STATE_VARIABLE_Info_4_49;
            MR_Box conv6_STATE_VARIABLE_IO_2_50;

            *Succeeded_16 = (MR_Integer) 1;
            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_10[2]));
              MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_2));
              MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_48, 3) = ((MR_Box) (ProgressStream_12));
              MR_hl_field(0, Var_48, 4) = ((MR_Box) (Globals_13));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, AllModules_23, ((MR_Box) (STATE_VARIABLE_Info_3_47)), &conv7_STATE_VARIABLE_Info_4_49, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_2_50);
            STATE_VARIABLE_Info_4_49 = ((MR_Word) (conv7_STATE_VARIABLE_Info_4_49));
            make__clean__remove_init_files_8_p_0(ProgressStream_12, Globals_13, (MR_Integer) 83, MainModuleName_14, STATE_VARIABLE_Info_4_49, STATE_VARIABLE_Info_38);
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Info_6_54;
            MR_Word Var_56;
            MR_Box conv10_STATE_VARIABLE_Info_38;
            MR_Box conv9_STATE_VARIABLE_IO_42;

            *Succeeded_16 = (MR_Integer) 1;
            make__clean__make_main_module_realclean_7_p_0(ProgressStream_12, Globals_13, MainModuleName_14, STATE_VARIABLE_Info_3_47, &STATE_VARIABLE_Info_6_54);
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__program_target_scalar_common_10[2]));
              MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_3));
              MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_56, 3) = ((MR_Box) (ProgressStream_12));
              MR_hl_field(0, Var_56, 4) = ((MR_Box) (Globals_13));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, AllModules_23, ((MR_Box) (STATE_VARIABLE_Info_6_54)), &conv10_STATE_VARIABLE_Info_38, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_42);
            *STATE_VARIABLE_Info_38 = ((MR_Word) (conv10_STATE_VARIABLE_Info_38));
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 2:
          {
            make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0(Globals_13, MainModuleName_14, AllModules_23, Succeeded0_21, ProgressStream_12, Globals_13, Succeeded_16, STATE_VARIABLE_Info_3_47, STATE_VARIABLE_Info_38);
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntSucceeded_34;
            MR_Word STATE_VARIABLE_Info_15_82;

            make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, AllModules_23, &IntSucceeded_34, STATE_VARIABLE_Info_3_47, &STATE_VARIABLE_Info_15_82);
            switch (IntSucceeded_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_16 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_15_82;
                  *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
                }
                break;
              case (MR_Integer) 1:
                make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(MainModuleName_14, AllModules_23, Globals_13, ProgressStream_12, Globals_13, Succeeded_16, STATE_VARIABLE_Info_15_82, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word LibSucceeded_35;
            MR_Word Var_88;
            MR_Word STATE_VARIABLE_Info_17_89;

            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_88, 0) = ((MR_Box) (MainModuleName_14));
              MR_hl_field(0, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            make__program_target__make_misc_target_10_p_0(ProgressStream_12, Globals_13, Var_88, &LibSucceeded_35, STATE_VARIABLE_Info_3_47, &STATE_VARIABLE_Info_17_89, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            switch (LibSucceeded_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_16 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_17_89;
                }
                break;
              case (MR_Integer) 1:
                make__library_install__install_library_8_p_0(ProgressStream_12, Globals_13, MainModuleName_14, Succeeded_16, STATE_VARIABLE_Info_17_89, STATE_VARIABLE_Info_38);
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word LibSucceeded_143;
            MR_Word Var_144;
            MR_Word STATE_VARIABLE_Info_17_145;

            {
              Var_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_144, 0) = ((MR_Box) (MainModuleName_14));
              MR_hl_field(0, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            make__program_target__make_misc_target_10_p_0(ProgressStream_12, Globals_13, Var_144, &LibSucceeded_143, STATE_VARIABLE_Info_3_47, &STATE_VARIABLE_Info_17_145, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            switch (LibSucceeded_143) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Succeeded_16 = (MR_Integer) 0;
                  *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_17_145;
                }
                break;
              case (MR_Integer) 1:
                make__library_install__install_library_gs_gas_8_p_0(ProgressStream_12, Globals_13, MainModuleName_14, Succeeded_16, STATE_VARIABLE_Info_17_145, STATE_VARIABLE_Info_38);
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word KeepGoing_107;

            KeepGoing_107 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_3_47);
            succeeded = (Succeeded0_21 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (KeepGoing_107 == (MR_Integer) 0);
            if (succeeded)
            {
              *Succeeded_16 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_3_47;
            }
            else
            {
              MR_Word XmlDocs_36;
              MR_Word Succeeded1_104;

              XmlDocs_36 = make__util__make_dependency_list_2_f_0(AllModules_23, (MR_Word) ((MR_Unsigned) 52U));
              make__build__foldl2_make_module_targets_10_p_0(KeepGoing_107, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_12, Globals_13, XmlDocs_36, &Succeeded1_104, STATE_VARIABLE_Info_3_47, STATE_VARIABLE_Info_38);
              *Succeeded_16 = libs__maybe_util__and_2_f_0(Succeeded0_21, Succeeded1_104);
            }
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleTargetType_24 = ((MR_Word) ((MR_hl_field(1, TargetType_15, 0))));
        MR_Word TargetModules_25;
        MR_Word KeepGoing_26;
        MR_Word STATE_VARIABLE_Info_8_59;

        succeeded = (ModuleTargetType_24 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          MR_Word TargetModulesCord_148;
          MR_Word Var_149;
          MR_Word Var_150;
          MR_Box conv4_TargetModulesCord_148;
          MR_Box conv3_STATE_VARIABLE_Info_8_59;
          MR_Box conv2_STATE_VARIABLE_IO_6_60;

          {
            Var_149 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_149, 0) = ((MR_Box) (&make__program_target_scalar_common_8[3]));
            MR_hl_field(0, Var_149, 1) = ((MR_Box) (make__program_target__make_misc_target_builder_11_p_0_1));
            MR_hl_field(0, Var_149, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_149, 3) = ((MR_Box) (ProgressStream_12));
            MR_hl_field(0, Var_149, 4) = ((MR_Box) (Globals_13));
          }
          Var_150 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[3]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_149, AllModules_23, ((MR_Box) (Var_150)), &conv4_TargetModulesCord_148, ((MR_Box) (STATE_VARIABLE_Info_3_47)), &conv3_STATE_VARIABLE_Info_8_59, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_6_60);
          TargetModulesCord_148 = ((MR_Word) (conv4_TargetModulesCord_148));
          STATE_VARIABLE_Info_8_59 = ((MR_Word) (conv3_STATE_VARIABLE_Info_8_59));
          TargetModules_25 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TargetModulesCord_148);
        }
        else
        {
          TargetModules_25 = AllModules_23;
          STATE_VARIABLE_Info_8_59 = STATE_VARIABLE_Info_3_47;
        }
        KeepGoing_26 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_8_59);
        succeeded = (Succeeded0_21 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (KeepGoing_26 == (MR_Integer) 0);
        if (succeeded)
        {
          *Succeeded_16 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_8_59;
        }
        else
        {
          MR_Word Succeeded1_27;
          MR_Word STATE_VARIABLE_Info_9_62;

          switch (MR_tag((MR_Word) ModuleTargetType_24)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ModuleTargetType_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 5:
                case (MR_Integer) 8:
                  {
                    Succeeded1_27 = (MR_Integer) 1;
                    STATE_VARIABLE_Info_9_62 = STATE_VARIABLE_Info_8_59;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 7:
                case (MR_Integer) 9:
                case (MR_Integer) 10:
                case (MR_Integer) 11:
                case (MR_Integer) 12:
                case (MR_Integer) 13:
                  make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_8_59, &STATE_VARIABLE_Info_9_62);
                  break;
                case (MR_Integer) 2:
                  make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 0, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_8_59, &STATE_VARIABLE_Info_9_62);
                  break;
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                  make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 1, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_8_59, &STATE_VARIABLE_Info_9_62);
                  break;
                case (MR_Integer) 6:
                  make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 2, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_8_59, &STATE_VARIABLE_Info_9_62);
                  break;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              make__program_target__build_int_opt_files_9_p_0(ProgressStream_12, Globals_13, (MR_Integer) 3, AllModules_23, &Succeeded1_27, STATE_VARIABLE_Info_8_59, &STATE_VARIABLE_Info_9_62);
              break;
          }
          succeeded = (Succeeded1_27 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (KeepGoing_26 == (MR_Integer) 0);
          if (succeeded)
          {
            *Succeeded_16 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_9_62;
          }
          else
          {
            MR_Word Targets_32;
            MR_Word Succeeded2_33;
            MR_Word Var_77;

            Targets_32 = make__util__make_dependency_list_2_f_0(TargetModules_25, ModuleTargetType_24);
            make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0(KeepGoing_26, (MR_Word) ((MR_Unsigned) 0U), Globals_13, Targets_32, ProgressStream_12, Globals_13, &Succeeded2_33, STATE_VARIABLE_Info_9_62, STATE_VARIABLE_Info_38);
            Var_77 = libs__maybe_util__and_2_f_0(Succeeded0_21, Succeeded1_27);
            *Succeeded_16 = libs__maybe_util__and_2_f_0(Var_77, Succeeded2_33);
          }
        }
        *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
      }
      break;
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Info_5;

  make__program_target__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Info_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_Info_5));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_55,
  MR_Word Var_56,
  MR_Word Var_57,
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word UseAnalysisCacheDir_18;

  make__program_target__should_we_use_analysis_cache_dir_6_p_0(ProgressStream_11, Globals_12, STATE_VARIABLE_Info_0_27, &UseAnalysisCacheDir_18);
  switch (MR_tag((MR_Word) UseAnalysisCacheDir_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UseAnalysisCacheDir_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Target_58;

            libs__globals__get_target_2_p_0(Var_57, &Target_58);
            switch (Target_58) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word StaticSucceeded_59;
                  MR_Word SharedLibsSupported_60;
                  MR_Word Var_62;
                  MR_Word STATE_VARIABLE_Info_1_63;
                  MR_Word STATE_VARIABLE_Specs_1_64;

                  {
                    Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_62, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(0, Var_62, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  }
                  make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_62, &StaticSucceeded_59, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_1_63, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_1_64);
                  backend_libs__link_target_code__are_shared_libraries_supported_2_p_0(Var_57, &SharedLibsSupported_60);
                  switch (StaticSucceeded_59) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *Succeeded_14 = (MR_Integer) 0;
                        *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_1_63;
                        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_1_64;
                      }
                      break;
                    case (MR_Integer) 1:
                      switch (SharedLibsSupported_60) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_1_63;
                            *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_1_64;
                            backend_libs__compile_target_code__make_library_init_file_7_p_0(Var_57, ProgressStream_11, Var_55, Var_56, Succeeded_14);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_67;
                            MR_Word SharedLibsSucceeded_94;

                            {
                              Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_55));
                              MR_hl_field(0, Var_67, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            }
                            make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_67, &SharedLibsSucceeded_94, STATE_VARIABLE_Info_1_63, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_1_64, STATE_VARIABLE_Specs_30);
                            switch (SharedLibsSucceeded_94) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *Succeeded_14 = (MR_Integer) 0;
                                break;
                              case (MR_Integer) 1:
                                backend_libs__compile_target_code__make_library_init_file_7_p_0(Var_57, ProgressStream_11, Var_55, Var_56, Succeeded_14);
                                break;
                            }
                          }
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_70;

                  {
                    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(0, Var_70, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  }
                  make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_70, Succeeded_14, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_72;

                  {
                    Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(0, Var_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  }
                  make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_72, Succeeded_14, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Succeeded_14 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
            *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CacheDir_19 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_18, 0))));
        MR_String CacheDirOption_20 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_18, 1))));
        MR_Word OrigOptionArgs_21;
        MR_Word NewOptionArgs_22;
        MR_Word VeryVerbose_23;
        MR_Box Cookie_24;
        MR_Word TaskSucceeded_25;
        MR_Word CleanupPred_26;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word STATE_VARIABLE_Info_2_40;
        MR_Word STATE_VARIABLE_Info_3_43;
        MR_Word STATE_VARIABLE_Info_5_48;
        MR_Word Target_74;
        MR_String RemovingMsg_90;
        MR_Box conv1_STATE_VARIABLE_Info_5_48;
        MR_Word Var_91;

        OrigOptionArgs_21 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_27);
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (CacheDir_19));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (CacheDirOption_20));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_38));
        }
        NewOptionArgs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_21, Var_37);
        make__make_info__make_info_set_option_args_3_p_0(NewOptionArgs_22, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_2_40);
        libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 83, &VeryVerbose_23);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_24);
        libs__globals__get_target_2_p_0(Var_57, &Target_74);
        switch (Target_74) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word StaticSucceeded_75;
              MR_Word SharedLibsSupported_76;
              MR_Word Var_78;
              MR_Word STATE_VARIABLE_Info_1_79;
              MR_Word STATE_VARIABLE_Specs_1_80;

              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_78, 0) = ((MR_Box) (Var_55));
                MR_hl_field(0, Var_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_78, &StaticSucceeded_75, STATE_VARIABLE_Info_2_40, &STATE_VARIABLE_Info_1_79, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_1_80);
              backend_libs__link_target_code__are_shared_libraries_supported_2_p_0(Var_57, &SharedLibsSupported_76);
              switch (StaticSucceeded_75) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    TaskSucceeded_25 = (MR_Integer) 0;
                    STATE_VARIABLE_Info_3_43 = STATE_VARIABLE_Info_1_79;
                    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_1_80;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (SharedLibsSupported_76) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_Info_3_43 = STATE_VARIABLE_Info_1_79;
                        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_1_80;
                        backend_libs__compile_target_code__make_library_init_file_7_p_0(Var_57, ProgressStream_11, Var_55, Var_56, &TaskSucceeded_25);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_83;
                        MR_Word SharedLibsSucceeded_96;

                        {
                          Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_83, 0) = ((MR_Box) (Var_55));
                          MR_hl_field(0, Var_83, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                        }
                        make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_83, &SharedLibsSucceeded_96, STATE_VARIABLE_Info_1_79, &STATE_VARIABLE_Info_3_43, STATE_VARIABLE_Specs_1_80, STATE_VARIABLE_Specs_30);
                        switch (SharedLibsSucceeded_96) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            TaskSucceeded_25 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            backend_libs__compile_target_code__make_library_init_file_7_p_0(Var_57, ProgressStream_11, Var_55, Var_56, &TaskSucceeded_25);
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_86;

              {
                Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_86, 0) = ((MR_Box) (Var_55));
                MR_hl_field(0, Var_86, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
              }
              make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_86, &TaskSucceeded_25, STATE_VARIABLE_Info_2_40, &STATE_VARIABLE_Info_3_43, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_88;

              {
                Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_88, 0) = ((MR_Box) (Var_55));
                MR_hl_field(0, Var_88, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
              }
              make__program_target__make_linked_target_10_p_0(ProgressStream_11, Var_57, Var_88, &TaskSucceeded_25, STATE_VARIABLE_Info_2_40, &STATE_VARIABLE_Info_3_43, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
            }
            break;
        }
        {
          CleanupPred_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CleanupPred_26, 0) = ((MR_Box) (&make__program_target_scalar_common_10[1]));
          MR_hl_field(0, CleanupPred_26, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_51_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0_1));
          MR_hl_field(0, CleanupPred_26, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, CleanupPred_26, 3) = ((MR_Box) (ProgressStream_11));
          MR_hl_field(0, CleanupPred_26, 4) = ((MR_Box) (Globals_12));
          MR_hl_field(0, CleanupPred_26, 5) = ((MR_Box) (CacheDir_19));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_23, Cookie_24, CleanupPred_26, TaskSucceeded_25, Succeeded_14, ((MR_Box) (STATE_VARIABLE_Info_3_43)), &conv1_STATE_VARIABLE_Info_5_48);
        STATE_VARIABLE_Info_5_48 = ((MR_Word) (conv1_STATE_VARIABLE_Info_5_48));
        make__util__verbose_make_two_part_msg_4_p_0(Globals_12, (MR_String) "Removing", CacheDir_19, &RemovingMsg_90);
        make__util__maybe_write_msg_4_p_0(ProgressStream_11, RemovingMsg_90);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_19, &Var_91);
        make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_21, STATE_VARIABLE_Info_5_48, STATE_VARIABLE_Info_28);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__make_linked_target_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Info_5;

  make__program_target__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Info_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_Info_5));
}

void MR_CALL 
make__program_target__make_linked_target_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word LinkedTargetFile_13,
  MR_Word * LinkedTargetSucceeded_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word LinkedTargetType_19 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetFile_13, 1))) & (MR_Integer) 7);
  MR_Word ExtraOptions_20 = ((&make__program_target_vector_common_14[0 + LinkedTargetType_19]))->make__program_target__vector_common_type_14_0__vct_14_f_0;
  MR_Word LibLinkages_21;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 709, &LibLinkages_21);
  switch (LinkedTargetType_19) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "shared")), LibLinkages_21);
        succeeded = !(succeeded);
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "static")), LibLinkages_21);
        succeeded = !(succeeded);
      }
      break;
  }
  if (succeeded)
  {
    *LinkedTargetSucceeded_14 = (MR_Integer) 1;
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
  {
    MR_Word LibgradeCheckSpecs_22;

    libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(Globals_12, &LibgradeCheckSpecs_22);
    if ((LibgradeCheckSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UseAnalysisCacheDir_49;

      make__program_target__should_we_use_analysis_cache_dir_6_p_0(ProgressStream_11, Globals_12, STATE_VARIABLE_Info_0_25, &UseAnalysisCacheDir_49);
      switch (MR_tag((MR_Word) UseAnalysisCacheDir_49)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(UseAnalysisCacheDir_49)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              make__program_target__make_linked_target_1_11_p_0(Globals_12, LinkedTargetFile_13, ExtraOptions_20, ProgressStream_11, LinkedTargetSucceeded_14, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
              break;
            case (MR_Integer) 1:
              {
                *LinkedTargetSucceeded_14 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
                *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String CacheDir_50 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_49, 0))));
            MR_String CacheDirOption_51 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_49, 1))));
            MR_Word OrigOptionArgs_52;
            MR_Word NewOptionArgs_53;
            MR_Word VeryVerbose_54;
            MR_Box Cookie_55;
            MR_Word TaskSucceeded_56;
            MR_Word CleanupPred_57;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word STATE_VARIABLE_Info_2_62;
            MR_Word STATE_VARIABLE_Info_3_65;
            MR_Word STATE_VARIABLE_Info_4_67;
            MR_Word STATE_VARIABLE_Info_5_69;
            MR_Box conv1_STATE_VARIABLE_Info_4_67;

            OrigOptionArgs_52 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_25);
            {
              Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_60, 0) = ((MR_Box) (CacheDir_50));
              MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_59, 0) = ((MR_Box) (CacheDirOption_51));
              MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
            }
            NewOptionArgs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_52, Var_59);
            make__make_info__make_info_set_option_args_3_p_0(NewOptionArgs_53, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_2_62);
            libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 83, &VeryVerbose_54);
            libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_55);
            make__program_target__make_linked_target_1_11_p_0(Globals_12, LinkedTargetFile_13, ExtraOptions_20, ProgressStream_11, &TaskSucceeded_56, STATE_VARIABLE_Info_2_62, &STATE_VARIABLE_Info_3_65, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
            {
              CleanupPred_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CleanupPred_57, 0) = ((MR_Box) (&make__program_target_scalar_common_10[1]));
              MR_hl_field(0, CleanupPred_57, 1) = ((MR_Box) (make__program_target__make_linked_target_10_p_0_1));
              MR_hl_field(0, CleanupPred_57, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, CleanupPred_57, 3) = ((MR_Box) (ProgressStream_11));
              MR_hl_field(0, CleanupPred_57, 4) = ((MR_Box) (Globals_12));
              MR_hl_field(0, CleanupPred_57, 5) = ((MR_Box) (CacheDir_50));
            }
            libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_54, Cookie_55, CleanupPred_57, TaskSucceeded_56, LinkedTargetSucceeded_14, ((MR_Box) (STATE_VARIABLE_Info_3_65)), &conv1_STATE_VARIABLE_Info_4_67);
            STATE_VARIABLE_Info_4_67 = ((MR_Word) (conv1_STATE_VARIABLE_Info_4_67));
            make__program_target__remove_cache_dir_7_p_0(ProgressStream_11, Globals_12, CacheDir_50, STATE_VARIABLE_Info_4_67, &STATE_VARIABLE_Info_5_69);
            make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_52, STATE_VARIABLE_Info_5_69, STATE_VARIABLE_Info_26);
          }
          break;
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LibgradeCheckSpecs_22, STATE_VARIABLE_Specs_0_27);
      *LinkedTargetSucceeded_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
    }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_1_11_p_0(
  MR_Word Globals_12,
  MR_Word LinkedTargetFile_13,
  MR_Word ExtraOptions_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  MR_Word MainModuleName_20 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_13, 0))));
  MR_Word IntermodAnalysis_22;
  MR_Word IntermodAnalysisSucceeded_23;
  MR_Word STATE_VARIABLE_Info_1_40;

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 533, &IntermodAnalysis_22);
  switch (IntermodAnalysis_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        IntermodAnalysisSucceeded_23 = (MR_Integer) 1;
        STATE_VARIABLE_Info_1_40 = STATE_VARIABLE_Info_0_32;
        *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
      }
      break;
    case (MR_Integer) 1:
      make__program_target__make_misc_target_builder_11_p_0(ProgressStream_15, Globals_12, MainModuleName_20, (MR_Word) ((MR_Unsigned) 8U), &IntermodAnalysisSucceeded_23, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_1_40, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
      break;
  }
  switch (IntermodAnalysisSucceeded_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_16 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_1_40;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DefaultOptionTable_24;
        MR_Word MaybeStdLibGrades_25;
        MR_Word EnvOptFileVariables_26;
        MR_Word EnvVarArgs_27;
        MR_Word OptionArgs_28;
        MR_Word MayBuild_29;

        libs__globals__get_default_options_2_p_0(Globals_12, &DefaultOptionTable_24);
        MaybeStdLibGrades_25 = make__make_info__make_info_get_maybe_stdlib_grades_1_f_0(STATE_VARIABLE_Info_1_40);
        EnvOptFileVariables_26 = make__make_info__make_info_get_env_optfile_variables_1_f_0(STATE_VARIABLE_Info_1_40);
        EnvVarArgs_27 = make__make_info__make_info_get_env_var_args_1_f_0(STATE_VARIABLE_Info_1_40);
        OptionArgs_28 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_1_40);
        make__build__setup_for_build_with_module_options_12_p_0(ProgressStream_15, DefaultOptionTable_24, MaybeStdLibGrades_25, (MR_Integer) 1, MainModuleName_20, EnvOptFileVariables_26, EnvVarArgs_27, OptionArgs_28, ExtraOptions_14, &MayBuild_29);
        if (((MR_tag((MR_Word) MayBuild_29)) == (MR_Integer) 1))
        {
          MR_Word BuildGlobals_31 = ((MR_Word) ((MR_hl_field(1, MayBuild_29, 1))));

          make__program_target__make_linked_target_2_8_p_0(ProgressStream_15, BuildGlobals_31, LinkedTargetFile_13, Succeeded_16, STATE_VARIABLE_Info_1_40, STATE_VARIABLE_Info_33);
        }
        else
        {
          MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(0, MayBuild_29, 0))));

          parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_15, Globals_12, Specs_18);
          *Succeeded_16 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_1_40;
        }
      }
      break;
  }
}

static void MR_CALL 
make__program_target__remove_cache_dir_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String CacheDir_10,
  MR_Word Info_11,
  MR_Word * Info_5)
{
  MR_String RemovingMsg_13;
  MR_Word Var_14;

  *Info_5 = Info_11;
  make__util__verbose_make_two_part_msg_4_p_0(Globals_9, (MR_String) "Removing", CacheDir_10, &RemovingMsg_13);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, RemovingMsg_13);
  mercury__io__file__remove_file_recursively_4_p_0(CacheDir_10, &Var_14);
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Info_5;

  make__program_target__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Info_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_Info_5));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Var_50,
  MR_Word Var_51,
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word UseAnalysisCacheDir_15;

  make__program_target__should_we_use_analysis_cache_dir_6_p_0(ProgressStream_9, Globals_10, STATE_VARIABLE_Info_0_24, &UseAnalysisCacheDir_15);
  switch (MR_tag((MR_Word) UseAnalysisCacheDir_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UseAnalysisCacheDir_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__build__foldl2_make_module_targets_maybe_parallel_build2_10_p_0(Var_48, Var_49, Var_50, Var_51, ProgressStream_9, Succeeded_12, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
          break;
        case (MR_Integer) 1:
          {
            *Succeeded_12 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CacheDir_16 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_15, 0))));
        MR_String CacheDirOption_17 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_15, 1))));
        MR_Word OrigOptionArgs_18;
        MR_Word NewOptionArgs_19;
        MR_Word VeryVerbose_20;
        MR_Box Cookie_21;
        MR_Word TaskSucceeded_22;
        MR_Word CleanupPred_23;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word STATE_VARIABLE_Info_2_34;
        MR_Word STATE_VARIABLE_Info_3_37;
        MR_Word STATE_VARIABLE_Info_5_41;
        MR_String RemovingMsg_52;
        MR_Box conv1_STATE_VARIABLE_Info_5_41;
        MR_Word Var_53;

        OrigOptionArgs_18 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_24);
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (CacheDir_16));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (CacheDirOption_17));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
        }
        NewOptionArgs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_18, Var_31);
        make__make_info__make_info_set_option_args_3_p_0(NewOptionArgs_19, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_2_34);
        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 83, &VeryVerbose_20);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_21);
        make__build__foldl2_make_module_targets_maybe_parallel_build2_10_p_0(Var_48, Var_49, Var_50, Var_51, ProgressStream_9, &TaskSucceeded_22, STATE_VARIABLE_Info_2_34, &STATE_VARIABLE_Info_3_37);
        {
          CleanupPred_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CleanupPred_23, 0) = ((MR_Box) (&make__program_target_scalar_common_10[1]));
          MR_hl_field(0, CleanupPred_23, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_51_95_95_91_55_93_95_48_8_p_0_1));
          MR_hl_field(0, CleanupPred_23, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, CleanupPred_23, 3) = ((MR_Box) (ProgressStream_9));
          MR_hl_field(0, CleanupPred_23, 4) = ((MR_Box) (Globals_10));
          MR_hl_field(0, CleanupPred_23, 5) = ((MR_Box) (CacheDir_16));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_20, Cookie_21, CleanupPred_23, TaskSucceeded_22, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_3_37)), &conv1_STATE_VARIABLE_Info_5_41);
        STATE_VARIABLE_Info_5_41 = ((MR_Word) (conv1_STATE_VARIABLE_Info_5_41));
        make__util__verbose_make_two_part_msg_4_p_0(Globals_10, (MR_String) "Removing", CacheDir_16, &RemovingMsg_52);
        make__util__maybe_write_msg_4_p_0(ProgressStream_9, RemovingMsg_52);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_16, &Var_53);
        make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_18, STATE_VARIABLE_Info_5_41, STATE_VARIABLE_Info_25);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Info_5;

  make__program_target__remove_cache_dir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Info_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_Info_5));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0(
  MR_Word Var_48,
  MR_Word Var_49,
  MR_Word Var_50,
  MR_Word Var_51,
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word UseAnalysisCacheDir_15;

  make__program_target__should_we_use_analysis_cache_dir_6_p_0(ProgressStream_9, Globals_10, STATE_VARIABLE_Info_0_24, &UseAnalysisCacheDir_15);
  switch (MR_tag((MR_Word) UseAnalysisCacheDir_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UseAnalysisCacheDir_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          make__program_target__build_analysis_files_10_p_0(Var_48, Var_49, Var_50, Var_51, ProgressStream_9, Succeeded_12, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
          break;
        case (MR_Integer) 1:
          {
            *Succeeded_12 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CacheDir_16 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_15, 0))));
        MR_String CacheDirOption_17 = ((MR_String) ((MR_hl_field(1, UseAnalysisCacheDir_15, 1))));
        MR_Word OrigOptionArgs_18;
        MR_Word NewOptionArgs_19;
        MR_Word VeryVerbose_20;
        MR_Box Cookie_21;
        MR_Word TaskSucceeded_22;
        MR_Word CleanupPred_23;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word STATE_VARIABLE_Info_2_34;
        MR_Word STATE_VARIABLE_Info_3_37;
        MR_Word STATE_VARIABLE_Info_5_41;
        MR_String RemovingMsg_52;
        MR_Box conv1_STATE_VARIABLE_Info_5_41;
        MR_Word Var_53;

        OrigOptionArgs_18 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_0_24);
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (CacheDir_16));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = ((MR_Box) (CacheDirOption_17));
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
        }
        NewOptionArgs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OrigOptionArgs_18, Var_31);
        make__make_info__make_info_set_option_args_3_p_0(NewOptionArgs_19, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_2_34);
        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 83, &VeryVerbose_20);
        libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_21);
        make__program_target__build_analysis_files_10_p_0(Var_48, Var_49, Var_50, Var_51, ProgressStream_9, &TaskSucceeded_22, STATE_VARIABLE_Info_2_34, &STATE_VARIABLE_Info_3_37);
        {
          CleanupPred_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CleanupPred_23, 0) = ((MR_Box) (&make__program_target_scalar_common_10[1]));
          MR_hl_field(0, CleanupPred_23, 1) = ((MR_Box) (make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_105_116_104_95_97_110_97_108_121_115_105_115_95_99_97_99_104_101_95_100_105_114_95_50_95_95_104_111_50_95_95_91_55_93_95_48_8_p_0_1));
          MR_hl_field(0, CleanupPred_23, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, CleanupPred_23, 3) = ((MR_Box) (ProgressStream_9));
          MR_hl_field(0, CleanupPred_23, 4) = ((MR_Box) (Globals_10));
          MR_hl_field(0, CleanupPred_23, 5) = ((MR_Box) (CacheDir_16));
        }
        libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_20, Cookie_21, CleanupPred_23, TaskSucceeded_22, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_3_37)), &conv1_STATE_VARIABLE_Info_5_41);
        STATE_VARIABLE_Info_5_41 = ((MR_Word) (conv1_STATE_VARIABLE_Info_5_41));
        make__util__verbose_make_two_part_msg_4_p_0(Globals_10, (MR_String) "Removing", CacheDir_16, &RemovingMsg_52);
        make__util__maybe_write_msg_4_p_0(ProgressStream_9, RemovingMsg_52);
        mercury__io__file__remove_file_recursively_4_p_0(CacheDir_16, &Var_53);
        make__make_info__make_info_set_option_args_3_p_0(OrigOptionArgs_18, STATE_VARIABLE_Info_5_41, STATE_VARIABLE_Info_25);
      }
      break;
  }
}

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Opts_6;

  make__program_target__make_local_module_id_option_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_Opts_6);
  *wrapper_arg_3 = ((MR_Box) (conv6_Opts_6));
}

static MR_bool MR_CALL 
make__program_target__build_analysis_files_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__program_target__IntroducedFrom__pred__build_analysis_files_1__1416__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_26;

  make__program_target__IntroducedFrom__pred__get_bottom_up_ordered_modules__1524__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_26));
}

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_IntDepsGraph_13;
  MR_Word conv1_STATE_VARIABLE_ImplDepsGraph_15;

  make__program_target__add_module_relations_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IntDepsGraph_13, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ImplDepsGraph_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IntDepsGraph_13));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ImplDepsGraph_15));
}

static MR_Box MR_CALL 
make__program_target__build_analysis_files_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleDepInfo_6;

  conv0_ModuleDepInfo_6 = make__program_target__lookup_module_dep_info_in_maybe_map_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleDepInfo_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__build_analysis_files_10_p_0(
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word AllModules_13,
  MR_Word Succeeded0_14,
  MR_Word ProgressStream_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word KeepGoing_19;

  KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_21);
  succeeded = (Succeeded0_14 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_16 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
  else
  {
    MR_Word Succeeded1_20;
    MR_Word STATE_VARIABLE_Info_1_26;

    make__program_target__build_int_opt_files_9_p_0(ProgressStream_15, Globals_11, (MR_Integer) 3, AllModules_13, &Succeeded1_20, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_26);
    succeeded = (Succeeded1_20 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      *Succeeded_16 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_1_26;
    }
    else
    {
      MR_Word TargetModules1_29;
      MR_Word TargetModules_30;
      MR_Word Succeeded0_31;
      MR_Word LocalModulesOpts_32;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_Info_2_38;
      MR_Word ImpDepsGraph_49;
      MR_Word SccSets_50;
      MR_Word SccLists_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word LocalModules_61;
      MR_Box conv4__IntDepsGraph_48;
      MR_Box conv3_ImpDepsGraph_49;
      MR_Box conv7_LocalModulesOpts_32;

      Var_36 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_1_26);
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__program_target_scalar_common_6[3]));
        MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__program_target__build_analysis_files_10_p_0_1));
        MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_55, 3) = ((MR_Box) (Var_36));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (&make__program_target_scalar_common_9[1]));
        MR_hl_field(0, Var_52, 1) = ((MR_Box) (make__program_target__build_analysis_files_10_p_0_2));
        MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_52, 3) = ((MR_Box) (Var_55));
      }
      Var_53 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      Var_54 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[4]), (MR_Word) (&make__program_target_scalar_common_1[4]), Var_52, AllModules_13, ((MR_Box) (Var_53)), &conv4__IntDepsGraph_48, ((MR_Box) (Var_54)), &conv3_ImpDepsGraph_49);
      ImpDepsGraph_49 = ((MR_Word) (conv3_ImpDepsGraph_49));
      SccSets_50 = mercury__digraph__return_sccs_in_to_from_order_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_49);
      mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__program_target_scalar_common_1[5]), (MR_Word) (&make__program_target_scalar_common_2[13]), SccSets_50, &SccLists_51);
      mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SccLists_51, &TargetModules1_29);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (&make__program_target_scalar_common_5[6]));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (make__program_target__build_analysis_files_10_p_0_4));
        MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_37, 3) = ((MR_Box) (AllModules_13));
      }
      mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_37, TargetModules1_29, &TargetModules_30);
      make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_15, Globals_11, MainModuleName_12, &Succeeded0_31, &LocalModules_61, STATE_VARIABLE_Info_1_26, &STATE_VARIABLE_Info_2_38);
      mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__program_target_scalar_common_2[14]), LocalModules_61, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_LocalModulesOpts_32);
      LocalModulesOpts_32 = ((MR_Word) (conv7_LocalModulesOpts_32));
      switch (Succeeded0_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Succeeded_16 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_2_38;
          }
          break;
        case (MR_Integer) 1:
          make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0(ProgressStream_15, Globals_11, TargetModules_30, LocalModulesOpts_32, Succeeded0_31, Succeeded_16, STATE_VARIABLE_Info_2_38, STATE_VARIABLE_Info_22);
          break;
      }
    }
  }
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_10;

  make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_10;

  make__program_target__reset_analysis_registry_dependency_status_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
make__program_target__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_115_95_50_95_95_91_51_93_95_48_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word TargetModules_15,
  MR_Word LocalModulesOpts_16,
  MR_Word Succeeded0_17,
  MR_Word * Succeeded_18,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word KeepGoing_21;
    MR_Word Registries_22;
    MR_Word Succeeded1_23;
    MR_Integer ReanalysisPasses_24;
    MR_Word ReanalyseSuboptimal_25;
    MR_Word InvalidModules_26;
    MR_Word SuboptimalModules_27;
    MR_Word STATE_VARIABLE_Info_1_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    KeepGoing_21 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_0_29);
    Registries_22 = make__util__make_dependency_list_2_f_0(TargetModules_15, (MR_Word) ((MR_Unsigned) 28U));
    make__build__foldl2_make_module_targets_10_p_0(KeepGoing_21, LocalModulesOpts_16, ProgressStream_12, Globals_13, Registries_22, &Succeeded1_23, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_1_34);
    ReanalysisPasses_24 = make__make_info__make_info_get_reanalysis_passes_1_f_0(STATE_VARIABLE_Info_1_34);
    succeeded = (ReanalysisPasses_24 > (MR_Integer) 1);
    if (succeeded)
      ReanalyseSuboptimal_25 = (MR_Integer) 1;
    else
      ReanalyseSuboptimal_25 = (MR_Integer) 0;
    make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_25, Globals_13, TargetModules_15, &InvalidModules_26, &SuboptimalModules_27);
    succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidModules_26);
    if (succeeded)
    {
      MR_String ReanalysingMsg_28;
      MR_Word STATE_VARIABLE_Info_2_40;
      MR_Box conv1_STATE_VARIABLE_Info_2_40;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_29;

      make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_13, &ReanalysingMsg_28);
      make__util__maybe_write_msg_4_p_0(ProgressStream_12, ReanalysingMsg_28);
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[11]), InvalidModules_26, ((MR_Box) (STATE_VARIABLE_Info_1_34)), &conv1_STATE_VARIABLE_Info_2_40);
      STATE_VARIABLE_Info_2_40 = ((MR_Word) (conv1_STATE_VARIABLE_Info_2_40));
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_2_40;
      STATE_VARIABLE_Info_0_29 = next_value_of_STATE_VARIABLE_Info_0_29;
      continue;
    }
    else
    {
      succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SuboptimalModules_27);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_4_44;
        MR_Integer Var_45;
        MR_Word STATE_VARIABLE_Info_5_46;
        MR_String ReanalysingMsg_51;
        MR_Box conv3_STATE_VARIABLE_Info_4_44;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_29;

        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__program_target_scalar_common_2[12]), SuboptimalModules_27, ((MR_Box) (STATE_VARIABLE_Info_1_34)), &conv3_STATE_VARIABLE_Info_4_44);
        STATE_VARIABLE_Info_4_44 = ((MR_Word) (conv3_STATE_VARIABLE_Info_4_44));
        Var_45 = (MR_Integer) ((MR_Unsigned) ReanalysisPasses_24 - (MR_Unsigned) 1);
        make__make_info__make_info_set_reanalysis_passes_3_p_0(Var_45, STATE_VARIABLE_Info_4_44, &STATE_VARIABLE_Info_5_46);
        make__util__maybe_reanalyse_modules_msg_2_p_0(Globals_13, &ReanalysingMsg_51);
        make__util__maybe_write_msg_4_p_0(ProgressStream_12, ReanalysingMsg_51);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_5_46;
        STATE_VARIABLE_Info_0_29 = next_value_of_STATE_VARIABLE_Info_0_29;
        continue;
      }
      else
      {
        *Succeeded_18 = libs__maybe_util__and_2_f_0(Succeeded0_17, Succeeded1_23);
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_1_34;
      }
    }
    break;
  }
}

static void MR_CALL 
make__program_target__modules_needing_reanalysis_7_p_0(
  MR_Word ReanalyseSuboptimal_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Module_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Modules_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ModuleStatus_20;

      analysis__operations__do_read_module_overall_status_6_p_0((MR_Word) (&make__program_target_scalar_common_1[6]), ((MR_Box) ((MR_Integer) 0)), Globals_2, Module_15, &ModuleStatus_20);
      switch (ModuleStatus_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InvalidModules0_22;

            make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_1, Globals_2, Modules_16, &InvalidModules0_22, HeadVar__5_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Module_15));
              MR_hl_field(1, base, 1) = ((MR_Box) (InvalidModules0_22));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__3_3 = Modules_16;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SuboptimalModules0_21;

            make__program_target__modules_needing_reanalysis_7_p_0(ReanalyseSuboptimal_1, Globals_2, Modules_16, HeadVar__4_4, &SuboptimalModules0_21);
            switch (ReanalyseSuboptimal_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__5_5 = SuboptimalModules0_21;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Module_15));
                  MR_hl_field(1, base, 1) = ((MR_Box) (SuboptimalModules0_21));
                }
                break;
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
make__program_target__should_we_use_analysis_cache_dir_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word Info_9,
  MR_Word * UseAnalysisCacheDir_10)
{
  MR_bool succeeded;
  MR_Word IntermodAnalysis_12;
  MR_Word Caching_13;
  MR_String CacheDir0_14;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 533, &IntermodAnalysis_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 535, &Caching_13);
  libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 752, &CacheDir0_14);
  succeeded = (IntermodAnalysis_12 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (Caching_13 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (strcmp(CacheDir0_14, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (!(succeeded))
      {
        MR_Word Var_23;

        Var_23 = make__make_info__make_info_get_option_args_1_f_0(Info_9);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "--analysis-file-cache-dir")), Var_23);
      }
    }
  }
  if (succeeded)
    *UseAnalysisCacheDir_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String CacheDir_17;
    MR_String CreatingMsg_26;
    MR_Word MakeRes_27;
    MR_String _CacheDirProposed_25;

    parse_tree__file_names__analysis_cache_dir_name_3_p_0(Globals_8, &CacheDir_17, &_CacheDirProposed_25);
    make__util__verbose_make_two_part_msg_4_p_0(Globals_8, (MR_String) "Creating", CacheDir_17, &CreatingMsg_26);
    make__util__maybe_write_msg_4_p_0(ProgressStream_7, CreatingMsg_26);
    mercury__dir__make_directory_4_p_0(CacheDir_17, &MakeRes_27);
    if ((MakeRes_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *UseAnalysisCacheDir_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CacheDir_17));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_String) "--analysis-file-cache-dir"));
      }
    else
    {
      MR_Word Error_28 = ((MR_Word) ((MR_hl_field(1, MakeRes_27, 0))));
      MR_String Var_37;

      Var_37 = mercury__io__error_message_1_f_0(Error_28);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error: making directory ");
      mercury__io__write_string_4_p_0(ProgressStream_7, CacheDir_17);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ": ");
      mercury__io__write_string_4_p_0(ProgressStream_7, Var_37);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
      *UseAnalysisCacheDir_10 = (MR_Word) ((MR_Unsigned) 4U);
    }
  }
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_20;

  make__program_target__linked_target_cleanup_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Info_20);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ObjectTargets_14;
  MR_Word conv0_STATE_VARIABLE_Info_25;

  make__program_target__get_foreign_object_targets_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_ObjectTargets_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_25);
  *wrapper_arg_2 = ((MR_Box) (conv1_ObjectTargets_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
make__program_target__make_linked_target_2_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word LinkedTargetFile_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  MR_bool succeeded;
  MR_Word MainModuleName_15 = ((MR_Word) ((MR_hl_field(0, LinkedTargetFile_11, 0))));
  MR_Word LinkedTargetType_16 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetFile_11, 1))) & (MR_Integer) 7);
  MR_Word DepsSucceeded_17;
  MR_Word AllModules_18;
  MR_Word KeepGoing_19;
  MR_Word STATE_VARIABLE_Info_1_58;

  make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_9, Globals_10, MainModuleName_15, &DepsSucceeded_17, &AllModules_18, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_1_58);
  KeepGoing_19 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_1_58);
  succeeded = (DepsSucceeded_17 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (KeepGoing_19 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_12 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_1_58;
  }
  else
  {
    MR_Word PIC_20;
    MR_Word CompilationTarget_21;
    MR_Word IntermediateTargetType_22;
    MR_Word ObjectTargetType_23;
    MR_Word ObjModulesAlpha_25;
    MR_Word ObjModules_26;
    MR_Word ObjModulesNonnested_27;
    MR_Word IntermediateTargetsNonnested_28;
    MR_Word ObjTargets_29;
    MR_Word ForeignObjTargetsList_30;
    MR_Word ForeignObjTargets_31;
    MR_Word IntsSucceeded_32;
    MR_Word BuildDepsSucceeded_33;
    MR_String FullMainModuleLinkedFileName_38;
    MR_String CurDirMainModuleLinkedFileName_39;
    MR_Word MaybeTimestamp_41;
    MR_Word MaybeOldestLhsTimestamp_43;
    MR_Word LhsResult_45;
    MR_Word STATE_VARIABLE_Info_2_60;
    MR_Word STATE_VARIABLE_Info_3_62;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_Info_4_65;
    MR_Word STATE_VARIABLE_Info_5_68;
    MR_Word STATE_VARIABLE_Info_10_85;
    MR_Word STATE_VARIABLE_Info_11_89;
    MR_Word STATE_VARIABLE_Info_12_91;
    MR_Box conv3_STATE_VARIABLE_Info_4_65;
    MR_Box conv2_STATE_VARIABLE_IO_4_66;
    MR_Word _SearchDirs_40;
    MR_Word ShouldRebuildLhs_46;

    backend_libs__link_target_code__get_object_code_type_3_p_0(Globals_10, LinkedTargetType_16, &PIC_20);
    libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_21);
    switch (CompilationTarget_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 36U);
          {
            ObjectTargetType_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ObjectTargetType_23, 0) = (MR_Box) ((MR_Unsigned) (PIC_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 40U);
          ObjectTargetType_23 = (MR_Word) ((MR_Unsigned) 40U);
        }
        break;
      case (MR_Integer) 2:
        {
          IntermediateTargetType_22 = (MR_Word) ((MR_Unsigned) 44U);
          ObjectTargetType_23 = (MR_Word) ((MR_Unsigned) 48U);
        }
        break;
    }
    ObjModulesAlpha_25 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_18);
    make__program_target__order_target_modules_8_p_0(ProgressStream_9, Globals_10, ObjModulesAlpha_25, &ObjModules_26, STATE_VARIABLE_Info_1_58, &STATE_VARIABLE_Info_2_60);
    make__program_target__filter_out_nested_modules_8_p_0(ProgressStream_9, Globals_10, ObjModules_26, &ObjModulesNonnested_27, STATE_VARIABLE_Info_2_60, &STATE_VARIABLE_Info_3_62);
    IntermediateTargetsNonnested_28 = make__util__make_dependency_list_2_f_0(ObjModulesNonnested_27, IntermediateTargetType_22);
    ObjTargets_29 = make__util__make_dependency_list_2_f_0(ObjModules_26, ObjectTargetType_23);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_64, 0) = ((MR_Box) (&make__program_target_scalar_common_8[2]));
      MR_hl_field(0, Var_64, 1) = ((MR_Box) (make__program_target__make_linked_target_2_8_p_0_1));
      MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_64, 3) = ((MR_Box) (ProgressStream_9));
      MR_hl_field(0, Var_64, 4) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_64, 5) = ((MR_Box) (PIC_20));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_64, ObjModules_26, &ForeignObjTargetsList_30, ((MR_Box) (STATE_VARIABLE_Info_3_62)), &conv3_STATE_VARIABLE_Info_4_65, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_4_66);
    STATE_VARIABLE_Info_4_65 = ((MR_Word) (conv3_STATE_VARIABLE_Info_4_65));
    ForeignObjTargets_31 = mercury__list__condense_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), ForeignObjTargetsList_30);
    make__program_target__build_int_opt_files_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 3, ObjModulesAlpha_25, &IntsSucceeded_32, STATE_VARIABLE_Info_4_65, &STATE_VARIABLE_Info_5_68);
    succeeded = (IntsSucceeded_32 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (KeepGoing_19 == (MR_Integer) 0);
    if (succeeded)
    {
      BuildDepsSucceeded_33 = (MR_Integer) 0;
      STATE_VARIABLE_Info_10_85 = STATE_VARIABLE_Info_5_68;
    }
    else
    {
      MR_Word BuildDepsSucceeded0_34;
      MR_Word BuildDepsSucceeded1_37;
      MR_Word STATE_VARIABLE_Info_6_71;
      MR_Word STATE_VARIABLE_Info_8_79;

      make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, IntermediateTargetsNonnested_28, &BuildDepsSucceeded0_34, STATE_VARIABLE_Info_5_68, &STATE_VARIABLE_Info_6_71);
      switch (BuildDepsSucceeded0_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded1_37 = (MR_Integer) 0;
            STATE_VARIABLE_Info_8_79 = STATE_VARIABLE_Info_6_71;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = (ObjectTargetType_23 == (MR_Word) ((MR_Unsigned) 48U));
            if (succeeded)
            {
              MR_Word BuildJavaSucceeded_35;
              MR_Word STATE_VARIABLE_Info_7_73;

              make__program_target__make_java_files_9_p_0(ProgressStream_9, Globals_10, MainModuleName_15, ObjModules_26, &BuildJavaSucceeded_35, STATE_VARIABLE_Info_6_71, &STATE_VARIABLE_Info_7_73);
              switch (BuildJavaSucceeded_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    BuildDepsSucceeded1_37 = (MR_Integer) 0;
                    STATE_VARIABLE_Info_8_79 = STATE_VARIABLE_Info_7_73;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word NoRebuildGlobals_36;

                    libs__globals__set_option_4_p_0((MR_Integer) 692, (MR_Word) (MR_mkword(1, &make__program_target_scalar_common_4[0])), Globals_10, &NoRebuildGlobals_36);
                    make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, NoRebuildGlobals_36, ObjTargets_29, &BuildDepsSucceeded1_37, STATE_VARIABLE_Info_7_73, &STATE_VARIABLE_Info_8_79);
                  }
                  break;
              }
            }
            else
              make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, ObjTargets_29, &BuildDepsSucceeded1_37, STATE_VARIABLE_Info_6_71, &STATE_VARIABLE_Info_8_79);
          }
          break;
      }
      switch (BuildDepsSucceeded1_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            BuildDepsSucceeded_33 = (MR_Integer) 0;
            STATE_VARIABLE_Info_10_85 = STATE_VARIABLE_Info_8_79;
          }
          break;
        case (MR_Integer) 1:
          make__build__foldl2_make_module_targets_10_p_0(KeepGoing_19, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, ForeignObjTargets_31, &BuildDepsSucceeded_33, STATE_VARIABLE_Info_8_79, &STATE_VARIABLE_Info_10_85);
          break;
      }
    }
    backend_libs__link_target_code__linked_target_file_name_full_curdir_7_p_0(Globals_10, MainModuleName_15, LinkedTargetType_16, &FullMainModuleLinkedFileName_38, &CurDirMainModuleLinkedFileName_39);
    make__timestamp__get_file_timestamp_8_p_0((MR_Word) ((MR_Unsigned) 0U), FullMainModuleLinkedFileName_38, &_SearchDirs_40, &MaybeTimestamp_41, STATE_VARIABLE_Info_10_85, &STATE_VARIABLE_Info_11_89);
    if (((MR_tag((MR_Word) MaybeTimestamp_41)) == (MR_Integer) 1))
      MaybeOldestLhsTimestamp_43 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word LinkedFileTimestamp_44 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_41, 0))));

      {
        MaybeOldestLhsTimestamp_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeOldestLhsTimestamp_43, 0) = ((MR_Box) (LinkedFileTimestamp_44));
      }
    }
    make__check_up_to_date__should_we_rebuild_lhs_11_p_0(ProgressStream_9, Globals_10, FullMainModuleLinkedFileName_38, MaybeOldestLhsTimestamp_43, BuildDepsSucceeded_33, ObjTargets_29, &LhsResult_45, STATE_VARIABLE_Info_11_89, &STATE_VARIABLE_Info_12_91);
    succeeded = (DepsSucceeded_17 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (LhsResult_45 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ShouldRebuildLhs_46 = ((MR_Unsigned) ((MR_hl_field(1, LhsResult_45, 0))) & (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word VeryVerbose_47;
      MR_Box Cookie_48;
      MR_Word MaybeErrorStream_49;
      MR_Word Succeeded0_50;
      MR_Word CleanupPred_53;
      MR_Word STATE_VARIABLE_Info_14_98;
      MR_Box conv5_STATE_VARIABLE_Info_55;

      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 83, &VeryVerbose_47);
      libs__process_util__setup_checking_for_interrupt_3_p_0(&Cookie_48);
      make__build__open_module_error_stream_7_p_0(ProgressStream_9, Globals_10, STATE_VARIABLE_Info_12_91, MainModuleName_15, &MaybeErrorStream_49);
      if ((MaybeErrorStream_49 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Succeeded0_50 = (MR_Integer) 0;
        STATE_VARIABLE_Info_14_98 = STATE_VARIABLE_Info_12_91;
      }
      else
      {
        MR_Word MESI_51 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_49, 0))));
        MR_Word ErrorStream_52 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_49, 1))));
        MR_Word STATE_VARIABLE_Info_13_96;

        make__program_target__build_linked_target_17_p_0(ProgressStream_9, Globals_10, MainModuleName_15, LinkedTargetType_16, FullMainModuleLinkedFileName_38, CurDirMainModuleLinkedFileName_39, MaybeOldestLhsTimestamp_43, AllModules_18, ObjModules_26, CompilationTarget_21, PIC_20, ShouldRebuildLhs_46, &Succeeded0_50, STATE_VARIABLE_Info_12_91, &STATE_VARIABLE_Info_13_96);
        make__build__close_module_error_stream_handle_errors_9_p_0(ProgressStream_9, Globals_10, MainModuleName_15, MESI_51, ErrorStream_52, STATE_VARIABLE_Info_13_96, &STATE_VARIABLE_Info_14_98);
      }
      {
        CleanupPred_53 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CleanupPred_53, 0) = ((MR_Box) (&make__program_target_scalar_common_13[0]));
        MR_hl_field(0, CleanupPred_53, 1) = ((MR_Box) (make__program_target__make_linked_target_2_8_p_0_2));
        MR_hl_field(0, CleanupPred_53, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, CleanupPred_53, 3) = ((MR_Box) (ProgressStream_9));
        MR_hl_field(0, CleanupPred_53, 4) = ((MR_Box) (Globals_10));
        MR_hl_field(0, CleanupPred_53, 5) = ((MR_Box) (MainModuleName_15));
        MR_hl_field(0, CleanupPred_53, 6) = ((MR_Box) (LinkedTargetType_16));
        MR_hl_field(0, CleanupPred_53, 7) = ((MR_Box) (FullMainModuleLinkedFileName_38));
        MR_hl_field(0, CleanupPred_53, 8) = ((MR_Box) (CurDirMainModuleLinkedFileName_39));
      }
      libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_47, Cookie_48, CleanupPred_53, Succeeded0_50, Succeeded_12, ((MR_Box) (STATE_VARIABLE_Info_14_98)), &conv5_STATE_VARIABLE_Info_55);
      *STATE_VARIABLE_Info_55 = ((MR_Word) (conv5_STATE_VARIABLE_Info_55));
    }
    else
    {
      *Succeeded_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_12_91;
    }
  }
}

static void MR_CALL 
make__program_target__build_int_opt_files_9_p_0_1(
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
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_NonnestedModules_25;
  MR_Word conv1_STATE_VARIABLE_ParentModules_27;
  MR_Word conv0_STATE_VARIABLE_Info_29;

  make__program_target__acc_nonnested_and_parent_modules_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_NonnestedModules_25, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ParentModules_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_NonnestedModules_25));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ParentModules_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__program_target__build_int_opt_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word BuildWhat_12,
  MR_Word AllModules0_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word NonnestedModules_17;
  MR_Word ParentModules_18;
  MR_Word Int3s_19;
  MR_Word Int0s_20;
  MR_Word Int1s_21;
  MR_Word AnyIntermod_22;
  MR_Word Opts_23;
  MR_Word KeepGoing_24;
  MR_Word Succeeded0_25;
  MR_Word STATE_VARIABLE_Info_1_32;
  MR_Word STATE_VARIABLE_Info_2_39;
  MR_Word Var_48;
  MR_Box conv6_NonnestedModules_17;
  MR_Box conv5_ParentModules_18;
  MR_Box conv4_STATE_VARIABLE_Info_1_32;
  MR_Box conv3_STATE_VARIABLE_IO_1_33;

  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__program_target_scalar_common_12[0]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__program_target__build_int_opt_files_9_p_0_1));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) (Globals_11));
  }
  mercury__list__foldl4_10_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[5]), (MR_Word) (&make__program_target_scalar_common_1[5]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, AllModules0_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_NonnestedModules_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_ParentModules_18, ((MR_Box) (STATE_VARIABLE_Info_0_28)), &conv4_STATE_VARIABLE_Info_1_32, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_1_33);
  NonnestedModules_17 = ((MR_Word) (conv6_NonnestedModules_17));
  ParentModules_18 = ((MR_Word) (conv5_ParentModules_18));
  STATE_VARIABLE_Info_1_32 = ((MR_Word) (conv4_STATE_VARIABLE_Info_1_32));
  Int3s_19 = make__util__make_dependency_list_2_f_0(NonnestedModules_17, (MR_Word) ((MR_Unsigned) 20U));
  Int0s_20 = make__util__make_dependency_list_2_f_0(ParentModules_18, (MR_Word) ((MR_Unsigned) 8U));
  Int1s_21 = make__util__make_dependency_list_2_f_0(NonnestedModules_17, (MR_Word) ((MR_Unsigned) 12U));
  libs__globals__get_any_intermod_2_p_0(Globals_11, &AnyIntermod_22);
  switch (AnyIntermod_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Opts_23 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      Opts_23 = make__util__make_dependency_list_2_f_0(NonnestedModules_17, (MR_Word) ((MR_Unsigned) 24U));
      break;
  }
  KeepGoing_24 = make__make_info__make_info_get_keep_going_1_f_0(STATE_VARIABLE_Info_1_32);
  make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Int3s_19, &Succeeded0_25, STATE_VARIABLE_Info_1_32, &STATE_VARIABLE_Info_2_39);
  succeeded = (Succeeded0_25 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (BuildWhat_12 == (MR_Integer) 0);
  if (succeeded)
  {
    *Succeeded_14 = Succeeded0_25;
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_2_39;
  }
  else
  {
    MR_Word Succeeded1_26;
    MR_Word STATE_VARIABLE_Info_3_42;

    make__build__foldl2_make_module_targets_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Int0s_20, &Succeeded1_26, STATE_VARIABLE_Info_2_39, &STATE_VARIABLE_Info_3_42);
    succeeded = (Succeeded1_26 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (BuildWhat_12 == (MR_Integer) 1);
    if (succeeded)
    {
      *Succeeded_14 = Succeeded1_26;
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_3_42;
    }
    else
    {
      MR_Word Succeeded2_27;
      MR_Word STATE_VARIABLE_Info_4_45;

      make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Int1s_21, &Succeeded2_27, STATE_VARIABLE_Info_3_42, &STATE_VARIABLE_Info_4_45);
      succeeded = (Succeeded2_27 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (BuildWhat_12 == (MR_Integer) 2);
      if (succeeded)
      {
        *Succeeded_14 = Succeeded2_27;
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_4_45;
      }
      else
        make__build__foldl2_make_module_targets_maybe_parallel_10_p_0(KeepGoing_24, (MR_Word) ((MR_Unsigned) 0U), ProgressStream_10, Globals_11, Opts_23, Succeeded_14, STATE_VARIABLE_Info_4_45, STATE_VARIABLE_Info_29);
    }
  }
}

static void MR_CALL 
make__program_target__make_java_files_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_TimestampMap_9;

  make__program_target__reinsert_timestamps_for_non_class_files_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Tuple) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_TimestampMap_9);
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_TimestampMap_9));
}

static void MR_CALL 
make__program_target__make_java_files_9_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__5_5;

  backend_libs__compile_target_code__compile_java_files_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), &conv4_HeadVar__5_5);
  *wrapper_arg_1 = ((MR_Box) (conv4_HeadVar__5_5));
}

static void MR_CALL 
make__program_target__make_java_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__5_5;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__5_5, &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
make__program_target__make_java_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word MainModuleName_12,
  MR_Word ObjModules_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word OutOfDateModules_17;
  MR_Word STATE_VARIABLE_Info_1_26;

  make__program_target__out_of_date_java_modules_8_p_0(ProgressStream_10, Globals_11, ObjModules_13, &OutOfDateModules_17, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_26);
  if ((OutOfDateModules_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Succeeded_14 = (MR_Integer) 1;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_1_26;
  }
  else
  {
    MR_Word TimestampMap0_20;
    MR_Word TimestampMap_21;
    MR_Word STATE_VARIABLE_Info_2_28;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_3_32;
    MR_Word Var_33;
    MR_String MakingMsg_41;
    MR_Word JavaFiles_42;
    MR_Word MaybeErrorStream_44;
    MR_Word Var_49;
    MR_Word _JavaFilesProposed_43;
    MR_Box conv2_STATE_VARIABLE_IO_2_50;
    MR_Box conv6_TimestampMap_21;

    make__util__verbose_make_one_part_msg_3_p_0(Globals_11, (MR_String) "Making Java class files", &MakingMsg_41);
    make__util__maybe_write_msg_4_p_0(ProgressStream_10, MakingMsg_41);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__program_target_scalar_common_7[4]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__program_target__make_java_files_9_p_0_1));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (Globals_11));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.build_java_files\'/9"));
      MR_hl_field(0, Var_49, 5) = ((MR_Box) (MR_mkword(3, &make__program_target_scalar_common_1[11])));
    }
    mercury__list__map2_foldl_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, OutOfDateModules_17, &JavaFiles_42, &_JavaFilesProposed_43, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_2_50);
    make__build__open_module_error_stream_7_p_0(ProgressStream_10, Globals_11, STATE_VARIABLE_Info_1_26, MainModuleName_12, &MaybeErrorStream_44);
    if ((MaybeErrorStream_44 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Succeeded_14 = (MR_Integer) 0;
      STATE_VARIABLE_Info_2_28 = STATE_VARIABLE_Info_1_26;
    }
    else
    {
      MR_Word MESI_45 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_44, 0))));
      MR_Word ErrorStream_46 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_44, 1))));
      MR_String HeadJavaFile_58;
      MR_Word TailJavaFiles_59;
      MR_Word Var_60;
      MR_Box conv3_HeadJavaFile_58;

      mercury__list__det_head_tail_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), JavaFiles_42, &conv3_HeadJavaFile_58, &TailJavaFiles_59);
      HeadJavaFile_58 = ((MR_String) (conv3_HeadJavaFile_58));
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&make__program_target_scalar_common_10[0]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (make__program_target__make_java_files_9_p_0_2));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (Globals_11));
        MR_hl_field(0, Var_60, 4) = ((MR_Box) (ProgressStream_10));
        MR_hl_field(0, Var_60, 5) = ((MR_Box) (HeadJavaFile_58));
        MR_hl_field(0, Var_60, 6) = ((MR_Box) (TailJavaFiles_59));
      }
      libs__process_util__call_in_forked_process_4_p_0(Var_60, Succeeded_14);
      make__build__close_module_error_stream_handle_errors_9_p_0(ProgressStream_10, Globals_11, MainModuleName_12, MESI_45, ErrorStream_46, STATE_VARIABLE_Info_1_26, &STATE_VARIABLE_Info_2_28);
    }
    TimestampMap0_20 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_2_28);
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]));
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]), (MR_Word) (&make__program_target_scalar_common_2[3]), (MR_Word) (&make__program_target_scalar_common_2[10]), TimestampMap0_20, ((MR_Box) (Var_31)), &conv6_TimestampMap_21);
    TimestampMap_21 = ((MR_Word) (conv6_TimestampMap_21));
    make__make_info__make_info_set_file_timestamp_map_3_p_0(TimestampMap_21, STATE_VARIABLE_Info_2_28, &STATE_VARIABLE_Info_3_32);
    Var_33 = make__timestamp__init_target_file_timestamp_map_0_f_0();
    make__make_info__make_info_set_target_file_timestamp_map_3_p_0(Var_33, STATE_VARIABLE_Info_3_32, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__program_target__out_of_date_java_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word ObjModules_11,
  MR_Word * OutOfDateModules_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;

  if ((ObjModules_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *OutOfDateModules_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
  }
  else
  {
    MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(1, ObjModules_11, 0))));
    MR_Word ModuleNames_16 = ((MR_Word) ((MR_hl_field(1, ObjModules_11, 1))));
    MR_Word OutOfDateModules0_17;
    MR_Word JavaTarget_18;
    MR_Word ClassTarget_19;
    MR_Word MaybeJavaTimestamp_20;
    MR_Word MaybeClassTimestamp_21;
    MR_Word STATE_VARIABLE_Info_1_28;
    MR_Word STATE_VARIABLE_Info_2_32;
    MR_Word JavaTimestamp_22;
    MR_Word ClassTimestamp_23;
    MR_Word Var_35;

    make__program_target__out_of_date_java_modules_8_p_0(ProgressStream_9, Globals_10, ModuleNames_16, &OutOfDateModules0_17, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_28);
    {
      JavaTarget_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, JavaTarget_18, 0) = ((MR_Box) (ModuleName_15));
      MR_hl_field(0, JavaTarget_18, 1) = ((MR_Box) ((MR_Unsigned) 44U));
    }
    {
      ClassTarget_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClassTarget_19, 0) = ((MR_Box) (ModuleName_15));
      MR_hl_field(0, ClassTarget_19, 1) = ((MR_Box) ((MR_Unsigned) 48U));
    }
    make__timestamp__get_target_timestamp_8_p_0(ProgressStream_9, Globals_10, JavaTarget_18, &MaybeJavaTimestamp_20, STATE_VARIABLE_Info_1_28, &STATE_VARIABLE_Info_2_32);
    make__timestamp__get_target_timestamp_8_p_0(ProgressStream_9, Globals_10, ClassTarget_19, &MaybeClassTimestamp_21, STATE_VARIABLE_Info_2_32, STATE_VARIABLE_Info_25);
    succeeded = ((MR_tag((MR_Word) MaybeJavaTimestamp_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      JavaTimestamp_22 = ((MR_Word) ((MR_hl_field(0, MaybeJavaTimestamp_20, 0))));
      succeeded = ((MR_tag((MR_Word) MaybeClassTimestamp_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        ClassTimestamp_23 = ((MR_Word) ((MR_hl_field(0, MaybeClassTimestamp_21, 0))));
        libs__timestamp____Compare____timestamp_0_0(&Var_35, ClassTimestamp_23, JavaTimestamp_22);
        succeeded = (Var_35 != (MR_Integer) 1);
      }
    }
    if (succeeded)
      *OutOfDateModules_12 = OutOfDateModules0_17;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *OutOfDateModules_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (OutOfDateModules0_17));
      }
  }
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__3_3;
  MR_Word conv7_HeadVar__4_4;
  MR_Word conv6_HeadVar__6_6;

  make__timestamp__get_file_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv8_HeadVar__3_3, &conv7_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv6_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__3_3));
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv6_HeadVar__6_6));
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_4;
  MR_Word conv1_HeadVar__6_6;

  make__check_up_to_date__get_dependency_file_status_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__6_6));
}

static MR_Box MR_CALL 
make__program_target__build_linked_target_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_64;

  conv0_LambdaHeadVar__2_64 = make__program_target__IntroducedFrom__func__build_linked_target_2__590__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_64));
  return wrapper_arg_2;
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_3(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_5(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_80 = ((MR_Word) ((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__conv5_ExtraObjDepStatus_80));
  make__program_target__build_linked_target_17_p_0_4(env_ptr);
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_4(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_80, 2)));

    (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__Var_74 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatus_80, 2))) & (MR_Integer) 3);
    (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__succeeded = ((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__Var_74 == (MR_Integer) 3);
    if ((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__succeeded)
      make__program_target__build_linked_target_17_p_0_3(env_ptr);
  }
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0_6(
  void * env_ptr_arg)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s * env_ptr = (struct make__program_target__build_linked_target_17_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0), &(env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__conv5_ExtraObjDepStatus_80, (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatuses_55, make__program_target__build_linked_target_17_p_0_5, env_ptr);
      (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__program_target__build_linked_target_17_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
make__program_target__build_linked_target_17_p_0(
  MR_Word ProgressStream_18,
  MR_Word Globals_19,
  MR_Word MainModuleName_20,
  MR_Word LinkedTargetType_21,
  MR_String FullMainModuleLinkedFileName_22,
  MR_String CurDirMainModuleLinkedFileName_23,
  MR_Word MaybeOldestLhsTimestamp_24,
  MR_Word AllModules_25,
  MR_Word ObjModules_26,
  MR_Word CompilationTarget_27,
  MR_Word PIC_28,
  MR_Word ShouldRebuildLhs_29,
  MR_Word * Succeeded_30,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  struct make__program_target__build_linked_target_17_p_0_env_0_s env;

  {
    MR_Word MaybePreLinkCommand_33;
    MR_Word PreLinkSucceeded_37;

    libs__globals__lookup_maybe_string_option_3_p_0(Globals_19, (MR_Integer) 697, &MaybePreLinkCommand_33);
    if ((MaybePreLinkCommand_33 == (MR_Word) ((MR_Unsigned) 0U)))
      PreLinkSucceeded_37 = (MR_Integer) 1;
    else
    {
      MR_String PreLinkCommand_34 = ((MR_String) ((MR_hl_field(1, MaybePreLinkCommand_33, 0))));
      MR_String CommandString_35;
      MR_Word Var_43;

      Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_25);
      backend_libs__compile_target_code__make_all_module_command_6_p_0(PreLinkCommand_34, MainModuleName_20, Var_43, &CommandString_35);
      libs__system_cmds__invoke_system_command_8_p_0(Globals_19, ProgressStream_18, ProgressStream_18, (MR_Integer) 0, CommandString_35, &PreLinkSucceeded_37);
    }
    switch (PreLinkSucceeded_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_30 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LinkObjects_48;
          MR_Word NoLinkObjsGlobals_49;
          MR_Word AllModulesList_50;
          MR_Word InitObjSucceeded_51;
          MR_Word InitObjects_52;
          MR_Word ObjectsToCheck_53;
          MR_Word ObjectsToCheckDepFiles_54;
          MR_Word ExtraObjSucceeded_58;
          MR_Word BuildDepsSucceeded_59;
          MR_Word ExtraObjectTimestamps_61;
          MR_Word ExtraObjectLhsResult_62;
          MR_Word STATE_VARIABLE_Info_1_68;
          MR_Word Var_71;
          MR_Word STATE_VARIABLE_Info_2_72;
          MR_Word STATE_VARIABLE_Info_3_76;
          MR_Box conv4_STATE_VARIABLE_Info_2_72;
          MR_Box conv3_STATE_VARIABLE_IO_2_73;
          MR_Word _SearchDirs_60;
          MR_Box conv10_STATE_VARIABLE_Info_3_76;
          MR_Box conv9_STATE_VARIABLE_IO_3_77;

          libs__globals__lookup_accumulating_option_3_p_0(Globals_19, (MR_Integer) 612, &LinkObjects_48);
          libs__globals__set_option_4_p_0((MR_Integer) 612, (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[8])), Globals_19, &NoLinkObjsGlobals_49);
          AllModulesList_50 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllModules_25);
          switch (LinkedTargetType_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 6:
            case (MR_Integer) 5:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                InitObjSucceeded_51 = (MR_Integer) 1;
                InitObjects_52 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_Info_1_68 = STATE_VARIABLE_Info_0_38;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word InitObjectResult_89;

                backend_libs__compile_target_code__make_init_obj_file_7_p_0(NoLinkObjsGlobals_49, ProgressStream_18, MainModuleName_20, AllModulesList_50, &InitObjectResult_89);
                if ((InitObjectResult_89 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  InitObjSucceeded_51 = (MR_Integer) 0;
                  InitObjects_52 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_Info_1_68 = STATE_VARIABLE_Info_0_38;
                }
                else
                {
                  MR_String InitObject_90 = ((MR_String) ((MR_hl_field(1, InitObjectResult_89, 0))));
                  MR_Word FileTimestampMap0_91;
                  MR_Word FileTimestampMap1_92;

                  FileTimestampMap0_91 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_38);
                  mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]), ((MR_Box) (InitObject_90)), FileTimestampMap0_91, &FileTimestampMap1_92);
                  make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap1_92, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_1_68);
                  InitObjSucceeded_51 = (MR_Integer) 1;
                  {
                    InitObjects_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, InitObjects_52, 0) = ((MR_Box) (InitObject_90));
                    MR_hl_field(1, InitObjects_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
              break;
          }
          ObjectsToCheck_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjects_52, LinkObjects_48);
          ObjectsToCheckDepFiles_54 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__program_target_scalar_common_2[9]), ObjectsToCheck_53);
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_71, 0) = ((MR_Box) (&make__program_target_scalar_common_7[2]));
            MR_hl_field(0, Var_71, 1) = ((MR_Box) (make__program_target__build_linked_target_17_p_0_2));
            MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_71, 3) = ((MR_Box) (ProgressStream_18));
            MR_hl_field(0, Var_71, 4) = ((MR_Box) (NoLinkObjsGlobals_49));
          }
          mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, ObjectsToCheckDepFiles_54, &(env).make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatuses_55, ((MR_Box) (STATE_VARIABLE_Info_1_68)), &conv4_STATE_VARIABLE_Info_2_72, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_2_73);
          STATE_VARIABLE_Info_2_72 = ((MR_Word) (conv4_STATE_VARIABLE_Info_2_72));
          make__program_target__build_linked_target_17_p_0_6(&env);
          if ((env).make__program_target__build_linked_target_17_p_0_env_0__succeeded)
            ExtraObjSucceeded_58 = (MR_Integer) 0;
          else
            ExtraObjSucceeded_58 = (MR_Integer) 1;
          BuildDepsSucceeded_59 = libs__maybe_util__and_2_f_0(InitObjSucceeded_51, ExtraObjSucceeded_58);
          mercury__list__map2_foldl2_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__program_target_scalar_common_2[2]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__program_target_scalar_common_3[1]), ObjectsToCheck_53, &_SearchDirs_60, &ExtraObjectTimestamps_61, ((MR_Box) (STATE_VARIABLE_Info_2_72)), &conv10_STATE_VARIABLE_Info_3_76, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_3_77);
          STATE_VARIABLE_Info_3_76 = ((MR_Word) (conv10_STATE_VARIABLE_Info_3_76));
          make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0(ProgressStream_18, NoLinkObjsGlobals_49, FullMainModuleLinkedFileName_22, MaybeOldestLhsTimestamp_24, BuildDepsSucceeded_59, (env).make__program_target__build_linked_target_17_p_0_env_0__ExtraObjDepStatuses_55, ExtraObjectTimestamps_61, &ExtraObjectLhsResult_62);
          if ((ExtraObjectLhsResult_62 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String ErrorMsg_63;

            make__util__file_error_msg_2_p_0(FullMainModuleLinkedFileName_22, &ErrorMsg_63);
            make__util__maybe_write_msg_locked_5_p_0(ProgressStream_18, STATE_VARIABLE_Info_3_76, ErrorMsg_63);
            *Succeeded_30 = (MR_Integer) 0;
            *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_3_76;
          }
          else
          {
            MR_Word ExtraObjShouldRebuildLhs_64 = ((MR_Unsigned) ((MR_hl_field(1, ExtraObjectLhsResult_62, 0))) & (MR_Integer) 1);
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, ExtraObjectLhsResult_62, 0)));

            (env).make__program_target__build_linked_target_17_p_0_env_0__succeeded = (ShouldRebuildLhs_29 == (MR_Integer) 0);
            if ((env).make__program_target__build_linked_target_17_p_0_env_0__succeeded)
              (env).make__program_target__build_linked_target_17_p_0_env_0__succeeded = (ExtraObjShouldRebuildLhs_64 == (MR_Integer) 0);
            if ((env).make__program_target__build_linked_target_17_p_0_env_0__succeeded)
            {
              MR_Word MainModuleLinkedTarget_96;
              MR_Word Var_100;

              {
                Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_100, 0) = (MR_Box) ((MR_Unsigned) (LinkedTargetType_21));
              }
              {
                MainModuleLinkedTarget_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MainModuleLinkedTarget_96, 0) = ((MR_Box) (MainModuleName_20));
                MR_hl_field(0, MainModuleLinkedTarget_96, 1) = ((MR_Box) (Var_100));
              }
              (env).make__program_target__build_linked_target_17_p_0_env_0__succeeded = (strcmp(FullMainModuleLinkedFileName_22, CurDirMainModuleLinkedFileName_23) == 0);
              if ((env).make__program_target__build_linked_target_17_p_0_env_0__succeeded)
              {
                MR_String UpToDateMsg_97;

                make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_49, MainModuleLinkedTarget_96, FullMainModuleLinkedFileName_22, STATE_VARIABLE_Info_3_76, STATE_VARIABLE_Info_39, &UpToDateMsg_97);
                make__util__maybe_write_msg_4_p_0(ProgressStream_18, UpToDateMsg_97);
                *Succeeded_30 = (MR_Integer) 1;
              }
              else
              {
                MR_Word MadeSymlinkOrCopy_98;

                backend_libs__link_target_code__post_link_maybe_make_symlink_or_copy_10_p_0(NoLinkObjsGlobals_49, ProgressStream_18, FullMainModuleLinkedFileName_22, CurDirMainModuleLinkedFileName_23, MainModuleName_20, LinkedTargetType_21, Succeeded_30, &MadeSymlinkOrCopy_98);
                switch (MadeSymlinkOrCopy_98) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String UpToDateMsg_102;

                      make__util__maybe_warn_up_to_date_target_msg_6_p_0(NoLinkObjsGlobals_49, MainModuleLinkedTarget_96, FullMainModuleLinkedFileName_22, STATE_VARIABLE_Info_3_76, STATE_VARIABLE_Info_39, &UpToDateMsg_102);
                      make__util__maybe_write_msg_4_p_0(ProgressStream_18, UpToDateMsg_102);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String LinkMsg_99;

                      make__util__maybe_symlink_or_copy_linked_target_msg_3_p_0(NoLinkObjsGlobals_49, FullMainModuleLinkedFileName_22, &LinkMsg_99);
                      make__util__maybe_write_msg_4_p_0(ProgressStream_18, LinkMsg_99);
                      *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_3_76;
                    }
                    break;
                }
              }
            }
            else
              make__program_target__rebuild_linked_target_16_p_0(ProgressStream_18, NoLinkObjsGlobals_49, MainModuleName_20, LinkedTargetType_21, FullMainModuleLinkedFileName_22, AllModulesList_50, ObjModules_26, InitObjects_52, LinkObjects_48, CompilationTarget_27, PIC_28, Succeeded_30, STATE_VARIABLE_Info_3_76, STATE_VARIABLE_Info_39);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Succeeded_14;

  make__program_target__link_and_write_error_specs_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), &conv6_Succeeded_14);
  *wrapper_arg_1 = ((MR_Box) (conv6_Succeeded_14));
}

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv5_HeadVar__5_5;
  MR_String conv4_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__5_5, &conv4_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__6_6));
}

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ForeignObjectFiles_14;
  MR_Word conv0_STATE_VARIABLE_MakeInfo_24;

  make__program_target__get_module_foreign_object_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_ForeignObjectFiles_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_MakeInfo_24);
  *wrapper_arg_2 = ((MR_Box) (conv1_ForeignObjectFiles_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_MakeInfo_24));
}

static void MR_CALL 
make__program_target__rebuild_linked_target_16_p_0(
  MR_Word ProgressStream_17,
  MR_Word NoLinkObjsGlobals_18,
  MR_Word MainModuleName_19,
  MR_Word LinkedTargetType_20,
  MR_String FullMainModuleLinkedFileName_21,
  MR_Word AllModulesList_22,
  MR_Word ObjModules_23,
  MR_Word InitObjectFileNames_24,
  MR_Word LinkObjectFileNames_25,
  MR_Word CompilationTarget_26,
  MR_Word PIC_27,
  MR_Word * Succeeded_28,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  MR_String MakingMsg_31;
  MR_Word ForeignObjectFileNameLists_32;
  MR_Word ForeignObjectFileNames_33;
  MR_Word Ext_36;
  MR_Word ModuleObjFileNames_37;
  MR_Word AllObjects_39;
  MR_Word CmdLineTargets0_40;
  MR_Word CmdLineTargets_41;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_Info_1_51;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word STATE_VARIABLE_Info_2_63;
  MR_Box conv3_STATE_VARIABLE_Info_1_51;
  MR_Box conv2_STATE_VARIABLE_IO_2_52;
  MR_Word _ModuleObjFileNamesProposed_38;

  make__util__maybe_making_filename_msg_3_p_0(NoLinkObjsGlobals_18, FullMainModuleLinkedFileName_21, &MakingMsg_31);
  make__util__maybe_write_msg_4_p_0(ProgressStream_17, MakingMsg_31);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__program_target_scalar_common_8[1]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__program_target__rebuild_linked_target_16_p_0_1));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (ProgressStream_17));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) (NoLinkObjsGlobals_18));
    MR_hl_field(0, Var_50, 5) = ((MR_Box) (PIC_27));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[2]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, AllModulesList_22, &ForeignObjectFileNameLists_32, ((MR_Box) (STATE_VARIABLE_Info_0_45)), &conv3_STATE_VARIABLE_Info_1_51, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_2_52);
  STATE_VARIABLE_Info_1_51 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_51));
  ForeignObjectFileNames_33 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjectFileNameLists_32);
  switch (CompilationTarget_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ObjExt_34;
        MR_Word Var_35;

        backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(PIC_27, &ObjExt_34, &Var_35);
        {
          Ext_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Ext_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Ext_36, 1) = (MR_Box) ((MR_Unsigned) (ObjExt_34));
        }
      }
      break;
    case (MR_Integer) 1:
      Ext_36 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[9]));
      break;
    case (MR_Integer) 2:
      Ext_36 = (MR_Word) (MR_mkword(3, &make__program_target_scalar_common_1[10]));
      break;
  }
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&make__program_target_scalar_common_9[0]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (make__program_target__rebuild_linked_target_16_p_0_2));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (NoLinkObjsGlobals_18));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) ((MR_String) "predicate \140make.program_target.rebuild_linked_target\'/16"));
    MR_hl_field(0, Var_55, 5) = ((MR_Box) (Ext_36));
  }
  mercury__list__map2_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_55, ObjModules_23, &ModuleObjFileNames_37, &_ModuleObjFileNamesProposed_38);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignObjectFileNames_33, LinkObjectFileNames_25);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleObjFileNames_37, Var_58);
  AllObjects_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitObjectFileNames_24, Var_57);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&make__program_target_scalar_common_7[1]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (make__program_target__rebuild_linked_target_16_p_0_3));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (NoLinkObjsGlobals_18));
    MR_hl_field(0, Var_59, 4) = ((MR_Box) (ProgressStream_17));
    MR_hl_field(0, Var_59, 5) = ((MR_Box) (LinkedTargetType_20));
    MR_hl_field(0, Var_59, 6) = ((MR_Box) (MainModuleName_19));
    MR_hl_field(0, Var_59, 7) = ((MR_Box) (AllObjects_39));
  }
  libs__process_util__call_in_forked_process_4_p_0(Var_59, Succeeded_28);
  CmdLineTargets0_40 = make__make_info__make_info_get_command_line_targets_1_f_0(STATE_VARIABLE_Info_1_51);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = (MR_Box) ((MR_Unsigned) (LinkedTargetType_20));
  }
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (MainModuleName_19));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (Var_62));
  }
  mercury__set__delete_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ((MR_Box) (Var_61)), CmdLineTargets0_40, &CmdLineTargets_41);
  make__make_info__make_info_set_command_line_targets_3_p_0(CmdLineTargets_41, STATE_VARIABLE_Info_1_51, &STATE_VARIABLE_Info_2_63);
  switch (*Succeeded_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String ErrorMsg_44;

        make__util__file_error_msg_2_p_0(FullMainModuleLinkedFileName_21, &ErrorMsg_44);
        make__util__maybe_write_msg_locked_5_p_0(ProgressStream_17, STATE_VARIABLE_Info_2_63, ErrorMsg_44);
        *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_2_63;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FileTimestampMap0_42;
        MR_Word FileTimestampMap_43;

        FileTimestampMap0_42 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_2_63);
        mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__program_target_scalar_common_3[0]), ((MR_Box) (FullMainModuleLinkedFileName_21)), FileTimestampMap0_42, &FileTimestampMap_43);
        make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_43, STATE_VARIABLE_Info_2_63, STATE_VARIABLE_Info_46);
      }
      break;
  }
}

static MR_bool MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__program_target__IntroducedFrom__pred__filter_out_nested_modules__449__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_NestedModules_21;
  MR_Word conv0_STATE_VARIABLE_Info_23;

  make__program_target__collect_nested_modules_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NestedModules_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NestedModules_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_23));
}

static void MR_CALL 
make__program_target__filter_out_nested_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules0_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word NestedModules_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Box conv4_NestedModules_15;
  MR_Box conv3_STATE_VARIABLE_Info_17;
  MR_Box conv2_STATE_VARIABLE_IO_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&make__program_target_scalar_common_8[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (make__program_target__filter_out_nested_modules_8_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (ProgressStream_9));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (Globals_10));
  }
  Var_21 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_1[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, Modules0_11, ((MR_Box) (Var_21)), &conv4_NestedModules_15, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv3_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_19);
  NestedModules_15 = ((MR_Word) (conv4_NestedModules_15));
  *STATE_VARIABLE_Info_17 = ((MR_Word) (conv3_STATE_VARIABLE_Info_17));
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&make__program_target_scalar_common_5[3]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (make__program_target__filter_out_nested_modules_8_p_0_2));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (NestedModules_15));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_24, Modules0_11, Modules_12);
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_49;

  make__program_target__IntroducedFrom__pred__order_target_modules__389__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__2_49);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_49));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__3_46;

  make__program_target__IntroducedFrom__pred__order_target_modules__385__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadVar__3_46);
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__3_46));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;
  MR_Word conv3_STATE_VARIABLE_Info_19;

  make__program_target__pair_module_with_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Info_19);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Info_19));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_61;

  make__program_target__IntroducedFrom__pred__order_target_modules__394__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_61);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_61));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_58;

  make__program_target__IntroducedFrom__pred__order_target_modules__393__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_58);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_58));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  make__program_target__pair_module_with_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
make__program_target__order_target_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules_11,
  MR_Word * OrderedModules_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word OrderByTimestamp_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 736, &OrderByTimestamp_15);
  switch (OrderByTimestamp_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PairedModules_32;
        MR_Word OrderedPairs_33;

        mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__program_target_scalar_common_2[4]), Modules_11, &PairedModules_32);
        mercury__list__sort_3_p_0((MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&make__program_target_scalar_common_2[5]), PairedModules_32, &OrderedPairs_33);
        mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[6]), OrderedPairs_33, OrderedModules_12);
        *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PairedModules_16;
        MR_Word RevOrderedPairs_17;
        MR_Word OrderedPairs_18;
        MR_Word Var_24;
        MR_Box conv6_STATE_VARIABLE_Info_20;
        MR_Box conv5_STATE_VARIABLE_IO_22;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (&make__program_target_scalar_common_7[0]));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (make__program_target__order_target_modules_8_p_0_4));
          MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_24, 3) = ((MR_Box) (ProgressStream_9));
          MR_hl_field(0, Var_24, 4) = ((MR_Box) (Globals_10));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Modules_11, &PairedModules_16, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv6_STATE_VARIABLE_Info_20, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_22);
        *STATE_VARIABLE_Info_20 = ((MR_Word) (conv6_STATE_VARIABLE_Info_20));
        mercury__list__sort_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&make__program_target_scalar_common_2[7]), PairedModules_16, &RevOrderedPairs_17);
        mercury__list__reverse_2_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), RevOrderedPairs_17, &OrderedPairs_18);
        mercury__list__map_3_p_0((MR_Word) (&make__program_target_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__program_target_scalar_common_2[8]), OrderedPairs_18, OrderedModules_12);
      }
      break;
  }
}

static MR_bool MR_CALL 
make__program_target____Unify____build2_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__program_target____Unify____build2_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build2_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__program_target____Compare____build2_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__program_target____Unify____build3_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__program_target____Unify____build3_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build3_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__program_target____Compare____build3_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__program_target____Unify____build_what_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__program_target____Unify____build_what_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____build_what_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__program_target____Compare____build_what_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__program_target____Unify____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__program_target____Unify____maybe_use_analysis_cache_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__program_target____Compare____maybe_use_analysis_cache_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__program_target____Compare____maybe_use_analysis_cache_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__program_target__init(void)
{
}

void mercury__make__program_target__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&make__program_target__make__program_target__type_ctor_info_build2_1);
  MR_register_type_ctor_info(&make__program_target__make__program_target__type_ctor_info_build3_1);
  MR_register_type_ctor_info(&make__program_target__make__program_target__type_ctor_info_build_what_0);
  MR_register_type_ctor_info(&make__program_target__make__program_target__type_ctor_info_maybe_use_analysis_cache_dir_0);
}

void mercury__make__program_target__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__program_target__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.program_target.
