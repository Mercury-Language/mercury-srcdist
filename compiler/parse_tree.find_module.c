/*
** Automatically generated from `find_module.m'
** by the Mercury compiler,
** version rotd-2019-12-31
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


// :- module parse_tree.find_module.
// :- implementation.

/*
INIT mercury__parse_tree__find_module__init
ENDINIT
*/

#include "parse_tree.find_module.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
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
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__236__1_1_f_0(
  MR_String LambdaHeadVar__1_21);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__find_module__find_source_error_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__find_module__find_source_error_3_f_0(
  MR_Word ModuleName_5,
  MR_Word Dirs_6,
  MR_Word MaybeBetterMatch_7);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0(
  MR_Word Globals_7,
  MR_Word Dirs_8,
  MR_Word ModuleName_9,
  MR_Word * MaybeErrorFileNameAndStream_10);

static void MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_loop_6_p_0(
  MR_Word Globals_7,
  MR_Word Dirs_8,
  MR_Word PartialModuleName0_9,
  MR_Word * MaybeFileNameAndStream_10);

static void MR_CALL 
parse_tree__find_module__drop_outermost_qualifier_loop_3_p_0(
  MR_Word ParentModuleName_4,
  MR_String ChildName_5,
  MR_Word * DroppedQualifierSymName_6);


static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[1][5];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[3][3];




static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__find_module_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__find_module_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error opening"))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__find_source_error_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_module_source_and_stream_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__236__1_1_f_0(
  MR_String LambdaHeadVar__1_21)
{
  {
    MR_String LambdaHeadVar__2_22;
    MR_String Var_24;

    Var_24 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_21, (MR_String) "\'");
    LambdaHeadVar__2_22 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_24);
    return LambdaHeadVar__2_22;
  }
}

void MR_CALL 
parse_tree__find_module__find_module_name_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word * MaybeModuleName_8)
{
  {
    MR_bool succeeded;
    MR_Word OpenRes_10;

    mercury__io__open_input_4_p_0(FileName_7, &OpenRes_10);
    if (((MR_tag((MR_Word) OpenRes_10)) == (MR_Integer) 1))
    {
      MR_Word Error_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenRes_10, (MR_Integer) 0))));
      MR_String ErrorMsg_20;
      MR_String Progname_21;
      MR_Word Pieces_22;
      MR_Word Spec_23;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_56;
      MR_Word Var_57;

      ErrorMsg_20 = mercury__io__error_message_1_f_0(Error_19);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &Progname_21);
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (Progname_21));
      }
      Var_31 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__find_module_scalar_common_1[3]));
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (FileName_7));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (ErrorMsg_20));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__find_module_scalar_common_1[2])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__find_module_scalar_common_1[4])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_22, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), Pieces_22, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Pieces_22));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), Var_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), Var_52, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), Var_52, 3) = ((MR_Box) (Var_56));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_51));
      }
      parse_tree__error_util__write_error_spec_ignore_4_p_0(Spec_23, Globals_6);
      *MaybeModuleName_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenRes_10, (MR_Integer) 0))));
      MR_String PartialFileName_13;
      MR_String BaseName_15;
      MR_Word DefaultModuleName_16;
      MR_Word ModuleName_17;
      MR_Word Specs_18;
      MR_String PartialFileName0_12;
      MR_String BaseName0_14;

      succeeded = mercury__string__remove_suffix_3_p_0(FileName_7, (MR_String) ".m", &PartialFileName0_12);
      if (succeeded)
        PartialFileName_13 = PartialFileName0_12;
      else
        PartialFileName_13 = FileName_7;
      succeeded = mercury__dir__basename_2_p_0(PartialFileName_13, &BaseName0_14);
      if (succeeded)
        BaseName_15 = BaseName0_14;
      else
        BaseName_15 = (MR_String) "";
      parse_tree__file_names__file_name_to_module_name_2_p_0(BaseName_15, &DefaultModuleName_16);
      parse_tree__parse_module__peek_at_file_8_p_0(FileStream_11, DefaultModuleName_16, (MR_Word) ((MR_Unsigned) 0U), FileName_7, &ModuleName_17, &Specs_18);
      mercury__io__close_input_3_p_0(FileStream_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeModuleName_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_17));
      }
      parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs_18, Globals_6);
    }
  }
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_7_p_0(
  MR_Word Globals_8,
  MR_Word Dirs_9,
  MR_Word InterfaceDirs_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeFileName_12)
{
  {
    MR_Word MaybeFileNameAndStream_14;

    parse_tree__find_module__search_for_module_source_and_stream_7_p_0(Globals_8, Dirs_9, InterfaceDirs_10, ModuleName_11, &MaybeFileNameAndStream_14);
    if (((MR_tag((MR_Word) MaybeFileNameAndStream_14)) == (MR_Integer) 1))
      *MaybeFileName_12 = (MR_Word) (MaybeFileNameAndStream_14);
    else
    {
      MR_String SourceFileName_15;
      MR_Word SourceStream_16;
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_14, (MR_Integer) 0))));

      SourceFileName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
      SourceStream_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
      mercury__io__close_input_3_p_0(SourceStream_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFileName_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SourceFileName_15));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_22;

    conv0_LambdaHeadVar__2_22 = parse_tree__find_module__IntroducedFrom__func__find_source_error__236__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_7_p_0(
  MR_Word Globals_8,
  MR_Word Dirs_9,
  MR_Word InterfaceDirs_10,
  MR_Word ModuleName_11,
  MR_Word * MaybeFileNameAndStream_12)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFileNameAndStream0_14;

    parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0(Globals_8, Dirs_9, ModuleName_11, &MaybeFileNameAndStream0_14);
    if (((MR_tag((MR_Word) MaybeFileNameAndStream0_14)) == (MR_Integer) 1))
      *MaybeFileNameAndStream_12 = MaybeFileNameAndStream0_14;
    else
    {
      MR_String SourceFileName_15;
      MR_Word SourceStream_16;
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream0_14, (MR_Integer) 0))));
      MR_Word SourceFileModuleName_18;
      MR_String SourceFileBaseName_17;
      MR_String Var_36;
      MR_String Var_37;

      SourceFileName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
      SourceStream_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
      succeeded = mercury__dir__basename_1_f_0(SourceFileName_15, &Var_36);
      if (succeeded)
      {
        Var_37 = (MR_String) ".m";
        succeeded = mercury__string__remove_suffix_3_p_0(Var_36, Var_37, &SourceFileBaseName_17);
        if (succeeded)
        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(SourceFileBaseName_17, &SourceFileModuleName_18);
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_11, SourceFileModuleName_18);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word MaybeIFaceFileNameAndStream_19;
        MR_String IFaceFileName_23;
        MR_String IFaceFileBaseName_25;
        MR_Word IFaceFileModuleName_26;
        MR_Word Var_41;
        MR_String Var_42;
        MR_String Var_43;

        parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0(Globals_8, InterfaceDirs_10, ModuleName_11, &MaybeIFaceFileNameAndStream_19);
        if (!(((MR_tag((MR_Word) MaybeIFaceFileNameAndStream_19)) == (MR_Integer) 1)))
        {
          MR_Word IFaceStream_21;
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeIFaceFileNameAndStream_19, (MR_Integer) 0))));

          IFaceStream_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
          mercury__io__close_input_3_p_0(IFaceStream_21);
        }
        succeeded = ((MR_tag((MR_Word) MaybeIFaceFileNameAndStream_19)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeIFaceFileNameAndStream_19, (MR_Integer) 0))));
          IFaceFileName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
          succeeded = (strcmp(IFaceFileName_23, SourceFileName_15) == 0);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = mercury__dir__basename_1_f_0(IFaceFileName_23, &Var_42);
            if (succeeded)
            {
              Var_43 = (MR_String) ".m";
              succeeded = mercury__string__remove_suffix_3_p_0(Var_42, Var_43, &IFaceFileBaseName_25);
              if (succeeded)
              {
                parse_tree__file_names__file_name_to_module_name_2_p_0(IFaceFileBaseName_25, &IFaceFileModuleName_26);
                succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(SourceFileModuleName_18, IFaceFileModuleName_26);
              }
            }
          }
        }
        if (succeeded)
        {
          MR_String Error_27;
          MR_Word Var_45;
          MR_String ModuleNameStr_62;
          MR_String Msg0_63;
          MR_String BetterMatchFile_65;
          MR_String Var_67;
          MR_String Var_68;
          MR_String Var_70;
          MR_Word Var_72;
          MR_String Var_79;
          MR_String Var_81;

          mercury__io__close_input_3_p_0(SourceStream_16);
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (IFaceFileName_23));
          }
          ModuleNameStr_62 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
          Var_72 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_3[2]), Dirs_9);
          Var_70 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_72);
          Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", Var_70);
          Var_67 = mercury__string__f_43_43_2_f_0(ModuleNameStr_62, Var_68);
          Msg0_63 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", Var_67);
          BetterMatchFile_65 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
          Var_81 = mercury__string__f_43_43_2_f_0(BetterMatchFile_65, (MR_String) " in interface search path");
          Var_79 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", Var_81);
          Error_27 = mercury__string__f_43_43_2_f_0(Msg0_63, Var_79);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeFileNameAndStream_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_27));
          }
        }
        else
        {
          MR_String IntFile_28;
          MR_Word MaybeIntDir_29;
          MR_String IntDir_30;
          MR_String Var_56;

          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 1, (MR_String) ".int", ModuleName_11, &IntFile_28);
          libs__file_util__search_for_file_returning_dir_5_p_0(InterfaceDirs_10, IntFile_28, &MaybeIntDir_29);
          succeeded = ((MR_tag((MR_Word) MaybeIntDir_29)) == (MR_Integer) 0);
          if (succeeded)
          {
            IntDir_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeIntDir_29, (MR_Integer) 0))));
            Var_56 = mercury__dir__this_directory_0_f_0();
            succeeded = (strcmp(IntDir_30, Var_56) == 0);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word Var_51;
            MR_String Var_52;
            MR_String Error_53;

            mercury__io__close_input_3_p_0(SourceStream_16);
            Var_52 = mercury__dir__f_slash_2_f_0(IntDir_30, IntFile_28);
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
            }
            Error_53 = parse_tree__find_module__find_source_error_3_f_0(ModuleName_11, Dirs_9, Var_51);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeFileNameAndStream_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_53));
            }
          }
          else
            *MaybeFileNameAndStream_12 = MaybeFileNameAndStream0_14;
        }
      }
      else
        *MaybeFileNameAndStream_12 = MaybeFileNameAndStream0_14;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__find_source_error_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_22;

    conv0_LambdaHeadVar__2_22 = parse_tree__find_module__IntroducedFrom__func__find_source_error__236__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__find_module__find_source_error_3_f_0(
  MR_Word ModuleName_5,
  MR_Word Dirs_6,
  MR_Word MaybeBetterMatch_7)
{
  {
    MR_String Msg_8;
    MR_String ModuleNameStr_9;
    MR_String Msg0_10;
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_17;
    MR_Word Var_19;

    ModuleNameStr_9 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_5);
    Var_19 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_3[1]), Dirs_6);
    Var_17 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_19);
    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", Var_17);
    Var_14 = mercury__string__f_43_43_2_f_0(ModuleNameStr_9, Var_15);
    Msg0_10 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", Var_14);
    if ((MaybeBetterMatch_7 == (MR_Word) ((MR_Unsigned) 0U)))
      Msg_8 = Msg0_10;
    else
    {
      MR_String BetterMatchFile_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeBetterMatch_7, (MR_Integer) 0))));
      MR_String Var_26;
      MR_String Var_28;

      Var_28 = mercury__string__f_43_43_2_f_0(BetterMatchFile_12, (MR_String) " in interface search path");
      Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", Var_28);
      Msg_8 = mercury__string__f_43_43_2_f_0(Msg0_10, Var_26);
    }
    return Msg_8;
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_22;

    conv0_LambdaHeadVar__2_22 = parse_tree__find_module__IntroducedFrom__func__find_source_error__236__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0(
  MR_Word Globals_7,
  MR_Word Dirs_8,
  MR_Word ModuleName_9,
  MR_Word * MaybeErrorFileNameAndStream_10)
{
  {
    MR_Word MaybeFileNameAndStream_12;

    parse_tree__find_module__search_for_module_source_dropping_qualifiers_loop_6_p_0(Globals_7, Dirs_8, ModuleName_9, &MaybeFileNameAndStream_12);
    if ((MaybeFileNameAndStream_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Error_14;
      MR_String ModuleNameStr_23;
      MR_String Var_28;
      MR_String Var_29;
      MR_String Var_31;
      MR_Word Var_33;

      ModuleNameStr_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_9);
      Var_33 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_3[0]), Dirs_8);
      Var_31 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_33);
      Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", Var_31);
      Var_28 = mercury__string__f_43_43_2_f_0(ModuleNameStr_23, Var_29);
      Error_14 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", Var_28);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeErrorFileNameAndStream_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_14));
      }
    }
    else
    {
      MR_Word FileNameAndStream_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFileNameAndStream_12, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeErrorFileNameAndStream_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileNameAndStream_13));
      }
    }
  }
}

static void MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_loop_6_p_0(
  MR_Word Globals_7,
  MR_Word Dirs_8,
  MR_Word PartialModuleName0_9,
  MR_Word * MaybeFileNameAndStream_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String FileName0_12;
    MR_Word MaybeFileNameAndStream0_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".m", PartialModuleName0_9, &FileName0_12);
    libs__file_util__search_for_file_and_stream_5_p_0(Dirs_8, FileName0_12, &MaybeFileNameAndStream0_13);
    if (((MR_tag((MR_Word) MaybeFileNameAndStream0_13)) == (MR_Integer) 1))
    {
      MR_Word PartialModuleName1_16;
      MR_Word ParentModuleName_26;
      MR_String ChildName_27;

      succeeded = ((MR_tag((MR_Word) PartialModuleName0_9)) == (MR_Integer) 1);
      if (succeeded)
      {
        ParentModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PartialModuleName0_9, (MR_Integer) 0))));
        ChildName_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), PartialModuleName0_9, (MR_Integer) 1))));
        parse_tree__find_module__drop_outermost_qualifier_loop_3_p_0(ParentModuleName_26, ChildName_27, &PartialModuleName1_16);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word next_value_of_PartialModuleName0_9 = PartialModuleName1_16;

        // direct tailcall eliminated
        ;
        PartialModuleName0_9 = next_value_of_PartialModuleName0_9;
        continue;
      }
      else
        *MaybeFileNameAndStream_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word FileNameAndStream0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream0_13, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFileNameAndStream_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileNameAndStream0_14));
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__find_module__drop_outermost_qualifier_loop_3_p_0(
  MR_Word ParentModuleName_4,
  MR_String ChildName_5,
  MR_Word * DroppedQualifierSymName_6)
{
  if (((MR_tag((MR_Word) ParentModuleName_4)) == (MR_Integer) 1))
  {
    MR_Word GrandParentModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ParentModuleName_4, (MR_Integer) 0))));
    MR_String ParentName_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), ParentModuleName_4, (MR_Integer) 1))));
    MR_Word DroppedQualifierGrandParentModuleName_10;

    parse_tree__find_module__drop_outermost_qualifier_loop_3_p_0(GrandParentModuleName_8, ParentName_9, &DroppedQualifierGrandParentModuleName_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *DroppedQualifierSymName_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DroppedQualifierGrandParentModuleName_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ChildName_5));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *DroppedQualifierSymName_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ChildName_5));
    }
}

void mercury__parse_tree__find_module__init(void)
{
}

void mercury__parse_tree__find_module__init_type_tables(void)
{
}

void mercury__parse_tree__find_module__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__find_module__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.find_module.
