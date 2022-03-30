/*
** Automatically generated from `find_module.m'
** by the Mercury compiler,
** version rotd-2022-03-30
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__102__1_1_f_0(
  MR_String LambdaHeadVar__1_21);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[1][5];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[1][3];




static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error opening"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__find_module_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__find_module_scalar_common_1[2])))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_module_source_and_stream_5_p_0_1)),
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
parse_tree__find_module__IntroducedFrom__func__find_source_error__102__1_1_f_0(
  MR_String LambdaHeadVar__1_21)
{
  MR_String LambdaHeadVar__2_22;
  MR_String Var_24;

  Var_24 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_21, (MR_String) "\'");
  LambdaHeadVar__2_22 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_24);
  return LambdaHeadVar__2_22;
}

void MR_CALL 
parse_tree__find_module__find_module_name_5_p_0(
  MR_Word Globals_6,
  MR_String FileName_7,
  MR_Word * MaybeModuleName_8)
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

    ErrorMsg_20 = mercury__io__error_message_1_f_0(Error_19);
    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &Progname_21);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (Progname_21));
    }
    Var_31 = (MR_Word) (MR_mkword(MR_mktag(3), &parse_tree__find_module_scalar_common_1[0]));
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
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__find_module_scalar_common_1[4])));
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
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__find_module_scalar_common_1[1])));
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
      Spec_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.find_module.find_module_name\'/5"));
      MR_hl_field(MR_mktag(2), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(2), Spec_23, 3) = ((MR_Box) (Pieces_22));
    }
    parse_tree__error_util__write_error_spec_4_p_0(Globals_6, Spec_23);
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
    parse_tree__error_util__write_error_specs_4_p_0(Globals_6, Specs_18);
  }
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_5_p_0(
  MR_Word Dirs_6,
  MR_Word ModuleName_7,
  MR_Word * MaybeFileName_8)
{
  MR_Word MaybeFileNameAndStream_10;

  parse_tree__find_module__search_for_module_source_and_stream_5_p_0(Dirs_6, ModuleName_7, &MaybeFileNameAndStream_10);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream_10)) == (MR_Integer) 1))
    *MaybeFileName_8 = (MR_Word) (MaybeFileNameAndStream_10);
  else
  {
    MR_String SourceFileName_11;
    MR_Word SourceStream_12;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_10, (MR_Integer) 0))));

    SourceFileName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
    SourceStream_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(SourceStream_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFileName_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SourceFileName_11));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_22;

  conv0_LambdaHeadVar__2_22 = parse_tree__find_module__IntroducedFrom__func__find_source_error__102__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_5_p_0(
  MR_Word Dirs_6,
  MR_Word ModuleName_7,
  MR_Word * MaybeFileNameAndStream_8)
{
  MR_String FileName0_10;
  MR_Word MaybeFileNameAndStream0_11;

  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_7, &FileName0_10);
  libs__file_util__search_for_file_and_stream_5_p_0(Dirs_6, FileName0_10, &MaybeFileNameAndStream0_11);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream0_11)) == (MR_Integer) 1))
  {
    MR_String Error_14;
    MR_String ModuleNameStr_24;
    MR_String Var_29;
    MR_String Var_30;
    MR_String Var_32;
    MR_Word Var_34;

    ModuleNameStr_24 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_7);
    Var_34 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_3[0]), Dirs_6);
    Var_32 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_34);
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", Var_32);
    Var_29 = mercury__string__f_43_43_2_f_0(ModuleNameStr_24, Var_30);
    Error_14 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", Var_29);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFileNameAndStream_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_14));
    }
  }
  else
    *MaybeFileNameAndStream_8 = MaybeFileNameAndStream0_11;
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
