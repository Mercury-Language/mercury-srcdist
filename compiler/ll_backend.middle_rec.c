/*
** Automatically generated from `middle_rec.m'
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


/* :- module ll_backend.middle_rec. */
/* :- implementation. */

/*
INIT mercury__ll_backend__middle_rec__init
ENDINIT
*/

#include "ll_backend.middle_rec.mih"


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
#include "int.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
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




#line 744 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_3_p_0(
#line 744 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 744 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
#line 744 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3);

#line 739 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
#line 739 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 739 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Label2_4);

#line 726 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
#line 726 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 726 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 726 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 717 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
#line 717 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 717 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 717 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 693 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
#line 693 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 693 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 693 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 665 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
#line 665 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Rval_4,
#line 665 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
#line 665 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17);

#line 649 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
#line 649 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Lval_4,
#line 649 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
#line 649 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13);

#line 641 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
#line 641 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 641 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 641 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 619 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
#line 619 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 619 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 619 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 516 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
#line 516 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Uinstr_4,
#line 516 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
#line 516 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76);

#line 508 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
#line 508 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 508 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 508 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 497 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_3_p_0(
#line 497 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 497 "middle_rec.m"
  MR_Integer ll_backend__middle_rec__N_2,
#line 497 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

#line 488 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
#line 488 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 488 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__UnusedReg_4);

#line 473 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
#line 473 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 473 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
#line 473 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

#line 449 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
#line 449 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 449 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Before_2,
#line 449 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__After_3);

#line 424 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
#line 424 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 424 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Target_2,
#line 424 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_3);

#line 242 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_8_p_0(
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Var_9,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__BaseConsId_10,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Base_11,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Recursive_12,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_13,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Code_14,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_66,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_67);

#line 230 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
#line 230 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1);

#line 220 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
#line 220 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1);

#line 124 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(
#line 124 "middle_rec.m"
  MR_Word ll_backend__middle_rec__GoalExpr_3);

#line 92 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(
#line 92 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 92 "middle_rec.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 744 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_3_p_0(
#line 744 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 744 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
#line 744 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3)
#line 744 "middle_rec.m"
{
#line 747 "middle_rec.m"
  while (MR_TRUE)
#line 747 "middle_rec.m"
    {
#line 747 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 747 "middle_rec.m"
      {
#line 747 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 747 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Labels_3 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
#line 747 "middle_rec.m"
        else
#line 748 "middle_rec.m"
          {
#line 748 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 748 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 748 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 0)));
#line 748 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;
#line 749 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 1)));
#line 752 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Label_12;

#line 750 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 750 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 750 "middle_rec.m"
              {
#line 750 "middle_rec.m"
                ll_backend__middle_rec__Label_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
#line 751 "middle_rec.m"
                {
#line 751 "middle_rec.m"
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 0) = ((MR_Box) (ll_backend__middle_rec__Label_12));
#line 751 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 1) = ((MR_Box) (ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2));
#line 751 "middle_rec.m"
                }
#line 750 "middle_rec.m"
              }
#line 750 "middle_rec.m"
            else
#line 754 "middle_rec.m"
              {
#line 754 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Block_15;
#line 752 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__V_13_13;
#line 752 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__V_14_14;

#line 752 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 752 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 752 "middle_rec.m"
                  {
#line 752 "middle_rec.m"
                    ll_backend__middle_rec__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
#line 752 "middle_rec.m"
                    ll_backend__middle_rec__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 2)));
#line 752 "middle_rec.m"
                    ll_backend__middle_rec__Block_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 3)));
#line 753 "middle_rec.m"
                    {
#line 753 "middle_rec.m"
                      ll_backend__middle_rec__find_labels_2_3_p_0(ll_backend__middle_rec__Block_15, ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18);
                    }
#line 752 "middle_rec.m"
                  }
#line 752 "middle_rec.m"
                else
#line 753 "middle_rec.m"
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
#line 754 "middle_rec.m"
              }
#line 757 "middle_rec.m"
            /* direct tailcall eliminated */
#line 757 "middle_rec.m"
            {
#line 757 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_8;
#line 757 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;

#line 757 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2;
#line 757 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 757 "middle_rec.m"
            }
#line 757 "middle_rec.m"
            continue;
#line 748 "middle_rec.m"
          }
#line 747 "middle_rec.m"
      }
#line 747 "middle_rec.m"
      break;
#line 747 "middle_rec.m"
    }
#line 744 "middle_rec.m"
}

#line 739 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
#line 739 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 739 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Label2_4)
#line 739 "middle_rec.m"
{
#line 741 "middle_rec.m"
  {
#line 741 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 742 "middle_rec.m"
    {
#line 742 "middle_rec.m"
      ll_backend__middle_rec__find_labels_2_3_p_0(ll_backend__middle_rec__Instrs_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__middle_rec__Label2_4);
#line 742 "middle_rec.m"
      return;
    }
#line 741 "middle_rec.m"
  }
#line 739 "middle_rec.m"
}

#line 726 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
#line 726 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 726 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 726 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 726 "middle_rec.m"
{
#line 729 "middle_rec.m"
  while (MR_TRUE)
#line 729 "middle_rec.m"
    {
#line 729 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 729 "middle_rec.m"
      {
#line 729 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 729 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 729 "middle_rec.m"
        else
#line 730 "middle_rec.m"
          {
#line 730 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Output_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 730 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Outputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 730 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 0)));
#line 730 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 731 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 1)));
#line 731 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 2)));
#line 731 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 3)));
#line 731 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 4)));
#line 731 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 5)));
#line 731 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 6)));

#line 732 "middle_rec.m"
            {
#line 732 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_10, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
#line 733 "middle_rec.m"
            /* direct tailcall eliminated */
#line 733 "middle_rec.m"
            {
#line 733 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Outputs_8;
#line 733 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 733 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 733 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 733 "middle_rec.m"
            }
#line 733 "middle_rec.m"
            continue;
#line 730 "middle_rec.m"
          }
#line 729 "middle_rec.m"
      }
#line 729 "middle_rec.m"
      break;
#line 729 "middle_rec.m"
    }
#line 726 "middle_rec.m"
}

#line 717 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
#line 717 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 717 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 717 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 717 "middle_rec.m"
{
#line 720 "middle_rec.m"
  while (MR_TRUE)
#line 720 "middle_rec.m"
    {
#line 720 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 720 "middle_rec.m"
      {
#line 720 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 720 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 720 "middle_rec.m"
        else
#line 721 "middle_rec.m"
          {
#line 721 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Input_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 721 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 721 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 4)));
#line 721 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 722 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 0)));
#line 722 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 1)));
#line 722 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 2)));
#line 722 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 3)));
#line 722 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 5)));
#line 722 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 6)));

#line 723 "middle_rec.m"
            {
#line 723 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
#line 724 "middle_rec.m"
            /* direct tailcall eliminated */
#line 724 "middle_rec.m"
            {
#line 724 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Inputs_8;
#line 724 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 724 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 724 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 724 "middle_rec.m"
            }
#line 724 "middle_rec.m"
            continue;
#line 721 "middle_rec.m"
          }
#line 720 "middle_rec.m"
      }
#line 720 "middle_rec.m"
      break;
#line 720 "middle_rec.m"
    }
#line 717 "middle_rec.m"
}

#line 693 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
#line 693 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 693 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 693 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 693 "middle_rec.m"
{
#line 696 "middle_rec.m"
  {
#line 696 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 696 "middle_rec.m"
    if (((MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 698 "middle_rec.m"
      {
#line 698 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

#line 699 "middle_rec.m"
        {
#line 699 "middle_rec.m"
          ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 699 "middle_rec.m"
          return;
        }
#line 698 "middle_rec.m"
      }
#line 696 "middle_rec.m"
    else
#line 696 "middle_rec.m"
      if (((MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 700 "middle_rec.m"
        {
#line 700 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 700 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 2)));
#line 700 "middle_rec.m"
          MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_20_20;
#line 700 "middle_rec.m"
          MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

#line 701 "middle_rec.m"
          {
#line 701 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_20_20);
          }
#line 702 "middle_rec.m"
          {
#line 702 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval2_16, ll_backend__middle_rec__STATE_VARIABLE_Used_20_20, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 702 "middle_rec.m"
            return;
          }
#line 700 "middle_rec.m"
        }
#line 696 "middle_rec.m"
      else
#line 696 "middle_rec.m"
        {
#line 696 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

#line 697 "middle_rec.m"
          {
#line 697 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_4, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 697 "middle_rec.m"
            return;
          }
#line 696 "middle_rec.m"
        }
#line 696 "middle_rec.m"
  }
#line 693 "middle_rec.m"
}

#line 665 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
#line 665 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Rval_4,
#line 665 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
#line 665 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17)
#line 665 "middle_rec.m"
{
#line 669 "middle_rec.m"
  while (MR_TRUE)
#line 669 "middle_rec.m"
    {
#line 669 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 669 "middle_rec.m"
      {
#line 669 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 669 "middle_rec.m"
        if (((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 0))))
#line 669 "middle_rec.m"
          {
#line 669 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

#line 670 "middle_rec.m"
            {
#line 670 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_6, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
#line 670 "middle_rec.m"
              return;
            }
#line 669 "middle_rec.m"
          }
#line 669 "middle_rec.m"
        else
#line 669 "middle_rec.m"
          if (((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 2))))
#line 675 "middle_rec.m"
            {
#line 675 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));
#line 675 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

#line 676 "middle_rec.m"
              /* direct tailcall eliminated */
#line 676 "middle_rec.m"
              {
#line 676 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_9;

#line 676 "middle_rec.m"
                ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 676 "middle_rec.m"
              }
#line 676 "middle_rec.m"
              continue;
#line 675 "middle_rec.m"
            }
#line 669 "middle_rec.m"
          else
#line 669 "middle_rec.m"
            if (((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 1))))
#line 672 "middle_rec.m"
              {
#line 673 "middle_rec.m"
                {
#line 673 "middle_rec.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", (MR_String) "var");
#line 673 "middle_rec.m"
                  return;
                }
#line 672 "middle_rec.m"
              }
#line 669 "middle_rec.m"
            else
#line 669 "middle_rec.m"
              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 685 "middle_rec.m"
                {
#line 685 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 3)));
#line 685 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 685 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
#line 685 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 686 "middle_rec.m"
                  {
#line 686 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_28, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
                  }
#line 687 "middle_rec.m"
                  /* direct tailcall eliminated */
#line 687 "middle_rec.m"
                  {
#line 687 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval2_14;
#line 687 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 687 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_0_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16;
#line 687 "middle_rec.m"
                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 687 "middle_rec.m"
                  }
#line 687 "middle_rec.m"
                  continue;
#line 685 "middle_rec.m"
                }
#line 669 "middle_rec.m"
              else
#line 669 "middle_rec.m"
                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 680 "middle_rec.m"
                  *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
#line 669 "middle_rec.m"
                else
#line 669 "middle_rec.m"
                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 689 "middle_rec.m"
                    {
#line 689 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__MemRef_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 690 "middle_rec.m"
                      {
#line 690 "middle_rec.m"
                        ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(ll_backend__middle_rec__MemRef_15, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
#line 690 "middle_rec.m"
                        return;
                      }
#line 689 "middle_rec.m"
                    }
#line 669 "middle_rec.m"
                  else
#line 669 "middle_rec.m"
                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 678 "middle_rec.m"
                      *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
#line 669 "middle_rec.m"
                    else
#line 682 "middle_rec.m"
                      {
#line 682 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__Rval1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
#line 682 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 683 "middle_rec.m"
                        /* direct tailcall eliminated */
#line 683 "middle_rec.m"
                        {
#line 683 "middle_rec.m"
                          MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_27;

#line 683 "middle_rec.m"
                          ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 683 "middle_rec.m"
                        }
#line 683 "middle_rec.m"
                        continue;
#line 682 "middle_rec.m"
                      }
#line 669 "middle_rec.m"
      }
#line 669 "middle_rec.m"
      break;
#line 669 "middle_rec.m"
    }
#line 665 "middle_rec.m"
}

#line 649 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
#line 649 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Lval_4,
#line 649 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
#line 649 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13)
#line 649 "middle_rec.m"
{
#line 656 "middle_rec.m"
  {
#line 656 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 1)));
#line 656 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__N_6;
#line 653 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_14_14;

#line 653 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 653 "middle_rec.m"
      {
#line 653 "middle_rec.m"
        ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)));
#line 653 "middle_rec.m"
        ll_backend__middle_rec__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 653 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_14_14 == (MR_Integer) 0);
#line 653 "middle_rec.m"
      }
#line 656 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 654 "middle_rec.m"
      {
#line 654 "middle_rec.m"
        MR_Word ll_backend__middle_rec__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 654 "middle_rec.m"
        MR_Integer ll_backend__middle_rec__N1_7;
#line 654 "middle_rec.m"
        MR_Box ll_backend__middle_rec__conv0_N1_7;

#line 654 "middle_rec.m"
        {
#line 654 "middle_rec.m"
          mercury__builtin__copy_2_p_1(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N_6)), &ll_backend__middle_rec__conv0_N1_7);
        }
#line 654 "middle_rec.m"
        ll_backend__middle_rec__N1_7 = ((MR_Integer) ll_backend__middle_rec__conv0_N1_7);
#line 655 "middle_rec.m"
        {
#line 655 "middle_rec.m"
          mercury__set__insert_3_p_0(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N1_7)), ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
#line 655 "middle_rec.m"
          return;
        }
#line 654 "middle_rec.m"
      }
#line 656 "middle_rec.m"
    else
#line 659 "middle_rec.m"
      {
#line 659 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Rval_9;
#line 659 "middle_rec.m"
        MR_Word ll_backend__middle_rec__FieldNum_10;
#line 656 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_8_8;

#line 656 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 656 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 656 "middle_rec.m"
          {
#line 656 "middle_rec.m"
            ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 656 "middle_rec.m"
            ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 2)));
#line 656 "middle_rec.m"
            ll_backend__middle_rec__FieldNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 3)));
#line 657 "middle_rec.m"
            {
#line 657 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_16_16;

#line 657 "middle_rec.m"
              {
#line 657 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, &ll_backend__middle_rec__STATE_VARIABLE_Used_16_16);
              }
#line 658 "middle_rec.m"
              {
#line 658 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__FieldNum_10, ll_backend__middle_rec__STATE_VARIABLE_Used_16_16, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
#line 658 "middle_rec.m"
                return;
              }
#line 657 "middle_rec.m"
            }
#line 656 "middle_rec.m"
          }
#line 656 "middle_rec.m"
        else
#line 661 "middle_rec.m"
          {
#line 659 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11;

#line 659 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 659 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 659 "middle_rec.m"
              {
#line 659 "middle_rec.m"
                ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 660 "middle_rec.m"
                {
#line 660 "middle_rec.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", (MR_String) "lvar");
#line 660 "middle_rec.m"
                  return;
                }
#line 659 "middle_rec.m"
              }
#line 659 "middle_rec.m"
            else
#line 662 "middle_rec.m"
              {
#line 662 "middle_rec.m"
              }
#line 662 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_13 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_12;
#line 661 "middle_rec.m"
          }
#line 659 "middle_rec.m"
      }
#line 656 "middle_rec.m"
  }
#line 649 "middle_rec.m"
}

#line 641 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
#line 641 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 641 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 641 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 641 "middle_rec.m"
{
#line 644 "middle_rec.m"
  while (MR_TRUE)
#line 644 "middle_rec.m"
    {
#line 644 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 644 "middle_rec.m"
      {
#line 644 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 644 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 644 "middle_rec.m"
        else
#line 645 "middle_rec.m"
          {
#line 645 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 645 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 646 "middle_rec.m"
            {
#line 646 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
            }
#line 647 "middle_rec.m"
            /* direct tailcall eliminated */
#line 647 "middle_rec.m"
            {
#line 647 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Lvals_8;
#line 647 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 647 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 647 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 647 "middle_rec.m"
            }
#line 647 "middle_rec.m"
            continue;
#line 645 "middle_rec.m"
          }
#line 644 "middle_rec.m"
      }
#line 644 "middle_rec.m"
      break;
#line 644 "middle_rec.m"
    }
#line 641 "middle_rec.m"
}

#line 619 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
#line 619 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 619 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 619 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 619 "middle_rec.m"
{
#line 623 "middle_rec.m"
  while (MR_TRUE)
#line 623 "middle_rec.m"
    {
#line 623 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 623 "middle_rec.m"
      {
#line 623 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 623 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 623 "middle_rec.m"
        else
#line 624 "middle_rec.m"
          {
#line 624 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Comp_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 624 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Comps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 624 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 631 "middle_rec.m"
            if ((ll_backend__middle_rec__Comp_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 639 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 631 "middle_rec.m"
            else
#line 631 "middle_rec.m"
              if (((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 1))))
#line 631 "middle_rec.m"
                {
#line 631 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__In_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

#line 632 "middle_rec.m"
                  {
#line 632 "middle_rec.m"
                    ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(ll_backend__middle_rec__In_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                  }
#line 631 "middle_rec.m"
                }
#line 631 "middle_rec.m"
              else
#line 631 "middle_rec.m"
                if (((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 2))))
#line 633 "middle_rec.m"
                  {
#line 633 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Out_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

#line 634 "middle_rec.m"
                    {
#line 634 "middle_rec.m"
                      ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(ll_backend__middle_rec__Out_19, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                    }
#line 633 "middle_rec.m"
                  }
#line 631 "middle_rec.m"
                else
#line 631 "middle_rec.m"
                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 638 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 631 "middle_rec.m"
                  else
#line 631 "middle_rec.m"
                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 637 "middle_rec.m"
                      ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 631 "middle_rec.m"
                    else
#line 631 "middle_rec.m"
                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 636 "middle_rec.m"
                        ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 631 "middle_rec.m"
                      else
#line 635 "middle_rec.m"
                        ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 626 "middle_rec.m"
            /* direct tailcall eliminated */
#line 626 "middle_rec.m"
            {
#line 626 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Comps_8;
#line 626 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 626 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 626 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 626 "middle_rec.m"
            }
#line 626 "middle_rec.m"
            continue;
#line 624 "middle_rec.m"
          }
#line 623 "middle_rec.m"
      }
#line 623 "middle_rec.m"
      break;
#line 623 "middle_rec.m"
    }
#line 619 "middle_rec.m"
}

#line 516 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
#line 516 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Uinstr_4,
#line 516 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
#line 516 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76)
#line 516 "middle_rec.m"
{
#line 521 "middle_rec.m"
  {
#line 521 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 521 "middle_rec.m"
    if ((ll_backend__middle_rec__Uinstr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 529 "middle_rec.m"
      *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
    else
#line 521 "middle_rec.m"
      if ((ll_backend__middle_rec__Uinstr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "middle_rec.m"
        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
      else
#line 521 "middle_rec.m"
        if (((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 1))))
#line 521 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
        else
#line 521 "middle_rec.m"
          if (((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 2))))
#line 536 "middle_rec.m"
            {
#line 536 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LvalSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)));
#line 536 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LvalList_29;

#line 537 "middle_rec.m"
              {
#line 537 "middle_rec.m"
                mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__middle_rec__LvalSet_28, &ll_backend__middle_rec__LvalList_29);
              }
#line 538 "middle_rec.m"
              {
#line 538 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lvals_3_p_0(ll_backend__middle_rec__LvalList_29, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 538 "middle_rec.m"
                return;
              }
#line 536 "middle_rec.m"
            }
#line 521 "middle_rec.m"
          else
#line 521 "middle_rec.m"
            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 526 "middle_rec.m"
              *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
            else
#line 521 "middle_rec.m"
              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 545 "middle_rec.m"
                {
#line 545 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Lval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 545 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 545 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_96;

#line 546 "middle_rec.m"
                  {
#line 546 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_33, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_96);
                  }
#line 547 "middle_rec.m"
                  {
#line 547 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_34, ll_backend__middle_rec__STATE_VARIABLE_Used_96_96, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 547 "middle_rec.m"
                    return;
                  }
#line 545 "middle_rec.m"
                }
#line 521 "middle_rec.m"
              else
#line 521 "middle_rec.m"
                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 540 "middle_rec.m"
                  {
#line 540 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Instrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 540 "middle_rec.m"
                    MR_Integer ll_backend__middle_rec__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 540 "middle_rec.m"
                    MR_Integer ll_backend__middle_rec__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 541 "middle_rec.m"
                    {
#line 541 "middle_rec.m"
                      ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_32, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 541 "middle_rec.m"
                      return;
                    }
#line 540 "middle_rec.m"
                  }
#line 521 "middle_rec.m"
                else
#line 521 "middle_rec.m"
                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 589 "middle_rec.m"
                    {
#line 589 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 583 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 590 "middle_rec.m"
                      {
#line 590 "middle_rec.m"
                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_108, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 590 "middle_rec.m"
                        return;
                      }
#line 589 "middle_rec.m"
                    }
#line 521 "middle_rec.m"
                  else
#line 521 "middle_rec.m"
                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 532 "middle_rec.m"
                      *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
                    else
#line 521 "middle_rec.m"
                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 533 "middle_rec.m"
                        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
                      else
#line 521 "middle_rec.m"
                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 580 "middle_rec.m"
                          {
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__Components_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 9)));
#line 580 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 10)));

#line 581 "middle_rec.m"
                            {
#line 581 "middle_rec.m"
                              ll_backend__middle_rec__find_used_registers_components_3_p_0(ll_backend__middle_rec__Components_52, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 581 "middle_rec.m"
                              return;
                            }
#line 580 "middle_rec.m"
                          }
#line 521 "middle_rec.m"
                        else
#line 521 "middle_rec.m"
                          if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 600 "middle_rec.m"
                            {
#line 600 "middle_rec.m"
                              MR_Word ll_backend__middle_rec__Lval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 598 "middle_rec.m"
                              MR_Word ll_backend__middle_rec__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 601 "middle_rec.m"
                              {
#line 601 "middle_rec.m"
                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_109, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                                return;
                              }
#line 600 "middle_rec.m"
                            }
#line 521 "middle_rec.m"
                          else
#line 521 "middle_rec.m"
                            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 589 "middle_rec.m"
                              {
#line 589 "middle_rec.m"
                                MR_Word ll_backend__middle_rec__Rval_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 590 "middle_rec.m"
                                {
#line 590 "middle_rec.m"
                                  ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_114, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 590 "middle_rec.m"
                                  return;
                                }
#line 589 "middle_rec.m"
                              }
#line 521 "middle_rec.m"
                            else
#line 521 "middle_rec.m"
                              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 525 "middle_rec.m"
                                *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
                              else
#line 521 "middle_rec.m"
                                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 589 "middle_rec.m"
                                  {
#line 589 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__Rval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 584 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 590 "middle_rec.m"
                                    {
#line 590 "middle_rec.m"
                                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_115, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 590 "middle_rec.m"
                                      return;
                                    }
#line 589 "middle_rec.m"
                                  }
#line 521 "middle_rec.m"
                                else
#line 521 "middle_rec.m"
                                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 549 "middle_rec.m"
                                    {
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__MaybeRegionRval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__MaybeReuse_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_91_91;
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__Lval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__Rval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 549 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));

#line 550 "middle_rec.m"
                                      {
#line 550 "middle_rec.m"
                                        ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_102, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_91_91);
                                      }
#line 551 "middle_rec.m"
                                      {
#line 551 "middle_rec.m"
                                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_103, ll_backend__middle_rec__STATE_VARIABLE_Used_91_91, &ll_backend__middle_rec__STATE_VARIABLE_Used_92_92);
                                      }
#line 555 "middle_rec.m"
                                      if ((ll_backend__middle_rec__MaybeRegionRval_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "middle_rec.m"
                                        ll_backend__middle_rec__STATE_VARIABLE_Used_93_93 = ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
#line 555 "middle_rec.m"
                                      else
#line 553 "middle_rec.m"
                                        {
#line 553 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__RegionRval_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeRegionRval_39, (MR_Integer) 0)));

#line 554 "middle_rec.m"
                                          {
#line 554 "middle_rec.m"
                                            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__RegionRval_41, ll_backend__middle_rec__STATE_VARIABLE_Used_92_92, &ll_backend__middle_rec__STATE_VARIABLE_Used_93_93);
                                          }
#line 553 "middle_rec.m"
                                        }
#line 567 "middle_rec.m"
                                      if ((ll_backend__middle_rec__MaybeReuse_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "middle_rec.m"
                                        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
#line 567 "middle_rec.m"
                                      else
#line 559 "middle_rec.m"
                                        {
#line 559 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__ReuseRval_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 0)));
#line 559 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__MaybeFlagLval_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 1)));
#line 559 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;

#line 560 "middle_rec.m"
                                          {
#line 560 "middle_rec.m"
                                            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ReuseRval_42, ll_backend__middle_rec__STATE_VARIABLE_Used_93_93, &ll_backend__middle_rec__STATE_VARIABLE_Used_94_94);
                                          }
#line 564 "middle_rec.m"
                                          if ((ll_backend__middle_rec__MaybeFlagLval_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "middle_rec.m"
                                            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;
#line 564 "middle_rec.m"
                                          else
#line 562 "middle_rec.m"
                                            {
#line 562 "middle_rec.m"
                                              MR_Word ll_backend__middle_rec__FlagLval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeFlagLval_43, (MR_Integer) 0)));

#line 563 "middle_rec.m"
                                              {
#line 563 "middle_rec.m"
                                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__FlagLval_44, ll_backend__middle_rec__STATE_VARIABLE_Used_94_94, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 563 "middle_rec.m"
                                                return;
                                              }
#line 562 "middle_rec.m"
                                            }
#line 559 "middle_rec.m"
                                        }
#line 549 "middle_rec.m"
                                    }
#line 521 "middle_rec.m"
                                  else
#line 521 "middle_rec.m"
                                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 531 "middle_rec.m"
                                      *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
                                    else
#line 521 "middle_rec.m"
                                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 600 "middle_rec.m"
                                        {
#line 600 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__Lval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 597 "middle_rec.m"
                                          MR_Integer ll_backend__middle_rec__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 597 "middle_rec.m"
                                          MR_Integer ll_backend__middle_rec__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 601 "middle_rec.m"
                                          {
#line 601 "middle_rec.m"
                                            ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_116, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                                            return;
                                          }
#line 600 "middle_rec.m"
                                        }
#line 521 "middle_rec.m"
                                      else
#line 521 "middle_rec.m"
                                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 600 "middle_rec.m"
                                          {
#line 600 "middle_rec.m"
                                            MR_Word ll_backend__middle_rec__Lval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 599 "middle_rec.m"
                                            MR_Word ll_backend__middle_rec__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 601 "middle_rec.m"
                                            {
#line 601 "middle_rec.m"
                                              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_117, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                                              return;
                                            }
#line 600 "middle_rec.m"
                                          }
#line 521 "middle_rec.m"
                                        else
#line 521 "middle_rec.m"
                                          if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 545 "middle_rec.m"
                                            {
#line 545 "middle_rec.m"
                                              MR_Word ll_backend__middle_rec__Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 545 "middle_rec.m"
                                              MR_Word ll_backend__middle_rec__Rval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 545 "middle_rec.m"
                                              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_120;

#line 546 "middle_rec.m"
                                              {
#line 546 "middle_rec.m"
                                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_118, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_120);
                                              }
#line 547 "middle_rec.m"
                                              {
#line 547 "middle_rec.m"
                                                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_119, ll_backend__middle_rec__STATE_VARIABLE_Used_96_120, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 547 "middle_rec.m"
                                                return;
                                              }
#line 545 "middle_rec.m"
                                            }
#line 521 "middle_rec.m"
                                          else
#line 521 "middle_rec.m"
                                            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 524 "middle_rec.m"
                                              *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
                                            else
#line 521 "middle_rec.m"
                                              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 603 "middle_rec.m"
                                                {
#line 603 "middle_rec.m"
                                                  MR_Word ll_backend__middle_rec__LCLval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 603 "middle_rec.m"
                                                  MR_Integer ll_backend__middle_rec__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 604 "middle_rec.m"
                                                  {
#line 604 "middle_rec.m"
                                                    ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCLval_69, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 604 "middle_rec.m"
                                                    return;
                                                  }
#line 603 "middle_rec.m"
                                                }
#line 521 "middle_rec.m"
                                              else
#line 521 "middle_rec.m"
                                                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 614 "middle_rec.m"
                                                  {
#line 614 "middle_rec.m"
                                                    MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_77_77;
#line 614 "middle_rec.m"
                                                    MR_Word ll_backend__middle_rec__LCRval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 614 "middle_rec.m"
                                                    MR_Word ll_backend__middle_rec__LCSRval_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 615 "middle_rec.m"
                                                    {
#line 615 "middle_rec.m"
                                                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_111, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_77_77);
                                                    }
#line 616 "middle_rec.m"
                                                    {
#line 616 "middle_rec.m"
                                                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_112, ll_backend__middle_rec__STATE_VARIABLE_Used_77_77, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 616 "middle_rec.m"
                                                      return;
                                                    }
#line 614 "middle_rec.m"
                                                  }
#line 521 "middle_rec.m"
                                                else
#line 521 "middle_rec.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 610 "middle_rec.m"
                                                    {
#line 610 "middle_rec.m"
                                                      MR_Word ll_backend__middle_rec__LCSRval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 610 "middle_rec.m"
                                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_79_79;
#line 610 "middle_rec.m"
                                                      MR_Word ll_backend__middle_rec__LCRval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 610 "middle_rec.m"
                                                      MR_Word ll_backend__middle_rec__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 611 "middle_rec.m"
                                                      {
#line 611 "middle_rec.m"
                                                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_110, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_79_79);
                                                      }
#line 612 "middle_rec.m"
                                                      {
#line 612 "middle_rec.m"
                                                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_73, ll_backend__middle_rec__STATE_VARIABLE_Used_79_79, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 612 "middle_rec.m"
                                                        return;
                                                      }
#line 610 "middle_rec.m"
                                                    }
#line 521 "middle_rec.m"
                                                  else
#line 521 "middle_rec.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 606 "middle_rec.m"
                                                      {
#line 606 "middle_rec.m"
                                                        MR_Word ll_backend__middle_rec__LCRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 606 "middle_rec.m"
                                                        MR_Word ll_backend__middle_rec__LCSLval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 606 "middle_rec.m"
                                                        MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_81_81;
#line 606 "middle_rec.m"
                                                        MR_Word ll_backend__middle_rec__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 607 "middle_rec.m"
                                                        {
#line 607 "middle_rec.m"
                                                          ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_70, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_81_81);
                                                        }
#line 608 "middle_rec.m"
                                                        {
#line 608 "middle_rec.m"
                                                          ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCSLval_71, ll_backend__middle_rec__STATE_VARIABLE_Used_81_81, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 608 "middle_rec.m"
                                                          return;
                                                        }
#line 606 "middle_rec.m"
                                                      }
#line 521 "middle_rec.m"
                                                    else
#line 521 "middle_rec.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 522 "middle_rec.m"
                                                        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
                                                      else
#line 521 "middle_rec.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 600 "middle_rec.m"
                                                          {
#line 600 "middle_rec.m"
                                                            MR_Word ll_backend__middle_rec__Lval_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 601 "middle_rec.m"
                                                            {
#line 601 "middle_rec.m"
                                                              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_121, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                                                              return;
                                                            }
#line 600 "middle_rec.m"
                                                          }
#line 521 "middle_rec.m"
                                                        else
#line 521 "middle_rec.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 600 "middle_rec.m"
                                                            {
#line 600 "middle_rec.m"
                                                              MR_Word ll_backend__middle_rec__Lval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 601 "middle_rec.m"
                                                              {
#line 601 "middle_rec.m"
                                                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_122, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                                                                return;
                                                              }
#line 600 "middle_rec.m"
                                                            }
#line 521 "middle_rec.m"
                                                          else
#line 521 "middle_rec.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 523 "middle_rec.m"
                                                              *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
                                                            else
#line 521 "middle_rec.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 589 "middle_rec.m"
                                                                {
#line 589 "middle_rec.m"
                                                                  MR_Word ll_backend__middle_rec__Rval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 590 "middle_rec.m"
                                                                  {
#line 590 "middle_rec.m"
                                                                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_123, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 590 "middle_rec.m"
                                                                    return;
                                                                  }
#line 589 "middle_rec.m"
                                                                }
#line 521 "middle_rec.m"
                                                              else
#line 521 "middle_rec.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 527 "middle_rec.m"
                                                                  *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
                                                                else
#line 521 "middle_rec.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 572 "middle_rec.m"
                                                                    {
#line 572 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__IdRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 572 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__NumLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 572 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__AddrLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 572 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_88_88;
#line 572 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_89_89;
#line 571 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec___FillOp_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 571 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec___EmbeddedStackFrame_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 573 "middle_rec.m"
                                                                      {
#line 573 "middle_rec.m"
                                                                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__IdRval_46, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_88_88);
                                                                      }
#line 574 "middle_rec.m"
                                                                      {
#line 574 "middle_rec.m"
                                                                        ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__NumLval_47, ll_backend__middle_rec__STATE_VARIABLE_Used_88_88, &ll_backend__middle_rec__STATE_VARIABLE_Used_89_89);
                                                                      }
#line 575 "middle_rec.m"
                                                                      {
#line 575 "middle_rec.m"
                                                                        ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__AddrLval_48, ll_backend__middle_rec__STATE_VARIABLE_Used_89_89, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 575 "middle_rec.m"
                                                                        return;
                                                                      }
#line 572 "middle_rec.m"
                                                                    }
#line 521 "middle_rec.m"
                                                                  else
#line 521 "middle_rec.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 577 "middle_rec.m"
                                                                      {
#line 577 "middle_rec.m"
                                                                        MR_Word ll_backend__middle_rec__ValueRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 577 "middle_rec.m"
                                                                        MR_Word ll_backend__middle_rec___SetOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 577 "middle_rec.m"
                                                                        MR_Word ll_backend__middle_rec___EmbeddedStackFrame_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 578 "middle_rec.m"
                                                                        {
#line 578 "middle_rec.m"
                                                                          ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ValueRval_50, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 578 "middle_rec.m"
                                                                          return;
                                                                        }
#line 577 "middle_rec.m"
                                                                      }
#line 521 "middle_rec.m"
                                                                    else
#line 521 "middle_rec.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 589 "middle_rec.m"
                                                                        {
#line 589 "middle_rec.m"
                                                                          MR_Word ll_backend__middle_rec__Rval_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 587 "middle_rec.m"
                                                                          MR_Word ll_backend__middle_rec___Rsn_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 590 "middle_rec.m"
                                                                          {
#line 590 "middle_rec.m"
                                                                            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_124, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 590 "middle_rec.m"
                                                                            return;
                                                                          }
#line 589 "middle_rec.m"
                                                                        }
#line 521 "middle_rec.m"
                                                                      else
#line 521 "middle_rec.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 589 "middle_rec.m"
                                                                          {
#line 589 "middle_rec.m"
                                                                            MR_Word ll_backend__middle_rec__Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 590 "middle_rec.m"
                                                                            {
#line 590 "middle_rec.m"
                                                                              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_125, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 590 "middle_rec.m"
                                                                              return;
                                                                            }
#line 589 "middle_rec.m"
                                                                          }
#line 521 "middle_rec.m"
                                                                        else
#line 521 "middle_rec.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 600 "middle_rec.m"
                                                                            {
#line 600 "middle_rec.m"
                                                                              MR_Word ll_backend__middle_rec__Lval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 601 "middle_rec.m"
                                                                              {
#line 601 "middle_rec.m"
                                                                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_126, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                                                                                return;
                                                                              }
#line 600 "middle_rec.m"
                                                                            }
#line 521 "middle_rec.m"
                                                                          else
#line 521 "middle_rec.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 600 "middle_rec.m"
                                                                              {
#line 600 "middle_rec.m"
                                                                                MR_Word ll_backend__middle_rec__Lval_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 601 "middle_rec.m"
                                                                                {
#line 601 "middle_rec.m"
                                                                                  ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_127, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                                                                                  return;
                                                                                }
#line 600 "middle_rec.m"
                                                                              }
#line 521 "middle_rec.m"
                                                                            else
#line 521 "middle_rec.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 600 "middle_rec.m"
                                                                                {
#line 600 "middle_rec.m"
                                                                                  MR_Word ll_backend__middle_rec__Lval_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 601 "middle_rec.m"
                                                                                  {
#line 601 "middle_rec.m"
                                                                                    ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_128, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 601 "middle_rec.m"
                                                                                    return;
                                                                                  }
#line 600 "middle_rec.m"
                                                                                }
#line 521 "middle_rec.m"
                                                                              else
#line 528 "middle_rec.m"
                                                                                *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 521 "middle_rec.m"
  }
#line 516 "middle_rec.m"
}

#line 508 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
#line 508 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 508 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 508 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 508 "middle_rec.m"
{
#line 511 "middle_rec.m"
  while (MR_TRUE)
#line 511 "middle_rec.m"
    {
#line 511 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 511 "middle_rec.m"
      {
#line 511 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 511 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 511 "middle_rec.m"
        else
#line 512 "middle_rec.m"
          {
#line 512 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Uinstr_7;
#line 512 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 512 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 512 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;
#line 512 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_8_8;

#line 512 "middle_rec.m"
            ll_backend__middle_rec__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
#line 512 "middle_rec.m"
            ll_backend__middle_rec__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 1)));
#line 513 "middle_rec.m"
            {
#line 513 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_instr_3_p_0(ll_backend__middle_rec__Uinstr_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_14_14);
            }
#line 514 "middle_rec.m"
            /* direct tailcall eliminated */
#line 514 "middle_rec.m"
            {
#line 514 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_9;
#line 514 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;

#line 514 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 514 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 514 "middle_rec.m"
            }
#line 514 "middle_rec.m"
            continue;
#line 512 "middle_rec.m"
          }
#line 511 "middle_rec.m"
      }
#line 511 "middle_rec.m"
      break;
#line 511 "middle_rec.m"
    }
#line 508 "middle_rec.m"
}

#line 497 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_3_p_0(
#line 497 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 497 "middle_rec.m"
  MR_Integer ll_backend__middle_rec__N_2,
#line 497 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
#line 497 "middle_rec.m"
{
#line 499 "middle_rec.m"
  while (MR_TRUE)
#line 499 "middle_rec.m"
    {
#line 499 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 499 "middle_rec.m"
      {
#line 499 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 499 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "middle_rec.m"
          {
#line 499 "middle_rec.m"
            {
#line 499 "middle_rec.m"
              MR_Word base;
#line 499 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "middle_rec.m"
              *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 499 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 499 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__N_2));
#line 499 "middle_rec.m"
            }
#line 499 "middle_rec.m"
          }
#line 499 "middle_rec.m"
        else
#line 500 "middle_rec.m"
          {
#line 500 "middle_rec.m"
            MR_Integer ll_backend__middle_rec__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 500 "middle_rec.m"
            MR_Word ll_backend__middle_rec__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

#line 501 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__N_2 < ll_backend__middle_rec__H_6);
#line 503 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 502 "middle_rec.m"
              {
#line 502 "middle_rec.m"
                {
#line 502 "middle_rec.m"
                  MR_Word base;
#line 502 "middle_rec.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "middle_rec.m"
                  *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 502 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 502 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__N_2));
#line 502 "middle_rec.m"
                }
#line 502 "middle_rec.m"
              }
#line 503 "middle_rec.m"
            else
#line 504 "middle_rec.m"
              {
#line 504 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__N1_10 = (ll_backend__middle_rec__N_2 + (MR_Integer) 1);

#line 505 "middle_rec.m"
                /* direct tailcall eliminated */
#line 505 "middle_rec.m"
                {
#line 505 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__T_7;
#line 505 "middle_rec.m"
                  MR_Integer ll_backend__middle_rec__N__tmp_copy_2 = ll_backend__middle_rec__N1_10;

#line 505 "middle_rec.m"
                  ll_backend__middle_rec__N_2 = ll_backend__middle_rec__N__tmp_copy_2;
#line 505 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 505 "middle_rec.m"
                }
#line 505 "middle_rec.m"
                continue;
#line 504 "middle_rec.m"
              }
#line 500 "middle_rec.m"
          }
#line 499 "middle_rec.m"
      }
#line 499 "middle_rec.m"
      break;
#line 499 "middle_rec.m"
    }
#line 497 "middle_rec.m"
}

#line 488 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
#line 488 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 488 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__UnusedReg_4)
#line 488 "middle_rec.m"
{
#line 491 "middle_rec.m"
  {
#line 491 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 491 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 491 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Used0_5;
#line 491 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Used1_6;
#line 491 "middle_rec.m"
    MR_Word ll_backend__middle_rec__UsedList_7;

#line 492 "middle_rec.m"
    {
#line 492 "middle_rec.m"
      mercury__set__init_1_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, &ll_backend__middle_rec__Used0_5);
    }
#line 493 "middle_rec.m"
    {
#line 493 "middle_rec.m"
      ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_3, ll_backend__middle_rec__Used0_5, &ll_backend__middle_rec__Used1_6);
    }
#line 494 "middle_rec.m"
    {
#line 494 "middle_rec.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, ll_backend__middle_rec__Used1_6, &ll_backend__middle_rec__UsedList_7);
    }
#line 495 "middle_rec.m"
    {
#line 495 "middle_rec.m"
      ll_backend__middle_rec__find_unused_register_2_3_p_0(ll_backend__middle_rec__UsedList_7, (MR_Integer) 1, ll_backend__middle_rec__UnusedReg_4);
#line 495 "middle_rec.m"
      return;
    }
#line 491 "middle_rec.m"
  }
#line 488 "middle_rec.m"
}

#line 473 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
#line 473 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 473 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
#line 473 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
#line 473 "middle_rec.m"
{
#line 476 "middle_rec.m"
  {
#line 476 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 476 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "middle_rec.m"
      *ll_backend__middle_rec__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "middle_rec.m"
    else
#line 477 "middle_rec.m"
      {
#line 477 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 477 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr_8;
#line 477 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs_9;
#line 481 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Lives0_10;
#line 481 "middle_rec.m"
        MR_String ll_backend__middle_rec__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 1)));
#line 478 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 0)));

#line 478 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_13_13)) == (MR_mktag((MR_Integer) 2)));
#line 478 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 478 "middle_rec.m"
          {
#line 478 "middle_rec.m"
            ll_backend__middle_rec__Lives0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
#line 479 "middle_rec.m"
            {
#line 479 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lives_12;
#line 479 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_14_14;

#line 479 "middle_rec.m"
              {
#line 479 "middle_rec.m"
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__middle_rec__HeadVar__2_2)), ll_backend__middle_rec__Lives0_10, &ll_backend__middle_rec__Lives_12);
              }
#line 480 "middle_rec.m"
              {
#line 480 "middle_rec.m"
                ll_backend__middle_rec__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "middle_rec.m"
                MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_14_14, 0) = ((MR_Box) (ll_backend__middle_rec__Lives_12));
#line 480 "middle_rec.m"
              }
#line 480 "middle_rec.m"
              {
#line 480 "middle_rec.m"
                ll_backend__middle_rec__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 0) = ((MR_Box) (ll_backend__middle_rec__V_14_14));
#line 480 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 1) = ((MR_Box) (ll_backend__middle_rec__Comment_11));
#line 480 "middle_rec.m"
              }
#line 479 "middle_rec.m"
            }
#line 478 "middle_rec.m"
          }
#line 478 "middle_rec.m"
        else
#line 482 "middle_rec.m"
          ll_backend__middle_rec__Instr_8 = ll_backend__middle_rec__Instr0_5;
#line 484 "middle_rec.m"
        {
#line 484 "middle_rec.m"
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__Instrs0_6, ll_backend__middle_rec__HeadVar__2_2, &ll_backend__middle_rec__Instrs_9);
        }
#line 477 "middle_rec.m"
        {
#line 477 "middle_rec.m"
          MR_Word base;
#line 477 "middle_rec.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "middle_rec.m"
          *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 477 "middle_rec.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr_8));
#line 477 "middle_rec.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs_9));
#line 477 "middle_rec.m"
        }
#line 477 "middle_rec.m"
      }
#line 476 "middle_rec.m"
  }
#line 473 "middle_rec.m"
}

#line 449 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
#line 449 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 449 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Before_2,
#line 449 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__After_3)
#line 449 "middle_rec.m"
{
#line 452 "middle_rec.m"
  {
#line 452 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 452 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "middle_rec.m"
      {
#line 453 "middle_rec.m"
        {
#line 453 "middle_rec.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "did not find call");
#line 453 "middle_rec.m"
          return;
        }
#line 452 "middle_rec.m"
      }
#line 452 "middle_rec.m"
    else
#line 454 "middle_rec.m"
      {
#line 454 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 454 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 455 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
#line 455 "middle_rec.m"
        MR_String ll_backend__middle_rec__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
#line 455 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_13_13;
#line 455 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_14_14;
#line 455 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_15_15;
#line 455 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_16_16;
#line 455 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_17_17;
#line 455 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_18_18;

#line 455 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 455 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 455 "middle_rec.m"
          {
#line 455 "middle_rec.m"
            ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 1)));
#line 455 "middle_rec.m"
            ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 2)));
#line 455 "middle_rec.m"
            ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 3)));
#line 455 "middle_rec.m"
            ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 4)));
#line 455 "middle_rec.m"
            ll_backend__middle_rec__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 5)));
#line 455 "middle_rec.m"
            ll_backend__middle_rec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 6)));
#line 463 "middle_rec.m"
            {
#line 463 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs3_22;
#line 457 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs2_20;
#line 457 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instr2_21;
#line 457 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_27_27;
#line 459 "middle_rec.m"
              MR_String ll_backend__middle_rec__V_24_24;
#line 459 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_23_23;

#line 457 "middle_rec.m"
              {
#line 457 "middle_rec.m"
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Instrs2_20);
              }
#line 458 "middle_rec.m"
              ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Instrs2_20)) == (MR_mktag((MR_Integer) 1)));
#line 458 "middle_rec.m"
              if (ll_backend__middle_rec__succeeded)
#line 458 "middle_rec.m"
                {
#line 458 "middle_rec.m"
                  ll_backend__middle_rec__Instr2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 0)));
#line 458 "middle_rec.m"
                  ll_backend__middle_rec__Instrs3_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 1)));
#line 459 "middle_rec.m"
                  ll_backend__middle_rec__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 0)));
#line 459 "middle_rec.m"
                  ll_backend__middle_rec__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 1)));
#line 459 "middle_rec.m"
                  ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 459 "middle_rec.m"
                  if (ll_backend__middle_rec__succeeded)
#line 459 "middle_rec.m"
                    ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 1)));
#line 458 "middle_rec.m"
                }
#line 463 "middle_rec.m"
              if (ll_backend__middle_rec__succeeded)
#line 461 "middle_rec.m"
                {
#line 461 "middle_rec.m"
                  *ll_backend__middle_rec__Before_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "middle_rec.m"
                  *ll_backend__middle_rec__After_3 = ll_backend__middle_rec__Instrs3_22;
#line 461 "middle_rec.m"
                }
#line 463 "middle_rec.m"
              else
#line 464 "middle_rec.m"
                {
#line 464 "middle_rec.m"
                  {
#line 464 "middle_rec.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "call not followed by label");
#line 464 "middle_rec.m"
                    return;
                  }
#line 464 "middle_rec.m"
                }
#line 463 "middle_rec.m"
            }
#line 455 "middle_rec.m"
          }
#line 455 "middle_rec.m"
        else
#line 467 "middle_rec.m"
          {
#line 467 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Before1_25;

#line 467 "middle_rec.m"
            {
#line 467 "middle_rec.m"
              ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Before1_25, ll_backend__middle_rec__After_3);
            }
#line 468 "middle_rec.m"
            {
#line 468 "middle_rec.m"
              MR_Word base;
#line 468 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "middle_rec.m"
              *ll_backend__middle_rec__Before_2 = base;
#line 468 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
#line 468 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Before1_25));
#line 468 "middle_rec.m"
            }
#line 467 "middle_rec.m"
          }
#line 454 "middle_rec.m"
      }
#line 452 "middle_rec.m"
  }
#line 449 "middle_rec.m"
}

#line 424 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
#line 424 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 424 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Target_2,
#line 424 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_3)
#line 424 "middle_rec.m"
{
#line 427 "middle_rec.m"
  {
#line 427 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 427 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "middle_rec.m"
      {
#line 428 "middle_rec.m"
        {
#line 428 "middle_rec.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "empty list");
#line 428 "middle_rec.m"
          return;
        }
#line 427 "middle_rec.m"
      }
#line 427 "middle_rec.m"
    else
#line 429 "middle_rec.m"
      {
#line 429 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 429 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 442 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Test_13;
#line 430 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
#line 430 "middle_rec.m"
        MR_String ll_backend__middle_rec___Comment_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
#line 430 "middle_rec.m"
        MR_Word ll_backend__middle_rec___OldTarget_14;

#line 430 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 430 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 430 "middle_rec.m"
          {
#line 430 "middle_rec.m"
            ll_backend__middle_rec__Test_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 1)));
#line 430 "middle_rec.m"
            ll_backend__middle_rec___OldTarget_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 2)));
#line 436 "middle_rec.m"
            {
#line 436 "middle_rec.m"
              MR_Word ll_backend__middle_rec__NewTest_18;
#line 436 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_24_24;
#line 436 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_25_25;
#line 436 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_26_26;

#line 433 "middle_rec.m"
              if ((ll_backend__middle_rec__Instrs0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "middle_rec.m"
                {
#line 432 "middle_rec.m"
                }
#line 433 "middle_rec.m"
              else
#line 434 "middle_rec.m"
                {
#line 435 "middle_rec.m"
                  {
#line 435 "middle_rec.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "if_val followed by other instructions");
#line 435 "middle_rec.m"
                    return;
                  }
#line 434 "middle_rec.m"
                }
#line 437 "middle_rec.m"
              {
#line 437 "middle_rec.m"
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__middle_rec__Test_13, &ll_backend__middle_rec__NewTest_18);
              }
#line 439 "middle_rec.m"
              {
#line 439 "middle_rec.m"
                ll_backend__middle_rec__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 439 "middle_rec.m"
                MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, 0) = ((MR_Box) (ll_backend__middle_rec__Target_2));
#line 439 "middle_rec.m"
              }
#line 439 "middle_rec.m"
              {
#line 439 "middle_rec.m"
                ll_backend__middle_rec__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 439 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 439 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 1) = ((MR_Box) (ll_backend__middle_rec__NewTest_18));
#line 439 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 2) = ((MR_Box) (ll_backend__middle_rec__V_26_26));
#line 439 "middle_rec.m"
              }
#line 439 "middle_rec.m"
              {
#line 439 "middle_rec.m"
                ll_backend__middle_rec__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 0) = ((MR_Box) (ll_backend__middle_rec__V_25_25));
#line 439 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 1) = ((MR_Box) ((MR_String) "test on downward loop"));
#line 439 "middle_rec.m"
              }
#line 441 "middle_rec.m"
              {
#line 441 "middle_rec.m"
                MR_Word base;
#line 441 "middle_rec.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "middle_rec.m"
                *ll_backend__middle_rec__Instrs_3 = base;
#line 441 "middle_rec.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__V_24_24));
#line 441 "middle_rec.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "middle_rec.m"
              }
#line 436 "middle_rec.m"
            }
#line 430 "middle_rec.m"
          }
#line 430 "middle_rec.m"
        else
#line 443 "middle_rec.m"
          {
#line 443 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs1_19;

#line 443 "middle_rec.m"
            {
#line 443 "middle_rec.m"
              ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__Instrs0_10, ll_backend__middle_rec__Target_2, &ll_backend__middle_rec__Instrs1_19);
            }
#line 444 "middle_rec.m"
            {
#line 444 "middle_rec.m"
              MR_Word base;
#line 444 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "middle_rec.m"
              *ll_backend__middle_rec__Instrs_3 = base;
#line 444 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
#line 444 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs1_19));
#line 444 "middle_rec.m"
            }
#line 443 "middle_rec.m"
          }
#line 429 "middle_rec.m"
      }
#line 427 "middle_rec.m"
  }
#line 424 "middle_rec.m"
}

#line 242 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_8_p_0(
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Var_9,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__BaseConsId_10,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Base_11,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Recursive_12,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_13,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Code_14,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_66,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_67)
#line 242 "middle_rec.m"
{
#line 247 "middle_rec.m"
  {
#line 247 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TypeCtorInfo_238_238;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__StackSlots_16;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__VarSet_17;
#line 247 "middle_rec.m"
    MR_String ll_backend__middle_rec__SlotsComment_18;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ModuleInfo_19;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__PredId_20;
#line 247 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__ProcId_21;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryLabel_22;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__VarType_23;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__CheaperTagTest_24;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseLabel_25;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryTestCode_26;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryTestInstrs_27;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__StoreMap_28;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BranchStart_29;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseGoalCode_30;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeEnd1_31;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseSaveCode_32;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecGoalCode_33;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeEnd_34;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecSaveCode_35;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ArgModes_36;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__HeadVars_37;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Args_38;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__LiveArgs_39;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EpilogCode_40;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseCode_41;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecCode_42;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__LiveValCode_43;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseInstrs_44;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecInstrs_45;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AvoidInstrs_46;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AuxReg_47;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BeforeInstrs0_48;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AfterInstrs_49;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BeforeInstrs_50;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop1Label_51;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop2Label_52;
#line 247 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__FrameSize0_53;
#line 247 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__FrameSize_54;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop1Test_55;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeIncrSp_56;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeDecrSp_57;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__InitAuxReg_58;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__IncrAuxReg_59;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__DecrAuxReg_60;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TestAuxReg_61;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_70_70;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_72_72;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_74_74;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_76_76;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_77_77;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_79_79;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_80_80;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_81_81;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_82_82;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_83_83;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_84_84;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_85_85;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_86_86;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_87_87;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_89_89;
#line 247 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_90_90;

#line 248 "middle_rec.m"
    {
#line 248 "middle_rec.m"
      ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__StackSlots_16);
    }
#line 249 "middle_rec.m"
    {
#line 249 "middle_rec.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__VarSet_17);
    }
#line 250 "middle_rec.m"
    {
#line 250 "middle_rec.m"
      ll_backend__middle_rec__SlotsComment_18 = hlds__hlds_llds__explain_stack_slots_2_f_0(ll_backend__middle_rec__StackSlots_16, ll_backend__middle_rec__VarSet_17);
    }
#line 251 "middle_rec.m"
    {
#line 251 "middle_rec.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__ModuleInfo_19);
    }
#line 252 "middle_rec.m"
    {
#line 252 "middle_rec.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__PredId_20);
    }
#line 253 "middle_rec.m"
    {
#line 253 "middle_rec.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__ProcId_21);
    }
#line 254 "middle_rec.m"
    {
#line 254 "middle_rec.m"
      ll_backend__middle_rec__EntryLabel_22 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__middle_rec__ModuleInfo_19, ll_backend__middle_rec__PredId_20, ll_backend__middle_rec__ProcId_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 256 "middle_rec.m"
    {
#line 256 "middle_rec.m"
      ll_backend__code_info__pre_goal_update_4_p_0(ll_backend__middle_rec__SwitchGoalInfo_13, (MR_Integer) 0, ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__STATE_VARIABLE_CI_70_70);
    }
#line 257 "middle_rec.m"
    {
#line 257 "middle_rec.m"
      ll_backend__middle_rec__VarType_23 = ll_backend__code_info__variable_type_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_70_70, ll_backend__middle_rec__Var_9);
    }
#line 258 "middle_rec.m"
    {
#line 258 "middle_rec.m"
      ll_backend__middle_rec__CheaperTagTest_24 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_70_70, ll_backend__middle_rec__VarType_23);
    }
#line 259 "middle_rec.m"
    {
#line 259 "middle_rec.m"
      ll_backend__unify_gen__generate_tag_test_8_p_0(ll_backend__middle_rec__Var_9, ll_backend__middle_rec__BaseConsId_10, ll_backend__middle_rec__CheaperTagTest_24, (MR_Integer) 0, &ll_backend__middle_rec__BaseLabel_25, &ll_backend__middle_rec__EntryTestCode_26, ll_backend__middle_rec__STATE_VARIABLE_CI_70_70, &ll_backend__middle_rec__STATE_VARIABLE_CI_72_72);
    }
#line 3021 "ll_backend.middle_rec.c"
    ll_backend__middle_rec__TypeCtorInfo_238_238 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 261 "middle_rec.m"
    {
#line 261 "middle_rec.m"
      ll_backend__middle_rec__EntryTestInstrs_27 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__EntryTestCode_26);
    }
#line 263 "middle_rec.m"
    {
#line 263 "middle_rec.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__middle_rec__SwitchGoalInfo_13, &ll_backend__middle_rec__StoreMap_28);
    }
#line 264 "middle_rec.m"
    {
#line 264 "middle_rec.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_72_72, &ll_backend__middle_rec__BranchStart_29);
    }
#line 265 "middle_rec.m"
    {
#line 265 "middle_rec.m"
      ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 0, ll_backend__middle_rec__Base_11, &ll_backend__middle_rec__BaseGoalCode_30, ll_backend__middle_rec__STATE_VARIABLE_CI_72_72, &ll_backend__middle_rec__STATE_VARIABLE_CI_74_74);
    }
#line 266 "middle_rec.m"
    {
#line 266 "middle_rec.m"
      ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__middle_rec__MaybeEnd1_31, &ll_backend__middle_rec__BaseSaveCode_32, ll_backend__middle_rec__STATE_VARIABLE_CI_74_74, &ll_backend__middle_rec__STATE_VARIABLE_CI_76_76);
    }
#line 267 "middle_rec.m"
    {
#line 267 "middle_rec.m"
      ll_backend__code_info__reset_to_position_3_p_0(ll_backend__middle_rec__BranchStart_29, ll_backend__middle_rec__STATE_VARIABLE_CI_76_76, &ll_backend__middle_rec__STATE_VARIABLE_CI_77_77);
    }
#line 268 "middle_rec.m"
    {
#line 268 "middle_rec.m"
      ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 0, ll_backend__middle_rec__Recursive_12, &ll_backend__middle_rec__RecGoalCode_33, ll_backend__middle_rec__STATE_VARIABLE_CI_77_77, &ll_backend__middle_rec__STATE_VARIABLE_CI_79_79);
    }
#line 269 "middle_rec.m"
    {
#line 269 "middle_rec.m"
      ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_28, ll_backend__middle_rec__MaybeEnd1_31, &ll_backend__middle_rec__MaybeEnd_34, &ll_backend__middle_rec__RecSaveCode_35, ll_backend__middle_rec__STATE_VARIABLE_CI_79_79, &ll_backend__middle_rec__STATE_VARIABLE_CI_80_80);
    }
#line 271 "middle_rec.m"
    {
#line 271 "middle_rec.m"
      ll_backend__code_info__post_goal_update_3_p_0(ll_backend__middle_rec__SwitchGoalInfo_13, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, &ll_backend__middle_rec__STATE_VARIABLE_CI_81_81);
    }
#line 272 "middle_rec.m"
    {
#line 272 "middle_rec.m"
      ll_backend__code_info__after_all_branches_4_p_0(ll_backend__middle_rec__StoreMap_28, ll_backend__middle_rec__MaybeEnd_34, ll_backend__middle_rec__STATE_VARIABLE_CI_81_81, &ll_backend__middle_rec__STATE_VARIABLE_CI_82_82);
    }
#line 274 "middle_rec.m"
    {
#line 274 "middle_rec.m"
      ll_backend__middle_rec__ArgModes_36 = ll_backend__code_info__get_arginfo_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_82_82);
    }
#line 275 "middle_rec.m"
    {
#line 275 "middle_rec.m"
      ll_backend__middle_rec__HeadVars_37 = ll_backend__code_info__get_headvars_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_82_82);
    }
#line 276 "middle_rec.m"
    {
#line 276 "middle_rec.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__middle_rec_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__middle_rec__HeadVars_37, ll_backend__middle_rec__ArgModes_36, &ll_backend__middle_rec__Args_38);
    }
#line 277 "middle_rec.m"
    {
#line 277 "middle_rec.m"
      ll_backend__code_info__setup_return_5_p_0(ll_backend__middle_rec__Args_38, &ll_backend__middle_rec__LiveArgs_39, &ll_backend__middle_rec__EpilogCode_40, ll_backend__middle_rec__STATE_VARIABLE_CI_82_82, &ll_backend__middle_rec__STATE_VARIABLE_CI_83_83);
    }
#line 279 "middle_rec.m"
    {
#line 279 "middle_rec.m"
      ll_backend__middle_rec__V_84_84 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseSaveCode_32, ll_backend__middle_rec__EpilogCode_40);
    }
#line 279 "middle_rec.m"
    {
#line 279 "middle_rec.m"
      ll_backend__middle_rec__BaseCode_41 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseGoalCode_30, ll_backend__middle_rec__V_84_84);
    }
#line 280 "middle_rec.m"
    {
#line 280 "middle_rec.m"
      ll_backend__middle_rec__V_85_85 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__RecSaveCode_35, ll_backend__middle_rec__EpilogCode_40);
    }
#line 280 "middle_rec.m"
    {
#line 280 "middle_rec.m"
      ll_backend__middle_rec__RecCode_42 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__RecGoalCode_33, ll_backend__middle_rec__V_85_85);
    }
#line 282 "middle_rec.m"
    {
#line 282 "middle_rec.m"
      ll_backend__middle_rec__V_87_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "middle_rec.m"
      MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_87_87, 0) = ((MR_Box) (ll_backend__middle_rec__LiveArgs_39));
#line 282 "middle_rec.m"
    }
#line 282 "middle_rec.m"
    {
#line 282 "middle_rec.m"
      ll_backend__middle_rec__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "middle_rec.m"
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_86_86, 0) = ((MR_Box) (ll_backend__middle_rec__V_87_87));
#line 282 "middle_rec.m"
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_86_86, 1) = ((MR_Box) ((MR_String) ""));
#line 282 "middle_rec.m"
    }
#line 281 "middle_rec.m"
    {
#line 281 "middle_rec.m"
      ll_backend__middle_rec__LiveValCode_43 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_86_86)));
    }
#line 285 "middle_rec.m"
    {
#line 285 "middle_rec.m"
      ll_backend__middle_rec__BaseInstrs_44 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseCode_41);
    }
#line 286 "middle_rec.m"
    {
#line 286 "middle_rec.m"
      ll_backend__middle_rec__RecInstrs_45 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__RecCode_42);
    }
#line 292 "middle_rec.m"
    {
#line 292 "middle_rec.m"
      ll_backend__middle_rec__V_89_89 = ll_backend__opt_util__block_refers_to_stack_1_f_0(ll_backend__middle_rec__BaseInstrs_44);
    }
#line 292 "middle_rec.m"
    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_89_89 == (MR_Integer) 0);
#line 247 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 247 "middle_rec.m"
      {
#line 294 "middle_rec.m"
        {
#line 294 "middle_rec.m"
          ll_backend__middle_rec__AvoidInstrs_46 = mercury__list__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseInstrs_44, ll_backend__middle_rec__RecInstrs_45);
        }
#line 295 "middle_rec.m"
        {
#line 295 "middle_rec.m"
          ll_backend__middle_rec__find_unused_register_2_p_0(ll_backend__middle_rec__AvoidInstrs_46, &ll_backend__middle_rec__AuxReg_47);
        }
#line 297 "middle_rec.m"
        {
#line 297 "middle_rec.m"
          ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__RecInstrs_45, &ll_backend__middle_rec__BeforeInstrs0_48, &ll_backend__middle_rec__AfterInstrs_49);
        }
#line 298 "middle_rec.m"
        {
#line 298 "middle_rec.m"
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__BeforeInstrs0_48, ll_backend__middle_rec__AuxReg_47, &ll_backend__middle_rec__BeforeInstrs_50);
        }
#line 300 "middle_rec.m"
        {
#line 300 "middle_rec.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop1Label_51, ll_backend__middle_rec__STATE_VARIABLE_CI_83_83, &ll_backend__middle_rec__STATE_VARIABLE_CI_90_90);
        }
#line 301 "middle_rec.m"
        {
#line 301 "middle_rec.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop2Label_52, ll_backend__middle_rec__STATE_VARIABLE_CI_90_90, ll_backend__middle_rec__STATE_VARIABLE_CI_67);
        }
#line 302 "middle_rec.m"
        {
#line 302 "middle_rec.m"
          ll_backend__code_info__get_total_stackslot_count_2_p_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_67, &ll_backend__middle_rec__FrameSize0_53);
        }
#line 303 "middle_rec.m"
        {
#line 303 "middle_rec.m"
          ll_backend__middle_rec__FrameSize_54 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_67, ll_backend__middle_rec__FrameSize0_53);
        }
#line 305 "middle_rec.m"
        {
#line 305 "middle_rec.m"
          ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__EntryTestInstrs_27, ll_backend__middle_rec__Loop1Label_51, &ll_backend__middle_rec__Loop1Test_55);
        }
#line 307 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__FrameSize_54 == (MR_Integer) 0);
#line 332 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 308 "middle_rec.m"
          {
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_92_92;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_93_93;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_94_94;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_98_98;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_99_99;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_100_100;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_102_102;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_103_103;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_107_107;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_108_108;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_109_109;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_116_116;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_117_117;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_118_118;
#line 308 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_124_124;

#line 308 "middle_rec.m"
            {
#line 308 "middle_rec.m"
              ll_backend__middle_rec__MaybeIncrSp_56 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238);
            }
#line 309 "middle_rec.m"
            {
#line 309 "middle_rec.m"
              ll_backend__middle_rec__MaybeDecrSp_57 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238);
            }
#line 311 "middle_rec.m"
            ll_backend__middle_rec__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[1]);
#line 311 "middle_rec.m"
            {
#line 311 "middle_rec.m"
              ll_backend__middle_rec__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 311 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_93_93, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 311 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_93_93, 2) = ((MR_Box) (ll_backend__middle_rec__V_94_94));
#line 311 "middle_rec.m"
            }
#line 311 "middle_rec.m"
            {
#line 311 "middle_rec.m"
              ll_backend__middle_rec__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 0) = ((MR_Box) (ll_backend__middle_rec__V_93_93));
#line 311 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
#line 311 "middle_rec.m"
            }
#line 310 "middle_rec.m"
            {
#line 310 "middle_rec.m"
              ll_backend__middle_rec__InitAuxReg_58 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_92_92)));
            }
#line 317 "middle_rec.m"
            {
#line 317 "middle_rec.m"
              ll_backend__middle_rec__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 317 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_102_102, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 317 "middle_rec.m"
            }
#line 317 "middle_rec.m"
            ll_backend__middle_rec__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[2]);
#line 317 "middle_rec.m"
            {
#line 317 "middle_rec.m"
              ll_backend__middle_rec__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 317 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 317 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_100_100, 2) = ((MR_Box) (ll_backend__middle_rec__V_102_102));
#line 317 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_100_100, 3) = ((MR_Box) (ll_backend__middle_rec__V_103_103));
#line 317 "middle_rec.m"
            }
#line 316 "middle_rec.m"
            {
#line 316 "middle_rec.m"
              ll_backend__middle_rec__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 316 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 316 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 316 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 2) = ((MR_Box) (ll_backend__middle_rec__V_100_100));
#line 316 "middle_rec.m"
            }
#line 315 "middle_rec.m"
            {
#line 315 "middle_rec.m"
              ll_backend__middle_rec__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 0) = ((MR_Box) (ll_backend__middle_rec__V_99_99));
#line 315 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
#line 315 "middle_rec.m"
            }
#line 314 "middle_rec.m"
            {
#line 314 "middle_rec.m"
              ll_backend__middle_rec__IncrAuxReg_59 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_98_98)));
            }
#line 323 "middle_rec.m"
            {
#line 323 "middle_rec.m"
              ll_backend__middle_rec__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 323 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 323 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 323 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_109_109, 2) = ((MR_Box) (ll_backend__middle_rec__V_102_102));
#line 323 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_109_109, 3) = ((MR_Box) (ll_backend__middle_rec__V_103_103));
#line 323 "middle_rec.m"
            }
#line 322 "middle_rec.m"
            {
#line 322 "middle_rec.m"
              ll_backend__middle_rec__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 322 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_108_108, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 322 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_108_108, 2) = ((MR_Box) (ll_backend__middle_rec__V_109_109));
#line 322 "middle_rec.m"
            }
#line 321 "middle_rec.m"
            {
#line 321 "middle_rec.m"
              ll_backend__middle_rec__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_107_107, 0) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
#line 321 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_107_107, 1) = ((MR_Box) ((MR_String) "decrement loop counter"));
#line 321 "middle_rec.m"
            }
#line 320 "middle_rec.m"
            {
#line 320 "middle_rec.m"
              ll_backend__middle_rec__DecrAuxReg_60 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_107_107)));
            }
#line 328 "middle_rec.m"
            {
#line 328 "middle_rec.m"
              ll_backend__middle_rec__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_118_118, 2) = ((MR_Box) (ll_backend__middle_rec__V_102_102));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_118_118, 3) = ((MR_Box) (ll_backend__middle_rec__V_94_94));
#line 328 "middle_rec.m"
            }
#line 329 "middle_rec.m"
            {
#line 329 "middle_rec.m"
              ll_backend__middle_rec__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 329 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_124_124, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_52));
#line 329 "middle_rec.m"
            }
#line 328 "middle_rec.m"
            {
#line 328 "middle_rec.m"
              ll_backend__middle_rec__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_117_117, 1) = ((MR_Box) (ll_backend__middle_rec__V_118_118));
#line 328 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_117_117, 2) = ((MR_Box) (ll_backend__middle_rec__V_124_124));
#line 328 "middle_rec.m"
            }
#line 327 "middle_rec.m"
            {
#line 327 "middle_rec.m"
              ll_backend__middle_rec__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_116_116, 0) = ((MR_Box) (ll_backend__middle_rec__V_117_117));
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_116_116, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
#line 327 "middle_rec.m"
            }
#line 326 "middle_rec.m"
            {
#line 326 "middle_rec.m"
              ll_backend__middle_rec__TestAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_116_116)));
            }
#line 308 "middle_rec.m"
          }
#line 332 "middle_rec.m"
        else
#line 333 "middle_rec.m"
          {
#line 333 "middle_rec.m"
            MR_String ll_backend__middle_rec__PushMsg_62;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_126_126;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_127_127;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_130_130;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_131_131;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_133_133;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_134_134;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_135_135;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_138_138;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_139_139;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_140_140;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_144_144;
#line 333 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_145_145;

#line 333 "middle_rec.m"
            {
#line 333 "middle_rec.m"
              ll_backend__middle_rec__PushMsg_62 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__middle_rec__ModuleInfo_19, ll_backend__middle_rec__PredId_20, ll_backend__middle_rec__ProcId_21);
            }
#line 335 "middle_rec.m"
            {
#line 335 "middle_rec.m"
              ll_backend__middle_rec__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 335 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
#line 335 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_127_127, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_54));
#line 335 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_127_127, 2) = ((MR_Box) (ll_backend__middle_rec__PushMsg_62));
#line 335 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_127_127, 3) = ((MR_Box) ((MR_Integer) 1));
#line 335 "middle_rec.m"
            }
#line 335 "middle_rec.m"
            {
#line 335 "middle_rec.m"
              ll_backend__middle_rec__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_126_126, 0) = ((MR_Box) (ll_backend__middle_rec__V_127_127));
#line 335 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_126_126, 1) = ((MR_Box) ((MR_String) ""));
#line 335 "middle_rec.m"
            }
#line 334 "middle_rec.m"
            {
#line 334 "middle_rec.m"
              ll_backend__middle_rec__MaybeIncrSp_56 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_126_126)));
            }
#line 338 "middle_rec.m"
            {
#line 338 "middle_rec.m"
              ll_backend__middle_rec__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_131_131, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_54));
#line 338 "middle_rec.m"
            }
#line 338 "middle_rec.m"
            {
#line 338 "middle_rec.m"
              ll_backend__middle_rec__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_130_130, 0) = ((MR_Box) (ll_backend__middle_rec__V_131_131));
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_130_130, 1) = ((MR_Box) ((MR_String) ""));
#line 338 "middle_rec.m"
            }
#line 337 "middle_rec.m"
            {
#line 337 "middle_rec.m"
              ll_backend__middle_rec__MaybeDecrSp_57 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_130_130)));
            }
#line 341 "middle_rec.m"
            ll_backend__middle_rec__V_135_135 = (MR_Word) &ll_backend__middle_rec_scalar_common_2[2];
#line 341 "middle_rec.m"
            {
#line 341 "middle_rec.m"
              ll_backend__middle_rec__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 341 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 341 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_134_134, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 341 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_134_134, 2) = ((MR_Box) (ll_backend__middle_rec__V_135_135));
#line 341 "middle_rec.m"
            }
#line 341 "middle_rec.m"
            {
#line 341 "middle_rec.m"
              ll_backend__middle_rec__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_133_133, 0) = ((MR_Box) (ll_backend__middle_rec__V_134_134));
#line 341 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_133_133, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
#line 341 "middle_rec.m"
            }
#line 340 "middle_rec.m"
            {
#line 340 "middle_rec.m"
              ll_backend__middle_rec__InitAuxReg_58 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_133_133)));
            }
#line 343 "middle_rec.m"
            {
#line 343 "middle_rec.m"
              ll_backend__middle_rec__IncrAuxReg_59 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238);
            }
#line 344 "middle_rec.m"
            {
#line 344 "middle_rec.m"
              ll_backend__middle_rec__DecrAuxReg_60 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238);
            }
#line 346 "middle_rec.m"
            {
#line 346 "middle_rec.m"
              ll_backend__middle_rec__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_144_144, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 346 "middle_rec.m"
            }
#line 346 "middle_rec.m"
            {
#line 346 "middle_rec.m"
              ll_backend__middle_rec__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 2) = ((MR_Box) (ll_backend__middle_rec__V_135_135));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 3) = ((MR_Box) (ll_backend__middle_rec__V_144_144));
#line 346 "middle_rec.m"
            }
#line 347 "middle_rec.m"
            {
#line 347 "middle_rec.m"
              ll_backend__middle_rec__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_145_145, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_52));
#line 347 "middle_rec.m"
            }
#line 346 "middle_rec.m"
            {
#line 346 "middle_rec.m"
              ll_backend__middle_rec__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_139_139, 1) = ((MR_Box) (ll_backend__middle_rec__V_140_140));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_139_139, 2) = ((MR_Box) (ll_backend__middle_rec__V_145_145));
#line 346 "middle_rec.m"
            }
#line 346 "middle_rec.m"
            {
#line 346 "middle_rec.m"
              ll_backend__middle_rec__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_138_138, 0) = ((MR_Box) (ll_backend__middle_rec__V_139_139));
#line 346 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_138_138, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
#line 346 "middle_rec.m"
            }
#line 345 "middle_rec.m"
            {
#line 345 "middle_rec.m"
              ll_backend__middle_rec__TestAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_138_138)));
            }
#line 333 "middle_rec.m"
          }
#line 378 "middle_rec.m"
        if ((ll_backend__middle_rec__AfterInstrs_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "middle_rec.m"
          {
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_204_204;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_205_205;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_206_206;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_207_207;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_209_209;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_210_210;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_211_211;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_214_214;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_215_215;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_216_216;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_217_217;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_218_218;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_219_219;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_221_221;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_222_222;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_223_223;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_224_224;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_225_225;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_226_226;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_227_227;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_228_228;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_230_230;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_231_231;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_232_232;
#line 358 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_233_233;

#line 361 "middle_rec.m"
            {
#line 361 "middle_rec.m"
              ll_backend__middle_rec__V_207_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_207_207, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 361 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_207_207, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_22));
#line 361 "middle_rec.m"
            }
#line 361 "middle_rec.m"
            {
#line 361 "middle_rec.m"
              ll_backend__middle_rec__V_206_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_206_206, 0) = ((MR_Box) (ll_backend__middle_rec__V_207_207));
#line 361 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_206_206, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 361 "middle_rec.m"
            }
#line 362 "middle_rec.m"
            {
#line 362 "middle_rec.m"
              ll_backend__middle_rec__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 362 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_211_211, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_18));
#line 362 "middle_rec.m"
            }
#line 362 "middle_rec.m"
            {
#line 362 "middle_rec.m"
              ll_backend__middle_rec__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 362 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_210_210, 0) = ((MR_Box) (ll_backend__middle_rec__V_211_211));
#line 362 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_210_210, 1) = ((MR_Box) ((MR_String) ""));
#line 362 "middle_rec.m"
            }
#line 363 "middle_rec.m"
            {
#line 363 "middle_rec.m"
              ll_backend__middle_rec__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_209_209, 0) = ((MR_Box) (ll_backend__middle_rec__V_210_210));
#line 363 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 363 "middle_rec.m"
            }
#line 361 "middle_rec.m"
            {
#line 361 "middle_rec.m"
              ll_backend__middle_rec__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_205_205, 0) = ((MR_Box) (ll_backend__middle_rec__V_206_206));
#line 361 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_205_205, 1) = ((MR_Box) (ll_backend__middle_rec__V_209_209));
#line 361 "middle_rec.m"
            }
#line 360 "middle_rec.m"
            {
#line 360 "middle_rec.m"
              ll_backend__middle_rec__V_204_204 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_205_205);
            }
#line 364 "middle_rec.m"
            {
#line 364 "middle_rec.m"
              ll_backend__middle_rec__V_215_215 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__EntryTestInstrs_27);
            }
#line 366 "middle_rec.m"
            {
#line 366 "middle_rec.m"
              ll_backend__middle_rec__V_219_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_219_219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 366 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_219_219, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_51));
#line 366 "middle_rec.m"
            }
#line 366 "middle_rec.m"
            {
#line 366 "middle_rec.m"
              ll_backend__middle_rec__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_218_218, 0) = ((MR_Box) (ll_backend__middle_rec__V_219_219));
#line 366 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_218_218, 1) = ((MR_Box) ((MR_String) "start of the down loop"));
#line 366 "middle_rec.m"
            }
#line 365 "middle_rec.m"
            {
#line 365 "middle_rec.m"
              ll_backend__middle_rec__V_217_217 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_218_218)));
            }
#line 368 "middle_rec.m"
            {
#line 368 "middle_rec.m"
              ll_backend__middle_rec__V_222_222 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BeforeInstrs_50);
            }
#line 369 "middle_rec.m"
            {
#line 369 "middle_rec.m"
              ll_backend__middle_rec__V_224_224 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__Loop1Test_55);
            }
#line 371 "middle_rec.m"
            {
#line 371 "middle_rec.m"
              ll_backend__middle_rec__V_228_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_228_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 371 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_228_228, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_25));
#line 371 "middle_rec.m"
            }
#line 371 "middle_rec.m"
            {
#line 371 "middle_rec.m"
              ll_backend__middle_rec__V_227_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_227_227, 0) = ((MR_Box) (ll_backend__middle_rec__V_228_228));
#line 371 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_227_227, 1) = ((MR_Box) ((MR_String) "start of base case"));
#line 371 "middle_rec.m"
            }
#line 370 "middle_rec.m"
            {
#line 370 "middle_rec.m"
              ll_backend__middle_rec__V_226_226 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_227_227)));
            }
#line 373 "middle_rec.m"
            {
#line 373 "middle_rec.m"
              ll_backend__middle_rec__V_231_231 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseInstrs_44);
            }
#line 375 "middle_rec.m"
            {
#line 375 "middle_rec.m"
              ll_backend__middle_rec__V_233_233 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (&ll_backend__middle_rec_scalar_common_1[4])));
            }
#line 374 "middle_rec.m"
            {
#line 374 "middle_rec.m"
              ll_backend__middle_rec__V_232_232 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__LiveValCode_43, ll_backend__middle_rec__V_233_233);
            }
#line 373 "middle_rec.m"
            {
#line 373 "middle_rec.m"
              ll_backend__middle_rec__V_230_230 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_231_231, ll_backend__middle_rec__V_232_232);
            }
#line 372 "middle_rec.m"
            {
#line 372 "middle_rec.m"
              ll_backend__middle_rec__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_226_226, ll_backend__middle_rec__V_230_230);
            }
#line 369 "middle_rec.m"
            {
#line 369 "middle_rec.m"
              ll_backend__middle_rec__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_224_224, ll_backend__middle_rec__V_225_225);
            }
#line 368 "middle_rec.m"
            {
#line 368 "middle_rec.m"
              ll_backend__middle_rec__V_221_221 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_222_222, ll_backend__middle_rec__V_223_223);
            }
#line 367 "middle_rec.m"
            {
#line 367 "middle_rec.m"
              ll_backend__middle_rec__V_216_216 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_217_217, ll_backend__middle_rec__V_221_221);
            }
#line 364 "middle_rec.m"
            {
#line 364 "middle_rec.m"
              ll_backend__middle_rec__V_214_214 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_215_215, ll_backend__middle_rec__V_216_216);
            }
#line 363 "middle_rec.m"
            {
#line 363 "middle_rec.m"
              *ll_backend__middle_rec__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_204_204, ll_backend__middle_rec__V_214_214);
            }
#line 358 "middle_rec.m"
            ll_backend__middle_rec__succeeded = MR_TRUE;
#line 358 "middle_rec.m"
          }
#line 378 "middle_rec.m"
        else
#line 379 "middle_rec.m"
          {
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__BaseLabels_65;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_147_147;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_148_148;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_149_149;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_150_150;
#line 379 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_151_151;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_152_152;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_153_153;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_154_154;
#line 379 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_155_155;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_156_156;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_157_157;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_158_158;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_159_159;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_160_160;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_161_161;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_162_162;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_163_163;
#line 379 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_164_164;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_165_165;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_166_166;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_167_167;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_168_168;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_169_169;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_170_170;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_171_171;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_172_172;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_173_173;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_174_174;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_175_175;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_176_176;
#line 379 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_177_177;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_178_178;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_179_179;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_180_180;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_181_181;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_182_182;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_183_183;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_184_184;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_185_185;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_186_186;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_187_187;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_188_188;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_189_189;
#line 379 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_190_190;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_191_191;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_192_192;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_193_193;
#line 379 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_194_194;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_195_195;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_196_196;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_197_197;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_198_198;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_199_199;
#line 379 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_200_200;
#line 379 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_203_203;

#line 385 "middle_rec.m"
            {
#line 385 "middle_rec.m"
              ll_backend__middle_rec__find_labels_2_p_0(ll_backend__middle_rec__BaseInstrs_44, &ll_backend__middle_rec__BaseLabels_65);
            }
#line 386 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BaseLabels_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 379 "middle_rec.m"
              {
#line 389 "middle_rec.m"
                ll_backend__middle_rec__V_151_151 = (MR_String) "Procedure entry point";
#line 390 "middle_rec.m"
                ll_backend__middle_rec__V_155_155 = (MR_String) "";
#line 391 "middle_rec.m"
                ll_backend__middle_rec__V_156_156 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "middle_rec.m"
                {
#line 389 "middle_rec.m"
                  ll_backend__middle_rec__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 389 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_150_150, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_22));
#line 389 "middle_rec.m"
                }
#line 389 "middle_rec.m"
                {
#line 389 "middle_rec.m"
                  ll_backend__middle_rec__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_149_149, 0) = ((MR_Box) (ll_backend__middle_rec__V_150_150));
#line 389 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_149_149, 1) = ((MR_Box) (ll_backend__middle_rec__V_151_151));
#line 389 "middle_rec.m"
                }
#line 390 "middle_rec.m"
                {
#line 390 "middle_rec.m"
                  ll_backend__middle_rec__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_154_154, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_18));
#line 390 "middle_rec.m"
                }
#line 390 "middle_rec.m"
                {
#line 390 "middle_rec.m"
                  ll_backend__middle_rec__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_153_153, 0) = ((MR_Box) (ll_backend__middle_rec__V_154_154));
#line 390 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_153_153, 1) = ((MR_Box) (ll_backend__middle_rec__V_155_155));
#line 390 "middle_rec.m"
                }
#line 391 "middle_rec.m"
                {
#line 391 "middle_rec.m"
                  ll_backend__middle_rec__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_152_152, 0) = ((MR_Box) (ll_backend__middle_rec__V_153_153));
#line 391 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_152_152, 1) = ((MR_Box) (ll_backend__middle_rec__V_156_156));
#line 391 "middle_rec.m"
                }
#line 389 "middle_rec.m"
                {
#line 389 "middle_rec.m"
                  ll_backend__middle_rec__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_148_148, 0) = ((MR_Box) (ll_backend__middle_rec__V_149_149));
#line 389 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_148_148, 1) = ((MR_Box) (ll_backend__middle_rec__V_152_152));
#line 389 "middle_rec.m"
                }
#line 388 "middle_rec.m"
                {
#line 388 "middle_rec.m"
                  ll_backend__middle_rec__V_147_147 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_148_148);
                }
#line 392 "middle_rec.m"
                {
#line 392 "middle_rec.m"
                  ll_backend__middle_rec__V_158_158 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__EntryTestInstrs_27);
                }
#line 395 "middle_rec.m"
                ll_backend__middle_rec__V_164_164 = (MR_String) "start of the down loop";
#line 395 "middle_rec.m"
                {
#line 395 "middle_rec.m"
                  ll_backend__middle_rec__V_163_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_163_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 395 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_163_163, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_51));
#line 395 "middle_rec.m"
                }
#line 395 "middle_rec.m"
                {
#line 395 "middle_rec.m"
                  ll_backend__middle_rec__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_162_162, 0) = ((MR_Box) (ll_backend__middle_rec__V_163_163));
#line 395 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_162_162, 1) = ((MR_Box) (ll_backend__middle_rec__V_164_164));
#line 395 "middle_rec.m"
                }
#line 394 "middle_rec.m"
                {
#line 394 "middle_rec.m"
                  ll_backend__middle_rec__V_161_161 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_162_162)));
                }
#line 399 "middle_rec.m"
                {
#line 399 "middle_rec.m"
                  ll_backend__middle_rec__V_168_168 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BeforeInstrs_50);
                }
#line 400 "middle_rec.m"
                {
#line 400 "middle_rec.m"
                  ll_backend__middle_rec__V_170_170 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__Loop1Test_55);
                }
#line 401 "middle_rec.m"
                {
#line 401 "middle_rec.m"
                  ll_backend__middle_rec__V_172_172 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseInstrs_44);
                }
#line 403 "middle_rec.m"
                ll_backend__middle_rec__V_177_177 = (MR_String) "";
#line 403 "middle_rec.m"
                {
#line 403 "middle_rec.m"
                  ll_backend__middle_rec__V_176_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_176_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 403 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_176_176, 1) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_52));
#line 403 "middle_rec.m"
                }
#line 403 "middle_rec.m"
                {
#line 403 "middle_rec.m"
                  ll_backend__middle_rec__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_175_175, 0) = ((MR_Box) (ll_backend__middle_rec__V_176_176));
#line 403 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_175_175, 1) = ((MR_Box) (ll_backend__middle_rec__V_177_177));
#line 403 "middle_rec.m"
                }
#line 402 "middle_rec.m"
                {
#line 402 "middle_rec.m"
                  ll_backend__middle_rec__V_174_174 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_175_175)));
                }
#line 405 "middle_rec.m"
                {
#line 405 "middle_rec.m"
                  ll_backend__middle_rec__V_179_179 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__AfterInstrs_49);
                }
#line 411 "middle_rec.m"
                ll_backend__middle_rec__V_189_189 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "middle_rec.m"
                ll_backend__middle_rec__V_190_190 = (MR_String) "exit from recursive case";
#line 412 "middle_rec.m"
                ll_backend__middle_rec__V_194_194 = (MR_String) "start of base case";
#line 413 "middle_rec.m"
                ll_backend__middle_rec__V_195_195 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "middle_rec.m"
                ll_backend__middle_rec__V_188_188 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3]);
#line 411 "middle_rec.m"
                ll_backend__middle_rec__V_187_187 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[5];
#line 412 "middle_rec.m"
                {
#line 412 "middle_rec.m"
                  ll_backend__middle_rec__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 412 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_193_193, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_25));
#line 412 "middle_rec.m"
                }
#line 412 "middle_rec.m"
                {
#line 412 "middle_rec.m"
                  ll_backend__middle_rec__V_192_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_192_192, 0) = ((MR_Box) (ll_backend__middle_rec__V_193_193));
#line 412 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_192_192, 1) = ((MR_Box) (ll_backend__middle_rec__V_194_194));
#line 412 "middle_rec.m"
                }
#line 413 "middle_rec.m"
                {
#line 413 "middle_rec.m"
                  ll_backend__middle_rec__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_191_191, 0) = ((MR_Box) (ll_backend__middle_rec__V_192_192));
#line 413 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_191_191, 1) = ((MR_Box) (ll_backend__middle_rec__V_195_195));
#line 413 "middle_rec.m"
                }
#line 411 "middle_rec.m"
                {
#line 411 "middle_rec.m"
                  ll_backend__middle_rec__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_186_186, 0) = ((MR_Box) (ll_backend__middle_rec__V_187_187));
#line 411 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_186_186, 1) = ((MR_Box) (ll_backend__middle_rec__V_191_191));
#line 411 "middle_rec.m"
                }
#line 410 "middle_rec.m"
                {
#line 410 "middle_rec.m"
                  ll_backend__middle_rec__V_185_185 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_186_186);
                }
#line 414 "middle_rec.m"
                {
#line 414 "middle_rec.m"
                  ll_backend__middle_rec__V_197_197 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseInstrs_44);
                }
#line 417 "middle_rec.m"
                ll_backend__middle_rec__V_203_203 = (MR_String) "exit from base case";
#line 417 "middle_rec.m"
                ll_backend__middle_rec__V_200_200 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[4];
#line 416 "middle_rec.m"
                {
#line 416 "middle_rec.m"
                  ll_backend__middle_rec__V_199_199 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_200_200)));
                }
#line 415 "middle_rec.m"
                {
#line 415 "middle_rec.m"
                  ll_backend__middle_rec__V_198_198 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__LiveValCode_43, ll_backend__middle_rec__V_199_199);
                }
#line 414 "middle_rec.m"
                {
#line 414 "middle_rec.m"
                  ll_backend__middle_rec__V_196_196 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_197_197, ll_backend__middle_rec__V_198_198);
                }
#line 413 "middle_rec.m"
                {
#line 413 "middle_rec.m"
                  ll_backend__middle_rec__V_184_184 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_185_185, ll_backend__middle_rec__V_196_196);
                }
#line 409 "middle_rec.m"
                {
#line 409 "middle_rec.m"
                  ll_backend__middle_rec__V_183_183 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__LiveValCode_43, ll_backend__middle_rec__V_184_184);
                }
#line 408 "middle_rec.m"
                {
#line 408 "middle_rec.m"
                  ll_backend__middle_rec__V_182_182 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__TestAuxReg_61, ll_backend__middle_rec__V_183_183);
                }
#line 407 "middle_rec.m"
                {
#line 407 "middle_rec.m"
                  ll_backend__middle_rec__V_181_181 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__DecrAuxReg_60, ll_backend__middle_rec__V_182_182);
                }
#line 406 "middle_rec.m"
                {
#line 406 "middle_rec.m"
                  ll_backend__middle_rec__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__MaybeDecrSp_57, ll_backend__middle_rec__V_181_181);
                }
#line 405 "middle_rec.m"
                {
#line 405 "middle_rec.m"
                  ll_backend__middle_rec__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_179_179, ll_backend__middle_rec__V_180_180);
                }
#line 404 "middle_rec.m"
                {
#line 404 "middle_rec.m"
                  ll_backend__middle_rec__V_173_173 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_174_174, ll_backend__middle_rec__V_178_178);
                }
#line 401 "middle_rec.m"
                {
#line 401 "middle_rec.m"
                  ll_backend__middle_rec__V_171_171 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_172_172, ll_backend__middle_rec__V_173_173);
                }
#line 400 "middle_rec.m"
                {
#line 400 "middle_rec.m"
                  ll_backend__middle_rec__V_169_169 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_170_170, ll_backend__middle_rec__V_171_171);
                }
#line 399 "middle_rec.m"
                {
#line 399 "middle_rec.m"
                  ll_backend__middle_rec__V_167_167 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_168_168, ll_backend__middle_rec__V_169_169);
                }
#line 398 "middle_rec.m"
                {
#line 398 "middle_rec.m"
                  ll_backend__middle_rec__V_166_166 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__IncrAuxReg_59, ll_backend__middle_rec__V_167_167);
                }
#line 397 "middle_rec.m"
                {
#line 397 "middle_rec.m"
                  ll_backend__middle_rec__V_165_165 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__MaybeIncrSp_56, ll_backend__middle_rec__V_166_166);
                }
#line 396 "middle_rec.m"
                {
#line 396 "middle_rec.m"
                  ll_backend__middle_rec__V_160_160 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_161_161, ll_backend__middle_rec__V_165_165);
                }
#line 393 "middle_rec.m"
                {
#line 393 "middle_rec.m"
                  ll_backend__middle_rec__V_159_159 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__InitAuxReg_58, ll_backend__middle_rec__V_160_160);
                }
#line 392 "middle_rec.m"
                {
#line 392 "middle_rec.m"
                  ll_backend__middle_rec__V_157_157 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_158_158, ll_backend__middle_rec__V_159_159);
                }
#line 391 "middle_rec.m"
                {
#line 391 "middle_rec.m"
                  *ll_backend__middle_rec__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_147_147, ll_backend__middle_rec__V_157_157);
                }
#line 391 "middle_rec.m"
                ll_backend__middle_rec__succeeded = MR_TRUE;
#line 379 "middle_rec.m"
              }
#line 379 "middle_rec.m"
          }
#line 247 "middle_rec.m"
      }
#line 247 "middle_rec.m"
    return ll_backend__middle_rec__succeeded;
#line 247 "middle_rec.m"
  }
#line 242 "middle_rec.m"
}

#line 230 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
#line 230 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1)
#line 230 "middle_rec.m"
{
#line 232 "middle_rec.m"
  while (MR_TRUE)
#line 232 "middle_rec.m"
    {
#line 232 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 232 "middle_rec.m"
      {
#line 232 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;
#line 232 "middle_rec.m"
        MR_Word ll_backend__middle_rec__HeadVar__2_2;

#line 232 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "middle_rec.m"
          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
#line 232 "middle_rec.m"
        else
#line 233 "middle_rec.m"
          {
#line 233 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 233 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 234 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_6_6;
#line 234 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
#line 122 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));

#line 122 "middle_rec.m"
            {
#line 122 "middle_rec.m"
              ll_backend__middle_rec__V_6_6 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_8_8);
            }
#line 234 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_6_6 == (MR_Integer) 1);
#line 236 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 235 "middle_rec.m"
              {
#line 235 "middle_rec.m"
                /* direct tailcall eliminated */
#line 235 "middle_rec.m"
                {
#line 235 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Goals_4;

#line 235 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 235 "middle_rec.m"
                }
#line 235 "middle_rec.m"
                continue;
#line 235 "middle_rec.m"
              }
#line 236 "middle_rec.m"
            else
#line 237 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
#line 233 "middle_rec.m"
          }
#line 232 "middle_rec.m"
        return ll_backend__middle_rec__HeadVar__2_2;
#line 232 "middle_rec.m"
      }
#line 232 "middle_rec.m"
      break;
#line 232 "middle_rec.m"
    }
#line 230 "middle_rec.m"
}

#line 220 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
#line 220 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1)
#line 220 "middle_rec.m"
{
#line 222 "middle_rec.m"
  while (MR_TRUE)
#line 222 "middle_rec.m"
    {
#line 222 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 222 "middle_rec.m"
      {
#line 222 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;
#line 222 "middle_rec.m"
        MR_Word ll_backend__middle_rec__HeadVar__2_2;

#line 222 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "middle_rec.m"
          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
#line 222 "middle_rec.m"
        else
#line 223 "middle_rec.m"
          {
#line 223 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Goal_5;
#line 223 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 223 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 223 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_8_8, (MR_Integer) 0)));
#line 223 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_8_8, (MR_Integer) 1)));
#line 224 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_9_9;
#line 224 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11;
#line 122 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12;

#line 223 "middle_rec.m"
            ll_backend__middle_rec__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_8_8, (MR_Integer) 2)));
#line 122 "middle_rec.m"
            ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 0)));
#line 122 "middle_rec.m"
            ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 1)));
#line 122 "middle_rec.m"
            {
#line 122 "middle_rec.m"
              ll_backend__middle_rec__V_9_9 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_11_11);
            }
#line 224 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_9_9 == (MR_Integer) 1);
#line 226 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 225 "middle_rec.m"
              {
#line 225 "middle_rec.m"
                /* direct tailcall eliminated */
#line 225 "middle_rec.m"
                {
#line 225 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Cases_6;

#line 225 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 225 "middle_rec.m"
                }
#line 225 "middle_rec.m"
                continue;
#line 225 "middle_rec.m"
              }
#line 226 "middle_rec.m"
            else
#line 227 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
#line 223 "middle_rec.m"
          }
#line 222 "middle_rec.m"
        return ll_backend__middle_rec__HeadVar__2_2;
#line 222 "middle_rec.m"
      }
#line 222 "middle_rec.m"
      break;
#line 222 "middle_rec.m"
    }
#line 220 "middle_rec.m"
}

#line 124 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(
#line 124 "middle_rec.m"
  MR_Word ll_backend__middle_rec__GoalExpr_3)
#line 124 "middle_rec.m"
{
#line 128 "middle_rec.m"
  while (MR_TRUE)
#line 128 "middle_rec.m"
    {
#line 128 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 128 "middle_rec.m"
      {
#line 128 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;
#line 128 "middle_rec.m"
        MR_Word ll_backend__middle_rec__OnlyBuiltins_4;

#line 128 "middle_rec.m"
        if (((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 143 "middle_rec.m"
          {
#line 143 "middle_rec.m"
            MR_Word ll_backend__middle_rec__SubGoal_10 = (MR_Word) MR_body(((MR_Word) ll_backend__middle_rec__GoalExpr_3), (MR_Integer) 0);
#line 143 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_10, (MR_Integer) 0)));
#line 122 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_10, (MR_Integer) 1)));

#line 122 "middle_rec.m"
            /* direct tailcall eliminated */
#line 122 "middle_rec.m"
            {
#line 122 "middle_rec.m"
              MR_Word ll_backend__middle_rec__GoalExpr__tmp_copy_3 = ll_backend__middle_rec__V_83_83;

#line 122 "middle_rec.m"
              ll_backend__middle_rec__GoalExpr_3 = ll_backend__middle_rec__GoalExpr__tmp_copy_3;
#line 122 "middle_rec.m"
            }
#line 122 "middle_rec.m"
            continue;
#line 143 "middle_rec.m"
          }
#line 128 "middle_rec.m"
        else
#line 128 "middle_rec.m"
          if (((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 2))))
#line 169 "middle_rec.m"
            {
#line 169 "middle_rec.m"
              MR_Word ll_backend__middle_rec__BuiltinState_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 169 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)));
#line 169 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 169 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 169 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));
#line 169 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 5)));

#line 173 "middle_rec.m"
              if ((ll_backend__middle_rec__BuiltinState_21 == (MR_Integer) 0))
#line 172 "middle_rec.m"
                ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 173 "middle_rec.m"
              else
#line 177 "middle_rec.m"
                ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 169 "middle_rec.m"
            }
#line 128 "middle_rec.m"
          else
#line 128 "middle_rec.m"
            if (((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))
#line 180 "middle_rec.m"
              {
#line 180 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Uni_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 180 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)));
#line 180 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 180 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 180 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));

#line 185 "middle_rec.m"
                if (((MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) == (MR_mktag((MR_Integer) 2))))
#line 184 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 185 "middle_rec.m"
                else
#line 185 "middle_rec.m"
                  if (((MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) == (MR_mktag((MR_Integer) 0))))
#line 189 "middle_rec.m"
                    {
#line 189 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__SubInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 6)));
#line 189 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 0)));
#line 189 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 1)));
#line 189 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 2)));
#line 189 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 3)));
#line 189 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 4)));
#line 189 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 5)));

#line 193 "middle_rec.m"
                      if ((ll_backend__middle_rec__SubInfo_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 192 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 193 "middle_rec.m"
                      else
#line 194 "middle_rec.m"
                        {
#line 194 "middle_rec.m"
                          MR_Word ll_backend__middle_rec__TakeAddressFields_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_39, (MR_Integer) 0)));
#line 194 "middle_rec.m"
                          MR_Word ll_backend__middle_rec__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_39, (MR_Integer) 1)));

#line 198 "middle_rec.m"
                          if ((ll_backend__middle_rec__TakeAddressFields_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "middle_rec.m"
                            ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 198 "middle_rec.m"
                          else
#line 200 "middle_rec.m"
                            ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 194 "middle_rec.m"
                        }
#line 189 "middle_rec.m"
                    }
#line 185 "middle_rec.m"
                  else
#line 185 "middle_rec.m"
                    if (((MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) == (MR_mktag((MR_Integer) 1))))
#line 205 "middle_rec.m"
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 185 "middle_rec.m"
                    else
#line 185 "middle_rec.m"
                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uni_27, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 208 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 185 "middle_rec.m"
                      else
#line 187 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 180 "middle_rec.m"
              }
#line 128 "middle_rec.m"
            else
#line 128 "middle_rec.m"
              if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 128 "middle_rec.m"
                {
#line 128 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__ConjType_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 128 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));

#line 132 "middle_rec.m"
                  if ((ll_backend__middle_rec__ConjType_5 == (MR_Integer) 1))
#line 134 "middle_rec.m"
                    ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 132 "middle_rec.m"
                  else
#line 131 "middle_rec.m"
                    {
#line 131 "middle_rec.m"
                      return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_6);
                    }
#line 128 "middle_rec.m"
                }
#line 128 "middle_rec.m"
              else
#line 128 "middle_rec.m"
                if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 137 "middle_rec.m"
                  {
#line 137 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Goals_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));

#line 138 "middle_rec.m"
                    {
#line 138 "middle_rec.m"
                      return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_71);
                    }
#line 137 "middle_rec.m"
                  }
#line 128 "middle_rec.m"
                else
#line 128 "middle_rec.m"
                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 158 "middle_rec.m"
                    {
#line 158 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 158 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 158 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));
#line 158 "middle_rec.m"
                      MR_Word ll_backend__middle_rec___Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 160 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_68_68;
#line 160 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_69_69;
#line 160 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_70_70;
#line 160 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Cond_15, (MR_Integer) 0)));
#line 160 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_77_77;
#line 160 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_80_80;
#line 122 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Cond_15, (MR_Integer) 1)));
#line 122 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_78_78;
#line 122 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_81_81;

#line 122 "middle_rec.m"
                      {
#line 122 "middle_rec.m"
                        ll_backend__middle_rec__V_68_68 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_74_74);
                      }
#line 160 "middle_rec.m"
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_68_68 == (MR_Integer) 1);
#line 160 "middle_rec.m"
                      if (ll_backend__middle_rec__succeeded)
#line 160 "middle_rec.m"
                        {
#line 122 "middle_rec.m"
                          ll_backend__middle_rec__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Then_16, (MR_Integer) 0)));
#line 122 "middle_rec.m"
                          ll_backend__middle_rec__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Then_16, (MR_Integer) 1)));
#line 122 "middle_rec.m"
                          {
#line 122 "middle_rec.m"
                            ll_backend__middle_rec__V_69_69 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_77_77);
                          }
#line 161 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_69_69 == (MR_Integer) 1);
#line 160 "middle_rec.m"
                          if (ll_backend__middle_rec__succeeded)
#line 160 "middle_rec.m"
                            {
#line 122 "middle_rec.m"
                              ll_backend__middle_rec__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Else_17, (MR_Integer) 0)));
#line 122 "middle_rec.m"
                              ll_backend__middle_rec__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Else_17, (MR_Integer) 1)));
#line 122 "middle_rec.m"
                              {
#line 122 "middle_rec.m"
                                ll_backend__middle_rec__V_70_70 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_80_80);
                              }
#line 162 "middle_rec.m"
                              ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_70_70 == (MR_Integer) 1);
#line 160 "middle_rec.m"
                            }
#line 160 "middle_rec.m"
                        }
#line 165 "middle_rec.m"
                      if (ll_backend__middle_rec__succeeded)
#line 164 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 165 "middle_rec.m"
                      else
#line 166 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 158 "middle_rec.m"
                    }
#line 128 "middle_rec.m"
                  else
#line 128 "middle_rec.m"
                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 146 "middle_rec.m"
                      {
#line 146 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 146 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 148 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__FGT_13;
#line 148 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__V_12_12;

#line 148 "middle_rec.m"
                        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Reason_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 148 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 148 "middle_rec.m"
                          {
#line 148 "middle_rec.m"
                            ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 1)));
#line 148 "middle_rec.m"
                            ll_backend__middle_rec__FGT_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 2)));
#line 150 "middle_rec.m"
                            if ((ll_backend__middle_rec__FGT_13 == (MR_Integer) 1))
#line 149 "middle_rec.m"
                              ll_backend__middle_rec__succeeded = MR_TRUE;
#line 150 "middle_rec.m"
                            else
#line 150 "middle_rec.m"
                              if ((ll_backend__middle_rec__FGT_13 == (MR_Integer) 2))
#line 150 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = MR_TRUE;
#line 150 "middle_rec.m"
                              else
#line 150 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = MR_FALSE;
#line 148 "middle_rec.m"
                          }
#line 154 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 153 "middle_rec.m"
                          ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 154 "middle_rec.m"
                        else
#line 121 "middle_rec.m"
                          {
#line 121 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_72, (MR_Integer) 0)));
#line 122 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_72, (MR_Integer) 1)));

#line 122 "middle_rec.m"
                            /* direct tailcall eliminated */
#line 122 "middle_rec.m"
                            {
#line 122 "middle_rec.m"
                              MR_Word ll_backend__middle_rec__GoalExpr__tmp_copy_3 = ll_backend__middle_rec__V_86_86;

#line 122 "middle_rec.m"
                              ll_backend__middle_rec__GoalExpr_3 = ll_backend__middle_rec__GoalExpr__tmp_copy_3;
#line 122 "middle_rec.m"
                            }
#line 122 "middle_rec.m"
                            continue;
#line 121 "middle_rec.m"
                          }
#line 146 "middle_rec.m"
                      }
#line 128 "middle_rec.m"
                    else
#line 128 "middle_rec.m"
                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 216 "middle_rec.m"
                        {
#line 217 "middle_rec.m"
                          {
#line 217 "middle_rec.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
                          }
#line 216 "middle_rec.m"
                        }
#line 128 "middle_rec.m"
                      else
#line 128 "middle_rec.m"
                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 140 "middle_rec.m"
                          {
#line 140 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 140 "middle_rec.m"
                            MR_Word ll_backend__middle_rec___Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 140 "middle_rec.m"
                            MR_Word ll_backend__middle_rec___CanFail_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));

#line 141 "middle_rec.m"
                            {
#line 141 "middle_rec.m"
                              return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(ll_backend__middle_rec__Cases_9);
                            }
#line 140 "middle_rec.m"
                          }
#line 128 "middle_rec.m"
                        else
#line 214 "middle_rec.m"
                          ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 128 "middle_rec.m"
        return ll_backend__middle_rec__OnlyBuiltins_4;
#line 128 "middle_rec.m"
      }
#line 128 "middle_rec.m"
      break;
#line 128 "middle_rec.m"
    }
#line 124 "middle_rec.m"
}

#line 92 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(
#line 92 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 92 "middle_rec.m"
  MR_Word ll_backend__middle_rec__CodeInfo_5)
#line 92 "middle_rec.m"
{
#line 95 "middle_rec.m"
  while (MR_TRUE)
#line 95 "middle_rec.m"
    {
#line 95 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 95 "middle_rec.m"
      {
#line 95 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 95 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Goal_3;
#line 95 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Goals_4;
#line 95 "middle_rec.m"
        MR_Word ll_backend__middle_rec__GoalExpr_6;
#line 96 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_7_7;
#line 97 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_8_8;

#line 95 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 95 "middle_rec.m"
          {
#line 95 "middle_rec.m"
            ll_backend__middle_rec__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "middle_rec.m"
            ll_backend__middle_rec__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 96 "middle_rec.m"
            ll_backend__middle_rec__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
#line 96 "middle_rec.m"
            ll_backend__middle_rec__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));
#line 97 "middle_rec.m"
            {
#line 97 "middle_rec.m"
              ll_backend__middle_rec__V_8_8 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__GoalExpr_6);
            }
#line 97 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_8_8 == (MR_Integer) 1);
#line 99 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 98 "middle_rec.m"
              {
#line 98 "middle_rec.m"
                /* direct tailcall eliminated */
#line 98 "middle_rec.m"
                {
#line 98 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Goals_4;

#line 98 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 98 "middle_rec.m"
                }
#line 98 "middle_rec.m"
                continue;
#line 98 "middle_rec.m"
              }
#line 99 "middle_rec.m"
            else
#line 100 "middle_rec.m"
              {
#line 100 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_9_9;
#line 100 "middle_rec.m"
                MR_Word ll_backend__middle_rec__CallPredId_12;
#line 100 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__CallProcId_13;
#line 100 "middle_rec.m"
                MR_Word ll_backend__middle_rec__BuiltinState_15;
#line 100 "middle_rec.m"
                MR_Word ll_backend__middle_rec__PredId_18;
#line 100 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__ProcId_19;
#line 107 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_14_14;
#line 107 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_16_16;
#line 107 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_17_17;

#line 107 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_6)) == (MR_mktag((MR_Integer) 2)));
#line 107 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 107 "middle_rec.m"
                  {
#line 107 "middle_rec.m"
                    ll_backend__middle_rec__CallPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 0)));
#line 107 "middle_rec.m"
                    ll_backend__middle_rec__CallProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
#line 107 "middle_rec.m"
                    ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));
#line 107 "middle_rec.m"
                    ll_backend__middle_rec__BuiltinState_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 3)));
#line 107 "middle_rec.m"
                    ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 4)));
#line 107 "middle_rec.m"
                    ll_backend__middle_rec__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 5)));
#line 108 "middle_rec.m"
                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BuiltinState_15 == (MR_Integer) 2);
#line 100 "middle_rec.m"
                    if (ll_backend__middle_rec__succeeded)
#line 100 "middle_rec.m"
                      {
#line 109 "middle_rec.m"
                        {
#line 109 "middle_rec.m"
                          ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__PredId_18);
                        }
#line 110 "middle_rec.m"
                        {
#line 110 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__middle_rec__PredId_18, ll_backend__middle_rec__CallPredId_12);
                        }
#line 100 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 100 "middle_rec.m"
                          {
#line 111 "middle_rec.m"
                            {
#line 111 "middle_rec.m"
                              ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__ProcId_19);
                            }
#line 112 "middle_rec.m"
                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__ProcId_19 == ll_backend__middle_rec__CallProcId_13);
#line 100 "middle_rec.m"
                            if (ll_backend__middle_rec__succeeded)
#line 100 "middle_rec.m"
                              {
#line 101 "middle_rec.m"
                                {
#line 101 "middle_rec.m"
                                  ll_backend__middle_rec__V_9_9 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_4);
                                }
#line 101 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_9_9 == (MR_Integer) 1);
#line 100 "middle_rec.m"
                              }
#line 100 "middle_rec.m"
                          }
#line 100 "middle_rec.m"
                      }
#line 107 "middle_rec.m"
                  }
#line 100 "middle_rec.m"
              }
#line 95 "middle_rec.m"
          }
#line 95 "middle_rec.m"
        return ll_backend__middle_rec__succeeded;
#line 95 "middle_rec.m"
      }
#line 95 "middle_rec.m"
      break;
#line 95 "middle_rec.m"
    }
#line 92 "middle_rec.m"
}

#line 23 "middle_rec.m"
MR_bool MR_CALL 
ll_backend__middle_rec__match_and_generate_4_p_0(
#line 23 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Goal_5,
#line 23 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_6,
#line 23 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_17,
#line 23 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_18)
#line 23 "middle_rec.m"
{
#line 56 "middle_rec.m"
  {
#line 56 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 0)));
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 1)));
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Var_10;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Case1_11;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Case2_12;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ConsId1_13;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goal1_14;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ConsId2_15;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goal2_16;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_19_19;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_20_20;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_21_21;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_22_22;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_23_23;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_24_24;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_25_25;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_30_30;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalExpr_33;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goals_35;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_36_36;
#line 122 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_31_31;
#line 88 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_34_34;

#line 58 "middle_rec.m"
    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 58 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 58 "middle_rec.m"
      {
#line 58 "middle_rec.m"
        ll_backend__middle_rec__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_8, (MR_Integer) 1)));
#line 58 "middle_rec.m"
        ll_backend__middle_rec__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_8, (MR_Integer) 2)));
#line 58 "middle_rec.m"
        ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_8, (MR_Integer) 3)));
#line 58 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_19_19 == (MR_Integer) 1);
#line 56 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 56 "middle_rec.m"
          {
#line 58 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 58 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 58 "middle_rec.m"
              {
#line 58 "middle_rec.m"
                ll_backend__middle_rec__Case1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_20_20, (MR_Integer) 0)));
#line 58 "middle_rec.m"
                ll_backend__middle_rec__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_20_20, (MR_Integer) 1)));
#line 58 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 58 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 58 "middle_rec.m"
                  {
#line 58 "middle_rec.m"
                    ll_backend__middle_rec__Case2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_21_21, (MR_Integer) 0)));
#line 58 "middle_rec.m"
                    ll_backend__middle_rec__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_21_21, (MR_Integer) 1)));
#line 58 "middle_rec.m"
                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 56 "middle_rec.m"
                    if (ll_backend__middle_rec__succeeded)
#line 56 "middle_rec.m"
                      {
#line 59 "middle_rec.m"
                        ll_backend__middle_rec__ConsId1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_11, (MR_Integer) 0)));
#line 59 "middle_rec.m"
                        ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_11, (MR_Integer) 1)));
#line 59 "middle_rec.m"
                        ll_backend__middle_rec__Goal1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_11, (MR_Integer) 2)));
#line 59 "middle_rec.m"
                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 56 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 56 "middle_rec.m"
                          {
#line 60 "middle_rec.m"
                            ll_backend__middle_rec__ConsId2_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_12, (MR_Integer) 0)));
#line 60 "middle_rec.m"
                            ll_backend__middle_rec__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_12, (MR_Integer) 1)));
#line 60 "middle_rec.m"
                            ll_backend__middle_rec__Goal2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_12, (MR_Integer) 2)));
#line 60 "middle_rec.m"
                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 56 "middle_rec.m"
                            if (ll_backend__middle_rec__succeeded)
#line 56 "middle_rec.m"
                              {
#line 122 "middle_rec.m"
                                ll_backend__middle_rec__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_14, (MR_Integer) 0)));
#line 122 "middle_rec.m"
                                ll_backend__middle_rec__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_14, (MR_Integer) 1)));
#line 122 "middle_rec.m"
                                {
#line 122 "middle_rec.m"
                                  ll_backend__middle_rec__V_25_25 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_30_30);
                                }
#line 62 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_25_25 == (MR_Integer) 1);
#line 62 "middle_rec.m"
                                if (ll_backend__middle_rec__succeeded)
#line 62 "middle_rec.m"
                                  {
#line 88 "middle_rec.m"
                                    ll_backend__middle_rec__GoalExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_16, (MR_Integer) 0)));
#line 88 "middle_rec.m"
                                    ll_backend__middle_rec__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_16, (MR_Integer) 1)));
#line 89 "middle_rec.m"
                                    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 89 "middle_rec.m"
                                    if (ll_backend__middle_rec__succeeded)
#line 89 "middle_rec.m"
                                      {
#line 89 "middle_rec.m"
                                        ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_33, (MR_Integer) 1)));
#line 89 "middle_rec.m"
                                        ll_backend__middle_rec__Goals_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_33, (MR_Integer) 2)));
#line 89 "middle_rec.m"
                                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_36_36 == (MR_Integer) 0);
#line 62 "middle_rec.m"
                                        if (ll_backend__middle_rec__succeeded)
#line 90 "middle_rec.m"
                                          {
#line 90 "middle_rec.m"
                                            ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_35, ll_backend__middle_rec__STATE_VARIABLE_CI_0_17);
                                          }
#line 89 "middle_rec.m"
                                      }
#line 62 "middle_rec.m"
                                  }
#line 67 "middle_rec.m"
                                if (ll_backend__middle_rec__succeeded)
#line 65 "middle_rec.m"
                                  {
#line 65 "middle_rec.m"
                                    return ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_8_p_0(ll_backend__middle_rec__Var_10, ll_backend__middle_rec__ConsId1_13, ll_backend__middle_rec__Goal1_14, ll_backend__middle_rec__Goal2_16, ll_backend__middle_rec__GoalInfo_9, ll_backend__middle_rec__Instrs_6, ll_backend__middle_rec__STATE_VARIABLE_CI_0_17, ll_backend__middle_rec__STATE_VARIABLE_CI_18);
                                  }
#line 67 "middle_rec.m"
                                else
#line 73 "middle_rec.m"
                                  {
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_27_27;
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_16, (MR_Integer) 0)));
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__GoalExpr_41;
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__Goals_43;
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_44_44;
#line 122 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_16, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_42_42;

#line 122 "middle_rec.m"
                                    {
#line 122 "middle_rec.m"
                                      ll_backend__middle_rec__V_27_27 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_38_38);
                                    }
#line 68 "middle_rec.m"
                                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_27_27 == (MR_Integer) 1);
#line 73 "middle_rec.m"
                                    if (ll_backend__middle_rec__succeeded)
#line 73 "middle_rec.m"
                                      {
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__GoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_14, (MR_Integer) 0)));
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_14, (MR_Integer) 1)));
#line 89 "middle_rec.m"
                                        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_41, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 89 "middle_rec.m"
                                        if (ll_backend__middle_rec__succeeded)
#line 89 "middle_rec.m"
                                          {
#line 89 "middle_rec.m"
                                            ll_backend__middle_rec__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_41, (MR_Integer) 1)));
#line 89 "middle_rec.m"
                                            ll_backend__middle_rec__Goals_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_41, (MR_Integer) 2)));
#line 89 "middle_rec.m"
                                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_44_44 == (MR_Integer) 0);
#line 73 "middle_rec.m"
                                            if (ll_backend__middle_rec__succeeded)
#line 73 "middle_rec.m"
                                              {
#line 90 "middle_rec.m"
                                                {
#line 90 "middle_rec.m"
                                                  ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_43, ll_backend__middle_rec__STATE_VARIABLE_CI_0_17);
                                                }
#line 73 "middle_rec.m"
                                                if (ll_backend__middle_rec__succeeded)
#line 71 "middle_rec.m"
                                                  {
#line 71 "middle_rec.m"
                                                    return ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_8_p_0(ll_backend__middle_rec__Var_10, ll_backend__middle_rec__ConsId2_15, ll_backend__middle_rec__Goal2_16, ll_backend__middle_rec__Goal1_14, ll_backend__middle_rec__GoalInfo_9, ll_backend__middle_rec__Instrs_6, ll_backend__middle_rec__STATE_VARIABLE_CI_0_17, ll_backend__middle_rec__STATE_VARIABLE_CI_18);
                                                  }
#line 73 "middle_rec.m"
                                              }
#line 89 "middle_rec.m"
                                          }
#line 73 "middle_rec.m"
                                      }
#line 73 "middle_rec.m"
                                  }
#line 56 "middle_rec.m"
                              }
#line 56 "middle_rec.m"
                          }
#line 56 "middle_rec.m"
                      }
#line 58 "middle_rec.m"
                  }
#line 58 "middle_rec.m"
              }
#line 56 "middle_rec.m"
          }
#line 58 "middle_rec.m"
      }
#line 56 "middle_rec.m"
    return ll_backend__middle_rec__succeeded;
#line 56 "middle_rec.m"
  }
#line 23 "middle_rec.m"
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
