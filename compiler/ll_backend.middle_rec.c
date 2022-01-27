/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module ll_backend.middle_rec. */
/* :- implementation. */

/*
INIT mercury__ll_backend__middle_rec__init
ENDINIT
*/

#include "ll_backend.middle_rec.mih"


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
#include "hlds.goal_form.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "ll_backend.proc_gen.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen.mih"
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
#include "int.mih"
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
#include "require.mih"
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




#line 742 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_acc_3_p_0(
#line 742 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 742 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
#line 742 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3);

#line 737 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
#line 737 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 737 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Labels_4);

#line 724 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
#line 724 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 724 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 724 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 715 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
#line 715 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 715 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 715 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 704 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
#line 704 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 704 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 704 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 676 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
#line 676 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Rval_4,
#line 676 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
#line 676 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17);

#line 660 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
#line 660 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Lval_4,
#line 660 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
#line 660 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13);

#line 652 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
#line 652 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 652 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 652 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 630 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
#line 630 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 630 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 630 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 527 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
#line 527 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Uinstr_4,
#line 527 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
#line 527 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76);

#line 519 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
#line 519 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 519 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 519 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 508 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_acc_3_p_0(
#line 508 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 508 "middle_rec.m"
  MR_Integer ll_backend__middle_rec__N_2,
#line 508 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

#line 499 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
#line 499 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 499 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__UnusedReg_4);

#line 484 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
#line 484 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 484 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
#line 484 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

#line 460 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
#line 460 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 460 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Before_2,
#line 460 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__After_3);

#line 435 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
#line 435 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 435 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Target_2,
#line 435 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_3);

#line 250 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Var_11,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__BaseConsId_12,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Base_13,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Recursive_14,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_15,
#line 250 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Code_16,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_69,
#line 250 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_70,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_0_71,
#line 250 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CLD_72);

#line 235 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
#line 235 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1);

#line 222 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
#line 222 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1);

#line 126 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(
#line 126 "middle_rec.m"
  MR_Word ll_backend__middle_rec__GoalExpr_3);

#line 91 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(
#line 91 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 91 "middle_rec.m"
  MR_Word ll_backend__middle_rec__CodeInfo_5);


static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_1[6][2];

static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_2[3][1];




static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__middle_rec_scalar_common_2[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__middle_rec_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3]))),
    ((MR_Box) ((MR_String) "exit from base case"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3]))),
    ((MR_Box) ((MR_String) "exit from recursive case"))
  },
};

static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 742 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_acc_3_p_0(
#line 742 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 742 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
#line 742 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3)
#line 742 "middle_rec.m"
{
#line 745 "middle_rec.m"
  while (MR_TRUE)
#line 745 "middle_rec.m"
    {
#line 745 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 745 "middle_rec.m"
      {
#line 745 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 745 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Labels_3 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
#line 745 "middle_rec.m"
        else
#line 746 "middle_rec.m"
          {
#line 746 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 746 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 746 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 0)));
#line 746 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;
#line 747 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 1)));
#line 750 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Label_12;

#line 748 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 748 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 748 "middle_rec.m"
              {
#line 748 "middle_rec.m"
                ll_backend__middle_rec__Label_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
#line 749 "middle_rec.m"
                {
#line 749 "middle_rec.m"
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 0) = ((MR_Box) (ll_backend__middle_rec__Label_12));
#line 749 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 1) = ((MR_Box) (ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2));
#line 749 "middle_rec.m"
                }
#line 748 "middle_rec.m"
              }
#line 748 "middle_rec.m"
            else
#line 752 "middle_rec.m"
              {
#line 752 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Block_15;
#line 750 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__V_13_13;
#line 750 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__V_14_14;

#line 750 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 750 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 750 "middle_rec.m"
                  {
#line 750 "middle_rec.m"
                    ll_backend__middle_rec__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
#line 750 "middle_rec.m"
                    ll_backend__middle_rec__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 2)));
#line 750 "middle_rec.m"
                    ll_backend__middle_rec__Block_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 3)));
#line 751 "middle_rec.m"
                    {
#line 751 "middle_rec.m"
                      ll_backend__middle_rec__find_labels_acc_3_p_0(ll_backend__middle_rec__Block_15, ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18);
                    }
#line 750 "middle_rec.m"
                  }
#line 750 "middle_rec.m"
                else
#line 752 "middle_rec.m"
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
#line 752 "middle_rec.m"
              }
#line 755 "middle_rec.m"
            /* direct tailcall eliminated */
#line 755 "middle_rec.m"
            {
#line 755 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_8;
#line 755 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;

#line 755 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2;
#line 755 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 755 "middle_rec.m"
            }
#line 755 "middle_rec.m"
            continue;
#line 746 "middle_rec.m"
          }
#line 745 "middle_rec.m"
      }
#line 745 "middle_rec.m"
      break;
#line 745 "middle_rec.m"
    }
#line 742 "middle_rec.m"
}

#line 737 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
#line 737 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 737 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Labels_4)
#line 737 "middle_rec.m"
{
#line 739 "middle_rec.m"
  {
#line 739 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 740 "middle_rec.m"
    {
#line 740 "middle_rec.m"
      ll_backend__middle_rec__find_labels_acc_3_p_0(ll_backend__middle_rec__Instrs_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__middle_rec__Labels_4);
#line 740 "middle_rec.m"
      return;
    }
#line 739 "middle_rec.m"
  }
#line 737 "middle_rec.m"
}

#line 724 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
#line 724 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 724 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 724 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 724 "middle_rec.m"
{
#line 727 "middle_rec.m"
  while (MR_TRUE)
#line 727 "middle_rec.m"
    {
#line 727 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 727 "middle_rec.m"
      {
#line 727 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 727 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 727 "middle_rec.m"
        else
#line 728 "middle_rec.m"
          {
#line 728 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Output_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 728 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Outputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 728 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 0)));
#line 728 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 729 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 1)));
#line 729 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 2)));
#line 729 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 3)));
#line 729 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 4)));
#line 729 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 5)));
#line 729 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 6)));

#line 730 "middle_rec.m"
            {
#line 730 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_10, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
#line 731 "middle_rec.m"
            /* direct tailcall eliminated */
#line 731 "middle_rec.m"
            {
#line 731 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Outputs_8;
#line 731 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 731 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 731 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 731 "middle_rec.m"
            }
#line 731 "middle_rec.m"
            continue;
#line 728 "middle_rec.m"
          }
#line 727 "middle_rec.m"
      }
#line 727 "middle_rec.m"
      break;
#line 727 "middle_rec.m"
    }
#line 724 "middle_rec.m"
}

#line 715 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
#line 715 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 715 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 715 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 715 "middle_rec.m"
{
#line 718 "middle_rec.m"
  while (MR_TRUE)
#line 718 "middle_rec.m"
    {
#line 718 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 718 "middle_rec.m"
      {
#line 718 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 718 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 718 "middle_rec.m"
        else
#line 719 "middle_rec.m"
          {
#line 719 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Input_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 719 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 719 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 4)));
#line 719 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 720 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 0)));
#line 720 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 1)));
#line 720 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 2)));
#line 720 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 3)));
#line 720 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 5)));
#line 720 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 6)));

#line 721 "middle_rec.m"
            {
#line 721 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
#line 722 "middle_rec.m"
            /* direct tailcall eliminated */
#line 722 "middle_rec.m"
            {
#line 722 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Inputs_8;
#line 722 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 722 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 722 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 722 "middle_rec.m"
            }
#line 722 "middle_rec.m"
            continue;
#line 719 "middle_rec.m"
          }
#line 718 "middle_rec.m"
      }
#line 718 "middle_rec.m"
      break;
#line 718 "middle_rec.m"
    }
#line 715 "middle_rec.m"
}

#line 704 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
#line 704 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 704 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 704 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 704 "middle_rec.m"
{
#line 707 "middle_rec.m"
  {
#line 707 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 707 "middle_rec.m"
#line 707 "middle_rec.m"
    switch (MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) {
#line 707 "middle_rec.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 707 "middle_rec.m"
      case (MR_Integer) 0:
#line 707 "middle_rec.m"
        {
#line 707 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

#line 708 "middle_rec.m"
          {
#line 708 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_4, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 708 "middle_rec.m"
            return;
          }
#line 707 "middle_rec.m"
        }
#line 707 "middle_rec.m"
        break;
#line 707 "middle_rec.m"
      case (MR_Integer) 1:
#line 709 "middle_rec.m"
        {
#line 709 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

#line 710 "middle_rec.m"
          {
#line 710 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 710 "middle_rec.m"
            return;
          }
#line 709 "middle_rec.m"
        }
#line 707 "middle_rec.m"
        break;
#line 707 "middle_rec.m"
      case (MR_Integer) 2:
#line 711 "middle_rec.m"
        {
#line 711 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 711 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 2)));
#line 711 "middle_rec.m"
          MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_20_20;
#line 711 "middle_rec.m"
          MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

#line 712 "middle_rec.m"
          {
#line 712 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_20_20);
          }
#line 713 "middle_rec.m"
          {
#line 713 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval2_16, ll_backend__middle_rec__STATE_VARIABLE_Used_20_20, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 713 "middle_rec.m"
            return;
          }
#line 711 "middle_rec.m"
        }
#line 707 "middle_rec.m"
        break;
#line 707 "middle_rec.m"
    }
#line 707 "middle_rec.m"
  }
#line 704 "middle_rec.m"
}

#line 676 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
#line 676 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Rval_4,
#line 676 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
#line 676 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17)
#line 676 "middle_rec.m"
{
#line 680 "middle_rec.m"
  while (MR_TRUE)
#line 680 "middle_rec.m"
    {
#line 680 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 680 "middle_rec.m"
      {
#line 680 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 680 "middle_rec.m"
#line 680 "middle_rec.m"
        switch (MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) {
#line 680 "middle_rec.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 680 "middle_rec.m"
          case (MR_Integer) 0:
#line 680 "middle_rec.m"
            {
#line 680 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

#line 681 "middle_rec.m"
              {
#line 681 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_6, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
#line 681 "middle_rec.m"
                return;
              }
#line 680 "middle_rec.m"
            }
#line 680 "middle_rec.m"
            break;
#line 680 "middle_rec.m"
          case (MR_Integer) 1:
#line 683 "middle_rec.m"
            {
#line 684 "middle_rec.m"
              {
#line 684 "middle_rec.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", (MR_String) "var");
#line 684 "middle_rec.m"
                return;
              }
#line 683 "middle_rec.m"
            }
#line 680 "middle_rec.m"
            break;
#line 680 "middle_rec.m"
          case (MR_Integer) 2:
#line 686 "middle_rec.m"
            {
#line 686 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));
#line 686 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

#line 687 "middle_rec.m"
              /* direct tailcall eliminated */
#line 687 "middle_rec.m"
              {
#line 687 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_9;

#line 687 "middle_rec.m"
                ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 687 "middle_rec.m"
              }
#line 687 "middle_rec.m"
              continue;
#line 686 "middle_rec.m"
            }
#line 680 "middle_rec.m"
            break;
#line 680 "middle_rec.m"
          case (MR_Integer) 3:
#line 680 "middle_rec.m"
#line 680 "middle_rec.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) {
#line 680 "middle_rec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 680 "middle_rec.m"
              case (MR_Integer) 0:
#line 689 "middle_rec.m"
                *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
#line 680 "middle_rec.m"
                break;
#line 680 "middle_rec.m"
              case (MR_Integer) 1:
#line 691 "middle_rec.m"
                *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
#line 680 "middle_rec.m"
                break;
#line 680 "middle_rec.m"
              case (MR_Integer) 2:
#line 693 "middle_rec.m"
                {
#line 693 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
#line 693 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 694 "middle_rec.m"
                  /* direct tailcall eliminated */
#line 694 "middle_rec.m"
                  {
#line 694 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_27;

#line 694 "middle_rec.m"
                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 694 "middle_rec.m"
                  }
#line 694 "middle_rec.m"
                  continue;
#line 693 "middle_rec.m"
                }
#line 680 "middle_rec.m"
                break;
#line 680 "middle_rec.m"
              case (MR_Integer) 3:
#line 696 "middle_rec.m"
                {
#line 696 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 3)));
#line 696 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 696 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
#line 696 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 697 "middle_rec.m"
                  {
#line 697 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_28, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
                  }
#line 698 "middle_rec.m"
                  /* direct tailcall eliminated */
#line 698 "middle_rec.m"
                  {
#line 698 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval2_14;
#line 698 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 698 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_0_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16;
#line 698 "middle_rec.m"
                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 698 "middle_rec.m"
                  }
#line 698 "middle_rec.m"
                  continue;
#line 696 "middle_rec.m"
                }
#line 680 "middle_rec.m"
                break;
#line 680 "middle_rec.m"
              case (MR_Integer) 4:
#line 700 "middle_rec.m"
                {
#line 700 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__MemRef_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 701 "middle_rec.m"
                  {
#line 701 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(ll_backend__middle_rec__MemRef_15, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
#line 701 "middle_rec.m"
                    return;
                  }
#line 700 "middle_rec.m"
                }
#line 680 "middle_rec.m"
                break;
#line 680 "middle_rec.m"
            }
#line 680 "middle_rec.m"
            break;
#line 680 "middle_rec.m"
        }
#line 680 "middle_rec.m"
      }
#line 680 "middle_rec.m"
      break;
#line 680 "middle_rec.m"
    }
#line 676 "middle_rec.m"
}

#line 660 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
#line 660 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Lval_4,
#line 660 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
#line 660 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13)
#line 660 "middle_rec.m"
{
#line 667 "middle_rec.m"
  {
#line 667 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 1)));
#line 667 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__N_6;
#line 664 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_14_14;

#line 664 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 664 "middle_rec.m"
      {
#line 664 "middle_rec.m"
        ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)));
#line 664 "middle_rec.m"
        ll_backend__middle_rec__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 664 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_14_14 == (MR_Integer) 0);
#line 664 "middle_rec.m"
      }
#line 667 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 665 "middle_rec.m"
      {
#line 665 "middle_rec.m"
        MR_Word ll_backend__middle_rec__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 665 "middle_rec.m"
        MR_Integer ll_backend__middle_rec__N1_7;
#line 665 "middle_rec.m"
        MR_Box ll_backend__middle_rec__conv0_N1_7;

#line 665 "middle_rec.m"
        {
#line 665 "middle_rec.m"
          mercury__builtin__copy_2_p_1(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N_6)), &ll_backend__middle_rec__conv0_N1_7);
        }
#line 665 "middle_rec.m"
        ll_backend__middle_rec__N1_7 = ((MR_Integer) ll_backend__middle_rec__conv0_N1_7);
#line 666 "middle_rec.m"
        {
#line 666 "middle_rec.m"
          mercury__set__insert_3_p_0(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N1_7)), ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
#line 666 "middle_rec.m"
          return;
        }
#line 665 "middle_rec.m"
      }
#line 667 "middle_rec.m"
    else
#line 670 "middle_rec.m"
      {
#line 670 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Rval_9;
#line 670 "middle_rec.m"
        MR_Word ll_backend__middle_rec__FieldNum_10;
#line 667 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_8_8;

#line 667 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 667 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 667 "middle_rec.m"
          {
#line 667 "middle_rec.m"
            ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 667 "middle_rec.m"
            ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 2)));
#line 667 "middle_rec.m"
            ll_backend__middle_rec__FieldNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 3)));
#line 668 "middle_rec.m"
            {
#line 668 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_16_16;

#line 668 "middle_rec.m"
              {
#line 668 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, &ll_backend__middle_rec__STATE_VARIABLE_Used_16_16);
              }
#line 669 "middle_rec.m"
              {
#line 669 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__FieldNum_10, ll_backend__middle_rec__STATE_VARIABLE_Used_16_16, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
#line 669 "middle_rec.m"
                return;
              }
#line 668 "middle_rec.m"
            }
#line 667 "middle_rec.m"
          }
#line 667 "middle_rec.m"
        else
#line 672 "middle_rec.m"
          {
#line 670 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11;

#line 670 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 670 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 670 "middle_rec.m"
              {
#line 670 "middle_rec.m"
                ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 671 "middle_rec.m"
                {
#line 671 "middle_rec.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", (MR_String) "lvar");
#line 671 "middle_rec.m"
                  return;
                }
#line 670 "middle_rec.m"
              }
#line 670 "middle_rec.m"
            else
#line 673 "middle_rec.m"
              {
#line 673 "middle_rec.m"
              }
#line 672 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_13 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_12;
#line 672 "middle_rec.m"
          }
#line 670 "middle_rec.m"
      }
#line 667 "middle_rec.m"
  }
#line 660 "middle_rec.m"
}

#line 652 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
#line 652 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 652 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 652 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 652 "middle_rec.m"
{
#line 655 "middle_rec.m"
  while (MR_TRUE)
#line 655 "middle_rec.m"
    {
#line 655 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 655 "middle_rec.m"
      {
#line 655 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 655 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 655 "middle_rec.m"
        else
#line 656 "middle_rec.m"
          {
#line 656 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 656 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 656 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 657 "middle_rec.m"
            {
#line 657 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
            }
#line 658 "middle_rec.m"
            /* direct tailcall eliminated */
#line 658 "middle_rec.m"
            {
#line 658 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Lvals_8;
#line 658 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 658 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 658 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 658 "middle_rec.m"
            }
#line 658 "middle_rec.m"
            continue;
#line 656 "middle_rec.m"
          }
#line 655 "middle_rec.m"
      }
#line 655 "middle_rec.m"
      break;
#line 655 "middle_rec.m"
    }
#line 652 "middle_rec.m"
}

#line 630 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
#line 630 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 630 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 630 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 630 "middle_rec.m"
{
#line 634 "middle_rec.m"
  while (MR_TRUE)
#line 634 "middle_rec.m"
    {
#line 634 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 634 "middle_rec.m"
      {
#line 634 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 634 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 634 "middle_rec.m"
        else
#line 635 "middle_rec.m"
          {
#line 635 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Comp_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 635 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Comps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 635 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 642 "middle_rec.m"
#line 642 "middle_rec.m"
            switch (MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) {
#line 642 "middle_rec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 642 "middle_rec.m"
              case (MR_Integer) 0:
#line 650 "middle_rec.m"
                ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 642 "middle_rec.m"
                break;
#line 642 "middle_rec.m"
              case (MR_Integer) 1:
#line 642 "middle_rec.m"
                {
#line 642 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__In_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

#line 643 "middle_rec.m"
                  {
#line 643 "middle_rec.m"
                    ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(ll_backend__middle_rec__In_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                  }
#line 642 "middle_rec.m"
                }
#line 642 "middle_rec.m"
                break;
#line 642 "middle_rec.m"
              case (MR_Integer) 2:
#line 644 "middle_rec.m"
                {
#line 644 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Out_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

#line 645 "middle_rec.m"
                  {
#line 645 "middle_rec.m"
                    ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(ll_backend__middle_rec__Out_19, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                  }
#line 644 "middle_rec.m"
                }
#line 642 "middle_rec.m"
                break;
#line 642 "middle_rec.m"
              case (MR_Integer) 3:
#line 642 "middle_rec.m"
#line 642 "middle_rec.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)))) {
#line 642 "middle_rec.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 642 "middle_rec.m"
                  case (MR_Integer) 0:
#line 646 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 642 "middle_rec.m"
                    break;
#line 642 "middle_rec.m"
                  case (MR_Integer) 1:
#line 647 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 642 "middle_rec.m"
                    break;
#line 642 "middle_rec.m"
                  case (MR_Integer) 2:
#line 648 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 642 "middle_rec.m"
                    break;
#line 642 "middle_rec.m"
                  case (MR_Integer) 3:
#line 649 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 642 "middle_rec.m"
                    break;
#line 642 "middle_rec.m"
                }
#line 642 "middle_rec.m"
                break;
#line 642 "middle_rec.m"
            }
#line 637 "middle_rec.m"
            /* direct tailcall eliminated */
#line 637 "middle_rec.m"
            {
#line 637 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Comps_8;
#line 637 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 637 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 637 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 637 "middle_rec.m"
            }
#line 637 "middle_rec.m"
            continue;
#line 635 "middle_rec.m"
          }
#line 634 "middle_rec.m"
      }
#line 634 "middle_rec.m"
      break;
#line 634 "middle_rec.m"
    }
#line 630 "middle_rec.m"
}

#line 527 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
#line 527 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Uinstr_4,
#line 527 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
#line 527 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76)
#line 527 "middle_rec.m"
{
#line 532 "middle_rec.m"
  {
#line 532 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 532 "middle_rec.m"
#line 532 "middle_rec.m"
    switch (MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) {
#line 532 "middle_rec.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 532 "middle_rec.m"
      case (MR_Integer) 0:
#line 532 "middle_rec.m"
#line 532 "middle_rec.m"
        switch (MR_unmkbody(ll_backend__middle_rec__Uinstr_4)) {
#line 532 "middle_rec.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 532 "middle_rec.m"
          case (MR_Integer) 0:
#line 541 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 1:
#line 540 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
        }
#line 532 "middle_rec.m"
        break;
#line 532 "middle_rec.m"
      case (MR_Integer) 1:
#line 532 "middle_rec.m"
        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
        break;
#line 532 "middle_rec.m"
      case (MR_Integer) 2:
#line 547 "middle_rec.m"
        {
#line 547 "middle_rec.m"
          MR_Word ll_backend__middle_rec__LvalSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)));
#line 547 "middle_rec.m"
          MR_Word ll_backend__middle_rec__LvalList_29;

#line 548 "middle_rec.m"
          {
#line 548 "middle_rec.m"
            mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__middle_rec__LvalSet_28, &ll_backend__middle_rec__LvalList_29);
          }
#line 549 "middle_rec.m"
          {
#line 549 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_lvals_3_p_0(ll_backend__middle_rec__LvalList_29, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 549 "middle_rec.m"
            return;
          }
#line 547 "middle_rec.m"
        }
#line 532 "middle_rec.m"
        break;
#line 532 "middle_rec.m"
      case (MR_Integer) 3:
#line 532 "middle_rec.m"
#line 532 "middle_rec.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) {
#line 532 "middle_rec.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 532 "middle_rec.m"
          case (MR_Integer) 0:
#line 551 "middle_rec.m"
            {
#line 551 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 551 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 551 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 552 "middle_rec.m"
              {
#line 552 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_32, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 552 "middle_rec.m"
                return;
              }
#line 551 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 1:
#line 556 "middle_rec.m"
            {
#line 556 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 556 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 556 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_96;

#line 557 "middle_rec.m"
              {
#line 557 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_33, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_96);
              }
#line 558 "middle_rec.m"
              {
#line 558 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_34, ll_backend__middle_rec__STATE_VARIABLE_Used_96_96, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 558 "middle_rec.m"
                return;
              }
#line 556 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 2:
#line 556 "middle_rec.m"
            {
#line 556 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 556 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 556 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_120;

#line 557 "middle_rec.m"
              {
#line 557 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_118, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_120);
              }
#line 558 "middle_rec.m"
              {
#line 558 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_119, ll_backend__middle_rec__STATE_VARIABLE_Used_96_120, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 558 "middle_rec.m"
                return;
              }
#line 556 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 3:
#line 533 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 4:
#line 534 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 5:
#line 535 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 6:
#line 536 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 7:
#line 600 "middle_rec.m"
            {
#line 600 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 594 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 601 "middle_rec.m"
              {
#line 601 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_108, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                return;
              }
#line 600 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 8:
#line 537 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 9:
#line 600 "middle_rec.m"
            {
#line 600 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 595 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 601 "middle_rec.m"
              {
#line 601 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_115, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                return;
              }
#line 600 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 10:
#line 611 "middle_rec.m"
            {
#line 611 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 612 "middle_rec.m"
              {
#line 612 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_127, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 612 "middle_rec.m"
                return;
              }
#line 611 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 11:
#line 611 "middle_rec.m"
            {
#line 611 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 612 "middle_rec.m"
              {
#line 612 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_126, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 612 "middle_rec.m"
                return;
              }
#line 611 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 12:
#line 560 "middle_rec.m"
            {
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__MaybeRegionRval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__MaybeReuse_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_91_91;
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 560 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));

#line 561 "middle_rec.m"
              {
#line 561 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_102, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_91_91);
              }
#line 562 "middle_rec.m"
              {
#line 562 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_103, ll_backend__middle_rec__STATE_VARIABLE_Used_91_91, &ll_backend__middle_rec__STATE_VARIABLE_Used_92_92);
              }
#line 566 "middle_rec.m"
              if ((ll_backend__middle_rec__MaybeRegionRval_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "middle_rec.m"
                ll_backend__middle_rec__STATE_VARIABLE_Used_93_93 = ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
#line 566 "middle_rec.m"
              else
#line 564 "middle_rec.m"
                {
#line 564 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__RegionRval_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeRegionRval_39, (MR_Integer) 0)));

#line 565 "middle_rec.m"
                  {
#line 565 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__RegionRval_41, ll_backend__middle_rec__STATE_VARIABLE_Used_92_92, &ll_backend__middle_rec__STATE_VARIABLE_Used_93_93);
                  }
#line 564 "middle_rec.m"
                }
#line 578 "middle_rec.m"
              if ((ll_backend__middle_rec__MaybeReuse_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 579 "middle_rec.m"
                *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
#line 578 "middle_rec.m"
              else
#line 570 "middle_rec.m"
                {
#line 570 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__ReuseRval_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 0)));
#line 570 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__MaybeFlagLval_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 1)));
#line 570 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;

#line 571 "middle_rec.m"
                  {
#line 571 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ReuseRval_42, ll_backend__middle_rec__STATE_VARIABLE_Used_93_93, &ll_backend__middle_rec__STATE_VARIABLE_Used_94_94);
                  }
#line 575 "middle_rec.m"
                  if ((ll_backend__middle_rec__MaybeFlagLval_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "middle_rec.m"
                    *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;
#line 575 "middle_rec.m"
                  else
#line 573 "middle_rec.m"
                    {
#line 573 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__FlagLval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeFlagLval_43, (MR_Integer) 0)));

#line 574 "middle_rec.m"
                      {
#line 574 "middle_rec.m"
                        ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__FlagLval_44, ll_backend__middle_rec__STATE_VARIABLE_Used_94_94, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 574 "middle_rec.m"
                        return;
                      }
#line 573 "middle_rec.m"
                    }
#line 570 "middle_rec.m"
                }
#line 560 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 13:
#line 611 "middle_rec.m"
            {
#line 611 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 612 "middle_rec.m"
              {
#line 612 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_121, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 612 "middle_rec.m"
                return;
              }
#line 611 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 14:
#line 600 "middle_rec.m"
            {
#line 600 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 601 "middle_rec.m"
              {
#line 601 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_125, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                return;
              }
#line 600 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 15:
#line 600 "middle_rec.m"
            {
#line 600 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 601 "middle_rec.m"
              {
#line 601 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_114, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                return;
              }
#line 600 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 16:
#line 538 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 17:
#line 583 "middle_rec.m"
            {
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__IdRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__NumLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__AddrLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_88_88;
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_89_89;
#line 582 "middle_rec.m"
              MR_Word ll_backend__middle_rec___FillOp_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 582 "middle_rec.m"
              MR_Word ll_backend__middle_rec___EmbeddedStackFrame_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 584 "middle_rec.m"
              {
#line 584 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__IdRval_46, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_88_88);
              }
#line 585 "middle_rec.m"
              {
#line 585 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__NumLval_47, ll_backend__middle_rec__STATE_VARIABLE_Used_88_88, &ll_backend__middle_rec__STATE_VARIABLE_Used_89_89);
              }
#line 586 "middle_rec.m"
              {
#line 586 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__AddrLval_48, ll_backend__middle_rec__STATE_VARIABLE_Used_89_89, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 586 "middle_rec.m"
                return;
              }
#line 583 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 18:
#line 588 "middle_rec.m"
            {
#line 588 "middle_rec.m"
              MR_Word ll_backend__middle_rec__ValueRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 588 "middle_rec.m"
              MR_Word ll_backend__middle_rec___SetOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 588 "middle_rec.m"
              MR_Word ll_backend__middle_rec___EmbeddedStackFrame_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 589 "middle_rec.m"
              {
#line 589 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ValueRval_50, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 589 "middle_rec.m"
                return;
              }
#line 588 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 19:
#line 539 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 20:
#line 611 "middle_rec.m"
            {
#line 611 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 612 "middle_rec.m"
              {
#line 612 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_128, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 612 "middle_rec.m"
                return;
              }
#line 611 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 21:
#line 600 "middle_rec.m"
            {
#line 600 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 598 "middle_rec.m"
              MR_Word ll_backend__middle_rec___Rsn_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 601 "middle_rec.m"
              {
#line 601 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_124, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                return;
              }
#line 600 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 22:
#line 611 "middle_rec.m"
            {
#line 611 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 612 "middle_rec.m"
              {
#line 612 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_122, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 612 "middle_rec.m"
                return;
              }
#line 611 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 23:
#line 600 "middle_rec.m"
            {
#line 600 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 601 "middle_rec.m"
              {
#line 601 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_123, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                return;
              }
#line 600 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 24:
#line 542 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 25:
#line 543 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 26:
#line 544 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 27:
#line 591 "middle_rec.m"
            {
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Components_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 9)));
#line 591 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 10)));

#line 592 "middle_rec.m"
              {
#line 592 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_components_3_p_0(ll_backend__middle_rec__Components_52, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 592 "middle_rec.m"
                return;
              }
#line 591 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 28:
#line 611 "middle_rec.m"
            {
#line 611 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 608 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 608 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 612 "middle_rec.m"
              {
#line 612 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_116, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 612 "middle_rec.m"
                return;
              }
#line 611 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 29:
#line 611 "middle_rec.m"
            {
#line 611 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 609 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 612 "middle_rec.m"
              {
#line 612 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_109, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 612 "middle_rec.m"
                return;
              }
#line 611 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 30:
#line 611 "middle_rec.m"
            {
#line 611 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 610 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 612 "middle_rec.m"
              {
#line 612 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_117, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 612 "middle_rec.m"
                return;
              }
#line 611 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 31:
#line 614 "middle_rec.m"
            {
#line 614 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCLval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 614 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 615 "middle_rec.m"
              {
#line 615 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCLval_69, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 615 "middle_rec.m"
                return;
              }
#line 614 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 32:
#line 617 "middle_rec.m"
            {
#line 617 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 617 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCSLval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 617 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_81_81;
#line 617 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 618 "middle_rec.m"
              {
#line 618 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_70, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_81_81);
              }
#line 619 "middle_rec.m"
              {
#line 619 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCSLval_71, ll_backend__middle_rec__STATE_VARIABLE_Used_81_81, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 619 "middle_rec.m"
                return;
              }
#line 617 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 33:
#line 621 "middle_rec.m"
            {
#line 621 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCSRval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 621 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_79_79;
#line 621 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCRval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 621 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 622 "middle_rec.m"
              {
#line 622 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_110, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_79_79);
              }
#line 623 "middle_rec.m"
              {
#line 623 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_73, ll_backend__middle_rec__STATE_VARIABLE_Used_79_79, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 623 "middle_rec.m"
                return;
              }
#line 621 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
          case (MR_Integer) 34:
#line 625 "middle_rec.m"
            {
#line 625 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_77_77;
#line 625 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCRval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 625 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCSRval_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 626 "middle_rec.m"
              {
#line 626 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_111, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_77_77);
              }
#line 627 "middle_rec.m"
              {
#line 627 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_112, ll_backend__middle_rec__STATE_VARIABLE_Used_77_77, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 627 "middle_rec.m"
                return;
              }
#line 625 "middle_rec.m"
            }
#line 532 "middle_rec.m"
            break;
#line 532 "middle_rec.m"
        }
#line 532 "middle_rec.m"
        break;
#line 532 "middle_rec.m"
    }
#line 532 "middle_rec.m"
  }
#line 527 "middle_rec.m"
}

#line 519 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
#line 519 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 519 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 519 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 519 "middle_rec.m"
{
#line 522 "middle_rec.m"
  while (MR_TRUE)
#line 522 "middle_rec.m"
    {
#line 522 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 522 "middle_rec.m"
      {
#line 522 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 522 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 522 "middle_rec.m"
        else
#line 523 "middle_rec.m"
          {
#line 523 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Uinstr_7;
#line 523 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 523 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 523 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;
#line 523 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_8_8;

#line 523 "middle_rec.m"
            ll_backend__middle_rec__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
#line 523 "middle_rec.m"
            ll_backend__middle_rec__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 1)));
#line 524 "middle_rec.m"
            {
#line 524 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_instr_3_p_0(ll_backend__middle_rec__Uinstr_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_14_14);
            }
#line 525 "middle_rec.m"
            /* direct tailcall eliminated */
#line 525 "middle_rec.m"
            {
#line 525 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_9;
#line 525 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;

#line 525 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 525 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 525 "middle_rec.m"
            }
#line 525 "middle_rec.m"
            continue;
#line 523 "middle_rec.m"
          }
#line 522 "middle_rec.m"
      }
#line 522 "middle_rec.m"
      break;
#line 522 "middle_rec.m"
    }
#line 519 "middle_rec.m"
}

#line 508 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_acc_3_p_0(
#line 508 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 508 "middle_rec.m"
  MR_Integer ll_backend__middle_rec__N_2,
#line 508 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
#line 508 "middle_rec.m"
{
#line 510 "middle_rec.m"
  while (MR_TRUE)
#line 510 "middle_rec.m"
    {
#line 510 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 510 "middle_rec.m"
      {
#line 510 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 510 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "middle_rec.m"
          {
#line 510 "middle_rec.m"
            {
#line 510 "middle_rec.m"
              MR_Word base;
#line 510 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "middle_rec.m"
              *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 510 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 510 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__N_2));
#line 510 "middle_rec.m"
            }
#line 510 "middle_rec.m"
          }
#line 510 "middle_rec.m"
        else
#line 511 "middle_rec.m"
          {
#line 511 "middle_rec.m"
            MR_Integer ll_backend__middle_rec__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 511 "middle_rec.m"
            MR_Word ll_backend__middle_rec__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

#line 512 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__N_2 < ll_backend__middle_rec__H_6);
#line 514 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 513 "middle_rec.m"
              {
#line 513 "middle_rec.m"
                {
#line 513 "middle_rec.m"
                  MR_Word base;
#line 513 "middle_rec.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "middle_rec.m"
                  *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 513 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 513 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__N_2));
#line 513 "middle_rec.m"
                }
#line 513 "middle_rec.m"
              }
#line 514 "middle_rec.m"
            else
#line 515 "middle_rec.m"
              {
#line 515 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__N1_10 = (ll_backend__middle_rec__N_2 + (MR_Integer) 1);

#line 516 "middle_rec.m"
                /* direct tailcall eliminated */
#line 516 "middle_rec.m"
                {
#line 516 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__T_7;
#line 516 "middle_rec.m"
                  MR_Integer ll_backend__middle_rec__N__tmp_copy_2 = ll_backend__middle_rec__N1_10;

#line 516 "middle_rec.m"
                  ll_backend__middle_rec__N_2 = ll_backend__middle_rec__N__tmp_copy_2;
#line 516 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 516 "middle_rec.m"
                }
#line 516 "middle_rec.m"
                continue;
#line 515 "middle_rec.m"
              }
#line 511 "middle_rec.m"
          }
#line 510 "middle_rec.m"
      }
#line 510 "middle_rec.m"
      break;
#line 510 "middle_rec.m"
    }
#line 508 "middle_rec.m"
}

#line 499 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
#line 499 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 499 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__UnusedReg_4)
#line 499 "middle_rec.m"
{
#line 502 "middle_rec.m"
  {
#line 502 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 502 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 502 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Used0_5;
#line 502 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Used1_6;
#line 502 "middle_rec.m"
    MR_Word ll_backend__middle_rec__UsedList_7;

#line 503 "middle_rec.m"
    {
#line 503 "middle_rec.m"
      mercury__set__init_1_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, &ll_backend__middle_rec__Used0_5);
    }
#line 504 "middle_rec.m"
    {
#line 504 "middle_rec.m"
      ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_3, ll_backend__middle_rec__Used0_5, &ll_backend__middle_rec__Used1_6);
    }
#line 505 "middle_rec.m"
    {
#line 505 "middle_rec.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, ll_backend__middle_rec__Used1_6, &ll_backend__middle_rec__UsedList_7);
    }
#line 506 "middle_rec.m"
    {
#line 506 "middle_rec.m"
      ll_backend__middle_rec__find_unused_register_acc_3_p_0(ll_backend__middle_rec__UsedList_7, (MR_Integer) 1, ll_backend__middle_rec__UnusedReg_4);
#line 506 "middle_rec.m"
      return;
    }
#line 502 "middle_rec.m"
  }
#line 499 "middle_rec.m"
}

#line 484 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
#line 484 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 484 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
#line 484 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
#line 484 "middle_rec.m"
{
#line 487 "middle_rec.m"
  {
#line 487 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 487 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "middle_rec.m"
      *ll_backend__middle_rec__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "middle_rec.m"
    else
#line 488 "middle_rec.m"
      {
#line 488 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 488 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 488 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr_8;
#line 488 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs_9;
#line 492 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Lives0_10;
#line 492 "middle_rec.m"
        MR_String ll_backend__middle_rec__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 1)));
#line 489 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 0)));

#line 489 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_13_13)) == (MR_mktag((MR_Integer) 2)));
#line 489 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 489 "middle_rec.m"
          {
#line 489 "middle_rec.m"
            ll_backend__middle_rec__Lives0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
#line 490 "middle_rec.m"
            {
#line 490 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lives_12;
#line 490 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_14_14;

#line 490 "middle_rec.m"
              {
#line 490 "middle_rec.m"
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__middle_rec__HeadVar__2_2)), ll_backend__middle_rec__Lives0_10, &ll_backend__middle_rec__Lives_12);
              }
#line 491 "middle_rec.m"
              {
#line 491 "middle_rec.m"
                ll_backend__middle_rec__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 491 "middle_rec.m"
                MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_14_14, 0) = ((MR_Box) (ll_backend__middle_rec__Lives_12));
#line 491 "middle_rec.m"
              }
#line 491 "middle_rec.m"
              {
#line 491 "middle_rec.m"
                ll_backend__middle_rec__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 491 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 0) = ((MR_Box) (ll_backend__middle_rec__V_14_14));
#line 491 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 1) = ((MR_Box) (ll_backend__middle_rec__Comment_11));
#line 491 "middle_rec.m"
              }
#line 490 "middle_rec.m"
            }
#line 489 "middle_rec.m"
          }
#line 489 "middle_rec.m"
        else
#line 493 "middle_rec.m"
          ll_backend__middle_rec__Instr_8 = ll_backend__middle_rec__Instr0_5;
#line 495 "middle_rec.m"
        {
#line 495 "middle_rec.m"
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__Instrs0_6, ll_backend__middle_rec__HeadVar__2_2, &ll_backend__middle_rec__Instrs_9);
        }
#line 488 "middle_rec.m"
        {
#line 488 "middle_rec.m"
          MR_Word base;
#line 488 "middle_rec.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "middle_rec.m"
          *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 488 "middle_rec.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr_8));
#line 488 "middle_rec.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs_9));
#line 488 "middle_rec.m"
        }
#line 488 "middle_rec.m"
      }
#line 487 "middle_rec.m"
  }
#line 484 "middle_rec.m"
}

#line 460 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
#line 460 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 460 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Before_2,
#line 460 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__After_3)
#line 460 "middle_rec.m"
{
#line 463 "middle_rec.m"
  {
#line 463 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 463 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "middle_rec.m"
      {
#line 464 "middle_rec.m"
        {
#line 464 "middle_rec.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "did not find call");
#line 464 "middle_rec.m"
          return;
        }
#line 463 "middle_rec.m"
      }
#line 463 "middle_rec.m"
    else
#line 465 "middle_rec.m"
      {
#line 465 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 465 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 466 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
#line 466 "middle_rec.m"
        MR_String ll_backend__middle_rec__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
#line 466 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_13_13;
#line 466 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_14_14;
#line 466 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_15_15;
#line 466 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_16_16;
#line 466 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_17_17;
#line 466 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_18_18;

#line 466 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 466 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 466 "middle_rec.m"
          {
#line 466 "middle_rec.m"
            ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 1)));
#line 466 "middle_rec.m"
            ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 2)));
#line 466 "middle_rec.m"
            ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 3)));
#line 466 "middle_rec.m"
            ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 4)));
#line 466 "middle_rec.m"
            ll_backend__middle_rec__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 5)));
#line 466 "middle_rec.m"
            ll_backend__middle_rec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 6)));
#line 474 "middle_rec.m"
            {
#line 474 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs3_22;
#line 468 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs2_20;
#line 468 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instr2_21;
#line 468 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_27_27;
#line 470 "middle_rec.m"
              MR_String ll_backend__middle_rec__V_24_24;
#line 470 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_23_23;

#line 468 "middle_rec.m"
              {
#line 468 "middle_rec.m"
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Instrs2_20);
              }
#line 469 "middle_rec.m"
              ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Instrs2_20)) == (MR_mktag((MR_Integer) 1)));
#line 469 "middle_rec.m"
              if (ll_backend__middle_rec__succeeded)
#line 469 "middle_rec.m"
                {
#line 469 "middle_rec.m"
                  ll_backend__middle_rec__Instr2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 0)));
#line 469 "middle_rec.m"
                  ll_backend__middle_rec__Instrs3_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 1)));
#line 470 "middle_rec.m"
                  ll_backend__middle_rec__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 0)));
#line 470 "middle_rec.m"
                  ll_backend__middle_rec__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 1)));
#line 470 "middle_rec.m"
                  ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 470 "middle_rec.m"
                  if (ll_backend__middle_rec__succeeded)
#line 470 "middle_rec.m"
                    ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 1)));
#line 469 "middle_rec.m"
                }
#line 474 "middle_rec.m"
              if (ll_backend__middle_rec__succeeded)
#line 472 "middle_rec.m"
                {
#line 472 "middle_rec.m"
                  *ll_backend__middle_rec__Before_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 473 "middle_rec.m"
                  *ll_backend__middle_rec__After_3 = ll_backend__middle_rec__Instrs3_22;
#line 472 "middle_rec.m"
                }
#line 474 "middle_rec.m"
              else
#line 475 "middle_rec.m"
                {
#line 475 "middle_rec.m"
                  {
#line 475 "middle_rec.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "call not followed by label");
#line 475 "middle_rec.m"
                    return;
                  }
#line 475 "middle_rec.m"
                }
#line 474 "middle_rec.m"
            }
#line 466 "middle_rec.m"
          }
#line 466 "middle_rec.m"
        else
#line 478 "middle_rec.m"
          {
#line 478 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Before1_25;

#line 478 "middle_rec.m"
            {
#line 478 "middle_rec.m"
              ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Before1_25, ll_backend__middle_rec__After_3);
            }
#line 479 "middle_rec.m"
            {
#line 479 "middle_rec.m"
              MR_Word base;
#line 479 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "middle_rec.m"
              *ll_backend__middle_rec__Before_2 = base;
#line 479 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
#line 479 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Before1_25));
#line 479 "middle_rec.m"
            }
#line 478 "middle_rec.m"
          }
#line 465 "middle_rec.m"
      }
#line 463 "middle_rec.m"
  }
#line 460 "middle_rec.m"
}

#line 435 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
#line 435 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 435 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Target_2,
#line 435 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_3)
#line 435 "middle_rec.m"
{
#line 438 "middle_rec.m"
  {
#line 438 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 438 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "middle_rec.m"
      {
#line 439 "middle_rec.m"
        {
#line 439 "middle_rec.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "empty list");
#line 439 "middle_rec.m"
          return;
        }
#line 438 "middle_rec.m"
      }
#line 438 "middle_rec.m"
    else
#line 440 "middle_rec.m"
      {
#line 440 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 440 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 453 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Test_13;
#line 441 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
#line 441 "middle_rec.m"
        MR_String ll_backend__middle_rec___Comment_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
#line 441 "middle_rec.m"
        MR_Word ll_backend__middle_rec___OldTarget_14;

#line 441 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 441 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 441 "middle_rec.m"
          {
#line 441 "middle_rec.m"
            ll_backend__middle_rec__Test_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 1)));
#line 441 "middle_rec.m"
            ll_backend__middle_rec___OldTarget_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 2)));
#line 447 "middle_rec.m"
            {
#line 447 "middle_rec.m"
              MR_Word ll_backend__middle_rec__NewTest_18;
#line 447 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_24_24;
#line 447 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_25_25;
#line 447 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_26_26;

#line 444 "middle_rec.m"
              if ((ll_backend__middle_rec__Instrs0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "middle_rec.m"
                {
#line 443 "middle_rec.m"
                }
#line 444 "middle_rec.m"
              else
#line 445 "middle_rec.m"
                {
#line 446 "middle_rec.m"
                  {
#line 446 "middle_rec.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "if_val followed by other instructions");
#line 446 "middle_rec.m"
                    return;
                  }
#line 445 "middle_rec.m"
                }
#line 448 "middle_rec.m"
              {
#line 448 "middle_rec.m"
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__middle_rec__Test_13, &ll_backend__middle_rec__NewTest_18);
              }
#line 450 "middle_rec.m"
              {
#line 450 "middle_rec.m"
                ll_backend__middle_rec__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "middle_rec.m"
                MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, 0) = ((MR_Box) (ll_backend__middle_rec__Target_2));
#line 450 "middle_rec.m"
              }
#line 450 "middle_rec.m"
              {
#line 450 "middle_rec.m"
                ll_backend__middle_rec__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 450 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 450 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 1) = ((MR_Box) (ll_backend__middle_rec__NewTest_18));
#line 450 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 2) = ((MR_Box) (ll_backend__middle_rec__V_26_26));
#line 450 "middle_rec.m"
              }
#line 450 "middle_rec.m"
              {
#line 450 "middle_rec.m"
                ll_backend__middle_rec__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 450 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 0) = ((MR_Box) (ll_backend__middle_rec__V_25_25));
#line 450 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 1) = ((MR_Box) ((MR_String) "test on downward loop"));
#line 450 "middle_rec.m"
              }
#line 452 "middle_rec.m"
              {
#line 452 "middle_rec.m"
                MR_Word base;
#line 452 "middle_rec.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "middle_rec.m"
                *ll_backend__middle_rec__Instrs_3 = base;
#line 452 "middle_rec.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__V_24_24));
#line 452 "middle_rec.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "middle_rec.m"
              }
#line 447 "middle_rec.m"
            }
#line 441 "middle_rec.m"
          }
#line 441 "middle_rec.m"
        else
#line 454 "middle_rec.m"
          {
#line 454 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs1_19;

#line 454 "middle_rec.m"
            {
#line 454 "middle_rec.m"
              ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__Instrs0_10, ll_backend__middle_rec__Target_2, &ll_backend__middle_rec__Instrs1_19);
            }
#line 455 "middle_rec.m"
            {
#line 455 "middle_rec.m"
              MR_Word base;
#line 455 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "middle_rec.m"
              *ll_backend__middle_rec__Instrs_3 = base;
#line 455 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
#line 455 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs1_19));
#line 455 "middle_rec.m"
            }
#line 454 "middle_rec.m"
          }
#line 440 "middle_rec.m"
      }
#line 438 "middle_rec.m"
  }
#line 435 "middle_rec.m"
}

#line 250 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Var_11,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__BaseConsId_12,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Base_13,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Recursive_14,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_15,
#line 250 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Code_16,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_69,
#line 250 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_70,
#line 250 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_0_71,
#line 250 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CLD_72)
#line 250 "middle_rec.m"
{
#line 256 "middle_rec.m"
  {
#line 256 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TypeCtorInfo_244_244;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__StackSlots_19;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__VarSet_20;
#line 256 "middle_rec.m"
    MR_String ll_backend__middle_rec__SlotsComment_21;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ModuleInfo_22;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__PredId_23;
#line 256 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__ProcId_24;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryLabel_25;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__VarType_26;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__CheaperTagTest_27;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseLabel_28;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryTestCode_29;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryTestInstrs_30;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__StoreMap_31;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BranchStart_32;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseGoalCode_33;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeEnd1_34;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseSaveCode_35;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecGoalCode_36;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeEnd_37;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecSaveCode_38;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ArgModes_39;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__HeadVars_40;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Args_41;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__LiveArgs_42;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EpilogCode_43;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseCode_44;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecCode_45;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__LiveValCode_46;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseInstrs_47;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecInstrs_48;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AvoidInstrs_49;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AuxReg_50;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BeforeInstrs0_51;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AfterInstrs_52;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BeforeInstrs_53;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop1Label_54;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop2Label_55;
#line 256 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__FrameSize0_56;
#line 256 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__FrameSize_57;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop1Test_58;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeIncrSp_59;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeDecrSp_60;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__InitAuxReg_61;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__IncrAuxReg_62;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__DecrAuxReg_63;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TestAuxReg_64;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_75_75;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_77_77;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_80_80;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_81_81;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_83_83;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_85_85;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_86_86;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_87_87;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_88_88;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_90_90;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_91_91;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_92_92;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_93_93;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_95_95;
#line 256 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_96_96;

#line 257 "middle_rec.m"
    {
#line 257 "middle_rec.m"
      ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__StackSlots_19);
    }
#line 258 "middle_rec.m"
    {
#line 258 "middle_rec.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__VarSet_20);
    }
#line 259 "middle_rec.m"
    {
#line 259 "middle_rec.m"
      ll_backend__middle_rec__SlotsComment_21 = hlds__hlds_llds__explain_stack_slots_2_f_0(ll_backend__middle_rec__StackSlots_19, ll_backend__middle_rec__VarSet_20);
    }
#line 260 "middle_rec.m"
    {
#line 260 "middle_rec.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__ModuleInfo_22);
    }
#line 261 "middle_rec.m"
    {
#line 261 "middle_rec.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__PredId_23);
    }
#line 262 "middle_rec.m"
    {
#line 262 "middle_rec.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__ProcId_24);
    }
#line 263 "middle_rec.m"
    {
#line 263 "middle_rec.m"
      ll_backend__middle_rec__EntryLabel_25 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__middle_rec__ModuleInfo_22, ll_backend__middle_rec__PredId_23, ll_backend__middle_rec__ProcId_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 265 "middle_rec.m"
    {
#line 265 "middle_rec.m"
      ll_backend__code_loc_dep__pre_goal_update_4_p_0(ll_backend__middle_rec__SwitchGoalInfo_15, (MR_Integer) 0, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_71, &ll_backend__middle_rec__STATE_VARIABLE_CLD_75_75);
    }
#line 266 "middle_rec.m"
    {
#line 266 "middle_rec.m"
      ll_backend__middle_rec__VarType_26 = ll_backend__code_info__variable_type_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, ll_backend__middle_rec__Var_11);
    }
#line 267 "middle_rec.m"
    {
#line 267 "middle_rec.m"
      ll_backend__middle_rec__CheaperTagTest_27 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, ll_backend__middle_rec__VarType_26);
    }
#line 268 "middle_rec.m"
    {
#line 268 "middle_rec.m"
      ll_backend__unify_gen__generate_tag_test_10_p_0(ll_backend__middle_rec__Var_11, ll_backend__middle_rec__BaseConsId_12, ll_backend__middle_rec__CheaperTagTest_27, (MR_Integer) 0, &ll_backend__middle_rec__BaseLabel_28, &ll_backend__middle_rec__EntryTestCode_29, ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__STATE_VARIABLE_CI_77_77, ll_backend__middle_rec__STATE_VARIABLE_CLD_75_75, &ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78);
    }
#line 3115 "ll_backend.middle_rec.c"
    ll_backend__middle_rec__TypeCtorInfo_244_244 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 270 "middle_rec.m"
    {
#line 270 "middle_rec.m"
      ll_backend__middle_rec__EntryTestInstrs_30 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestCode_29);
    }
#line 272 "middle_rec.m"
    {
#line 272 "middle_rec.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__middle_rec__SwitchGoalInfo_15, &ll_backend__middle_rec__StoreMap_31);
    }
#line 273 "middle_rec.m"
    {
#line 273 "middle_rec.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78, &ll_backend__middle_rec__BranchStart_32);
    }
#line 274 "middle_rec.m"
    {
#line 274 "middle_rec.m"
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__middle_rec__Base_13, &ll_backend__middle_rec__BaseGoalCode_33, ll_backend__middle_rec__STATE_VARIABLE_CI_77_77, &ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78, &ll_backend__middle_rec__STATE_VARIABLE_CLD_81_81);
    }
#line 275 "middle_rec.m"
    {
#line 275 "middle_rec.m"
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__middle_rec__MaybeEnd1_34, &ll_backend__middle_rec__BaseSaveCode_35, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, ll_backend__middle_rec__STATE_VARIABLE_CLD_81_81);
    }
#line 277 "middle_rec.m"
    {
#line 277 "middle_rec.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__middle_rec__BranchStart_32, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, &ll_backend__middle_rec__STATE_VARIABLE_CLD_83_83);
    }
#line 278 "middle_rec.m"
    {
#line 278 "middle_rec.m"
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__middle_rec__Recursive_14, &ll_backend__middle_rec__RecGoalCode_36, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, &ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_83_83, &ll_backend__middle_rec__STATE_VARIABLE_CLD_86_86);
    }
#line 279 "middle_rec.m"
    {
#line 279 "middle_rec.m"
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_31, ll_backend__middle_rec__MaybeEnd1_34, &ll_backend__middle_rec__MaybeEnd_37, &ll_backend__middle_rec__RecSaveCode_38, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_86_86);
    }
#line 282 "middle_rec.m"
    {
#line 282 "middle_rec.m"
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__middle_rec__StoreMap_31, ll_backend__middle_rec__MaybeEnd_37, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, &ll_backend__middle_rec__STATE_VARIABLE_CLD_87_87);
    }
#line 283 "middle_rec.m"
    {
#line 283 "middle_rec.m"
      ll_backend__code_loc_dep__post_goal_update_4_p_0(ll_backend__middle_rec__SwitchGoalInfo_15, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_87_87, &ll_backend__middle_rec__STATE_VARIABLE_CLD_88_88);
    }
#line 285 "middle_rec.m"
    {
#line 285 "middle_rec.m"
      ll_backend__middle_rec__ArgModes_39 = ll_backend__code_info__get_arginfo_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_85_85);
    }
#line 286 "middle_rec.m"
    {
#line 286 "middle_rec.m"
      ll_backend__middle_rec__HeadVars_40 = ll_backend__code_info__get_headvars_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_85_85);
    }
#line 287 "middle_rec.m"
    {
#line 287 "middle_rec.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__middle_rec_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__middle_rec__HeadVars_40, ll_backend__middle_rec__ArgModes_39, &ll_backend__middle_rec__Args_41);
    }
#line 288 "middle_rec.m"
    {
#line 288 "middle_rec.m"
      ll_backend__code_loc_dep__setup_return_6_p_0(ll_backend__middle_rec__Args_41, &ll_backend__middle_rec__LiveArgs_42, &ll_backend__middle_rec__EpilogCode_43, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_88_88, ll_backend__middle_rec__STATE_VARIABLE_CLD_72);
    }
#line 290 "middle_rec.m"
    {
#line 290 "middle_rec.m"
      ll_backend__middle_rec__V_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseSaveCode_35, ll_backend__middle_rec__EpilogCode_43);
    }
#line 290 "middle_rec.m"
    {
#line 290 "middle_rec.m"
      ll_backend__middle_rec__BaseCode_44 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseGoalCode_33, ll_backend__middle_rec__V_90_90);
    }
#line 291 "middle_rec.m"
    {
#line 291 "middle_rec.m"
      ll_backend__middle_rec__V_91_91 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecSaveCode_38, ll_backend__middle_rec__EpilogCode_43);
    }
#line 291 "middle_rec.m"
    {
#line 291 "middle_rec.m"
      ll_backend__middle_rec__RecCode_45 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecGoalCode_36, ll_backend__middle_rec__V_91_91);
    }
#line 293 "middle_rec.m"
    {
#line 293 "middle_rec.m"
      ll_backend__middle_rec__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 293 "middle_rec.m"
      MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_93_93, 0) = ((MR_Box) (ll_backend__middle_rec__LiveArgs_42));
#line 293 "middle_rec.m"
    }
#line 293 "middle_rec.m"
    {
#line 293 "middle_rec.m"
      ll_backend__middle_rec__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 293 "middle_rec.m"
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 0) = ((MR_Box) (ll_backend__middle_rec__V_93_93));
#line 293 "middle_rec.m"
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 1) = ((MR_Box) ((MR_String) ""));
#line 293 "middle_rec.m"
    }
#line 292 "middle_rec.m"
    {
#line 292 "middle_rec.m"
      ll_backend__middle_rec__LiveValCode_46 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_92_92)));
    }
#line 296 "middle_rec.m"
    {
#line 296 "middle_rec.m"
      ll_backend__middle_rec__BaseInstrs_47 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseCode_44);
    }
#line 297 "middle_rec.m"
    {
#line 297 "middle_rec.m"
      ll_backend__middle_rec__RecInstrs_48 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecCode_45);
    }
#line 303 "middle_rec.m"
    {
#line 303 "middle_rec.m"
      ll_backend__middle_rec__V_95_95 = ll_backend__opt_util__block_refers_to_stack_1_f_0(ll_backend__middle_rec__BaseInstrs_47);
    }
#line 303 "middle_rec.m"
    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_95_95 == (MR_Integer) 0);
#line 256 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 256 "middle_rec.m"
      {
#line 305 "middle_rec.m"
        {
#line 305 "middle_rec.m"
          ll_backend__middle_rec__AvoidInstrs_49 = mercury__list__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47, ll_backend__middle_rec__RecInstrs_48);
        }
#line 306 "middle_rec.m"
        {
#line 306 "middle_rec.m"
          ll_backend__middle_rec__find_unused_register_2_p_0(ll_backend__middle_rec__AvoidInstrs_49, &ll_backend__middle_rec__AuxReg_50);
        }
#line 308 "middle_rec.m"
        {
#line 308 "middle_rec.m"
          ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__RecInstrs_48, &ll_backend__middle_rec__BeforeInstrs0_51, &ll_backend__middle_rec__AfterInstrs_52);
        }
#line 309 "middle_rec.m"
        {
#line 309 "middle_rec.m"
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__BeforeInstrs0_51, ll_backend__middle_rec__AuxReg_50, &ll_backend__middle_rec__BeforeInstrs_53);
        }
#line 311 "middle_rec.m"
        {
#line 311 "middle_rec.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop1Label_54, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, &ll_backend__middle_rec__STATE_VARIABLE_CI_96_96);
        }
#line 312 "middle_rec.m"
        {
#line 312 "middle_rec.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop2Label_55, ll_backend__middle_rec__STATE_VARIABLE_CI_96_96, ll_backend__middle_rec__STATE_VARIABLE_CI_70);
        }
#line 313 "middle_rec.m"
        {
#line 313 "middle_rec.m"
          ll_backend__code_info__get_total_stackslot_count_2_p_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_70, &ll_backend__middle_rec__FrameSize0_56);
        }
#line 314 "middle_rec.m"
        {
#line 314 "middle_rec.m"
          ll_backend__middle_rec__FrameSize_57 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_70, ll_backend__middle_rec__FrameSize0_56);
        }
#line 316 "middle_rec.m"
        {
#line 316 "middle_rec.m"
          ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__EntryTestInstrs_30, ll_backend__middle_rec__Loop1Label_54, &ll_backend__middle_rec__Loop1Test_58);
        }
#line 318 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__FrameSize_57 == (MR_Integer) 0);
#line 343 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 319 "middle_rec.m"
          {
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_98_98;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_99_99;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_100_100;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_104_104;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_105_105;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_106_106;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_108_108;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_109_109;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_113_113;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_114_114;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_115_115;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_122_122;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_123_123;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_124_124;
#line 319 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_130_130;

#line 319 "middle_rec.m"
            {
#line 319 "middle_rec.m"
              ll_backend__middle_rec__MaybeIncrSp_59 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
#line 320 "middle_rec.m"
            {
#line 320 "middle_rec.m"
              ll_backend__middle_rec__MaybeDecrSp_60 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
#line 322 "middle_rec.m"
            ll_backend__middle_rec__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[1]);
#line 322 "middle_rec.m"
            {
#line 322 "middle_rec.m"
              ll_backend__middle_rec__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 322 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 322 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 2) = ((MR_Box) (ll_backend__middle_rec__V_100_100));
#line 322 "middle_rec.m"
            }
#line 322 "middle_rec.m"
            {
#line 322 "middle_rec.m"
              ll_backend__middle_rec__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 0) = ((MR_Box) (ll_backend__middle_rec__V_99_99));
#line 322 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
#line 322 "middle_rec.m"
            }
#line 321 "middle_rec.m"
            {
#line 321 "middle_rec.m"
              ll_backend__middle_rec__InitAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_98_98)));
            }
#line 328 "middle_rec.m"
            {
#line 328 "middle_rec.m"
              ll_backend__middle_rec__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_108_108, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 328 "middle_rec.m"
            }
#line 328 "middle_rec.m"
            ll_backend__middle_rec__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[2]);
#line 328 "middle_rec.m"
            {
#line 328 "middle_rec.m"
              ll_backend__middle_rec__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 2) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 3) = ((MR_Box) (ll_backend__middle_rec__V_109_109));
#line 328 "middle_rec.m"
            }
#line 327 "middle_rec.m"
            {
#line 327 "middle_rec.m"
              ll_backend__middle_rec__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_105_105, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_105_105, 2) = ((MR_Box) (ll_backend__middle_rec__V_106_106));
#line 327 "middle_rec.m"
            }
#line 326 "middle_rec.m"
            {
#line 326 "middle_rec.m"
              ll_backend__middle_rec__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_104_104, 0) = ((MR_Box) (ll_backend__middle_rec__V_105_105));
#line 326 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_104_104, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
#line 326 "middle_rec.m"
            }
#line 325 "middle_rec.m"
            {
#line 325 "middle_rec.m"
              ll_backend__middle_rec__IncrAuxReg_62 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_104_104)));
            }
#line 334 "middle_rec.m"
            {
#line 334 "middle_rec.m"
              ll_backend__middle_rec__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 334 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 334 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 334 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 2) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
#line 334 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 3) = ((MR_Box) (ll_backend__middle_rec__V_109_109));
#line 334 "middle_rec.m"
            }
#line 333 "middle_rec.m"
            {
#line 333 "middle_rec.m"
              ll_backend__middle_rec__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 333 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 333 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_114_114, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 333 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_114_114, 2) = ((MR_Box) (ll_backend__middle_rec__V_115_115));
#line 333 "middle_rec.m"
            }
#line 332 "middle_rec.m"
            {
#line 332 "middle_rec.m"
              ll_backend__middle_rec__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_113_113, 0) = ((MR_Box) (ll_backend__middle_rec__V_114_114));
#line 332 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_113_113, 1) = ((MR_Box) ((MR_String) "decrement loop counter"));
#line 332 "middle_rec.m"
            }
#line 331 "middle_rec.m"
            {
#line 331 "middle_rec.m"
              ll_backend__middle_rec__DecrAuxReg_63 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_113_113)));
            }
#line 339 "middle_rec.m"
            {
#line 339 "middle_rec.m"
              ll_backend__middle_rec__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 339 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 339 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 339 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 2) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
#line 339 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 3) = ((MR_Box) (ll_backend__middle_rec__V_100_100));
#line 339 "middle_rec.m"
            }
#line 340 "middle_rec.m"
            {
#line 340 "middle_rec.m"
              ll_backend__middle_rec__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 340 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_130_130, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
#line 340 "middle_rec.m"
            }
#line 339 "middle_rec.m"
            {
#line 339 "middle_rec.m"
              ll_backend__middle_rec__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 339 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 339 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_123_123, 1) = ((MR_Box) (ll_backend__middle_rec__V_124_124));
#line 339 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_123_123, 2) = ((MR_Box) (ll_backend__middle_rec__V_130_130));
#line 339 "middle_rec.m"
            }
#line 338 "middle_rec.m"
            {
#line 338 "middle_rec.m"
              ll_backend__middle_rec__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_122_122, 0) = ((MR_Box) (ll_backend__middle_rec__V_123_123));
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_122_122, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
#line 338 "middle_rec.m"
            }
#line 337 "middle_rec.m"
            {
#line 337 "middle_rec.m"
              ll_backend__middle_rec__TestAuxReg_64 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_122_122)));
            }
#line 319 "middle_rec.m"
          }
#line 343 "middle_rec.m"
        else
#line 344 "middle_rec.m"
          {
#line 344 "middle_rec.m"
            MR_String ll_backend__middle_rec__PushMsg_65;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_132_132;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_133_133;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_136_136;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_137_137;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_139_139;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_140_140;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_141_141;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_144_144;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_145_145;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_146_146;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_150_150;
#line 344 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_151_151;

#line 344 "middle_rec.m"
            {
#line 344 "middle_rec.m"
              ll_backend__middle_rec__PushMsg_65 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__middle_rec__ModuleInfo_22, ll_backend__middle_rec__PredId_23, ll_backend__middle_rec__ProcId_24);
            }
#line 346 "middle_rec.m"
            {
#line 346 "middle_rec.m"
              ll_backend__middle_rec__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_57));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 2) = ((MR_Box) (ll_backend__middle_rec__PushMsg_65));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 3) = ((MR_Box) ((MR_Integer) 1));
#line 346 "middle_rec.m"
            }
#line 346 "middle_rec.m"
            {
#line 346 "middle_rec.m"
              ll_backend__middle_rec__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_132_132, 0) = ((MR_Box) (ll_backend__middle_rec__V_133_133));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_132_132, 1) = ((MR_Box) ((MR_String) ""));
#line 346 "middle_rec.m"
            }
#line 345 "middle_rec.m"
            {
#line 345 "middle_rec.m"
              ll_backend__middle_rec__MaybeIncrSp_59 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_132_132)));
            }
#line 349 "middle_rec.m"
            {
#line 349 "middle_rec.m"
              ll_backend__middle_rec__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_137_137, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_57));
#line 349 "middle_rec.m"
            }
#line 349 "middle_rec.m"
            {
#line 349 "middle_rec.m"
              ll_backend__middle_rec__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_136_136, 0) = ((MR_Box) (ll_backend__middle_rec__V_137_137));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_136_136, 1) = ((MR_Box) ((MR_String) ""));
#line 349 "middle_rec.m"
            }
#line 348 "middle_rec.m"
            {
#line 348 "middle_rec.m"
              ll_backend__middle_rec__MaybeDecrSp_60 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_136_136)));
            }
#line 352 "middle_rec.m"
            ll_backend__middle_rec__V_141_141 = (MR_Word) &ll_backend__middle_rec_scalar_common_2[2];
#line 352 "middle_rec.m"
            {
#line 352 "middle_rec.m"
              ll_backend__middle_rec__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 352 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 352 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 352 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 2) = ((MR_Box) (ll_backend__middle_rec__V_141_141));
#line 352 "middle_rec.m"
            }
#line 352 "middle_rec.m"
            {
#line 352 "middle_rec.m"
              ll_backend__middle_rec__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_139_139, 0) = ((MR_Box) (ll_backend__middle_rec__V_140_140));
#line 352 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_139_139, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
#line 352 "middle_rec.m"
            }
#line 351 "middle_rec.m"
            {
#line 351 "middle_rec.m"
              ll_backend__middle_rec__InitAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_139_139)));
            }
#line 354 "middle_rec.m"
            {
#line 354 "middle_rec.m"
              ll_backend__middle_rec__IncrAuxReg_62 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
#line 355 "middle_rec.m"
            {
#line 355 "middle_rec.m"
              ll_backend__middle_rec__DecrAuxReg_63 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
#line 357 "middle_rec.m"
            {
#line 357 "middle_rec.m"
              ll_backend__middle_rec__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_150_150, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 357 "middle_rec.m"
            }
#line 357 "middle_rec.m"
            {
#line 357 "middle_rec.m"
              ll_backend__middle_rec__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 2) = ((MR_Box) (ll_backend__middle_rec__V_141_141));
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 3) = ((MR_Box) (ll_backend__middle_rec__V_150_150));
#line 357 "middle_rec.m"
            }
#line 358 "middle_rec.m"
            {
#line 358 "middle_rec.m"
              ll_backend__middle_rec__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 358 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_151_151, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
#line 358 "middle_rec.m"
            }
#line 357 "middle_rec.m"
            {
#line 357 "middle_rec.m"
              ll_backend__middle_rec__V_145_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_145_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_145_145, 1) = ((MR_Box) (ll_backend__middle_rec__V_146_146));
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_145_145, 2) = ((MR_Box) (ll_backend__middle_rec__V_151_151));
#line 357 "middle_rec.m"
            }
#line 357 "middle_rec.m"
            {
#line 357 "middle_rec.m"
              ll_backend__middle_rec__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_144_144, 0) = ((MR_Box) (ll_backend__middle_rec__V_145_145));
#line 357 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_144_144, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
#line 357 "middle_rec.m"
            }
#line 356 "middle_rec.m"
            {
#line 356 "middle_rec.m"
              ll_backend__middle_rec__TestAuxReg_64 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_144_144)));
            }
#line 344 "middle_rec.m"
          }
#line 389 "middle_rec.m"
        if ((ll_backend__middle_rec__AfterInstrs_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "middle_rec.m"
          {
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_210_210;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_211_211;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_212_212;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_213_213;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_215_215;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_216_216;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_217_217;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_220_220;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_221_221;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_222_222;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_223_223;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_224_224;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_225_225;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_227_227;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_228_228;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_229_229;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_230_230;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_231_231;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_232_232;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_233_233;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_234_234;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_236_236;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_237_237;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_238_238;
#line 369 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_239_239;

#line 372 "middle_rec.m"
            {
#line 372 "middle_rec.m"
              ll_backend__middle_rec__V_213_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_213_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 372 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_213_213, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_25));
#line 372 "middle_rec.m"
            }
#line 372 "middle_rec.m"
            {
#line 372 "middle_rec.m"
              ll_backend__middle_rec__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_212_212, 0) = ((MR_Box) (ll_backend__middle_rec__V_213_213));
#line 372 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_212_212, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 372 "middle_rec.m"
            }
#line 373 "middle_rec.m"
            {
#line 373 "middle_rec.m"
              ll_backend__middle_rec__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 373 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_217_217, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_21));
#line 373 "middle_rec.m"
            }
#line 373 "middle_rec.m"
            {
#line 373 "middle_rec.m"
              ll_backend__middle_rec__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 373 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_216_216, 0) = ((MR_Box) (ll_backend__middle_rec__V_217_217));
#line 373 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_216_216, 1) = ((MR_Box) ((MR_String) ""));
#line 373 "middle_rec.m"
            }
#line 374 "middle_rec.m"
            {
#line 374 "middle_rec.m"
              ll_backend__middle_rec__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_215_215, 0) = ((MR_Box) (ll_backend__middle_rec__V_216_216));
#line 374 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_215_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "middle_rec.m"
            }
#line 372 "middle_rec.m"
            {
#line 372 "middle_rec.m"
              ll_backend__middle_rec__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_211_211, 0) = ((MR_Box) (ll_backend__middle_rec__V_212_212));
#line 372 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_211_211, 1) = ((MR_Box) (ll_backend__middle_rec__V_215_215));
#line 372 "middle_rec.m"
            }
#line 371 "middle_rec.m"
            {
#line 371 "middle_rec.m"
              ll_backend__middle_rec__V_210_210 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_211_211);
            }
#line 375 "middle_rec.m"
            {
#line 375 "middle_rec.m"
              ll_backend__middle_rec__V_221_221 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestInstrs_30);
            }
#line 377 "middle_rec.m"
            {
#line 377 "middle_rec.m"
              ll_backend__middle_rec__V_225_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_225_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 377 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_225_225, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_54));
#line 377 "middle_rec.m"
            }
#line 377 "middle_rec.m"
            {
#line 377 "middle_rec.m"
              ll_backend__middle_rec__V_224_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 377 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_224_224, 0) = ((MR_Box) (ll_backend__middle_rec__V_225_225));
#line 377 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_224_224, 1) = ((MR_Box) ((MR_String) "start of the down loop"));
#line 377 "middle_rec.m"
            }
#line 376 "middle_rec.m"
            {
#line 376 "middle_rec.m"
              ll_backend__middle_rec__V_223_223 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_224_224)));
            }
#line 379 "middle_rec.m"
            {
#line 379 "middle_rec.m"
              ll_backend__middle_rec__V_228_228 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BeforeInstrs_53);
            }
#line 380 "middle_rec.m"
            {
#line 380 "middle_rec.m"
              ll_backend__middle_rec__V_230_230 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Loop1Test_58);
            }
#line 382 "middle_rec.m"
            {
#line 382 "middle_rec.m"
              ll_backend__middle_rec__V_234_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_234_234, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 382 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_234_234, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_28));
#line 382 "middle_rec.m"
            }
#line 382 "middle_rec.m"
            {
#line 382 "middle_rec.m"
              ll_backend__middle_rec__V_233_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 382 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_233_233, 0) = ((MR_Box) (ll_backend__middle_rec__V_234_234));
#line 382 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_233_233, 1) = ((MR_Box) ((MR_String) "start of base case"));
#line 382 "middle_rec.m"
            }
#line 381 "middle_rec.m"
            {
#line 381 "middle_rec.m"
              ll_backend__middle_rec__V_232_232 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_233_233)));
            }
#line 384 "middle_rec.m"
            {
#line 384 "middle_rec.m"
              ll_backend__middle_rec__V_237_237 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
            }
#line 386 "middle_rec.m"
            {
#line 386 "middle_rec.m"
              ll_backend__middle_rec__V_239_239 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (&ll_backend__middle_rec_scalar_common_1[4])));
            }
#line 385 "middle_rec.m"
            {
#line 385 "middle_rec.m"
              ll_backend__middle_rec__V_238_238 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__V_239_239);
            }
#line 384 "middle_rec.m"
            {
#line 384 "middle_rec.m"
              ll_backend__middle_rec__V_236_236 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_237_237, ll_backend__middle_rec__V_238_238);
            }
#line 383 "middle_rec.m"
            {
#line 383 "middle_rec.m"
              ll_backend__middle_rec__V_231_231 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_232_232, ll_backend__middle_rec__V_236_236);
            }
#line 380 "middle_rec.m"
            {
#line 380 "middle_rec.m"
              ll_backend__middle_rec__V_229_229 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_230_230, ll_backend__middle_rec__V_231_231);
            }
#line 379 "middle_rec.m"
            {
#line 379 "middle_rec.m"
              ll_backend__middle_rec__V_227_227 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_228_228, ll_backend__middle_rec__V_229_229);
            }
#line 378 "middle_rec.m"
            {
#line 378 "middle_rec.m"
              ll_backend__middle_rec__V_222_222 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_223_223, ll_backend__middle_rec__V_227_227);
            }
#line 375 "middle_rec.m"
            {
#line 375 "middle_rec.m"
              ll_backend__middle_rec__V_220_220 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_221_221, ll_backend__middle_rec__V_222_222);
            }
#line 374 "middle_rec.m"
            {
#line 374 "middle_rec.m"
              *ll_backend__middle_rec__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_210_210, ll_backend__middle_rec__V_220_220);
            }
#line 369 "middle_rec.m"
            ll_backend__middle_rec__succeeded = MR_TRUE;
#line 369 "middle_rec.m"
          }
#line 389 "middle_rec.m"
        else
#line 390 "middle_rec.m"
          {
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__BaseLabels_68;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_153_153;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_154_154;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_155_155;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_156_156;
#line 390 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_157_157;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_158_158;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_159_159;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_160_160;
#line 390 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_161_161;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_162_162;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_163_163;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_164_164;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_165_165;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_166_166;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_167_167;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_168_168;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_169_169;
#line 390 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_170_170;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_171_171;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_172_172;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_173_173;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_174_174;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_175_175;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_176_176;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_177_177;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_178_178;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_179_179;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_180_180;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_181_181;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_182_182;
#line 390 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_183_183;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_184_184;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_185_185;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_186_186;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_187_187;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_188_188;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_189_189;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_190_190;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_191_191;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_192_192;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_193_193;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_194_194;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_195_195;
#line 390 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_196_196;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_197_197;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_198_198;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_199_199;
#line 390 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_200_200;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_201_201;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_202_202;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_203_203;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_204_204;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_205_205;
#line 390 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_206_206;
#line 390 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_209_209;

#line 396 "middle_rec.m"
            {
#line 396 "middle_rec.m"
              ll_backend__middle_rec__find_labels_2_p_0(ll_backend__middle_rec__BaseInstrs_47, &ll_backend__middle_rec__BaseLabels_68);
            }
#line 397 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BaseLabels_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 390 "middle_rec.m"
              {
#line 400 "middle_rec.m"
                ll_backend__middle_rec__V_157_157 = (MR_String) "Procedure entry point";
#line 401 "middle_rec.m"
                ll_backend__middle_rec__V_161_161 = (MR_String) "";
#line 402 "middle_rec.m"
                ll_backend__middle_rec__V_162_162 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "middle_rec.m"
                {
#line 400 "middle_rec.m"
                  ll_backend__middle_rec__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 400 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_156_156, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_25));
#line 400 "middle_rec.m"
                }
#line 400 "middle_rec.m"
                {
#line 400 "middle_rec.m"
                  ll_backend__middle_rec__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_155_155, 0) = ((MR_Box) (ll_backend__middle_rec__V_156_156));
#line 400 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_155_155, 1) = ((MR_Box) (ll_backend__middle_rec__V_157_157));
#line 400 "middle_rec.m"
                }
#line 401 "middle_rec.m"
                {
#line 401 "middle_rec.m"
                  ll_backend__middle_rec__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_160_160, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_21));
#line 401 "middle_rec.m"
                }
#line 401 "middle_rec.m"
                {
#line 401 "middle_rec.m"
                  ll_backend__middle_rec__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_159_159, 0) = ((MR_Box) (ll_backend__middle_rec__V_160_160));
#line 401 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_159_159, 1) = ((MR_Box) (ll_backend__middle_rec__V_161_161));
#line 401 "middle_rec.m"
                }
#line 402 "middle_rec.m"
                {
#line 402 "middle_rec.m"
                  ll_backend__middle_rec__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_158_158, 0) = ((MR_Box) (ll_backend__middle_rec__V_159_159));
#line 402 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_158_158, 1) = ((MR_Box) (ll_backend__middle_rec__V_162_162));
#line 402 "middle_rec.m"
                }
#line 400 "middle_rec.m"
                {
#line 400 "middle_rec.m"
                  ll_backend__middle_rec__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_154_154, 0) = ((MR_Box) (ll_backend__middle_rec__V_155_155));
#line 400 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_154_154, 1) = ((MR_Box) (ll_backend__middle_rec__V_158_158));
#line 400 "middle_rec.m"
                }
#line 399 "middle_rec.m"
                {
#line 399 "middle_rec.m"
                  ll_backend__middle_rec__V_153_153 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_154_154);
                }
#line 403 "middle_rec.m"
                {
#line 403 "middle_rec.m"
                  ll_backend__middle_rec__V_164_164 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestInstrs_30);
                }
#line 406 "middle_rec.m"
                ll_backend__middle_rec__V_170_170 = (MR_String) "start of the down loop";
#line 406 "middle_rec.m"
                {
#line 406 "middle_rec.m"
                  ll_backend__middle_rec__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 406 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_169_169, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_54));
#line 406 "middle_rec.m"
                }
#line 406 "middle_rec.m"
                {
#line 406 "middle_rec.m"
                  ll_backend__middle_rec__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_168_168, 0) = ((MR_Box) (ll_backend__middle_rec__V_169_169));
#line 406 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_168_168, 1) = ((MR_Box) (ll_backend__middle_rec__V_170_170));
#line 406 "middle_rec.m"
                }
#line 405 "middle_rec.m"
                {
#line 405 "middle_rec.m"
                  ll_backend__middle_rec__V_167_167 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_168_168)));
                }
#line 410 "middle_rec.m"
                {
#line 410 "middle_rec.m"
                  ll_backend__middle_rec__V_174_174 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BeforeInstrs_53);
                }
#line 411 "middle_rec.m"
                {
#line 411 "middle_rec.m"
                  ll_backend__middle_rec__V_176_176 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Loop1Test_58);
                }
#line 412 "middle_rec.m"
                {
#line 412 "middle_rec.m"
                  ll_backend__middle_rec__V_178_178 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
                }
#line 414 "middle_rec.m"
                ll_backend__middle_rec__V_183_183 = (MR_String) "";
#line 414 "middle_rec.m"
                {
#line 414 "middle_rec.m"
                  ll_backend__middle_rec__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 414 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_182_182, 1) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
#line 414 "middle_rec.m"
                }
#line 414 "middle_rec.m"
                {
#line 414 "middle_rec.m"
                  ll_backend__middle_rec__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_181_181, 0) = ((MR_Box) (ll_backend__middle_rec__V_182_182));
#line 414 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_181_181, 1) = ((MR_Box) (ll_backend__middle_rec__V_183_183));
#line 414 "middle_rec.m"
                }
#line 413 "middle_rec.m"
                {
#line 413 "middle_rec.m"
                  ll_backend__middle_rec__V_180_180 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_181_181)));
                }
#line 416 "middle_rec.m"
                {
#line 416 "middle_rec.m"
                  ll_backend__middle_rec__V_185_185 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__AfterInstrs_52);
                }
#line 422 "middle_rec.m"
                ll_backend__middle_rec__V_195_195 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "middle_rec.m"
                ll_backend__middle_rec__V_196_196 = (MR_String) "exit from recursive case";
#line 423 "middle_rec.m"
                ll_backend__middle_rec__V_200_200 = (MR_String) "start of base case";
#line 424 "middle_rec.m"
                ll_backend__middle_rec__V_201_201 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "middle_rec.m"
                ll_backend__middle_rec__V_194_194 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3]);
#line 422 "middle_rec.m"
                ll_backend__middle_rec__V_193_193 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[5];
#line 423 "middle_rec.m"
                {
#line 423 "middle_rec.m"
                  ll_backend__middle_rec__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 423 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_199_199, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_28));
#line 423 "middle_rec.m"
                }
#line 423 "middle_rec.m"
                {
#line 423 "middle_rec.m"
                  ll_backend__middle_rec__V_198_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_198_198, 0) = ((MR_Box) (ll_backend__middle_rec__V_199_199));
#line 423 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_198_198, 1) = ((MR_Box) (ll_backend__middle_rec__V_200_200));
#line 423 "middle_rec.m"
                }
#line 424 "middle_rec.m"
                {
#line 424 "middle_rec.m"
                  ll_backend__middle_rec__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_197_197, 0) = ((MR_Box) (ll_backend__middle_rec__V_198_198));
#line 424 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_197_197, 1) = ((MR_Box) (ll_backend__middle_rec__V_201_201));
#line 424 "middle_rec.m"
                }
#line 422 "middle_rec.m"
                {
#line 422 "middle_rec.m"
                  ll_backend__middle_rec__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_192_192, 0) = ((MR_Box) (ll_backend__middle_rec__V_193_193));
#line 422 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_192_192, 1) = ((MR_Box) (ll_backend__middle_rec__V_197_197));
#line 422 "middle_rec.m"
                }
#line 421 "middle_rec.m"
                {
#line 421 "middle_rec.m"
                  ll_backend__middle_rec__V_191_191 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_192_192);
                }
#line 425 "middle_rec.m"
                {
#line 425 "middle_rec.m"
                  ll_backend__middle_rec__V_203_203 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
                }
#line 428 "middle_rec.m"
                ll_backend__middle_rec__V_209_209 = (MR_String) "exit from base case";
#line 428 "middle_rec.m"
                ll_backend__middle_rec__V_206_206 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[4];
#line 427 "middle_rec.m"
                {
#line 427 "middle_rec.m"
                  ll_backend__middle_rec__V_205_205 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_206_206)));
                }
#line 426 "middle_rec.m"
                {
#line 426 "middle_rec.m"
                  ll_backend__middle_rec__V_204_204 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__V_205_205);
                }
#line 425 "middle_rec.m"
                {
#line 425 "middle_rec.m"
                  ll_backend__middle_rec__V_202_202 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_203_203, ll_backend__middle_rec__V_204_204);
                }
#line 424 "middle_rec.m"
                {
#line 424 "middle_rec.m"
                  ll_backend__middle_rec__V_190_190 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_191_191, ll_backend__middle_rec__V_202_202);
                }
#line 420 "middle_rec.m"
                {
#line 420 "middle_rec.m"
                  ll_backend__middle_rec__V_189_189 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__V_190_190);
                }
#line 419 "middle_rec.m"
                {
#line 419 "middle_rec.m"
                  ll_backend__middle_rec__V_188_188 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__TestAuxReg_64, ll_backend__middle_rec__V_189_189);
                }
#line 418 "middle_rec.m"
                {
#line 418 "middle_rec.m"
                  ll_backend__middle_rec__V_187_187 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__DecrAuxReg_63, ll_backend__middle_rec__V_188_188);
                }
#line 417 "middle_rec.m"
                {
#line 417 "middle_rec.m"
                  ll_backend__middle_rec__V_186_186 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__MaybeDecrSp_60, ll_backend__middle_rec__V_187_187);
                }
#line 416 "middle_rec.m"
                {
#line 416 "middle_rec.m"
                  ll_backend__middle_rec__V_184_184 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_185_185, ll_backend__middle_rec__V_186_186);
                }
#line 415 "middle_rec.m"
                {
#line 415 "middle_rec.m"
                  ll_backend__middle_rec__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_180_180, ll_backend__middle_rec__V_184_184);
                }
#line 412 "middle_rec.m"
                {
#line 412 "middle_rec.m"
                  ll_backend__middle_rec__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_178_178, ll_backend__middle_rec__V_179_179);
                }
#line 411 "middle_rec.m"
                {
#line 411 "middle_rec.m"
                  ll_backend__middle_rec__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_176_176, ll_backend__middle_rec__V_177_177);
                }
#line 410 "middle_rec.m"
                {
#line 410 "middle_rec.m"
                  ll_backend__middle_rec__V_173_173 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_174_174, ll_backend__middle_rec__V_175_175);
                }
#line 409 "middle_rec.m"
                {
#line 409 "middle_rec.m"
                  ll_backend__middle_rec__V_172_172 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__IncrAuxReg_62, ll_backend__middle_rec__V_173_173);
                }
#line 408 "middle_rec.m"
                {
#line 408 "middle_rec.m"
                  ll_backend__middle_rec__V_171_171 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__MaybeIncrSp_59, ll_backend__middle_rec__V_172_172);
                }
#line 407 "middle_rec.m"
                {
#line 407 "middle_rec.m"
                  ll_backend__middle_rec__V_166_166 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_167_167, ll_backend__middle_rec__V_171_171);
                }
#line 404 "middle_rec.m"
                {
#line 404 "middle_rec.m"
                  ll_backend__middle_rec__V_165_165 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__InitAuxReg_61, ll_backend__middle_rec__V_166_166);
                }
#line 403 "middle_rec.m"
                {
#line 403 "middle_rec.m"
                  ll_backend__middle_rec__V_163_163 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_164_164, ll_backend__middle_rec__V_165_165);
                }
#line 402 "middle_rec.m"
                {
#line 402 "middle_rec.m"
                  *ll_backend__middle_rec__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_153_153, ll_backend__middle_rec__V_163_163);
                }
#line 402 "middle_rec.m"
                ll_backend__middle_rec__succeeded = MR_TRUE;
#line 390 "middle_rec.m"
              }
#line 390 "middle_rec.m"
          }
#line 256 "middle_rec.m"
      }
#line 256 "middle_rec.m"
    return ll_backend__middle_rec__succeeded;
#line 256 "middle_rec.m"
  }
#line 250 "middle_rec.m"
}

#line 235 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
#line 235 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1)
#line 235 "middle_rec.m"
{
#line 237 "middle_rec.m"
  while (MR_TRUE)
#line 237 "middle_rec.m"
    {
#line 237 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 237 "middle_rec.m"
      {
#line 237 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;
#line 237 "middle_rec.m"
        MR_Word ll_backend__middle_rec__HeadVar__2_2;

#line 237 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "middle_rec.m"
          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
#line 237 "middle_rec.m"
        else
#line 238 "middle_rec.m"
          {
#line 238 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "middle_rec.m"
            MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_6;
#line 238 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
#line 124 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));

#line 124 "middle_rec.m"
            {
#line 124 "middle_rec.m"
              ll_backend__middle_rec__OnlyBuiltinsGoal_6 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_8_8);
            }
#line 243 "middle_rec.m"
#line 243 "middle_rec.m"
            switch (ll_backend__middle_rec__OnlyBuiltinsGoal_6) {
#line 243 "middle_rec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 243 "middle_rec.m"
              case (MR_Integer) 0:
#line 245 "middle_rec.m"
                ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
#line 243 "middle_rec.m"
                break;
#line 243 "middle_rec.m"
              case (MR_Integer) 1:
#line 242 "middle_rec.m"
                {
#line 242 "middle_rec.m"
                  /* direct tailcall eliminated */
#line 242 "middle_rec.m"
                  {
#line 242 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Goals_4;

#line 242 "middle_rec.m"
                    ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 242 "middle_rec.m"
                  }
#line 242 "middle_rec.m"
                  continue;
#line 242 "middle_rec.m"
                }
#line 243 "middle_rec.m"
                break;
#line 243 "middle_rec.m"
            }
#line 238 "middle_rec.m"
          }
#line 237 "middle_rec.m"
        return ll_backend__middle_rec__HeadVar__2_2;
#line 237 "middle_rec.m"
      }
#line 237 "middle_rec.m"
      break;
#line 237 "middle_rec.m"
    }
#line 235 "middle_rec.m"
}

#line 222 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
#line 222 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1)
#line 222 "middle_rec.m"
{
#line 224 "middle_rec.m"
  while (MR_TRUE)
#line 224 "middle_rec.m"
    {
#line 224 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 224 "middle_rec.m"
      {
#line 224 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;
#line 224 "middle_rec.m"
        MR_Word ll_backend__middle_rec__HeadVar__2_2;

#line 224 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "middle_rec.m"
          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
#line 224 "middle_rec.m"
        else
#line 225 "middle_rec.m"
          {
#line 225 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Goal_5;
#line 225 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 225 "middle_rec.m"
            MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_8;
#line 225 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 225 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11;
#line 225 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_9_9, (MR_Integer) 0)));
#line 225 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_9_9, (MR_Integer) 1)));
#line 124 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12;

#line 225 "middle_rec.m"
            ll_backend__middle_rec__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_9_9, (MR_Integer) 2)));
#line 124 "middle_rec.m"
            ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 0)));
#line 124 "middle_rec.m"
            ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 1)));
#line 124 "middle_rec.m"
            {
#line 124 "middle_rec.m"
              ll_backend__middle_rec__OnlyBuiltinsGoal_8 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_11_11);
            }
#line 230 "middle_rec.m"
#line 230 "middle_rec.m"
            switch (ll_backend__middle_rec__OnlyBuiltinsGoal_8) {
#line 230 "middle_rec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 230 "middle_rec.m"
              case (MR_Integer) 0:
#line 232 "middle_rec.m"
                ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
#line 230 "middle_rec.m"
                break;
#line 230 "middle_rec.m"
              case (MR_Integer) 1:
#line 229 "middle_rec.m"
                {
#line 229 "middle_rec.m"
                  /* direct tailcall eliminated */
#line 229 "middle_rec.m"
                  {
#line 229 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Cases_6;

#line 229 "middle_rec.m"
                    ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 229 "middle_rec.m"
                  }
#line 229 "middle_rec.m"
                  continue;
#line 229 "middle_rec.m"
                }
#line 230 "middle_rec.m"
                break;
#line 230 "middle_rec.m"
            }
#line 225 "middle_rec.m"
          }
#line 224 "middle_rec.m"
        return ll_backend__middle_rec__HeadVar__2_2;
#line 224 "middle_rec.m"
      }
#line 224 "middle_rec.m"
      break;
#line 224 "middle_rec.m"
    }
#line 222 "middle_rec.m"
}

#line 126 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(
#line 126 "middle_rec.m"
  MR_Word ll_backend__middle_rec__GoalExpr_3)
#line 126 "middle_rec.m"
{
#line 130 "middle_rec.m"
  while (MR_TRUE)
#line 130 "middle_rec.m"
    {
#line 130 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 130 "middle_rec.m"
      {
#line 130 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;
#line 130 "middle_rec.m"
        MR_Word ll_backend__middle_rec__OnlyBuiltins_4;

#line 130 "middle_rec.m"
#line 130 "middle_rec.m"
        switch (MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) {
#line 130 "middle_rec.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 130 "middle_rec.m"
          case (MR_Integer) 0:
#line 145 "middle_rec.m"
            {
#line 145 "middle_rec.m"
              MR_Word ll_backend__middle_rec__SubGoal_10 = (MR_Word) MR_body(((MR_Word) ll_backend__middle_rec__GoalExpr_3), (MR_Integer) 0);
#line 145 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_10, (MR_Integer) 0)));
#line 124 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_10, (MR_Integer) 1)));

#line 124 "middle_rec.m"
              /* direct tailcall eliminated */
#line 124 "middle_rec.m"
              {
#line 124 "middle_rec.m"
                MR_Word ll_backend__middle_rec__GoalExpr__tmp_copy_3 = ll_backend__middle_rec__V_83_83;

#line 124 "middle_rec.m"
                ll_backend__middle_rec__GoalExpr_3 = ll_backend__middle_rec__GoalExpr__tmp_copy_3;
#line 124 "middle_rec.m"
              }
#line 124 "middle_rec.m"
              continue;
#line 145 "middle_rec.m"
            }
#line 130 "middle_rec.m"
            break;
#line 130 "middle_rec.m"
          case (MR_Integer) 1:
#line 182 "middle_rec.m"
            {
#line 182 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Uni_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 182 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)));
#line 182 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 182 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 182 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));

#line 187 "middle_rec.m"
#line 187 "middle_rec.m"
              switch (MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) {
#line 187 "middle_rec.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 187 "middle_rec.m"
                case (MR_Integer) 0:
#line 191 "middle_rec.m"
                  {
#line 191 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__SubInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 6)));
#line 191 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 0)));
#line 191 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 1)));
#line 191 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 2)));
#line 191 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 3)));
#line 191 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 4)));
#line 191 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 5)));

#line 195 "middle_rec.m"
                    if ((ll_backend__middle_rec__SubInfo_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "middle_rec.m"
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 195 "middle_rec.m"
                    else
#line 196 "middle_rec.m"
                      {
#line 196 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__TakeAddressFields_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_39, (MR_Integer) 0)));
#line 196 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_39, (MR_Integer) 1)));

#line 200 "middle_rec.m"
                        if ((ll_backend__middle_rec__TakeAddressFields_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "middle_rec.m"
                          ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 200 "middle_rec.m"
                        else
#line 202 "middle_rec.m"
                          ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 196 "middle_rec.m"
                      }
#line 191 "middle_rec.m"
                  }
#line 187 "middle_rec.m"
                  break;
#line 187 "middle_rec.m"
                case (MR_Integer) 1:
#line 207 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 187 "middle_rec.m"
                  break;
#line 187 "middle_rec.m"
                case (MR_Integer) 2:
#line 186 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 187 "middle_rec.m"
                  break;
#line 187 "middle_rec.m"
                case (MR_Integer) 3:
#line 187 "middle_rec.m"
#line 187 "middle_rec.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uni_27, (MR_Integer) 0)))) {
#line 187 "middle_rec.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 187 "middle_rec.m"
                    case (MR_Integer) 0:
#line 189 "middle_rec.m"
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 187 "middle_rec.m"
                      break;
#line 187 "middle_rec.m"
                    case (MR_Integer) 1:
#line 210 "middle_rec.m"
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 187 "middle_rec.m"
                      break;
#line 187 "middle_rec.m"
                  }
#line 187 "middle_rec.m"
                  break;
#line 187 "middle_rec.m"
              }
#line 182 "middle_rec.m"
            }
#line 130 "middle_rec.m"
            break;
#line 130 "middle_rec.m"
          case (MR_Integer) 2:
#line 171 "middle_rec.m"
            {
#line 171 "middle_rec.m"
              MR_Word ll_backend__middle_rec__BuiltinState_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 171 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)));
#line 171 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 171 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 171 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));
#line 171 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 5)));

#line 175 "middle_rec.m"
#line 175 "middle_rec.m"
              switch (ll_backend__middle_rec__BuiltinState_21) {
#line 175 "middle_rec.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 175 "middle_rec.m"
                case (MR_Integer) 0:
#line 174 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 175 "middle_rec.m"
                  break;
#line 175 "middle_rec.m"
                case (MR_Integer) 2:
#line 175 "middle_rec.m"
                case (MR_Integer) 1:
#line 179 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 175 "middle_rec.m"
                  break;
#line 175 "middle_rec.m"
              }
#line 171 "middle_rec.m"
            }
#line 130 "middle_rec.m"
            break;
#line 130 "middle_rec.m"
          case (MR_Integer) 3:
#line 130 "middle_rec.m"
#line 130 "middle_rec.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) {
#line 130 "middle_rec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 130 "middle_rec.m"
              case (MR_Integer) 0:
#line 130 "middle_rec.m"
              case (MR_Integer) 1:
#line 216 "middle_rec.m"
                ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 130 "middle_rec.m"
                break;
#line 130 "middle_rec.m"
              case (MR_Integer) 2:
#line 130 "middle_rec.m"
                {
#line 130 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__ConjType_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 130 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));

#line 134 "middle_rec.m"
#line 134 "middle_rec.m"
                  switch (ll_backend__middle_rec__ConjType_5) {
#line 134 "middle_rec.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 134 "middle_rec.m"
                    case (MR_Integer) 1:
#line 136 "middle_rec.m"
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 134 "middle_rec.m"
                      break;
#line 134 "middle_rec.m"
                    case (MR_Integer) 0:
#line 133 "middle_rec.m"
                      {
#line 133 "middle_rec.m"
                        return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_6);
                      }
#line 134 "middle_rec.m"
                      break;
#line 134 "middle_rec.m"
                  }
#line 130 "middle_rec.m"
                }
#line 130 "middle_rec.m"
                break;
#line 130 "middle_rec.m"
              case (MR_Integer) 3:
#line 139 "middle_rec.m"
                {
#line 139 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Goals_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));

#line 140 "middle_rec.m"
                  {
#line 140 "middle_rec.m"
                    return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_71);
                  }
#line 139 "middle_rec.m"
                }
#line 130 "middle_rec.m"
                break;
#line 130 "middle_rec.m"
              case (MR_Integer) 4:
#line 142 "middle_rec.m"
                {
#line 142 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 142 "middle_rec.m"
                  MR_Word ll_backend__middle_rec___Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 142 "middle_rec.m"
                  MR_Word ll_backend__middle_rec___CanFail_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));

#line 143 "middle_rec.m"
                  {
#line 143 "middle_rec.m"
                    return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(ll_backend__middle_rec__Cases_9);
                  }
#line 142 "middle_rec.m"
                }
#line 130 "middle_rec.m"
                break;
#line 130 "middle_rec.m"
              case (MR_Integer) 5:
#line 148 "middle_rec.m"
                {
#line 148 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 148 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 150 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__FGT_13;
#line 150 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_12_12;

#line 150 "middle_rec.m"
                  ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Reason_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 150 "middle_rec.m"
                  if (ll_backend__middle_rec__succeeded)
#line 150 "middle_rec.m"
                    {
#line 150 "middle_rec.m"
                      ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 1)));
#line 150 "middle_rec.m"
                      ll_backend__middle_rec__FGT_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 2)));
#line 152 "middle_rec.m"
#line 152 "middle_rec.m"
                      switch (ll_backend__middle_rec__FGT_13) {
#line 152 "middle_rec.m"
                        default:
#line 152 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = MR_FALSE;
#line 152 "middle_rec.m"
                          break;
#line 152 "middle_rec.m"
                        case (MR_Integer) 1:
#line 151 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = MR_TRUE;
#line 152 "middle_rec.m"
                          break;
#line 152 "middle_rec.m"
                        case (MR_Integer) 2:
#line 152 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = MR_TRUE;
#line 152 "middle_rec.m"
                          break;
#line 152 "middle_rec.m"
                      }
#line 150 "middle_rec.m"
                    }
#line 156 "middle_rec.m"
                  if (ll_backend__middle_rec__succeeded)
#line 155 "middle_rec.m"
                    ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 156 "middle_rec.m"
                  else
#line 123 "middle_rec.m"
                    {
#line 123 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_72, (MR_Integer) 0)));
#line 124 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_72, (MR_Integer) 1)));

#line 124 "middle_rec.m"
                      /* direct tailcall eliminated */
#line 124 "middle_rec.m"
                      {
#line 124 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__GoalExpr__tmp_copy_3 = ll_backend__middle_rec__V_86_86;

#line 124 "middle_rec.m"
                        ll_backend__middle_rec__GoalExpr_3 = ll_backend__middle_rec__GoalExpr__tmp_copy_3;
#line 124 "middle_rec.m"
                      }
#line 124 "middle_rec.m"
                      continue;
#line 123 "middle_rec.m"
                    }
#line 148 "middle_rec.m"
                }
#line 130 "middle_rec.m"
                break;
#line 130 "middle_rec.m"
              case (MR_Integer) 6:
#line 160 "middle_rec.m"
                {
#line 160 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 160 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 160 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));
#line 160 "middle_rec.m"
                  MR_Word ll_backend__middle_rec___Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 162 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_68_68;
#line 162 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_69_69;
#line 162 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_70_70;
#line 162 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Cond_15, (MR_Integer) 0)));
#line 162 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_77_77;
#line 162 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_80_80;
#line 124 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Cond_15, (MR_Integer) 1)));
#line 124 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_78_78;
#line 124 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_81_81;

#line 124 "middle_rec.m"
                  {
#line 124 "middle_rec.m"
                    ll_backend__middle_rec__V_68_68 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_74_74);
                  }
#line 162 "middle_rec.m"
                  ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_68_68 == (MR_Integer) 1);
#line 162 "middle_rec.m"
                  if (ll_backend__middle_rec__succeeded)
#line 162 "middle_rec.m"
                    {
#line 124 "middle_rec.m"
                      ll_backend__middle_rec__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Then_16, (MR_Integer) 0)));
#line 124 "middle_rec.m"
                      ll_backend__middle_rec__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Then_16, (MR_Integer) 1)));
#line 124 "middle_rec.m"
                      {
#line 124 "middle_rec.m"
                        ll_backend__middle_rec__V_69_69 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_77_77);
                      }
#line 163 "middle_rec.m"
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_69_69 == (MR_Integer) 1);
#line 162 "middle_rec.m"
                      if (ll_backend__middle_rec__succeeded)
#line 162 "middle_rec.m"
                        {
#line 124 "middle_rec.m"
                          ll_backend__middle_rec__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Else_17, (MR_Integer) 0)));
#line 124 "middle_rec.m"
                          ll_backend__middle_rec__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Else_17, (MR_Integer) 1)));
#line 124 "middle_rec.m"
                          {
#line 124 "middle_rec.m"
                            ll_backend__middle_rec__V_70_70 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_80_80);
                          }
#line 164 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_70_70 == (MR_Integer) 1);
#line 162 "middle_rec.m"
                        }
#line 162 "middle_rec.m"
                    }
#line 167 "middle_rec.m"
                  if (ll_backend__middle_rec__succeeded)
#line 166 "middle_rec.m"
                    ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 167 "middle_rec.m"
                  else
#line 168 "middle_rec.m"
                    ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 160 "middle_rec.m"
                }
#line 130 "middle_rec.m"
                break;
#line 130 "middle_rec.m"
              case (MR_Integer) 7:
#line 218 "middle_rec.m"
                {
#line 219 "middle_rec.m"
                  {
#line 219 "middle_rec.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
                  }
#line 218 "middle_rec.m"
                }
#line 130 "middle_rec.m"
                break;
#line 130 "middle_rec.m"
            }
#line 130 "middle_rec.m"
            break;
#line 130 "middle_rec.m"
        }
#line 130 "middle_rec.m"
        return ll_backend__middle_rec__OnlyBuiltins_4;
#line 130 "middle_rec.m"
      }
#line 130 "middle_rec.m"
      break;
#line 130 "middle_rec.m"
    }
#line 126 "middle_rec.m"
}

#line 91 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(
#line 91 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 91 "middle_rec.m"
  MR_Word ll_backend__middle_rec__CodeInfo_5)
#line 91 "middle_rec.m"
{
#line 94 "middle_rec.m"
  while (MR_TRUE)
#line 94 "middle_rec.m"
    {
#line 94 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 94 "middle_rec.m"
      {
#line 94 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 94 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Goal_3;
#line 94 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Goals_4;
#line 94 "middle_rec.m"
        MR_Word ll_backend__middle_rec__GoalExpr_6;
#line 94 "middle_rec.m"
        MR_Word ll_backend__middle_rec__OnlyBuiltinsGoalExpr_8;
#line 95 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_7_7;

#line 94 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 94 "middle_rec.m"
          {
#line 94 "middle_rec.m"
            ll_backend__middle_rec__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 94 "middle_rec.m"
            ll_backend__middle_rec__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 95 "middle_rec.m"
            ll_backend__middle_rec__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
#line 95 "middle_rec.m"
            ll_backend__middle_rec__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));
#line 96 "middle_rec.m"
            {
#line 96 "middle_rec.m"
              ll_backend__middle_rec__OnlyBuiltinsGoalExpr_8 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__GoalExpr_6);
            }
#line 100 "middle_rec.m"
#line 100 "middle_rec.m"
            switch (ll_backend__middle_rec__OnlyBuiltinsGoalExpr_8) {
#line 100 "middle_rec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 100 "middle_rec.m"
              case (MR_Integer) 0:
#line 101 "middle_rec.m"
                {
#line 101 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_9_9;
#line 101 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__CallPredId_12;
#line 101 "middle_rec.m"
                  MR_Integer ll_backend__middle_rec__CallProcId_13;
#line 101 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__BuiltinState_15;
#line 101 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__PredId_18;
#line 101 "middle_rec.m"
                  MR_Integer ll_backend__middle_rec__ProcId_19;
#line 109 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_14_14;
#line 109 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_16_16;
#line 109 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_17_17;

#line 109 "middle_rec.m"
                  ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_6)) == (MR_mktag((MR_Integer) 2)));
#line 109 "middle_rec.m"
                  if (ll_backend__middle_rec__succeeded)
#line 109 "middle_rec.m"
                    {
#line 109 "middle_rec.m"
                      ll_backend__middle_rec__CallPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 0)));
#line 109 "middle_rec.m"
                      ll_backend__middle_rec__CallProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
#line 109 "middle_rec.m"
                      ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));
#line 109 "middle_rec.m"
                      ll_backend__middle_rec__BuiltinState_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 3)));
#line 109 "middle_rec.m"
                      ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 4)));
#line 109 "middle_rec.m"
                      ll_backend__middle_rec__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 5)));
#line 110 "middle_rec.m"
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BuiltinState_15 == (MR_Integer) 2);
#line 101 "middle_rec.m"
                      if (ll_backend__middle_rec__succeeded)
#line 101 "middle_rec.m"
                        {
#line 111 "middle_rec.m"
                          {
#line 111 "middle_rec.m"
                            ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__PredId_18);
                          }
#line 112 "middle_rec.m"
                          {
#line 112 "middle_rec.m"
                            ll_backend__middle_rec__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__middle_rec__PredId_18, ll_backend__middle_rec__CallPredId_12);
                          }
#line 101 "middle_rec.m"
                          if (ll_backend__middle_rec__succeeded)
#line 101 "middle_rec.m"
                            {
#line 113 "middle_rec.m"
                              {
#line 113 "middle_rec.m"
                                ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__ProcId_19);
                              }
#line 114 "middle_rec.m"
                              ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__ProcId_19 == ll_backend__middle_rec__CallProcId_13);
#line 101 "middle_rec.m"
                              if (ll_backend__middle_rec__succeeded)
#line 101 "middle_rec.m"
                                {
#line 103 "middle_rec.m"
                                  {
#line 103 "middle_rec.m"
                                    ll_backend__middle_rec__V_9_9 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_4);
                                  }
#line 103 "middle_rec.m"
                                  ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_9_9 == (MR_Integer) 1);
#line 101 "middle_rec.m"
                                }
#line 101 "middle_rec.m"
                            }
#line 101 "middle_rec.m"
                        }
#line 109 "middle_rec.m"
                    }
#line 101 "middle_rec.m"
                }
#line 100 "middle_rec.m"
                break;
#line 100 "middle_rec.m"
              case (MR_Integer) 1:
#line 99 "middle_rec.m"
                {
#line 99 "middle_rec.m"
                  /* direct tailcall eliminated */
#line 99 "middle_rec.m"
                  {
#line 99 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Goals_4;

#line 99 "middle_rec.m"
                    ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 99 "middle_rec.m"
                  }
#line 99 "middle_rec.m"
                  continue;
#line 99 "middle_rec.m"
                }
#line 100 "middle_rec.m"
                break;
#line 100 "middle_rec.m"
            }
#line 94 "middle_rec.m"
          }
#line 94 "middle_rec.m"
        return ll_backend__middle_rec__succeeded;
#line 94 "middle_rec.m"
      }
#line 94 "middle_rec.m"
      break;
#line 94 "middle_rec.m"
    }
#line 91 "middle_rec.m"
}

#line 24 "middle_rec.m"
MR_bool MR_CALL 
ll_backend__middle_rec__match_and_generate_6_p_0(
#line 24 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Goal_7,
#line 24 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_8,
#line 24 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_20,
#line 24 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_21,
#line 24 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_0_22,
#line 24 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CLD_23)
#line 24 "middle_rec.m"
{
#line 55 "middle_rec.m"
  {
#line 55 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_7, (MR_Integer) 0)));
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_7, (MR_Integer) 1)));
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Var_13;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Case1_14;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Case2_15;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ConsId1_16;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goal1_17;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ConsId2_18;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goal2_19;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_24_24;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_25_25;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_26_26;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_27_27;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_28_28;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_29_29;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_30_30;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_37_37;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalExpr_40;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goals_42;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_43_43;
#line 124 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_38_38;
#line 87 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_41_41;

#line 57 "middle_rec.m"
    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 57 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 57 "middle_rec.m"
      {
#line 57 "middle_rec.m"
        ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 1)));
#line 57 "middle_rec.m"
        ll_backend__middle_rec__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 2)));
#line 57 "middle_rec.m"
        ll_backend__middle_rec__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 3)));
#line 57 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_24_24 == (MR_Integer) 1);
#line 55 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 55 "middle_rec.m"
          {
#line 57 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 57 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 57 "middle_rec.m"
              {
#line 57 "middle_rec.m"
                ll_backend__middle_rec__Case1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_25_25, (MR_Integer) 0)));
#line 57 "middle_rec.m"
                ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_25_25, (MR_Integer) 1)));
#line 57 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 57 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 57 "middle_rec.m"
                  {
#line 57 "middle_rec.m"
                    ll_backend__middle_rec__Case2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, (MR_Integer) 0)));
#line 57 "middle_rec.m"
                    ll_backend__middle_rec__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, (MR_Integer) 1)));
#line 57 "middle_rec.m"
                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 55 "middle_rec.m"
                    if (ll_backend__middle_rec__succeeded)
#line 55 "middle_rec.m"
                      {
#line 58 "middle_rec.m"
                        ll_backend__middle_rec__ConsId1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 0)));
#line 58 "middle_rec.m"
                        ll_backend__middle_rec__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 1)));
#line 58 "middle_rec.m"
                        ll_backend__middle_rec__Goal1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 2)));
#line 58 "middle_rec.m"
                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 55 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 55 "middle_rec.m"
                          {
#line 59 "middle_rec.m"
                            ll_backend__middle_rec__ConsId2_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 0)));
#line 59 "middle_rec.m"
                            ll_backend__middle_rec__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 1)));
#line 59 "middle_rec.m"
                            ll_backend__middle_rec__Goal2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 2)));
#line 59 "middle_rec.m"
                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 55 "middle_rec.m"
                            if (ll_backend__middle_rec__succeeded)
#line 55 "middle_rec.m"
                              {
#line 124 "middle_rec.m"
                                ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 0)));
#line 124 "middle_rec.m"
                                ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 1)));
#line 124 "middle_rec.m"
                                {
#line 124 "middle_rec.m"
                                  ll_backend__middle_rec__V_30_30 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_37_37);
                                }
#line 61 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_30_30 == (MR_Integer) 1);
#line 61 "middle_rec.m"
                                if (ll_backend__middle_rec__succeeded)
#line 61 "middle_rec.m"
                                  {
#line 87 "middle_rec.m"
                                    ll_backend__middle_rec__GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 0)));
#line 87 "middle_rec.m"
                                    ll_backend__middle_rec__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 88 "middle_rec.m"
                                    if (ll_backend__middle_rec__succeeded)
#line 88 "middle_rec.m"
                                      {
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_40, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__Goals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_40, (MR_Integer) 2)));
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_43_43 == (MR_Integer) 0);
#line 61 "middle_rec.m"
                                        if (ll_backend__middle_rec__succeeded)
#line 89 "middle_rec.m"
                                          {
#line 89 "middle_rec.m"
                                            ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_42, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20);
                                          }
#line 88 "middle_rec.m"
                                      }
#line 61 "middle_rec.m"
                                  }
#line 66 "middle_rec.m"
                                if (ll_backend__middle_rec__succeeded)
#line 64 "middle_rec.m"
                                  {
#line 64 "middle_rec.m"
                                    return ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(ll_backend__middle_rec__Var_13, ll_backend__middle_rec__ConsId1_16, ll_backend__middle_rec__Goal1_17, ll_backend__middle_rec__Goal2_19, ll_backend__middle_rec__GoalInfo_12, ll_backend__middle_rec__Instrs_8, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20, ll_backend__middle_rec__STATE_VARIABLE_CI_21, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_22, ll_backend__middle_rec__STATE_VARIABLE_CLD_23);
                                  }
#line 66 "middle_rec.m"
                                else
#line 72 "middle_rec.m"
                                  {
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_33_33;
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 0)));
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__GoalExpr_48;
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__Goals_50;
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_51_51;
#line 124 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 1)));
#line 87 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_49_49;

#line 124 "middle_rec.m"
                                    {
#line 124 "middle_rec.m"
                                      ll_backend__middle_rec__V_33_33 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_45_45);
                                    }
#line 67 "middle_rec.m"
                                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_33_33 == (MR_Integer) 1);
#line 72 "middle_rec.m"
                                    if (ll_backend__middle_rec__succeeded)
#line 72 "middle_rec.m"
                                      {
#line 87 "middle_rec.m"
                                        ll_backend__middle_rec__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 0)));
#line 87 "middle_rec.m"
                                        ll_backend__middle_rec__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 88 "middle_rec.m"
                                        if (ll_backend__middle_rec__succeeded)
#line 88 "middle_rec.m"
                                          {
#line 88 "middle_rec.m"
                                            ll_backend__middle_rec__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_48, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                            ll_backend__middle_rec__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_48, (MR_Integer) 2)));
#line 88 "middle_rec.m"
                                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_51_51 == (MR_Integer) 0);
#line 72 "middle_rec.m"
                                            if (ll_backend__middle_rec__succeeded)
#line 72 "middle_rec.m"
                                              {
#line 89 "middle_rec.m"
                                                {
#line 89 "middle_rec.m"
                                                  ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_50, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20);
                                                }
#line 72 "middle_rec.m"
                                                if (ll_backend__middle_rec__succeeded)
#line 70 "middle_rec.m"
                                                  {
#line 70 "middle_rec.m"
                                                    return ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(ll_backend__middle_rec__Var_13, ll_backend__middle_rec__ConsId2_18, ll_backend__middle_rec__Goal2_19, ll_backend__middle_rec__Goal1_17, ll_backend__middle_rec__GoalInfo_12, ll_backend__middle_rec__Instrs_8, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20, ll_backend__middle_rec__STATE_VARIABLE_CI_21, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_22, ll_backend__middle_rec__STATE_VARIABLE_CLD_23);
                                                  }
#line 72 "middle_rec.m"
                                              }
#line 88 "middle_rec.m"
                                          }
#line 72 "middle_rec.m"
                                      }
#line 72 "middle_rec.m"
                                  }
#line 55 "middle_rec.m"
                              }
#line 55 "middle_rec.m"
                          }
#line 55 "middle_rec.m"
                      }
#line 57 "middle_rec.m"
                  }
#line 57 "middle_rec.m"
              }
#line 55 "middle_rec.m"
          }
#line 57 "middle_rec.m"
      }
#line 55 "middle_rec.m"
    return ll_backend__middle_rec__succeeded;
#line 55 "middle_rec.m"
  }
#line 24 "middle_rec.m"
}

void mercury__ll_backend__middle_rec__init(void)
{
}

void mercury__ll_backend__middle_rec__init_type_tables(void)
{
}

void mercury__ll_backend__middle_rec__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.middle_rec. */
