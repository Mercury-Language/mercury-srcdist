/*
** Automatically generated from `find_module.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module parse_tree.find_module. */
/* :- implementation. */

/*
INIT mercury__parse_tree__find_module__init
ENDINIT
*/

#include "parse_tree.find_module.mih"


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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__234__1_1_f_0(
  MR_String parse_tree__find_module__LambdaHeadVar__1_21);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_7_p_0_1(
  MR_Box parse_tree__find_module__closure_arg,
  MR_Box parse_tree__find_module__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__find_module__find_source_error_3_f_0_1(
  MR_Box parse_tree__find_module__closure_arg,
  MR_Box parse_tree__find_module__wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__find_module__find_source_error_3_f_0(
  MR_Word parse_tree__find_module__ModuleName_5,
  MR_Word parse_tree__find_module__Dirs_6,
  MR_Word parse_tree__find_module__MaybeBetterMatch_7);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0_1(
  MR_Box parse_tree__find_module__closure_arg,
  MR_Box parse_tree__find_module__wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0(
  MR_Word parse_tree__find_module__Globals_7,
  MR_Word parse_tree__find_module__Dirs_8,
  MR_Word parse_tree__find_module__ModuleName_9,
  MR_Word * parse_tree__find_module__MaybeErrorFileNameAndStream_10);

static void MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_loop_6_p_0(
  MR_Word parse_tree__find_module__Globals_7,
  MR_Word parse_tree__find_module__Dirs_8,
  MR_Word parse_tree__find_module__PartialModuleName0_9,
  MR_Word * parse_tree__find_module__MaybeFileNameAndStream_10);

static void MR_CALL 
parse_tree__find_module__drop_outermost_qualifier_loop_3_p_0(
  MR_Word parse_tree__find_module__ParentModuleName_4,
  MR_String parse_tree__find_module__ChildName_5,
  MR_Word * parse_tree__find_module__DroppedQualifierSymName_6);


static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[1][5];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[3][3];




static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__find_module_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__find_module_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error opening"))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__find_source_error_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_module_source_and_stream_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__234__1_1_f_0(
  MR_String parse_tree__find_module__LambdaHeadVar__1_21)
{
  {
    MR_String parse_tree__find_module__LambdaHeadVar__2_22;
    MR_String parse_tree__find_module__Var_24;

    parse_tree__find_module__Var_24 = mercury__string__f_43_43_2_f_0(parse_tree__find_module__LambdaHeadVar__1_21, (MR_String) "\'");
    parse_tree__find_module__LambdaHeadVar__2_22 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__find_module__Var_24);
    return parse_tree__find_module__LambdaHeadVar__2_22;
  }
}

void MR_CALL 
parse_tree__find_module__find_module_name_5_p_0(
  MR_Word parse_tree__find_module__Globals_6,
  MR_String parse_tree__find_module__FileName_7,
  MR_Word * parse_tree__find_module__MaybeModuleName_8)
{
  {
    MR_bool parse_tree__find_module__succeeded;
    MR_Word parse_tree__find_module__OpenRes_10;

    mercury__io__open_input_4_p_0(parse_tree__find_module__FileName_7, &parse_tree__find_module__OpenRes_10);
    if (((MR_tag((MR_Word) parse_tree__find_module__OpenRes_10)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word parse_tree__find_module__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__find_module__OpenRes_10, (MR_Integer) 0)));
      MR_String parse_tree__find_module__ErrorMsg_22;
      MR_String parse_tree__find_module__Progname_23;
      MR_Word parse_tree__find_module__Pieces_24;
      MR_Word parse_tree__find_module__Spec_25;
      MR_Word parse_tree__find_module__Var_31;
      MR_Word parse_tree__find_module__Var_32;
      MR_Word parse_tree__find_module__Var_33;
      MR_Word parse_tree__find_module__Var_35;
      MR_Word parse_tree__find_module__Var_38;
      MR_Word parse_tree__find_module__Var_39;
      MR_Word parse_tree__find_module__Var_40;
      MR_Word parse_tree__find_module__Var_43;
      MR_Word parse_tree__find_module__Var_44;
      MR_Word parse_tree__find_module__Var_53;
      MR_Word parse_tree__find_module__Var_54;
      MR_Word parse_tree__find_module__Var_58;
      MR_Word parse_tree__find_module__Var_59;
      MR_Integer parse_tree__find_module___NumWarnings_71;
      MR_Integer parse_tree__find_module___NumErrors_72;

      parse_tree__find_module__ErrorMsg_22 = mercury__io__error_message_1_f_0(parse_tree__find_module__Error_21);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__find_module__Progname_23);
      {
        parse_tree__find_module__Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), parse_tree__find_module__Var_31, 0) = ((MR_Box) (parse_tree__find_module__Progname_23));
      }
      parse_tree__find_module__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__find_module_scalar_common_1[3]);
      {
        parse_tree__find_module__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__find_module__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__find_module__Var_39, 1) = ((MR_Box) (parse_tree__find_module__FileName_7));
      }
      {
        parse_tree__find_module__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__find_module__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), parse_tree__find_module__Var_44, 1) = ((MR_Box) (parse_tree__find_module__ErrorMsg_22));
      }
      {
        parse_tree__find_module__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_43, 0) = ((MR_Box) (parse_tree__find_module__Var_44));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__find_module_scalar_common_1[2])));
      }
      {
        parse_tree__find_module__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_40, 0) = ((MR_Box) (parse_tree__find_module__Var_33));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_40, 1) = ((MR_Box) (parse_tree__find_module__Var_43));
      }
      {
        parse_tree__find_module__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_38, 0) = ((MR_Box) (parse_tree__find_module__Var_39));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_38, 1) = ((MR_Box) (parse_tree__find_module__Var_40));
      }
      {
        parse_tree__find_module__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__find_module_scalar_common_1[4])));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_35, 1) = ((MR_Box) (parse_tree__find_module__Var_38));
      }
      {
        parse_tree__find_module__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_32, 0) = ((MR_Box) (parse_tree__find_module__Var_33));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_32, 1) = ((MR_Box) (parse_tree__find_module__Var_35));
      }
      {
        parse_tree__find_module__Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Pieces_24, 0) = ((MR_Box) (parse_tree__find_module__Var_31));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Pieces_24, 1) = ((MR_Box) (parse_tree__find_module__Var_32));
      }
      {
        parse_tree__find_module__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__find_module__Var_59, 0) = ((MR_Box) (parse_tree__find_module__Pieces_24));
      }
      {
        parse_tree__find_module__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_58, 0) = ((MR_Box) (parse_tree__find_module__Var_59));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__find_module__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_54, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_54, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_54, 3) = ((MR_Box) (parse_tree__find_module__Var_58));
      }
      {
        parse_tree__find_module__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_53, 0) = ((MR_Box) (parse_tree__find_module__Var_54));
        MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__find_module__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__find_module__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), parse_tree__find_module__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(0), parse_tree__find_module__Spec_25, 2) = ((MR_Box) (parse_tree__find_module__Var_53));
      }
      parse_tree__error_util__write_error_spec_8_p_0(parse_tree__find_module__Spec_25, parse_tree__find_module__Globals_6, (MR_Integer) 0, &parse_tree__find_module___NumWarnings_71, (MR_Integer) 0, &parse_tree__find_module___NumErrors_72);
      *parse_tree__find_module__MaybeModuleName_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word parse_tree__find_module__FileStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__OpenRes_10, (MR_Integer) 0)));
      MR_String parse_tree__find_module__PartialFileName_13;
      MR_String parse_tree__find_module__BaseName_15;
      MR_Word parse_tree__find_module__DefaultModuleName_16;
      MR_Word parse_tree__find_module__ModuleName_17;
      MR_Word parse_tree__find_module__Specs_18;
      MR_String parse_tree__find_module__PartialFileName0_12;
      MR_String parse_tree__find_module__BaseName0_14;
      MR_Integer parse_tree__find_module___NumWarnings_19;
      MR_Integer parse_tree__find_module___NumErrors_20;

      parse_tree__find_module__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__find_module__FileName_7, (MR_String) ".m", &parse_tree__find_module__PartialFileName0_12);
      if (parse_tree__find_module__succeeded)
        parse_tree__find_module__PartialFileName_13 = parse_tree__find_module__PartialFileName0_12;
      else
        parse_tree__find_module__PartialFileName_13 = parse_tree__find_module__FileName_7;
      parse_tree__find_module__succeeded = mercury__dir__basename_2_p_0(parse_tree__find_module__PartialFileName_13, &parse_tree__find_module__BaseName0_14);
      if (parse_tree__find_module__succeeded)
        parse_tree__find_module__BaseName_15 = parse_tree__find_module__BaseName0_14;
      else
        parse_tree__find_module__BaseName_15 = (MR_String) "";
      parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__find_module__BaseName_15, &parse_tree__find_module__DefaultModuleName_16);
      parse_tree__parse_module__peek_at_file_7_p_0(parse_tree__find_module__FileStream_11, parse_tree__find_module__DefaultModuleName_16, parse_tree__find_module__FileName_7, &parse_tree__find_module__ModuleName_17, &parse_tree__find_module__Specs_18);
      mercury__io__close_input_3_p_0(parse_tree__find_module__FileStream_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__find_module__MaybeModuleName_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__find_module__ModuleName_17));
      }
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__find_module__Specs_18, parse_tree__find_module__Globals_6, (MR_Integer) 0, &parse_tree__find_module___NumWarnings_19, (MR_Integer) 0, &parse_tree__find_module___NumErrors_20);
    }
  }
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_7_p_0(
  MR_Word parse_tree__find_module__Globals_8,
  MR_Word parse_tree__find_module__Dirs_9,
  MR_Word parse_tree__find_module__InterfaceDirs_10,
  MR_Word parse_tree__find_module__ModuleName_11,
  MR_Word * parse_tree__find_module__MaybeFileName_12)
{
  {
    MR_Word parse_tree__find_module__MaybeFileNameAndStream_14;

    parse_tree__find_module__search_for_module_source_and_stream_7_p_0(parse_tree__find_module__Globals_8, parse_tree__find_module__Dirs_9, parse_tree__find_module__InterfaceDirs_10, parse_tree__find_module__ModuleName_11, &parse_tree__find_module__MaybeFileNameAndStream_14);
    if (((MR_tag((MR_Word) parse_tree__find_module__MaybeFileNameAndStream_14)) == (MR_mktag((MR_Integer) 1))))
      *parse_tree__find_module__MaybeFileName_12 = (MR_Word) parse_tree__find_module__MaybeFileNameAndStream_14;
    else
    {
      MR_String parse_tree__find_module__SourceFileName_15;
      MR_Word parse_tree__find_module__SourceStream_16;
      MR_Word parse_tree__find_module__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__MaybeFileNameAndStream_14, (MR_Integer) 0)));

      parse_tree__find_module__SourceFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__find_module__Var_21, (MR_Integer) 0)));
      parse_tree__find_module__SourceStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__Var_21, (MR_Integer) 1)));
      mercury__io__close_input_3_p_0(parse_tree__find_module__SourceStream_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__find_module__MaybeFileName_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__find_module__SourceFileName_15));
      }
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_7_p_0_1(
  MR_Box parse_tree__find_module__closure_arg,
  MR_Box parse_tree__find_module__wrapper_arg_1)
{
  {
    MR_Box parse_tree__find_module__wrapper_arg_2;
    MR_Box parse_tree__find_module__closure = parse_tree__find_module__closure_arg;
    MR_String parse_tree__find_module__conv0_LambdaHeadVar__2_22;

    parse_tree__find_module__conv0_LambdaHeadVar__2_22 = parse_tree__find_module__IntroducedFrom__func__find_source_error__234__1_1_f_0(((MR_String) parse_tree__find_module__wrapper_arg_1));
    parse_tree__find_module__wrapper_arg_2 = ((MR_Box) (parse_tree__find_module__conv0_LambdaHeadVar__2_22));
    return parse_tree__find_module__wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_7_p_0(
  MR_Word parse_tree__find_module__Globals_8,
  MR_Word parse_tree__find_module__Dirs_9,
  MR_Word parse_tree__find_module__InterfaceDirs_10,
  MR_Word parse_tree__find_module__ModuleName_11,
  MR_Word * parse_tree__find_module__MaybeFileNameAndStream_12)
{
  {
    MR_bool parse_tree__find_module__succeeded;
    MR_Word parse_tree__find_module__MaybeFileNameAndStream0_14;

    parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0(parse_tree__find_module__Globals_8, parse_tree__find_module__Dirs_9, parse_tree__find_module__ModuleName_11, &parse_tree__find_module__MaybeFileNameAndStream0_14);
    if (((MR_tag((MR_Word) parse_tree__find_module__MaybeFileNameAndStream0_14)) == (MR_mktag((MR_Integer) 1))))
      *parse_tree__find_module__MaybeFileNameAndStream_12 = parse_tree__find_module__MaybeFileNameAndStream0_14;
    else
    {
      MR_String parse_tree__find_module__SourceFileName_15;
      MR_Word parse_tree__find_module__SourceStream_16;
      MR_Word parse_tree__find_module__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__MaybeFileNameAndStream0_14, (MR_Integer) 0)));
      MR_Word parse_tree__find_module__SourceFileModuleName_18;
      MR_String parse_tree__find_module__SourceFileBaseName_17;
      MR_String parse_tree__find_module__Var_36;
      MR_String parse_tree__find_module__Var_37;

      parse_tree__find_module__SourceFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__find_module__Var_35, (MR_Integer) 0)));
      parse_tree__find_module__SourceStream_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__Var_35, (MR_Integer) 1)));
      parse_tree__find_module__succeeded = mercury__dir__basename_1_f_0(parse_tree__find_module__SourceFileName_15, &parse_tree__find_module__Var_36);
      if (parse_tree__find_module__succeeded)
      {
        parse_tree__find_module__Var_37 = (MR_String) ".m";
        parse_tree__find_module__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__find_module__Var_36, parse_tree__find_module__Var_37, &parse_tree__find_module__SourceFileBaseName_17);
        if (parse_tree__find_module__succeeded)
        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__find_module__SourceFileBaseName_17, &parse_tree__find_module__SourceFileModuleName_18);
          parse_tree__find_module__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__find_module__ModuleName_11, parse_tree__find_module__SourceFileModuleName_18);
          parse_tree__find_module__succeeded = !(parse_tree__find_module__succeeded);
        }
      }
      if (parse_tree__find_module__succeeded)
      {
        MR_Word parse_tree__find_module__MaybeIFaceFileNameAndStream_19;
        MR_String parse_tree__find_module__IFaceFileName_23;
        MR_String parse_tree__find_module__IFaceFileBaseName_25;
        MR_Word parse_tree__find_module__IFaceFileModuleName_26;
        MR_Word parse_tree__find_module__Var_41;
        MR_String parse_tree__find_module__Var_42;
        MR_String parse_tree__find_module__Var_43;
        MR_Word parse_tree__find_module___IFaceStream_24;

        parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0(parse_tree__find_module__Globals_8, parse_tree__find_module__InterfaceDirs_10, parse_tree__find_module__ModuleName_11, &parse_tree__find_module__MaybeIFaceFileNameAndStream_19);
        if (!(((MR_tag((MR_Word) parse_tree__find_module__MaybeIFaceFileNameAndStream_19)) == (MR_mktag((MR_Integer) 1)))))
        {
          MR_Word parse_tree__find_module__IFaceStream_21;
          MR_Word parse_tree__find_module__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__MaybeIFaceFileNameAndStream_19, (MR_Integer) 0)));
          MR_String parse_tree__find_module___IFaceFileName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__find_module__Var_39, (MR_Integer) 0)));

          parse_tree__find_module__IFaceStream_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__Var_39, (MR_Integer) 1)));
          mercury__io__close_input_3_p_0(parse_tree__find_module__IFaceStream_21);
        }
        parse_tree__find_module__succeeded = ((MR_tag((MR_Word) parse_tree__find_module__MaybeIFaceFileNameAndStream_19)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__find_module__succeeded)
        {
          parse_tree__find_module__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__MaybeIFaceFileNameAndStream_19, (MR_Integer) 0)));
          parse_tree__find_module__IFaceFileName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__find_module__Var_41, (MR_Integer) 0)));
          parse_tree__find_module___IFaceStream_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__Var_41, (MR_Integer) 1)));
          parse_tree__find_module__succeeded = (strcmp(parse_tree__find_module__IFaceFileName_23, parse_tree__find_module__SourceFileName_15) == 0);
          parse_tree__find_module__succeeded = !(parse_tree__find_module__succeeded);
          if (parse_tree__find_module__succeeded)
          {
            parse_tree__find_module__succeeded = mercury__dir__basename_1_f_0(parse_tree__find_module__IFaceFileName_23, &parse_tree__find_module__Var_42);
            if (parse_tree__find_module__succeeded)
            {
              parse_tree__find_module__Var_43 = (MR_String) ".m";
              parse_tree__find_module__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__find_module__Var_42, parse_tree__find_module__Var_43, &parse_tree__find_module__IFaceFileBaseName_25);
              if (parse_tree__find_module__succeeded)
              {
                parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__find_module__IFaceFileBaseName_25, &parse_tree__find_module__IFaceFileModuleName_26);
                parse_tree__find_module__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__find_module__SourceFileModuleName_18, parse_tree__find_module__IFaceFileModuleName_26);
              }
            }
          }
        }
        if (parse_tree__find_module__succeeded)
        {
          MR_Word parse_tree__find_module__TypeCtorInfo_31_84;
          MR_String parse_tree__find_module__Error_27;
          MR_Word parse_tree__find_module__Var_45;
          MR_String parse_tree__find_module__ModuleNameStr_62;
          MR_String parse_tree__find_module__Msg0_63;
          MR_String parse_tree__find_module__BetterMatchFile_65;
          MR_String parse_tree__find_module__Var_67;
          MR_String parse_tree__find_module__Var_68;
          MR_String parse_tree__find_module__Var_70;
          MR_Word parse_tree__find_module__Var_72;
          MR_String parse_tree__find_module__Var_79;
          MR_String parse_tree__find_module__Var_81;

          mercury__io__close_input_3_p_0(parse_tree__find_module__SourceStream_16);
          {
            parse_tree__find_module__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_45, 0) = ((MR_Box) (parse_tree__find_module__IFaceFileName_23));
          }
          parse_tree__find_module__ModuleNameStr_62 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__find_module__ModuleName_11);
          parse_tree__find_module__TypeCtorInfo_31_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          parse_tree__find_module__Var_72 = mercury__list__map_2_f_0(parse_tree__find_module__TypeCtorInfo_31_84, parse_tree__find_module__TypeCtorInfo_31_84, (MR_Word) &parse_tree__find_module_scalar_common_3[2], parse_tree__find_module__Dirs_9);
          parse_tree__find_module__Var_70 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__find_module__Var_72);
          parse_tree__find_module__Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__find_module__Var_70);
          parse_tree__find_module__Var_67 = mercury__string__f_43_43_2_f_0(parse_tree__find_module__ModuleNameStr_62, parse_tree__find_module__Var_68);
          parse_tree__find_module__Msg0_63 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__find_module__Var_67);
          parse_tree__find_module__BetterMatchFile_65 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_45, (MR_Integer) 0)));
          parse_tree__find_module__Var_81 = mercury__string__f_43_43_2_f_0(parse_tree__find_module__BetterMatchFile_65, (MR_String) " in interface search path");
          parse_tree__find_module__Var_79 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__find_module__Var_81);
          parse_tree__find_module__Error_27 = mercury__string__f_43_43_2_f_0(parse_tree__find_module__Msg0_63, parse_tree__find_module__Var_79);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__find_module__MaybeFileNameAndStream_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__find_module__Error_27));
          }
        }
        else
        {
          MR_String parse_tree__find_module__IntFile_28;
          MR_Word parse_tree__find_module__MaybeIntDir_29;
          MR_String parse_tree__find_module__IntDir_30;
          MR_String parse_tree__find_module__Var_56;

          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__find_module__Globals_8, (MR_Integer) 1, (MR_String) ".int", parse_tree__find_module__ModuleName_11, &parse_tree__find_module__IntFile_28);
          libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__find_module__InterfaceDirs_10, parse_tree__find_module__IntFile_28, &parse_tree__find_module__MaybeIntDir_29);
          parse_tree__find_module__succeeded = ((MR_tag((MR_Word) parse_tree__find_module__MaybeIntDir_29)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__find_module__succeeded)
          {
            parse_tree__find_module__IntDir_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__find_module__MaybeIntDir_29, (MR_Integer) 0)));
            parse_tree__find_module__Var_56 = mercury__dir__this_directory_0_f_0();
            parse_tree__find_module__succeeded = (strcmp(parse_tree__find_module__IntDir_30, parse_tree__find_module__Var_56) == 0);
            parse_tree__find_module__succeeded = !(parse_tree__find_module__succeeded);
          }
          if (parse_tree__find_module__succeeded)
          {
            MR_Word parse_tree__find_module__Var_51;
            MR_String parse_tree__find_module__Var_52;
            MR_String parse_tree__find_module__Error_53;

            mercury__io__close_input_3_p_0(parse_tree__find_module__SourceStream_16);
            parse_tree__find_module__Var_52 = mercury__dir__f_slash_2_f_0(parse_tree__find_module__IntDir_30, parse_tree__find_module__IntFile_28);
            {
              parse_tree__find_module__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__find_module__Var_51, 0) = ((MR_Box) (parse_tree__find_module__Var_52));
            }
            parse_tree__find_module__Error_53 = parse_tree__find_module__find_source_error_3_f_0(parse_tree__find_module__ModuleName_11, parse_tree__find_module__Dirs_9, parse_tree__find_module__Var_51);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__find_module__MaybeFileNameAndStream_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__find_module__Error_53));
            }
          }
          else
            *parse_tree__find_module__MaybeFileNameAndStream_12 = parse_tree__find_module__MaybeFileNameAndStream0_14;
        }
      }
      else
        *parse_tree__find_module__MaybeFileNameAndStream_12 = parse_tree__find_module__MaybeFileNameAndStream0_14;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__find_source_error_3_f_0_1(
  MR_Box parse_tree__find_module__closure_arg,
  MR_Box parse_tree__find_module__wrapper_arg_1)
{
  {
    MR_Box parse_tree__find_module__wrapper_arg_2;
    MR_Box parse_tree__find_module__closure = parse_tree__find_module__closure_arg;
    MR_String parse_tree__find_module__conv0_LambdaHeadVar__2_22;

    parse_tree__find_module__conv0_LambdaHeadVar__2_22 = parse_tree__find_module__IntroducedFrom__func__find_source_error__234__1_1_f_0(((MR_String) parse_tree__find_module__wrapper_arg_1));
    parse_tree__find_module__wrapper_arg_2 = ((MR_Box) (parse_tree__find_module__conv0_LambdaHeadVar__2_22));
    return parse_tree__find_module__wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__find_module__find_source_error_3_f_0(
  MR_Word parse_tree__find_module__ModuleName_5,
  MR_Word parse_tree__find_module__Dirs_6,
  MR_Word parse_tree__find_module__MaybeBetterMatch_7)
{
  {
    MR_String parse_tree__find_module__Msg_8;
    MR_Word parse_tree__find_module__TypeCtorInfo_31_31;
    MR_String parse_tree__find_module__ModuleNameStr_9;
    MR_String parse_tree__find_module__Msg0_10;
    MR_String parse_tree__find_module__Var_14;
    MR_String parse_tree__find_module__Var_15;
    MR_String parse_tree__find_module__Var_17;
    MR_Word parse_tree__find_module__Var_19;

    parse_tree__find_module__ModuleNameStr_9 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__find_module__ModuleName_5);
    parse_tree__find_module__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    parse_tree__find_module__Var_19 = mercury__list__map_2_f_0(parse_tree__find_module__TypeCtorInfo_31_31, parse_tree__find_module__TypeCtorInfo_31_31, (MR_Word) &parse_tree__find_module_scalar_common_3[1], parse_tree__find_module__Dirs_6);
    parse_tree__find_module__Var_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__find_module__Var_19);
    parse_tree__find_module__Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__find_module__Var_17);
    parse_tree__find_module__Var_14 = mercury__string__f_43_43_2_f_0(parse_tree__find_module__ModuleNameStr_9, parse_tree__find_module__Var_15);
    parse_tree__find_module__Msg0_10 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__find_module__Var_14);
    if ((parse_tree__find_module__MaybeBetterMatch_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__find_module__Msg_8 = parse_tree__find_module__Msg0_10;
    else
    {
      MR_String parse_tree__find_module__BetterMatchFile_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__find_module__MaybeBetterMatch_7, (MR_Integer) 0)));
      MR_String parse_tree__find_module__Var_26;
      MR_String parse_tree__find_module__Var_28;

      parse_tree__find_module__Var_28 = mercury__string__f_43_43_2_f_0(parse_tree__find_module__BetterMatchFile_12, (MR_String) " in interface search path");
      parse_tree__find_module__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__find_module__Var_28);
      parse_tree__find_module__Msg_8 = mercury__string__f_43_43_2_f_0(parse_tree__find_module__Msg0_10, parse_tree__find_module__Var_26);
    }
    return parse_tree__find_module__Msg_8;
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0_1(
  MR_Box parse_tree__find_module__closure_arg,
  MR_Box parse_tree__find_module__wrapper_arg_1)
{
  {
    MR_Box parse_tree__find_module__wrapper_arg_2;
    MR_Box parse_tree__find_module__closure = parse_tree__find_module__closure_arg;
    MR_String parse_tree__find_module__conv0_LambdaHeadVar__2_22;

    parse_tree__find_module__conv0_LambdaHeadVar__2_22 = parse_tree__find_module__IntroducedFrom__func__find_source_error__234__1_1_f_0(((MR_String) parse_tree__find_module__wrapper_arg_1));
    parse_tree__find_module__wrapper_arg_2 = ((MR_Box) (parse_tree__find_module__conv0_LambdaHeadVar__2_22));
    return parse_tree__find_module__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_6_p_0(
  MR_Word parse_tree__find_module__Globals_7,
  MR_Word parse_tree__find_module__Dirs_8,
  MR_Word parse_tree__find_module__ModuleName_9,
  MR_Word * parse_tree__find_module__MaybeErrorFileNameAndStream_10)
{
  {
    MR_Word parse_tree__find_module__MaybeFileNameAndStream_12;

    parse_tree__find_module__search_for_module_source_dropping_qualifiers_loop_6_p_0(parse_tree__find_module__Globals_7, parse_tree__find_module__Dirs_8, parse_tree__find_module__ModuleName_9, &parse_tree__find_module__MaybeFileNameAndStream_12);
    if ((parse_tree__find_module__MaybeFileNameAndStream_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word parse_tree__find_module__TypeCtorInfo_31_45;
      MR_String parse_tree__find_module__Error_14;
      MR_String parse_tree__find_module__ModuleNameStr_23;
      MR_String parse_tree__find_module__Var_28;
      MR_String parse_tree__find_module__Var_29;
      MR_String parse_tree__find_module__Var_31;
      MR_Word parse_tree__find_module__Var_33;

      parse_tree__find_module__ModuleNameStr_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__find_module__ModuleName_9);
      parse_tree__find_module__TypeCtorInfo_31_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      parse_tree__find_module__Var_33 = mercury__list__map_2_f_0(parse_tree__find_module__TypeCtorInfo_31_45, parse_tree__find_module__TypeCtorInfo_31_45, (MR_Word) &parse_tree__find_module_scalar_common_3[0], parse_tree__find_module__Dirs_8);
      parse_tree__find_module__Var_31 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__find_module__Var_33);
      parse_tree__find_module__Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__find_module__Var_31);
      parse_tree__find_module__Var_28 = mercury__string__f_43_43_2_f_0(parse_tree__find_module__ModuleNameStr_23, parse_tree__find_module__Var_29);
      parse_tree__find_module__Error_14 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__find_module__Var_28);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__find_module__MaybeErrorFileNameAndStream_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__find_module__Error_14));
      }
    }
    else
    {
      MR_Word parse_tree__find_module__FileNameAndStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__find_module__MaybeFileNameAndStream_12, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__find_module__MaybeErrorFileNameAndStream_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__find_module__FileNameAndStream_13));
      }
    }
  }
}

static void MR_CALL 
parse_tree__find_module__search_for_module_source_dropping_qualifiers_loop_6_p_0(
  MR_Word parse_tree__find_module__Globals_7,
  MR_Word parse_tree__find_module__Dirs_8,
  MR_Word parse_tree__find_module__PartialModuleName0_9,
  MR_Word * parse_tree__find_module__MaybeFileNameAndStream_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool parse_tree__find_module__succeeded;
      MR_String parse_tree__find_module__FileName0_12;
      MR_Word parse_tree__find_module__MaybeFileNameAndStream0_13;

      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__find_module__Globals_7, (MR_Integer) 1, (MR_String) ".m", parse_tree__find_module__PartialModuleName0_9, &parse_tree__find_module__FileName0_12);
      libs__file_util__search_for_file_and_stream_5_p_0(parse_tree__find_module__Dirs_8, parse_tree__find_module__FileName0_12, &parse_tree__find_module__MaybeFileNameAndStream0_13);
      if (((MR_tag((MR_Word) parse_tree__find_module__MaybeFileNameAndStream0_13)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__find_module__PartialModuleName1_16;
        MR_Word parse_tree__find_module__ParentModuleName_26;
        MR_String parse_tree__find_module__ChildName_27;

        parse_tree__find_module__succeeded = ((MR_tag((MR_Word) parse_tree__find_module__PartialModuleName0_9)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__find_module__succeeded)
        {
          parse_tree__find_module__ParentModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__find_module__PartialModuleName0_9, (MR_Integer) 0)));
          parse_tree__find_module__ChildName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__find_module__PartialModuleName0_9, (MR_Integer) 1)));
          parse_tree__find_module__drop_outermost_qualifier_loop_3_p_0(parse_tree__find_module__ParentModuleName_26, parse_tree__find_module__ChildName_27, &parse_tree__find_module__PartialModuleName1_16);
          parse_tree__find_module__succeeded = MR_TRUE;
        }
        if (parse_tree__find_module__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word parse_tree__find_module__next_value_of_PartialModuleName0_9 = parse_tree__find_module__PartialModuleName1_16;

            parse_tree__find_module__PartialModuleName0_9 = parse_tree__find_module__next_value_of_PartialModuleName0_9;
          }
          continue;
        }
        else
          *parse_tree__find_module__MaybeFileNameAndStream_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word parse_tree__find_module__FileNameAndStream0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__find_module__MaybeFileNameAndStream0_13, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__find_module__MaybeFileNameAndStream_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__find_module__FileNameAndStream0_14));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__find_module__drop_outermost_qualifier_loop_3_p_0(
  MR_Word parse_tree__find_module__ParentModuleName_4,
  MR_String parse_tree__find_module__ChildName_5,
  MR_Word * parse_tree__find_module__DroppedQualifierSymName_6)
{
  if (((MR_tag((MR_Word) parse_tree__find_module__ParentModuleName_4)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word parse_tree__find_module__GrandParentModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__find_module__ParentModuleName_4, (MR_Integer) 0)));
    MR_String parse_tree__find_module__ParentName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__find_module__ParentModuleName_4, (MR_Integer) 1)));
    MR_Word parse_tree__find_module__DroppedQualifierGrandParentModuleName_10;

    parse_tree__find_module__drop_outermost_qualifier_loop_3_p_0(parse_tree__find_module__GrandParentModuleName_8, parse_tree__find_module__ParentName_9, &parse_tree__find_module__DroppedQualifierGrandParentModuleName_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__find_module__DroppedQualifierSymName_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__find_module__DroppedQualifierGrandParentModuleName_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__find_module__ChildName_5));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__find_module__DroppedQualifierSymName_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__find_module__ChildName_5));
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

/* :- end_module parse_tree.find_module. */
