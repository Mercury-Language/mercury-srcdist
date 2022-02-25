/*
** Automatically generated from `source_file_map.m'
** by the Mercury compiler,
** version rotd-2022-02-25
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


// :- module parse_tree.source_file_map.
// :- implementation.

/*
INIT mercury__parse_tree__source_file_map__init
ENDINIT
*/

#include "parse_tree.source_file_map.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_2_7_p_0(
  MR_Word Globals_8,
  MR_Word MapStream_9,
  MR_String FileName_10,
  MR_Word SeenModules0_11,
  MR_Word * SeenModules_12);

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__source_file_map__parse_source_file_map_6_p_0(
  MR_Word Lines_7,
  MR_String ModulesFileName_8,
  MR_Integer CurLineNumber_9,
  MR_String * ErrorMsg_10,
  MR_Word STATE_VARIABLE_SourceFileMap_0_19,
  MR_Word * STATE_VARIABLE_SourceFileMap_20);


static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_3[1][10];




static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_3[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
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



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__bimap__pti_bimap_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_2_7_p_0(
  MR_Word Globals_8,
  MR_Word MapStream_9,
  MR_String FileName_10,
  MR_Word SeenModules0_11,
  MR_Word * SeenModules_12)
{
  MR_bool succeeded;
  MR_Word MaybeModuleName_14;

  parse_tree__find_module__find_module_name_5_p_0(Globals_8, FileName_10, &MaybeModuleName_14);
  if ((MaybeModuleName_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *SeenModules_12 = SeenModules0_11;
  else
  {
    MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleName_14, (MR_Integer) 0))));
    MR_String PartialFileName_19;
    MR_Word DefaultModuleName_20;
    MR_String Var_40;
    MR_String PrevFileName_16;
    MR_Box conv0_PrevFileName_16;
    MR_String PartialFileName0_18;
    MR_String Var_41;
    MR_String Var_54;

    succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SeenModules0_11, ((MR_Box) (ModuleName_15)), &conv0_PrevFileName_16);
    if (succeeded)
    {
      PrevFileName_16 = ((MR_String) (conv0_PrevFileName_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (strcmp(PrevFileName_16, FileName_10) == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word StdErr_17;
      MR_String Var_31;

      mercury__io__stderr_stream_3_p_0(&StdErr_17);
      Var_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_15);
      mercury__io__write_string_4_p_0(StdErr_17, (MR_String) "mercury_compile: module \140");
      mercury__io__write_string_4_p_0(StdErr_17, Var_31);
      mercury__io__write_string_4_p_0(StdErr_17, (MR_String) "\' defined in multiple files: ");
      mercury__io__write_string_4_p_0(StdErr_17, PrevFileName_16);
      mercury__io__write_string_4_p_0(StdErr_17, (MR_String) ", ");
      mercury__io__write_string_4_p_0(StdErr_17, FileName_10);
      mercury__io__write_string_4_p_0(StdErr_17, (MR_String) "\n.");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      *SeenModules_12 = SeenModules0_11;
    }
    else
      mercury__bimap__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_15)), ((MR_Box) (FileName_10)), SeenModules0_11, SeenModules_12);
    succeeded = mercury__string__remove_suffix_3_p_0(FileName_10, (MR_String) ".m", &PartialFileName0_18);
    if (succeeded)
      PartialFileName_19 = PartialFileName0_18;
    else
      PartialFileName_19 = FileName_10;
    Var_40 = mercury__dir__det_basename_1_f_0(PartialFileName_19);
    parse_tree__file_names__file_name_to_module_name_2_p_0(Var_40, &DefaultModuleName_20);
    Var_41 = mercury__dir__dirname_1_f_0(PartialFileName_19);
    Var_54 = mercury__dir__this_directory_0_f_0();
    succeeded = (strcmp(Var_41, Var_54) == 0);
    if (succeeded)
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_15, DefaultModuleName_20);
    if (!(succeeded))
    {
      MR_String Var_46;

      Var_46 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_15);
      mercury__io__write_string_4_p_0(MapStream_9, Var_46);
      mercury__io__write_string_4_p_0(MapStream_9, (MR_String) "\t");
      mercury__io__write_string_4_p_0(MapStream_9, FileName_10);
      mercury__io__write_string_4_p_0(MapStream_9, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_SeenModules_12;

  parse_tree__source_file_map__write_source_file_map_2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_SeenModules_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_SeenModules_12));
}

void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0(
  MR_Word Globals_5,
  MR_Word FileNames_6)
{
  MR_Word FileResult_9;

  mercury__io__open_output_4_p_0((MR_String) "Mercury.modules", &FileResult_9);
  if (((MR_tag((MR_Word) FileResult_9)) == (MR_Integer) 1))
  {
    MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileResult_9, (MR_Integer) 0))));
    MR_Word StdErr_13;
    MR_String Var_24;

    mercury__io__stderr_stream_3_p_0(&StdErr_13);
    Var_24 = mercury__io__error_message_1_f_0(Error_12);
    mercury__io__write_string_4_p_0(StdErr_13, (MR_String) "mercury_compile: error opening \140");
    mercury__io__write_string_4_p_0(StdErr_13, (MR_String) "Mercury.modules");
    mercury__io__write_string_4_p_0(StdErr_13, (MR_String) "\' for output: ");
    mercury__io__write_string_4_p_0(StdErr_13, Var_24);
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word FileStream_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileResult_9, (MR_Integer) 0))));
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_30_30;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__source_file_map_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__source_file_map__write_source_file_map_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Globals_5));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (FileStream_10));
    }
    Var_29 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__source_file_map_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, FileNames_6, ((MR_Box) (Var_29)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30_30);
    mercury__io__close_output_3_p_0(FileStream_10);
  }
}

MR_String MR_CALL 
parse_tree__source_file_map__default_source_file_name_1_f_0(
  MR_Word ModuleName_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_4, (MR_String) ".m");
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__source_file_map__have_source_file_map_3_p_0(
  MR_Word * HaveMap_4)
{
  MR_bool succeeded;
  MR_Word SourceFileMap_6;
  MR_Word MaybeSourceFileMap0_16;

  libs__globals__io_get_maybe_source_file_map_3_p_0(&MaybeSourceFileMap0_16);
  if ((MaybeSourceFileMap0_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReadResult_19;
    MR_Word Var_27;

    mercury__io__read_named_file_as_lines_4_p_0((MR_String) "Mercury.modules", &ReadResult_19);
    if (((MR_tag((MR_Word) ReadResult_19)) == (MR_Integer) 1))
      SourceFileMap_6 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    else
    {
      MR_Word FileLines_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReadResult_19, (MR_Integer) 0))));
      MR_String ErrorMsg_21;
      MR_Word SourceFileMap1_22;
      MR_Word SourceFileMap0_29;

      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap0_29);
      parse_tree__source_file_map__parse_source_file_map_6_p_0(FileLines_20, (MR_String) "Mercury.modules", (MR_Integer) 1, &ErrorMsg_21, SourceFileMap0_29, &SourceFileMap1_22);
      succeeded = (strcmp(ErrorMsg_21, (MR_String) "") == 0);
      if (succeeded)
        SourceFileMap_6 = SourceFileMap1_22;
      else
        mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap_6);
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (SourceFileMap_6));
    }
    libs__globals__io_set_maybe_source_file_map_3_p_0(Var_27);
  }
  else
    SourceFileMap_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSourceFileMap0_16, (MR_Integer) 0))));
  succeeded = mercury__bimap__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_6);
  if (succeeded)
    *HaveMap_4 = (MR_Integer) 0;
  else
    *HaveMap_4 = (MR_Integer) 1;
}

void MR_CALL 
parse_tree__source_file_map__lookup_source_file_module_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeModuleName_6)
{
  MR_bool succeeded;
  MR_Word SourceFileMap_8;
  MR_Word MaybeSourceFileMap0_23;
  MR_Word ModuleName_9;
  MR_Box conv0_ModuleName_9;

  libs__globals__io_get_maybe_source_file_map_3_p_0(&MaybeSourceFileMap0_23);
  if ((MaybeSourceFileMap0_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReadResult_26;
    MR_Word Var_34;

    mercury__io__read_named_file_as_lines_4_p_0((MR_String) "Mercury.modules", &ReadResult_26);
    if (((MR_tag((MR_Word) ReadResult_26)) == (MR_Integer) 1))
      SourceFileMap_8 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    else
    {
      MR_Word FileLines_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReadResult_26, (MR_Integer) 0))));
      MR_String ErrorMsg_28;
      MR_Word SourceFileMap1_29;
      MR_Word SourceFileMap0_36;

      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap0_36);
      parse_tree__source_file_map__parse_source_file_map_6_p_0(FileLines_27, (MR_String) "Mercury.modules", (MR_Integer) 1, &ErrorMsg_28, SourceFileMap0_36, &SourceFileMap1_29);
      succeeded = (strcmp(ErrorMsg_28, (MR_String) "") == 0);
      if (succeeded)
        SourceFileMap_8 = SourceFileMap1_29;
      else
        mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap_8);
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (SourceFileMap_8));
    }
    libs__globals__io_set_maybe_source_file_map_3_p_0(Var_34);
  }
  else
    SourceFileMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSourceFileMap0_23, (MR_Integer) 0))));
  succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, &conv0_ModuleName_9, ((MR_Box) (FileName_5)));
  if (succeeded)
  {
    ModuleName_9 = ((MR_Word) (conv0_ModuleName_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeModuleName_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_9));
    }
  else
  {
    MR_Word DefaultModuleName_10;
    MR_String FileNameBeforeDotM_45;

    succeeded = mercury__string__remove_suffix_3_p_0(FileName_5, (MR_String) ".m", &FileNameBeforeDotM_45);
    if (succeeded)
    {
      parse_tree__file_names__file_name_to_module_name_2_p_0(FileNameBeforeDotM_45, &DefaultModuleName_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv1_Var_11;

      succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, ((MR_Box) (DefaultModuleName_10)), &conv1_Var_11);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        *MaybeModuleName_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeModuleName_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DefaultModuleName_10));
        }
    }
    else
      *MaybeModuleName_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
parse_tree__source_file_map__lookup_module_source_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word * MaybeFileName_6)
{
  MR_bool succeeded;
  MR_Word SourceFileMap_8;
  MR_Word MaybeSourceFileMap0_23;
  MR_String FileName_9;
  MR_Box conv0_FileName_9;

  libs__globals__io_get_maybe_source_file_map_3_p_0(&MaybeSourceFileMap0_23);
  if ((MaybeSourceFileMap0_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReadResult_26;
    MR_Word Var_34;

    mercury__io__read_named_file_as_lines_4_p_0((MR_String) "Mercury.modules", &ReadResult_26);
    if (((MR_tag((MR_Word) ReadResult_26)) == (MR_Integer) 1))
      SourceFileMap_8 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    else
    {
      MR_Word FileLines_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReadResult_26, (MR_Integer) 0))));
      MR_String ErrorMsg_28;
      MR_Word SourceFileMap1_29;
      MR_Word SourceFileMap0_36;

      mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap0_36);
      parse_tree__source_file_map__parse_source_file_map_6_p_0(FileLines_27, (MR_String) "Mercury.modules", (MR_Integer) 1, &ErrorMsg_28, SourceFileMap0_36, &SourceFileMap1_29);
      succeeded = (strcmp(ErrorMsg_28, (MR_String) "") == 0);
      if (succeeded)
        SourceFileMap_8 = SourceFileMap1_29;
      else
        mercury__bimap__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &SourceFileMap_8);
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (SourceFileMap_8));
    }
    libs__globals__io_set_maybe_source_file_map_3_p_0(Var_34);
  }
  else
    SourceFileMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSourceFileMap0_23, (MR_Integer) 0))));
  succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, ((MR_Box) (ModuleName_5)), &conv0_FileName_9);
  if (succeeded)
  {
    FileName_9 = ((MR_String) (conv0_FileName_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFileName_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_9));
    }
  else
  {
    MR_String DefaultFileName_10;
    MR_String Var_44;
    MR_Box conv1_Var_11;

    Var_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_5);
    DefaultFileName_10 = mercury__string__f_43_43_2_f_0(Var_44, (MR_String) ".m");
    succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_8, &conv1_Var_11, ((MR_Box) (DefaultFileName_10)));
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      *MaybeFileName_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFileName_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DefaultFileName_10));
      }
  }
}

static void MR_CALL 
parse_tree__source_file_map__parse_source_file_map_6_p_0(
  MR_Word Lines_7,
  MR_String ModulesFileName_8,
  MR_Integer CurLineNumber_9,
  MR_String * ErrorMsg_10,
  MR_Word STATE_VARIABLE_SourceFileMap_0_19,
  MR_Word * STATE_VARIABLE_SourceFileMap_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Lines_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *ErrorMsg_10 = (MR_String) "";
      *STATE_VARIABLE_SourceFileMap_20 = STATE_VARIABLE_SourceFileMap_0_19;
    }
    else
    {
      MR_String HeadLine_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Lines_7, (MR_Integer) 0))));
      MR_Word TailLines_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lines_7, (MR_Integer) 1))));
      MR_Integer TabIndex_14;

      succeeded = mercury__string__sub_string_search_3_p_0(HeadLine_12, (MR_String) "\t", &TabIndex_14);
      if (succeeded)
      {
        MR_Integer LineLength_15;
        MR_String ModuleNameStr_16;
        MR_String FileName_17;
        MR_Word ModuleName_18;
        MR_Integer Var_23;
        MR_Word STATE_VARIABLE_SourceFileMap_25_25;
        MR_Integer Var_26;
        MR_Word next_value_of_Lines_7;
        MR_Integer next_value_of_CurLineNumber_9;
        MR_Word next_value_of_STATE_VARIABLE_SourceFileMap_0_19;

        mercury__string__length_2_p_0(HeadLine_12, &LineLength_15);
        mercury__string__unsafe_between_4_p_0(HeadLine_12, (MR_Integer) 0, TabIndex_14, &ModuleNameStr_16);
        Var_23 = (MR_Integer) ((MR_Unsigned) TabIndex_14 + (MR_Unsigned) 1);
        mercury__string__unsafe_between_4_p_0(HeadLine_12, Var_23, LineLength_15, &FileName_17);
        ModuleName_18 = mdbcomp__sym_name__string_to_sym_name_1_f_0(ModuleNameStr_16);
        mercury__bimap__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_18)), ((MR_Box) (FileName_17)), STATE_VARIABLE_SourceFileMap_0_19, &STATE_VARIABLE_SourceFileMap_25_25);
        Var_26 = (MR_Integer) ((MR_Unsigned) CurLineNumber_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_Lines_7 = TailLines_13;
        next_value_of_CurLineNumber_9 = Var_26;
        next_value_of_STATE_VARIABLE_SourceFileMap_0_19 = STATE_VARIABLE_SourceFileMap_25_25;
        Lines_7 = next_value_of_Lines_7;
        CurLineNumber_9 = next_value_of_CurLineNumber_9;
        STATE_VARIABLE_SourceFileMap_0_19 = next_value_of_STATE_VARIABLE_SourceFileMap_0_19;
        continue;
      }
      else
      {
        MR_String Var_38;
        MR_String Var_40;
        MR_String Var_41;
        MR_String Var_48;

        Var_38 = mercury__string__f_43_43_2_f_0(ModulesFileName_8, (MR_String) " is missing a tab character");
        Var_40 = mercury__string__f_43_43_2_f_0((MR_String) " of ", Var_38);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__source_file_map_scalar_common_2[0]), CurLineNumber_9, &Var_41);
        Var_48 = mercury__string__f_43_43_2_f_0(Var_41, Var_40);
        *ErrorMsg_10 = mercury__string__f_43_43_2_f_0((MR_String) "line ", Var_48);
        *STATE_VARIABLE_SourceFileMap_20 = STATE_VARIABLE_SourceFileMap_0_19;
      }
    }
    break;
  }
}

void mercury__parse_tree__source_file_map__init(void)
{
}

void mercury__parse_tree__source_file_map__init_type_tables(void)
{
}

void mercury__parse_tree__source_file_map__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__source_file_map__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.source_file_map.
