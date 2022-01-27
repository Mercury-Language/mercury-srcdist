/*
** Automatically generated from `prog_io_find.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 151 "prog_io_find.m"
static MR_Word MR_CALL 
parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(
#line 151 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ParentQual_4,
#line 151 "prog_io_find.m"
  MR_String parse_tree__prog_io_find__ChildName_5);

#line 122 "prog_io_find.m"
static void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(
#line 122 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Globals_8,
#line 122 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Dirs_9,
#line 122 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ModuleName_10,
#line 122 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__PartialModuleName_11,
#line 122 "prog_io_find.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_find_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error opening"))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 151 "prog_io_find.m"
static MR_Word MR_CALL 
parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(
#line 151 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ParentQual_4,
#line 151 "prog_io_find.m"
  MR_String parse_tree__prog_io_find__ChildName_5)
#line 151 "prog_io_find.m"
{
#line 155 "prog_io_find.m"
  {
#line 155 "prog_io_find.m"
    MR_bool parse_tree__prog_io_find__succeeded;
#line 155 "prog_io_find.m"
    MR_Word parse_tree__prog_io_find__PartialQual_6;

#line 155 "prog_io_find.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__ParentQual_4)) == (MR_mktag((MR_Integer) 1))))
#line 158 "prog_io_find.m"
      {
#line 158 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__GrandParentQual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__ParentQual_4, (MR_Integer) 0)));
#line 158 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__ParentName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__ParentQual_4, (MR_Integer) 1)));
#line 158 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__PartialGrandParentQual_10;

#line 159 "prog_io_find.m"
        {
#line 159 "prog_io_find.m"
          parse_tree__prog_io_find__PartialGrandParentQual_10 = parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(parse_tree__prog_io_find__GrandParentQual_8, parse_tree__prog_io_find__ParentName_9);
        }
#line 161 "prog_io_find.m"
        {
#line 161 "prog_io_find.m"
          parse_tree__prog_io_find__PartialQual_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io_find__PartialGrandParentQual_10));
#line 161 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialQual_6, 1) = ((MR_Box) (parse_tree__prog_io_find__ChildName_5));
#line 161 "prog_io_find.m"
        }
#line 158 "prog_io_find.m"
      }
#line 155 "prog_io_find.m"
    else
#line 156 "prog_io_find.m"
      {
#line 156 "prog_io_find.m"
        parse_tree__prog_io_find__PartialQual_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 156 "prog_io_find.m"
        MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io_find__ChildName_5));
#line 156 "prog_io_find.m"
      }
#line 155 "prog_io_find.m"
    return parse_tree__prog_io_find__PartialQual_6;
#line 155 "prog_io_find.m"
  }
#line 151 "prog_io_find.m"
}

#line 122 "prog_io_find.m"
static void MR_CALL 
parse_tree__prog_io_find__search_for_module_source_qualifier_loop_7_p_0(
#line 122 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Globals_8,
#line 122 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__Dirs_9,
#line 122 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__ModuleName_10,
#line 122 "prog_io_find.m"
  MR_Word parse_tree__prog_io_find__PartialModuleName_11,
#line 122 "prog_io_find.m"
  MR_Word * parse_tree__prog_io_find__MaybeFileName_12)
#line 122 "prog_io_find.m"
{
#line 127 "prog_io_find.m"
  while (MR_TRUE)
#line 127 "prog_io_find.m"
    {
#line 127 "prog_io_find.m"
      /* tailcall optimized into a loop */
#line 127 "prog_io_find.m"
      {
#line 127 "prog_io_find.m"
        MR_bool parse_tree__prog_io_find__succeeded;
#line 127 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__FileName_14;
#line 127 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__MaybeFileName0_15;

#line 128 "prog_io_find.m"
        {
#line 128 "prog_io_find.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__PartialModuleName_11, (MR_String) ".m", (MR_Integer) 1, &parse_tree__prog_io_find__FileName_14);
        }
#line 130 "prog_io_find.m"
        {
#line 130 "prog_io_find.m"
          libs__file_util__search_for_file_6_p_0((MR_Integer) 0, parse_tree__prog_io_find__Dirs_9, parse_tree__prog_io_find__FileName_14, &parse_tree__prog_io_find__MaybeFileName0_15);
        }
#line 134 "prog_io_find.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName0_15)) == (MR_mktag((MR_Integer) 1))))
#line 139 "prog_io_find.m"
          {
#line 139 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__PartialModuleName1_18;
#line 148 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__ParentQual_29;
#line 148 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__ChildName_30;

#line 148 "prog_io_find.m"
            parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__PartialModuleName_11)) == (MR_mktag((MR_Integer) 1)));
#line 148 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 148 "prog_io_find.m"
              {
#line 148 "prog_io_find.m"
                parse_tree__prog_io_find__ParentQual_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialModuleName_11, (MR_Integer) 0)));
#line 148 "prog_io_find.m"
                parse_tree__prog_io_find__ChildName_30 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__PartialModuleName_11, (MR_Integer) 1)));
#line 149 "prog_io_find.m"
                {
#line 149 "prog_io_find.m"
                  parse_tree__prog_io_find__PartialModuleName1_18 = parse_tree__prog_io_find__drop_one_qualifier_2_2_f_0(parse_tree__prog_io_find__ParentQual_29, parse_tree__prog_io_find__ChildName_30);
                }
#line 149 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = MR_TRUE;
#line 148 "prog_io_find.m"
              }
#line 139 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 137 "prog_io_find.m"
              {
#line 137 "prog_io_find.m"
                /* direct tailcall eliminated */
#line 137 "prog_io_find.m"
                {
#line 137 "prog_io_find.m"
                  MR_Word parse_tree__prog_io_find__PartialModuleName__tmp_copy_11 = parse_tree__prog_io_find__PartialModuleName1_18;

#line 137 "prog_io_find.m"
                  parse_tree__prog_io_find__PartialModuleName_11 = parse_tree__prog_io_find__PartialModuleName__tmp_copy_11;
#line 137 "prog_io_find.m"
                }
#line 137 "prog_io_find.m"
                continue;
#line 137 "prog_io_find.m"
              }
#line 139 "prog_io_find.m"
            else
#line 140 "prog_io_find.m"
              {
#line 140 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__ModuleNameStr_35;
#line 140 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__Msg0_36;
#line 140 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_39_39;
#line 140 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_40_40;
#line 140 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_42_42;

#line 170 "prog_io_find.m"
                {
#line 170 "prog_io_find.m"
                  parse_tree__prog_io_find__ModuleNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_10);
                }
#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__V_42_42 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__Dirs_9);
                }
#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_42_42);
                }
#line 171 "prog_io_find.m"
                {
#line 171 "prog_io_find.m"
                  parse_tree__prog_io_find__V_39_39 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_35, parse_tree__prog_io_find__V_40_40);
                }
#line 171 "prog_io_find.m"
                {
#line 171 "prog_io_find.m"
                  parse_tree__prog_io_find__Msg0_36 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_39_39);
                }
#line 140 "prog_io_find.m"
                {
#line 140 "prog_io_find.m"
                  MR_Word base;
#line 140 "prog_io_find.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 140 "prog_io_find.m"
                  *parse_tree__prog_io_find__MaybeFileName_12 = base;
#line 140 "prog_io_find.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__Msg0_36));
#line 140 "prog_io_find.m"
                }
#line 140 "prog_io_find.m"
              }
#line 139 "prog_io_find.m"
          }
#line 134 "prog_io_find.m"
        else
#line 133 "prog_io_find.m"
          *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 127 "prog_io_find.m"
      }
#line 127 "prog_io_find.m"
      break;
#line 127 "prog_io_find.m"
    }
#line 122 "prog_io_find.m"
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
#line 184 "prog_io_find.m"
  {
#line 184 "prog_io_find.m"
    MR_bool parse_tree__prog_io_find__succeeded;
#line 184 "prog_io_find.m"
    MR_Word parse_tree__prog_io_find__OpenRes_10;

#line 185 "prog_io_find.m"
    {
#line 185 "prog_io_find.m"
      mercury__io__open_input_4_p_0(parse_tree__prog_io_find__FileName_7, &parse_tree__prog_io_find__OpenRes_10);
    }
#line 208 "prog_io_find.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__OpenRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 209 "prog_io_find.m"
      {
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__OpenRes_10, (MR_Integer) 0)));
#line 209 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__ErrorMsg_24;
#line 209 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__Progname_25;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Pieces_26;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Spec_27;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_33_33;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_34_34;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_35_35;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_37_37;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_40_40;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_41_41;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_42_42;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_45_45;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_46_46;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_55_55;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_56_56;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_60_60;
#line 209 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_61_61;
#line 217 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumWarnings_75;
#line 217 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumErrors_76;

#line 210 "prog_io_find.m"
        {
#line 210 "prog_io_find.m"
          parse_tree__prog_io_find__ErrorMsg_24 = mercury__io__error_message_1_f_0(parse_tree__prog_io_find__Error_23);
        }
#line 211 "prog_io_find.m"
        {
#line 211 "prog_io_find.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io_find__Progname_25);
        }
#line 212 "prog_io_find.m"
        {
#line 212 "prog_io_find.m"
          parse_tree__prog_io_find__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_find__Progname_25));
#line 212 "prog_io_find.m"
        }
#line 212 "prog_io_find.m"
        parse_tree__prog_io_find__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[3]);
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          parse_tree__prog_io_find__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io_find__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_find__FileName_7));
#line 213 "prog_io_find.m"
        }
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          parse_tree__prog_io_find__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_find__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_find__ErrorMsg_24));
#line 213 "prog_io_find.m"
        }
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          parse_tree__prog_io_find__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_find__V_46_46));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_find_scalar_common_1[2])));
#line 213 "prog_io_find.m"
        }
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          parse_tree__prog_io_find__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_find__V_35_35));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_find__V_45_45));
#line 213 "prog_io_find.m"
        }
#line 213 "prog_io_find.m"
        {
#line 213 "prog_io_find.m"
          parse_tree__prog_io_find__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_find__V_41_41));
#line 213 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_find__V_42_42));
#line 213 "prog_io_find.m"
        }
#line 212 "prog_io_find.m"
        {
#line 212 "prog_io_find.m"
          parse_tree__prog_io_find__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_find_scalar_common_1[4])));
#line 212 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_find__V_40_40));
#line 212 "prog_io_find.m"
        }
#line 212 "prog_io_find.m"
        {
#line 212 "prog_io_find.m"
          parse_tree__prog_io_find__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_find__V_35_35));
#line 212 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_find__V_37_37));
#line 212 "prog_io_find.m"
        }
#line 212 "prog_io_find.m"
        {
#line 212 "prog_io_find.m"
          parse_tree__prog_io_find__Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__Pieces_26, 0) = ((MR_Box) (parse_tree__prog_io_find__V_33_33));
#line 212 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__Pieces_26, 1) = ((MR_Box) (parse_tree__prog_io_find__V_34_34));
#line 212 "prog_io_find.m"
        }
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_find__Pieces_26));
#line 215 "prog_io_find.m"
        }
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_find__V_61_61));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "prog_io_find.m"
        }
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 1) = ((MR_Box) ((MR_Integer) 0));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_56_56, 3) = ((MR_Box) (parse_tree__prog_io_find__V_60_60));
#line 215 "prog_io_find.m"
        }
#line 215 "prog_io_find.m"
        {
#line 215 "prog_io_find.m"
          parse_tree__prog_io_find__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_find__V_56_56));
#line 215 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "prog_io_find.m"
        }
#line 214 "prog_io_find.m"
        {
#line 214 "prog_io_find.m"
          parse_tree__prog_io_find__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "prog_io_find.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__Spec_27, 2) = ((MR_Box) (parse_tree__prog_io_find__V_55_55));
#line 214 "prog_io_find.m"
        }
#line 217 "prog_io_find.m"
        {
#line 217 "prog_io_find.m"
          parse_tree__error_util__write_error_spec_8_p_0(parse_tree__prog_io_find__Spec_27, parse_tree__prog_io_find__Globals_6, (MR_Integer) 0, &parse_tree__prog_io_find___NumWarnings_75, (MR_Integer) 0, &parse_tree__prog_io_find___NumErrors_76);
        }
#line 218 "prog_io_find.m"
        *parse_tree__prog_io_find__MaybeModuleName_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "prog_io_find.m"
      }
#line 208 "prog_io_find.m"
    else
#line 187 "prog_io_find.m"
      {
#line 187 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__InputStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__OpenRes_10, (MR_Integer) 0)));
#line 187 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__OldInputStream_12;
#line 187 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__PartialFileName_14;
#line 187 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__BaseName_16;
#line 187 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__DefaultModuleName_17;
#line 187 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__ModuleName_18;
#line 187 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__Specs_19;
#line 191 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__PartialFileName0_13;
#line 196 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__BaseName0_15;
#line 205 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumWarnings_20;
#line 205 "prog_io_find.m"
        MR_Integer parse_tree__prog_io_find___NumErrors_21;
#line 206 "prog_io_find.m"
        MR_Word parse_tree__prog_io_find__V_22_22;

#line 188 "prog_io_find.m"
        {
#line 188 "prog_io_find.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__InputStream_11, &parse_tree__prog_io_find__OldInputStream_12);
        }
#line 189 "prog_io_find.m"
        {
#line 189 "prog_io_find.m"
          parse_tree__prog_io_find__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io_find__FileName_7, (MR_String) ".m", &parse_tree__prog_io_find__PartialFileName0_13);
        }
#line 191 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 190 "prog_io_find.m"
          parse_tree__prog_io_find__PartialFileName_14 = parse_tree__prog_io_find__PartialFileName0_13;
#line 191 "prog_io_find.m"
        else
#line 192 "prog_io_find.m"
          parse_tree__prog_io_find__PartialFileName_14 = parse_tree__prog_io_find__FileName_7;
#line 194 "prog_io_find.m"
        {
#line 194 "prog_io_find.m"
          parse_tree__prog_io_find__succeeded = mercury__dir__basename_2_p_0(parse_tree__prog_io_find__PartialFileName_14, &parse_tree__prog_io_find__BaseName0_15);
        }
#line 196 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 195 "prog_io_find.m"
          parse_tree__prog_io_find__BaseName_16 = parse_tree__prog_io_find__BaseName0_15;
#line 196 "prog_io_find.m"
        else
#line 197 "prog_io_find.m"
          parse_tree__prog_io_find__BaseName_16 = (MR_String) "";
#line 199 "prog_io_find.m"
        {
#line 199 "prog_io_find.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io_find__BaseName_16, &parse_tree__prog_io_find__DefaultModuleName_17);
        }
#line 200 "prog_io_find.m"
        {
#line 200 "prog_io_find.m"
          parse_tree__prog_io__peek_at_file_6_p_0(parse_tree__prog_io_find__DefaultModuleName_17, parse_tree__prog_io_find__FileName_7, &parse_tree__prog_io_find__ModuleName_18, &parse_tree__prog_io_find__Specs_19);
        }
#line 201 "prog_io_find.m"
        {
#line 201 "prog_io_find.m"
          MR_Word base;
#line 201 "prog_io_find.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 201 "prog_io_find.m"
          *parse_tree__prog_io_find__MaybeModuleName_8 = base;
#line 201 "prog_io_find.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__ModuleName_18));
#line 201 "prog_io_find.m"
        }
#line 205 "prog_io_find.m"
        {
#line 205 "prog_io_find.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__prog_io_find__Specs_19, parse_tree__prog_io_find__Globals_6, (MR_Integer) 0, &parse_tree__prog_io_find___NumWarnings_20, (MR_Integer) 0, &parse_tree__prog_io_find___NumErrors_21);
        }
#line 206 "prog_io_find.m"
        {
#line 206 "prog_io_find.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__OldInputStream_12, &parse_tree__prog_io_find__V_22_22);
        }
#line 207 "prog_io_find.m"
        {
#line 207 "prog_io_find.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io_find__InputStream_11);
#line 207 "prog_io_find.m"
          return;
        }
#line 187 "prog_io_find.m"
      }
#line 184 "prog_io_find.m"
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
#line 117 "prog_io_find.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeFileName0_15)) == (MR_mktag((MR_Integer) 1))))
#line 119 "prog_io_find.m"
      *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 117 "prog_io_find.m"
    else
#line 64 "prog_io_find.m"
      {
#line 64 "prog_io_find.m"
        MR_String parse_tree__prog_io_find__SourceFileName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeFileName0_15, (MR_Integer) 0)));
#line 114 "prog_io_find.m"
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
#line 114 "prog_io_find.m"
        if (parse_tree__prog_io_find__succeeded)
#line 77 "prog_io_find.m"
          {
#line 77 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__SourceStream_19;
#line 77 "prog_io_find.m"
            MR_Word parse_tree__prog_io_find__MaybeFileName2_20;
#line 80 "prog_io_find.m"
            MR_String parse_tree__prog_io_find__V_21_21;
#line 97 "prog_io_find.m"
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
#line 81 "prog_io_find.m"
              {
#line 81 "prog_io_find.m"
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
                              parse_tree__prog_io_find__succeeded = mdbcomp__sym_name__match_sym_name_2_p_0(parse_tree__prog_io_find__SourceFileModuleName_18, parse_tree__prog_io_find__SourceFileModuleName2_24);
                            }
#line 86 "prog_io_find.m"
                          }
#line 86 "prog_io_find.m"
                      }
#line 86 "prog_io_find.m"
                  }
#line 86 "prog_io_find.m"
              }
#line 97 "prog_io_find.m"
            if (parse_tree__prog_io_find__succeeded)
#line 94 "prog_io_find.m"
              {
#line 94 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_42_42;
#line 94 "prog_io_find.m"
                MR_Word parse_tree__prog_io_find__V_43_43;
#line 94 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__ModuleNameStr_60;
#line 94 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__Msg0_61;
#line 94 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__BetterMatchFile_62;
#line 94 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_64_64;
#line 94 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_65_65;
#line 94 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_67_67;
#line 94 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_69_69;
#line 94 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_71_71;

#line 94 "prog_io_find.m"
                {
#line 94 "prog_io_find.m"
                  mercury__io__close_input_3_p_0(parse_tree__prog_io_find__SourceStream_19);
                }
#line 96 "prog_io_find.m"
                {
#line 96 "prog_io_find.m"
                  parse_tree__prog_io_find__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 96 "prog_io_find.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_find__SourceFileName2_22));
#line 96 "prog_io_find.m"
                }
#line 170 "prog_io_find.m"
                {
#line 170 "prog_io_find.m"
                  parse_tree__prog_io_find__ModuleNameStr_60 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_11);
                }
#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__V_67_67 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__Dirs_9);
                }
#line 172 "prog_io_find.m"
                {
#line 172 "prog_io_find.m"
                  parse_tree__prog_io_find__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_67_67);
                }
#line 171 "prog_io_find.m"
                {
#line 171 "prog_io_find.m"
                  parse_tree__prog_io_find__V_64_64 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_60, parse_tree__prog_io_find__V_65_65);
                }
#line 171 "prog_io_find.m"
                {
#line 171 "prog_io_find.m"
                  parse_tree__prog_io_find__Msg0_61 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_64_64);
                }
#line 177 "prog_io_find.m"
                parse_tree__prog_io_find__BetterMatchFile_62 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_43_43, (MR_Integer) 0)));
#line 178 "prog_io_find.m"
                {
#line 178 "prog_io_find.m"
                  parse_tree__prog_io_find__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__BetterMatchFile_62, (MR_String) " in interface search path");
                }
#line 178 "prog_io_find.m"
                {
#line 178 "prog_io_find.m"
                  parse_tree__prog_io_find__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io_find__V_71_71);
                }
#line 178 "prog_io_find.m"
                {
#line 178 "prog_io_find.m"
                  parse_tree__prog_io_find__V_42_42 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__Msg0_61, parse_tree__prog_io_find__V_69_69);
                }
#line 95 "prog_io_find.m"
                {
#line 95 "prog_io_find.m"
                  MR_Word base;
#line 95 "prog_io_find.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 95 "prog_io_find.m"
                  *parse_tree__prog_io_find__MaybeFileName_12 = base;
#line 95 "prog_io_find.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__V_42_42));
#line 95 "prog_io_find.m"
                }
#line 94 "prog_io_find.m"
              }
#line 97 "prog_io_find.m"
            else
#line 99 "prog_io_find.m"
              {
#line 99 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__IntFile_25;
#line 99 "prog_io_find.m"
                MR_Word parse_tree__prog_io_find__MaybeIntDir_26;
#line 109 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__IntDir_27;
#line 104 "prog_io_find.m"
                MR_String parse_tree__prog_io_find__V_54_54;

#line 98 "prog_io_find.m"
                {
#line 98 "prog_io_find.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io_find__Globals_8, parse_tree__prog_io_find__ModuleName_11, (MR_String) ".int", (MR_Integer) 1, &parse_tree__prog_io_find__IntFile_25);
                }
#line 100 "prog_io_find.m"
                {
#line 100 "prog_io_find.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__prog_io_find__InterfaceDirs_10, parse_tree__prog_io_find__IntFile_25, &parse_tree__prog_io_find__MaybeIntDir_26);
                }
#line 103 "prog_io_find.m"
                parse_tree__prog_io_find__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_find__MaybeIntDir_26)) == (MR_mktag((MR_Integer) 0)));
#line 103 "prog_io_find.m"
                if (parse_tree__prog_io_find__succeeded)
#line 103 "prog_io_find.m"
                  {
#line 103 "prog_io_find.m"
                    parse_tree__prog_io_find__IntDir_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_find__MaybeIntDir_26, (MR_Integer) 0)));
#line 104 "prog_io_find.m"
                    {
#line 104 "prog_io_find.m"
                      parse_tree__prog_io_find__V_54_54 = mercury__dir__this_directory_0_f_0();
                    }
#line 104 "prog_io_find.m"
                    parse_tree__prog_io_find__succeeded = (strcmp(parse_tree__prog_io_find__IntDir_27, parse_tree__prog_io_find__V_54_54) == 0);
#line 104 "prog_io_find.m"
                    parse_tree__prog_io_find__succeeded = !(parse_tree__prog_io_find__succeeded);
#line 103 "prog_io_find.m"
                  }
#line 109 "prog_io_find.m"
                if (parse_tree__prog_io_find__succeeded)
#line 106 "prog_io_find.m"
                  {
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_50_50;
#line 106 "prog_io_find.m"
                    MR_Word parse_tree__prog_io_find__V_51_51;
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_52_52;
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__ModuleNameStr_77;
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__Msg0_78;
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__BetterMatchFile_79;
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_81_81;
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_82_82;
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_84_84;
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_86_86;
#line 106 "prog_io_find.m"
                    MR_String parse_tree__prog_io_find__V_88_88;

#line 106 "prog_io_find.m"
                    {
#line 106 "prog_io_find.m"
                      mercury__io__close_input_3_p_0(parse_tree__prog_io_find__SourceStream_19);
                    }
#line 108 "prog_io_find.m"
                    {
#line 108 "prog_io_find.m"
                      parse_tree__prog_io_find__V_52_52 = mercury__dir__f_slash_2_f_0(parse_tree__prog_io_find__IntDir_27, parse_tree__prog_io_find__IntFile_25);
                    }
#line 108 "prog_io_find.m"
                    {
#line 108 "prog_io_find.m"
                      parse_tree__prog_io_find__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_io_find.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_find__V_52_52));
#line 108 "prog_io_find.m"
                    }
#line 170 "prog_io_find.m"
                    {
#line 170 "prog_io_find.m"
                      parse_tree__prog_io_find__ModuleNameStr_77 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_io_find__ModuleName_11);
                    }
#line 172 "prog_io_find.m"
                    {
#line 172 "prog_io_find.m"
                      parse_tree__prog_io_find__V_84_84 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io_find__Dirs_9);
                    }
#line 172 "prog_io_find.m"
                    {
#line 172 "prog_io_find.m"
                      parse_tree__prog_io_find__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io_find__V_84_84);
                    }
#line 171 "prog_io_find.m"
                    {
#line 171 "prog_io_find.m"
                      parse_tree__prog_io_find__V_81_81 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__ModuleNameStr_77, parse_tree__prog_io_find__V_82_82);
                    }
#line 171 "prog_io_find.m"
                    {
#line 171 "prog_io_find.m"
                      parse_tree__prog_io_find__Msg0_78 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io_find__V_81_81);
                    }
#line 177 "prog_io_find.m"
                    parse_tree__prog_io_find__BetterMatchFile_79 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_find__V_51_51, (MR_Integer) 0)));
#line 178 "prog_io_find.m"
                    {
#line 178 "prog_io_find.m"
                      parse_tree__prog_io_find__V_88_88 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__BetterMatchFile_79, (MR_String) " in interface search path");
                    }
#line 178 "prog_io_find.m"
                    {
#line 178 "prog_io_find.m"
                      parse_tree__prog_io_find__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io_find__V_88_88);
                    }
#line 178 "prog_io_find.m"
                    {
#line 178 "prog_io_find.m"
                      parse_tree__prog_io_find__V_50_50 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_find__Msg0_78, parse_tree__prog_io_find__V_86_86);
                    }
#line 107 "prog_io_find.m"
                    {
#line 107 "prog_io_find.m"
                      MR_Word base;
#line 107 "prog_io_find.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "prog_io_find.m"
                      *parse_tree__prog_io_find__MaybeFileName_12 = base;
#line 107 "prog_io_find.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_find__V_50_50));
#line 107 "prog_io_find.m"
                    }
#line 106 "prog_io_find.m"
                  }
#line 109 "prog_io_find.m"
                else
#line 110 "prog_io_find.m"
                  {
#line 110 "prog_io_find.m"
                    MR_Word parse_tree__prog_io_find__V_28_28;

#line 110 "prog_io_find.m"
                    {
#line 110 "prog_io_find.m"
                      mercury__io__set_input_stream_4_p_0(parse_tree__prog_io_find__SourceStream_19, &parse_tree__prog_io_find__V_28_28);
                    }
#line 111 "prog_io_find.m"
                    *parse_tree__prog_io_find__MaybeFileName_12 = parse_tree__prog_io_find__MaybeFileName0_15;
#line 110 "prog_io_find.m"
                  }
#line 99 "prog_io_find.m"
              }
#line 77 "prog_io_find.m"
          }
#line 114 "prog_io_find.m"
        else
#line 115 "prog_io_find.m"
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
