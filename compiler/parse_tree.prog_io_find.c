/*
** Automatically generated from `prog_io_find.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 152 "prog_io_find.m"
static MR_Word MR_CALL 
parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(
#line 152 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ParentQual_4,
#line 152 "prog_io_find.m"
  MR_String parse_tree__prog_io_find__ChildName_5);

#line 123 "prog_io_find.m"
static void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(
#line 123 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Globals_8,
#line 123 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Dirs_9,
#line 123 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ModuleName_10,
#line 123 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__PartialModuleName_11,
#line 123 "prog_io_find.m"
  MR_Word * parse_tree__prog_io_find__MaybeFileName_12);


static /* final */ const MR_Box parse_tree__prog_io_find_scalar_common_1[5][2];




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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 152 "prog_io_find.m"
static MR_Word MR_CALL 
parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(
#line 152 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ParentQual_4,
#line 152 "prog_io_find.m"
  MR_String parse_tree__prog_io_find__ChildName_5)
#line 152 "prog_io_find.m"
{
#line 156 "prog_io_find.m"
  {
#line 156 "prog_io_find.m"
    MR_bool parse_tree__prog_io_find__succeeded;
#line 156 "prog_io_find.m"
    MR_Word parse_tree__prog_io_find__PartialQual_6;

#line 156 "prog_io_find.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__ParentQual_4)) == (MR_mktag((MR_Integer) 1))))
#line 159 "prog_io_find.m"
      {
#line 159 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__GrandParentQual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__ParentQual_4, (MR_Integer) 0)));
#line 159 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__ParentName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__ParentQual_4, (MR_Integer) 1)));
#line 159 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__PartialGrandParentQual_10;

#line 160 "prog_io_find.m"
        {
#line 160 "prog_io_find.m"
          parse_tree__prog_io_find__PartialGrandParentQual_10 = parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(parse_tree__prog_io_find__GrandParentQual_8, parse_tree__prog_io_find__ParentName_9);
        }
#line 162 "prog_io_find.m"
        {
#line 162 "prog_io_find.m"
          parse_tree__prog_io_find__PartialQual_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io_find__PartialGrandParentQual_10));
#line 162 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialQual_6, 1) = ((MR_Box) (parse_tree__prog_io_find__ChildName_5));
#line 162 "prog_io_find.m"
        }
#line 159 "prog_io_find.m"
      }
#line 156 "prog_io_find.m"
    else
#line 157 "prog_io_find.m"
      {
#line 157 "prog_io_find.m"
        parse_tree__prog_io_find__PartialQual_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 157 "prog_io_find.m"
        MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io_find__ChildName_5));
#line 157 "prog_io_find.m"
      }
#line 156 "prog_io_find.m"
    return parse_tree__prog_io_find__PartialQual_6;
#line 156 "prog_io_find.m"
  }
#line 152 "prog_io_find.m"
}

#line 123 "prog_io_find.m"
static void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(
#line 123 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Globals_8,
#line 123 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Dirs_9,
#line 123 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ModuleName_10,
#line 123 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__PartialModuleName_11,
#line 123 "prog_io_find.m"
  MR_Word * parse_tree__prog_io_find__MaybeFileName_12)
#line 123 "prog_io_find.m"
{
#line 128 "prog_io_find.m"
  while (MR_TRUE)
#line 128 "prog_io_find.m"
    {
#line 128 "prog_io_find.m"
      /* tailcall optimized into a loop */
#line 128 "prog_io_find.m"
      {
#line 128 "prog_io_find.m"
        MR_bool parse_tree__prog_io_find__succeeded;
#line 128 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__FileName_14;
#line 128 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__MaybeFileName0_15;

#line 129 "prog_io_find.m"
        {
#line 129 "prog_io_find.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__PartialModuleName_11, (MR_String) ".m", (MR_Integer) 1, &parse_tree__prog_io_find__FileName_14);
        }
#line 131 "prog_io_find.m"
        {
#line 131 "prog_io_find.m"
          libs__file_util__search_for_file_6_p_0((MR_Integer) 0, parse_tree__prog_io_find__Dirs_9, parse_tree__prog_io_find__FileName_14, &parse_tree__prog_io_find__MaybeFileName0_15);
        }
#line 135 "prog_io_find.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName0_15)) == (MR_mktag((MR_Integer) 1))))
#line 140 "prog_io_find.m"
          {
#line 140 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__PartialModuleName1_18;
#line 149 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__ParentQual_29;
#line 149 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__ChildName_30;

#line 149 "prog_io_find.m"
            parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__PartialModuleName_11)) == (MR_mktag((MR_Integer) 1)));
#line 149 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 149 "prog_io_find.m"
              {
#line 149 "prog_io_find.m"
                parse_tree__prog_io_find__ParentQual_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialModuleName_11, (MR_Integer) 0)));
#line 149 "prog_io_find.m"
                parse_tree__prog_io_find__ChildName_30 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialModuleName_11, (MR_Integer) 1)));
#line 150 "prog_io_find.m"
                {
#line 150 "prog_io_find.m"
                  parse_tree__prog_io_find__PartialModuleName1_18 = parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(parse_tree__prog_io_find__ParentQual_29, parse_tree__prog_io_find__ChildName_30);
                }
#line 150 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = MR_TRUE;
#line 149 "prog_io_find.m"
              }
#line 140 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 138 "prog_io_find.m"
              {
#line 138 "prog_io_find.m"
                /* direct tailcall eliminated */
#line 138 "prog_io_find.m"
                {
#line 138 "prog_io_find.m"
                  MR_Word parse_tree__prog_io_find__PartialModuleName__tmp_copy_11 = parse_tree__prog_io_find__PartialModuleName1_18;

#line 138 "prog_io_find.m"
                  parse_tree__prog_io_find__PartialModuleName_11 = parse_tree__prog_io_find__PartialModuleName__tmp_copy_11;
#line 138 "prog_io_find.m"
                }
#line 138 "prog_io_find.m"
                continue;
#line 138 "prog_io_find.m"
              }
#line 140 "prog_io_find.m"
            else
#line 141 "prog_io_find.m"
              {
#line 141 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__ModuleNameStr_35;
#line 141 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__Msg0_36;
#line 141 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_39_39;
#line 141 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_40_40;
#line 141 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_42_42;

#line 171 "prog_io_find.m"
                {
#line 171 "prog_io_find.m"
                  parse_tree__prog_io_find__ModuleNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_10);
                }
#line 173 "prog_io_find.m"
                {
#line 173 "prog_io_find.m"
                  parse_tree__prog_io_find__V_42_42 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__Dirs_9);
                }
#line 173 "prog_io_find.m"
                {
#line 173 "prog_io_find.m"
                  parse_tree__prog_io_find__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_42_42);
                }
#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__V_39_39 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_35, parse_tree__prog_io_find__V_40_40);
                }
#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__Msg0_36 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_39_39);
                }
#line 141 "prog_io_find.m"
                {
#line 141 "prog_io_find.m"
                  MR_Word base;
#line 141 "prog_io_find.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_io_find.m"
                  *parse_tree__prog_io_find__MaybeFileName_12 = base;
#line 141 "prog_io_find.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__Msg0_36));
#line 141 "prog_io_find.m"
                }
#line 141 "prog_io_find.m"
              }
#line 140 "prog_io_find.m"
          }
#line 135 "prog_io_find.m"
        else
#line 134 "prog_io_find.m"
          *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 128 "prog_io_find.m"
      }
#line 128 "prog_io_find.m"
      break;
#line 128 "prog_io_find.m"
    }
#line 123 "prog_io_find.m"
}

#line 41 "prog_io_find.m"
void MR_CALL 
parse_tree__prog_io_find__find_module_name_5_p_0(
#line 41 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Globals_6,
#line 41 "prog_io_find.m"
  MR_String parse_tree__prog_io_find__FileName_7,
#line 41 "prog_io_find.m"
  MR_Word * parse_tree__prog_io_find__MaybeModuleName_8)
#line 41 "prog_io_find.m"
{
#line 185 "prog_io_find.m"
  {
#line 185 "prog_io_find.m"
    MR_bool parse_tree__prog_io_find__succeeded;
#line 185 "prog_io_find.m"
    MR_Word parse_tree__prog_io_find__OpenRes_10;

#line 186 "prog_io_find.m"
    {
#line 186 "prog_io_find.m"
      mercury__io__open_input_4_p_0(parse_tree__prog_io_find__FileName_7, &parse_tree__prog_io_find__OpenRes_10);
    }
#line 209 "prog_io_find.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__OpenRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 210 "prog_io_find.m"
      {
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__OpenRes_10, (MR_Integer) 0)));
#line 210 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__ErrorMsg_24;
#line 210 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__Progname_25;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Pieces_26;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Spec_27;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_33_33;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_34_34;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_35_35;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_37_37;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_40_40;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_41_41;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_42_42;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_45_45;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_46_46;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_55_55;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_56_56;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_60_60;
#line 210 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_61_61;
#line 218 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumWarnings_75;
#line 218 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumErrors_76;

#line 211 "prog_io_find.m"
        {
#line 211 "prog_io_find.m"
          parse_tree__prog_io_find__ErrorMsg_24 = mercury__io__error_message_1_f_0(parse_tree__prog_io_find__Error_23);
        }
#line 212 "prog_io_find.m"
        {
#line 212 "prog_io_find.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io_find__Progname_25);
        }
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          parse_tree__prog_io_find__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io_find__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_find__Progname_25));
#line 213 "prog_io_find.m"
        }
#line 213 "prog_io_find.m"
        parse_tree__prog_io_find__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[3]);
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_find__FileName_7));
#line 214 "prog_io_find.m"
        }
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_find__ErrorMsg_24));
#line 214 "prog_io_find.m"
        }
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_find__V_46_46));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_find_scalar_common_1[2])));
#line 214 "prog_io_find.m"
        }
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_find__V_35_35));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_find__V_45_45));
#line 214 "prog_io_find.m"
        }
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_find__V_41_41));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_find__V_42_42));
#line 214 "prog_io_find.m"
        }
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          parse_tree__prog_io_find__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[4])));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_find__V_40_40));
#line 213 "prog_io_find.m"
        }
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          parse_tree__prog_io_find__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_find__V_35_35));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_find__V_37_37));
#line 213 "prog_io_find.m"
        }
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          parse_tree__prog_io_find__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__Pieces_26, 0) = ((MR_Box) (parse_tree__prog_io_find__V_33_33));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__Pieces_26, 1) = ((MR_Box) (parse_tree__prog_io_find__V_34_34));
#line 213 "prog_io_find.m"
        }
#line 216 "prog_io_find.m"
        {
#line 216 "prog_io_find.m"
          parse_tree__prog_io_find__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_find__Pieces_26));
#line 216 "prog_io_find.m"
        }
#line 216 "prog_io_find.m"
        {
#line 216 "prog_io_find.m"
          parse_tree__prog_io_find__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_find__V_61_61));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_io_find.m"
        }
#line 216 "prog_io_find.m"
        {
#line 216 "prog_io_find.m"
          parse_tree__prog_io_find__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 1) = ((MR_Box) ((MR_Integer) 0));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 3) = ((MR_Box) (parse_tree__prog_io_find__V_60_60));
#line 216 "prog_io_find.m"
        }
#line 216 "prog_io_find.m"
        {
#line 216 "prog_io_find.m"
          parse_tree__prog_io_find__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_find__V_56_56));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_io_find.m"
        }
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 2) = ((MR_Box) (parse_tree__prog_io_find__V_55_55));
#line 215 "prog_io_find.m"
        }
#line 218 "prog_io_find.m"
        {
#line 218 "prog_io_find.m"
          parse_tree__error_util__write_error_spec_8_p_0(parse_tree__prog_io_find__Spec_27, parse_tree__prog_io_find__Globals_6, (MR_Integer) 0, &parse_tree__prog_io_find___NumWarnings_75, (MR_Integer) 0, &parse_tree__prog_io_find___NumErrors_76);
        }
#line 219 "prog_io_find.m"
        *parse_tree__prog_io_find__MaybeModuleName_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 210 "prog_io_find.m"
      }
#line 209 "prog_io_find.m"
    else
#line 188 "prog_io_find.m"
      {
#line 188 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__InputStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__OpenRes_10, (MR_Integer) 0)));
#line 188 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__OldInputStream_12;
#line 188 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__PartialFileName_14;
#line 188 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__BaseName_16;
#line 188 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__DefaultModuleName_17;
#line 188 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__ModuleName_18;
#line 188 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Specs_19;
#line 192 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__PartialFileName0_13;
#line 197 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__BaseName0_15;
#line 206 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumWarnings_20;
#line 206 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumErrors_21;
#line 207 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_22_22;

#line 189 "prog_io_find.m"
        {
#line 189 "prog_io_find.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__InputStream_11, &parse_tree__prog_io_find__OldInputStream_12);
        }
#line 190 "prog_io_find.m"
        {
#line 190 "prog_io_find.m"
          parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__FileName_7, (MR_String) ".m", &parse_tree__prog_io_find__PartialFileName0_13);
        }
#line 192 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 191 "prog_io_find.m"
          parse_tree__prog_io_find__PartialFileName_14 = parse_tree__prog_io_find__PartialFileName0_13;
#line 192 "prog_io_find.m"
        else
#line 193 "prog_io_find.m"
          parse_tree__prog_io_find__PartialFileName_14 = parse_tree__prog_io_find__FileName_7;
#line 195 "prog_io_find.m"
        {
#line 195 "prog_io_find.m"
          parse_tree__prog_io_find__succeeded = mercury__dir__basename_2_p_0(parse_tree__prog_io_find__PartialFileName_14, &parse_tree__prog_io_find__BaseName0_15);
        }
#line 197 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 196 "prog_io_find.m"
          parse_tree__prog_io_find__BaseName_16 = parse_tree__prog_io_find__BaseName0_15;
#line 197 "prog_io_find.m"
        else
#line 198 "prog_io_find.m"
          parse_tree__prog_io_find__BaseName_16 = (MR_String) "";
#line 200 "prog_io_find.m"
        {
#line 200 "prog_io_find.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io_find__BaseName_16, &parse_tree__prog_io_find__DefaultModuleName_17);
        }
#line 201 "prog_io_find.m"
        {
#line 201 "prog_io_find.m"
          parse_tree__prog_io__peek_at_file_6_p_0(parse_tree__prog_io_find__DefaultModuleName_17, parse_tree__prog_io_find__FileName_7, &parse_tree__prog_io_find__ModuleName_18, &parse_tree__prog_io_find__Specs_19);
        }
#line 202 "prog_io_find.m"
        {
#line 202 "prog_io_find.m"
          MR_Word base;
#line 202 "prog_io_find.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 202 "prog_io_find.m"
          *parse_tree__prog_io_find__MaybeModuleName_8 = base;
#line 202 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__ModuleName_18));
#line 202 "prog_io_find.m"
        }
#line 206 "prog_io_find.m"
        {
#line 206 "prog_io_find.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__prog_io_find__Specs_19, parse_tree__prog_io_find__Globals_6, (MR_Integer) 0, &parse_tree__prog_io_find___NumWarnings_20, (MR_Integer) 0, &parse_tree__prog_io_find___NumErrors_21);
        }
#line 207 "prog_io_find.m"
        {
#line 207 "prog_io_find.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__OldInputStream_12, &parse_tree__prog_io_find__V_22_22);
        }
#line 208 "prog_io_find.m"
        {
#line 208 "prog_io_find.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io_find__InputStream_11);
#line 208 "prog_io_find.m"
          return;
        }
#line 188 "prog_io_find.m"
      }
#line 185 "prog_io_find.m"
  }
#line 41 "prog_io_find.m"
}

#line 35 "prog_io_find.m"
void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_7_p_0(
#line 35 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Globals_8,
#line 35 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Dirs_9,
#line 35 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__InterfaceDirs_10,
#line 35 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ModuleName_11,
#line 35 "prog_io_find.m"
  MR_Word * parse_tree__prog_io_find__MaybeFileName_12)
#line 35 "prog_io_find.m"
{
#line 59 "prog_io_find.m"
  {
#line 59 "prog_io_find.m"
    MR_bool parse_tree__prog_io_find__succeeded;
#line 59 "prog_io_find.m"
    MR_Word parse_tree__prog_io_find__MaybeFileName0_15;

#line 61 "prog_io_find.m"
    {
#line 61 "prog_io_find.m"
      parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__Dirs_9, parse_tree__prog_io_find__ModuleName_11, parse_tree__prog_io_find__ModuleName_11, &parse_tree__prog_io_find__MaybeFileName0_15);
    }
#line 118 "prog_io_find.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName0_15)) == (MR_mktag((MR_Integer) 1))))
#line 120 "prog_io_find.m"
      *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 118 "prog_io_find.m"
    else
#line 64 "prog_io_find.m"
      {
#line 64 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__SourceFileName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeFileName0_15, (MR_Integer) 0)));
#line 115 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__SourceFileModuleName_18;
#line 67 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__SourceFileBaseName_17;
#line 67 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__V_33_33;
#line 67 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__V_34_34;

#line 66 "prog_io_find.m"
        {
#line 66 "prog_io_find.m"
          parse_tree__prog_io_find__succeeded = mercury__dir__basename_1_f_0(parse_tree__prog_io_find__SourceFileName_16, &parse_tree__prog_io_find__V_33_33);
        }
#line 67 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 67 "prog_io_find.m"
          {
#line 67 "prog_io_find.m"
            parse_tree__prog_io_find__V_34_34 = (MR_String) ".m";
#line 66 "prog_io_find.m"
            {
#line 66 "prog_io_find.m"
              parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__V_33_33, parse_tree__prog_io_find__V_34_34, &parse_tree__prog_io_find__SourceFileBaseName_17);
            }
#line 67 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 67 "prog_io_find.m"
              {
#line 68 "prog_io_find.m"
                {
#line 68 "prog_io_find.m"
                  parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io_find__SourceFileBaseName_17, &parse_tree__prog_io_find__SourceFileModuleName_18);
                }
#line 69 "prog_io_find.m"
                {
#line 69 "prog_io_find.m"
                  parse_tree__prog_io_find__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_find__ModuleName_11, parse_tree__prog_io_find__SourceFileModuleName_18);
                }
#line 69 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = !(parse_tree__prog_io_find__succeeded);
#line 67 "prog_io_find.m"
              }
#line 67 "prog_io_find.m"
          }
#line 115 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 77 "prog_io_find.m"
          {
#line 77 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__SourceStream_19;
#line 77 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__MaybeFileName2_20;
#line 80 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__V_21_21;
#line 98 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__SourceFileName2_22;
#line 86 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__SourceFileBaseName2_23;
#line 86 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__SourceFileModuleName2_24;
#line 86 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__V_39_39;
#line 86 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__V_40_40;

#line 77 "prog_io_find.m"
            {
#line 77 "prog_io_find.m"
              mercury__io__input_stream_3_p_0(&parse_tree__prog_io_find__SourceStream_19);
            }
#line 78 "prog_io_find.m"
            {
#line 78 "prog_io_find.m"
              parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__InterfaceDirs_10, parse_tree__prog_io_find__ModuleName_11, parse_tree__prog_io_find__ModuleName_11, &parse_tree__prog_io_find__MaybeFileName2_20);
            }
#line 80 "prog_io_find.m"
            parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName2_20)) == (MR_mktag((MR_Integer) 0)));
#line 80 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 80 "prog_io_find.m"
              {
#line 80 "prog_io_find.m"
                parse_tree__prog_io_find__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeFileName2_20, (MR_Integer) 0)));
#line 81 "prog_io_find.m"
                {
#line 81 "prog_io_find.m"
                  mercury__io__seen_2_p_0();
                }
#line 80 "prog_io_find.m"
              }
#line 80 "prog_io_find.m"
            else
#line 82 "prog_io_find.m"
              {
#line 82 "prog_io_find.m"
              }
#line 86 "prog_io_find.m"
            parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName2_20)) == (MR_mktag((MR_Integer) 0)));
#line 86 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 86 "prog_io_find.m"
              {
#line 86 "prog_io_find.m"
                parse_tree__prog_io_find__SourceFileName2_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeFileName2_20, (MR_Integer) 0)));
#line 87 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = (strcmp(parse_tree__prog_io_find__SourceFileName2_22, parse_tree__prog_io_find__SourceFileName_16) == 0);
#line 87 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = !(parse_tree__prog_io_find__succeeded);
#line 86 "prog_io_find.m"
                if (parse_tree__prog_io_find__succeeded)
#line 86 "prog_io_find.m"
                  {
#line 88 "prog_io_find.m"
                    {
#line 88 "prog_io_find.m"
                      parse_tree__prog_io_find__succeeded = mercury__dir__basename_1_f_0(parse_tree__prog_io_find__SourceFileName2_22, &parse_tree__prog_io_find__V_39_39);
                    }
#line 86 "prog_io_find.m"
                    if (parse_tree__prog_io_find__succeeded)
#line 86 "prog_io_find.m"
                      {
#line 88 "prog_io_find.m"
                        parse_tree__prog_io_find__V_40_40 = (MR_String) ".m";
#line 88 "prog_io_find.m"
                        {
#line 88 "prog_io_find.m"
                          parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__V_39_39, parse_tree__prog_io_find__V_40_40, &parse_tree__prog_io_find__SourceFileBaseName2_23);
                        }
#line 86 "prog_io_find.m"
                        if (parse_tree__prog_io_find__succeeded)
#line 86 "prog_io_find.m"
                          {
#line 90 "prog_io_find.m"
                            {
#line 90 "prog_io_find.m"
                              parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io_find__SourceFileBaseName2_23, &parse_tree__prog_io_find__SourceFileModuleName2_24);
                            }
#line 92 "prog_io_find.m"
                            {
#line 92 "prog_io_find.m"
                              parse_tree__prog_io_find__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_find__SourceFileModuleName_18, parse_tree__prog_io_find__SourceFileModuleName2_24);
                            }
#line 86 "prog_io_find.m"
                          }
#line 86 "prog_io_find.m"
                      }
#line 86 "prog_io_find.m"
                  }
#line 86 "prog_io_find.m"
              }
#line 98 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 95 "prog_io_find.m"
              {
#line 95 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_42_42;
#line 95 "prog_io_find.m"
                MR_Word parse_tree__prog_io_find__V_43_43;
#line 95 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__ModuleNameStr_60;
#line 95 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__Msg0_61;
#line 95 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__BetterMatchFile_62;
#line 95 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_64_64;
#line 95 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_65_65;
#line 95 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_67_67;
#line 95 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_69_69;
#line 95 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_71_71;

#line 95 "prog_io_find.m"
                {
#line 95 "prog_io_find.m"
                  mercury__io__close_input_3_p_0(parse_tree__prog_io_find__SourceStream_19);
                }
#line 97 "prog_io_find.m"
                {
#line 97 "prog_io_find.m"
                  parse_tree__prog_io_find__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 97 "prog_io_find.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_find__SourceFileName2_22));
#line 97 "prog_io_find.m"
                }
#line 171 "prog_io_find.m"
                {
#line 171 "prog_io_find.m"
                  parse_tree__prog_io_find__ModuleNameStr_60 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_11);
                }
#line 173 "prog_io_find.m"
                {
#line 173 "prog_io_find.m"
                  parse_tree__prog_io_find__V_67_67 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__Dirs_9);
                }
#line 173 "prog_io_find.m"
                {
#line 173 "prog_io_find.m"
                  parse_tree__prog_io_find__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_67_67);
                }
#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__V_64_64 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_60, parse_tree__prog_io_find__V_65_65);
                }
#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__Msg0_61 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_64_64);
                }
#line 178 "prog_io_find.m"
                parse_tree__prog_io_find__BetterMatchFile_62 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_43_43, (MR_Integer) 0)));
#line 179 "prog_io_find.m"
                {
#line 179 "prog_io_find.m"
                  parse_tree__prog_io_find__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__BetterMatchFile_62, (MR_String) " in interface search path");
                }
#line 179 "prog_io_find.m"
                {
#line 179 "prog_io_find.m"
                  parse_tree__prog_io_find__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io_find__V_71_71);
                }
#line 179 "prog_io_find.m"
                {
#line 179 "prog_io_find.m"
                  parse_tree__prog_io_find__V_42_42 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__Msg0_61, parse_tree__prog_io_find__V_69_69);
                }
#line 96 "prog_io_find.m"
                {
#line 96 "prog_io_find.m"
                  MR_Word base;
#line 96 "prog_io_find.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 96 "prog_io_find.m"
                  *parse_tree__prog_io_find__MaybeFileName_12 = base;
#line 96 "prog_io_find.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__V_42_42));
#line 96 "prog_io_find.m"
                }
#line 95 "prog_io_find.m"
              }
#line 98 "prog_io_find.m"
            else
#line 100 "prog_io_find.m"
              {
#line 100 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__IntFile_25;
#line 100 "prog_io_find.m"
                MR_Word parse_tree__prog_io_find__MaybeIntDir_26;
#line 110 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__IntDir_27;
#line 105 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_54_54;

#line 99 "prog_io_find.m"
                {
#line 99 "prog_io_find.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__ModuleName_11, (MR_String) ".int", (MR_Integer) 1, &parse_tree__prog_io_find__IntFile_25);
                }
#line 101 "prog_io_find.m"
                {
#line 101 "prog_io_find.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__prog_io_find__InterfaceDirs_10, parse_tree__prog_io_find__IntFile_25, &parse_tree__prog_io_find__MaybeIntDir_26);
                }
#line 104 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeIntDir_26)) == (MR_mktag((MR_Integer) 0)));
#line 104 "prog_io_find.m"
                if (parse_tree__prog_io_find__succeeded)
#line 104 "prog_io_find.m"
                  {
#line 104 "prog_io_find.m"
                    parse_tree__prog_io_find__IntDir_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeIntDir_26, (MR_Integer) 0)));
#line 105 "prog_io_find.m"
                    {
#line 105 "prog_io_find.m"
                      parse_tree__prog_io_find__V_54_54 = mercury__dir__this_directory_0_f_0();
                    }
#line 105 "prog_io_find.m"
                    parse_tree__prog_io_find__succeeded = (strcmp(parse_tree__prog_io_find__IntDir_27, parse_tree__prog_io_find__V_54_54) == 0);
#line 105 "prog_io_find.m"
                    parse_tree__prog_io_find__succeeded = !(parse_tree__prog_io_find__succeeded);
#line 104 "prog_io_find.m"
                  }
#line 110 "prog_io_find.m"
                if (parse_tree__prog_io_find__succeeded)
#line 107 "prog_io_find.m"
                  {
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_50_50;
#line 107 "prog_io_find.m"
                    MR_Word parse_tree__prog_io_find__V_51_51;
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_52_52;
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__ModuleNameStr_77;
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__Msg0_78;
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__BetterMatchFile_79;
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_81_81;
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_82_82;
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_84_84;
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_86_86;
#line 107 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_88_88;

#line 107 "prog_io_find.m"
                    {
#line 107 "prog_io_find.m"
                      mercury__io__close_input_3_p_0(parse_tree__prog_io_find__SourceStream_19);
                    }
#line 109 "prog_io_find.m"
                    {
#line 109 "prog_io_find.m"
                      parse_tree__prog_io_find__V_52_52 = mercury__dir__f_slash_2_f_0(parse_tree__prog_io_find__IntDir_27, parse_tree__prog_io_find__IntFile_25);
                    }
#line 109 "prog_io_find.m"
                    {
#line 109 "prog_io_find.m"
                      parse_tree__prog_io_find__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 109 "prog_io_find.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_find__V_52_52));
#line 109 "prog_io_find.m"
                    }
#line 171 "prog_io_find.m"
                    {
#line 171 "prog_io_find.m"
                      parse_tree__prog_io_find__ModuleNameStr_77 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_11);
                    }
#line 173 "prog_io_find.m"
                    {
#line 173 "prog_io_find.m"
                      parse_tree__prog_io_find__V_84_84 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__Dirs_9);
                    }
#line 173 "prog_io_find.m"
                    {
#line 173 "prog_io_find.m"
                      parse_tree__prog_io_find__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_84_84);
                    }
#line 172 "prog_io_find.m"
                    {
#line 172 "prog_io_find.m"
                      parse_tree__prog_io_find__V_81_81 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_77, parse_tree__prog_io_find__V_82_82);
                    }
#line 172 "prog_io_find.m"
                    {
#line 172 "prog_io_find.m"
                      parse_tree__prog_io_find__Msg0_78 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_81_81);
                    }
#line 178 "prog_io_find.m"
                    parse_tree__prog_io_find__BetterMatchFile_79 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_51_51, (MR_Integer) 0)));
#line 179 "prog_io_find.m"
                    {
#line 179 "prog_io_find.m"
                      parse_tree__prog_io_find__V_88_88 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__BetterMatchFile_79, (MR_String) " in interface search path");
                    }
#line 179 "prog_io_find.m"
                    {
#line 179 "prog_io_find.m"
                      parse_tree__prog_io_find__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io_find__V_88_88);
                    }
#line 179 "prog_io_find.m"
                    {
#line 179 "prog_io_find.m"
                      parse_tree__prog_io_find__V_50_50 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__Msg0_78, parse_tree__prog_io_find__V_86_86);
                    }
#line 108 "prog_io_find.m"
                    {
#line 108 "prog_io_find.m"
                      MR_Word base;
#line 108 "prog_io_find.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_io_find.m"
                      *parse_tree__prog_io_find__MaybeFileName_12 = base;
#line 108 "prog_io_find.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__V_50_50));
#line 108 "prog_io_find.m"
                    }
#line 107 "prog_io_find.m"
                  }
#line 110 "prog_io_find.m"
                else
#line 111 "prog_io_find.m"
                  {
#line 111 "prog_io_find.m"
                    MR_Word parse_tree__prog_io_find__V_28_28;

#line 111 "prog_io_find.m"
                    {
#line 111 "prog_io_find.m"
                      mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__SourceStream_19, &parse_tree__prog_io_find__V_28_28);
                    }
#line 112 "prog_io_find.m"
                    *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 111 "prog_io_find.m"
                  }
#line 100 "prog_io_find.m"
              }
#line 77 "prog_io_find.m"
          }
#line 115 "prog_io_find.m"
        else
#line 116 "prog_io_find.m"
          *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 64 "prog_io_find.m"
      }
#line 59 "prog_io_find.m"
  }
#line 35 "prog_io_find.m"
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
