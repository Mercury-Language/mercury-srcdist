/*
** Automatically generated from `labelopt.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module ll_backend.labelopt. */
/* :- implementation. */

/*
INIT mercury__ll_backend__labelopt__init
ENDINIT
*/

#include "ll_backend.labelopt.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "set_tree234.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 96 "labelopt.m"
static void MR_CALL 
ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__HeadVar__1_1,
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2,
#line 96 "labelopt.m"
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_RevInstrs_3,
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__STATE_VARIABLE_Mod_0_4,
#line 96 "labelopt.m"
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_Mod_5,
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__HeadVar__6_6,
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__HeadVar__7_7);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 96 "labelopt.m"
static void MR_CALL 
ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__HeadVar__1_1,
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2,
#line 96 "labelopt.m"
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_RevInstrs_3,
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__STATE_VARIABLE_Mod_0_4,
#line 96 "labelopt.m"
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_Mod_5,
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__HeadVar__6_6,
#line 96 "labelopt.m"
  MR_Word ll_backend__labelopt__HeadVar__7_7)
#line 96 "labelopt.m"
{
#line 100 "labelopt.m"
  while (MR_TRUE)
#line 100 "labelopt.m"
    {
#line 100 "labelopt.m"
      /* tailcall optimized into a loop */
#line 100 "labelopt.m"
      {
#line 100 "labelopt.m"
        MR_bool ll_backend__labelopt__succeeded;

#line 100 "labelopt.m"
        if ((ll_backend__labelopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 100 "labelopt.m"
          {
#line 100 "labelopt.m"
            *ll_backend__labelopt__STATE_VARIABLE_Mod_5 = ll_backend__labelopt__STATE_VARIABLE_Mod_0_4;
#line 100 "labelopt.m"
            *ll_backend__labelopt__STATE_VARIABLE_RevInstrs_3 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2;
#line 100 "labelopt.m"
          }
#line 100 "labelopt.m"
        else
#line 102 "labelopt.m"
          {
#line 102 "labelopt.m"
            MR_Word ll_backend__labelopt__Instr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "labelopt.m"
            MR_Word ll_backend__labelopt__Instrs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "labelopt.m"
            MR_Word ll_backend__labelopt__Uinstr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__labelopt__Instr0_16, (MR_Integer) 0)));
#line 102 "labelopt.m"
            MR_Word ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33;
#line 102 "labelopt.m"
            MR_Word ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34;
#line 102 "labelopt.m"
            MR_Word ll_backend__labelopt__STATE_VARIABLE_Mod_37_37;
#line 103 "labelopt.m"
            MR_String ll_backend__labelopt___Comment_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__labelopt__Instr0_16, (MR_Integer) 1)));
#line 120 "labelopt.m"
            MR_Word ll_backend__labelopt__Label_24;

#line 104 "labelopt.m"
            ll_backend__labelopt__succeeded = ((((MR_tag((MR_Word) ll_backend__labelopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__labelopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 104 "labelopt.m"
            if (ll_backend__labelopt__succeeded)
#line 104 "labelopt.m"
              {
#line 104 "labelopt.m"
                ll_backend__labelopt__Label_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__labelopt__Uinstr0_22, (MR_Integer) 1)));
#line 107 "labelopt.m"
                {
#line 107 "labelopt.m"
                  MR_Word ll_backend__labelopt__EntryType_25;
#line 107 "labelopt.m"
                  MR_Word ll_backend__labelopt__V_26_26;

#line 107 "labelopt.m"
                  ll_backend__labelopt__succeeded = ((MR_tag((MR_Word) ll_backend__labelopt__Label_24)) == (MR_mktag((MR_Integer) 1)));
#line 107 "labelopt.m"
                  if (ll_backend__labelopt__succeeded)
#line 107 "labelopt.m"
                    {
#line 107 "labelopt.m"
                      ll_backend__labelopt__EntryType_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__Label_24, (MR_Integer) 0)));
#line 107 "labelopt.m"
                      ll_backend__labelopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__Label_24, (MR_Integer) 1)));
#line 109 "labelopt.m"
                      if ((ll_backend__labelopt__EntryType_25 == (MR_Integer) 2))
#line 108 "labelopt.m"
                        ll_backend__labelopt__succeeded = MR_TRUE;
#line 109 "labelopt.m"
                      else
#line 109 "labelopt.m"
                        if ((ll_backend__labelopt__EntryType_25 == (MR_Integer) 1))
#line 109 "labelopt.m"
                          ll_backend__labelopt__succeeded = MR_TRUE;
#line 109 "labelopt.m"
                        else
#line 109 "labelopt.m"
                          ll_backend__labelopt__succeeded = MR_FALSE;
#line 107 "labelopt.m"
                    }
#line 107 "labelopt.m"
                }
#line 111 "labelopt.m"
                if (!(ll_backend__labelopt__succeeded))
#line 112 "labelopt.m"
                  {
#line 112 "labelopt.m"
                    {
#line 112 "labelopt.m"
                      ll_backend__labelopt__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__labelopt__Label_24)), ll_backend__labelopt__HeadVar__7_7);
                    }
#line 112 "labelopt.m"
                  }
#line 117 "labelopt.m"
                if (ll_backend__labelopt__succeeded)
#line 115 "labelopt.m"
                  {
#line 115 "labelopt.m"
                    {
#line 115 "labelopt.m"
                      ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "labelopt.m"
                      MR_hl_field(MR_mktag(1), ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33, 0) = ((MR_Box) (ll_backend__labelopt__Instr0_16));
#line 115 "labelopt.m"
                      MR_hl_field(MR_mktag(1), ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33, 1) = ((MR_Box) (ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2));
#line 115 "labelopt.m"
                    }
#line 116 "labelopt.m"
                    ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34 = (MR_Integer) 1;
#line 116 "labelopt.m"
                    ll_backend__labelopt__STATE_VARIABLE_Mod_37_37 = ll_backend__labelopt__STATE_VARIABLE_Mod_0_4;
#line 115 "labelopt.m"
                  }
#line 117 "labelopt.m"
                else
#line 118 "labelopt.m"
                  {
#line 153 "labelopt.m"
                    ll_backend__labelopt__STATE_VARIABLE_Mod_37_37 = (MR_Integer) 1;
#line 153 "labelopt.m"
                    ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2;
#line 118 "labelopt.m"
                    ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34 = ll_backend__labelopt__HeadVar__6_6;
#line 118 "labelopt.m"
                  }
#line 104 "labelopt.m"
              }
#line 104 "labelopt.m"
            else
#line 127 "labelopt.m"
              {
#line 127 "labelopt.m"
                MR_Word ll_backend__labelopt__Canfallthrough_27;

#line 124 "labelopt.m"
                if ((ll_backend__labelopt__HeadVar__6_6 == (MR_Integer) 0))
#line 125 "labelopt.m"
                  {
#line 153 "labelopt.m"
                    ll_backend__labelopt__STATE_VARIABLE_Mod_37_37 = (MR_Integer) 1;
#line 153 "labelopt.m"
                    ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2;
#line 125 "labelopt.m"
                  }
#line 124 "labelopt.m"
                else
#line 122 "labelopt.m"
                  {
#line 123 "labelopt.m"
                    {
#line 123 "labelopt.m"
                      ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "labelopt.m"
                      MR_hl_field(MR_mktag(1), ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33, 0) = ((MR_Box) (ll_backend__labelopt__Instr0_16));
#line 123 "labelopt.m"
                      MR_hl_field(MR_mktag(1), ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33, 1) = ((MR_Box) (ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2));
#line 123 "labelopt.m"
                    }
#line 123 "labelopt.m"
                    ll_backend__labelopt__STATE_VARIABLE_Mod_37_37 = ll_backend__labelopt__STATE_VARIABLE_Mod_0_4;
#line 122 "labelopt.m"
                  }
#line 128 "labelopt.m"
                {
#line 128 "labelopt.m"
                  ll_backend__labelopt__Canfallthrough_27 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__labelopt__Uinstr0_22);
                }
#line 131 "labelopt.m"
                if ((ll_backend__labelopt__Canfallthrough_27 == (MR_Integer) 0))
#line 133 "labelopt.m"
                  ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34 = (MR_Integer) 0;
#line 131 "labelopt.m"
                else
#line 130 "labelopt.m"
                  ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34 = ll_backend__labelopt__HeadVar__6_6;
#line 127 "labelopt.m"
              }
#line 136 "labelopt.m"
            /* direct tailcall eliminated */
#line 136 "labelopt.m"
            {
#line 136 "labelopt.m"
              MR_Word ll_backend__labelopt__HeadVar__1__tmp_copy_1 = ll_backend__labelopt__Instrs0_17;
#line 136 "labelopt.m"
              MR_Word ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0__tmp_copy_2 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33;
#line 136 "labelopt.m"
              MR_Word ll_backend__labelopt__STATE_VARIABLE_Mod_0__tmp_copy_4 = ll_backend__labelopt__STATE_VARIABLE_Mod_37_37;
#line 136 "labelopt.m"
              MR_Word ll_backend__labelopt__HeadVar__6__tmp_copy_6 = ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34;

#line 136 "labelopt.m"
              ll_backend__labelopt__HeadVar__6_6 = ll_backend__labelopt__HeadVar__6__tmp_copy_6;
#line 136 "labelopt.m"
              ll_backend__labelopt__STATE_VARIABLE_Mod_0_4 = ll_backend__labelopt__STATE_VARIABLE_Mod_0__tmp_copy_4;
#line 136 "labelopt.m"
              ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0__tmp_copy_2;
#line 136 "labelopt.m"
              ll_backend__labelopt__HeadVar__1_1 = ll_backend__labelopt__HeadVar__1__tmp_copy_1;
#line 136 "labelopt.m"
            }
#line 136 "labelopt.m"
            continue;
#line 102 "labelopt.m"
          }
#line 100 "labelopt.m"
      }
#line 100 "labelopt.m"
      break;
#line 100 "labelopt.m"
    }
#line 96 "labelopt.m"
}

#line 39 "labelopt.m"
void MR_CALL 
ll_backend__labelopt__build_useset_3_p_0(
#line 39 "labelopt.m"
  MR_Word ll_backend__labelopt__HeadVar__1_1,
#line 39 "labelopt.m"
  MR_Word ll_backend__labelopt__STATE_VARIABLE_Useset_0_2,
#line 39 "labelopt.m"
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_Useset_3)
#line 39 "labelopt.m"
{
#line 67 "labelopt.m"
  while (MR_TRUE)
#line 67 "labelopt.m"
    {
#line 67 "labelopt.m"
      /* tailcall optimized into a loop */
#line 67 "labelopt.m"
      {
#line 67 "labelopt.m"
        MR_bool ll_backend__labelopt__succeeded;

#line 67 "labelopt.m"
        if ((ll_backend__labelopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "labelopt.m"
          *ll_backend__labelopt__STATE_VARIABLE_Useset_3 = ll_backend__labelopt__STATE_VARIABLE_Useset_0_2;
#line 67 "labelopt.m"
        else
#line 68 "labelopt.m"
          {
#line 68 "labelopt.m"
            MR_Word ll_backend__labelopt__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "labelopt.m"
            MR_Word ll_backend__labelopt__Instructions_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "labelopt.m"
            MR_Word ll_backend__labelopt__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__labelopt__Instr_7, (MR_Integer) 0)));
#line 68 "labelopt.m"
            MR_Word ll_backend__labelopt__Labels_12;
#line 68 "labelopt.m"
            MR_Word ll_backend__labelopt__STATE_VARIABLE_Useset_15_15;
#line 69 "labelopt.m"
            MR_String ll_backend__labelopt___Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__labelopt__Instr_7, (MR_Integer) 1)));

#line 70 "labelopt.m"
            {
#line 70 "labelopt.m"
              ll_backend__opt_util__instr_labels_only_2_p_0(ll_backend__labelopt__Uinstr_10, &ll_backend__labelopt__Labels_12);
            }
#line 71 "labelopt.m"
            {
#line 71 "labelopt.m"
              mercury__set_tree234__insert_list_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__labelopt__Labels_12, ll_backend__labelopt__STATE_VARIABLE_Useset_0_2, &ll_backend__labelopt__STATE_VARIABLE_Useset_15_15);
            }
#line 72 "labelopt.m"
            /* direct tailcall eliminated */
#line 72 "labelopt.m"
            {
#line 72 "labelopt.m"
              MR_Word ll_backend__labelopt__HeadVar__1__tmp_copy_1 = ll_backend__labelopt__Instructions_8;
#line 72 "labelopt.m"
              MR_Word ll_backend__labelopt__STATE_VARIABLE_Useset_0__tmp_copy_2 = ll_backend__labelopt__STATE_VARIABLE_Useset_15_15;

#line 72 "labelopt.m"
              ll_backend__labelopt__STATE_VARIABLE_Useset_0_2 = ll_backend__labelopt__STATE_VARIABLE_Useset_0__tmp_copy_2;
#line 72 "labelopt.m"
              ll_backend__labelopt__HeadVar__1_1 = ll_backend__labelopt__HeadVar__1__tmp_copy_1;
#line 72 "labelopt.m"
            }
#line 72 "labelopt.m"
            continue;
#line 68 "labelopt.m"
          }
#line 67 "labelopt.m"
      }
#line 67 "labelopt.m"
      break;
#line 67 "labelopt.m"
    }
#line 39 "labelopt.m"
}

#line 32 "labelopt.m"
void MR_CALL 
ll_backend__labelopt__labelopt_main_5_p_0(
#line 32 "labelopt.m"
  MR_Word ll_backend__labelopt__Final_6,
#line 32 "labelopt.m"
  MR_Word ll_backend__labelopt__LayoutLabelSet_7,
#line 32 "labelopt.m"
  MR_Word ll_backend__labelopt__Instrs0_8,
#line 32 "labelopt.m"
  MR_Word * ll_backend__labelopt__Instrs_9,
#line 32 "labelopt.m"
  MR_Word * ll_backend__labelopt__Mod_10)
#line 32 "labelopt.m"
{
#line 53 "labelopt.m"
  {
#line 53 "labelopt.m"
    MR_bool ll_backend__labelopt__succeeded;
#line 53 "labelopt.m"
    MR_Word ll_backend__labelopt__Useset_11;
#line 53 "labelopt.m"
    MR_Word ll_backend__labelopt__Instrs1_12;
#line 53 "labelopt.m"
    MR_Word ll_backend__labelopt__RevInstrs_19;

#line 54 "labelopt.m"
    {
#line 54 "labelopt.m"
      ll_backend__labelopt__build_useset_3_p_0(ll_backend__labelopt__Instrs0_8, ll_backend__labelopt__LayoutLabelSet_7, &ll_backend__labelopt__Useset_11);
    }
#line 92 "labelopt.m"
    {
#line 92 "labelopt.m"
      ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(ll_backend__labelopt__Instrs0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__labelopt__RevInstrs_19, (MR_Integer) 0, ll_backend__labelopt__Mod_10, (MR_Integer) 1, ll_backend__labelopt__Useset_11);
    }
#line 94 "labelopt.m"
    {
#line 94 "labelopt.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__labelopt__RevInstrs_19, &ll_backend__labelopt__Instrs1_12);
    }
#line 57 "labelopt.m"
    ll_backend__labelopt__succeeded = (ll_backend__labelopt__Final_6 == (MR_Integer) 1);
#line 57 "labelopt.m"
    if (ll_backend__labelopt__succeeded)
#line 58 "labelopt.m"
      ll_backend__labelopt__succeeded = (*ll_backend__labelopt__Mod_10 == (MR_Integer) 1);
#line 61 "labelopt.m"
    if (ll_backend__labelopt__succeeded)
#line 60 "labelopt.m"
      {
#line 60 "labelopt.m"
        MR_Word ll_backend__labelopt__V_13_13;

#line 60 "labelopt.m"
        {
#line 60 "labelopt.m"
          ll_backend__labelopt__labelopt_main_5_p_0(ll_backend__labelopt__Final_6, ll_backend__labelopt__LayoutLabelSet_7, ll_backend__labelopt__Instrs1_12, ll_backend__labelopt__Instrs_9, &ll_backend__labelopt__V_13_13);
        }
#line 60 "labelopt.m"
      }
#line 61 "labelopt.m"
    else
#line 62 "labelopt.m"
      *ll_backend__labelopt__Instrs_9 = ll_backend__labelopt__Instrs1_12;
#line 53 "labelopt.m"
  }
#line 32 "labelopt.m"
}

void mercury__ll_backend__labelopt__init(void)
{
}

void mercury__ll_backend__labelopt__init_type_tables(void)
{
}

void mercury__ll_backend__labelopt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.labelopt. */
