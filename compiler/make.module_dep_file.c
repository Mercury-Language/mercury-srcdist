/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2018-08-10
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


// :- module make.module_dep_file.
// :- implementation.

/*
INIT mercury__make__module_dep_file__init
ENDINIT
*/

#include "make.module_dep_file.mih"


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
#include "libs.process_util.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
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
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
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
#include "term_io.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s {
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4;
  MR_bool make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
  jmp_buf make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_6;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_29;
  MR_Box make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5;
};


static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;

static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0;

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1;

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2];

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2];

static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2];

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__958__1_6_p_0(
  MR_Word Globals_7,
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__946__1_6_p_0(
  MR_Word Globals_7,
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__909__1_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__909__1_7_p_0(
  MR_Word Globals_7,
  MR_Word ModuleAndImportList_34,
  MR_Word * LambdaHeadVar__1_117,
  MR_Word LambdaHeadVar__2_118,
  MR_Word * LambdaHeadVar__3_119);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__878__1_3_p_0(
  MR_Word LambdaHeadVar__1_98,
  MR_Word LambdaHeadVar__2_99,
  MR_Word * LambdaHeadVar__3_100);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__698__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7);

static MR_Word MR_CALL 
make__module_dep_file__IntroducedFrom__func__read_module_dependencies_3__592__1_1_f_0(
  MR_Word LambdaHeadVar__1_99);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__384__1_3_p_0(
  MR_String HeadVar__1_455);

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__248__1_1_f_0(
  MR_String LambdaHeadVar__1_58);

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
  MR_Word Globals_7,
  MR_Word SubModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
  MR_Word Globals_7,
  MR_Word SubModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
  MR_Word ErrorStream_11,
  MR_String SourceFileName_12,
  MR_Word RawCompUnits_13,
  MR_Word Globals_14,
  MR_Word HeadVar__5_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
  MR_Word ErrorStream_11,
  MR_String SourceFileName_12,
  MR_Word RawCompUnits_13,
  MR_Word Globals_14,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ForeignInclude_4);

static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ForeignImport_4);

static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
  MR_Word Term_3,
  MR_Word * Lang_4);

static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
  MR_Word Term_3,
  MR_String * FactDep_4);

static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
  MR_Word ForeignInclude_4);

static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
  MR_Word ForeignImportModule_4);

static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
  MR_Word Globals_1,
  MR_Word RebuildModuleDeps_2,
  MR_Word ModuleName_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleAndImports_6);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
  MR_Word ModuleAndImports_5,
  MR_Word Version_6);

static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
  MR_Word HasMain_3,
  MR_String * HasMainStr_4);

static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
  MR_Word ContainsForeignExport_3,
  MR_String * ContainsForeignExportStr_4);

static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeModuleAndImports_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * STATE_VARIABLE_MaybeModuleAndImports_36,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
  MR_Word Globals_8,
  MR_Word RebuildModuleDeps_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
  MR_Word Globals_8,
  MR_Word RebuildModuleDeps_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word SearchDirs_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
  MR_Word RebuildModuleDeps_6,
  MR_String ModuleDepsFile_7,
  MR_String Msg_8);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
  MR_Word Globals_12,
  MR_Word SearchDirs_13,
  MR_Word ModuleName_14,
  MR_String ModuleDir_15,
  MR_String ModuleDepFile_16,
  MR_Word Term_17,
  MR_Word * Result_18,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6);

static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
  MR_String FileName_5,
  MR_Word * FileExists_6);

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
  MR_Word Info_3,
  MR_Word ModuleNames_4);

static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
  MR_Word Term_3,
  MR_Word * HasMain_4);

static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ContainsForeignExport_4);

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
  MR_Word Term_3,
  MR_Word * SymNames_4);

static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
  MR_Word Term_4,
  MR_String * Atom_5,
  MR_Word * Args_6);

static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
  MR_Word Term_3,
  MR_String * String_4);

static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
  MR_Word Term_3,
  MR_Word * Version_4);

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[9][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[20][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[8][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[7][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[5][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[1][13];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][12];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][10];

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[2][8];

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[2][7];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[20][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[1])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[2])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[5])),
    ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[6])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[1])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[7])),
    ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[3])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[4])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[5])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[6])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[7][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "error in nested sub-modules"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "failed to parse term"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&make__make__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__module_dep_file__list__ti_list_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
    (MR_PseudoTypeInfo) (&make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&make__make__type_ctor_info_make_info_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0)
  }
};

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0 = {
  (MR_String) "module_dep_file_v1",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1 = {
  (MR_String) "module_dep_file_v2",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__module_dep_file__make__module_dep_file__type_ctor_info_module_dep_file_version_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__module_dep_file____Unify____module_dep_file_version_0_0_10001)),
  ((MR_Box) (make__module_dep_file____Compare____module_dep_file_version_0_0_10001)),
  (MR_String) "make.module_dep_file",
  (MR_String) "module_dep_file_version",
  {     make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0 },
  {     make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0
};

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__958__1_6_p_0(
  MR_Word Globals_7,
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21)
{
  {
    MR_String Var_29;

    Var_29 = make__make_module_dep_file_extension_0_f_0();
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 64, LambdaHeadVar__1_19, Var_29, LambdaHeadVar__2_20, LambdaHeadVar__3_21);
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__946__1_6_p_0(
  MR_Word Globals_7,
  MR_Word LambdaHeadVar__1_19,
  MR_Word LambdaHeadVar__2_20,
  MR_Word * LambdaHeadVar__3_21)
{
  {
    make__util__make_remove_target_file_by_name_8_p_0(Globals_7, (MR_Integer) 60, LambdaHeadVar__1_19, (MR_Word) ((MR_Unsigned) 20U), LambdaHeadVar__2_20, LambdaHeadVar__3_21);
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__909__1_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__909__1_7_p_0(
  MR_Word Globals_7,
  MR_Word ModuleAndImportList_34,
  MR_Word * LambdaHeadVar__1_117,
  MR_Word LambdaHeadVar__2_118,
  MR_Word * LambdaHeadVar__3_119)
{
  {
    MR_Word Var_122;
    MR_Box conv0_LambdaHeadVar__5_121;

    {
      Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__909__1_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_122, 3) = ((MR_Box) (Globals_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_122, ModuleAndImportList_34, ((MR_Box) ((MR_Integer) 0)), &conv0_LambdaHeadVar__5_121);
    *LambdaHeadVar__1_117 = (MR_Integer) 1;
    *LambdaHeadVar__3_119 = LambdaHeadVar__2_118;
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__878__1_3_p_0(
  MR_Word LambdaHeadVar__1_98,
  MR_Word LambdaHeadVar__2_99,
  MR_Word * LambdaHeadVar__3_100)
{
  {
    MR_Word SubModuleName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_98, (MR_Integer) 2))));
    MR_Word ModuleDeps0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 0))));
    MR_Word ModuleDeps_39;
    MR_Word Var_101;
    MR_Word Var_244;
    MR_Word Var_245;
    MR_Word Var_246;
    MR_Word Var_247;
    MR_Word Var_248;
    MR_Word Var_249;
    MR_Word Var_250;
    MR_Word Var_251;
    MR_Word Var_252;
    MR_Word Var_253;
    MR_Word Var_254;
    MR_Word Var_255;
    MR_Word Var_256;
    MR_Word Var_257;
    MR_Word Var_258;
    MR_Word Var_259;
    MR_Word Var_260;
    MR_Integer Var_261;
    MR_Word Var_262;

    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (LambdaHeadVar__1_98));
    }
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (SubModuleName_37)), ((MR_Box) (Var_101)), ModuleDeps0_38, &ModuleDeps_39);
    Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 1))));
    Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 2))));
    Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 3))));
    Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 4))));
    Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 5))));
    Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 6))));
    Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 7))));
    Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 8))));
    Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 9))));
    Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 10))));
    Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 11))));
    Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 12))));
    Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 13))));
    Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 14))));
    Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 15))));
    Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 16))));
    Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 17))));
    Var_261 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 18))));
    Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_99, (MR_Integer) 19))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__3_100 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDeps_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_244));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_245));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_246));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_247));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_248));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_249));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_250));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_251));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_252));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_253));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_254));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_255));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_256));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_257));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_258));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_259));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_260));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_261));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_262));
    }
  }
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__698__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_6, HeadVar__2_7);
    return succeeded;
  }
}

static MR_Word MR_CALL 
make__module_dep_file__IntroducedFrom__func__read_module_dependencies_3__592__1_1_f_0(
  MR_Word LambdaHeadVar__1_99)
{
  {
    MR_Word LambdaHeadVar__2_100;
    MR_Word Var_101;
    MR_Word Var_102;

    Var_102 = mercury__term__context_init_0_f_0();
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      LambdaHeadVar__2_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_100, 0) = ((MR_Box) (LambdaHeadVar__1_99));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_100, 1) = ((MR_Box) (Var_101));
    }
    return LambdaHeadVar__2_100;
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__384__1_3_p_0(
  MR_String HeadVar__1_455)
{
  {
    mercury__io__write_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadVar__1_455)));
  }
}

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__248__1_1_f_0(
  MR_String LambdaHeadVar__1_58)
{
  {
    MR_String LambdaHeadVar__2_59;
    MR_String Var_61;

    Var_61 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_58, (MR_String) "\'");
    LambdaHeadVar__2_59 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_61);
    return LambdaHeadVar__2_59;
  }
}

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_21;

    make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__958__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_21));
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
  MR_Word Globals_7,
  MR_Word SubModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_Word Var_16;
    MR_Box conv2_STATE_VARIABLE_Info_13;
    MR_Box conv1_STATE_VARIABLE_IO_15;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Globals_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, SubModuleNames_8, ((MR_Box) (STATE_VARIABLE_Info_0_12)), &conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15);
    *STATE_VARIABLE_Info_13 = ((MR_Word) (conv2_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_21;

    make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__946__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_21));
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
  MR_Word Globals_7,
  MR_Word SubModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_Word Var_16;
    MR_Box conv2_STATE_VARIABLE_Info_13;
    MR_Box conv1_STATE_VARIABLE_IO_15;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_short_interfaces_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Globals_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, SubModuleNames_8, ((MR_Box) (STATE_VARIABLE_Info_0_12)), &conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15);
    *STATE_VARIABLE_Info_13 = ((MR_Word) (conv2_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
  MR_Word ErrorStream_11,
  MR_String SourceFileName_12,
  MR_Word RawCompUnits_13,
  MR_Word Globals_14,
  MR_Word HeadVar__5_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(ErrorStream_11, SourceFileName_12, RawCompUnits_13, Globals_14, Succeeded_16, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
  MR_Word ErrorStream_11,
  MR_String SourceFileName_12,
  MR_Word RawCompUnits_13,
  MR_Word Globals_14,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word OutputStream_19;
    MR_Integer ExitStatus_21;
    MR_Word Var_27;
    MR_Box conv0_STATE_VARIABLE_IO_28_28;
    MR_Word Var_20;

    mercury__io__set_output_stream_4_p_0(ErrorStream_11, &OutputStream_19);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Globals_14));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (SourceFileName_12));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, RawCompUnits_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_28_28);
    mercury__io__set_output_stream_4_p_0(OutputStream_19, &Var_20);
    mercury__io__get_exit_status_3_p_0(&ExitStatus_21);
    succeeded = (ExitStatus_21 == (MR_Integer) 0);
    if (succeeded)
      *Succeeded_16 = (MR_Integer) 1;
    else
      *Succeeded_16 = (MR_Integer) 0;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ForeignInclude_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word TypeInfo_15_15;
    MR_Word LanguageTerm_5;
    MR_Word FileNameTerm_6;
    MR_Word Language_7;
    MR_String FileName_8;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_String Var_13;
    MR_Word Var_14;
    MR_Word Var_20;
    MR_String String_23;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_32;
    MR_Word Var_33;

    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        succeeded = (strcmp((MR_String) "-", Var_13) == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 1);
          if (succeeded)
          {
            LanguageTerm_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0))));
            Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
            if (succeeded)
            {
              FileNameTerm_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
              Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
              TypeInfo_15_15 = (MR_Word) (&make__module_dep_file_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_14)));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) LanguageTerm_5)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LanguageTerm_5, (MR_Integer) 0))));
                  Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LanguageTerm_5, (MR_Integer) 1))));
                  succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      String_23 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_27, (MR_Integer) 0))));
                      succeeded = libs__globals__convert_foreign_language_2_p_0(String_23, &Language_7);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) FileNameTerm_6)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileNameTerm_6, (MR_Integer) 0))));
                          Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileNameTerm_6, (MR_Integer) 1))));
                          succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 2);
                            if (succeeded)
                            {
                              FileName_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_32, (MR_Integer) 0))));
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                *ForeignInclude_4 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Language_7));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FileName_8));
                              }
                              succeeded = MR_TRUE;
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
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ForeignImport_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word TypeCtorInfo_13_13;
    MR_Word TypeInfo_16_16;
    MR_Word LanguageTerm_5;
    MR_Word ImportedModuleTerm_6;
    MR_Word Language_7;
    MR_Word ImportedModuleName_8;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_String Var_14;
    MR_Word Var_15;
    MR_Word Var_21;
    MR_String String_24;
    MR_Word Var_28;
    MR_Word Var_29;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        succeeded = (strcmp((MR_String) "-", Var_14) == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 1);
          if (succeeded)
          {
            LanguageTerm_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0))));
            Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
            if (succeeded)
            {
              ImportedModuleTerm_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
              Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
              TypeInfo_16_16 = (MR_Word) (&make__module_dep_file_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_15)));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) LanguageTerm_5)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LanguageTerm_5, (MR_Integer) 0))));
                  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LanguageTerm_5, (MR_Integer) 1))));
                  succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      String_24 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_28, (MR_Integer) 0))));
                      succeeded = libs__globals__convert_foreign_language_2_p_0(String_24, &Language_7);
                      if (succeeded)
                      {
                        TypeCtorInfo_13_13 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_13_13, ImportedModuleTerm_6, &ImportedModuleName_8);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            *ForeignImport_4 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Language_7));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ImportedModuleName_8));
                          }
                          succeeded = MR_TRUE;
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
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
  MR_Word Term_3,
  MR_Word * Lang_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_String String_5;
    MR_Word Var_9;
    MR_Word Var_10;

    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 2);
      if (succeeded)
      {
        String_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_9, (MR_Integer) 0))));
        succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = libs__globals__convert_foreign_language_2_p_0(String_5, Lang_4);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
  MR_Word Term_3,
  MR_String * FactDep_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Var_8;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 2);
      if (succeeded)
      {
        *FactDep_4 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_8, (MR_Integer) 0))));
        succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
  MR_Word ForeignInclude_4)
{
  {
    MR_Word Lang_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignInclude_4, (MR_Integer) 0))));
    MR_String FileName_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignInclude_4, (MR_Integer) 1))));

    parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(Lang_6);
    mercury__io__write_string_3_p_0((MR_String) " - ");
    mercury__term_io__quote_string_3_p_0(FileName_7);
  }
}

static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
  MR_Word ForeignImportModule_4)
{
  {
    MR_Word Lang_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModule_4, (MR_Integer) 0))));
    MR_Word ForeignImport_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModule_4, (MR_Integer) 1))));

    parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(Lang_6);
    mercury__io__write_string_3_p_0((MR_String) " - ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ForeignImport_7);
  }
}

static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
  MR_Word Globals_1,
  MR_Word RebuildModuleDeps_2,
  MR_Word ModuleName_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  switch (HeadVar__4_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeModuleAndImports_29;

        make__module_dep_file__maybe_get_module_dependencies_8_p_0(Globals_1, RebuildModuleDeps_2, ModuleName_3, &MaybeModuleAndImports_29, STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
        if ((MaybeModuleAndImports_29 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__5_5 = (MR_Integer) 1;
        else
          *HeadVar__5_5 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_21;
        MR_Word Var_22;
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
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Integer Var_74;
        MR_Word Var_75;

        *HeadVar__5_5 = (MR_Integer) 1;
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
        Var_22 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_3)), Var_21, ((MR_Box) ((MR_Unsigned) 0U)));
        Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
        Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
        Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
        Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
        Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7))));
        Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 8))));
        Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 9))));
        Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 10))));
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 11))));
        Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 12))));
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 13))));
        Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 14))));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 15))));
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 16))));
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 17))));
        Var_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 18))));
        Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 19))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_75));
        }
      }
      break;
  }
}

void MR_CALL 
make__module_dep_file__write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleAndImports0_6)
{
  {
    MR_Word AugCompUnit_8;
    MR_Word Specs_9;
    MR_Word ModuleName_11;
    MR_Word ModuleNameContext_12;
    MR_Word SrcItemBlocks_14;
    MR_Word RawItemBlocks_19;
    MR_Word RawCompUnit_20;
    MR_Word ModuleAndImports_21;
    MR_String Var_24;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_38;
    MR_Word _Errors_10;

    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports0_6, &AugCompUnit_8, &Specs_9, &_Errors_10);
    ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_8, (MR_Integer) 0))));
    ModuleNameContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_8, (MR_Integer) 1))));
    SrcItemBlocks_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_8, (MR_Integer) 3))));
    make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(SrcItemBlocks_14, &RawItemBlocks_19);
    {
      RawCompUnit_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RawCompUnit_20, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), RawCompUnit_20, 1) = ((MR_Box) (ModuleNameContext_12));
      MR_hl_field(MR_mktag(0), RawCompUnit_20, 2) = ((MR_Box) (RawItemBlocks_19));
    }
    Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleAndImports0_6, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports0_6, (MR_Integer) 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports0_6, (MR_Integer) 10))));
    Var_27 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0));
    parse_tree__module_imports__init_module_and_imports_8_p_0(Globals_5, Var_24, Var_29, Var_38, Specs_9, Var_27, RawCompUnit_20, &ModuleAndImports_21);
    make__module_dep_file__do_write_module_dep_file_4_p_0(Globals_5, ModuleAndImports_21);
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleAndImports_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_6, (MR_Integer) 2))));
    MR_String ProgDepFile_9;
    MR_Word ProgDepResult_10;
    MR_String Var_20;

    Var_20 = make__make_module_dep_file_extension_0_f_0();
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_5, (MR_Integer) 0, Var_20, ModuleName_8, &ProgDepFile_9);
    mercury__io__open_output_4_p_0(ProgDepFile_9, &ProgDepResult_10);
    if (((MR_tag((MR_Word) ProgDepResult_10)) == (MR_Integer) 1))
    {
      MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProgDepResult_10, (MR_Integer) 0))));
      MR_String Msg_16;
      MR_Word Var_23;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_29;

      mercury__io__error_message_2_p_0(Error_15, &Msg_16);
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Msg_16));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[8])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) " for output: "));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (ProgDepFile_9));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_String) "Error opening "));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      mercury__io__write_strings_3_p_0(Var_23);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word ProgDepStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgDepResult_10, (MR_Integer) 0))));
      MR_Word OldOutputStream_12;
      MR_Word Version_13;
      MR_Word ForeignIncludeFilesCord_67;
      MR_Word Var_14;

      mercury__io__set_output_stream_4_p_0(ProgDepStream_11, &OldOutputStream_12);
      ForeignIncludeFilesCord_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_6, (MR_Integer) 13))));
      succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesCord_67);
      if (succeeded)
        Version_13 = (MR_Integer) 0;
      else
        Version_13 = (MR_Integer) 1;
      make__module_dep_file__do_write_module_dep_file_2_4_p_0(ModuleAndImports_6, Version_13);
      mercury__io__set_output_stream_4_p_0(OldOutputStream_12, &Var_14);
      mercury__io__close_output_3_p_0(ProgDepStream_11);
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    make__module_dep_file__write_foreign_include_file_info_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    make__module_dep_file__write_foreign_import_module_info_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__384__1_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
  MR_Word ModuleAndImports_5,
  MR_Word Version_6)
{
  {
    MR_bool succeeded;
    MR_Integer VersionNumber_8;
    MR_Word ForeignLanguages_10;
    MR_Word ForeignImportModules_11;
    MR_Word ForeignImportModuleInfos_12;
    MR_String ContainsForeignExportStr_13;
    MR_String HasMainStr_14;
    MR_String Var_22;
    MR_Word Var_26;
    MR_Word Var_30;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_77;
    MR_Word Var_83;
    MR_Word Var_87;
    MR_Word LangList_9;
    MR_Word Var_71;

    mercury__io__write_string_3_p_0((MR_String) "module(");
    make__module_dep_file__version_number_2_p_0(Version_6, &VersionNumber_8);
    mercury__io__write_int_3_p_0(VersionNumber_8);
    mercury__io__write_string_3_p_0((MR_String) ", \"");
    Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 0))));
    mercury__io__write_string_3_p_0(Var_22);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 1))));
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(Var_26);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 4))));
    Var_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_34);
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_30, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_2[11]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 5))));
    Var_37 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_41);
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_37, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_2[12]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 6))));
    Var_44 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_48);
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_44, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_2[13]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 8))));
    Var_51 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_55);
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_51, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_2[14]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 10))));
    Var_58 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_62);
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_58, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_2[15]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 11))));
    mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_65, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_2[16]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 14))));
    succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 1);
    if (succeeded)
    {
      LangList_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
      ForeignLanguages_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), LangList_9);
    }
    else
      ForeignLanguages_10 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__io__write_list_5_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ForeignLanguages_10, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_2[17]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    ForeignImportModules_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 12))));
    ForeignImportModuleInfos_12 = parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0(ForeignImportModules_11);
    Var_77 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), ForeignImportModuleInfos_12);
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), Var_77, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_2[18]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t");
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 15))));
    make__module_dep_file__contains_foreign_export_to_string_2_p_0(Var_83, &ContainsForeignExportStr_13);
    mercury__io__write_string_3_p_0(ContainsForeignExportStr_13);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 25))));
    make__module_dep_file__has_main_to_string_2_p_0(Var_87, &HasMainStr_14);
    mercury__io__write_string_3_p_0(HasMainStr_14);
    switch (Version_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_91;
          MR_Word Var_95;

          mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
          Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleAndImports_5, (MR_Integer) 13))));
          Var_91 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), Var_95);
          mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), Var_91, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_2[19]));
          mercury__io__write_string_3_p_0((MR_String) "}");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n).\n");
  }
}

static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
  MR_Word HasMain_3,
  MR_String * HasMainStr_4)
{
  switch (HasMain_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HasMainStr_4 = (MR_String) "has_main";
      break;
    case (MR_Integer) 1:
      *HasMainStr_4 = (MR_String) "no_main";
      break;
  }
}

static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
  MR_Word ContainsForeignExport_3,
  MR_String * ContainsForeignExportStr_4)
{
  switch (ContainsForeignExport_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ContainsForeignExportStr_4 = (MR_String) "contains_foreign_export";
      break;
    case (MR_Integer) 1:
      *ContainsForeignExportStr_4 = (MR_String) "no_foreign_export";
      break;
  }
}

static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
  }
}

static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SrcItemBlock_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word SrcItemBlocks_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RawItemBlock_5;
    MR_Word RawItemBlocks_6;
    MR_Word SrcSection_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_3, (MR_Integer) 0))));
    MR_Word SectionContext_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_3, (MR_Integer) 1))));
    MR_Word Incls_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_3, (MR_Integer) 2))));
    MR_Word Avails_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_3, (MR_Integer) 3))));
    MR_Word Items_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock_3, (MR_Integer) 4))));
    MR_Word RawSection_12;

    switch (SrcSection_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        RawSection_12 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        RawSection_12 = (MR_Integer) 0;
        break;
    }
    {
      RawItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RawItemBlock_5, 0) = ((MR_Box) (RawSection_12));
      MR_hl_field(MR_mktag(0), RawItemBlock_5, 1) = ((MR_Box) (SectionContext_8));
      MR_hl_field(MR_mktag(0), RawItemBlock_5, 2) = ((MR_Box) (Incls_9));
      MR_hl_field(MR_mktag(0), RawItemBlock_5, 3) = ((MR_Box) (Avails_10));
      MR_hl_field(MR_mktag(0), RawItemBlock_5, 4) = ((MR_Box) (Items_11));
    }
    make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(SrcItemBlocks_4, &RawItemBlocks_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RawItemBlock_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RawItemBlocks_6));
    }
  }
}

static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
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
    MR_Word conv2_HeadVar__5_5;
    MR_Word conv1_STATE_VARIABLE_Info_7;

    make__module_dep_file__generate_ancestor_dependencies_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_7);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__5_5));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_7));
  }
}

void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * MaybeModuleAndImports_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word RebuildModuleDeps_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 13))));

    if (((MR_tag((MR_Word) ModuleName_9)) == (MR_Integer) 1))
    {
      MR_Word MaybeModuleAndImportsPrime_17;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
      MR_Box conv0_MaybeModuleAndImportsPrime_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), Var_26, ((MR_Box) (ModuleName_9)), &conv0_MaybeModuleAndImportsPrime_17);
      if (succeeded)
      {
        MaybeModuleAndImportsPrime_17 = ((MR_Word) (conv0_MaybeModuleAndImportsPrime_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        *MaybeModuleAndImports_10 = MaybeModuleAndImportsPrime_17;
        *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
      }
      else
      {
        MR_Word Ancestors_18;
        MR_Word Error_19;
        MR_Word Var_27;
        MR_Word STATE_VARIABLE_Info_29_29;
        MR_Box conv5_Error_19;
        MR_Box conv4_STATE_VARIABLE_Info_29_29;
        MR_Box conv3_STATE_VARIABLE_IO_30_30;

        Ancestors_18 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_9);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[1]));
          MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (make__module_dep_file__get_module_dependencies_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (RebuildModuleDeps_13));
        }
        mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, Ancestors_18, ((MR_Box) ((MR_Integer) 0)), &conv5_Error_19, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv4_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_30_30);
        Error_19 = ((MR_Word) (conv5_Error_19));
        STATE_VARIABLE_Info_29_29 = ((MR_Word) (conv4_STATE_VARIABLE_Info_29_29));
        switch (Error_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            make__module_dep_file__maybe_get_module_dependencies_8_p_0(Globals_8, RebuildModuleDeps_13, ModuleName_9, MaybeModuleAndImports_10, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_23);
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleDepMap0_20;
              MR_Word ModuleDepMap_21;
              MR_Word Var_94;
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
              MR_Word Var_110;
              MR_Integer Var_111;
              MR_Word Var_112;

              *MaybeModuleAndImports_10 = (MR_Word) ((MR_Unsigned) 0U);
              ModuleDepMap0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 0))));
              mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_9)), ((MR_Box) (*MaybeModuleAndImports_10)), ModuleDepMap0_20, &ModuleDepMap_21);
              Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 1))));
              Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 2))));
              Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 3))));
              Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
              Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 5))));
              Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 6))));
              Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 7))));
              Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 8))));
              Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 9))));
              Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 10))));
              Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 11))));
              Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 12))));
              Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 13))));
              Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 14))));
              Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 15))));
              Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 16))));
              Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 17))));
              Var_111 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 18))));
              Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, (MR_Integer) 19))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_23 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDepMap_21));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_95));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_96));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_97));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_98));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_100));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_101));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_102));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_103));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_104));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_105));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_107));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_108));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_109));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_110));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_111));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_112));
              }
            }
            break;
        }
      }
    }
    else
      make__module_dep_file__maybe_get_module_dependencies_8_p_0(Globals_8, RebuildModuleDeps_13, ModuleName_9, MaybeModuleAndImports_10, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeModuleAndImports_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;
    MR_Word MaybeModuleAndImportsPrime_15;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
    MR_Box conv0_MaybeModuleAndImportsPrime_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), Var_20, ((MR_Box) (ModuleName_11)), &conv0_MaybeModuleAndImportsPrime_15);
    if (succeeded)
    {
      MaybeModuleAndImportsPrime_15 = ((MR_Word) (conv0_MaybeModuleAndImportsPrime_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeModuleAndImports_12 = MaybeModuleAndImportsPrime_15;
      *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
    }
    else
      make__module_dep_file__do_get_module_dependencies_8_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, MaybeModuleAndImports_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  }
}

static MR_Box MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_59;

    conv0_LambdaHeadVar__2_59 = make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__248__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_59));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * STATE_VARIABLE_MaybeModuleAndImports_36,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_bool succeeded;
    MR_String SourceFileName_15;
    MR_Word MaybeSourceFileTimestamp_16;
    MR_String DepFileName_17;
    MR_Word SearchDirs_18;
    MR_Word MaybeDepFileTimestamp_19;
    MR_Word ModuleDepMap2_33;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_String Var_47;
    MR_String Var_50;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word STATE_VARIABLE_Info_101_101;
    MR_Word MaybeModuleAndImportsPrime_34;
    MR_Box conv2_MaybeModuleAndImportsPrime_34;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".m", ModuleName_11, &SourceFileName_15);
    Var_47 = mercury__dir__this_directory_0_f_0();
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__util__get_file_timestamp_7_p_0(Var_44, SourceFileName_15, &MaybeSourceFileTimestamp_16, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_45_45);
    Var_50 = make__make_module_dep_file_extension_0_f_0();
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_50, ModuleName_11, &DepFileName_17);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 661, &SearchDirs_18);
    make__util__get_file_timestamp_7_p_0(SearchDirs_18, DepFileName_17, &MaybeDepFileTimestamp_19, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_53_53);
    if (((MR_tag((MR_Word) MaybeDepFileTimestamp_19)) == (MR_Integer) 1))
    {
      MR_String SearchDirsString_29;
      MR_Word Var_56;
      MR_Word Var_63;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;

      Var_56 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_2[10]), SearchDirs_18);
      SearchDirsString_29 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_56);
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (DepFileName_17));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_71, 0) = ((MR_Box) (SearchDirsString_29));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) ((MR_String) "Module dependencies file \'%s\' not found in directories %s.\n"));
        MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (Var_68));
      }
      make__util__debug_make_msg_4_p_0(Globals_9, Var_63);
      switch (RebuildModuleDeps_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ModuleDepMap0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 0))));
            MR_Word ModuleDepMap1_32;
            MR_Word Var_221;
            MR_Word Var_222;
            MR_Word Var_223;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Var_226;
            MR_Word Var_227;
            MR_Word Var_228;
            MR_Word Var_229;
            MR_Word Var_230;
            MR_Word Var_231;
            MR_Word Var_232;
            MR_Word Var_233;
            MR_Word Var_234;
            MR_Word Var_235;
            MR_Word Var_236;
            MR_Word Var_237;
            MR_Integer Var_238;
            MR_Word Var_239;

            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_31, &ModuleDepMap1_32);
            Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 1))));
            Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 2))));
            Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 3))));
            Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 4))));
            Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 5))));
            Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 6))));
            Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 7))));
            Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 8))));
            Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 9))));
            Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 10))));
            Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 11))));
            Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 12))));
            Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 13))));
            Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 14))));
            Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 15))));
            Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 16))));
            Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 17))));
            Var_238 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 18))));
            Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 19))));
            {
              STATE_VARIABLE_Info_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 0) = ((MR_Box) (ModuleDepMap1_32));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 1) = ((MR_Box) (Var_221));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 2) = ((MR_Box) (Var_222));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 3) = ((MR_Box) (Var_223));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 4) = ((MR_Box) (Var_224));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 5) = ((MR_Box) (Var_225));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 6) = ((MR_Box) (Var_226));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 7) = ((MR_Box) (Var_227));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 8) = ((MR_Box) (Var_228));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 9) = ((MR_Box) (Var_229));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 10) = ((MR_Box) (Var_230));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 11) = ((MR_Box) (Var_231));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 12) = ((MR_Box) (Var_232));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 13) = ((MR_Box) (Var_233));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 14) = ((MR_Box) (Var_234));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 15) = ((MR_Box) (Var_235));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 16) = ((MR_Box) (Var_236));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 17) = ((MR_Box) (Var_237));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 18) = ((MR_Box) (Var_238));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 19) = ((MR_Box) (Var_239));
            }
          }
          break;
        case (MR_Integer) 0:
          make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_101_101);
          break;
      }
    }
    else
    {
      MR_Word Var_295 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDepFileTimestamp_19, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) MaybeSourceFileTimestamp_16)) == (MR_Integer) 1))
      {
        MR_Word STATE_VARIABLE_Info_77_77;
        MR_Word Var_79;
        MR_Word STATE_VARIABLE_MaybeModuleAndImports_80_80;
        MR_Box conv1_STATE_VARIABLE_MaybeModuleAndImports_80_80;
        MR_Word ModuleAndImports0_23;
        MR_String Var_81;
        MR_String Var_293;

        make__module_dep_file__read_module_dependencies_search_7_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_77_77);
        Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 0))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), Var_79, ((MR_Box) (ModuleName_11)), &conv1_STATE_VARIABLE_MaybeModuleAndImports_80_80);
        STATE_VARIABLE_MaybeModuleAndImports_80_80 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeModuleAndImports_80_80));
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_MaybeModuleAndImports_80_80)) == (MR_Integer) 1);
        if (succeeded)
        {
          ModuleAndImports0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeModuleAndImports_80_80, (MR_Integer) 0))));
          Var_81 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleAndImports0_23, (MR_Integer) 26))));
          Var_293 = mercury__dir__this_directory_0_f_0();
          succeeded = (strcmp(Var_81, Var_293) == 0);
        }
        if (succeeded)
        {
          MR_String SourceFileName1_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleAndImports0_23, (MR_Integer) 0))));
          MR_Word MaybeSourceFileTimestamp1_25;
          MR_Word Var_82;
          MR_Word STATE_VARIABLE_Info_83_83;
          MR_String Var_85;

          Var_85 = mercury__dir__this_directory_0_f_0();
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          make__util__get_file_timestamp_7_p_0(Var_82, SourceFileName1_24, &MaybeSourceFileTimestamp1_25, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_83_83);
          if (((MR_tag((MR_Word) MaybeSourceFileTimestamp1_25)) == (MR_Integer) 1))
          {
            MR_String Message_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeSourceFileTimestamp1_25, (MR_Integer) 0))));
            MR_Word Var_95;

            mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
            mercury__io__write_string_3_p_0(SourceFileName1_24);
            mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
            mercury__io__write_string_3_p_0(Message_27);
            mercury__io__write_string_3_p_0((MR_String) ".\n");
            Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, (MR_Integer) 16))));
            make__module_dep_file__maybe_write_importing_module_4_p_0(ModuleName_11, Var_95);
            STATE_VARIABLE_Info_101_101 = STATE_VARIABLE_Info_83_83;
          }
          else
          {
            MR_Word SourceFileTimestamp1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSourceFileTimestamp1_25, (MR_Integer) 0))));

            succeeded = (RebuildModuleDeps_10 == (MR_Integer) 1);
            if (!(succeeded))
            {
              MR_Word Var_294;

              libs__timestamp____Compare____timestamp_0_0(&Var_294, Var_295, SourceFileTimestamp1_26);
              succeeded = ((MR_Integer) 2 == Var_294);
            }
            if (succeeded)
              STATE_VARIABLE_Info_101_101 = STATE_VARIABLE_Info_83_83;
            else
              make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_101_101);
          }
        }
        else
          STATE_VARIABLE_Info_101_101 = STATE_VARIABLE_Info_77_77;
      }
      else
      {
        MR_Word SourceFileTimestamp_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSourceFileTimestamp_16, (MR_Integer) 0))));

        succeeded = (RebuildModuleDeps_10 == (MR_Integer) 1);
        if (!(succeeded))
        {
          MR_Word Var_292;

          libs__timestamp____Compare____timestamp_0_0(&Var_292, Var_295, SourceFileTimestamp_20);
          succeeded = ((MR_Integer) 2 == Var_292);
        }
        if (succeeded)
          make__module_dep_file__read_module_dependencies_no_search_7_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_101_101);
        else
          make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_101_101);
      }
    }
    ModuleDepMap2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ModuleDepMap2_33, ((MR_Box) (ModuleName_11)), &conv2_MaybeModuleAndImportsPrime_34);
    if (succeeded)
    {
      MaybeModuleAndImportsPrime_34 = ((MR_Word) (conv2_MaybeModuleAndImportsPrime_34));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_MaybeModuleAndImports_36 = MaybeModuleAndImportsPrime_34;
      *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_101_101;
    }
    else
    {
      MR_Word ModuleDepMap_35;
      MR_Word Var_260;
      MR_Word Var_261;
      MR_Word Var_262;
      MR_Word Var_263;
      MR_Word Var_264;
      MR_Word Var_265;
      MR_Word Var_266;
      MR_Word Var_267;
      MR_Word Var_268;
      MR_Word Var_269;
      MR_Word Var_270;
      MR_Word Var_271;
      MR_Word Var_272;
      MR_Word Var_273;
      MR_Word Var_274;
      MR_Word Var_275;
      MR_Word Var_276;
      MR_Integer Var_277;
      MR_Word Var_278;

      *STATE_VARIABLE_MaybeModuleAndImports_36 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap2_33, &ModuleDepMap_35);
      Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 1))));
      Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 2))));
      Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 3))));
      Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 4))));
      Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 5))));
      Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 6))));
      Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 7))));
      Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 8))));
      Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 9))));
      Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 10))));
      Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 11))));
      Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 12))));
      Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 13))));
      Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 14))));
      Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 15))));
      Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 16))));
      Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 17))));
      Var_277 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 18))));
      Var_278 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 19))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_38 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDepMap_35));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_260));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_261));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_262));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_263));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_264));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_265));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_266));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_267));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_268));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_269));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_270));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_271));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_272));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_273));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_274));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_275));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_276));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_277));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_278));
      }
    }
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
  MR_Word Globals_8,
  MR_Word RebuildModuleDeps_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word Var_17;
    MR_String Var_20;

    Var_20 = mercury__dir__this_directory_0_f_0();
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__module_dep_file__read_module_dependencies_2_8_p_0(Globals_8, RebuildModuleDeps_9, Var_17, ModuleName_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
  MR_Word Globals_8,
  MR_Word RebuildModuleDeps_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word SearchDirs_13;

    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 661, &SearchDirs_13);
    make__module_dep_file__read_module_dependencies_2_8_p_0(Globals_8, RebuildModuleDeps_9, SearchDirs_13, ModuleName_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word SearchDirs_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_String ModuleDepFile_15;
    MR_Word MaybeDirAndStream_16;
    MR_String Var_30;

    Var_30 = make__make_module_dep_file_extension_0_f_0();
    parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_9, Var_30, ModuleName_12, &ModuleDepFile_15);
    libs__file_util__search_for_file_returning_dir_and_stream_5_p_0(SearchDirs_11, ModuleDepFile_15, &MaybeDirAndStream_16);
    if (((MR_tag((MR_Word) MaybeDirAndStream_16)) == (MR_Integer) 1))
    {
      MR_Word Var_33;
      MR_String Msg_51 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDirAndStream_16, (MR_Integer) 0))));

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (RebuildModuleDeps_10));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (ModuleDepFile_15));
        MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (Msg_51));
      }
      make__util__debug_make_msg_4_p_0(Globals_9, Var_33);
      switch (RebuildModuleDeps_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
          break;
        case (MR_Integer) 0:
          make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
          break;
      }
    }
    else
    {
      MR_String ModuleDir_17;
      MR_Word DepStream_18;
      MR_Word TermResult_19;
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDirAndStream_16, (MR_Integer) 0))));

      ModuleDir_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
      DepStream_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
      mercury__parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DepStream_18, &TermResult_19);
      mercury__io__close_input_3_p_0(DepStream_18);
      switch (MR_tag((MR_Word) TermResult_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_45;
            MR_String Var_47;

            Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
            Var_45 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_47);
            make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(RebuildModuleDeps_10, Var_45, (MR_String) "unexpected eof");
            switch (RebuildModuleDeps_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
                break;
              case (MR_Integer) 0:
                make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ParseError_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), TermResult_19, (MR_Integer) 0))));
            MR_String Msg_79;
            MR_String Var_82;
            MR_String Var_84;

            Msg_79 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", ParseError_23);
            Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
            Var_82 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_84);
            make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(RebuildModuleDeps_10, Var_82, Msg_79);
            switch (RebuildModuleDeps_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
                break;
              case (MR_Integer) 0:
                make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Term_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TermResult_19, (MR_Integer) 1))));
            MR_Word Result_96;
            MR_Word STATE_VARIABLE_Info_43_98;

            make__module_dep_file__read_module_dependencies_3_11_p_0(Globals_9, SearchDirs_11, ModuleName_12, ModuleDir_17, ModuleDepFile_15, Term_21, &Result_96, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_43_98);
            if ((Result_96 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_43_98;
            else
            {
              MR_String Msg_86 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_96, (MR_Integer) 0))));
              MR_String Var_87;
              MR_String Var_89;

              Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
              Var_87 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_89);
              make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(RebuildModuleDeps_10, Var_87, Msg_86);
              switch (RebuildModuleDeps_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_43_98;
                  break;
                case (MR_Integer) 0:
                  make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_43_98, STATE_VARIABLE_Info_27);
                  break;
              }
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Info_13;

    make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv12_STATE_VARIABLE_Info_13);
    *wrapper_arg_2 = ((MR_Box) (conv12_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_LambdaHeadVar__1_117;
    MR_Word conv10_LambdaHeadVar__3_119;

    make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__909__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv11_LambdaHeadVar__1_117, ((MR_Word) (wrapper_arg_2)), &conv10_LambdaHeadVar__3_119);
    *wrapper_arg_1 = ((MR_Box) (conv11_LambdaHeadVar__1_117));
    *wrapper_arg_3 = ((MR_Box) (conv10_LambdaHeadVar__3_119));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Info_13;

    make__module_dep_file__cleanup_short_interfaces_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv8_STATE_VARIABLE_Info_13);
    *wrapper_arg_2 = ((MR_Box) (conv8_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__5_5;
    MR_Word conv6_HeadVar__7_7;

    make__util__build_with_module_options_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv7_HeadVar__5_5, ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__7_7);
    *wrapper_arg_1 = ((MR_Box) (conv7_HeadVar__5_5));
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__7_7));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
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
    MR_Word conv5_Succeeded_16;
    MR_Word conv4_STATE_VARIABLE_Info_23;

    make__module_dep_file__make_short_interfaces_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Succeeded_16, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Info_23);
    *wrapper_arg_3 = ((MR_Box) (conv5_Succeeded_16));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_100;

    make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__878__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_100);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_100));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__8_8;

    parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__8_8);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__8_8));
  }
}

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  {
    MR_bool succeeded;
    MR_Word MaybeErrorStream_11;
    MR_Word STATE_VARIABLE_Info_51_51;

    make__util__redirect_output_6_p_0(ModuleName_8, &MaybeErrorStream_11, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_51_51);
    if ((MaybeErrorStream_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_51_51;
    else
    {
      MR_Word ErrorStream_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeErrorStream_11, (MR_Integer) 0))));
      MR_Word OldOutputStream_13;
      MR_String SourceFileName_14;
      MR_Word ParseTreeSrc_16;
      MR_Word Specs0_17;
      MR_Word Errors_18;
      MR_Word FatalErrors_19;
      MR_Word Var_61;
      MR_Word Var_15;

      mercury__io__set_output_stream_4_p_0(ErrorStream_12, &OldOutputStream_13);
      parse_tree__read_modules__read_module_src_14_p_0(Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 1, ModuleName_8, (MR_Word) ((MR_Unsigned) 0U), &SourceFileName_14, (MR_Word) (&make__module_dep_file_scalar_common_6[2]), &Var_15, &ParseTreeSrc_16, &Specs0_17, &Errors_18);
      Var_61 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_18, Var_61, &FatalErrors_19);
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_19);
      if (succeeded)
      {
        MR_Word UnredirectGlobals_24;
        MR_String ErrFileName_25;
        MR_Word ModuleDepMap0_27;
        MR_Word ModuleDepMap_28;
        MR_Word Var_72;
        MR_Word STATE_VARIABLE_Info_77_77;
        MR_Word Var_20;
        MR_Integer _NumWarnings_21;
        MR_Integer _NumErrors_22;
        MR_Word Var_23;
        MR_Word Var_26;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Word Var_183;
        MR_Word Var_184;
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
        MR_Integer Var_196;
        MR_Word Var_197;

        mercury__io__set_output_stream_4_p_0(ErrorStream_12, &Var_20);
        parse_tree__error_util__write_error_specs_8_p_0(Specs0_17, Globals_7, (MR_Integer) 0, &_NumWarnings_21, (MR_Integer) 0, &_NumErrors_22);
        mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_23);
        mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
        mercury__io__write_string_3_p_0(SourceFileName_14);
        mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 16))));
        make__module_dep_file__maybe_write_importing_module_4_p_0(ModuleName_8, Var_72);
        libs__globals__set_option_4_p_0((MR_Integer) 66, (MR_Word) (MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_6[3])), Globals_7, &UnredirectGlobals_24);
        make__util__unredirect_output_7_p_0(UnredirectGlobals_24, ModuleName_8, ErrorStream_12, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_77_77);
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".err", ModuleName_8, &ErrFileName_25);
        mercury__io__remove_file_4_p_0(ErrFileName_25, &Var_26);
        ModuleDepMap0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 0))));
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_8)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_27, &ModuleDepMap_28);
        Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 1))));
        Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 2))));
        Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 3))));
        Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 4))));
        Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 5))));
        Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 6))));
        Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 7))));
        Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 8))));
        Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 9))));
        Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 10))));
        Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 11))));
        Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 12))));
        Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 13))));
        Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 14))));
        Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 15))));
        Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 16))));
        Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 17))));
        Var_196 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 18))));
        Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, (MR_Integer) 19))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_48 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDepMap_28));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_179));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_180));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_181));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_182));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_183));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_184));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_185));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_186));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_187));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_188));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_189));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_190));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_191));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_192));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_193));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_194));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_195));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_196));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_197));
        }
      }
      else
      {
        MR_Word RawCompUnits_30;
        MR_Word Specs_31;
        MR_Word SubModuleNames_33;
        MR_Word ModuleAndImportList_34;
        MR_Word VeryVerbose_40;
        MR_Word Succeeded_42;
        MR_Word MadeTarget_46;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word STATE_VARIABLE_Info_97_97;
        MR_Word STATE_VARIABLE_Info_107_107;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word STATE_VARIABLE_Info_115_115;
        MR_Word STATE_VARIABLE_Info_125_125;
        MR_Word Var_29;
        MR_Integer _NumWarnings_130;
        MR_Integer _NumErrors_131;
        MR_Word Var_32;
        MR_Box conv3_STATE_VARIABLE_Info_97_97;
        MR_Word Var_45;
        MR_Box conv13_STATE_VARIABLE_Info_115_115;

        mercury__io__set_output_stream_4_p_0(ErrorStream_12, &Var_29);
        parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(ParseTreeSrc_16, &RawCompUnits_30, Specs0_17, &Specs_31);
        mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
        parse_tree__error_util__write_error_specs_8_p_0(Specs_31, Globals_7, (MR_Integer) 0, &_NumWarnings_130, (MR_Integer) 0, &_NumErrors_131);
        mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_32);
        SubModuleNames_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_2[8]), RawCompUnits_30);
        Var_94 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SubModuleNames_33);
        {
          Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (Globals_7));
          MR_hl_field(MR_mktag(0), Var_93, 4) = ((MR_Box) (SourceFileName_14));
          MR_hl_field(MR_mktag(0), Var_93, 5) = ((MR_Box) (ModuleName_8));
          MR_hl_field(MR_mktag(0), Var_93, 6) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(0), Var_93, 7) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_93, 8) = ((MR_Box) (Errors_18));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), Var_93, RawCompUnits_30, &ModuleAndImportList_34);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_dep_file_scalar_common_2[9]), ModuleAndImportList_34, ((MR_Box) (STATE_VARIABLE_Info_51_51)), &conv3_STATE_VARIABLE_Info_97_97);
        STATE_VARIABLE_Info_97_97 = ((MR_Word) (conv3_STATE_VARIABLE_Info_97_97));
        libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 60, &VeryVerbose_40);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_18);
        if (succeeded)
        {
          MR_Word Target_41;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_112;
          MR_Box conv9_STATE_VARIABLE_Info_107_107;

          {
            Target_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Target_41, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(0), Target_41, 1) = ((MR_Box) ((MR_Unsigned) 20U));
          }
          make__util__maybe_make_target_message_to_stream_5_p_0(Globals_7, OldOutputStream_13, Target_41);
          {
            Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
            MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (ErrorStream_12));
            MR_hl_field(MR_mktag(0), Var_112, 4) = ((MR_Box) (SourceFileName_14));
            MR_hl_field(MR_mktag(0), Var_112, 5) = ((MR_Box) (RawCompUnits_30));
          }
          {
            Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
            MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (Globals_7));
            MR_hl_field(MR_mktag(0), Var_105, 4) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(0), Var_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[7])));
            MR_hl_field(MR_mktag(0), Var_105, 6) = ((MR_Box) (Var_112));
          }
          {
            Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
            MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (Globals_7));
            MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (SubModuleNames_33));
          }
          libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_40, Var_105, Var_106, &Succeeded_42, ((MR_Box) (STATE_VARIABLE_Info_97_97)), &conv9_STATE_VARIABLE_Info_107_107);
          STATE_VARIABLE_Info_107_107 = ((MR_Word) (conv9_STATE_VARIABLE_Info_107_107));
        }
        else
        {
          Succeeded_42 = (MR_Integer) 0;
          STATE_VARIABLE_Info_107_107 = STATE_VARIABLE_Info_97_97;
        }
        {
          Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
          MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
          MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (Globals_7));
          MR_hl_field(MR_mktag(0), Var_113, 4) = ((MR_Box) (ModuleAndImportList_34));
        }
        {
          Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_8));
          MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (Globals_7));
          MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) (SubModuleNames_33));
        }
        libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_40, Var_113, Var_114, &Var_45, ((MR_Box) (STATE_VARIABLE_Info_107_107)), &conv13_STATE_VARIABLE_Info_115_115);
        STATE_VARIABLE_Info_115_115 = ((MR_Word) (conv13_STATE_VARIABLE_Info_115_115));
        {
          MadeTarget_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MadeTarget_46, 0) = ((MR_Box) (ModuleName_8));
          MR_hl_field(MR_mktag(0), MadeTarget_46, 1) = ((MR_Box) ((MR_Unsigned) 20U));
        }
        make__module_target__record_made_target_8_p_0(Globals_7, MadeTarget_46, (MR_Word) (&make__module_dep_file_scalar_common_6[4]), Succeeded_42, STATE_VARIABLE_Info_115_115, &STATE_VARIABLE_Info_125_125);
        make__util__unredirect_output_7_p_0(Globals_7, ModuleName_8, ErrorStream_12, STATE_VARIABLE_Info_125_125, STATE_VARIABLE_Info_48);
      }
    }
  }
}

static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2)
{
  if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ImportingModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__io__write_string_3_p_0((MR_String) "** Module \140");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_1);
    mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
    parse_tree__prog_out__write_sym_name_3_p_0(ImportingModuleName_10);
    mercury__io__write_string_3_p_0((MR_String) "\'.\n");
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
  MR_Word RebuildModuleDeps_6,
  MR_String ModuleDepsFile_7,
  MR_String Msg_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
    mercury__io__write_string_3_p_0(ModuleDepsFile_7);
    mercury__io__write_string_3_p_0((MR_String) "\': ");
    mercury__io__write_string_3_p_0(Msg_8);
    switch (RebuildModuleDeps_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__nl_2_p_0();
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) " ...rebuilding\n");
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Info_27;

    make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_27);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_27));
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Info_27;

    make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_27);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_27));
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    parse_tree__prog_data_foreign__add_foreign_import_module_info_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_100;

    conv0_LambdaHeadVar__2_100 = make__module_dep_file__IntroducedFrom__func__read_module_dependencies_3__592__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_100));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
  MR_Word Globals_12,
  MR_Word SearchDirs_13,
  MR_Word ModuleName_14,
  MR_String ModuleDir_15,
  MR_String ModuleDepFile_16,
  MR_Word Term_17,
  MR_Word * Result_18,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78)
{
  {
    MR_bool succeeded;
    MR_String SourceFileName_37;
    MR_Word SourceFileModuleName_38;
    MR_Word Parents_39;
    MR_Word IntDeps_40;
    MR_Word ImpDeps_41;
    MR_Word Children_42;
    MR_Word NestedChildren_43;
    MR_Word FactDeps_44;
    MR_Word ForeignLanguages_45;
    MR_Word ForeignImports_46;
    MR_Word ContainsForeignExport_47;
    MR_Word HasMain_48;
    MR_Word ForeignIncludes_49;
    MR_Word TypeCtorInfo_162_162;
    MR_Word ModuleArgs_21;
    MR_Word VersionNumberTerm_22;
    MR_Word SourceFileTerm_23;
    MR_Word SourceFileModuleNameTerm_24;
    MR_Word ParentsTerm_25;
    MR_Word IntDepsTerm_26;
    MR_Word ImpDepsTerm_27;
    MR_Word ChildrenTerm_28;
    MR_Word NestedChildrenTerm_29;
    MR_Word FactDepsTerm_30;
    MR_Word ForeignLanguagesTerm_31;
    MR_Word ForeignImportsTerm_32;
    MR_Word ContainsForeignExportTerm_33;
    MR_Word HasMainTerm_34;
    MR_Word ModuleArgsTail_35;
    MR_Word Version_36;
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
    MR_Word Var_92;
    MR_Word Var_93;
    MR_String Var_197;

    succeeded = make__module_dep_file__atom_term_3_p_0(Term_17, &Var_197, &ModuleArgs_21);
    if (succeeded)
    {
      succeeded = (strcmp((MR_String) "module", Var_197) == 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ModuleArgs_21)) == (MR_Integer) 1);
        if (succeeded)
        {
          VersionNumberTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgs_21, (MR_Integer) 0))));
          Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgs_21, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_Integer) 1);
          if (succeeded)
          {
            SourceFileTerm_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0))));
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_Integer) 1);
            if (succeeded)
            {
              SourceFileModuleNameTerm_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 0))));
              Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_83, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_84)) == (MR_Integer) 1);
              if (succeeded)
              {
                ParentsTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 0))));
                Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_84, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_85)) == (MR_Integer) 1);
                if (succeeded)
                {
                  IntDepsTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 0))));
                  Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_86)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ImpDepsTerm_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_86, (MR_Integer) 0))));
                    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_86, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_87)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      ChildrenTerm_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_87, (MR_Integer) 0))));
                      Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_87, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_88)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        NestedChildrenTerm_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_88, (MR_Integer) 0))));
                        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_88, (MR_Integer) 1))));
                        succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          FactDepsTerm_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_89, (MR_Integer) 0))));
                          Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_89, (MR_Integer) 1))));
                          succeeded = ((MR_tag((MR_Word) Var_90)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            ForeignLanguagesTerm_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0))));
                            Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              ForeignImportsTerm_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));
                              Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 1))));
                              succeeded = ((MR_tag((MR_Word) Var_92)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                ContainsForeignExportTerm_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_92, (MR_Integer) 0))));
                                Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_92, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_93)) == (MR_Integer) 1);
                                if (succeeded)
                                {
                                  HasMainTerm_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_93, (MR_Integer) 0))));
                                  ModuleArgsTail_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_93, (MR_Integer) 1))));
                                  succeeded = make__module_dep_file__version_number_term_2_p_0(VersionNumberTerm_22, &Version_36);
                                  if (succeeded)
                                  {
                                    succeeded = make__module_dep_file__string_term_2_p_0(SourceFileTerm_23, &SourceFileName_37);
                                    if (succeeded)
                                    {
                                      TypeCtorInfo_162_162 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_162_162, SourceFileModuleNameTerm_24, &SourceFileModuleName_38);
                                      if (succeeded)
                                      {
                                        succeeded = make__module_dep_file__sym_names_term_2_p_0(ParentsTerm_25, &Parents_39);
                                        if (succeeded)
                                        {
                                          succeeded = make__module_dep_file__sym_names_term_2_p_0(IntDepsTerm_26, &IntDeps_40);
                                          if (succeeded)
                                          {
                                            succeeded = make__module_dep_file__sym_names_term_2_p_0(ImpDepsTerm_27, &ImpDeps_41);
                                            if (succeeded)
                                            {
                                              succeeded = make__module_dep_file__sym_names_term_2_p_0(ChildrenTerm_28, &Children_42);
                                              if (succeeded)
                                              {
                                                succeeded = make__module_dep_file__sym_names_term_2_p_0(NestedChildrenTerm_29, &NestedChildren_43);
                                                if (succeeded)
                                                {
                                                  succeeded = make__module_dep_file__braces_term__ho5_3_p_0(FactDepsTerm_30, &FactDeps_44);
                                                  if (succeeded)
                                                  {
                                                    succeeded = make__module_dep_file__braces_term__ho4_3_p_0(ForeignLanguagesTerm_31, &ForeignLanguages_45);
                                                    if (succeeded)
                                                    {
                                                      succeeded = make__module_dep_file__braces_term__ho3_3_p_0(ForeignImportsTerm_32, &ForeignImports_46);
                                                      if (succeeded)
                                                      {
                                                        succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(ContainsForeignExportTerm_33, &ContainsForeignExport_47);
                                                        if (succeeded)
                                                        {
                                                          succeeded = make__module_dep_file__has_main_term_2_p_0(HasMainTerm_34, &HasMain_48);
                                                          if (succeeded)
                                                          {
                                                            if ((ModuleArgsTail_35 == (MR_Word) ((MR_Unsigned) 0U)))
                                                            {
                                                              succeeded = (Version_36 == (MR_Integer) 0);
                                                              if (succeeded)
                                                              {
                                                                ForeignIncludes_49 = (MR_Word) ((MR_Unsigned) 0U);
                                                                succeeded = MR_TRUE;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              MR_Word ForeignIncludesTerm_50;
                                                              MR_Word Var_97;

                                                              succeeded = (Version_36 == (MR_Integer) 1);
                                                              if (succeeded)
                                                              {
                                                                ForeignIncludesTerm_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgsTail_35, (MR_Integer) 0))));
                                                                Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgsTail_35, (MR_Integer) 1))));
                                                                succeeded = (Var_97 == (MR_Word) ((MR_Unsigned) 0U));
                                                                if (succeeded)
                                                                  succeeded = make__module_dep_file__braces_term__ho2_3_p_0(ForeignIncludesTerm_50, &ForeignIncludes_49);
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
    if (succeeded)
    {
      MR_Word ModuleNameContext_51;
      MR_Word ContainsForeignCode_52;
      MR_Word IntDepsContexts_55;
      MR_Word ImpDepsContexts_56;
      MR_Word IndirectDeps_57;
      MR_Word ChildrenContexts_58;
      MR_Word PublicChildrenContexts_59;
      MR_Word ForeignImportModules_60;
      MR_Word DirectIntItemBlocksCord_62;
      MR_Word IndirectIntItemBlocksCord_63;
      MR_Word OptItemBlocksCord_64;
      MR_Word IntForOptItemBlocksCord_65;
      MR_Word ModuleVersionNumbers_66;
      MR_Word Errors_68;
      MR_Word ModuleAndImports_70;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Box conv2_ForeignImportModules_60;
      MR_String Var_198;

      ModuleNameContext_51 = mercury__term__context_init_0_f_0();
      ContainsForeignCode_52 = make__module_dep_file__contains_foreign_code_1_f_0(ForeignLanguages_45);
      Var_104 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_2[0]), (MR_Word) (&make__module_dep_file_scalar_common_2[6]), IntDeps_40);
      mercury__multi_map__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_104, &IntDepsContexts_55);
      Var_105 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_2[0]), (MR_Word) (&make__module_dep_file_scalar_common_2[6]), ImpDeps_41);
      mercury__multi_map__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_105, &ImpDepsContexts_56);
      mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectDeps_57);
      Var_106 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_2[0]), (MR_Word) (&make__module_dep_file_scalar_common_2[6]), Children_42);
      mercury__multi_map__from_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_106, &ChildrenContexts_58);
      mercury__multi_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &PublicChildrenContexts_59);
      Var_108 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0), (MR_Word) (&make__module_dep_file_scalar_common_2[7]), ForeignImports_46, ((MR_Box) (Var_108)), &conv2_ForeignImportModules_60);
      ForeignImportModules_60 = ((MR_Word) (conv2_ForeignImportModules_60));
      DirectIntItemBlocksCord_62 = mercury__cord__empty_0_f_0((MR_Word) (&make__module_dep_file_scalar_common_1[2]));
      IndirectIntItemBlocksCord_63 = mercury__cord__empty_0_f_0((MR_Word) (&make__module_dep_file_scalar_common_1[2]));
      OptItemBlocksCord_64 = mercury__cord__empty_0_f_0((MR_Word) (&make__module_dep_file_scalar_common_1[3]));
      IntForOptItemBlocksCord_65 = mercury__cord__empty_0_f_0((MR_Word) (&make__module_dep_file_scalar_common_1[4]));
      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), &ModuleVersionNumbers_66);
      mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &Errors_68);
      Var_109 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Parents_39);
      Var_110 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedChildren_43);
      Var_111 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludes_49);
      {
        ModuleAndImports_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 0) = ((MR_Box) (SourceFileName_37));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 1) = ((MR_Box) (SourceFileModuleName_38));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 2) = ((MR_Box) (ModuleName_14));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 3) = ((MR_Box) (ModuleNameContext_51));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 4) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 5) = ((MR_Box) (IntDepsContexts_55));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 6) = ((MR_Box) (ImpDepsContexts_56));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 7) = ((MR_Box) (IndirectDeps_57));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 8) = ((MR_Box) (ChildrenContexts_58));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 9) = ((MR_Box) (PublicChildrenContexts_59));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 10) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 11) = ((MR_Box) (FactDeps_44));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 12) = ((MR_Box) (ForeignImportModules_60));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 13) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 14) = ((MR_Box) (ContainsForeignCode_52));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 15) = ((MR_Box) (ContainsForeignExport_47));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 16) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 17) = ((MR_Box) (DirectIntItemBlocksCord_62));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 18) = ((MR_Box) (IndirectIntItemBlocksCord_63));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 19) = ((MR_Box) (OptItemBlocksCord_64));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 20) = ((MR_Box) (IntForOptItemBlocksCord_65));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 21) = ((MR_Box) (ModuleVersionNumbers_66));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 22) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 23) = ((MR_Box) (Errors_68));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 24) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 25) = ((MR_Box) (HasMain_48));
        MR_hl_field(MR_mktag(0), ModuleAndImports_70, 26) = ((MR_Box) (ModuleDir_15));
      }
      Var_198 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(ModuleDir_15, Var_198) == 0);
      if (succeeded)
      {
        MR_Word SourceFileExists_71;

        make__module_dep_file__check_regular_file_exists_4_p_0(SourceFileName_37, &SourceFileExists_71);
        if ((SourceFileExists_71 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ModuleDepMap0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 0))));
          MR_Word ModuleDepMap_75;
          MR_Word Var_114;
          MR_Word STATE_VARIABLE_Info_115_115;
          MR_Word Var_116;
          MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 1))));
          MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 2))));
          MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 3))));
          MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 4))));
          MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 5))));
          MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 6))));
          MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 7))));
          MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 8))));
          MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 9))));
          MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 10))));
          MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 11))));
          MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 12))));
          MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 13))));
          MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 14))));
          MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 15))));
          MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 16))));
          MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 17))));
          MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 18))));
          MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 19))));
          MR_Box conv5_STATE_VARIABLE_Info_78;
          MR_Box conv4_STATE_VARIABLE_IO_80;

          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ModuleAndImports_70));
          }
          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_14)), ((MR_Box) (Var_114)), ModuleDepMap0_74, &ModuleDepMap_75);
          {
            STATE_VARIABLE_Info_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 0) = ((MR_Box) (ModuleDepMap_75));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 1) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 2) = ((MR_Box) (Var_124));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 3) = ((MR_Box) (Var_125));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 4) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 5) = ((MR_Box) (Var_127));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 6) = ((MR_Box) (Var_128));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 7) = ((MR_Box) (Var_129));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 8) = ((MR_Box) (Var_130));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 9) = ((MR_Box) (Var_131));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 10) = ((MR_Box) (Var_132));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 11) = ((MR_Box) (Var_133));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 12) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 13) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 14) = ((MR_Box) (Var_136));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 15) = ((MR_Box) (Var_137));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 16) = ((MR_Box) (Var_138));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 17) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 18) = ((MR_Box) (Var_140));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_115, 19) = ((MR_Box) (Var_141));
          }
          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_3));
            MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (Globals_12));
            MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_116, 5) = ((MR_Box) (SearchDirs_13));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_116, NestedChildren_43, ((MR_Box) (STATE_VARIABLE_Info_115_115)), &conv5_STATE_VARIABLE_Info_78, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_80);
          *STATE_VARIABLE_Info_78 = ((MR_Word) (conv5_STATE_VARIABLE_Info_78));
          succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*STATE_VARIABLE_Info_78, NestedChildren_43);
          if (succeeded)
            *Result_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_6[0]));
          else
            *Result_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Var_73;

          mercury__io__remove_file_4_p_0(ModuleDepFile_16, &Var_73);
          *Result_18 = SourceFileExists_71;
          *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
        }
      }
      else
      {
        MR_Word ModuleDepMap0_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 0))));
        MR_Word ModuleDepMap_245;
        MR_Word Var_247;
        MR_Word STATE_VARIABLE_Info_115_248;
        MR_Word Var_249;
        MR_Word Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 1))));
        MR_Word Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 2))));
        MR_Word Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 3))));
        MR_Word Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 4))));
        MR_Word Var_256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 5))));
        MR_Word Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 6))));
        MR_Word Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 7))));
        MR_Word Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 8))));
        MR_Word Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 9))));
        MR_Word Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 10))));
        MR_Word Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 11))));
        MR_Word Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 12))));
        MR_Word Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 13))));
        MR_Word Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 14))));
        MR_Word Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 15))));
        MR_Word Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 16))));
        MR_Word Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 17))));
        MR_Integer Var_269 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 18))));
        MR_Word Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_77, (MR_Integer) 19))));
        MR_Box conv8_STATE_VARIABLE_Info_78;
        MR_Box conv7_STATE_VARIABLE_IO_80;

        {
          Var_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_247, 0) = ((MR_Box) (ModuleAndImports_70));
        }
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_14)), ((MR_Box) (Var_247)), ModuleDepMap0_244, &ModuleDepMap_245);
        {
          STATE_VARIABLE_Info_115_248 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 0) = ((MR_Box) (ModuleDepMap_245));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 1) = ((MR_Box) (Var_252));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 2) = ((MR_Box) (Var_253));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 3) = ((MR_Box) (Var_254));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 4) = ((MR_Box) (Var_255));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 5) = ((MR_Box) (Var_256));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 6) = ((MR_Box) (Var_257));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 7) = ((MR_Box) (Var_258));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 8) = ((MR_Box) (Var_259));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 9) = ((MR_Box) (Var_260));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 10) = ((MR_Box) (Var_261));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 11) = ((MR_Box) (Var_262));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 12) = ((MR_Box) (Var_263));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 13) = ((MR_Box) (Var_264));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 14) = ((MR_Box) (Var_265));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 15) = ((MR_Box) (Var_266));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 16) = ((MR_Box) (Var_267));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 17) = ((MR_Box) (Var_268));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 18) = ((MR_Box) (Var_269));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_115_248, 19) = ((MR_Box) (Var_270));
        }
        {
          Var_249 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_249, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_249, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_4));
          MR_hl_field(MR_mktag(0), Var_249, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_249, 3) = ((MR_Box) (Globals_12));
          MR_hl_field(MR_mktag(0), Var_249, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_249, 5) = ((MR_Box) (SearchDirs_13));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_249, NestedChildren_43, ((MR_Box) (STATE_VARIABLE_Info_115_248)), &conv8_STATE_VARIABLE_Info_78, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_80);
        *STATE_VARIABLE_Info_78 = ((MR_Word) (conv8_STATE_VARIABLE_Info_78));
        succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*STATE_VARIABLE_Info_78, NestedChildren_43);
        if (succeeded)
          *Result_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_6[0]));
        else
          *Result_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      *Result_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_6[1]));
      *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
    }
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_FactDep_4;

    succeeded = make__module_dep_file__fact_dep_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_FactDep_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_FactDep_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word TypeInfo_10_10;
    MR_Word ArgTerms_7;
    MR_String Var_11;
    MR_Word Var_16;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      ArgTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
        if (succeeded)
        {
          TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[5]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_2[5]), ArgTerms_7, Args_6);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Lang_4;

    succeeded = make__module_dep_file__foreign_language_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Lang_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Lang_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word TypeInfo_10_10;
    MR_Word ArgTerms_7;
    MR_String Var_11;
    MR_Word Var_16;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      ArgTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
        if (succeeded)
        {
          TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[5]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&make__module_dep_file_scalar_common_2[4]), ArgTerms_7, Args_6);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_ForeignImport_4;

    succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ForeignImport_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_ForeignImport_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word TypeInfo_10_10;
    MR_Word ArgTerms_7;
    MR_String Var_11;
    MR_Word Var_16;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      ArgTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
        if (succeeded)
        {
          TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[5]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), (MR_Word) (&make__module_dep_file_scalar_common_2[3]), ArgTerms_7, Args_6);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_ForeignInclude_4;

    succeeded = make__module_dep_file__foreign_include_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ForeignInclude_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_ForeignInclude_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word TypeInfo_10_10;
    MR_Word ArgTerms_7;
    MR_String Var_11;
    MR_Word Var_16;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      ArgTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
        if (succeeded)
        {
          TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[5]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__module_dep_file_scalar_common_2[2]), ArgTerms_7, Args_6);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
  MR_String FileName_5,
  MR_Word * FileExists_6)
{
  {
    MR_Word ResFileType_9;

    mercury__io__file_type_5_p_0((MR_Integer) 1, FileName_5, &ResFileType_9);
    if (((MR_tag((MR_Word) ResFileType_9)) == (MR_Integer) 1))
    {
      MR_Word Error_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResFileType_9, (MR_Integer) 0))));
      MR_String Var_15;
      MR_String Var_16;
      MR_String Var_18;

      Var_18 = mercury__io__error_message_1_f_0(Error_11);
      Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_18);
      Var_15 = mercury__string__f_43_43_2_f_0(FileName_5, Var_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *FileExists_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
      }
    }
    else
    {
      MR_Word FileType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResFileType_9, (MR_Integer) 0))));

      switch (FileType_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 6:
        case (MR_Integer) 5:
        case (MR_Integer) 1:
        case (MR_Integer) 7:
        case (MR_Integer) 3:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 4:
        case (MR_Integer) 2:
          {
            MR_String Var_19;

            Var_19 = mercury__string__f_43_43_2_f_0(FileName_5, (MR_String) ": not a regular file");
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *FileExists_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
            }
          }
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 10:
          *FileExists_6 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    }
  }
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5 = ((MR_Word) ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5));
    make__module_dep_file__some_bad_module_dependency_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_8;
      MR_Word Var_9;
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Integer Var_25;
      MR_Word Var_26;
      MR_Box conv1_Var_29;

      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 0))));
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 1))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 2))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 3))));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 4))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 5))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 6))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 7))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 8))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 9))));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 10))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 11))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 12))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 14))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 15))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 16))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 17))));
      Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 18))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 19))));
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7 = (MR_Word) ((MR_Unsigned) 0U);
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) (&make__module_dep_file_scalar_common_1[0]);
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_6, ((MR_Box) ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &conv1_Var_29);
      if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
      {
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_29 = ((MR_Word) (conv1_Var_29));
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
      {
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30 = (MR_Word) (&make__module_dep_file_scalar_common_1[0]);
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30, ((MR_Box) ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7)), ((MR_Box) ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_29)));
        if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
          make__module_dep_file__some_bad_module_dependency_2_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0) == 0)
      {
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        mercury__list__member_2_p_1((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, &(env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, env_ptr);
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
  MR_Word Info_3,
  MR_Word ModuleNames_4)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s env;

    (env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3 = Info_3;
    (env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4 = ModuleNames_4;
    make__module_dep_file__some_bad_module_dependency_2_p_0_4(&env);
    return (env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
  MR_Word Term_3,
  MR_Word * HasMain_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word TypeInfo_8_8;
    MR_String String_5;
    MR_Word Var_7;
    MR_Word Var_13;

    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        String_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        TypeInfo_8_8 = (MR_Word) (&make__module_dep_file_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_7)));
        if (succeeded)
        {
          if ((strcmp(String_5, (MR_String) "no_main") == 0))
          {
            *HasMain_4 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(String_5, (MR_String) "has_main") == 0))
          {
            *HasMain_4 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word LangSet_4;

      LangSet_4 = mercury__set__from_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), HeadVar__1_1);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (LangSet_4));
      }
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ContainsForeignExport_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word TypeInfo_8_8;
    MR_String Atom_5;
    MR_Word Var_7;
    MR_Word Var_13;

    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        TypeInfo_8_8 = (MR_Word) (&make__module_dep_file_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_7)));
        if (succeeded)
        {
          if ((strcmp(Atom_5, (MR_String) "no_foreign_export") == 0))
          {
            *ContainsForeignExport_4 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(Atom_5, (MR_String) "contains_foreign_export") == 0))
          {
            *ContainsForeignExport_4 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_7;

    succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__698__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_7);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_7));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
  MR_Word Term_3,
  MR_Word * SymNames_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word TypeInfo_10_17;
    MR_Word ArgTerms_14;
    MR_String Var_18;
    MR_Word Var_23;

    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      ArgTerms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
        succeeded = (strcmp((MR_String) "{}", Var_18) == 0);
        if (succeeded)
        {
          TypeInfo_10_17 = (MR_Word) (&make__module_dep_file_scalar_common_1[5]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_17, (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_2[1]), ArgTerms_14, SymNames_4);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
  MR_Word Term_4,
  MR_String * Atom_5,
  MR_Word * Args_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0);
    MR_Word Var_8;

    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 0))));
      *Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 0);
      if (succeeded)
        *Atom_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
  MR_Word Term_3,
  MR_String * String_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Var_6;
    MR_Word Var_7;

    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 2);
      if (succeeded)
      {
        *String_4 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_6, (MR_Integer) 0))));
        succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
  MR_Word Term_3,
  MR_Word * Version_4)
{
  {
    MR_bool succeeded;
    MR_Integer Int_5;

    succeeded = mercury__term__decimal_term_to_int_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3, &Int_5);
    if (succeeded)
      switch (Int_5) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            *Version_4 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            *Version_4 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__module_dep_file____Compare____module_dep_file_version_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__make__module_dep_file__init(void)
{
}

void mercury__make__module_dep_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__module_dep_file__make__module_dep_file__type_ctor_info_module_dep_file_version_0);
}

void mercury__make__module_dep_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__module_dep_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.module_dep_file.
