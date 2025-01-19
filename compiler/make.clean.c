/*
** Automatically generated from `make.clean.m'
** by the Mercury compiler,
** version rotd-2025-01-19
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


// :- module make.clean.
// :- implementation.

/*
INIT mercury__make__clean__init
ENDINIT
*/

#include "make.clean.mih"


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
#include "make.get_module_dep_info.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
make__clean__remove_fact_table_object_and_assembler_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word PIC_13,
  MR_String FactTableFile_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__clean__remove_fact_table_c_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FactTableFile_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__clean__make_module_realclean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__clean__make_module_clean_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__clean__make_module_clean_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__clean__make_module_clean_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__clean__make_module_clean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__clean__maybe_make_grade_clean_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__clean__make_main_module_realclean_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__clean__make_main_module_realclean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box make__clean_scalar_common_1[28][2];

static /* final */ const MR_Box make__clean_scalar_common_2[4][1];

static /* final */ const MR_Box make__clean_scalar_common_3[3][10];

static /* final */ const MR_Box make__clean_scalar_common_4[1][11];

static /* final */ const MR_Box make__clean_scalar_common_5[1][13];

static /* final */ const MR_Box make__clean_scalar_common_6[1][12];




static /* final */ const MR_Box make__clean_scalar_common_1[28][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[0])))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 48U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 44U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 40U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 36U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 13U)
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 28U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &make__clean_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 10U)
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
};

static /* final */ const MR_Box make__clean_scalar_common_2[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 11U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 10U) },
};

static /* final */ const MR_Box make__clean_scalar_common_3[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
  /* row   2 */
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
};

static /* final */ const MR_Box make__clean_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__clean_scalar_common_5[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__clean_scalar_common_6[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_pic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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


static void MR_CALL 
make__clean__remove_fact_table_object_and_assembler_files_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word PIC_13,
  MR_String FactTableFile_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Var_23;

  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = (MR_Box) ((MR_Unsigned) (PIC_13));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (FactTableFile_14));
  }
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_10, Globals_11, (MR_String) "predicate \140make.clean.remove_fact_table_object_and_assembler_files\'/9", (MR_Integer) 78, ModuleName_12, Var_23, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

static void MR_CALL 
make__clean__remove_fact_table_c_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String FactTableFile_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_String FactTableCFileLegacy_15;
  MR_String FactTableCFileProposed_16;
  MR_Word STATE_VARIABLE_Info_25_25;
  MR_Word _FactTableDirsLegacy_13;
  MR_Word _FactTableDirsProposed_14;

  parse_tree__file_names__fact_table_file_name_return_dirs_8_p_0(Globals_9, (MR_String) "predicate \140make.clean.remove_fact_table_c_file\'/7", (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[27])), FactTableFile_10, &_FactTableDirsLegacy_13, &_FactTableDirsProposed_14, &FactTableCFileLegacy_15, &FactTableCFileProposed_16);
  make__util__remove_file_for_make_8_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, FactTableCFileLegacy_15, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_25_25);
  make__util__remove_file_for_make_8_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, FactTableCFileProposed_16, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_18);
}

void MR_CALL 
make__clean__remove_init_files_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Verbose_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word STATE_VARIABLE_Info_20_20;
  MR_Word STATE_VARIABLE_Info_24_24;

  make__util__remove_module_file_for_make_9_p_0(ProgressStream_9, Globals_10, Verbose_11, ModuleName_12, (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[24])), STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_20_20);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_9, Globals_10, Verbose_11, ModuleName_12, (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[25])), STATE_VARIABLE_Info_20_20, &STATE_VARIABLE_Info_24_24);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_9, Globals_10, Verbose_11, ModuleName_12, (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[26])), STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
make__clean__make_module_realclean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__8_8;

  make__util__remove_make_target_file_by_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__8_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__8_8));
}

void MR_CALL 
make__clean__make_module_realclean_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_String Part1_13;
  MR_String CleaningMsg_14;
  MR_Word STATE_VARIABLE_Info_20_20;
  MR_String Var_25;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_Info_46_46;
  MR_Word STATE_VARIABLE_Info_52_52;
  MR_Word STATE_VARIABLE_Info_57_57;
  MR_String Var_74;
  MR_Box conv2_STATE_VARIABLE_Info_46_46;
  MR_Box conv1_STATE_VARIABLE_IO_47_47;

  make__clean__make_module_clean_7_p_0(ProgressStream_8, Globals_9, ModuleName_10, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_20_20);
  Var_25 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_10);
  Var_74 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) "\'");
  Part1_13 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up interface files for module \140", Var_74);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_13, &CleaningMsg_14);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, CleaningMsg_14);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__clean_scalar_common_5[0]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__clean__make_module_realclean_7_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_45, 5) = ((MR_Box) ((MR_String) "predicate \140make.clean.make_module_realclean\'/7"));
    MR_hl_field(0, Var_45, 6) = ((MR_Box) ((MR_Integer) 78));
    MR_hl_field(0, Var_45, 7) = ((MR_Box) (ModuleName_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, (MR_Word) (MR_mkword(1, &make__clean_scalar_common_1[21])), ((MR_Box) (STATE_VARIABLE_Info_20_20)), &conv2_STATE_VARIABLE_Info_46_46, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_47_47);
  STATE_VARIABLE_Info_46_46 = ((MR_Word) (conv2_STATE_VARIABLE_Info_46_46));
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(1, &make__clean_scalar_common_2[3])), STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_52_52);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[22])), STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_57_57);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[23])), STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_17);
}

static void MR_CALL 
make__clean__make_module_clean_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Info_18;

  make__clean__remove_fact_table_object_and_assembler_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__clean__make_module_clean_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_18;

  make__clean__remove_fact_table_object_and_assembler_files_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__clean__make_module_clean_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Info_18;

  make__clean__remove_fact_table_c_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__clean__make_module_clean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__8_8;

  make__util__remove_make_target_file_by_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__8_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__8_8));
}

void MR_CALL 
make__clean__make_module_clean_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_String Part1_13;
  MR_String CleaningMsg_14;
  MR_Word MaybeModuleDepInfo_15;
  MR_Word FactTableFiles_18;
  MR_Word CCodeModule_19;
  MR_String Var_27;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word STATE_VARIABLE_Info_51_51;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_59_59;
  MR_Word Var_61;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word STATE_VARIABLE_Info_68_68;
  MR_Word STATE_VARIABLE_Info_71_71;
  MR_String Var_90;
  MR_Word STATE_VARIABLE_Info_24_95;
  MR_Word Var_97;
  MR_Word STATE_VARIABLE_Info_24_104;
  MR_Word Var_106;
  MR_Box conv2_STATE_VARIABLE_Info_32_32;
  MR_Box conv1_STATE_VARIABLE_IO_33_33;
  MR_Box conv5_STATE_VARIABLE_Info_62_62;
  MR_Box conv4_STATE_VARIABLE_IO_63_63;
  MR_Box conv8_STATE_VARIABLE_Info_71_71;
  MR_Box conv7_STATE_VARIABLE_IO_72_72;
  MR_Box conv11_STATE_VARIABLE_Info_21;
  MR_Box conv10_STATE_VARIABLE_IO_23;

  Var_27 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_10);
  Var_90 = mercury__string__f_43_43_2_f_0(Var_27, (MR_String) "\'.");
  Part1_13 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up target files for module \140", Var_90);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_13, &CleaningMsg_14);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, CleaningMsg_14);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&make__clean_scalar_common_5[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (make__clean__make_module_clean_7_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) ((MR_String) "predicate \140make.clean.make_module_clean\'/7"));
    MR_hl_field(0, Var_30, 6) = ((MR_Box) ((MR_Integer) 78));
    MR_hl_field(0, Var_30, 7) = ((MR_Box) (ModuleName_10));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_module_target_type_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, (MR_Word) (MR_mkword(1, &make__clean_scalar_common_1[12])), ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv2_STATE_VARIABLE_Info_32_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33_33);
  STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv2_STATE_VARIABLE_Info_32_32));
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[13])), STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_51_51);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(1, &make__clean_scalar_common_2[2])), STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_56_56);
  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_8, Globals_9, ModuleName_10, &MaybeModuleDepInfo_15, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_59_59);
  if ((MaybeModuleDepInfo_15 == (MR_Word) ((MR_Unsigned) 0U)))
    FactTableFiles_18 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModuleDepInfo_16 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_15, (MR_Integer) 0))));
    MR_Word FactTableFilesSet_17;

    parse_tree__module_dep_info__module_dep_info_get_fact_tables_2_p_0(ModuleDepInfo_16, &FactTableFilesSet_17);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFilesSet_17, &FactTableFiles_18);
  }
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&make__clean_scalar_common_3[2]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (make__clean__make_module_clean_7_p_0_2));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) (Globals_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, FactTableFiles_18, ((MR_Box) (STATE_VARIABLE_Info_59_59)), &conv5_STATE_VARIABLE_Info_62_62, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_63_63);
  STATE_VARIABLE_Info_62_62 = ((MR_Word) (conv5_STATE_VARIABLE_Info_62_62));
  parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ModuleName_10, (MR_Integer) 0, &CCodeModule_19);
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_8, Globals_9, (MR_String) "predicate \140make.clean.make_module_clean\'/7", (MR_Integer) 78, CCodeModule_19, (MR_Word) ((MR_Unsigned) 36U), STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_68_68);
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_8, Globals_9, (MR_String) "predicate \140make.clean.remove_object_and_assembler_files\'/9", (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(2, &make__clean_scalar_common_2[0])), STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_24_95);
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (&make__clean_scalar_common_6[0]));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (make__clean__make_module_clean_7_p_0_3));
    MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_97, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_97, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_97, 5) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, Var_97, 6) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_97, FactTableFiles_18, ((MR_Box) (STATE_VARIABLE_Info_24_95)), &conv8_STATE_VARIABLE_Info_71_71, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_72_72);
  STATE_VARIABLE_Info_71_71 = ((MR_Word) (conv8_STATE_VARIABLE_Info_71_71));
  make__util__remove_make_target_file_by_name_10_p_0(ProgressStream_8, Globals_9, (MR_String) "predicate \140make.clean.remove_object_and_assembler_files\'/9", (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(2, &make__clean_scalar_common_2[1])), STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_24_104);
  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (&make__clean_scalar_common_6[0]));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) (make__clean__make_module_clean_7_p_0_4));
    MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_106, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_106, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_106, 5) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, Var_106, 6) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_106, FactTableFiles_18, ((MR_Box) (STATE_VARIABLE_Info_24_104)), &conv11_STATE_VARIABLE_Info_21, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_23);
  *STATE_VARIABLE_Info_21 = ((MR_Word) (conv11_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
make__clean__maybe_make_grade_clean_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  make__clean__make_module_clean_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

void MR_CALL 
make__clean__maybe_make_grade_clean_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Clean_12,
  MR_Word ModuleName_13,
  MR_Word AllModules_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  switch (Clean_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      break;
    case (MR_Integer) 1:
      {
        MR_String Grade_21;
        MR_String Part1_22;
        MR_String CleaningMsg_23;
        MR_String Var_24;
        MR_Word STATE_VARIABLE_Info_30_26;
        MR_Word Var_28;
        MR_String Var_33;
        MR_String Var_35;
        MR_String Var_36;
        MR_Box conv2_STATE_VARIABLE_Info_18;
        MR_Box conv1_STATE_VARIABLE_IO_20;

        libs__globals__get_grade_dir_2_p_0(Globals_11, &Grade_21);
        Var_24 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_13);
        Var_33 = mercury__string__f_43_43_2_f_0(Grade_21, (MR_String) ".");
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "\' in grade ", Var_33);
        Var_36 = mercury__string__f_43_43_2_f_0(Var_24, Var_35);
        Part1_22 = mercury__string__f_43_43_2_f_0((MR_String) "Cleaning up grade-dependent files for \140", Var_36);
        make__util__verbose_make_one_part_msg_3_p_0(Globals_11, Part1_22, &CleaningMsg_23);
        make__util__maybe_write_msg_4_p_0(ProgressStream_10, CleaningMsg_23);
        make__clean__make_main_module_realclean_7_p_0(ProgressStream_10, Globals_11, ModuleName_13, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_30_26);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&make__clean_scalar_common_3[1]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (make__clean__maybe_make_grade_clean_9_p_0_1));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (ProgressStream_10));
          MR_hl_field(0, Var_28, 4) = ((MR_Box) (Globals_11));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, AllModules_14, ((MR_Box) (STATE_VARIABLE_Info_30_26)), &conv2_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
        *STATE_VARIABLE_Info_18 = ((MR_Word) (conv2_STATE_VARIABLE_Info_18));
      }
      break;
  }
}

static void MR_CALL 
make__clean__make_main_module_realclean_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__6_6;

  make__util__remove_file_for_make_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__6_6));
}

static void MR_CALL 
make__clean__make_main_module_realclean_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__4_4;
  MR_String conv0_HeadVar__5_5;

  backend_libs__compile_target_code__linked_target_file_name_full_curdir_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
}

void MR_CALL 
make__clean__make_main_module_realclean_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_String Part1_13;
  MR_String CleaningMsg_14;
  MR_Word FileNames_16;
  MR_Word CurDirFileNames_17;
  MR_String FullInitFileNameLegacy_18;
  MR_String FullInitFileNameProposed_19;
  MR_String CurDirInitFileName_20;
  MR_Word FilesToRemove_21;
  MR_String Var_29;
  MR_Word Var_46;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word STATE_VARIABLE_Info_57_57;
  MR_String Var_76;
  MR_Word STATE_VARIABLE_Info_20_79;
  MR_Word STATE_VARIABLE_Info_24_83;
  MR_Box conv2_STATE_VARIABLE_IO_47_47;
  MR_Box conv5_STATE_VARIABLE_Info_57_57;
  MR_Box conv4_STATE_VARIABLE_IO_58_58;

  Var_29 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_10);
  Var_76 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) "\'.");
  Part1_13 = mercury__string__f_43_43_2_f_0((MR_String) "Removing executable and library files for \140", Var_76);
  make__util__verbose_make_one_part_msg_3_p_0(Globals_9, Part1_13, &CleaningMsg_14);
  make__util__maybe_write_msg_4_p_0(ProgressStream_8, CleaningMsg_14);
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&make__clean_scalar_common_3[0]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (make__clean__make_main_module_realclean_7_p_0_1));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_46, 4) = ((MR_Box) (ModuleName_10));
  }
  mercury__list__map2_foldl_6_p_2((MR_Word) (&backend_libs__compile_target_code__backend_libs__compile_target_code__type_ctor_info_linked_target_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, (MR_Word) (MR_mkword(1, &make__clean_scalar_common_1[6])), &FileNames_16, &CurDirFileNames_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_47_47);
  parse_tree__file_names__module_name_to_file_name_full_curdir_7_p_0(Globals_9, (MR_String) "predicate \140make.clean.make_main_module_realclean\'/7", (MR_Word) (MR_mkword(2, &make__clean_scalar_common_2[0])), ModuleName_10, &FullInitFileNameLegacy_18, &FullInitFileNameProposed_19, &CurDirInitFileName_20);
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (CurDirInitFileName_20));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (FullInitFileNameProposed_19));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (FullInitFileNameLegacy_18));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CurDirFileNames_17, Var_52);
  FilesToRemove_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNames_16, Var_51);
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__clean_scalar_common_4[0]));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__clean__make_main_module_realclean_7_p_0_2));
    MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_56, 3) = ((MR_Box) (ProgressStream_8));
    MR_hl_field(0, Var_56, 4) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_56, 5) = ((MR_Box) ((MR_Integer) 78));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, FilesToRemove_21, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv5_STATE_VARIABLE_Info_57_57, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_58_58);
  STATE_VARIABLE_Info_57_57 = ((MR_Word) (conv5_STATE_VARIABLE_Info_57_57));
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[24])), STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_20_79);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[25])), STATE_VARIABLE_Info_20_79, &STATE_VARIABLE_Info_24_83);
  make__util__remove_module_file_for_make_9_p_0(ProgressStream_8, Globals_9, (MR_Integer) 78, ModuleName_10, (MR_Word) (MR_mkword(3, &make__clean_scalar_common_1[26])), STATE_VARIABLE_Info_24_83, STATE_VARIABLE_Info_23);
}

void mercury__make__clean__init(void)
{
}

void mercury__make__clean__init_type_tables(void)
{
}

void mercury__make__clean__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__clean__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.clean.
