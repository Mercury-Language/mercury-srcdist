/*
** Automatically generated from `make.top_level.m'
** by the Mercury compiler,
** version rotd-2026-01-02
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
#include "backend_libs.link_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.hash.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.prereqs_cache.mih"
#include "make.program_target.mih"
#include "make.timestamp.mih"
#include "make.track_flags.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__report_any_absolute_targets__189__1_1_p_0(
  MR_String LambdaHeadVar__1_15);

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__118__1_1_p_0(
  MR_String LambdaHeadVar__1_54);

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
make__top_level__classify_extstr_target_4_p_0(
  MR_Word Globals_5,
  MR_String ModuleNameStr0_6,
  MR_String ExtStr_7,
  MR_Word * TopTargetFile_8);

static MR_Word MR_CALL 
make__top_level__report_target_with_dir_component_2_f_0(
  MR_String ProgName_4,
  MR_String Target_5);

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box make__top_level_scalar_common_1[9][2];

static /* final */ const MR_Box make__top_level_scalar_common_2[44][1];

static /* final */ const MR_Box make__top_level_scalar_common_3[1][4];

static /* final */ const MR_Box make__top_level_scalar_common_4[10][3];

static /* final */ const MR_Box make__top_level_scalar_common_5[3][5];

static /* final */ const MR_Box make__top_level_scalar_common_6[2][6];




static /* final */ const MR_Box make__top_level_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "*** Error: no target or MAIN_TARGET specified."))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[0])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a make target may not contain a directory component,"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &make__top_level_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[0])))
  },
};

static /* final */ const MR_Box make__top_level_scalar_common_2[44][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[4]))) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 24U)) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   9 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row  10 */
  { ((MR_Box) ((MR_Unsigned) 20U)) },
  /* row  11 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row  12 */
  { ((MR_Box) ((MR_Unsigned) 28U)) },
  /* row  13 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[12]))) },
  /* row  14 */
  { ((MR_Box) ((MR_Unsigned) 48U)) },
  /* row  15 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[14]))) },
  /* row  16 */
  { ((MR_Box) ((MR_Unsigned) 36U)) },
  /* row  17 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[16]))) },
  /* row  18 */
  { ((MR_Box) ((MR_Unsigned) 40U)) },
  /* row  19 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[18]))) },
  /* row  20 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row  21 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[20]))) },
  /* row  22 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row  23 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[22]))) },
  /* row  24 */
  { ((MR_Box) ((MR_Unsigned) 20U)) },
  /* row  25 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[24]))) },
  /* row  26 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row  27 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[26]))) },
  /* row  28 */
  { ((MR_Box) ((MR_Unsigned) 44U)) },
  /* row  29 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[28]))) },
  /* row  30 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  31 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[30]))) },
  /* row  32 */
  { ((MR_Box) ((MR_Unsigned) 24U)) },
  /* row  33 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[32]))) },
  /* row  34 */
  { ((MR_Box) ((MR_Unsigned) 32U)) },
  /* row  35 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[34]))) },
  /* row  36 */
  { ((MR_Box) ((MR_Unsigned) 52U)) },
  /* row  37 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[36]))) },
  /* row  38 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[2]))) },
  /* row  39 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[3]))) },
  /* row  40 */
  { ((MR_Box) (MR_mkword(2, &make__top_level_scalar_common_2[3]))) },
  /* row  41 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[40]))) },
  /* row  42 */
  { ((MR_Box) (MR_mkword(2, &make__top_level_scalar_common_2[2]))) },
  /* row  43 */
  { ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_2[42]))) },
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
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[2])),
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[1])),
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&make__top_level_scalar_common_5[2])),
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&make__top_level_scalar_common_3[0])),
    ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_12)),
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_module_index_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0)),
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
make__top_level__IntroducedFrom__pred__report_any_absolute_targets__189__1_1_p_0(
  MR_String LambdaHeadVar__1_15)
{
  MR_bool succeeded;
  MR_Char Var_16;

  Var_16 = mercury__dir__directory_separator_0_f_0();
  succeeded = mercury__string__contains_char_2_p_0(LambdaHeadVar__1_15, Var_16);
  return succeeded;
}

static MR_bool MR_CALL 
make__top_level__IntroducedFrom__pred__make_process_compiler_args__118__1_1_p_0(
  MR_String LambdaHeadVar__1_54)
{
  MR_bool succeeded;
  MR_String Var_56;

  succeeded = mercury__string__suffix_2_p_0(LambdaHeadVar__1_54, (MR_String) ".depend");
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_56 = (MR_String) ".depend_ints";
    succeeded = mercury__string__suffix_2_p_0(LambdaHeadVar__1_54, Var_56);
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
  MR_String ExtStr_10;

  mercury__string__length_2_p_0(TargetName_5, &NameLength_7);
  succeeded = make__top_level__search_backwards_for_dot_3_p_0(TargetName_5, NameLength_7, &DotLocn_8);
  if (succeeded)
  {
    mercury__string__split_4_p_0(TargetName_5, DotLocn_8, &ModuleNameStr0_9, &ExtStr_10);
    succeeded = make__top_level__classify_extstr_target_4_p_0(Globals_4, ModuleNameStr0_9, ExtStr_10, &TopTargetFilePrime_11);
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
make__top_level__classify_extstr_target_4_p_0(
  MR_Word Globals_5,
  MR_String ModuleNameStr0_6,
  MR_String ExtStr_7,
  MR_Word * TopTargetFile_8)
{
  MR_bool succeeded;
  MR_Word TopTargetFilePrime_9;
  MR_Word TargetType_11;
  MR_Word ModuleName_13;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(ExtStr_7, 0)) {
      case (MR_Integer) 46:
        switch (MR_nth_code_unit(ExtStr_7, 1)) {
          case (MR_Integer) 97:
            switch (MR_nth_code_unit(ExtStr_7, 2)) {
              case (MR_Integer) 108:
                if (MR_offset_strn_eq(3, 2, ExtStr_7, (MR_String) ".all_"))
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
                      if (MR_offset_strn_eq(6, 2, ExtStr_7, (MR_String) ".all_int"))
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
                      switch (MR_nth_code_unit(ExtStr_7, 6)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(7, ExtStr_7, (MR_String) ".all_targets"))
                            case_num_0 = (MR_Integer) 13;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(7, ExtStr_7, (MR_String) ".all_track_flagss"))
                            case_num_0 = (MR_Integer) 14;
                          break;
                      }
                      break;
                    case (MR_Integer) 120:
                      if (MR_offset_streq(6, ExtStr_7, (MR_String) ".all_xmls"))
                        case_num_0 = (MR_Integer) 15;
                      break;
                  }
                break;
              case (MR_Integer) 110:
                if (MR_offset_strn_eq(3, 4, ExtStr_7, (MR_String) ".analys"))
                  switch (MR_nth_code_unit(ExtStr_7, 7)) {
                    case (MR_Integer) 101:
                      if (MR_offset_streq(8, ExtStr_7, (MR_String) ".analyse"))
                        case_num_0 = (MR_Integer) 16;
                      break;
                    case (MR_Integer) 105:
                      switch (MR_nth_code_unit(ExtStr_7, 8)) {
                        case (MR_Integer) 115:
                          switch (MR_nth_code_unit(ExtStr_7, 9)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 17;
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
            }
            break;
          case (MR_Integer) 99:
            switch (MR_nth_code_unit(ExtStr_7, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 104:
                if (MR_offset_streq(3, ExtStr_7, (MR_String) ".check"))
                  case_num_0 = (MR_Integer) 35;
                break;
              case (MR_Integer) 108:
                switch (MR_nth_code_unit(ExtStr_7, 3)) {
                  case (MR_Integer) 97:
                    if (MR_offset_strn_eq(4, 2, ExtStr_7, (MR_String) ".class"))
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
                      case_num_0 = (MR_Integer) 36;
                    break;
                }
                break;
              case (MR_Integer) 115:
                switch (MR_nth_code_unit(ExtStr_7, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 20;
                    break;
                  case (MR_Integer) 104:
                    if (MR_offset_strn_eq(4, 3, ExtStr_7, (MR_String) ".csharp"))
                      switch (MR_nth_code_unit(ExtStr_7, 7)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 21;
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
              case_num_0 = (MR_Integer) 37;
            break;
          case (MR_Integer) 101:
            if (MR_offset_strn_eq(2, 2, ExtStr_7, (MR_String) ".err"))
              switch (MR_nth_code_unit(ExtStr_7, 4)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 22;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(5, ExtStr_7, (MR_String) ".errs"))
                    case_num_0 = (MR_Integer) 5;
                  break;
              }
            break;
          case (MR_Integer) 105:
            if (MR_offset_strn_eq(2, 2, ExtStr_7, (MR_String) ".int"))
              switch (MR_nth_code_unit(ExtStr_7, 4)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 23;
                  break;
                case (MR_Integer) 48:
                  switch (MR_nth_code_unit(ExtStr_7, 5)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 24;
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
                      case_num_0 = (MR_Integer) 25;
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
                      case_num_0 = (MR_Integer) 26;
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
            if (MR_offset_strn_eq(2, 3, ExtStr_7, (MR_String) ".java"))
              switch (MR_nth_code_unit(ExtStr_7, 5)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 27;
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
                case_num_0 = (MR_Integer) 28;
                break;
              case (MR_Integer) 104:
                if (MR_offset_streq(3, ExtStr_7, (MR_String) ".mh"))
                  case_num_0 = (MR_Integer) 29;
                break;
              case (MR_Integer) 105:
                if (MR_offset_streq(3, ExtStr_7, (MR_String) ".mih"))
                  case_num_0 = (MR_Integer) 30;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(3, ExtStr_7, (MR_String) ".ms"))
                  case_num_0 = (MR_Integer) 11;
                break;
            }
            break;
          case (MR_Integer) 111:
            if (MR_offset_strn_eq(2, 2, ExtStr_7, (MR_String) ".opt"))
              switch (MR_nth_code_unit(ExtStr_7, 4)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 31;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(5, ExtStr_7, (MR_String) ".opts"))
                    case_num_0 = (MR_Integer) 12;
                  break;
              }
            break;
          case (MR_Integer) 114:
            if (MR_offset_streq(2, ExtStr_7, (MR_String) ".realclean"))
              case_num_0 = (MR_Integer) 38;
            break;
          case (MR_Integer) 116:
            switch (MR_nth_code_unit(ExtStr_7, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_strn_eq(3, 4, ExtStr_7, (MR_String) ".target"))
                  switch (MR_nth_code_unit(ExtStr_7, 7)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 32;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(8, ExtStr_7, (MR_String) ".targets"))
                        case_num_0 = (MR_Integer) 13;
                      break;
                  }
                break;
              case (MR_Integer) 114:
                if (MR_offset_strn_eq(3, 9, ExtStr_7, (MR_String) ".track_flags"))
                  switch (MR_nth_code_unit(ExtStr_7, 12)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 33;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(13, ExtStr_7, (MR_String) ".track_flagss"))
                        case_num_0 = (MR_Integer) 14;
                      break;
                  }
                break;
            }
            break;
          case (MR_Integer) 120:
            if (MR_offset_strn_eq(2, 2, ExtStr_7, (MR_String) ".xml"))
              switch (MR_nth_code_unit(ExtStr_7, 4)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 34;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(5, ExtStr_7, (MR_String) ".xmls"))
                    case_num_0 = (MR_Integer) 15;
                  break;
              }
            break;
        }
        break;
    }
    switch (case_num_0) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case ".all_analysiss", ".analysiss"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[13]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          // case ".all_classs", ".classs"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[15]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          // case ".all_cs"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[17]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          // case ".all_csharps", ".csharps"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[19]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 4:
        {
          // case ".all_css", ".css"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[19]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 5:
        {
          // case ".all_errs", ".errs"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[5]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 6:
        {
          // case ".all_int0s", ".int0s"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[21]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 7:
        {
          // case ".all_int2s", ".int2s"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[23]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 8:
        {
          // case ".all_int3s", ".int3s"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[25]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 9:
        {
          // case ".all_ints", ".ints"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[27]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 10:
        {
          // case ".all_javas", ".javas"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[29]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 11:
        {
          // case ".all_ms", ".ms"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[31]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 12:
        {
          // case ".all_opts", ".opts"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[33]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 13:
        {
          // case ".all_targets", ".targets"
          ;
          {
            MR_Word Var_47;
            MR_Word ModuleTarget_48;
            MR_Word Target_70;

            libs__globals__get_target_2_p_0(Globals_5, &Target_70);
            switch (Target_70) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ModuleTarget_48 = (MR_Word) ((MR_Unsigned) 36U);
                break;
              case (MR_Integer) 1:
                ModuleTarget_48 = (MR_Word) ((MR_Unsigned) 40U);
                break;
              case (MR_Integer) 2:
                ModuleTarget_48 = (MR_Word) ((MR_Unsigned) 44U);
                break;
            }
            {
              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_47, 0) = ((MR_Box) (ModuleTarget_48));
            }
            {
              TargetType_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, TargetType_11, 0) = ((MR_Box) (Var_47));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 14:
        {
          // case ".all_track_flagss", ".track_flagss"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[35]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 15:
        {
          // case ".all_xmls", ".xmls"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[37]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 16:
        {
          // case ".analyse"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[1]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 17:
        {
          // case ".analysis"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[12]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 18:
        {
          // case ".c"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[16]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 19:
        {
          // case ".class"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[14]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 20:
        {
          // case ".cs"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[18]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 21:
        {
          // case ".csharp"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[18]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 22:
        {
          // case ".err"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[4]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 23:
        {
          // case ".int"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[26]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 24:
        {
          // case ".int0"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[20]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 25:
        {
          // case ".int2"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[22]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 26:
        {
          // case ".int3"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[24]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 27:
        {
          // case ".java"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[28]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 28:
        {
          // case ".m"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[30]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 29:
        {
          // case ".mh"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[38]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 30:
        {
          // case ".mih"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[39]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 31:
        {
          // case ".opt"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[32]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 32:
        {
          // case ".target"
          ;
          {
            MR_Word ModuleTarget_67;
            MR_Word Target_71;

            libs__globals__get_target_2_p_0(Globals_5, &Target_71);
            switch (Target_71) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ModuleTarget_67 = (MR_Word) ((MR_Unsigned) 36U);
                break;
              case (MR_Integer) 1:
                ModuleTarget_67 = (MR_Word) ((MR_Unsigned) 40U);
                break;
              case (MR_Integer) 2:
                ModuleTarget_67 = (MR_Word) ((MR_Unsigned) 44U);
                break;
            }
            {
              TargetType_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TargetType_11, 0) = ((MR_Box) (ModuleTarget_67));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 33:
        {
          // case ".track_flags"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[34]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 34:
        {
          // case ".xml"
          ;
          TargetType_11 = (MR_Word) (&make__top_level_scalar_common_2[36]);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 35:
        {
          // case ".check"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[5]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 36:
        {
          // case ".clean"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 37:
        {
          // case ".doc"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[7]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 38:
        {
          // case ".realclean"
          ;
          TargetType_11 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[8]));
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  if (succeeded)
  {
    parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleNameStr0_6, &ModuleName_13);
    {
      TopTargetFilePrime_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TopTargetFilePrime_9, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(0, TopTargetFilePrime_9, 1) = ((MR_Box) (TargetType_11));
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *TopTargetFile_8 = TopTargetFilePrime_9;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word LinkedtargetExtMap_72;
    MR_Word LinkedTargetExtInfo_73;
    MR_Word LinkedTargetKind_75;
    MR_String ModuleNameStr_77;
    MR_Word TargetType_78;
    MR_Word ModuleName_79;
    MR_Box conv0_LinkedTargetExtInfo_73;

    libs__globals__get_linked_target_ext_map_2_p_0(Globals_5, &LinkedtargetExtMap_72);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), LinkedtargetExtMap_72, ((MR_Box) (ExtStr_7)), &conv0_LinkedTargetExtInfo_73);
    if (succeeded)
    {
      LinkedTargetExtInfo_73 = ((MR_Word) (conv0_LinkedTargetExtInfo_73));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      LinkedTargetKind_75 = ((MR_Unsigned) ((MR_hl_field(0, LinkedTargetExtInfo_73, 1))) & (MR_Integer) 15);
      switch (LinkedTargetKind_75) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            ModuleNameStr_77 = ModuleNameStr0_6;
            TargetType_78 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[41]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            ModuleNameStr_77 = ModuleNameStr0_6;
            TargetType_78 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[43]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_85;
            MR_Word CompilationTarget_100;

            ModuleNameStr_77 = ModuleNameStr0_6;
            libs__globals__get_target_2_p_0(Globals_5, &CompilationTarget_100);
            switch (CompilationTarget_100) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Var_85 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                Var_85 = (MR_Integer) 3;
                break;
              case (MR_Integer) 2:
                Var_85 = (MR_Integer) 5;
                break;
            }
            {
              TargetType_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TargetType_78, 0) = (MR_Box) ((MR_Unsigned) (Var_85));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            TargetType_78 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[9]));
            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "lib", ModuleNameStr0_6, &ModuleNameStr_77);
          }
          break;
        case (MR_Integer) 8:
          {
            TargetType_78 = (MR_Word) (MR_mkword(2, &make__top_level_scalar_common_2[10]));
            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "lib", ModuleNameStr0_6, &ModuleNameStr_77);
          }
          break;
        case (MR_Integer) 6:
          {
            TargetType_78 = (MR_Word) (MR_mkword(1, &make__top_level_scalar_common_2[11]));
            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "lib", ModuleNameStr0_6, &ModuleNameStr_77);
          }
          break;
        case (MR_Integer) 5:
          {
            TargetType_78 = (MR_Word) (MR_mkword(1, &make__top_level_scalar_common_2[3]));
            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "lib", ModuleNameStr0_6, &ModuleNameStr_77);
          }
          break;
        case (MR_Integer) 0:
          {
            ModuleNameStr_77 = ModuleNameStr0_6;
            TargetType_78 = (MR_Word) (&make__top_level_scalar_common_2[40]);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            ModuleNameStr_77 = ModuleNameStr0_6;
            TargetType_78 = (MR_Word) (&make__top_level_scalar_common_2[42]);
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        parse_tree__file_names__file_name_to_module_name_2_p_0(ModuleNameStr_77, &ModuleName_79);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *TopTargetFile_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_79));
          MR_hl_field(0, base, 1) = ((MR_Box) (TargetType_78));
        }
        succeeded = MR_TRUE;
      }
    }
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
    Spec_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_6, 0) = ((MR_Box) ((MR_String) "function \140make.top_level.report_target_with_dir_component\'/2"));
    MR_hl_field(1, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Spec_6, 3) = ((MR_Box) (Pieces_7));
  }
  return Spec_6;
}

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_Spec_6;

  conv9_Spec_6 = make__top_level__report_target_with_dir_component_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_Spec_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_TopTargetFile_6;

  make__top_level__classify_target_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv8_TopTargetFile_6);
  *wrapper_arg_2 = ((MR_Box) (conv8_TopTargetFile_6));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__118__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv7_HeadVar__2_2;

  make__hash__target_id_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv6_HeadVar__2_2;

  make__hash__target_id_module_index_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_9(
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
make__top_level__make_process_compiler_args_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__report_any_absolute_targets__189__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_Spec_6;

  conv4_Spec_6 = make__top_level__report_target_with_dir_component_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Spec_6));
  return wrapper_arg_2;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_TopTargetFile_6;

  make__top_level__classify_target_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv3_TopTargetFile_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_TopTargetFile_6));
}

static MR_bool MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__make_process_compiler_args__118__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__2_2;

  make__hash__target_id_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_2;

  make__hash__target_id_module_index_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0_2(
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
make__top_level__make_process_compiler_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__top_level__IntroducedFrom__pred__report_any_absolute_targets__189__1_1_p_0(((MR_String) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
make__top_level__make_process_compiler_args_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Globals_7,
  MR_Word ArgPack_8)
{
  MR_bool succeeded;
  MR_Word EnvOptFileVariables_10 = ((MR_Word) ((MR_hl_field(0, ArgPack_8, 0))));
  MR_Word EnvVarArgs_11 = ((MR_Word) ((MR_hl_field(0, ArgPack_8, 1))));
  MR_Word OptionArgs_12 = ((MR_Word) ((MR_hl_field(0, ArgPack_8, 2))));
  MR_Word NonOptionArgs_13 = ((MR_Word) ((MR_hl_field(0, ArgPack_8, 3))));
  MR_String ProgName_14;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_14);
  if ((NonOptionArgs_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeMainTargets_80;

    make__options_file__lookup_main_target_2_p_0(EnvOptFileVariables_10, &MaybeMainTargets_80);
    if (((MR_tag((MR_Word) MaybeMainTargets_80)) == (MR_Integer) 0))
    {
      MR_Word Specs_17 = ((MR_Word) ((MR_hl_field(0, MaybeMainTargets_80, 0))));
      MR_Word StdErr_18;

      mercury__io__stderr_stream_3_p_0(&StdErr_18);
      parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_18, Globals_7, Specs_17);
    }
    else
    {
      MR_Word MainTargets_81 = ((MR_Word) ((MR_hl_field(1, MaybeMainTargets_80, 0))));

      if ((MainTargets_81 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_84;
        MR_Word Spec_85;
        MR_Word Var_87;
        MR_Word Specs_246;
        MR_Word StdErr_247;

        {
          Var_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_87, 0) = ((MR_Box) (ProgName_14));
        }
        {
          Pieces_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_84, 0) = ((MR_Box) (Var_87));
          MR_hl_field(1, Pieces_84, 1) = ((MR_Box) (MR_mkword(1, &make__top_level_scalar_common_1[4])));
        }
        {
          Spec_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_85, 0) = ((MR_Box) ((MR_String) "predicate \140make.top_level.get_main_target_if_needed\'/4"));
          MR_hl_field(1, Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_85, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_85, 3) = ((MR_Box) (Pieces_84));
        }
        {
          Specs_246 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_246, 0) = ((MR_Box) (Spec_85));
          MR_hl_field(1, Specs_246, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__io__stderr_stream_3_p_0(&StdErr_247);
        parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_247, Globals_7, Specs_246);
      }
      else
      {
        MR_Word AbsTargets_96;

        mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[0]), MainTargets_81, &AbsTargets_96);
        if ((AbsTargets_96 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Targets_19 = ((MR_Word) ((MR_hl_field(1, MaybeMainTargets_80, 0))));
          MR_Word KeepGoingBool_20;
          MR_Word KeepGoing_21;
          MR_Integer AnalysisRepeat_22;
          MR_Word ForwardMI_24;
          MR_Box ReverseMI_25;
          MR_Word ModuleIndexMap_26;
          MR_Word ForwardDI_28;
          MR_Box ReverseDI_29;
          MR_Word TargetIndexMap_30;
          MR_Word TargetStatusMap_31;
          MR_Word NonDependTargets_33;
          MR_Word ClassifiedTargets_34;
          MR_Word ClassifiedTargetSet_35;
          MR_Word MaybeStdLibGrades_36;
          MR_Word Params_37;
          MR_Word TimestampMap_38;
          MR_Word MakeInfo0_39;
          MR_Word Succeeded_40;
          MR_Word Var_57;
          MR_Word _MakeInfo_41;

          libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 463, &KeepGoingBool_20);
          switch (KeepGoingBool_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              KeepGoing_21 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              KeepGoing_21 = (MR_Integer) 1;
              break;
          }
          libs__globals__lookup_int_option_3_p_0(Globals_7, (MR_Integer) 435, &AnalysisRepeat_22);
          ForwardMI_24 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__top_level_scalar_common_4[1]));
          ReverseMI_25 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
          {
            ModuleIndexMap_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ModuleIndexMap_26, 0) = ((MR_Box) (ForwardMI_24));
            MR_hl_field(0, ModuleIndexMap_26, 1) = ((MR_Box) (ReverseMI_25));
            MR_hl_field(0, ModuleIndexMap_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ForwardDI_28 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_module_index_0), (MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0), (MR_Word) (&make__top_level_scalar_common_4[2]));
          ReverseDI_29 = mercury__version_array__empty_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_module_index_0));
          {
            TargetIndexMap_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TargetIndexMap_30, 0) = ((MR_Box) (ForwardDI_28));
            MR_hl_field(0, TargetIndexMap_30, 1) = ((MR_Box) (ReverseDI_29));
            MR_hl_field(0, TargetIndexMap_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          TargetStatusMap_31 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), (MR_Word) (&make__top_level_scalar_common_4[3]));
          mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[4]), Targets_19, &NonDependTargets_33);
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_57, 0) = ((MR_Box) (&make__top_level_scalar_common_6[0]));
            MR_hl_field(0, Var_57, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_6));
            MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_57, 3) = ((MR_Box) (Globals_7));
          }
          mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), Var_57, NonDependTargets_33, &ClassifiedTargets_34);
          ClassifiedTargetSet_35 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ClassifiedTargets_34);
          libs__globals__get_maybe_stdlib_grades_2_p_0(Globals_7, &MaybeStdLibGrades_36);
          {
            Params_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Params_37, 0) = ((MR_Box) (EnvOptFileVariables_10));
            MR_hl_field(0, Params_37, 1) = ((MR_Box) (EnvVarArgs_11));
            MR_hl_field(0, Params_37, 2) = ((MR_Box) (OptionArgs_12));
          }
          TimestampMap_38 = make__timestamp__init_target_file_timestamp_map_0_f_0();
          MakeInfo0_39 = make__make_info__init_make_info_9_f_0(MaybeStdLibGrades_36, KeepGoing_21, Params_37, ClassifiedTargetSet_35, AnalysisRepeat_22, TimestampMap_38, ModuleIndexMap_26, TargetIndexMap_30, TargetStatusMap_31);
          make__top_level__make_top_targets_10_p_0(ProgressStream_6, Globals_7, KeepGoing_21, ClassifiedTargets_34, (MR_Integer) 1, &Succeeded_40, MakeInfo0_39, &_MakeInfo_41);
          parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_40);
        }
        else
        {
          MR_Word Var_98;
          MR_Word Specs_256;
          MR_Word StdErr_257;

          {
            Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_98, 0) = ((MR_Box) (&make__top_level_scalar_common_6[1]));
            MR_hl_field(0, Var_98, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_7));
            MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_98, 3) = ((MR_Box) (ProgName_14));
          }
          Specs_256 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_98, AbsTargets_96);
          mercury__io__stderr_stream_3_p_0(&StdErr_257);
          parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_257, Globals_7, Specs_256);
        }
      }
    }
  }
  else
  {
    MR_Word MaybeTargets0_107;
    MR_Word AbsTargets_110;

    {
      MaybeTargets0_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTargets0_107, 0) = ((MR_Box) (NonOptionArgs_13));
    }
    mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[5]), NonOptionArgs_13, &AbsTargets_110);
    if ((AbsTargets_110 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Targets_122 = ((MR_Word) ((MR_hl_field(1, MaybeTargets0_107, 0))));
      MR_Word KeepGoingBool_123;
      MR_Word KeepGoing_124;
      MR_Integer AnalysisRepeat_125;
      MR_Word ForwardMI_127;
      MR_Box ReverseMI_128;
      MR_Word ModuleIndexMap_129;
      MR_Word ForwardDI_131;
      MR_Box ReverseDI_132;
      MR_Word TargetIndexMap_133;
      MR_Word TargetStatusMap_134;
      MR_Word NonDependTargets_135;
      MR_Word ClassifiedTargets_136;
      MR_Word ClassifiedTargetSet_137;
      MR_Word MaybeStdLibGrades_138;
      MR_Word Params_139;
      MR_Word TimestampMap_140;
      MR_Word MakeInfo0_141;
      MR_Word Succeeded_142;
      MR_Word Var_150;
      MR_Word _MakeInfo_121;

      libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 463, &KeepGoingBool_123);
      switch (KeepGoingBool_123) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          KeepGoing_124 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          KeepGoing_124 = (MR_Integer) 1;
          break;
      }
      libs__globals__lookup_int_option_3_p_0(Globals_7, (MR_Integer) 435, &AnalysisRepeat_125);
      ForwardMI_127 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__top_level_scalar_common_4[6]));
      ReverseMI_128 = mercury__version_array__empty_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      {
        ModuleIndexMap_129 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ModuleIndexMap_129, 0) = ((MR_Box) (ForwardMI_127));
        MR_hl_field(0, ModuleIndexMap_129, 1) = ((MR_Box) (ReverseMI_128));
        MR_hl_field(0, ModuleIndexMap_129, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ForwardDI_131 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_module_index_0), (MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0), (MR_Word) (&make__top_level_scalar_common_4[7]));
      ReverseDI_132 = mercury__version_array__empty_0_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_module_index_0));
      {
        TargetIndexMap_133 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TargetIndexMap_133, 0) = ((MR_Box) (ForwardDI_131));
        MR_hl_field(0, TargetIndexMap_133, 1) = ((MR_Box) (ReverseDI_132));
        MR_hl_field(0, TargetIndexMap_133, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      TargetStatusMap_134 = mercury__version_hash_table__init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), (MR_Word) (&make__top_level_scalar_common_4[8]));
      mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__top_level_scalar_common_4[9]), Targets_122, &NonDependTargets_135);
      {
        Var_150 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_150, 0) = ((MR_Box) (&make__top_level_scalar_common_6[0]));
        MR_hl_field(0, Var_150, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_13));
        MR_hl_field(0, Var_150, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_150, 3) = ((MR_Box) (Globals_7));
      }
      mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), Var_150, NonDependTargets_135, &ClassifiedTargets_136);
      ClassifiedTargetSet_137 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_top_target_file_0), ClassifiedTargets_136);
      libs__globals__get_maybe_stdlib_grades_2_p_0(Globals_7, &MaybeStdLibGrades_138);
      {
        Params_139 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Params_139, 0) = ((MR_Box) (EnvOptFileVariables_10));
        MR_hl_field(0, Params_139, 1) = ((MR_Box) (EnvVarArgs_11));
        MR_hl_field(0, Params_139, 2) = ((MR_Box) (OptionArgs_12));
      }
      TimestampMap_140 = make__timestamp__init_target_file_timestamp_map_0_f_0();
      MakeInfo0_141 = make__make_info__init_make_info_9_f_0(MaybeStdLibGrades_138, KeepGoing_124, Params_139, ClassifiedTargetSet_137, AnalysisRepeat_125, TimestampMap_140, ModuleIndexMap_129, TargetIndexMap_133, TargetStatusMap_134);
      make__top_level__make_top_targets_10_p_0(ProgressStream_6, Globals_7, KeepGoing_124, ClassifiedTargets_136, (MR_Integer) 1, &Succeeded_142, MakeInfo0_141, &_MakeInfo_121);
      parse_tree__module_cmds__maybe_set_exit_status_3_p_0(Succeeded_142);
    }
    else
    {
      MR_Word Var_102;
      MR_Word Specs_117;
      MR_Word StdErr_118;

      {
        Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_102, 0) = ((MR_Box) (&make__top_level_scalar_common_6[1]));
        MR_hl_field(0, Var_102, 1) = ((MR_Box) (make__top_level__make_process_compiler_args_5_p_0_14));
        MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_102, 3) = ((MR_Box) (ProgName_14));
      }
      Specs_117 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_102, AbsTargets_110);
      mercury__io__stderr_stream_3_p_0(&StdErr_118);
      parse_tree__write_error_spec__write_error_specs_5_p_0(StdErr_118, Globals_7, Specs_117);
    }
  }
}

void MR_CALL 
make__top_level__make_top_targets_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Succeeded_0_5,
  MR_Word * STATE_VARIABLE_Succeeded_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_0_5;
    }
    else
    {
      MR_Word Target_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Targets_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word TargetSucceeded_31;
      MR_Word StopOrContinue_32;
      MR_Word STATE_VARIABLE_Info_1_39;
      MR_Word STATE_VARIABLE_Succeeded_1_41;
      MR_Word ModuleName_42 = ((MR_Word) ((MR_hl_field(0, Target_26, 0))));
      MR_Word TargetType_43 = ((MR_Word) ((MR_hl_field(0, Target_26, 1))));
      MR_Word TrackFlags_44;
      MR_Word ErrorStream_45;
      MR_Word TrackFlagsSucceeded_46;
      MR_Word STATE_VARIABLE_Info_1_55;

      libs__globals__lookup_bool_option_3_p_0(HeadVar__2_2, (MR_Integer) 467, &TrackFlags_44);
      libs__globals__get_error_output_stream_5_p_0(HeadVar__2_2, ModuleName_42, &ErrorStream_45);
      switch (TrackFlags_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            TrackFlagsSucceeded_46 = (MR_Integer) 1;
            STATE_VARIABLE_Info_1_55 = STATE_VARIABLE_Info_0_7;
          }
          break;
        case (MR_Integer) 1:
          make__track_flags__make_track_flags_files_9_p_0(ErrorStream_45, HeadVar__1_1, HeadVar__2_2, ModuleName_42, &TrackFlagsSucceeded_46, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_1_55);
          break;
      }
      switch (TrackFlagsSucceeded_46) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            TargetSucceeded_31 = (MR_Integer) 0;
            STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_1_55;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) TargetType_43)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleTargetType_47 = ((MR_Word) ((MR_hl_field(0, TargetType_43, 0))));
                MR_Word TargetFile_48;
                MR_Word Var_58;

                {
                  TargetFile_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TargetFile_48, 0) = ((MR_Box) (ModuleName_42));
                  MR_hl_field(0, TargetFile_48, 1) = ((MR_Box) (ModuleTargetType_47));
                }
                Var_58 = (MR_Word) ((MR_Word) (TargetFile_48));
                make__module_target__make_module_target_9_p_0((MR_Word) ((MR_Unsigned) 0U), HeadVar__1_1, HeadVar__2_2, Var_58, &TargetSucceeded_31, STATE_VARIABLE_Info_1_55, &STATE_VARIABLE_Info_1_39);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word LinkedTargetType_49 = ((MR_Unsigned) ((MR_hl_field(1, TargetType_43, 0))) & (MR_Integer) 7);
                MR_Word LinkedTargetFile_50;
                MR_Word Specs_51;

                {
                  LinkedTargetFile_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, LinkedTargetFile_50, 0) = ((MR_Box) (ModuleName_42));
                  MR_hl_field(0, LinkedTargetFile_50, 1) = (MR_Box) ((MR_Unsigned) (LinkedTargetType_49));
                }
                make__program_target__make_linked_target_10_p_0(HeadVar__1_1, HeadVar__2_2, LinkedTargetFile_50, &TargetSucceeded_31, STATE_VARIABLE_Info_1_55, &STATE_VARIABLE_Info_1_39, (MR_Word) ((MR_Unsigned) 0U), &Specs_51);
                parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_45, HeadVar__2_2, Specs_51);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word MiscTargetType_52 = ((MR_Word) ((MR_hl_field(2, TargetType_43, 0))));
                MR_Word Var_61;
                MR_Word Specs_64;

                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_61, 0) = ((MR_Box) (ModuleName_42));
                  MR_hl_field(0, Var_61, 1) = ((MR_Box) (MiscTargetType_52));
                }
                make__program_target__make_misc_target_10_p_0(HeadVar__1_1, HeadVar__2_2, Var_61, &TargetSucceeded_31, STATE_VARIABLE_Info_1_55, &STATE_VARIABLE_Info_1_39, (MR_Word) ((MR_Unsigned) 0U), &Specs_64);
                parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_45, HeadVar__2_2, Specs_64);
              }
              break;
          }
          break;
      }
      make__util__should_we_stop_or_continue_5_p_0(HeadVar__3_3, TargetSucceeded_31, &StopOrContinue_32, STATE_VARIABLE_Succeeded_0_5, &STATE_VARIABLE_Succeeded_1_41);
      switch (StopOrContinue_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__4_4 = Targets_27;
            MR_Word next_value_of_STATE_VARIABLE_Succeeded_0_5 = STATE_VARIABLE_Succeeded_1_41;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_1_39;

            // direct tailcall eliminated
            ;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_Succeeded_0_5 = next_value_of_STATE_VARIABLE_Succeeded_0_5;
            STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Succeeded_6 = STATE_VARIABLE_Succeeded_1_41;
            *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_1_39;
          }
          break;
      }
    }
    break;
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
