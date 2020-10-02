/*
** Automatically generated from `source_file_map.m'
** by the Mercury compiler,
** version rotd-2020-10-02
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
#include "getopt_io.mih"
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
parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word STATE_VARIABLE_Map_0_17,
  MR_Word * STATE_VARIABLE_Map_18);

static void MR_CALL 
parse_tree__source_file_map__read_until_char_5_p_0(
  MR_Char EndChar_6,
  MR_Word Chars0_7,
  MR_Word * Result_8);


static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[1][10];




static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[1][10] = {
  /* row 0 */
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
  {
    MR_bool succeeded;
    MR_Word MaybeModuleName_14;

    parse_tree__find_module__find_module_name_5_p_0(Globals_8, FileName_10, &MaybeModuleName_14);
    if ((MaybeModuleName_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *SeenModules_12 = SeenModules0_11;
    else
    {
      MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleName_14, (MR_Integer) 0))));
      MR_String PartialFileName_18;
      MR_Word DefaultModuleName_19;
      MR_String Var_40;
      MR_String PrevFileName_16;
      MR_Box conv0_PrevFileName_16;
      MR_String PartialFileName0_17;
      MR_String Var_41;
      MR_String Var_53;

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
        MR_String Var_31;

        Var_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_15);
        mercury__io__write_string_3_p_0((MR_String) "mercury_compile: module \140");
        mercury__io__write_string_3_p_0(Var_31);
        mercury__io__write_string_3_p_0((MR_String) "\' defined in multiple files: ");
        mercury__io__write_string_3_p_0(PrevFileName_16);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__io__write_string_3_p_0(FileName_10);
        mercury__io__write_string_3_p_0((MR_String) "\n.");
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        *SeenModules_12 = SeenModules0_11;
      }
      else
        mercury__bimap__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_15)), ((MR_Box) (FileName_10)), SeenModules0_11, SeenModules_12);
      succeeded = mercury__string__remove_suffix_3_p_0(FileName_10, (MR_String) ".m", &PartialFileName0_17);
      if (succeeded)
        PartialFileName_18 = PartialFileName0_17;
      else
        PartialFileName_18 = FileName_10;
      Var_40 = mercury__dir__det_basename_1_f_0(PartialFileName_18);
      parse_tree__file_names__file_name_to_module_name_2_p_0(Var_40, &DefaultModuleName_19);
      Var_41 = mercury__dir__dirname_1_f_0(PartialFileName_18);
      Var_53 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(Var_41, Var_53) == 0);
      if (succeeded)
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_15, DefaultModuleName_19);
      if (!(succeeded))
      {
        MR_Word OldStream_20;
        MR_Word Var_21;

        mercury__io__set_output_stream_4_p_0(MapStream_9, &OldStream_20);
        parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_15);
        mercury__io__write_string_3_p_0((MR_String) "\t");
        mercury__io__write_string_3_p_0(FileName_10);
        mercury__io__nl_2_p_0();
        mercury__io__set_output_stream_4_p_0(OldStream_20, &Var_21);
      }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_SeenModules_12;

    parse_tree__source_file_map__write_source_file_map_2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_SeenModules_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_SeenModules_12));
  }
}

void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0(
  MR_Word Globals_5,
  MR_Word FileNames_6)
{
  {
    MR_Word OpenRes_9;

    mercury__io__open_output_4_p_0((MR_String) "Mercury.modules", &OpenRes_9);
    if (((MR_tag((MR_Word) OpenRes_9)) == (MR_Integer) 1))
    {
      MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenRes_9, (MR_Integer) 0))));
      MR_String Var_22;

      Var_22 = mercury__io__error_message_1_f_0(Error_12);
      mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error opening \140");
      mercury__io__write_string_3_p_0((MR_String) "Mercury.modules");
      mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
      mercury__io__write_string_3_p_0(Var_22);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word Stream_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenRes_9, (MR_Integer) 0))));
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Box conv2_Var_11;
      MR_Box conv1_STATE_VARIABLE_IO_28_28;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__source_file_map_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__source_file_map__write_source_file_map_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Globals_5));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (Stream_10));
      }
      Var_27 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__source_file_map_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, FileNames_6, ((MR_Box) (Var_27)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
      mercury__io__close_output_3_p_0(Stream_10);
    }
  }
}

MR_String MR_CALL 
parse_tree__source_file_map__default_source_file_name_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_String HeadVar__2_2;
    MR_String Var_4;

    Var_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_4, (MR_String) ".m");
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__source_file_map__have_source_file_map_3_p_0(
  MR_Word * HaveMap_4)
{
  {
    MR_bool succeeded;
    MR_Word SourceFileMap_6;
    MR_Word MaybeSourceFileMap0_16;

    libs__globals__io_get_maybe_source_file_map_3_p_0(&MaybeSourceFileMap0_16);
    if ((MaybeSourceFileMap0_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpenRes_18;
      MR_Word Var_32;

      mercury__io__open_input_4_p_0((MR_String) "Mercury.modules", &OpenRes_18);
      if (((MR_tag((MR_Word) OpenRes_18)) == (MR_Integer) 1))
        SourceFileMap_6 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      else
      {
        MR_Word Stream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenRes_18, (MR_Integer) 0))));
        MR_Word OldStream_20;
        MR_Word Var_28;
        MR_Word Var_21;

        mercury__io__set_input_stream_4_p_0(Stream_19, &OldStream_20);
        Var_28 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(Var_28, &SourceFileMap_6);
        mercury__io__set_input_stream_4_p_0(OldStream_20, &Var_21);
        mercury__io__close_input_3_p_0(Stream_19);
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (SourceFileMap_6));
      }
      libs__globals__io_set_maybe_source_file_map_3_p_0(Var_32);
    }
    else
      SourceFileMap_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSourceFileMap0_16, (MR_Integer) 0))));
    succeeded = mercury__bimap__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFileMap_6);
    if (succeeded)
      *HaveMap_4 = (MR_Integer) 0;
    else
      *HaveMap_4 = (MR_Integer) 1;
  }
}

void MR_CALL 
parse_tree__source_file_map__lookup_source_file_module_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeModuleName_6)
{
  {
    MR_bool succeeded;
    MR_Word SourceFileMap_8;
    MR_Word MaybeSourceFileMap0_23;
    MR_Word ModuleName_9;
    MR_Box conv0_ModuleName_9;

    libs__globals__io_get_maybe_source_file_map_3_p_0(&MaybeSourceFileMap0_23);
    if ((MaybeSourceFileMap0_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpenRes_25;
      MR_Word Var_39;

      mercury__io__open_input_4_p_0((MR_String) "Mercury.modules", &OpenRes_25);
      if (((MR_tag((MR_Word) OpenRes_25)) == (MR_Integer) 1))
        SourceFileMap_8 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      else
      {
        MR_Word Stream_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenRes_25, (MR_Integer) 0))));
        MR_Word OldStream_27;
        MR_Word Var_35;
        MR_Word Var_28;

        mercury__io__set_input_stream_4_p_0(Stream_26, &OldStream_27);
        Var_35 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(Var_35, &SourceFileMap_8);
        mercury__io__set_input_stream_4_p_0(OldStream_27, &Var_28);
        mercury__io__close_input_3_p_0(Stream_26);
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (SourceFileMap_8));
      }
      libs__globals__io_set_maybe_source_file_map_3_p_0(Var_39);
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
      MR_String FileNameBeforeDotM_47;

      succeeded = mercury__string__remove_suffix_3_p_0(FileName_5, (MR_String) ".m", &FileNameBeforeDotM_47);
      if (succeeded)
      {
        parse_tree__file_names__file_name_to_module_name_2_p_0(FileNameBeforeDotM_47, &DefaultModuleName_10);
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
}

void MR_CALL 
parse_tree__source_file_map__lookup_module_source_file_4_p_0(
  MR_Word ModuleName_5,
  MR_Word * MaybeFileName_6)
{
  {
    MR_bool succeeded;
    MR_Word SourceFileMap_8;
    MR_Word MaybeSourceFileMap0_23;
    MR_String FileName_9;
    MR_Box conv0_FileName_9;

    libs__globals__io_get_maybe_source_file_map_3_p_0(&MaybeSourceFileMap0_23);
    if ((MaybeSourceFileMap0_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpenRes_25;
      MR_Word Var_39;

      mercury__io__open_input_4_p_0((MR_String) "Mercury.modules", &OpenRes_25);
      if (((MR_tag((MR_Word) OpenRes_25)) == (MR_Integer) 1))
        SourceFileMap_8 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      else
      {
        MR_Word Stream_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenRes_25, (MR_Integer) 0))));
        MR_Word OldStream_27;
        MR_Word Var_35;
        MR_Word Var_28;

        mercury__io__set_input_stream_4_p_0(Stream_26, &OldStream_27);
        Var_35 = mercury__bimap__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(Var_35, &SourceFileMap_8);
        mercury__io__set_input_stream_4_p_0(OldStream_27, &Var_28);
        mercury__io__close_input_3_p_0(Stream_26);
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (SourceFileMap_8));
      }
      libs__globals__io_set_maybe_source_file_map_3_p_0(Var_39);
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
      MR_String Var_46;
      MR_Box conv1_Var_11;

      Var_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_5);
      DefaultFileName_10 = mercury__string__f_43_43_2_f_0(Var_46, (MR_String) ".m");
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
}

static void MR_CALL 
parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word STATE_VARIABLE_Map_0_17,
  MR_Word * STATE_VARIABLE_Map_18)
{
  while (MR_TRUE)
  {
    MR_Word ModuleCharsResult_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__source_file_map__read_until_char_5_p_0((MR_Char) 9, (MR_Word) ((MR_Unsigned) 0U), &ModuleCharsResult_9);
    switch (MR_tag((MR_Word) ModuleCharsResult_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Map_18 = STATE_VARIABLE_Map_0_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word RevModuleChars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModuleCharsResult_9, (MR_Integer) 0))));
          MR_String ModuleStr_11;
          MR_Word ModuleName_12;
          MR_Word FileNameCharsResult_13;

          mercury__string__from_rev_char_list_2_p_0(RevModuleChars_10, &ModuleStr_11);
          ModuleName_12 = mdbcomp__sym_name__string_to_sym_name_1_f_0(ModuleStr_11);
          parse_tree__source_file_map__read_until_char_5_p_0((MR_Char) 10, (MR_Word) ((MR_Unsigned) 0U), &FileNameCharsResult_13);
          switch (MR_tag((MR_Word) FileNameCharsResult_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_47;

                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: unexpected end ", (MR_String) "of file in Mercury.modules file.\n");
                mercury__io__write_string_3_p_0(Var_47);
                *STATE_VARIABLE_Map_18 = STATE_VARIABLE_Map_0_17;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word FileNameChars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNameCharsResult_13, (MR_Integer) 0))));
                MR_String FileName_15;
                MR_Word STATE_VARIABLE_Map_51_51;
                MR_Word next_value_of_STATE_VARIABLE_Map_0_17;

                mercury__string__from_rev_char_list_2_p_0(FileNameChars_14, &FileName_15);
                mercury__bimap__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_12)), ((MR_Box) (FileName_15)), STATE_VARIABLE_Map_0_17, &STATE_VARIABLE_Map_51_51);
                // direct tailcall eliminated
                ;
                next_value_of_STATE_VARIABLE_Map_0_17 = STATE_VARIABLE_Map_51_51;
                STATE_VARIABLE_Map_0_17 = next_value_of_STATE_VARIABLE_Map_0_17;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FileNameCharsResult_13, (MR_Integer) 0))));
                MR_String Var_38;
                MR_String Var_42;

                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: error in ", (MR_String) "Mercury.modules file: ");
                mercury__io__write_string_3_p_0(Var_38);
                Var_42 = mercury__io__error_message_1_f_0(Error_16);
                mercury__io__write_string_3_p_0(Var_42);
                mercury__io__nl_2_p_0();
                *STATE_VARIABLE_Map_18 = STATE_VARIABLE_Map_0_17;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_26;
          MR_String Var_30;
          MR_Word Error_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ModuleCharsResult_9, (MR_Integer) 0))));

          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_compile: error in ", (MR_String) "Mercury.modules file: ");
          mercury__io__write_string_3_p_0(Var_26);
          Var_30 = mercury__io__error_message_1_f_0(Error_54);
          mercury__io__write_string_3_p_0(Var_30);
          mercury__io__nl_2_p_0();
          *STATE_VARIABLE_Map_18 = STATE_VARIABLE_Map_0_17;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__source_file_map__read_until_char_5_p_0(
  MR_Char EndChar_6,
  MR_Word Chars0_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word CharRes_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_char_3_p_0(&CharRes_10);
    switch (MR_tag((MR_Word) CharRes_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((Chars0_7 == (MR_Word) ((MR_Unsigned) 0U)))
          *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Chars0_7));
          }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharRes_10, (MR_Integer) 0)));

          succeeded = (Char_11 == EndChar_6);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Chars0_7));
            }
          else
          {
            MR_Word Var_18;
            MR_Word next_value_of_Chars0_7;

            {
              Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_Word) (Char_11));
              MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Chars0_7));
            }
            // direct tailcall eliminated
            ;
            next_value_of_Chars0_7 = Var_18;
            Chars0_7 = next_value_of_Chars0_7;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        *Result_8 = (MR_Word) (CharRes_10);
        break;
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
