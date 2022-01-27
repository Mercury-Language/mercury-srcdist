/*
** Automatically generated from `delay_slot.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module ll_backend.delay_slot. */
/* :- implementation. */

/*
INIT mercury__ll_backend__delay_slot__init
ENDINIT
*/

#include "ll_backend.delay_slot.mih"


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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
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





static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_1[1][1];

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_2[1][2];

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_3[1][3];




static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__delay_slot_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__delay_slot_scalar_common_2[0]))),
    ((MR_Box) (&ll_backend__delay_slot_scalar_common_1[0]))
  },
};



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



#line 59 "delay_slot.m"
void MR_CALL 
ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(
#line 59 "delay_slot.m"
  MR_Word ll_backend__delay_slot__HeadVar__1_1,
#line 59 "delay_slot.m"
  MR_Word * ll_backend__delay_slot__HeadVar__2_2)
#line 59 "delay_slot.m"
{
#line 71 "delay_slot.m"
  {
#line 71 "delay_slot.m"
    MR_bool ll_backend__delay_slot__succeeded;

#line 71 "delay_slot.m"
    if ((ll_backend__delay_slot__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "delay_slot.m"
      *ll_backend__delay_slot__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 71 "delay_slot.m"
    else
#line 72 "delay_slot.m"
      {
#line 72 "delay_slot.m"
        MR_Word ll_backend__delay_slot__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__delay_slot__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "delay_slot.m"
        MR_Word ll_backend__delay_slot__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__delay_slot__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "delay_slot.m"
        MR_Word ll_backend__delay_slot__Instr1_8;
#line 84 "delay_slot.m"
        MR_Word ll_backend__delay_slot__Instr2_9;
#line 84 "delay_slot.m"
        MR_Word ll_backend__delay_slot__Tail0_11;
#line 84 "delay_slot.m"
        MR_String ll_backend__delay_slot__C2_19;
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__Instr3_10;
#line 74 "delay_slot.m"
        MR_Integer ll_backend__delay_slot__Size_15;
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__delay_slot__Instr0_3, (MR_Integer) 0)));
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_25_25;
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_26_26;
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_27_27;
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_28_28;
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_29_29;
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_30_30;
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_31_31;
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_32_32;
#line 74 "delay_slot.m"
        MR_Integer ll_backend__delay_slot__V_42_42;
#line 74 "delay_slot.m"
        MR_String ll_backend__delay_slot__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__delay_slot__Instr0_3, (MR_Integer) 1)));
#line 74 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_6_6;
#line 76 "delay_slot.m"
        MR_String ll_backend__delay_slot__V_14_14;
#line 76 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_12_12;
#line 76 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_13_13;
#line 77 "delay_slot.m"
        MR_String ll_backend__delay_slot__V_18_18;
#line 77 "delay_slot.m"
        MR_String ll_backend__delay_slot__V_16_16;
#line 77 "delay_slot.m"
        MR_Word ll_backend__delay_slot__V_17_17;

#line 74 "delay_slot.m"
        ll_backend__delay_slot__succeeded = ((((MR_tag((MR_Word) ll_backend__delay_slot__V_24_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_24_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 74 "delay_slot.m"
        if (ll_backend__delay_slot__succeeded)
#line 74 "delay_slot.m"
          {
#line 74 "delay_slot.m"
            ll_backend__delay_slot__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_24_24, (MR_Integer) 1)));
#line 75 "delay_slot.m"
            ll_backend__delay_slot__succeeded = ((MR_tag((MR_Word) ll_backend__delay_slot__Instrs0_4)) == (MR_mktag((MR_Integer) 1)));
#line 75 "delay_slot.m"
            if (ll_backend__delay_slot__succeeded)
#line 75 "delay_slot.m"
              {
#line 75 "delay_slot.m"
                ll_backend__delay_slot__Instr1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__delay_slot__Instrs0_4, (MR_Integer) 0)));
#line 75 "delay_slot.m"
                ll_backend__delay_slot__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__delay_slot__Instrs0_4, (MR_Integer) 1)));
#line 75 "delay_slot.m"
                ll_backend__delay_slot__succeeded = ((MR_tag((MR_Word) ll_backend__delay_slot__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 75 "delay_slot.m"
                if (ll_backend__delay_slot__succeeded)
#line 75 "delay_slot.m"
                  {
#line 75 "delay_slot.m"
                    ll_backend__delay_slot__Instr2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_25_25, (MR_Integer) 0)));
#line 75 "delay_slot.m"
                    ll_backend__delay_slot__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_25_25, (MR_Integer) 1)));
#line 75 "delay_slot.m"
                    ll_backend__delay_slot__succeeded = ((MR_tag((MR_Word) ll_backend__delay_slot__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 75 "delay_slot.m"
                    if (ll_backend__delay_slot__succeeded)
#line 75 "delay_slot.m"
                      {
#line 75 "delay_slot.m"
                        ll_backend__delay_slot__Instr3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_26_26, (MR_Integer) 0)));
#line 75 "delay_slot.m"
                        ll_backend__delay_slot__Tail0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_26_26, (MR_Integer) 1)));
#line 76 "delay_slot.m"
                        ll_backend__delay_slot__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__delay_slot__Instr1_8, (MR_Integer) 0)));
#line 76 "delay_slot.m"
                        ll_backend__delay_slot__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__delay_slot__Instr1_8, (MR_Integer) 1)));
#line 76 "delay_slot.m"
                        ll_backend__delay_slot__succeeded = ((((MR_tag((MR_Word) ll_backend__delay_slot__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 76 "delay_slot.m"
                        if (ll_backend__delay_slot__succeeded)
#line 76 "delay_slot.m"
                          {
#line 76 "delay_slot.m"
                            ll_backend__delay_slot__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_27_27, (MR_Integer) 1)));
#line 76 "delay_slot.m"
                            ll_backend__delay_slot__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_27_27, (MR_Integer) 2)));
#line 77 "delay_slot.m"
                            ll_backend__delay_slot__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__delay_slot__Instr2_9, (MR_Integer) 0)));
#line 77 "delay_slot.m"
                            ll_backend__delay_slot__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__delay_slot__Instr2_9, (MR_Integer) 1)));
#line 77 "delay_slot.m"
                            ll_backend__delay_slot__succeeded = ((((MR_tag((MR_Word) ll_backend__delay_slot__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 24)));
#line 77 "delay_slot.m"
                            if (ll_backend__delay_slot__succeeded)
#line 77 "delay_slot.m"
                              {
#line 77 "delay_slot.m"
                                ll_backend__delay_slot__Size_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_28_28, (MR_Integer) 1)));
#line 77 "delay_slot.m"
                                ll_backend__delay_slot__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_28_28, (MR_Integer) 2)));
#line 77 "delay_slot.m"
                                ll_backend__delay_slot__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_28_28, (MR_Integer) 3)));
#line 78 "delay_slot.m"
                                ll_backend__delay_slot__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__delay_slot__Instr3_10, (MR_Integer) 0)));
#line 78 "delay_slot.m"
                                ll_backend__delay_slot__C2_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__delay_slot__Instr3_10, (MR_Integer) 1)));
#line 78 "delay_slot.m"
                                ll_backend__delay_slot__succeeded = ((((MR_tag((MR_Word) ll_backend__delay_slot__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 78 "delay_slot.m"
                                if (ll_backend__delay_slot__succeeded)
#line 78 "delay_slot.m"
                                  {
#line 78 "delay_slot.m"
                                    ll_backend__delay_slot__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_29_29, (MR_Integer) 1)));
#line 78 "delay_slot.m"
                                    ll_backend__delay_slot__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_29_29, (MR_Integer) 2)));
#line 78 "delay_slot.m"
                                    ll_backend__delay_slot__succeeded = ((((MR_tag((MR_Word) ll_backend__delay_slot__V_30_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_30_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 78 "delay_slot.m"
                                    if (ll_backend__delay_slot__succeeded)
#line 78 "delay_slot.m"
                                      {
#line 78 "delay_slot.m"
                                        ll_backend__delay_slot__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__delay_slot__V_30_30, (MR_Integer) 1)));
#line 78 "delay_slot.m"
                                        ll_backend__delay_slot__succeeded = (ll_backend__delay_slot__Size_15 == ll_backend__delay_slot__V_42_42);
#line 74 "delay_slot.m"
                                        if (ll_backend__delay_slot__succeeded)
#line 74 "delay_slot.m"
                                          {
#line 78 "delay_slot.m"
                                            ll_backend__delay_slot__succeeded = ((MR_tag((MR_Word) ll_backend__delay_slot__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 78 "delay_slot.m"
                                            if (ll_backend__delay_slot__succeeded)
#line 78 "delay_slot.m"
                                              {
#line 78 "delay_slot.m"
                                                ll_backend__delay_slot__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__delay_slot__V_31_31, (MR_Integer) 0)));
#line 78 "delay_slot.m"
                                                ll_backend__delay_slot__succeeded = (ll_backend__delay_slot__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 78 "delay_slot.m"
                                              }
#line 74 "delay_slot.m"
                                          }
#line 78 "delay_slot.m"
                                      }
#line 78 "delay_slot.m"
                                  }
#line 77 "delay_slot.m"
                              }
#line 76 "delay_slot.m"
                          }
#line 75 "delay_slot.m"
                      }
#line 75 "delay_slot.m"
                  }
#line 75 "delay_slot.m"
              }
#line 74 "delay_slot.m"
          }
#line 84 "delay_slot.m"
        if (ll_backend__delay_slot__succeeded)
#line 80 "delay_slot.m"
          {
#line 80 "delay_slot.m"
            MR_Word ll_backend__delay_slot__Tail1_20;
#line 80 "delay_slot.m"
            MR_String ll_backend__delay_slot__NewC2_21;
#line 80 "delay_slot.m"
            MR_Word ll_backend__delay_slot__EarlySave_22;
#line 80 "delay_slot.m"
            MR_Word ll_backend__delay_slot__V_39_39;
#line 80 "delay_slot.m"
            MR_Word ll_backend__delay_slot__V_40_40;
#line 80 "delay_slot.m"
            MR_Word ll_backend__delay_slot__V_41_41;

#line 80 "delay_slot.m"
            {
#line 80 "delay_slot.m"
              ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(ll_backend__delay_slot__Tail0_11, &ll_backend__delay_slot__Tail1_20);
            }
#line 81 "delay_slot.m"
            {
#line 81 "delay_slot.m"
              mercury__string__append_3_p_2(ll_backend__delay_slot__C2_19, (MR_String) " (early save in delay slot)", &ll_backend__delay_slot__NewC2_21);
            }
#line 82 "delay_slot.m"
            {
#line 82 "delay_slot.m"
              ll_backend__delay_slot__EarlySave_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 82 "delay_slot.m"
              MR_hl_field(MR_mktag(0), ll_backend__delay_slot__EarlySave_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__delay_slot_scalar_common_3[0])));
#line 82 "delay_slot.m"
              MR_hl_field(MR_mktag(0), ll_backend__delay_slot__EarlySave_22, 1) = ((MR_Box) (ll_backend__delay_slot__NewC2_21));
#line 82 "delay_slot.m"
            }
#line 83 "delay_slot.m"
            {
#line 83 "delay_slot.m"
              ll_backend__delay_slot__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "delay_slot.m"
              MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_41_41, 0) = ((MR_Box) (ll_backend__delay_slot__Instr2_9));
#line 83 "delay_slot.m"
              MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_41_41, 1) = ((MR_Box) (ll_backend__delay_slot__Tail1_20));
#line 83 "delay_slot.m"
            }
#line 83 "delay_slot.m"
            {
#line 83 "delay_slot.m"
              ll_backend__delay_slot__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "delay_slot.m"
              MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_40_40, 0) = ((MR_Box) (ll_backend__delay_slot__Instr1_8));
#line 83 "delay_slot.m"
              MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_40_40, 1) = ((MR_Box) (ll_backend__delay_slot__V_41_41));
#line 83 "delay_slot.m"
            }
#line 83 "delay_slot.m"
            {
#line 83 "delay_slot.m"
              ll_backend__delay_slot__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "delay_slot.m"
              MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_39_39, 0) = ((MR_Box) (ll_backend__delay_slot__EarlySave_22));
#line 83 "delay_slot.m"
              MR_hl_field(MR_mktag(1), ll_backend__delay_slot__V_39_39, 1) = ((MR_Box) (ll_backend__delay_slot__V_40_40));
#line 83 "delay_slot.m"
            }
#line 83 "delay_slot.m"
            {
#line 83 "delay_slot.m"
              MR_Word base;
#line 83 "delay_slot.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "delay_slot.m"
              *ll_backend__delay_slot__HeadVar__2_2 = base;
#line 83 "delay_slot.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__delay_slot__Instr0_3));
#line 83 "delay_slot.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__delay_slot__V_39_39));
#line 83 "delay_slot.m"
            }
#line 80 "delay_slot.m"
          }
#line 84 "delay_slot.m"
        else
#line 85 "delay_slot.m"
          {
#line 85 "delay_slot.m"
            MR_Word ll_backend__delay_slot__Instrs1_23;

#line 85 "delay_slot.m"
            {
#line 85 "delay_slot.m"
              ll_backend__delay_slot__fill_branch_delay_slot_2_p_0(ll_backend__delay_slot__Instrs0_4, &ll_backend__delay_slot__Instrs1_23);
            }
#line 86 "delay_slot.m"
            {
#line 86 "delay_slot.m"
              MR_Word base;
#line 86 "delay_slot.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 86 "delay_slot.m"
              *ll_backend__delay_slot__HeadVar__2_2 = base;
#line 86 "delay_slot.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__delay_slot__Instr0_3));
#line 86 "delay_slot.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__delay_slot__Instrs1_23));
#line 86 "delay_slot.m"
            }
#line 85 "delay_slot.m"
          }
#line 72 "delay_slot.m"
      }
#line 71 "delay_slot.m"
  }
#line 59 "delay_slot.m"
}

void mercury__ll_backend__delay_slot__init(void)
{
}

void mercury__ll_backend__delay_slot__init_type_tables(void)
{
}

void mercury__ll_backend__delay_slot__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.delay_slot. */
