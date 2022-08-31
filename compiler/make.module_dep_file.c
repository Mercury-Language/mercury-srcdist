/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2022-08-31
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"



struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s {
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4;
  MR_bool make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
  jmp_buf make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_28_28;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_29_29;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_6;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_30;
  MR_Box make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5;
};


static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0;

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1;

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_ordinal_ordered_module_dep_file_version_0[2];

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2];

static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2];

static MR_Word MR_CALL 
make__module_dep_file__IntroducedFrom__func__make_module_dependencies_no_fatal_error__927__1_1_f_0(
  MR_Word LambdaHeadVar__1_54);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__710__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__671__1_2_p_0(
  MR_Word ParentsSet_39,
  MR_Word AncestorsSet_40);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__666__1_2_p_0(
  MR_Word NestedSubModules0_31,
  MR_Word HeadVar__2_64);

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__294__1_1_f_0(
  MR_String LambdaHeadVar__1_87);

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
  MR_Word HeadVar__1_1,
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
make__module_dep_file__make_info_add_module_and_imports_as_dep_3_p_0(
  MR_Word BurdenedModule_4,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ForeignInclude_4);

static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
  MR_Word Term_3,
  MR_Word * FIMSpec_4);

static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
  MR_Word Term_3,
  MR_Word * Lang_4);

static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
  MR_Word Term_3,
  MR_String * FactDep_4);

static MR_String MR_CALL 
make__module_dep_file__foreign_include_file_info_to_string_1_f_0(
  MR_Word ForeignInclude_3);

static MR_String MR_CALL 
make__module_dep_file__fim_spec_to_string_1_f_0(
  MR_Word FIMSpec_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word BurdenedModule_6);

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0(
  MR_Word Stream_7,
  MR_Word Globals_8,
  MR_Word Baggage_9,
  MR_Word ParseTreeModuleSrc_10);

static MR_Box MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(
  MR_Word SymNames_3);

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
  MR_Word * MaybeModuleDepInfo_12,
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
  MR_Word * STATE_VARIABLE_MaybeModuleDepInfo_37,
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
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0(
  MR_Word Globals_12,
  MR_Word OldOutputStream_13,
  MR_Word ErrorStream_14,
  MR_String SourceFileName_15,
  MR_Word ModuleName_16,
  MR_Word ParseTreeSrc_17,
  MR_Word ReadModuleErrors_18,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

static void MR_CALL 
make__module_dep_file__make_int3_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_int3_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeModuleSrcs_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_fatal_error_11_p_0(
  MR_Word Globals_12,
  MR_Word OldOutputStream_13,
  MR_Word ErrorStream_14,
  MR_String SourceFileName_15,
  MR_Word ModuleName_16,
  MR_Word ReadModuleErrors_17,
  MR_Word DisplayErrorReadingFile_18,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

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
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

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
make__module_dep_file__parse_module_summary_file_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0(
  MR_Word ModuleName_5,
  MR_String ModuleDir_6,
  MR_Word Term_7,
  MR_Word * ModuleSummary_8);

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
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[4][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[8][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[14][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[14][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[1][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[1][10];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[1][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[2][7];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][8];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[8][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "unexpected eof"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "error in nested submodules"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "failed to parse term"))
  },
  /* row   4 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row   6 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".err"))))
  },
  /* row   7 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[14][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[1])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[2])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__parse_module_summary_file_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[7])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[8])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_7[0])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[9])),
    ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[10])),
    ((MR_Box) (make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[11])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[12])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[13])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
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



static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
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

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_ordinal_ordered_module_dep_file_version_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__module_dep_file____Unify____module_dep_file_version_0_0_10001)),
  ((MR_Box) (make__module_dep_file____Compare____module_dep_file_version_0_0_10001)),
  (MR_String) "make.module_dep_file",
  (MR_String) "module_dep_file_version",
  { make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0 },
  { make__module_dep_file__make__module_dep_file__enum_ordinal_ordered_module_dep_file_version_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0,

};

static MR_Word MR_CALL 
make__module_dep_file__IntroducedFrom__func__make_module_dependencies_no_fatal_error__927__1_1_f_0(
  MR_Word LambdaHeadVar__1_54)
{
  MR_Word LambdaHeadVar__2_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 1))));

  return LambdaHeadVar__2_55;
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__710__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_6, HeadVar__2_7);
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__671__1_2_p_0(
  MR_Word ParentsSet_39,
  MR_Word AncestorsSet_40)
{
  MR_bool succeeded;

  succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParentsSet_39, AncestorsSet_40);
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__666__1_2_p_0(
  MR_Word NestedSubModules0_31,
  MR_Word HeadVar__2_64)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (NestedSubModules0_31)), ((MR_Box) (HeadVar__2_64)));
  return succeeded;
}

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__294__1_1_f_0(
  MR_String LambdaHeadVar__1_87)
{
  MR_String LambdaHeadVar__2_88;
  MR_String Var_90;

  Var_90 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_87, (MR_String) "\'");
  LambdaHeadVar__2_88 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_90);
  return LambdaHeadVar__2_88;
}

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
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
make__module_dep_file____Unify____module_dep_file_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word Var_16;
  MR_Word Var_19;

  Var_19 = parse_tree__file_names__make_module_dep_file_extension_0_f_0();
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_19));
  }
  make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 77, ModuleName_8, Var_16, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__module_dep_file__cleanup_module_dep_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word Var_15;
  MR_Box conv2_STATE_VARIABLE_Info_12;
  MR_Box conv1_STATE_VARIABLE_IO_14;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Globals_7));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, ModuleNames_8, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv2_STATE_VARIABLE_Info_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
  *STATE_VARIABLE_Info_12 = ((MR_Word) (conv2_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_dep_file__cleanup_int3_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  make__util__make_remove_target_file_by_name_8_p_0(Globals_7, (MR_Integer) 73, ModuleName_8, (MR_Word) ((MR_Unsigned) 20U), STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_12;

  make__module_dep_file__cleanup_int3_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_dep_file__cleanup_int3_files_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleNames_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word Var_15;
  MR_Box conv2_STATE_VARIABLE_Info_12;
  MR_Box conv1_STATE_VARIABLE_IO_14;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (make__module_dep_file__cleanup_int3_files_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Globals_7));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, ModuleNames_8, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv2_STATE_VARIABLE_Info_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
  *STATE_VARIABLE_Info_12 = ((MR_Word) (conv2_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_dep_file__make_info_add_module_and_imports_as_dep_3_p_0(
  MR_Word BurdenedModule_4,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_4, (MR_Integer) 1))));
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_6, (MR_Integer) 0))));
  MR_Word ModuleDepInfo_8;
  MR_Word MaybeModuleDepInfo_9;
  MR_Word ModuleDeps0_10;
  MR_Word ModuleDeps_11;
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
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Integer Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Unsigned packed_word_1;

  {
    ModuleDepInfo_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ModuleDepInfo_8, 0) = ((MR_Box) (BurdenedModule_4));
  }
  {
    MaybeModuleDepInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_9, 0) = ((MR_Box) (ModuleDepInfo_8));
  }
  ModuleDeps0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (MaybeModuleDepInfo_9)), ModuleDeps0_10, &ModuleDeps_11);
  Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1))));
  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 2))));
  Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 3))));
  Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 4))));
  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 5))));
  Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 6))));
  Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 7))));
  Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 8))));
  Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 9))));
  Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 10))));
  Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 11))));
  Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 12))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 13)));
  Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 14))));
  Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 15))));
  Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 16))));
  Var_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 17))));
  Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 18))));
  Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 19))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_13 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDeps_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_73));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_74));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_75));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_76));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_77));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_78));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_79));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_80));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_81));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_82));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_83));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_84));
    MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_87));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_88));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_89));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_90));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_91));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_92));
  }
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ForeignInclude_4)
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
  MR_Word Var_17;
  MR_String String_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
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
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LanguageTerm_5, (MR_Integer) 0))));
                Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LanguageTerm_5, (MR_Integer) 1))));
                succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    String_18 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_20, (MR_Integer) 0))));
                    succeeded = libs__globals__convert_foreign_language_2_p_0(String_18, &Language_7);
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) FileNameTerm_6)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileNameTerm_6, (MR_Integer) 0))));
                        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileNameTerm_6, (MR_Integer) 1))));
                        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            FileName_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_23, (MR_Integer) 0))));
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

static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
  MR_Word Term_3,
  MR_Word * FIMSpec_4)
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
  MR_Word Var_18;
  MR_String String_19;
  MR_Word Var_21;
  MR_Word Var_22;

  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
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
                Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LanguageTerm_5, (MR_Integer) 0))));
                Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LanguageTerm_5, (MR_Integer) 1))));
                succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    String_19 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_21, (MR_Integer) 0))));
                    succeeded = libs__globals__convert_foreign_language_2_p_0(String_19, &Language_7);
                    if (succeeded)
                    {
                      TypeCtorInfo_13_13 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_13_13, ImportedModuleTerm_6, &ImportedModuleName_8);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *FIMSpec_4 = base;
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

static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
  MR_Word Term_3,
  MR_Word * Lang_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_String String_5;
  MR_Word Var_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 2);
    if (succeeded)
    {
      String_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_7, (MR_Integer) 0))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = libs__globals__convert_foreign_language_2_p_0(String_5, Lang_4);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
  MR_Word Term_3,
  MR_String * FactDep_4)
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
      *FactDep_4 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_6, (MR_Integer) 0))));
      succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
make__module_dep_file__foreign_include_file_info_to_string_1_f_0(
  MR_Word ForeignInclude_3)
{
  MR_String Str_4;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignInclude_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_String FileName_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignInclude_3, (MR_Integer) 1))));
  MR_String LangStr_7;
  MR_String Var_8;
  MR_String Var_10;

  LangStr_7 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(Lang_5);
  Var_10 = mercury__term_io__quoted_string_1_f_0(FileName_6);
  Var_8 = mercury__string__f_43_43_2_f_0((MR_String) " - ", Var_10);
  Str_4 = mercury__string__f_43_43_2_f_0(LangStr_7, Var_8);
  return Str_4;
}

static MR_String MR_CALL 
make__module_dep_file__fim_spec_to_string_1_f_0(
  MR_Word FIMSpec_3)
{
  MR_String Str_4;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMSpec_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ForeignImport_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FIMSpec_3, (MR_Integer) 1))));
  MR_String LangStr_7;
  MR_String ForeignImportStr_8;
  MR_String Var_9;

  LangStr_7 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(Lang_5);
  ForeignImportStr_8 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(ForeignImport_6);
  Var_9 = mercury__string__f_43_43_2_f_0((MR_String) " - ", ForeignImportStr_8);
  Str_4 = mercury__string__f_43_43_2_f_0(LangStr_7, Var_9);
  return Str_4;
}

void MR_CALL 
make__module_dep_file__write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word BurdenedModule0_6)
{
  MR_Word Baggage0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule0_6, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule0_6, (MR_Integer) 1))));
  MR_String SourceFileName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Baggage0_8, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage0_8, (MR_Integer) 2))));
  MR_Word MaybeTopModule_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage0_8, (MR_Integer) 3))));
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_9, (MR_Integer) 0))));
  MR_Word GrabbedFileMap_19;
  MR_Word Errors_20;
  MR_Word Baggage_21;
  MR_Word BurdenedModule_22;
  MR_Word Var_25;
  MR_String Var_26;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (ParseTreeModuleSrc_9));
  }
  GrabbedFileMap_19 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_18)), ((MR_Box) (Var_25)));
  Errors_20 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  Var_26 = mercury__dir__this_directory_0_f_0();
  {
    Baggage_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Baggage_21, 0) = ((MR_Box) (SourceFileName_10));
    MR_hl_field(MR_mktag(0), Baggage_21, 1) = ((MR_Box) (Var_26));
    MR_hl_field(MR_mktag(0), Baggage_21, 2) = ((MR_Box) (SourceFileModuleName_12));
    MR_hl_field(MR_mktag(0), Baggage_21, 3) = ((MR_Box) (MaybeTopModule_13));
    MR_hl_field(MR_mktag(0), Baggage_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Baggage_21, 5) = ((MR_Box) (GrabbedFileMap_19));
    MR_hl_field(MR_mktag(0), Baggage_21, 6) = ((MR_Box) (Errors_20));
  }
  {
    BurdenedModule_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), BurdenedModule_22, 0) = ((MR_Box) (Baggage_21));
    MR_hl_field(MR_mktag(0), BurdenedModule_22, 1) = ((MR_Box) (ParseTreeModuleSrc_9));
  }
  make__module_dep_file__do_write_module_dep_file_4_p_0(Globals_5, BurdenedModule_22);
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word BurdenedModule_6)
{
  MR_Word Baggage_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_6, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_6, (MR_Integer) 1))));
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_9, (MR_Integer) 0))));
  MR_String ProgDepFile_11;
  MR_Word ProgDepResult_12;
  MR_Word Var_20;
  MR_Word Var_22;

  Var_22 = parse_tree__file_names__make_module_dep_file_extension_0_f_0();
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_22));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_5, (MR_String) "predicate \140make.module_dep_file.do_write_module_dep_file\'/4", (MR_Integer) 0, Var_20, ModuleName_10, &ProgDepFile_11);
  mercury__io__open_output_4_p_0(ProgDepFile_11, &ProgDepResult_12);
  if (((MR_tag((MR_Word) ProgDepResult_12)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProgDepResult_12, (MR_Integer) 0))));
    MR_String Msg_15;

    mercury__io__error_message_2_p_0(Error_14, &Msg_15);
    mercury__io__write_string_3_p_0((MR_String) "Error opening ");
    mercury__io__write_string_3_p_0(ProgDepFile_11);
    mercury__io__write_string_3_p_0((MR_String) " for output: ");
    mercury__io__write_string_3_p_0(Msg_15);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word ProgDepStream_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgDepResult_12, (MR_Integer) 0))));

    make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0(ProgDepStream_13, Globals_5, Baggage_8, ParseTreeModuleSrc_9);
    mercury__io__close_output_3_p_0(ProgDepStream_13);
  }
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_Str_4;

  conv2_Str_4 = make__module_dep_file__foreign_include_file_info_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Str_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_Str_4;

  conv1_Str_4 = make__module_dep_file__fim_spec_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Str_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0(
  MR_Word Stream_7,
  MR_Word Globals_8,
  MR_Word Baggage_9,
  MR_Word ParseTreeModuleSrc_10)
{
  MR_bool succeeded;
  MR_String SourceFileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Baggage_9, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_9, (MR_Integer) 2))));
  MR_String SourceFileModuleNameStr_16;
  MR_Word ModuleName_17;
  MR_Word Ancestors_18;
  MR_Word IncludeMap_19;
  MR_Word Children_20;
  MR_Word IntDepSet_21;
  MR_Word ImpDepSet_22;
  MR_Word IntDeps_23;
  MR_Word ImpDeps_24;
  MR_Word MaybeTopModule_25;
  MR_Word NestedSubModules_26;
  MR_Word FactTableFilesSet_27;
  MR_Word FactTableFiles_28;
  MR_Word BackendLangsList_29;
  MR_Word BackendLangs_30;
  MR_Word CodeLangs_31;
  MR_Word ExportLangs_32;
  MR_Word BackendCodeLangs_33;
  MR_Word BackendExportLangs_34;
  MR_Word CodeLangStrs_35;
  MR_Word FIMSpecs_37;
  MR_Word ForeignIncludeFiles_38;
  MR_Word FIMSpecStrs_39;
  MR_Word FIFOStrs_40;
  MR_String ContainsForeignExportStr_41;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_String Var_87;
  MR_String Var_90;
  MR_String Var_93;
  MR_String Var_96;
  MR_String Var_99;
  MR_String Var_102;
  MR_String Var_106;
  MR_String Var_110;
  MR_String Var_116;
  MR_String Var_226;

  SourceFileModuleNameStr_16 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(SourceFileModuleName_15);
  ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_10, (MR_Integer) 0))));
  Var_44 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_17);
  Ancestors_18 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_44);
  IncludeMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_10, (MR_Integer) 4))));
  Children_20 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_19);
  parse_tree__module_baggage__parse_tree_module_src_get_int_imp_deps_3_p_0(ParseTreeModuleSrc_10, &IntDepSet_21, &ImpDepSet_22);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepSet_21, &IntDeps_23);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepSet_22, &ImpDeps_24);
  MaybeTopModule_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_9, (MR_Integer) 3))));
  NestedSubModules_26 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_25);
  parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_10, &FactTableFilesSet_27);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_27, &FactTableFiles_28);
  libs__globals__get_backend_foreign_languages_2_p_0(Globals_8, &BackendLangsList_29);
  BackendLangs_30 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangsList_29);
  parse_tree__get_dependencies__get_foreign_code_langs_2_p_0(ParseTreeModuleSrc_10, &CodeLangs_31);
  parse_tree__get_dependencies__get_foreign_export_langs_2_p_0(ParseTreeModuleSrc_10, &ExportLangs_32);
  mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_30, CodeLangs_31, &BackendCodeLangs_33);
  mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_30, ExportLangs_32, &BackendExportLangs_34);
  Var_46 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendCodeLangs_33);
  CodeLangStrs_35 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[11]), Var_46);
  parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_10, &FIMSpecs_37);
  parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_10, &ForeignIncludeFiles_38);
  Var_48 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecs_37);
  FIMSpecStrs_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[12]), Var_48);
  Var_50 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFiles_38);
  FIFOStrs_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[13]), Var_50);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendExportLangs_34);
  if (succeeded)
    ContainsForeignExportStr_41 = (MR_String) "no_foreign_export";
  else
    ContainsForeignExportStr_41 = (MR_String) "contains_foreign_export";
  Var_87 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(Ancestors_18);
  Var_90 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(IntDeps_23);
  Var_93 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(ImpDeps_24);
  Var_96 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(Children_20);
  Var_99 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(NestedSubModules_26);
  Var_102 = mercury__string__join_list_2_f_0((MR_String) ", ", FactTableFiles_28);
  Var_106 = mercury__string__join_list_2_f_0((MR_String) ", ", CodeLangStrs_35);
  Var_110 = mercury__string__join_list_2_f_0((MR_String) ", ", FIMSpecStrs_39);
  Var_116 = mercury__string__join_list_2_f_0((MR_String) ", ", FIFOStrs_40);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "module(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&make__module_dep_file_scalar_common_2[0]), (MR_Integer) 2, &Var_226);
  mercury__io__write_string_4_p_0(Stream_7, Var_226);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", \"");
  mercury__io__write_string_4_p_0(Stream_7, SourceFileName_14);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\",\n\t");
  mercury__io__write_string_4_p_0(Stream_7, SourceFileModuleNameStr_16);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_87);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_90);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_93);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_96);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_99);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_102);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_106);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_110);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t");
  mercury__io__write_string_4_p_0(Stream_7, ContainsForeignExportStr_41);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n\tno_main,\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_116);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "}\n).\n");
}

static MR_Box MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(
  MR_Word SymNames_3)
{
  MR_String Str_4;
  MR_Word Strs_5;

  Strs_5 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[10]), SymNames_3);
  Str_4 = mercury__string__join_list_2_f_0((MR_String) ", ", Strs_5);
  return Str_4;
}

void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * MaybeModuleDepInfo_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;
  MR_Word RebuildModuleDeps_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));

  if (((MR_tag((MR_Word) ModuleName_9)) == (MR_Integer) 1))
  {
    MR_Word AncestorsAndSelf_17;
    MR_Word ModuleDepMap_19;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv0_MaybeModuleDepInfo_10;

    Var_26 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_9);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    AncestorsAndSelf_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_26, Var_27);
    make__module_dep_file__maybe_get_modules_dependencies_8_p_0(Globals_8, RebuildModuleDeps_13, AncestorsAndSelf_17, (MR_Integer) 0, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
    ModuleDepMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_21, (MR_Integer) 0))));
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap_19, ((MR_Box) (ModuleName_9)), &conv0_MaybeModuleDepInfo_10);
    *MaybeModuleDepInfo_10 = ((MR_Word) (conv0_MaybeModuleDepInfo_10));
  }
  else
  {
    MR_Word MaybeModuleDepInfo0_72;
    MR_Box conv1_MaybeModuleDepInfo0_72;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), Var_29, ((MR_Box) (ModuleName_9)), &conv1_MaybeModuleDepInfo0_72);
    if (succeeded)
    {
      MaybeModuleDepInfo0_72 = ((MR_Word) (conv1_MaybeModuleDepInfo0_72));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeModuleDepInfo_10 = MaybeModuleDepInfo0_72;
      *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    }
    else
      make__module_dep_file__do_get_module_dependencies_8_p_0(Globals_8, RebuildModuleDeps_13, ModuleName_9, MaybeModuleDepInfo_10, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
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
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word STATE_VARIABLE_Error_36_36;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Error_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      switch (STATE_VARIABLE_Error_0_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeModuleDepInfo_25;

            make__module_dep_file__maybe_get_module_dependencies_8_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_20, &MaybeModuleDepInfo_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_34_34);
            if ((MaybeModuleDepInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Error_36_36 = (MR_Integer) 1;
            else
              STATE_VARIABLE_Error_36_36 = STATE_VARIABLE_Error_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleDepMap0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
            MR_Word ModuleDepMap_28;
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
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Integer Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Unsigned packed_word_1;

            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_20)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_27, &ModuleDepMap_28);
            Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
            Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
            Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
            Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
            Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
            Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 8))));
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 9))));
            Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 10))));
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 11))));
            Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 12))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 13)));
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 14))));
            Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 15))));
            Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 16))));
            Var_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 17))));
            Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 18))));
            Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 19))));
            {
              STATE_VARIABLE_Info_34_34 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 0) = ((MR_Box) (ModuleDepMap_28));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 1) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 2) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 3) = ((MR_Box) (Var_61));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 4) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 5) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 6) = ((MR_Box) (Var_64));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 7) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 8) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 9) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 10) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 11) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 12) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 13) = (MR_Box) (packed_word_1);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 14) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 15) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 16) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 17) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 18) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 19) = ((MR_Box) (Var_78));
            }
            STATE_VARIABLE_Error_36_36 = STATE_VARIABLE_Error_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ModuleNames_21;
      next_value_of_STATE_VARIABLE_Error_0_4 = STATE_VARIABLE_Error_36_36;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_34_34;
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
  MR_Word * MaybeModuleDepInfo_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_Word ModuleDepMap0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
  MR_Word MaybeModuleDepInfo0_16;
  MR_Box conv0_MaybeModuleDepInfo0_16;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap0_15, ((MR_Box) (ModuleName_11)), &conv0_MaybeModuleDepInfo0_16);
  if (succeeded)
  {
    MaybeModuleDepInfo0_16 = ((MR_Word) (conv0_MaybeModuleDepInfo0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *MaybeModuleDepInfo_12 = MaybeModuleDepInfo0_16;
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
  }
  else
    make__module_dep_file__do_get_module_dependencies_8_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, MaybeModuleDepInfo_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  mercury__io__format_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
}

static MR_Box MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_88;

  conv0_LambdaHeadVar__2_88 = make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__294__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_88));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * STATE_VARIABLE_MaybeModuleDepInfo_37,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_bool succeeded;
  MR_String SourceFileName_15;
  MR_Word MaybeSourceFileTimestamp_16;
  MR_String DepFileName_17;
  MR_Word SearchDirs_18;
  MR_Word MaybeDepFileTimestamp_19;
  MR_Word ModuleDepMap2_34;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_String Var_46;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_Info_54_54;
  MR_Word STATE_VARIABLE_Info_57_57;
  MR_Word MaybeModuleDepInfo0_35;
  MR_Box conv2_MaybeModuleDepInfo0_35;

  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_11, &SourceFileName_15);
  Var_46 = mercury__dir__this_directory_0_f_0();
  {
    Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_46));
    MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__util__get_file_timestamp_7_p_0(Var_43, SourceFileName_15, &MaybeSourceFileTimestamp_16, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_44_44);
  Var_52 = parse_tree__file_names__make_module_dep_file_extension_0_f_0();
  {
    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_52));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140make.module_dep_file.do_get_module_dependencies\'/8", (MR_Integer) 1, Var_50, ModuleName_11, &DepFileName_17);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 683, &SearchDirs_18);
  make__util__get_file_timestamp_7_p_0(SearchDirs_18, DepFileName_17, &MaybeDepFileTimestamp_19, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_54_54);
  if (((MR_tag((MR_Word) MaybeDepFileTimestamp_19)) == (MR_Integer) 1))
  {
    MR_String SearchDirsString_30;
    MR_Word Var_85;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;

    Var_85 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[9]), SearchDirs_18);
    SearchDirsString_30 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_85);
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (DepFileName_17));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (SearchDirsString_30));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) ((MR_String) "Module dependencies file \'%s\' not found in directories %s.\n"));
      MR_hl_field(MR_mktag(0), Var_92, 4) = ((MR_Box) (Var_95));
    }
    make__util__debug_make_msg_4_p_0(Globals_9, Var_92);
    switch (RebuildModuleDeps_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ModuleDepMap0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 0))));
          MR_Word ModuleDepMap1_33;
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
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Var_187;
          MR_Integer Var_188;
          MR_Word Var_189;
          MR_Word Var_190;
          MR_Unsigned packed_word_1;

          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_32, &ModuleDepMap1_33);
          Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 1))));
          Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 2))));
          Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 3))));
          Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 4))));
          Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 5))));
          Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 6))));
          Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 7))));
          Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 8))));
          Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 9))));
          Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 10))));
          Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 11))));
          Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 12))));
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 13)));
          Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 14))));
          Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 15))));
          Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 16))));
          Var_188 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 17))));
          Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 18))));
          Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_54_54, (MR_Integer) 19))));
          {
            STATE_VARIABLE_Info_57_57 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 0) = ((MR_Box) (ModuleDepMap1_33));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 1) = ((MR_Box) (Var_171));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 2) = ((MR_Box) (Var_172));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 3) = ((MR_Box) (Var_173));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 4) = ((MR_Box) (Var_174));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 5) = ((MR_Box) (Var_175));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 6) = ((MR_Box) (Var_176));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 7) = ((MR_Box) (Var_177));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 8) = ((MR_Box) (Var_178));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 9) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 10) = ((MR_Box) (Var_180));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 11) = ((MR_Box) (Var_181));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 12) = ((MR_Box) (Var_182));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 13) = (MR_Box) (packed_word_1);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 14) = ((MR_Box) (Var_185));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 15) = ((MR_Box) (Var_186));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 16) = ((MR_Box) (Var_187));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 17) = ((MR_Box) (Var_188));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 18) = ((MR_Box) (Var_189));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, 19) = ((MR_Box) (Var_190));
          }
        }
        break;
      case (MR_Integer) 0:
        make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_57_57);
        break;
    }
  }
  else
  {
    MR_Word Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDepFileTimestamp_19, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) MaybeSourceFileTimestamp_16)) == (MR_Integer) 1))
    {
      MR_Word STATE_VARIABLE_Info_61_61;
      MR_Word Var_63;
      MR_Word STATE_VARIABLE_MaybeModuleDepInfo_64_64;
      MR_Box conv1_STATE_VARIABLE_MaybeModuleDepInfo_64_64;
      MR_Word ModuleDepInfo0_23;
      MR_String ModuleDir_24;
      MR_String Var_246;

      make__module_dep_file__read_module_dependencies_search_7_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_61_61);
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 0))));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), Var_63, ((MR_Box) (ModuleName_11)), &conv1_STATE_VARIABLE_MaybeModuleDepInfo_64_64);
      STATE_VARIABLE_MaybeModuleDepInfo_64_64 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeModuleDepInfo_64_64));
      succeeded = (STATE_VARIABLE_MaybeModuleDepInfo_64_64 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModuleDepInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeModuleDepInfo_64_64, (MR_Integer) 0))));
        parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo0_23, &ModuleDir_24);
        Var_246 = mercury__dir__this_directory_0_f_0();
        succeeded = (strcmp(ModuleDir_24, Var_246) == 0);
      }
      if (succeeded)
      {
        MR_String SourceFileName1_25;
        MR_Word MaybeSourceFileTimestamp1_26;
        MR_Word Var_65;
        MR_Word STATE_VARIABLE_Info_66_66;
        MR_String Var_68;

        parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo0_23, &SourceFileName1_25);
        Var_68 = mercury__dir__this_directory_0_f_0();
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        make__util__get_file_timestamp_7_p_0(Var_65, SourceFileName1_25, &MaybeSourceFileTimestamp1_26, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_66_66);
        if (((MR_tag((MR_Word) MaybeSourceFileTimestamp1_26)) == (MR_Integer) 1))
        {
          MR_String Message_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeSourceFileTimestamp1_26, (MR_Integer) 0))));
          MR_Word Var_82;

          mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
          mercury__io__write_string_3_p_0(SourceFileName1_25);
          mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
          mercury__io__write_string_3_p_0(Message_28);
          mercury__io__write_string_3_p_0((MR_String) ".\n");
          Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, (MR_Integer) 15))));
          make__module_dep_file__maybe_write_importing_module_4_p_0(ModuleName_11, Var_82);
          STATE_VARIABLE_Info_57_57 = STATE_VARIABLE_Info_66_66;
        }
        else
        {
          MR_Word SourceFileTimestamp1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSourceFileTimestamp1_26, (MR_Integer) 0))));

          succeeded = (RebuildModuleDeps_10 == (MR_Integer) 1);
          if (!(succeeded))
          {
            MR_Word Var_247;

            libs__timestamp____Compare____timestamp_0_0(&Var_247, Var_248, SourceFileTimestamp1_27);
            succeeded = ((MR_Integer) 2 == Var_247);
          }
          if (succeeded)
            STATE_VARIABLE_Info_57_57 = STATE_VARIABLE_Info_66_66;
          else
            make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_57_57);
        }
      }
      else
        STATE_VARIABLE_Info_57_57 = STATE_VARIABLE_Info_61_61;
    }
    else
    {
      MR_Word SourceFileTimestamp_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSourceFileTimestamp_16, (MR_Integer) 0))));

      succeeded = (RebuildModuleDeps_10 == (MR_Integer) 1);
      if (!(succeeded))
      {
        MR_Word Var_245;

        libs__timestamp____Compare____timestamp_0_0(&Var_245, Var_248, SourceFileTimestamp_20);
        succeeded = ((MR_Integer) 2 == Var_245);
      }
      if (succeeded)
        make__module_dep_file__read_module_dependencies_no_search_7_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_57_57);
      else
        make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_57_57);
    }
  }
  ModuleDepMap2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap2_34, ((MR_Box) (ModuleName_11)), &conv2_MaybeModuleDepInfo0_35);
  if (succeeded)
  {
    MaybeModuleDepInfo0_35 = ((MR_Word) (conv2_MaybeModuleDepInfo0_35));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_MaybeModuleDepInfo_37 = MaybeModuleDepInfo0_35;
    *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_57_57;
  }
  else
  {
    MR_Word ModuleDepMap_36;
    MR_Word Var_212;
    MR_Word Var_213;
    MR_Word Var_214;
    MR_Word Var_215;
    MR_Word Var_216;
    MR_Word Var_217;
    MR_Word Var_218;
    MR_Word Var_219;
    MR_Word Var_220;
    MR_Word Var_221;
    MR_Word Var_222;
    MR_Word Var_223;
    MR_Word Var_226;
    MR_Word Var_227;
    MR_Word Var_228;
    MR_Integer Var_229;
    MR_Word Var_230;
    MR_Word Var_231;
    MR_Unsigned packed_word_5;

    *STATE_VARIABLE_MaybeModuleDepInfo_37 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap2_34, &ModuleDepMap_36);
    Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 1))));
    Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 2))));
    Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 3))));
    Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 4))));
    Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 5))));
    Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 6))));
    Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 7))));
    Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 8))));
    Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 9))));
    Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 10))));
    Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 11))));
    Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 12))));
    packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 13)));
    Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 14))));
    Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 15))));
    Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 16))));
    Var_229 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 17))));
    Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 18))));
    Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 19))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_39 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDepMap_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_212));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_213));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_214));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_215));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_216));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_217));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_218));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_219));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_220));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_221));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_222));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_223));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_5);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_226));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_227));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_228));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_229));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_230));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_231));
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

static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
  MR_Word Globals_8,
  MR_Word RebuildModuleDeps_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word SearchDirs_13;

  libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 683, &SearchDirs_13);
  make__module_dep_file__read_module_dependencies_2_8_p_0(Globals_8, RebuildModuleDeps_9, SearchDirs_13, ModuleName_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
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
  MR_String ModuleDepFile_15;
  MR_Word MaybeDirAndStream_16;
  MR_Word Var_31;
  MR_Word Var_33;

  Var_33 = parse_tree__file_names__make_module_dep_file_extension_0_f_0();
  {
    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_33));
  }
  parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_9, (MR_String) "predicate \140make.module_dep_file.read_module_dependencies_2\'/8", Var_31, ModuleName_12, &ModuleDepFile_15);
  parse_tree__find_module__search_for_file_returning_dir_and_stream_5_p_0(SearchDirs_11, ModuleDepFile_15, &MaybeDirAndStream_16);
  if (((MR_tag((MR_Word) MaybeDirAndStream_16)) == (MR_Integer) 1))
  {
    MR_Word Var_49;
    MR_String Msg_53 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDirAndStream_16, (MR_Integer) 0))));

    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (RebuildModuleDeps_10));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (ModuleDepFile_15));
      MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) (Msg_53));
    }
    make__util__debug_make_msg_4_p_0(Globals_9, Var_49);
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
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDirAndStream_16, (MR_Integer) 0))));

    ModuleDir_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
    DepStream_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
    mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DepStream_18, &TermResult_19);
    mercury__io__close_input_3_p_0(DepStream_18);
    switch (MR_tag((MR_Word) TermResult_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Msg_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_2[1])), (MR_Integer) 0))));
          MR_String Var_43;
          MR_String Var_45;

          Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
          Var_43 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_45);
          make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(RebuildModuleDeps_10, Var_43, Msg_25);
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
          MR_String Msg_57;
          MR_String Var_60;
          MR_String Var_62;

          Msg_57 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", ParseError_23);
          Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
          Var_60 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_62);
          make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(RebuildModuleDeps_10, Var_60, Msg_57);
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
          MR_Word Result_74;
          MR_Word STATE_VARIABLE_Info_38_76;

          make__module_dep_file__read_module_dependencies_3_11_p_0(Globals_9, SearchDirs_11, ModuleName_12, ModuleDir_17, ModuleDepFile_15, Term_21, &Result_74, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_38_76);
          if ((Result_74 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_38_76;
          else
          {
            MR_String Msg_64 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_74, (MR_Integer) 0))));
            MR_String Var_65;
            MR_String Var_67;

            Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
            Var_65 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_67);
            make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(RebuildModuleDeps_10, Var_65, Msg_64);
            switch (RebuildModuleDeps_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_38_76;
                break;
              case (MR_Integer) 0:
                make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_38_76, STATE_VARIABLE_Info_27);
                break;
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word MaybeErrorStream_11;
  MR_Word STATE_VARIABLE_Info_26_26;

  make__build__prepare_to_redirect_output_6_p_0(ModuleName_8, &MaybeErrorStream_11, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
  if ((MaybeErrorStream_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_26_26;
  else
  {
    MR_Word ErrorStream_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeErrorStream_11, (MR_Integer) 0))));
    MR_Word OldOutputStream_13;
    MR_Word HaveReadSrc_14;
    MR_Word Var_29;

    mercury__io__set_output_stream_4_p_0(ErrorStream_12, &OldOutputStream_13);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (ModuleName_8));
    }
    parse_tree__read_modules__read_module_src_10_p_0(Globals_7, Var_29, (MR_Integer) 1, (MR_Integer) 1, ModuleName_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&make__module_dep_file_scalar_common_2[4]), &HaveReadSrc_14);
    if (((MR_tag((MR_Word) HaveReadSrc_14)) == (MR_Integer) 1))
    {
      MR_String SourceFileName_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadSrc_14, (MR_Integer) 0))));
      MR_Word ReadModuleErrors_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadSrc_14, (MR_Integer) 1))));

      make__module_dep_file__make_module_dependencies_fatal_error_11_p_0(Globals_7, OldOutputStream_13, ErrorStream_12, SourceFileName_47, ModuleName_8, ReadModuleErrors_48, (MR_Integer) 1, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_23);
    }
    else
    {
      MR_String SourceFileName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), HaveReadSrc_14, (MR_Integer) 0))));
      MR_Word ParseTreeSrc_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadSrc_14, (MR_Integer) 2))));
      MR_Word ReadModuleErrors_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadSrc_14, (MR_Integer) 3))));
      MR_Word Fatal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReadModuleErrors_18, (MR_Integer) 0))));
      MR_Word NonFatal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReadModuleErrors_18, (MR_Integer) 2))));

      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Fatal_19);
      if (succeeded)
        make__module_dep_file__make_module_dependencies_fatal_error_11_p_0(Globals_7, OldOutputStream_13, ErrorStream_12, SourceFileName_15, ModuleName_8, ReadModuleErrors_18, (MR_Integer) 1, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_23);
      else
      {
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatal_20, ((MR_Box) ((MR_Integer) 0)));
        if (succeeded)
          make__module_dep_file__make_module_dependencies_fatal_error_11_p_0(Globals_7, OldOutputStream_13, ErrorStream_12, SourceFileName_15, ModuleName_8, ReadModuleErrors_18, (MR_Integer) 0, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_23);
        else
          make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0(Globals_7, OldOutputStream_13, ErrorStream_12, SourceFileName_15, ModuleName_8, ParseTreeSrc_17, ReadModuleErrors_18, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_23);
      }
    }
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Info_12;

  make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv7_STATE_VARIABLE_Info_12);
  *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_12;

  make__module_dep_file__cleanup_int3_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Info_12);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_13;

  make__module_dep_file__make_info_add_module_and_imports_as_dep_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_13));
}

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__parse_tree_module_src_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_55;

  conv0_LambdaHeadVar__2_55 = make__module_dep_file__IntroducedFrom__func__make_module_dependencies_no_fatal_error__927__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_55));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0(
  MR_Word Globals_12,
  MR_Word OldOutputStream_13,
  MR_Word ErrorStream_14,
  MR_String SourceFileName_15,
  MR_Word ModuleName_16,
  MR_Word ParseTreeSrc_17,
  MR_Word ReadModuleErrors_18,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  MR_bool succeeded;
  MR_Word Specs_21;
  MR_Word BurdenedModules_22;
  MR_Word ParseTreeModuleSrcs_23;
  MR_Word SubModuleNames_26;
  MR_Word VeryVerbose_29;
  MR_Word NonFatalErrors_30;
  MR_Word Succeeded_44;
  MR_Box CookieWMDF_45;
  MR_Word CleanupWMDF_46;
  MR_Word MadeTarget_48;
  MR_Word STATE_VARIABLE_Info_63_63;
  MR_Word STATE_VARIABLE_Info_76_76;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_Info_82_82;
  MR_Word STATE_VARIABLE_Info_86_86;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Box conv3_STATE_VARIABLE_Info_63_63;
  MR_Box conv6_STATE_VARIABLE_IO_80_80;
  MR_Word _Succeeded_47;
  MR_Box conv8_STATE_VARIABLE_Info_82_82;

  parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_6_p_0(Globals_12, SourceFileName_15, ParseTreeSrc_17, ReadModuleErrors_18, &Specs_21, &BurdenedModules_22);
  ParseTreeModuleSrcs_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&make__module_dep_file_scalar_common_4[6]), BurdenedModules_22);
  SubModuleNames_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_4[7]), ParseTreeModuleSrcs_23);
  mercury__io__set_output_stream_4_p_0(ErrorStream_14, &Var_27);
  mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
  parse_tree__error_util__write_error_specs_4_p_0(Globals_12, Specs_21);
  mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_28);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_dep_file_scalar_common_4[8]), BurdenedModules_22, ((MR_Box) (STATE_VARIABLE_Info_0_49)), &conv3_STATE_VARIABLE_Info_63_63);
  STATE_VARIABLE_Info_63_63 = ((MR_Word) (conv3_STATE_VARIABLE_Info_63_63));
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 73, &VeryVerbose_29);
  NonFatalErrors_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReadModuleErrors_18, (MR_Integer) 2))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_30);
  if (succeeded)
  {
    MR_Word Target_31;
    MR_Box CookieMSI_32;
    MR_Word DetectedGradeFlags_33;
    MR_Word OptionVariables_34;
    MR_Word OptionArgs_35;
    MR_Word MayBuild_37;
    MR_Word Succeeded0_39;
    MR_Word CleanupMSI_43;
    MR_Word STATE_VARIABLE_Info_74_74;
    MR_Box conv5_STATE_VARIABLE_Info_76_76;

    {
      Target_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Target_31, 0) = ((MR_Box) (ModuleName_16));
      MR_hl_field(MR_mktag(0), Target_31, 1) = ((MR_Box) ((MR_Unsigned) 20U));
    }
    make__util__maybe_make_target_message_to_stream_5_p_0(Globals_12, OldOutputStream_13, Target_31);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&CookieMSI_32);
    DetectedGradeFlags_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 3))));
    OptionArgs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 4))));
    OptionVariables_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, (MR_Integer) 5))));
    make__build__setup_for_build_with_module_options_9_p_0((MR_Integer) 1, ModuleName_16, DetectedGradeFlags_33, OptionVariables_34, OptionArgs_35, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[3])), &MayBuild_37);
    if (((MR_tag((MR_Word) MayBuild_37)) == (MR_Integer) 1))
    {
      MR_Word BuildGlobals_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_37, (MR_Integer) 1))));
      MR_Word ProgressStream_42;

      mercury__io__output_stream_3_p_0(&ProgressStream_42);
      make__module_dep_file__make_int3_files_9_p_0(ProgressStream_42, ErrorStream_14, BuildGlobals_41, ParseTreeModuleSrcs_23, &Succeeded0_39, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_74_74);
    }
    else
    {
      MR_Word MSISpecs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_37, (MR_Integer) 0))));

      parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_14, Globals_12, MSISpecs_38);
      Succeeded0_39 = (MR_Integer) 0;
      STATE_VARIABLE_Info_74_74 = STATE_VARIABLE_Info_63_63;
    }
    {
      CleanupMSI_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CleanupMSI_43, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), CleanupMSI_43, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_4));
      MR_hl_field(MR_mktag(0), CleanupMSI_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), CleanupMSI_43, 3) = ((MR_Box) (Globals_12));
      MR_hl_field(MR_mktag(0), CleanupMSI_43, 4) = ((MR_Box) (SubModuleNames_26));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_29, CookieMSI_32, CleanupMSI_43, Succeeded0_39, &Succeeded_44, ((MR_Box) (STATE_VARIABLE_Info_74_74)), &conv5_STATE_VARIABLE_Info_76_76);
    STATE_VARIABLE_Info_76_76 = ((MR_Word) (conv5_STATE_VARIABLE_Info_76_76));
  }
  else
  {
    Succeeded_44 = (MR_Integer) 0;
    STATE_VARIABLE_Info_76_76 = STATE_VARIABLE_Info_63_63;
  }
  libs__process_util__setup_checking_for_interrupt_3_p_0(&CookieWMDF_45);
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_5));
    MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (Globals_12));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, BurdenedModules_22, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_80_80);
  {
    CleanupWMDF_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), CleanupWMDF_46, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), CleanupWMDF_46, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_6));
    MR_hl_field(MR_mktag(0), CleanupWMDF_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), CleanupWMDF_46, 3) = ((MR_Box) (Globals_12));
    MR_hl_field(MR_mktag(0), CleanupWMDF_46, 4) = ((MR_Box) (SubModuleNames_26));
  }
  libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_29, CookieWMDF_45, CleanupWMDF_46, (MR_Integer) 1, &_Succeeded_47, ((MR_Box) (STATE_VARIABLE_Info_76_76)), &conv8_STATE_VARIABLE_Info_82_82);
  STATE_VARIABLE_Info_82_82 = ((MR_Word) (conv8_STATE_VARIABLE_Info_82_82));
  {
    MadeTarget_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), MadeTarget_48, 0) = ((MR_Box) (ModuleName_16));
    MR_hl_field(MR_mktag(0), MadeTarget_48, 1) = ((MR_Box) ((MR_Unsigned) 20U));
  }
  make__module_target__record_made_target_8_p_0(Globals_12, MadeTarget_48, (MR_Word) (&make__module_dep_file_scalar_common_2[7]), Succeeded_44, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_86_86);
  make__build__unredirect_output_7_p_0(Globals_12, ModuleName_16, ErrorStream_14, STATE_VARIABLE_Info_86_86, STATE_VARIABLE_Info_50);
}

static void MR_CALL 
make__module_dep_file__make_int3_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  parse_tree__write_module_interface_files__write_short_interface_file_int3_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
make__module_dep_file__make_int3_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeModuleSrcs_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word Succeededs_17;
  MR_Word Var_22;
  MR_Box conv1_STATE_VARIABLE_IO_21;

  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (make__module_dep_file__make_int3_files_9_p_0_1));
    MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (ErrorStream_11));
    MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (Globals_12));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, ParseTreeModuleSrcs_13, &Succeededs_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_21);
  *Succeeded_14 = libs__maybe_succeeded__and_list_1_f_0(Succeededs_17);
  *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_fatal_error_11_p_0(
  MR_Word Globals_12,
  MR_Word OldOutputStream_13,
  MR_Word ErrorStream_14,
  MR_String SourceFileName_15,
  MR_Word ModuleName_16,
  MR_Word ReadModuleErrors_17,
  MR_Word DisplayErrorReadingFile_18,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_Word Specs0_21;
  MR_Word UnredirectGlobals_23;
  MR_String ErrFileName_24;
  MR_Word ModuleDepMap0_26;
  MR_Word ModuleDepMap_27;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word Var_22;
  MR_Word Var_25;
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
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Integer Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Unsigned packed_word_2;

  Specs0_21 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_17);
  parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_14, Globals_12, Specs0_21);
  mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_22);
  switch (DisplayErrorReadingFile_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_39;

        mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
        mercury__io__write_string_3_p_0(SourceFileName_15);
        mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
        Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 15))));
        make__module_dep_file__maybe_write_importing_module_4_p_0(ModuleName_16, Var_39);
      }
      break;
  }
  libs__globals__set_option_4_p_0((MR_Integer) 79, (MR_Word) (MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_2[5])), Globals_12, &UnredirectGlobals_23);
  make__build__unredirect_output_7_p_0(UnredirectGlobals_23, ModuleName_16, ErrorStream_14, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_44_44);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140make.module_dep_file.make_module_dependencies_fatal_error\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_2[6])), ModuleName_16, &ErrFileName_24);
  mercury__io__file__remove_file_4_p_0(ErrFileName_24, &Var_25);
  ModuleDepMap0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 0))));
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_26, &ModuleDepMap_27);
  Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 1))));
  Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 2))));
  Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 3))));
  Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 4))));
  Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 5))));
  Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 6))));
  Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 7))));
  Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 8))));
  Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 9))));
  Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 10))));
  Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 11))));
  Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 12))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 13)));
  Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 14))));
  Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 15))));
  Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 16))));
  Var_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 17))));
  Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 18))));
  Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 19))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_29 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDepMap_27));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_95));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_96));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_97));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_98));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_99));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_100));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_101));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_102));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_103));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_104));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_105));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_106));
    MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_2);
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_109));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_110));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_111));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_112));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_113));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_114));
  }
}

static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2)
{
  if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ImportOrInclude_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) ImportOrInclude_10)) == (MR_Integer) 0))
    {
      MR_Word ImportingModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportOrInclude_10, (MR_Integer) 0))));
      MR_String Var_20;
      MR_String Var_23;

      Var_20 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_1);
      Var_23 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ImportingModuleName_12);
      mercury__io__write_string_3_p_0((MR_String) "** Module \140");
      mercury__io__write_string_3_p_0(Var_20);
      mercury__io__write_string_3_p_0((MR_String) "\' is imported by module \140");
      mercury__io__write_string_3_p_0(Var_23);
      mercury__io__write_string_3_p_0((MR_String) "\'.\n");
    }
    else
    {
      MR_Word IncludingModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportOrInclude_10, (MR_Integer) 0))));
      MR_String Var_29;
      MR_String Var_32;

      Var_29 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_1);
      Var_32 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(IncludingModuleName_13);
      mercury__io__write_string_3_p_0((MR_String) "** Module \140");
      mercury__io__write_string_3_p_0(Var_29);
      mercury__io__write_string_3_p_0((MR_String) "\' is included by module \140");
      mercury__io__write_string_3_p_0(Var_32);
      mercury__io__write_string_3_p_0((MR_String) "\'.\n");
    }
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
  MR_Word RebuildModuleDeps_6,
  MR_String ModuleDepsFile_7,
  MR_String Msg_8)
{
  MR_String RebuildSuffix_10;

  switch (RebuildModuleDeps_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      RebuildSuffix_10 = (MR_String) "";
      break;
    case (MR_Integer) 0:
      RebuildSuffix_10 = (MR_String) " ...rebuilding";
      break;
  }
  mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
  mercury__io__write_string_3_p_0(ModuleDepsFile_7);
  mercury__io__write_string_3_p_0((MR_String) "\': ");
  mercury__io__write_string_3_p_0(Msg_8);
  mercury__io__write_string_3_p_0(RebuildSuffix_10);
  mercury__io__write_string_3_p_0((MR_String) "\n");
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
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_27;

  make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_27);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_27));
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_27;

  make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_27));
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
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  MR_bool succeeded;
  MR_Word ModuleSummary_21;

  succeeded = make__module_dep_file__parse_module_summary_file_4_p_0(ModuleName_14, ModuleDir_15, Term_17, &ModuleSummary_21);
  if (succeeded)
  {
    MR_Word ModuleDepInfo_22 = (MR_Word) ((MR_Word) (ModuleSummary_21));
    MR_Word MaybeModuleDepInfo_23;
    MR_String Var_120;

    {
      MaybeModuleDepInfo_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_23, 0) = ((MR_Box) (ModuleDepInfo_22));
    }
    Var_120 = mercury__dir__this_directory_0_f_0();
    succeeded = (strcmp(ModuleDir_15, Var_120) == 0);
    if (succeeded)
    {
      MR_String SourceFileName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleSummary_21, (MR_Integer) 0))));
      MR_Word SourceFileExists_25;
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleSummary_21, (MR_Integer) 5))));

      make__module_dep_file__check_regular_file_exists_4_p_0(SourceFileName_24, &SourceFileExists_25);
      if ((SourceFileExists_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ModuleDepMap0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 0))));
        MR_Word ModuleDepMap_29;
        MR_Word NestedSubModules_31;
        MR_Word STATE_VARIABLE_Info_39_39;
        MR_Word Var_40;
        MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 1))));
        MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 2))));
        MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 3))));
        MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 4))));
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 5))));
        MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 6))));
        MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 7))));
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 8))));
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 9))));
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 10))));
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 11))));
        MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 12))));
        MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 14))));
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 15))));
        MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 16))));
        MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 17))));
        MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 18))));
        MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 19))));
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 13)));
        MR_Box conv2_STATE_VARIABLE_Info_34;
        MR_Box conv1_STATE_VARIABLE_IO_36;

        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (MaybeModuleDepInfo_23)), ModuleDepMap0_28, &ModuleDepMap_29);
        {
          STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (ModuleDepMap_29));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 5) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 6) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 7) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 8) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 9) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 10) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 11) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 12) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 13) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 14) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 15) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 16) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 17) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 18) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, 19) = ((MR_Box) (Var_77));
        }
        NestedSubModules_31 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(Var_50);
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Globals_12));
          MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (SearchDirs_13));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, NestedSubModules_31, ((MR_Box) (STATE_VARIABLE_Info_39_39)), &conv2_STATE_VARIABLE_Info_34, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36);
        *STATE_VARIABLE_Info_34 = ((MR_Word) (conv2_STATE_VARIABLE_Info_34));
        succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*STATE_VARIABLE_Info_34, NestedSubModules_31);
        if (succeeded)
          *Result_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_2[2]));
        else
          *Result_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Var_27;

        mercury__io__file__remove_file_4_p_0(ModuleDepFile_16, &Var_27);
        *Result_18 = SourceFileExists_25;
        *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
      }
    }
    else
    {
      MR_Word ModuleDepMap0_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 0))));
      MR_Word ModuleDepMap_199;
      MR_Word MaybeTopModule_200;
      MR_Word NestedSubModules_201;
      MR_Word STATE_VARIABLE_Info_39_203;
      MR_Word Var_204;
      MR_Word Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 1))));
      MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 2))));
      MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 3))));
      MR_Word Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 4))));
      MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 5))));
      MR_Word Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 6))));
      MR_Word Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 7))));
      MR_Word Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 8))));
      MR_Word Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 9))));
      MR_Word Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 10))));
      MR_Word Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 11))));
      MR_Word Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 12))));
      MR_Word Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 14))));
      MR_Word Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 15))));
      MR_Word Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 16))));
      MR_Integer Var_223 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 17))));
      MR_Word Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 18))));
      MR_Word Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 19))));
      MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 13)));
      MR_Box conv5_STATE_VARIABLE_Info_34;
      MR_Box conv4_STATE_VARIABLE_IO_36;

      mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (MaybeModuleDepInfo_23)), ModuleDepMap0_198, &ModuleDepMap_199);
      {
        STATE_VARIABLE_Info_39_203 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 0) = ((MR_Box) (ModuleDepMap_199));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 1) = ((MR_Box) (Var_206));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 2) = ((MR_Box) (Var_207));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 3) = ((MR_Box) (Var_208));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 4) = ((MR_Box) (Var_209));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 5) = ((MR_Box) (Var_210));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 6) = ((MR_Box) (Var_211));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 7) = ((MR_Box) (Var_212));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 8) = ((MR_Box) (Var_213));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 9) = ((MR_Box) (Var_214));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 10) = ((MR_Box) (Var_215));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 11) = ((MR_Box) (Var_216));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 12) = ((MR_Box) (Var_217));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 13) = (MR_Box) (packed_word_2);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 14) = ((MR_Box) (Var_220));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 15) = ((MR_Box) (Var_221));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 16) = ((MR_Box) (Var_222));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 17) = ((MR_Box) (Var_223));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 18) = ((MR_Box) (Var_224));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_203, 19) = ((MR_Box) (Var_225));
      }
      MaybeTopModule_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleSummary_21, (MR_Integer) 5))));
      NestedSubModules_201 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_200);
      {
        Var_204 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_204, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_204, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
        MR_hl_field(MR_mktag(0), Var_204, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_204, 3) = ((MR_Box) (Globals_12));
        MR_hl_field(MR_mktag(0), Var_204, 4) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_204, 5) = ((MR_Box) (SearchDirs_13));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_204, NestedSubModules_201, ((MR_Box) (STATE_VARIABLE_Info_39_203)), &conv5_STATE_VARIABLE_Info_34, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_36);
      *STATE_VARIABLE_Info_34 = ((MR_Word) (conv5_STATE_VARIABLE_Info_34));
      succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*STATE_VARIABLE_Info_34, NestedSubModules_201);
      if (succeeded)
        *Result_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_2[2]));
      else
        *Result_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
  {
    *Result_18 = (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_2[3]));
    *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
  }
}

static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
  MR_String FileName_5,
  MR_Word * FileExists_6)
{
  MR_Word ResFileType_9;

  mercury__io__file__file_type_5_p_0((MR_Integer) 1, FileName_5, &ResFileType_9);
  if (((MR_tag((MR_Word) ResFileType_9)) == (MR_Integer) 1))
  {
    MR_Word Error_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResFileType_9, (MR_Integer) 0))));
    MR_String Var_17;
    MR_String Var_18;
    MR_String Var_20;

    Var_20 = mercury__io__error_message_1_f_0(Error_11);
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_20);
    Var_17 = mercury__string__f_43_43_2_f_0(FileName_5, Var_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *FileExists_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
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
          MR_String Var_15;

          Var_15 = mercury__string__f_43_43_2_f_0(FileName_5, (MR_String) ": not a regular file");
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *FileExists_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
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

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
  void * env_ptr_arg)
{
  struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
  void * env_ptr_arg)
{
  struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5 = ((MR_Word) ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5));
  make__module_dep_file__some_bad_module_dependency_2_p_0_2(env_ptr);
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
  void * env_ptr_arg)
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
    MR_Word Var_27;
    MR_Unsigned packed_word_0;
    MR_Box conv1_Var_30;

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
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 19))));
    (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7 = (MR_Word) ((MR_Unsigned) 0U);
    (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_29_29 = (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0);
    (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_28_28, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_29_29, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_6, ((MR_Box) ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &conv1_Var_30);
    if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
    {
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_30 = ((MR_Word) (conv1_Var_30));
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
    {
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = make__make_info____Unify____maybe_module_dep_info_0_0((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_30);
      if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
        make__module_dep_file__some_bad_module_dependency_2_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
  void * env_ptr_arg)
{
  struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0) == 0)
    {
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_28_28 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      mercury__list__member_2_p_1((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_28_28, &(env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, env_ptr);
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
  MR_Word Info_3,
  MR_Word ModuleNames_4)
{
  struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s env;

  (env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3 = Info_3;
  (env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4 = ModuleNames_4;
  make__module_dep_file__some_bad_module_dependency_2_p_0_4(&env);
  return (env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__671__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__666__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_7;

  succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__710__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_7));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0(
  MR_Word ModuleName_5,
  MR_String ModuleDir_6,
  MR_Word Term_7,
  MR_Word * ModuleSummary_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_Word TypeCtorInfo_75_75;
  MR_Word TypeCtorInfo_78_78;
  MR_Word TypeCtorInfo_81_81;
  MR_Word TypeCtorInfo_84_84;
  MR_Word TypeCtorInfo_90_90;
  MR_Word TypeCtorInfo_92_92;
  MR_Word TypeCtorInfo_6_98;
  MR_Word TypeInfo_for_U_107;
  MR_Word TypeInfo_10_108;
  MR_Word ModuleArgs_9;
  MR_Word VersionNumberTerm_10;
  MR_Word SourceFileTerm_11;
  MR_Word SourceFileModuleNameTerm_12;
  MR_Word ParentsTerm_13;
  MR_Word IntDepsTerm_14;
  MR_Word ImpDepsTerm_15;
  MR_Word ChildrenTerm_16;
  MR_Word NestedSubModulesTerm_17;
  MR_Word FactDepsTerm_18;
  MR_Word ForeignLanguagesTerm_19;
  MR_Word ForeignImportsTerm_20;
  MR_Word ContainsForeignExportTerm_21;
  MR_Word ModuleArgsTail_23;
  MR_Word Version_24;
  MR_String SourceFileName_25;
  MR_Word SourceFileModuleName_26;
  MR_Word Parents_27;
  MR_Word IntDeps_28;
  MR_Word ImpDeps_29;
  MR_Word Children_30;
  MR_Word NestedSubModules0_31;
  MR_Word FactDeps_32;
  MR_Word ForeignLanguages_33;
  MR_Word ForeignImports_34;
  MR_Word ContainsForeignExport_35;
  MR_Word ForeignIncludes_36;
  MR_Word MaybeTopModule_38;
  MR_Word ParentsSet_39;
  MR_Word AncestorsSet_40;
  MR_Word ContainsForeignCode_41;
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
  MR_Word Var_65;
  MR_String Var_66;
  MR_String Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_String Var_93;
  MR_Word Var_96;
  MR_Integer Int_97;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word P_104;
  MR_Word ArgTerms_105;
  MR_String Var_106;
  MR_String Var_109;
  MR_Word Var_111;

  if (succeeded)
  {
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
    ModuleArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_93 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "module", Var_93) == 0);
      if (succeeded)
      {
        succeeded = (ModuleArgs_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VersionNumberTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgs_9, (MR_Integer) 0))));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgs_9, (MR_Integer) 1))));
          succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SourceFileTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SourceFileModuleNameTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
              Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
              succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParentsTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 1))));
                succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  IntDepsTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
                  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
                  succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ImpDepsTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
                    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
                    succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ChildrenTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))));
                      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 1))));
                      succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NestedSubModulesTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0))));
                        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 1))));
                        succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FactDepsTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0))));
                          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1))));
                          succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ForeignLanguagesTerm_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 0))));
                            Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 1))));
                            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ForeignImportsTerm_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 0))));
                              Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 1))));
                              succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                ContainsForeignExportTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
                                Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 1))));
                                succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ModuleArgsTail_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 1))));
                                  TypeCtorInfo_6_98 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                  succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeCtorInfo_6_98, VersionNumberTerm_10, &Int_97);
                                  if (succeeded)
                                  {
                                    switch (Int_97) {
                                      default:
                                        succeeded = MR_FALSE;
                                        break;
                                      case (MR_Integer) 1:
                                        {
                                          Version_24 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                        break;
                                      case (MR_Integer) 2:
                                        {
                                          Version_24 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        break;
                                    }
                                    if (succeeded)
                                    {
                                      succeeded = ((MR_tag((MR_Word) SourceFileTerm_11)) == (MR_Integer) 0);
                                      if (succeeded)
                                      {
                                        Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SourceFileTerm_11, (MR_Integer) 0))));
                                        Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SourceFileTerm_11, (MR_Integer) 1))));
                                        succeeded = (Var_101 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = ((MR_tag((MR_Word) Var_100)) == (MR_Integer) 2);
                                          if (succeeded)
                                          {
                                            SourceFileName_25 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_100, (MR_Integer) 0))));
                                            TypeCtorInfo_75_75 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                            succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_75_75, SourceFileModuleNameTerm_12, &SourceFileModuleName_26);
                                            if (succeeded)
                                            {
                                              TypeInfo_for_U_107 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                                              P_104 = (MR_Word) (&make__module_dep_file_scalar_common_4[5]);
                                              Var_106 = (MR_String) "{}";
                                              succeeded = ((MR_tag((MR_Word) ParentsTerm_13)) == (MR_Integer) 0);
                                              if (succeeded)
                                              {
                                                Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParentsTerm_13, (MR_Integer) 0))));
                                                ArgTerms_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParentsTerm_13, (MR_Integer) 1))));
                                                succeeded = ((MR_tag((MR_Word) Var_111)) == (MR_Integer) 0);
                                                if (succeeded)
                                                {
                                                  Var_109 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 0))));
                                                  succeeded = (strcmp(Var_106, Var_109) == 0);
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_10_108 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
                                                    succeeded = mercury__list__map_3_p_2(TypeInfo_10_108, TypeInfo_for_U_107, P_104, ArgTerms_105, &Parents_27);
                                                    if (succeeded)
                                                    {
                                                      succeeded = make__module_dep_file__sym_names_term_2_p_0(IntDepsTerm_14, &IntDeps_28);
                                                      if (succeeded)
                                                      {
                                                        succeeded = make__module_dep_file__sym_names_term_2_p_0(ImpDepsTerm_15, &ImpDeps_29);
                                                        if (succeeded)
                                                        {
                                                          succeeded = make__module_dep_file__sym_names_term_2_p_0(ChildrenTerm_16, &Children_30);
                                                          if (succeeded)
                                                          {
                                                            succeeded = make__module_dep_file__sym_names_term_2_p_0(NestedSubModulesTerm_17, &NestedSubModules0_31);
                                                            if (succeeded)
                                                            {
                                                              TypeCtorInfo_78_78 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                                                              succeeded = make__module_dep_file__braces_term__ho5_3_p_0(FactDepsTerm_18, &FactDeps_32);
                                                              if (succeeded)
                                                              {
                                                                TypeCtorInfo_81_81 = (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0);
                                                                succeeded = make__module_dep_file__braces_term__ho4_3_p_0(ForeignLanguagesTerm_19, &ForeignLanguages_33);
                                                                if (succeeded)
                                                                {
                                                                  TypeCtorInfo_84_84 = (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0);
                                                                  succeeded = make__module_dep_file__braces_term__ho3_3_p_0(ForeignImportsTerm_20, &ForeignImports_34);
                                                                  if (succeeded)
                                                                  {
                                                                    succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(ContainsForeignExportTerm_21, &ContainsForeignExport_35);
                                                                    if (succeeded)
                                                                    {
                                                                      if ((ModuleArgsTail_23 == (MR_Word) ((MR_Unsigned) 0U)))
                                                                      {
                                                                        succeeded = (Version_24 == (MR_Integer) 0);
                                                                        if (succeeded)
                                                                        {
                                                                          ForeignIncludes_36 = (MR_Word) ((MR_Unsigned) 0U);
                                                                          succeeded = MR_TRUE;
                                                                        }
                                                                      }
                                                                      else
                                                                      {
                                                                        MR_Word ForeignIncludesTerm_37;
                                                                        MR_Word Var_58;

                                                                        succeeded = (Version_24 == (MR_Integer) 1);
                                                                        if (succeeded)
                                                                        {
                                                                          ForeignIncludesTerm_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgsTail_23, (MR_Integer) 0))));
                                                                          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleArgsTail_23, (MR_Integer) 1))));
                                                                          succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
                                                                          if (succeeded)
                                                                            succeeded = make__module_dep_file__braces_term__ho2_3_p_0(ForeignIncludesTerm_37, &ForeignIncludes_36);
                                                                        }
                                                                      }
                                                                      if (succeeded)
                                                                      {
                                                                        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_5, SourceFileModuleName_26);
                                                                        if (succeeded)
                                                                        {
                                                                          MR_Word Var_60;

                                                                          Var_60 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedSubModules0_31);
                                                                          {
                                                                            MaybeTopModule_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                                                            MR_hl_field(MR_mktag(1), MaybeTopModule_38, 0) = ((MR_Box) (Var_60));
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          MR_Word Var_61;

                                                                          MaybeTopModule_38 = (MR_Word) ((MR_Unsigned) 0U);
                                                                          {
                                                                            Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                                                            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[5]));
                                                                            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (make__module_dep_file__parse_module_summary_file_4_p_0_2));
                                                                            MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                                                                            MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (NestedSubModules0_31));
                                                                            MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                                                                          }
                                                                          mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140make.module_dep_file.parse_module_summary_file\'/4", (MR_String) "NestedSubModules0 != []");
                                                                        }
                                                                        TypeCtorInfo_90_90 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
                                                                        mercury__set__list_to_set_2_p_0(TypeCtorInfo_90_90, Parents_27, &ParentsSet_39);
                                                                        AncestorsSet_40 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_5);
                                                                        Var_66 = (MR_String) "predicate \140make.module_dep_file.parse_module_summary_file\'/4";
                                                                        Var_67 = (MR_String) "ParentsSet != AncestorsSet";
                                                                        {
                                                                          Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                                                          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[6]));
                                                                          MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (make__module_dep_file__parse_module_summary_file_4_p_0_3));
                                                                          MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                                                                          MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (ParentsSet_39));
                                                                          MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (AncestorsSet_40));
                                                                        }
                                                                        mercury__require__expect_3_p_0(Var_65, Var_66, Var_67);
                                                                        Var_68 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_81_81, ForeignLanguages_33);
                                                                        {
                                                                          ContainsForeignCode_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                                                          MR_hl_field(MR_mktag(1), ContainsForeignCode_41, 0) = ((MR_Box) (Var_68));
                                                                        }
                                                                        Var_69 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_90_90, Children_30);
                                                                        Var_70 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_90_90, IntDeps_28);
                                                                        Var_71 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_90_90, ImpDeps_29);
                                                                        Var_72 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_78_78, FactDeps_32);
                                                                        Var_73 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_84_84, ForeignImports_34);
                                                                        TypeCtorInfo_92_92 = (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0);
                                                                        Var_74 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_92_92, ForeignIncludes_36);
                                                                        {
                                                                          MR_Word base;
                                                                          base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
                                                                          *ModuleSummary_8 = base;
                                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SourceFileName_25));
                                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleDir_6));
                                                                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SourceFileModuleName_26));
                                                                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ModuleName_5));
                                                                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_69));
                                                                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeTopModule_38));
                                                                          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_70));
                                                                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_71));
                                                                          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_72));
                                                                          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_73));
                                                                          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_74));
                                                                          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ContainsForeignCode_41));
                                                                          MR_hl_field(MR_mktag(0), base, 12) = (MR_Box) ((MR_Unsigned) (ContainsForeignExport_35));
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
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_10;
  MR_Word ArgTerms_7;
  MR_String Var_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[4]), ArgTerms_7, Args_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_10;
  MR_Word ArgTerms_7;
  MR_String Var_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&make__module_dep_file_scalar_common_4[3]), ArgTerms_7, Args_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_FIMSpec_4;

  succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_FIMSpec_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_FIMSpec_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_10;
  MR_Word ArgTerms_7;
  MR_String Var_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&make__module_dep_file_scalar_common_4[2]), ArgTerms_7, Args_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
  MR_Word Term_5,
  MR_Word * Args_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_10;
  MR_Word ArgTerms_7;
  MR_String Var_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_11) == 0);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__module_dep_file_scalar_common_4[1]), ArgTerms_7, Args_6);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
  MR_Word Term_3,
  MR_Word * ContainsForeignExport_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word TypeInfo_8_8;
  MR_String Atom_5;
  MR_Word Var_7;
  MR_Word Var_10;

  if (succeeded)
  {
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
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

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_7;

  succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__710__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_7));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
  MR_Word Term_3,
  MR_Word * SymNames_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word TypeInfo_10_14;
  MR_Word ArgTerms_11;
  MR_String Var_15;
  MR_Word Var_17;

  if (succeeded)
  {
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    ArgTerms_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "{}", Var_15) == 0);
      if (succeeded)
      {
        TypeInfo_10_14 = (MR_Word) (&make__module_dep_file_scalar_common_1[1]);
        succeeded = mercury__list__map_3_p_2(TypeInfo_10_14, (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_4[0]), ArgTerms_11, SymNames_4);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__module_dep_file____Compare____module_dep_file_version_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
