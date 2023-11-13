/*
** Automatically generated from `make.top_level.m'
** by the Mercury compiler,
** version rotd-2023-11-13
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


// :- module make.top_level.
// :- implementation.

/*
INIT mercury__make__top_level__init
ENDINIT
*/

#include "make.top_level.mih"


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
#include "edit_seq.mih"
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
#include "make.hash.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.timestamp.mih"
#include "make.track_flags.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_error_spec.mih"




static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__report_any_absolute_targets__177__1_1_p_0(
  MR_String LambdaHeadVar__1_15);

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__109__1_1_p_0(
  MR_String LambdaHeadVar__1_53);

static void MR_CALL 
make__top_level__classify_target_3_p_0(
  MR_Word Globals_4,
  MR_String TargetName_5,
  MR_Word * TopTargetFile_6);

static MR_bool MR_CALL 
make__top_level__search_backwards_for_dot_3_p_0(
  MR_String String_4,
  MR_Integer Index_5,
  MR_Integer * DotIndex_6);

static MR_bool MR_CALL 
make__top_level__classify_target_2_4_p_0(
  MR_Word Globals_5,
  MR_String ModuleNameStr0_6,
  MR_String ExtStr_7,
  MR_Word * TopTargetFile_8);

static MR_Word MR_CALL 
make__top_level__report_target_with_dir_component_2_f_0(
  MR_String ProgName_4,
  MR_String Target_5);

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box make__top_level_scalar_common_1[9][2];

static /* final */ const MR_Box make__top_level_scalar_common_2[43][1];

static /* final */ const MR_Box make__top_level_scalar_common_3[1][4];

static /* final */ const MR_Box make__top_level_scalar_common_4[10][3];

static /* final */ const MR_Box make__top_level_scalar_common_5[3][5];

static /* final */ const MR_Box make__top_level_scalar_common_6[2][6];


struct make__top_level__vector_common_type_7_0_s {
  const MR_Word make__top_level__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct make__top_level__vector_common_type_7_0_s make__top_level_vector_common_7[37];



static /* final */ const MR_Box make__top_level_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "*** Error: no target or MAIN_TARGET specified."))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[0])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a make target may not contain a directory component,"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[0])))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_2[43][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(2, &make__top_level_scalar_common_2[1]))) },
  /* row   3 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[2]))) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(2, &make__top_level_scalar_common_2[4]))) },
  /* row   6 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[5]))) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   9 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row  10 */
  { ((MR_Box) ((MR_Unsigned) 28U)) },
  /* row  11 */
  { ((MR_Box) ((MR_Unsigned) 36U)) },
  /* row  12 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row  13 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[12]))) },
  /* row  14 */
  { ((MR_Box) ((MR_Unsigned) 48U)) },
  /* row  15 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  16 */
  { ((MR_Box) ((MR_Unsigned) 40U)) },
  /* row  17 */
  { ((MR_Box) ((MR_Unsigned) 20U)) },
  /* row  18 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row  19 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row  20 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row  21 */
  { ((MR_Box) ((MR_Unsigned) 20U)) },
  /* row  22 */
  { ((MR_Box) ((MR_Unsigned) 44U)) },
  /* row  23 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  24 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[4]))) },
  /* row  25 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[1]))) },
  /* row  26 */
  { ((MR_Box) ((MR_Unsigned) 24U)) },
  /* row  27 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row  28 */
  { ((MR_Box) ((MR_Unsigned) 32U)) },
  /* row  29 */
  { ((MR_Box) ((MR_Unsigned) 52U)) },
  /* row  30 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[10]))) },
  /* row  31 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[14]))) },
  /* row  32 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[11]))) },
  /* row  33 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[16]))) },
  /* row  34 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[19]))) },
  /* row  35 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[20]))) },
  /* row  36 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[21]))) },
  /* row  37 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[18]))) },
  /* row  38 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[22]))) },
  /* row  39 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[23]))) },
  /* row  40 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[26]))) },
  /* row  41 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[28]))) },
  /* row  42 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[29]))) },
};

static /* final */ const MR_Box make__top_level_scalar_common_3[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_4[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[2])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[2])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};


static /* final */ const struct make__top_level__vector_common_type_7_0_s make__top_level_vector_common_7[37] = {
  /* row   0 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[30])) },
  /* row   1 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[31])) },
  /* row   2 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[32])) },
  /* row   3 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[33])) },
  /* row   4 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[33])) },
  /* row   5 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[13])) },
  /* row   6 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[34])) },
  /* row   7 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[35])) },
  /* row   8 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[36])) },
  /* row   9 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[37])) },
  /* row  10 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[38])) },
  /* row  11 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[39])) },
  /* row  12 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[40])) },
  /* row  13 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[41])) },
  /* row  14 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[42])) },
  /* row  15 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[9])) },
  /* row  16 */   { (MR_Word) (&make__top_level_scalar_common_2[10]) },
  /* row  17 */   { (MR_Word) (&make__top_level_scalar_common_2[11]) },
  /* row  18 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[13])) },
  /* row  19 */   { (MR_Word) (&make__top_level_scalar_common_2[14]) },
  /* row  20 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[15])) },
  /* row  21 */   { (MR_Word) (&make__top_level_scalar_common_2[16]) },
  /* row  22 */   { (MR_Word) (&make__top_level_scalar_common_2[16]) },
  /* row  23 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[17])) },
  /* row  24 */   { (MR_Word) (&make__top_level_scalar_common_2[12]) },
  /* row  25 */   { (MR_Word) (&make__top_level_scalar_common_2[18]) },
  /* row  26 */   { (MR_Word) (&make__top_level_scalar_common_2[19]) },
  /* row  27 */   { (MR_Word) (&make__top_level_scalar_common_2[20]) },
  /* row  28 */   { (MR_Word) (&make__top_level_scalar_common_2[21]) },
  /* row  29 */   { (MR_Word) (&make__top_level_scalar_common_2[22]) },
  /* row  30 */   { (MR_Word) (&make__top_level_scalar_common_2[23]) },
  /* row  31 */   { (MR_Word) (&make__top_level_scalar_common_2[24]) },
  /* row  32 */   { (MR_Word) (&make__top_level_scalar_common_2[25]) },
  /* row  33 */   { (MR_Word) (&make__top_level_scalar_common_2[26]) },
  /* row  34 */   { (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[27])) },
  /* row  35 */   { (MR_Word) (&make__top_level_scalar_common_2[28]) },
  /* row  36 */   { (MR_Word) (&make__top_level_scalar_common_2[29]) },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__report_any_absolute_targets__177__1_1_p_0(
  MR_String LambdaHeadVar__1_15)
{
  MR_bool succeeded;
  MR_Char Var_16;

  Var_16 = mercury__dir__directory_separator_0_f_0();
  succeeded = mercury__string__contains_char_2_p_0(LambdaHeadVar__1_15, Var_16);
  return succeeded;
}

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__109__1_1_p_0(
  MR_String LambdaHeadVar__1_53)
{
  MR_bool succeeded;
  MR_String Var_55;

  succeeded = mercury__string__suffix_2_p_0(LambdaHeadVar__1_53, (MR_String) ".depend");
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_55 = (MR_String) ".depend_ints";
    succeeded = mercury__string__suffix_2_p_0(LambdaHeadVar__1_53, Var_55);
    succeeded = !(succeeded);
  }
  return succeeded;
}

static void MR_CALL 
make__top_level__classify_target_3_p_0(
  MR_Word Globals_4,
  MR_String TargetName_5,
  MR_Word * TopTargetFile_6)
{
  MR_bool succeeded;
  MR_Word TopTargetFilePrime_11;
  MR_Integer NameLength_7;
  MR_Integer DotLocn_8;
  MR_String ModuleNameStr0_9;
  MR_String Suffix_10;

  mercury__string__length_2_p_0(TargetName_5, &NameLength_7);
  succeeded = make__top_level__search_backwards_for_dot_3_p_0(TargetName_5, NameLength_7, &DotLocn_8);
  if (succeeded)
  {
    mercury__string__split_4_p_0(TargetName_5, DotLocn_8, &ModuleNameStr0_9, &Suffix_10);
    succeeded = make__top_level__classify_target_2_4_p_0(Globals_4, ModuleNameStr0_9, Suffix_10, &TopTargetFilePrime_11);
  }
  if (succeeded)
    *TopTargetFile_6 = TopTargetFilePrime_11;
  else
  {
    MR_Word ModuleName_13;
    MR_Word TargetType_14;
    MR_String ModuleNameStr_12;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "lib", TargetName_5, &ModuleNameStr_12);
    if (succeeded)
    {
      parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleNameStr_12, &ModuleName_13);
      TargetType_14 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[0]));
    }
    else
    {
      MR_Word Var_17;
      MR_Word CompilationTarget_18;

      parse_tree__file_names__file_name_to_module_name_2_p_0(TargetName_5, &ModuleName_13);
      libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_18);
      switch (CompilationTarget_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_17 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          Var_17 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          Var_17 = (MR_Integer) 5;
          break;
      }
      {
        TargetType_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TargetType_14, 0) = (MR_Box) ((MR_Unsigned) (Var_17));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TopTargetFile_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(0, base, 1) = ((MR_Box) (TargetType_14));
    }
  }
}

static MR_bool MR_CALL 
make__top_level__search_backwards_for_dot_3_p_0(
  MR_String String_4,
  MR_Integer Index_5,
  MR_Integer * DotIndex_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CharIndex_7;
    MR_Char Char_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_prev_index_4_p_0(String_4, Index_5, &CharIndex_7, &Char_8);
    if (succeeded)
    {
      succeeded = (Char_8 == (MR_Char) 46);
      if (succeeded)
      {
        *DotIndex_6 = CharIndex_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer next_value_of_Index_5 = CharIndex_7;

        // direct tailcall eliminated
        ;
        Index_5 = next_value_of_Index_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
make__top_level__classify_target_2_4_p_0(
  MR_Word Globals_5,
  MR_String ModuleNameStr0_6,
  MR_String ExtStr_7,
  MR_Word * TopTargetFile_8)
{
  MR_bool succeeded;
  MR_String ModuleNameStr_10;
  MR_Word TargetType_11;
  MR_Word ModuleName_17;
  MR_Word TargetTypePrime_9;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    if (((MR_nth_code_unit(ExtStr_7, 0)) == (MR_Integer) 46))
      switch (MR_nth_code_unit(ExtStr_7, 1)) {
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(ExtStr_7, 2)) {
            case (MR_Integer) 108:
              if (((((MR_nth_code_unit(ExtStr_7, 3)) == (MR_Integer) 108)) && (((MR_nth_code_unit(ExtStr_7, 4)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(ExtStr_7, 5)) {
                  case (MR_Integer) 97:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".all_analysiss"))
                      case_num_0 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 99:
                    switch (MR_nth_code_unit(ExtStr_7, 6)) {
                      case (MR_Integer) 108:
                        if (MR_offset_streq(7, ExtStr_7, (MR_String) ".all_classs"))
                          case_num_0 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 115:
                        switch (MR_nth_code_unit(ExtStr_7, 7)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 104:
                            if (MR_offset_streq(8, ExtStr_7, (MR_String) ".all_csharps"))
                              case_num_0 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(8, ExtStr_7, (MR_String) ".all_css"))
                              case_num_0 = (MR_Integer) 4;
                            break;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".all_errs"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                  case (MR_Integer) 105:
                    if (((((MR_nth_code_unit(ExtStr_7, 6)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ExtStr_7, 7)) == (MR_Integer) 116))))
                      switch (MR_nth_code_unit(ExtStr_7, 8)) {
                        case (MR_Integer) 48:
                          if (MR_offset_streq(9, ExtStr_7, (MR_String) ".all_int0s"))
                            case_num_0 = (MR_Integer) 6;
                          break;
                        case (MR_Integer) 50:
                          if (MR_offset_streq(9, ExtStr_7, (MR_String) ".all_int2s"))
                            case_num_0 = (MR_Integer) 7;
                          break;
                        case (MR_Integer) 51:
                          if (MR_offset_streq(9, ExtStr_7, (MR_String) ".all_int3s"))
                            case_num_0 = (MR_Integer) 8;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(9, ExtStr_7, (MR_String) ".all_ints"))
                            case_num_0 = (MR_Integer) 9;
                          break;
                      }
                    break;
                  case (MR_Integer) 106:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".all_javas"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                  case (MR_Integer) 109:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".all_ms"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".all_opts"))
                      case_num_0 = (MR_Integer) 12;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".all_track_flagss"))
                      case_num_0 = (MR_Integer) 13;
                    break;
                  case (MR_Integer) 120:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".all_xmls"))
                      case_num_0 = (MR_Integer) 14;
                    break;
                }
              break;
            case (MR_Integer) 110:
              if (((((((((MR_nth_code_unit(ExtStr_7, 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(ExtStr_7, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(ExtStr_7, 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(ExtStr_7, 6)) == (MR_Integer) 115))))
                switch (MR_nth_code_unit(ExtStr_7, 7)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(8, ExtStr_7, (MR_String) ".analyse"))
                      case_num_0 = (MR_Integer) 15;
                    break;
                  case (MR_Integer) 105:
                    if (((MR_nth_code_unit(ExtStr_7, 8)) == (MR_Integer) 115))
                      switch (MR_nth_code_unit(ExtStr_7, 9)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 16;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(10, ExtStr_7, (MR_String) ".analysiss"))
                            case_num_0 = (MR_Integer) 0;
                          break;
                      }
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(ExtStr_7, 2)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 17;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(3, ExtStr_7, (MR_String) ".check"))
                case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 108:
              switch (MR_nth_code_unit(ExtStr_7, 3)) {
                case (MR_Integer) 97:
                  if (((((MR_nth_code_unit(ExtStr_7, 4)) == (MR_Integer) 115)) && (((MR_nth_code_unit(ExtStr_7, 5)) == (MR_Integer) 115))))
                    switch (MR_nth_code_unit(ExtStr_7, 6)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 19;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(7, ExtStr_7, (MR_String) ".classs"))
                          case_num_0 = (MR_Integer) 1;
                        break;
                    }
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(4, ExtStr_7, (MR_String) ".clean"))
                    case_num_0 = (MR_Integer) 20;
                  break;
              }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(ExtStr_7, 3)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 21;
                  break;
                case (MR_Integer) 104:
                  if (((((((MR_nth_code_unit(ExtStr_7, 4)) == (MR_Integer) 97)) && (((MR_nth_code_unit(ExtStr_7, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(ExtStr_7, 6)) == (MR_Integer) 112))))
                    switch (MR_nth_code_unit(ExtStr_7, 7)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 22;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(8, ExtStr_7, (MR_String) ".csharps"))
                          case_num_0 = (MR_Integer) 3;
                        break;
                    }
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(4, ExtStr_7, (MR_String) ".css"))
                    case_num_0 = (MR_Integer) 4;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 100:
          if (MR_offset_streq(2, ExtStr_7, (MR_String) ".doc"))
            case_num_0 = (MR_Integer) 23;
          break;
        case (MR_Integer) 101:
          if (((((MR_nth_code_unit(ExtStr_7, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(ExtStr_7, 3)) == (MR_Integer) 114))))
            switch (MR_nth_code_unit(ExtStr_7, 4)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 24;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(5, ExtStr_7, (MR_String) ".errs"))
                  case_num_0 = (MR_Integer) 5;
                break;
            }
          break;
        case (MR_Integer) 105:
          if (((((MR_nth_code_unit(ExtStr_7, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ExtStr_7, 3)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(ExtStr_7, 4)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 25;
                break;
              case (MR_Integer) 48:
                switch (MR_nth_code_unit(ExtStr_7, 5)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 26;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".int0s"))
                      case_num_0 = (MR_Integer) 6;
                    break;
                }
                break;
              case (MR_Integer) 50:
                switch (MR_nth_code_unit(ExtStr_7, 5)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 27;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".int2s"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                }
                break;
              case (MR_Integer) 51:
                switch (MR_nth_code_unit(ExtStr_7, 5)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 28;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(6, ExtStr_7, (MR_String) ".int3s"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                }
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(5, ExtStr_7, (MR_String) ".ints"))
                  case_num_0 = (MR_Integer) 9;
                break;
            }
          break;
        case (MR_Integer) 106:
          if (((((((MR_nth_code_unit(ExtStr_7, 2)) == (MR_Integer) 97)) && (((MR_nth_code_unit(ExtStr_7, 3)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(ExtStr_7, 4)) == (MR_Integer) 97))))
            switch (MR_nth_code_unit(ExtStr_7, 5)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 29;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(6, ExtStr_7, (MR_String) ".javas"))
                  case_num_0 = (MR_Integer) 10;
                break;
            }
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(ExtStr_7, 2)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(3, ExtStr_7, (MR_String) ".mh"))
                case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(3, ExtStr_7, (MR_String) ".mih"))
                case_num_0 = (MR_Integer) 32;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(3, ExtStr_7, (MR_String) ".ms"))
                case_num_0 = (MR_Integer) 11;
              break;
          }
          break;
        case (MR_Integer) 111:
          if (((((MR_nth_code_unit(ExtStr_7, 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(ExtStr_7, 3)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(ExtStr_7, 4)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 33;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(5, ExtStr_7, (MR_String) ".opts"))
                  case_num_0 = (MR_Integer) 12;
                break;
            }
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(2, ExtStr_7, (MR_String) ".realclean"))
            case_num_0 = (MR_Integer) 34;
          break;
        case (MR_Integer) 116:
          if (((((((((((((((((((((MR_nth_code_unit(ExtStr_7, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(ExtStr_7, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(ExtStr_7, 4)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(ExtStr_7, 5)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(ExtStr_7, 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(ExtStr_7, 7)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(ExtStr_7, 8)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(ExtStr_7, 9)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(ExtStr_7, 10)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(ExtStr_7, 11)) == (MR_Integer) 115))))
            switch (MR_nth_code_unit(ExtStr_7, 12)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 35;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(13, ExtStr_7, (MR_String) ".track_flagss"))
                  case_num_0 = (MR_Integer) 13;
                break;
            }
          break;
        case (MR_Integer) 120:
          if (((((MR_nth_code_unit(ExtStr_7, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(ExtStr_7, 3)) == (MR_Integer) 108))))
            switch (MR_nth_code_unit(ExtStr_7, 4)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 36;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(5, ExtStr_7, (MR_String) ".xmls"))
                  case_num_0 = (MR_Integer) 14;
                break;
            }
          break;
      }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      TargetTypePrime_9 = ((&make__top_level_vector_common_7[0 + case_num_0]))->make__top_level__vector_common_type_7_0__vct_7_f_0;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    ModuleNameStr_10 = ModuleNameStr0_6;
    TargetType_11 = TargetTypePrime_9;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word LinkedtargetExtMap_12;
    MR_Word LinkedTargetExtInfo_13;
    MR_Word LinkedTargetKind_15;
    MR_Box conv0_LinkedTargetExtInfo_13;

    libs__globals__get_linked_target_ext_map_2_p_0(Globals_5, &LinkedtargetExtMap_12);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), LinkedtargetExtMap_12, ((MR_Box) (ExtStr_7)), &conv0_LinkedTargetExtInfo_13);
    if (succeeded)
    {
      LinkedTargetExtInfo_13 = ((MR_Word) (conv0_LinkedTargetExtInfo_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      LinkedTargetKind_15 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetExtInfo_13, (MR_Integer) 1))) & (MR_Integer) 7);
      switch (LinkedTargetKind_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            ModuleNameStr_10 = ModuleNameStr0_6;
            TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            ModuleNameStr_10 = ModuleNameStr0_6;
            TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[6]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_23;
            MR_Word CompilationTarget_91;

            ModuleNameStr_10 = ModuleNameStr0_6;
            libs__globals__get_target_2_p_0(Globals_5, &CompilationTarget_91);
            switch (CompilationTarget_91) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Var_23 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                Var_23 = (MR_Integer) 3;
                break;
              case (MR_Integer) 2:
                Var_23 = (MR_Integer) 5;
                break;
            }
            {
              TargetType_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TargetType_11, 0) = (MR_Box) ((MR_Unsigned) (Var_23));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[7]));
            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "lib", ModuleNameStr0_6, &ModuleNameStr_10);
          }
          break;
        case (MR_Integer) 0:
          {
            ModuleNameStr_10 = ModuleNameStr0_6;
            TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[2]);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            ModuleNameStr_10 = ModuleNameStr0_6;
            TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[5]);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            TargetType_11 = (MR_Word) (MR_mkword(1, &make__top_level_scalar_common_2[8]));
            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "lib", ModuleNameStr0_6, &ModuleNameStr_10);
          }
          break;
        case (MR_Integer) 5:
          {
            TargetType_11 = (MR_Word) (MR_mkword(1, &make__top_level_scalar_common_2[1]));
            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "lib", ModuleNameStr0_6, &ModuleNameStr_10);
          }
          break;
      }
    }
  }
  if (succeeded)
  {
    parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleNameStr_10, &ModuleName_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TopTargetFile_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (TargetType_11));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
make__top_level__report_target_with_dir_component_2_f_0(
  MR_String ProgName_4,
  MR_String Target_5)
{
  MR_Word Spec_6;
  MR_Word Pieces_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_12;
  MR_Word Var_15;
  MR_Word Var_18;
  MR_Word Var_19;

  {
    Var_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_8, 0) = ((MR_Box) (ProgName_4));
  }
  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) (Target_5));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[8])));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[6])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[5])));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[3])));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_12));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Pieces_7, 1) = ((MR_Box) (Var_9));
  }
  {
    Spec_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140make.top_level.report_target_with_dir_component\'/2"));
    MR_hl_field(2, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(2, Spec_6, 3) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

void MR_CALL 
make__top_level__make_top_target_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Target_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, Target_11, (MR_Integer) 0))));
  MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(0, Target_11, (MR_Integer) 1))));
  MR_Word TrackFlags_17;
  MR_Word ErrorStream_18;
  MR_Word TrackFlagsSucceeded_19;
  MR_Word STATE_VARIABLE_Info_32_32;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 669, &TrackFlags_17);
  libs__globals__get_error_output_stream_5_p_0(Globals_10, ModuleName_15, &ErrorStream_18);
  switch (TrackFlags_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TrackFlagsSucceeded_19 = (MR_Integer) 1;
        STATE_VARIABLE_Info_32_32 = STATE_VARIABLE_Info_0_26;
      }
      break;
    case (MR_Integer) 1:
      make__track_flags__make_track_flags_files_9_p_0(ErrorStream_18, ProgressStream_9, Globals_10, ModuleName_15, &TrackFlagsSucceeded_19, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_32_32);
      break;
  }
  switch (TrackFlagsSucceeded_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_12 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_32_32;
      }
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) TargetType_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ModuleTargetType_20 = ((MR_Word) ((MR_hl_field(0, TargetType_16, (MR_Integer) 0))));
            MR_Word TargetFile_21;
            MR_Word Var_35;

            {
              TargetFile_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TargetFile_21, 0) = ((MR_Box) (ModuleName_15));
              MR_hl_field(0, TargetFile_21, 1) = ((MR_Box) (ModuleTargetType_20));
            }
            Var_35 = (MR_Word) ((MR_Word) (TargetFile_21));
            make__module_target__make_module_target_9_p_0((MR_Word) ((MR_Unsigned) 0U), ProgressStream_9, Globals_10, Var_35, Succeeded_12, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgramTargetType_22 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_16, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word LinkedTargetFile_23;
            MR_Word Specs_24;

            {
              LinkedTargetFile_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, LinkedTargetFile_23, 0) = ((MR_Box) (ModuleName_15));
              MR_hl_field(0, LinkedTargetFile_23, 1) = (MR_Box) ((MR_Unsigned) (ProgramTargetType_22));
            }
            make__program_target__make_linked_target_10_p_0(ProgressStream_9, Globals_10, LinkedTargetFile_23, Succeeded_12, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27, (MR_Word) ((MR_Unsigned) 0U), &Specs_24);
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_18, Globals_10, Specs_24);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MiscTargetType_25 = ((MR_Word) ((MR_hl_field(2, TargetType_16, (MR_Integer) 0))));
            MR_Word Var_42;
            MR_Word Specs_47;

            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_42, 0) = ((MR_Box) (ModuleName_15));
              MR_hl_field(0, Var_42, 1) = ((MR_Box) (MiscTargetType_25));
            }
            make__program_target__make_misc_target_10_p_0(ProgressStream_9, Globals_10, Var_42, Succeeded_12, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27, (MR_Word) ((MR_Unsigned) 0U), &Specs_47);
            parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_18, Globals_10, Specs_47);
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_Spec_6;

  conv9_Spec_6 = make__top_level__report_target_with_dir_component_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_Spec_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_TopTargetFile_6;

  make__top_level__classify_target_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv8_TopTargetFile_6);
  *wrapper_arg_2 = ((MR_Box) (conv8_TopTargetFile_6));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__109__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv7_HeadVar__2_2;

  make__hash__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv6_HeadVar__2_2;

  make__hash__dependency_file_with_module_index_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv5_HeadVar__2_2;

  make__hash__module_name_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__report_any_absolute_targets__177__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_Spec_6;

  conv4_Spec_6 = make__top_level__report_target_with_dir_component_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Spec_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_TopTargetFile_6;

  make__top_level__classify_target_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv3_TopTargetFile_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_TopTargetFile_6));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__109__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__2_2;

  make__hash__dependency_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_2;

  make__hash__dependency_file_with_module_index_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  make__hash__module_name_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__report_any_absolute_targets__177__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
make__top_level__make_process_compiler_args_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word DetectedGradeFlags_11,
  MR_Word OptionsVariables_12,
  MR_Word OptionArgs_13,
  MR_Word Targets0_14)
{
  MR_bool succeeded;
  MR_String ProgName_16;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_16);
  if ((Targets0_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeMainTargets_77;

    make__options_file__lookup_main_target_2_p_0(OptionsVariables_12, &MaybeMainTargets_77);
    if (((MR_tag((MR_Word) MaybeMainTargets_77)) == (MR_Integer) 0))
    {
      MR_Word Specs_19 = ((MR_Word) ((MR_hl_field(0, MaybeMainTargets_77, (MR_Integer) 0))));
      MR_Word StdErr_20;

      mercury__io__stderr_stream_3_p_0(&StdErr_20);
      parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_20, Globals_10, Specs_19);
    }
    else
    {
      MR_Word MainTargets_79 = ((MR_Word) ((MR_hl_field(1, MaybeMainTargets_77, (MR_Integer) 0))));

      if ((MainTargets_79 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_82;
        MR_Word Spec_83;
        MR_Word Var_86;
        MR_Word Specs_236;
        MR_Word StdErr_237;

        {
          Var_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_86, 0) = ((MR_Box) (ProgName_16));
        }
        {
          Pieces_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_82, 0) = ((MR_Box) (Var_86));
          MR_hl_field(1, Pieces_82, 1) = ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[4])));
        }
        {
          Spec_83 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_83, 0) = ((MR_Box) ((MR_String) "predicate \140make.top_level.get_main_target_if_needed\'/4"));
          MR_hl_field(2, Spec_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_83, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_83, 3) = ((MR_Box) (Pieces_82));
        }
        {
          Specs_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_236, 0) = ((MR_Box) (Spec_83));
          MR_hl_field(1, Specs_236, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__io__stderr_stream_3_p_0(&StdErr_237);
        parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_237, Globals_10, Specs_236);
      }
      else
      {
        MR_Word AbsTargets_95;

        mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[0]), MainTargets_79, &AbsTargets_95);
        if ((AbsTargets_95 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Targets_21 = ((MR_Word) ((MR_hl_field(1, MaybeMainTargets_77, (MR_Integer) 0))));
          MR_Word KeepGoingBool_22;
          MR_Word KeepGoing_23;
          MR_Integer AnalysisRepeat_24;
          MR_Word ModuleIndexMap_25;
          MR_Word DepIndexMap_26;
          MR_Word DepStatusMap_27;
          MR_Word NonDependTargets_29;
          MR_Word ClassifiedTargets_30;
          MR_Word ClassifiedTargetSet_31;
          MR_Word MakeInfo0_32;
          MR_Word Succeeded_33;
          MR_Word Var_43;
          MR_Box Var_45;
          MR_Word Var_47;
          MR_Box Var_49;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word _MakeInfo_34;

          libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 667, &KeepGoingBool_22);
          switch (KeepGoingBool_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              KeepGoing_23 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              KeepGoing_23 = (MR_Integer) 1;
              break;
          }
          libs__globals__lookup_int_option_3_p_0(Globals_10, (MR_Integer) 508, &AnalysisRepeat_24);
          Var_43 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__top_level_scalar_common_4[1]));
          Var_45 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          {
            ModuleIndexMap_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ModuleIndexMap_25, 0) = ((MR_Box) (Var_43));
            MR_hl_field(0, ModuleIndexMap_25, 1) = ((MR_Box) (Var_45));
            MR_hl_field(0, ModuleIndexMap_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_47 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__top_level_scalar_common_4[2]));
          Var_49 = mercury__version_array__empty_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0));
          {
            DepIndexMap_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DepIndexMap_26, 0) = ((MR_Box) (Var_47));
            MR_hl_field(0, DepIndexMap_26, 1) = ((MR_Box) (Var_49));
            MR_hl_field(0, DepIndexMap_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          DepStatusMap_27 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__top_level_scalar_common_4[3]));
          mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[4]), Targets_21, &NonDependTargets_29);
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_56, 0) = ((MR_Box) (&make__top_level_scalar_common_6[0]));
            MR_hl_field(0, Var_56, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_6));
            MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_56, 3) = ((MR_Box) (Globals_10));
          }
          mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), Var_56, NonDependTargets_29, &ClassifiedTargets_30);
          ClassifiedTargetSet_31 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ClassifiedTargets_30);
          Var_57 = make__timestamp__init_target_file_timestamps_0_f_0();
          MakeInfo0_32 = make__make_info__init_make_info_10_f_0(OptionsVariables_12, DetectedGradeFlags_11, KeepGoing_23, OptionArgs_13, ClassifiedTargetSet_31, AnalysisRepeat_24, Var_57, ModuleIndexMap_25, DepIndexMap_26, DepStatusMap_27);
          make__build__foldl2_make_top_targets_9_p_0(KeepGoing_23, ProgressStream_9, Globals_10, ClassifiedTargets_30, &Succeeded_33, MakeInfo0_32, &_MakeInfo_34);
          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_33);
        }
        else
        {
          MR_Word Var_97;
          MR_Word Specs_246;
          MR_Word StdErr_247;

          {
            Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_97, 0) = ((MR_Box) (&make__top_level_scalar_common_6[1]));
            MR_hl_field(0, Var_97, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_7));
            MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_97, 3) = ((MR_Box) (ProgName_16));
          }
          Specs_246 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_97, AbsTargets_95);
          mercury__io__stderr_stream_3_p_0(&StdErr_247);
          parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_247, Globals_10, Specs_246);
        }
      }
    }
  }
  else
  {
    MR_Word MaybeTargets0_106;
    MR_Word AbsTargets_109;

    {
      MaybeTargets0_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTargets0_106, 0) = ((MR_Box) (Targets0_14));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[5]), Targets0_14, &AbsTargets_109);
    if ((AbsTargets_109 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Targets_121 = ((MR_Word) ((MR_hl_field(1, MaybeTargets0_106, (MR_Integer) 0))));
      MR_Word KeepGoingBool_122;
      MR_Word KeepGoing_123;
      MR_Integer AnalysisRepeat_124;
      MR_Word ModuleIndexMap_125;
      MR_Word DepIndexMap_126;
      MR_Word DepStatusMap_127;
      MR_Word NonDependTargets_128;
      MR_Word ClassifiedTargets_129;
      MR_Word ClassifiedTargetSet_130;
      MR_Word MakeInfo0_131;
      MR_Word Succeeded_132;
      MR_Word Var_136;
      MR_Box Var_138;
      MR_Word Var_140;
      MR_Box Var_142;
      MR_Word Var_146;
      MR_Word Var_147;
      MR_Word _MakeInfo_120;

      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 667, &KeepGoingBool_122);
      switch (KeepGoingBool_122) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          KeepGoing_123 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          KeepGoing_123 = (MR_Integer) 1;
          break;
      }
      libs__globals__lookup_int_option_3_p_0(Globals_10, (MR_Integer) 508, &AnalysisRepeat_124);
      Var_136 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__top_level_scalar_common_4[6]));
      Var_138 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      {
        ModuleIndexMap_125 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModuleIndexMap_125, 0) = ((MR_Box) (Var_136));
        MR_hl_field(0, ModuleIndexMap_125, 1) = ((MR_Box) (Var_138));
        MR_hl_field(0, ModuleIndexMap_125, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_140 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), (MR_Word) (&make__top_level_scalar_common_4[7]));
      Var_142 = mercury__version_array__empty_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0));
      {
        DepIndexMap_126 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DepIndexMap_126, 0) = ((MR_Box) (Var_140));
        MR_hl_field(0, DepIndexMap_126, 1) = ((MR_Box) (Var_142));
        MR_hl_field(0, DepIndexMap_126, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      DepStatusMap_127 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), (MR_Word) (&make__top_level_scalar_common_4[8]));
      mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[9]), Targets_121, &NonDependTargets_128);
      {
        Var_146 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_146, 0) = ((MR_Box) (&make__top_level_scalar_common_6[0]));
        MR_hl_field(0, Var_146, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_13));
        MR_hl_field(0, Var_146, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_146, 3) = ((MR_Box) (Globals_10));
      }
      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), Var_146, NonDependTargets_128, &ClassifiedTargets_129);
      ClassifiedTargetSet_130 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ClassifiedTargets_129);
      Var_147 = make__timestamp__init_target_file_timestamps_0_f_0();
      MakeInfo0_131 = make__make_info__init_make_info_10_f_0(OptionsVariables_12, DetectedGradeFlags_11, KeepGoing_123, OptionArgs_13, ClassifiedTargetSet_130, AnalysisRepeat_124, Var_147, ModuleIndexMap_125, DepIndexMap_126, DepStatusMap_127);
      make__build__foldl2_make_top_targets_9_p_0(KeepGoing_123, ProgressStream_9, Globals_10, ClassifiedTargets_129, &Succeeded_132, MakeInfo0_131, &_MakeInfo_120);
      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_132);
    }
    else
    {
      MR_Word Var_101;
      MR_Word Specs_116;
      MR_Word StdErr_117;

      {
        Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_101, 0) = ((MR_Box) (&make__top_level_scalar_common_6[1]));
        MR_hl_field(0, Var_101, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_8_p_0_14));
        MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_101, 3) = ((MR_Box) (ProgName_16));
      }
      Specs_116 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_101, AbsTargets_109);
      mercury__io__stderr_stream_3_p_0(&StdErr_117);
      parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_117, Globals_10, Specs_116);
    }
  }
}

void mercury__make__top_level__init(void)
{
}

void mercury__make__top_level__init_type_tables(void)
{
}

void mercury__make__top_level__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__top_level__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.top_level.
