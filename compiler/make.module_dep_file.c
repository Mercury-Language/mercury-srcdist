/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2021-12-31
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
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.md5.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
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
make__module_dep_file__IntroducedFrom__func__make_module_dependencies__883__1_1_f_0(
  MR_Word LambdaHeadVar__1_74);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__705__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__666__1_2_p_0(
  MR_Word ParentsSet_39,
  MR_Word AncestorsSet_40);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__661__1_2_p_0(
  MR_Word NestedSubModules0_31,
  MR_Word HeadVar__2_64);

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__274__1_1_f_0(
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
make__module_dep_file__make_info_add_module_and_imports_as_dep_3_p_0(
  MR_Word BurdenedAugCompUnit_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

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
  MR_Word BurdenedAugCompUnit_6);

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
  MR_Word AugCompUnit_10);

static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
  MR_Word ContainsForeignExport_3,
  MR_String * ContainsForeignExportStr_4);

static MR_Box MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(
  MR_Word SymNames_3);

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
make__module_dep_file__make_module_dependencies_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58);

static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2);

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
make__module_dep_file__parse_module_summary_file_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0_1(
  MR_Box closure_arg);

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
make__module_dep_file__string_term_2_p_0(
  MR_Word Term_3,
  MR_String * String_4);

static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
  MR_Word Term_4,
  MR_String * Atom_5,
  MR_Word * Args_6);

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

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[13][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[1][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[1][10];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[1][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[2][7];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][8];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[8][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "unexpected eof"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "error in nested submodules"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "failed to parse term"))
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".err"))))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[14][5] = {
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
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
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
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_burdened_aug_comp_unit_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[1])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[2])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[7])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[8])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_7[0])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[9])),
    ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[10])),
    ((MR_Box) (make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[11])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[12])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[13])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[1][11] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[1][10] = {
  /* row 0 */
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_burdened_aug_comp_unit_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][9] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_burdened_aug_comp_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
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
  {     make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0 },
  {     make__module_dep_file__make__module_dep_file__enum_ordinal_ordered_module_dep_file_version_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0,

};

static MR_Word MR_CALL 
make__module_dep_file__IntroducedFrom__func__make_module_dependencies__883__1_1_f_0(
  MR_Word LambdaHeadVar__1_74)
{
  {
    MR_Word LambdaHeadVar__2_75;
    MR_Word ACU_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_74, (MR_Integer) 1))));

    LambdaHeadVar__2_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ACU_136, (MR_Integer) 0))));
    return LambdaHeadVar__2_75;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__705__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_6, HeadVar__2_7);
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__666__1_2_p_0(
  MR_Word ParentsSet_39,
  MR_Word AncestorsSet_40)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParentsSet_39, AncestorsSet_40);
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__661__1_2_p_0(
  MR_Word NestedSubModules0_31,
  MR_Word HeadVar__2_64)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (NestedSubModules0_31)), ((MR_Box) (HeadVar__2_64)));
    return succeeded;
  }
}

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__274__1_1_f_0(
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
    MR_Word Var_16;
    MR_Word Var_19;

    Var_19 = make__make_module_dep_file_extension_0_f_0();
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_19));
    }
    make__util__make_remove_module_file_8_p_0(Globals_7, (MR_Integer) 75, ModuleName_8, Var_16, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[1]));
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
  make__util__make_remove_target_file_by_name_8_p_0(Globals_7, (MR_Integer) 71, ModuleName_8, (MR_Word) ((MR_Unsigned) 20U), STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (make__module_dep_file__cleanup_int3_files_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Globals_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, ModuleNames_8, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv2_STATE_VARIABLE_Info_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14);
    *STATE_VARIABLE_Info_12 = ((MR_Word) (conv2_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_dep_file__make_info_add_module_and_imports_as_dep_3_p_0(
  MR_Word BurdenedAugCompUnit_4,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word AugCompUnit_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_4, (MR_Integer) 1))));
    MR_Word ParseTreeModuleSrc_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 0))));
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 0))));
    MR_Word ModuleDepInfo_9 = (MR_Word) ((MR_Word) (BurdenedAugCompUnit_4));
    MR_Word MaybeModuleDepInfo_10;
    MR_Word ModuleDeps0_11;
    MR_Word ModuleDeps_12;
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
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Integer Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Unsigned packed_word_1;

    {
      MaybeModuleDepInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeModuleDepInfo_10, 0) = ((MR_Box) (ModuleDepInfo_9));
    }
    ModuleDeps0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_8)), ((MR_Box) (MaybeModuleDepInfo_10)), ModuleDeps0_11, &ModuleDeps_12);
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 4))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 5))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 6))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 7))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 8))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 9))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 10))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 11))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 13)));
    Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 14))));
    Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 15))));
    Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 16))));
    Var_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 17))));
    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 18))));
    Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 19))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDeps_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_102));
    }
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
  MR_Word * FIMSpec_4)
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

static MR_String MR_CALL 
make__module_dep_file__foreign_include_file_info_to_string_1_f_0(
  MR_Word ForeignInclude_3)
{
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
}

static MR_String MR_CALL 
make__module_dep_file__fim_spec_to_string_1_f_0(
  MR_Word FIMSpec_3)
{
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
}

void MR_CALL 
make__module_dep_file__write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word BurdenedAugCompUnit0_6)
{
  {
    MR_Word Baggage0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedAugCompUnit0_6, (MR_Integer) 0))));
    MR_Word AugCompUnit0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedAugCompUnit0_6, (MR_Integer) 1))));
    MR_String SourceFileName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Baggage0_8, (MR_Integer) 0))));
    MR_Word SourceFileModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage0_8, (MR_Integer) 2))));
    MR_Word MaybeTopModule_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage0_8, (MR_Integer) 3))));
    MR_Word Specs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage0_8, (MR_Integer) 6))));
    MR_Word ParseTreeModuleSrc_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit0_9, (MR_Integer) 0))));
    MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_18, (MR_Integer) 0))));
    MR_Word GrabbedFileMap_29;
    MR_Word Errors_30;
    MR_Word Baggage_31;
    MR_Word AncestorIntSpecs_32;
    MR_Word DirectIntSpecs_33;
    MR_Word IndirectIntSpecs_34;
    MR_Word PlainOpts_35;
    MR_Word TransOpts_36;
    MR_Word IntForOptSpecs_37;
    MR_Word TypeRepnSpecs_38;
    MR_Word VersionNumbers_39;
    MR_Word AugCompUnit_40;
    MR_Word BurdenedAugCompUnit_41;
    MR_Word Var_44;
    MR_String Var_45;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (ParseTreeModuleSrc_18));
    }
    GrabbedFileMap_29 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_28)), ((MR_Box) (Var_44)));
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), &Errors_30);
    Var_45 = mercury__dir__this_directory_0_f_0();
    {
      Baggage_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Baggage_31, 0) = ((MR_Box) (SourceFileName_10));
      MR_hl_field(MR_mktag(0), Baggage_31, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Baggage_31, 2) = ((MR_Box) (SourceFileModuleName_12));
      MR_hl_field(MR_mktag(0), Baggage_31, 3) = ((MR_Box) (MaybeTopModule_13));
      MR_hl_field(MR_mktag(0), Baggage_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Baggage_31, 5) = ((MR_Box) (GrabbedFileMap_29));
      MR_hl_field(MR_mktag(0), Baggage_31, 6) = ((MR_Box) (Specs_16));
      MR_hl_field(MR_mktag(0), Baggage_31, 7) = ((MR_Box) (Errors_30));
    }
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), &AncestorIntSpecs_32);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), &DirectIntSpecs_33);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), &IndirectIntSpecs_34);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), &PlainOpts_35);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), &TransOpts_36);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), &IntForOptSpecs_37);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0), &TypeRepnSpecs_38);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), &VersionNumbers_39);
    {
      AugCompUnit_40 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AugCompUnit_40, 0) = ((MR_Box) (ParseTreeModuleSrc_18));
      MR_hl_field(MR_mktag(0), AugCompUnit_40, 1) = ((MR_Box) (AncestorIntSpecs_32));
      MR_hl_field(MR_mktag(0), AugCompUnit_40, 2) = ((MR_Box) (DirectIntSpecs_33));
      MR_hl_field(MR_mktag(0), AugCompUnit_40, 3) = ((MR_Box) (IndirectIntSpecs_34));
      MR_hl_field(MR_mktag(0), AugCompUnit_40, 4) = ((MR_Box) (PlainOpts_35));
      MR_hl_field(MR_mktag(0), AugCompUnit_40, 5) = ((MR_Box) (TransOpts_36));
      MR_hl_field(MR_mktag(0), AugCompUnit_40, 6) = ((MR_Box) (IntForOptSpecs_37));
      MR_hl_field(MR_mktag(0), AugCompUnit_40, 7) = ((MR_Box) (TypeRepnSpecs_38));
      MR_hl_field(MR_mktag(0), AugCompUnit_40, 8) = ((MR_Box) (VersionNumbers_39));
    }
    {
      BurdenedAugCompUnit_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_41, 0) = ((MR_Box) (Baggage_31));
      MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_41, 1) = ((MR_Box) (AugCompUnit_40));
    }
    make__module_dep_file__do_write_module_dep_file_4_p_0(Globals_5, BurdenedAugCompUnit_41);
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word BurdenedAugCompUnit_6)
{
  {
    MR_Word Baggage_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_6, (MR_Integer) 0))));
    MR_Word AugCompUnit_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_6, (MR_Integer) 1))));
    MR_Word ParseTreeModuleSrc_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_9, (MR_Integer) 0))));
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_10, (MR_Integer) 0))));
    MR_String ProgDepFile_12;
    MR_Word ProgDepResult_13;
    MR_Word Var_21;
    MR_Word Var_23;

    Var_23 = make__make_module_dep_file_extension_0_f_0();
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_23));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_5, (MR_String) "predicate \140make.module_dep_file.do_write_module_dep_file\'/4", (MR_Integer) 0, Var_21, ModuleName_11, &ProgDepFile_12);
    mercury__io__open_output_4_p_0(ProgDepFile_12, &ProgDepResult_13);
    if (((MR_tag((MR_Word) ProgDepResult_13)) == (MR_Integer) 1))
    {
      MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProgDepResult_13, (MR_Integer) 0))));
      MR_String Msg_16;

      mercury__io__error_message_2_p_0(Error_15, &Msg_16);
      mercury__io__write_string_3_p_0((MR_String) "Error opening ");
      mercury__io__write_string_3_p_0(ProgDepFile_12);
      mercury__io__write_string_3_p_0((MR_String) " for output: ");
      mercury__io__write_string_3_p_0(Msg_16);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word ProgDepStream_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgDepResult_13, (MR_Integer) 0))));

      make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0(ProgDepStream_14, Globals_5, Baggage_8, AugCompUnit_9);
      mercury__io__close_output_3_p_0(ProgDepStream_14);
    }
  }
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_Str_4;

    conv2_Str_4 = make__module_dep_file__foreign_include_file_info_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Str_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_Str_4;

    conv1_Str_4 = make__module_dep_file__fim_spec_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Str_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0(
  MR_Word Stream_7,
  MR_Word Globals_8,
  MR_Word Baggage_9,
  MR_Word AugCompUnit_10)
{
  {
    MR_bool succeeded;
    MR_Integer VersionNumber_13;
    MR_String SourceFileName_14;
    MR_Word SourceFileModuleName_15;
    MR_String SourceFileModuleNameStr_16;
    MR_Word ParseTreeModuleSrc_17;
    MR_Word ModuleName_18;
    MR_Word Ancestors_19;
    MR_Word IncludeMap_20;
    MR_Word Children_21;
    MR_Word IntDepSet_22;
    MR_Word ImpDepSet_23;
    MR_Word IntDeps_24;
    MR_Word ImpDeps_25;
    MR_Word MaybeTopModule_26;
    MR_Word NestedSubModules_27;
    MR_Word FactTableFilesSet_28;
    MR_Word FactTableFiles_29;
    MR_Word BackendLangsList_30;
    MR_Word BackendLangs_31;
    MR_Word CodeLangs_32;
    MR_Word ExportLangs_33;
    MR_Word BackendCodeLangs_34;
    MR_Word BackendExportLangs_35;
    MR_Word CodeLangStrs_36;
    MR_Word ContainsForeignExport_37;
    MR_Word FIMSpecs_38;
    MR_Word ForeignIncludeFiles_39;
    MR_Word FIMSpecStrs_40;
    MR_Word FIFOStrs_41;
    MR_String ContainsForeignExportStr_42;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_String Var_88;
    MR_String Var_91;
    MR_String Var_94;
    MR_String Var_97;
    MR_String Var_100;
    MR_String Var_103;
    MR_String Var_107;
    MR_String Var_111;
    MR_String Var_117;
    MR_String Var_238;

    make__module_dep_file__version_number_2_p_0((MR_Integer) 1, &VersionNumber_13);
    SourceFileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Baggage_9, (MR_Integer) 0))));
    SourceFileModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_9, (MR_Integer) 2))));
    SourceFileModuleNameStr_16 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(SourceFileModuleName_15);
    ParseTreeModuleSrc_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_10, (MR_Integer) 0))));
    ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_17, (MR_Integer) 0))));
    Var_45 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_18);
    Ancestors_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_45);
    IncludeMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_17, (MR_Integer) 4))));
    Children_21 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_20);
    parse_tree__module_imports__aug_compilation_unit_get_int_imp_deps_3_p_0(AugCompUnit_10, &IntDepSet_22, &ImpDepSet_23);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepSet_22, &IntDeps_24);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepSet_23, &ImpDeps_25);
    MaybeTopModule_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_9, (MR_Integer) 3))));
    NestedSubModules_27 = parse_tree__module_imports__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_26);
    parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_17, &FactTableFilesSet_28);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_28, &FactTableFiles_29);
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_8, &BackendLangsList_30);
    BackendLangs_31 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangsList_30);
    parse_tree__get_dependencies__get_foreign_code_langs_2_p_0(ParseTreeModuleSrc_17, &CodeLangs_32);
    parse_tree__get_dependencies__get_foreign_export_langs_2_p_0(ParseTreeModuleSrc_17, &ExportLangs_33);
    mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_31, CodeLangs_32, &BackendCodeLangs_34);
    mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_31, ExportLangs_33, &BackendExportLangs_35);
    Var_47 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendCodeLangs_34);
    CodeLangStrs_36 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[10]), Var_47);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendExportLangs_35);
    if (succeeded)
      ContainsForeignExport_37 = (MR_Integer) 1;
    else
      ContainsForeignExport_37 = (MR_Integer) 0;
    parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_17, &FIMSpecs_38);
    parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_17, &ForeignIncludeFiles_39);
    Var_49 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecs_38);
    FIMSpecStrs_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[11]), Var_49);
    Var_51 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFiles_39);
    FIFOStrs_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[12]), Var_51);
    make__module_dep_file__contains_foreign_export_to_string_2_p_0(ContainsForeignExport_37, &ContainsForeignExportStr_42);
    Var_88 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(Ancestors_19);
    Var_91 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(IntDeps_24);
    Var_94 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(ImpDeps_25);
    Var_97 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(Children_21);
    Var_100 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(NestedSubModules_27);
    Var_103 = mercury__string__join_list_2_f_0((MR_String) ", ", FactTableFiles_29);
    Var_107 = mercury__string__join_list_2_f_0((MR_String) ", ", CodeLangStrs_36);
    Var_111 = mercury__string__join_list_2_f_0((MR_String) ", ", FIMSpecStrs_40);
    Var_117 = mercury__string__join_list_2_f_0((MR_String) ", ", FIFOStrs_41);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "module(");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&make__module_dep_file_scalar_common_2[0]), VersionNumber_13, &Var_238);
    mercury__io__write_string_4_p_0(Stream_7, Var_238);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", \"");
    mercury__io__write_string_4_p_0(Stream_7, SourceFileName_14);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\",\n\t");
    mercury__io__write_string_4_p_0(Stream_7, SourceFileModuleNameStr_16);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n\t{");
    mercury__io__write_string_4_p_0(Stream_7, Var_88);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
    mercury__io__write_string_4_p_0(Stream_7, Var_91);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
    mercury__io__write_string_4_p_0(Stream_7, Var_94);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
    mercury__io__write_string_4_p_0(Stream_7, Var_97);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
    mercury__io__write_string_4_p_0(Stream_7, Var_100);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
    mercury__io__write_string_4_p_0(Stream_7, Var_103);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
    mercury__io__write_string_4_p_0(Stream_7, Var_107);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
    mercury__io__write_string_4_p_0(Stream_7, Var_111);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t");
    mercury__io__write_string_4_p_0(Stream_7, ContainsForeignExportStr_42);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n\tno_main,\n\t{");
    mercury__io__write_string_4_p_0(Stream_7, Var_117);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "}\n).\n");
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

static MR_Box MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(
  MR_Word SymNames_3)
{
  {
    MR_String Str_4;
    MR_Word Strs_5;

    Strs_5 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[9]), SymNames_3);
    Str_4 = mercury__string__join_list_2_f_0((MR_String) ", ", Strs_5);
    return Str_4;
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
  MR_Word * MaybeModuleDepInfo_10,
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
      MR_Box conv0_MaybeModuleDepInfo_10;

      Var_24 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_9);
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      AncestorsAndSelf_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_24, Var_25);
      make__module_dep_file__maybe_get_modules_dependencies_8_p_0(Globals_8, RebuildModuleDeps_13, AncestorsAndSelf_17, (MR_Integer) 0, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
      ModuleDepMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_21, (MR_Integer) 0))));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap_19, ((MR_Box) (ModuleName_9)), &conv0_MaybeModuleDepInfo_10);
      *MaybeModuleDepInfo_10 = ((MR_Word) (conv0_MaybeModuleDepInfo_10));
    }
    else
      make__module_dep_file__maybe_get_module_dependencies_8_p_0(Globals_8, RebuildModuleDeps_13, ModuleName_9, MaybeModuleDepInfo_10, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
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
      MR_Word STATE_VARIABLE_Info_36_36;
      MR_Word STATE_VARIABLE_Error_38_38;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Error_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

      switch (STATE_VARIABLE_Error_0_4) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeModuleDepInfo_25;

            make__module_dep_file__maybe_get_module_dependencies_8_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_20, &MaybeModuleDepInfo_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_36_36);
            if ((MaybeModuleDepInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Error_38_38 = (MR_Integer) 1;
            else
              STATE_VARIABLE_Error_38_38 = STATE_VARIABLE_Error_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleDepMap0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
            MR_Word ModuleDepMap_28;
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
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Integer Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Unsigned packed_word_1;

            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_20)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_27, &ModuleDepMap_28);
            Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
            Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))));
            Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));
            Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7))));
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 8))));
            Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 9))));
            Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 10))));
            Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 11))));
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 12))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 13)));
            Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 14))));
            Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 15))));
            Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 16))));
            Var_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 17))));
            Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 18))));
            Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 19))));
            {
              STATE_VARIABLE_Info_36_36 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 0) = ((MR_Box) (ModuleDepMap_28));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 1) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 2) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 3) = ((MR_Box) (Var_64));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 4) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 5) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 6) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 7) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 8) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 9) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 10) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 11) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 12) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 13) = (MR_Box) (packed_word_1);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 14) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 15) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 16) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 17) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 18) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_36_36, 19) = ((MR_Box) (Var_81));
            }
            STATE_VARIABLE_Error_38_38 = STATE_VARIABLE_Error_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ModuleNames_21;
      next_value_of_STATE_VARIABLE_Error_0_4 = STATE_VARIABLE_Error_38_38;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_36_36;
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
  {
    MR_bool succeeded;
    MR_Word ModuleDepMap0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
    MR_Word MaybeModuleDepInfo0_16;
    MR_Box conv0_MaybeModuleDepInfo0_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap0_15, ((MR_Box) (ModuleName_11)), &conv0_MaybeModuleDepInfo0_16);
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

    conv0_LambdaHeadVar__2_60 = make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__274__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_60));
    return wrapper_arg_2;
  }
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
    MR_Word STATE_VARIABLE_Info_100_100;
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
    Var_52 = make__make_module_dep_file_extension_0_f_0();
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_52));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140make.module_dep_file.do_get_module_dependencies\'/8", (MR_Integer) 1, Var_50, ModuleName_11, &DepFileName_17);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 689, &SearchDirs_18);
    make__util__get_file_timestamp_7_p_0(SearchDirs_18, DepFileName_17, &MaybeDepFileTimestamp_19, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_54_54);
    if (((MR_tag((MR_Word) MaybeDepFileTimestamp_19)) == (MR_Integer) 1))
    {
      MR_String SearchDirsString_30;
      MR_Word Var_57;
      MR_Word Var_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;

      Var_57 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[8]), SearchDirs_18);
      SearchDirsString_30 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_57);
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (DepFileName_17));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (SearchDirsString_30));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) ((MR_String) "Module dependencies file \'%s\' not found in directories %s.\n"));
        MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (Var_67));
      }
      make__util__debug_make_msg_4_p_0(Globals_9, Var_64);
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

            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_32, &ModuleDepMap1_33);
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
              STATE_VARIABLE_Info_100_100 = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 0) = ((MR_Box) (ModuleDepMap1_33));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 1) = ((MR_Box) (Var_171));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 2) = ((MR_Box) (Var_172));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 3) = ((MR_Box) (Var_173));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 4) = ((MR_Box) (Var_174));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 5) = ((MR_Box) (Var_175));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 6) = ((MR_Box) (Var_176));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 7) = ((MR_Box) (Var_177));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 8) = ((MR_Box) (Var_178));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 9) = ((MR_Box) (Var_179));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 10) = ((MR_Box) (Var_180));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 11) = ((MR_Box) (Var_181));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 12) = ((MR_Box) (Var_182));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 13) = (MR_Box) (packed_word_1);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 14) = ((MR_Box) (Var_185));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 15) = ((MR_Box) (Var_186));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 16) = ((MR_Box) (Var_187));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 17) = ((MR_Box) (Var_188));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 18) = ((MR_Box) (Var_189));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, 19) = ((MR_Box) (Var_190));
            }
          }
          break;
        case (MR_Integer) 0:
          make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_100_100);
          break;
      }
    }
    else
    {
      MR_Word Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDepFileTimestamp_19, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) MaybeSourceFileTimestamp_16)) == (MR_Integer) 1))
      {
        MR_Word STATE_VARIABLE_Info_76_76;
        MR_Word Var_78;
        MR_Word STATE_VARIABLE_MaybeModuleDepInfo_79_79;
        MR_Box conv1_STATE_VARIABLE_MaybeModuleDepInfo_79_79;
        MR_Word ModuleDepInfo0_23;
        MR_String ModuleDir_24;
        MR_String Var_246;

        make__module_dep_file__read_module_dependencies_search_7_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_76_76);
        Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_76_76, (MR_Integer) 0))));
        mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), Var_78, ((MR_Box) (ModuleName_11)), &conv1_STATE_VARIABLE_MaybeModuleDepInfo_79_79);
        STATE_VARIABLE_MaybeModuleDepInfo_79_79 = ((MR_Word) (conv1_STATE_VARIABLE_MaybeModuleDepInfo_79_79));
        succeeded = (STATE_VARIABLE_MaybeModuleDepInfo_79_79 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleDepInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeModuleDepInfo_79_79, (MR_Integer) 0))));
          parse_tree__module_imports__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo0_23, &ModuleDir_24);
          Var_246 = mercury__dir__this_directory_0_f_0();
          succeeded = (strcmp(ModuleDir_24, Var_246) == 0);
        }
        if (succeeded)
        {
          MR_String SourceFileName1_25;
          MR_Word MaybeSourceFileTimestamp1_26;
          MR_Word Var_80;
          MR_Word STATE_VARIABLE_Info_81_81;
          MR_String Var_83;

          parse_tree__module_imports__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo0_23, &SourceFileName1_25);
          Var_83 = mercury__dir__this_directory_0_f_0();
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          make__util__get_file_timestamp_7_p_0(Var_80, SourceFileName1_25, &MaybeSourceFileTimestamp1_26, STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_81_81);
          if (((MR_tag((MR_Word) MaybeSourceFileTimestamp1_26)) == (MR_Integer) 1))
          {
            MR_String Message_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeSourceFileTimestamp1_26, (MR_Integer) 0))));
            MR_Word Var_94;

            mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
            mercury__io__write_string_3_p_0(SourceFileName1_25);
            mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
            mercury__io__write_string_3_p_0(Message_28);
            mercury__io__write_string_3_p_0((MR_String) ".\n");
            Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_81_81, (MR_Integer) 15))));
            make__module_dep_file__maybe_write_importing_module_4_p_0(ModuleName_11, Var_94);
            STATE_VARIABLE_Info_100_100 = STATE_VARIABLE_Info_81_81;
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
              STATE_VARIABLE_Info_100_100 = STATE_VARIABLE_Info_81_81;
            else
              make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_100_100);
          }
        }
        else
          STATE_VARIABLE_Info_100_100 = STATE_VARIABLE_Info_76_76;
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
          make__module_dep_file__read_module_dependencies_no_search_7_p_0(Globals_9, RebuildModuleDeps_10, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_100_100);
        else
          make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_100_100);
      }
    }
    ModuleDepMap2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap2_34, ((MR_Box) (ModuleName_11)), &conv2_MaybeModuleDepInfo0_35);
    if (succeeded)
    {
      MaybeModuleDepInfo0_35 = ((MR_Word) (conv2_MaybeModuleDepInfo0_35));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_MaybeModuleDepInfo_37 = MaybeModuleDepInfo0_35;
      *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_100_100;
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
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap2_34, &ModuleDepMap_36);
      Var_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 1))));
      Var_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 2))));
      Var_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 3))));
      Var_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 4))));
      Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 5))));
      Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 6))));
      Var_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 7))));
      Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 8))));
      Var_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 9))));
      Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 10))));
      Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 11))));
      Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 12))));
      packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 13)));
      Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 14))));
      Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 15))));
      Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 16))));
      Var_229 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 17))));
      Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 18))));
      Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_100_100, (MR_Integer) 19))));
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

    libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 689, &SearchDirs_13);
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
    MR_Word Var_31;
    MR_Word Var_33;

    Var_33 = make__make_module_dep_file_extension_0_f_0();
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_33));
    }
    parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_9, (MR_String) "predicate \140make.module_dep_file.read_module_dependencies_2\'/8", Var_31, ModuleName_12, &ModuleDepFile_15);
    libs__file_util__search_for_file_returning_dir_and_stream_5_p_0(SearchDirs_11, ModuleDepFile_15, &MaybeDirAndStream_16);
    if (((MR_tag((MR_Word) MaybeDirAndStream_16)) == (MR_Integer) 1))
    {
      MR_Word Var_35;
      MR_String Msg_53 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDirAndStream_16, (MR_Integer) 0))));

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (RebuildModuleDeps_10));
        MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (ModuleDepFile_15));
        MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (Msg_53));
      }
      make__util__debug_make_msg_4_p_0(Globals_9, Var_35);
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
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDirAndStream_16, (MR_Integer) 0))));

      ModuleDir_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
      DepStream_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
      mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DepStream_18, &TermResult_19);
      mercury__io__close_input_3_p_0(DepStream_18);
      switch (MR_tag((MR_Word) TermResult_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Msg_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_2[1])), (MR_Integer) 0))));
            MR_String Var_47;
            MR_String Var_49;

            Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
            Var_47 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_49);
            make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(RebuildModuleDeps_10, Var_47, Msg_25);
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
            MR_String Msg_81;
            MR_String Var_84;
            MR_String Var_86;

            Msg_81 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", ParseError_23);
            Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
            Var_84 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_86);
            make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(RebuildModuleDeps_10, Var_84, Msg_81);
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
            MR_Word Result_98;
            MR_Word STATE_VARIABLE_Info_45_100;

            make__module_dep_file__read_module_dependencies_3_11_p_0(Globals_9, SearchDirs_11, ModuleName_12, ModuleDir_17, ModuleDepFile_15, Term_21, &Result_98, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_45_100);
            if ((Result_98 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_45_100;
            else
            {
              MR_String Msg_88 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_98, (MR_Integer) 0))));
              MR_String Var_89;
              MR_String Var_91;

              Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
              Var_89 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_91);
              make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(RebuildModuleDeps_10, Var_89, Msg_88);
              switch (RebuildModuleDeps_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_45_100;
                  break;
                case (MR_Integer) 0:
                  make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_45_100, STATE_VARIABLE_Info_27);
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
make__module_dep_file__make_module_dependencies_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Info_12;

    make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv7_STATE_VARIABLE_Info_12);
    *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
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
make__module_dep_file__make_module_dependencies_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_12;

    make__module_dep_file__cleanup_int3_files_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Info_12);
    *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Info_12));
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
    MR_Word conv2_STATE_VARIABLE_Info_14;

    make__module_dep_file__make_info_add_module_and_imports_as_dep_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_14));
  }
}

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__item_util__parse_tree_module_src_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
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
    MR_Word conv0_LambdaHeadVar__2_75;

    conv0_LambdaHeadVar__2_75 = make__module_dep_file__IntroducedFrom__func__make_module_dependencies__883__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_75));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58)
{
  {
    MR_bool succeeded;
    MR_Word MaybeErrorStream_11;
    MR_Word STATE_VARIABLE_Info_61_61;

    make__build__prepare_to_redirect_output_6_p_0(ModuleName_8, &MaybeErrorStream_11, STATE_VARIABLE_Info_0_57, &STATE_VARIABLE_Info_61_61);
    if ((MaybeErrorStream_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_58 = STATE_VARIABLE_Info_61_61;
    else
    {
      MR_Word ErrorStream_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeErrorStream_11, (MR_Integer) 0))));
      MR_Word OldOutputStream_13;
      MR_String SourceFileName_14;
      MR_Word ParseTreeSrc_16;
      MR_Word Specs0_17;
      MR_Word ReadModuleErrors_18;
      MR_Word FatalErrors_19;
      MR_Word Var_71;
      MR_Word Var_15;

      mercury__io__set_output_stream_4_p_0(ErrorStream_12, &OldOutputStream_13);
      parse_tree__read_modules__read_module_src_14_p_0(Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 1, ModuleName_8, (MR_Word) ((MR_Unsigned) 0U), &SourceFileName_14, (MR_Word) (&make__module_dep_file_scalar_common_2[4]), &Var_15, &ParseTreeSrc_16, &Specs0_17, &ReadModuleErrors_18);
      Var_71 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadModuleErrors_18, Var_71, &FatalErrors_19);
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_19);
      if (succeeded)
      {
        MR_Word UnredirectGlobals_23;
        MR_String ErrFileName_24;
        MR_Word ModuleDepMap0_26;
        MR_Word ModuleDepMap_27;
        MR_Word Var_118;
        MR_Word STATE_VARIABLE_Info_123_123;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_Integer Var_174;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Unsigned packed_word_1;

        parse_tree__error_util__write_error_specs_ignore_5_p_0(ErrorStream_12, Globals_7, Specs0_17);
        mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_22);
        mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
        mercury__io__write_string_3_p_0(SourceFileName_14);
        mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
        Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_61_61, (MR_Integer) 15))));
        make__module_dep_file__maybe_write_importing_module_4_p_0(ModuleName_8, Var_118);
        libs__globals__set_option_4_p_0((MR_Integer) 77, (MR_Word) (MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_2[6])), Globals_7, &UnredirectGlobals_23);
        make__build__unredirect_output_7_p_0(UnredirectGlobals_23, ModuleName_8, ErrorStream_12, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_123_123);
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.module_dep_file.make_module_dependencies\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_2[7])), ModuleName_8, &ErrFileName_24);
        mercury__io__remove_file_4_p_0(ErrFileName_24, &Var_25);
        ModuleDepMap0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 0))));
        Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 1))));
        Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 2))));
        Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 3))));
        Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 4))));
        Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 5))));
        Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 6))));
        Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 7))));
        Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 8))));
        Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 9))));
        Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 10))));
        Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 11))));
        Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 12))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 13)));
        Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 14))));
        Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 15))));
        Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 16))));
        Var_174 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 17))));
        Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 18))));
        Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_123, (MR_Integer) 19))));
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_8)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_26, &ModuleDepMap_27);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_58 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDepMap_27));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_157));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_158));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_159));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_161));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_162));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_163));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_164));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_171));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_172));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_173));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_174));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_175));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_176));
        }
      }
      else
      {
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadModuleErrors_18, ((MR_Box) ((MR_Integer) 1)));
        if (succeeded)
        {
          MR_Word UnredirectGlobals_365;
          MR_String ErrFileName_366;
          MR_Word ModuleDepMap0_368;
          MR_Word ModuleDepMap_369;
          MR_Word STATE_VARIABLE_Info_123_375;
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
          MR_Word Var_396;
          MR_Word Var_397;
          MR_Word Var_398;
          MR_Integer Var_399;
          MR_Word Var_400;
          MR_Word Var_401;
          MR_Word Var_299;
          MR_Word Var_300;
          MR_Unsigned packed_word_2;

          parse_tree__error_util__write_error_specs_ignore_5_p_0(ErrorStream_12, Globals_7, Specs0_17);
          mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_299);
          libs__globals__set_option_4_p_0((MR_Integer) 77, (MR_Word) (MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_2[6])), Globals_7, &UnredirectGlobals_365);
          make__build__unredirect_output_7_p_0(UnredirectGlobals_365, ModuleName_8, ErrorStream_12, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_123_375);
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140make.module_dep_file.make_module_dependencies\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_2[7])), ModuleName_8, &ErrFileName_366);
          mercury__io__remove_file_4_p_0(ErrFileName_366, &Var_300);
          ModuleDepMap0_368 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 0))));
          Var_382 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 1))));
          Var_383 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 2))));
          Var_384 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 3))));
          Var_385 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 4))));
          Var_386 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 5))));
          Var_387 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 6))));
          Var_388 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 7))));
          Var_389 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 8))));
          Var_390 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 9))));
          Var_391 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 10))));
          Var_392 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 11))));
          Var_393 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 12))));
          packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 13)));
          Var_396 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 14))));
          Var_397 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 15))));
          Var_398 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 16))));
          Var_399 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 17))));
          Var_400 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 18))));
          Var_401 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_123_375, (MR_Integer) 19))));
          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_8)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_368, &ModuleDepMap_369);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_58 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleDepMap_369));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_382));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_383));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_384));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_385));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_386));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_387));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_388));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_389));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_390));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_391));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_392));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_393));
            MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_2);
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_396));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_397));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_398));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_399));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_400));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_401));
          }
        }
        else
        {
          MR_Word Specs_28;
          MR_Word BurdenedAugCompUnitList_29;
          MR_Word ParseTreeModuleSrcs_30;
          MR_Word SubModuleNames_34;
          MR_Word VeryVerbose_37;
          MR_Word Succeeded_52;
          MR_Box CookieWMDF_53;
          MR_Word CleanupWMDF_54;
          MR_Word MadeTarget_56;
          MR_Word STATE_VARIABLE_Info_83_83;
          MR_Word STATE_VARIABLE_Info_96_96;
          MR_Word Var_99;
          MR_Word STATE_VARIABLE_Info_102_102;
          MR_Word STATE_VARIABLE_Info_106_106;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Box conv3_STATE_VARIABLE_Info_83_83;
          MR_Box conv6_STATE_VARIABLE_IO_100_100;
          MR_Word _Succeeded_55;
          MR_Box conv8_STATE_VARIABLE_Info_102_102;

          parse_tree__module_imports__parse_tree_src_to_burdened_aug_comp_unit_list_7_p_0(Globals_7, SourceFileName_14, ParseTreeSrc_16, ReadModuleErrors_18, Specs0_17, &Specs_28, &BurdenedAugCompUnitList_29);
          ParseTreeModuleSrcs_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_burdened_aug_comp_unit_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&make__module_dep_file_scalar_common_4[5]), BurdenedAugCompUnitList_29);
          SubModuleNames_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_4[6]), ParseTreeModuleSrcs_30);
          mercury__io__set_output_stream_4_p_0(ErrorStream_12, &Var_35);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
          parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_7, Specs_28);
          mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_36);
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_burdened_aug_comp_unit_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__module_dep_file_scalar_common_4[7]), BurdenedAugCompUnitList_29, ((MR_Box) (STATE_VARIABLE_Info_61_61)), &conv3_STATE_VARIABLE_Info_83_83);
          STATE_VARIABLE_Info_83_83 = ((MR_Word) (conv3_STATE_VARIABLE_Info_83_83));
          libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 71, &VeryVerbose_37);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ReadModuleErrors_18);
          if (succeeded)
          {
            MR_Word Target_38;
            MR_Box CookieMSI_39;
            MR_Word DetectedGradeFlags_40;
            MR_Word OptionVariables_41;
            MR_Word OptionArgs_42;
            MR_Word MayBuild_44;
            MR_Word Succeeded0_46;
            MR_Word CleanupMSI_51;
            MR_Word STATE_VARIABLE_Info_93_93;
            MR_Box conv5_STATE_VARIABLE_Info_96_96;

            {
              Target_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Target_38, 0) = ((MR_Box) (ModuleName_8));
              MR_hl_field(MR_mktag(0), Target_38, 1) = ((MR_Box) ((MR_Unsigned) 20U));
            }
            make__util__maybe_make_target_message_to_stream_5_p_0(Globals_7, OldOutputStream_13, Target_38);
            libs__process_util__setup_checking_for_interrupt_3_p_0(&CookieMSI_39);
            DetectedGradeFlags_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, (MR_Integer) 3))));
            OptionArgs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, (MR_Integer) 4))));
            OptionVariables_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, (MR_Integer) 5))));
            make__build__setup_for_build_with_module_options_10_p_0(Globals_7, (MR_Integer) 1, ModuleName_8, DetectedGradeFlags_40, OptionVariables_41, OptionArgs_42, (MR_Word) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[3])), &MayBuild_44);
            if (((MR_tag((MR_Word) MayBuild_44)) == (MR_Integer) 1))
            {
              MR_Word BuildGlobals_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayBuild_44, (MR_Integer) 1))));
              MR_Word ProgressStream_50;

              mercury__io__output_stream_3_p_0(&ProgressStream_50);
              make__module_dep_file__make_int3_files_9_p_0(ProgressStream_50, ErrorStream_12, BuildGlobals_48, ParseTreeModuleSrcs_30, &Succeeded0_46, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_93_93);
            }
            else
            {
              MR_Word MSISpecs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MayBuild_44, (MR_Integer) 0))));

              parse_tree__error_util__write_error_specs_ignore_5_p_0(ErrorStream_12, Globals_7, MSISpecs_45);
              Succeeded0_46 = (MR_Integer) 0;
              STATE_VARIABLE_Info_93_93 = STATE_VARIABLE_Info_83_83;
            }
            {
              CleanupMSI_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CleanupMSI_51, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), CleanupMSI_51, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
              MR_hl_field(MR_mktag(0), CleanupMSI_51, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), CleanupMSI_51, 3) = ((MR_Box) (Globals_7));
              MR_hl_field(MR_mktag(0), CleanupMSI_51, 4) = ((MR_Box) (SubModuleNames_34));
            }
            libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_37, CookieMSI_39, CleanupMSI_51, Succeeded0_46, &Succeeded_52, ((MR_Box) (STATE_VARIABLE_Info_93_93)), &conv5_STATE_VARIABLE_Info_96_96);
            STATE_VARIABLE_Info_96_96 = ((MR_Word) (conv5_STATE_VARIABLE_Info_96_96));
          }
          else
          {
            Succeeded_52 = (MR_Integer) 0;
            STATE_VARIABLE_Info_96_96 = STATE_VARIABLE_Info_83_83;
          }
          libs__process_util__setup_checking_for_interrupt_3_p_0(&CookieWMDF_53);
          {
            Var_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
            MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (Globals_7));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_burdened_aug_comp_unit_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_99, BurdenedAugCompUnitList_29, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_100_100);
          {
            CleanupWMDF_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CleanupWMDF_54, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), CleanupWMDF_54, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
            MR_hl_field(MR_mktag(0), CleanupWMDF_54, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), CleanupWMDF_54, 3) = ((MR_Box) (Globals_7));
            MR_hl_field(MR_mktag(0), CleanupWMDF_54, 4) = ((MR_Box) (SubModuleNames_34));
          }
          libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make__type_ctor_info_make_info_0), VeryVerbose_37, CookieWMDF_53, CleanupWMDF_54, (MR_Integer) 1, &_Succeeded_55, ((MR_Box) (STATE_VARIABLE_Info_96_96)), &conv8_STATE_VARIABLE_Info_102_102);
          STATE_VARIABLE_Info_102_102 = ((MR_Word) (conv8_STATE_VARIABLE_Info_102_102));
          {
            MadeTarget_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MadeTarget_56, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(0), MadeTarget_56, 1) = ((MR_Box) ((MR_Unsigned) 20U));
          }
          make__module_target__record_made_target_8_p_0(Globals_7, MadeTarget_56, (MR_Word) (&make__module_dep_file_scalar_common_2[5]), Succeeded_52, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_106_106);
          make__build__unredirect_output_7_p_0(Globals_7, ModuleName_8, ErrorStream_12, STATE_VARIABLE_Info_106_106, STATE_VARIABLE_Info_58);
        }
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
    MR_String Var_18;
    MR_String Var_21;

    Var_18 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_1);
    Var_21 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ImportingModuleName_10);
    mercury__io__write_string_3_p_0((MR_String) "** Module \140");
    mercury__io__write_string_3_p_0(Var_18);
    mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
    mercury__io__write_string_3_p_0(Var_21);
    mercury__io__write_string_3_p_0((MR_String) "\'.\n");
  }
}

static void MR_CALL 
make__module_dep_file__make_int3_files_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    parse_tree__write_module_interface_files__write_short_interface_file_int3_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
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
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
  MR_Word RebuildModuleDeps_6,
  MR_String ModuleDepsFile_7,
  MR_String Msg_8)
{
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
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word ModuleSummary_21;

    succeeded = make__module_dep_file__parse_module_summary_file_4_p_0(ModuleName_14, ModuleDir_15, Term_17, &ModuleSummary_21);
    if (succeeded)
    {
      MR_Word ModuleDepInfo_22 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ModuleSummary_21)));
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

          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (MaybeModuleDepInfo_23)), ModuleDepMap0_28, &ModuleDepMap_29);
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
          NestedSubModules_31 = parse_tree__module_imports__get_nested_children_list_of_top_module_1_f_0(Var_50);
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Globals_12));
            MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (SearchDirs_13));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, NestedSubModules_31, ((MR_Box) (STATE_VARIABLE_Info_39_39)), &conv2_STATE_VARIABLE_Info_34, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36);
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

          mercury__io__remove_file_4_p_0(ModuleDepFile_16, &Var_27);
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

        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (MaybeModuleDepInfo_23)), ModuleDepMap0_198, &ModuleDepMap_199);
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
        NestedSubModules_201 = parse_tree__module_imports__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_200);
        {
          Var_204 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_204, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_204, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
          MR_hl_field(MR_mktag(0), Var_204, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_204, 3) = ((MR_Box) (Globals_12));
          MR_hl_field(MR_mktag(0), Var_204, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_204, 5) = ((MR_Box) (SearchDirs_13));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_204, NestedSubModules_201, ((MR_Box) (STATE_VARIABLE_Info_39_203)), &conv5_STATE_VARIABLE_Info_34, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_36);
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
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_29_29 = (MR_Word) (&make__make__type_ctor_info_maybe_module_dep_info_0);
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_28_28, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_29_29, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_6, ((MR_Box) ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &conv1_Var_30);
      if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
      {
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_30 = ((MR_Word) (conv1_Var_30));
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
      }
      if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
      {
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = make____Unify____maybe_module_dep_info_0_0((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_30);
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
        (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_28_28 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        mercury__list__member_2_p_1((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_28_28, &(env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, env_ptr);
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
make__module_dep_file__parse_module_summary_file_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__666__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__661__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0(
  MR_Word ModuleName_5,
  MR_String ModuleDir_6,
  MR_Word Term_7,
  MR_Word * ModuleSummary_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_75_75;
    MR_Word TypeCtorInfo_78_78;
    MR_Word TypeCtorInfo_81_81;
    MR_Word TypeCtorInfo_84_84;
    MR_Word TypeCtorInfo_90_90;
    MR_Word TypeCtorInfo_92_92;
    MR_Word TypeCtorInfo_6_98;
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
    MR_Integer Int_97;

    succeeded = make__module_dep_file__atom_term_3_p_0(Term_7, &Var_93, &ModuleArgs_9);
    if (succeeded)
    {
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
                                  succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_6_98, VersionNumberTerm_10, &Int_97);
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
                                      succeeded = make__module_dep_file__string_term_2_p_0(SourceFileTerm_11, &SourceFileName_25);
                                      if (succeeded)
                                      {
                                        TypeCtorInfo_75_75 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                                        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_75_75, SourceFileModuleNameTerm_12, &SourceFileModuleName_26);
                                        if (succeeded)
                                        {
                                          succeeded = make__module_dep_file__sym_names_term_2_p_0(ParentsTerm_13, &Parents_27);
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
                                                                  MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (make__module_dep_file__parse_module_summary_file_4_p_0_1));
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
                                                                MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (make__module_dep_file__parse_module_summary_file_4_p_0_2));
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
    return succeeded;
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
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[4]), ArgTerms_7, Args_6);
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
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&make__module_dep_file_scalar_common_4[3]), ArgTerms_7, Args_6);
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
    MR_Word conv0_FIMSpec_4;

    succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_FIMSpec_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_FIMSpec_4));
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
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&make__module_dep_file_scalar_common_4[2]), ArgTerms_7, Args_6);
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
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_10, (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&make__module_dep_file_scalar_common_4[1]), ArgTerms_7, Args_6);
        }
      }
    }
    return succeeded;
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

    succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__705__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_7);
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
          succeeded = mercury__list__map_3_p_2(TypeInfo_10_17, (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_4[0]), ArgTerms_14, SymNames_4);
        }
      }
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
