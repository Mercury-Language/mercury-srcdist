/*
** Automatically generated from `make.get_module_dep_info.m'
** by the Mercury compiler,
** version rotd-2026-06-02
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


// :- module make.get_module_dep_info.
// :- implementation.

/*
INIT mercury__make__get_module_dep_info__init
ENDINIT
*/

#include "make.get_module_dep_info.mih"


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
#include "recompilation.mih"
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
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.file_names.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.prereqs_cache.mih"
#include "make.timestamp.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"



struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s {
  MR_Word make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__Info_3;
  MR_Word make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__ModuleNames_4;
  MR_bool make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded;
  jmp_buf make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__commit_0;
  MR_Word make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__TypeCtorInfo_9_9;
  MR_Word make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__TypeCtorInfo_10_10;
  MR_Word make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__MaybeModuleDepInfo_6;
  MR_Word make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__Var_7;
  MR_Word make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__ModuleName_8;
  MR_Box make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__conv0_ModuleName_8;
};


static const MR_FA_PseudoTypeInfo_Struct1 make__get_module_dep_info__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__get_module_dep_info__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__get_module_dep_info__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__get_module_dep_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0;

static MR_Word MR_CALL 
make__get_module_dep_info__IntroducedFrom__func__write_module_dep_files_for_source_file__605__1_1_f_0(
  MR_Word LambdaHeadVar__1_57);

static MR_String MR_CALL 
make__get_module_dep_info__IntroducedFrom__func__do_get_maybe_module_dep_info__264__1_1_f_0(
  MR_String LambdaHeadVar__1_91);

static void MR_CALL 
make__get_module_dep_info__cleanup_module_dep_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__get_module_dep_info__cleanup_module_dep_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__get_module_dep_info__cleanup_module_dep_files_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleNames_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__get_module_dep_info__cleanup_int3_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__get_module_dep_info__cleanup_int3_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__get_module_dep_info__cleanup_int3_files_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleNames_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__get_module_dep_info__make_info_add_burdened_module_as_dep_3_p_0(
  MR_Word BurdenedModule_4,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
make__get_module_dep_info__record_no_module_dep_info_for_module_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ModuleDepMap_0_6,
  MR_Word * STATE_VARIABLE_ModuleDepMap_7);

static void MR_CALL 
make__get_module_dep_info__maybe_record_modules_maybe_module_dep_infos_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__get_module_dep_info__maybe_record_modules_maybe_module_dep_infos_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word RebuildModuleDeps_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static MR_Box MR_CALL 
make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word RebuildModuleDeps_12,
  MR_Word ModuleName_13,
  MR_Word * STATE_VARIABLE_MaybeModuleDepInfo_46,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static void MR_CALL 
make__get_module_dep_info__maybe_write_importing_module_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word ModuleName_7,
  MR_Word MaybeIoI_8);

static void MR_CALL 
make__get_module_dep_info__find_and_read_module_dep_file_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__get_module_dep_info__find_and_read_module_dep_file_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__get_module_dep_info__find_and_read_module_dep_file_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__get_module_dep_info__find_and_read_module_dep_file_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word RebuildModuleDeps_12,
  MR_Word SearchWhichDirs_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
make__get_module_dep_info__try_to_write_module_dep_files_for_top_module_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0(
  MR_Word Globals_14,
  MR_Word ProgressStream_15,
  MR_Word MESI_16,
  MR_Word ErrorStream_17,
  MR_String SourceFileName_18,
  MR_Word ModuleName_19,
  MR_Word ReadModuleErrors_20,
  MR_Word MaybeTimestamp_21,
  MR_Word ParseTreeSrc_22,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53);

static void MR_CALL 
make__get_module_dep_info__cannot_write_module_dep_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__get_module_dep_info__cannot_write_module_dep_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ModuleName_11,
  MR_Word ReadModuleErrors_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__get_module_dep_info__report_cannot_read_src_to_generate_module_dep_6_p_0(
  MR_Word ProgressStream_7,
  MR_String SourceFileName_8,
  MR_Word ModuleName_9,
  MR_Word Info_10);

static void MR_CALL 
make__get_module_dep_info__error_and_maybe_rebuilding_msg_4_p_0(
  MR_Word RebuildModuleDeps_5,
  MR_String ModuleDepsFile_6,
  MR_String ErrorMsg_7,
  MR_String * Msg_8);

static void MR_CALL 
make__get_module_dep_info__some_module_has_dep_info_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
make__get_module_dep_info__some_module_has_dep_info_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__get_module_dep_info__some_module_has_dep_info_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
make__get_module_dep_info__some_module_has_dep_info_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
make__get_module_dep_info__some_module_has_dep_info_2_p_0(
  MR_Word Info_3,
  MR_Word ModuleNames_4);

static void MR_CALL 
make__get_module_dep_info__check_regular_file_exists_4_p_0(
  MR_String FileName_5,
  MR_Word * FileExists_6);


static /* final */ const MR_Box make__get_module_dep_info_scalar_common_1[6][3];

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_2[2][2];

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_3[4][1];

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_4[2][8];

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_5[3][5];

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_6[3][6];

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_7[1][13];

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_8[2][10];

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_9[1][7];

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_10[1][12];




static /* final */ const MR_Box make__get_module_dep_info_scalar_common_1[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__get_module_dep_info_scalar_common_5[0])),
    ((MR_Box) (make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__get_module_dep_info_scalar_common_5[1])),
    ((MR_Box) (make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__get_module_dep_info_scalar_common_6[0])),
    ((MR_Box) (make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__get_module_dep_info_scalar_common_5[2])),
    ((MR_Box) (make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__get_module_dep_info_scalar_common_6[2])),
    ((MR_Box) (make__get_module_dep_info__maybe_record_modules_maybe_module_dep_infos_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_3[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 10U) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "error in nested submodules")) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
};

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_4[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__get_module_dep_info__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_6[3][6] = {
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
    ((MR_Box) (&make__get_module_dep_info__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__get_module_dep_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&make__get_module_dep_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0))
  },
};

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_7[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_add_to_hptm_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__get_module_dep_info__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_8[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__get_module_dep_info__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_9[1][7] = {
  /* row   0 */
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

static /* final */ const MR_Box make__get_module_dep_info_scalar_common_10[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_maybe_rebuild_module_deps_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_search_which_dirs_0)),
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


static const MR_FA_PseudoTypeInfo_Struct1 make__get_module_dep_info__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__get_module_dep_info__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__get_module_dep_info__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__get_module_dep_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)
  }
};

static MR_Word MR_CALL 
make__get_module_dep_info__IntroducedFrom__func__write_module_dep_files_for_source_file__605__1_1_f_0(
  MR_Word LambdaHeadVar__1_57)
{
  MR_Word LambdaHeadVar__2_58 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_57, 1))));

  return LambdaHeadVar__2_58;
}

static MR_String MR_CALL 
make__get_module_dep_info__IntroducedFrom__func__do_get_maybe_module_dep_info__264__1_1_f_0(
  MR_String LambdaHeadVar__1_91)
{
  MR_String LambdaHeadVar__2_92;
  MR_String Var_94;

  Var_94 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_91, (MR_String) "\'");
  LambdaHeadVar__2_92 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_94);
  return LambdaHeadVar__2_92;
}

static void MR_CALL 
make__get_module_dep_info__cleanup_module_dep_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 134, ModuleName_10, (MR_Word) (MR_mkword(1, &make__get_module_dep_info_scalar_common_3[0])), STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
make__get_module_dep_info__cleanup_module_dep_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__get_module_dep_info__cleanup_module_dep_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__get_module_dep_info__cleanup_module_dep_files_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleNames_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word Var_17;
  MR_Box conv2_STATE_VARIABLE_Info_14;
  MR_Box conv1_STATE_VARIABLE_IO_16;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_8[1]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (make__get_module_dep_info__cleanup_module_dep_files_7_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (Globals_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, ModuleNames_10, ((MR_Box) (STATE_VARIABLE_Info_0_13)), &conv2_STATE_VARIABLE_Info_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
  *STATE_VARIABLE_Info_14 = ((MR_Word) (conv2_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__get_module_dep_info__cleanup_int3_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_8, Globals_9, (MR_String) "predicate \140make.get_module_dep_info.cleanup_int3_file\'/7", (MR_Integer) 132, ModuleName_10, (MR_Word) ((MR_Unsigned) 20U), STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
make__get_module_dep_info__cleanup_int3_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__get_module_dep_info__cleanup_int3_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__get_module_dep_info__cleanup_int3_files_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleNames_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word Var_17;
  MR_Box conv2_STATE_VARIABLE_Info_14;
  MR_Box conv1_STATE_VARIABLE_IO_16;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_8[1]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (make__get_module_dep_info__cleanup_int3_files_7_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (Globals_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, ModuleNames_10, ((MR_Box) (STATE_VARIABLE_Info_0_13)), &conv2_STATE_VARIABLE_Info_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
  *STATE_VARIABLE_Info_14 = ((MR_Word) (conv2_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__get_module_dep_info__make_info_add_burdened_module_as_dep_3_p_0(
  MR_Word BurdenedModule_4,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_Word ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_4, 1))));
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_6, 0))));
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
  ModuleDepMap0_10 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_0_12);
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (MaybeModuleDepInfo_9)), ModuleDepMap0_10, &ModuleDepMap_11);
  make__make_info__make_info_set_maybe_module_dep_info_map_3_p_0(ModuleDepMap_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
}

static void MR_CALL 
make__get_module_dep_info__record_no_module_dep_info_for_module_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ModuleDepMap_0_6,
  MR_Word * STATE_VARIABLE_ModuleDepMap_7)
{
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_4)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_ModuleDepMap_0_6, STATE_VARIABLE_ModuleDepMap_7);
}

void MR_CALL 
make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeModuleDepInfo_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word RebuildModuleDeps_15;

  RebuildModuleDeps_15 = make__make_info__make_info_get_rebuild_module_deps_1_f_0(STATE_VARIABLE_Info_0_21);
  if (((MR_tag((MR_Word) ModuleName_11)) == (MR_Integer) 1))
  {
    MR_Word AncestorsAndSelf_19;
    MR_Word ModuleDepMap_20;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box conv0_MaybeModuleDepInfo_12;

    Var_27 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_11);
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    AncestorsAndSelf_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_27, Var_28);
    make__get_module_dep_info__maybe_record_modules_maybe_module_dep_infos_8_p_0(ProgressStream_9, Globals_10, RebuildModuleDeps_15, AncestorsAndSelf_19, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    ModuleDepMap_20 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(*STATE_VARIABLE_Info_22);
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap_20, ((MR_Box) (ModuleName_11)), &conv0_MaybeModuleDepInfo_12);
    *MaybeModuleDepInfo_12 = ((MR_Word) (conv0_MaybeModuleDepInfo_12));
  }
  else
  {
    MR_Word ModuleDepMap0_32;
    MR_Word MaybeModuleDepInfo0_33;
    MR_Box conv1_MaybeModuleDepInfo0_33;

    ModuleDepMap0_32 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_0_21);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap0_32, ((MR_Box) (ModuleName_11)), &conv1_MaybeModuleDepInfo0_33);
    if (succeeded)
    {
      MaybeModuleDepInfo0_33 = ((MR_Word) (conv1_MaybeModuleDepInfo0_33));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeModuleDepInfo_12 = MaybeModuleDepInfo0_33;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    }
    else
      make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0(ProgressStream_9, Globals_10, RebuildModuleDeps_15, ModuleName_11, MaybeModuleDepInfo_12, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  }
}

static void MR_CALL 
make__get_module_dep_info__maybe_record_modules_maybe_module_dep_infos_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleDepMap_7;

  make__get_module_dep_info__record_no_module_dep_info_for_module_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleDepMap_7);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleDepMap_7));
}

static void MR_CALL 
make__get_module_dep_info__maybe_record_modules_maybe_module_dep_infos_8_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word RebuildModuleDeps_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    else
    {
      MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ModuleNames_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word MaybeModuleDepInfo_25;
      MR_Word STATE_VARIABLE_Info_1_33;
      MR_Word ModuleDepMap0_43;
      MR_Word MaybeModuleDepInfo0_44;
      MR_Box conv0_MaybeModuleDepInfo0_44;

      ModuleDepMap0_43 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_0_5);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDepMap0_43, ((MR_Box) (ModuleName_21)), &conv0_MaybeModuleDepInfo0_44);
      if (succeeded)
      {
        MaybeModuleDepInfo0_44 = ((MR_Word) (conv0_MaybeModuleDepInfo0_44));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MaybeModuleDepInfo_25 = MaybeModuleDepInfo0_44;
        STATE_VARIABLE_Info_1_33 = STATE_VARIABLE_Info_0_5;
      }
      else
        make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0(ProgressStream_1, Globals_2, RebuildModuleDeps_3, ModuleName_21, &MaybeModuleDepInfo_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_33);
      if ((MaybeModuleDepInfo_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ModuleDepMap0_27;
        MR_Word ModuleDepMap_28;
        MR_Box conv2_ModuleDepMap_28;

        ModuleDepMap0_27 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_1_33);
        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__get_module_dep_info_scalar_common_1[0]), (MR_Word) (&make__get_module_dep_info_scalar_common_1[5]), ModuleNames_22, ((MR_Box) (ModuleDepMap0_27)), &conv2_ModuleDepMap_28);
        ModuleDepMap_28 = ((MR_Word) (conv2_ModuleDepMap_28));
        make__make_info__make_info_set_maybe_module_dep_info_map_3_p_0(ModuleDepMap_28, STATE_VARIABLE_Info_1_33, STATE_VARIABLE_Info_6);
      }
      else
      {
        MR_Word next_value_of_HeadVar__4_4 = ModuleNames_22;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_1_33;

        // direct tailcall eliminated
        ;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv1_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_Box MR_CALL 
make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_92;

  conv0_LambdaHeadVar__2_92 = make__get_module_dep_info__IntroducedFrom__func__do_get_maybe_module_dep_info__264__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_92));
  return wrapper_arg_2;
}

static void MR_CALL 
make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word RebuildModuleDeps_12,
  MR_Word ModuleName_13,
  MR_Word * STATE_VARIABLE_MaybeModuleDepInfo_46,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  MR_bool succeeded;
  MR_String DepFileName_18;
  MR_Word SearchAuthDirs_20;
  MR_Word SearchDirs_21;
  MR_Word MaybeDepFileTimestamp_22;
  MR_Word ModuleDepMap2_42;
  MR_Word MaybeOldMaybeModuleDepInfo_43;
  MR_Word ModuleDepMap_44;
  MR_Word STATE_VARIABLE_Info_1_54;
  MR_Word STATE_VARIABLE_Info_3_62;
  MR_String _DepFileNameProposed_19;

  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_11, (MR_String) "predicate \140make.get_module_dep_info.do_get_maybe_module_dep_info\'/9", (MR_Word) (MR_mkword(1, &make__get_module_dep_info_scalar_common_3[0])), ModuleName_13, &DepFileName_18, &_DepFileNameProposed_19);
  SearchAuthDirs_20 = parse_tree__find_module__get_search_auth_interface_dirs_2_f_0((MR_Integer) 4, Globals_11);
  make__timestamp__get_file_timestamp_8_p_0(SearchAuthDirs_20, DepFileName_18, &SearchDirs_21, &MaybeDepFileTimestamp_22, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_1_54);
  if (((MR_tag((MR_Word) MaybeDepFileTimestamp_22)) == (MR_Integer) 1))
  {
    MR_String SearchDirsString_37;
    MR_String DebugMsg_39;
    MR_Word Var_89;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;

    Var_89 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__get_module_dep_info_scalar_common_1[4]), SearchDirs_21);
    SearchDirsString_37 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_89);
    {
      Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_99, 1) = ((MR_Box) (DepFileName_18));
    }
    {
      Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_101, 1) = ((MR_Box) (SearchDirsString_37));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_96, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_6[1]));
      MR_hl_field(0, Var_96, 1) = ((MR_Box) (make__get_module_dep_info__do_get_maybe_module_dep_info_9_p_0_2));
      MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_96, 3) = ((MR_Box) ((MR_String) "Module dependencies file \'%s\' not found in directories %s.\n"));
      MR_hl_field(0, Var_96, 4) = ((MR_Box) (Var_98));
    }
    make__util__debug_make_msg_3_p_0(Globals_11, Var_96, &DebugMsg_39);
    make__util__maybe_write_msg_4_p_0(ProgressStream_10, DebugMsg_39);
    switch (RebuildModuleDeps_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ModuleDepMap0_40;
          MR_Word ModuleDepMap1_41;

          ModuleDepMap0_40 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_1_54);
          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_13)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_40, &ModuleDepMap1_41);
          make__make_info__make_info_set_maybe_module_dep_info_map_3_p_0(ModuleDepMap1_41, STATE_VARIABLE_Info_1_54, &STATE_VARIABLE_Info_3_62);
        }
        break;
      case (MR_Integer) 0:
        make__get_module_dep_info__try_to_write_module_dep_files_for_top_module_7_p_0(ProgressStream_10, Globals_11, ModuleName_13, STATE_VARIABLE_Info_1_54, &STATE_VARIABLE_Info_3_62);
        break;
    }
  }
  else
  {
    MR_Word DepFileTimestamp_23 = ((MR_Word) ((MR_hl_field(0, MaybeDepFileTimestamp_22, 0))));
    MR_String SourceFileName_24;
    MR_Word MaybeSourceFileTimestamp_26;
    MR_Word STATE_VARIABLE_Info_2_58;
    MR_Word _SearchDirs_25;

    parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_13, &SourceFileName_24);
    make__timestamp__get_file_timestamp_8_p_0((MR_Word) ((MR_Unsigned) 0U), SourceFileName_24, &_SearchDirs_25, &MaybeSourceFileTimestamp_26, STATE_VARIABLE_Info_1_54, &STATE_VARIABLE_Info_2_58);
    if (((MR_tag((MR_Word) MaybeSourceFileTimestamp_26)) == (MR_Integer) 1))
    {
      MR_Word STATE_VARIABLE_Info_5_67;
      MR_Word Var_69;
      MR_Word STATE_VARIABLE_MaybeModuleDepInfo_1_70;
      MR_Box conv2_STATE_VARIABLE_MaybeModuleDepInfo_1_70;
      MR_Word ModuleDepInfo0_29;
      MR_String DepFileDir_30;
      MR_String Var_124;

      make__get_module_dep_info__find_and_read_module_dep_file_9_p_0(ProgressStream_10, Globals_11, RebuildModuleDeps_12, (MR_Word) ((MR_Unsigned) 4U), ModuleName_13, STATE_VARIABLE_Info_2_58, &STATE_VARIABLE_Info_5_67);
      Var_69 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_5_67);
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), Var_69, ((MR_Box) (ModuleName_13)), &conv2_STATE_VARIABLE_MaybeModuleDepInfo_1_70);
      STATE_VARIABLE_MaybeModuleDepInfo_1_70 = ((MR_Word) (conv2_STATE_VARIABLE_MaybeModuleDepInfo_1_70));
      succeeded = (STATE_VARIABLE_MaybeModuleDepInfo_1_70 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModuleDepInfo0_29 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeModuleDepInfo_1_70, 0))));
        parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo0_29, &DepFileDir_30);
        Var_124 = mercury__dir__this_directory_0_f_0();
        succeeded = (strcmp(DepFileDir_30, Var_124) == 0);
      }
      if (succeeded)
      {
        MR_String SourceFileName1_31;
        MR_Word MaybeSourceFileTimestamp1_33;
        MR_Word STATE_VARIABLE_Info_6_72;
        MR_Word _SearchCurDirs1_32;

        parse_tree__module_dep_info__module_dep_info_get_source_file_name_2_p_0(ModuleDepInfo0_29, &SourceFileName1_31);
        make__timestamp__get_file_timestamp_8_p_0((MR_Word) ((MR_Unsigned) 0U), SourceFileName1_31, &_SearchCurDirs1_32, &MaybeSourceFileTimestamp1_33, STATE_VARIABLE_Info_5_67, &STATE_VARIABLE_Info_6_72);
        if (((MR_tag((MR_Word) MaybeSourceFileTimestamp1_33)) == (MR_Integer) 1))
        {
          MR_String Message_35 = ((MR_String) ((MR_hl_field(1, MaybeSourceFileTimestamp1_33, 0))));
          MR_Word Var_86;

          mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "** Error reading file \140");
          mercury__io__write_string_4_p_0(ProgressStream_10, SourceFileName1_31);
          mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "\' to generate dependencies: ");
          mercury__io__write_string_4_p_0(ProgressStream_10, Message_35);
          mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) ".\n");
          Var_86 = make__make_info__make_info_get_importing_module_1_f_0(STATE_VARIABLE_Info_6_72);
          make__get_module_dep_info__maybe_write_importing_module_5_p_0(ProgressStream_10, ModuleName_13, Var_86);
          STATE_VARIABLE_Info_3_62 = STATE_VARIABLE_Info_6_72;
        }
        else
        {
          MR_Word SourceFileTimestamp1_34 = ((MR_Word) ((MR_hl_field(0, MaybeSourceFileTimestamp1_33, 0))));

          succeeded = (RebuildModuleDeps_12 == (MR_Integer) 1);
          if (!(succeeded))
          {
            MR_Word Var_125;

            libs__timestamp____Compare____timestamp_0_0(&Var_125, DepFileTimestamp_23, SourceFileTimestamp1_34);
            succeeded = ((MR_Integer) 2 == Var_125);
          }
          if (succeeded)
            STATE_VARIABLE_Info_3_62 = STATE_VARIABLE_Info_6_72;
          else
            make__get_module_dep_info__try_to_write_module_dep_files_for_top_module_7_p_0(ProgressStream_10, Globals_11, ModuleName_13, STATE_VARIABLE_Info_6_72, &STATE_VARIABLE_Info_3_62);
        }
      }
      else
        STATE_VARIABLE_Info_3_62 = STATE_VARIABLE_Info_5_67;
    }
    else
    {
      MR_Word SourceFileTimestamp_27 = ((MR_Word) ((MR_hl_field(0, MaybeSourceFileTimestamp_26, 0))));

      succeeded = (RebuildModuleDeps_12 == (MR_Integer) 1);
      if (!(succeeded))
      {
        MR_Word Var_123;

        libs__timestamp____Compare____timestamp_0_0(&Var_123, DepFileTimestamp_23, SourceFileTimestamp_27);
        succeeded = ((MR_Integer) 2 == Var_123);
      }
      if (succeeded)
        make__get_module_dep_info__find_and_read_module_dep_file_9_p_0(ProgressStream_10, Globals_11, RebuildModuleDeps_12, (MR_Word) ((MR_Unsigned) 0U), ModuleName_13, STATE_VARIABLE_Info_2_58, &STATE_VARIABLE_Info_3_62);
      else
        make__get_module_dep_info__try_to_write_module_dep_files_for_top_module_7_p_0(ProgressStream_10, Globals_11, ModuleName_13, STATE_VARIABLE_Info_2_58, &STATE_VARIABLE_Info_3_62);
    }
  }
  ModuleDepMap2_42 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_3_62);
  mercury__map__search_insert_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_13)), ((MR_Box) ((MR_Unsigned) 0U)), &MaybeOldMaybeModuleDepInfo_43, ModuleDepMap2_42, &ModuleDepMap_44);
  if ((MaybeOldMaybeModuleDepInfo_43 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_MaybeModuleDepInfo_46 = (MR_Word) ((MR_Unsigned) 0U);
    make__make_info__make_info_set_maybe_module_dep_info_map_3_p_0(ModuleDepMap_44, STATE_VARIABLE_Info_3_62, STATE_VARIABLE_Info_48);
  }
  else
  {
    *STATE_VARIABLE_MaybeModuleDepInfo_46 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeModuleDepInfo_43, 0))));
    *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_3_62;
  }
}

static void MR_CALL 
make__get_module_dep_info__maybe_write_importing_module_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word ModuleName_7,
  MR_Word MaybeIoI_8)
{
  if (!((MaybeIoI_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ImportOrInclude_10 = ((MR_Word) ((MR_hl_field(1, MaybeIoI_8, 0))));

    if (((MR_tag((MR_Word) ImportOrInclude_10)) == (MR_Integer) 0))
    {
      MR_Word ImportingModuleName_11 = ((MR_Word) ((MR_hl_field(0, ImportOrInclude_10, 0))));
      MR_String Var_19;
      MR_String Var_22;

      Var_19 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_7);
      Var_22 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ImportingModuleName_11);
      mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "** Module \140");
      mercury__io__write_string_4_p_0(ProgressStream_6, Var_19);
      mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\' is imported by module \140");
      mercury__io__write_string_4_p_0(ProgressStream_6, Var_22);
      mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\'.\n");
    }
    else
    {
      MR_Word IncludingModuleName_12 = ((MR_Word) ((MR_hl_field(1, ImportOrInclude_10, 0))));
      MR_String Var_28;
      MR_String Var_31;

      Var_28 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_7);
      Var_31 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(IncludingModuleName_12);
      mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "** Module \140");
      mercury__io__write_string_4_p_0(ProgressStream_6, Var_28);
      mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\' is included by module \140");
      mercury__io__write_string_4_p_0(ProgressStream_6, Var_31);
      mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) "\'.\n");
    }
  }
}

static void MR_CALL 
make__get_module_dep_info__find_and_read_module_dep_file_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Info_34;

  make__get_module_dep_info__find_and_read_module_dep_file_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_34);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_34));
}

static void MR_CALL 
make__get_module_dep_info__find_and_read_module_dep_file_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Info_34;

  make__get_module_dep_info__find_and_read_module_dep_file_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_34);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_34));
}

static void MR_CALL 
make__get_module_dep_info__find_and_read_module_dep_file_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Msg_8;

  make__get_module_dep_info__error_and_maybe_rebuilding_msg_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), &conv0_Msg_8);
  *wrapper_arg_1 = ((MR_Box) (conv0_Msg_8));
}

static void MR_CALL 
make__get_module_dep_info__find_and_read_module_dep_file_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word RebuildModuleDeps_12,
  MR_Word SearchWhichDirs_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  MR_bool succeeded;
  MR_Word SearchAuthDirs_18;
  MR_String DepFileName_19;
  MR_Word MaybeDirAndContents_22;
  MR_String _DepFileNameProposed_20;
  MR_Word _SearchDirs_21;

  parse_tree__file_names__module_name_to_search_file_name_8_p_0(Globals_11, (MR_String) "predicate \140make.get_module_dep_info.find_and_read_module_dep_file\'/9", (MR_Word) (MR_mkword(1, &make__get_module_dep_info_scalar_common_3[0])), ModuleName_14, SearchWhichDirs_13, &SearchAuthDirs_18, &DepFileName_19, &_DepFileNameProposed_20);
  parse_tree__find_module__search_for_file_returning_dir_and_contents_6_p_0(SearchAuthDirs_18, DepFileName_19, &_SearchDirs_21, &MaybeDirAndContents_22);
  if (((MR_tag((MR_Word) MaybeDirAndContents_22)) == (MR_Integer) 1))
  {
    MR_String DebugMsg_32;
    MR_Word Var_48;
    MR_String ErrorMsg_52 = ((MR_String) ((MR_hl_field(1, MaybeDirAndContents_22, 0))));

    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_9[0]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (make__get_module_dep_info__find_and_read_module_dep_file_9_p_0_1));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (RebuildModuleDeps_12));
      MR_hl_field(0, Var_48, 4) = ((MR_Box) (DepFileName_19));
      MR_hl_field(0, Var_48, 5) = ((MR_Box) (ErrorMsg_52));
    }
    make__util__debug_make_msg_3_p_0(Globals_11, Var_48, &DebugMsg_32);
    make__util__maybe_write_msg_4_p_0(ProgressStream_10, DebugMsg_32);
    switch (RebuildModuleDeps_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
        break;
      case (MR_Integer) 0:
        make__get_module_dep_info__try_to_write_module_dep_files_for_top_module_7_p_0(ProgressStream_10, Globals_11, ModuleName_14, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
        break;
    }
  }
  else
  {
    MR_Word DirAndContents_23 = ((MR_Word) ((MR_hl_field(0, MaybeDirAndContents_22, 0))));
    MR_String DepFileDir_24 = ((MR_String) ((MR_hl_field(0, DirAndContents_23, 0))));
    MR_String DepFileContents_25 = ((MR_String) ((MR_hl_field(0, DirAndContents_23, 1))));
    MR_Word ParseResult_26;
    MR_Word Result_28;
    MR_Word STATE_VARIABLE_Info_1_40;

    make__module_dep_file__read_module_dep_file_5_p_0(DepFileDir_24, DepFileName_19, DepFileContents_25, ModuleName_14, &ParseResult_26);
    if (((MR_tag((MR_Word) ParseResult_26)) == (MR_Integer) 0))
    {
      MR_String ParseErrorMsg_29 = ((MR_String) ((MR_hl_field(0, ParseResult_26, 0))));

      {
        Result_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Result_28, 0) = ((MR_Box) (ParseErrorMsg_29));
      }
      STATE_VARIABLE_Info_1_40 = STATE_VARIABLE_Info_0_33;
    }
    else
    {
      MR_Word ModuleSummary_27 = ((MR_Word) ((MR_hl_field(1, ParseResult_26, 0))));
      MR_Word ModuleDepInfo_53 = (MR_Word) ((MR_Word) (ModuleSummary_27));
      MR_Word MaybeModuleDepInfo_54;
      MR_String Var_95;

      {
        MaybeModuleDepInfo_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeModuleDepInfo_54, 0) = ((MR_Box) (ModuleDepInfo_53));
      }
      Var_95 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(DepFileDir_24, Var_95) == 0);
      if (succeeded)
      {
        MR_String SourceFileName_55 = ((MR_String) ((MR_hl_field(0, ModuleSummary_27, 0))));
        MR_Word SourceFileExists_56;
        MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, ModuleSummary_27, 5))));

        make__get_module_dep_info__check_regular_file_exists_4_p_0(SourceFileName_55, &SourceFileExists_56);
        if ((SourceFileExists_56 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ModuleDepMap0_58;
          MR_Word ModuleDepMap_59;
          MR_Word NestedSubModules_61;
          MR_Word STATE_VARIABLE_Info_1_64;
          MR_Word Var_65;
          MR_Box conv3_STATE_VARIABLE_Info_1_40;
          MR_Box conv2_STATE_VARIABLE_IO_2_41;

          ModuleDepMap0_58 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_0_33);
          mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (MaybeModuleDepInfo_54)), ModuleDepMap0_58, &ModuleDepMap_59);
          make__make_info__make_info_set_maybe_module_dep_info_map_3_p_0(ModuleDepMap_59, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_1_64);
          NestedSubModules_61 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(Var_71);
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_65, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_10[0]));
            MR_hl_field(0, Var_65, 1) = ((MR_Box) (make__get_module_dep_info__find_and_read_module_dep_file_9_p_0_2));
            MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_65, 3) = ((MR_Box) (ProgressStream_10));
            MR_hl_field(0, Var_65, 4) = ((MR_Box) (Globals_11));
            MR_hl_field(0, Var_65, 5) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_65, 6) = ((MR_Box) (SearchWhichDirs_13));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, NestedSubModules_61, ((MR_Box) (STATE_VARIABLE_Info_1_64)), &conv3_STATE_VARIABLE_Info_1_40, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_2_41);
          STATE_VARIABLE_Info_1_40 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_40));
          succeeded = make__get_module_dep_info__some_module_has_dep_info_2_p_0(STATE_VARIABLE_Info_1_40, NestedSubModules_61);
          if (succeeded)
            Result_28 = (MR_Word) (MR_mkword(1, &make__get_module_dep_info_scalar_common_3[1]));
          else
            Result_28 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Var_57;

          mercury__io__file__remove_file_4_p_0(DepFileName_19, &Var_57);
          Result_28 = SourceFileExists_56;
          STATE_VARIABLE_Info_1_40 = STATE_VARIABLE_Info_0_33;
        }
      }
      else
      {
        MR_Word ModuleDepMap0_111;
        MR_Word ModuleDepMap_112;
        MR_Word MaybeTopModule_113;
        MR_Word NestedSubModules_114;
        MR_Word STATE_VARIABLE_Info_1_116;
        MR_Word Var_117;
        MR_Box conv6_STATE_VARIABLE_Info_1_40;
        MR_Box conv5_STATE_VARIABLE_IO_2_41;

        ModuleDepMap0_111 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_0_33);
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_14)), ((MR_Box) (MaybeModuleDepInfo_54)), ModuleDepMap0_111, &ModuleDepMap_112);
        make__make_info__make_info_set_maybe_module_dep_info_map_3_p_0(ModuleDepMap_112, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_1_116);
        MaybeTopModule_113 = ((MR_Word) ((MR_hl_field(0, ModuleSummary_27, 5))));
        NestedSubModules_114 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_113);
        {
          Var_117 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_117, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_10[0]));
          MR_hl_field(0, Var_117, 1) = ((MR_Box) (make__get_module_dep_info__find_and_read_module_dep_file_9_p_0_3));
          MR_hl_field(0, Var_117, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_117, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_117, 4) = ((MR_Box) (Globals_11));
          MR_hl_field(0, Var_117, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_117, 6) = ((MR_Box) (SearchWhichDirs_13));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_117, NestedSubModules_114, ((MR_Box) (STATE_VARIABLE_Info_1_116)), &conv6_STATE_VARIABLE_Info_1_40, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_2_41);
        STATE_VARIABLE_Info_1_40 = ((MR_Word) (conv6_STATE_VARIABLE_Info_1_40));
        succeeded = make__get_module_dep_info__some_module_has_dep_info_2_p_0(STATE_VARIABLE_Info_1_40, NestedSubModules_114);
        if (succeeded)
          Result_28 = (MR_Word) (MR_mkword(1, &make__get_module_dep_info_scalar_common_3[1]));
        else
          Result_28 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    if ((Result_28 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_1_40;
    else
    {
      MR_String ErrorMsg_30 = ((MR_String) ((MR_hl_field(1, Result_28, 0))));
      MR_String Msg_31;
      MR_String Var_42;
      MR_String Var_43;

      Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "/", DepFileName_19);
      Var_42 = mercury__string__f_43_43_2_f_0(DepFileDir_24, Var_43);
      make__get_module_dep_info__error_and_maybe_rebuilding_msg_4_p_0(RebuildModuleDeps_12, Var_42, ErrorMsg_30, &Msg_31);
      mercury__io__write_string_4_p_0(ProgressStream_10, Msg_31);
      switch (RebuildModuleDeps_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_1_40;
          break;
        case (MR_Integer) 0:
          make__get_module_dep_info__try_to_write_module_dep_files_for_top_module_7_p_0(ProgressStream_10, Globals_11, ModuleName_14, STATE_VARIABLE_Info_1_40, STATE_VARIABLE_Info_34);
          break;
      }
    }
  }
}

static void MR_CALL 
make__get_module_dep_info__try_to_write_module_dep_files_for_top_module_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word HaveReadSrc_13;

  parse_tree__read_modules__read_module_src_10_p_0(ProgressStream_8, Globals_9, (MR_Integer) 3, (MR_Integer) 0, ModuleName_10, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&make__get_module_dep_info_scalar_common_3[2]), &HaveReadSrc_13);
  if (((MR_tag((MR_Word) HaveReadSrc_13)) == (MR_Integer) 0))
  {
    MR_String SourceFileName_14 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_13, 0))));
    MR_Word ParseTreeSrc_15 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_13, 1))));
    MR_Word Source_16 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_13, 2))));
    MR_Word MaybeTimestamp_17 = ((MR_Word) ((MR_hl_field(1, Source_16, 0))));
    MR_Word ReadModuleErrors_18 = ((MR_Word) ((MR_hl_field(1, Source_16, 1))));
    MR_Word Fatal_19 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_18, 0))));
    MR_Word NonFatal_20 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_18, 2))));

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), Fatal_19);
    if (succeeded)
    {
      MR_Word Var_70;

      mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "** Error reading file \140");
      mercury__io__write_string_4_p_0(ProgressStream_8, SourceFileName_14);
      mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\' to generate dependencies.\n");
      Var_70 = make__make_info__make_info_get_importing_module_1_f_0(STATE_VARIABLE_Info_0_25);
      if (!((Var_70 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ImportOrInclude_75 = ((MR_Word) ((MR_hl_field(1, Var_70, 0))));

        if (((MR_tag((MR_Word) ImportOrInclude_75)) == (MR_Integer) 0))
        {
          MR_Word ImportingModuleName_76 = ((MR_Word) ((MR_hl_field(0, ImportOrInclude_75, 0))));
          MR_String Var_81;
          MR_String Var_84;

          Var_81 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_10);
          Var_84 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ImportingModuleName_76);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "** Module \140");
          mercury__io__write_string_4_p_0(ProgressStream_8, Var_81);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\' is imported by module \140");
          mercury__io__write_string_4_p_0(ProgressStream_8, Var_84);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\'.\n");
        }
        else
        {
          MR_Word IncludingModuleName_77 = ((MR_Word) ((MR_hl_field(1, ImportOrInclude_75, 0))));
          MR_String Var_89;
          MR_String Var_92;

          Var_89 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_10);
          Var_92 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(IncludingModuleName_77);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "** Module \140");
          mercury__io__write_string_4_p_0(ProgressStream_8, Var_89);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\' is included by module \140");
          mercury__io__write_string_4_p_0(ProgressStream_8, Var_92);
          mercury__io__write_string_4_p_0(ProgressStream_8, (MR_String) "\'.\n");
        }
      }
      make__get_module_dep_info__cannot_write_module_dep_files_8_p_0(Globals_9, ProgressStream_8, ModuleName_10, ReadModuleErrors_18, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
    }
    else
    {
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatal_20, ((MR_Box) ((MR_Integer) 0)));
      if (succeeded)
        make__get_module_dep_info__cannot_write_module_dep_files_8_p_0(Globals_9, ProgressStream_8, ModuleName_10, ReadModuleErrors_18, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
      else
      {
        MR_Word MaybeErrorStream_21;

        make__build__open_module_error_stream_7_p_0(ProgressStream_8, Globals_9, STATE_VARIABLE_Info_0_25, ModuleName_10, &MaybeErrorStream_21);
        if ((MaybeErrorStream_21 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
        else
        {
          MR_Word MESI_22 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_21, 0))));
          MR_Word ErrorStream_23 = ((MR_Word) ((MR_hl_field(1, MaybeErrorStream_21, 1))));

          make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0(Globals_9, ProgressStream_8, MESI_22, ErrorStream_23, SourceFileName_14, ModuleName_10, ReadModuleErrors_18, MaybeTimestamp_17, ParseTreeSrc_15, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
        }
      }
    }
  }
  else
  {
    MR_Word ReadModuleErrors0_24 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_13, 1))));
    MR_String SourceFileName_48 = ((MR_String) ((MR_hl_field(1, HaveReadSrc_13, 0))));
    MR_Word ReadModuleErrors_49;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;

    make__get_module_dep_info__report_cannot_read_src_to_generate_module_dep_6_p_0(ProgressStream_8, SourceFileName_48, ModuleName_10, STATE_VARIABLE_Info_0_25);
    Var_58 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors0_24, 0))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors0_24, 1))));
    Var_60 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors0_24, 2))));
    Var_61 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors0_24, 3))));
    {
      ReadModuleErrors_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ReadModuleErrors_49, 0) = ((MR_Box) (Var_58));
      MR_hl_field(0, ReadModuleErrors_49, 1) = ((MR_Box) (Var_59));
      MR_hl_field(0, ReadModuleErrors_49, 2) = ((MR_Box) (Var_60));
      MR_hl_field(0, ReadModuleErrors_49, 3) = ((MR_Box) (Var_61));
      MR_hl_field(0, ReadModuleErrors_49, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__get_module_dep_info__cannot_write_module_dep_files_8_p_0(Globals_9, ProgressStream_8, ModuleName_10, ReadModuleErrors_49, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
  }
}

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_Info_14;

  make__get_module_dep_info__cleanup_module_dep_files_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv13_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv13_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  make__module_dep_file__do_write_module_dep_file_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Info_14;

  make__get_module_dep_info__cleanup_int3_files_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv10_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv10_STATE_VARIABLE_Info_14));
}

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__write_error_spec__write_error_specs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_4(
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
  MR_Word conv6_HeadVar__5_5;
  MR_Word conv5_HeadVar__6_6;
  MR_Word conv4_HeadVar__8_8;

  parse_tree__write_module_interface_files__generate_and_write_interface_file_int3_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__5_5, &conv5_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv4_HeadVar__8_8);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv4_HeadVar__8_8));
}

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_13;

  make__get_module_dep_info__make_info_add_burdened_module_as_dep_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_13);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_13));
}

static MR_Box MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_2(
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
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_58;

  conv0_LambdaHeadVar__2_58 = make__get_module_dep_info__IntroducedFrom__func__write_module_dep_files_for_source_file__605__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_58));
  return wrapper_arg_2;
}

static void MR_CALL 
make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0(
  MR_Word Globals_14,
  MR_Word ProgressStream_15,
  MR_Word MESI_16,
  MR_Word ErrorStream_17,
  MR_String SourceFileName_18,
  MR_Word ModuleName_19,
  MR_Word ReadModuleErrors_20,
  MR_Word MaybeTimestamp_21,
  MR_Word ParseTreeSrc_22,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53)
{
  MR_bool succeeded;
  MR_Word Specs_25;
  MR_Word BurdenedModules_26;
  MR_Word ParseTreeModuleSrcs_27;
  MR_Word SubModuleNames_30;
  MR_Word MadeTarget_31;
  MR_String MadeTargetFileName_32;
  MR_Word VeryVerbose_34;
  MR_Word NonFatalErrors_35;
  MR_Word Succeeded_48;
  MR_Box CookieWMDF_49;
  MR_Word CleanupWMDF_50;
  MR_Word STATE_VARIABLE_Info_1_64;
  MR_Word STATE_VARIABLE_Info_2_77;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_Info_3_83;
  MR_Box conv3_STATE_VARIABLE_Info_1_64;
  MR_String _MadeTargetFileNameProposed_33;
  MR_Box conv12_STATE_VARIABLE_IO_11_81;
  MR_Word _Succeeded_51;
  MR_Box conv14_STATE_VARIABLE_Info_3_83;

  parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(Globals_14, SourceFileName_18, ReadModuleErrors_20, MaybeTimestamp_21, ParseTreeSrc_22, &Specs_25, &BurdenedModules_26);
  ParseTreeModuleSrcs_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&make__get_module_dep_info_scalar_common_1[1]), BurdenedModules_26);
  SubModuleNames_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__get_module_dep_info_scalar_common_1[2]), ParseTreeModuleSrcs_27);
  mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_17, Globals_14, Specs_25);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__get_module_dep_info_scalar_common_1[3]), BurdenedModules_26, ((MR_Box) (STATE_VARIABLE_Info_0_52)), &conv3_STATE_VARIABLE_Info_1_64);
  STATE_VARIABLE_Info_1_64 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_64));
  {
    MadeTarget_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MadeTarget_31, 0) = ((MR_Box) (ModuleName_19));
    MR_hl_field(0, MadeTarget_31, 1) = ((MR_Box) ((MR_Unsigned) 20U));
  }
  make__file_names__module_target_file_to_file_name_7_p_0(Globals_14, (MR_String) "predicate \140make.get_module_dep_info.write_module_dep_files_for_source_file\'/13", MadeTarget_31, &MadeTargetFileName_32, &_MadeTargetFileNameProposed_33);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 132, &VeryVerbose_34);
  NonFatalErrors_35 = ((MR_Word) ((MR_hl_field(0, ReadModuleErrors_20, 2))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0), NonFatalErrors_35);
  if (succeeded)
  {
    MR_String MakingMsg_36;
    MR_Box CookieMSI_37;
    MR_Word DefaultOptionTable_38;
    MR_Word MaybeStdLibGrades_39;
    MR_Word Params_40;
    MR_Word MayBuild_42;
    MR_Word Succeeded0_44;
    MR_Word CleanupMSI_47;
    MR_Box conv11_STATE_VARIABLE_Info_2_77;

    make__util__maybe_making_filename_msg_3_p_0(Globals_14, MadeTargetFileName_32, &MakingMsg_36);
    make__util__maybe_write_msg_4_p_0(ProgressStream_15, MakingMsg_36);
    libs__process_util__setup_checking_for_interrupt_3_p_0(&CookieMSI_37);
    libs__globals__get_default_options_2_p_0(Globals_14, &DefaultOptionTable_38);
    MaybeStdLibGrades_39 = make__make_info__make_info_get_maybe_stdlib_grades_1_f_0(STATE_VARIABLE_Info_1_64);
    Params_40 = make__make_info__make_info_get_compiler_params_1_f_0(STATE_VARIABLE_Info_1_64);
    make__build__setup_for_build_with_module_options_10_p_0(ProgressStream_15, DefaultOptionTable_38, MaybeStdLibGrades_39, (MR_Integer) 1, ModuleName_19, Params_40, (MR_Word) (MR_mkword(1, &make__get_module_dep_info_scalar_common_2[1])), &MayBuild_42);
    if (((MR_tag((MR_Word) MayBuild_42)) == (MR_Integer) 1))
    {
      MR_Word BuildGlobals_46 = ((MR_Word) ((MR_hl_field(1, MayBuild_42, 1))));
      MR_Word Succeededs_115;
      MR_Word SpecsList_116;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_122;
      MR_Box conv8__HaveParseTreeMaps_117;
      MR_Box conv7_STATE_VARIABLE_IO_1_120;
      MR_Box conv9_STATE_VARIABLE_IO_7_75;

      {
        Var_118 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_118, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_7[0]));
        MR_hl_field(0, Var_118, 1) = ((MR_Box) (make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_4));
        MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_118, 3) = ((MR_Box) (ProgressStream_15));
        MR_hl_field(0, Var_118, 4) = ((MR_Box) (BuildGlobals_46));
        MR_hl_field(0, Var_118, 5) = ((MR_Box) ((MR_Integer) 0));
      }
      Var_119 = parse_tree__read_modules__init_have_parse_tree_maps_0_f_0();
      mercury__list__map2_foldl2_8_p_0((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&make__get_module_dep_info_scalar_common_2[0]), (MR_Word) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_parse_tree_maps_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, BurdenedModules_26, &Succeededs_115, &SpecsList_116, ((MR_Box) (Var_119)), &conv8__HaveParseTreeMaps_117, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_1_120);
      {
        Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_122, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_4[0]));
        MR_hl_field(0, Var_122, 1) = ((MR_Box) (make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_5));
        MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_122, 3) = ((MR_Box) (ErrorStream_17));
        MR_hl_field(0, Var_122, 4) = ((MR_Box) (BuildGlobals_46));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&make__get_module_dep_info_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_122, SpecsList_116, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_7_75);
      Succeeded0_44 = libs__maybe_util__and_list_1_f_0(Succeededs_115);
    }
    else
    {
      MR_Word MSISpecs_43 = ((MR_Word) ((MR_hl_field(0, MayBuild_42, 0))));

      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_17, Globals_14, MSISpecs_43);
      Succeeded0_44 = (MR_Integer) 0;
    }
    {
      CleanupMSI_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CleanupMSI_47, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_8[0]));
      MR_hl_field(0, CleanupMSI_47, 1) = ((MR_Box) (make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_6));
      MR_hl_field(0, CleanupMSI_47, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, CleanupMSI_47, 3) = ((MR_Box) (ProgressStream_15));
      MR_hl_field(0, CleanupMSI_47, 4) = ((MR_Box) (Globals_14));
      MR_hl_field(0, CleanupMSI_47, 5) = ((MR_Box) (SubModuleNames_30));
    }
    libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_34, CookieMSI_37, CleanupMSI_47, Succeeded0_44, &Succeeded_48, ((MR_Box) (STATE_VARIABLE_Info_1_64)), &conv11_STATE_VARIABLE_Info_2_77);
    STATE_VARIABLE_Info_2_77 = ((MR_Word) (conv11_STATE_VARIABLE_Info_2_77));
  }
  else
  {
    Succeeded_48 = (MR_Integer) 0;
    STATE_VARIABLE_Info_2_77 = STATE_VARIABLE_Info_1_64;
  }
  libs__process_util__setup_checking_for_interrupt_3_p_0(&CookieWMDF_49);
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_4[1]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_7));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (ProgressStream_15));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (Globals_14));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_80, BurdenedModules_26, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_11_81);
  {
    CleanupWMDF_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CleanupWMDF_50, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_8[0]));
    MR_hl_field(0, CleanupWMDF_50, 1) = ((MR_Box) (make__get_module_dep_info__write_module_dep_files_for_source_file_13_p_0_8));
    MR_hl_field(0, CleanupWMDF_50, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, CleanupWMDF_50, 3) = ((MR_Box) (ProgressStream_15));
    MR_hl_field(0, CleanupWMDF_50, 4) = ((MR_Box) (Globals_14));
    MR_hl_field(0, CleanupWMDF_50, 5) = ((MR_Box) (SubModuleNames_30));
  }
  libs__process_util__teardown_checking_for_interrupt_9_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), VeryVerbose_34, CookieWMDF_49, CleanupWMDF_50, (MR_Integer) 1, &_Succeeded_51, ((MR_Box) (STATE_VARIABLE_Info_2_77)), &conv14_STATE_VARIABLE_Info_3_83);
  STATE_VARIABLE_Info_3_83 = ((MR_Word) (conv14_STATE_VARIABLE_Info_3_83));
  make__module_target__record_made_target_10_p_0(ProgressStream_15, Globals_14, MadeTarget_31, MadeTargetFileName_32, (MR_Word) (&make__get_module_dep_info_scalar_common_3[3]), Succeeded_48, STATE_VARIABLE_Info_3_83, STATE_VARIABLE_Info_53);
  make__build__close_module_error_stream_handle_errors_7_p_0(ProgressStream_15, Globals_14, MESI_16, ErrorStream_17, *STATE_VARIABLE_Info_53);
}

static void MR_CALL 
make__get_module_dep_info__cannot_write_module_dep_files_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  parse_tree__write_error_spec__write_error_specs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))));
}

static void MR_CALL 
make__get_module_dep_info__cannot_write_module_dep_files_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ModuleName_11,
  MR_Word ReadModuleErrors_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word Specs0_15;
  MR_Word ModuleDepMap0_16;
  MR_Word ModuleDepMap_17;
  MR_Word Var_22;

  Specs0_15 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_12);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&make__get_module_dep_info_scalar_common_4[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (make__get_module_dep_info__cannot_write_module_dep_files_8_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_22, 5) = ((MR_Box) (Specs0_15));
  }
  make__build__with_locked_stdout_4_p_0(STATE_VARIABLE_Info_0_18, Var_22);
  ModuleDepMap0_16 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0(STATE_VARIABLE_Info_0_18);
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) ((MR_Unsigned) 0U)), ModuleDepMap0_16, &ModuleDepMap_17);
  make__make_info__make_info_set_maybe_module_dep_info_map_3_p_0(ModuleDepMap_17, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
}

static void MR_CALL 
make__get_module_dep_info__report_cannot_read_src_to_generate_module_dep_6_p_0(
  MR_Word ProgressStream_7,
  MR_String SourceFileName_8,
  MR_Word ModuleName_9,
  MR_Word Info_10)
{
  MR_Word Var_19;

  mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "** Error reading file \140");
  mercury__io__write_string_4_p_0(ProgressStream_7, SourceFileName_8);
  mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\' to generate dependencies.\n");
  Var_19 = make__make_info__make_info_get_importing_module_1_f_0(Info_10);
  if (!((Var_19 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ImportOrInclude_24 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));

    if (((MR_tag((MR_Word) ImportOrInclude_24)) == (MR_Integer) 0))
    {
      MR_Word ImportingModuleName_25 = ((MR_Word) ((MR_hl_field(0, ImportOrInclude_24, 0))));
      MR_String Var_30;
      MR_String Var_33;

      Var_30 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_9);
      Var_33 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ImportingModuleName_25);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "** Module \140");
      mercury__io__write_string_4_p_0(ProgressStream_7, Var_30);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\' is imported by module \140");
      mercury__io__write_string_4_p_0(ProgressStream_7, Var_33);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\'.\n");
    }
    else
    {
      MR_Word IncludingModuleName_26 = ((MR_Word) ((MR_hl_field(1, ImportOrInclude_24, 0))));
      MR_String Var_38;
      MR_String Var_41;

      Var_38 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_9);
      Var_41 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(IncludingModuleName_26);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "** Module \140");
      mercury__io__write_string_4_p_0(ProgressStream_7, Var_38);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\' is included by module \140");
      mercury__io__write_string_4_p_0(ProgressStream_7, Var_41);
      mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\'.\n");
    }
  }
}

static void MR_CALL 
make__get_module_dep_info__error_and_maybe_rebuilding_msg_4_p_0(
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
make__get_module_dep_info__some_module_has_dep_info_2_p_0_1(
  void * env_ptr_arg)
{
  struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s * env_ptr = (struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__get_module_dep_info__some_module_has_dep_info_2_p_0_3(
  void * env_ptr_arg)
{
  struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s * env_ptr = (struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__ModuleName_8 = ((MR_Word) ((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__conv0_ModuleName_8));
  make__get_module_dep_info__some_module_has_dep_info_2_p_0_2(env_ptr);
}

static void MR_CALL 
make__get_module_dep_info__some_module_has_dep_info_2_p_0_2(
  void * env_ptr_arg)
{
  struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s * env_ptr = (struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Box conv1_MaybeModuleDepInfo_6;

    (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__Var_7 = make__make_info__make_info_get_maybe_module_dep_info_map_1_f_0((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__Info_3);
    (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__TypeCtorInfo_10_10 = (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0);
    (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__TypeCtorInfo_9_9, (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__TypeCtorInfo_10_10, (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__Var_7, ((MR_Box) ((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__ModuleName_8)), &conv1_MaybeModuleDepInfo_6);
    if ((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded)
    {
      (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__MaybeModuleDepInfo_6 = ((MR_Word) (conv1_MaybeModuleDepInfo_6));
      (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded)
    {
      (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded = ((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__MaybeModuleDepInfo_6 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded)
        make__get_module_dep_info__some_module_has_dep_info_2_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
make__get_module_dep_info__some_module_has_dep_info_2_p_0_4(
  void * env_ptr_arg)
{
  struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s * env_ptr = (struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__commit_0) == 0)
    {
      (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__TypeCtorInfo_9_9 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      mercury__list__member_2_p_1((env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__TypeCtorInfo_9_9, &(env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__conv0_ModuleName_8, (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__ModuleNames_4, make__get_module_dep_info__some_module_has_dep_info_2_p_0_3, env_ptr);
      (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
make__get_module_dep_info__some_module_has_dep_info_2_p_0(
  MR_Word Info_3,
  MR_Word ModuleNames_4)
{
  struct make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0_s env;

  (env).make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__Info_3 = Info_3;
  (env).make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__ModuleNames_4 = ModuleNames_4;
  make__get_module_dep_info__some_module_has_dep_info_2_p_0_4(&env);
  return (env).make__get_module_dep_info__some_module_has_dep_info_2_p_0_env_0__succeeded;
}

static void MR_CALL 
make__get_module_dep_info__check_regular_file_exists_4_p_0(
  MR_String FileName_5,
  MR_Word * FileExists_6)
{
  MR_Word ResFileType_9;

  mercury__io__file__file_type_5_p_0((MR_Integer) 1, FileName_5, &ResFileType_9);
  if (((MR_tag((MR_Word) ResFileType_9)) == (MR_Integer) 1))
  {
    MR_Word Error_11 = ((MR_Word) ((MR_hl_field(1, ResFileType_9, 0))));
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
    MR_Word FileType_10 = ((MR_Word) ((MR_hl_field(0, ResFileType_9, 0))));

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

void mercury__make__get_module_dep_info__init(void)
{
}

void mercury__make__get_module_dep_info__init_type_tables(void)
{
}

void mercury__make__get_module_dep_info__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__get_module_dep_info__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.get_module_dep_info.
