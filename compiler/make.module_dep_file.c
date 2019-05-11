/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2019-05-11
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

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

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
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__847__1_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__847__1_7_p_0(
  MR_Word Globals_7,
  MR_Word ModuleAndImportsList_29,
  MR_Word * LambdaHeadVar__1_108,
  MR_Word LambdaHeadVar__2_109,
  MR_Word * LambdaHeadVar__3_110);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__816__1_3_p_0(
  MR_Word LambdaHeadVar__1_89,
  MR_Word LambdaHeadVar__2_90,
  MR_Word * LambdaHeadVar__3_91);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__639__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__360__1_3_p_0(
  MR_String HeadVar__1_113);

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__245__1_1_f_0(
  MR_String LambdaHeadVar__1_59);

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
make__module_dep_file__cleanup_module_dep_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

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
  MR_Word ModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
make__module_dep_file__cleanup_int3_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
make__module_dep_file__cleanup_int3_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__cleanup_int3_files_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
make__module_dep_file__make_int3_files_10_p_0(
  MR_Word ErrorStream_11,
  MR_String SourceFileName_12,
  MR_Word RawCompUnits_13,
  MR_Word Globals_14,
  MR_Word HeadVar__5_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_53_93_95_48_10_p_0(
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
make__module_dep_file__maybe_get_modules_dependencies_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Error_0_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeModuleAndImports_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

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
  MR_Word * STATE_VARIABLE_MaybeModuleAndImports_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

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
make__module_dep_file__make_module_dependencies_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

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
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
  MR_Word Globals_12,
  MR_Word SearchDirs_13,
  MR_Word ModuleName_14,
  MR_String ModuleDir_15,
  MR_String ModuleDepFile_16,
  MR_Word Term_17,
  MR_Word * Result_18,
  MR_Word STATE_VARIABLE_Info_0_59,
  MR_Word * STATE_VARIABLE_Info_60);

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
make__module_dep_file__construct_contains_foreign_code_1_f_0(
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


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[5][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[7][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[17][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[1][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[5][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[6][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[1][13];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[1][12];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][10];

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[2][8];

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[2][7];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_2[0])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_2[1])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_2[2])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_2[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_2[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_2[5])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_2[6])),
    ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[3])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[4])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[5])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[5][1] = {
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
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
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
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1 = {
  (MR_String) "module_dep_file_v2",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__module_dep_file____Unify____module_dep_file_version_0_0_10001)),
  ((MR_Box) (make__module_dep_file____Compare____module_dep_file_version_0_0_10001)),
  (MR_String) "make.module_dep_file",
  (MR_String) "module_dep_file_version",
  {     make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0 },
  {     make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0
};

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__847__1_7_p_0_1(
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
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__847__1_7_p_0(
  MR_Word Globals_7,
  MR_Word ModuleAndImportsList_29,
  MR_Word * LambdaHeadVar__1_108,
  MR_Word LambdaHeadVar__2_109,
  MR_Word * LambdaHeadVar__3_110)
{
  {
    MR_Word Var_113;
    MR_Box conv0_LambdaHeadVar__5_112;

    {
      Var_113 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[1]));
      MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__847__1_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (Globals_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_113, ModuleAndImportsList_29, ((MR_Box) ((MR_Integer) 0)), &conv0_LambdaHeadVar__5_112);
    *LambdaHeadVar__1_108 = (MR_Integer) 1;
    *LambdaHeadVar__3_110 = LambdaHeadVar__2_109;
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__816__1_3_p_0(
  MR_Word LambdaHeadVar__1_89,
  MR_Word LambdaHeadVar__2_90,
  MR_Word * LambdaHeadVar__3_91)
{
  {
    MR_Word SubModuleName_35;
    MR_Word ModuleDeps0_36;
    MR_Word ModuleDeps_37;
    MR_Word Var_92;
    MR_Word Var_205;
    MR_Word Var_206;
    MR_Word Var_207;
    MR_Word Var_208;
    MR_Word Var_209;
    MR_Word Var_210;
    MR_Word Var_211;
    MR_Word Var_212;
    MR_Word Var_213;
    MR_Word Var_214;
    MR_Word Var_215;
    MR_Word Var_216;
    MR_Word Var_219;
    MR_Word Var_220;
    MR_Word Var_221;
    MR_Integer Var_222;
    MR_Word Var_223;
    MR_Unsigned packed_word_1;

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(LambdaHeadVar__1_89, &SubModuleName_35);
    ModuleDeps0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 0))));
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (LambdaHeadVar__1_89));
    }
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (SubModuleName_35)), ((MR_Box) (Var_92)), ModuleDeps0_36, &ModuleDeps_37);
    Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 1))));
    Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 2))));
    Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 3))));
    Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 4))));
    Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 5))));
    Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 6))));
    Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 7))));
    Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 8))));
    Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 9))));
    Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 10))));
    Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 11))));
    Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 13)));
    Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 14))));
    Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 15))));
    Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 16))));
    Var_222 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 17))));
    Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_90, (MR_Integer) 18))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__3_91 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDeps_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_205));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_206));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_207));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_208));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_209));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_210));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_211));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_212));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_213));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_214));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_215));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_216));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_219));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_220));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_221));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_222));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_223));
    }
  }
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__639__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_6, HeadVar__2_7);
    return succeeded;
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__360__1_3_p_0(
  MR_String HeadVar__1_113)
{
  {
    mercury__io__write_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadVar__1_113)));
  }
}

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__245__1_1_f_0(
  MR_String LambdaHeadVar__1_59)
{
  {
    MR_String LambdaHeadVar__2_60;
    MR_String Var_62;

    Var_62 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_59, (MR_String) "\'");
    LambdaHeadVar__2_60 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_62);
    return LambdaHeadVar__2_60;
  }
}

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
make__module_dep_file__cleanup_module_dep_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_String Var_16;

    Var_16 = make__make_module_dep_file_extension_0_f_0();
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 66, ModuleName_8, Var_16, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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
    MR_Word conv0_STATE_VARIABLE_Info_12;

    make__module_dep_file__cleanup_module_dep_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word Var_15;
    MR_Box conv2_STATE_VARIABLE_Info_12;
    MR_Box conv1_STATE_VARIABLE_IO_14;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Globals_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, ModuleNames_8, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv2_STATE_VARIABLE_Info_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
    *STATE_VARIABLE_Info_12 = ((MR_Word) (conv2_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_int3_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    make__util__make_remove_target_file_by_name_8_p_0(Globals_7, (MR_Integer) 62, ModuleName_8, (MR_Word) ((MR_Unsigned) 20U), STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_int3_files_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_12;

    make__module_dep_file__cleanup_int3_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_int3_files_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word Var_15;
    MR_Box conv2_STATE_VARIABLE_Info_12;
    MR_Box conv1_STATE_VARIABLE_IO_14;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (make__module_dep_file__cleanup_int3_files_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Globals_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, ModuleNames_8, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv2_STATE_VARIABLE_Info_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
    *STATE_VARIABLE_Info_12 = ((MR_Word) (conv2_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_dep_file__make_int3_files_10_p_0(
  MR_Word ErrorStream_11,
  MR_String SourceFileName_12,
  MR_Word RawCompUnits_13,
  MR_Word Globals_14,
  MR_Word HeadVar__5_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_53_93_95_48_10_p_0(ErrorStream_11, SourceFileName_12, RawCompUnits_13, Globals_14, Succeeded_16, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__write_module_interface_files__write_short_interface_file_int3_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_53_93_95_48_10_p_0(
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
      Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_105_110_116_51_95_102_105_108_101_115_95_95_91_53_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
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
          succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LanguageTerm_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0))));
            Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1))));
            succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FileNameTerm_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
              Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
              TypeInfo_15_15 = (MR_Word) (&make__module_dep_file_scalar_common_1[2]);
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
                                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                *ForeignInclude_4 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Language_7));
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
          succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LanguageTerm_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0))));
            Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1))));
            succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ImportedModuleTerm_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
              Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
              TypeInfo_16_16 = (MR_Word) (&make__module_dep_file_scalar_common_1[2]);
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
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *ForeignImport_4 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Language_7));
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
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignInclude_4, (MR_Integer) 0))) & (MR_Integer) 3);
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
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignImportModule_4, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ForeignImport_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModule_4, (MR_Integer) 1))));

    parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(Lang_6);
    mercury__io__write_string_3_p_0((MR_String) " - ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ForeignImport_7);
  }
}

void MR_CALL 
make__module_dep_file__write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleAndImports0_6)
{
  {
    MR_Word ModuleAndImports_8;

    parse_tree__module_imports__rebuild_module_and_imports_for_dep_file_3_p_0(Globals_5, ModuleAndImports0_6, &ModuleAndImports_8);
    make__module_dep_file__do_write_module_dep_file_4_p_0(Globals_5, ModuleAndImports_8);
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word ModuleAndImports_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8;
    MR_String ProgDepFile_9;
    MR_Word ProgDepResult_10;
    MR_String Var_20;

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports_6, &ModuleName_8);
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
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Msg_16));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[4])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) " for output: "));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (ProgDepFile_9));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      MR_Word ForeignIncludeFilesCord_41;
      MR_Word Var_14;

      mercury__io__set_output_stream_4_p_0(ProgDepStream_11, &OldOutputStream_12);
      parse_tree__module_imports__module_and_imports_get_foreign_include_files_2_p_0(ModuleAndImports_6, &ForeignIncludeFilesCord_41);
      succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesCord_41);
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

    make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__360__1_3_p_0(((MR_String) (wrapper_arg_1)));
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
    MR_String SourceFileName_8;
    MR_Word SourceFileModuleName_9;
    MR_Word Ancestors_10;
    MR_Word Children_11;
    MR_Word IntDeps_12;
    MR_Word ImpDeps_13;
    MR_Word NestedChildren_14;
    MR_Word FactDeps_15;
    MR_Word ContainsForeignCode_16;
    MR_Word ContainsForeignExport_17;
    MR_Word ForeignImportModules_18;
    MR_Word ForeignIncludeFiles_19;
    MR_Word HasMain_20;
    MR_Integer VersionNumber_21;
    MR_Word ForeignLanguages_23;
    MR_Word ForeignImportModuleInfos_24;
    MR_String ContainsForeignExportStr_25;
    MR_String HasMainStr_26;
    MR_Word Var_40;
    MR_Word Var_61;
    MR_Word Var_77;
    MR_Word Langs_22;

    parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(ModuleAndImports_5, &SourceFileName_8);
    parse_tree__module_imports__module_and_imports_get_source_file_module_name_2_p_0(ModuleAndImports_5, &SourceFileModuleName_9);
    parse_tree__module_imports__module_and_imports_get_ancestors_2_p_0(ModuleAndImports_5, &Ancestors_10);
    parse_tree__module_imports__module_and_imports_get_children_2_p_0(ModuleAndImports_5, &Children_11);
    parse_tree__module_imports__module_and_imports_get_int_deps_2_p_0(ModuleAndImports_5, &IntDeps_12);
    parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(ModuleAndImports_5, &ImpDeps_13);
    parse_tree__module_imports__module_and_imports_get_nested_children_2_p_0(ModuleAndImports_5, &NestedChildren_14);
    parse_tree__module_imports__module_and_imports_get_fact_table_deps_2_p_0(ModuleAndImports_5, &FactDeps_15);
    parse_tree__module_imports__module_and_imports_get_contains_foreign_code_2_p_0(ModuleAndImports_5, &ContainsForeignCode_16);
    parse_tree__module_imports__module_and_imports_get_contains_foreign_export_2_p_0(ModuleAndImports_5, &ContainsForeignExport_17);
    parse_tree__module_imports__module_and_imports_get_foreign_import_modules_2_p_0(ModuleAndImports_5, &ForeignImportModules_18);
    parse_tree__module_imports__module_and_imports_get_foreign_include_files_2_p_0(ModuleAndImports_5, &ForeignIncludeFiles_19);
    parse_tree__module_imports__module_and_imports_get_has_main_2_p_0(ModuleAndImports_5, &HasMain_20);
    mercury__io__write_string_3_p_0((MR_String) "module(");
    make__module_dep_file__version_number_2_p_0(Version_6, &VersionNumber_21);
    mercury__io__write_int_3_p_0(VersionNumber_21);
    mercury__io__write_string_3_p_0((MR_String) ", \"");
    mercury__io__write_string_3_p_0(SourceFileName_8);
    mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(SourceFileModuleName_9);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
    Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_10);
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_40, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_3[8]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_12, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_3[9]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDeps_13, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_3[10]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_11, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_3[11]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    Var_61 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedChildren_14);
    mercury__io__write_list_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_61, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_3[12]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactDeps_15, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_3[13]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    succeeded = ((MR_tag((MR_Word) ContainsForeignCode_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      Langs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainsForeignCode_16, (MR_Integer) 0))));
      ForeignLanguages_23 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), Langs_22);
    }
    else
      ForeignLanguages_23 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__io__write_list_5_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ForeignLanguages_23, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_3[14]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    ForeignImportModuleInfos_24 = parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0(ForeignImportModules_18);
    Var_77 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), ForeignImportModuleInfos_24);
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), Var_77, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_3[15]));
    mercury__io__write_string_3_p_0((MR_String) "},\n\t");
    make__module_dep_file__contains_foreign_export_to_string_2_p_0(ContainsForeignExport_17, &ContainsForeignExportStr_25);
    mercury__io__write_string_3_p_0(ContainsForeignExportStr_25);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    make__module_dep_file__has_main_to_string_2_p_0(HasMain_20, &HasMainStr_26);
    mercury__io__write_string_3_p_0(HasMainStr_26);
    switch (Version_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_89;

          mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
          Var_89 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFiles_19);
          mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), Var_89, (MR_String) ", ", (MR_Word) (&make__module_dep_file_scalar_common_3[16]));
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

void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * MaybeModuleAndImports_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word RebuildModuleDeps_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) ModuleName_9)) == (MR_Integer) 1))
    {
      MR_Word AncestorsAndSelf_17;
      MR_Word ModuleDepMap_19;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Box conv0_MaybeModuleAndImports_10;

      Var_24 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_9);
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      AncestorsAndSelf_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_24, Var_25);
      make__module_dep_file__maybe_get_modules_dependencies_8_p_0(Globals_8, RebuildModuleDeps_13, AncestorsAndSelf_17, (MR_Integer) 0, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
      ModuleDepMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_21, (MR_Integer) 0))));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ModuleDepMap_19, ((MR_Box) (ModuleName_9)), &conv0_MaybeModuleAndImports_10);
      *MaybeModuleAndImports_10 = ((MR_Word) (conv0_MaybeModuleAndImports_10));
    }
    else
      make__module_dep_file__maybe_get_module_dependencies_8_p_0(Globals_8, RebuildModuleDeps_13, ModuleName_9, MaybeModuleAndImports_10, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  }
}

static void MR_CALL 
make__module_dep_file__maybe_get_modules_dependencies_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Error_0_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    else
    {
      MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ModuleNames_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word STATE_VARIABLE_Error_37_37;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Error_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      switch (STATE_VARIABLE_Error_0_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeModuleAndImports_25;

            make__module_dep_file__maybe_get_module_dependencies_8_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_20, &MaybeModuleAndImports_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_35_35);
            if ((MaybeModuleAndImports_25 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Error_37_37 = (MR_Integer) 1;
            else
              STATE_VARIABLE_Error_37_37 = STATE_VARIABLE_Error_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleDepMap0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
            MR_Word ModuleDepMap_28;
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
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Integer Var_78;
            MR_Word Var_79;
            MR_Unsigned packed_word_1;

            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_20)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_27, &ModuleDepMap_28);
            Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
            Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
            Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
            Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
            Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 8))));
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 9))));
            Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 10))));
            Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 11))));
            Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 12))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 13)));
            Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 14))));
            Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 15))));
            Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 16))));
            Var_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 17))));
            Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 18))));
            {
              STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (ModuleDepMap_28));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (Var_61));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (Var_64));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 8) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 9) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 10) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 11) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 12) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 13) = (MR_Box) (packed_word_1);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 14) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 15) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 16) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 17) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_35_35, 18) = ((MR_Box) (Var_79));
            }
            STATE_VARIABLE_Error_37_37 = STATE_VARIABLE_Error_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ModuleNames_21;
      next_value_of_STATE_VARIABLE_Error_0_4 = STATE_VARIABLE_Error_37_37;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_35_35;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Error_0_4 = next_value_of_STATE_VARIABLE_Error_0_4;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeModuleAndImports_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word ModuleDepMap0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
    MR_Word MaybeModuleAndImports0_16;
    MR_Box conv0_MaybeModuleAndImports0_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ModuleDepMap0_15, ((MR_Box) (ModuleName_11)), &conv0_MaybeModuleAndImports0_16);
    if (succeeded)
    {
      MaybeModuleAndImports0_16 = ((MR_Word) (conv0_MaybeModuleAndImports0_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeModuleAndImports_12 = MaybeModuleAndImports0_16;
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    }
    else
      make__module_dep_file__do_get_module_dependencies_8_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, MaybeModuleAndImports_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
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
    MR_String conv0_LambdaHeadVar__2_60;

    conv0_LambdaHeadVar__2_60 = make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__245__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_60));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * STATE_VARIABLE_MaybeModuleAndImports_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_String SourceFileName_15;
    MR_Word MaybeSourceFileTimestamp_16;
    MR_String DepFileName_17;
    MR_Word SearchDirs_18;
    MR_Word MaybeDepFileTimestamp_19;
    MR_Word ModuleDepMap2_34;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_Info_46_46;
    MR_String Var_48;
    MR_String Var_51;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word STATE_VARIABLE_Info_101_101;
    MR_Word MaybeModuleAndImports0_35;
    MR_Box conv2_MaybeModuleAndImports0_35;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".m", ModuleName_11, &SourceFileName_15);
    Var_48 = mercury__dir__this_directory_0_f_0();
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__util__get_file_timestamp_7_p_0(Var_45, SourceFileName_15, &MaybeSourceFileTimestamp_16, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_46_46);
    Var_51 = make__make_module_dep_file_extension_0_f_0();
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_51, ModuleName_11, &DepFileName_17);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 669, &SearchDirs_18);
    make__util__get_file_timestamp_7_p_0(SearchDirs_18, DepFileName_17, &MaybeDepFileTimestamp_19, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_54_54);
    if (((MR_tag((MR_Word) MaybeDepFileTimestamp_19)) == (MR_Integer) 1))
    {
      MR_String SearchDirsString_30;
      MR_Word Var_57;
      MR_Word Var_64;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;

      Var_57 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_3[7]), SearchDirs_18);
      SearchDirsString_30 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_57);
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (DepFileName_17));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (SearchDirsString_30));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) ((MR_String) "Module dependencies file \'%s\' not found in directories %s.\n"));
        MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (Var_69));
      }
      make__util__debug_make_msg_4_p_0(Globals_9, Var_64);
      switch (RebuildModuleDeps_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ModuleDepMap0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 0))));
            MR_Word ModuleDepMap1_33;
            MR_Word Var_169;
            MR_Word Var_170;
            MR_Word Var_171;
            MR_Word Var_172;
            MR_Word Var_173;
            MR_Word Var_174;
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
            MR_Unsigned packed_word_1;

            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_32, &ModuleDepMap1_33);
            Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 1))));
            Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 2))));
            Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 3))));
            Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 4))));
            Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 5))));
            Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 6))));
            Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 7))));
            Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 8))));
            Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 9))));
            Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 10))));
            Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 11))));
            Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 12))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 13)));
            Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 14))));
            Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 15))));
            Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 16))));
            Var_186 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 17))));
            Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 18))));
            {
              STATE_VARIABLE_Info_101_101 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 0) = ((MR_Box) (ModuleDepMap1_33));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 1) = ((MR_Box) (Var_169));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 2) = ((MR_Box) (Var_170));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 3) = ((MR_Box) (Var_171));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 4) = ((MR_Box) (Var_172));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 5) = ((MR_Box) (Var_173));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 6) = ((MR_Box) (Var_174));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 7) = ((MR_Box) (Var_175));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 8) = ((MR_Box) (Var_176));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 9) = ((MR_Box) (Var_177));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 10) = ((MR_Box) (Var_178));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 11) = ((MR_Box) (Var_179));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 12) = ((MR_Box) (Var_180));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 13) = (MR_Box) (packed_word_1);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 14) = ((MR_Box) (Var_183));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 15) = ((MR_Box) (Var_184));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 16) = ((MR_Box) (Var_185));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 17) = ((MR_Box) (Var_186));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, 18) = ((MR_Box) (Var_187));
            }
          }
          break;
        case (MR_Integer) 0:
          make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_101_101);
          break;
      }
    }
    else
    {
      MR_Word Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDepFileTimestamp_19, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) MaybeSourceFileTimestamp_16)) == (MR_Integer) 1))
      {
        MR_Word STATE_VARIABLE_Info_78_78;
        MR_Word Var_80;
        MR_Word STATE_VARIABLE_MaybeModuleAndImports_81_81;
        MR_Box conv1_STATE_VARIABLE_MaybeModuleAndImports_81_81;
        MR_Word ModuleAndImports0_23;
        MR_String ModuleDir_24;
        MR_String Var_241;

        make__module_dep_file__read_module_dependencies_search_7_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_78_78);
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_78_78, (MR_Integer) 0))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), Var_80, ((MR_Box) (ModuleName_11)), &conv1_STATE_VARIABLE_MaybeModuleAndImports_81_81);
        STATE_VARIABLE_MaybeModuleAndImports_81_81 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeModuleAndImports_81_81));
        succeeded = (STATE_VARIABLE_MaybeModuleAndImports_81_81 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleAndImports0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeModuleAndImports_81_81, (MR_Integer) 0))));
          parse_tree__module_imports__module_and_imports_get_source_file_dir_2_p_0(ModuleAndImports0_23, &ModuleDir_24);
          Var_241 = mercury__dir__this_directory_0_f_0();
          succeeded = (strcmp(ModuleDir_24, Var_241) == 0);
        }
        if (succeeded)
        {
          MR_String SourceFileName1_25;
          MR_Word MaybeSourceFileTimestamp1_26;
          MR_Word Var_82;
          MR_Word STATE_VARIABLE_Info_83_83;
          MR_String Var_85;

          parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(ModuleAndImports0_23, &SourceFileName1_25);
          Var_85 = mercury__dir__this_directory_0_f_0();
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          make__util__get_file_timestamp_7_p_0(Var_82, SourceFileName1_25, &MaybeSourceFileTimestamp1_26, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_83_83);
          if (((MR_tag((MR_Word) MaybeSourceFileTimestamp1_26)) == (MR_Integer) 1))
          {
            MR_String Message_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeSourceFileTimestamp1_26, (MR_Integer) 0))));
            MR_Word Var_95;

            mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
            mercury__io__write_string_3_p_0(SourceFileName1_25);
            mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
            mercury__io__write_string_3_p_0(Message_28);
            mercury__io__write_string_3_p_0((MR_String) ".\n");
            Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, (MR_Integer) 15))));
            make__module_dep_file__maybe_write_importing_module_4_p_0(ModuleName_11, Var_95);
            STATE_VARIABLE_Info_101_101 = STATE_VARIABLE_Info_83_83;
          }
          else
          {
            MR_Word SourceFileTimestamp1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSourceFileTimestamp1_26, (MR_Integer) 0))));

            succeeded = (RebuildModuleDeps_10 == (MR_Integer) 1);
            if (!(succeeded))
            {
              MR_Word Var_242;

              libs__timestamp____Compare____timestamp_0_0(&Var_242, Var_243, SourceFileTimestamp1_27);
              succeeded = ((MR_Integer) 2 == Var_242);
            }
            if (succeeded)
              STATE_VARIABLE_Info_101_101 = STATE_VARIABLE_Info_83_83;
            else
              make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_101_101);
          }
        }
        else
          STATE_VARIABLE_Info_101_101 = STATE_VARIABLE_Info_78_78;
      }
      else
      {
        MR_Word SourceFileTimestamp_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSourceFileTimestamp_16, (MR_Integer) 0))));

        succeeded = (RebuildModuleDeps_10 == (MR_Integer) 1);
        if (!(succeeded))
        {
          MR_Word Var_240;

          libs__timestamp____Compare____timestamp_0_0(&Var_240, Var_243, SourceFileTimestamp_20);
          succeeded = ((MR_Integer) 2 == Var_240);
        }
        if (succeeded)
          make__module_dep_file__read_module_dependencies_no_search_7_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_101_101);
        else
          make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_101_101);
      }
    }
    ModuleDepMap2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ModuleDepMap2_34, ((MR_Box) (ModuleName_11)), &conv2_MaybeModuleAndImports0_35);
    if (succeeded)
    {
      MaybeModuleAndImports0_35 = ((MR_Word) (conv2_MaybeModuleAndImports0_35));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_MaybeModuleAndImports_37 = MaybeModuleAndImports0_35;
      *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_101_101;
    }
    else
    {
      MR_Word ModuleDepMap_36;
      MR_Word Var_208;
      MR_Word Var_209;
      MR_Word Var_210;
      MR_Word Var_211;
      MR_Word Var_212;
      MR_Word Var_213;
      MR_Word Var_214;
      MR_Word Var_215;
      MR_Word Var_216;
      MR_Word Var_217;
      MR_Word Var_218;
      MR_Word Var_219;
      MR_Word Var_222;
      MR_Word Var_223;
      MR_Word Var_224;
      MR_Integer Var_225;
      MR_Word Var_226;
      MR_Unsigned packed_word_5;

      *STATE_VARIABLE_MaybeModuleAndImports_37 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap2_34, &ModuleDepMap_36);
      Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 1))));
      Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 2))));
      Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 3))));
      Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 4))));
      Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 5))));
      Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 6))));
      Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 7))));
      Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 8))));
      Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 9))));
      Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 10))));
      Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 11))));
      Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 12))));
      packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 13)));
      Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 14))));
      Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 15))));
      Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 16))));
      Var_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 17))));
      Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_101_101, (MR_Integer) 18))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_39 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDepMap_36));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_208));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_209));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_210));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_211));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_212));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_213));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_214));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_215));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_216));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_217));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_218));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_219));
        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_5);
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_222));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_223));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_224));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_225));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_226));
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
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 669, &SearchDirs_13);
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
        Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
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
make__module_dep_file__make_module_dependencies_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_Info_12;

    make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv11_STATE_VARIABLE_Info_12);
    *wrapper_arg_2 = ((MR_Box) (conv11_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_LambdaHeadVar__1_108;
    MR_Word conv9_LambdaHeadVar__3_110;

    make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__847__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv10_LambdaHeadVar__1_108, ((MR_Word) (wrapper_arg_2)), &conv9_LambdaHeadVar__3_110);
    *wrapper_arg_1 = ((MR_Box) (conv10_LambdaHeadVar__1_108));
    *wrapper_arg_3 = ((MR_Box) (conv9_LambdaHeadVar__3_110));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Info_12;

    make__module_dep_file__cleanup_int3_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv7_STATE_VARIABLE_Info_12);
    *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__5_5;
    MR_Word conv5_HeadVar__7_7;

    make__util__build_with_module_options_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv6_HeadVar__5_5, ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__7_7);
    *wrapper_arg_1 = ((MR_Box) (conv6_HeadVar__5_5));
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__7_7));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
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
    MR_Word conv4_Succeeded_16;
    MR_Word conv3_STATE_VARIABLE_Info_23;

    make__module_dep_file__make_int3_files_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Succeeded_16, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Info_23);
    *wrapper_arg_3 = ((MR_Box) (conv4_Succeeded_16));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_91;

    make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__816__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_91);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_91));
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
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  {
    MR_bool succeeded;
    MR_Word MaybeErrorStream_11;
    MR_Word STATE_VARIABLE_Info_49_49;

    make__util__redirect_output_6_p_0(ModuleName_8, &MaybeErrorStream_11, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_49_49);
    if ((MaybeErrorStream_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_49_49;
    else
    {
      MR_Word ErrorStream_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeErrorStream_11, (MR_Integer) 0))));
      MR_Word OldOutputStream_13;
      MR_String SourceFileName_14;
      MR_Word ParseTreeSrc_16;
      MR_Word Specs0_17;
      MR_Word ReadModuleErrors_18;
      MR_Word FatalErrors_19;
      MR_Word Var_59;
      MR_Word Var_15;

      mercury__io__set_output_stream_4_p_0(ErrorStream_12, &OldOutputStream_13);
      parse_tree__read_modules__read_module_src_14_p_0(Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 1, ModuleName_8, (MR_Word) ((MR_Unsigned) 0U), &SourceFileName_14, (MR_Word) (&make__module_dep_file_scalar_common_5[2]), &Var_15, &ParseTreeSrc_16, &Specs0_17, &ReadModuleErrors_18);
      Var_59 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadModuleErrors_18, Var_59, &FatalErrors_19);
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_19);
      if (succeeded)
      {
        MR_Word UnredirectGlobals_22;
        MR_String ErrFileName_23;
        MR_Word ModuleDepMap0_25;
        MR_Word ModuleDepMap_26;
        MR_Word Var_68;
        MR_Word STATE_VARIABLE_Info_73_73;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_24;
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
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Integer Var_183;
        MR_Word Var_184;
        MR_Unsigned packed_word_2;

        mercury__io__set_output_stream_4_p_0(ErrorStream_12, &Var_20);
        parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs0_17, Globals_7);
        mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_21);
        mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
        mercury__io__write_string_3_p_0(SourceFileName_14);
        mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
        Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 15))));
        make__module_dep_file__maybe_write_importing_module_4_p_0(ModuleName_8, Var_68);
        libs__globals__set_option_4_p_0((MR_Integer) 68, (MR_Word) (MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_5[3])), Globals_7, &UnredirectGlobals_22);
        make__util__unredirect_output_7_p_0(UnredirectGlobals_22, ModuleName_8, ErrorStream_12, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_73_73);
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".err", ModuleName_8, &ErrFileName_23);
        mercury__io__remove_file_4_p_0(ErrFileName_23, &Var_24);
        ModuleDepMap0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 0))));
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_8)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_25, &ModuleDepMap_26);
        Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 1))));
        Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 2))));
        Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 3))));
        Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 4))));
        Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 5))));
        Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 6))));
        Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 7))));
        Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 8))));
        Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 9))));
        Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 10))));
        Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 11))));
        Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 12))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
        Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 14))));
        Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 15))));
        Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 16))));
        Var_183 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 17))));
        Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 18))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_46 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDepMap_26));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_169));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_170));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_171));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_172));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_173));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_174));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_175));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_177));
          MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_2);
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_180));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_181));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_182));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_183));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_184));
        }
      }
      else
      {
        MR_Word Specs_27;
        MR_Word RawCompUnits_28;
        MR_Word ModuleAndImportsList_29;
        MR_Word SubModuleNames_30;
        MR_Word VeryVerbose_38;
        MR_Word Succeeded_40;
        MR_Word MadeTarget_44;
        MR_Word STATE_VARIABLE_Info_88_88;
        MR_Word STATE_VARIABLE_Info_98_98;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word STATE_VARIABLE_Info_106_106;
        MR_Word STATE_VARIABLE_Info_116_116;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Box conv2_STATE_VARIABLE_Info_88_88;
        MR_Word _Succeeded_43;
        MR_Box conv12_STATE_VARIABLE_Info_106_106;

        parse_tree__module_imports__parse_tree_src_to_module_and_imports_list_8_p_0(Globals_7, SourceFileName_14, ParseTreeSrc_16, ReadModuleErrors_18, Specs0_17, &Specs_27, &RawCompUnits_28, &ModuleAndImportsList_29);
        SubModuleNames_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_3[5]), RawCompUnits_28);
        mercury__io__set_output_stream_4_p_0(ErrorStream_12, &Var_31);
        mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
        parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs_27, Globals_7);
        mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_32);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_dep_file_scalar_common_3[6]), ModuleAndImportsList_29, ((MR_Box) (STATE_VARIABLE_Info_49_49)), &conv2_STATE_VARIABLE_Info_88_88);
        STATE_VARIABLE_Info_88_88 = ((MR_Word) (conv2_STATE_VARIABLE_Info_88_88));
        libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 62, &VeryVerbose_38);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadModuleErrors_18);
        if (succeeded)
        {
          MR_Word Target_39;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_103;
          MR_Box conv8_STATE_VARIABLE_Info_98_98;

          {
            Target_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Target_39, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(0), Target_39, 1) = ((MR_Box) ((MR_Unsigned) 20U));
          }
          make__util__maybe_make_target_message_to_stream_5_p_0(Globals_7, OldOutputStream_13, Target_39);
          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (ErrorStream_12));
            MR_hl_field(MR_mktag(0), Var_103, 4) = ((MR_Box) (SourceFileName_14));
            MR_hl_field(MR_mktag(0), Var_103, 5) = ((MR_Box) (RawCompUnits_28));
          }
          {
            Var_96 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
            MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (Globals_7));
            MR_hl_field(MR_mktag(0), Var_96, 4) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(0), Var_96, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[3])));
            MR_hl_field(MR_mktag(0), Var_96, 6) = ((MR_Box) (Var_103));
          }
          {
            Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
            MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (Globals_7));
            MR_hl_field(MR_mktag(0), Var_97, 4) = ((MR_Box) (SubModuleNames_30));
          }
          libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_38, Var_96, Var_97, &Succeeded_40, ((MR_Box) (STATE_VARIABLE_Info_88_88)), &conv8_STATE_VARIABLE_Info_98_98);
          STATE_VARIABLE_Info_98_98 = ((MR_Word) (conv8_STATE_VARIABLE_Info_98_98));
        }
        else
        {
          Succeeded_40 = (MR_Integer) 0;
          STATE_VARIABLE_Info_98_98 = STATE_VARIABLE_Info_88_88;
        }
        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
          MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
          MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (Globals_7));
          MR_hl_field(MR_mktag(0), Var_104, 4) = ((MR_Box) (ModuleAndImportsList_29));
        }
        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
          MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (Globals_7));
          MR_hl_field(MR_mktag(0), Var_105, 4) = ((MR_Box) (SubModuleNames_30));
        }
        libs__process_util__build_with_check_for_interrupt_8_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_38, Var_104, Var_105, &_Succeeded_43, ((MR_Box) (STATE_VARIABLE_Info_98_98)), &conv12_STATE_VARIABLE_Info_106_106);
        STATE_VARIABLE_Info_106_106 = ((MR_Word) (conv12_STATE_VARIABLE_Info_106_106));
        {
          MadeTarget_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MadeTarget_44, 0) = ((MR_Box) (ModuleName_8));
          MR_hl_field(MR_mktag(0), MadeTarget_44, 1) = ((MR_Box) ((MR_Unsigned) 20U));
        }
        make__module_target__record_made_target_8_p_0(Globals_7, MadeTarget_44, (MR_Word) (&make__module_dep_file_scalar_common_5[4]), Succeeded_40, STATE_VARIABLE_Info_106_106, &STATE_VARIABLE_Info_116_116);
        make__util__unredirect_output_7_p_0(Globals_7, ModuleName_8, ErrorStream_12, STATE_VARIABLE_Info_116_116, STATE_VARIABLE_Info_46);
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
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
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
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_27;

    make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_27);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_27));
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
  MR_Word STATE_VARIABLE_Info_0_59,
  MR_Word * STATE_VARIABLE_Info_60)
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
    MR_Word TypeCtorInfo_130_130;
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
    MR_Word Var_75;
    MR_String Var_152;

    succeeded = make__module_dep_file__atom_term_3_p_0(Term_17, &Var_152, &ModuleArgs_21);
    if (succeeded)
    {
      succeeded = (strcmp((MR_String) "module", Var_152) == 0);
      if (succeeded)
      {
        succeeded = (ModuleArgs_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VersionNumberTerm_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgs_21, (MR_Integer) 0))));
          Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgs_21, (MR_Integer) 1))));
          succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SourceFileTerm_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0))));
            Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1))));
            succeeded = (Var_65 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SourceFileModuleNameTerm_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 0))));
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 1))));
              succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParentsTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0))));
                Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 1))));
                succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  IntDepsTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0))));
                  Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 1))));
                  succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ImpDepsTerm_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0))));
                    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1))));
                    succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ChildrenTerm_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0))));
                      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 1))));
                      succeeded = (Var_70 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NestedChildrenTerm_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0))));
                        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 1))));
                        succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FactDepsTerm_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
                          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
                          succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ForeignLanguagesTerm_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
                            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1))));
                            succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ForeignImportsTerm_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 0))));
                              Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 1))));
                              succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                ContainsForeignExportTerm_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 0))));
                                Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 1))));
                                succeeded = (Var_75 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  HasMainTerm_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_75, (MR_Integer) 0))));
                                  ModuleArgsTail_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_75, (MR_Integer) 1))));
                                  succeeded = make__module_dep_file__version_number_term_2_p_0(VersionNumberTerm_22, &Version_36);
                                  if (succeeded)
                                  {
                                    succeeded = make__module_dep_file__string_term_2_p_0(SourceFileTerm_23, &SourceFileName_37);
                                    if (succeeded)
                                    {
                                      TypeCtorInfo_130_130 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_130_130, SourceFileModuleNameTerm_24, &SourceFileModuleName_38);
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
                                                              MR_Word Var_79;

                                                              succeeded = (Version_36 == (MR_Integer) 1);
                                                              if (succeeded)
                                                              {
                                                                ForeignIncludesTerm_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgsTail_35, (MR_Integer) 0))));
                                                                Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgsTail_35, (MR_Integer) 1))));
                                                                succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word ContainsForeignCode_51;
      MR_Word ModuleAndImports_52;
      MR_String Var_153;

      ContainsForeignCode_51 = make__module_dep_file__construct_contains_foreign_code_1_f_0(ForeignLanguages_45);
      parse_tree__module_imports__make_module_dep_module_and_imports_16_p_0(SourceFileName_37, ModuleDir_15, SourceFileModuleName_38, ModuleName_14, Parents_39, Children_42, NestedChildren_43, IntDeps_40, ImpDeps_41, FactDeps_44, ForeignImports_46, ForeignIncludes_49, ContainsForeignCode_51, ContainsForeignExport_47, HasMain_48, &ModuleAndImports_52);
      Var_153 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(ModuleDir_15, Var_153) == 0);
      if (succeeded)
      {
        MR_Word SourceFileExists_53;

        make__module_dep_file__check_regular_file_exists_4_p_0(SourceFileName_37, &SourceFileExists_53);
        if ((SourceFileExists_53 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ModuleDepMap0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 0))));
          MR_Word ModuleDepMap_57;
          MR_Word Var_83;
          MR_Word STATE_VARIABLE_Info_84_84;
          MR_Word Var_85;
          MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 1))));
          MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 2))));
          MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 3))));
          MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 4))));
          MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 5))));
          MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 6))));
          MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 7))));
          MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 8))));
          MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 9))));
          MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 10))));
          MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 11))));
          MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 12))));
          MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 14))));
          MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 15))));
          MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 16))));
          MR_Integer Var_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 17))));
          MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 18))));
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 13)));
          MR_Box conv2_STATE_VARIABLE_Info_60;
          MR_Box conv1_STATE_VARIABLE_IO_62;

          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (ModuleAndImports_52));
          }
          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_14)), ((MR_Box) (Var_83)), ModuleDepMap0_56, &ModuleDepMap_57);
          {
            STATE_VARIABLE_Info_84_84 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 0) = ((MR_Box) (ModuleDepMap_57));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 1) = ((MR_Box) (Var_91));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 2) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 3) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 4) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 5) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 6) = ((MR_Box) (Var_96));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 7) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 8) = ((MR_Box) (Var_98));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 9) = ((MR_Box) (Var_99));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 10) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 11) = ((MR_Box) (Var_101));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 12) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 13) = (MR_Box) (packed_word_0);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 14) = ((MR_Box) (Var_105));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 15) = ((MR_Box) (Var_106));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 16) = ((MR_Box) (Var_107));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 17) = ((MR_Box) (Var_108));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_84, 18) = ((MR_Box) (Var_109));
          }
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Globals_12));
            MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) (SearchDirs_13));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, NestedChildren_43, ((MR_Box) (STATE_VARIABLE_Info_84_84)), &conv2_STATE_VARIABLE_Info_60, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_62);
          *STATE_VARIABLE_Info_60 = ((MR_Word) (conv2_STATE_VARIABLE_Info_60));
          succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*STATE_VARIABLE_Info_60, NestedChildren_43);
          if (succeeded)
            *Result_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_5[0]));
          else
            *Result_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Var_55;

          mercury__io__remove_file_4_p_0(ModuleDepFile_16, &Var_55);
          *Result_18 = SourceFileExists_53;
          *STATE_VARIABLE_Info_60 = STATE_VARIABLE_Info_0_59;
        }
      }
      else
      {
        MR_Word ModuleDepMap0_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 0))));
        MR_Word ModuleDepMap_200;
        MR_Word Var_202;
        MR_Word STATE_VARIABLE_Info_84_203;
        MR_Word Var_204;
        MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 1))));
        MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 2))));
        MR_Word Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 3))));
        MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 4))));
        MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 5))));
        MR_Word Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 6))));
        MR_Word Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 7))));
        MR_Word Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 8))));
        MR_Word Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 9))));
        MR_Word Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 10))));
        MR_Word Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 11))));
        MR_Word Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 12))));
        MR_Word Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 14))));
        MR_Word Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 15))));
        MR_Word Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 16))));
        MR_Integer Var_224 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 17))));
        MR_Word Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 18))));
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_59, (MR_Integer) 13)));
        MR_Box conv5_STATE_VARIABLE_Info_60;
        MR_Box conv4_STATE_VARIABLE_IO_62;

        {
          Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (ModuleAndImports_52));
        }
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (ModuleName_14)), ((MR_Box) (Var_202)), ModuleDepMap0_199, &ModuleDepMap_200);
        {
          STATE_VARIABLE_Info_84_203 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 0) = ((MR_Box) (ModuleDepMap_200));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 1) = ((MR_Box) (Var_207));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 2) = ((MR_Box) (Var_208));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 3) = ((MR_Box) (Var_209));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 4) = ((MR_Box) (Var_210));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 5) = ((MR_Box) (Var_211));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 6) = ((MR_Box) (Var_212));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 7) = ((MR_Box) (Var_213));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 8) = ((MR_Box) (Var_214));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 9) = ((MR_Box) (Var_215));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 10) = ((MR_Box) (Var_216));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 11) = ((MR_Box) (Var_217));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 12) = ((MR_Box) (Var_218));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 13) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 14) = ((MR_Box) (Var_221));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 15) = ((MR_Box) (Var_222));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 16) = ((MR_Box) (Var_223));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 17) = ((MR_Box) (Var_224));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_84_203, 18) = ((MR_Box) (Var_225));
        }
        {
          Var_204 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_204, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_204, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
          MR_hl_field(MR_mktag(0), Var_204, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_204, 3) = ((MR_Box) (Globals_12));
          MR_hl_field(MR_mktag(0), Var_204, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_204, 5) = ((MR_Box) (SearchDirs_13));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_204, NestedChildren_43, ((MR_Box) (STATE_VARIABLE_Info_84_203)), &conv5_STATE_VARIABLE_Info_60, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_62);
        *STATE_VARIABLE_Info_60 = ((MR_Word) (conv5_STATE_VARIABLE_Info_60));
        succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*STATE_VARIABLE_Info_60, NestedChildren_43);
        if (succeeded)
          *Result_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_5[0]));
        else
          *Result_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      *Result_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_5[1]));
      *STATE_VARIABLE_Info_60 = STATE_VARIABLE_Info_0_59;
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
          TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_3[4]), ArgTerms_7, Args_6);
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
          TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&make__module_dep_file_scalar_common_3[3]), ArgTerms_7, Args_6);
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
          TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), (MR_Word) (&make__module_dep_file_scalar_common_3[2]), ArgTerms_7, Args_6);
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
          TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__module_dep_file_scalar_common_3[1]), ArgTerms_7, Args_6);
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
      MR_Unsigned packed_word_0;
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
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13)));
      Var_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
      Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13))) & (MR_Integer) 1);
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 14))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 15))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 16))));
      Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 17))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 18))));
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
        TypeInfo_8_8 = (MR_Word) (&make__module_dep_file_scalar_common_1[2]);
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
make__module_dep_file__construct_contains_foreign_code_1_f_0(
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
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
        TypeInfo_8_8 = (MR_Word) (&make__module_dep_file_scalar_common_1[2]);
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

    succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__639__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_7);
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
          TypeInfo_10_17 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_17, (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_3[0]), ArgTerms_14, SymNames_4);
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
