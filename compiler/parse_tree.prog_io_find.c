/*
** Automatically generated from `prog_io_find.m'
** by the Mercury compiler,
** version DEV
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


/* :- module parse_tree.prog_io_find. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_find__init
ENDINIT
*/

#include "parse_tree.prog_io_find.mih"


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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static MR_String MR_CALL 
parse_tree__prog_io_find__IntroducedFrom__func__find_source_error__176__1_1_f_0(
  MR_String parse_tree__prog_io_find__LambdaHeadVar__1_21);

static MR_Box MR_CALL 
parse_tree__prog_io_find__find_source_error_3_f_0_1(
  MR_Box parse_tree__prog_io_find__closure_arg,
  MR_Box parse_tree__prog_io_find__wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__prog_io_find__find_source_error_3_f_0(
  MR_Word parse_tree__prog_io_find__ModuleName_5,
  MR_Word parse_tree__prog_io_find__Dirs_6,
  MR_Word parse_tree__prog_io_find__MaybeBetterMatch_7);

static MR_Word MR_CALL 
parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(
  MR_Word parse_tree__prog_io_find__ParentQual_4,
  MR_String parse_tree__prog_io_find__ChildName_5);

static MR_Box MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0_1(
  MR_Box parse_tree__prog_io_find__closure_arg,
  MR_Box parse_tree__prog_io_find__wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(
  MR_Word parse_tree__prog_io_find__Globals_8,
  MR_Word parse_tree__prog_io_find__Dirs_9,
  MR_Word parse_tree__prog_io_find__ModuleName_10,
  MR_Word parse_tree__prog_io_find__PartialModuleName_11,
  MR_Word * parse_tree__prog_io_find__MaybeFileName_12);

static MR_Box MR_CALL 
parse_tree__prog_io_find__search_for_module_source_7_p_0_1(
  MR_Box parse_tree__prog_io_find__closure_arg,
  MR_Box parse_tree__prog_io_find__wrapper_arg_1);


static /* final */ const MR_Box parse_tree__prog_io_find_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__prog_io_find_scalar_common_2[1][5];

static /* final */ const MR_Box parse_tree__prog_io_find_scalar_common_3[3][3];




static /* final */ const MR_Box parse_tree__prog_io_find_scalar_common_1[5][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_find_scalar_common_1[0])))
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

static /* final */ const MR_Box parse_tree__prog_io_find_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_find_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_find_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_io_find__search_for_module_source_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_find_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_find_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_io_find__find_source_error_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_String MR_CALL 
parse_tree__prog_io_find__IntroducedFrom__func__find_source_error__176__1_1_f_0(
  MR_String parse_tree__prog_io_find__LambdaHeadVar__1_21)
{
  {
    MR_bool parse_tree__prog_io_find__succeeded;
    MR_String parse_tree__prog_io_find__LambdaHeadVar__2_22;
    MR_String parse_tree__prog_io_find__V_24_24;

    {
      parse_tree__prog_io_find__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__LambdaHeadVar__1_21, (MR_String) "\'");
    }
    {
      parse_tree__prog_io_find__LambdaHeadVar__2_22 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__prog_io_find__V_24_24);
    }
    return parse_tree__prog_io_find__LambdaHeadVar__2_22;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_io_find__find_source_error_3_f_0_1(
  MR_Box parse_tree__prog_io_find__closure_arg,
  MR_Box parse_tree__prog_io_find__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_io_find__wrapper_arg_2;
    MR_Box parse_tree__prog_io_find__closure = parse_tree__prog_io_find__closure_arg;
    MR_String parse_tree__prog_io_find__conv0_LambdaHeadVar__2_22;

    {
      parse_tree__prog_io_find__conv0_LambdaHeadVar__2_22 = parse_tree__prog_io_find__IntroducedFrom__func__find_source_error__176__1_1_f_0(((MR_String) parse_tree__prog_io_find__wrapper_arg_1));
    }
    parse_tree__prog_io_find__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_find__conv0_LambdaHeadVar__2_22));
    return parse_tree__prog_io_find__wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__prog_io_find__find_source_error_3_f_0(
  MR_Word parse_tree__prog_io_find__ModuleName_5,
  MR_Word parse_tree__prog_io_find__Dirs_6,
  MR_Word parse_tree__prog_io_find__MaybeBetterMatch_7)
{
  {
    MR_bool parse_tree__prog_io_find__succeeded;
    MR_String parse_tree__prog_io_find__Msg_8;
    MR_Word parse_tree__prog_io_find__TypeCtorInfo_31_31;
    MR_String parse_tree__prog_io_find__ModuleNameStr_9;
    MR_String parse_tree__prog_io_find__Msg0_10;
    MR_String parse_tree__prog_io_find__V_14_14;
    MR_String parse_tree__prog_io_find__V_15_15;
    MR_String parse_tree__prog_io_find__V_17_17;
    MR_Word parse_tree__prog_io_find__V_19_19;

    {
      parse_tree__prog_io_find__ModuleNameStr_9 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_5);
    }
    parse_tree__prog_io_find__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__prog_io_find__V_19_19 = mercury__list__map_2_f_0(parse_tree__prog_io_find__TypeCtorInfo_31_31, parse_tree__prog_io_find__TypeCtorInfo_31_31, (MR_Word) &parse_tree__prog_io_find_scalar_common_3[2], parse_tree__prog_io_find__Dirs_6);
    }
    {
      parse_tree__prog_io_find__V_17_17 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__V_19_19);
    }
    {
      parse_tree__prog_io_find__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_17_17);
    }
    {
      parse_tree__prog_io_find__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_9, parse_tree__prog_io_find__V_15_15);
    }
    {
      parse_tree__prog_io_find__Msg0_10 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_14_14);
    }
    if ((parse_tree__prog_io_find__MaybeBetterMatch_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__prog_io_find__Msg_8 = parse_tree__prog_io_find__Msg0_10;
    else
      {
        MR_String parse_tree__prog_io_find__BetterMatchFile_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__MaybeBetterMatch_7, (MR_Integer) 0)));
        MR_String parse_tree__prog_io_find__V_26_26;
        MR_String parse_tree__prog_io_find__V_28_28;

        {
          parse_tree__prog_io_find__V_28_28 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__BetterMatchFile_12, (MR_String) " in interface search path");
        }
        {
          parse_tree__prog_io_find__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io_find__V_28_28);
        }
        {
          parse_tree__prog_io_find__Msg_8 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__Msg0_10, parse_tree__prog_io_find__V_26_26);
        }
      }
    return parse_tree__prog_io_find__Msg_8;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(
  MR_Word parse_tree__prog_io_find__ParentQual_4,
  MR_String parse_tree__prog_io_find__ChildName_5)
{
  {
    MR_bool parse_tree__prog_io_find__succeeded;
    MR_Word parse_tree__prog_io_find__PartialQual_6;

    if (((MR_tag((MR_Word) parse_tree__prog_io_find__ParentQual_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_io_find__GrandParentQual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__ParentQual_4, (MR_Integer) 0)));
        MR_String parse_tree__prog_io_find__ParentName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__ParentQual_4, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_find__PartialGrandParentQual_10;

        {
          parse_tree__prog_io_find__PartialGrandParentQual_10 = parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(parse_tree__prog_io_find__GrandParentQual_8, parse_tree__prog_io_find__ParentName_9);
        }
        {
          parse_tree__prog_io_find__PartialQual_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io_find__PartialGrandParentQual_10));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialQual_6, 1) = ((MR_Box) (parse_tree__prog_io_find__ChildName_5));
        }
      }
    else
      {
        parse_tree__prog_io_find__PartialQual_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io_find__ChildName_5));
      }
    return parse_tree__prog_io_find__PartialQual_6;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0_1(
  MR_Box parse_tree__prog_io_find__closure_arg,
  MR_Box parse_tree__prog_io_find__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_io_find__wrapper_arg_2;
    MR_Box parse_tree__prog_io_find__closure = parse_tree__prog_io_find__closure_arg;
    MR_String parse_tree__prog_io_find__conv0_LambdaHeadVar__2_22;

    {
      parse_tree__prog_io_find__conv0_LambdaHeadVar__2_22 = parse_tree__prog_io_find__IntroducedFrom__func__find_source_error__176__1_1_f_0(((MR_String) parse_tree__prog_io_find__wrapper_arg_1));
    }
    parse_tree__prog_io_find__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_find__conv0_LambdaHeadVar__2_22));
    return parse_tree__prog_io_find__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(
  MR_Word parse_tree__prog_io_find__Globals_8,
  MR_Word parse_tree__prog_io_find__Dirs_9,
  MR_Word parse_tree__prog_io_find__ModuleName_10,
  MR_Word parse_tree__prog_io_find__PartialModuleName_11,
  MR_Word * parse_tree__prog_io_find__MaybeFileName_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_io_find__succeeded;
        MR_String parse_tree__prog_io_find__FileName_14;
        MR_Word parse_tree__prog_io_find__MaybeFileName0_15;

        {
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__PartialModuleName_11, (MR_String) ".m", (MR_Integer) 1, &parse_tree__prog_io_find__FileName_14);
        }
        {
          libs__file_util__search_for_file_6_p_0((MR_Integer) 0, parse_tree__prog_io_find__Dirs_9, parse_tree__prog_io_find__FileName_14, &parse_tree__prog_io_find__MaybeFileName0_15);
        }
        if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName0_15)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__prog_io_find__PartialModuleName1_18;
            MR_Word parse_tree__prog_io_find__ParentQual_29;
            MR_String parse_tree__prog_io_find__ChildName_30;

            parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__PartialModuleName_11)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_find__succeeded)
              {
                parse_tree__prog_io_find__ParentQual_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialModuleName_11, (MR_Integer) 0)));
                parse_tree__prog_io_find__ChildName_30 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialModuleName_11, (MR_Integer) 1)));
                {
                  parse_tree__prog_io_find__PartialModuleName1_18 = parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(parse_tree__prog_io_find__ParentQual_29, parse_tree__prog_io_find__ChildName_30);
                }
                parse_tree__prog_io_find__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_io_find__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__prog_io_find__PartialModuleName__tmp_copy_11 = parse_tree__prog_io_find__PartialModuleName1_18;

                  parse_tree__prog_io_find__PartialModuleName_11 = parse_tree__prog_io_find__PartialModuleName__tmp_copy_11;
                }
                continue;
              }
            else
              {
                MR_Word parse_tree__prog_io_find__TypeCtorInfo_31_57;
                MR_String parse_tree__prog_io_find__ModuleNameStr_35;
                MR_String parse_tree__prog_io_find__Msg0_36;
                MR_String parse_tree__prog_io_find__V_40_40;
                MR_String parse_tree__prog_io_find__V_41_41;
                MR_String parse_tree__prog_io_find__V_43_43;
                MR_Word parse_tree__prog_io_find__V_45_45;

                {
                  parse_tree__prog_io_find__ModuleNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_10);
                }
                parse_tree__prog_io_find__TypeCtorInfo_31_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                {
                  parse_tree__prog_io_find__V_45_45 = mercury__list__map_2_f_0(parse_tree__prog_io_find__TypeCtorInfo_31_57, parse_tree__prog_io_find__TypeCtorInfo_31_57, (MR_Word) &parse_tree__prog_io_find_scalar_common_3[1], parse_tree__prog_io_find__Dirs_9);
                }
                {
                  parse_tree__prog_io_find__V_43_43 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__V_45_45);
                }
                {
                  parse_tree__prog_io_find__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_43_43);
                }
                {
                  parse_tree__prog_io_find__V_40_40 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_35, parse_tree__prog_io_find__V_41_41);
                }
                {
                  parse_tree__prog_io_find__Msg0_36 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_40_40);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_find__MaybeFileName_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__Msg0_36));
                }
              }
          }
        else
          *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
      }
      break;
    }
}

void MR_CALL 
parse_tree__prog_io_find__find_module_name_5_p_0(
  MR_Word parse_tree__prog_io_find__Globals_6,
  MR_String parse_tree__prog_io_find__FileName_7,
  MR_Word * parse_tree__prog_io_find__MaybeModuleName_8)
{
  {
    MR_bool parse_tree__prog_io_find__succeeded;
    MR_Word parse_tree__prog_io_find__OpenRes_10;

    {
      mercury__io__open_input_4_p_0(parse_tree__prog_io_find__FileName_7, &parse_tree__prog_io_find__OpenRes_10);
    }
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__OpenRes_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_io_find__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__OpenRes_10, (MR_Integer) 0)));
        MR_String parse_tree__prog_io_find__ErrorMsg_24;
        MR_String parse_tree__prog_io_find__Progname_25;
        MR_Word parse_tree__prog_io_find__Pieces_26;
        MR_Word parse_tree__prog_io_find__Spec_27;
        MR_Word parse_tree__prog_io_find__V_33_33;
        MR_Word parse_tree__prog_io_find__V_34_34;
        MR_Word parse_tree__prog_io_find__V_35_35;
        MR_Word parse_tree__prog_io_find__V_37_37;
        MR_Word parse_tree__prog_io_find__V_40_40;
        MR_Word parse_tree__prog_io_find__V_41_41;
        MR_Word parse_tree__prog_io_find__V_42_42;
        MR_Word parse_tree__prog_io_find__V_45_45;
        MR_Word parse_tree__prog_io_find__V_46_46;
        MR_Word parse_tree__prog_io_find__V_55_55;
        MR_Word parse_tree__prog_io_find__V_56_56;
        MR_Word parse_tree__prog_io_find__V_60_60;
        MR_Word parse_tree__prog_io_find__V_61_61;
        MR_Integer parse_tree__prog_io_find___NumWarnings_75;
        MR_Integer parse_tree__prog_io_find___NumErrors_76;

        {
          parse_tree__prog_io_find__ErrorMsg_24 = mercury__io__error_message_1_f_0(parse_tree__prog_io_find__Error_23);
        }
        {
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io_find__Progname_25);
        }
        {
          parse_tree__prog_io_find__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), parse_tree__prog_io_find__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_find__Progname_25));
        }
        parse_tree__prog_io_find__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[3]);
        {
          parse_tree__prog_io_find__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_find__FileName_7));
        }
        {
          parse_tree__prog_io_find__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_find__ErrorMsg_24));
        }
        {
          parse_tree__prog_io_find__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_find__V_46_46));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_find_scalar_common_1[2])));
        }
        {
          parse_tree__prog_io_find__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_find__V_35_35));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_find__V_45_45));
        }
        {
          parse_tree__prog_io_find__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_find__V_41_41));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_find__V_42_42));
        }
        {
          parse_tree__prog_io_find__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[4])));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_find__V_40_40));
        }
        {
          parse_tree__prog_io_find__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_find__V_35_35));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_find__V_37_37));
        }
        {
          parse_tree__prog_io_find__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__Pieces_26, 0) = ((MR_Box) (parse_tree__prog_io_find__V_33_33));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__Pieces_26, 1) = ((MR_Box) (parse_tree__prog_io_find__V_34_34));
        }
        {
          parse_tree__prog_io_find__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_find__Pieces_26));
        }
        {
          parse_tree__prog_io_find__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_find__V_61_61));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_find__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 3) = ((MR_Box) (parse_tree__prog_io_find__V_60_60));
        }
        {
          parse_tree__prog_io_find__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_find__V_56_56));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_find__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 2) = ((MR_Box) (parse_tree__prog_io_find__V_55_55));
        }
        {
          parse_tree__error_util__write_error_spec_8_p_0(parse_tree__prog_io_find__Spec_27, parse_tree__prog_io_find__Globals_6, (MR_Integer) 0, &parse_tree__prog_io_find___NumWarnings_75, (MR_Integer) 0, &parse_tree__prog_io_find___NumErrors_76);
        }
        *parse_tree__prog_io_find__MaybeModuleName_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word parse_tree__prog_io_find__InputStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__OpenRes_10, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_find__OldInputStream_12;
        MR_String parse_tree__prog_io_find__PartialFileName_14;
        MR_String parse_tree__prog_io_find__BaseName_16;
        MR_Word parse_tree__prog_io_find__DefaultModuleName_17;
        MR_Word parse_tree__prog_io_find__ModuleName_18;
        MR_Word parse_tree__prog_io_find__Specs_19;
        MR_String parse_tree__prog_io_find__PartialFileName0_13;
        MR_String parse_tree__prog_io_find__BaseName0_15;
        MR_Integer parse_tree__prog_io_find___NumWarnings_20;
        MR_Integer parse_tree__prog_io_find___NumErrors_21;
        MR_Word parse_tree__prog_io_find__V_22_22;

        {
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__InputStream_11, &parse_tree__prog_io_find__OldInputStream_12);
        }
        {
          parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__FileName_7, (MR_String) ".m", &parse_tree__prog_io_find__PartialFileName0_13);
        }
        if (parse_tree__prog_io_find__succeeded)
          parse_tree__prog_io_find__PartialFileName_14 = parse_tree__prog_io_find__PartialFileName0_13;
        else
          parse_tree__prog_io_find__PartialFileName_14 = parse_tree__prog_io_find__FileName_7;
        {
          parse_tree__prog_io_find__succeeded = mercury__dir__basename_2_p_0(parse_tree__prog_io_find__PartialFileName_14, &parse_tree__prog_io_find__BaseName0_15);
        }
        if (parse_tree__prog_io_find__succeeded)
          parse_tree__prog_io_find__BaseName_16 = parse_tree__prog_io_find__BaseName0_15;
        else
          parse_tree__prog_io_find__BaseName_16 = (MR_String) "";
        {
          parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io_find__BaseName_16, &parse_tree__prog_io_find__DefaultModuleName_17);
        }
        {
          parse_tree__prog_io__peek_at_file_6_p_0(parse_tree__prog_io_find__DefaultModuleName_17, parse_tree__prog_io_find__FileName_7, &parse_tree__prog_io_find__ModuleName_18, &parse_tree__prog_io_find__Specs_19);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_find__MaybeModuleName_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__ModuleName_18));
        }
        {
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__prog_io_find__Specs_19, parse_tree__prog_io_find__Globals_6, (MR_Integer) 0, &parse_tree__prog_io_find___NumWarnings_20, (MR_Integer) 0, &parse_tree__prog_io_find___NumErrors_21);
        }
        {
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__OldInputStream_12, &parse_tree__prog_io_find__V_22_22);
        }
        {
          mercury__io__close_input_3_p_0(parse_tree__prog_io_find__InputStream_11);
        }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__prog_io_find__search_for_module_source_7_p_0_1(
  MR_Box parse_tree__prog_io_find__closure_arg,
  MR_Box parse_tree__prog_io_find__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_io_find__wrapper_arg_2;
    MR_Box parse_tree__prog_io_find__closure = parse_tree__prog_io_find__closure_arg;
    MR_String parse_tree__prog_io_find__conv0_LambdaHeadVar__2_22;

    {
      parse_tree__prog_io_find__conv0_LambdaHeadVar__2_22 = parse_tree__prog_io_find__IntroducedFrom__func__find_source_error__176__1_1_f_0(((MR_String) parse_tree__prog_io_find__wrapper_arg_1));
    }
    parse_tree__prog_io_find__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_find__conv0_LambdaHeadVar__2_22));
    return parse_tree__prog_io_find__wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_7_p_0(
  MR_Word parse_tree__prog_io_find__Globals_8,
  MR_Word parse_tree__prog_io_find__Dirs_9,
  MR_Word parse_tree__prog_io_find__InterfaceDirs_10,
  MR_Word parse_tree__prog_io_find__ModuleName_11,
  MR_Word * parse_tree__prog_io_find__MaybeFileName_12)
{
  {
    MR_bool parse_tree__prog_io_find__succeeded;
    MR_Word parse_tree__prog_io_find__MaybeFileName0_15;

    {
      parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__Dirs_9, parse_tree__prog_io_find__ModuleName_11, parse_tree__prog_io_find__ModuleName_11, &parse_tree__prog_io_find__MaybeFileName0_15);
    }
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName0_15)) == (MR_mktag((MR_Integer) 1))))
      *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
    else
      {
        MR_String parse_tree__prog_io_find__SourceFileName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeFileName0_15, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_find__SourceFileModuleName_18;
        MR_String parse_tree__prog_io_find__SourceFileBaseName_17;
        MR_String parse_tree__prog_io_find__V_34_34;
        MR_String parse_tree__prog_io_find__V_35_35;

        {
          parse_tree__prog_io_find__succeeded = mercury__dir__basename_1_f_0(parse_tree__prog_io_find__SourceFileName_16, &parse_tree__prog_io_find__V_34_34);
        }
        if (parse_tree__prog_io_find__succeeded)
          {
            parse_tree__prog_io_find__V_35_35 = (MR_String) ".m";
            {
              parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__V_34_34, parse_tree__prog_io_find__V_35_35, &parse_tree__prog_io_find__SourceFileBaseName_17);
            }
            if (parse_tree__prog_io_find__succeeded)
              {
                {
                  parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io_find__SourceFileBaseName_17, &parse_tree__prog_io_find__SourceFileModuleName_18);
                }
                {
                  parse_tree__prog_io_find__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_find__ModuleName_11, parse_tree__prog_io_find__SourceFileModuleName_18);
                }
                parse_tree__prog_io_find__succeeded = !(parse_tree__prog_io_find__succeeded);
              }
          }
        if (parse_tree__prog_io_find__succeeded)
          {
            MR_Word parse_tree__prog_io_find__SourceStream_19;
            MR_Word parse_tree__prog_io_find__MaybeFileName2_20;
            MR_String parse_tree__prog_io_find__SourceFileName2_23;
            MR_String parse_tree__prog_io_find__SourceFileBaseName2_24;
            MR_Word parse_tree__prog_io_find__SourceFileModuleName2_25;
            MR_String parse_tree__prog_io_find__V_40_40;
            MR_String parse_tree__prog_io_find__V_41_41;

            {
              mercury__io__input_stream_3_p_0(&parse_tree__prog_io_find__SourceStream_19);
            }
            {
              parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__InterfaceDirs_10, parse_tree__prog_io_find__ModuleName_11, parse_tree__prog_io_find__ModuleName_11, &parse_tree__prog_io_find__MaybeFileName2_20);
            }
            if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName2_20)) == (MR_mktag((MR_Integer) 1))))
              {
              }
            else
              {
                mercury__io__seen_2_p_0();
              }
            parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName2_20)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_find__succeeded)
              {
                parse_tree__prog_io_find__SourceFileName2_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeFileName2_20, (MR_Integer) 0)));
                parse_tree__prog_io_find__succeeded = (strcmp(parse_tree__prog_io_find__SourceFileName2_23, parse_tree__prog_io_find__SourceFileName_16) == 0);
                parse_tree__prog_io_find__succeeded = !(parse_tree__prog_io_find__succeeded);
                if (parse_tree__prog_io_find__succeeded)
                  {
                    {
                      parse_tree__prog_io_find__succeeded = mercury__dir__basename_1_f_0(parse_tree__prog_io_find__SourceFileName2_23, &parse_tree__prog_io_find__V_40_40);
                    }
                    if (parse_tree__prog_io_find__succeeded)
                      {
                        parse_tree__prog_io_find__V_41_41 = (MR_String) ".m";
                        {
                          parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__V_40_40, parse_tree__prog_io_find__V_41_41, &parse_tree__prog_io_find__SourceFileBaseName2_24);
                        }
                        if (parse_tree__prog_io_find__succeeded)
                          {
                            {
                              parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io_find__SourceFileBaseName2_24, &parse_tree__prog_io_find__SourceFileModuleName2_25);
                            }
                            {
                              parse_tree__prog_io_find__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_find__SourceFileModuleName_18, parse_tree__prog_io_find__SourceFileModuleName2_25);
                            }
                          }
                      }
                  }
              }
            if (parse_tree__prog_io_find__succeeded)
              {
                MR_Word parse_tree__prog_io_find__TypeCtorInfo_31_83;
                MR_String parse_tree__prog_io_find__V_43_43;
                MR_Word parse_tree__prog_io_find__V_44_44;
                MR_String parse_tree__prog_io_find__ModuleNameStr_61;
                MR_String parse_tree__prog_io_find__Msg0_62;
                MR_String parse_tree__prog_io_find__BetterMatchFile_64;
                MR_String parse_tree__prog_io_find__V_66_66;
                MR_String parse_tree__prog_io_find__V_67_67;
                MR_String parse_tree__prog_io_find__V_69_69;
                MR_Word parse_tree__prog_io_find__V_71_71;
                MR_String parse_tree__prog_io_find__V_78_78;
                MR_String parse_tree__prog_io_find__V_80_80;

                {
                  mercury__io__close_input_3_p_0(parse_tree__prog_io_find__SourceStream_19);
                }
                {
                  parse_tree__prog_io_find__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_find__SourceFileName2_23));
                }
                {
                  parse_tree__prog_io_find__ModuleNameStr_61 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_11);
                }
                parse_tree__prog_io_find__TypeCtorInfo_31_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                {
                  parse_tree__prog_io_find__V_71_71 = mercury__list__map_2_f_0(parse_tree__prog_io_find__TypeCtorInfo_31_83, parse_tree__prog_io_find__TypeCtorInfo_31_83, (MR_Word) &parse_tree__prog_io_find_scalar_common_3[0], parse_tree__prog_io_find__Dirs_9);
                }
                {
                  parse_tree__prog_io_find__V_69_69 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__V_71_71);
                }
                {
                  parse_tree__prog_io_find__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_69_69);
                }
                {
                  parse_tree__prog_io_find__V_66_66 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_61, parse_tree__prog_io_find__V_67_67);
                }
                {
                  parse_tree__prog_io_find__Msg0_62 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_66_66);
                }
                parse_tree__prog_io_find__BetterMatchFile_64 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_44_44, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_find__V_80_80 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__BetterMatchFile_64, (MR_String) " in interface search path");
                }
                {
                  parse_tree__prog_io_find__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io_find__V_80_80);
                }
                {
                  parse_tree__prog_io_find__V_43_43 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__Msg0_62, parse_tree__prog_io_find__V_78_78);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_find__MaybeFileName_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__V_43_43));
                }
              }
            else
              {
                MR_String parse_tree__prog_io_find__IntFile_26;
                MR_Word parse_tree__prog_io_find__MaybeIntDir_27;
                MR_String parse_tree__prog_io_find__IntDir_28;
                MR_String parse_tree__prog_io_find__V_55_55;

                {
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__ModuleName_11, (MR_String) ".int", (MR_Integer) 1, &parse_tree__prog_io_find__IntFile_26);
                }
                {
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__prog_io_find__InterfaceDirs_10, parse_tree__prog_io_find__IntFile_26, &parse_tree__prog_io_find__MaybeIntDir_27);
                }
                parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeIntDir_27)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__prog_io_find__succeeded)
                  {
                    parse_tree__prog_io_find__IntDir_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeIntDir_27, (MR_Integer) 0)));
                    {
                      parse_tree__prog_io_find__V_55_55 = mercury__dir__this_directory_0_f_0();
                    }
                    parse_tree__prog_io_find__succeeded = (strcmp(parse_tree__prog_io_find__IntDir_28, parse_tree__prog_io_find__V_55_55) == 0);
                    parse_tree__prog_io_find__succeeded = !(parse_tree__prog_io_find__succeeded);
                  }
                if (parse_tree__prog_io_find__succeeded)
                  {
                    MR_String parse_tree__prog_io_find__V_51_51;
                    MR_Word parse_tree__prog_io_find__V_52_52;
                    MR_String parse_tree__prog_io_find__V_53_53;

                    {
                      mercury__io__close_input_3_p_0(parse_tree__prog_io_find__SourceStream_19);
                    }
                    {
                      parse_tree__prog_io_find__V_53_53 = mercury__dir__f_slash_2_f_0(parse_tree__prog_io_find__IntDir_28, parse_tree__prog_io_find__IntFile_26);
                    }
                    {
                      parse_tree__prog_io_find__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_find__V_53_53));
                    }
                    {
                      parse_tree__prog_io_find__V_51_51 = parse_tree__prog_io_find__find_source_error_3_f_0(parse_tree__prog_io_find__ModuleName_11, parse_tree__prog_io_find__Dirs_9, parse_tree__prog_io_find__V_52_52);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_find__MaybeFileName_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__V_51_51));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__prog_io_find__V_29_29;

                    {
                      mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__SourceStream_19, &parse_tree__prog_io_find__V_29_29);
                    }
                    *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
                  }
              }
          }
        else
          *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
      }
  }
}

void mercury__parse_tree__prog_io_find__init(void)
{
}

void mercury__parse_tree__prog_io_find__init_type_tables(void)
{
}

void mercury__parse_tree__prog_io_find__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_find. */
