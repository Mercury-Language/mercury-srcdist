/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2023-08-19
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
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
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.file_names.mih"
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
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s {
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4;
  MR_bool make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
  jmp_buf make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_8_8;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_9_9;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_6;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_10;
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
make__module_dep_file__IntroducedFrom__func__make_module_dependencies_no_fatal_error__946__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__718__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__679__1_2_p_0(
  MR_Word ParentsSet_39,
  MR_Word AncestorsSet_40);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__674__1_2_p_0(
  MR_Word NestedSubModules0_31,
  MR_Word HeadVar__2_64);

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__295__1_1_f_0(
  MR_String LambdaHeadVar__1_86);

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
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
make__module_dep_file__do_get_module_dependencies_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static MR_Box MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * STATE_VARIABLE_MaybeModuleDepInfo_38,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40);

static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word SearchDirs_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51);

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
make__module_dep_file__read_module_dependencies_remake_msg_4_p_0(
  MR_Word RebuildModuleDeps_5,
  MR_String ModuleDepsFile_6,
  MR_String ErrorMsg_7,
  MR_String * Msg_8);

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


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[5][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[8][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[14][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[15][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[1][10];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][7];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[1][11];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[5][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[8][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 12U) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "unexpected eof")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "error in nested submodules")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "failed to parse term")) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 23U) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 3U) },
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[15][3] = {
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
    ((MR_Box) (&make__module_dep_file_scalar_common_5[0])),
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
    ((MR_Box) (&make__module_dep_file_scalar_common_3[9])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[11])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[12])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[13])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[2][9] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][7] = {
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_rebuild_module_deps_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_rebuild_module_deps_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
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
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0) }
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
make__module_dep_file__IntroducedFrom__func__make_module_dependencies_no_fatal_error__946__1_1_f_0(
  MR_Word LambdaHeadVar__1_55)
{
  MR_Word LambdaHeadVar__2_56 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_55, (MR_Integer) 1))));

  return LambdaHeadVar__2_56;
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__718__1_2_p_0(
  MR_Word HeadVar__1_6,
  MR_Word * HeadVar__2_7)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_6, HeadVar__2_7);
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__679__1_2_p_0(
  MR_Word ParentsSet_39,
  MR_Word AncestorsSet_40)
{
  MR_bool succeeded;

  succeeded = mercury__set__equal_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ParentsSet_39, AncestorsSet_40);
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__674__1_2_p_0(
  MR_Word NestedSubModules0_31,
  MR_Word HeadVar__2_64)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__module_dep_file_scalar_common_1[0]), ((MR_Box) (NestedSubModules0_31)), ((MR_Box) (HeadVar__2_64)));
  return succeeded;
}

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__295__1_1_f_0(
  MR_String LambdaHeadVar__1_86)
{
  MR_String LambdaHeadVar__2_87;
  MR_String Var_89;

  Var_89 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_86, (MR_String) "\'");
  LambdaHeadVar__2_87 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_89);
  return LambdaHeadVar__2_87;
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
  make__util__remove_make_module_file_8_p_0(Globals_7, (MR_Integer) 77, ModuleName_8, (MR_Word) (MR_mkword(1, &make__module_dep_file_scalar_common_2[0])), STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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

  make__module_dep_file__cleanup_module_dep_file_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
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
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Globals_7));
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
  make__util__remove_make_target_file_by_name_9_p_0(Globals_7, (MR_String) "predicate \140make.module_dep_file.cleanup_int3_file\'/6", (MR_Integer) 73, ModuleName_8, (MR_Word) ((MR_Unsigned) 20U), STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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

  make__module_dep_file__cleanup_int3_file_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_12);
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
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (make__module_dep_file__cleanup_int3_files_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Globals_7));
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
  MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_4, (MR_Integer) 1))));
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, (MR_Integer) 0))));
  MR_Word ModuleDepInfo_8;
  MR_Word MaybeModuleDepInfo_9;
  MR_Word ModuleDepMap0_10;
  MR_Word ModuleDepMap_11;

  {
    ModuleDepInfo_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ModuleDepInfo_8, 0) = ((MR_Box) (BurdenedModule_4));
  }
  {
    MaybeModuleDepInfo_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeModuleDepInfo_9, 0) = ((MR_Box) (ModuleDepInfo_8));
  }
  ModuleDepMap0_10 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_0_12);
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (MaybeModuleDepInfo_9)), ModuleDepMap0_10, &ModuleDepMap_11);
  make__make_info__make_info_set_module_dependencies_3_p_0(ModuleDepMap_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
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
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_13 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "-", Var_13) == 0);
      if (succeeded)
      {
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LanguageTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 0))));
          Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 1))));
          succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FileNameTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
            TypeInfo_15_15 = (MR_Word) (&make__module_dep_file_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_14)));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) LanguageTerm_5)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_20 = ((MR_Word) ((MR_hl_field(0, LanguageTerm_5, (MR_Integer) 0))));
                Var_21 = ((MR_Word) ((MR_hl_field(0, LanguageTerm_5, (MR_Integer) 1))));
                succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    String_18 = ((MR_String) ((MR_hl_field(2, Var_20, (MR_Integer) 0))));
                    succeeded = libs__globals__convert_foreign_language_2_p_0(String_18, &Language_7);
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) FileNameTerm_6)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_23 = ((MR_Word) ((MR_hl_field(0, FileNameTerm_6, (MR_Integer) 0))));
                        Var_24 = ((MR_Word) ((MR_hl_field(0, FileNameTerm_6, (MR_Integer) 1))));
                        succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            FileName_8 = ((MR_String) ((MR_hl_field(2, Var_23, (MR_Integer) 0))));
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              *ForeignInclude_4 = base;
                              MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Language_7));
                              MR_hl_field(0, base, 1) = ((MR_Box) (FileName_8));
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
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_14 = ((MR_String) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "-", Var_14) == 0);
      if (succeeded)
      {
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LanguageTerm_5 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 0))));
          Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 1))));
          succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ImportedModuleTerm_6 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
            Var_15 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
            TypeInfo_16_16 = (MR_Word) (&make__module_dep_file_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_15)));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) LanguageTerm_5)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_21 = ((MR_Word) ((MR_hl_field(0, LanguageTerm_5, (MR_Integer) 0))));
                Var_22 = ((MR_Word) ((MR_hl_field(0, LanguageTerm_5, (MR_Integer) 1))));
                succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    String_19 = ((MR_String) ((MR_hl_field(2, Var_21, (MR_Integer) 0))));
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
                          MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Language_7));
                          MR_hl_field(0, base, 1) = ((MR_Box) (ImportedModuleName_8));
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
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 2);
    if (succeeded)
    {
      String_5 = ((MR_String) ((MR_hl_field(2, Var_7, (MR_Integer) 0))));
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
    Var_6 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 2);
    if (succeeded)
    {
      *FactDep_4 = ((MR_String) ((MR_hl_field(2, Var_6, (MR_Integer) 0))));
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
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, ForeignInclude_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_String FileName_6 = ((MR_String) ((MR_hl_field(0, ForeignInclude_3, (MR_Integer) 1))));
  MR_String LangStr_7;
  MR_String Var_8;
  MR_String Var_10;

  LangStr_7 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(Lang_5);
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
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_3, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ForeignImport_6 = ((MR_Word) ((MR_hl_field(0, FIMSpec_3, (MR_Integer) 1))));
  MR_String LangStr_7;
  MR_String ForeignImportStr_8;
  MR_String Var_9;

  LangStr_7 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(Lang_5);
  ForeignImportStr_8 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(ForeignImport_6);
  Var_9 = mercury__string__f_43_43_2_f_0((MR_String) " - ", ForeignImportStr_8);
  Str_4 = mercury__string__f_43_43_2_f_0(LangStr_7, Var_9);
  return Str_4;
}

void MR_CALL 
make__module_dep_file__write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word BurdenedModule0_6)
{
  MR_Word Baggage0_8 = ((MR_Word) ((MR_hl_field(0, BurdenedModule0_6, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_9 = ((MR_Word) ((MR_hl_field(0, BurdenedModule0_6, (MR_Integer) 1))));
  MR_String SourceFileName_10 = ((MR_String) ((MR_hl_field(0, Baggage0_8, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_12 = ((MR_Word) ((MR_hl_field(0, Baggage0_8, (MR_Integer) 2))));
  MR_Word MaybeTopModule_13 = ((MR_Word) ((MR_hl_field(0, Baggage0_8, (MR_Integer) 3))));
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 0))));
  MR_Word GrabbedFileMap_19;
  MR_Word Errors_20;
  MR_Word Baggage_21;
  MR_Word BurdenedModule_22;
  MR_Word Var_25;
  MR_String Var_26;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (ParseTreeModuleSrc_9));
  }
  GrabbedFileMap_19 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_18)), ((MR_Box) (Var_25)));
  Errors_20 = parse_tree__parse_error__init_read_module_errors_0_f_0();
  Var_26 = mercury__dir__this_directory_0_f_0();
  {
    Baggage_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Baggage_21, 0) = ((MR_Box) (SourceFileName_10));
    MR_hl_field(0, Baggage_21, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Baggage_21, 2) = ((MR_Box) (SourceFileModuleName_12));
    MR_hl_field(0, Baggage_21, 3) = ((MR_Box) (MaybeTopModule_13));
    MR_hl_field(0, Baggage_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Baggage_21, 5) = ((MR_Box) (GrabbedFileMap_19));
    MR_hl_field(0, Baggage_21, 6) = ((MR_Box) (Errors_20));
  }
  {
    BurdenedModule_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, BurdenedModule_22, 0) = ((MR_Box) (Baggage_21));
    MR_hl_field(0, BurdenedModule_22, 1) = ((MR_Box) (ParseTreeModuleSrc_9));
  }
  make__module_dep_file__do_write_module_dep_file_4_p_0(Globals_5, BurdenedModule_22);
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
  MR_Word Globals_5,
  MR_Word BurdenedModule_6)
{
  MR_Word Baggage_8 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_6, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_9 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_6, (MR_Integer) 1))));
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 0))));
  MR_String ProgDepFile_11;
  MR_Word ProgDepResult_12;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_5, (MR_String) "predicate \140make.module_dep_file.do_write_module_dep_file\'/4", (MR_Word) (MR_mkword(1, &make__module_dep_file_scalar_common_2[0])), ModuleName_10, &ProgDepFile_11);
  mercury__io__open_output_4_p_0(ProgDepFile_11, &ProgDepResult_12);
  if (((MR_tag((MR_Word) ProgDepResult_12)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, ProgDepResult_12, (MR_Integer) 0))));
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
    MR_Word ProgDepStream_13 = ((MR_Word) ((MR_hl_field(0, ProgDepResult_12, (MR_Integer) 0))));

    make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0(ProgDepStream_13, Globals_5, Baggage_8, ParseTreeModuleSrc_9);
    mercury__io__close_output_3_p_0(ProgDepStream_13);
  }
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_Str_4;

  conv3_Str_4 = make__module_dep_file__foreign_include_file_info_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_Str_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
make__module_dep_file__do_write_module_dep_file_to_stream_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_Str_4;

  conv2_Str_4 = make__module_dep_file__fim_spec_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
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
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
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

  conv0_HeadVar__2_2 = mercury__term_io__quoted_string_1_f_0(((MR_String) (wrapper_arg_1)));
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
  MR_String SourceFileName_14 = ((MR_String) ((MR_hl_field(0, Baggage_9, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_15 = ((MR_Word) ((MR_hl_field(0, Baggage_9, (MR_Integer) 2))));
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
  MR_Word FactTableFilesStrs_28;
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
  MR_Word Var_52;
  MR_String Var_89;
  MR_String Var_92;
  MR_String Var_95;
  MR_String Var_98;
  MR_String Var_101;
  MR_String Var_104;
  MR_String Var_108;
  MR_String Var_112;
  MR_String Var_118;
  MR_String Var_226;

  SourceFileModuleNameStr_16 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(SourceFileModuleName_15);
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, (MR_Integer) 0))));
  Var_44 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_17);
  Ancestors_18 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_44);
  IncludeMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_10, (MR_Integer) 2))));
  Children_20 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_19);
  parse_tree__module_baggage__parse_tree_module_src_get_int_imp_deps_3_p_0(ParseTreeModuleSrc_10, &IntDepSet_21, &ImpDepSet_22);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDepSet_21, &IntDeps_23);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepSet_22, &ImpDeps_24);
  MaybeTopModule_25 = ((MR_Word) ((MR_hl_field(0, Baggage_9, (MR_Integer) 3))));
  NestedSubModules_26 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_25);
  parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_10, &FactTableFilesSet_27);
  Var_46 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_27);
  FactTableFilesStrs_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[11]), Var_46);
  libs__globals__get_backend_foreign_languages_2_p_0(Globals_8, &BackendLangsList_29);
  BackendLangs_30 = mercury__set__list_to_set_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangsList_29);
  parse_tree__get_dependencies__get_foreign_code_langs_2_p_0(ParseTreeModuleSrc_10, &CodeLangs_31);
  parse_tree__get_dependencies__get_foreign_export_langs_2_p_0(ParseTreeModuleSrc_10, &ExportLangs_32);
  mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_30, CodeLangs_31, &BackendCodeLangs_33);
  mercury__set__intersect_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendLangs_30, ExportLangs_32, &BackendExportLangs_34);
  Var_48 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendCodeLangs_33);
  CodeLangStrs_35 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[12]), Var_48);
  parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_10, &FIMSpecs_37);
  parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_10, &ForeignIncludeFiles_38);
  Var_50 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecs_37);
  FIMSpecStrs_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[13]), Var_50);
  Var_52 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFiles_38);
  FIFOStrs_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[14]), Var_52);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), BackendExportLangs_34);
  if (succeeded)
    ContainsForeignExportStr_41 = (MR_String) "no_foreign_export";
  else
    ContainsForeignExportStr_41 = (MR_String) "contains_foreign_export";
  Var_89 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(Ancestors_18);
  Var_92 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(IntDeps_23);
  Var_95 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(ImpDeps_24);
  Var_98 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(Children_20);
  Var_101 = make__module_dep_file__bracketed_sym_names_to_comma_list_string_1_f_0(NestedSubModules_26);
  Var_104 = mercury__string__join_list_2_f_0((MR_String) ", ", FactTableFilesStrs_28);
  Var_108 = mercury__string__join_list_2_f_0((MR_String) ", ", CodeLangStrs_35);
  Var_112 = mercury__string__join_list_2_f_0((MR_String) ", ", FIMSpecStrs_39);
  Var_118 = mercury__string__join_list_2_f_0((MR_String) ", ", FIFOStrs_40);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "module(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&make__module_dep_file_scalar_common_2[1]), (MR_Integer) 2, &Var_226);
  mercury__io__write_string_4_p_0(Stream_7, Var_226);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", \"");
  mercury__io__write_string_4_p_0(Stream_7, SourceFileName_14);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\",\n\t");
  mercury__io__write_string_4_p_0(Stream_7, SourceFileModuleNameStr_16);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_89);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_92);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_95);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_98);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_101);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_104);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_108);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_112);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n\t");
  mercury__io__write_string_4_p_0(Stream_7, ContainsForeignExportStr_41);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",\n\tno_main,\n\t{");
  mercury__io__write_string_4_p_0(Stream_7, Var_118);
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

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
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
  MR_Word RebuildModuleDeps_13;

  RebuildModuleDeps_13 = make__make_info__make_info_get_rebuild_module_deps_1_f_0(STATE_VARIABLE_Info_0_20);
  if (((MR_tag((MR_Word) ModuleName_9)) == (MR_Integer) 1))
  {
    MR_Word AncestorsAndSelf_17;
    MR_Word ModuleDepMap_19;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv0_MaybeModuleDepInfo_10;

    Var_26 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_9);
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    AncestorsAndSelf_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_26, Var_27);
    make__module_dep_file__maybe_get_modules_dependencies_8_p_0(Globals_8, RebuildModuleDeps_13, AncestorsAndSelf_17, (MR_Integer) 0, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
    ModuleDepMap_19 = make__make_info__make_info_get_module_dependencies_1_f_0(*STATE_VARIABLE_Info_21);
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap_19, ((MR_Box) (ModuleName_9)), &conv0_MaybeModuleDepInfo_10);
    *MaybeModuleDepInfo_10 = ((MR_Word) (conv0_MaybeModuleDepInfo_10));
  }
  else
  {
    MR_Word ModuleDepMap0_31;
    MR_Word MaybeModuleDepInfo0_32;
    MR_Box conv1_MaybeModuleDepInfo0_32;

    ModuleDepMap0_31 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_0_20);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap0_31, ((MR_Box) (ModuleName_9)), &conv1_MaybeModuleDepInfo0_32);
    if (succeeded)
    {
      MaybeModuleDepInfo0_32 = ((MR_Word) (conv1_MaybeModuleDepInfo0_32));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeModuleDepInfo_10 = MaybeModuleDepInfo0_32;
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
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    else
    {
      MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ModuleNames_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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
            MR_Word ModuleDepMap0_40;
            MR_Word MaybeModuleDepInfo0_41;
            MR_Box conv0_MaybeModuleDepInfo0_41;

            ModuleDepMap0_40 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_0_5);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap0_40, ((MR_Box) (ModuleName_20)), &conv0_MaybeModuleDepInfo0_41);
            if (succeeded)
            {
              MaybeModuleDepInfo0_41 = ((MR_Word) (conv0_MaybeModuleDepInfo0_41));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MaybeModuleDepInfo_25 = MaybeModuleDepInfo0_41;
              STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_0_5;
            }
            else
              make__module_dep_file__do_get_module_dependencies_8_p_0(HeadVar__1_1, HeadVar__2_2, ModuleName_20, &MaybeModuleDepInfo_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_34_34);
            if ((MaybeModuleDepInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Error_36_36 = (MR_Integer) 1;
            else
              STATE_VARIABLE_Error_36_36 = STATE_VARIABLE_Error_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleDepMap0_27;
            MR_Word ModuleDepMap_28;

            ModuleDepMap0_27 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_0_5);
            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_20)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_27, &ModuleDepMap_28);
            make__make_info__make_info_set_module_dependencies_3_p_0(ModuleDepMap_28, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_34_34);
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
make__module_dep_file__do_get_module_dependencies_8_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv1_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_Box MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_87;

  conv0_LambdaHeadVar__2_87 = make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__295__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_87));
  return wrapper_arg_2;
}

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word ModuleName_11,
  MR_Word * STATE_VARIABLE_MaybeModuleDepInfo_38,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40)
{
  MR_bool succeeded;
  MR_String SourceFileName_15;
  MR_Word MaybeSourceFileTimestamp_16;
  MR_String DepFileName_17;
  MR_Word SearchDirs_18;
  MR_Word MaybeDepFileTimestamp_19;
  MR_Word ModuleDepMap2_35;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_String Var_47;
  MR_Word STATE_VARIABLE_Info_53_53;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word MaybeModuleDepInfo0_36;
  MR_Box conv3_MaybeModuleDepInfo0_36;

  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_11, &SourceFileName_15);
  Var_47 = mercury__dir__this_directory_0_f_0();
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__timestamp__get_file_timestamp_7_p_0(Var_44, SourceFileName_15, &MaybeSourceFileTimestamp_16, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_45_45);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_9, (MR_String) "predicate \140make.module_dep_file.do_get_module_dependencies\'/8", (MR_Word) (MR_mkword(1, &make__module_dep_file_scalar_common_2[0])), ModuleName_11, &DepFileName_17);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 687, &SearchDirs_18);
  make__timestamp__get_file_timestamp_7_p_0(SearchDirs_18, DepFileName_17, &MaybeDepFileTimestamp_19, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_53_53);
  if (((MR_tag((MR_Word) MaybeDepFileTimestamp_19)) == (MR_Integer) 1))
  {
    MR_String SearchDirsString_30;
    MR_String DebugMsg_32;
    MR_Word Var_84;
    MR_Word Var_91;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;

    Var_84 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__module_dep_file_scalar_common_4[9]), SearchDirs_18);
    SearchDirsString_30 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_84);
    {
      Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_94, 1) = ((MR_Box) (DepFileName_17));
    }
    {
      Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_96, 1) = ((MR_Box) (SearchDirsString_30));
    }
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_91, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[1]));
      MR_hl_field(0, Var_91, 1) = ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_2));
      MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_91, 3) = ((MR_Box) ((MR_String) "Module dependencies file \'%s\' not found in directories %s.\n"));
      MR_hl_field(0, Var_91, 4) = ((MR_Box) (Var_93));
    }
    make__util__debug_make_msg_3_p_0(Globals_9, Var_91, &DebugMsg_32);
    make__util__maybe_write_msg_3_p_0(DebugMsg_32);
    switch (RebuildModuleDeps_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ModuleDepMap0_33;
          MR_Word ModuleDepMap1_34;

          ModuleDepMap0_33 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_53_53);
          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_33, &ModuleDepMap1_34);
          make__make_info__make_info_set_module_dependencies_3_p_0(ModuleDepMap1_34, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_56_56);
        }
        break;
      case (MR_Integer) 0:
        make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_56_56);
        break;
    }
  }
  else
  {
    MR_Word Var_124 = ((MR_Word) ((MR_hl_field(0, MaybeDepFileTimestamp_19, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) MaybeSourceFileTimestamp_16)) == (MR_Integer) 1))
    {
      MR_Word STATE_VARIABLE_Info_60_60;
      MR_Word Var_62;
      MR_Word STATE_VARIABLE_MaybeModuleDepInfo_63_63;
      MR_Word SearchDirs_132;
      MR_Box conv2_STATE_VARIABLE_MaybeModuleDepInfo_63_63;
      MR_Word ModuleDepInfo0_23;
      MR_String ModuleDir_24;
      MR_String Var_122;

      libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 687, &SearchDirs_132);
      make__module_dep_file__read_module_dependencies_2_8_p_0(Globals_9, RebuildModuleDeps_10, SearchDirs_132, ModuleName_11, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_60_60);
      Var_62 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_60_60);
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), Var_62, ((MR_Box) (ModuleName_11)), &conv2_STATE_VARIABLE_MaybeModuleDepInfo_63_63);
      STATE_VARIABLE_MaybeModuleDepInfo_63_63 = ((MR_Word) (conv2_STATE_VARIABLE_MaybeModuleDepInfo_63_63));
      succeeded = (STATE_VARIABLE_MaybeModuleDepInfo_63_63 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModuleDepInfo0_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeModuleDepInfo_63_63, (MR_Integer) 0))));
        parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo0_23, &ModuleDir_24);
        Var_122 = mercury__dir__this_directory_0_f_0();
        succeeded = (strcmp(ModuleDir_24, Var_122) == 0);
      }
      if (succeeded)
      {
        MR_String SourceFileName1_25;
        MR_Word MaybeSourceFileTimestamp1_26;
        MR_Word Var_64;
        MR_Word STATE_VARIABLE_Info_65_65;
        MR_String Var_67;

        parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo0_23, &SourceFileName1_25);
        Var_67 = mercury__dir__this_directory_0_f_0();
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        make__timestamp__get_file_timestamp_7_p_0(Var_64, SourceFileName1_25, &MaybeSourceFileTimestamp1_26, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_65_65);
        if (((MR_tag((MR_Word) MaybeSourceFileTimestamp1_26)) == (MR_Integer) 1))
        {
          MR_String Message_28 = ((MR_String) ((MR_hl_field(1, MaybeSourceFileTimestamp1_26, (MR_Integer) 0))));
          MR_Word Var_81;

          mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
          mercury__io__write_string_3_p_0(SourceFileName1_25);
          mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
          mercury__io__write_string_3_p_0(Message_28);
          mercury__io__write_string_3_p_0((MR_String) ".\n");
          Var_81 = make__make_info__make_info_get_importing_module_1_f_0(STATE_VARIABLE_Info_65_65);
          make__module_dep_file__maybe_write_importing_module_4_p_0(ModuleName_11, Var_81);
          STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_65_65;
        }
        else
        {
          MR_Word SourceFileTimestamp1_27 = ((MR_Word) ((MR_hl_field(0, MaybeSourceFileTimestamp1_26, (MR_Integer) 0))));

          succeeded = (RebuildModuleDeps_10 == (MR_Integer) 1);
          if (!(succeeded))
          {
            MR_Word Var_123;

            libs__timestamp____Compare____timestamp_0_0(&Var_123, Var_124, SourceFileTimestamp1_27);
            succeeded = ((MR_Integer) 2 == Var_123);
          }
          if (succeeded)
            STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_65_65;
          else
            make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_56_56);
        }
      }
      else
        STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_60_60;
    }
    else
    {
      MR_Word SourceFileTimestamp_20 = ((MR_Word) ((MR_hl_field(0, MaybeSourceFileTimestamp_16, (MR_Integer) 0))));

      succeeded = (RebuildModuleDeps_10 == (MR_Integer) 1);
      if (!(succeeded))
      {
        MR_Word Var_121;

        libs__timestamp____Compare____timestamp_0_0(&Var_121, Var_124, SourceFileTimestamp_20);
        succeeded = ((MR_Integer) 2 == Var_121);
      }
      if (succeeded)
      {
        MR_Word Var_134;
        MR_String Var_135;

        Var_135 = mercury__dir__this_directory_0_f_0();
        {
          Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
          MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        make__module_dep_file__read_module_dependencies_2_8_p_0(Globals_9, RebuildModuleDeps_10, Var_134, ModuleName_11, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_56_56);
      }
      else
        make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_11, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_56_56);
    }
  }
  ModuleDepMap2_35 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_56_56);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap2_35, ((MR_Box) (ModuleName_11)), &conv3_MaybeModuleDepInfo0_36);
  if (succeeded)
  {
    MaybeModuleDepInfo0_36 = ((MR_Word) (conv3_MaybeModuleDepInfo0_36));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_MaybeModuleDepInfo_38 = MaybeModuleDepInfo0_36;
    *STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_56_56;
  }
  else
  {
    MR_Word ModuleDepMap_37;

    *STATE_VARIABLE_MaybeModuleDepInfo_38 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap2_35, &ModuleDepMap_37);
    make__make_info__make_info_set_module_dependencies_3_p_0(ModuleDepMap_37, STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Info_40);
  }
}

static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2)
{
  if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ImportOrInclude_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) ImportOrInclude_10)) == (MR_Integer) 0))
    {
      MR_Word ImportingModuleName_12 = ((MR_Word) ((MR_hl_field(0, ImportOrInclude_10, (MR_Integer) 0))));
      MR_String Var_20;
      MR_String Var_23;

      Var_20 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_1);
      Var_23 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ImportingModuleName_12);
      mercury__io__write_string_3_p_0((MR_String) "** Module \140");
      mercury__io__write_string_3_p_0(Var_20);
      mercury__io__write_string_3_p_0((MR_String) "\' is imported by module \140");
      mercury__io__write_string_3_p_0(Var_23);
      mercury__io__write_string_3_p_0((MR_String) "\'.\n");
    }
    else
    {
      MR_Word IncludingModuleName_13 = ((MR_Word) ((MR_hl_field(1, ImportOrInclude_10, (MR_Integer) 0))));
      MR_String Var_29;
      MR_String Var_32;

      Var_29 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_1);
      Var_32 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(IncludingModuleName_13);
      mercury__io__write_string_3_p_0((MR_String) "** Module \140");
      mercury__io__write_string_3_p_0(Var_29);
      mercury__io__write_string_3_p_0((MR_String) "\' is included by module \140");
      mercury__io__write_string_3_p_0(Var_32);
      mercury__io__write_string_3_p_0((MR_String) "\'.\n");
    }
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_29;

  make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Info_29;

  make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_29));
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Msg_8;

  make__module_dep_file__read_module_dependencies_remake_msg_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), &conv0_Msg_8);
  *wrapper_arg_1 = ((MR_Box) (conv0_Msg_8));
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
  MR_Word Globals_9,
  MR_Word RebuildModuleDeps_10,
  MR_Word SearchDirs_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_String ModuleDepFile_15;
  MR_Word MaybeDirAndStream_16;

  parse_tree__file_names__module_name_to_search_file_name_5_p_0(Globals_9, (MR_String) "predicate \140make.module_dep_file.read_module_dependencies_2\'/8", (MR_Word) (MR_mkword(1, &make__module_dep_file_scalar_common_2[0])), ModuleName_12, &ModuleDepFile_15);
  parse_tree__find_module__search_for_file_returning_dir_and_stream_5_p_0(SearchDirs_11, ModuleDepFile_15, &MaybeDirAndStream_16);
  if (((MR_tag((MR_Word) MaybeDirAndStream_16)) == (MR_Integer) 1))
  {
    MR_String DebugMsg_27;
    MR_Word Var_50;
    MR_String ErrorMsg_54 = ((MR_String) ((MR_hl_field(1, MaybeDirAndStream_16, (MR_Integer) 0))));

    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[1]));
      MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
      MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_50, 3) = ((MR_Box) (RebuildModuleDeps_10));
      MR_hl_field(0, Var_50, 4) = ((MR_Box) (ModuleDepFile_15));
      MR_hl_field(0, Var_50, 5) = ((MR_Box) (ErrorMsg_54));
    }
    make__util__debug_make_msg_3_p_0(Globals_9, Var_50, &DebugMsg_27);
    make__util__maybe_write_msg_3_p_0(DebugMsg_27);
    switch (RebuildModuleDeps_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
        break;
      case (MR_Integer) 0:
        make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
        break;
    }
  }
  else
  {
    MR_String ModuleDir_17;
    MR_Word DepStream_18;
    MR_Word TermResult_19;
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, MaybeDirAndStream_16, (MR_Integer) 0))));

    ModuleDir_17 = ((MR_String) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
    DepStream_18 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
    mercury__mercury_term_parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), DepStream_18, &TermResult_19);
    mercury__io__close_input_3_p_0(DepStream_18);
    switch (MR_tag((MR_Word) TermResult_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ErrorMsg_25 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__module_dep_file_scalar_common_2[2])), (MR_Integer) 0))));
          MR_String Msg_26;
          MR_String Var_44;
          MR_String Var_45;

          Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
          Var_44 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_45);
          make__module_dep_file__read_module_dependencies_remake_msg_4_p_0(RebuildModuleDeps_10, Var_44, ErrorMsg_25, &Msg_26);
          mercury__io__write_string_3_p_0(Msg_26);
          switch (RebuildModuleDeps_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
              break;
            case (MR_Integer) 0:
              make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ParseError_23 = ((MR_String) ((MR_hl_field(1, TermResult_19, (MR_Integer) 0))));
          MR_String ErrorMsg_141;
          MR_String Msg_142;
          MR_String Var_145;
          MR_String Var_146;

          ErrorMsg_141 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", ParseError_23);
          Var_146 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
          Var_145 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_146);
          make__module_dep_file__read_module_dependencies_remake_msg_4_p_0(RebuildModuleDeps_10, Var_145, ErrorMsg_141, &Msg_142);
          mercury__io__write_string_3_p_0(Msg_142);
          switch (RebuildModuleDeps_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
              break;
            case (MR_Integer) 0:
              make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_21 = ((MR_Word) ((MR_hl_field(2, TermResult_19, (MR_Integer) 1))));
          MR_Word Result_161;
          MR_Word STATE_VARIABLE_Info_39_164;
          MR_Word ModuleSummary_56;

          succeeded = make__module_dep_file__parse_module_summary_file_4_p_0(ModuleName_12, ModuleDir_17, Term_21, &ModuleSummary_56);
          if (succeeded)
          {
            MR_Word ModuleDepInfo_57 = (MR_Word) ((MR_Word) (ModuleSummary_56));
            MR_Word MaybeModuleDepInfo_58;
            MR_String Var_99;

            {
              MaybeModuleDepInfo_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeModuleDepInfo_58, 0) = ((MR_Box) (ModuleDepInfo_57));
            }
            Var_99 = mercury__dir__this_directory_0_f_0();
            succeeded = (strcmp(ModuleDir_17, Var_99) == 0);
            if (succeeded)
            {
              MR_String SourceFileName_59 = ((MR_String) ((MR_hl_field(0, ModuleSummary_56, (MR_Integer) 0))));
              MR_Word SourceFileExists_60;
              MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, ModuleSummary_56, (MR_Integer) 5))));

              make__module_dep_file__check_regular_file_exists_4_p_0(SourceFileName_59, &SourceFileExists_60);
              if ((SourceFileExists_60 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ModuleDepMap0_62;
                MR_Word ModuleDepMap_63;
                MR_Word NestedSubModules_65;
                MR_Word STATE_VARIABLE_Info_39_68;
                MR_Word Var_69;
                MR_Box conv3_STATE_VARIABLE_Info_39_164;
                MR_Box conv2_STATE_VARIABLE_IO_40_165;

                ModuleDepMap0_62 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_0_28);
                mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_12)), ((MR_Box) (MaybeModuleDepInfo_58)), ModuleDepMap0_62, &ModuleDepMap_63);
                make__make_info__make_info_set_module_dependencies_3_p_0(ModuleDepMap_63, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_39_68);
                NestedSubModules_65 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(Var_75);
                {
                  Var_69 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_69, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
                  MR_hl_field(0, Var_69, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_2));
                  MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_69, 3) = ((MR_Box) (Globals_9));
                  MR_hl_field(0, Var_69, 4) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_69, 5) = ((MR_Box) (SearchDirs_11));
                }
                mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, NestedSubModules_65, ((MR_Box) (STATE_VARIABLE_Info_39_68)), &conv3_STATE_VARIABLE_Info_39_164, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_40_165);
                STATE_VARIABLE_Info_39_164 = ((MR_Word) (conv3_STATE_VARIABLE_Info_39_164));
                succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(STATE_VARIABLE_Info_39_164, NestedSubModules_65);
                if (succeeded)
                  Result_161 = (MR_Word) (MR_mkword(1, &make__module_dep_file_scalar_common_2[3]));
                else
                  Result_161 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_61;

                mercury__io__file__remove_file_4_p_0(ModuleDepFile_15, &Var_61);
                Result_161 = SourceFileExists_60;
                STATE_VARIABLE_Info_39_164 = STATE_VARIABLE_Info_0_28;
              }
            }
            else
            {
              MR_Word ModuleDepMap0_115;
              MR_Word ModuleDepMap_116;
              MR_Word MaybeTopModule_117;
              MR_Word NestedSubModules_118;
              MR_Word STATE_VARIABLE_Info_39_120;
              MR_Word Var_121;
              MR_Box conv6_STATE_VARIABLE_Info_39_164;
              MR_Box conv5_STATE_VARIABLE_IO_40_165;

              ModuleDepMap0_115 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_0_28);
              mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_12)), ((MR_Box) (MaybeModuleDepInfo_58)), ModuleDepMap0_115, &ModuleDepMap_116);
              make__make_info__make_info_set_module_dependencies_3_p_0(ModuleDepMap_116, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_39_120);
              MaybeTopModule_117 = ((MR_Word) ((MR_hl_field(0, ModuleSummary_56, (MR_Integer) 5))));
              NestedSubModules_118 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_117);
              {
                Var_121 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_121, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
                MR_hl_field(0, Var_121, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_3));
                MR_hl_field(0, Var_121, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_121, 3) = ((MR_Box) (Globals_9));
                MR_hl_field(0, Var_121, 4) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_121, 5) = ((MR_Box) (SearchDirs_11));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_121, NestedSubModules_118, ((MR_Box) (STATE_VARIABLE_Info_39_120)), &conv6_STATE_VARIABLE_Info_39_164, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_40_165);
              STATE_VARIABLE_Info_39_164 = ((MR_Word) (conv6_STATE_VARIABLE_Info_39_164));
              succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(STATE_VARIABLE_Info_39_164, NestedSubModules_118);
              if (succeeded)
                Result_161 = (MR_Word) (MR_mkword(1, &make__module_dep_file_scalar_common_2[3]));
              else
                Result_161 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          else
          {
            Result_161 = (MR_Word) (MR_mkword(1, &make__module_dep_file_scalar_common_2[4]));
            STATE_VARIABLE_Info_39_164 = STATE_VARIABLE_Info_0_28;
          }
          if ((Result_161 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_39_164;
          else
          {
            MR_String ErrorMsg_149 = ((MR_String) ((MR_hl_field(1, Result_161, (MR_Integer) 0))));
            MR_String Msg_150;
            MR_String Var_151;
            MR_String Var_152;

            Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "/", ModuleDepFile_15);
            Var_151 = mercury__string__f_43_43_2_f_0(ModuleDir_17, Var_152);
            make__module_dep_file__read_module_dependencies_remake_msg_4_p_0(RebuildModuleDeps_10, Var_151, ErrorMsg_149, &Msg_150);
            mercury__io__write_string_3_p_0(Msg_150);
            switch (RebuildModuleDeps_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_39_164;
                break;
              case (MR_Integer) 0:
                make__module_dep_file__make_module_dependencies_6_p_0(Globals_9, ModuleName_12, STATE_VARIABLE_Info_39_164, STATE_VARIABLE_Info_29);
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
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word MaybeErrorStream_11;
  MR_Word STATE_VARIABLE_Info_29_29;

  make__build__prepare_to_redirect_output_6_p_0(ModuleName_8, &MaybeErrorStream_11, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
  if ((MaybeErrorStream_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_29_29;
  else
  {
    MR_Word ErrorStream_12 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_11, (MR_Integer) 0))));
    MR_Word OldOutputStream_13;
    MR_Word HaveReadSrc_15;
    MR_Word Var_32;

    mercury__io__set_output_stream_4_p_0(ErrorStream_12, &OldOutputStream_13);
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) (ModuleName_8));
    }
    parse_tree__read_modules__read_module_src_11_p_0((MR_Word) ((MR_Unsigned) 0U), Globals_7, Var_32, (MR_Integer) 1, (MR_Integer) 0, ModuleName_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&make__module_dep_file_scalar_common_2[5]), &HaveReadSrc_15);
    if (((MR_tag((MR_Word) HaveReadSrc_15)) == (MR_Integer) 1))
    {
      MR_Word Var_48;
      MR_String SourceFileName_54 = ((MR_String) ((MR_hl_field(1, HaveReadSrc_15, (MR_Integer) 0))));
      MR_Word ReadModuleErrors_55 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_15, (MR_Integer) 1))));
      MR_Word FatalErrorSpecs0_56 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_55, (MR_Integer) 1))));
      MR_Word NonFatalErrorSpecs0_57 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_55, (MR_Integer) 3))));

      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs0_56, NonFatalErrorSpecs0_57);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_12, Globals_7, Var_48);
      make__module_dep_file__make_module_dependencies_fatal_error_11_p_0(Globals_7, OldOutputStream_13, ErrorStream_12, SourceFileName_54, ModuleName_8, ReadModuleErrors_55, (MR_Integer) 1, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26);
    }
    else
    {
      MR_String SourceFileName_16 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_15, (MR_Integer) 0))));
      MR_Word ParseTreeSrc_18 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_15, (MR_Integer) 2))));
      MR_Word ReadModuleErrors_19 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_15, (MR_Integer) 3))));
      MR_Word FatalErrorSpecs0_20 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_19, (MR_Integer) 1))));
      MR_Word NonFatalErrorSpecs0_21 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_19, (MR_Integer) 3))));
      MR_Word Fatal_22;
      MR_Word NonFatal_23;
      MR_Word Var_39;

      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FatalErrorSpecs0_20, NonFatalErrorSpecs0_21);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_12, Globals_7, Var_39);
      Fatal_22 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_19, (MR_Integer) 0))));
      NonFatal_23 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_19, (MR_Integer) 2))));
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Fatal_22);
      if (succeeded)
        make__module_dep_file__make_module_dependencies_fatal_error_11_p_0(Globals_7, OldOutputStream_13, ErrorStream_12, SourceFileName_16, ModuleName_8, ReadModuleErrors_19, (MR_Integer) 1, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26);
      else
      {
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatal_23, ((MR_Box) ((MR_Integer) 0)));
        if (succeeded)
          make__module_dep_file__make_module_dependencies_fatal_error_11_p_0(Globals_7, OldOutputStream_13, ErrorStream_12, SourceFileName_16, ModuleName_8, ReadModuleErrors_19, (MR_Integer) 0, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26);
        else
          make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0(Globals_7, OldOutputStream_13, ErrorStream_12, SourceFileName_16, ModuleName_8, ParseTreeSrc_18, ReadModuleErrors_19, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26);
      }
    }
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Info_12;

  make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv9_STATE_VARIABLE_Info_12);
  *wrapper_arg_2 = ((MR_Box) (conv9_STATE_VARIABLE_Info_12));
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_12;

  make__module_dep_file__cleanup_int3_files_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_STATE_VARIABLE_Info_12);
  *wrapper_arg_2 = ((MR_Box) (conv6_STATE_VARIABLE_Info_12));
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
  MR_Word conv4_HeadVar__5_5;

  parse_tree__write_module_interface_files__write_short_interface_file_int3_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__5_5));
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
  MR_Word conv0_LambdaHeadVar__2_56;

  conv0_LambdaHeadVar__2_56 = make__module_dep_file__IntroducedFrom__func__make_module_dependencies_no_fatal_error__946__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_56));
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
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  MR_bool succeeded;
  MR_Word Specs_21;
  MR_Word BurdenedModules_22;
  MR_Word ParseTreeModuleSrcs_23;
  MR_Word SubModuleNames_26;
  MR_Word MadeTarget_28;
  MR_String MadeTargetFileName_29;
  MR_Word VeryVerbose_30;
  MR_Word NonFatalErrors_31;
  MR_Word Succeeded_46;
  MR_Box CookieWMDF_47;
  MR_Word CleanupWMDF_48;
  MR_Word STATE_VARIABLE_Info_63_63;
  MR_Word STATE_VARIABLE_Info_78_78;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_Info_84_84;
  MR_Word STATE_VARIABLE_Info_87_87;
  MR_Word Var_27;
  MR_Box conv3_STATE_VARIABLE_Info_63_63;
  MR_Box conv8_STATE_VARIABLE_IO_82_82;
  MR_Word _Succeeded_49;
  MR_Box conv10_STATE_VARIABLE_Info_84_84;

  parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_6_p_0(Globals_12, SourceFileName_15, ParseTreeSrc_17, ReadModuleErrors_18, &Specs_21, &BurdenedModules_22);
  ParseTreeModuleSrcs_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&make__module_dep_file_scalar_common_4[6]), BurdenedModules_22);
  SubModuleNames_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__module_dep_file_scalar_common_4[7]), ParseTreeModuleSrcs_23);
  mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_14, Globals_12, Specs_21);
  mercury__io__set_output_stream_4_p_0(OldOutputStream_13, &Var_27);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__module_dep_file_scalar_common_4[8]), BurdenedModules_22, ((MR_Box) (STATE_VARIABLE_Info_0_50)), &conv3_STATE_VARIABLE_Info_63_63);
  STATE_VARIABLE_Info_63_63 = ((MR_Word) (conv3_STATE_VARIABLE_Info_63_63));
  {
    MadeTarget_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MadeTarget_28, 0) = ((MR_Box) (ModuleName_16));
    MR_hl_field(0, MadeTarget_28, 1) = ((MR_Box) ((MR_Unsigned) 20U));
  }
  make__file_names__get_make_target_file_name_6_p_0(Globals_12, (MR_String) "predicate \140make.module_dep_file.make_module_dependencies_no_fatal_error\'/11", MadeTarget_28, &MadeTargetFileName_29);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 73, &VeryVerbose_30);
  NonFatalErrors_31 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_18, (MR_Integer) 2))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_31);
  if (succeeded)
  {
    MR_String MakingMsg_32;
    MR_Box CookieMSI_33;
    MR_Word DefaultOptionTable_34;
    MR_Word DetectedGradeFlags_35;
    MR_Word OptionVariables_36;
    MR_Word OptionArgs_37;
    MR_Word MayBuild_39;
    MR_Word Succeeded0_41;
    MR_Word CleanupMSI_45;
    MR_Word STATE_VARIABLE_Info_76_76;
    MR_Box conv7_STATE_VARIABLE_Info_78_78;

    make__util__maybe_making_filename_msg_3_p_0(Globals_12, MadeTargetFileName_29, &MakingMsg_32);
    make__util__maybe_write_msg_4_p_0(OldOutputStream_13, MakingMsg_32);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&CookieMSI_33);
    libs__globals__get_default_options_2_p_0(Globals_12, &DefaultOptionTable_34);
    DetectedGradeFlags_35 = make__make_info__make_info_get_detected_grade_flags_1_f_0(STATE_VARIABLE_Info_63_63);
    OptionVariables_36 = make__make_info__make_info_get_options_variables_1_f_0(STATE_VARIABLE_Info_63_63);
    OptionArgs_37 = make__make_info__make_info_get_option_args_1_f_0(STATE_VARIABLE_Info_63_63);
    make__build__setup_for_build_with_module_options_10_p_0(DefaultOptionTable_34, (MR_Integer) 1, ModuleName_16, DetectedGradeFlags_35, OptionVariables_36, OptionArgs_37, (MR_Word) (MR_mkword(1, &make__module_dep_file_scalar_common_1[4])), &MayBuild_39);
    if (((MR_tag((MR_Word) MayBuild_39)) == (MR_Integer) 1))
    {
      MR_Word BuildGlobals_43 = ((MR_Word) ((MR_hl_field(1, MayBuild_39, (MR_Integer) 1))));
      MR_Word ProgressStream_44;
      MR_Word Succeededs_117;
      MR_Word Var_118;
      MR_Box conv5_STATE_VARIABLE_IO_74_74;

      mercury__io__output_stream_3_p_0(&ProgressStream_44);
      {
        Var_118 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_118, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
        MR_hl_field(0, Var_118, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_4));
        MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_118, 3) = ((MR_Box) (ProgressStream_44));
        MR_hl_field(0, Var_118, 4) = ((MR_Box) (ErrorStream_14));
        MR_hl_field(0, Var_118, 5) = ((MR_Box) (BuildGlobals_43));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, ParseTreeModuleSrcs_23, &Succeededs_117, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_74_74);
      Succeeded0_41 = libs__maybe_util__and_list_1_f_0(Succeededs_117);
      STATE_VARIABLE_Info_76_76 = STATE_VARIABLE_Info_63_63;
    }
    else
    {
      MR_Word MSISpecs_40 = ((MR_Word) ((MR_hl_field(0, MayBuild_39, (MR_Integer) 0))));

      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_14, Globals_12, MSISpecs_40);
      Succeeded0_41 = (MR_Integer) 0;
      STATE_VARIABLE_Info_76_76 = STATE_VARIABLE_Info_63_63;
    }
    {
      CleanupMSI_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CleanupMSI_45, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[0]));
      MR_hl_field(0, CleanupMSI_45, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_5));
      MR_hl_field(0, CleanupMSI_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, CleanupMSI_45, 3) = ((MR_Box) (Globals_12));
      MR_hl_field(0, CleanupMSI_45, 4) = ((MR_Box) (SubModuleNames_26));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_30, CookieMSI_33, CleanupMSI_45, Succeeded0_41, &Succeeded_46, ((MR_Box) (STATE_VARIABLE_Info_76_76)), &conv7_STATE_VARIABLE_Info_78_78);
    STATE_VARIABLE_Info_78_78 = ((MR_Word) (conv7_STATE_VARIABLE_Info_78_78));
  }
  else
  {
    Succeeded_46 = (MR_Integer) 0;
    STATE_VARIABLE_Info_78_78 = STATE_VARIABLE_Info_63_63;
  }
  libs__process_util__setup_checking_for_interrupt_3_p_0(&CookieWMDF_47);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_6));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (Globals_12));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, BurdenedModules_22, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_82_82);
  {
    CleanupWMDF_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CleanupWMDF_48, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[0]));
    MR_hl_field(0, CleanupWMDF_48, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_no_fatal_error_11_p_0_7));
    MR_hl_field(0, CleanupWMDF_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, CleanupWMDF_48, 3) = ((MR_Box) (Globals_12));
    MR_hl_field(0, CleanupWMDF_48, 4) = ((MR_Box) (SubModuleNames_26));
  }
  libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_30, CookieWMDF_47, CleanupWMDF_48, (MR_Integer) 1, &_Succeeded_49, ((MR_Box) (STATE_VARIABLE_Info_78_78)), &conv10_STATE_VARIABLE_Info_84_84);
  STATE_VARIABLE_Info_84_84 = ((MR_Word) (conv10_STATE_VARIABLE_Info_84_84));
  make__module_target__record_made_target_9_p_0(Globals_12, MadeTarget_28, MadeTargetFileName_29, (MR_Word) (&make__module_dep_file_scalar_common_2[7]), Succeeded_46, STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_87_87);
  make__build__unredirect_output_7_p_0(Globals_12, ModuleName_16, ErrorStream_14, STATE_VARIABLE_Info_87_87, STATE_VARIABLE_Info_51);
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

  Specs0_21 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_17);
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_14, Globals_12, Specs0_21);
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
        Var_39 = make__make_info__make_info_get_importing_module_1_f_0(STATE_VARIABLE_Info_0_28);
        if (!((Var_39 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word ImportOrInclude_61 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));

          if (((MR_tag((MR_Word) ImportOrInclude_61)) == (MR_Integer) 0))
          {
            MR_Word ImportingModuleName_62 = ((MR_Word) ((MR_hl_field(0, ImportOrInclude_61, (MR_Integer) 0))));
            MR_String Var_69;
            MR_String Var_72;

            Var_69 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_16);
            Var_72 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ImportingModuleName_62);
            mercury__io__write_string_3_p_0((MR_String) "** Module \140");
            mercury__io__write_string_3_p_0(Var_69);
            mercury__io__write_string_3_p_0((MR_String) "\' is imported by module \140");
            mercury__io__write_string_3_p_0(Var_72);
            mercury__io__write_string_3_p_0((MR_String) "\'.\n");
          }
          else
          {
            MR_Word IncludingModuleName_63 = ((MR_Word) ((MR_hl_field(1, ImportOrInclude_61, (MR_Integer) 0))));
            MR_String Var_77;
            MR_String Var_80;

            Var_77 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_16);
            Var_80 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(IncludingModuleName_63);
            mercury__io__write_string_3_p_0((MR_String) "** Module \140");
            mercury__io__write_string_3_p_0(Var_77);
            mercury__io__write_string_3_p_0((MR_String) "\' is included by module \140");
            mercury__io__write_string_3_p_0(Var_80);
            mercury__io__write_string_3_p_0((MR_String) "\'.\n");
          }
        }
      }
      break;
  }
  libs__globals__set_option_4_p_0((MR_Integer) 79, (MR_Word) (MR_mkword(3, &make__module_dep_file_scalar_common_1[3])), Globals_12, &UnredirectGlobals_23);
  make__build__unredirect_output_7_p_0(UnredirectGlobals_23, ModuleName_16, ErrorStream_14, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_44_44);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_12, (MR_String) "predicate \140make.module_dep_file.make_module_dependencies_fatal_error\'/11", (MR_Word) (&make__module_dep_file_scalar_common_2[6]), ModuleName_16, &ErrFileName_24);
  mercury__io__file__remove_file_4_p_0(ErrFileName_24, &Var_25);
  ModuleDepMap0_26 = make__make_info__make_info_get_module_dependencies_1_f_0(STATE_VARIABLE_Info_44_44);
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_26, &ModuleDepMap_27);
  make__make_info__make_info_set_module_dependencies_3_p_0(ModuleDepMap_27, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_29);
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_4_p_0(
  MR_Word RebuildModuleDeps_5,
  MR_String ModuleDepsFile_6,
  MR_String ErrorMsg_7,
  MR_String * Msg_8)
{
  MR_String RebuildSuffix_9;
  MR_String Var_19;
  MR_String Var_20;
  MR_String Var_22;
  MR_String Var_23;

  switch (RebuildModuleDeps_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      RebuildSuffix_9 = (MR_String) "";
      break;
    case (MR_Integer) 0:
      RebuildSuffix_9 = (MR_String) " ...rebuilding";
      break;
  }
  Var_19 = mercury__string__f_43_43_2_f_0(RebuildSuffix_9, (MR_String) "\n");
  Var_20 = mercury__string__f_43_43_2_f_0(ErrorMsg_7, Var_19);
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_20);
  Var_23 = mercury__string__f_43_43_2_f_0(ModuleDepsFile_6, Var_22);
  *Msg_8 = mercury__string__f_43_43_2_f_0((MR_String) "** Error reading file \140", Var_23);
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
    MR_Word Error_11 = ((MR_Word) ((MR_hl_field(1, ResFileType_9, (MR_Integer) 0))));
    MR_String Var_17;
    MR_String Var_18;
    MR_String Var_20;

    Var_20 = mercury__io__error_message_1_f_0(Error_11);
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_20);
    Var_17 = mercury__string__f_43_43_2_f_0(FileName_5, Var_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *FileExists_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
    }
  }
  else
  {
    MR_Word FileType_10 = ((MR_Word) ((MR_hl_field(0, ResFileType_9, (MR_Integer) 0))));

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
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *FileExists_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
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
    MR_Box conv1_Var_10;

    (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_6 = make__make_info__make_info_get_module_dependencies_1_f_0((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3);
    (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7 = (MR_Word) ((MR_Unsigned) 0U);
    (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_9_9 = (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0);
    (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_8_8, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_9_9, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_6, ((MR_Box) ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &conv1_Var_10);
    if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
    {
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_10 = ((MR_Word) (conv1_Var_10));
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
    {
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = make__make_info____Unify____maybe_module_dep_info_0_0((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_7, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Var_10);
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
      (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_8_8 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      mercury__list__member_2_p_1((env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_8_8, &(env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, env_ptr);
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

  succeeded = make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__679__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
make__module_dep_file__parse_module_summary_file_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__module_dep_file__IntroducedFrom__pred__parse_module_summary_file__674__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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

  succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__718__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_7);
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
    Var_96 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    ModuleArgs_9 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_93 = ((MR_String) ((MR_hl_field(0, Var_96, (MR_Integer) 0))));
      succeeded = (strcmp((MR_String) "module", Var_93) == 0);
      if (succeeded)
      {
        succeeded = (ModuleArgs_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          VersionNumberTerm_10 = ((MR_Word) ((MR_hl_field(1, ModuleArgs_9, (MR_Integer) 0))));
          Var_43 = ((MR_Word) ((MR_hl_field(1, ModuleArgs_9, (MR_Integer) 1))));
          succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SourceFileTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SourceFileModuleNameTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
              Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
              succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ParentsTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
                Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 1))));
                succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  IntDepsTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 0))));
                  Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));
                  succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ImpDepsTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
                    Var_48 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 1))));
                    succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ChildrenTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
                      Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));
                      succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NestedSubModulesTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
                        Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));
                        succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FactDepsTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
                          Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
                          succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ForeignLanguagesTerm_19 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));
                            Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
                            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ForeignImportsTerm_20 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
                              Var_53 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 1))));
                              succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                ContainsForeignExportTerm_21 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
                                Var_54 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 1))));
                                succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  ModuleArgsTail_23 = ((MR_Word) ((MR_hl_field(1, Var_54, (MR_Integer) 1))));
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
                                        Var_100 = ((MR_Word) ((MR_hl_field(0, SourceFileTerm_11, (MR_Integer) 0))));
                                        Var_101 = ((MR_Word) ((MR_hl_field(0, SourceFileTerm_11, (MR_Integer) 1))));
                                        succeeded = (Var_101 == (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          succeeded = ((MR_tag((MR_Word) Var_100)) == (MR_Integer) 2);
                                          if (succeeded)
                                          {
                                            SourceFileName_25 = ((MR_String) ((MR_hl_field(2, Var_100, (MR_Integer) 0))));
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
                                                Var_111 = ((MR_Word) ((MR_hl_field(0, ParentsTerm_13, (MR_Integer) 0))));
                                                ArgTerms_105 = ((MR_Word) ((MR_hl_field(0, ParentsTerm_13, (MR_Integer) 1))));
                                                succeeded = ((MR_tag((MR_Word) Var_111)) == (MR_Integer) 0);
                                                if (succeeded)
                                                {
                                                  Var_109 = ((MR_String) ((MR_hl_field(0, Var_111, (MR_Integer) 0))));
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
                                                                          ForeignIncludesTerm_37 = ((MR_Word) ((MR_hl_field(1, ModuleArgsTail_23, (MR_Integer) 0))));
                                                                          Var_58 = ((MR_Word) ((MR_hl_field(1, ModuleArgsTail_23, (MR_Integer) 1))));
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
                                                                            MaybeTopModule_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                                                            MR_hl_field(1, MaybeTopModule_38, 0) = ((MR_Box) (Var_60));
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          MR_Word Var_61;

                                                                          MaybeTopModule_38 = (MR_Word) ((MR_Unsigned) 0U);
                                                                          {
                                                                            Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                                                            MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[5]));
                                                                            MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__module_dep_file__parse_module_summary_file_4_p_0_2));
                                                                            MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                                                                            MR_hl_field(0, Var_61, 3) = ((MR_Box) (NestedSubModules0_31));
                                                                            MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
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
                                                                          MR_hl_field(0, Var_65, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[6]));
                                                                          MR_hl_field(0, Var_65, 1) = ((MR_Box) (make__module_dep_file__parse_module_summary_file_4_p_0_3));
                                                                          MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                                                                          MR_hl_field(0, Var_65, 3) = ((MR_Box) (ParentsSet_39));
                                                                          MR_hl_field(0, Var_65, 4) = ((MR_Box) (AncestorsSet_40));
                                                                        }
                                                                        mercury__require__expect_3_p_0(Var_65, Var_66, Var_67);
                                                                        Var_68 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_81_81, ForeignLanguages_33);
                                                                        {
                                                                          ContainsForeignCode_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                                                          MR_hl_field(1, ContainsForeignCode_41, 0) = ((MR_Box) (Var_68));
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
                                                                          MR_hl_field(0, base, 0) = ((MR_Box) (SourceFileName_25));
                                                                          MR_hl_field(0, base, 1) = ((MR_Box) (ModuleDir_6));
                                                                          MR_hl_field(0, base, 2) = ((MR_Box) (SourceFileModuleName_26));
                                                                          MR_hl_field(0, base, 3) = ((MR_Box) (ModuleName_5));
                                                                          MR_hl_field(0, base, 4) = ((MR_Box) (Var_69));
                                                                          MR_hl_field(0, base, 5) = ((MR_Box) (MaybeTopModule_38));
                                                                          MR_hl_field(0, base, 6) = ((MR_Box) (Var_70));
                                                                          MR_hl_field(0, base, 7) = ((MR_Box) (Var_71));
                                                                          MR_hl_field(0, base, 8) = ((MR_Box) (Var_72));
                                                                          MR_hl_field(0, base, 9) = ((MR_Box) (Var_73));
                                                                          MR_hl_field(0, base, 10) = ((MR_Box) (Var_74));
                                                                          MR_hl_field(0, base, 11) = ((MR_Box) (ContainsForeignCode_41));
                                                                          MR_hl_field(0, base, 12) = (MR_Box) ((MR_Unsigned) (ContainsForeignExport_35));
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
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
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
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
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
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
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
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_11 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
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
    Var_10 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_5 = ((MR_String) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
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

  succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__718__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_7);
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
    Var_17 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    ArgTerms_11 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_15 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
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
