/*
** Automatically generated from `source_file_map.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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


/* :- module parse_tree.source_file_map. */
/* :- implementation. */

/*
INIT mercury__parse_tree__source_file_map__init
ENDINIT
*/

#include "parse_tree.source_file_map.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_2_7_p_0(
  MR_Word parse_tree__source_file_map__Globals_8,
  MR_Word parse_tree__source_file_map__MapStream_9,
  MR_String parse_tree__source_file_map__FileName_10,
  MR_Word parse_tree__source_file_map__SeenModules0_11,
  MR_Word * parse_tree__source_file_map__SeenModules_12);

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0_1(
  MR_Box parse_tree__source_file_map__closure_arg,
  MR_Box parse_tree__source_file_map__wrapper_arg_1,
  MR_Box parse_tree__source_file_map__wrapper_arg_2,
  MR_Box * parse_tree__source_file_map__wrapper_arg_3,
  MR_Box parse_tree__source_file_map__wrapper_arg_4,
  MR_Box * parse_tree__source_file_map__wrapper_arg_5);

static void MR_CALL 
parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word parse_tree__source_file_map__STATE_VARIABLE_Map_0_17,
  MR_Word * parse_tree__source_file_map__STATE_VARIABLE_Map_18);

static void MR_CALL 
parse_tree__source_file_map__read_until_char_5_p_0(
  MR_Char parse_tree__source_file_map__EndChar_6,
  MR_Word parse_tree__source_file_map__Chars0_7,
  MR_Word * parse_tree__source_file_map__Result_8);


static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[1][10];




static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__source_file_map_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__source_file_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__source_file_map__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_2_7_p_0(
  MR_Word parse_tree__source_file_map__Globals_8,
  MR_Word parse_tree__source_file_map__MapStream_9,
  MR_String parse_tree__source_file_map__FileName_10,
  MR_Word parse_tree__source_file_map__SeenModules0_11,
  MR_Word * parse_tree__source_file_map__SeenModules_12)
{
  {
    MR_bool parse_tree__source_file_map__succeeded;
    MR_Word parse_tree__source_file_map__MaybeModuleName_14;

    {
      parse_tree__find_module__find_module_name_5_p_0(parse_tree__source_file_map__Globals_8, parse_tree__source_file_map__FileName_10, &parse_tree__source_file_map__MaybeModuleName_14);
    }
    if ((parse_tree__source_file_map__MaybeModuleName_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__source_file_map__SeenModules_12 = parse_tree__source_file_map__SeenModules0_11;
    else
      {
        MR_Word parse_tree__source_file_map__ModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__MaybeModuleName_14, (MR_Integer) 0)));
        MR_String parse_tree__source_file_map__PartialFileName_18;
        MR_Word parse_tree__source_file_map__DefaultModuleName_19;
        MR_String parse_tree__source_file_map__Var_40;
        MR_String parse_tree__source_file_map__PrevFileName_16;
        MR_Box parse_tree__source_file_map__conv0_PrevFileName_16;
        MR_String parse_tree__source_file_map__PartialFileName0_17;
        MR_String parse_tree__source_file_map__Var_41;
        MR_String parse_tree__source_file_map__Var_53;

        {
          parse_tree__source_file_map__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__source_file_map__SeenModules0_11, ((MR_Box) (parse_tree__source_file_map__ModuleName_15)), &parse_tree__source_file_map__conv0_PrevFileName_16);
        }
        if (parse_tree__source_file_map__succeeded)
          {
            parse_tree__source_file_map__PrevFileName_16 = ((MR_String) parse_tree__source_file_map__conv0_PrevFileName_16);
            parse_tree__source_file_map__succeeded = MR_TRUE;
          }
        if (parse_tree__source_file_map__succeeded)
          {
            parse_tree__source_file_map__succeeded = (strcmp(parse_tree__source_file_map__PrevFileName_16, parse_tree__source_file_map__FileName_10) == 0);
            parse_tree__source_file_map__succeeded = !(parse_tree__source_file_map__succeeded);
          }
        if (parse_tree__source_file_map__succeeded)
          {
            MR_String parse_tree__source_file_map__Var_27;

            {
              mercury__io__write_string_3_p_0((MR_String) "mercury_compile: module \140");
            }
            {
              parse_tree__source_file_map__Var_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__source_file_map__ModuleName_15);
            }
            {
              mercury__io__write_string_3_p_0(parse_tree__source_file_map__Var_27);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\' defined in multiple files: ");
            }
            {
              mercury__io__write_string_3_p_0(parse_tree__source_file_map__PrevFileName_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              mercury__io__write_string_3_p_0(parse_tree__source_file_map__FileName_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
            *parse_tree__source_file_map__SeenModules_12 = parse_tree__source_file_map__SeenModules0_11;
          }
        else
          {
            {
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (parse_tree__source_file_map__ModuleName_15)), ((MR_Box) (parse_tree__source_file_map__FileName_10)), parse_tree__source_file_map__SeenModules0_11, parse_tree__source_file_map__SeenModules_12);
            }
          }
        {
          parse_tree__source_file_map__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__source_file_map__FileName_10, (MR_String) ".m", &parse_tree__source_file_map__PartialFileName0_17);
        }
        if (parse_tree__source_file_map__succeeded)
          parse_tree__source_file_map__PartialFileName_18 = parse_tree__source_file_map__PartialFileName0_17;
        else
          parse_tree__source_file_map__PartialFileName_18 = parse_tree__source_file_map__FileName_10;
        {
          parse_tree__source_file_map__Var_40 = mercury__dir__det_basename_1_f_0(parse_tree__source_file_map__PartialFileName_18);
        }
        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__source_file_map__Var_40, &parse_tree__source_file_map__DefaultModuleName_19);
        }
        {
          parse_tree__source_file_map__Var_41 = mercury__dir__dirname_1_f_0(parse_tree__source_file_map__PartialFileName_18);
        }
        {
          parse_tree__source_file_map__Var_53 = mercury__dir__this_directory_0_f_0();
        }
        parse_tree__source_file_map__succeeded = (strcmp(parse_tree__source_file_map__Var_41, parse_tree__source_file_map__Var_53) == 0);
        if (parse_tree__source_file_map__succeeded)
          {
            parse_tree__source_file_map__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__source_file_map__ModuleName_15, parse_tree__source_file_map__DefaultModuleName_19);
          }
        if (parse_tree__source_file_map__succeeded)
          {
          }
        else
          {
            MR_Word parse_tree__source_file_map__OldStream_20;
            MR_Word parse_tree__source_file_map__Var_21;

            {
              mercury__io__set_output_stream_4_p_0(parse_tree__source_file_map__MapStream_9, &parse_tree__source_file_map__OldStream_20);
            }
            {
              parse_tree__prog_out__write_sym_name_3_p_0(parse_tree__source_file_map__ModuleName_15);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
            {
              mercury__io__write_string_3_p_0(parse_tree__source_file_map__FileName_10);
            }
            {
              mercury__io__nl_2_p_0();
            }
            {
              mercury__io__set_output_stream_4_p_0(parse_tree__source_file_map__OldStream_20, &parse_tree__source_file_map__Var_21);
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0_1(
  MR_Box parse_tree__source_file_map__closure_arg,
  MR_Box parse_tree__source_file_map__wrapper_arg_1,
  MR_Box parse_tree__source_file_map__wrapper_arg_2,
  MR_Box * parse_tree__source_file_map__wrapper_arg_3,
  MR_Box parse_tree__source_file_map__wrapper_arg_4,
  MR_Box * parse_tree__source_file_map__wrapper_arg_5)
{
  {
    MR_Box parse_tree__source_file_map__closure = parse_tree__source_file_map__closure_arg;
    MR_Word parse_tree__source_file_map__conv0_SeenModules_12;

    {
      parse_tree__source_file_map__write_source_file_map_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__closure, (MR_Integer) 4))), ((MR_String) parse_tree__source_file_map__wrapper_arg_1), ((MR_Word) parse_tree__source_file_map__wrapper_arg_2), &parse_tree__source_file_map__conv0_SeenModules_12);
    }
    *parse_tree__source_file_map__wrapper_arg_3 = ((MR_Box) (parse_tree__source_file_map__conv0_SeenModules_12));
  }
}

void MR_CALL 
parse_tree__source_file_map__write_source_file_map_4_p_0(
  MR_Word parse_tree__source_file_map__Globals_5,
  MR_Word parse_tree__source_file_map__FileNames_6)
{
  {
    MR_bool parse_tree__source_file_map__succeeded;
    MR_Word parse_tree__source_file_map__OpenRes_9;

    {
      mercury__io__open_output_4_p_0((MR_String) "Mercury.modules", &parse_tree__source_file_map__OpenRes_9);
    }
    if (((MR_tag((MR_Word) parse_tree__source_file_map__OpenRes_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__source_file_map__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__OpenRes_9, (MR_Integer) 0)));
        MR_String parse_tree__source_file_map__Var_23;

        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error opening \140");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "Mercury.modules");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
        }
        {
          parse_tree__source_file_map__Var_23 = mercury__io__error_message_1_f_0(parse_tree__source_file_map__Error_12);
        }
        {
          mercury__io__write_string_3_p_0(parse_tree__source_file_map__Var_23);
        }
      }
    else
      {
        MR_Word parse_tree__source_file_map__TypeCtorInfo_35_35;
        MR_Word parse_tree__source_file_map__Stream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__OpenRes_9, (MR_Integer) 0)));
        MR_Word parse_tree__source_file_map__Var_25;
        MR_Word parse_tree__source_file_map__Var_26;
        MR_Word parse_tree__source_file_map__Var_11;
        MR_Box parse_tree__source_file_map__conv2_Var_11;
        MR_Box parse_tree__source_file_map__conv1_STATE_VARIABLE_IO_27_27;

        {
          parse_tree__source_file_map__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__Var_25, 0) = ((MR_Box) (&parse_tree__source_file_map_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__Var_25, 1) = ((MR_Box) (parse_tree__source_file_map__write_source_file_map_4_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__Var_25, 3) = ((MR_Box) (parse_tree__source_file_map__Globals_5));
          MR_hl_field(MR_mktag(0), parse_tree__source_file_map__Var_25, 4) = ((MR_Box) (parse_tree__source_file_map__Stream_10));
        }
        parse_tree__source_file_map__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          parse_tree__source_file_map__Var_26 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__source_file_map__TypeCtorInfo_35_35);
        }
        {
          mercury__list__foldl2_6_p_2(parse_tree__source_file_map__TypeCtorInfo_35_35, (MR_Word) &parse_tree__source_file_map_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__source_file_map__Var_25, parse_tree__source_file_map__FileNames_6, ((MR_Box) (parse_tree__source_file_map__Var_26)), &parse_tree__source_file_map__conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__source_file_map__conv1_STATE_VARIABLE_IO_27_27);
        }
        parse_tree__source_file_map__Var_11 = ((MR_Word) parse_tree__source_file_map__conv2_Var_11);
        {
          mercury__io__close_output_3_p_0(parse_tree__source_file_map__Stream_10);
        }
      }
  }
}

MR_String MR_CALL 
parse_tree__source_file_map__default_source_file_1_f_0(
  MR_Word parse_tree__source_file_map__ModuleName_3)
{
  {
    MR_bool parse_tree__source_file_map__succeeded;
    MR_String parse_tree__source_file_map__HeadVar__2_2;
    MR_String parse_tree__source_file_map__Var_4;

    {
      parse_tree__source_file_map__Var_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__source_file_map__ModuleName_3);
    }
    {
      parse_tree__source_file_map__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__source_file_map__Var_4, (MR_String) ".m");
    }
    return parse_tree__source_file_map__HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__source_file_map__have_source_file_map_3_p_0(
  MR_Word * parse_tree__source_file_map__HaveMap_4)
{
  {
    MR_bool parse_tree__source_file_map__succeeded;
    MR_Word parse_tree__source_file_map__SourceFileMap_6;
    MR_Word parse_tree__source_file_map__MaybeSourceFileMap0_16;

    {
      libs__globals__io_get_maybe_source_file_map_3_p_0(&parse_tree__source_file_map__MaybeSourceFileMap0_16);
    }
    if ((parse_tree__source_file_map__MaybeSourceFileMap0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__source_file_map__OpenRes_18;
        MR_Word parse_tree__source_file_map__Var_32;

        {
          mercury__io__open_input_4_p_0((MR_String) "Mercury.modules", &parse_tree__source_file_map__OpenRes_18);
        }
        if (((MR_tag((MR_Word) parse_tree__source_file_map__OpenRes_18)) == (MR_mktag((MR_Integer) 1))))
          {
            {
              parse_tree__source_file_map__SourceFileMap_6 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
          }
        else
          {
            MR_Word parse_tree__source_file_map__Stream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__OpenRes_18, (MR_Integer) 0)));
            MR_Word parse_tree__source_file_map__OldStream_20;
            MR_Word parse_tree__source_file_map__Var_28;
            MR_Word parse_tree__source_file_map__Var_21;

            {
              mercury__io__set_input_stream_4_p_0(parse_tree__source_file_map__Stream_19, &parse_tree__source_file_map__OldStream_20);
            }
            {
              parse_tree__source_file_map__Var_28 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
            {
              parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(parse_tree__source_file_map__Var_28, &parse_tree__source_file_map__SourceFileMap_6);
            }
            {
              mercury__io__set_input_stream_4_p_0(parse_tree__source_file_map__OldStream_20, &parse_tree__source_file_map__Var_21);
            }
            {
              mercury__io__close_input_3_p_0(parse_tree__source_file_map__Stream_19);
            }
          }
        {
          parse_tree__source_file_map__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__source_file_map__Var_32, 0) = ((MR_Box) (parse_tree__source_file_map__SourceFileMap_6));
        }
        {
          libs__globals__io_set_maybe_source_file_map_3_p_0(parse_tree__source_file_map__Var_32);
        }
      }
    else
      parse_tree__source_file_map__SourceFileMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__MaybeSourceFileMap0_16, (MR_Integer) 0)));
    {
      parse_tree__source_file_map__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__source_file_map__SourceFileMap_6);
    }
    if (parse_tree__source_file_map__succeeded)
      *parse_tree__source_file_map__HaveMap_4 = (MR_Integer) 0;
    else
      *parse_tree__source_file_map__HaveMap_4 = (MR_Integer) 1;
  }
}

void MR_CALL 
parse_tree__source_file_map__lookup_module_source_file_4_p_0(
  MR_Word parse_tree__source_file_map__ModuleName_5,
  MR_String * parse_tree__source_file_map__FileName_6)
{
  {
    MR_bool parse_tree__source_file_map__succeeded;
    MR_Word parse_tree__source_file_map__SourceFileMap_8;
    MR_Word parse_tree__source_file_map__MaybeSourceFileMap0_19;
    MR_String parse_tree__source_file_map__FileName0_9;
    MR_Box parse_tree__source_file_map__conv0_FileName0_9;

    {
      libs__globals__io_get_maybe_source_file_map_3_p_0(&parse_tree__source_file_map__MaybeSourceFileMap0_19);
    }
    if ((parse_tree__source_file_map__MaybeSourceFileMap0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__source_file_map__OpenRes_21;
        MR_Word parse_tree__source_file_map__Var_35;

        {
          mercury__io__open_input_4_p_0((MR_String) "Mercury.modules", &parse_tree__source_file_map__OpenRes_21);
        }
        if (((MR_tag((MR_Word) parse_tree__source_file_map__OpenRes_21)) == (MR_mktag((MR_Integer) 1))))
          {
            {
              parse_tree__source_file_map__SourceFileMap_8 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
          }
        else
          {
            MR_Word parse_tree__source_file_map__Stream_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__source_file_map__OpenRes_21, (MR_Integer) 0)));
            MR_Word parse_tree__source_file_map__OldStream_23;
            MR_Word parse_tree__source_file_map__Var_31;
            MR_Word parse_tree__source_file_map__Var_24;

            {
              mercury__io__set_input_stream_4_p_0(parse_tree__source_file_map__Stream_22, &parse_tree__source_file_map__OldStream_23);
            }
            {
              parse_tree__source_file_map__Var_31 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
            {
              parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(parse_tree__source_file_map__Var_31, &parse_tree__source_file_map__SourceFileMap_8);
            }
            {
              mercury__io__set_input_stream_4_p_0(parse_tree__source_file_map__OldStream_23, &parse_tree__source_file_map__Var_24);
            }
            {
              mercury__io__close_input_3_p_0(parse_tree__source_file_map__Stream_22);
            }
          }
        {
          parse_tree__source_file_map__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__source_file_map__Var_35, 0) = ((MR_Box) (parse_tree__source_file_map__SourceFileMap_8));
        }
        {
          libs__globals__io_set_maybe_source_file_map_3_p_0(parse_tree__source_file_map__Var_35);
        }
      }
    else
      parse_tree__source_file_map__SourceFileMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__MaybeSourceFileMap0_19, (MR_Integer) 0)));
    {
      parse_tree__source_file_map__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__source_file_map__SourceFileMap_8, ((MR_Box) (parse_tree__source_file_map__ModuleName_5)), &parse_tree__source_file_map__conv0_FileName0_9);
    }
    if (parse_tree__source_file_map__succeeded)
      {
        parse_tree__source_file_map__FileName0_9 = ((MR_String) parse_tree__source_file_map__conv0_FileName0_9);
        parse_tree__source_file_map__succeeded = MR_TRUE;
      }
    if (parse_tree__source_file_map__succeeded)
      *parse_tree__source_file_map__FileName_6 = parse_tree__source_file_map__FileName0_9;
    else
      {
        MR_String parse_tree__source_file_map__Var_42;

        {
          parse_tree__source_file_map__Var_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__source_file_map__ModuleName_5);
        }
        {
          *parse_tree__source_file_map__FileName_6 = mercury__string__f_43_43_2_f_0(parse_tree__source_file_map__Var_42, (MR_String) ".m");
        }
      }
  }
}

static void MR_CALL 
parse_tree__source_file_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_111_117_114_99_101_95_102_105_108_101_95_109_97_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word parse_tree__source_file_map__STATE_VARIABLE_Map_0_17,
  MR_Word * parse_tree__source_file_map__STATE_VARIABLE_Map_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__source_file_map__succeeded;
        MR_Word parse_tree__source_file_map__ModuleCharsResult_9;

        {
          parse_tree__source_file_map__read_until_char_5_p_0((MR_Char) 9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__source_file_map__ModuleCharsResult_9);
        }
        switch (MR_tag((MR_Word) parse_tree__source_file_map__ModuleCharsResult_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *parse_tree__source_file_map__STATE_VARIABLE_Map_18 = parse_tree__source_file_map__STATE_VARIABLE_Map_0_17;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__source_file_map__RevModuleChars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__ModuleCharsResult_9, (MR_Integer) 0)));
              MR_String parse_tree__source_file_map__ModuleStr_11;
              MR_Word parse_tree__source_file_map__ModuleName_12;
              MR_Word parse_tree__source_file_map__FileNameCharsResult_13;

              {
                mercury__string__from_rev_char_list_2_p_0(parse_tree__source_file_map__RevModuleChars_10, &parse_tree__source_file_map__ModuleStr_11);
              }
              {
                parse_tree__source_file_map__ModuleName_12 = mdbcomp__sym_name__string_to_sym_name_1_f_0(parse_tree__source_file_map__ModuleStr_11);
              }
              {
                parse_tree__source_file_map__read_until_char_5_p_0((MR_Char) 10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__source_file_map__FileNameCharsResult_13);
              }
              switch (MR_tag((MR_Word) parse_tree__source_file_map__FileNameCharsResult_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_compile: unexpected end of file in Mercury.modules file.\n");
                    }
                    *parse_tree__source_file_map__STATE_VARIABLE_Map_18 = parse_tree__source_file_map__STATE_VARIABLE_Map_0_17;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__source_file_map__FileNameChars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__FileNameCharsResult_13, (MR_Integer) 0)));
                    MR_String parse_tree__source_file_map__FileName_15;
                    MR_Word parse_tree__source_file_map__STATE_VARIABLE_Map_51_51;

                    {
                      mercury__string__from_rev_char_list_2_p_0(parse_tree__source_file_map__FileNameChars_14, &parse_tree__source_file_map__FileName_15);
                    }
                    {
                      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (parse_tree__source_file_map__ModuleName_12)), ((MR_Box) (parse_tree__source_file_map__FileName_15)), parse_tree__source_file_map__STATE_VARIABLE_Map_0_17, &parse_tree__source_file_map__STATE_VARIABLE_Map_51_51);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__source_file_map__next_value_of_STATE_VARIABLE_Map_0_17 = parse_tree__source_file_map__STATE_VARIABLE_Map_51_51;

                      parse_tree__source_file_map__STATE_VARIABLE_Map_0_17 = parse_tree__source_file_map__next_value_of_STATE_VARIABLE_Map_0_17;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word parse_tree__source_file_map__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__source_file_map__FileNameCharsResult_13, (MR_Integer) 0)));
                    MR_String parse_tree__source_file_map__Var_42;

                    {
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error in Mercury.modules file: ");
                    }
                    {
                      parse_tree__source_file_map__Var_42 = mercury__io__error_message_1_f_0(parse_tree__source_file_map__Error_16);
                    }
                    {
                      mercury__io__write_string_3_p_0(parse_tree__source_file_map__Var_42);
                    }
                    {
                      mercury__io__nl_2_p_0();
                    }
                    *parse_tree__source_file_map__STATE_VARIABLE_Map_18 = parse_tree__source_file_map__STATE_VARIABLE_Map_0_17;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String parse_tree__source_file_map__Var_30;
              MR_Word parse_tree__source_file_map__Error_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__source_file_map__ModuleCharsResult_9, (MR_Integer) 0)));

              {
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "mercury_compile: error in Mercury.modules file: ");
              }
              {
                parse_tree__source_file_map__Var_30 = mercury__io__error_message_1_f_0(parse_tree__source_file_map__Error_54);
              }
              {
                mercury__io__write_string_3_p_0(parse_tree__source_file_map__Var_30);
              }
              {
                mercury__io__nl_2_p_0();
              }
              *parse_tree__source_file_map__STATE_VARIABLE_Map_18 = parse_tree__source_file_map__STATE_VARIABLE_Map_0_17;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__source_file_map__read_until_char_5_p_0(
  MR_Char parse_tree__source_file_map__EndChar_6,
  MR_Word parse_tree__source_file_map__Chars0_7,
  MR_Word * parse_tree__source_file_map__Result_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__source_file_map__succeeded;
        MR_Word parse_tree__source_file_map__CharRes_10;

        {
          mercury__io__read_char_3_p_0(&parse_tree__source_file_map__CharRes_10);
        }
        switch (MR_tag((MR_Word) parse_tree__source_file_map__CharRes_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((parse_tree__source_file_map__Chars0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__source_file_map__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__source_file_map__Result_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__source_file_map__Chars0_7));
              }
            break;
          case (MR_Integer) 1:
            {
              MR_Char parse_tree__source_file_map__Char_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__source_file_map__CharRes_10, (MR_Integer) 0)));

              parse_tree__source_file_map__succeeded = (parse_tree__source_file_map__Char_11 == parse_tree__source_file_map__EndChar_6);
              if (parse_tree__source_file_map__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__source_file_map__Result_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__source_file_map__Chars0_7));
                }
              else
                {
                  MR_Word parse_tree__source_file_map__Var_18;

                  {
                    parse_tree__source_file_map__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__source_file_map__Var_18, 0) = ((MR_Box) (MR_Word) (parse_tree__source_file_map__Char_11));
                    MR_hl_field(MR_mktag(1), parse_tree__source_file_map__Var_18, 1) = ((MR_Box) (parse_tree__source_file_map__Chars0_7));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__source_file_map__next_value_of_Chars0_7 = parse_tree__source_file_map__Var_18;

                    parse_tree__source_file_map__Chars0_7 = parse_tree__source_file_map__next_value_of_Chars0_7;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            *parse_tree__source_file_map__Result_8 = (MR_Word) parse_tree__source_file_map__CharRes_10;
            break;
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

/* :- end_module parse_tree.source_file_map. */
