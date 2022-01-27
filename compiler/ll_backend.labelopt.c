/*
** Automatically generated from `labelopt.m'
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


/* :- module ll_backend.labelopt. */
/* :- implementation. */

/*
INIT mercury__ll_backend__labelopt__init
ENDINIT
*/

#include "ll_backend.labelopt.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
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
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(
  MR_Word ll_backend__labelopt__HeadVar__1_1,
  MR_Word ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2,
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_RevInstrs_3,
  MR_Word ll_backend__labelopt__STATE_VARIABLE_Mod_0_4,
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_Mod_5,
  MR_Word ll_backend__labelopt__HeadVar__6_6,
  MR_Word ll_backend__labelopt__HeadVar__7_7);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(
  MR_Word ll_backend__labelopt__HeadVar__1_1,
  MR_Word ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2,
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_RevInstrs_3,
  MR_Word ll_backend__labelopt__STATE_VARIABLE_Mod_0_4,
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_Mod_5,
  MR_Word ll_backend__labelopt__HeadVar__6_6,
  MR_Word ll_backend__labelopt__HeadVar__7_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__labelopt__succeeded;

        if ((ll_backend__labelopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__labelopt__STATE_VARIABLE_Mod_5 = ll_backend__labelopt__STATE_VARIABLE_Mod_0_4;
            *ll_backend__labelopt__STATE_VARIABLE_RevInstrs_3 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2;
          }
        else
          {
            MR_Word ll_backend__labelopt__Instr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__labelopt__Instrs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__labelopt__Uinstr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__labelopt__Instr0_16, (MR_Integer) 0)));
            MR_Word ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33;
            MR_Word ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34;
            MR_Word ll_backend__labelopt__STATE_VARIABLE_Mod_37_37;
            MR_String ll_backend__labelopt___Comment_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__labelopt__Instr0_16, (MR_Integer) 1)));
            MR_Word ll_backend__labelopt__Label_24;

            ll_backend__labelopt__succeeded = ((((MR_tag((MR_Word) ll_backend__labelopt__Uinstr0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__labelopt__Uinstr0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__labelopt__succeeded)
              {
                ll_backend__labelopt__Label_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__labelopt__Uinstr0_22, (MR_Integer) 1)));
                {
                  MR_Word ll_backend__labelopt__EntryType_25;
                  MR_Word ll_backend__labelopt__V_26_26;

                  ll_backend__labelopt__succeeded = ((MR_tag((MR_Word) ll_backend__labelopt__Label_24)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__labelopt__succeeded)
                    {
                      ll_backend__labelopt__EntryType_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__Label_24, (MR_Integer) 0)));
                      ll_backend__labelopt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__Label_24, (MR_Integer) 1)));
                      switch (ll_backend__labelopt__EntryType_25) {
                        default:
                          ll_backend__labelopt__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 2:
                          ll_backend__labelopt__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 1:
                          ll_backend__labelopt__succeeded = MR_TRUE;
                          break;
                      }
                    }
                }
                if (!(ll_backend__labelopt__succeeded))
                  {
                    {
                      ll_backend__labelopt__succeeded = mercury__set_tree234__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__labelopt__Label_24)), ll_backend__labelopt__HeadVar__7_7);
                    }
                  }
                if (ll_backend__labelopt__succeeded)
                  {
                    {
                      ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33, 0) = ((MR_Box) (ll_backend__labelopt__Instr0_16));
                      MR_hl_field(MR_mktag(1), ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33, 1) = ((MR_Box) (ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2));
                    }
                    ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34 = (MR_Integer) 1;
                    ll_backend__labelopt__STATE_VARIABLE_Mod_37_37 = ll_backend__labelopt__STATE_VARIABLE_Mod_0_4;
                  }
                else
                  {
                    ll_backend__labelopt__STATE_VARIABLE_Mod_37_37 = (MR_Integer) 1;
                    ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2;
                    ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34 = ll_backend__labelopt__HeadVar__6_6;
                  }
              }
            else
              {
                MR_Word ll_backend__labelopt__Canfallthrough_27;

                switch (ll_backend__labelopt__HeadVar__6_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ll_backend__labelopt__STATE_VARIABLE_Mod_37_37 = (MR_Integer) 1;
                      ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33, 0) = ((MR_Box) (ll_backend__labelopt__Instr0_16));
                        MR_hl_field(MR_mktag(1), ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33, 1) = ((MR_Box) (ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2));
                      }
                      ll_backend__labelopt__STATE_VARIABLE_Mod_37_37 = ll_backend__labelopt__STATE_VARIABLE_Mod_0_4;
                    }
                    break;
                }
                {
                  ll_backend__labelopt__Canfallthrough_27 = ll_backend__opt_util__can_instr_fall_through_1_f_0(ll_backend__labelopt__Uinstr0_22);
                }
                switch (ll_backend__labelopt__Canfallthrough_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34 = ll_backend__labelopt__HeadVar__6_6;
                    break;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__labelopt__HeadVar__1__tmp_copy_1 = ll_backend__labelopt__Instrs0_17;
              MR_Word ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0__tmp_copy_2 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_33_33;
              MR_Word ll_backend__labelopt__STATE_VARIABLE_Mod_0__tmp_copy_4 = ll_backend__labelopt__STATE_VARIABLE_Mod_37_37;
              MR_Word ll_backend__labelopt__HeadVar__6__tmp_copy_6 = ll_backend__labelopt__STATE_VARIABLE_Fallthrough_34_34;

              ll_backend__labelopt__HeadVar__6_6 = ll_backend__labelopt__HeadVar__6__tmp_copy_6;
              ll_backend__labelopt__STATE_VARIABLE_Mod_0_4 = ll_backend__labelopt__STATE_VARIABLE_Mod_0__tmp_copy_4;
              ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0_2 = ll_backend__labelopt__STATE_VARIABLE_RevInstrs_0__tmp_copy_2;
              ll_backend__labelopt__HeadVar__1_1 = ll_backend__labelopt__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__labelopt__build_useset_3_p_0(
  MR_Word ll_backend__labelopt__HeadVar__1_1,
  MR_Word ll_backend__labelopt__STATE_VARIABLE_Useset_0_2,
  MR_Word * ll_backend__labelopt__STATE_VARIABLE_Useset_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__labelopt__succeeded;

        if ((ll_backend__labelopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__labelopt__STATE_VARIABLE_Useset_3 = ll_backend__labelopt__STATE_VARIABLE_Useset_0_2;
        else
          {
            MR_Word ll_backend__labelopt__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__labelopt__Instructions_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__labelopt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__labelopt__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__labelopt__Instr_7, (MR_Integer) 0)));
            MR_Word ll_backend__labelopt__Labels_12;
            MR_Word ll_backend__labelopt__STATE_VARIABLE_Useset_15_15;
            MR_String ll_backend__labelopt___Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__labelopt__Instr_7, (MR_Integer) 1)));

            {
              ll_backend__opt_util__instr_labels_only_2_p_0(ll_backend__labelopt__Uinstr_10, &ll_backend__labelopt__Labels_12);
            }
            {
              mercury__set_tree234__insert_list_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__labelopt__Labels_12, ll_backend__labelopt__STATE_VARIABLE_Useset_0_2, &ll_backend__labelopt__STATE_VARIABLE_Useset_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__labelopt__HeadVar__1__tmp_copy_1 = ll_backend__labelopt__Instructions_8;
              MR_Word ll_backend__labelopt__STATE_VARIABLE_Useset_0__tmp_copy_2 = ll_backend__labelopt__STATE_VARIABLE_Useset_15_15;

              ll_backend__labelopt__STATE_VARIABLE_Useset_0_2 = ll_backend__labelopt__STATE_VARIABLE_Useset_0__tmp_copy_2;
              ll_backend__labelopt__HeadVar__1_1 = ll_backend__labelopt__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__labelopt__labelopt_main_5_p_0(
  MR_Word ll_backend__labelopt__Final_6,
  MR_Word ll_backend__labelopt__LayoutLabelSet_7,
  MR_Word ll_backend__labelopt__Instrs0_8,
  MR_Word * ll_backend__labelopt__Instrs_9,
  MR_Word * ll_backend__labelopt__Mod_10)
{
  {
    MR_bool ll_backend__labelopt__succeeded;
    MR_Word ll_backend__labelopt__Useset_11;
    MR_Word ll_backend__labelopt__Instrs1_12;
    MR_Word ll_backend__labelopt__RevInstrs_19;

    {
      ll_backend__labelopt__build_useset_3_p_0(ll_backend__labelopt__Instrs0_8, ll_backend__labelopt__LayoutLabelSet_7, &ll_backend__labelopt__Useset_11);
    }
    {
      ll_backend__labelopt__opt_labels_in_instr_list_2_7_p_0(ll_backend__labelopt__Instrs0_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__labelopt__RevInstrs_19, (MR_Integer) 0, ll_backend__labelopt__Mod_10, (MR_Integer) 1, ll_backend__labelopt__Useset_11);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__labelopt__RevInstrs_19, &ll_backend__labelopt__Instrs1_12);
    }
    ll_backend__labelopt__succeeded = (ll_backend__labelopt__Final_6 == (MR_Integer) 1);
    if (ll_backend__labelopt__succeeded)
      ll_backend__labelopt__succeeded = (*ll_backend__labelopt__Mod_10 == (MR_Integer) 1);
    if (ll_backend__labelopt__succeeded)
      {
        MR_Word ll_backend__labelopt__V_13_13;

        {
          ll_backend__labelopt__labelopt_main_5_p_0(ll_backend__labelopt__Final_6, ll_backend__labelopt__LayoutLabelSet_7, ll_backend__labelopt__Instrs1_12, ll_backend__labelopt__Instrs_9, &ll_backend__labelopt__V_13_13);
        }
      }
    else
      *ll_backend__labelopt__Instrs_9 = ll_backend__labelopt__Instrs1_12;
  }
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
