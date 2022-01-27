/*
** Automatically generated from `prog_io_find.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 153 "prog_io_find.m"
static MR_Word MR_CALL 
parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(
#line 153 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ParentQual_4,
#line 153 "prog_io_find.m"
  MR_String parse_tree__prog_io_find__ChildName_5);

#line 124 "prog_io_find.m"
static void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(
#line 124 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Globals_8,
#line 124 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Dirs_9,
#line 124 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ModuleName_10,
#line 124 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__PartialModuleName_11,
#line 124 "prog_io_find.m"
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



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 153 "prog_io_find.m"
static MR_Word MR_CALL 
parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(
#line 153 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ParentQual_4,
#line 153 "prog_io_find.m"
  MR_String parse_tree__prog_io_find__ChildName_5)
#line 153 "prog_io_find.m"
{
#line 157 "prog_io_find.m"
  {
#line 157 "prog_io_find.m"
    MR_bool parse_tree__prog_io_find__succeeded;
#line 157 "prog_io_find.m"
    MR_Word parse_tree__prog_io_find__PartialQual_6;

#line 157 "prog_io_find.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__ParentQual_4)) == (MR_mktag((MR_Integer) 1))))
#line 160 "prog_io_find.m"
      {
#line 160 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__GrandParentQual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__ParentQual_4, (MR_Integer) 0)));
#line 160 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__ParentName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__ParentQual_4, (MR_Integer) 1)));
#line 160 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__PartialGrandParentQual_10;

#line 161 "prog_io_find.m"
        {
#line 161 "prog_io_find.m"
          parse_tree__prog_io_find__PartialGrandParentQual_10 = parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(parse_tree__prog_io_find__GrandParentQual_8, parse_tree__prog_io_find__ParentName_9);
        }
#line 163 "prog_io_find.m"
        {
#line 163 "prog_io_find.m"
          parse_tree__prog_io_find__PartialQual_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io_find__PartialGrandParentQual_10));
#line 163 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialQual_6, 1) = ((MR_Box) (parse_tree__prog_io_find__ChildName_5));
#line 163 "prog_io_find.m"
        }
#line 160 "prog_io_find.m"
      }
#line 157 "prog_io_find.m"
    else
#line 158 "prog_io_find.m"
      {
#line 158 "prog_io_find.m"
        parse_tree__prog_io_find__PartialQual_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 158 "prog_io_find.m"
        MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io_find__ChildName_5));
#line 158 "prog_io_find.m"
      }
#line 157 "prog_io_find.m"
    return parse_tree__prog_io_find__PartialQual_6;
#line 157 "prog_io_find.m"
  }
#line 153 "prog_io_find.m"
}

#line 124 "prog_io_find.m"
static void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(
#line 124 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Globals_8,
#line 124 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Dirs_9,
#line 124 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ModuleName_10,
#line 124 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__PartialModuleName_11,
#line 124 "prog_io_find.m"
  MR_Word * parse_tree__prog_io_find__MaybeFileName_12)
#line 124 "prog_io_find.m"
{
#line 129 "prog_io_find.m"
  while (MR_TRUE)
#line 129 "prog_io_find.m"
    {
#line 129 "prog_io_find.m"
      /* tailcall optimized into a loop */
#line 129 "prog_io_find.m"
      {
#line 129 "prog_io_find.m"
        MR_bool parse_tree__prog_io_find__succeeded;
#line 129 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__FileName_14;
#line 129 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__MaybeFileName0_15;

#line 130 "prog_io_find.m"
        {
#line 130 "prog_io_find.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__PartialModuleName_11, (MR_String) ".m", (MR_Integer) 1, &parse_tree__prog_io_find__FileName_14);
        }
#line 132 "prog_io_find.m"
        {
#line 132 "prog_io_find.m"
          libs__file_util__search_for_file_6_p_0((MR_Integer) 0, parse_tree__prog_io_find__Dirs_9, parse_tree__prog_io_find__FileName_14, &parse_tree__prog_io_find__MaybeFileName0_15);
        }
#line 136 "prog_io_find.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName0_15)) == (MR_mktag((MR_Integer) 1))))
#line 141 "prog_io_find.m"
          {
#line 141 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__PartialModuleName1_18;
#line 150 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__ParentQual_29;
#line 150 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__ChildName_30;

#line 150 "prog_io_find.m"
            parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__PartialModuleName_11)) == (MR_mktag((MR_Integer) 1)));
#line 150 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 150 "prog_io_find.m"
              {
#line 150 "prog_io_find.m"
                parse_tree__prog_io_find__ParentQual_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialModuleName_11, (MR_Integer) 0)));
#line 150 "prog_io_find.m"
                parse_tree__prog_io_find__ChildName_30 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialModuleName_11, (MR_Integer) 1)));
#line 151 "prog_io_find.m"
                {
#line 151 "prog_io_find.m"
                  parse_tree__prog_io_find__PartialModuleName1_18 = parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(parse_tree__prog_io_find__ParentQual_29, parse_tree__prog_io_find__ChildName_30);
                }
#line 151 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = MR_TRUE;
#line 150 "prog_io_find.m"
              }
#line 141 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 139 "prog_io_find.m"
              {
#line 139 "prog_io_find.m"
                /* direct tailcall eliminated */
#line 139 "prog_io_find.m"
                {
#line 139 "prog_io_find.m"
                  MR_Word parse_tree__prog_io_find__PartialModuleName__tmp_copy_11 = parse_tree__prog_io_find__PartialModuleName1_18;

#line 139 "prog_io_find.m"
                  parse_tree__prog_io_find__PartialModuleName_11 = parse_tree__prog_io_find__PartialModuleName__tmp_copy_11;
#line 139 "prog_io_find.m"
                }
#line 139 "prog_io_find.m"
                continue;
#line 139 "prog_io_find.m"
              }
#line 141 "prog_io_find.m"
            else
#line 142 "prog_io_find.m"
              {
#line 142 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__ModuleNameStr_35;
#line 142 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__Msg0_36;
#line 142 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_39_39;
#line 142 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_40_40;
#line 142 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_42_42;

#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__ModuleNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_10);
                }
#line 174 "prog_io_find.m"
                {
#line 174 "prog_io_find.m"
                  parse_tree__prog_io_find__V_42_42 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__Dirs_9);
                }
#line 174 "prog_io_find.m"
                {
#line 174 "prog_io_find.m"
                  parse_tree__prog_io_find__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_42_42);
                }
#line 173 "prog_io_find.m"
                {
#line 173 "prog_io_find.m"
                  parse_tree__prog_io_find__V_39_39 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_35, parse_tree__prog_io_find__V_40_40);
                }
#line 173 "prog_io_find.m"
                {
#line 173 "prog_io_find.m"
                  parse_tree__prog_io_find__Msg0_36 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_39_39);
                }
#line 142 "prog_io_find.m"
                {
#line 142 "prog_io_find.m"
                  MR_Word base;
#line 142 "prog_io_find.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_find.m"
                  *parse_tree__prog_io_find__MaybeFileName_12 = base;
#line 142 "prog_io_find.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__Msg0_36));
#line 142 "prog_io_find.m"
                }
#line 142 "prog_io_find.m"
              }
#line 141 "prog_io_find.m"
          }
#line 136 "prog_io_find.m"
        else
#line 135 "prog_io_find.m"
          *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 129 "prog_io_find.m"
      }
#line 129 "prog_io_find.m"
      break;
#line 129 "prog_io_find.m"
    }
#line 124 "prog_io_find.m"
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
#line 186 "prog_io_find.m"
  {
#line 186 "prog_io_find.m"
    MR_bool parse_tree__prog_io_find__succeeded;
#line 186 "prog_io_find.m"
    MR_Word parse_tree__prog_io_find__OpenRes_10;

#line 187 "prog_io_find.m"
    {
#line 187 "prog_io_find.m"
      mercury__io__open_input_4_p_0(parse_tree__prog_io_find__FileName_7, &parse_tree__prog_io_find__OpenRes_10);
    }
#line 210 "prog_io_find.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__OpenRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 211 "prog_io_find.m"
      {
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__OpenRes_10, (MR_Integer) 0)));
#line 211 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__ErrorMsg_24;
#line 211 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__Progname_25;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Pieces_26;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Spec_27;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_33_33;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_34_34;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_35_35;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_37_37;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_40_40;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_41_41;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_42_42;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_45_45;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_46_46;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_55_55;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_56_56;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_60_60;
#line 211 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_61_61;
#line 219 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumWarnings_75;
#line 219 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumErrors_76;

#line 212 "prog_io_find.m"
        {
#line 212 "prog_io_find.m"
          parse_tree__prog_io_find__ErrorMsg_24 = mercury__io__error_message_1_f_0(parse_tree__prog_io_find__Error_23);
        }
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io_find__Progname_25);
        }
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io_find__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_find__Progname_25));
#line 214 "prog_io_find.m"
        }
#line 214 "prog_io_find.m"
        parse_tree__prog_io_find__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[3]);
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_find__FileName_7));
#line 215 "prog_io_find.m"
        }
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_find__ErrorMsg_24));
#line 215 "prog_io_find.m"
        }
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_find__V_46_46));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_find_scalar_common_1[2])));
#line 215 "prog_io_find.m"
        }
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_find__V_35_35));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_find__V_45_45));
#line 215 "prog_io_find.m"
        }
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_find__V_41_41));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_find__V_42_42));
#line 215 "prog_io_find.m"
        }
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[4])));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_find__V_40_40));
#line 214 "prog_io_find.m"
        }
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_find__V_35_35));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_find__V_37_37));
#line 214 "prog_io_find.m"
        }
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__Pieces_26, 0) = ((MR_Box) (parse_tree__prog_io_find__V_33_33));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__Pieces_26, 1) = ((MR_Box) (parse_tree__prog_io_find__V_34_34));
#line 214 "prog_io_find.m"
        }
#line 217 "prog_io_find.m"
        {
#line 217 "prog_io_find.m"
          parse_tree__prog_io_find__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 217 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_find__Pieces_26));
#line 217 "prog_io_find.m"
        }
#line 217 "prog_io_find.m"
        {
#line 217 "prog_io_find.m"
          parse_tree__prog_io_find__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_find__V_61_61));
#line 217 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "prog_io_find.m"
        }
#line 217 "prog_io_find.m"
        {
#line 217 "prog_io_find.m"
          parse_tree__prog_io_find__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 1) = ((MR_Box) ((MR_Integer) 0));
#line 217 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 217 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 3) = ((MR_Box) (parse_tree__prog_io_find__V_60_60));
#line 217 "prog_io_find.m"
        }
#line 217 "prog_io_find.m"
        {
#line 217 "prog_io_find.m"
          parse_tree__prog_io_find__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_find__V_56_56));
#line 217 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "prog_io_find.m"
        }
#line 216 "prog_io_find.m"
        {
#line 216 "prog_io_find.m"
          parse_tree__prog_io_find__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 2) = ((MR_Box) (parse_tree__prog_io_find__V_55_55));
#line 216 "prog_io_find.m"
        }
#line 219 "prog_io_find.m"
        {
#line 219 "prog_io_find.m"
          parse_tree__error_util__write_error_spec_8_p_0(parse_tree__prog_io_find__Spec_27, parse_tree__prog_io_find__Globals_6, (MR_Integer) 0, &parse_tree__prog_io_find___NumWarnings_75, (MR_Integer) 0, &parse_tree__prog_io_find___NumErrors_76);
        }
#line 220 "prog_io_find.m"
        *parse_tree__prog_io_find__MaybeModuleName_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 211 "prog_io_find.m"
      }
#line 210 "prog_io_find.m"
    else
#line 189 "prog_io_find.m"
      {
#line 189 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__InputStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__OpenRes_10, (MR_Integer) 0)));
#line 189 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__OldInputStream_12;
#line 189 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__PartialFileName_14;
#line 189 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__BaseName_16;
#line 189 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__DefaultModuleName_17;
#line 189 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__ModuleName_18;
#line 189 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Specs_19;
#line 193 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__PartialFileName0_13;
#line 198 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__BaseName0_15;
#line 207 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumWarnings_20;
#line 207 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumErrors_21;
#line 208 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_22_22;

#line 190 "prog_io_find.m"
        {
#line 190 "prog_io_find.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__InputStream_11, &parse_tree__prog_io_find__OldInputStream_12);
        }
#line 191 "prog_io_find.m"
        {
#line 191 "prog_io_find.m"
          parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__FileName_7, (MR_String) ".m", &parse_tree__prog_io_find__PartialFileName0_13);
        }
#line 193 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 192 "prog_io_find.m"
          parse_tree__prog_io_find__PartialFileName_14 = parse_tree__prog_io_find__PartialFileName0_13;
#line 193 "prog_io_find.m"
        else
#line 194 "prog_io_find.m"
          parse_tree__prog_io_find__PartialFileName_14 = parse_tree__prog_io_find__FileName_7;
#line 196 "prog_io_find.m"
        {
#line 196 "prog_io_find.m"
          parse_tree__prog_io_find__succeeded = mercury__dir__basename_2_p_0(parse_tree__prog_io_find__PartialFileName_14, &parse_tree__prog_io_find__BaseName0_15);
        }
#line 198 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 197 "prog_io_find.m"
          parse_tree__prog_io_find__BaseName_16 = parse_tree__prog_io_find__BaseName0_15;
#line 198 "prog_io_find.m"
        else
#line 199 "prog_io_find.m"
          parse_tree__prog_io_find__BaseName_16 = (MR_String) "";
#line 201 "prog_io_find.m"
        {
#line 201 "prog_io_find.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io_find__BaseName_16, &parse_tree__prog_io_find__DefaultModuleName_17);
        }
#line 202 "prog_io_find.m"
        {
#line 202 "prog_io_find.m"
          parse_tree__prog_io__peek_at_file_6_p_0(parse_tree__prog_io_find__DefaultModuleName_17, parse_tree__prog_io_find__FileName_7, &parse_tree__prog_io_find__ModuleName_18, &parse_tree__prog_io_find__Specs_19);
        }
#line 203 "prog_io_find.m"
        {
#line 203 "prog_io_find.m"
          MR_Word base;
#line 203 "prog_io_find.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "prog_io_find.m"
          *parse_tree__prog_io_find__MaybeModuleName_8 = base;
#line 203 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__ModuleName_18));
#line 203 "prog_io_find.m"
        }
#line 207 "prog_io_find.m"
        {
#line 207 "prog_io_find.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__prog_io_find__Specs_19, parse_tree__prog_io_find__Globals_6, (MR_Integer) 0, &parse_tree__prog_io_find___NumWarnings_20, (MR_Integer) 0, &parse_tree__prog_io_find___NumErrors_21);
        }
#line 208 "prog_io_find.m"
        {
#line 208 "prog_io_find.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__OldInputStream_12, &parse_tree__prog_io_find__V_22_22);
        }
#line 209 "prog_io_find.m"
        {
#line 209 "prog_io_find.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io_find__InputStream_11);
#line 209 "prog_io_find.m"
          return;
        }
#line 189 "prog_io_find.m"
      }
#line 186 "prog_io_find.m"
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
#line 119 "prog_io_find.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName0_15)) == (MR_mktag((MR_Integer) 1))))
#line 121 "prog_io_find.m"
      *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 119 "prog_io_find.m"
    else
#line 64 "prog_io_find.m"
      {
#line 64 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__SourceFileName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeFileName0_15, (MR_Integer) 0)));
#line 116 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__SourceFileModuleName_18;
#line 67 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__SourceFileBaseName_17;
#line 67 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__V_34_34;
#line 67 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__V_35_35;

#line 66 "prog_io_find.m"
        {
#line 66 "prog_io_find.m"
          parse_tree__prog_io_find__succeeded = mercury__dir__basename_1_f_0(parse_tree__prog_io_find__SourceFileName_16, &parse_tree__prog_io_find__V_34_34);
        }
#line 67 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 67 "prog_io_find.m"
          {
#line 67 "prog_io_find.m"
            parse_tree__prog_io_find__V_35_35 = (MR_String) ".m";
#line 66 "prog_io_find.m"
            {
#line 66 "prog_io_find.m"
              parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__V_34_34, parse_tree__prog_io_find__V_35_35, &parse_tree__prog_io_find__SourceFileBaseName_17);
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
#line 116 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 77 "prog_io_find.m"
          {
#line 77 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__SourceStream_19;
#line 77 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__MaybeFileName2_20;
#line 99 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__SourceFileName2_23;
#line 87 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__SourceFileBaseName2_24;
#line 87 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__SourceFileModuleName2_25;
#line 87 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__V_40_40;
#line 87 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__V_41_41;

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
#line 83 "prog_io_find.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName2_20)) == (MR_mktag((MR_Integer) 1))))
#line 84 "prog_io_find.m"
              {
#line 84 "prog_io_find.m"
              }
#line 83 "prog_io_find.m"
            else
#line 82 "prog_io_find.m"
              {
#line 82 "prog_io_find.m"
                mercury__io__seen_2_p_0();
              }
#line 87 "prog_io_find.m"
            parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName2_20)) == (MR_mktag((MR_Integer) 0)));
#line 87 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 87 "prog_io_find.m"
              {
#line 87 "prog_io_find.m"
                parse_tree__prog_io_find__SourceFileName2_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeFileName2_20, (MR_Integer) 0)));
#line 88 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = (strcmp(parse_tree__prog_io_find__SourceFileName2_23, parse_tree__prog_io_find__SourceFileName_16) == 0);
#line 88 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = !(parse_tree__prog_io_find__succeeded);
#line 87 "prog_io_find.m"
                if (parse_tree__prog_io_find__succeeded)
#line 87 "prog_io_find.m"
                  {
#line 89 "prog_io_find.m"
                    {
#line 89 "prog_io_find.m"
                      parse_tree__prog_io_find__succeeded = mercury__dir__basename_1_f_0(parse_tree__prog_io_find__SourceFileName2_23, &parse_tree__prog_io_find__V_40_40);
                    }
#line 87 "prog_io_find.m"
                    if (parse_tree__prog_io_find__succeeded)
#line 87 "prog_io_find.m"
                      {
#line 89 "prog_io_find.m"
                        parse_tree__prog_io_find__V_41_41 = (MR_String) ".m";
#line 89 "prog_io_find.m"
                        {
#line 89 "prog_io_find.m"
                          parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__V_40_40, parse_tree__prog_io_find__V_41_41, &parse_tree__prog_io_find__SourceFileBaseName2_24);
                        }
#line 87 "prog_io_find.m"
                        if (parse_tree__prog_io_find__succeeded)
#line 87 "prog_io_find.m"
                          {
#line 91 "prog_io_find.m"
                            {
#line 91 "prog_io_find.m"
                              parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io_find__SourceFileBaseName2_24, &parse_tree__prog_io_find__SourceFileModuleName2_25);
                            }
#line 93 "prog_io_find.m"
                            {
#line 93 "prog_io_find.m"
                              parse_tree__prog_io_find__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_find__SourceFileModuleName_18, parse_tree__prog_io_find__SourceFileModuleName2_25);
                            }
#line 87 "prog_io_find.m"
                          }
#line 87 "prog_io_find.m"
                      }
#line 87 "prog_io_find.m"
                  }
#line 87 "prog_io_find.m"
              }
#line 99 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 96 "prog_io_find.m"
              {
#line 96 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_43_43;
#line 96 "prog_io_find.m"
                MR_Word parse_tree__prog_io_find__V_44_44;
#line 96 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__ModuleNameStr_61;
#line 96 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__Msg0_62;
#line 96 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__BetterMatchFile_63;
#line 96 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_65_65;
#line 96 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_66_66;
#line 96 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_68_68;
#line 96 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_70_70;
#line 96 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_72_72;

#line 96 "prog_io_find.m"
                {
#line 96 "prog_io_find.m"
                  mercury__io__close_input_3_p_0(parse_tree__prog_io_find__SourceStream_19);
                }
#line 98 "prog_io_find.m"
                {
#line 98 "prog_io_find.m"
                  parse_tree__prog_io_find__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 98 "prog_io_find.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_find__SourceFileName2_23));
#line 98 "prog_io_find.m"
                }
#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__ModuleNameStr_61 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_11);
                }
#line 174 "prog_io_find.m"
                {
#line 174 "prog_io_find.m"
                  parse_tree__prog_io_find__V_68_68 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__Dirs_9);
                }
#line 174 "prog_io_find.m"
                {
#line 174 "prog_io_find.m"
                  parse_tree__prog_io_find__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_68_68);
                }
#line 173 "prog_io_find.m"
                {
#line 173 "prog_io_find.m"
                  parse_tree__prog_io_find__V_65_65 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_61, parse_tree__prog_io_find__V_66_66);
                }
#line 173 "prog_io_find.m"
                {
#line 173 "prog_io_find.m"
                  parse_tree__prog_io_find__Msg0_62 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_65_65);
                }
#line 179 "prog_io_find.m"
                parse_tree__prog_io_find__BetterMatchFile_63 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_44_44, (MR_Integer) 0)));
#line 180 "prog_io_find.m"
                {
#line 180 "prog_io_find.m"
                  parse_tree__prog_io_find__V_72_72 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__BetterMatchFile_63, (MR_String) " in interface search path");
                }
#line 180 "prog_io_find.m"
                {
#line 180 "prog_io_find.m"
                  parse_tree__prog_io_find__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io_find__V_72_72);
                }
#line 180 "prog_io_find.m"
                {
#line 180 "prog_io_find.m"
                  parse_tree__prog_io_find__V_43_43 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__Msg0_62, parse_tree__prog_io_find__V_70_70);
                }
#line 97 "prog_io_find.m"
                {
#line 97 "prog_io_find.m"
                  MR_Word base;
#line 97 "prog_io_find.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 97 "prog_io_find.m"
                  *parse_tree__prog_io_find__MaybeFileName_12 = base;
#line 97 "prog_io_find.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__V_43_43));
#line 97 "prog_io_find.m"
                }
#line 96 "prog_io_find.m"
              }
#line 99 "prog_io_find.m"
            else
#line 101 "prog_io_find.m"
              {
#line 101 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__IntFile_26;
#line 101 "prog_io_find.m"
                MR_Word parse_tree__prog_io_find__MaybeIntDir_27;
#line 111 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__IntDir_28;
#line 106 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_55_55;

#line 100 "prog_io_find.m"
                {
#line 100 "prog_io_find.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__ModuleName_11, (MR_String) ".int", (MR_Integer) 1, &parse_tree__prog_io_find__IntFile_26);
                }
#line 102 "prog_io_find.m"
                {
#line 102 "prog_io_find.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__prog_io_find__InterfaceDirs_10, parse_tree__prog_io_find__IntFile_26, &parse_tree__prog_io_find__MaybeIntDir_27);
                }
#line 105 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeIntDir_27)) == (MR_mktag((MR_Integer) 0)));
#line 105 "prog_io_find.m"
                if (parse_tree__prog_io_find__succeeded)
#line 105 "prog_io_find.m"
                  {
#line 105 "prog_io_find.m"
                    parse_tree__prog_io_find__IntDir_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeIntDir_27, (MR_Integer) 0)));
#line 106 "prog_io_find.m"
                    {
#line 106 "prog_io_find.m"
                      parse_tree__prog_io_find__V_55_55 = mercury__dir__this_directory_0_f_0();
                    }
#line 106 "prog_io_find.m"
                    parse_tree__prog_io_find__succeeded = (strcmp(parse_tree__prog_io_find__IntDir_28, parse_tree__prog_io_find__V_55_55) == 0);
#line 106 "prog_io_find.m"
                    parse_tree__prog_io_find__succeeded = !(parse_tree__prog_io_find__succeeded);
#line 105 "prog_io_find.m"
                  }
#line 111 "prog_io_find.m"
                if (parse_tree__prog_io_find__succeeded)
#line 108 "prog_io_find.m"
                  {
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_51_51;
#line 108 "prog_io_find.m"
                    MR_Word parse_tree__prog_io_find__V_52_52;
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_53_53;
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__ModuleNameStr_78;
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__Msg0_79;
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__BetterMatchFile_80;
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_82_82;
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_83_83;
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_85_85;
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_87_87;
#line 108 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_89_89;

#line 108 "prog_io_find.m"
                    {
#line 108 "prog_io_find.m"
                      mercury__io__close_input_3_p_0(parse_tree__prog_io_find__SourceStream_19);
                    }
#line 110 "prog_io_find.m"
                    {
#line 110 "prog_io_find.m"
                      parse_tree__prog_io_find__V_53_53 = mercury__dir__f_slash_2_f_0(parse_tree__prog_io_find__IntDir_28, parse_tree__prog_io_find__IntFile_26);
                    }
#line 110 "prog_io_find.m"
                    {
#line 110 "prog_io_find.m"
                      parse_tree__prog_io_find__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 110 "prog_io_find.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_find__V_53_53));
#line 110 "prog_io_find.m"
                    }
#line 172 "prog_io_find.m"
                    {
#line 172 "prog_io_find.m"
                      parse_tree__prog_io_find__ModuleNameStr_78 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_11);
                    }
#line 174 "prog_io_find.m"
                    {
#line 174 "prog_io_find.m"
                      parse_tree__prog_io_find__V_85_85 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__Dirs_9);
                    }
#line 174 "prog_io_find.m"
                    {
#line 174 "prog_io_find.m"
                      parse_tree__prog_io_find__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_85_85);
                    }
#line 173 "prog_io_find.m"
                    {
#line 173 "prog_io_find.m"
                      parse_tree__prog_io_find__V_82_82 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_78, parse_tree__prog_io_find__V_83_83);
                    }
#line 173 "prog_io_find.m"
                    {
#line 173 "prog_io_find.m"
                      parse_tree__prog_io_find__Msg0_79 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_82_82);
                    }
#line 179 "prog_io_find.m"
                    parse_tree__prog_io_find__BetterMatchFile_80 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_52_52, (MR_Integer) 0)));
#line 180 "prog_io_find.m"
                    {
#line 180 "prog_io_find.m"
                      parse_tree__prog_io_find__V_89_89 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__BetterMatchFile_80, (MR_String) " in interface search path");
                    }
#line 180 "prog_io_find.m"
                    {
#line 180 "prog_io_find.m"
                      parse_tree__prog_io_find__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io_find__V_89_89);
                    }
#line 180 "prog_io_find.m"
                    {
#line 180 "prog_io_find.m"
                      parse_tree__prog_io_find__V_51_51 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__Msg0_79, parse_tree__prog_io_find__V_87_87);
                    }
#line 109 "prog_io_find.m"
                    {
#line 109 "prog_io_find.m"
                      MR_Word base;
#line 109 "prog_io_find.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 109 "prog_io_find.m"
                      *parse_tree__prog_io_find__MaybeFileName_12 = base;
#line 109 "prog_io_find.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__V_51_51));
#line 109 "prog_io_find.m"
                    }
#line 108 "prog_io_find.m"
                  }
#line 111 "prog_io_find.m"
                else
#line 112 "prog_io_find.m"
                  {
#line 112 "prog_io_find.m"
                    MR_Word parse_tree__prog_io_find__V_29_29;

#line 112 "prog_io_find.m"
                    {
#line 112 "prog_io_find.m"
                      mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__SourceStream_19, &parse_tree__prog_io_find__V_29_29);
                    }
#line 113 "prog_io_find.m"
                    *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 112 "prog_io_find.m"
                  }
#line 101 "prog_io_find.m"
              }
#line 77 "prog_io_find.m"
          }
#line 116 "prog_io_find.m"
        else
#line 117 "prog_io_find.m"
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
