/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "integer.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 747 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_3_p_0(
#line 747 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 747 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
#line 747 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3);

#line 742 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
#line 742 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 742 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Label2_4);

#line 729 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
#line 729 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 729 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 729 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 720 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
#line 720 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 720 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 720 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 696 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
#line 696 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 696 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 696 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 668 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
#line 668 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Rval_4,
#line 668 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
#line 668 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17);

#line 652 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
#line 652 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Lval_4,
#line 652 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
#line 652 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13);

#line 644 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
#line 644 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 644 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 644 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 622 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
#line 622 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 622 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 622 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 519 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
#line 519 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Uinstr_4,
#line 519 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
#line 519 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76);

#line 511 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
#line 511 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 511 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 511 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

#line 500 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_3_p_0(
#line 500 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 500 "middle_rec.m"
  MR_Integer ll_backend__middle_rec__N_2,
#line 500 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

#line 491 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
#line 491 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 491 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__UnusedReg_4);

#line 476 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
#line 476 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 476 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
#line 476 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

#line 452 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
#line 452 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 452 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Before_2,
#line 452 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__After_3);

#line 427 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
#line 427 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 427 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Target_2,
#line 427 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_3);

#line 242 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Var_11,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__BaseConsId_12,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Base_13,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Recursive_14,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_15,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Code_16,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_69,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_70,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_0_71,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CLD_72);

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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 747 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_3_p_0(
#line 747 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 747 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
#line 747 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3)
#line 747 "middle_rec.m"
{
#line 750 "middle_rec.m"
  while (MR_TRUE)
#line 750 "middle_rec.m"
    {
#line 750 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 750 "middle_rec.m"
      {
#line 750 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 750 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 750 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Labels_3 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
#line 750 "middle_rec.m"
        else
#line 751 "middle_rec.m"
          {
#line 751 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 751 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 751 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 0)));
#line 751 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;
#line 752 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 1)));
#line 755 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Label_12;

#line 753 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 753 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 753 "middle_rec.m"
              {
#line 753 "middle_rec.m"
                ll_backend__middle_rec__Label_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
#line 754 "middle_rec.m"
                {
#line 754 "middle_rec.m"
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 0) = ((MR_Box) (ll_backend__middle_rec__Label_12));
#line 754 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 1) = ((MR_Box) (ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2));
#line 754 "middle_rec.m"
                }
#line 753 "middle_rec.m"
              }
#line 753 "middle_rec.m"
            else
#line 757 "middle_rec.m"
              {
#line 757 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Block_15;
#line 755 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__V_13_13;
#line 755 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__V_14_14;

#line 755 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 755 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 755 "middle_rec.m"
                  {
#line 755 "middle_rec.m"
                    ll_backend__middle_rec__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
#line 755 "middle_rec.m"
                    ll_backend__middle_rec__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 2)));
#line 755 "middle_rec.m"
                    ll_backend__middle_rec__Block_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 3)));
#line 756 "middle_rec.m"
                    {
#line 756 "middle_rec.m"
                      ll_backend__middle_rec__find_labels_2_3_p_0(ll_backend__middle_rec__Block_15, ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18);
                    }
#line 755 "middle_rec.m"
                  }
#line 755 "middle_rec.m"
                else
#line 757 "middle_rec.m"
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
#line 757 "middle_rec.m"
              }
#line 760 "middle_rec.m"
            /* direct tailcall eliminated */
#line 760 "middle_rec.m"
            {
#line 760 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_8;
#line 760 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;

#line 760 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2;
#line 760 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 760 "middle_rec.m"
            }
#line 760 "middle_rec.m"
            continue;
#line 751 "middle_rec.m"
          }
#line 750 "middle_rec.m"
      }
#line 750 "middle_rec.m"
      break;
#line 750 "middle_rec.m"
    }
#line 747 "middle_rec.m"
}

#line 742 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
#line 742 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 742 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Label2_4)
#line 742 "middle_rec.m"
{
#line 744 "middle_rec.m"
  {
#line 744 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 745 "middle_rec.m"
    {
#line 745 "middle_rec.m"
      ll_backend__middle_rec__find_labels_2_3_p_0(ll_backend__middle_rec__Instrs_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__middle_rec__Label2_4);
#line 745 "middle_rec.m"
      return;
    }
#line 744 "middle_rec.m"
  }
#line 742 "middle_rec.m"
}

#line 729 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
#line 729 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 729 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 729 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 729 "middle_rec.m"
{
#line 732 "middle_rec.m"
  while (MR_TRUE)
#line 732 "middle_rec.m"
    {
#line 732 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 732 "middle_rec.m"
      {
#line 732 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 732 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 732 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 732 "middle_rec.m"
        else
#line 733 "middle_rec.m"
          {
#line 733 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Output_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 733 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Outputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 733 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 0)));
#line 733 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 734 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 1)));
#line 734 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 2)));
#line 734 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 3)));
#line 734 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 4)));
#line 734 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 5)));
#line 734 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 6)));

#line 735 "middle_rec.m"
            {
#line 735 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_10, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
#line 736 "middle_rec.m"
            /* direct tailcall eliminated */
#line 736 "middle_rec.m"
            {
#line 736 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Outputs_8;
#line 736 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 736 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 736 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 736 "middle_rec.m"
            }
#line 736 "middle_rec.m"
            continue;
#line 733 "middle_rec.m"
          }
#line 732 "middle_rec.m"
      }
#line 732 "middle_rec.m"
      break;
#line 732 "middle_rec.m"
    }
#line 729 "middle_rec.m"
}

#line 720 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
#line 720 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 720 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 720 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 720 "middle_rec.m"
{
#line 723 "middle_rec.m"
  while (MR_TRUE)
#line 723 "middle_rec.m"
    {
#line 723 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 723 "middle_rec.m"
      {
#line 723 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 723 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 723 "middle_rec.m"
        else
#line 724 "middle_rec.m"
          {
#line 724 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Input_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 724 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 724 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 4)));
#line 724 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 725 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 0)));
#line 725 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 1)));
#line 725 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 2)));
#line 725 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 3)));
#line 725 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 5)));
#line 725 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 6)));

#line 726 "middle_rec.m"
            {
#line 726 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
#line 727 "middle_rec.m"
            /* direct tailcall eliminated */
#line 727 "middle_rec.m"
            {
#line 727 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Inputs_8;
#line 727 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 727 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 727 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 727 "middle_rec.m"
            }
#line 727 "middle_rec.m"
            continue;
#line 724 "middle_rec.m"
          }
#line 723 "middle_rec.m"
      }
#line 723 "middle_rec.m"
      break;
#line 723 "middle_rec.m"
    }
#line 720 "middle_rec.m"
}

#line 696 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
#line 696 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 696 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 696 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 696 "middle_rec.m"
{
#line 699 "middle_rec.m"
  {
#line 699 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 699 "middle_rec.m"
#line 699 "middle_rec.m"
    switch (MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) {
#line 699 "middle_rec.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 699 "middle_rec.m"
      case (MR_Integer) 0:
#line 699 "middle_rec.m"
        {
#line 699 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

#line 700 "middle_rec.m"
          {
#line 700 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_4, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 700 "middle_rec.m"
            return;
          }
#line 699 "middle_rec.m"
        }
#line 699 "middle_rec.m"
        break;
#line 699 "middle_rec.m"
      case (MR_Integer) 1:
#line 701 "middle_rec.m"
        {
#line 701 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

#line 702 "middle_rec.m"
          {
#line 702 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 702 "middle_rec.m"
            return;
          }
#line 701 "middle_rec.m"
        }
#line 699 "middle_rec.m"
        break;
#line 699 "middle_rec.m"
      case (MR_Integer) 2:
#line 703 "middle_rec.m"
        {
#line 703 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 703 "middle_rec.m"
          MR_Word ll_backend__middle_rec__Rval2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 2)));
#line 703 "middle_rec.m"
          MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_20_20;
#line 703 "middle_rec.m"
          MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

#line 704 "middle_rec.m"
          {
#line 704 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_20_20);
          }
#line 705 "middle_rec.m"
          {
#line 705 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval2_16, ll_backend__middle_rec__STATE_VARIABLE_Used_20_20, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
#line 705 "middle_rec.m"
            return;
          }
#line 703 "middle_rec.m"
        }
#line 699 "middle_rec.m"
        break;
#line 699 "middle_rec.m"
    }
#line 699 "middle_rec.m"
  }
#line 696 "middle_rec.m"
}

#line 668 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
#line 668 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Rval_4,
#line 668 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
#line 668 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17)
#line 668 "middle_rec.m"
{
#line 672 "middle_rec.m"
  while (MR_TRUE)
#line 672 "middle_rec.m"
    {
#line 672 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 672 "middle_rec.m"
      {
#line 672 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 672 "middle_rec.m"
#line 672 "middle_rec.m"
        switch (MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) {
#line 672 "middle_rec.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 672 "middle_rec.m"
          case (MR_Integer) 0:
#line 672 "middle_rec.m"
            {
#line 672 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

#line 673 "middle_rec.m"
              {
#line 673 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_6, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
#line 673 "middle_rec.m"
                return;
              }
#line 672 "middle_rec.m"
            }
#line 672 "middle_rec.m"
            break;
#line 672 "middle_rec.m"
          case (MR_Integer) 1:
#line 675 "middle_rec.m"
            {
#line 676 "middle_rec.m"
              {
#line 676 "middle_rec.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", (MR_String) "var");
#line 676 "middle_rec.m"
                return;
              }
#line 675 "middle_rec.m"
            }
#line 672 "middle_rec.m"
            break;
#line 672 "middle_rec.m"
          case (MR_Integer) 2:
#line 678 "middle_rec.m"
            {
#line 678 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));
#line 678 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

#line 679 "middle_rec.m"
              /* direct tailcall eliminated */
#line 679 "middle_rec.m"
              {
#line 679 "middle_rec.m"
                MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_9;

#line 679 "middle_rec.m"
                ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 679 "middle_rec.m"
              }
#line 679 "middle_rec.m"
              continue;
#line 678 "middle_rec.m"
            }
#line 672 "middle_rec.m"
            break;
#line 672 "middle_rec.m"
          case (MR_Integer) 3:
#line 672 "middle_rec.m"
#line 672 "middle_rec.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) {
#line 672 "middle_rec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 672 "middle_rec.m"
              case (MR_Integer) 0:
#line 681 "middle_rec.m"
                *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
#line 672 "middle_rec.m"
                break;
#line 672 "middle_rec.m"
              case (MR_Integer) 1:
#line 683 "middle_rec.m"
                *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
#line 672 "middle_rec.m"
                break;
#line 672 "middle_rec.m"
              case (MR_Integer) 2:
#line 685 "middle_rec.m"
                {
#line 685 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
#line 685 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 686 "middle_rec.m"
                  /* direct tailcall eliminated */
#line 686 "middle_rec.m"
                  {
#line 686 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_27;

#line 686 "middle_rec.m"
                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 686 "middle_rec.m"
                  }
#line 686 "middle_rec.m"
                  continue;
#line 685 "middle_rec.m"
                }
#line 672 "middle_rec.m"
                break;
#line 672 "middle_rec.m"
              case (MR_Integer) 3:
#line 688 "middle_rec.m"
                {
#line 688 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 3)));
#line 688 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
#line 688 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Rval1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
#line 688 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 689 "middle_rec.m"
                  {
#line 689 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_28, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
                  }
#line 690 "middle_rec.m"
                  /* direct tailcall eliminated */
#line 690 "middle_rec.m"
                  {
#line 690 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval2_14;
#line 690 "middle_rec.m"
                    MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

#line 690 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_0_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16;
#line 690 "middle_rec.m"
                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
#line 690 "middle_rec.m"
                  }
#line 690 "middle_rec.m"
                  continue;
#line 688 "middle_rec.m"
                }
#line 672 "middle_rec.m"
                break;
#line 672 "middle_rec.m"
              case (MR_Integer) 4:
#line 692 "middle_rec.m"
                {
#line 692 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__MemRef_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

#line 693 "middle_rec.m"
                  {
#line 693 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(ll_backend__middle_rec__MemRef_15, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
#line 693 "middle_rec.m"
                    return;
                  }
#line 692 "middle_rec.m"
                }
#line 672 "middle_rec.m"
                break;
#line 672 "middle_rec.m"
            }
#line 672 "middle_rec.m"
            break;
#line 672 "middle_rec.m"
        }
#line 672 "middle_rec.m"
      }
#line 672 "middle_rec.m"
      break;
#line 672 "middle_rec.m"
    }
#line 668 "middle_rec.m"
}

#line 652 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
#line 652 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Lval_4,
#line 652 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
#line 652 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13)
#line 652 "middle_rec.m"
{
#line 659 "middle_rec.m"
  {
#line 659 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 1)));
#line 659 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__N_6;
#line 656 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_14_14;

#line 656 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 656 "middle_rec.m"
      {
#line 656 "middle_rec.m"
        ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)));
#line 656 "middle_rec.m"
        ll_backend__middle_rec__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 656 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_14_14 == (MR_Integer) 0);
#line 656 "middle_rec.m"
      }
#line 659 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 657 "middle_rec.m"
      {
#line 657 "middle_rec.m"
        MR_Word ll_backend__middle_rec__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 657 "middle_rec.m"
        MR_Integer ll_backend__middle_rec__N1_7;
#line 657 "middle_rec.m"
        MR_Box ll_backend__middle_rec__conv0_N1_7;

#line 657 "middle_rec.m"
        {
#line 657 "middle_rec.m"
          mercury__builtin__copy_2_p_1(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N_6)), &ll_backend__middle_rec__conv0_N1_7);
        }
#line 657 "middle_rec.m"
        ll_backend__middle_rec__N1_7 = ((MR_Integer) ll_backend__middle_rec__conv0_N1_7);
#line 658 "middle_rec.m"
        {
#line 658 "middle_rec.m"
          mercury__set__insert_3_p_0(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N1_7)), ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
#line 658 "middle_rec.m"
          return;
        }
#line 657 "middle_rec.m"
      }
#line 659 "middle_rec.m"
    else
#line 662 "middle_rec.m"
      {
#line 662 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Rval_9;
#line 662 "middle_rec.m"
        MR_Word ll_backend__middle_rec__FieldNum_10;
#line 659 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_8_8;

#line 659 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 659 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 659 "middle_rec.m"
          {
#line 659 "middle_rec.m"
            ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 659 "middle_rec.m"
            ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 2)));
#line 659 "middle_rec.m"
            ll_backend__middle_rec__FieldNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 3)));
#line 660 "middle_rec.m"
            {
#line 660 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_16_16;

#line 660 "middle_rec.m"
              {
#line 660 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, &ll_backend__middle_rec__STATE_VARIABLE_Used_16_16);
              }
#line 661 "middle_rec.m"
              {
#line 661 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__FieldNum_10, ll_backend__middle_rec__STATE_VARIABLE_Used_16_16, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
#line 661 "middle_rec.m"
                return;
              }
#line 660 "middle_rec.m"
            }
#line 659 "middle_rec.m"
          }
#line 659 "middle_rec.m"
        else
#line 664 "middle_rec.m"
          {
#line 662 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_11_11;

#line 662 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 662 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 662 "middle_rec.m"
              {
#line 662 "middle_rec.m"
                ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
#line 663 "middle_rec.m"
                {
#line 663 "middle_rec.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", (MR_String) "lvar");
#line 663 "middle_rec.m"
                  return;
                }
#line 662 "middle_rec.m"
              }
#line 662 "middle_rec.m"
            else
#line 665 "middle_rec.m"
              {
#line 665 "middle_rec.m"
              }
#line 664 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_13 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_12;
#line 664 "middle_rec.m"
          }
#line 662 "middle_rec.m"
      }
#line 659 "middle_rec.m"
  }
#line 652 "middle_rec.m"
}

#line 644 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
#line 644 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 644 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 644 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 644 "middle_rec.m"
{
#line 647 "middle_rec.m"
  while (MR_TRUE)
#line 647 "middle_rec.m"
    {
#line 647 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 647 "middle_rec.m"
      {
#line 647 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 647 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 647 "middle_rec.m"
        else
#line 648 "middle_rec.m"
          {
#line 648 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 648 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Lvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 648 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 649 "middle_rec.m"
            {
#line 649 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
            }
#line 650 "middle_rec.m"
            /* direct tailcall eliminated */
#line 650 "middle_rec.m"
            {
#line 650 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Lvals_8;
#line 650 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 650 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 650 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 650 "middle_rec.m"
            }
#line 650 "middle_rec.m"
            continue;
#line 648 "middle_rec.m"
          }
#line 647 "middle_rec.m"
      }
#line 647 "middle_rec.m"
      break;
#line 647 "middle_rec.m"
    }
#line 644 "middle_rec.m"
}

#line 622 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
#line 622 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 622 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 622 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 622 "middle_rec.m"
{
#line 626 "middle_rec.m"
  while (MR_TRUE)
#line 626 "middle_rec.m"
    {
#line 626 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 626 "middle_rec.m"
      {
#line 626 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 626 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 626 "middle_rec.m"
        else
#line 627 "middle_rec.m"
          {
#line 627 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Comp_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 627 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Comps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 627 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 634 "middle_rec.m"
#line 634 "middle_rec.m"
            switch (MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) {
#line 634 "middle_rec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 634 "middle_rec.m"
              case (MR_Integer) 0:
#line 642 "middle_rec.m"
                ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 634 "middle_rec.m"
                break;
#line 634 "middle_rec.m"
              case (MR_Integer) 1:
#line 634 "middle_rec.m"
                {
#line 634 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__In_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

#line 635 "middle_rec.m"
                  {
#line 635 "middle_rec.m"
                    ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(ll_backend__middle_rec__In_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                  }
#line 634 "middle_rec.m"
                }
#line 634 "middle_rec.m"
                break;
#line 634 "middle_rec.m"
              case (MR_Integer) 2:
#line 636 "middle_rec.m"
                {
#line 636 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Out_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

#line 637 "middle_rec.m"
                  {
#line 637 "middle_rec.m"
                    ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(ll_backend__middle_rec__Out_19, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                  }
#line 636 "middle_rec.m"
                }
#line 634 "middle_rec.m"
                break;
#line 634 "middle_rec.m"
              case (MR_Integer) 3:
#line 634 "middle_rec.m"
#line 634 "middle_rec.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)))) {
#line 634 "middle_rec.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 634 "middle_rec.m"
                  case (MR_Integer) 0:
#line 638 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 634 "middle_rec.m"
                    break;
#line 634 "middle_rec.m"
                  case (MR_Integer) 1:
#line 639 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 634 "middle_rec.m"
                    break;
#line 634 "middle_rec.m"
                  case (MR_Integer) 2:
#line 640 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 634 "middle_rec.m"
                    break;
#line 634 "middle_rec.m"
                  case (MR_Integer) 3:
#line 641 "middle_rec.m"
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 634 "middle_rec.m"
                    break;
#line 634 "middle_rec.m"
                }
#line 634 "middle_rec.m"
                break;
#line 634 "middle_rec.m"
            }
#line 629 "middle_rec.m"
            /* direct tailcall eliminated */
#line 629 "middle_rec.m"
            {
#line 629 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Comps_8;
#line 629 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

#line 629 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 629 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 629 "middle_rec.m"
            }
#line 629 "middle_rec.m"
            continue;
#line 627 "middle_rec.m"
          }
#line 626 "middle_rec.m"
      }
#line 626 "middle_rec.m"
      break;
#line 626 "middle_rec.m"
    }
#line 622 "middle_rec.m"
}

#line 519 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
#line 519 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Uinstr_4,
#line 519 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
#line 519 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76)
#line 519 "middle_rec.m"
{
#line 524 "middle_rec.m"
  {
#line 524 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 524 "middle_rec.m"
#line 524 "middle_rec.m"
    switch (MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) {
#line 524 "middle_rec.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 524 "middle_rec.m"
      case (MR_Integer) 0:
#line 524 "middle_rec.m"
#line 524 "middle_rec.m"
        switch (MR_unmkbody(ll_backend__middle_rec__Uinstr_4)) {
#line 524 "middle_rec.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 524 "middle_rec.m"
          case (MR_Integer) 0:
#line 533 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 1:
#line 532 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
        }
#line 524 "middle_rec.m"
        break;
#line 524 "middle_rec.m"
      case (MR_Integer) 1:
#line 524 "middle_rec.m"
        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
        break;
#line 524 "middle_rec.m"
      case (MR_Integer) 2:
#line 539 "middle_rec.m"
        {
#line 539 "middle_rec.m"
          MR_Word ll_backend__middle_rec__LvalSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)));
#line 539 "middle_rec.m"
          MR_Word ll_backend__middle_rec__LvalList_29;

#line 540 "middle_rec.m"
          {
#line 540 "middle_rec.m"
            mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__middle_rec__LvalSet_28, &ll_backend__middle_rec__LvalList_29);
          }
#line 541 "middle_rec.m"
          {
#line 541 "middle_rec.m"
            ll_backend__middle_rec__find_used_registers_lvals_3_p_0(ll_backend__middle_rec__LvalList_29, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 541 "middle_rec.m"
            return;
          }
#line 539 "middle_rec.m"
        }
#line 524 "middle_rec.m"
        break;
#line 524 "middle_rec.m"
      case (MR_Integer) 3:
#line 524 "middle_rec.m"
#line 524 "middle_rec.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) {
#line 524 "middle_rec.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 524 "middle_rec.m"
          case (MR_Integer) 0:
#line 543 "middle_rec.m"
            {
#line 543 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 543 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 543 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 544 "middle_rec.m"
              {
#line 544 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_32, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 544 "middle_rec.m"
                return;
              }
#line 543 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 1:
#line 548 "middle_rec.m"
            {
#line 548 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 548 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 548 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_96;

#line 549 "middle_rec.m"
              {
#line 549 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_33, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_96);
              }
#line 550 "middle_rec.m"
              {
#line 550 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_34, ll_backend__middle_rec__STATE_VARIABLE_Used_96_96, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 550 "middle_rec.m"
                return;
              }
#line 548 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 2:
#line 548 "middle_rec.m"
            {
#line 548 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 548 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 548 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_120;

#line 549 "middle_rec.m"
              {
#line 549 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_118, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_120);
              }
#line 550 "middle_rec.m"
              {
#line 550 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_119, ll_backend__middle_rec__STATE_VARIABLE_Used_96_120, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 550 "middle_rec.m"
                return;
              }
#line 548 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 3:
#line 525 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 4:
#line 526 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 5:
#line 527 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 6:
#line 528 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 7:
#line 592 "middle_rec.m"
            {
#line 592 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 586 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 593 "middle_rec.m"
              {
#line 593 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_108, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 593 "middle_rec.m"
                return;
              }
#line 592 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 8:
#line 529 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 9:
#line 592 "middle_rec.m"
            {
#line 592 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 587 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 593 "middle_rec.m"
              {
#line 593 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_115, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 593 "middle_rec.m"
                return;
              }
#line 592 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 10:
#line 603 "middle_rec.m"
            {
#line 603 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 604 "middle_rec.m"
              {
#line 604 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_127, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 604 "middle_rec.m"
                return;
              }
#line 603 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 11:
#line 603 "middle_rec.m"
            {
#line 603 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 604 "middle_rec.m"
              {
#line 604 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_126, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 604 "middle_rec.m"
                return;
              }
#line 603 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 12:
#line 552 "middle_rec.m"
            {
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__MaybeRegionRval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__MaybeReuse_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_91_91;
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 552 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));

#line 553 "middle_rec.m"
              {
#line 553 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_102, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_91_91);
              }
#line 554 "middle_rec.m"
              {
#line 554 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_103, ll_backend__middle_rec__STATE_VARIABLE_Used_91_91, &ll_backend__middle_rec__STATE_VARIABLE_Used_92_92);
              }
#line 558 "middle_rec.m"
              if ((ll_backend__middle_rec__MaybeRegionRval_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "middle_rec.m"
                ll_backend__middle_rec__STATE_VARIABLE_Used_93_93 = ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
#line 558 "middle_rec.m"
              else
#line 556 "middle_rec.m"
                {
#line 556 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__RegionRval_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeRegionRval_39, (MR_Integer) 0)));

#line 557 "middle_rec.m"
                  {
#line 557 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__RegionRval_41, ll_backend__middle_rec__STATE_VARIABLE_Used_92_92, &ll_backend__middle_rec__STATE_VARIABLE_Used_93_93);
                  }
#line 556 "middle_rec.m"
                }
#line 570 "middle_rec.m"
              if ((ll_backend__middle_rec__MaybeReuse_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "middle_rec.m"
                *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
#line 570 "middle_rec.m"
              else
#line 562 "middle_rec.m"
                {
#line 562 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__ReuseRval_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 0)));
#line 562 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__MaybeFlagLval_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 1)));
#line 562 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;

#line 563 "middle_rec.m"
                  {
#line 563 "middle_rec.m"
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ReuseRval_42, ll_backend__middle_rec__STATE_VARIABLE_Used_93_93, &ll_backend__middle_rec__STATE_VARIABLE_Used_94_94);
                  }
#line 567 "middle_rec.m"
                  if ((ll_backend__middle_rec__MaybeFlagLval_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "middle_rec.m"
                    *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;
#line 567 "middle_rec.m"
                  else
#line 565 "middle_rec.m"
                    {
#line 565 "middle_rec.m"
                      MR_Word ll_backend__middle_rec__FlagLval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeFlagLval_43, (MR_Integer) 0)));

#line 566 "middle_rec.m"
                      {
#line 566 "middle_rec.m"
                        ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__FlagLval_44, ll_backend__middle_rec__STATE_VARIABLE_Used_94_94, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 566 "middle_rec.m"
                        return;
                      }
#line 565 "middle_rec.m"
                    }
#line 562 "middle_rec.m"
                }
#line 552 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 13:
#line 603 "middle_rec.m"
            {
#line 603 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 604 "middle_rec.m"
              {
#line 604 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_121, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 604 "middle_rec.m"
                return;
              }
#line 603 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 14:
#line 592 "middle_rec.m"
            {
#line 592 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 593 "middle_rec.m"
              {
#line 593 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_125, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 593 "middle_rec.m"
                return;
              }
#line 592 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 15:
#line 592 "middle_rec.m"
            {
#line 592 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 593 "middle_rec.m"
              {
#line 593 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_114, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 593 "middle_rec.m"
                return;
              }
#line 592 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 16:
#line 530 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 17:
#line 575 "middle_rec.m"
            {
#line 575 "middle_rec.m"
              MR_Word ll_backend__middle_rec__IdRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 575 "middle_rec.m"
              MR_Word ll_backend__middle_rec__NumLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 575 "middle_rec.m"
              MR_Word ll_backend__middle_rec__AddrLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 575 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_88_88;
#line 575 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_89_89;
#line 574 "middle_rec.m"
              MR_Word ll_backend__middle_rec___FillOp_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 574 "middle_rec.m"
              MR_Word ll_backend__middle_rec___EmbeddedStackFrame_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 576 "middle_rec.m"
              {
#line 576 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__IdRval_46, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_88_88);
              }
#line 577 "middle_rec.m"
              {
#line 577 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__NumLval_47, ll_backend__middle_rec__STATE_VARIABLE_Used_88_88, &ll_backend__middle_rec__STATE_VARIABLE_Used_89_89);
              }
#line 578 "middle_rec.m"
              {
#line 578 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__AddrLval_48, ll_backend__middle_rec__STATE_VARIABLE_Used_89_89, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 578 "middle_rec.m"
                return;
              }
#line 575 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 18:
#line 580 "middle_rec.m"
            {
#line 580 "middle_rec.m"
              MR_Word ll_backend__middle_rec__ValueRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 580 "middle_rec.m"
              MR_Word ll_backend__middle_rec___SetOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 580 "middle_rec.m"
              MR_Word ll_backend__middle_rec___EmbeddedStackFrame_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 581 "middle_rec.m"
              {
#line 581 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ValueRval_50, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 581 "middle_rec.m"
                return;
              }
#line 580 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 19:
#line 531 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 20:
#line 603 "middle_rec.m"
            {
#line 603 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 604 "middle_rec.m"
              {
#line 604 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_128, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 604 "middle_rec.m"
                return;
              }
#line 603 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 21:
#line 592 "middle_rec.m"
            {
#line 592 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 590 "middle_rec.m"
              MR_Word ll_backend__middle_rec___Rsn_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 593 "middle_rec.m"
              {
#line 593 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_124, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 593 "middle_rec.m"
                return;
              }
#line 592 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 22:
#line 603 "middle_rec.m"
            {
#line 603 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 604 "middle_rec.m"
              {
#line 604 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_122, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 604 "middle_rec.m"
                return;
              }
#line 603 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 23:
#line 592 "middle_rec.m"
            {
#line 592 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Rval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 593 "middle_rec.m"
              {
#line 593 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_123, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 593 "middle_rec.m"
                return;
              }
#line 592 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 24:
#line 534 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 25:
#line 535 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 26:
#line 536 "middle_rec.m"
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 27:
#line 583 "middle_rec.m"
            {
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Components_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 9)));
#line 583 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 10)));

#line 584 "middle_rec.m"
              {
#line 584 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_components_3_p_0(ll_backend__middle_rec__Components_52, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 584 "middle_rec.m"
                return;
              }
#line 583 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 28:
#line 603 "middle_rec.m"
            {
#line 603 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 600 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 600 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 604 "middle_rec.m"
              {
#line 604 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_116, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 604 "middle_rec.m"
                return;
              }
#line 603 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 29:
#line 603 "middle_rec.m"
            {
#line 603 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 601 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 604 "middle_rec.m"
              {
#line 604 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_109, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 604 "middle_rec.m"
                return;
              }
#line 603 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 30:
#line 603 "middle_rec.m"
            {
#line 603 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 602 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 604 "middle_rec.m"
              {
#line 604 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_117, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 604 "middle_rec.m"
                return;
              }
#line 603 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 31:
#line 606 "middle_rec.m"
            {
#line 606 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCLval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 606 "middle_rec.m"
              MR_Integer ll_backend__middle_rec__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

#line 607 "middle_rec.m"
              {
#line 607 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCLval_69, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 607 "middle_rec.m"
                return;
              }
#line 606 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 32:
#line 609 "middle_rec.m"
            {
#line 609 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 609 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCSLval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 609 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_81_81;
#line 609 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 610 "middle_rec.m"
              {
#line 610 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_70, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_81_81);
              }
#line 611 "middle_rec.m"
              {
#line 611 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCSLval_71, ll_backend__middle_rec__STATE_VARIABLE_Used_81_81, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 611 "middle_rec.m"
                return;
              }
#line 609 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 33:
#line 613 "middle_rec.m"
            {
#line 613 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCSRval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
#line 613 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_79_79;
#line 613 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCRval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 613 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

#line 614 "middle_rec.m"
              {
#line 614 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_110, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_79_79);
              }
#line 615 "middle_rec.m"
              {
#line 615 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_73, ll_backend__middle_rec__STATE_VARIABLE_Used_79_79, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 615 "middle_rec.m"
                return;
              }
#line 613 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
          case (MR_Integer) 34:
#line 617 "middle_rec.m"
            {
#line 617 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_77_77;
#line 617 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCRval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
#line 617 "middle_rec.m"
              MR_Word ll_backend__middle_rec__LCSRval_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

#line 618 "middle_rec.m"
              {
#line 618 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_111, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_77_77);
              }
#line 619 "middle_rec.m"
              {
#line 619 "middle_rec.m"
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_112, ll_backend__middle_rec__STATE_VARIABLE_Used_77_77, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
#line 619 "middle_rec.m"
                return;
              }
#line 617 "middle_rec.m"
            }
#line 524 "middle_rec.m"
            break;
#line 524 "middle_rec.m"
        }
#line 524 "middle_rec.m"
        break;
#line 524 "middle_rec.m"
    }
#line 524 "middle_rec.m"
  }
#line 519 "middle_rec.m"
}

#line 511 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
#line 511 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 511 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
#line 511 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
#line 511 "middle_rec.m"
{
#line 514 "middle_rec.m"
  while (MR_TRUE)
#line 514 "middle_rec.m"
    {
#line 514 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 514 "middle_rec.m"
      {
#line 514 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 514 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "middle_rec.m"
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
#line 514 "middle_rec.m"
        else
#line 515 "middle_rec.m"
          {
#line 515 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Uinstr_7;
#line 515 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 515 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 515 "middle_rec.m"
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;
#line 515 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_8_8;

#line 515 "middle_rec.m"
            ll_backend__middle_rec__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
#line 515 "middle_rec.m"
            ll_backend__middle_rec__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 1)));
#line 516 "middle_rec.m"
            {
#line 516 "middle_rec.m"
              ll_backend__middle_rec__find_used_registers_instr_3_p_0(ll_backend__middle_rec__Uinstr_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_14_14);
            }
#line 517 "middle_rec.m"
            /* direct tailcall eliminated */
#line 517 "middle_rec.m"
            {
#line 517 "middle_rec.m"
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_9;
#line 517 "middle_rec.m"
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;

#line 517 "middle_rec.m"
              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
#line 517 "middle_rec.m"
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 517 "middle_rec.m"
            }
#line 517 "middle_rec.m"
            continue;
#line 515 "middle_rec.m"
          }
#line 514 "middle_rec.m"
      }
#line 514 "middle_rec.m"
      break;
#line 514 "middle_rec.m"
    }
#line 511 "middle_rec.m"
}

#line 500 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_3_p_0(
#line 500 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 500 "middle_rec.m"
  MR_Integer ll_backend__middle_rec__N_2,
#line 500 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
#line 500 "middle_rec.m"
{
#line 502 "middle_rec.m"
  while (MR_TRUE)
#line 502 "middle_rec.m"
    {
#line 502 "middle_rec.m"
      /* tailcall optimized into a loop */
#line 502 "middle_rec.m"
      {
#line 502 "middle_rec.m"
        MR_bool ll_backend__middle_rec__succeeded;

#line 502 "middle_rec.m"
        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 502 "middle_rec.m"
        else
#line 503 "middle_rec.m"
          {
#line 503 "middle_rec.m"
            MR_Integer ll_backend__middle_rec__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 503 "middle_rec.m"
            MR_Word ll_backend__middle_rec__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

#line 504 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__N_2 < ll_backend__middle_rec__H_6);
#line 506 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 505 "middle_rec.m"
              {
#line 505 "middle_rec.m"
                {
#line 505 "middle_rec.m"
                  MR_Word base;
#line 505 "middle_rec.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "middle_rec.m"
                  *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 505 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 505 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__N_2));
#line 505 "middle_rec.m"
                }
#line 505 "middle_rec.m"
              }
#line 506 "middle_rec.m"
            else
#line 507 "middle_rec.m"
              {
#line 507 "middle_rec.m"
                MR_Integer ll_backend__middle_rec__N1_10 = (ll_backend__middle_rec__N_2 + (MR_Integer) 1);

#line 508 "middle_rec.m"
                /* direct tailcall eliminated */
#line 508 "middle_rec.m"
                {
#line 508 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__T_7;
#line 508 "middle_rec.m"
                  MR_Integer ll_backend__middle_rec__N__tmp_copy_2 = ll_backend__middle_rec__N1_10;

#line 508 "middle_rec.m"
                  ll_backend__middle_rec__N_2 = ll_backend__middle_rec__N__tmp_copy_2;
#line 508 "middle_rec.m"
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
#line 508 "middle_rec.m"
                }
#line 508 "middle_rec.m"
                continue;
#line 507 "middle_rec.m"
              }
#line 503 "middle_rec.m"
          }
#line 502 "middle_rec.m"
      }
#line 502 "middle_rec.m"
      break;
#line 502 "middle_rec.m"
    }
#line 500 "middle_rec.m"
}

#line 491 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
#line 491 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Instrs_3,
#line 491 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__UnusedReg_4)
#line 491 "middle_rec.m"
{
#line 494 "middle_rec.m"
  {
#line 494 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 494 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 494 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Used0_5;
#line 494 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Used1_6;
#line 494 "middle_rec.m"
    MR_Word ll_backend__middle_rec__UsedList_7;

#line 495 "middle_rec.m"
    {
#line 495 "middle_rec.m"
      mercury__set__init_1_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, &ll_backend__middle_rec__Used0_5);
    }
#line 496 "middle_rec.m"
    {
#line 496 "middle_rec.m"
      ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_3, ll_backend__middle_rec__Used0_5, &ll_backend__middle_rec__Used1_6);
    }
#line 497 "middle_rec.m"
    {
#line 497 "middle_rec.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, ll_backend__middle_rec__Used1_6, &ll_backend__middle_rec__UsedList_7);
    }
#line 498 "middle_rec.m"
    {
#line 498 "middle_rec.m"
      ll_backend__middle_rec__find_unused_register_2_3_p_0(ll_backend__middle_rec__UsedList_7, (MR_Integer) 1, ll_backend__middle_rec__UnusedReg_4);
#line 498 "middle_rec.m"
      return;
    }
#line 494 "middle_rec.m"
  }
#line 491 "middle_rec.m"
}

#line 476 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
#line 476 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 476 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
#line 476 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
#line 476 "middle_rec.m"
{
#line 479 "middle_rec.m"
  {
#line 479 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 479 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "middle_rec.m"
      *ll_backend__middle_rec__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 479 "middle_rec.m"
    else
#line 480 "middle_rec.m"
      {
#line 480 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 480 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 480 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr_8;
#line 480 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs_9;
#line 484 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Lives0_10;
#line 484 "middle_rec.m"
        MR_String ll_backend__middle_rec__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 1)));
#line 481 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 0)));

#line 481 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_13_13)) == (MR_mktag((MR_Integer) 2)));
#line 481 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 481 "middle_rec.m"
          {
#line 481 "middle_rec.m"
            ll_backend__middle_rec__Lives0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
#line 482 "middle_rec.m"
            {
#line 482 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Lives_12;
#line 482 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_14_14;

#line 482 "middle_rec.m"
              {
#line 482 "middle_rec.m"
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__middle_rec__HeadVar__2_2)), ll_backend__middle_rec__Lives0_10, &ll_backend__middle_rec__Lives_12);
              }
#line 483 "middle_rec.m"
              {
#line 483 "middle_rec.m"
                ll_backend__middle_rec__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "middle_rec.m"
                MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_14_14, 0) = ((MR_Box) (ll_backend__middle_rec__Lives_12));
#line 483 "middle_rec.m"
              }
#line 483 "middle_rec.m"
              {
#line 483 "middle_rec.m"
                ll_backend__middle_rec__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 0) = ((MR_Box) (ll_backend__middle_rec__V_14_14));
#line 483 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 1) = ((MR_Box) (ll_backend__middle_rec__Comment_11));
#line 483 "middle_rec.m"
              }
#line 482 "middle_rec.m"
            }
#line 481 "middle_rec.m"
          }
#line 481 "middle_rec.m"
        else
#line 485 "middle_rec.m"
          ll_backend__middle_rec__Instr_8 = ll_backend__middle_rec__Instr0_5;
#line 487 "middle_rec.m"
        {
#line 487 "middle_rec.m"
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__Instrs0_6, ll_backend__middle_rec__HeadVar__2_2, &ll_backend__middle_rec__Instrs_9);
        }
#line 480 "middle_rec.m"
        {
#line 480 "middle_rec.m"
          MR_Word base;
#line 480 "middle_rec.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "middle_rec.m"
          *ll_backend__middle_rec__HeadVar__3_3 = base;
#line 480 "middle_rec.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr_8));
#line 480 "middle_rec.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs_9));
#line 480 "middle_rec.m"
        }
#line 480 "middle_rec.m"
      }
#line 479 "middle_rec.m"
  }
#line 476 "middle_rec.m"
}

#line 452 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
#line 452 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 452 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Before_2,
#line 452 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__After_3)
#line 452 "middle_rec.m"
{
#line 455 "middle_rec.m"
  {
#line 455 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 455 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "middle_rec.m"
      {
#line 456 "middle_rec.m"
        {
#line 456 "middle_rec.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "did not find call");
#line 456 "middle_rec.m"
          return;
        }
#line 455 "middle_rec.m"
      }
#line 455 "middle_rec.m"
    else
#line 457 "middle_rec.m"
      {
#line 457 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 457 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 458 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
#line 458 "middle_rec.m"
        MR_String ll_backend__middle_rec__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
#line 458 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_13_13;
#line 458 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_14_14;
#line 458 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_15_15;
#line 458 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_16_16;
#line 458 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_17_17;
#line 458 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_18_18;

#line 458 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 458 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 458 "middle_rec.m"
          {
#line 458 "middle_rec.m"
            ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 1)));
#line 458 "middle_rec.m"
            ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 2)));
#line 458 "middle_rec.m"
            ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 3)));
#line 458 "middle_rec.m"
            ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 4)));
#line 458 "middle_rec.m"
            ll_backend__middle_rec__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 5)));
#line 458 "middle_rec.m"
            ll_backend__middle_rec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 6)));
#line 466 "middle_rec.m"
            {
#line 466 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs3_22;
#line 460 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instrs2_20;
#line 460 "middle_rec.m"
              MR_Word ll_backend__middle_rec__Instr2_21;
#line 460 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_27_27;
#line 462 "middle_rec.m"
              MR_String ll_backend__middle_rec__V_24_24;
#line 462 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_23_23;

#line 460 "middle_rec.m"
              {
#line 460 "middle_rec.m"
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Instrs2_20);
              }
#line 461 "middle_rec.m"
              ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Instrs2_20)) == (MR_mktag((MR_Integer) 1)));
#line 461 "middle_rec.m"
              if (ll_backend__middle_rec__succeeded)
#line 461 "middle_rec.m"
                {
#line 461 "middle_rec.m"
                  ll_backend__middle_rec__Instr2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 0)));
#line 461 "middle_rec.m"
                  ll_backend__middle_rec__Instrs3_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 1)));
#line 462 "middle_rec.m"
                  ll_backend__middle_rec__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 0)));
#line 462 "middle_rec.m"
                  ll_backend__middle_rec__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 1)));
#line 462 "middle_rec.m"
                  ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 462 "middle_rec.m"
                  if (ll_backend__middle_rec__succeeded)
#line 462 "middle_rec.m"
                    ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 1)));
#line 461 "middle_rec.m"
                }
#line 466 "middle_rec.m"
              if (ll_backend__middle_rec__succeeded)
#line 464 "middle_rec.m"
                {
#line 464 "middle_rec.m"
                  *ll_backend__middle_rec__Before_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 465 "middle_rec.m"
                  *ll_backend__middle_rec__After_3 = ll_backend__middle_rec__Instrs3_22;
#line 464 "middle_rec.m"
                }
#line 466 "middle_rec.m"
              else
#line 467 "middle_rec.m"
                {
#line 467 "middle_rec.m"
                  {
#line 467 "middle_rec.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "call not followed by label");
#line 467 "middle_rec.m"
                    return;
                  }
#line 467 "middle_rec.m"
                }
#line 466 "middle_rec.m"
            }
#line 458 "middle_rec.m"
          }
#line 458 "middle_rec.m"
        else
#line 470 "middle_rec.m"
          {
#line 470 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Before1_25;

#line 470 "middle_rec.m"
            {
#line 470 "middle_rec.m"
              ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Before1_25, ll_backend__middle_rec__After_3);
            }
#line 471 "middle_rec.m"
            {
#line 471 "middle_rec.m"
              MR_Word base;
#line 471 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "middle_rec.m"
              *ll_backend__middle_rec__Before_2 = base;
#line 471 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
#line 471 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Before1_25));
#line 471 "middle_rec.m"
            }
#line 470 "middle_rec.m"
          }
#line 457 "middle_rec.m"
      }
#line 455 "middle_rec.m"
  }
#line 452 "middle_rec.m"
}

#line 427 "middle_rec.m"
static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
#line 427 "middle_rec.m"
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
#line 427 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Target_2,
#line 427 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Instrs_3)
#line 427 "middle_rec.m"
{
#line 430 "middle_rec.m"
  {
#line 430 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;

#line 430 "middle_rec.m"
    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "middle_rec.m"
      {
#line 431 "middle_rec.m"
        {
#line 431 "middle_rec.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "empty list");
#line 431 "middle_rec.m"
          return;
        }
#line 430 "middle_rec.m"
      }
#line 430 "middle_rec.m"
    else
#line 432 "middle_rec.m"
      {
#line 432 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
#line 432 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
#line 445 "middle_rec.m"
        MR_Word ll_backend__middle_rec__Test_13;
#line 433 "middle_rec.m"
        MR_Word ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
#line 433 "middle_rec.m"
        MR_String ll_backend__middle_rec___Comment_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
#line 433 "middle_rec.m"
        MR_Word ll_backend__middle_rec___OldTarget_14;

#line 433 "middle_rec.m"
        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 433 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 433 "middle_rec.m"
          {
#line 433 "middle_rec.m"
            ll_backend__middle_rec__Test_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 1)));
#line 433 "middle_rec.m"
            ll_backend__middle_rec___OldTarget_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 2)));
#line 439 "middle_rec.m"
            {
#line 439 "middle_rec.m"
              MR_Word ll_backend__middle_rec__NewTest_18;
#line 439 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_24_24;
#line 439 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_25_25;
#line 439 "middle_rec.m"
              MR_Word ll_backend__middle_rec__V_26_26;

#line 436 "middle_rec.m"
              if ((ll_backend__middle_rec__Instrs0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "middle_rec.m"
                {
#line 435 "middle_rec.m"
                }
#line 436 "middle_rec.m"
              else
#line 437 "middle_rec.m"
                {
#line 438 "middle_rec.m"
                  {
#line 438 "middle_rec.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "if_val followed by other instructions");
#line 438 "middle_rec.m"
                    return;
                  }
#line 437 "middle_rec.m"
                }
#line 440 "middle_rec.m"
              {
#line 440 "middle_rec.m"
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__middle_rec__Test_13, &ll_backend__middle_rec__NewTest_18);
              }
#line 442 "middle_rec.m"
              {
#line 442 "middle_rec.m"
                ll_backend__middle_rec__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 442 "middle_rec.m"
                MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, 0) = ((MR_Box) (ll_backend__middle_rec__Target_2));
#line 442 "middle_rec.m"
              }
#line 442 "middle_rec.m"
              {
#line 442 "middle_rec.m"
                ll_backend__middle_rec__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 442 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 442 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 1) = ((MR_Box) (ll_backend__middle_rec__NewTest_18));
#line 442 "middle_rec.m"
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 2) = ((MR_Box) (ll_backend__middle_rec__V_26_26));
#line 442 "middle_rec.m"
              }
#line 442 "middle_rec.m"
              {
#line 442 "middle_rec.m"
                ll_backend__middle_rec__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 0) = ((MR_Box) (ll_backend__middle_rec__V_25_25));
#line 442 "middle_rec.m"
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 1) = ((MR_Box) ((MR_String) "test on downward loop"));
#line 442 "middle_rec.m"
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
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__V_24_24));
#line 444 "middle_rec.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "middle_rec.m"
              }
#line 439 "middle_rec.m"
            }
#line 433 "middle_rec.m"
          }
#line 433 "middle_rec.m"
        else
#line 446 "middle_rec.m"
          {
#line 446 "middle_rec.m"
            MR_Word ll_backend__middle_rec__Instrs1_19;

#line 446 "middle_rec.m"
            {
#line 446 "middle_rec.m"
              ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__Instrs0_10, ll_backend__middle_rec__Target_2, &ll_backend__middle_rec__Instrs1_19);
            }
#line 447 "middle_rec.m"
            {
#line 447 "middle_rec.m"
              MR_Word base;
#line 447 "middle_rec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "middle_rec.m"
              *ll_backend__middle_rec__Instrs_3 = base;
#line 447 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
#line 447 "middle_rec.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs1_19));
#line 447 "middle_rec.m"
            }
#line 446 "middle_rec.m"
          }
#line 432 "middle_rec.m"
      }
#line 430 "middle_rec.m"
  }
#line 427 "middle_rec.m"
}

#line 242 "middle_rec.m"
static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Var_11,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__BaseConsId_12,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Base_13,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__Recursive_14,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_15,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__Code_16,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_69,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_70,
#line 242 "middle_rec.m"
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_0_71,
#line 242 "middle_rec.m"
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CLD_72)
#line 242 "middle_rec.m"
{
#line 248 "middle_rec.m"
  {
#line 248 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TypeCtorInfo_244_244;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__StackSlots_19;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__VarSet_20;
#line 248 "middle_rec.m"
    MR_String ll_backend__middle_rec__SlotsComment_21;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ModuleInfo_22;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__PredId_23;
#line 248 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__ProcId_24;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryLabel_25;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__VarType_26;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__CheaperTagTest_27;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseLabel_28;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryTestCode_29;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EntryTestInstrs_30;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__StoreMap_31;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BranchStart_32;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseGoalCode_33;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeEnd1_34;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseSaveCode_35;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecGoalCode_36;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeEnd_37;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecSaveCode_38;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ArgModes_39;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__HeadVars_40;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Args_41;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__LiveArgs_42;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__EpilogCode_43;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseCode_44;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecCode_45;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__LiveValCode_46;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BaseInstrs_47;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__RecInstrs_48;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AvoidInstrs_49;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AuxReg_50;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BeforeInstrs0_51;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__AfterInstrs_52;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__BeforeInstrs_53;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop1Label_54;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop2Label_55;
#line 248 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__FrameSize0_56;
#line 248 "middle_rec.m"
    MR_Integer ll_backend__middle_rec__FrameSize_57;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Loop1Test_58;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeIncrSp_59;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__MaybeDecrSp_60;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__InitAuxReg_61;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__IncrAuxReg_62;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__DecrAuxReg_63;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__TestAuxReg_64;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_75_75;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_77_77;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_80_80;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_81_81;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_83_83;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_85_85;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_86_86;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_87_87;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_88_88;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_90_90;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_91_91;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_92_92;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_93_93;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_95_95;
#line 248 "middle_rec.m"
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_96_96;

#line 249 "middle_rec.m"
    {
#line 249 "middle_rec.m"
      ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__StackSlots_19);
    }
#line 250 "middle_rec.m"
    {
#line 250 "middle_rec.m"
      ll_backend__code_info__get_varset_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__VarSet_20);
    }
#line 251 "middle_rec.m"
    {
#line 251 "middle_rec.m"
      ll_backend__middle_rec__SlotsComment_21 = hlds__hlds_llds__explain_stack_slots_2_f_0(ll_backend__middle_rec__StackSlots_19, ll_backend__middle_rec__VarSet_20);
    }
#line 252 "middle_rec.m"
    {
#line 252 "middle_rec.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__ModuleInfo_22);
    }
#line 253 "middle_rec.m"
    {
#line 253 "middle_rec.m"
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__PredId_23);
    }
#line 254 "middle_rec.m"
    {
#line 254 "middle_rec.m"
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__ProcId_24);
    }
#line 255 "middle_rec.m"
    {
#line 255 "middle_rec.m"
      ll_backend__middle_rec__EntryLabel_25 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__middle_rec__ModuleInfo_22, ll_backend__middle_rec__PredId_23, ll_backend__middle_rec__ProcId_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 257 "middle_rec.m"
    {
#line 257 "middle_rec.m"
      ll_backend__code_loc_dep__pre_goal_update_4_p_0(ll_backend__middle_rec__SwitchGoalInfo_15, (MR_Integer) 0, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_71, &ll_backend__middle_rec__STATE_VARIABLE_CLD_75_75);
    }
#line 258 "middle_rec.m"
    {
#line 258 "middle_rec.m"
      ll_backend__middle_rec__VarType_26 = ll_backend__code_info__variable_type_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, ll_backend__middle_rec__Var_11);
    }
#line 259 "middle_rec.m"
    {
#line 259 "middle_rec.m"
      ll_backend__middle_rec__CheaperTagTest_27 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, ll_backend__middle_rec__VarType_26);
    }
#line 260 "middle_rec.m"
    {
#line 260 "middle_rec.m"
      ll_backend__unify_gen__generate_tag_test_10_p_0(ll_backend__middle_rec__Var_11, ll_backend__middle_rec__BaseConsId_12, ll_backend__middle_rec__CheaperTagTest_27, (MR_Integer) 0, &ll_backend__middle_rec__BaseLabel_28, &ll_backend__middle_rec__EntryTestCode_29, ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__STATE_VARIABLE_CI_77_77, ll_backend__middle_rec__STATE_VARIABLE_CLD_75_75, &ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78);
    }
#line 3116 "ll_backend.middle_rec.c"
    ll_backend__middle_rec__TypeCtorInfo_244_244 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 262 "middle_rec.m"
    {
#line 262 "middle_rec.m"
      ll_backend__middle_rec__EntryTestInstrs_30 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestCode_29);
    }
#line 264 "middle_rec.m"
    {
#line 264 "middle_rec.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__middle_rec__SwitchGoalInfo_15, &ll_backend__middle_rec__StoreMap_31);
    }
#line 265 "middle_rec.m"
    {
#line 265 "middle_rec.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78, &ll_backend__middle_rec__BranchStart_32);
    }
#line 266 "middle_rec.m"
    {
#line 266 "middle_rec.m"
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__middle_rec__Base_13, &ll_backend__middle_rec__BaseGoalCode_33, ll_backend__middle_rec__STATE_VARIABLE_CI_77_77, &ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78, &ll_backend__middle_rec__STATE_VARIABLE_CLD_81_81);
    }
#line 267 "middle_rec.m"
    {
#line 267 "middle_rec.m"
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__middle_rec__MaybeEnd1_34, &ll_backend__middle_rec__BaseSaveCode_35, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, ll_backend__middle_rec__STATE_VARIABLE_CLD_81_81);
    }
#line 269 "middle_rec.m"
    {
#line 269 "middle_rec.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__middle_rec__BranchStart_32, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, &ll_backend__middle_rec__STATE_VARIABLE_CLD_83_83);
    }
#line 270 "middle_rec.m"
    {
#line 270 "middle_rec.m"
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__middle_rec__Recursive_14, &ll_backend__middle_rec__RecGoalCode_36, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, &ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_83_83, &ll_backend__middle_rec__STATE_VARIABLE_CLD_86_86);
    }
#line 271 "middle_rec.m"
    {
#line 271 "middle_rec.m"
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_31, ll_backend__middle_rec__MaybeEnd1_34, &ll_backend__middle_rec__MaybeEnd_37, &ll_backend__middle_rec__RecSaveCode_38, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_86_86);
    }
#line 274 "middle_rec.m"
    {
#line 274 "middle_rec.m"
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__middle_rec__StoreMap_31, ll_backend__middle_rec__MaybeEnd_37, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, &ll_backend__middle_rec__STATE_VARIABLE_CLD_87_87);
    }
#line 275 "middle_rec.m"
    {
#line 275 "middle_rec.m"
      ll_backend__code_loc_dep__post_goal_update_4_p_0(ll_backend__middle_rec__SwitchGoalInfo_15, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_87_87, &ll_backend__middle_rec__STATE_VARIABLE_CLD_88_88);
    }
#line 277 "middle_rec.m"
    {
#line 277 "middle_rec.m"
      ll_backend__middle_rec__ArgModes_39 = ll_backend__code_info__get_arginfo_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_85_85);
    }
#line 278 "middle_rec.m"
    {
#line 278 "middle_rec.m"
      ll_backend__middle_rec__HeadVars_40 = ll_backend__code_info__get_headvars_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_85_85);
    }
#line 279 "middle_rec.m"
    {
#line 279 "middle_rec.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__middle_rec_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__middle_rec__HeadVars_40, ll_backend__middle_rec__ArgModes_39, &ll_backend__middle_rec__Args_41);
    }
#line 280 "middle_rec.m"
    {
#line 280 "middle_rec.m"
      ll_backend__code_loc_dep__setup_return_6_p_0(ll_backend__middle_rec__Args_41, &ll_backend__middle_rec__LiveArgs_42, &ll_backend__middle_rec__EpilogCode_43, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_88_88, ll_backend__middle_rec__STATE_VARIABLE_CLD_72);
    }
#line 282 "middle_rec.m"
    {
#line 282 "middle_rec.m"
      ll_backend__middle_rec__V_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseSaveCode_35, ll_backend__middle_rec__EpilogCode_43);
    }
#line 282 "middle_rec.m"
    {
#line 282 "middle_rec.m"
      ll_backend__middle_rec__BaseCode_44 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseGoalCode_33, ll_backend__middle_rec__V_90_90);
    }
#line 283 "middle_rec.m"
    {
#line 283 "middle_rec.m"
      ll_backend__middle_rec__V_91_91 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecSaveCode_38, ll_backend__middle_rec__EpilogCode_43);
    }
#line 283 "middle_rec.m"
    {
#line 283 "middle_rec.m"
      ll_backend__middle_rec__RecCode_45 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecGoalCode_36, ll_backend__middle_rec__V_91_91);
    }
#line 285 "middle_rec.m"
    {
#line 285 "middle_rec.m"
      ll_backend__middle_rec__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 285 "middle_rec.m"
      MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_93_93, 0) = ((MR_Box) (ll_backend__middle_rec__LiveArgs_42));
#line 285 "middle_rec.m"
    }
#line 285 "middle_rec.m"
    {
#line 285 "middle_rec.m"
      ll_backend__middle_rec__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "middle_rec.m"
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 0) = ((MR_Box) (ll_backend__middle_rec__V_93_93));
#line 285 "middle_rec.m"
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 1) = ((MR_Box) ((MR_String) ""));
#line 285 "middle_rec.m"
    }
#line 284 "middle_rec.m"
    {
#line 284 "middle_rec.m"
      ll_backend__middle_rec__LiveValCode_46 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_92_92)));
    }
#line 288 "middle_rec.m"
    {
#line 288 "middle_rec.m"
      ll_backend__middle_rec__BaseInstrs_47 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseCode_44);
    }
#line 289 "middle_rec.m"
    {
#line 289 "middle_rec.m"
      ll_backend__middle_rec__RecInstrs_48 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecCode_45);
    }
#line 295 "middle_rec.m"
    {
#line 295 "middle_rec.m"
      ll_backend__middle_rec__V_95_95 = ll_backend__opt_util__block_refers_to_stack_1_f_0(ll_backend__middle_rec__BaseInstrs_47);
    }
#line 295 "middle_rec.m"
    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_95_95 == (MR_Integer) 0);
#line 248 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 248 "middle_rec.m"
      {
#line 297 "middle_rec.m"
        {
#line 297 "middle_rec.m"
          ll_backend__middle_rec__AvoidInstrs_49 = mercury__list__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47, ll_backend__middle_rec__RecInstrs_48);
        }
#line 298 "middle_rec.m"
        {
#line 298 "middle_rec.m"
          ll_backend__middle_rec__find_unused_register_2_p_0(ll_backend__middle_rec__AvoidInstrs_49, &ll_backend__middle_rec__AuxReg_50);
        }
#line 300 "middle_rec.m"
        {
#line 300 "middle_rec.m"
          ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__RecInstrs_48, &ll_backend__middle_rec__BeforeInstrs0_51, &ll_backend__middle_rec__AfterInstrs_52);
        }
#line 301 "middle_rec.m"
        {
#line 301 "middle_rec.m"
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__BeforeInstrs0_51, ll_backend__middle_rec__AuxReg_50, &ll_backend__middle_rec__BeforeInstrs_53);
        }
#line 303 "middle_rec.m"
        {
#line 303 "middle_rec.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop1Label_54, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, &ll_backend__middle_rec__STATE_VARIABLE_CI_96_96);
        }
#line 304 "middle_rec.m"
        {
#line 304 "middle_rec.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop2Label_55, ll_backend__middle_rec__STATE_VARIABLE_CI_96_96, ll_backend__middle_rec__STATE_VARIABLE_CI_70);
        }
#line 305 "middle_rec.m"
        {
#line 305 "middle_rec.m"
          ll_backend__code_info__get_total_stackslot_count_2_p_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_70, &ll_backend__middle_rec__FrameSize0_56);
        }
#line 306 "middle_rec.m"
        {
#line 306 "middle_rec.m"
          ll_backend__middle_rec__FrameSize_57 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_70, ll_backend__middle_rec__FrameSize0_56);
        }
#line 308 "middle_rec.m"
        {
#line 308 "middle_rec.m"
          ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__EntryTestInstrs_30, ll_backend__middle_rec__Loop1Label_54, &ll_backend__middle_rec__Loop1Test_58);
        }
#line 310 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__FrameSize_57 == (MR_Integer) 0);
#line 335 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 311 "middle_rec.m"
          {
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_98_98;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_99_99;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_100_100;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_104_104;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_105_105;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_106_106;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_108_108;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_109_109;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_113_113;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_114_114;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_115_115;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_122_122;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_123_123;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_124_124;
#line 311 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_130_130;

#line 311 "middle_rec.m"
            {
#line 311 "middle_rec.m"
              ll_backend__middle_rec__MaybeIncrSp_59 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
#line 312 "middle_rec.m"
            {
#line 312 "middle_rec.m"
              ll_backend__middle_rec__MaybeDecrSp_60 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
#line 314 "middle_rec.m"
            ll_backend__middle_rec__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[1]);
#line 314 "middle_rec.m"
            {
#line 314 "middle_rec.m"
              ll_backend__middle_rec__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 314 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 314 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 314 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 2) = ((MR_Box) (ll_backend__middle_rec__V_100_100));
#line 314 "middle_rec.m"
            }
#line 314 "middle_rec.m"
            {
#line 314 "middle_rec.m"
              ll_backend__middle_rec__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 0) = ((MR_Box) (ll_backend__middle_rec__V_99_99));
#line 314 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
#line 314 "middle_rec.m"
            }
#line 313 "middle_rec.m"
            {
#line 313 "middle_rec.m"
              ll_backend__middle_rec__InitAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_98_98)));
            }
#line 320 "middle_rec.m"
            {
#line 320 "middle_rec.m"
              ll_backend__middle_rec__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 320 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_108_108, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 320 "middle_rec.m"
            }
#line 320 "middle_rec.m"
            ll_backend__middle_rec__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[2]);
#line 320 "middle_rec.m"
            {
#line 320 "middle_rec.m"
              ll_backend__middle_rec__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 320 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 320 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 2) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
#line 320 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 3) = ((MR_Box) (ll_backend__middle_rec__V_109_109));
#line 320 "middle_rec.m"
            }
#line 319 "middle_rec.m"
            {
#line 319 "middle_rec.m"
              ll_backend__middle_rec__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 319 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 319 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_105_105, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 319 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_105_105, 2) = ((MR_Box) (ll_backend__middle_rec__V_106_106));
#line 319 "middle_rec.m"
            }
#line 318 "middle_rec.m"
            {
#line 318 "middle_rec.m"
              ll_backend__middle_rec__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_104_104, 0) = ((MR_Box) (ll_backend__middle_rec__V_105_105));
#line 318 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_104_104, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
#line 318 "middle_rec.m"
            }
#line 317 "middle_rec.m"
            {
#line 317 "middle_rec.m"
              ll_backend__middle_rec__IncrAuxReg_62 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_104_104)));
            }
#line 326 "middle_rec.m"
            {
#line 326 "middle_rec.m"
              ll_backend__middle_rec__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 326 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 326 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 326 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 2) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
#line 326 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 3) = ((MR_Box) (ll_backend__middle_rec__V_109_109));
#line 326 "middle_rec.m"
            }
#line 325 "middle_rec.m"
            {
#line 325 "middle_rec.m"
              ll_backend__middle_rec__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 325 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 325 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_114_114, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 325 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_114_114, 2) = ((MR_Box) (ll_backend__middle_rec__V_115_115));
#line 325 "middle_rec.m"
            }
#line 324 "middle_rec.m"
            {
#line 324 "middle_rec.m"
              ll_backend__middle_rec__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_113_113, 0) = ((MR_Box) (ll_backend__middle_rec__V_114_114));
#line 324 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_113_113, 1) = ((MR_Box) ((MR_String) "decrement loop counter"));
#line 324 "middle_rec.m"
            }
#line 323 "middle_rec.m"
            {
#line 323 "middle_rec.m"
              ll_backend__middle_rec__DecrAuxReg_63 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_113_113)));
            }
#line 331 "middle_rec.m"
            {
#line 331 "middle_rec.m"
              ll_backend__middle_rec__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 331 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 331 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 331 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 2) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
#line 331 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 3) = ((MR_Box) (ll_backend__middle_rec__V_100_100));
#line 331 "middle_rec.m"
            }
#line 332 "middle_rec.m"
            {
#line 332 "middle_rec.m"
              ll_backend__middle_rec__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 332 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_130_130, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
#line 332 "middle_rec.m"
            }
#line 331 "middle_rec.m"
            {
#line 331 "middle_rec.m"
              ll_backend__middle_rec__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 331 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 331 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_123_123, 1) = ((MR_Box) (ll_backend__middle_rec__V_124_124));
#line 331 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_123_123, 2) = ((MR_Box) (ll_backend__middle_rec__V_130_130));
#line 331 "middle_rec.m"
            }
#line 330 "middle_rec.m"
            {
#line 330 "middle_rec.m"
              ll_backend__middle_rec__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_122_122, 0) = ((MR_Box) (ll_backend__middle_rec__V_123_123));
#line 330 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_122_122, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
#line 330 "middle_rec.m"
            }
#line 329 "middle_rec.m"
            {
#line 329 "middle_rec.m"
              ll_backend__middle_rec__TestAuxReg_64 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_122_122)));
            }
#line 311 "middle_rec.m"
          }
#line 335 "middle_rec.m"
        else
#line 336 "middle_rec.m"
          {
#line 336 "middle_rec.m"
            MR_String ll_backend__middle_rec__PushMsg_65;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_132_132;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_133_133;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_136_136;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_137_137;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_139_139;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_140_140;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_141_141;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_144_144;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_145_145;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_146_146;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_150_150;
#line 336 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_151_151;

#line 336 "middle_rec.m"
            {
#line 336 "middle_rec.m"
              ll_backend__middle_rec__PushMsg_65 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__middle_rec__ModuleInfo_22, ll_backend__middle_rec__PredId_23, ll_backend__middle_rec__ProcId_24);
            }
#line 338 "middle_rec.m"
            {
#line 338 "middle_rec.m"
              ll_backend__middle_rec__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_57));
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 2) = ((MR_Box) (ll_backend__middle_rec__PushMsg_65));
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 3) = ((MR_Box) ((MR_Integer) 1));
#line 338 "middle_rec.m"
            }
#line 338 "middle_rec.m"
            {
#line 338 "middle_rec.m"
              ll_backend__middle_rec__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_132_132, 0) = ((MR_Box) (ll_backend__middle_rec__V_133_133));
#line 338 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_132_132, 1) = ((MR_Box) ((MR_String) ""));
#line 338 "middle_rec.m"
            }
#line 337 "middle_rec.m"
            {
#line 337 "middle_rec.m"
              ll_backend__middle_rec__MaybeIncrSp_59 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_132_132)));
            }
#line 341 "middle_rec.m"
            {
#line 341 "middle_rec.m"
              ll_backend__middle_rec__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
#line 341 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_137_137, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_57));
#line 341 "middle_rec.m"
            }
#line 341 "middle_rec.m"
            {
#line 341 "middle_rec.m"
              ll_backend__middle_rec__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_136_136, 0) = ((MR_Box) (ll_backend__middle_rec__V_137_137));
#line 341 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_136_136, 1) = ((MR_Box) ((MR_String) ""));
#line 341 "middle_rec.m"
            }
#line 340 "middle_rec.m"
            {
#line 340 "middle_rec.m"
              ll_backend__middle_rec__MaybeDecrSp_60 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_136_136)));
            }
#line 344 "middle_rec.m"
            ll_backend__middle_rec__V_141_141 = (MR_Word) &ll_backend__middle_rec_scalar_common_2[2];
#line 344 "middle_rec.m"
            {
#line 344 "middle_rec.m"
              ll_backend__middle_rec__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 344 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 344 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 344 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 2) = ((MR_Box) (ll_backend__middle_rec__V_141_141));
#line 344 "middle_rec.m"
            }
#line 344 "middle_rec.m"
            {
#line 344 "middle_rec.m"
              ll_backend__middle_rec__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_139_139, 0) = ((MR_Box) (ll_backend__middle_rec__V_140_140));
#line 344 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_139_139, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
#line 344 "middle_rec.m"
            }
#line 343 "middle_rec.m"
            {
#line 343 "middle_rec.m"
              ll_backend__middle_rec__InitAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_139_139)));
            }
#line 346 "middle_rec.m"
            {
#line 346 "middle_rec.m"
              ll_backend__middle_rec__IncrAuxReg_62 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
#line 347 "middle_rec.m"
            {
#line 347 "middle_rec.m"
              ll_backend__middle_rec__DecrAuxReg_63 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
#line 349 "middle_rec.m"
            {
#line 349 "middle_rec.m"
              ll_backend__middle_rec__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_150_150, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
#line 349 "middle_rec.m"
            }
#line 349 "middle_rec.m"
            {
#line 349 "middle_rec.m"
              ll_backend__middle_rec__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 2) = ((MR_Box) (ll_backend__middle_rec__V_141_141));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 3) = ((MR_Box) (ll_backend__middle_rec__V_150_150));
#line 349 "middle_rec.m"
            }
#line 350 "middle_rec.m"
            {
#line 350 "middle_rec.m"
              ll_backend__middle_rec__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 350 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_151_151, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
#line 350 "middle_rec.m"
            }
#line 349 "middle_rec.m"
            {
#line 349 "middle_rec.m"
              ll_backend__middle_rec__V_145_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_145_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_145_145, 1) = ((MR_Box) (ll_backend__middle_rec__V_146_146));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_145_145, 2) = ((MR_Box) (ll_backend__middle_rec__V_151_151));
#line 349 "middle_rec.m"
            }
#line 349 "middle_rec.m"
            {
#line 349 "middle_rec.m"
              ll_backend__middle_rec__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_144_144, 0) = ((MR_Box) (ll_backend__middle_rec__V_145_145));
#line 349 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_144_144, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
#line 349 "middle_rec.m"
            }
#line 348 "middle_rec.m"
            {
#line 348 "middle_rec.m"
              ll_backend__middle_rec__TestAuxReg_64 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_144_144)));
            }
#line 336 "middle_rec.m"
          }
#line 381 "middle_rec.m"
        if ((ll_backend__middle_rec__AfterInstrs_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "middle_rec.m"
          {
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_210_210;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_211_211;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_212_212;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_213_213;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_215_215;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_216_216;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_217_217;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_220_220;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_221_221;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_222_222;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_223_223;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_224_224;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_225_225;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_227_227;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_228_228;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_229_229;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_230_230;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_231_231;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_232_232;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_233_233;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_234_234;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_236_236;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_237_237;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_238_238;
#line 361 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_239_239;

#line 364 "middle_rec.m"
            {
#line 364 "middle_rec.m"
              ll_backend__middle_rec__V_213_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_213_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 364 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_213_213, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_25));
#line 364 "middle_rec.m"
            }
#line 364 "middle_rec.m"
            {
#line 364 "middle_rec.m"
              ll_backend__middle_rec__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_212_212, 0) = ((MR_Box) (ll_backend__middle_rec__V_213_213));
#line 364 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_212_212, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
#line 364 "middle_rec.m"
            }
#line 365 "middle_rec.m"
            {
#line 365 "middle_rec.m"
              ll_backend__middle_rec__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 365 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_217_217, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_21));
#line 365 "middle_rec.m"
            }
#line 365 "middle_rec.m"
            {
#line 365 "middle_rec.m"
              ll_backend__middle_rec__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_216_216, 0) = ((MR_Box) (ll_backend__middle_rec__V_217_217));
#line 365 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_216_216, 1) = ((MR_Box) ((MR_String) ""));
#line 365 "middle_rec.m"
            }
#line 366 "middle_rec.m"
            {
#line 366 "middle_rec.m"
              ll_backend__middle_rec__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_215_215, 0) = ((MR_Box) (ll_backend__middle_rec__V_216_216));
#line 366 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_215_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "middle_rec.m"
            }
#line 364 "middle_rec.m"
            {
#line 364 "middle_rec.m"
              ll_backend__middle_rec__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_211_211, 0) = ((MR_Box) (ll_backend__middle_rec__V_212_212));
#line 364 "middle_rec.m"
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_211_211, 1) = ((MR_Box) (ll_backend__middle_rec__V_215_215));
#line 364 "middle_rec.m"
            }
#line 363 "middle_rec.m"
            {
#line 363 "middle_rec.m"
              ll_backend__middle_rec__V_210_210 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_211_211);
            }
#line 367 "middle_rec.m"
            {
#line 367 "middle_rec.m"
              ll_backend__middle_rec__V_221_221 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestInstrs_30);
            }
#line 369 "middle_rec.m"
            {
#line 369 "middle_rec.m"
              ll_backend__middle_rec__V_225_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_225_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 369 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_225_225, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_54));
#line 369 "middle_rec.m"
            }
#line 369 "middle_rec.m"
            {
#line 369 "middle_rec.m"
              ll_backend__middle_rec__V_224_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_224_224, 0) = ((MR_Box) (ll_backend__middle_rec__V_225_225));
#line 369 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_224_224, 1) = ((MR_Box) ((MR_String) "start of the down loop"));
#line 369 "middle_rec.m"
            }
#line 368 "middle_rec.m"
            {
#line 368 "middle_rec.m"
              ll_backend__middle_rec__V_223_223 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_224_224)));
            }
#line 371 "middle_rec.m"
            {
#line 371 "middle_rec.m"
              ll_backend__middle_rec__V_228_228 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BeforeInstrs_53);
            }
#line 372 "middle_rec.m"
            {
#line 372 "middle_rec.m"
              ll_backend__middle_rec__V_230_230 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Loop1Test_58);
            }
#line 374 "middle_rec.m"
            {
#line 374 "middle_rec.m"
              ll_backend__middle_rec__V_234_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_234_234, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 374 "middle_rec.m"
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_234_234, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_28));
#line 374 "middle_rec.m"
            }
#line 374 "middle_rec.m"
            {
#line 374 "middle_rec.m"
              ll_backend__middle_rec__V_233_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_233_233, 0) = ((MR_Box) (ll_backend__middle_rec__V_234_234));
#line 374 "middle_rec.m"
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_233_233, 1) = ((MR_Box) ((MR_String) "start of base case"));
#line 374 "middle_rec.m"
            }
#line 373 "middle_rec.m"
            {
#line 373 "middle_rec.m"
              ll_backend__middle_rec__V_232_232 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_233_233)));
            }
#line 376 "middle_rec.m"
            {
#line 376 "middle_rec.m"
              ll_backend__middle_rec__V_237_237 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
            }
#line 378 "middle_rec.m"
            {
#line 378 "middle_rec.m"
              ll_backend__middle_rec__V_239_239 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (&ll_backend__middle_rec_scalar_common_1[4])));
            }
#line 377 "middle_rec.m"
            {
#line 377 "middle_rec.m"
              ll_backend__middle_rec__V_238_238 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__V_239_239);
            }
#line 376 "middle_rec.m"
            {
#line 376 "middle_rec.m"
              ll_backend__middle_rec__V_236_236 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_237_237, ll_backend__middle_rec__V_238_238);
            }
#line 375 "middle_rec.m"
            {
#line 375 "middle_rec.m"
              ll_backend__middle_rec__V_231_231 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_232_232, ll_backend__middle_rec__V_236_236);
            }
#line 372 "middle_rec.m"
            {
#line 372 "middle_rec.m"
              ll_backend__middle_rec__V_229_229 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_230_230, ll_backend__middle_rec__V_231_231);
            }
#line 371 "middle_rec.m"
            {
#line 371 "middle_rec.m"
              ll_backend__middle_rec__V_227_227 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_228_228, ll_backend__middle_rec__V_229_229);
            }
#line 370 "middle_rec.m"
            {
#line 370 "middle_rec.m"
              ll_backend__middle_rec__V_222_222 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_223_223, ll_backend__middle_rec__V_227_227);
            }
#line 367 "middle_rec.m"
            {
#line 367 "middle_rec.m"
              ll_backend__middle_rec__V_220_220 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_221_221, ll_backend__middle_rec__V_222_222);
            }
#line 366 "middle_rec.m"
            {
#line 366 "middle_rec.m"
              *ll_backend__middle_rec__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_210_210, ll_backend__middle_rec__V_220_220);
            }
#line 361 "middle_rec.m"
            ll_backend__middle_rec__succeeded = MR_TRUE;
#line 361 "middle_rec.m"
          }
#line 381 "middle_rec.m"
        else
#line 382 "middle_rec.m"
          {
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__BaseLabels_68;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_153_153;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_154_154;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_155_155;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_156_156;
#line 382 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_157_157;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_158_158;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_159_159;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_160_160;
#line 382 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_161_161;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_162_162;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_163_163;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_164_164;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_165_165;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_166_166;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_167_167;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_168_168;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_169_169;
#line 382 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_170_170;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_171_171;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_172_172;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_173_173;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_174_174;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_175_175;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_176_176;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_177_177;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_178_178;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_179_179;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_180_180;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_181_181;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_182_182;
#line 382 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_183_183;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_184_184;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_185_185;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_186_186;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_187_187;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_188_188;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_189_189;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_190_190;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_191_191;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_192_192;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_193_193;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_194_194;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_195_195;
#line 382 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_196_196;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_197_197;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_198_198;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_199_199;
#line 382 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_200_200;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_201_201;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_202_202;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_203_203;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_204_204;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_205_205;
#line 382 "middle_rec.m"
            MR_Word ll_backend__middle_rec__V_206_206;
#line 382 "middle_rec.m"
            MR_String ll_backend__middle_rec__V_209_209;

#line 388 "middle_rec.m"
            {
#line 388 "middle_rec.m"
              ll_backend__middle_rec__find_labels_2_p_0(ll_backend__middle_rec__BaseInstrs_47, &ll_backend__middle_rec__BaseLabels_68);
            }
#line 389 "middle_rec.m"
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BaseLabels_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 382 "middle_rec.m"
              {
#line 392 "middle_rec.m"
                ll_backend__middle_rec__V_157_157 = (MR_String) "Procedure entry point";
#line 393 "middle_rec.m"
                ll_backend__middle_rec__V_161_161 = (MR_String) "";
#line 394 "middle_rec.m"
                ll_backend__middle_rec__V_162_162 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "middle_rec.m"
                {
#line 392 "middle_rec.m"
                  ll_backend__middle_rec__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_156_156, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_25));
#line 392 "middle_rec.m"
                }
#line 392 "middle_rec.m"
                {
#line 392 "middle_rec.m"
                  ll_backend__middle_rec__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_155_155, 0) = ((MR_Box) (ll_backend__middle_rec__V_156_156));
#line 392 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_155_155, 1) = ((MR_Box) (ll_backend__middle_rec__V_157_157));
#line 392 "middle_rec.m"
                }
#line 393 "middle_rec.m"
                {
#line 393 "middle_rec.m"
                  ll_backend__middle_rec__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 393 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_160_160, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_21));
#line 393 "middle_rec.m"
                }
#line 393 "middle_rec.m"
                {
#line 393 "middle_rec.m"
                  ll_backend__middle_rec__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_159_159, 0) = ((MR_Box) (ll_backend__middle_rec__V_160_160));
#line 393 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_159_159, 1) = ((MR_Box) (ll_backend__middle_rec__V_161_161));
#line 393 "middle_rec.m"
                }
#line 394 "middle_rec.m"
                {
#line 394 "middle_rec.m"
                  ll_backend__middle_rec__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_158_158, 0) = ((MR_Box) (ll_backend__middle_rec__V_159_159));
#line 394 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_158_158, 1) = ((MR_Box) (ll_backend__middle_rec__V_162_162));
#line 394 "middle_rec.m"
                }
#line 392 "middle_rec.m"
                {
#line 392 "middle_rec.m"
                  ll_backend__middle_rec__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_154_154, 0) = ((MR_Box) (ll_backend__middle_rec__V_155_155));
#line 392 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_154_154, 1) = ((MR_Box) (ll_backend__middle_rec__V_158_158));
#line 392 "middle_rec.m"
                }
#line 391 "middle_rec.m"
                {
#line 391 "middle_rec.m"
                  ll_backend__middle_rec__V_153_153 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_154_154);
                }
#line 395 "middle_rec.m"
                {
#line 395 "middle_rec.m"
                  ll_backend__middle_rec__V_164_164 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestInstrs_30);
                }
#line 398 "middle_rec.m"
                ll_backend__middle_rec__V_170_170 = (MR_String) "start of the down loop";
#line 398 "middle_rec.m"
                {
#line 398 "middle_rec.m"
                  ll_backend__middle_rec__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 398 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_169_169, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_54));
#line 398 "middle_rec.m"
                }
#line 398 "middle_rec.m"
                {
#line 398 "middle_rec.m"
                  ll_backend__middle_rec__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_168_168, 0) = ((MR_Box) (ll_backend__middle_rec__V_169_169));
#line 398 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_168_168, 1) = ((MR_Box) (ll_backend__middle_rec__V_170_170));
#line 398 "middle_rec.m"
                }
#line 397 "middle_rec.m"
                {
#line 397 "middle_rec.m"
                  ll_backend__middle_rec__V_167_167 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_168_168)));
                }
#line 402 "middle_rec.m"
                {
#line 402 "middle_rec.m"
                  ll_backend__middle_rec__V_174_174 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BeforeInstrs_53);
                }
#line 403 "middle_rec.m"
                {
#line 403 "middle_rec.m"
                  ll_backend__middle_rec__V_176_176 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Loop1Test_58);
                }
#line 404 "middle_rec.m"
                {
#line 404 "middle_rec.m"
                  ll_backend__middle_rec__V_178_178 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
                }
#line 406 "middle_rec.m"
                ll_backend__middle_rec__V_183_183 = (MR_String) "";
#line 406 "middle_rec.m"
                {
#line 406 "middle_rec.m"
                  ll_backend__middle_rec__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 406 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_182_182, 1) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
#line 406 "middle_rec.m"
                }
#line 406 "middle_rec.m"
                {
#line 406 "middle_rec.m"
                  ll_backend__middle_rec__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_181_181, 0) = ((MR_Box) (ll_backend__middle_rec__V_182_182));
#line 406 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_181_181, 1) = ((MR_Box) (ll_backend__middle_rec__V_183_183));
#line 406 "middle_rec.m"
                }
#line 405 "middle_rec.m"
                {
#line 405 "middle_rec.m"
                  ll_backend__middle_rec__V_180_180 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_181_181)));
                }
#line 408 "middle_rec.m"
                {
#line 408 "middle_rec.m"
                  ll_backend__middle_rec__V_185_185 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__AfterInstrs_52);
                }
#line 414 "middle_rec.m"
                ll_backend__middle_rec__V_195_195 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "middle_rec.m"
                ll_backend__middle_rec__V_196_196 = (MR_String) "exit from recursive case";
#line 415 "middle_rec.m"
                ll_backend__middle_rec__V_200_200 = (MR_String) "start of base case";
#line 416 "middle_rec.m"
                ll_backend__middle_rec__V_201_201 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "middle_rec.m"
                ll_backend__middle_rec__V_194_194 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3]);
#line 414 "middle_rec.m"
                ll_backend__middle_rec__V_193_193 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[5];
#line 415 "middle_rec.m"
                {
#line 415 "middle_rec.m"
                  ll_backend__middle_rec__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 415 "middle_rec.m"
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_199_199, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_28));
#line 415 "middle_rec.m"
                }
#line 415 "middle_rec.m"
                {
#line 415 "middle_rec.m"
                  ll_backend__middle_rec__V_198_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_198_198, 0) = ((MR_Box) (ll_backend__middle_rec__V_199_199));
#line 415 "middle_rec.m"
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_198_198, 1) = ((MR_Box) (ll_backend__middle_rec__V_200_200));
#line 415 "middle_rec.m"
                }
#line 416 "middle_rec.m"
                {
#line 416 "middle_rec.m"
                  ll_backend__middle_rec__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_197_197, 0) = ((MR_Box) (ll_backend__middle_rec__V_198_198));
#line 416 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_197_197, 1) = ((MR_Box) (ll_backend__middle_rec__V_201_201));
#line 416 "middle_rec.m"
                }
#line 414 "middle_rec.m"
                {
#line 414 "middle_rec.m"
                  ll_backend__middle_rec__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_192_192, 0) = ((MR_Box) (ll_backend__middle_rec__V_193_193));
#line 414 "middle_rec.m"
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_192_192, 1) = ((MR_Box) (ll_backend__middle_rec__V_197_197));
#line 414 "middle_rec.m"
                }
#line 413 "middle_rec.m"
                {
#line 413 "middle_rec.m"
                  ll_backend__middle_rec__V_191_191 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_192_192);
                }
#line 417 "middle_rec.m"
                {
#line 417 "middle_rec.m"
                  ll_backend__middle_rec__V_203_203 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
                }
#line 420 "middle_rec.m"
                ll_backend__middle_rec__V_209_209 = (MR_String) "exit from base case";
#line 420 "middle_rec.m"
                ll_backend__middle_rec__V_206_206 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[4];
#line 419 "middle_rec.m"
                {
#line 419 "middle_rec.m"
                  ll_backend__middle_rec__V_205_205 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_206_206)));
                }
#line 418 "middle_rec.m"
                {
#line 418 "middle_rec.m"
                  ll_backend__middle_rec__V_204_204 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__V_205_205);
                }
#line 417 "middle_rec.m"
                {
#line 417 "middle_rec.m"
                  ll_backend__middle_rec__V_202_202 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_203_203, ll_backend__middle_rec__V_204_204);
                }
#line 416 "middle_rec.m"
                {
#line 416 "middle_rec.m"
                  ll_backend__middle_rec__V_190_190 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_191_191, ll_backend__middle_rec__V_202_202);
                }
#line 412 "middle_rec.m"
                {
#line 412 "middle_rec.m"
                  ll_backend__middle_rec__V_189_189 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__V_190_190);
                }
#line 411 "middle_rec.m"
                {
#line 411 "middle_rec.m"
                  ll_backend__middle_rec__V_188_188 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__TestAuxReg_64, ll_backend__middle_rec__V_189_189);
                }
#line 410 "middle_rec.m"
                {
#line 410 "middle_rec.m"
                  ll_backend__middle_rec__V_187_187 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__DecrAuxReg_63, ll_backend__middle_rec__V_188_188);
                }
#line 409 "middle_rec.m"
                {
#line 409 "middle_rec.m"
                  ll_backend__middle_rec__V_186_186 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__MaybeDecrSp_60, ll_backend__middle_rec__V_187_187);
                }
#line 408 "middle_rec.m"
                {
#line 408 "middle_rec.m"
                  ll_backend__middle_rec__V_184_184 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_185_185, ll_backend__middle_rec__V_186_186);
                }
#line 407 "middle_rec.m"
                {
#line 407 "middle_rec.m"
                  ll_backend__middle_rec__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_180_180, ll_backend__middle_rec__V_184_184);
                }
#line 404 "middle_rec.m"
                {
#line 404 "middle_rec.m"
                  ll_backend__middle_rec__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_178_178, ll_backend__middle_rec__V_179_179);
                }
#line 403 "middle_rec.m"
                {
#line 403 "middle_rec.m"
                  ll_backend__middle_rec__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_176_176, ll_backend__middle_rec__V_177_177);
                }
#line 402 "middle_rec.m"
                {
#line 402 "middle_rec.m"
                  ll_backend__middle_rec__V_173_173 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_174_174, ll_backend__middle_rec__V_175_175);
                }
#line 401 "middle_rec.m"
                {
#line 401 "middle_rec.m"
                  ll_backend__middle_rec__V_172_172 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__IncrAuxReg_62, ll_backend__middle_rec__V_173_173);
                }
#line 400 "middle_rec.m"
                {
#line 400 "middle_rec.m"
                  ll_backend__middle_rec__V_171_171 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__MaybeIncrSp_59, ll_backend__middle_rec__V_172_172);
                }
#line 399 "middle_rec.m"
                {
#line 399 "middle_rec.m"
                  ll_backend__middle_rec__V_166_166 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_167_167, ll_backend__middle_rec__V_171_171);
                }
#line 396 "middle_rec.m"
                {
#line 396 "middle_rec.m"
                  ll_backend__middle_rec__V_165_165 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__InitAuxReg_61, ll_backend__middle_rec__V_166_166);
                }
#line 395 "middle_rec.m"
                {
#line 395 "middle_rec.m"
                  ll_backend__middle_rec__V_163_163 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_164_164, ll_backend__middle_rec__V_165_165);
                }
#line 394 "middle_rec.m"
                {
#line 394 "middle_rec.m"
                  *ll_backend__middle_rec__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_153_153, ll_backend__middle_rec__V_163_163);
                }
#line 394 "middle_rec.m"
                ll_backend__middle_rec__succeeded = MR_TRUE;
#line 382 "middle_rec.m"
              }
#line 382 "middle_rec.m"
          }
#line 248 "middle_rec.m"
      }
#line 248 "middle_rec.m"
    return ll_backend__middle_rec__succeeded;
#line 248 "middle_rec.m"
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
#line 128 "middle_rec.m"
        switch (MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) {
#line 128 "middle_rec.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 128 "middle_rec.m"
          case (MR_Integer) 0:
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
            break;
#line 128 "middle_rec.m"
          case (MR_Integer) 1:
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
#line 185 "middle_rec.m"
              switch (MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) {
#line 185 "middle_rec.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 185 "middle_rec.m"
                case (MR_Integer) 0:
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
                  break;
#line 185 "middle_rec.m"
                case (MR_Integer) 1:
#line 205 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 185 "middle_rec.m"
                  break;
#line 185 "middle_rec.m"
                case (MR_Integer) 2:
#line 184 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 185 "middle_rec.m"
                  break;
#line 185 "middle_rec.m"
                case (MR_Integer) 3:
#line 185 "middle_rec.m"
#line 185 "middle_rec.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uni_27, (MR_Integer) 0)))) {
#line 185 "middle_rec.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 185 "middle_rec.m"
                    case (MR_Integer) 0:
#line 187 "middle_rec.m"
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 185 "middle_rec.m"
                      break;
#line 185 "middle_rec.m"
                    case (MR_Integer) 1:
#line 208 "middle_rec.m"
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 185 "middle_rec.m"
                      break;
#line 185 "middle_rec.m"
                  }
#line 185 "middle_rec.m"
                  break;
#line 185 "middle_rec.m"
              }
#line 180 "middle_rec.m"
            }
#line 128 "middle_rec.m"
            break;
#line 128 "middle_rec.m"
          case (MR_Integer) 2:
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
#line 173 "middle_rec.m"
              switch (ll_backend__middle_rec__BuiltinState_21) {
#line 173 "middle_rec.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 173 "middle_rec.m"
                case (MR_Integer) 0:
#line 172 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
#line 173 "middle_rec.m"
                  break;
#line 173 "middle_rec.m"
                case (MR_Integer) 2:
#line 173 "middle_rec.m"
                case (MR_Integer) 1:
#line 177 "middle_rec.m"
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 173 "middle_rec.m"
                  break;
#line 173 "middle_rec.m"
              }
#line 169 "middle_rec.m"
            }
#line 128 "middle_rec.m"
            break;
#line 128 "middle_rec.m"
          case (MR_Integer) 3:
#line 128 "middle_rec.m"
#line 128 "middle_rec.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) {
#line 128 "middle_rec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 128 "middle_rec.m"
              case (MR_Integer) 0:
#line 128 "middle_rec.m"
              case (MR_Integer) 1:
#line 214 "middle_rec.m"
                ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 128 "middle_rec.m"
                break;
#line 128 "middle_rec.m"
              case (MR_Integer) 2:
#line 128 "middle_rec.m"
                {
#line 128 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__ConjType_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
#line 128 "middle_rec.m"
                  MR_Word ll_backend__middle_rec__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));

#line 132 "middle_rec.m"
#line 132 "middle_rec.m"
                  switch (ll_backend__middle_rec__ConjType_5) {
#line 132 "middle_rec.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 132 "middle_rec.m"
                    case (MR_Integer) 1:
#line 134 "middle_rec.m"
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
#line 132 "middle_rec.m"
                      break;
#line 132 "middle_rec.m"
                    case (MR_Integer) 0:
#line 131 "middle_rec.m"
                      {
#line 131 "middle_rec.m"
                        return ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_6);
                      }
#line 132 "middle_rec.m"
                      break;
#line 132 "middle_rec.m"
                  }
#line 128 "middle_rec.m"
                }
#line 128 "middle_rec.m"
                break;
#line 128 "middle_rec.m"
              case (MR_Integer) 3:
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
                break;
#line 128 "middle_rec.m"
              case (MR_Integer) 4:
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
                break;
#line 128 "middle_rec.m"
              case (MR_Integer) 5:
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
#line 150 "middle_rec.m"
                      switch (ll_backend__middle_rec__FGT_13) {
#line 150 "middle_rec.m"
                        default:
#line 150 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = MR_FALSE;
#line 150 "middle_rec.m"
                          break;
#line 150 "middle_rec.m"
                        case (MR_Integer) 1:
#line 149 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = MR_TRUE;
#line 150 "middle_rec.m"
                          break;
#line 150 "middle_rec.m"
                        case (MR_Integer) 2:
#line 150 "middle_rec.m"
                          ll_backend__middle_rec__succeeded = MR_TRUE;
#line 150 "middle_rec.m"
                          break;
#line 150 "middle_rec.m"
                      }
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
                break;
#line 128 "middle_rec.m"
              case (MR_Integer) 6:
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
                break;
#line 128 "middle_rec.m"
              case (MR_Integer) 7:
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
                break;
#line 128 "middle_rec.m"
            }
#line 128 "middle_rec.m"
            break;
#line 128 "middle_rec.m"
        }
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
#line 56 "middle_rec.m"
  {
#line 56 "middle_rec.m"
    MR_bool ll_backend__middle_rec__succeeded;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_7, (MR_Integer) 0)));
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_7, (MR_Integer) 1)));
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Var_13;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Case1_14;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Case2_15;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ConsId1_16;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goal1_17;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__ConsId2_18;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goal2_19;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_24_24;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_25_25;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_26_26;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_27_27;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_28_28;
#line 56 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_29_29;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_30_30;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_37_37;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__GoalExpr_40;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__Goals_42;
#line 62 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_43_43;
#line 122 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_38_38;
#line 88 "middle_rec.m"
    MR_Word ll_backend__middle_rec__V_41_41;

#line 58 "middle_rec.m"
    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 58 "middle_rec.m"
    if (ll_backend__middle_rec__succeeded)
#line 58 "middle_rec.m"
      {
#line 58 "middle_rec.m"
        ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 1)));
#line 58 "middle_rec.m"
        ll_backend__middle_rec__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 2)));
#line 58 "middle_rec.m"
        ll_backend__middle_rec__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 3)));
#line 58 "middle_rec.m"
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_24_24 == (MR_Integer) 1);
#line 56 "middle_rec.m"
        if (ll_backend__middle_rec__succeeded)
#line 56 "middle_rec.m"
          {
#line 58 "middle_rec.m"
            ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 58 "middle_rec.m"
            if (ll_backend__middle_rec__succeeded)
#line 58 "middle_rec.m"
              {
#line 58 "middle_rec.m"
                ll_backend__middle_rec__Case1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_25_25, (MR_Integer) 0)));
#line 58 "middle_rec.m"
                ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_25_25, (MR_Integer) 1)));
#line 58 "middle_rec.m"
                ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 58 "middle_rec.m"
                if (ll_backend__middle_rec__succeeded)
#line 58 "middle_rec.m"
                  {
#line 58 "middle_rec.m"
                    ll_backend__middle_rec__Case2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, (MR_Integer) 0)));
#line 58 "middle_rec.m"
                    ll_backend__middle_rec__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, (MR_Integer) 1)));
#line 58 "middle_rec.m"
                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 56 "middle_rec.m"
                    if (ll_backend__middle_rec__succeeded)
#line 56 "middle_rec.m"
                      {
#line 59 "middle_rec.m"
                        ll_backend__middle_rec__ConsId1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 0)));
#line 59 "middle_rec.m"
                        ll_backend__middle_rec__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 1)));
#line 59 "middle_rec.m"
                        ll_backend__middle_rec__Goal1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 2)));
#line 59 "middle_rec.m"
                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 56 "middle_rec.m"
                        if (ll_backend__middle_rec__succeeded)
#line 56 "middle_rec.m"
                          {
#line 60 "middle_rec.m"
                            ll_backend__middle_rec__ConsId2_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 0)));
#line 60 "middle_rec.m"
                            ll_backend__middle_rec__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 1)));
#line 60 "middle_rec.m"
                            ll_backend__middle_rec__Goal2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 2)));
#line 60 "middle_rec.m"
                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 56 "middle_rec.m"
                            if (ll_backend__middle_rec__succeeded)
#line 56 "middle_rec.m"
                              {
#line 122 "middle_rec.m"
                                ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 0)));
#line 122 "middle_rec.m"
                                ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 1)));
#line 122 "middle_rec.m"
                                {
#line 122 "middle_rec.m"
                                  ll_backend__middle_rec__V_30_30 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_37_37);
                                }
#line 62 "middle_rec.m"
                                ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_30_30 == (MR_Integer) 1);
#line 62 "middle_rec.m"
                                if (ll_backend__middle_rec__succeeded)
#line 62 "middle_rec.m"
                                  {
#line 88 "middle_rec.m"
                                    ll_backend__middle_rec__GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 0)));
#line 88 "middle_rec.m"
                                    ll_backend__middle_rec__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 1)));
#line 89 "middle_rec.m"
                                    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 89 "middle_rec.m"
                                    if (ll_backend__middle_rec__succeeded)
#line 89 "middle_rec.m"
                                      {
#line 89 "middle_rec.m"
                                        ll_backend__middle_rec__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_40, (MR_Integer) 1)));
#line 89 "middle_rec.m"
                                        ll_backend__middle_rec__Goals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_40, (MR_Integer) 2)));
#line 89 "middle_rec.m"
                                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_43_43 == (MR_Integer) 0);
#line 62 "middle_rec.m"
                                        if (ll_backend__middle_rec__succeeded)
#line 90 "middle_rec.m"
                                          {
#line 90 "middle_rec.m"
                                            ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_42, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20);
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
                                    return ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(ll_backend__middle_rec__Var_13, ll_backend__middle_rec__ConsId1_16, ll_backend__middle_rec__Goal1_17, ll_backend__middle_rec__Goal2_19, ll_backend__middle_rec__GoalInfo_12, ll_backend__middle_rec__Instrs_8, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20, ll_backend__middle_rec__STATE_VARIABLE_CI_21, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_22, ll_backend__middle_rec__STATE_VARIABLE_CLD_23);
                                  }
#line 67 "middle_rec.m"
                                else
#line 73 "middle_rec.m"
                                  {
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_33_33;
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 0)));
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__GoalExpr_48;
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__Goals_50;
#line 73 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_51_51;
#line 122 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 1)));
#line 88 "middle_rec.m"
                                    MR_Word ll_backend__middle_rec__V_49_49;

#line 122 "middle_rec.m"
                                    {
#line 122 "middle_rec.m"
                                      ll_backend__middle_rec__V_33_33 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_45_45);
                                    }
#line 68 "middle_rec.m"
                                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_33_33 == (MR_Integer) 1);
#line 73 "middle_rec.m"
                                    if (ll_backend__middle_rec__succeeded)
#line 73 "middle_rec.m"
                                      {
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 0)));
#line 88 "middle_rec.m"
                                        ll_backend__middle_rec__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 1)));
#line 89 "middle_rec.m"
                                        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 89 "middle_rec.m"
                                        if (ll_backend__middle_rec__succeeded)
#line 89 "middle_rec.m"
                                          {
#line 89 "middle_rec.m"
                                            ll_backend__middle_rec__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_48, (MR_Integer) 1)));
#line 89 "middle_rec.m"
                                            ll_backend__middle_rec__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_48, (MR_Integer) 2)));
#line 89 "middle_rec.m"
                                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_51_51 == (MR_Integer) 0);
#line 73 "middle_rec.m"
                                            if (ll_backend__middle_rec__succeeded)
#line 73 "middle_rec.m"
                                              {
#line 90 "middle_rec.m"
                                                {
#line 90 "middle_rec.m"
                                                  ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_50, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20);
                                                }
#line 73 "middle_rec.m"
                                                if (ll_backend__middle_rec__succeeded)
#line 71 "middle_rec.m"
                                                  {
#line 71 "middle_rec.m"
                                                    return ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(ll_backend__middle_rec__Var_13, ll_backend__middle_rec__ConsId2_18, ll_backend__middle_rec__Goal2_19, ll_backend__middle_rec__Goal1_17, ll_backend__middle_rec__GoalInfo_12, ll_backend__middle_rec__Instrs_8, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20, ll_backend__middle_rec__STATE_VARIABLE_CI_21, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_22, ll_backend__middle_rec__STATE_VARIABLE_CLD_23);
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
