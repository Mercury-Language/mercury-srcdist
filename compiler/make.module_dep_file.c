/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version DEV
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module make.module_dep_file. */
/* :- implementation. */

/*
INIT mercury__make__module_dep_file__init
ENDINIT
*/

#include "make.module_dep_file.mih"


#include "backend_libs.mih"
#include "hlds.mih"
#include "libs.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "top_level.mercury_compile.mih"
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
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7;
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29;
  MR_Box make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5;
};


static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;

static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0;

static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1;

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2];

static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2];

static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2];

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2);

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
  MR_Box * make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
  MR_Word make__module_dep_file__ErrorStream_11,
  MR_String make__module_dep_file__SourceFileName_12,
  MR_Word make__module_dep_file__RawCompUnits_13,
  MR_Word make__module_dep_file__Globals_14,
  MR_Word * make__module_dep_file__Succeeded_16,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
  MR_Word make__module_dep_file__Term_5,
  MR_Word * make__module_dep_file__Args_6);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
  MR_Word make__module_dep_file__Term_5,
  MR_Word * make__module_dep_file__Args_6);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
  MR_Word make__module_dep_file__Term_5,
  MR_Word * make__module_dep_file__Args_6);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
  MR_Word make__module_dep_file__Term_5,
  MR_Word * make__module_dep_file__Args_6);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__947__1_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__LambdaHeadVar__1_23,
  MR_Word make__module_dep_file__LambdaHeadVar__2_24,
  MR_Word * make__module_dep_file__LambdaHeadVar__3_25);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__935__1_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__LambdaHeadVar__1_23,
  MR_Word make__module_dep_file__LambdaHeadVar__2_24,
  MR_Word * make__module_dep_file__LambdaHeadVar__3_25);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__ModuleAndImportList_34,
  MR_Word * make__module_dep_file__LambdaHeadVar__1_117,
  MR_Word make__module_dep_file__LambdaHeadVar__2_118,
  MR_Word * make__module_dep_file__LambdaHeadVar__3_119);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__871__1_3_p_0(
  MR_Word make__module_dep_file__LambdaHeadVar__1_94,
  MR_Word make__module_dep_file__LambdaHeadVar__2_95,
  MR_Word * make__module_dep_file__LambdaHeadVar__3_96);

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__692__1_2_p_0(
  MR_Word make__module_dep_file__HeadVar__1_6,
  MR_Word * make__module_dep_file__HeadVar__2_7);

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__383__1_3_p_0(
  MR_String make__module_dep_file__HeadVar__1_454);

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__247__1_1_f_0(
  MR_String make__module_dep_file__LambdaHeadVar__1_58);

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
  MR_Word * make__module_dep_file__HeadVar__1_1,
  MR_Word make__module_dep_file__HeadVar__2_2,
  MR_Word make__module_dep_file__HeadVar__3_3);

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
  MR_Word make__module_dep_file__HeadVar__2_1,
  MR_Word make__module_dep_file__HeadVar__2_2);

static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
  MR_Word make__module_dep_file__ModuleName_1,
  MR_Word make__module_dep_file__HeadVar__2_2);

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__SubModuleNames_8,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__SubModuleNames_8,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
  MR_Word make__module_dep_file__ErrorStream_11,
  MR_String make__module_dep_file__SourceFileName_12,
  MR_Word make__module_dep_file__RawCompUnits_13,
  MR_Word make__module_dep_file__Globals_14,
  MR_Word make__module_dep_file__HeadVar__5_15,
  MR_Word * make__module_dep_file__Succeeded_16,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2,
  MR_Box make__module_dep_file__wrapper_arg_3,
  MR_Box * make__module_dep_file__wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box * make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2,
  MR_Box make__module_dep_file__wrapper_arg_3,
  MR_Box * make__module_dep_file__wrapper_arg_4);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box * make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5,
  MR_Box make__module_dep_file__wrapper_arg_6,
  MR_Box * make__module_dep_file__wrapper_arg_7);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2);

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__ModuleName_8,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
  MR_Word make__module_dep_file__RebuildModuleDeps_6,
  MR_String make__module_dep_file__ModuleDepsFile_7,
  MR_String make__module_dep_file__Msg_8);

static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
  MR_String make__module_dep_file__FileName_5,
  MR_Word * make__module_dep_file__FileExists_6);

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
  void * make__module_dep_file__env_ptr_arg);

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
  void * make__module_dep_file__env_ptr_arg);

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
  void * make__module_dep_file__env_ptr_arg);

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
  void * make__module_dep_file__env_ptr_arg);

static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
  MR_Word make__module_dep_file__Info_3,
  MR_Word make__module_dep_file__ModuleNames_4);

static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__HasMain_4);

static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
  MR_Word make__module_dep_file__HeadVar__1_1);

static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__ContainsForeignExport_4);

static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__ForeignInclude_4);

static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__ForeignImport_4);

static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__Lang_4);

static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_String * make__module_dep_file__FactDep_4);

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2);

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__SymNames_4);

static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
  MR_Word make__module_dep_file__Term_4,
  MR_String * make__module_dep_file__Atom_5,
  MR_Word * make__module_dep_file__Args_6);

static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_String * make__module_dep_file__String_4);

static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__Version_4);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_3(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
  MR_Word make__module_dep_file__Globals_12,
  MR_Word make__module_dep_file__SearchDirs_13,
  MR_Word make__module_dep_file__ModuleName_14,
  MR_String make__module_dep_file__ModuleDir_15,
  MR_String make__module_dep_file__ModuleDepFile_16,
  MR_Word make__module_dep_file__Term_17,
  MR_Word * make__module_dep_file__Result_18,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_72,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_73);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
  MR_Word make__module_dep_file__Globals_9,
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
  MR_Word make__module_dep_file__SearchDirs_11,
  MR_Word make__module_dep_file__ModuleName_12,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_27,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_28);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
  MR_Word make__module_dep_file__Globals_8,
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
  MR_Word make__module_dep_file__ModuleName_10,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14);

static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
  MR_Word make__module_dep_file__Globals_8,
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
  MR_Word make__module_dep_file__ModuleName_10,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15);

static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
  MR_Word make__module_dep_file__HasMain_3,
  MR_String * make__module_dep_file__HasMainStr_4);

static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
  MR_Word make__module_dep_file__ContainsForeignExport_3,
  MR_String * make__module_dep_file__ContainsForeignExportStr_4);

static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
  MR_Word make__module_dep_file__ForeignInclude_4);

static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
  MR_Word make__module_dep_file__ForeignImportModule_4);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
  MR_Word make__module_dep_file__ModuleAndImports_5,
  MR_Word make__module_dep_file__Version_6);

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
  MR_Word make__module_dep_file__Globals_5,
  MR_Word make__module_dep_file__ModuleAndImports_6);

static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
  MR_Word make__module_dep_file__HeadVar__1_1,
  MR_Word * make__module_dep_file__HeadVar__2_2);

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_2(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2);

static MR_Box MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1);

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
  MR_Word make__module_dep_file__Globals_9,
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
  MR_Word make__module_dep_file__ModuleName_11,
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_36,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_37,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_38);

static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
  MR_Word make__module_dep_file__Globals_9,
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
  MR_Word make__module_dep_file__ModuleName_11,
  MR_Word * make__module_dep_file__MaybeModuleAndImports_12,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17);

static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
  MR_Word make__module_dep_file__Globals_1,
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
  MR_Word make__module_dep_file__ModuleName_3,
  MR_Word make__module_dep_file__HeadVar__4_4,
  MR_Word * make__module_dep_file__HeadVar__5_5,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_6,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7);

static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
  MR_Word make__module_dep_file__HeadVar__1_1,
  MR_Integer * make__module_dep_file__HeadVar__2_2);

static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5,
  MR_Box make__module_dep_file__wrapper_arg_6,
  MR_Box * make__module_dep_file__wrapper_arg_7);


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[8][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[2][12];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[7][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[18][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][7];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[7][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[2][8];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[6][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][13];

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][10];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[2][12] = {
  /* row 0 */
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
  /* row 1 */
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
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[3])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[4])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[5])),
    ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[1])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[2])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[6])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[5])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[6])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][7] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[7][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_modules_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[2][8] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][11] = {
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
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[6][1] = {
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][13] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[2][9] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][10] = {
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



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__string__string__type_ctor_info_poly_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0
  }
};

static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
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
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2)
{
  {
    MR_bool make__module_dep_file__succeeded;

    {
      make__module_dep_file__succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2));
    }
    return make__module_dep_file__succeeded;
  }
}

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
  MR_Box * make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Word make__module_dep_file__conv0_HeadVar__1_1;

    {
      make__module_dep_file____Compare____module_dep_file_version_0_0(&make__module_dep_file__conv0_HeadVar__1_1, ((MR_Word) make__module_dep_file__wrapper_arg_2), ((MR_Word) make__module_dep_file__wrapper_arg_3));
    }
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
  MR_Word make__module_dep_file__ErrorStream_11,
  MR_String make__module_dep_file__SourceFileName_12,
  MR_Word make__module_dep_file__RawCompUnits_13,
  MR_Word make__module_dep_file__Globals_14,
  MR_Word * make__module_dep_file__Succeeded_16,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__OutputStream_19;
    MR_Integer make__module_dep_file__ExitStatus_21;
    MR_Word make__module_dep_file__V_27_27;
    MR_Box make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28;
    MR_Word make__module_dep_file__V_20_20;

    {
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_11, &make__module_dep_file__OutputStream_19);
    }
    {
      make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_14));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_12));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__RawCompUnits_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28);
    }
    {
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__OutputStream_19, &make__module_dep_file__V_20_20);
    }
    {
      mercury__io__get_exit_status_3_p_0(&make__module_dep_file__ExitStatus_21);
    }
    make__module_dep_file__succeeded = (make__module_dep_file__ExitStatus_21 == (MR_Integer) 0);
    if (make__module_dep_file__succeeded)
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 1;
    else
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 0;
    *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_String make__module_dep_file__conv0_FactDep_4;

    {
      make__module_dep_file__succeeded = make__module_dep_file__fact_dep_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_FactDep_4);
    }
    if (make__module_dep_file__succeeded)
      {
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_FactDep_4));
        make__module_dep_file__succeeded = MR_TRUE;
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
  MR_Word make__module_dep_file__Term_5,
  MR_Word * make__module_dep_file__Args_6)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__TypeInfo_10_10;
    MR_Word make__module_dep_file__ArgTerms_7;
    MR_String make__module_dep_file__V_11_11;
    MR_Word make__module_dep_file__V_16_16;
    MR_Word make__module_dep_file__V_15_15;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
                {
                  make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_dep_file_scalar_common_4[17], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
              }
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv0_Lang_4;

    {
      make__module_dep_file__succeeded = make__module_dep_file__foreign_language_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_Lang_4);
    }
    if (make__module_dep_file__succeeded)
      {
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_Lang_4));
        make__module_dep_file__succeeded = MR_TRUE;
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
  MR_Word make__module_dep_file__Term_5,
  MR_Word * make__module_dep_file__Args_6)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__TypeInfo_10_10;
    MR_Word make__module_dep_file__ArgTerms_7;
    MR_String make__module_dep_file__V_11_11;
    MR_Word make__module_dep_file__V_16_16;
    MR_Word make__module_dep_file__V_15_15;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
                {
                  make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &make__module_dep_file_scalar_common_4[16], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
              }
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv0_ForeignImport_4;

    {
      make__module_dep_file__succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignImport_4);
    }
    if (make__module_dep_file__succeeded)
      {
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignImport_4));
        make__module_dep_file__succeeded = MR_TRUE;
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
  MR_Word make__module_dep_file__Term_5,
  MR_Word * make__module_dep_file__Args_6)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__TypeInfo_10_10;
    MR_Word make__module_dep_file__ArgTerms_7;
    MR_String make__module_dep_file__V_11_11;
    MR_Word make__module_dep_file__V_16_16;
    MR_Word make__module_dep_file__V_15_15;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
                {
                  make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[15], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
              }
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv0_ForeignInclude_4;

    {
      make__module_dep_file__succeeded = make__module_dep_file__foreign_include_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignInclude_4);
    }
    if (make__module_dep_file__succeeded)
      {
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignInclude_4));
        make__module_dep_file__succeeded = MR_TRUE;
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
  MR_Word make__module_dep_file__Term_5,
  MR_Word * make__module_dep_file__Args_6)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__TypeInfo_10_10;
    MR_Word make__module_dep_file__ArgTerms_7;
    MR_String make__module_dep_file__V_11_11;
    MR_Word make__module_dep_file__V_16_16;
    MR_Word make__module_dep_file__V_15_15;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
                {
                  make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[14], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
              }
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__947__1_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__LambdaHeadVar__1_23,
  MR_Word make__module_dep_file__LambdaHeadVar__2_24,
  MR_Word * make__module_dep_file__LambdaHeadVar__3_25)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_String make__module_dep_file__V_29_29;

    {
      make__module_dep_file__V_29_29 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      make__util__make_remove_module_file_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 52, make__module_dep_file__LambdaHeadVar__1_23, make__module_dep_file__V_29_29, make__module_dep_file__LambdaHeadVar__2_24, make__module_dep_file__LambdaHeadVar__3_25);
    }
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__935__1_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__LambdaHeadVar__1_23,
  MR_Word make__module_dep_file__LambdaHeadVar__2_24,
  MR_Word * make__module_dep_file__LambdaHeadVar__3_25)
{
  {
    MR_bool make__module_dep_file__succeeded;

    {
      make__util__make_remove_target_file_by_name_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 48, make__module_dep_file__LambdaHeadVar__1_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), make__module_dep_file__LambdaHeadVar__2_24, make__module_dep_file__LambdaHeadVar__3_25);
    }
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__ModuleAndImportList_34,
  MR_Word * make__module_dep_file__LambdaHeadVar__1_117,
  MR_Word make__module_dep_file__LambdaHeadVar__2_118,
  MR_Word * make__module_dep_file__LambdaHeadVar__3_119)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__V_122_122;
    MR_Box make__module_dep_file__conv0_LambdaHeadVar__5_121;

    {
      make__module_dep_file__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0_1));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_122_122, make__module_dep_file__ModuleAndImportList_34, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_LambdaHeadVar__5_121);
    }
    *make__module_dep_file__LambdaHeadVar__1_117 = (MR_Integer) 1;
    *make__module_dep_file__LambdaHeadVar__3_119 = make__module_dep_file__LambdaHeadVar__2_118;
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__871__1_3_p_0(
  MR_Word make__module_dep_file__LambdaHeadVar__1_94,
  MR_Word make__module_dep_file__LambdaHeadVar__2_95,
  MR_Word * make__module_dep_file__LambdaHeadVar__3_96)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__SubModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 2)));
    MR_Word make__module_dep_file__V_97_97;
    MR_Word make__module_dep_file__V_98_98;
    MR_Word make__module_dep_file__V_99_99;
    MR_String make__module_dep_file__V_198_198 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 0)));
    MR_Word make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 1)));
    MR_Word make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 3)));
    MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 4)));
    MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 5)));
    MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 6)));
    MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 7)));
    MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 8)));
    MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 9)));
    MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 10)));
    MR_Word make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 11)));
    MR_Word make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 12)));
    MR_Word make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 13)));
    MR_Word make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 14)));
    MR_Word make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 15)));
    MR_Word make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 16)));
    MR_Word make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 17)));
    MR_Word make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 18)));
    MR_Word make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 19)));
    MR_Word make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 20)));
    MR_Word make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 21)));
    MR_Word make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 22)));
    MR_Word make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 23)));
    MR_Word make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 24)));
    MR_Word make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 25)));
    MR_String make__module_dep_file__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 26)));
    MR_Word make__module_dep_file__V_224_224;
    MR_Word make__module_dep_file__V_225_225;
    MR_Word make__module_dep_file__V_226_226;
    MR_Word make__module_dep_file__V_227_227;
    MR_Word make__module_dep_file__V_228_228;
    MR_Word make__module_dep_file__V_229_229;
    MR_Word make__module_dep_file__V_230_230;
    MR_Word make__module_dep_file__V_231_231;
    MR_Word make__module_dep_file__V_232_232;
    MR_Word make__module_dep_file__V_233_233;
    MR_Word make__module_dep_file__V_234_234;
    MR_Word make__module_dep_file__V_235_235;
    MR_Word make__module_dep_file__V_236_236;
    MR_Word make__module_dep_file__V_237_237;
    MR_Word make__module_dep_file__V_238_238;
    MR_Word make__module_dep_file__V_239_239;
    MR_Word make__module_dep_file__V_240_240;
    MR_Integer make__module_dep_file__V_241_241;
    MR_Word make__module_dep_file__V_242_242;
    MR_Word make__module_dep_file__V_244_244;
    MR_Word make__module_dep_file__V_245_245;
    MR_Word make__module_dep_file__V_246_246;
    MR_Word make__module_dep_file__V_247_247;
    MR_Word make__module_dep_file__V_248_248;
    MR_Word make__module_dep_file__V_249_249;
    MR_Word make__module_dep_file__V_250_250;
    MR_Word make__module_dep_file__V_251_251;
    MR_Word make__module_dep_file__V_252_252;
    MR_Word make__module_dep_file__V_253_253;
    MR_Word make__module_dep_file__V_254_254;
    MR_Word make__module_dep_file__V_255_255;
    MR_Word make__module_dep_file__V_256_256;
    MR_Word make__module_dep_file__V_257_257;
    MR_Word make__module_dep_file__V_258_258;
    MR_Word make__module_dep_file__V_259_259;
    MR_Word make__module_dep_file__V_260_260;
    MR_Integer make__module_dep_file__V_261_261;
    MR_Word make__module_dep_file__V_262_262;
    MR_Word make__module_dep_file__V_243_243;

    {
      make__module_dep_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_97_97, 0) = ((MR_Box) (make__module_dep_file__LambdaHeadVar__1_94));
    }
    make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 0)));
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 1)));
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 2)));
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 3)));
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 4)));
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 5)));
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 6)));
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 7)));
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 8)));
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 9)));
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 10)));
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 11)));
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 12)));
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 13)));
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 14)));
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 15)));
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 16)));
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 17)));
    make__module_dep_file__V_241_241 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 18)));
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 19)));
    {
      make__module_dep_file__V_99_99 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__SubModuleName_37)), make__module_dep_file__V_98_98, ((MR_Box) (make__module_dep_file__V_97_97)));
    }
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 0)));
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 1)));
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 2)));
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 3)));
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 4)));
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 5)));
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 6)));
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 7)));
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 8)));
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 9)));
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 10)));
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 11)));
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 12)));
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 13)));
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 14)));
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 15)));
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 16)));
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 17)));
    make__module_dep_file__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 18)));
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 19)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
      *make__module_dep_file__LambdaHeadVar__3_96 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_99_99));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_244_244));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_245_245));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_246_246));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_247_247));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_248_248));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_249_249));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_250_250));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_251_251));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_252_252));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_253_253));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_254_254));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_255_255));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_256_256));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_257_257));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_258_258));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_259_259));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_260_260));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_261_261));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_262_262));
    }
  }
}

static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__692__1_2_p_0(
  MR_Word make__module_dep_file__HeadVar__1_6,
  MR_Word * make__module_dep_file__HeadVar__2_7)
{
  {
    MR_bool make__module_dep_file__succeeded;

    {
      make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, make__module_dep_file__HeadVar__1_6, make__module_dep_file__HeadVar__2_7);
    }
    return make__module_dep_file__succeeded;
  }
}

static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__383__1_3_p_0(
  MR_String make__module_dep_file__HeadVar__1_454)
{
  {
    MR_bool make__module_dep_file__succeeded;

    {
      mercury__io__write_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_dep_file__HeadVar__1_454)));
    }
  }
}

static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__247__1_1_f_0(
  MR_String make__module_dep_file__LambdaHeadVar__1_58)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_String make__module_dep_file__LambdaHeadVar__2_59;
    MR_String make__module_dep_file__V_61_61;

    {
      make__module_dep_file__V_61_61 = mercury__string__f_43_43_2_f_0(make__module_dep_file__LambdaHeadVar__1_58, (MR_String) "\'");
    }
    {
      make__module_dep_file__LambdaHeadVar__2_59 = mercury__string__f_43_43_2_f_0((MR_String) "\140", make__module_dep_file__V_61_61);
    }
    return make__module_dep_file__LambdaHeadVar__2_59;
  }
}

static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
  MR_Word * make__module_dep_file__HeadVar__1_1,
  MR_Word make__module_dep_file__HeadVar__2_2,
  MR_Word make__module_dep_file__HeadVar__3_3)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Integer make__module_dep_file__Cast_HeadVar1_4 = (MR_Integer) make__module_dep_file__HeadVar__2_2;
    MR_Integer make__module_dep_file__Cast_HeadVar2_5 = (MR_Integer) make__module_dep_file__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(make__module_dep_file__HeadVar__1_1, make__module_dep_file__Cast_HeadVar1_4, make__module_dep_file__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
  MR_Word make__module_dep_file__HeadVar__2_1,
  MR_Word make__module_dep_file__HeadVar__2_2)
{
  {
    MR_bool make__module_dep_file__succeeded = (make__module_dep_file__HeadVar__2_1 == make__module_dep_file__HeadVar__2_2);

    return make__module_dep_file__succeeded;
  }
}

static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
  MR_Word make__module_dep_file__ModuleName_1,
  MR_Word make__module_dep_file__HeadVar__2_2)
{
  {
    MR_bool make__module_dep_file__succeeded;

    if ((make__module_dep_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word make__module_dep_file__ImportingModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "** Module \140");
        }
        {
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ModuleName_1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
        }
        {
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ImportingModuleName_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\'.\n");
        }
      }
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv0_LambdaHeadVar__3_25;

    {
      make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__947__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_LambdaHeadVar__3_25);
    }
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_LambdaHeadVar__3_25));
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__SubModuleNames_8,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__V_16_16;
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

    {
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv0_LambdaHeadVar__3_25;

    {
      make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__935__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_LambdaHeadVar__3_25);
    }
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_LambdaHeadVar__3_25));
  }
}

static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__SubModuleNames_8,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__V_16_16;
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

    {
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_short_interfaces_6_p_0_1));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
  }
}

static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
  MR_Word make__module_dep_file__ErrorStream_11,
  MR_String make__module_dep_file__SourceFileName_12,
  MR_Word make__module_dep_file__RawCompUnits_13,
  MR_Word make__module_dep_file__Globals_14,
  MR_Word make__module_dep_file__HeadVar__5_15,
  MR_Word * make__module_dep_file__Succeeded_16,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
{
  {
    MR_bool make__module_dep_file__succeeded;

    {
      make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(make__module_dep_file__ErrorStream_11, make__module_dep_file__SourceFileName_12, make__module_dep_file__RawCompUnits_13, make__module_dep_file__Globals_14, make__module_dep_file__Succeeded_16, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
    }
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2,
  MR_Box make__module_dep_file__wrapper_arg_3,
  MR_Box * make__module_dep_file__wrapper_arg_4)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv12_STATE_VARIABLE_Info_13;

    {
      make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv12_STATE_VARIABLE_Info_13);
    }
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv12_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box * make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv11_LambdaHeadVar__1_117;
    MR_Word make__module_dep_file__conv10_LambdaHeadVar__3_119;

    {
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), &make__module_dep_file__conv11_LambdaHeadVar__1_117, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv10_LambdaHeadVar__3_119);
    }
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv11_LambdaHeadVar__1_117));
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv10_LambdaHeadVar__3_119));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2,
  MR_Box make__module_dep_file__wrapper_arg_3,
  MR_Box * make__module_dep_file__wrapper_arg_4)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv8_STATE_VARIABLE_Info_13;

    {
      make__module_dep_file__cleanup_short_interfaces_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv8_STATE_VARIABLE_Info_13);
    }
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv8_STATE_VARIABLE_Info_13));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box * make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv7_HeadVar__5_5;
    MR_Word make__module_dep_file__conv6_HeadVar__7_7;

    {
      make__util__build_with_module_options_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), &make__module_dep_file__conv7_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv6_HeadVar__7_7);
    }
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv7_HeadVar__5_5));
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv6_HeadVar__7_7));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5,
  MR_Box make__module_dep_file__wrapper_arg_6,
  MR_Box * make__module_dep_file__wrapper_arg_7)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv5_Succeeded_16;
    MR_Word make__module_dep_file__conv4_STATE_VARIABLE_Info_23;

    {
      make__module_dep_file__make_short_interfaces_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_Succeeded_16, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv4_STATE_VARIABLE_Info_23);
    }
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_Succeeded_16));
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv4_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv2_LambdaHeadVar__3_96;

    {
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__871__1_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_LambdaHeadVar__3_96);
    }
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_LambdaHeadVar__3_96));
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv1_HeadVar__8_8;

    {
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 8))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv1_HeadVar__8_8);
    }
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv1_HeadVar__8_8));
  }
}

static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1)
{
  {
    MR_Box make__module_dep_file__wrapper_arg_2;
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv0_HeadVar__2_2;

    {
      make__module_dep_file__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
    make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_2));
    return make__module_dep_file__wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
  MR_Word make__module_dep_file__Globals_7,
  MR_Word make__module_dep_file__ModuleName_8,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__MaybeErrorStream_11;
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_48_48;

    {
      make__util__redirect_output_6_p_0(make__module_dep_file__ModuleName_8, &make__module_dep_file__MaybeErrorStream_11, make__module_dep_file__STATE_VARIABLE_Info_0_44, &make__module_dep_file__STATE_VARIABLE_Info_48_48);
    }
    if ((make__module_dep_file__MaybeErrorStream_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__module_dep_file__STATE_VARIABLE_Info_45 = make__module_dep_file__STATE_VARIABLE_Info_48_48;
    else
      {
        MR_Word make__module_dep_file__TypeCtorInfo_263_263;
        MR_Word make__module_dep_file__ErrorStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeErrorStream_11, (MR_Integer) 0)));
        MR_Word make__module_dep_file__OldOutputStream_13;
        MR_String make__module_dep_file__SourceFileName_14;
        MR_Word make__module_dep_file__ParseTreeSrc_16;
        MR_Word make__module_dep_file__Specs0_17;
        MR_Word make__module_dep_file__Errors_18;
        MR_Word make__module_dep_file__FatalErrors_19;
        MR_Word make__module_dep_file__V_57_57;
        MR_Word make__module_dep_file__V_15_15;

        {
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__OldOutputStream_13);
        }
        {
          parse_tree__read_modules__read_module_src_13_p_0(make__module_dep_file__Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 1, make__module_dep_file__ModuleName_8, &make__module_dep_file__SourceFileName_14, (MR_Word) &make__module_dep_file_scalar_common_9[3], &make__module_dep_file__V_15_15, &make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__Specs0_17, &make__module_dep_file__Errors_18);
        }
        {
          make__module_dep_file__V_57_57 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
        make__module_dep_file__TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
        {
          mercury__set__intersect_3_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__Errors_18, make__module_dep_file__V_57_57, &make__module_dep_file__FatalErrors_19);
        }
        {
          make__module_dep_file__succeeded = mercury__set__is_non_empty_1_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__FatalErrors_19);
        }
        if (make__module_dep_file__succeeded)
          {
            MR_Word make__module_dep_file__UnredirectGlobals_24;
            MR_String make__module_dep_file__ErrFileName_25;
            MR_Word make__module_dep_file__ModuleDepMap0_27;
            MR_Word make__module_dep_file__ModuleDepMap_28;
            MR_Word make__module_dep_file__V_68_68;
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_73_73;
            MR_Word make__module_dep_file__V_20_20;
            MR_Integer make__module_dep_file___NumWarnings_21;
            MR_Integer make__module_dep_file___NumErrors_22;
            MR_Word make__module_dep_file__V_23_23;
            MR_Word make__module_dep_file__V_140_140;
            MR_Word make__module_dep_file__V_141_141;
            MR_Word make__module_dep_file__V_142_142;
            MR_Word make__module_dep_file__V_143_143;
            MR_Word make__module_dep_file__V_144_144;
            MR_Word make__module_dep_file__V_145_145;
            MR_Word make__module_dep_file__V_146_146;
            MR_Word make__module_dep_file__V_147_147;
            MR_Word make__module_dep_file__V_148_148;
            MR_Word make__module_dep_file__V_149_149;
            MR_Word make__module_dep_file__V_150_150;
            MR_Word make__module_dep_file__V_151_151;
            MR_Word make__module_dep_file__V_152_152;
            MR_Word make__module_dep_file__V_153_153;
            MR_Word make__module_dep_file__V_154_154;
            MR_Word make__module_dep_file__V_155_155;
            MR_Word make__module_dep_file__V_156_156;
            MR_Integer make__module_dep_file__V_157_157;
            MR_Word make__module_dep_file__V_158_158;
            MR_Word make__module_dep_file__V_26_26;
            MR_Word make__module_dep_file__V_159_159;
            MR_Word make__module_dep_file__V_160_160;
            MR_Word make__module_dep_file__V_161_161;
            MR_Word make__module_dep_file__V_162_162;
            MR_Word make__module_dep_file__V_163_163;
            MR_Word make__module_dep_file__V_164_164;
            MR_Word make__module_dep_file__V_165_165;
            MR_Word make__module_dep_file__V_166_166;
            MR_Word make__module_dep_file__V_167_167;
            MR_Word make__module_dep_file__V_168_168;
            MR_Word make__module_dep_file__V_169_169;
            MR_Word make__module_dep_file__V_170_170;
            MR_Word make__module_dep_file__V_171_171;
            MR_Word make__module_dep_file__V_172_172;
            MR_Word make__module_dep_file__V_173_173;
            MR_Word make__module_dep_file__V_174_174;
            MR_Word make__module_dep_file__V_175_175;
            MR_Integer make__module_dep_file__V_176_176;
            MR_Word make__module_dep_file__V_177_177;
            MR_Word make__module_dep_file__V_179_179;
            MR_Word make__module_dep_file__V_180_180;
            MR_Word make__module_dep_file__V_181_181;
            MR_Word make__module_dep_file__V_182_182;
            MR_Word make__module_dep_file__V_183_183;
            MR_Word make__module_dep_file__V_184_184;
            MR_Word make__module_dep_file__V_185_185;
            MR_Word make__module_dep_file__V_186_186;
            MR_Word make__module_dep_file__V_187_187;
            MR_Word make__module_dep_file__V_188_188;
            MR_Word make__module_dep_file__V_189_189;
            MR_Word make__module_dep_file__V_190_190;
            MR_Word make__module_dep_file__V_191_191;
            MR_Word make__module_dep_file__V_192_192;
            MR_Word make__module_dep_file__V_193_193;
            MR_Word make__module_dep_file__V_194_194;
            MR_Word make__module_dep_file__V_195_195;
            MR_Integer make__module_dep_file__V_196_196;
            MR_Word make__module_dep_file__V_197_197;
            MR_Word make__module_dep_file__V_178_178;

            {
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_20_20);
            }
            {
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs0_17, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_21, (MR_Integer) 0, &make__module_dep_file___NumErrors_22);
            }
            {
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_23_23);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
            }
            {
              mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName_14);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
            }
            make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
            make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
            make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
            make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
            make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
            make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
            make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
            make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
            make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
            make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
            make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
            make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 11)));
            make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 12)));
            make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 13)));
            make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 14)));
            make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 15)));
            make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 16)));
            make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 17)));
            make__module_dep_file__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 18)));
            make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 19)));
            {
              make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__V_68_68);
            }
            {
              libs__globals__set_option_4_p_0((MR_Integer) 54, (MR_Word) MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_9[4]), make__module_dep_file__Globals_7, &make__module_dep_file__UnredirectGlobals_24);
            }
            {
              make__util__unredirect_output_7_p_0(make__module_dep_file__UnredirectGlobals_24, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_48_48, &make__module_dep_file__STATE_VARIABLE_Info_73_73);
            }
            {
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".err", (MR_Integer) 1, &make__module_dep_file__ErrFileName_25);
            }
            {
              mercury__io__remove_file_4_p_0(make__module_dep_file__ErrFileName_25, &make__module_dep_file__V_26_26);
            }
            make__module_dep_file__ModuleDepMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
            make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
            make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
            make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
            make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
            make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
            make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
            make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
            make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
            make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
            make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
            make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
            make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
            make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
            make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
            make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
            make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
            make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
            make__module_dep_file__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
            make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
            {
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_8)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_27, &make__module_dep_file__ModuleDepMap_28);
            }
            make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
            make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
            make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
            make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
            make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
            make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
            make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
            make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
            make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
            make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
            make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
            make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
            make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
            make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
            make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
            make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
            make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
            make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
            make__module_dep_file__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
            make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              *make__module_dep_file__STATE_VARIABLE_Info_45 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_28));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_179_179));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_180_180));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_181_181));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_182_182));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_183_183));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_184_184));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_185_185));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_186_186));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_187_187));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_188_188));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_189_189));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_190_190));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_191_191));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_192_192));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_193_193));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_194_194));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_195_195));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_196_196));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_197_197));
            }
          }
        else
          {
            MR_Word make__module_dep_file__TypeCtorInfo_266_266;
            MR_Word make__module_dep_file__TypeCtorInfo_267_267;
            MR_Word make__module_dep_file__TypeCtorInfo_272_272;
            MR_Word make__module_dep_file__TypeCtorInfo_275_275;
            MR_Word make__module_dep_file__RawCompUnits_30;
            MR_Word make__module_dep_file__Specs_31;
            MR_Word make__module_dep_file__SubModuleNames_33;
            MR_Word make__module_dep_file__ModuleAndImportList_34;
            MR_Word make__module_dep_file__VeryVerbose_38;
            MR_Word make__module_dep_file__Succeeded_40;
            MR_Word make__module_dep_file__MadeTarget_43;
            MR_Word make__module_dep_file__V_89_89;
            MR_Word make__module_dep_file__V_90_90;
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_93_93;
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_105;
            MR_Word make__module_dep_file__V_111_111;
            MR_Word make__module_dep_file__V_112_112;
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_113_113;
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_125_125;
            MR_Word make__module_dep_file__V_29_29;
            MR_Integer make__module_dep_file___NumWarnings_130;
            MR_Integer make__module_dep_file___NumErrors_131;
            MR_Word make__module_dep_file__V_32_32;
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93;
            MR_Word make__module_dep_file__V_42_42;
            MR_Box make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113;

            {
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_29_29);
            }
            {
              parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__RawCompUnits_30, make__module_dep_file__Specs0_17, &make__module_dep_file__Specs_31);
            }
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
            }
            {
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs_31, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_130, (MR_Integer) 0, &make__module_dep_file___NumErrors_131);
            }
            {
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_32_32);
            }
            make__module_dep_file__TypeCtorInfo_266_266 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
            make__module_dep_file__TypeCtorInfo_267_267 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            {
              make__module_dep_file__SubModuleNames_33 = mercury__list__map_2_f_0(make__module_dep_file__TypeCtorInfo_266_266, make__module_dep_file__TypeCtorInfo_267_267, (MR_Word) &make__module_dep_file_scalar_common_4[12], make__module_dep_file__RawCompUnits_30);
            }
            {
              make__module_dep_file__V_90_90 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_267_267, make__module_dep_file__SubModuleNames_33);
            }
            {
              make__module_dep_file__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[1]));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 5) = ((MR_Box) (make__module_dep_file__ModuleName_8));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 6) = ((MR_Box) (make__module_dep_file__V_90_90));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 8) = ((MR_Box) (make__module_dep_file__Errors_18));
            }
            make__module_dep_file__TypeCtorInfo_272_272 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
            {
              mercury__list__map_3_p_0(make__module_dep_file__TypeCtorInfo_266_266, make__module_dep_file__TypeCtorInfo_272_272, make__module_dep_file__V_89_89, make__module_dep_file__RawCompUnits_30, &make__module_dep_file__ModuleAndImportList_34);
            }
            make__module_dep_file__TypeCtorInfo_275_275 = (MR_Word) &make__make__type_ctor_info_make_info_0;
            {
              mercury__list__foldl_4_p_0(make__module_dep_file__TypeCtorInfo_272_272, make__module_dep_file__TypeCtorInfo_275_275, (MR_Word) &make__module_dep_file_scalar_common_4[13], make__module_dep_file__ModuleAndImportList_34, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_48_48)), &make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93);
            }
            make__module_dep_file__STATE_VARIABLE_Info_93_93 = ((MR_Word) make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93);
            {
              libs__globals__lookup_bool_option_3_p_0(make__module_dep_file__Globals_7, (MR_Integer) 48, &make__module_dep_file__VeryVerbose_38);
            }
            {
              make__module_dep_file__succeeded = mercury__set__is_empty_1_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__Errors_18);
            }
            if (make__module_dep_file__succeeded)
              {
                MR_Word make__module_dep_file__Target_39;
                MR_Word make__module_dep_file__V_103_103;
                MR_Word make__module_dep_file__V_104_104;
                MR_Word make__module_dep_file__V_110_110;
                MR_Box make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105;

                {
                  make__module_dep_file__Target_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                }
                {
                  make__util__maybe_make_target_message_to_stream_5_p_0(make__module_dep_file__Globals_7, make__module_dep_file__OldOutputStream_13, make__module_dep_file__Target_39);
                }
                {
                  make__module_dep_file__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 3) = ((MR_Box) (make__module_dep_file__ErrorStream_12));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 5) = ((MR_Box) (make__module_dep_file__RawCompUnits_30));
                }
                {
                  make__module_dep_file__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_2[1]));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[7])));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 6) = ((MR_Box) (make__module_dep_file__V_110_110));
                }
                {
                  make__module_dep_file__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
                }
                {
                  libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_275_275, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_103_103, make__module_dep_file__V_104_104, &make__module_dep_file__Succeeded_40, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_93_93)), &make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105);
                }
                make__module_dep_file__STATE_VARIABLE_Info_105_105 = ((MR_Word) make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105);
              }
            else
              {
                make__module_dep_file__Succeeded_40 = (MR_Integer) 0;
                make__module_dep_file__STATE_VARIABLE_Info_105_105 = make__module_dep_file__STATE_VARIABLE_Info_93_93;
              }
            {
              make__module_dep_file__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 4) = ((MR_Box) (make__module_dep_file__ModuleAndImportList_34));
            }
            {
              make__module_dep_file__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_8));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
            }
            {
              libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_275_275, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_111_111, make__module_dep_file__V_112_112, &make__module_dep_file__V_42_42, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_105)), &make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113);
            }
            make__module_dep_file__STATE_VARIABLE_Info_113_113 = ((MR_Word) make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113);
            {
              make__module_dep_file__MadeTarget_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
            }
            {
              make__module_target__record_made_target_8_p_0(make__module_dep_file__Globals_7, make__module_dep_file__MadeTarget_43, (MR_Word) &make__module_dep_file_scalar_common_9[5], make__module_dep_file__Succeeded_40, make__module_dep_file__STATE_VARIABLE_Info_113_113, &make__module_dep_file__STATE_VARIABLE_Info_125_125);
            }
            {
              make__util__unredirect_output_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_125_125, make__module_dep_file__STATE_VARIABLE_Info_45);
            }
          }
      }
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
  MR_Word make__module_dep_file__RebuildModuleDeps_6,
  MR_String make__module_dep_file__ModuleDepsFile_7,
  MR_String make__module_dep_file__Msg_8)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_String make__module_dep_file__V_25_25;
    MR_Word make__module_dep_file__V_31_31;
    MR_String make__module_dep_file__V_34_34;

    {
      mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
    }
    make__module_dep_file__V_31_31 = (MR_Word) &make__module_dep_file_scalar_common_9[2];
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__module_dep_file__V_31_31, make__module_dep_file__ModuleDepsFile_7, &make__module_dep_file__V_25_25);
    }
    {
      mercury__io__write_string_3_p_0(make__module_dep_file__V_25_25);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\': ");
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__module_dep_file__V_31_31, make__module_dep_file__Msg_8, &make__module_dep_file__V_34_34);
    }
    {
      mercury__io__write_string_3_p_0(make__module_dep_file__V_34_34);
    }
    switch (make__module_dep_file__RebuildModuleDeps_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__nl_2_p_0();
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) " ...rebuilding\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
  MR_String make__module_dep_file__FileName_5,
  MR_Word * make__module_dep_file__FileExists_6)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__ResFileType_9;

    {
      mercury__io__file_type_5_p_0((MR_Integer) 1, make__module_dep_file__FileName_5, &make__module_dep_file__ResFileType_9);
    }
    if (((MR_tag((MR_Word) make__module_dep_file__ResFileType_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__module_dep_file__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));
        MR_String make__module_dep_file__V_15_15;
        MR_String make__module_dep_file__V_16_16;
        MR_String make__module_dep_file__V_18_18;

        {
          make__module_dep_file__V_18_18 = mercury__io__error_message_1_f_0(make__module_dep_file__Error_11);
        }
        {
          make__module_dep_file__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", make__module_dep_file__V_18_18);
        }
        {
          make__module_dep_file__V_15_15 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, make__module_dep_file__V_16_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *make__module_dep_file__FileExists_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_15_15));
        }
      }
    else
      {
        MR_Word make__module_dep_file__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));

        switch (make__module_dep_file__FileType_10) {
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
              MR_String make__module_dep_file__V_19_19;

              {
                make__module_dep_file__V_19_19 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, (MR_String) ": not a regular file");
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *make__module_dep_file__FileExists_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
              }
            }
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 10:
            *make__module_dep_file__FileExists_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
      }
  }
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
  void * make__module_dep_file__env_ptr_arg)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

    MR_builtin_longjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
  void * make__module_dep_file__env_ptr_arg)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

    (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5 = ((MR_Word) (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5);
    {
      make__module_dep_file__some_bad_module_dependency_2_p_0_2(make__module_dep_file__env_ptr);
    }
  }
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
  void * make__module_dep_file__env_ptr_arg)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

    {
      MR_Word make__module_dep_file__V_8_8;
      MR_Word make__module_dep_file__V_9_9;
      MR_Word make__module_dep_file__V_10_10;
      MR_Word make__module_dep_file__V_11_11;
      MR_Word make__module_dep_file__V_12_12;
      MR_Word make__module_dep_file__V_13_13;
      MR_Word make__module_dep_file__V_14_14;
      MR_Word make__module_dep_file__V_15_15;
      MR_Word make__module_dep_file__V_16_16;
      MR_Word make__module_dep_file__V_17_17;
      MR_Word make__module_dep_file__V_18_18;
      MR_Word make__module_dep_file__V_19_19;
      MR_Word make__module_dep_file__V_20_20;
      MR_Word make__module_dep_file__V_21_21;
      MR_Word make__module_dep_file__V_22_22;
      MR_Word make__module_dep_file__V_23_23;
      MR_Word make__module_dep_file__V_24_24;
      MR_Integer make__module_dep_file__V_25_25;
      MR_Word make__module_dep_file__V_26_26;
      MR_Box make__module_dep_file__conv1_V_29_29;

      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 0)));
      make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 1)));
      make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 2)));
      make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 3)));
      make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 4)));
      make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 5)));
      make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 6)));
      make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 7)));
      make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 8)));
      make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 9)));
      make__module_dep_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 10)));
      make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 11)));
      make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 12)));
      make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13)));
      make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 14)));
      make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 15)));
      make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 16)));
      make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 17)));
      make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 18)));
      make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 19)));
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
      {
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &make__module_dep_file__conv1_V_29_29);
      }
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
        {
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29 = ((MR_Word) make__module_dep_file__conv1_V_29_29);
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
        }
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
        {
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
          {
            (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7)), ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29)));
          }
          if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
            {
              make__module_dep_file__some_bad_module_dependency_2_p_0_1(make__module_dep_file__env_ptr);
            }
        }
    }
  }
}

static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
  void * make__module_dep_file__env_ptr_arg)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

    if (MR_builtin_setjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0) == 0)
      {
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        {
          mercury__list__member_2_p_1((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, &(make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, make__module_dep_file__env_ptr);
        }
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
  MR_Word make__module_dep_file__Info_3,
  MR_Word make__module_dep_file__ModuleNames_4)
{
  {
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s make__module_dep_file__env;

    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3 = make__module_dep_file__Info_3;
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4 = make__module_dep_file__ModuleNames_4;
    {
      make__module_dep_file__some_bad_module_dependency_2_p_0_4(&make__module_dep_file__env);
    }
    return (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__HasMain_4)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__TypeInfo_8_8;
    MR_String make__module_dep_file__String_5;
    MR_Word make__module_dep_file__V_7_7;
    MR_Word make__module_dep_file__V_13_13;
    MR_Word make__module_dep_file__V_12_12;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
            {
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
            if (make__module_dep_file__succeeded)
              {
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "no_main") == 0))
                  {
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 1;
                    make__module_dep_file__succeeded = MR_TRUE;
                  }
                else
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "has_main") == 0))
                  {
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 0;
                    make__module_dep_file__succeeded = MR_TRUE;
                  }
                else
                  make__module_dep_file__succeeded = MR_FALSE;
              }
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
  MR_Word make__module_dep_file__HeadVar__1_1)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__HeadVar__2_2;

    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word make__module_dep_file__LangSet_4;

        {
          make__module_dep_file__LangSet_4 = mercury__set__from_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__HeadVar__1_1);
        }
        {
          make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, 0) = ((MR_Box) (make__module_dep_file__LangSet_4));
        }
      }
    return make__module_dep_file__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__ContainsForeignExport_4)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__TypeInfo_8_8;
    MR_String make__module_dep_file__Atom_5;
    MR_Word make__module_dep_file__V_7_7;
    MR_Word make__module_dep_file__V_13_13;
    MR_Word make__module_dep_file__V_12_12;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
            {
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
            if (make__module_dep_file__succeeded)
              {
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "no_foreign_export") == 0))
                  {
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 1;
                    make__module_dep_file__succeeded = MR_TRUE;
                  }
                else
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "contains_foreign_export") == 0))
                  {
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 0;
                    make__module_dep_file__succeeded = MR_TRUE;
                  }
                else
                  make__module_dep_file__succeeded = MR_FALSE;
              }
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__ForeignInclude_4)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__TypeInfo_15_15;
    MR_Word make__module_dep_file__LanguageTerm_5;
    MR_Word make__module_dep_file__FileNameTerm_6;
    MR_Word make__module_dep_file__Language_7;
    MR_String make__module_dep_file__FileName_8;
    MR_Word make__module_dep_file__V_10_10;
    MR_Word make__module_dep_file__V_11_11;
    MR_String make__module_dep_file__V_13_13;
    MR_Word make__module_dep_file__V_14_14;
    MR_Word make__module_dep_file__V_20_20;
    MR_String make__module_dep_file__String_23;
    MR_Word make__module_dep_file__V_27_27;
    MR_Word make__module_dep_file__V_28_28;
    MR_Word make__module_dep_file__V_32_32;
    MR_Word make__module_dep_file__V_33_33;
    MR_Word make__module_dep_file__V_19_19;
    MR_Word make__module_dep_file__V_26_26;
    MR_Word make__module_dep_file__V_31_31;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
        make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_20_20)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, (MR_Integer) 0)));
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_13_13) == 0);
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
                if (make__module_dep_file__succeeded)
                  {
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
                    if (make__module_dep_file__succeeded)
                      {
                        make__module_dep_file__FileNameTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
                        make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
                        make__module_dep_file__TypeInfo_15_15 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
                        {
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_15_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_14_14)));
                        }
                        if (make__module_dep_file__succeeded)
                          {
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
                            if (make__module_dep_file__succeeded)
                              {
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
                                make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
                                make__module_dep_file__succeeded = (make__module_dep_file__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (make__module_dep_file__succeeded)
                                  {
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (make__module_dep_file__succeeded)
                                      {
                                        make__module_dep_file__String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 1)));
                                        {
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_23, &make__module_dep_file__Language_7);
                                        }
                                        if (make__module_dep_file__succeeded)
                                          {
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__FileNameTerm_6)) == (MR_mktag((MR_Integer) 0)));
                                            if (make__module_dep_file__succeeded)
                                              {
                                                make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 0)));
                                                make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 1)));
                                                make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 2)));
                                                make__module_dep_file__succeeded = (make__module_dep_file__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (make__module_dep_file__succeeded)
                                                  {
                                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                                    if (make__module_dep_file__succeeded)
                                                      {
                                                        make__module_dep_file__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 1)));
                                                        {
                                                          MR_Word base;
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          *make__module_dep_file__ForeignInclude_4 = base;
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__FileName_8));
                                                        }
                                                        make__module_dep_file__succeeded = MR_TRUE;
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
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__ForeignImport_4)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__TypeCtorInfo_13_13;
    MR_Word make__module_dep_file__TypeInfo_16_16;
    MR_Word make__module_dep_file__LanguageTerm_5;
    MR_Word make__module_dep_file__ImportedModuleTerm_6;
    MR_Word make__module_dep_file__Language_7;
    MR_Word make__module_dep_file__ImportedModuleName_8;
    MR_Word make__module_dep_file__V_10_10;
    MR_Word make__module_dep_file__V_11_11;
    MR_String make__module_dep_file__V_14_14;
    MR_Word make__module_dep_file__V_15_15;
    MR_Word make__module_dep_file__V_21_21;
    MR_String make__module_dep_file__String_24;
    MR_Word make__module_dep_file__V_28_28;
    MR_Word make__module_dep_file__V_29_29;
    MR_Word make__module_dep_file__V_20_20;
    MR_Word make__module_dep_file__V_27_27;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_21_21)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_21_21, (MR_Integer) 0)));
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_14_14) == 0);
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
                if (make__module_dep_file__succeeded)
                  {
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
                    if (make__module_dep_file__succeeded)
                      {
                        make__module_dep_file__ImportedModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
                        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
                        make__module_dep_file__TypeInfo_16_16 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
                        {
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_16_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_15_15)));
                        }
                        if (make__module_dep_file__succeeded)
                          {
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
                            if (make__module_dep_file__succeeded)
                              {
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
                                make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
                                make__module_dep_file__succeeded = (make__module_dep_file__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (make__module_dep_file__succeeded)
                                  {
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (make__module_dep_file__succeeded)
                                      {
                                        make__module_dep_file__String_24 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_28_28, (MR_Integer) 1)));
                                        {
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_24, &make__module_dep_file__Language_7);
                                        }
                                        if (make__module_dep_file__succeeded)
                                          {
                                            make__module_dep_file__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                            {
                                              make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_13_13, make__module_dep_file__ImportedModuleTerm_6, &make__module_dep_file__ImportedModuleName_8);
                                            }
                                            if (make__module_dep_file__succeeded)
                                              {
                                                {
                                                  MR_Word base;
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  *make__module_dep_file__ForeignImport_4 = base;
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__ImportedModuleName_8));
                                                }
                                                make__module_dep_file__succeeded = MR_TRUE;
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
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__Lang_4)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_String make__module_dep_file__String_5;
    MR_Word make__module_dep_file__V_9_9;
    MR_Word make__module_dep_file__V_10_10;
    MR_Word make__module_dep_file__V_8_8;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 1)));
            make__module_dep_file__succeeded = (make__module_dep_file__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_5, make__module_dep_file__Lang_4);
              }
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_String * make__module_dep_file__FactDep_4)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__V_8_8;
    MR_Word make__module_dep_file__V_9_9;
    MR_Word make__module_dep_file__V_7_7;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            *make__module_dep_file__FactDep_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 1)));
            make__module_dep_file__succeeded = (make__module_dep_file__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv0_HeadVar__2_7;

    {
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__692__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__2_7);
    }
    if (make__module_dep_file__succeeded)
      {
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_7));
        make__module_dep_file__succeeded = MR_TRUE;
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__SymNames_4)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__TypeInfo_10_17;
    MR_Word make__module_dep_file__ArgTerms_14;
    MR_String make__module_dep_file__V_18_18;
    MR_Word make__module_dep_file__V_23_23;
    MR_Word make__module_dep_file__V_22_22;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
        make__module_dep_file__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_23_23)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_23_23, (MR_Integer) 0)));
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_18_18) == 0);
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__TypeInfo_10_17 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
                {
                  make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_17, (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_4[11], make__module_dep_file__ArgTerms_14, make__module_dep_file__SymNames_4);
                }
              }
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
  MR_Word make__module_dep_file__Term_4,
  MR_String * make__module_dep_file__Atom_5,
  MR_Word * make__module_dep_file__Args_6)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__V_8_8;
    MR_Word make__module_dep_file__V_7_7;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 0)));
        *make__module_dep_file__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 1)));
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          *make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_8_8, (MR_Integer) 0)));
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_String * make__module_dep_file__String_4)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word make__module_dep_file__V_6_6;
    MR_Word make__module_dep_file__V_7_7;
    MR_Word make__module_dep_file__V_5_5;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
        make__module_dep_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (make__module_dep_file__succeeded)
          {
            *make__module_dep_file__String_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 1)));
            make__module_dep_file__succeeded = (make__module_dep_file__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
  MR_Word make__module_dep_file__Term_3,
  MR_Word * make__module_dep_file__Version_4)
{
  {
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Integer make__module_dep_file__Int_5;
    MR_Word make__module_dep_file__V_7_7;
    MR_Word make__module_dep_file__V_8_8;
    MR_Word make__module_dep_file__V_6_6;

    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_7_7)) == (MR_mktag((MR_Integer) 1)));
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__Int_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_7_7, (MR_Integer) 0)));
            make__module_dep_file__succeeded = (make__module_dep_file__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (make__module_dep_file__succeeded)
              switch (make__module_dep_file__Int_5) {
                default:
                  make__module_dep_file__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  {
                    *make__module_dep_file__Version_4 = (MR_Integer) 0;
                    make__module_dep_file__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *make__module_dep_file__Version_4 = (MR_Integer) 1;
                    make__module_dep_file__succeeded = MR_TRUE;
                  }
                  break;
              }
          }
      }
    return make__module_dep_file__succeeded;
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_3(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv5_STATE_VARIABLE_Info_28;

    {
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_STATE_VARIABLE_Info_28);
    }
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_STATE_VARIABLE_Info_28));
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv2_STATE_VARIABLE_Info_28;

    {
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_STATE_VARIABLE_Info_28);
    }
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_STATE_VARIABLE_Info_28));
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv0_HeadVar__3_3;

    {
      parse_tree__prog_data__add_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__3_3);
    }
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
  MR_Word make__module_dep_file__Globals_12,
  MR_Word make__module_dep_file__SearchDirs_13,
  MR_Word make__module_dep_file__ModuleName_14,
  MR_String make__module_dep_file__ModuleDir_15,
  MR_String make__module_dep_file__ModuleDepFile_16,
  MR_Word make__module_dep_file__Term_17,
  MR_Word * make__module_dep_file__Result_18,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_72,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_73)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_String make__module_dep_file__SourceFileName_37;
    MR_Word make__module_dep_file__SourceFileModuleName_38;
    MR_Word make__module_dep_file__Parents_39;
    MR_Word make__module_dep_file__IntDeps_40;
    MR_Word make__module_dep_file__ImpDeps_41;
    MR_Word make__module_dep_file__Children_42;
    MR_Word make__module_dep_file__NestedChildren_43;
    MR_Word make__module_dep_file__FactDeps_44;
    MR_Word make__module_dep_file__ForeignLanguages_45;
    MR_Word make__module_dep_file__ForeignImports_46;
    MR_Word make__module_dep_file__ContainsForeignExport_47;
    MR_Word make__module_dep_file__HasMain_48;
    MR_Word make__module_dep_file__ForeignIncludes_49;
    MR_Word make__module_dep_file__TypeCtorInfo_151_151;
    MR_Word make__module_dep_file__ModuleArgs_21;
    MR_Word make__module_dep_file__VersionNumberTerm_22;
    MR_Word make__module_dep_file__SourceFileTerm_23;
    MR_Word make__module_dep_file__SourceFileModuleNameTerm_24;
    MR_Word make__module_dep_file__ParentsTerm_25;
    MR_Word make__module_dep_file__IntDepsTerm_26;
    MR_Word make__module_dep_file__ImpDepsTerm_27;
    MR_Word make__module_dep_file__ChildrenTerm_28;
    MR_Word make__module_dep_file__NestedChildrenTerm_29;
    MR_Word make__module_dep_file__FactDepsTerm_30;
    MR_Word make__module_dep_file__ForeignLanguagesTerm_31;
    MR_Word make__module_dep_file__ForeignImportsTerm_32;
    MR_Word make__module_dep_file__ContainsForeignExportTerm_33;
    MR_Word make__module_dep_file__HasMainTerm_34;
    MR_Word make__module_dep_file__ModuleArgsTail_35;
    MR_Word make__module_dep_file__Version_36;
    MR_Word make__module_dep_file__V_77_77;
    MR_Word make__module_dep_file__V_78_78;
    MR_Word make__module_dep_file__V_79_79;
    MR_Word make__module_dep_file__V_80_80;
    MR_Word make__module_dep_file__V_81_81;
    MR_Word make__module_dep_file__V_82_82;
    MR_Word make__module_dep_file__V_83_83;
    MR_Word make__module_dep_file__V_84_84;
    MR_Word make__module_dep_file__V_85_85;
    MR_Word make__module_dep_file__V_86_86;
    MR_Word make__module_dep_file__V_87_87;
    MR_Word make__module_dep_file__V_88_88;
    MR_String make__module_dep_file__V_184_184;

    {
      make__module_dep_file__succeeded = make__module_dep_file__atom_term_3_p_0(make__module_dep_file__Term_17, &make__module_dep_file__V_184_184, &make__module_dep_file__ModuleArgs_21);
    }
    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__succeeded = (strcmp((MR_String) "module", make__module_dep_file__V_184_184) == 0);
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ModuleArgs_21)) == (MR_mktag((MR_Integer) 1)));
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__VersionNumberTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 0)));
                make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 1)));
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_77_77)) == (MR_mktag((MR_Integer) 1)));
                if (make__module_dep_file__succeeded)
                  {
                    make__module_dep_file__SourceFileTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 0)));
                    make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 1)));
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_78_78)) == (MR_mktag((MR_Integer) 1)));
                    if (make__module_dep_file__succeeded)
                      {
                        make__module_dep_file__SourceFileModuleNameTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 0)));
                        make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 1)));
                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_79_79)) == (MR_mktag((MR_Integer) 1)));
                        if (make__module_dep_file__succeeded)
                          {
                            make__module_dep_file__ParentsTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 0)));
                            make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 1)));
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_80_80)) == (MR_mktag((MR_Integer) 1)));
                            if (make__module_dep_file__succeeded)
                              {
                                make__module_dep_file__IntDepsTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 0)));
                                make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 1)));
                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_81_81)) == (MR_mktag((MR_Integer) 1)));
                                if (make__module_dep_file__succeeded)
                                  {
                                    make__module_dep_file__ImpDepsTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 0)));
                                    make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 1)));
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_82_82)) == (MR_mktag((MR_Integer) 1)));
                                    if (make__module_dep_file__succeeded)
                                      {
                                        make__module_dep_file__ChildrenTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 0)));
                                        make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 1)));
                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_83_83)) == (MR_mktag((MR_Integer) 1)));
                                        if (make__module_dep_file__succeeded)
                                          {
                                            make__module_dep_file__NestedChildrenTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 0)));
                                            make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 1)));
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_84_84)) == (MR_mktag((MR_Integer) 1)));
                                            if (make__module_dep_file__succeeded)
                                              {
                                                make__module_dep_file__FactDepsTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 0)));
                                                make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 1)));
                                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_85_85)) == (MR_mktag((MR_Integer) 1)));
                                                if (make__module_dep_file__succeeded)
                                                  {
                                                    make__module_dep_file__ForeignLanguagesTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 0)));
                                                    make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 1)));
                                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_86_86)) == (MR_mktag((MR_Integer) 1)));
                                                    if (make__module_dep_file__succeeded)
                                                      {
                                                        make__module_dep_file__ForeignImportsTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 0)));
                                                        make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 1)));
                                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_87_87)) == (MR_mktag((MR_Integer) 1)));
                                                        if (make__module_dep_file__succeeded)
                                                          {
                                                            make__module_dep_file__ContainsForeignExportTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 0)));
                                                            make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 1)));
                                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_88_88)) == (MR_mktag((MR_Integer) 1)));
                                                            if (make__module_dep_file__succeeded)
                                                              {
                                                                make__module_dep_file__HasMainTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_88_88, (MR_Integer) 0)));
                                                                make__module_dep_file__ModuleArgsTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_88_88, (MR_Integer) 1)));
                                                                {
                                                                  make__module_dep_file__succeeded = make__module_dep_file__version_number_term_2_p_0(make__module_dep_file__VersionNumberTerm_22, &make__module_dep_file__Version_36);
                                                                }
                                                                if (make__module_dep_file__succeeded)
                                                                  {
                                                                    {
                                                                      make__module_dep_file__succeeded = make__module_dep_file__string_term_2_p_0(make__module_dep_file__SourceFileTerm_23, &make__module_dep_file__SourceFileName_37);
                                                                    }
                                                                    if (make__module_dep_file__succeeded)
                                                                      {
                                                                        make__module_dep_file__TypeCtorInfo_151_151 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                                                        {
                                                                          make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_151_151, make__module_dep_file__SourceFileModuleNameTerm_24, &make__module_dep_file__SourceFileModuleName_38);
                                                                        }
                                                                        if (make__module_dep_file__succeeded)
                                                                          {
                                                                            {
                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ParentsTerm_25, &make__module_dep_file__Parents_39);
                                                                            }
                                                                            if (make__module_dep_file__succeeded)
                                                                              {
                                                                                {
                                                                                  make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__IntDepsTerm_26, &make__module_dep_file__IntDeps_40);
                                                                                }
                                                                                if (make__module_dep_file__succeeded)
                                                                                  {
                                                                                    {
                                                                                      make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ImpDepsTerm_27, &make__module_dep_file__ImpDeps_41);
                                                                                    }
                                                                                    if (make__module_dep_file__succeeded)
                                                                                      {
                                                                                        {
                                                                                          make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ChildrenTerm_28, &make__module_dep_file__Children_42);
                                                                                        }
                                                                                        if (make__module_dep_file__succeeded)
                                                                                          {
                                                                                            {
                                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__NestedChildrenTerm_29, &make__module_dep_file__NestedChildren_43);
                                                                                            }
                                                                                            if (make__module_dep_file__succeeded)
                                                                                              {
                                                                                                {
                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho5_3_p_0(make__module_dep_file__FactDepsTerm_30, &make__module_dep_file__FactDeps_44);
                                                                                                }
                                                                                                if (make__module_dep_file__succeeded)
                                                                                                  {
                                                                                                    {
                                                                                                      make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho4_3_p_0(make__module_dep_file__ForeignLanguagesTerm_31, &make__module_dep_file__ForeignLanguages_45);
                                                                                                    }
                                                                                                    if (make__module_dep_file__succeeded)
                                                                                                      {
                                                                                                        {
                                                                                                          make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho3_3_p_0(make__module_dep_file__ForeignImportsTerm_32, &make__module_dep_file__ForeignImports_46);
                                                                                                        }
                                                                                                        if (make__module_dep_file__succeeded)
                                                                                                          {
                                                                                                            {
                                                                                                              make__module_dep_file__succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(make__module_dep_file__ContainsForeignExportTerm_33, &make__module_dep_file__ContainsForeignExport_47);
                                                                                                            }
                                                                                                            if (make__module_dep_file__succeeded)
                                                                                                              {
                                                                                                                {
                                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__has_main_term_2_p_0(make__module_dep_file__HasMainTerm_34, &make__module_dep_file__HasMain_48);
                                                                                                                }
                                                                                                                if (make__module_dep_file__succeeded)
                                                                                                                  {
                                                                                                                    if ((make__module_dep_file__ModuleArgsTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                                                                                      {
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 0);
                                                                                                                        if (make__module_dep_file__succeeded)
                                                                                                                          {
                                                                                                                            make__module_dep_file__ForeignIncludes_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                                                                                            make__module_dep_file__succeeded = MR_TRUE;
                                                                                                                          }
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        MR_Word make__module_dep_file__ForeignIncludesTerm_50;
                                                                                                                        MR_Word make__module_dep_file__V_92_92;

                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 1);
                                                                                                                        if (make__module_dep_file__succeeded)
                                                                                                                          {
                                                                                                                            make__module_dep_file__ForeignIncludesTerm_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 0)));
                                                                                                                            make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 1)));
                                                                                                                            make__module_dep_file__succeeded = (make__module_dep_file__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                                                            if (make__module_dep_file__succeeded)
                                                                                                                              {
                                                                                                                                make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho2_3_p_0(make__module_dep_file__ForeignIncludesTerm_50, &make__module_dep_file__ForeignIncludes_49);
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
    if (make__module_dep_file__succeeded)
      {
        MR_Word make__module_dep_file__TypeCtorInfo_164_164;
        MR_Word make__module_dep_file__TypeInfo_170_170;
        MR_Word make__module_dep_file__ModuleNameContext_51;
        MR_Word make__module_dep_file__ContainsForeignCode_52;
        MR_Word make__module_dep_file__IndirectDeps_53;
        MR_Word make__module_dep_file__PublicChildren_54;
        MR_Word make__module_dep_file__ForeignImportModules_55;
        MR_Word make__module_dep_file__DirectIntItemBlocksCord_57;
        MR_Word make__module_dep_file__IndirectIntItemBlocksCord_58;
        MR_Word make__module_dep_file__OptItemBlocksCord_59;
        MR_Word make__module_dep_file__IntForOptItemBlocksCord_60;
        MR_Word make__module_dep_file__ModuleVersionNumbers_61;
        MR_Word make__module_dep_file__Errors_63;
        MR_Word make__module_dep_file__ModuleAndImports_65;
        MR_Word make__module_dep_file__V_95_95;
        MR_Word make__module_dep_file__V_96_96;
        MR_Word make__module_dep_file__V_97_97;
        MR_Word make__module_dep_file__V_98_98;
        MR_Word make__module_dep_file__V_99_99;
        MR_Word make__module_dep_file__V_100_100;
        MR_Word make__module_dep_file__V_101_101;
        MR_Box make__module_dep_file__conv1_ForeignImportModules_55;
        MR_String make__module_dep_file__V_185_185;

        {
          make__module_dep_file__ModuleNameContext_51 = mercury__term__context_init_0_f_0();
        }
        {
          make__module_dep_file__ContainsForeignCode_52 = make__module_dep_file__contains_foreign_code_1_f_0(make__module_dep_file__ForeignLanguages_45);
        }
        make__module_dep_file__TypeCtorInfo_164_164 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        {
          mercury__set__init_1_p_0(make__module_dep_file__TypeCtorInfo_164_164, &make__module_dep_file__IndirectDeps_53);
        }
        {
          mercury__set__init_1_p_0(make__module_dep_file__TypeCtorInfo_164_164, &make__module_dep_file__PublicChildren_54);
        }
        {
          make__module_dep_file__V_95_95 = parse_tree__prog_data__init_foreign_import_modules_0_f_0();
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_modules_0, (MR_Word) &make__module_dep_file_scalar_common_4[10], make__module_dep_file__ForeignImports_46, ((MR_Box) (make__module_dep_file__V_95_95)), &make__module_dep_file__conv1_ForeignImportModules_55);
        }
        make__module_dep_file__ForeignImportModules_55 = ((MR_Word) make__module_dep_file__conv1_ForeignImportModules_55);
        make__module_dep_file__TypeInfo_170_170 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
        {
          make__module_dep_file__DirectIntItemBlocksCord_57 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_170_170);
        }
        {
          make__module_dep_file__IndirectIntItemBlocksCord_58 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_170_170);
        }
        {
          make__module_dep_file__OptItemBlocksCord_59 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[2]);
        }
        {
          make__module_dep_file__IntForOptItemBlocksCord_60 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[3]);
        }
        {
          mercury__map__init_1_p_0(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, &make__module_dep_file__ModuleVersionNumbers_61);
        }
        {
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &make__module_dep_file__Errors_63);
        }
        {
          make__module_dep_file__V_96_96 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__Parents_39);
        }
        {
          make__module_dep_file__V_97_97 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__IntDeps_40);
        }
        {
          make__module_dep_file__V_98_98 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__ImpDeps_41);
        }
        {
          make__module_dep_file__V_99_99 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__Children_42);
        }
        {
          make__module_dep_file__V_100_100 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__NestedChildren_43);
        }
        {
          make__module_dep_file__V_101_101 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludes_49);
        }
        {
          make__module_dep_file__ModuleAndImports_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 0) = ((MR_Box) (make__module_dep_file__SourceFileName_37));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 1) = ((MR_Box) (make__module_dep_file__SourceFileModuleName_38));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 2) = ((MR_Box) (make__module_dep_file__ModuleName_14));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 3) = ((MR_Box) (make__module_dep_file__ModuleNameContext_51));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 4) = ((MR_Box) (make__module_dep_file__V_96_96));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 5) = ((MR_Box) (make__module_dep_file__V_97_97));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 6) = ((MR_Box) (make__module_dep_file__V_98_98));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 7) = ((MR_Box) (make__module_dep_file__IndirectDeps_53));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 8) = ((MR_Box) (make__module_dep_file__V_99_99));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 9) = ((MR_Box) (make__module_dep_file__PublicChildren_54));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 10) = ((MR_Box) (make__module_dep_file__V_100_100));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 11) = ((MR_Box) (make__module_dep_file__FactDeps_44));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 12) = ((MR_Box) (make__module_dep_file__ForeignImportModules_55));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 13) = ((MR_Box) (make__module_dep_file__V_101_101));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 14) = ((MR_Box) (make__module_dep_file__ContainsForeignCode_52));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 15) = ((MR_Box) (make__module_dep_file__ContainsForeignExport_47));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 17) = ((MR_Box) (make__module_dep_file__DirectIntItemBlocksCord_57));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 18) = ((MR_Box) (make__module_dep_file__IndirectIntItemBlocksCord_58));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 19) = ((MR_Box) (make__module_dep_file__OptItemBlocksCord_59));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 20) = ((MR_Box) (make__module_dep_file__IntForOptItemBlocksCord_60));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 21) = ((MR_Box) (make__module_dep_file__ModuleVersionNumbers_61));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 22) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 23) = ((MR_Box) (make__module_dep_file__Errors_63));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 24) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 25) = ((MR_Box) (make__module_dep_file__HasMain_48));
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 26) = ((MR_Box) (make__module_dep_file__ModuleDir_15));
        }
        {
          make__module_dep_file__V_185_185 = mercury__dir__this_directory_0_f_0();
        }
        make__module_dep_file__succeeded = (strcmp(make__module_dep_file__ModuleDir_15, make__module_dep_file__V_185_185) == 0);
        if (make__module_dep_file__succeeded)
          {
            MR_Word make__module_dep_file__SourceFileExists_66;

            {
              make__module_dep_file__check_regular_file_exists_4_p_0(make__module_dep_file__SourceFileName_37, &make__module_dep_file__SourceFileExists_66);
            }
            if ((make__module_dep_file__SourceFileExists_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word make__module_dep_file__ModuleDepMap0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 0)));
                MR_Word make__module_dep_file__ModuleDepMap_70;
                MR_Word make__module_dep_file__V_104_104;
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_105;
                MR_Word make__module_dep_file__V_106_106;
                MR_Word make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 1)));
                MR_Word make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 2)));
                MR_Word make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 3)));
                MR_Word make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 4)));
                MR_Word make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 5)));
                MR_Word make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 6)));
                MR_Word make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 7)));
                MR_Word make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 8)));
                MR_Word make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 9)));
                MR_Word make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 10)));
                MR_Word make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 11)));
                MR_Word make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 12)));
                MR_Word make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));
                MR_Word make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 14)));
                MR_Word make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 15)));
                MR_Word make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 16)));
                MR_Word make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 17)));
                MR_Integer make__module_dep_file__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 18)));
                MR_Word make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 19)));
                MR_Box make__module_dep_file__conv4_STATE_VARIABLE_Info_73;
                MR_Box make__module_dep_file__conv3_STATE_VARIABLE_IO_75;

                {
                  make__module_dep_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_104_104, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_65));
                }
                {
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_104_104)), make__module_dep_file__ModuleDepMap0_69, &make__module_dep_file__ModuleDepMap_70);
                }
                {
                  make__module_dep_file__STATE_VARIABLE_Info_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_70));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 1) = ((MR_Box) (make__module_dep_file__V_112_112));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 2) = ((MR_Box) (make__module_dep_file__V_113_113));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 3) = ((MR_Box) (make__module_dep_file__V_114_114));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 4) = ((MR_Box) (make__module_dep_file__V_115_115));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 5) = ((MR_Box) (make__module_dep_file__V_116_116));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 6) = ((MR_Box) (make__module_dep_file__V_117_117));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 7) = ((MR_Box) (make__module_dep_file__V_118_118));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 8) = ((MR_Box) (make__module_dep_file__V_119_119));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 9) = ((MR_Box) (make__module_dep_file__V_120_120));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 10) = ((MR_Box) (make__module_dep_file__V_121_121));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 11) = ((MR_Box) (make__module_dep_file__V_122_122));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 12) = ((MR_Box) (make__module_dep_file__V_123_123));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 13) = ((MR_Box) (make__module_dep_file__V_124_124));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 14) = ((MR_Box) (make__module_dep_file__V_125_125));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 15) = ((MR_Box) (make__module_dep_file__V_126_126));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 16) = ((MR_Box) (make__module_dep_file__V_127_127));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 17) = ((MR_Box) (make__module_dep_file__V_128_128));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 18) = ((MR_Box) (make__module_dep_file__V_129_129));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 19) = ((MR_Box) (make__module_dep_file__V_130_130));
                }
                {
                  make__module_dep_file__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 4) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
                }
                {
                  mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_106_106, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_105)), &make__module_dep_file__conv4_STATE_VARIABLE_Info_73, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv3_STATE_VARIABLE_IO_75);
                }
                *make__module_dep_file__STATE_VARIABLE_Info_73 = ((MR_Word) make__module_dep_file__conv4_STATE_VARIABLE_Info_73);
                {
                  make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_73, make__module_dep_file__NestedChildren_43);
                }
                if (make__module_dep_file__succeeded)
                  {
                    *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_9[0]);
                  }
                else
                  *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                MR_Word make__module_dep_file__V_68_68;

                {
                  mercury__io__remove_file_4_p_0(make__module_dep_file__ModuleDepFile_16, &make__module_dep_file__V_68_68);
                }
                *make__module_dep_file__Result_18 = make__module_dep_file__SourceFileExists_66;
                *make__module_dep_file__STATE_VARIABLE_Info_73 = make__module_dep_file__STATE_VARIABLE_Info_0_72;
              }
          }
        else
          {
            MR_Word make__module_dep_file__ModuleDepMap0_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 0)));
            MR_Word make__module_dep_file__ModuleDepMap_232;
            MR_Word make__module_dep_file__V_234_234;
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_235;
            MR_Word make__module_dep_file__V_236_236;
            MR_Word make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 1)));
            MR_Word make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 2)));
            MR_Word make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 3)));
            MR_Word make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 4)));
            MR_Word make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 5)));
            MR_Word make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 6)));
            MR_Word make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 7)));
            MR_Word make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 8)));
            MR_Word make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 9)));
            MR_Word make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 10)));
            MR_Word make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 11)));
            MR_Word make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 12)));
            MR_Word make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));
            MR_Word make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 14)));
            MR_Word make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 15)));
            MR_Word make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 16)));
            MR_Word make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 17)));
            MR_Integer make__module_dep_file__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 18)));
            MR_Word make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 19)));
            MR_Box make__module_dep_file__conv7_STATE_VARIABLE_Info_73;
            MR_Box make__module_dep_file__conv6_STATE_VARIABLE_IO_75;

            {
              make__module_dep_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), make__module_dep_file__V_234_234, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_65));
            }
            {
              mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_234_234)), make__module_dep_file__ModuleDepMap0_231, &make__module_dep_file__ModuleDepMap_232);
            }
            {
              make__module_dep_file__STATE_VARIABLE_Info_105_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_232));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 1) = ((MR_Box) (make__module_dep_file__V_239_239));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 2) = ((MR_Box) (make__module_dep_file__V_240_240));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 3) = ((MR_Box) (make__module_dep_file__V_241_241));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 4) = ((MR_Box) (make__module_dep_file__V_242_242));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 5) = ((MR_Box) (make__module_dep_file__V_243_243));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 6) = ((MR_Box) (make__module_dep_file__V_244_244));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 7) = ((MR_Box) (make__module_dep_file__V_245_245));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 8) = ((MR_Box) (make__module_dep_file__V_246_246));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 9) = ((MR_Box) (make__module_dep_file__V_247_247));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 10) = ((MR_Box) (make__module_dep_file__V_248_248));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 11) = ((MR_Box) (make__module_dep_file__V_249_249));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 12) = ((MR_Box) (make__module_dep_file__V_250_250));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 13) = ((MR_Box) (make__module_dep_file__V_251_251));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 14) = ((MR_Box) (make__module_dep_file__V_252_252));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 15) = ((MR_Box) (make__module_dep_file__V_253_253));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 16) = ((MR_Box) (make__module_dep_file__V_254_254));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 17) = ((MR_Box) (make__module_dep_file__V_255_255));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 18) = ((MR_Box) (make__module_dep_file__V_256_256));
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 19) = ((MR_Box) (make__module_dep_file__V_257_257));
            }
            {
              make__module_dep_file__V_236_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_3));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 4) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
            }
            {
              mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_236_236, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_235)), &make__module_dep_file__conv7_STATE_VARIABLE_Info_73, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv6_STATE_VARIABLE_IO_75);
            }
            *make__module_dep_file__STATE_VARIABLE_Info_73 = ((MR_Word) make__module_dep_file__conv7_STATE_VARIABLE_Info_73);
            {
              make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_73, make__module_dep_file__NestedChildren_43);
            }
            if (make__module_dep_file__succeeded)
              {
                *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_9[0]);
              }
            else
              *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    else
      {
        *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_9[1]);
        *make__module_dep_file__STATE_VARIABLE_Info_73 = make__module_dep_file__STATE_VARIABLE_Info_0_72;
      }
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
    }
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
  MR_Word make__module_dep_file__Globals_9,
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
  MR_Word make__module_dep_file__SearchDirs_11,
  MR_Word make__module_dep_file__ModuleName_12,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_27,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_28)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_String make__module_dep_file__ModuleDepFile_15;
    MR_Word make__module_dep_file__OldInputStream_16;
    MR_Word make__module_dep_file__SearchResult_17;
    MR_String make__module_dep_file__V_31_31;

    {
      make__module_dep_file__V_31_31 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__V_31_31, &make__module_dep_file__ModuleDepFile_15);
    }
    {
      mercury__io__input_stream_3_p_0(&make__module_dep_file__OldInputStream_16);
    }
    {
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleDepFile_15, &make__module_dep_file__SearchResult_17);
    }
    if (((MR_tag((MR_Word) make__module_dep_file__SearchResult_17)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__module_dep_file__V_36_36;
        MR_String make__module_dep_file__Msg_54 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));

        {
          make__module_dep_file__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 3) = ((MR_Box) (make__module_dep_file__RebuildModuleDeps_10));
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 4) = ((MR_Box) (make__module_dep_file__ModuleDepFile_15));
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 5) = ((MR_Box) (make__module_dep_file__Msg_54));
        }
        {
          make__util__debug_make_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_36_36);
        }
        switch (make__module_dep_file__RebuildModuleDeps_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_0_27;
            break;
          case (MR_Integer) 0:
            {
              make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_27, make__module_dep_file__STATE_VARIABLE_Info_28);
            }
            break;
        }
      }
    else
      {
        MR_String make__module_dep_file__ModuleDir_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));
        MR_Word make__module_dep_file__TermResult_19;
        MR_Word make__module_dep_file__ModuleDepStream_20;

        {
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &make__module_dep_file__TermResult_19);
        }
        {
          mercury__io__set_input_stream_4_p_0(make__module_dep_file__OldInputStream_16, &make__module_dep_file__ModuleDepStream_20);
        }
        {
          mercury__io__close_input_3_p_0(make__module_dep_file__ModuleDepStream_20);
        }
        switch (MR_tag((MR_Word) make__module_dep_file__TermResult_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String make__module_dep_file__V_48_48;
              MR_String make__module_dep_file__V_50_50;

              {
                make__module_dep_file__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) "/", make__module_dep_file__ModuleDepFile_15);
              }
              {
                make__module_dep_file__V_48_48 = mercury__string__f_43_43_2_f_0(make__module_dep_file__ModuleDir_18, make__module_dep_file__V_50_50);
              }
              {
                make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__V_48_48, (MR_String) "unexpected eof");
              }
              switch (make__module_dep_file__RebuildModuleDeps_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_0_27;
                  break;
                case (MR_Integer) 0:
                  {
                    make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_27, make__module_dep_file__STATE_VARIABLE_Info_28);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String make__module_dep_file__ParseError_24 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 0)));
              MR_String make__module_dep_file__Msg_82;
              MR_String make__module_dep_file__V_85_85;
              MR_String make__module_dep_file__V_87_87;
              MR_Integer make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 1)));

              {
                make__module_dep_file__Msg_82 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", make__module_dep_file__ParseError_24);
              }
              {
                make__module_dep_file__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", make__module_dep_file__ModuleDepFile_15);
              }
              {
                make__module_dep_file__V_85_85 = mercury__string__f_43_43_2_f_0(make__module_dep_file__ModuleDir_18, make__module_dep_file__V_87_87);
              }
              {
                make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__V_85_85, make__module_dep_file__Msg_82);
              }
              switch (make__module_dep_file__RebuildModuleDeps_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_0_27;
                  break;
                case (MR_Integer) 0:
                  {
                    make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_27, make__module_dep_file__STATE_VARIABLE_Info_28);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word make__module_dep_file__Term_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 1)));
              MR_Word make__module_dep_file__Result_99;
              MR_Word make__module_dep_file__STATE_VARIABLE_Info_46_101;
              MR_Word make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 0)));

              {
                make__module_dep_file__read_module_dependencies_3_11_p_0(make__module_dep_file__Globals_9, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleName_12, make__module_dep_file__ModuleDir_18, make__module_dep_file__ModuleDepFile_15, make__module_dep_file__Term_22, &make__module_dep_file__Result_99, make__module_dep_file__STATE_VARIABLE_Info_0_27, &make__module_dep_file__STATE_VARIABLE_Info_46_101);
              }
              if ((make__module_dep_file__Result_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_46_101;
              else
                {
                  MR_String make__module_dep_file__Msg_89 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__Result_99, (MR_Integer) 0)));
                  MR_String make__module_dep_file__V_90_90;
                  MR_String make__module_dep_file__V_92_92;

                  {
                    make__module_dep_file__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "/", make__module_dep_file__ModuleDepFile_15);
                  }
                  {
                    make__module_dep_file__V_90_90 = mercury__string__f_43_43_2_f_0(make__module_dep_file__ModuleDir_18, make__module_dep_file__V_92_92);
                  }
                  {
                    make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__V_90_90, make__module_dep_file__Msg_89);
                  }
                  switch (make__module_dep_file__RebuildModuleDeps_10) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_46_101;
                      break;
                    case (MR_Integer) 0:
                      {
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_46_101, make__module_dep_file__STATE_VARIABLE_Info_28);
                      }
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
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
  MR_Word make__module_dep_file__Globals_8,
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
  MR_Word make__module_dep_file__ModuleName_10,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__V_17_17;
    MR_String make__module_dep_file__V_20_20;

    {
      make__module_dep_file__V_20_20 = mercury__dir__this_directory_0_f_0();
    }
    {
      make__module_dep_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 0) = ((MR_Box) (make__module_dep_file__V_20_20));
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__V_17_17, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_13, make__module_dep_file__STATE_VARIABLE_Info_14);
    }
  }
}

static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
  MR_Word make__module_dep_file__Globals_8,
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
  MR_Word make__module_dep_file__ModuleName_10,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__SearchDirs_13;

    {
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_8, (MR_Integer) 636, &make__module_dep_file__SearchDirs_13);
    }
    {
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__SearchDirs_13, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_14, make__module_dep_file__STATE_VARIABLE_Info_15);
    }
  }
}

static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
  MR_Word make__module_dep_file__HasMain_3,
  MR_String * make__module_dep_file__HasMainStr_4)
{
  {
    MR_bool make__module_dep_file__succeeded;

    switch (make__module_dep_file__HasMain_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *make__module_dep_file__HasMainStr_4 = (MR_String) "has_main";
        break;
      case (MR_Integer) 1:
        *make__module_dep_file__HasMainStr_4 = (MR_String) "no_main";
        break;
    }
  }
}

static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
  MR_Word make__module_dep_file__ContainsForeignExport_3,
  MR_String * make__module_dep_file__ContainsForeignExportStr_4)
{
  {
    MR_bool make__module_dep_file__succeeded;

    switch (make__module_dep_file__ContainsForeignExport_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "contains_foreign_export";
        break;
      case (MR_Integer) 1:
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "no_foreign_export";
        break;
    }
  }
}

static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
  MR_Word make__module_dep_file__ForeignInclude_4)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 0)));
    MR_String make__module_dep_file__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 1)));

    {
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
    {
      mercury__term_io__quote_string_3_p_0(make__module_dep_file__FileName_7);
    }
  }
}

static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
  MR_Word make__module_dep_file__ForeignImportModule_4)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 0)));
    MR_Word make__module_dep_file__ForeignImport_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 1)));

    {
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__ForeignImport_7);
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      make__module_dep_file__write_foreign_include_file_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      make__module_dep_file__write_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__383__1_3_p_0(((MR_String) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
  MR_Word make__module_dep_file__ModuleAndImports_5,
  MR_Word make__module_dep_file__Version_6)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__TypeCtorInfo_438_438;
    MR_Word make__module_dep_file__TypeCtorInfo_464_464;
    MR_Integer make__module_dep_file__VersionNumber_8;
    MR_Word make__module_dep_file__ForeignLanguages_10;
    MR_Word make__module_dep_file__ForeignImportModules_11;
    MR_Word make__module_dep_file__ForeignImportModuleInfos_12;
    MR_String make__module_dep_file__ContainsForeignExportStr_13;
    MR_String make__module_dep_file__HasMainStr_14;
    MR_String make__module_dep_file__V_22_22;
    MR_Word make__module_dep_file__V_26_26;
    MR_Word make__module_dep_file__V_30_30;
    MR_Word make__module_dep_file__V_34_34;
    MR_Word make__module_dep_file__V_37_37;
    MR_Word make__module_dep_file__V_41_41;
    MR_Word make__module_dep_file__V_44_44;
    MR_Word make__module_dep_file__V_48_48;
    MR_Word make__module_dep_file__V_51_51;
    MR_Word make__module_dep_file__V_55_55;
    MR_Word make__module_dep_file__V_58_58;
    MR_Word make__module_dep_file__V_62_62;
    MR_Word make__module_dep_file__V_65_65;
    MR_Word make__module_dep_file__V_77_77;
    MR_Word make__module_dep_file__V_83_83;
    MR_Word make__module_dep_file__V_87_87;
    MR_Word make__module_dep_file__V_100_100;
    MR_Word make__module_dep_file__V_101_101;
    MR_Word make__module_dep_file__V_102_102;
    MR_Word make__module_dep_file__V_103_103;
    MR_Word make__module_dep_file__V_104_104;
    MR_Word make__module_dep_file__V_105_105;
    MR_Word make__module_dep_file__V_106_106;
    MR_Word make__module_dep_file__V_107_107;
    MR_Word make__module_dep_file__V_108_108;
    MR_Word make__module_dep_file__V_109_109;
    MR_Word make__module_dep_file__V_110_110;
    MR_Word make__module_dep_file__V_111_111;
    MR_Word make__module_dep_file__V_112_112;
    MR_Word make__module_dep_file__V_113_113;
    MR_Word make__module_dep_file__V_114_114;
    MR_Word make__module_dep_file__V_115_115;
    MR_Word make__module_dep_file__V_116_116;
    MR_Word make__module_dep_file__V_117_117;
    MR_Word make__module_dep_file__V_118_118;
    MR_Word make__module_dep_file__V_119_119;
    MR_Word make__module_dep_file__V_120_120;
    MR_Word make__module_dep_file__V_121_121;
    MR_Word make__module_dep_file__V_122_122;
    MR_Word make__module_dep_file__V_123_123;
    MR_Word make__module_dep_file__V_124_124;
    MR_String make__module_dep_file__V_125_125;
    MR_String make__module_dep_file__V_126_126;
    MR_Word make__module_dep_file__V_127_127;
    MR_Word make__module_dep_file__V_128_128;
    MR_Word make__module_dep_file__V_129_129;
    MR_Word make__module_dep_file__V_130_130;
    MR_Word make__module_dep_file__V_131_131;
    MR_Word make__module_dep_file__V_132_132;
    MR_Word make__module_dep_file__V_133_133;
    MR_Word make__module_dep_file__V_134_134;
    MR_Word make__module_dep_file__V_135_135;
    MR_Word make__module_dep_file__V_136_136;
    MR_Word make__module_dep_file__V_137_137;
    MR_Word make__module_dep_file__V_138_138;
    MR_Word make__module_dep_file__V_139_139;
    MR_Word make__module_dep_file__V_140_140;
    MR_Word make__module_dep_file__V_141_141;
    MR_Word make__module_dep_file__V_142_142;
    MR_Word make__module_dep_file__V_143_143;
    MR_Word make__module_dep_file__V_144_144;
    MR_Word make__module_dep_file__V_145_145;
    MR_Word make__module_dep_file__V_146_146;
    MR_Word make__module_dep_file__V_147_147;
    MR_Word make__module_dep_file__V_148_148;
    MR_Word make__module_dep_file__V_149_149;
    MR_Word make__module_dep_file__V_150_150;
    MR_String make__module_dep_file__V_151_151;
    MR_String make__module_dep_file__V_152_152;
    MR_Word make__module_dep_file__V_153_153;
    MR_Word make__module_dep_file__V_154_154;
    MR_Word make__module_dep_file__V_155_155;
    MR_Word make__module_dep_file__V_156_156;
    MR_Word make__module_dep_file__V_157_157;
    MR_Word make__module_dep_file__V_158_158;
    MR_Word make__module_dep_file__V_159_159;
    MR_Word make__module_dep_file__V_160_160;
    MR_Word make__module_dep_file__V_161_161;
    MR_Word make__module_dep_file__V_162_162;
    MR_Word make__module_dep_file__V_163_163;
    MR_Word make__module_dep_file__V_164_164;
    MR_Word make__module_dep_file__V_165_165;
    MR_Word make__module_dep_file__V_166_166;
    MR_Word make__module_dep_file__V_167_167;
    MR_Word make__module_dep_file__V_168_168;
    MR_Word make__module_dep_file__V_169_169;
    MR_Word make__module_dep_file__V_170_170;
    MR_Word make__module_dep_file__V_171_171;
    MR_Word make__module_dep_file__V_172_172;
    MR_Word make__module_dep_file__V_173_173;
    MR_Word make__module_dep_file__V_174_174;
    MR_Word make__module_dep_file__V_175_175;
    MR_Word make__module_dep_file__V_176_176;
    MR_String make__module_dep_file__V_177_177;
    MR_String make__module_dep_file__V_178_178;
    MR_Word make__module_dep_file__V_179_179;
    MR_Word make__module_dep_file__V_180_180;
    MR_Word make__module_dep_file__V_181_181;
    MR_Word make__module_dep_file__V_182_182;
    MR_Word make__module_dep_file__V_183_183;
    MR_Word make__module_dep_file__V_184_184;
    MR_Word make__module_dep_file__V_185_185;
    MR_Word make__module_dep_file__V_186_186;
    MR_Word make__module_dep_file__V_187_187;
    MR_Word make__module_dep_file__V_188_188;
    MR_Word make__module_dep_file__V_189_189;
    MR_Word make__module_dep_file__V_190_190;
    MR_Word make__module_dep_file__V_191_191;
    MR_Word make__module_dep_file__V_192_192;
    MR_Word make__module_dep_file__V_193_193;
    MR_Word make__module_dep_file__V_194_194;
    MR_Word make__module_dep_file__V_195_195;
    MR_Word make__module_dep_file__V_196_196;
    MR_Word make__module_dep_file__V_197_197;
    MR_Word make__module_dep_file__V_198_198;
    MR_Word make__module_dep_file__V_199_199;
    MR_Word make__module_dep_file__V_200_200;
    MR_Word make__module_dep_file__V_201_201;
    MR_Word make__module_dep_file__V_202_202;
    MR_String make__module_dep_file__V_203_203;
    MR_String make__module_dep_file__V_204_204;
    MR_Word make__module_dep_file__V_205_205;
    MR_Word make__module_dep_file__V_206_206;
    MR_Word make__module_dep_file__V_207_207;
    MR_Word make__module_dep_file__V_208_208;
    MR_Word make__module_dep_file__V_209_209;
    MR_Word make__module_dep_file__V_210_210;
    MR_Word make__module_dep_file__V_211_211;
    MR_Word make__module_dep_file__V_212_212;
    MR_Word make__module_dep_file__V_213_213;
    MR_Word make__module_dep_file__V_214_214;
    MR_Word make__module_dep_file__V_215_215;
    MR_Word make__module_dep_file__V_216_216;
    MR_Word make__module_dep_file__V_217_217;
    MR_Word make__module_dep_file__V_218_218;
    MR_Word make__module_dep_file__V_219_219;
    MR_Word make__module_dep_file__V_220_220;
    MR_Word make__module_dep_file__V_221_221;
    MR_Word make__module_dep_file__V_222_222;
    MR_Word make__module_dep_file__V_223_223;
    MR_Word make__module_dep_file__V_224_224;
    MR_Word make__module_dep_file__V_225_225;
    MR_Word make__module_dep_file__V_226_226;
    MR_Word make__module_dep_file__V_227_227;
    MR_Word make__module_dep_file__V_228_228;
    MR_String make__module_dep_file__V_229_229;
    MR_String make__module_dep_file__V_230_230;
    MR_Word make__module_dep_file__V_231_231;
    MR_Word make__module_dep_file__V_232_232;
    MR_Word make__module_dep_file__V_233_233;
    MR_Word make__module_dep_file__V_234_234;
    MR_Word make__module_dep_file__V_235_235;
    MR_Word make__module_dep_file__V_236_236;
    MR_Word make__module_dep_file__V_237_237;
    MR_Word make__module_dep_file__V_238_238;
    MR_Word make__module_dep_file__V_239_239;
    MR_Word make__module_dep_file__V_240_240;
    MR_Word make__module_dep_file__V_241_241;
    MR_Word make__module_dep_file__V_242_242;
    MR_Word make__module_dep_file__V_243_243;
    MR_Word make__module_dep_file__V_244_244;
    MR_Word make__module_dep_file__V_245_245;
    MR_Word make__module_dep_file__V_246_246;
    MR_Word make__module_dep_file__V_247_247;
    MR_Word make__module_dep_file__V_248_248;
    MR_Word make__module_dep_file__V_249_249;
    MR_Word make__module_dep_file__V_250_250;
    MR_Word make__module_dep_file__V_251_251;
    MR_Word make__module_dep_file__V_252_252;
    MR_Word make__module_dep_file__V_253_253;
    MR_Word make__module_dep_file__V_254_254;
    MR_String make__module_dep_file__V_255_255;
    MR_String make__module_dep_file__V_256_256;
    MR_Word make__module_dep_file__V_257_257;
    MR_Word make__module_dep_file__V_258_258;
    MR_Word make__module_dep_file__V_259_259;
    MR_Word make__module_dep_file__V_260_260;
    MR_Word make__module_dep_file__V_261_261;
    MR_Word make__module_dep_file__V_262_262;
    MR_Word make__module_dep_file__V_263_263;
    MR_Word make__module_dep_file__V_264_264;
    MR_Word make__module_dep_file__V_265_265;
    MR_Word make__module_dep_file__V_266_266;
    MR_Word make__module_dep_file__V_267_267;
    MR_Word make__module_dep_file__V_268_268;
    MR_Word make__module_dep_file__V_269_269;
    MR_Word make__module_dep_file__V_270_270;
    MR_Word make__module_dep_file__V_271_271;
    MR_Word make__module_dep_file__V_272_272;
    MR_Word make__module_dep_file__V_273_273;
    MR_Word make__module_dep_file__V_274_274;
    MR_Word make__module_dep_file__V_275_275;
    MR_Word make__module_dep_file__V_276_276;
    MR_Word make__module_dep_file__V_277_277;
    MR_Word make__module_dep_file__V_278_278;
    MR_Word make__module_dep_file__V_279_279;
    MR_Word make__module_dep_file__V_280_280;
    MR_String make__module_dep_file__V_281_281;
    MR_String make__module_dep_file__V_282_282;
    MR_Word make__module_dep_file__V_283_283;
    MR_Word make__module_dep_file__V_284_284;
    MR_Word make__module_dep_file__V_285_285;
    MR_Word make__module_dep_file__V_286_286;
    MR_Word make__module_dep_file__V_287_287;
    MR_Word make__module_dep_file__V_288_288;
    MR_Word make__module_dep_file__V_289_289;
    MR_Word make__module_dep_file__V_290_290;
    MR_Word make__module_dep_file__V_291_291;
    MR_Word make__module_dep_file__V_292_292;
    MR_Word make__module_dep_file__V_293_293;
    MR_Word make__module_dep_file__V_294_294;
    MR_Word make__module_dep_file__V_295_295;
    MR_Word make__module_dep_file__V_296_296;
    MR_Word make__module_dep_file__V_297_297;
    MR_Word make__module_dep_file__V_298_298;
    MR_Word make__module_dep_file__V_299_299;
    MR_Word make__module_dep_file__V_300_300;
    MR_Word make__module_dep_file__V_301_301;
    MR_Word make__module_dep_file__V_302_302;
    MR_Word make__module_dep_file__V_303_303;
    MR_Word make__module_dep_file__V_304_304;
    MR_Word make__module_dep_file__V_305_305;
    MR_Word make__module_dep_file__V_306_306;
    MR_String make__module_dep_file__V_307_307;
    MR_Word make__module_dep_file__LangList_9;
    MR_Word make__module_dep_file__V_71_71;
    MR_String make__module_dep_file__V_308_308;
    MR_Word make__module_dep_file__V_309_309;
    MR_Word make__module_dep_file__V_310_310;
    MR_Word make__module_dep_file__V_311_311;
    MR_Word make__module_dep_file__V_312_312;
    MR_Word make__module_dep_file__V_313_313;
    MR_Word make__module_dep_file__V_314_314;
    MR_Word make__module_dep_file__V_315_315;
    MR_Word make__module_dep_file__V_316_316;
    MR_Word make__module_dep_file__V_317_317;
    MR_Word make__module_dep_file__V_318_318;
    MR_Word make__module_dep_file__V_319_319;
    MR_Word make__module_dep_file__V_320_320;
    MR_Word make__module_dep_file__V_321_321;
    MR_Word make__module_dep_file__V_322_322;
    MR_Word make__module_dep_file__V_323_323;
    MR_Word make__module_dep_file__V_324_324;
    MR_Word make__module_dep_file__V_325_325;
    MR_Word make__module_dep_file__V_326_326;
    MR_Word make__module_dep_file__V_327_327;
    MR_Word make__module_dep_file__V_328_328;
    MR_Word make__module_dep_file__V_329_329;
    MR_Word make__module_dep_file__V_330_330;
    MR_Word make__module_dep_file__V_331_331;
    MR_Word make__module_dep_file__V_332_332;
    MR_String make__module_dep_file__V_333_333;
    MR_String make__module_dep_file__V_334_334;
    MR_Word make__module_dep_file__V_335_335;
    MR_Word make__module_dep_file__V_336_336;
    MR_Word make__module_dep_file__V_337_337;
    MR_Word make__module_dep_file__V_338_338;
    MR_Word make__module_dep_file__V_339_339;
    MR_Word make__module_dep_file__V_340_340;
    MR_Word make__module_dep_file__V_341_341;
    MR_Word make__module_dep_file__V_342_342;
    MR_Word make__module_dep_file__V_343_343;
    MR_Word make__module_dep_file__V_344_344;
    MR_Word make__module_dep_file__V_345_345;
    MR_Word make__module_dep_file__V_346_346;
    MR_Word make__module_dep_file__V_347_347;
    MR_Word make__module_dep_file__V_348_348;
    MR_Word make__module_dep_file__V_349_349;
    MR_Word make__module_dep_file__V_350_350;
    MR_Word make__module_dep_file__V_351_351;
    MR_Word make__module_dep_file__V_352_352;
    MR_Word make__module_dep_file__V_353_353;
    MR_Word make__module_dep_file__V_354_354;
    MR_Word make__module_dep_file__V_355_355;
    MR_Word make__module_dep_file__V_356_356;
    MR_Word make__module_dep_file__V_357_357;
    MR_Word make__module_dep_file__V_358_358;
    MR_String make__module_dep_file__V_359_359;
    MR_String make__module_dep_file__V_360_360;
    MR_Word make__module_dep_file__V_361_361;
    MR_Word make__module_dep_file__V_362_362;
    MR_Word make__module_dep_file__V_363_363;
    MR_Word make__module_dep_file__V_364_364;
    MR_Word make__module_dep_file__V_365_365;
    MR_Word make__module_dep_file__V_366_366;
    MR_Word make__module_dep_file__V_367_367;
    MR_Word make__module_dep_file__V_368_368;
    MR_Word make__module_dep_file__V_369_369;
    MR_Word make__module_dep_file__V_370_370;
    MR_Word make__module_dep_file__V_371_371;
    MR_Word make__module_dep_file__V_372_372;
    MR_Word make__module_dep_file__V_373_373;
    MR_Word make__module_dep_file__V_374_374;
    MR_Word make__module_dep_file__V_375_375;
    MR_Word make__module_dep_file__V_376_376;
    MR_Word make__module_dep_file__V_377_377;
    MR_Word make__module_dep_file__V_378_378;
    MR_Word make__module_dep_file__V_379_379;
    MR_Word make__module_dep_file__V_380_380;
    MR_Word make__module_dep_file__V_381_381;
    MR_Word make__module_dep_file__V_382_382;
    MR_Word make__module_dep_file__V_383_383;
    MR_Word make__module_dep_file__V_384_384;
    MR_String make__module_dep_file__V_385_385;
    MR_String make__module_dep_file__V_386_386;
    MR_Word make__module_dep_file__V_387_387;
    MR_Word make__module_dep_file__V_388_388;
    MR_Word make__module_dep_file__V_389_389;
    MR_Word make__module_dep_file__V_390_390;
    MR_Word make__module_dep_file__V_391_391;
    MR_Word make__module_dep_file__V_392_392;
    MR_Word make__module_dep_file__V_393_393;
    MR_Word make__module_dep_file__V_394_394;
    MR_Word make__module_dep_file__V_395_395;
    MR_Word make__module_dep_file__V_396_396;
    MR_Word make__module_dep_file__V_397_397;
    MR_Word make__module_dep_file__V_398_398;
    MR_Word make__module_dep_file__V_399_399;
    MR_Word make__module_dep_file__V_400_400;
    MR_Word make__module_dep_file__V_401_401;
    MR_Word make__module_dep_file__V_402_402;
    MR_Word make__module_dep_file__V_403_403;
    MR_Word make__module_dep_file__V_404_404;
    MR_Word make__module_dep_file__V_405_405;
    MR_Word make__module_dep_file__V_406_406;
    MR_Word make__module_dep_file__V_407_407;
    MR_Word make__module_dep_file__V_408_408;
    MR_Word make__module_dep_file__V_409_409;
    MR_Word make__module_dep_file__V_410_410;
    MR_String make__module_dep_file__V_411_411;

    {
      mercury__io__write_string_3_p_0((MR_String) "module(");
    }
    {
      make__module_dep_file__version_number_2_p_0(make__module_dep_file__Version_6, &make__module_dep_file__VersionNumber_8);
    }
    {
      mercury__io__write_int_3_p_0(make__module_dep_file__VersionNumber_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", \"");
    }
    make__module_dep_file__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      mercury__io__write_string_3_p_0(make__module_dep_file__V_22_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
    make__module_dep_file__V_126_126 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__V_26_26);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
    }
    make__module_dep_file__TypeCtorInfo_438_438 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    make__module_dep_file__V_152_152 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_177_177 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      make__module_dep_file__V_30_30 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_34_34);
    }
    {
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_30_30, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[1]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
    make__module_dep_file__V_178_178 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      make__module_dep_file__V_37_37 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_41_41);
    }
    {
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_37_37, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[2]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
    make__module_dep_file__V_204_204 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_229_229 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      make__module_dep_file__V_44_44 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_48_48);
    }
    {
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_44_44, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[3]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
    make__module_dep_file__V_230_230 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_255_255 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      make__module_dep_file__V_51_51 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_55_55);
    }
    {
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_51_51, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[4]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
    make__module_dep_file__V_256_256 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_281_281 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      make__module_dep_file__V_58_58 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_62_62);
    }
    {
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_58_58, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[5]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
    make__module_dep_file__V_282_282 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_307_307 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_dep_file__V_65_65, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[6]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
    make__module_dep_file__V_308_308 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_333_333 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_71_71)) == (MR_mktag((MR_Integer) 1)));
    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__LangList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_71_71, (MR_Integer) 0)));
        {
          make__module_dep_file__ForeignLanguages_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__LangList_9);
        }
      }
    else
      make__module_dep_file__ForeignLanguages_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__io__write_list_5_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__ForeignLanguages_10, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[7]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
    make__module_dep_file__V_334_334 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__ForeignImportModules_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_359_359 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      make__module_dep_file__ForeignImportModuleInfos_12 = parse_tree__prog_data__get_all_foreign_import_module_infos_1_f_0(make__module_dep_file__ForeignImportModules_11);
    }
    make__module_dep_file__TypeCtorInfo_464_464 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
    {
      make__module_dep_file__V_77_77 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_464_464, make__module_dep_file__ForeignImportModuleInfos_12);
    }
    {
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_464_464, make__module_dep_file__V_77_77, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[8]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n\t");
    }
    make__module_dep_file__V_360_360 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_385_385 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      make__module_dep_file__contains_foreign_export_to_string_2_p_0(make__module_dep_file__V_83_83, &make__module_dep_file__ContainsForeignExportStr_13);
    }
    {
      mercury__io__write_string_3_p_0(make__module_dep_file__ContainsForeignExportStr_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    make__module_dep_file__V_386_386 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
    make__module_dep_file__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
    make__module_dep_file__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
    make__module_dep_file__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
    make__module_dep_file__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
    make__module_dep_file__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
    make__module_dep_file__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
    make__module_dep_file__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
    make__module_dep_file__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
    make__module_dep_file__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
    make__module_dep_file__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
    make__module_dep_file__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
    make__module_dep_file__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
    make__module_dep_file__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
    make__module_dep_file__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
    make__module_dep_file__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
    make__module_dep_file__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
    make__module_dep_file__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
    make__module_dep_file__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
    make__module_dep_file__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
    make__module_dep_file__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
    make__module_dep_file__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
    make__module_dep_file__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
    make__module_dep_file__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
    make__module_dep_file__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
    make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
    make__module_dep_file__V_411_411 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
    {
      make__module_dep_file__has_main_to_string_2_p_0(make__module_dep_file__V_87_87, &make__module_dep_file__HasMainStr_14);
    }
    {
      mercury__io__write_string_3_p_0(make__module_dep_file__HasMainStr_14);
    }
    switch (make__module_dep_file__Version_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__module_dep_file__TypeCtorInfo_468_468;
          MR_Word make__module_dep_file__V_91_91;
          MR_Word make__module_dep_file__V_95_95;
          MR_String make__module_dep_file__V_412_412;
          MR_Word make__module_dep_file__V_413_413;
          MR_Word make__module_dep_file__V_414_414;
          MR_Word make__module_dep_file__V_415_415;
          MR_Word make__module_dep_file__V_416_416;
          MR_Word make__module_dep_file__V_417_417;
          MR_Word make__module_dep_file__V_418_418;
          MR_Word make__module_dep_file__V_419_419;
          MR_Word make__module_dep_file__V_420_420;
          MR_Word make__module_dep_file__V_421_421;
          MR_Word make__module_dep_file__V_422_422;
          MR_Word make__module_dep_file__V_423_423;
          MR_Word make__module_dep_file__V_424_424;
          MR_Word make__module_dep_file__V_425_425;
          MR_Word make__module_dep_file__V_426_426;
          MR_Word make__module_dep_file__V_427_427;
          MR_Word make__module_dep_file__V_428_428;
          MR_Word make__module_dep_file__V_429_429;
          MR_Word make__module_dep_file__V_430_430;
          MR_Word make__module_dep_file__V_431_431;
          MR_Word make__module_dep_file__V_432_432;
          MR_Word make__module_dep_file__V_433_433;
          MR_Word make__module_dep_file__V_434_434;
          MR_Word make__module_dep_file__V_435_435;
          MR_Word make__module_dep_file__V_436_436;
          MR_String make__module_dep_file__V_437_437;

          {
            mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
          }
          make__module_dep_file__TypeCtorInfo_468_468 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;
          make__module_dep_file__V_412_412 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
          make__module_dep_file__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
          make__module_dep_file__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
          make__module_dep_file__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
          make__module_dep_file__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
          make__module_dep_file__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
          make__module_dep_file__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
          make__module_dep_file__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
          make__module_dep_file__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
          make__module_dep_file__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
          make__module_dep_file__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
          make__module_dep_file__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
          make__module_dep_file__V_424_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
          make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
          make__module_dep_file__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
          make__module_dep_file__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
          make__module_dep_file__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
          make__module_dep_file__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
          make__module_dep_file__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
          make__module_dep_file__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
          make__module_dep_file__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
          make__module_dep_file__V_432_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
          make__module_dep_file__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
          make__module_dep_file__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
          make__module_dep_file__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
          make__module_dep_file__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
          make__module_dep_file__V_437_437 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
          {
            make__module_dep_file__V_91_91 = mercury__cord__list_1_f_0(make__module_dep_file__TypeCtorInfo_468_468, make__module_dep_file__V_95_95);
          }
          {
            mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_468_468, make__module_dep_file__V_91_91, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[9]);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n).\n");
    }
  }
}

static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
  MR_Word make__module_dep_file__Globals_5,
  MR_Word make__module_dep_file__ModuleAndImports_6)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 2)));
    MR_String make__module_dep_file__ProgDepFile_9;
    MR_Word make__module_dep_file__ProgDepResult_10;
    MR_String make__module_dep_file__V_19_19;
    MR_String make__module_dep_file__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 0)));
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 1)));
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 3)));
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 4)));
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 5)));
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 6)));
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 7)));
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 8)));
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 9)));
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 10)));
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 11)));
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 12)));
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 13)));
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 14)));
    MR_Word make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 15)));
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 16)));
    MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 17)));
    MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 18)));
    MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 19)));
    MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 20)));
    MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 21)));
    MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 22)));
    MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 23)));
    MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 24)));
    MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 25)));
    MR_String make__module_dep_file__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 26)));

    {
      make__module_dep_file__V_19_19 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleName_8, make__module_dep_file__V_19_19, (MR_Integer) 0, &make__module_dep_file__ProgDepFile_9);
    }
    {
      mercury__io__open_output_4_p_0(make__module_dep_file__ProgDepFile_9, &make__module_dep_file__ProgDepResult_10);
    }
    if (((MR_tag((MR_Word) make__module_dep_file__ProgDepResult_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__module_dep_file__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
        MR_String make__module_dep_file__Msg_16;
        MR_Word make__module_dep_file__V_23_23;
        MR_Word make__module_dep_file__V_26_26;
        MR_Word make__module_dep_file__V_27_27;
        MR_Word make__module_dep_file__V_29_29;

        {
          mercury__io__error_message_2_p_0(make__module_dep_file__Error_15, &make__module_dep_file__Msg_16);
        }
        {
          make__module_dep_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 0) = ((MR_Box) (make__module_dep_file__Msg_16));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[6])));
        }
        {
          make__module_dep_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 0) = ((MR_Box) ((MR_String) " for output: "));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__V_29_29));
        }
        {
          make__module_dep_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 0) = ((MR_Box) (make__module_dep_file__ProgDepFile_9));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 1) = ((MR_Box) (make__module_dep_file__V_27_27));
        }
        {
          make__module_dep_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 0) = ((MR_Box) ((MR_String) "Error opening "));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 1) = ((MR_Box) (make__module_dep_file__V_26_26));
        }
        {
          mercury__io__write_strings_3_p_0(make__module_dep_file__V_23_23);
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
    else
      {
        MR_Word make__module_dep_file__ProgDepStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
        MR_Word make__module_dep_file__OldOutputStream_12;
        MR_Word make__module_dep_file__Version_13;
        MR_Word make__module_dep_file__ForeignIncludeFilesCord_67;
        MR_String make__module_dep_file__V_68_68;
        MR_Word make__module_dep_file__V_69_69;
        MR_Word make__module_dep_file__V_70_70;
        MR_Word make__module_dep_file__V_71_71;
        MR_Word make__module_dep_file__V_72_72;
        MR_Word make__module_dep_file__V_73_73;
        MR_Word make__module_dep_file__V_74_74;
        MR_Word make__module_dep_file__V_75_75;
        MR_Word make__module_dep_file__V_76_76;
        MR_Word make__module_dep_file__V_77_77;
        MR_Word make__module_dep_file__V_78_78;
        MR_Word make__module_dep_file__V_79_79;
        MR_Word make__module_dep_file__V_80_80;
        MR_Word make__module_dep_file__V_81_81;
        MR_Word make__module_dep_file__V_82_82;
        MR_Word make__module_dep_file__V_83_83;
        MR_Word make__module_dep_file__V_84_84;
        MR_Word make__module_dep_file__V_85_85;
        MR_Word make__module_dep_file__V_86_86;
        MR_Word make__module_dep_file__V_87_87;
        MR_Word make__module_dep_file__V_88_88;
        MR_Word make__module_dep_file__V_89_89;
        MR_Word make__module_dep_file__V_90_90;
        MR_Word make__module_dep_file__V_91_91;
        MR_Word make__module_dep_file__V_92_92;
        MR_String make__module_dep_file__V_93_93;
        MR_Word make__module_dep_file__V_14_14;

        {
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ProgDepStream_11, &make__module_dep_file__OldOutputStream_12);
        }
        make__module_dep_file__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 0)));
        make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 1)));
        make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 2)));
        make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 3)));
        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 4)));
        make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 5)));
        make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 6)));
        make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 7)));
        make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 8)));
        make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 9)));
        make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 10)));
        make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 11)));
        make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 12)));
        make__module_dep_file__ForeignIncludeFilesCord_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 13)));
        make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 14)));
        make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 15)));
        make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 16)));
        make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 17)));
        make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 18)));
        make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 19)));
        make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 20)));
        make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 21)));
        make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 22)));
        make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 23)));
        make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 24)));
        make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 25)));
        make__module_dep_file__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 26)));
        {
          make__module_dep_file__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludeFilesCord_67);
        }
        if (make__module_dep_file__succeeded)
          make__module_dep_file__Version_13 = (MR_Integer) 0;
        else
          make__module_dep_file__Version_13 = (MR_Integer) 1;
        {
          make__module_dep_file__do_write_module_dep_file_2_4_p_0(make__module_dep_file__ModuleAndImports_6, make__module_dep_file__Version_13);
        }
        {
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_12, &make__module_dep_file__V_14_14);
        }
        {
          mercury__io__close_output_3_p_0(make__module_dep_file__ProgDepStream_11);
        }
      }
  }
}

static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
  MR_Word make__module_dep_file__HeadVar__1_1,
  MR_Word * make__module_dep_file__HeadVar__2_2)
{
  {
    MR_bool make__module_dep_file__succeeded;

    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word make__module_dep_file__SrcItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word make__module_dep_file__SrcItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word make__module_dep_file__RawItemBlock_5;
        MR_Word make__module_dep_file__RawItemBlocks_6;
        MR_Word make__module_dep_file__SrcSection_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 0)));
        MR_Word make__module_dep_file__SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 1)));
        MR_Word make__module_dep_file__Incls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 2)));
        MR_Word make__module_dep_file__Avails_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 3)));
        MR_Word make__module_dep_file__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 4)));
        MR_Word make__module_dep_file__RawSection_12;

        switch (make__module_dep_file__SrcSection_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            make__module_dep_file__RawSection_12 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            make__module_dep_file__RawSection_12 = (MR_Integer) 0;
            break;
        }
        {
          make__module_dep_file__RawItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 0) = ((MR_Box) (make__module_dep_file__RawSection_12));
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 1) = ((MR_Box) (make__module_dep_file__SectionContext_8));
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 2) = ((MR_Box) (make__module_dep_file__Incls_9));
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 3) = ((MR_Box) (make__module_dep_file__Avails_10));
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 4) = ((MR_Box) (make__module_dep_file__Items_11));
        }
        {
          make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(make__module_dep_file__SrcItemBlocks_4, &make__module_dep_file__RawItemBlocks_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *make__module_dep_file__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__RawItemBlock_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__module_dep_file__RawItemBlocks_6));
        }
      }
  }
}

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_2(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box * make__module_dep_file__wrapper_arg_2)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

    {
      mercury__io__format_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))));
    }
  }
}

static MR_Box MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1)
{
  {
    MR_Box make__module_dep_file__wrapper_arg_2;
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_String make__module_dep_file__conv0_LambdaHeadVar__2_59;

    {
      make__module_dep_file__conv0_LambdaHeadVar__2_59 = make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__247__1_1_f_0(((MR_String) make__module_dep_file__wrapper_arg_1));
    }
    make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_LambdaHeadVar__2_59));
    return make__module_dep_file__wrapper_arg_2;
  }
}

static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
  MR_Word make__module_dep_file__Globals_9,
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
  MR_Word make__module_dep_file__ModuleName_11,
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_36,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_37,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_38)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_String make__module_dep_file__SourceFileName_15;
    MR_Word make__module_dep_file__MaybeSourceFileTimestamp_16;
    MR_String make__module_dep_file__DepFileName_17;
    MR_Word make__module_dep_file__SearchDirs_18;
    MR_Word make__module_dep_file__MaybeDepFileTimestamp_19;
    MR_Word make__module_dep_file__ModuleDepMap2_33;
    MR_Word make__module_dep_file__V_44_44;
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_45_45;
    MR_String make__module_dep_file__V_47_47;
    MR_String make__module_dep_file__V_49_49;
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_53_53;
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_101_101;
    MR_Word make__module_dep_file__V_240_240;
    MR_Word make__module_dep_file__V_241_241;
    MR_Word make__module_dep_file__V_242_242;
    MR_Word make__module_dep_file__V_243_243;
    MR_Word make__module_dep_file__V_244_244;
    MR_Word make__module_dep_file__V_245_245;
    MR_Word make__module_dep_file__V_246_246;
    MR_Word make__module_dep_file__V_247_247;
    MR_Word make__module_dep_file__V_248_248;
    MR_Word make__module_dep_file__V_249_249;
    MR_Word make__module_dep_file__V_250_250;
    MR_Word make__module_dep_file__V_251_251;
    MR_Word make__module_dep_file__V_252_252;
    MR_Word make__module_dep_file__V_253_253;
    MR_Word make__module_dep_file__V_254_254;
    MR_Word make__module_dep_file__V_255_255;
    MR_Word make__module_dep_file__V_256_256;
    MR_Integer make__module_dep_file__V_257_257;
    MR_Word make__module_dep_file__V_258_258;
    MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_34;
    MR_Box make__module_dep_file__conv2_MaybeModuleAndImportsPrime_34;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, (MR_String) ".m", (MR_Integer) 1, &make__module_dep_file__SourceFileName_15);
    }
    {
      make__module_dep_file__V_47_47 = mercury__dir__this_directory_0_f_0();
    }
    {
      make__module_dep_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_44_44, 0) = ((MR_Box) (make__module_dep_file__V_47_47));
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_44_44, make__module_dep_file__SourceFileName_15, &make__module_dep_file__MaybeSourceFileTimestamp_16, make__module_dep_file__STATE_VARIABLE_Info_0_37, &make__module_dep_file__STATE_VARIABLE_Info_45_45);
    }
    {
      make__module_dep_file__V_49_49 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__V_49_49, (MR_Integer) 1, &make__module_dep_file__DepFileName_17);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_9, (MR_Integer) 636, &make__module_dep_file__SearchDirs_18);
    }
    {
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__SearchDirs_18, make__module_dep_file__DepFileName_17, &make__module_dep_file__MaybeDepFileTimestamp_19, make__module_dep_file__STATE_VARIABLE_Info_45_45, &make__module_dep_file__STATE_VARIABLE_Info_53_53);
    }
    if (((MR_tag((MR_Word) make__module_dep_file__MaybeDepFileTimestamp_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__module_dep_file__TypeCtorInfo_283_283 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_String make__module_dep_file__SearchDirsString_29;
        MR_Word make__module_dep_file__V_56_56;
        MR_Word make__module_dep_file__V_63_63;
        MR_Word make__module_dep_file__V_68_68;
        MR_Word make__module_dep_file__V_69_69;
        MR_Word make__module_dep_file__V_70_70;
        MR_Word make__module_dep_file__V_71_71;

        {
          make__module_dep_file__V_56_56 = mercury__list__map_2_f_0(make__module_dep_file__TypeCtorInfo_283_283, make__module_dep_file__TypeCtorInfo_283_283, (MR_Word) &make__module_dep_file_scalar_common_4[0], make__module_dep_file__SearchDirs_18);
        }
        {
          make__module_dep_file__SearchDirsString_29 = mercury__string__join_list_2_f_0((MR_String) ", ", make__module_dep_file__V_56_56);
        }
        {
          make__module_dep_file__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), make__module_dep_file__V_69_69, 0) = ((MR_Box) (make__module_dep_file__DepFileName_17));
        }
        {
          make__module_dep_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), make__module_dep_file__V_71_71, 0) = ((MR_Box) (make__module_dep_file__SearchDirsString_29));
        }
        {
          make__module_dep_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_70_70, 0) = ((MR_Box) (make__module_dep_file__V_71_71));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          make__module_dep_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_68_68, 0) = ((MR_Box) (make__module_dep_file__V_69_69));
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_68_68, 1) = ((MR_Box) (make__module_dep_file__V_70_70));
        }
        {
          make__module_dep_file__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 1) = ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_2));
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 3) = ((MR_Box) ((MR_String) "Module dependencies file \'%s\' not found in directories %s.\n"));
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 4) = ((MR_Box) (make__module_dep_file__V_68_68));
        }
        {
          make__util__debug_make_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_63_63);
        }
        switch (make__module_dep_file__RebuildModuleDeps_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word make__module_dep_file__ModuleDepMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
              MR_Word make__module_dep_file__ModuleDepMap1_32;
              MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
              MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
              MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
              MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
              MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
              MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
              MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
              MR_Word make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
              MR_Word make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
              MR_Word make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
              MR_Word make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 11)));
              MR_Word make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 12)));
              MR_Word make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 13)));
              MR_Word make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 14)));
              MR_Word make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 15)));
              MR_Word make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 16)));
              MR_Word make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 17)));
              MR_Integer make__module_dep_file__V_218_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 18)));
              MR_Word make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 19)));
              MR_Word make__module_dep_file__V_221_221;
              MR_Word make__module_dep_file__V_222_222;
              MR_Word make__module_dep_file__V_223_223;
              MR_Word make__module_dep_file__V_224_224;
              MR_Word make__module_dep_file__V_225_225;
              MR_Word make__module_dep_file__V_226_226;
              MR_Word make__module_dep_file__V_227_227;
              MR_Word make__module_dep_file__V_228_228;
              MR_Word make__module_dep_file__V_229_229;
              MR_Word make__module_dep_file__V_230_230;
              MR_Word make__module_dep_file__V_231_231;
              MR_Word make__module_dep_file__V_232_232;
              MR_Word make__module_dep_file__V_233_233;
              MR_Word make__module_dep_file__V_234_234;
              MR_Word make__module_dep_file__V_235_235;
              MR_Word make__module_dep_file__V_236_236;
              MR_Word make__module_dep_file__V_237_237;
              MR_Integer make__module_dep_file__V_238_238;
              MR_Word make__module_dep_file__V_239_239;
              MR_Word make__module_dep_file__V_220_220;

              {
                mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_31, &make__module_dep_file__ModuleDepMap1_32);
              }
              make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
              make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
              make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
              make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
              make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
              make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
              make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
              make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
              make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
              make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
              make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
              make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 11)));
              make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 12)));
              make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 13)));
              make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 14)));
              make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 15)));
              make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 16)));
              make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 17)));
              make__module_dep_file__V_238_238 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 18)));
              make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 19)));
              {
                make__module_dep_file__STATE_VARIABLE_Info_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap1_32));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 1) = ((MR_Box) (make__module_dep_file__V_221_221));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 2) = ((MR_Box) (make__module_dep_file__V_222_222));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 3) = ((MR_Box) (make__module_dep_file__V_223_223));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 4) = ((MR_Box) (make__module_dep_file__V_224_224));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 5) = ((MR_Box) (make__module_dep_file__V_225_225));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 6) = ((MR_Box) (make__module_dep_file__V_226_226));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 7) = ((MR_Box) (make__module_dep_file__V_227_227));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 8) = ((MR_Box) (make__module_dep_file__V_228_228));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 9) = ((MR_Box) (make__module_dep_file__V_229_229));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 10) = ((MR_Box) (make__module_dep_file__V_230_230));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 11) = ((MR_Box) (make__module_dep_file__V_231_231));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 12) = ((MR_Box) (make__module_dep_file__V_232_232));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 13) = ((MR_Box) (make__module_dep_file__V_233_233));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 14) = ((MR_Box) (make__module_dep_file__V_234_234));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 15) = ((MR_Box) (make__module_dep_file__V_235_235));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 16) = ((MR_Box) (make__module_dep_file__V_236_236));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 17) = ((MR_Box) (make__module_dep_file__V_237_237));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 18) = ((MR_Box) (make__module_dep_file__V_238_238));
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 19) = ((MR_Box) (make__module_dep_file__V_239_239));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_53_53, &make__module_dep_file__STATE_VARIABLE_Info_101_101);
            }
            break;
        }
      }
    else
      {
        MR_Word make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeDepFileTimestamp_19, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp_16)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_77_77;
            MR_Word make__module_dep_file__V_79_79;
            MR_Word make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_80_80;
            MR_Word make__module_dep_file__V_111_111;
            MR_Word make__module_dep_file__V_112_112;
            MR_Word make__module_dep_file__V_113_113;
            MR_Word make__module_dep_file__V_114_114;
            MR_Word make__module_dep_file__V_115_115;
            MR_Word make__module_dep_file__V_116_116;
            MR_Word make__module_dep_file__V_117_117;
            MR_Word make__module_dep_file__V_118_118;
            MR_Word make__module_dep_file__V_119_119;
            MR_Word make__module_dep_file__V_120_120;
            MR_Word make__module_dep_file__V_121_121;
            MR_Word make__module_dep_file__V_122_122;
            MR_Word make__module_dep_file__V_123_123;
            MR_Word make__module_dep_file__V_124_124;
            MR_Word make__module_dep_file__V_125_125;
            MR_Word make__module_dep_file__V_126_126;
            MR_Word make__module_dep_file__V_127_127;
            MR_Integer make__module_dep_file__V_128_128;
            MR_Word make__module_dep_file__V_129_129;
            MR_Box make__module_dep_file__conv1_STATE_VARIABLE_MaybeModuleAndImports_80_80;
            MR_Word make__module_dep_file__ModuleAndImports0_23;
            MR_String make__module_dep_file__V_81_81;
            MR_String make__module_dep_file__V_293_293;
            MR_String make__module_dep_file__V_130_130;
            MR_Word make__module_dep_file__V_131_131;
            MR_Word make__module_dep_file__V_132_132;
            MR_Word make__module_dep_file__V_133_133;
            MR_Word make__module_dep_file__V_134_134;
            MR_Word make__module_dep_file__V_135_135;
            MR_Word make__module_dep_file__V_136_136;
            MR_Word make__module_dep_file__V_137_137;
            MR_Word make__module_dep_file__V_138_138;
            MR_Word make__module_dep_file__V_139_139;
            MR_Word make__module_dep_file__V_140_140;
            MR_Word make__module_dep_file__V_141_141;
            MR_Word make__module_dep_file__V_142_142;
            MR_Word make__module_dep_file__V_143_143;
            MR_Word make__module_dep_file__V_144_144;
            MR_Word make__module_dep_file__V_145_145;
            MR_Word make__module_dep_file__V_146_146;
            MR_Word make__module_dep_file__V_147_147;
            MR_Word make__module_dep_file__V_148_148;
            MR_Word make__module_dep_file__V_149_149;
            MR_Word make__module_dep_file__V_150_150;
            MR_Word make__module_dep_file__V_151_151;
            MR_Word make__module_dep_file__V_152_152;
            MR_Word make__module_dep_file__V_153_153;
            MR_Word make__module_dep_file__V_154_154;
            MR_Word make__module_dep_file__V_155_155;

            {
              make__module_dep_file__read_module_dependencies_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_53_53, &make__module_dep_file__STATE_VARIABLE_Info_77_77);
            }
            make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 0)));
            make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 1)));
            make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 2)));
            make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 3)));
            make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 4)));
            make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 5)));
            make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 6)));
            make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 7)));
            make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 8)));
            make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 9)));
            make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 10)));
            make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 11)));
            make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 12)));
            make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 13)));
            make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 14)));
            make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 15)));
            make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 16)));
            make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 17)));
            make__module_dep_file__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 18)));
            make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 19)));
            {
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_79_79, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv1_STATE_VARIABLE_MaybeModuleAndImports_80_80);
            }
            make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_80_80 = ((MR_Word) make__module_dep_file__conv1_STATE_VARIABLE_MaybeModuleAndImports_80_80);
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_80_80)) == (MR_mktag((MR_Integer) 1)));
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__ModuleAndImports0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_80_80, (MR_Integer) 0)));
                make__module_dep_file__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 0)));
                make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 1)));
                make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 2)));
                make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 3)));
                make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 4)));
                make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 5)));
                make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 6)));
                make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 7)));
                make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 8)));
                make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 9)));
                make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 10)));
                make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 11)));
                make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 12)));
                make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 13)));
                make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 14)));
                make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 15)));
                make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 16)));
                make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 17)));
                make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 18)));
                make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 19)));
                make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 20)));
                make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 21)));
                make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 22)));
                make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 23)));
                make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 24)));
                make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 25)));
                make__module_dep_file__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 26)));
                {
                  make__module_dep_file__V_293_293 = mercury__dir__this_directory_0_f_0();
                }
                make__module_dep_file__succeeded = (strcmp(make__module_dep_file__V_81_81, make__module_dep_file__V_293_293) == 0);
              }
            if (make__module_dep_file__succeeded)
              {
                MR_String make__module_dep_file__SourceFileName1_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 0)));
                MR_Word make__module_dep_file__MaybeSourceFileTimestamp1_25;
                MR_Word make__module_dep_file__V_82_82;
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_83_83;
                MR_String make__module_dep_file__V_85_85;
                MR_Word make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 1)));
                MR_Word make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 2)));
                MR_Word make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 3)));
                MR_Word make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 4)));
                MR_Word make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 5)));
                MR_Word make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 6)));
                MR_Word make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 7)));
                MR_Word make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 8)));
                MR_Word make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 9)));
                MR_Word make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 10)));
                MR_Word make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 11)));
                MR_Word make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 12)));
                MR_Word make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 13)));
                MR_Word make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 14)));
                MR_Word make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 15)));
                MR_Word make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 16)));
                MR_Word make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 17)));
                MR_Word make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 18)));
                MR_Word make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 19)));
                MR_Word make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 20)));
                MR_Word make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 21)));
                MR_Word make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 22)));
                MR_Word make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 23)));
                MR_Word make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 24)));
                MR_Word make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 25)));
                MR_String make__module_dep_file__V_181_181 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 26)));

                {
                  make__module_dep_file__V_85_85 = mercury__dir__this_directory_0_f_0();
                }
                {
                  make__module_dep_file__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, 0) = ((MR_Box) (make__module_dep_file__V_85_85));
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_82_82, make__module_dep_file__SourceFileName1_24, &make__module_dep_file__MaybeSourceFileTimestamp1_25, make__module_dep_file__STATE_VARIABLE_Info_77_77, &make__module_dep_file__STATE_VARIABLE_Info_83_83);
                }
                if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp1_25)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_String make__module_dep_file__Message_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));
                    MR_Word make__module_dep_file__V_95_95;
                    MR_Word make__module_dep_file__V_182_182;
                    MR_Word make__module_dep_file__V_183_183;
                    MR_Word make__module_dep_file__V_184_184;
                    MR_Word make__module_dep_file__V_185_185;
                    MR_Word make__module_dep_file__V_186_186;
                    MR_Word make__module_dep_file__V_187_187;
                    MR_Word make__module_dep_file__V_188_188;
                    MR_Word make__module_dep_file__V_189_189;
                    MR_Word make__module_dep_file__V_190_190;
                    MR_Word make__module_dep_file__V_191_191;
                    MR_Word make__module_dep_file__V_192_192;
                    MR_Word make__module_dep_file__V_193_193;
                    MR_Word make__module_dep_file__V_194_194;
                    MR_Word make__module_dep_file__V_195_195;
                    MR_Word make__module_dep_file__V_196_196;
                    MR_Word make__module_dep_file__V_197_197;
                    MR_Word make__module_dep_file__V_198_198;
                    MR_Integer make__module_dep_file__V_199_199;
                    MR_Word make__module_dep_file__V_200_200;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
                    }
                    {
                      mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName1_24);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
                    }
                    {
                      mercury__io__write_string_3_p_0(make__module_dep_file__Message_27);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
                    }
                    make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 0)));
                    make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 1)));
                    make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 2)));
                    make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 3)));
                    make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 4)));
                    make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 5)));
                    make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 6)));
                    make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 7)));
                    make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 8)));
                    make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 9)));
                    make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 10)));
                    make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 11)));
                    make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 12)));
                    make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 13)));
                    make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 14)));
                    make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 15)));
                    make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 16)));
                    make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 17)));
                    make__module_dep_file__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 18)));
                    make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 19)));
                    {
                      make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_11, make__module_dep_file__V_95_95);
                    }
                    make__module_dep_file__STATE_VARIABLE_Info_101_101 = make__module_dep_file__STATE_VARIABLE_Info_83_83;
                  }
                else
                  {
                    MR_Word make__module_dep_file__SourceFileTimestamp1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));

                    make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
                    if (!(make__module_dep_file__succeeded))
                      {
                        MR_Word make__module_dep_file__V_294_294;

                        {
                          libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_294_294, make__module_dep_file__V_295_295, make__module_dep_file__SourceFileTimestamp1_26);
                        }
                        make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_294_294);
                      }
                    if (make__module_dep_file__succeeded)
                      make__module_dep_file__STATE_VARIABLE_Info_101_101 = make__module_dep_file__STATE_VARIABLE_Info_83_83;
                    else
                      {
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_83_83, &make__module_dep_file__STATE_VARIABLE_Info_101_101);
                      }
                  }
              }
            else
              make__module_dep_file__STATE_VARIABLE_Info_101_101 = make__module_dep_file__STATE_VARIABLE_Info_77_77;
          }
        else
          {
            MR_Word make__module_dep_file__SourceFileTimestamp_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp_16, (MR_Integer) 0)));

            make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
            if (!(make__module_dep_file__succeeded))
              {
                MR_Word make__module_dep_file__V_292_292;

                {
                  libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_292_292, make__module_dep_file__V_295_295, make__module_dep_file__SourceFileTimestamp_20);
                }
                make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_292_292);
              }
            if (make__module_dep_file__succeeded)
              {
                make__module_dep_file__read_module_dependencies_no_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_53_53, &make__module_dep_file__STATE_VARIABLE_Info_101_101);
              }
            else
              {
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_53_53, &make__module_dep_file__STATE_VARIABLE_Info_101_101);
              }
          }
      }
    make__module_dep_file__ModuleDepMap2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 0)));
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 1)));
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 2)));
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 3)));
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 4)));
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 5)));
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 6)));
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 7)));
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 8)));
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 9)));
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 10)));
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 11)));
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 12)));
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 13)));
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 14)));
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 15)));
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 16)));
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 17)));
    make__module_dep_file__V_257_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 18)));
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 19)));
    {
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__ModuleDepMap2_33, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv2_MaybeModuleAndImportsPrime_34);
    }
    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__MaybeModuleAndImportsPrime_34 = ((MR_Word) make__module_dep_file__conv2_MaybeModuleAndImportsPrime_34);
        make__module_dep_file__succeeded = MR_TRUE;
      }
    if (make__module_dep_file__succeeded)
      {
        *make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_36 = make__module_dep_file__MaybeModuleAndImportsPrime_34;
        *make__module_dep_file__STATE_VARIABLE_Info_38 = make__module_dep_file__STATE_VARIABLE_Info_101_101;
      }
    else
      {
        MR_Word make__module_dep_file__ModuleDepMap_35;
        MR_Word make__module_dep_file__V_260_260;
        MR_Word make__module_dep_file__V_261_261;
        MR_Word make__module_dep_file__V_262_262;
        MR_Word make__module_dep_file__V_263_263;
        MR_Word make__module_dep_file__V_264_264;
        MR_Word make__module_dep_file__V_265_265;
        MR_Word make__module_dep_file__V_266_266;
        MR_Word make__module_dep_file__V_267_267;
        MR_Word make__module_dep_file__V_268_268;
        MR_Word make__module_dep_file__V_269_269;
        MR_Word make__module_dep_file__V_270_270;
        MR_Word make__module_dep_file__V_271_271;
        MR_Word make__module_dep_file__V_272_272;
        MR_Word make__module_dep_file__V_273_273;
        MR_Word make__module_dep_file__V_274_274;
        MR_Word make__module_dep_file__V_275_275;
        MR_Word make__module_dep_file__V_276_276;
        MR_Integer make__module_dep_file__V_277_277;
        MR_Word make__module_dep_file__V_278_278;
        MR_Word make__module_dep_file__V_259_259;

        *make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap2_33, &make__module_dep_file__ModuleDepMap_35);
        }
        make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 0)));
        make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 1)));
        make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 2)));
        make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 3)));
        make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 4)));
        make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 5)));
        make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 6)));
        make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 7)));
        make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 8)));
        make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 9)));
        make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 10)));
        make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 11)));
        make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 12)));
        make__module_dep_file__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 13)));
        make__module_dep_file__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 14)));
        make__module_dep_file__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 15)));
        make__module_dep_file__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 16)));
        make__module_dep_file__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 17)));
        make__module_dep_file__V_277_277 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 18)));
        make__module_dep_file__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 19)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
          *make__module_dep_file__STATE_VARIABLE_Info_38 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_35));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_260_260));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_261_261));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_262_262));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_263_263));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_264_264));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_265_265));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_266_266));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_267_267));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_268_268));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_269_269));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_270_270));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_271_271));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_272_272));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_273_273));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_274_274));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_275_275));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_276_276));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_277_277));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_278_278));
        }
      }
  }
}

static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
  MR_Word make__module_dep_file__Globals_9,
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
  MR_Word make__module_dep_file__ModuleName_11,
  MR_Word * make__module_dep_file__MaybeModuleAndImports_12,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_15;
    MR_Word make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    MR_Word make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    MR_Word make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    MR_Word make__module_dep_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    MR_Word make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    MR_Word make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    MR_Word make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    MR_Word make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    MR_Word make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    MR_Word make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    MR_Word make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
    MR_Word make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
    MR_Word make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
    MR_Integer make__module_dep_file__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
    MR_Box make__module_dep_file__conv0_MaybeModuleAndImportsPrime_15;

    {
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_20_20, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_MaybeModuleAndImportsPrime_15);
    }
    if (make__module_dep_file__succeeded)
      {
        make__module_dep_file__MaybeModuleAndImportsPrime_15 = ((MR_Word) make__module_dep_file__conv0_MaybeModuleAndImportsPrime_15);
        make__module_dep_file__succeeded = MR_TRUE;
      }
    if (make__module_dep_file__succeeded)
      {
        *make__module_dep_file__MaybeModuleAndImports_12 = make__module_dep_file__MaybeModuleAndImportsPrime_15;
        *make__module_dep_file__STATE_VARIABLE_Info_17 = make__module_dep_file__STATE_VARIABLE_Info_0_16;
      }
    else
      {
        make__module_dep_file__do_get_module_dependencies_8_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__MaybeModuleAndImports_12, make__module_dep_file__STATE_VARIABLE_Info_0_16, make__module_dep_file__STATE_VARIABLE_Info_17);
      }
  }
}

static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
  MR_Word make__module_dep_file__Globals_1,
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
  MR_Word make__module_dep_file__ModuleName_3,
  MR_Word make__module_dep_file__HeadVar__4_4,
  MR_Word * make__module_dep_file__HeadVar__5_5,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_6,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7)
{
  {
    MR_bool make__module_dep_file__succeeded;

    switch (make__module_dep_file__HeadVar__4_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word make__module_dep_file__MaybeModuleAndImports_29;

          {
            make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_1, make__module_dep_file__RebuildModuleDeps_2, make__module_dep_file__ModuleName_3, &make__module_dep_file__MaybeModuleAndImports_29, make__module_dep_file__STATE_VARIABLE_Info_0_6, make__module_dep_file__STATE_VARIABLE_Info_7);
          }
          if ((make__module_dep_file__MaybeModuleAndImports_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
          else
            *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word make__module_dep_file__V_21_21;
          MR_Word make__module_dep_file__V_22_22;
          MR_Word make__module_dep_file__V_37_37;
          MR_Word make__module_dep_file__V_38_38;
          MR_Word make__module_dep_file__V_39_39;
          MR_Word make__module_dep_file__V_40_40;
          MR_Word make__module_dep_file__V_41_41;
          MR_Word make__module_dep_file__V_42_42;
          MR_Word make__module_dep_file__V_43_43;
          MR_Word make__module_dep_file__V_44_44;
          MR_Word make__module_dep_file__V_45_45;
          MR_Word make__module_dep_file__V_46_46;
          MR_Word make__module_dep_file__V_47_47;
          MR_Word make__module_dep_file__V_48_48;
          MR_Word make__module_dep_file__V_49_49;
          MR_Word make__module_dep_file__V_50_50;
          MR_Word make__module_dep_file__V_51_51;
          MR_Word make__module_dep_file__V_52_52;
          MR_Word make__module_dep_file__V_53_53;
          MR_Integer make__module_dep_file__V_54_54;
          MR_Word make__module_dep_file__V_55_55;
          MR_Word make__module_dep_file__V_57_57;
          MR_Word make__module_dep_file__V_58_58;
          MR_Word make__module_dep_file__V_59_59;
          MR_Word make__module_dep_file__V_60_60;
          MR_Word make__module_dep_file__V_61_61;
          MR_Word make__module_dep_file__V_62_62;
          MR_Word make__module_dep_file__V_63_63;
          MR_Word make__module_dep_file__V_64_64;
          MR_Word make__module_dep_file__V_65_65;
          MR_Word make__module_dep_file__V_66_66;
          MR_Word make__module_dep_file__V_67_67;
          MR_Word make__module_dep_file__V_68_68;
          MR_Word make__module_dep_file__V_69_69;
          MR_Word make__module_dep_file__V_70_70;
          MR_Word make__module_dep_file__V_71_71;
          MR_Word make__module_dep_file__V_72_72;
          MR_Word make__module_dep_file__V_73_73;
          MR_Integer make__module_dep_file__V_74_74;
          MR_Word make__module_dep_file__V_75_75;
          MR_Word make__module_dep_file__V_56_56;

          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
          make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
          make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
          make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
          make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
          make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
          make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
          make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
          make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
          make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
          make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
          make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
          make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
          make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
          make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));
          make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 14)));
          make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 15)));
          make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 16)));
          make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 17)));
          make__module_dep_file__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 18)));
          make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 19)));
          {
            make__module_dep_file__V_22_22 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_3)), make__module_dep_file__V_21_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
          make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
          make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
          make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
          make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
          make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
          make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
          make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
          make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
          make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
          make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
          make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
          make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
          make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
          make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));
          make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 14)));
          make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 15)));
          make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 16)));
          make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 17)));
          make__module_dep_file__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 18)));
          make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 19)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
            *make__module_dep_file__STATE_VARIABLE_Info_7 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_22_22));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_57_57));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_58_58));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_59_59));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_60_60));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_61_61));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_62_62));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_63_63));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_64_64));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_65_65));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_66_66));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_67_67));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_68_68));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_69_69));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_70_70));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_71_71));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_72_72));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_73_73));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_74_74));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_75_75));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
  MR_Word make__module_dep_file__HeadVar__1_1,
  MR_Integer * make__module_dep_file__HeadVar__2_2)
{
  {
    MR_bool make__module_dep_file__succeeded;

    switch (make__module_dep_file__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 2;
        break;
    }
  }
}

void MR_CALL 
make__module_dep_file__write_module_dep_file_4_p_0(
  MR_Word make__module_dep_file__Globals_5,
  MR_Word make__module_dep_file__ModuleAndImports0_6)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__AugCompUnit_8;
    MR_Word make__module_dep_file__Specs_9;
    MR_Word make__module_dep_file__ModuleName_11;
    MR_Word make__module_dep_file__ModuleNameContext_12;
    MR_Word make__module_dep_file__SrcItemBlocks_14;
    MR_Word make__module_dep_file__RawItemBlocks_19;
    MR_Word make__module_dep_file__RawCompUnit_20;
    MR_Word make__module_dep_file__ModuleAndImports_21;
    MR_String make__module_dep_file__V_24_24;
    MR_Word make__module_dep_file__V_27_27;
    MR_Word make__module_dep_file__V_29_29;
    MR_Word make__module_dep_file__V_38_38;
    MR_Word make__module_dep_file___Errors_10;
    MR_Word make__module_dep_file___ModuleVersionNumbers_13;
    MR_Word make__module_dep_file___DirectIntItemBlocksCord_15;
    MR_Word make__module_dep_file___IndirectIntItemBlocksCord_16;
    MR_Word make__module_dep_file___OptItemBlocksCord_17;
    MR_Word make__module_dep_file___IntForOptItemBlocksCord_18;
    MR_Word make__module_dep_file__V_30_30;
    MR_Word make__module_dep_file__V_31_31;
    MR_Word make__module_dep_file__V_32_32;
    MR_Word make__module_dep_file__V_33_33;
    MR_Word make__module_dep_file__V_34_34;
    MR_Word make__module_dep_file__V_35_35;
    MR_Word make__module_dep_file__V_36_36;
    MR_Word make__module_dep_file__V_37_37;
    MR_Word make__module_dep_file__V_39_39;
    MR_Word make__module_dep_file__V_40_40;
    MR_Word make__module_dep_file__V_41_41;
    MR_Word make__module_dep_file__V_42_42;
    MR_Word make__module_dep_file__V_43_43;
    MR_Word make__module_dep_file__V_44_44;
    MR_Word make__module_dep_file__V_45_45;
    MR_Word make__module_dep_file__V_46_46;
    MR_Word make__module_dep_file__V_47_47;
    MR_Word make__module_dep_file__V_48_48;
    MR_Word make__module_dep_file__V_49_49;
    MR_Word make__module_dep_file__V_50_50;
    MR_Word make__module_dep_file__V_51_51;
    MR_Word make__module_dep_file__V_52_52;
    MR_Word make__module_dep_file__V_53_53;
    MR_String make__module_dep_file__V_54_54;

    {
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(make__module_dep_file__ModuleAndImports0_6, &make__module_dep_file__AugCompUnit_8, &make__module_dep_file__Specs_9, &make__module_dep_file___Errors_10);
    }
    make__module_dep_file__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 0)));
    make__module_dep_file__ModuleNameContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 1)));
    make__module_dep_file___ModuleVersionNumbers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 2)));
    make__module_dep_file__SrcItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 3)));
    make__module_dep_file___DirectIntItemBlocksCord_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 4)));
    make__module_dep_file___IndirectIntItemBlocksCord_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 5)));
    make__module_dep_file___OptItemBlocksCord_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 6)));
    make__module_dep_file___IntForOptItemBlocksCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 7)));
    {
      make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(make__module_dep_file__SrcItemBlocks_14, &make__module_dep_file__RawItemBlocks_19);
    }
    {
      make__module_dep_file__RawCompUnit_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 0) = ((MR_Box) (make__module_dep_file__ModuleName_11));
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 1) = ((MR_Box) (make__module_dep_file__ModuleNameContext_12));
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 2) = ((MR_Box) (make__module_dep_file__RawItemBlocks_19));
    }
    make__module_dep_file__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 0)));
    make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 1)));
    make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 2)));
    make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 3)));
    make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 4)));
    make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 5)));
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 6)));
    make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 7)));
    make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 8)));
    make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 9)));
    make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 10)));
    make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 11)));
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 12)));
    make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 13)));
    make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 14)));
    make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 15)));
    make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 16)));
    make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 17)));
    make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 18)));
    make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 19)));
    make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 20)));
    make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 21)));
    make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 22)));
    make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 23)));
    make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 24)));
    make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 25)));
    make__module_dep_file__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 26)));
    {
      make__module_dep_file__V_27_27 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
    {
      parse_tree__module_imports__init_module_and_imports_8_p_0(make__module_dep_file__Globals_5, make__module_dep_file__V_24_24, make__module_dep_file__V_29_29, make__module_dep_file__V_38_38, make__module_dep_file__Specs_9, make__module_dep_file__V_27_27, make__module_dep_file__RawCompUnit_20, &make__module_dep_file__ModuleAndImports_21);
    }
    {
      make__module_dep_file__do_write_module_dep_file_4_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleAndImports_21);
    }
  }
}

static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
  MR_Box make__module_dep_file__closure_arg,
  MR_Box make__module_dep_file__wrapper_arg_1,
  MR_Box make__module_dep_file__wrapper_arg_2,
  MR_Box * make__module_dep_file__wrapper_arg_3,
  MR_Box make__module_dep_file__wrapper_arg_4,
  MR_Box * make__module_dep_file__wrapper_arg_5,
  MR_Box make__module_dep_file__wrapper_arg_6,
  MR_Box * make__module_dep_file__wrapper_arg_7)
{
  {
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
    MR_Word make__module_dep_file__conv2_HeadVar__5_5;
    MR_Word make__module_dep_file__conv1_STATE_VARIABLE_Info_7;

    {
      make__module_dep_file__generate_ancestor_dependencies_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv1_STATE_VARIABLE_Info_7);
    }
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__5_5));
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv1_STATE_VARIABLE_Info_7));
  }
}

void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0(
  MR_Word make__module_dep_file__Globals_8,
  MR_Word make__module_dep_file__ModuleName_9,
  MR_Word * make__module_dep_file__MaybeModuleAndImports_10,
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
{
  {
    MR_bool make__module_dep_file__succeeded;
    MR_Word make__module_dep_file__RebuildModuleDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
    MR_Integer make__module_dep_file__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));

    if (((MR_tag((MR_Word) make__module_dep_file__ModuleName_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_17;
        MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
        MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
        MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
        MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
        MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
        MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
        MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
        MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
        MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
        MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
        MR_Word make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
        MR_Word make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
        MR_Word make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
        MR_Word make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
        MR_Word make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
        MR_Word make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
        MR_Word make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
        MR_Word make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
        MR_Integer make__module_dep_file__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
        MR_Word make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));
        MR_Box make__module_dep_file__conv0_MaybeModuleAndImportsPrime_17;

        {
          make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_26_26, ((MR_Box) (make__module_dep_file__ModuleName_9)), &make__module_dep_file__conv0_MaybeModuleAndImportsPrime_17);
        }
        if (make__module_dep_file__succeeded)
          {
            make__module_dep_file__MaybeModuleAndImportsPrime_17 = ((MR_Word) make__module_dep_file__conv0_MaybeModuleAndImportsPrime_17);
            make__module_dep_file__succeeded = MR_TRUE;
          }
        if (make__module_dep_file__succeeded)
          {
            *make__module_dep_file__MaybeModuleAndImports_10 = make__module_dep_file__MaybeModuleAndImportsPrime_17;
            *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
          }
        else
          {
            MR_Word make__module_dep_file__TypeCtorInfo_122_122;
            MR_Word make__module_dep_file__Ancestors_18;
            MR_Word make__module_dep_file__Error_19;
            MR_Word make__module_dep_file__V_27_27;
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_29_29;
            MR_Box make__module_dep_file__conv5_Error_19;
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29;
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30;

            {
              make__module_dep_file__Ancestors_18 = mdbcomp__sym_name__get_ancestors_1_f_0(make__module_dep_file__ModuleName_9);
            }
            {
              make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__get_module_dependencies_7_p_0_1));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_8));
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__RebuildModuleDeps_13));
            }
            make__module_dep_file__TypeCtorInfo_122_122 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            {
              mercury__list__foldl3_8_p_2(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__Ancestors_18, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv5_Error_19, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_22)), &make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30);
            }
            make__module_dep_file__Error_19 = ((MR_Word) make__module_dep_file__conv5_Error_19);
            make__module_dep_file__STATE_VARIABLE_Info_29_29 = ((MR_Word) make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29);
            switch (make__module_dep_file__Error_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeModuleAndImports_10, make__module_dep_file__STATE_VARIABLE_Info_29_29, make__module_dep_file__STATE_VARIABLE_Info_23);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word make__module_dep_file__ModuleDepMap0_20;
                  MR_Word make__module_dep_file__ModuleDepMap_21;
                  MR_Word make__module_dep_file__V_74_74;
                  MR_Word make__module_dep_file__V_75_75;
                  MR_Word make__module_dep_file__V_76_76;
                  MR_Word make__module_dep_file__V_77_77;
                  MR_Word make__module_dep_file__V_78_78;
                  MR_Word make__module_dep_file__V_79_79;
                  MR_Word make__module_dep_file__V_80_80;
                  MR_Word make__module_dep_file__V_81_81;
                  MR_Word make__module_dep_file__V_82_82;
                  MR_Word make__module_dep_file__V_83_83;
                  MR_Word make__module_dep_file__V_84_84;
                  MR_Word make__module_dep_file__V_85_85;
                  MR_Word make__module_dep_file__V_86_86;
                  MR_Word make__module_dep_file__V_87_87;
                  MR_Word make__module_dep_file__V_88_88;
                  MR_Word make__module_dep_file__V_89_89;
                  MR_Word make__module_dep_file__V_90_90;
                  MR_Integer make__module_dep_file__V_91_91;
                  MR_Word make__module_dep_file__V_92_92;
                  MR_Word make__module_dep_file__V_94_94;
                  MR_Word make__module_dep_file__V_95_95;
                  MR_Word make__module_dep_file__V_96_96;
                  MR_Word make__module_dep_file__V_97_97;
                  MR_Word make__module_dep_file__V_98_98;
                  MR_Word make__module_dep_file__V_99_99;
                  MR_Word make__module_dep_file__V_100_100;
                  MR_Word make__module_dep_file__V_101_101;
                  MR_Word make__module_dep_file__V_102_102;
                  MR_Word make__module_dep_file__V_103_103;
                  MR_Word make__module_dep_file__V_104_104;
                  MR_Word make__module_dep_file__V_105_105;
                  MR_Word make__module_dep_file__V_106_106;
                  MR_Word make__module_dep_file__V_107_107;
                  MR_Word make__module_dep_file__V_108_108;
                  MR_Word make__module_dep_file__V_109_109;
                  MR_Word make__module_dep_file__V_110_110;
                  MR_Integer make__module_dep_file__V_111_111;
                  MR_Word make__module_dep_file__V_112_112;
                  MR_Word make__module_dep_file__V_93_93;

                  *make__module_dep_file__MaybeModuleAndImports_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  make__module_dep_file__ModuleDepMap0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
                  make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
                  make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
                  make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
                  make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
                  make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
                  make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
                  make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
                  make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
                  make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
                  make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
                  make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
                  make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
                  make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
                  make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
                  make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
                  make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
                  make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
                  make__module_dep_file__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
                  make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
                  {
                    mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_9)), ((MR_Box) (*make__module_dep_file__MaybeModuleAndImports_10)), make__module_dep_file__ModuleDepMap0_20, &make__module_dep_file__ModuleDepMap_21);
                  }
                  make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
                  make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
                  make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
                  make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
                  make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
                  make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
                  make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
                  make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
                  make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
                  make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
                  make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
                  make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
                  make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
                  make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
                  make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
                  make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
                  make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
                  make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
                  make__module_dep_file__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
                  make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
                    *make__module_dep_file__STATE_VARIABLE_Info_23 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_21));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_94_94));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_95_95));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_96_96));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_97_97));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_98_98));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_99_99));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_100_100));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_101_101));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_102_102));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_103_103));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_104_104));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_105_105));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_106_106));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_107_107));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_108_108));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_109_109));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_110_110));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_111_111));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_112_112));
                  }
                }
                break;
            }
          }
      }
    else
      {
        make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeModuleAndImports_10, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module make.module_dep_file. */
