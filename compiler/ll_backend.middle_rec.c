/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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




#line 743 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_3_p_0(
#line 743 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 743 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
#line 743 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3);

#line 738 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
#line 738 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 738 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Label2_4);

#line 725 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
#line 725 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 725 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 725 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 716 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
#line 716 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 716 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 716 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 692 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
#line 692 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 692 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 692 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 664 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
#line 664 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Rval_4,
#line 664 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
#line 664 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17);

#line 648 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
#line 648 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Lval_4,
#line 648 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
#line 648 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13);

#line 640 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
#line 640 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 640 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 640 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 618 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
#line 618 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 618 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 618 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 515 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
#line 515 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Uinstr_4,
#line 515 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
#line 515 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76);

#line 507 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
#line 507 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 507 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 507 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 496 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_3_p_0(
#line 496 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 496 "middle_rec.m"
  MR_Integer ll_backend__middle_rec__N_2,
#line 496 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

#line 487 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
#line 487 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 487 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__UnusedReg_4);

#line 472 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
#line 472 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 472 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
#line 472 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

#line 448 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
#line 448 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 448 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Before_2,
#line 448 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__After_3);

#line 423 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
#line 423 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 423 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Target_2,
#line 423 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_3);

#line 241 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_8_p_0(
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Var_9,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__BaseConsId_10,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Base_11,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Recursive_12,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_13,
#line 241 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Code_14,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_66,
#line 241 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_67);

#line 229 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
#line 229 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1);

#line 219 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
#line 219 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1);

#line 123 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(
#line 123 "middle_rec.m"
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



#line 743 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_3_p_0(
#line 743 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 743 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
#line 743 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3)
#line 743 "middle_rec.m"
{
#line 746 "middle_rec.m"
  while (MR_TRUE)
#line 746 "middle_rec.m"
    {
#line 746 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 746 "middle_rec.m"
      {
#line 746 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 746 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Labels_3 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
#line 746 "middle_rec.m"
        else
#line 747 "middle_rec.m"
          {
#line 747 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 747 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 747 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 0)));
#line 747 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;
#line 748 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 1)));
#line 751 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Label_12;

#line 749 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 749 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 749 "middle_rec.m"
              {
#line 749 "middle_rec.m"
                ll_backend__middle_rec__Label_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
#line 750 "middle_rec.m"
                {
#line 750 "middle_rec.m"
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 0) = ((MR_Box) (ll_backend__middle_rec__Label_12));
#line 750 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 1) = ((MR_Box) (ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2));
#line 750 "middle_rec.m"
                }
#line 749 "middle_rec.m"
              }
#line 749 "middle_rec.m"
            else
#line 753 "middle_rec.m"
              {
#line 753 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Block_15;
#line 751 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__V_13_13;
#line 751 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__V_14_14;

#line 751 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 751 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 751 "middle_rec.m"
                  {
#line 751 "middle_rec.m"
                    ll_backend__middle_rec__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
#line 751 "middle_rec.m"
                    ll_backend__middle_rec__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 2)));
#line 751 "middle_rec.m"
                    ll_backend__middle_rec__Block_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 3)));
#line 752 "middle_rec.m"
                    {
#line 752 "middle_rec.m"
                      ll_backend__middle_rec__find_labels_2_3_p_0(ll_backend__middle_rec__Block_15, ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18);
                    }
#line 751 "middle_rec.m"
                  }
#line 751 "middle_rec.m"
                else
#line 752 "middle_rec.m"
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
#line 753 "middle_rec.m"
              }
#line 756 "middle_rec.m"
            /* direct tailcall eliminated */
#line 756 "middle_rec.m"
            {
#line 756 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_8;
#line 756 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;

#line 756 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2;
#line 756 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 756 "middle_rec.m"
            }
#line 756 "middle_rec.m"
            continue;
#line 747 "middle_rec.m"
          }
#line 746 "middle_rec.m"
      }
#line 746 "middle_rec.m"
      break;
#line 746 "middle_rec.m"
    }
#line 743 "middle_rec.m"
}

#line 738 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
#line 738 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 738 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Label2_4)
#line 738 "middle_rec.m"
{
#line 740 "middle_rec.m"
  {
#line 740 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 741 "middle_rec.m"
    {
#line 741 "middle_rec.m"
      ll_backend__middle_rec__find_labels_2_3_p_0(ll_backend__middle_rec__Instrs_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__middle_rec__Label2_4);
#line 741 "middle_rec.m"
      return;
    }
#line 740 "middle_rec.m"
  }
#line 738 "middle_rec.m"
}

#line 725 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
#line 725 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 725 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 725 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 725 "middle_rec.m"
{
#line 728 "middle_rec.m"
  while (MR_TRUE)
#line 728 "middle_rec.m"
    {
#line 728 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 728 "middle_rec.m"
      {
#line 728 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 728 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 728 "middle_rec.m"
        else
#line 729 "middle_rec.m"
          {
#line 729 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Output_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 729 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Outputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 729 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 0)));
#line 729 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 730 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 1)));
#line 730 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 2)));
#line 730 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 3)));
#line 730 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 4)));
#line 730 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 5)));
#line 730 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 6)));

#line 731 "middle_rec.m"
            {
#line 731 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_10, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
#line 732 "middle_rec.m"
            /* direct tailcall eliminated */
#line 732 "middle_rec.m"
            {
#line 732 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Outputs_8;
#line 732 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 732 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 732 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 732 "middle_rec.m"
            }
#line 732 "middle_rec.m"
            continue;
#line 729 "middle_rec.m"
          }
#line 728 "middle_rec.m"
      }
#line 728 "middle_rec.m"
      break;
#line 728 "middle_rec.m"
    }
#line 725 "middle_rec.m"
}

#line 716 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
#line 716 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 716 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 716 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 716 "middle_rec.m"
{
#line 719 "middle_rec.m"
  while (MR_TRUE)
#line 719 "middle_rec.m"
    {
#line 719 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 719 "middle_rec.m"
      {
#line 719 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 719 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 719 "middle_rec.m"
        else
#line 720 "middle_rec.m"
          {
#line 720 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Input_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 720 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 720 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 4)));
#line 720 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 721 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 0)));
#line 721 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 1)));
#line 721 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 2)));
#line 721 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 3)));
#line 721 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 5)));
#line 721 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 6)));

#line 722 "middle_rec.m"
            {
#line 722 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
#line 723 "middle_rec.m"
            /* direct tailcall eliminated */
#line 723 "middle_rec.m"
            {
#line 723 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Inputs_8;
#line 723 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 723 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 723 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 723 "middle_rec.m"
            }
#line 723 "middle_rec.m"
            continue;
#line 720 "middle_rec.m"
          }
#line 719 "middle_rec.m"
      }
#line 719 "middle_rec.m"
      break;
#line 719 "middle_rec.m"
    }
#line 716 "middle_rec.m"
}

#line 692 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
#line 692 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 692 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 692 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 692 "middle_rec.m"
{
#line 695 "middle_rec.m"
  {
#line 695 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 695 "middle_rec.m"
    if (((MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 697 "middle_rec.m"
      {
#line 697 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

#line 698 "middle_rec.m"
        {
#line 698 "middle_rec.m"
          ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 698 "middle_rec.m"
          return;
        }
#line 697 "middle_rec.m"
      }
#line 695 "middle_rec.m"
    else
#line 695 "middle_rec.m"
      if (((MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 699 "middle_rec.m"
        {
#line 699 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 699 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 2)));
#line 699 "middle_rec.m"
          MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_20_20;
#line 699 "middle_rec.m"
          MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

#line 700 "middle_rec.m"
          {
#line 700 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_20_20);
          }
#line 701 "middle_rec.m"
          {
#line 701 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval2_16, ll_backend__middle_rec__STATE_VARIABLE_Used_20_20, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 701 "middle_rec.m"
            return;
          }
#line 699 "middle_rec.m"
        }
#line 695 "middle_rec.m"
      else
#line 695 "middle_rec.m"
        {
#line 695 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

#line 696 "middle_rec.m"
          {
#line 696 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_4, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 696 "middle_rec.m"
            return;
          }
#line 695 "middle_rec.m"
        }
#line 695 "middle_rec.m"
  }
#line 692 "middle_rec.m"
}

#line 664 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
#line 664 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Rval_4,
#line 664 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
#line 664 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17)
#line 664 "middle_rec.m"
{
#line 668 "middle_rec.m"
  while (MR_TRUE)
#line 668 "middle_rec.m"
    {
#line 668 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 668 "middle_rec.m"
      {
#line 668 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 668 "middle_rec.m"
        if (((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 0))))
#line 668 "middle_rec.m"
          {
#line 668 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

#line 669 "middle_rec.m"
            {
#line 669 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_6, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
#line 669 "middle_rec.m"
              return;
            }
#line 668 "middle_rec.m"
          }
#line 668 "middle_rec.m"
        else
#line 668 "middle_rec.m"
          if (((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 2))))
#line 674 "middle_rec.m"
            {
#line 674 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));
#line 674 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

#line 675 "middle_rec.m"
              /* direct tailcall eliminated */
#line 675 "middle_rec.m"
              {
#line 675 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_9;

#line 675 "middle_rec.m"
                ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 675 "middle_rec.m"
              }
#line 675 "middle_rec.m"
              continue;
#line 674 "middle_rec.m"
            }
#line 668 "middle_rec.m"
          else
#line 668 "middle_rec.m"
            if (((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 1))))
#line 671 "middle_rec.m"
              {
#line 672 "middle_rec.m"
                {
#line 672 "middle_rec.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", (MR_String) "var");
#line 672 "middle_rec.m"
                  return;
                }
#line 671 "middle_rec.m"
              }
#line 668 "middle_rec.m"
            else
#line 668 "middle_rec.m"
              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 684 "middle_rec.m"
                {
#line 684 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 3)));
#line 684 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 684 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
#line 684 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 685 "middle_rec.m"
                  {
#line 685 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_28, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
                  }
#line 686 "middle_rec.m"
                  /* direct tailcall eliminated */
#line 686 "middle_rec.m"
                  {
#line 686 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval2_14;
#line 686 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 686 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_0_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16;
#line 686 "middle_rec.m"
                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 686 "middle_rec.m"
                  }
#line 686 "middle_rec.m"
                  continue;
#line 684 "middle_rec.m"
                }
#line 668 "middle_rec.m"
              else
#line 668 "middle_rec.m"
                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 679 "middle_rec.m"
                  *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
#line 668 "middle_rec.m"
                else
#line 668 "middle_rec.m"
                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 688 "middle_rec.m"
                    {
#line 688 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__MemRef_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 689 "middle_rec.m"
                      {
#line 689 "middle_rec.m"
                        ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(ll_backend__middle_rec__MemRef_15, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
#line 689 "middle_rec.m"
                        return;
                      }
#line 688 "middle_rec.m"
                    }
#line 668 "middle_rec.m"
                  else
#line 668 "middle_rec.m"
                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 677 "middle_rec.m"
                      *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
#line 668 "middle_rec.m"
                    else
#line 681 "middle_rec.m"
                      {
#line 681 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__Rval1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
#line 681 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 682 "middle_rec.m"
                        /* direct tailcall eliminated */
#line 682 "middle_rec.m"
                        {
#line 682 "middle_rec.m"
                          MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_27;

#line 682 "middle_rec.m"
                          ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 682 "middle_rec.m"
                        }
#line 682 "middle_rec.m"
                        continue;
#line 681 "middle_rec.m"
                      }
#line 668 "middle_rec.m"
      }
#line 668 "middle_rec.m"
      break;
#line 668 "middle_rec.m"
    }
#line 664 "middle_rec.m"
}

#line 648 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
#line 648 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Lval_4,
#line 648 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
#line 648 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13)
#line 648 "middle_rec.m"
{
#line 655 "middle_rec.m"
  {
#line 655 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 1)));
#line 655 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__N_6;
#line 652 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_14_14;

#line 652 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 652 "middle_rec.m"
      {
#line 652 "middle_rec.m"
        ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)));
#line 652 "middle_rec.m"
        ll_backend__middle_rec__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 652 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_14_14 == (MR_Integer) 0);
#line 652 "middle_rec.m"
      }
#line 655 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 653 "middle_rec.m"
      {
#line 653 "middle_rec.m"
        MR_Word ll_backend__middle_rec__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 653 "middle_rec.m"
        MR_Integer ll_backend__middle_rec__N1_7;
#line 653 "middle_rec.m"
        MR_Box ll_backend__middle_rec__conv0_N1_7;

#line 653 "middle_rec.m"
        {
#line 653 "middle_rec.m"
          mercury__builtin__copy_2_p_1(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N_6)), &ll_backend__middle_rec__conv0_N1_7);
        }
#line 653 "middle_rec.m"
        ll_backend__middle_rec__N1_7 = ((MR_Integer) ll_backend__middle_rec__conv0_N1_7);
#line 654 "middle_rec.m"
        {
#line 654 "middle_rec.m"
          mercury__set__insert_3_p_0(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N1_7)), ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
#line 654 "middle_rec.m"
          return;
        }
#line 653 "middle_rec.m"
      }
#line 655 "middle_rec.m"
    else
#line 658 "middle_rec.m"
      {
#line 658 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Rval_9;
#line 658 "middle_rec.m"
        MR_Word ll_backend__middle_rec__FieldNum_10;
#line 655 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_8_8;

#line 655 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 655 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 655 "middle_rec.m"
          {
#line 655 "middle_rec.m"
            ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 655 "middle_rec.m"
            ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 2)));
#line 655 "middle_rec.m"
            ll_backend__middle_rec__FieldNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 3)));
#line 656 "middle_rec.m"
            {
#line 656 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_16_16;

#line 656 "middle_rec.m"
              {
#line 656 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, &ll_backend__middle_rec__STATE_VARIABLE_Used_16_16);
              }
#line 657 "middle_rec.m"
              {
#line 657 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__FieldNum_10, ll_backend__middle_rec__STATE_VARIABLE_Used_16_16, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
#line 657 "middle_rec.m"
                return;
              }
#line 656 "middle_rec.m"
            }
#line 655 "middle_rec.m"
          }
#line 655 "middle_rec.m"
        else
#line 660 "middle_rec.m"
          {
#line 658 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11;

#line 658 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 658 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 658 "middle_rec.m"
              {
#line 658 "middle_rec.m"
                ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 659 "middle_rec.m"
                {
#line 659 "middle_rec.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", (MR_String) "lvar");
#line 659 "middle_rec.m"
                  return;
                }
#line 658 "middle_rec.m"
              }
#line 658 "middle_rec.m"
            else
#line 661 "middle_rec.m"
              {
#line 661 "middle_rec.m"
              }
#line 661 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_13 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_12;
#line 660 "middle_rec.m"
          }
#line 658 "middle_rec.m"
      }
#line 655 "middle_rec.m"
  }
#line 648 "middle_rec.m"
}

#line 640 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
#line 640 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 640 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 640 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 640 "middle_rec.m"
{
#line 643 "middle_rec.m"
  while (MR_TRUE)
#line 643 "middle_rec.m"
    {
#line 643 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 643 "middle_rec.m"
      {
#line 643 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 643 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 643 "middle_rec.m"
        else
#line 644 "middle_rec.m"
          {
#line 644 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 644 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 644 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 645 "middle_rec.m"
            {
#line 645 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
            }
#line 646 "middle_rec.m"
            /* direct tailcall eliminated */
#line 646 "middle_rec.m"
            {
#line 646 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Lvals_8;
#line 646 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 646 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 646 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 646 "middle_rec.m"
            }
#line 646 "middle_rec.m"
            continue;
#line 644 "middle_rec.m"
          }
#line 643 "middle_rec.m"
      }
#line 643 "middle_rec.m"
      break;
#line 643 "middle_rec.m"
    }
#line 640 "middle_rec.m"
}

#line 618 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
#line 618 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 618 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 618 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 618 "middle_rec.m"
{
#line 622 "middle_rec.m"
  while (MR_TRUE)
#line 622 "middle_rec.m"
    {
#line 622 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 622 "middle_rec.m"
      {
#line 622 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 622 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 622 "middle_rec.m"
        else
#line 623 "middle_rec.m"
          {
#line 623 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Comp_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 623 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Comps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 623 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 630 "middle_rec.m"
            if ((ll_backend__middle_rec__Comp_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 630 "middle_rec.m"
            else
#line 630 "middle_rec.m"
              if (((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 1))))
#line 630 "middle_rec.m"
                {
#line 630 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__In_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

#line 631 "middle_rec.m"
                  {
#line 631 "middle_rec.m"
                    ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(ll_backend__middle_rec__In_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                  }
#line 630 "middle_rec.m"
                }
#line 630 "middle_rec.m"
              else
#line 630 "middle_rec.m"
                if (((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 2))))
#line 632 "middle_rec.m"
                  {
#line 632 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Out_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

#line 633 "middle_rec.m"
                    {
#line 633 "middle_rec.m"
                      ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(ll_backend__middle_rec__Out_19, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                    }
#line 632 "middle_rec.m"
                  }
#line 630 "middle_rec.m"
                else
#line 630 "middle_rec.m"
                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 637 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 630 "middle_rec.m"
                  else
#line 630 "middle_rec.m"
                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 636 "middle_rec.m"
                      ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 630 "middle_rec.m"
                    else
#line 630 "middle_rec.m"
                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 635 "middle_rec.m"
                        ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 630 "middle_rec.m"
                      else
#line 634 "middle_rec.m"
                        ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 625 "middle_rec.m"
            /* direct tailcall eliminated */
#line 625 "middle_rec.m"
            {
#line 625 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Comps_8;
#line 625 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 625 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 625 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 625 "middle_rec.m"
            }
#line 625 "middle_rec.m"
            continue;
#line 623 "middle_rec.m"
          }
#line 622 "middle_rec.m"
      }
#line 622 "middle_rec.m"
      break;
#line 622 "middle_rec.m"
    }
#line 618 "middle_rec.m"
}

#line 515 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
#line 515 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Uinstr_4,
#line 515 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
#line 515 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76)
#line 515 "middle_rec.m"
{
#line 520 "middle_rec.m"
  {
#line 520 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 520 "middle_rec.m"
    if ((ll_backend__middle_rec__Uinstr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 528 "middle_rec.m"
      *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
    else
#line 520 "middle_rec.m"
      if ((ll_backend__middle_rec__Uinstr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "middle_rec.m"
        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
      else
#line 520 "middle_rec.m"
        if (((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 1))))
#line 520 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
        else
#line 520 "middle_rec.m"
          if (((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 2))))
#line 535 "middle_rec.m"
            {
#line 535 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LvalSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)));
#line 535 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LvalList_29;

#line 536 "middle_rec.m"
              {
#line 536 "middle_rec.m"
                mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__middle_rec__LvalSet_28, &ll_backend__middle_rec__LvalList_29);
              }
#line 537 "middle_rec.m"
              {
#line 537 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lvals_3_p_0(ll_backend__middle_rec__LvalList_29, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 537 "middle_rec.m"
                return;
              }
#line 535 "middle_rec.m"
            }
#line 520 "middle_rec.m"
          else
#line 520 "middle_rec.m"
            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 525 "middle_rec.m"
              *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
            else
#line 520 "middle_rec.m"
              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 544 "middle_rec.m"
                {
#line 544 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Lval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 544 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 544 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_96;

#line 545 "middle_rec.m"
                  {
#line 545 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_33, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_96);
                  }
#line 546 "middle_rec.m"
                  {
#line 546 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_34, ll_backend__middle_rec__STATE_VARIABLE_Used_96_96, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 546 "middle_rec.m"
                    return;
                  }
#line 544 "middle_rec.m"
                }
#line 520 "middle_rec.m"
              else
#line 520 "middle_rec.m"
                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 539 "middle_rec.m"
                  {
#line 539 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Instrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 539 "middle_rec.m"
                    MR_Integer ll_backend__middle_rec__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 539 "middle_rec.m"
                    MR_Integer ll_backend__middle_rec__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 540 "middle_rec.m"
                    {
#line 540 "middle_rec.m"
                      ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_32, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 540 "middle_rec.m"
                      return;
                    }
#line 539 "middle_rec.m"
                  }
#line 520 "middle_rec.m"
                else
#line 520 "middle_rec.m"
                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 588 "middle_rec.m"
                    {
#line 588 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 582 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 589 "middle_rec.m"
                      {
#line 589 "middle_rec.m"
                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_108, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 589 "middle_rec.m"
                        return;
                      }
#line 588 "middle_rec.m"
                    }
#line 520 "middle_rec.m"
                  else
#line 520 "middle_rec.m"
                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 531 "middle_rec.m"
                      *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
                    else
#line 520 "middle_rec.m"
                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 532 "middle_rec.m"
                        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
                      else
#line 520 "middle_rec.m"
                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 579 "middle_rec.m"
                          {
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__Components_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 9)));
#line 579 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 10)));

#line 580 "middle_rec.m"
                            {
#line 580 "middle_rec.m"
                              ll_backend__middle_rec__find_used_registers_components_3_p_0(ll_backend__middle_rec__Components_52, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 580 "middle_rec.m"
                              return;
                            }
#line 579 "middle_rec.m"
                          }
#line 520 "middle_rec.m"
                        else
#line 520 "middle_rec.m"
                          if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 599 "middle_rec.m"
                            {
#line 599 "middle_rec.m"
                              MR_Word ll_backend__middle_rec__Lval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 597 "middle_rec.m"
                              MR_Word ll_backend__middle_rec__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 600 "middle_rec.m"
                              {
#line 600 "middle_rec.m"
                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_109, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 600 "middle_rec.m"
                                return;
                              }
#line 599 "middle_rec.m"
                            }
#line 520 "middle_rec.m"
                          else
#line 520 "middle_rec.m"
                            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 588 "middle_rec.m"
                              {
#line 588 "middle_rec.m"
                                MR_Word ll_backend__middle_rec__Rval_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 589 "middle_rec.m"
                                {
#line 589 "middle_rec.m"
                                  ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_114, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 589 "middle_rec.m"
                                  return;
                                }
#line 588 "middle_rec.m"
                              }
#line 520 "middle_rec.m"
                            else
#line 520 "middle_rec.m"
                              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 524 "middle_rec.m"
                                *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
                              else
#line 520 "middle_rec.m"
                                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 588 "middle_rec.m"
                                  {
#line 588 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__Rval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 583 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 589 "middle_rec.m"
                                    {
#line 589 "middle_rec.m"
                                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_115, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 589 "middle_rec.m"
                                      return;
                                    }
#line 588 "middle_rec.m"
                                  }
#line 520 "middle_rec.m"
                                else
#line 520 "middle_rec.m"
                                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 548 "middle_rec.m"
                                    {
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__MaybeRegionRval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__MaybeReuse_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_91_91;
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__Lval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__Rval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 548 "middle_rec.m"
                                      MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));

#line 549 "middle_rec.m"
                                      {
#line 549 "middle_rec.m"
                                        ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_102, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_91_91);
                                      }
#line 550 "middle_rec.m"
                                      {
#line 550 "middle_rec.m"
                                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_103, ll_backend__middle_rec__STATE_VARIABLE_Used_91_91, &ll_backend__middle_rec__STATE_VARIABLE_Used_92_92);
                                      }
#line 554 "middle_rec.m"
                                      if ((ll_backend__middle_rec__MaybeRegionRval_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "middle_rec.m"
                                        ll_backend__middle_rec__STATE_VARIABLE_Used_93_93 = ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
#line 554 "middle_rec.m"
                                      else
#line 552 "middle_rec.m"
                                        {
#line 552 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__RegionRval_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeRegionRval_39, (MR_Integer) 0)));

#line 553 "middle_rec.m"
                                          {
#line 553 "middle_rec.m"
                                            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__RegionRval_41, ll_backend__middle_rec__STATE_VARIABLE_Used_92_92, &ll_backend__middle_rec__STATE_VARIABLE_Used_93_93);
                                          }
#line 552 "middle_rec.m"
                                        }
#line 566 "middle_rec.m"
                                      if ((ll_backend__middle_rec__MaybeReuse_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "middle_rec.m"
                                        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
#line 566 "middle_rec.m"
                                      else
#line 558 "middle_rec.m"
                                        {
#line 558 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__ReuseRval_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 0)));
#line 558 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__MaybeFlagLval_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 1)));
#line 558 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;

#line 559 "middle_rec.m"
                                          {
#line 559 "middle_rec.m"
                                            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ReuseRval_42, ll_backend__middle_rec__STATE_VARIABLE_Used_93_93, &ll_backend__middle_rec__STATE_VARIABLE_Used_94_94);
                                          }
#line 563 "middle_rec.m"
                                          if ((ll_backend__middle_rec__MaybeFlagLval_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "middle_rec.m"
                                            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;
#line 563 "middle_rec.m"
                                          else
#line 561 "middle_rec.m"
                                            {
#line 561 "middle_rec.m"
                                              MR_Word ll_backend__middle_rec__FlagLval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeFlagLval_43, (MR_Integer) 0)));

#line 562 "middle_rec.m"
                                              {
#line 562 "middle_rec.m"
                                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__FlagLval_44, ll_backend__middle_rec__STATE_VARIABLE_Used_94_94, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 562 "middle_rec.m"
                                                return;
                                              }
#line 561 "middle_rec.m"
                                            }
#line 558 "middle_rec.m"
                                        }
#line 548 "middle_rec.m"
                                    }
#line 520 "middle_rec.m"
                                  else
#line 520 "middle_rec.m"
                                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 530 "middle_rec.m"
                                      *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
                                    else
#line 520 "middle_rec.m"
                                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 599 "middle_rec.m"
                                        {
#line 599 "middle_rec.m"
                                          MR_Word ll_backend__middle_rec__Lval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 596 "middle_rec.m"
                                          MR_Integer ll_backend__middle_rec__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 596 "middle_rec.m"
                                          MR_Integer ll_backend__middle_rec__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 600 "middle_rec.m"
                                          {
#line 600 "middle_rec.m"
                                            ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_116, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 600 "middle_rec.m"
                                            return;
                                          }
#line 599 "middle_rec.m"
                                        }
#line 520 "middle_rec.m"
                                      else
#line 520 "middle_rec.m"
                                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 599 "middle_rec.m"
                                          {
#line 599 "middle_rec.m"
                                            MR_Word ll_backend__middle_rec__Lval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 598 "middle_rec.m"
                                            MR_Word ll_backend__middle_rec__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 600 "middle_rec.m"
                                            {
#line 600 "middle_rec.m"
                                              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_117, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 600 "middle_rec.m"
                                              return;
                                            }
#line 599 "middle_rec.m"
                                          }
#line 520 "middle_rec.m"
                                        else
#line 520 "middle_rec.m"
                                          if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 544 "middle_rec.m"
                                            {
#line 544 "middle_rec.m"
                                              MR_Word ll_backend__middle_rec__Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 544 "middle_rec.m"
                                              MR_Word ll_backend__middle_rec__Rval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 544 "middle_rec.m"
                                              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_120;

#line 545 "middle_rec.m"
                                              {
#line 545 "middle_rec.m"
                                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_118, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_120);
                                              }
#line 546 "middle_rec.m"
                                              {
#line 546 "middle_rec.m"
                                                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_119, ll_backend__middle_rec__STATE_VARIABLE_Used_96_120, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 546 "middle_rec.m"
                                                return;
                                              }
#line 544 "middle_rec.m"
                                            }
#line 520 "middle_rec.m"
                                          else
#line 520 "middle_rec.m"
                                            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 523 "middle_rec.m"
                                              *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
                                            else
#line 520 "middle_rec.m"
                                              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 602 "middle_rec.m"
                                                {
#line 602 "middle_rec.m"
                                                  MR_Word ll_backend__middle_rec__LCLval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 602 "middle_rec.m"
                                                  MR_Integer ll_backend__middle_rec__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 603 "middle_rec.m"
                                                  {
#line 603 "middle_rec.m"
                                                    ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCLval_69, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 603 "middle_rec.m"
                                                    return;
                                                  }
#line 602 "middle_rec.m"
                                                }
#line 520 "middle_rec.m"
                                              else
#line 520 "middle_rec.m"
                                                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 613 "middle_rec.m"
                                                  {
#line 613 "middle_rec.m"
                                                    MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_77_77;
#line 613 "middle_rec.m"
                                                    MR_Word ll_backend__middle_rec__LCRval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 613 "middle_rec.m"
                                                    MR_Word ll_backend__middle_rec__LCSRval_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 614 "middle_rec.m"
                                                    {
#line 614 "middle_rec.m"
                                                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_111, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_77_77);
                                                    }
#line 615 "middle_rec.m"
                                                    {
#line 615 "middle_rec.m"
                                                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_112, ll_backend__middle_rec__STATE_VARIABLE_Used_77_77, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 615 "middle_rec.m"
                                                      return;
                                                    }
#line 613 "middle_rec.m"
                                                  }
#line 520 "middle_rec.m"
                                                else
#line 520 "middle_rec.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 609 "middle_rec.m"
                                                    {
#line 609 "middle_rec.m"
                                                      MR_Word ll_backend__middle_rec__LCSRval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 609 "middle_rec.m"
                                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_79_79;
#line 609 "middle_rec.m"
                                                      MR_Word ll_backend__middle_rec__LCRval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 609 "middle_rec.m"
                                                      MR_Word ll_backend__middle_rec__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 610 "middle_rec.m"
                                                      {
#line 610 "middle_rec.m"
                                                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_110, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_79_79);
                                                      }
#line 611 "middle_rec.m"
                                                      {
#line 611 "middle_rec.m"
                                                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_73, ll_backend__middle_rec__STATE_VARIABLE_Used_79_79, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 611 "middle_rec.m"
                                                        return;
                                                      }
#line 609 "middle_rec.m"
                                                    }
#line 520 "middle_rec.m"
                                                  else
#line 520 "middle_rec.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 605 "middle_rec.m"
                                                      {
#line 605 "middle_rec.m"
                                                        MR_Word ll_backend__middle_rec__LCRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 605 "middle_rec.m"
                                                        MR_Word ll_backend__middle_rec__LCSLval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 605 "middle_rec.m"
                                                        MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_81_81;
#line 605 "middle_rec.m"
                                                        MR_Word ll_backend__middle_rec__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 606 "middle_rec.m"
                                                        {
#line 606 "middle_rec.m"
                                                          ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_70, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_81_81);
                                                        }
#line 607 "middle_rec.m"
                                                        {
#line 607 "middle_rec.m"
                                                          ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCSLval_71, ll_backend__middle_rec__STATE_VARIABLE_Used_81_81, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 607 "middle_rec.m"
                                                          return;
                                                        }
#line 605 "middle_rec.m"
                                                      }
#line 520 "middle_rec.m"
                                                    else
#line 520 "middle_rec.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 521 "middle_rec.m"
                                                        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
                                                      else
#line 520 "middle_rec.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 599 "middle_rec.m"
                                                          {
#line 599 "middle_rec.m"
                                                            MR_Word ll_backend__middle_rec__Lval_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 600 "middle_rec.m"
                                                            {
#line 600 "middle_rec.m"
                                                              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_121, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 600 "middle_rec.m"
                                                              return;
                                                            }
#line 599 "middle_rec.m"
                                                          }
#line 520 "middle_rec.m"
                                                        else
#line 520 "middle_rec.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 599 "middle_rec.m"
                                                            {
#line 599 "middle_rec.m"
                                                              MR_Word ll_backend__middle_rec__Lval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 600 "middle_rec.m"
                                                              {
#line 600 "middle_rec.m"
                                                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_122, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 600 "middle_rec.m"
                                                                return;
                                                              }
#line 599 "middle_rec.m"
                                                            }
#line 520 "middle_rec.m"
                                                          else
#line 520 "middle_rec.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 522 "middle_rec.m"
                                                              *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
                                                            else
#line 520 "middle_rec.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 588 "middle_rec.m"
                                                                {
#line 588 "middle_rec.m"
                                                                  MR_Word ll_backend__middle_rec__Rval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 589 "middle_rec.m"
                                                                  {
#line 589 "middle_rec.m"
                                                                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_123, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 589 "middle_rec.m"
                                                                    return;
                                                                  }
#line 588 "middle_rec.m"
                                                                }
#line 520 "middle_rec.m"
                                                              else
#line 520 "middle_rec.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 526 "middle_rec.m"
                                                                  *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
                                                                else
#line 520 "middle_rec.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 571 "middle_rec.m"
                                                                    {
#line 571 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__IdRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 571 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__NumLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 571 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__AddrLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 571 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_88_88;
#line 571 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_89_89;
#line 570 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec___FillOp_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 570 "middle_rec.m"
                                                                      MR_Word ll_backend__middle_rec___EmbeddedStackFrame_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 572 "middle_rec.m"
                                                                      {
#line 572 "middle_rec.m"
                                                                        ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__IdRval_46, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_88_88);
                                                                      }
#line 573 "middle_rec.m"
                                                                      {
#line 573 "middle_rec.m"
                                                                        ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__NumLval_47, ll_backend__middle_rec__STATE_VARIABLE_Used_88_88, &ll_backend__middle_rec__STATE_VARIABLE_Used_89_89);
                                                                      }
#line 574 "middle_rec.m"
                                                                      {
#line 574 "middle_rec.m"
                                                                        ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__AddrLval_48, ll_backend__middle_rec__STATE_VARIABLE_Used_89_89, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 574 "middle_rec.m"
                                                                        return;
                                                                      }
#line 571 "middle_rec.m"
                                                                    }
#line 520 "middle_rec.m"
                                                                  else
#line 520 "middle_rec.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 576 "middle_rec.m"
                                                                      {
#line 576 "middle_rec.m"
                                                                        MR_Word ll_backend__middle_rec__ValueRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 576 "middle_rec.m"
                                                                        MR_Word ll_backend__middle_rec___SetOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 576 "middle_rec.m"
                                                                        MR_Word ll_backend__middle_rec___EmbeddedStackFrame_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 577 "middle_rec.m"
                                                                        {
#line 577 "middle_rec.m"
                                                                          ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ValueRval_50, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 577 "middle_rec.m"
                                                                          return;
                                                                        }
#line 576 "middle_rec.m"
                                                                      }
#line 520 "middle_rec.m"
                                                                    else
#line 520 "middle_rec.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 588 "middle_rec.m"
                                                                        {
#line 588 "middle_rec.m"
                                                                          MR_Word ll_backend__middle_rec__Rval_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 586 "middle_rec.m"
                                                                          MR_Word ll_backend__middle_rec___Rsn_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 589 "middle_rec.m"
                                                                          {
#line 589 "middle_rec.m"
                                                                            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_124, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 589 "middle_rec.m"
                                                                            return;
                                                                          }
#line 588 "middle_rec.m"
                                                                        }
#line 520 "middle_rec.m"
                                                                      else
#line 520 "middle_rec.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 588 "middle_rec.m"
                                                                          {
#line 588 "middle_rec.m"
                                                                            MR_Word ll_backend__middle_rec__Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 589 "middle_rec.m"
                                                                            {
#line 589 "middle_rec.m"
                                                                              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_125, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 589 "middle_rec.m"
                                                                              return;
                                                                            }
#line 588 "middle_rec.m"
                                                                          }
#line 520 "middle_rec.m"
                                                                        else
#line 520 "middle_rec.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 599 "middle_rec.m"
                                                                            {
#line 599 "middle_rec.m"
                                                                              MR_Word ll_backend__middle_rec__Lval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 600 "middle_rec.m"
                                                                              {
#line 600 "middle_rec.m"
                                                                                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_126, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 600 "middle_rec.m"
                                                                                return;
                                                                              }
#line 599 "middle_rec.m"
                                                                            }
#line 520 "middle_rec.m"
                                                                          else
#line 520 "middle_rec.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 599 "middle_rec.m"
                                                                              {
#line 599 "middle_rec.m"
                                                                                MR_Word ll_backend__middle_rec__Lval_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 600 "middle_rec.m"
                                                                                {
#line 600 "middle_rec.m"
                                                                                  ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_127, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 600 "middle_rec.m"
                                                                                  return;
                                                                                }
#line 599 "middle_rec.m"
                                                                              }
#line 520 "middle_rec.m"
                                                                            else
#line 520 "middle_rec.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 599 "middle_rec.m"
                                                                                {
#line 599 "middle_rec.m"
                                                                                  MR_Word ll_backend__middle_rec__Lval_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 600 "middle_rec.m"
                                                                                  {
#line 600 "middle_rec.m"
                                                                                    ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_128, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 600 "middle_rec.m"
                                                                                    return;
                                                                                  }
#line 599 "middle_rec.m"
                                                                                }
#line 520 "middle_rec.m"
                                                                              else
#line 527 "middle_rec.m"
                                                                                *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 520 "middle_rec.m"
  }
#line 515 "middle_rec.m"
}

#line 507 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
#line 507 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 507 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 507 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 507 "middle_rec.m"
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
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 510 "middle_rec.m"
        else
#line 511 "middle_rec.m"
          {
#line 511 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Uinstr_7;
#line 511 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 511 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 511 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;
#line 511 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_8_8;

#line 511 "middle_rec.m"
            ll_backend__middle_rec__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
#line 511 "middle_rec.m"
            ll_backend__middle_rec__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 1)));
#line 512 "middle_rec.m"
            {
#line 512 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_instr_3_p_0(ll_backend__middle_rec__Uinstr_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_14_14);
            }
#line 513 "middle_rec.m"
            /* direct tailcall eliminated */
#line 513 "middle_rec.m"
            {
#line 513 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_9;
#line 513 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;

#line 513 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 513 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 513 "middle_rec.m"
            }
#line 513 "middle_rec.m"
            continue;
#line 511 "middle_rec.m"
          }
#line 510 "middle_rec.m"
      }
#line 510 "middle_rec.m"
      break;
#line 510 "middle_rec.m"
    }
#line 507 "middle_rec.m"
}

#line 496 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_3_p_0(
#line 496 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 496 "middle_rec.m"
  MR_Integer ll_backend__middle_rec__N_2,
#line 496 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
#line 496 "middle_rec.m"
{
#line 498 "middle_rec.m"
  while (MR_TRUE)
#line 498 "middle_rec.m"
    {
#line 498 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 498 "middle_rec.m"
      {
#line 498 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 498 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "middle_rec.m"
          {
#line 498 "middle_rec.m"
            {
#line 498 "middle_rec.m"
              MR_Word base;
#line 498 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "middle_rec.m"
              *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 498 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 498 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__N_2));
#line 498 "middle_rec.m"
            }
#line 498 "middle_rec.m"
          }
#line 498 "middle_rec.m"
        else
#line 499 "middle_rec.m"
          {
#line 499 "middle_rec.m"
            MR_Integer ll_backend__middle_rec__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 499 "middle_rec.m"
            MR_Word ll_backend__middle_rec__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

#line 500 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__N_2 < ll_backend__middle_rec__H_6);
#line 502 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 501 "middle_rec.m"
              {
#line 501 "middle_rec.m"
                {
#line 501 "middle_rec.m"
                  MR_Word base;
#line 501 "middle_rec.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "middle_rec.m"
                  *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 501 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 501 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__N_2));
#line 501 "middle_rec.m"
                }
#line 501 "middle_rec.m"
              }
#line 502 "middle_rec.m"
            else
#line 503 "middle_rec.m"
              {
#line 503 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__N1_10 = (ll_backend__middle_rec__N_2 + (MR_Integer) 1);

#line 504 "middle_rec.m"
                /* direct tailcall eliminated */
#line 504 "middle_rec.m"
                {
#line 504 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__T_7;
#line 504 "middle_rec.m"
                  MR_Integer ll_backend__middle_rec__N__tmp_copy_2 = ll_backend__middle_rec__N1_10;

#line 504 "middle_rec.m"
                  ll_backend__middle_rec__N_2 = ll_backend__middle_rec__N__tmp_copy_2;
#line 504 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 504 "middle_rec.m"
                }
#line 504 "middle_rec.m"
                continue;
#line 503 "middle_rec.m"
              }
#line 499 "middle_rec.m"
          }
#line 498 "middle_rec.m"
      }
#line 498 "middle_rec.m"
      break;
#line 498 "middle_rec.m"
    }
#line 496 "middle_rec.m"
}

#line 487 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
#line 487 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 487 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__UnusedReg_4)
#line 487 "middle_rec.m"
{
#line 490 "middle_rec.m"
  {
#line 490 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 490 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 490 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Used0_5;
#line 490 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Used1_6;
#line 490 "middle_rec.m"
    MR_Word ll_backend__middle_rec__UsedList_7;

#line 491 "middle_rec.m"
    {
#line 491 "middle_rec.m"
      mercury__set__init_1_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, &ll_backend__middle_rec__Used0_5);
    }
#line 492 "middle_rec.m"
    {
#line 492 "middle_rec.m"
      ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_3, ll_backend__middle_rec__Used0_5, &ll_backend__middle_rec__Used1_6);
    }
#line 493 "middle_rec.m"
    {
#line 493 "middle_rec.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, ll_backend__middle_rec__Used1_6, &ll_backend__middle_rec__UsedList_7);
    }
#line 494 "middle_rec.m"
    {
#line 494 "middle_rec.m"
      ll_backend__middle_rec__find_unused_register_2_3_p_0(ll_backend__middle_rec__UsedList_7, (MR_Integer) 1, ll_backend__middle_rec__UnusedReg_4);
#line 494 "middle_rec.m"
      return;
    }
#line 490 "middle_rec.m"
  }
#line 487 "middle_rec.m"
}

#line 472 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
#line 472 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 472 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
#line 472 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
#line 472 "middle_rec.m"
{
#line 475 "middle_rec.m"
  {
#line 475 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 475 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "middle_rec.m"
      *ll_backend__middle_rec__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 475 "middle_rec.m"
    else
#line 476 "middle_rec.m"
      {
#line 476 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 476 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr_8;
#line 476 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs_9;
#line 480 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Lives0_10;
#line 480 "middle_rec.m"
        MR_String ll_backend__middle_rec__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 1)));
#line 477 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 0)));

#line 477 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_13_13)) == (MR_mktag((MR_Integer) 2)));
#line 477 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 477 "middle_rec.m"
          {
#line 477 "middle_rec.m"
            ll_backend__middle_rec__Lives0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
#line 478 "middle_rec.m"
            {
#line 478 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lives_12;
#line 478 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_14_14;

#line 478 "middle_rec.m"
              {
#line 478 "middle_rec.m"
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__middle_rec__HeadVar__2_2)), ll_backend__middle_rec__Lives0_10, &ll_backend__middle_rec__Lives_12);
              }
#line 479 "middle_rec.m"
              {
#line 479 "middle_rec.m"
                ll_backend__middle_rec__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 479 "middle_rec.m"
                MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_14_14, 0) = ((MR_Box) (ll_backend__middle_rec__Lives_12));
#line 479 "middle_rec.m"
              }
#line 479 "middle_rec.m"
              {
#line 479 "middle_rec.m"
                ll_backend__middle_rec__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 0) = ((MR_Box) (ll_backend__middle_rec__V_14_14));
#line 479 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 1) = ((MR_Box) (ll_backend__middle_rec__Comment_11));
#line 479 "middle_rec.m"
              }
#line 478 "middle_rec.m"
            }
#line 477 "middle_rec.m"
          }
#line 477 "middle_rec.m"
        else
#line 481 "middle_rec.m"
          ll_backend__middle_rec__Instr_8 = ll_backend__middle_rec__Instr0_5;
#line 483 "middle_rec.m"
        {
#line 483 "middle_rec.m"
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__Instrs0_6, ll_backend__middle_rec__HeadVar__2_2, &ll_backend__middle_rec__Instrs_9);
        }
#line 476 "middle_rec.m"
        {
#line 476 "middle_rec.m"
          MR_Word base;
#line 476 "middle_rec.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "middle_rec.m"
          *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 476 "middle_rec.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr_8));
#line 476 "middle_rec.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs_9));
#line 476 "middle_rec.m"
        }
#line 476 "middle_rec.m"
      }
#line 475 "middle_rec.m"
  }
#line 472 "middle_rec.m"
}

#line 448 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
#line 448 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 448 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Before_2,
#line 448 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__After_3)
#line 448 "middle_rec.m"
{
#line 451 "middle_rec.m"
  {
#line 451 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 451 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "middle_rec.m"
      {
#line 452 "middle_rec.m"
        {
#line 452 "middle_rec.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "did not find call");
#line 452 "middle_rec.m"
          return;
        }
#line 451 "middle_rec.m"
      }
#line 451 "middle_rec.m"
    else
#line 453 "middle_rec.m"
      {
#line 453 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 453 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 454 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
#line 454 "middle_rec.m"
        MR_String ll_backend__middle_rec__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
#line 454 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_13_13;
#line 454 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_14_14;
#line 454 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_15_15;
#line 454 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_16_16;
#line 454 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_17_17;
#line 454 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_18_18;

#line 454 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 454 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 454 "middle_rec.m"
          {
#line 454 "middle_rec.m"
            ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 1)));
#line 454 "middle_rec.m"
            ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 2)));
#line 454 "middle_rec.m"
            ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 3)));
#line 454 "middle_rec.m"
            ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 4)));
#line 454 "middle_rec.m"
            ll_backend__middle_rec__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 5)));
#line 454 "middle_rec.m"
            ll_backend__middle_rec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 6)));
#line 462 "middle_rec.m"
            {
#line 462 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs3_22;
#line 456 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs2_20;
#line 456 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instr2_21;
#line 456 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_27_27;
#line 458 "middle_rec.m"
              MR_String ll_backend__middle_rec__V_24_24;
#line 458 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_23_23;

#line 456 "middle_rec.m"
              {
#line 456 "middle_rec.m"
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Instrs2_20);
              }
#line 457 "middle_rec.m"
              ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Instrs2_20)) == (MR_mktag((MR_Integer) 1)));
#line 457 "middle_rec.m"
              if (ll_backend__middle_rec__succeeded)
#line 457 "middle_rec.m"
                {
#line 457 "middle_rec.m"
                  ll_backend__middle_rec__Instr2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 0)));
#line 457 "middle_rec.m"
                  ll_backend__middle_rec__Instrs3_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 1)));
#line 458 "middle_rec.m"
                  ll_backend__middle_rec__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 0)));
#line 458 "middle_rec.m"
                  ll_backend__middle_rec__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 1)));
#line 458 "middle_rec.m"
                  ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 458 "middle_rec.m"
                  if (ll_backend__middle_rec__succeeded)
#line 458 "middle_rec.m"
                    ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 1)));
#line 457 "middle_rec.m"
                }
#line 462 "middle_rec.m"
              if (ll_backend__middle_rec__succeeded)
#line 460 "middle_rec.m"
                {
#line 460 "middle_rec.m"
                  *ll_backend__middle_rec__Before_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "middle_rec.m"
                  *ll_backend__middle_rec__After_3 = ll_backend__middle_rec__Instrs3_22;
#line 460 "middle_rec.m"
                }
#line 462 "middle_rec.m"
              else
#line 463 "middle_rec.m"
                {
#line 463 "middle_rec.m"
                  {
#line 463 "middle_rec.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "call not followed by label");
#line 463 "middle_rec.m"
                    return;
                  }
#line 463 "middle_rec.m"
                }
#line 462 "middle_rec.m"
            }
#line 454 "middle_rec.m"
          }
#line 454 "middle_rec.m"
        else
#line 466 "middle_rec.m"
          {
#line 466 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Before1_25;

#line 466 "middle_rec.m"
            {
#line 466 "middle_rec.m"
              ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Before1_25, ll_backend__middle_rec__After_3);
            }
#line 467 "middle_rec.m"
            {
#line 467 "middle_rec.m"
              MR_Word base;
#line 467 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "middle_rec.m"
              *ll_backend__middle_rec__Before_2 = base;
#line 467 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
#line 467 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Before1_25));
#line 467 "middle_rec.m"
            }
#line 466 "middle_rec.m"
          }
#line 453 "middle_rec.m"
      }
#line 451 "middle_rec.m"
  }
#line 448 "middle_rec.m"
}

#line 423 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
#line 423 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 423 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Target_2,
#line 423 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_3)
#line 423 "middle_rec.m"
{
#line 426 "middle_rec.m"
  {
#line 426 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 426 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "middle_rec.m"
      {
#line 427 "middle_rec.m"
        {
#line 427 "middle_rec.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "empty list");
#line 427 "middle_rec.m"
          return;
        }
#line 426 "middle_rec.m"
      }
#line 426 "middle_rec.m"
    else
#line 428 "middle_rec.m"
      {
#line 428 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 441 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Test_13;
#line 429 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
#line 429 "middle_rec.m"
        MR_String ll_backend__middle_rec___Comment_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
#line 429 "middle_rec.m"
        MR_Word ll_backend__middle_rec___OldTarget_14;

#line 429 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 429 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 429 "middle_rec.m"
          {
#line 429 "middle_rec.m"
            ll_backend__middle_rec__Test_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 1)));
#line 429 "middle_rec.m"
            ll_backend__middle_rec___OldTarget_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 2)));
#line 435 "middle_rec.m"
            {
#line 435 "middle_rec.m"
              MR_Word ll_backend__middle_rec__NewTest_18;
#line 435 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_24_24;
#line 435 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_25_25;
#line 435 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_26_26;

#line 432 "middle_rec.m"
              if ((ll_backend__middle_rec__Instrs0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "middle_rec.m"
                {
#line 431 "middle_rec.m"
                }
#line 432 "middle_rec.m"
              else
#line 433 "middle_rec.m"
                {
#line 434 "middle_rec.m"
                  {
#line 434 "middle_rec.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "if_val followed by other instructions");
#line 434 "middle_rec.m"
                    return;
                  }
#line 433 "middle_rec.m"
                }
#line 436 "middle_rec.m"
              {
#line 436 "middle_rec.m"
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__middle_rec__Test_13, &ll_backend__middle_rec__NewTest_18);
              }
#line 438 "middle_rec.m"
              {
#line 438 "middle_rec.m"
                ll_backend__middle_rec__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 438 "middle_rec.m"
                MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, 0) = ((MR_Box) (ll_backend__middle_rec__Target_2));
#line 438 "middle_rec.m"
              }
#line 438 "middle_rec.m"
              {
#line 438 "middle_rec.m"
                ll_backend__middle_rec__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 438 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 1) = ((MR_Box) (ll_backend__middle_rec__NewTest_18));
#line 438 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 2) = ((MR_Box) (ll_backend__middle_rec__V_26_26));
#line 438 "middle_rec.m"
              }
#line 440 "middle_rec.m"
              {
#line 440 "middle_rec.m"
                ll_backend__middle_rec__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 0) = ((MR_Box) (ll_backend__middle_rec__V_25_25));
#line 440 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 1) = ((MR_Box) ((MR_String) "test on downward loop"));
#line 440 "middle_rec.m"
              }
#line 437 "middle_rec.m"
              {
#line 437 "middle_rec.m"
                MR_Word base;
#line 437 "middle_rec.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "middle_rec.m"
                *ll_backend__middle_rec__Instrs_3 = base;
#line 437 "middle_rec.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__V_24_24));
#line 437 "middle_rec.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "middle_rec.m"
              }
#line 435 "middle_rec.m"
            }
#line 429 "middle_rec.m"
          }
#line 429 "middle_rec.m"
        else
#line 442 "middle_rec.m"
          {
#line 442 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs1_19;

#line 442 "middle_rec.m"
            {
#line 442 "middle_rec.m"
              ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__Instrs0_10, ll_backend__middle_rec__Target_2, &ll_backend__middle_rec__Instrs1_19);
            }
#line 443 "middle_rec.m"
            {
#line 443 "middle_rec.m"
              MR_Word base;
#line 443 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "middle_rec.m"
              *ll_backend__middle_rec__Instrs_3 = base;
#line 443 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
#line 443 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs1_19));
#line 443 "middle_rec.m"
            }
#line 442 "middle_rec.m"
          }
#line 428 "middle_rec.m"
      }
#line 426 "middle_rec.m"
  }
#line 423 "middle_rec.m"
}

#line 241 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_8_p_0(
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Var_9,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__BaseConsId_10,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Base_11,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Recursive_12,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_13,
#line 241 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Code_14,
#line 241 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_66,
#line 241 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_67)
#line 241 "middle_rec.m"
{
#line 246 "middle_rec.m"
  {
#line 246 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TypeCtorInfo_238_238;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__StackSlots_16;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__VarSet_17;
#line 246 "middle_rec.m"
    MR_String ll_backend__middle_rec__SlotsComment_18;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ModuleInfo_19;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__PredId_20;
#line 246 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__ProcId_21;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryLabel_22;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__VarType_23;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__CheaperTagTest_24;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseLabel_25;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryTestCode_26;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryTestInstrs_27;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__StoreMap_28;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BranchStart_29;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseGoalCode_30;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeEnd1_31;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseSaveCode_32;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecGoalCode_33;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeEnd_34;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecSaveCode_35;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ArgModes_36;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__HeadVars_37;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Args_38;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__LiveArgs_39;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EpilogCode_40;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseCode_41;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecCode_42;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__LiveValCode_43;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseInstrs_44;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecInstrs_45;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AvoidInstrs_46;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AuxReg_47;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BeforeInstrs0_48;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AfterInstrs_49;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BeforeInstrs_50;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop1Label_51;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop2Label_52;
#line 246 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__FrameSize0_53;
#line 246 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__FrameSize_54;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop1Test_55;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeIncrSp_56;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeDecrSp_57;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__InitAuxReg_58;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__IncrAuxReg_59;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__DecrAuxReg_60;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TestAuxReg_61;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_70_70;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_72_72;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_74_74;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_76_76;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_77_77;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_79_79;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_80_80;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_81_81;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_82_82;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_83_83;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_84_84;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_85_85;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_86_86;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_87_87;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_89_89;
#line 246 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_90_90;

#line 247 "middle_rec.m"
    {
#line 247 "middle_rec.m"
      ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__StackSlots_16);
    }
#line 248 "middle_rec.m"
    {
#line 248 "middle_rec.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__VarSet_17);
    }
#line 249 "middle_rec.m"
    {
#line 249 "middle_rec.m"
      ll_backend__middle_rec__SlotsComment_18 = hlds__hlds_llds__explain_stack_slots_2_f_0(ll_backend__middle_rec__StackSlots_16, ll_backend__middle_rec__VarSet_17);
    }
#line 250 "middle_rec.m"
    {
#line 250 "middle_rec.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__ModuleInfo_19);
    }
#line 251 "middle_rec.m"
    {
#line 251 "middle_rec.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__PredId_20);
    }
#line 252 "middle_rec.m"
    {
#line 252 "middle_rec.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__ProcId_21);
    }
#line 253 "middle_rec.m"
    {
#line 253 "middle_rec.m"
      ll_backend__middle_rec__EntryLabel_22 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__middle_rec__ModuleInfo_19, ll_backend__middle_rec__PredId_20, ll_backend__middle_rec__ProcId_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 255 "middle_rec.m"
    {
#line 255 "middle_rec.m"
      ll_backend__code_info__pre_goal_update_4_p_0(ll_backend__middle_rec__SwitchGoalInfo_13, (MR_Integer) 0, ll_backend__middle_rec__STATE_VARIABLE_CI_0_66, &ll_backend__middle_rec__STATE_VARIABLE_CI_70_70);
    }
#line 256 "middle_rec.m"
    {
#line 256 "middle_rec.m"
      ll_backend__middle_rec__VarType_23 = ll_backend__code_info__variable_type_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_70_70, ll_backend__middle_rec__Var_9);
    }
#line 257 "middle_rec.m"
    {
#line 257 "middle_rec.m"
      ll_backend__middle_rec__CheaperTagTest_24 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_70_70, ll_backend__middle_rec__VarType_23);
    }
#line 258 "middle_rec.m"
    {
#line 258 "middle_rec.m"
      ll_backend__unify_gen__generate_tag_test_8_p_0(ll_backend__middle_rec__Var_9, ll_backend__middle_rec__BaseConsId_10, ll_backend__middle_rec__CheaperTagTest_24, (MR_Integer) 0, &ll_backend__middle_rec__BaseLabel_25, &ll_backend__middle_rec__EntryTestCode_26, ll_backend__middle_rec__STATE_VARIABLE_CI_70_70, &ll_backend__middle_rec__STATE_VARIABLE_CI_72_72);
    }
#line 3018 "ll_backend.middle_rec.c"
    ll_backend__middle_rec__TypeCtorInfo_238_238 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 260 "middle_rec.m"
    {
#line 260 "middle_rec.m"
      ll_backend__middle_rec__EntryTestInstrs_27 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__EntryTestCode_26);
    }
#line 262 "middle_rec.m"
    {
#line 262 "middle_rec.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__middle_rec__SwitchGoalInfo_13, &ll_backend__middle_rec__StoreMap_28);
    }
#line 263 "middle_rec.m"
    {
#line 263 "middle_rec.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_72_72, &ll_backend__middle_rec__BranchStart_29);
    }
#line 264 "middle_rec.m"
    {
#line 264 "middle_rec.m"
      ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 0, ll_backend__middle_rec__Base_11, &ll_backend__middle_rec__BaseGoalCode_30, ll_backend__middle_rec__STATE_VARIABLE_CI_72_72, &ll_backend__middle_rec__STATE_VARIABLE_CI_74_74);
    }
#line 265 "middle_rec.m"
    {
#line 265 "middle_rec.m"
      ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__middle_rec__MaybeEnd1_31, &ll_backend__middle_rec__BaseSaveCode_32, ll_backend__middle_rec__STATE_VARIABLE_CI_74_74, &ll_backend__middle_rec__STATE_VARIABLE_CI_76_76);
    }
#line 266 "middle_rec.m"
    {
#line 266 "middle_rec.m"
      ll_backend__code_info__reset_to_position_3_p_0(ll_backend__middle_rec__BranchStart_29, ll_backend__middle_rec__STATE_VARIABLE_CI_76_76, &ll_backend__middle_rec__STATE_VARIABLE_CI_77_77);
    }
#line 267 "middle_rec.m"
    {
#line 267 "middle_rec.m"
      ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 0, ll_backend__middle_rec__Recursive_12, &ll_backend__middle_rec__RecGoalCode_33, ll_backend__middle_rec__STATE_VARIABLE_CI_77_77, &ll_backend__middle_rec__STATE_VARIABLE_CI_79_79);
    }
#line 268 "middle_rec.m"
    {
#line 268 "middle_rec.m"
      ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_28, ll_backend__middle_rec__MaybeEnd1_31, &ll_backend__middle_rec__MaybeEnd_34, &ll_backend__middle_rec__RecSaveCode_35, ll_backend__middle_rec__STATE_VARIABLE_CI_79_79, &ll_backend__middle_rec__STATE_VARIABLE_CI_80_80);
    }
#line 270 "middle_rec.m"
    {
#line 270 "middle_rec.m"
      ll_backend__code_info__post_goal_update_3_p_0(ll_backend__middle_rec__SwitchGoalInfo_13, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, &ll_backend__middle_rec__STATE_VARIABLE_CI_81_81);
    }
#line 271 "middle_rec.m"
    {
#line 271 "middle_rec.m"
      ll_backend__code_info__after_all_branches_4_p_0(ll_backend__middle_rec__StoreMap_28, ll_backend__middle_rec__MaybeEnd_34, ll_backend__middle_rec__STATE_VARIABLE_CI_81_81, &ll_backend__middle_rec__STATE_VARIABLE_CI_82_82);
    }
#line 273 "middle_rec.m"
    {
#line 273 "middle_rec.m"
      ll_backend__middle_rec__ArgModes_36 = ll_backend__code_info__get_arginfo_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_82_82);
    }
#line 274 "middle_rec.m"
    {
#line 274 "middle_rec.m"
      ll_backend__middle_rec__HeadVars_37 = ll_backend__code_info__get_headvars_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_82_82);
    }
#line 275 "middle_rec.m"
    {
#line 275 "middle_rec.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__middle_rec_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__middle_rec__HeadVars_37, ll_backend__middle_rec__ArgModes_36, &ll_backend__middle_rec__Args_38);
    }
#line 276 "middle_rec.m"
    {
#line 276 "middle_rec.m"
      ll_backend__code_info__setup_return_5_p_0(ll_backend__middle_rec__Args_38, &ll_backend__middle_rec__LiveArgs_39, &ll_backend__middle_rec__EpilogCode_40, ll_backend__middle_rec__STATE_VARIABLE_CI_82_82, &ll_backend__middle_rec__STATE_VARIABLE_CI_83_83);
    }
#line 278 "middle_rec.m"
    {
#line 278 "middle_rec.m"
      ll_backend__middle_rec__V_84_84 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseSaveCode_32, ll_backend__middle_rec__EpilogCode_40);
    }
#line 278 "middle_rec.m"
    {
#line 278 "middle_rec.m"
      ll_backend__middle_rec__BaseCode_41 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseGoalCode_30, ll_backend__middle_rec__V_84_84);
    }
#line 279 "middle_rec.m"
    {
#line 279 "middle_rec.m"
      ll_backend__middle_rec__V_85_85 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__RecSaveCode_35, ll_backend__middle_rec__EpilogCode_40);
    }
#line 279 "middle_rec.m"
    {
#line 279 "middle_rec.m"
      ll_backend__middle_rec__RecCode_42 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__RecGoalCode_33, ll_backend__middle_rec__V_85_85);
    }
#line 281 "middle_rec.m"
    {
#line 281 "middle_rec.m"
      ll_backend__middle_rec__V_87_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 281 "middle_rec.m"
      MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_87_87, 0) = ((MR_Box) (ll_backend__middle_rec__LiveArgs_39));
#line 281 "middle_rec.m"
    }
#line 280 "middle_rec.m"
    {
#line 280 "middle_rec.m"
      ll_backend__middle_rec__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "middle_rec.m"
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_86_86, 0) = ((MR_Box) (ll_backend__middle_rec__V_87_87));
#line 280 "middle_rec.m"
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_86_86, 1) = ((MR_Box) ((MR_String) ""));
#line 280 "middle_rec.m"
    }
#line 280 "middle_rec.m"
    {
#line 280 "middle_rec.m"
      ll_backend__middle_rec__LiveValCode_43 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_86_86)));
    }
#line 284 "middle_rec.m"
    {
#line 284 "middle_rec.m"
      ll_backend__middle_rec__BaseInstrs_44 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseCode_41);
    }
#line 285 "middle_rec.m"
    {
#line 285 "middle_rec.m"
      ll_backend__middle_rec__RecInstrs_45 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__RecCode_42);
    }
#line 291 "middle_rec.m"
    {
#line 291 "middle_rec.m"
      ll_backend__middle_rec__V_89_89 = ll_backend__opt_util__block_refers_to_stack_1_f_0(ll_backend__middle_rec__BaseInstrs_44);
    }
#line 291 "middle_rec.m"
    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_89_89 == (MR_Integer) 0);
#line 246 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 246 "middle_rec.m"
      {
#line 293 "middle_rec.m"
        {
#line 293 "middle_rec.m"
          ll_backend__middle_rec__AvoidInstrs_46 = mercury__list__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseInstrs_44, ll_backend__middle_rec__RecInstrs_45);
        }
#line 294 "middle_rec.m"
        {
#line 294 "middle_rec.m"
          ll_backend__middle_rec__find_unused_register_2_p_0(ll_backend__middle_rec__AvoidInstrs_46, &ll_backend__middle_rec__AuxReg_47);
        }
#line 296 "middle_rec.m"
        {
#line 296 "middle_rec.m"
          ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__RecInstrs_45, &ll_backend__middle_rec__BeforeInstrs0_48, &ll_backend__middle_rec__AfterInstrs_49);
        }
#line 297 "middle_rec.m"
        {
#line 297 "middle_rec.m"
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__BeforeInstrs0_48, ll_backend__middle_rec__AuxReg_47, &ll_backend__middle_rec__BeforeInstrs_50);
        }
#line 299 "middle_rec.m"
        {
#line 299 "middle_rec.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop1Label_51, ll_backend__middle_rec__STATE_VARIABLE_CI_83_83, &ll_backend__middle_rec__STATE_VARIABLE_CI_90_90);
        }
#line 300 "middle_rec.m"
        {
#line 300 "middle_rec.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop2Label_52, ll_backend__middle_rec__STATE_VARIABLE_CI_90_90, ll_backend__middle_rec__STATE_VARIABLE_CI_67);
        }
#line 301 "middle_rec.m"
        {
#line 301 "middle_rec.m"
          ll_backend__code_info__get_total_stackslot_count_2_p_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_67, &ll_backend__middle_rec__FrameSize0_53);
        }
#line 302 "middle_rec.m"
        {
#line 302 "middle_rec.m"
          ll_backend__middle_rec__FrameSize_54 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_67, ll_backend__middle_rec__FrameSize0_53);
        }
#line 304 "middle_rec.m"
        {
#line 304 "middle_rec.m"
          ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__EntryTestInstrs_27, ll_backend__middle_rec__Loop1Label_51, &ll_backend__middle_rec__Loop1Test_55);
        }
#line 306 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__FrameSize_54 == (MR_Integer) 0);
#line 331 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 307 "middle_rec.m"
          {
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_92_92;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_93_93;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_94_94;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_98_98;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_99_99;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_100_100;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_102_102;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_103_103;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_107_107;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_108_108;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_109_109;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_116_116;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_117_117;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_118_118;
#line 307 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_124_124;

#line 307 "middle_rec.m"
            {
#line 307 "middle_rec.m"
              ll_backend__middle_rec__MaybeIncrSp_56 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238);
            }
#line 308 "middle_rec.m"
            {
#line 308 "middle_rec.m"
              ll_backend__middle_rec__MaybeDecrSp_57 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238);
            }
#line 310 "middle_rec.m"
            ll_backend__middle_rec__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[1]);
#line 310 "middle_rec.m"
            {
#line 310 "middle_rec.m"
              ll_backend__middle_rec__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 310 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_93_93, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 310 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_93_93, 2) = ((MR_Box) (ll_backend__middle_rec__V_94_94));
#line 310 "middle_rec.m"
            }
#line 309 "middle_rec.m"
            {
#line 309 "middle_rec.m"
              ll_backend__middle_rec__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 0) = ((MR_Box) (ll_backend__middle_rec__V_93_93));
#line 309 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
#line 309 "middle_rec.m"
            }
#line 309 "middle_rec.m"
            {
#line 309 "middle_rec.m"
              ll_backend__middle_rec__InitAuxReg_58 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_92_92)));
            }
#line 316 "middle_rec.m"
            {
#line 316 "middle_rec.m"
              ll_backend__middle_rec__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 316 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_102_102, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 316 "middle_rec.m"
            }
#line 316 "middle_rec.m"
            ll_backend__middle_rec__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[2]);
#line 315 "middle_rec.m"
            {
#line 315 "middle_rec.m"
              ll_backend__middle_rec__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 315 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 315 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_100_100, 2) = ((MR_Box) (ll_backend__middle_rec__V_102_102));
#line 315 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_100_100, 3) = ((MR_Box) (ll_backend__middle_rec__V_103_103));
#line 315 "middle_rec.m"
            }
#line 314 "middle_rec.m"
            {
#line 314 "middle_rec.m"
              ll_backend__middle_rec__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 314 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 314 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 314 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 2) = ((MR_Box) (ll_backend__middle_rec__V_100_100));
#line 314 "middle_rec.m"
            }
#line 313 "middle_rec.m"
            {
#line 313 "middle_rec.m"
              ll_backend__middle_rec__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 0) = ((MR_Box) (ll_backend__middle_rec__V_99_99));
#line 313 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
#line 313 "middle_rec.m"
            }
#line 313 "middle_rec.m"
            {
#line 313 "middle_rec.m"
              ll_backend__middle_rec__IncrAuxReg_59 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_98_98)));
            }
#line 321 "middle_rec.m"
            {
#line 321 "middle_rec.m"
              ll_backend__middle_rec__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 321 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 321 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 321 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_109_109, 2) = ((MR_Box) (ll_backend__middle_rec__V_102_102));
#line 321 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_109_109, 3) = ((MR_Box) (ll_backend__middle_rec__V_103_103));
#line 321 "middle_rec.m"
            }
#line 320 "middle_rec.m"
            {
#line 320 "middle_rec.m"
              ll_backend__middle_rec__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 320 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 320 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_108_108, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 320 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_108_108, 2) = ((MR_Box) (ll_backend__middle_rec__V_109_109));
#line 320 "middle_rec.m"
            }
#line 319 "middle_rec.m"
            {
#line 319 "middle_rec.m"
              ll_backend__middle_rec__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_107_107, 0) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
#line 319 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_107_107, 1) = ((MR_Box) ((MR_String) "decrement loop counter"));
#line 319 "middle_rec.m"
            }
#line 319 "middle_rec.m"
            {
#line 319 "middle_rec.m"
              ll_backend__middle_rec__DecrAuxReg_60 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_107_107)));
            }
#line 327 "middle_rec.m"
            {
#line 327 "middle_rec.m"
              ll_backend__middle_rec__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_118_118, 2) = ((MR_Box) (ll_backend__middle_rec__V_102_102));
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_118_118, 3) = ((MR_Box) (ll_backend__middle_rec__V_94_94));
#line 327 "middle_rec.m"
            }
#line 327 "middle_rec.m"
            {
#line 327 "middle_rec.m"
              ll_backend__middle_rec__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 327 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_124_124, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_52));
#line 327 "middle_rec.m"
            }
#line 326 "middle_rec.m"
            {
#line 326 "middle_rec.m"
              ll_backend__middle_rec__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 326 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 326 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_117_117, 1) = ((MR_Box) (ll_backend__middle_rec__V_118_118));
#line 326 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_117_117, 2) = ((MR_Box) (ll_backend__middle_rec__V_124_124));
#line 326 "middle_rec.m"
            }
#line 325 "middle_rec.m"
            {
#line 325 "middle_rec.m"
              ll_backend__middle_rec__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_116_116, 0) = ((MR_Box) (ll_backend__middle_rec__V_117_117));
#line 325 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_116_116, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
#line 325 "middle_rec.m"
            }
#line 325 "middle_rec.m"
            {
#line 325 "middle_rec.m"
              ll_backend__middle_rec__TestAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_116_116)));
            }
#line 307 "middle_rec.m"
          }
#line 331 "middle_rec.m"
        else
#line 332 "middle_rec.m"
          {
#line 332 "middle_rec.m"
            MR_String ll_backend__middle_rec__PushMsg_62;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_126_126;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_127_127;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_130_130;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_131_131;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_133_133;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_134_134;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_135_135;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_138_138;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_139_139;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_140_140;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_144_144;
#line 332 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_145_145;

#line 332 "middle_rec.m"
            {
#line 332 "middle_rec.m"
              ll_backend__middle_rec__PushMsg_62 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__middle_rec__ModuleInfo_19, ll_backend__middle_rec__PredId_20, ll_backend__middle_rec__ProcId_21);
            }
#line 334 "middle_rec.m"
            {
#line 334 "middle_rec.m"
              ll_backend__middle_rec__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 334 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
#line 334 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_127_127, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_54));
#line 334 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_127_127, 2) = ((MR_Box) (ll_backend__middle_rec__PushMsg_62));
#line 334 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_127_127, 3) = ((MR_Box) ((MR_Integer) 1));
#line 334 "middle_rec.m"
            }
#line 333 "middle_rec.m"
            {
#line 333 "middle_rec.m"
              ll_backend__middle_rec__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_126_126, 0) = ((MR_Box) (ll_backend__middle_rec__V_127_127));
#line 333 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_126_126, 1) = ((MR_Box) ((MR_String) ""));
#line 333 "middle_rec.m"
            }
#line 333 "middle_rec.m"
            {
#line 333 "middle_rec.m"
              ll_backend__middle_rec__MaybeIncrSp_56 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_126_126)));
            }
#line 337 "middle_rec.m"
            {
#line 337 "middle_rec.m"
              ll_backend__middle_rec__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
#line 337 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_131_131, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_54));
#line 337 "middle_rec.m"
            }
#line 336 "middle_rec.m"
            {
#line 336 "middle_rec.m"
              ll_backend__middle_rec__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_130_130, 0) = ((MR_Box) (ll_backend__middle_rec__V_131_131));
#line 336 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_130_130, 1) = ((MR_Box) ((MR_String) ""));
#line 336 "middle_rec.m"
            }
#line 336 "middle_rec.m"
            {
#line 336 "middle_rec.m"
              ll_backend__middle_rec__MaybeDecrSp_57 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_130_130)));
            }
#line 340 "middle_rec.m"
            ll_backend__middle_rec__V_135_135 = (MR_Word) &ll_backend__middle_rec_scalar_common_2[2];
#line 340 "middle_rec.m"
            {
#line 340 "middle_rec.m"
              ll_backend__middle_rec__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 340 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 340 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_134_134, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 340 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_134_134, 2) = ((MR_Box) (ll_backend__middle_rec__V_135_135));
#line 340 "middle_rec.m"
            }
#line 339 "middle_rec.m"
            {
#line 339 "middle_rec.m"
              ll_backend__middle_rec__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_133_133, 0) = ((MR_Box) (ll_backend__middle_rec__V_134_134));
#line 339 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_133_133, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
#line 339 "middle_rec.m"
            }
#line 339 "middle_rec.m"
            {
#line 339 "middle_rec.m"
              ll_backend__middle_rec__InitAuxReg_58 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_133_133)));
            }
#line 342 "middle_rec.m"
            {
#line 342 "middle_rec.m"
              ll_backend__middle_rec__IncrAuxReg_59 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238);
            }
#line 343 "middle_rec.m"
            {
#line 343 "middle_rec.m"
              ll_backend__middle_rec__DecrAuxReg_60 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238);
            }
#line 345 "middle_rec.m"
            {
#line 345 "middle_rec.m"
              ll_backend__middle_rec__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 345 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_144_144, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_47));
#line 345 "middle_rec.m"
            }
#line 345 "middle_rec.m"
            {
#line 345 "middle_rec.m"
              ll_backend__middle_rec__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 345 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 345 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 345 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 2) = ((MR_Box) (ll_backend__middle_rec__V_135_135));
#line 345 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 3) = ((MR_Box) (ll_backend__middle_rec__V_144_144));
#line 345 "middle_rec.m"
            }
#line 345 "middle_rec.m"
            {
#line 345 "middle_rec.m"
              ll_backend__middle_rec__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 345 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_145_145, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_52));
#line 345 "middle_rec.m"
            }
#line 345 "middle_rec.m"
            {
#line 345 "middle_rec.m"
              ll_backend__middle_rec__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 345 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_139_139, 1) = ((MR_Box) (ll_backend__middle_rec__V_140_140));
#line 345 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_139_139, 2) = ((MR_Box) (ll_backend__middle_rec__V_145_145));
#line 345 "middle_rec.m"
            }
#line 344 "middle_rec.m"
            {
#line 344 "middle_rec.m"
              ll_backend__middle_rec__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_138_138, 0) = ((MR_Box) (ll_backend__middle_rec__V_139_139));
#line 344 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_138_138, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
#line 344 "middle_rec.m"
            }
#line 344 "middle_rec.m"
            {
#line 344 "middle_rec.m"
              ll_backend__middle_rec__TestAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_138_138)));
            }
#line 332 "middle_rec.m"
          }
#line 377 "middle_rec.m"
        if ((ll_backend__middle_rec__AfterInstrs_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "middle_rec.m"
          {
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_204_204;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_205_205;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_206_206;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_207_207;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_209_209;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_210_210;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_211_211;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_214_214;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_215_215;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_216_216;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_217_217;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_218_218;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_219_219;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_221_221;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_222_222;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_223_223;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_224_224;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_225_225;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_226_226;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_227_227;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_228_228;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_230_230;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_231_231;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_232_232;
#line 357 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_233_233;

#line 360 "middle_rec.m"
            {
#line 360 "middle_rec.m"
              ll_backend__middle_rec__V_207_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_207_207, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 360 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_207_207, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_22));
#line 360 "middle_rec.m"
            }
#line 360 "middle_rec.m"
            {
#line 360 "middle_rec.m"
              ll_backend__middle_rec__V_206_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_206_206, 0) = ((MR_Box) (ll_backend__middle_rec__V_207_207));
#line 360 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_206_206, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 360 "middle_rec.m"
            }
#line 361 "middle_rec.m"
            {
#line 361 "middle_rec.m"
              ll_backend__middle_rec__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 361 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_211_211, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_18));
#line 361 "middle_rec.m"
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
#line 360 "middle_rec.m"
            {
#line 360 "middle_rec.m"
              ll_backend__middle_rec__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_209_209, 0) = ((MR_Box) (ll_backend__middle_rec__V_210_210));
#line 360 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 360 "middle_rec.m"
            }
#line 359 "middle_rec.m"
            {
#line 359 "middle_rec.m"
              ll_backend__middle_rec__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_205_205, 0) = ((MR_Box) (ll_backend__middle_rec__V_206_206));
#line 359 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_205_205, 1) = ((MR_Box) (ll_backend__middle_rec__V_209_209));
#line 359 "middle_rec.m"
            }
#line 362 "middle_rec.m"
            {
#line 362 "middle_rec.m"
              ll_backend__middle_rec__V_204_204 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_205_205);
            }
#line 363 "middle_rec.m"
            {
#line 363 "middle_rec.m"
              ll_backend__middle_rec__V_215_215 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__EntryTestInstrs_27);
            }
#line 365 "middle_rec.m"
            {
#line 365 "middle_rec.m"
              ll_backend__middle_rec__V_219_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_219_219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 365 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_219_219, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_51));
#line 365 "middle_rec.m"
            }
#line 364 "middle_rec.m"
            {
#line 364 "middle_rec.m"
              ll_backend__middle_rec__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_218_218, 0) = ((MR_Box) (ll_backend__middle_rec__V_219_219));
#line 364 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_218_218, 1) = ((MR_Box) ((MR_String) "start of the down loop"));
#line 364 "middle_rec.m"
            }
#line 366 "middle_rec.m"
            {
#line 366 "middle_rec.m"
              ll_backend__middle_rec__V_217_217 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_218_218)));
            }
#line 367 "middle_rec.m"
            {
#line 367 "middle_rec.m"
              ll_backend__middle_rec__V_222_222 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BeforeInstrs_50);
            }
#line 368 "middle_rec.m"
            {
#line 368 "middle_rec.m"
              ll_backend__middle_rec__V_224_224 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__Loop1Test_55);
            }
#line 370 "middle_rec.m"
            {
#line 370 "middle_rec.m"
              ll_backend__middle_rec__V_228_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_228_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 370 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_228_228, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_25));
#line 370 "middle_rec.m"
            }
#line 369 "middle_rec.m"
            {
#line 369 "middle_rec.m"
              ll_backend__middle_rec__V_227_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_227_227, 0) = ((MR_Box) (ll_backend__middle_rec__V_228_228));
#line 369 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_227_227, 1) = ((MR_Box) ((MR_String) "start of base case"));
#line 369 "middle_rec.m"
            }
#line 371 "middle_rec.m"
            {
#line 371 "middle_rec.m"
              ll_backend__middle_rec__V_226_226 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_227_227)));
            }
#line 372 "middle_rec.m"
            {
#line 372 "middle_rec.m"
              ll_backend__middle_rec__V_231_231 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseInstrs_44);
            }
#line 373 "middle_rec.m"
            {
#line 373 "middle_rec.m"
              ll_backend__middle_rec__V_233_233 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (&ll_backend__middle_rec_scalar_common_1[4])));
            }
#line 372 "middle_rec.m"
            {
#line 372 "middle_rec.m"
              ll_backend__middle_rec__V_232_232 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__LiveValCode_43, ll_backend__middle_rec__V_233_233);
            }
#line 371 "middle_rec.m"
            {
#line 371 "middle_rec.m"
              ll_backend__middle_rec__V_230_230 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_231_231, ll_backend__middle_rec__V_232_232);
            }
#line 368 "middle_rec.m"
            {
#line 368 "middle_rec.m"
              ll_backend__middle_rec__V_225_225 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_226_226, ll_backend__middle_rec__V_230_230);
            }
#line 367 "middle_rec.m"
            {
#line 367 "middle_rec.m"
              ll_backend__middle_rec__V_223_223 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_224_224, ll_backend__middle_rec__V_225_225);
            }
#line 366 "middle_rec.m"
            {
#line 366 "middle_rec.m"
              ll_backend__middle_rec__V_221_221 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_222_222, ll_backend__middle_rec__V_223_223);
            }
#line 363 "middle_rec.m"
            {
#line 363 "middle_rec.m"
              ll_backend__middle_rec__V_216_216 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_217_217, ll_backend__middle_rec__V_221_221);
            }
#line 362 "middle_rec.m"
            {
#line 362 "middle_rec.m"
              ll_backend__middle_rec__V_214_214 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_215_215, ll_backend__middle_rec__V_216_216);
            }
#line 358 "middle_rec.m"
            {
#line 358 "middle_rec.m"
              *ll_backend__middle_rec__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_204_204, ll_backend__middle_rec__V_214_214);
            }
#line 357 "middle_rec.m"
            ll_backend__middle_rec__succeeded = MR_TRUE;
#line 357 "middle_rec.m"
          }
#line 377 "middle_rec.m"
        else
#line 378 "middle_rec.m"
          {
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__BaseLabels_65;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_147_147;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_148_148;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_149_149;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_150_150;
#line 378 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_151_151;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_152_152;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_153_153;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_154_154;
#line 378 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_155_155;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_156_156;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_157_157;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_158_158;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_159_159;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_160_160;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_161_161;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_162_162;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_163_163;
#line 378 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_164_164;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_165_165;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_166_166;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_167_167;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_168_168;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_169_169;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_170_170;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_171_171;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_172_172;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_173_173;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_174_174;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_175_175;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_176_176;
#line 378 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_177_177;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_178_178;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_179_179;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_180_180;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_181_181;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_182_182;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_183_183;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_184_184;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_185_185;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_186_186;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_187_187;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_188_188;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_189_189;
#line 378 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_190_190;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_191_191;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_192_192;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_193_193;
#line 378 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_194_194;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_195_195;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_196_196;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_197_197;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_198_198;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_199_199;
#line 378 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_200_200;
#line 378 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_203_203;

#line 384 "middle_rec.m"
            {
#line 384 "middle_rec.m"
              ll_backend__middle_rec__find_labels_2_p_0(ll_backend__middle_rec__BaseInstrs_44, &ll_backend__middle_rec__BaseLabels_65);
            }
#line 385 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BaseLabels_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 378 "middle_rec.m"
              {
#line 388 "middle_rec.m"
                ll_backend__middle_rec__V_151_151 = (MR_String) "Procedure entry point";
#line 389 "middle_rec.m"
                ll_backend__middle_rec__V_155_155 = (MR_String) "";
#line 390 "middle_rec.m"
                ll_backend__middle_rec__V_156_156 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "middle_rec.m"
                {
#line 388 "middle_rec.m"
                  ll_backend__middle_rec__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 388 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_150_150, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_22));
#line 388 "middle_rec.m"
                }
#line 388 "middle_rec.m"
                {
#line 388 "middle_rec.m"
                  ll_backend__middle_rec__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_149_149, 0) = ((MR_Box) (ll_backend__middle_rec__V_150_150));
#line 388 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_149_149, 1) = ((MR_Box) (ll_backend__middle_rec__V_151_151));
#line 388 "middle_rec.m"
                }
#line 389 "middle_rec.m"
                {
#line 389 "middle_rec.m"
                  ll_backend__middle_rec__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 389 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_154_154, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_18));
#line 389 "middle_rec.m"
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
#line 388 "middle_rec.m"
                {
#line 388 "middle_rec.m"
                  ll_backend__middle_rec__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_152_152, 0) = ((MR_Box) (ll_backend__middle_rec__V_153_153));
#line 388 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_152_152, 1) = ((MR_Box) (ll_backend__middle_rec__V_156_156));
#line 388 "middle_rec.m"
                }
#line 387 "middle_rec.m"
                {
#line 387 "middle_rec.m"
                  ll_backend__middle_rec__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_148_148, 0) = ((MR_Box) (ll_backend__middle_rec__V_149_149));
#line 387 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_148_148, 1) = ((MR_Box) (ll_backend__middle_rec__V_152_152));
#line 387 "middle_rec.m"
                }
#line 390 "middle_rec.m"
                {
#line 390 "middle_rec.m"
                  ll_backend__middle_rec__V_147_147 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_148_148);
                }
#line 391 "middle_rec.m"
                {
#line 391 "middle_rec.m"
                  ll_backend__middle_rec__V_158_158 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__EntryTestInstrs_27);
                }
#line 394 "middle_rec.m"
                ll_backend__middle_rec__V_164_164 = (MR_String) "start of the down loop";
#line 394 "middle_rec.m"
                {
#line 394 "middle_rec.m"
                  ll_backend__middle_rec__V_163_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_163_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 394 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_163_163, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_51));
#line 394 "middle_rec.m"
                }
#line 393 "middle_rec.m"
                {
#line 393 "middle_rec.m"
                  ll_backend__middle_rec__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_162_162, 0) = ((MR_Box) (ll_backend__middle_rec__V_163_163));
#line 393 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_162_162, 1) = ((MR_Box) (ll_backend__middle_rec__V_164_164));
#line 393 "middle_rec.m"
                }
#line 395 "middle_rec.m"
                {
#line 395 "middle_rec.m"
                  ll_backend__middle_rec__V_161_161 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_162_162)));
                }
#line 398 "middle_rec.m"
                {
#line 398 "middle_rec.m"
                  ll_backend__middle_rec__V_168_168 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BeforeInstrs_50);
                }
#line 399 "middle_rec.m"
                {
#line 399 "middle_rec.m"
                  ll_backend__middle_rec__V_170_170 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__Loop1Test_55);
                }
#line 400 "middle_rec.m"
                {
#line 400 "middle_rec.m"
                  ll_backend__middle_rec__V_172_172 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseInstrs_44);
                }
#line 402 "middle_rec.m"
                ll_backend__middle_rec__V_177_177 = (MR_String) "";
#line 402 "middle_rec.m"
                {
#line 402 "middle_rec.m"
                  ll_backend__middle_rec__V_176_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_176_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 402 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_176_176, 1) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_52));
#line 402 "middle_rec.m"
                }
#line 401 "middle_rec.m"
                {
#line 401 "middle_rec.m"
                  ll_backend__middle_rec__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_175_175, 0) = ((MR_Box) (ll_backend__middle_rec__V_176_176));
#line 401 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_175_175, 1) = ((MR_Box) (ll_backend__middle_rec__V_177_177));
#line 401 "middle_rec.m"
                }
#line 403 "middle_rec.m"
                {
#line 403 "middle_rec.m"
                  ll_backend__middle_rec__V_174_174 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_175_175)));
                }
#line 404 "middle_rec.m"
                {
#line 404 "middle_rec.m"
                  ll_backend__middle_rec__V_179_179 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__AfterInstrs_49);
                }
#line 410 "middle_rec.m"
                ll_backend__middle_rec__V_189_189 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "middle_rec.m"
                ll_backend__middle_rec__V_190_190 = (MR_String) "exit from recursive case";
#line 411 "middle_rec.m"
                ll_backend__middle_rec__V_194_194 = (MR_String) "start of base case";
#line 412 "middle_rec.m"
                ll_backend__middle_rec__V_195_195 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "middle_rec.m"
                ll_backend__middle_rec__V_188_188 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3]);
#line 410 "middle_rec.m"
                ll_backend__middle_rec__V_187_187 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[5];
#line 411 "middle_rec.m"
                {
#line 411 "middle_rec.m"
                  ll_backend__middle_rec__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 411 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_193_193, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_25));
#line 411 "middle_rec.m"
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
#line 410 "middle_rec.m"
                {
#line 410 "middle_rec.m"
                  ll_backend__middle_rec__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_191_191, 0) = ((MR_Box) (ll_backend__middle_rec__V_192_192));
#line 410 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_191_191, 1) = ((MR_Box) (ll_backend__middle_rec__V_195_195));
#line 410 "middle_rec.m"
                }
#line 409 "middle_rec.m"
                {
#line 409 "middle_rec.m"
                  ll_backend__middle_rec__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_186_186, 0) = ((MR_Box) (ll_backend__middle_rec__V_187_187));
#line 409 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_186_186, 1) = ((MR_Box) (ll_backend__middle_rec__V_191_191));
#line 409 "middle_rec.m"
                }
#line 412 "middle_rec.m"
                {
#line 412 "middle_rec.m"
                  ll_backend__middle_rec__V_185_185 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_186_186);
                }
#line 413 "middle_rec.m"
                {
#line 413 "middle_rec.m"
                  ll_backend__middle_rec__V_197_197 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__BaseInstrs_44);
                }
#line 416 "middle_rec.m"
                ll_backend__middle_rec__V_203_203 = (MR_String) "exit from base case";
#line 415 "middle_rec.m"
                ll_backend__middle_rec__V_200_200 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[4];
#line 414 "middle_rec.m"
                {
#line 414 "middle_rec.m"
                  ll_backend__middle_rec__V_199_199 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ((MR_Box) (ll_backend__middle_rec__V_200_200)));
                }
#line 413 "middle_rec.m"
                {
#line 413 "middle_rec.m"
                  ll_backend__middle_rec__V_198_198 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__LiveValCode_43, ll_backend__middle_rec__V_199_199);
                }
#line 412 "middle_rec.m"
                {
#line 412 "middle_rec.m"
                  ll_backend__middle_rec__V_196_196 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_197_197, ll_backend__middle_rec__V_198_198);
                }
#line 408 "middle_rec.m"
                {
#line 408 "middle_rec.m"
                  ll_backend__middle_rec__V_184_184 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_185_185, ll_backend__middle_rec__V_196_196);
                }
#line 407 "middle_rec.m"
                {
#line 407 "middle_rec.m"
                  ll_backend__middle_rec__V_183_183 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__LiveValCode_43, ll_backend__middle_rec__V_184_184);
                }
#line 406 "middle_rec.m"
                {
#line 406 "middle_rec.m"
                  ll_backend__middle_rec__V_182_182 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__TestAuxReg_61, ll_backend__middle_rec__V_183_183);
                }
#line 405 "middle_rec.m"
                {
#line 405 "middle_rec.m"
                  ll_backend__middle_rec__V_181_181 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__DecrAuxReg_60, ll_backend__middle_rec__V_182_182);
                }
#line 404 "middle_rec.m"
                {
#line 404 "middle_rec.m"
                  ll_backend__middle_rec__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__MaybeDecrSp_57, ll_backend__middle_rec__V_181_181);
                }
#line 403 "middle_rec.m"
                {
#line 403 "middle_rec.m"
                  ll_backend__middle_rec__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_179_179, ll_backend__middle_rec__V_180_180);
                }
#line 400 "middle_rec.m"
                {
#line 400 "middle_rec.m"
                  ll_backend__middle_rec__V_173_173 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_174_174, ll_backend__middle_rec__V_178_178);
                }
#line 399 "middle_rec.m"
                {
#line 399 "middle_rec.m"
                  ll_backend__middle_rec__V_171_171 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_172_172, ll_backend__middle_rec__V_173_173);
                }
#line 398 "middle_rec.m"
                {
#line 398 "middle_rec.m"
                  ll_backend__middle_rec__V_169_169 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_170_170, ll_backend__middle_rec__V_171_171);
                }
#line 397 "middle_rec.m"
                {
#line 397 "middle_rec.m"
                  ll_backend__middle_rec__V_167_167 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_168_168, ll_backend__middle_rec__V_169_169);
                }
#line 396 "middle_rec.m"
                {
#line 396 "middle_rec.m"
                  ll_backend__middle_rec__V_166_166 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__IncrAuxReg_59, ll_backend__middle_rec__V_167_167);
                }
#line 395 "middle_rec.m"
                {
#line 395 "middle_rec.m"
                  ll_backend__middle_rec__V_165_165 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__MaybeIncrSp_56, ll_backend__middle_rec__V_166_166);
                }
#line 392 "middle_rec.m"
                {
#line 392 "middle_rec.m"
                  ll_backend__middle_rec__V_160_160 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_161_161, ll_backend__middle_rec__V_165_165);
                }
#line 391 "middle_rec.m"
                {
#line 391 "middle_rec.m"
                  ll_backend__middle_rec__V_159_159 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__InitAuxReg_58, ll_backend__middle_rec__V_160_160);
                }
#line 390 "middle_rec.m"
                {
#line 390 "middle_rec.m"
                  ll_backend__middle_rec__V_157_157 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_158_158, ll_backend__middle_rec__V_159_159);
                }
#line 386 "middle_rec.m"
                {
#line 386 "middle_rec.m"
                  *ll_backend__middle_rec__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_238_238, ll_backend__middle_rec__V_147_147, ll_backend__middle_rec__V_157_157);
                }
#line 386 "middle_rec.m"
                ll_backend__middle_rec__succeeded = MR_TRUE;
#line 378 "middle_rec.m"
              }
#line 378 "middle_rec.m"
          }
#line 246 "middle_rec.m"
      }
#line 246 "middle_rec.m"
    return ll_backend__middle_rec__succeeded;
#line 246 "middle_rec.m"
  }
#line 241 "middle_rec.m"
}

#line 229 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
#line 229 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1)
#line 229 "middle_rec.m"
{
#line 231 "middle_rec.m"
  while (MR_TRUE)
#line 231 "middle_rec.m"
    {
#line 231 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 231 "middle_rec.m"
      {
#line 231 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;
#line 231 "middle_rec.m"
        MR_Word ll_backend__middle_rec__HeadVar__2_2;

#line 231 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "middle_rec.m"
          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
#line 231 "middle_rec.m"
        else
#line 232 "middle_rec.m"
          {
#line 232 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 233 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_6_6;
#line 233 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
#line 121 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));

#line 120 "middle_rec.m"
            {
#line 120 "middle_rec.m"
              ll_backend__middle_rec__V_6_6 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_8_8);
            }
#line 233 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_6_6 == (MR_Integer) 1);
#line 235 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 234 "middle_rec.m"
              {
#line 234 "middle_rec.m"
                /* direct tailcall eliminated */
#line 234 "middle_rec.m"
                {
#line 234 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Goals_4;

#line 234 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 234 "middle_rec.m"
                }
#line 234 "middle_rec.m"
                continue;
#line 234 "middle_rec.m"
              }
#line 235 "middle_rec.m"
            else
#line 236 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
#line 232 "middle_rec.m"
          }
#line 231 "middle_rec.m"
        return ll_backend__middle_rec__HeadVar__2_2;
#line 231 "middle_rec.m"
      }
#line 231 "middle_rec.m"
      break;
#line 231 "middle_rec.m"
    }
#line 229 "middle_rec.m"
}

#line 219 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
#line 219 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1)
#line 219 "middle_rec.m"
{
#line 221 "middle_rec.m"
  while (MR_TRUE)
#line 221 "middle_rec.m"
    {
#line 221 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 221 "middle_rec.m"
      {
#line 221 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;
#line 221 "middle_rec.m"
        MR_Word ll_backend__middle_rec__HeadVar__2_2;

#line 221 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "middle_rec.m"
          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
#line 221 "middle_rec.m"
        else
#line 222 "middle_rec.m"
          {
#line 222 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Goal_5;
#line 222 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_8_8, (MR_Integer) 0)));
#line 222 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_8_8, (MR_Integer) 1)));
#line 223 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_9_9;
#line 223 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11;
#line 121 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12;

#line 222 "middle_rec.m"
            ll_backend__middle_rec__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_8_8, (MR_Integer) 2)));
#line 121 "middle_rec.m"
            ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 0)));
#line 121 "middle_rec.m"
            ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 1)));
#line 120 "middle_rec.m"
            {
#line 120 "middle_rec.m"
              ll_backend__middle_rec__V_9_9 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_11_11);
            }
#line 223 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_9_9 == (MR_Integer) 1);
#line 225 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 224 "middle_rec.m"
              {
#line 224 "middle_rec.m"
                /* direct tailcall eliminated */
#line 224 "middle_rec.m"
                {
#line 224 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Cases_6;

#line 224 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 224 "middle_rec.m"
                }
#line 224 "middle_rec.m"
                continue;
#line 224 "middle_rec.m"
              }
#line 225 "middle_rec.m"
            else
#line 226 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
#line 222 "middle_rec.m"
          }
#line 221 "middle_rec.m"
        return ll_backend__middle_rec__HeadVar__2_2;
#line 221 "middle_rec.m"
      }
#line 221 "middle_rec.m"
      break;
#line 221 "middle_rec.m"
    }
#line 219 "middle_rec.m"
}

#line 123 "middle_rec.m"
static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(
#line 123 "middle_rec.m"
  MR_Word ll_backend__middle_rec__GoalExpr_3)
#line 123 "middle_rec.m"
{
#line 127 "middle_rec.m"
  while (MR_TRUE)
#line 127 "middle_rec.m"
    {
#line 127 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 127 "middle_rec.m"
      {
#line 127 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;
#line 127 "middle_rec.m"
        MR_Word ll_backend__middle_rec__OnlyBuiltins_4;

#line 127 "middle_rec.m"
        if (((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 142 "middle_rec.m"
          {
#line 142 "middle_rec.m"
            MR_Word ll_backend__middle_rec__SubGoal_10 = (MR_Word) MR_body(((MR_Word) ll_backend__middle_rec__GoalExpr_3), (MR_Integer) 0);
#line 142 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_10, (MR_Integer) 0)));
#line 121 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_10, (MR_Integer) 1)));

#line 120 "middle_rec.m"
            /* direct tailcall eliminated */
#line 120 "middle_rec.m"
            {
#line 120 "middle_rec.m"
              MR_Word ll_backend__middle_rec__GoalExpr__tmp_copy_3 = ll_backend__middle_rec__V_83_83;

#line 120 "middle_rec.m"
              ll_backend__middle_rec__GoalExpr_3 = ll_backend__middle_rec__GoalExpr__tmp_copy_3;
#line 120 "middle_rec.m"
            }
#line 120 "middle_rec.m"
            continue;
#line 142 "middle_rec.m"
          }
#line 127 "middle_rec.m"
        else
#line 127 "middle_rec.m"
          if (((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 2))))
#line 168 "middle_rec.m"
            {
#line 168 "middle_rec.m"
              MR_Word ll_backend__middle_rec__BuiltinState_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 168 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)));
#line 168 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 168 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 168 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));
#line 168 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 5)));

#line 172 "middle_rec.m"
              if ((ll_backend__middle_rec__BuiltinState_21 == (MR_Integer) 0))
#line 171 "middle_rec.m"
                ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 172 "middle_rec.m"
              else
#line 176 "middle_rec.m"
                ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 168 "middle_rec.m"
            }
#line 127 "middle_rec.m"
          else
#line 127 "middle_rec.m"
            if (((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 1))))
#line 179 "middle_rec.m"
              {
#line 179 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Uni_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 179 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)));
#line 179 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 179 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 179 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));

#line 184 "middle_rec.m"
                if (((MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) == (MR_mktag((MR_Integer) 2))))
#line 183 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 184 "middle_rec.m"
                else
#line 184 "middle_rec.m"
                  if (((MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) == (MR_mktag((MR_Integer) 0))))
#line 188 "middle_rec.m"
                    {
#line 188 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__SubInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 6)));
#line 188 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 0)));
#line 188 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 1)));
#line 188 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 2)));
#line 188 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 3)));
#line 188 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 4)));
#line 188 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 5)));

#line 192 "middle_rec.m"
                      if ((ll_backend__middle_rec__SubInfo_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 191 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 192 "middle_rec.m"
                      else
#line 193 "middle_rec.m"
                        {
#line 193 "middle_rec.m"
                          MR_Word ll_backend__middle_rec__TakeAddressFields_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_39, (MR_Integer) 0)));
#line 193 "middle_rec.m"
                          MR_Word ll_backend__middle_rec__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_39, (MR_Integer) 1)));

#line 197 "middle_rec.m"
                          if ((ll_backend__middle_rec__TakeAddressFields_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "middle_rec.m"
                            ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 197 "middle_rec.m"
                          else
#line 199 "middle_rec.m"
                            ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 193 "middle_rec.m"
                        }
#line 188 "middle_rec.m"
                    }
#line 184 "middle_rec.m"
                  else
#line 184 "middle_rec.m"
                    if (((MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) == (MR_mktag((MR_Integer) 1))))
#line 204 "middle_rec.m"
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 184 "middle_rec.m"
                    else
#line 184 "middle_rec.m"
                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uni_27, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 207 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 184 "middle_rec.m"
                      else
#line 186 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 179 "middle_rec.m"
              }
#line 127 "middle_rec.m"
            else
#line 127 "middle_rec.m"
              if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 127 "middle_rec.m"
                {
#line 127 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__ConjType_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 127 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));

#line 131 "middle_rec.m"
                  if ((ll_backend__middle_rec__ConjType_5 == (MR_Integer) 1))
#line 133 "middle_rec.m"
                    ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 131 "middle_rec.m"
                  else
#line 130 "middle_rec.m"
                    {
#line 130 "middle_rec.m"
                      return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_6);
                    }
#line 127 "middle_rec.m"
                }
#line 127 "middle_rec.m"
              else
#line 127 "middle_rec.m"
                if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 136 "middle_rec.m"
                  {
#line 136 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Goals_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));

#line 137 "middle_rec.m"
                    {
#line 137 "middle_rec.m"
                      return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_71);
                    }
#line 136 "middle_rec.m"
                  }
#line 127 "middle_rec.m"
                else
#line 127 "middle_rec.m"
                  if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 157 "middle_rec.m"
                    {
#line 157 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 157 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 157 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));
#line 157 "middle_rec.m"
                      MR_Word ll_backend__middle_rec___Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 159 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_68_68;
#line 159 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_69_69;
#line 159 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_70_70;
#line 159 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Cond_15, (MR_Integer) 0)));
#line 159 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_77_77;
#line 159 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_80_80;
#line 121 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Cond_15, (MR_Integer) 1)));
#line 121 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_78_78;
#line 121 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__V_81_81;

#line 120 "middle_rec.m"
                      {
#line 120 "middle_rec.m"
                        ll_backend__middle_rec__V_68_68 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_74_74);
                      }
#line 159 "middle_rec.m"
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_68_68 == (MR_Integer) 1);
#line 159 "middle_rec.m"
                      if (ll_backend__middle_rec__succeeded)
#line 159 "middle_rec.m"
                        {
#line 121 "middle_rec.m"
                          ll_backend__middle_rec__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Then_16, (MR_Integer) 0)));
#line 121 "middle_rec.m"
                          ll_backend__middle_rec__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Then_16, (MR_Integer) 1)));
#line 120 "middle_rec.m"
                          {
#line 120 "middle_rec.m"
                            ll_backend__middle_rec__V_69_69 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_77_77);
                          }
#line 160 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_69_69 == (MR_Integer) 1);
#line 159 "middle_rec.m"
                          if (ll_backend__middle_rec__succeeded)
#line 159 "middle_rec.m"
                            {
#line 121 "middle_rec.m"
                              ll_backend__middle_rec__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Else_17, (MR_Integer) 0)));
#line 121 "middle_rec.m"
                              ll_backend__middle_rec__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Else_17, (MR_Integer) 1)));
#line 120 "middle_rec.m"
                              {
#line 120 "middle_rec.m"
                                ll_backend__middle_rec__V_70_70 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_80_80);
                              }
#line 161 "middle_rec.m"
                              ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_70_70 == (MR_Integer) 1);
#line 159 "middle_rec.m"
                            }
#line 159 "middle_rec.m"
                        }
#line 164 "middle_rec.m"
                      if (ll_backend__middle_rec__succeeded)
#line 163 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 164 "middle_rec.m"
                      else
#line 165 "middle_rec.m"
                        ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 157 "middle_rec.m"
                    }
#line 127 "middle_rec.m"
                  else
#line 127 "middle_rec.m"
                    if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 145 "middle_rec.m"
                      {
#line 145 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 145 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
#line 147 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__FGT_13;
#line 147 "middle_rec.m"
                        MR_Word ll_backend__middle_rec__V_12_12;

#line 147 "middle_rec.m"
                        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Reason_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 147 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 147 "middle_rec.m"
                          {
#line 147 "middle_rec.m"
                            ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 1)));
#line 147 "middle_rec.m"
                            ll_backend__middle_rec__FGT_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 2)));
#line 149 "middle_rec.m"
                            if ((ll_backend__middle_rec__FGT_13 == (MR_Integer) 1))
#line 148 "middle_rec.m"
                              ll_backend__middle_rec__succeeded = MR_TRUE;
#line 149 "middle_rec.m"
                            else
#line 149 "middle_rec.m"
                              if ((ll_backend__middle_rec__FGT_13 == (MR_Integer) 2))
#line 149 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = MR_TRUE;
#line 149 "middle_rec.m"
                              else
#line 149 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = MR_FALSE;
#line 147 "middle_rec.m"
                          }
#line 153 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 152 "middle_rec.m"
                          ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 153 "middle_rec.m"
                        else
#line 120 "middle_rec.m"
                          {
#line 120 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_72, (MR_Integer) 0)));
#line 121 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_72, (MR_Integer) 1)));

#line 120 "middle_rec.m"
                            /* direct tailcall eliminated */
#line 120 "middle_rec.m"
                            {
#line 120 "middle_rec.m"
                              MR_Word ll_backend__middle_rec__GoalExpr__tmp_copy_3 = ll_backend__middle_rec__V_86_86;

#line 120 "middle_rec.m"
                              ll_backend__middle_rec__GoalExpr_3 = ll_backend__middle_rec__GoalExpr__tmp_copy_3;
#line 120 "middle_rec.m"
                            }
#line 120 "middle_rec.m"
                            continue;
#line 120 "middle_rec.m"
                          }
#line 145 "middle_rec.m"
                      }
#line 127 "middle_rec.m"
                    else
#line 127 "middle_rec.m"
                      if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 215 "middle_rec.m"
                        {
#line 216 "middle_rec.m"
                          {
#line 216 "middle_rec.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
                          }
#line 215 "middle_rec.m"
                        }
#line 127 "middle_rec.m"
                      else
#line 127 "middle_rec.m"
                        if (((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 139 "middle_rec.m"
                          {
#line 139 "middle_rec.m"
                            MR_Word ll_backend__middle_rec__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
#line 139 "middle_rec.m"
                            MR_Word ll_backend__middle_rec___Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 139 "middle_rec.m"
                            MR_Word ll_backend__middle_rec___CanFail_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));

#line 140 "middle_rec.m"
                            {
#line 140 "middle_rec.m"
                              return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(ll_backend__middle_rec__Cases_9);
                            }
#line 139 "middle_rec.m"
                          }
#line 127 "middle_rec.m"
                        else
#line 213 "middle_rec.m"
                          ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 127 "middle_rec.m"
        return ll_backend__middle_rec__OnlyBuiltins_4;
#line 127 "middle_rec.m"
      }
#line 127 "middle_rec.m"
      break;
#line 127 "middle_rec.m"
    }
#line 123 "middle_rec.m"
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
#line 95 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_7_7;
#line 96 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_8_8;

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
              ll_backend__middle_rec__V_8_8 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__GoalExpr_6);
            }
#line 96 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_8_8 == (MR_Integer) 1);
#line 98 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 97 "middle_rec.m"
              {
#line 97 "middle_rec.m"
                /* direct tailcall eliminated */
#line 97 "middle_rec.m"
                {
#line 97 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Goals_4;

#line 97 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 97 "middle_rec.m"
                }
#line 97 "middle_rec.m"
                continue;
#line 97 "middle_rec.m"
              }
#line 98 "middle_rec.m"
            else
#line 99 "middle_rec.m"
              {
#line 99 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_9_9;
#line 99 "middle_rec.m"
                MR_Word ll_backend__middle_rec__CallPredId_12;
#line 99 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__CallProcId_13;
#line 99 "middle_rec.m"
                MR_Word ll_backend__middle_rec__BuiltinState_15;
#line 99 "middle_rec.m"
                MR_Word ll_backend__middle_rec__PredId_18;
#line 99 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__ProcId_19;
#line 106 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_14_14;
#line 106 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_16_16;
#line 106 "middle_rec.m"
                MR_Word ll_backend__middle_rec__V_17_17;

#line 106 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_6)) == (MR_mktag((MR_Integer) 2)));
#line 106 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 106 "middle_rec.m"
                  {
#line 106 "middle_rec.m"
                    ll_backend__middle_rec__CallPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 0)));
#line 106 "middle_rec.m"
                    ll_backend__middle_rec__CallProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
#line 106 "middle_rec.m"
                    ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));
#line 106 "middle_rec.m"
                    ll_backend__middle_rec__BuiltinState_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 3)));
#line 106 "middle_rec.m"
                    ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 4)));
#line 106 "middle_rec.m"
                    ll_backend__middle_rec__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 5)));
#line 107 "middle_rec.m"
                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BuiltinState_15 == (MR_Integer) 2);
#line 99 "middle_rec.m"
                    if (ll_backend__middle_rec__succeeded)
#line 99 "middle_rec.m"
                      {
#line 108 "middle_rec.m"
                        {
#line 108 "middle_rec.m"
                          ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__PredId_18);
                        }
#line 109 "middle_rec.m"
                        {
#line 109 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__middle_rec__PredId_18, ll_backend__middle_rec__CallPredId_12);
                        }
#line 99 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 99 "middle_rec.m"
                          {
#line 110 "middle_rec.m"
                            {
#line 110 "middle_rec.m"
                              ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__ProcId_19);
                            }
#line 111 "middle_rec.m"
                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__ProcId_19 == ll_backend__middle_rec__CallProcId_13);
#line 99 "middle_rec.m"
                            if (ll_backend__middle_rec__succeeded)
#line 99 "middle_rec.m"
                              {
#line 100 "middle_rec.m"
                                {
#line 100 "middle_rec.m"
                                  ll_backend__middle_rec__V_9_9 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_4);
                                }
#line 100 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_9_9 == (MR_Integer) 1);
#line 99 "middle_rec.m"
                              }
#line 99 "middle_rec.m"
                          }
#line 99 "middle_rec.m"
                      }
#line 106 "middle_rec.m"
                  }
#line 99 "middle_rec.m"
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
#line 55 "middle_rec.m"
  {
#line 55 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 0)));
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 1)));
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Var_10;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Case1_11;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Case2_12;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ConsId1_13;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goal1_14;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ConsId2_15;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goal2_16;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_19_19;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_20_20;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_21_21;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_22_22;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_23_23;
#line 55 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_24_24;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_25_25;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_30_30;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalExpr_33;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goals_35;
#line 61 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_36_36;
#line 121 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_31_31;
#line 87 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_34_34;

#line 57 "middle_rec.m"
    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 57 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 57 "middle_rec.m"
      {
#line 57 "middle_rec.m"
        ll_backend__middle_rec__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_8, (MR_Integer) 1)));
#line 57 "middle_rec.m"
        ll_backend__middle_rec__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_8, (MR_Integer) 2)));
#line 57 "middle_rec.m"
        ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_8, (MR_Integer) 3)));
#line 57 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_19_19 == (MR_Integer) 1);
#line 55 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 55 "middle_rec.m"
          {
#line 57 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 57 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 57 "middle_rec.m"
              {
#line 57 "middle_rec.m"
                ll_backend__middle_rec__Case1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_20_20, (MR_Integer) 0)));
#line 57 "middle_rec.m"
                ll_backend__middle_rec__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_20_20, (MR_Integer) 1)));
#line 57 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 57 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 57 "middle_rec.m"
                  {
#line 57 "middle_rec.m"
                    ll_backend__middle_rec__Case2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_21_21, (MR_Integer) 0)));
#line 57 "middle_rec.m"
                    ll_backend__middle_rec__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_21_21, (MR_Integer) 1)));
#line 57 "middle_rec.m"
                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 55 "middle_rec.m"
                    if (ll_backend__middle_rec__succeeded)
#line 55 "middle_rec.m"
                      {
#line 58 "middle_rec.m"
                        ll_backend__middle_rec__ConsId1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_11, (MR_Integer) 0)));
#line 58 "middle_rec.m"
                        ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_11, (MR_Integer) 1)));
#line 58 "middle_rec.m"
                        ll_backend__middle_rec__Goal1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_11, (MR_Integer) 2)));
#line 58 "middle_rec.m"
                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 55 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 55 "middle_rec.m"
                          {
#line 59 "middle_rec.m"
                            ll_backend__middle_rec__ConsId2_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_12, (MR_Integer) 0)));
#line 59 "middle_rec.m"
                            ll_backend__middle_rec__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_12, (MR_Integer) 1)));
#line 59 "middle_rec.m"
                            ll_backend__middle_rec__Goal2_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_12, (MR_Integer) 2)));
#line 59 "middle_rec.m"
                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 55 "middle_rec.m"
                            if (ll_backend__middle_rec__succeeded)
#line 55 "middle_rec.m"
                              {
#line 121 "middle_rec.m"
                                ll_backend__middle_rec__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_14, (MR_Integer) 0)));
#line 121 "middle_rec.m"
                                ll_backend__middle_rec__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_14, (MR_Integer) 1)));
#line 120 "middle_rec.m"
                                {
#line 120 "middle_rec.m"
                                  ll_backend__middle_rec__V_25_25 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_30_30);
                                }
#line 61 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_25_25 == (MR_Integer) 1);
#line 61 "middle_rec.m"
                                if (ll_backend__middle_rec__succeeded)
#line 61 "middle_rec.m"
                                  {
#line 87 "middle_rec.m"
                                    ll_backend__middle_rec__GoalExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_16, (MR_Integer) 0)));
#line 87 "middle_rec.m"
                                    ll_backend__middle_rec__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_16, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 88 "middle_rec.m"
                                    if (ll_backend__middle_rec__succeeded)
#line 88 "middle_rec.m"
                                      {
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_33, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__Goals_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_33, (MR_Integer) 2)));
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_36_36 == (MR_Integer) 0);
#line 61 "middle_rec.m"
                                        if (ll_backend__middle_rec__succeeded)
#line 89 "middle_rec.m"
                                          {
#line 89 "middle_rec.m"
                                            ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_35, ll_backend__middle_rec__STATE_VARIABLE_CI_0_17);
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
                                    return ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_8_p_0(ll_backend__middle_rec__Var_10, ll_backend__middle_rec__ConsId1_13, ll_backend__middle_rec__Goal1_14, ll_backend__middle_rec__Goal2_16, ll_backend__middle_rec__GoalInfo_9, ll_backend__middle_rec__Instrs_6, ll_backend__middle_rec__STATE_VARIABLE_CI_0_17, ll_backend__middle_rec__STATE_VARIABLE_CI_18);
                                  }
#line 66 "middle_rec.m"
                                else
#line 72 "middle_rec.m"
                                  {
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_27_27;
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_16, (MR_Integer) 0)));
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__GoalExpr_41;
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__Goals_43;
#line 72 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_44_44;
#line 121 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_16, (MR_Integer) 1)));
#line 87 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_42_42;

#line 120 "middle_rec.m"
                                    {
#line 120 "middle_rec.m"
                                      ll_backend__middle_rec__V_27_27 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_38_38);
                                    }
#line 67 "middle_rec.m"
                                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_27_27 == (MR_Integer) 1);
#line 72 "middle_rec.m"
                                    if (ll_backend__middle_rec__succeeded)
#line 72 "middle_rec.m"
                                      {
#line 87 "middle_rec.m"
                                        ll_backend__middle_rec__GoalExpr_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_14, (MR_Integer) 0)));
#line 87 "middle_rec.m"
                                        ll_backend__middle_rec__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_14, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_41, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 88 "middle_rec.m"
                                        if (ll_backend__middle_rec__succeeded)
#line 88 "middle_rec.m"
                                          {
#line 88 "middle_rec.m"
                                            ll_backend__middle_rec__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_41, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                            ll_backend__middle_rec__Goals_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_41, (MR_Integer) 2)));
#line 88 "middle_rec.m"
                                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_44_44 == (MR_Integer) 0);
#line 72 "middle_rec.m"
                                            if (ll_backend__middle_rec__succeeded)
#line 72 "middle_rec.m"
                                              {
#line 89 "middle_rec.m"
                                                {
#line 89 "middle_rec.m"
                                                  ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_43, ll_backend__middle_rec__STATE_VARIABLE_CI_0_17);
                                                }
#line 72 "middle_rec.m"
                                                if (ll_backend__middle_rec__succeeded)
#line 70 "middle_rec.m"
                                                  {
#line 70 "middle_rec.m"
                                                    return ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_8_p_0(ll_backend__middle_rec__Var_10, ll_backend__middle_rec__ConsId2_15, ll_backend__middle_rec__Goal2_16, ll_backend__middle_rec__Goal1_14, ll_backend__middle_rec__GoalInfo_9, ll_backend__middle_rec__Instrs_6, ll_backend__middle_rec__STATE_VARIABLE_CI_0_17, ll_backend__middle_rec__STATE_VARIABLE_CI_18);
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
