/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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
ll_backend__middle_rec__find_labels_acc_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3);

static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
  MR_Word ll_backend__middle_rec__Instrs_3,
  MR_Word * ll_backend__middle_rec__Labels_4);

static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
  MR_Word ll_backend__middle_rec__Rval_4,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
  MR_Word ll_backend__middle_rec__Lval_4,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
  MR_Word ll_backend__middle_rec__Uinstr_4,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__find_unused_register_acc_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Integer ll_backend__middle_rec__N_2,
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
  MR_Word ll_backend__middle_rec__Instrs_3,
  MR_Word * ll_backend__middle_rec__UnusedReg_4);

static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
  MR_Word * ll_backend__middle_rec__HeadVar__3_3);

static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word * ll_backend__middle_rec__Before_2,
  MR_Word * ll_backend__middle_rec__After_3);

static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__Target_2,
  MR_Word * ll_backend__middle_rec__Instrs_3);

static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
  MR_Word ll_backend__middle_rec__Var_11,
  MR_Word ll_backend__middle_rec__BaseConsId_12,
  MR_Word ll_backend__middle_rec__Base_13,
  MR_Word ll_backend__middle_rec__Recursive_14,
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_15,
  MR_Word * ll_backend__middle_rec__Code_16,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_69,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_70,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_0_71,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CLD_72);

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(
  MR_Word ll_backend__middle_rec__GoalExpr_3);

static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
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



static void MR_CALL 
ll_backend__middle_rec__find_labels_acc_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Labels_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;

        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__middle_rec__STATE_VARIABLE_Labels_3 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
        else
          {
            MR_Word ll_backend__middle_rec__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;
            MR_String ll_backend__middle_rec__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__Label_12;

            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__middle_rec__succeeded)
              {
                ll_backend__middle_rec__Label_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
                {
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 0) = ((MR_Box) (ll_backend__middle_rec__Label_12));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18, 1) = ((MR_Box) (ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2));
                }
              }
            else
              {
                MR_Word ll_backend__middle_rec__Block_15;
                MR_Integer ll_backend__middle_rec__V_13_13;
                MR_Integer ll_backend__middle_rec__V_14_14;

                ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ll_backend__middle_rec__succeeded)
                  {
                    ll_backend__middle_rec__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
                    ll_backend__middle_rec__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 2)));
                    ll_backend__middle_rec__Block_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 3)));
                    {
                      ll_backend__middle_rec__find_labels_acc_3_p_0(ll_backend__middle_rec__Block_15, ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18);
                    }
                  }
                else
                  ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2;
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_8;
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;

              ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_0__tmp_copy_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
  MR_Word ll_backend__middle_rec__Instrs_3,
  MR_Word * ll_backend__middle_rec__Labels_4)
{
  {
    MR_bool ll_backend__middle_rec__succeeded;

    {
      ll_backend__middle_rec__find_labels_acc_3_p_0(ll_backend__middle_rec__Instrs_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__middle_rec__Labels_4);
    }
  }
}

static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;

        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
        else
          {
            MR_Word ll_backend__middle_rec__Output_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Outputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 2)));
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 3)));
            MR_String ll_backend__middle_rec__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 4)));
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 5)));
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 6)));

            {
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_10, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Outputs_8;
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;

        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
        else
          {
            MR_Word ll_backend__middle_rec__Input_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 4)));
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
            MR_String ll_backend__middle_rec__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 2)));
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 3)));
            MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 5)));
            MR_Word ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 6)));

            {
              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Inputs_8;
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
{
  {
    MR_bool ll_backend__middle_rec__succeeded;

    switch (MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__middle_rec__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

          {
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_4, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));

          {
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__middle_rec__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__middle_rec__Rval2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_20_20;
          MR_Word ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

          {
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_20_20);
          }
          {
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval2_16, ll_backend__middle_rec__STATE_VARIABLE_Used_20_20, ll_backend__middle_rec__STATE_VARIABLE_Used_3);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
  MR_Word ll_backend__middle_rec__Rval_4,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_16,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;

        switch (MR_tag((MR_Word) ll_backend__middle_rec__Rval_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__middle_rec__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_6, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", (MR_String) "var");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__middle_rec__Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));
              MR_Integer ll_backend__middle_rec__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_9;

                ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
                break;
              case (MR_Integer) 1:
                *ll_backend__middle_rec__STATE_VARIABLE_Used_17 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_16;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__middle_rec__Rval1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval1_27;

                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__middle_rec__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
                  MR_Word ll_backend__middle_rec__Rval1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

                  {
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_28, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__middle_rec__Rval__tmp_copy_4 = ll_backend__middle_rec__Rval2_14;
                    MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

                    ll_backend__middle_rec__STATE_VARIABLE_Used_0_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_16;
                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__Rval__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__middle_rec__MemRef_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

                  {
                    ll_backend__middle_rec__find_used_registers_mem_ref_3_p_0(ll_backend__middle_rec__MemRef_15, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, ll_backend__middle_rec__STATE_VARIABLE_Used_17);
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
  MR_Word ll_backend__middle_rec__Lval_4,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_12,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_13)
{
  {
    MR_bool ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer ll_backend__middle_rec__N_6;
    MR_Word ll_backend__middle_rec__V_14_14;

    if (ll_backend__middle_rec__succeeded)
      {
        ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)));
        ll_backend__middle_rec__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_14_14 == (MR_Integer) 0);
      }
    if (ll_backend__middle_rec__succeeded)
      {
        MR_Word ll_backend__middle_rec__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Integer ll_backend__middle_rec__N1_7;
        MR_Box ll_backend__middle_rec__conv0_N1_7;

        {
          mercury__builtin__copy_2_p_1(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N_6)), &ll_backend__middle_rec__conv0_N1_7);
        }
        ll_backend__middle_rec__N1_7 = ((MR_Integer) ll_backend__middle_rec__conv0_N1_7);
        {
          mercury__set__insert_3_p_0(ll_backend__middle_rec__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__middle_rec__N1_7)), ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
        }
      }
    else
      {
        MR_Word ll_backend__middle_rec__Rval_9;
        MR_Word ll_backend__middle_rec__FieldNum_10;
        MR_Word ll_backend__middle_rec__V_8_8;

        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
            ll_backend__middle_rec__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 2)));
            ll_backend__middle_rec__FieldNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 3)));
            {
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_16_16;

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_9, ll_backend__middle_rec__STATE_VARIABLE_Used_0_12, &ll_backend__middle_rec__STATE_VARIABLE_Used_16_16);
              }
              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__FieldNum_10, ll_backend__middle_rec__STATE_VARIABLE_Used_16_16, ll_backend__middle_rec__STATE_VARIABLE_Used_13);
              }
            }
          }
        else
          {
            MR_Word ll_backend__middle_rec__V_11_11;

            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
            if (ll_backend__middle_rec__succeeded)
              {
                ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", (MR_String) "lvar");
                  return;
                }
              }
            else
              {
              }
            *ll_backend__middle_rec__STATE_VARIABLE_Used_13 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_12;
          }
      }
  }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;

        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
        else
          {
            MR_Word ll_backend__middle_rec__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Lvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

            {
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Lvals_8;
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;

        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
        else
          {
            MR_Word ll_backend__middle_rec__Comp_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Comps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

            switch (MR_tag((MR_Word) ll_backend__middle_rec__Comp_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__middle_rec__In_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

                  {
                    ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(ll_backend__middle_rec__In_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__middle_rec__Out_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)));

                  {
                    ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(ll_backend__middle_rec__Out_19, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_12_12);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Comp_7, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
                    break;
                  case (MR_Integer) 1:
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
                    break;
                  case (MR_Integer) 2:
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
                    break;
                  case (MR_Integer) 3:
                    ll_backend__middle_rec__STATE_VARIABLE_Used_12_12 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
                    break;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Comps_8;
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
  MR_Word ll_backend__middle_rec__Uinstr_4,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_75,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_76)
{
  {
    MR_bool ll_backend__middle_rec__succeeded;

    switch (MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__middle_rec__Uinstr_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 1:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__middle_rec__LvalSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)));
          MR_Word ll_backend__middle_rec__LvalList_29;

          {
            mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__middle_rec__LvalSet_28, &ll_backend__middle_rec__LvalList_29);
          }
          {
            ll_backend__middle_rec__find_used_registers_lvals_3_p_0(ll_backend__middle_rec__LvalList_29, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__middle_rec__Instrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
              MR_Integer ll_backend__middle_rec__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Integer ll_backend__middle_rec__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_32, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__middle_rec__Lval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_96;

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_33, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_96);
              }
              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_34, ll_backend__middle_rec__STATE_VARIABLE_Used_96_96, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__middle_rec__Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__Rval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_96_120;

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_118, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_96_120);
              }
              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_119, ll_backend__middle_rec__STATE_VARIABLE_Used_96_120, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 3:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 4:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 5:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 6:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__middle_rec__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_108, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 8:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__middle_rec__Rval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_115, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__middle_rec__Lval_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_127, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__middle_rec__Lval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_126, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__middle_rec__MaybeRegionRval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
              MR_Word ll_backend__middle_rec__MaybeReuse_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_91_91;
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
              MR_Word ll_backend__middle_rec__Lval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__Rval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
              MR_Word ll_backend__middle_rec__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
              MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_102, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_91_91);
              }
              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_103, ll_backend__middle_rec__STATE_VARIABLE_Used_91_91, &ll_backend__middle_rec__STATE_VARIABLE_Used_92_92);
              }
              if ((ll_backend__middle_rec__MaybeRegionRval_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__middle_rec__STATE_VARIABLE_Used_93_93 = ll_backend__middle_rec__STATE_VARIABLE_Used_92_92;
              else
                {
                  MR_Word ll_backend__middle_rec__RegionRval_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeRegionRval_39, (MR_Integer) 0)));

                  {
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__RegionRval_41, ll_backend__middle_rec__STATE_VARIABLE_Used_92_92, &ll_backend__middle_rec__STATE_VARIABLE_Used_93_93);
                  }
                }
              if ((ll_backend__middle_rec__MaybeReuse_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_93_93;
              else
                {
                  MR_Word ll_backend__middle_rec__ReuseRval_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 0)));
                  MR_Word ll_backend__middle_rec__MaybeFlagLval_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeReuse_40, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;

                  {
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ReuseRval_42, ll_backend__middle_rec__STATE_VARIABLE_Used_93_93, &ll_backend__middle_rec__STATE_VARIABLE_Used_94_94);
                  }
                  if ((ll_backend__middle_rec__MaybeFlagLval_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_94_94;
                  else
                    {
                      MR_Word ll_backend__middle_rec__FlagLval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MaybeFlagLval_43, (MR_Integer) 0)));

                      {
                        ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__FlagLval_44, ll_backend__middle_rec__STATE_VARIABLE_Used_94_94, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__middle_rec__Lval_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_121, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__middle_rec__Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_125, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__middle_rec__Rval_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_114, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 16:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__middle_rec__IdRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec__NumLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
              MR_Word ll_backend__middle_rec__AddrLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_88_88;
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_89_89;
              MR_Word ll_backend__middle_rec___FillOp_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec___EmbeddedStackFrame_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__IdRval_46, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_88_88);
              }
              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__NumLval_47, ll_backend__middle_rec__STATE_VARIABLE_Used_88_88, &ll_backend__middle_rec__STATE_VARIABLE_Used_89_89);
              }
              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__AddrLval_48, ll_backend__middle_rec__STATE_VARIABLE_Used_89_89, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__middle_rec__ValueRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec___SetOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec___EmbeddedStackFrame_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__ValueRval_50, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 19:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__middle_rec__Lval_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_128, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__middle_rec__Rval_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec___Rsn_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_124, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__middle_rec__Lval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_122, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__middle_rec__Rval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_123, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 24:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 25:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 26:
            *ll_backend__middle_rec__STATE_VARIABLE_Used_76 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_75;
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__middle_rec__Components_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
              MR_Word ll_backend__middle_rec__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
              MR_Word ll_backend__middle_rec__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));
              MR_Word ll_backend__middle_rec__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
              MR_Word ll_backend__middle_rec__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
              MR_Word ll_backend__middle_rec__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 9)));
              MR_Word ll_backend__middle_rec__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 10)));

              {
                ll_backend__middle_rec__find_used_registers_components_3_p_0(ll_backend__middle_rec__Components_52, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word ll_backend__middle_rec__Lval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Integer ll_backend__middle_rec__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Integer ll_backend__middle_rec__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_116, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__middle_rec__Lval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_109, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__middle_rec__Lval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_117, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word ll_backend__middle_rec__LCLval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Integer ll_backend__middle_rec__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCLval_69, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__middle_rec__LCRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__LCSLval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_81_81;
              MR_Word ll_backend__middle_rec__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_70, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_81_81);
              }
              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__LCSLval_71, ll_backend__middle_rec__STATE_VARIABLE_Used_81_81, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__middle_rec__LCSRval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_79_79;
              MR_Word ll_backend__middle_rec__LCRval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_110, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_79_79);
              }
              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_73, ll_backend__middle_rec__STATE_VARIABLE_Used_79_79, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_77_77;
              MR_Word ll_backend__middle_rec__LCRval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__LCSRval_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCRval_111, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, &ll_backend__middle_rec__STATE_VARIABLE_Used_77_77);
              }
              {
                ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__LCSRval_112, ll_backend__middle_rec__STATE_VARIABLE_Used_77_77, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0_2,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;

        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__middle_rec__STATE_VARIABLE_Used_3 = ll_backend__middle_rec__STATE_VARIABLE_Used_0_2;
        else
          {
            MR_Word ll_backend__middle_rec__Uinstr_7;
            MR_Word ll_backend__middle_rec__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;
            MR_String ll_backend__middle_rec__V_8_8;

            ll_backend__middle_rec__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
            ll_backend__middle_rec__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_13_13, (MR_Integer) 1)));
            {
              ll_backend__middle_rec__find_used_registers_instr_3_p_0(ll_backend__middle_rec__Uinstr_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Instrs_9;
              MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_0__tmp_copy_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__middle_rec__find_unused_register_acc_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Integer ll_backend__middle_rec__N_2,
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;

        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__middle_rec__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__N_2));
            }
          }
        else
          {
            MR_Integer ll_backend__middle_rec__H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));

            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__N_2 < ll_backend__middle_rec__H_6);
            if (ll_backend__middle_rec__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__middle_rec__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__N_2));
                }
              }
            else
              {
                MR_Integer ll_backend__middle_rec__N1_10 = (ll_backend__middle_rec__N_2 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__T_7;
                  MR_Integer ll_backend__middle_rec__N__tmp_copy_2 = ll_backend__middle_rec__N1_10;

                  ll_backend__middle_rec__N_2 = ll_backend__middle_rec__N__tmp_copy_2;
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
  MR_Word ll_backend__middle_rec__Instrs_3,
  MR_Word * ll_backend__middle_rec__UnusedReg_4)
{
  {
    MR_bool ll_backend__middle_rec__succeeded;
    MR_Word ll_backend__middle_rec__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word ll_backend__middle_rec__Used0_5;
    MR_Word ll_backend__middle_rec__Used1_6;
    MR_Word ll_backend__middle_rec__UsedList_7;

    {
      mercury__set__init_1_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, &ll_backend__middle_rec__Used0_5);
    }
    {
      ll_backend__middle_rec__find_used_registers_3_p_0(ll_backend__middle_rec__Instrs_3, ll_backend__middle_rec__Used0_5, &ll_backend__middle_rec__Used1_6);
    }
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__middle_rec__TypeCtorInfo_9_9, ll_backend__middle_rec__Used1_6, &ll_backend__middle_rec__UsedList_7);
    }
    {
      ll_backend__middle_rec__find_unused_register_acc_3_p_0(ll_backend__middle_rec__UsedList_7, (MR_Integer) 1, ll_backend__middle_rec__UnusedReg_4);
    }
  }
}

static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__HeadVar__2_2,
  MR_Word * ll_backend__middle_rec__HeadVar__3_3)
{
  {
    MR_bool ll_backend__middle_rec__succeeded;

    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__middle_rec__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__middle_rec__Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__middle_rec__Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__middle_rec__Instr_8;
        MR_Word ll_backend__middle_rec__Instrs_9;
        MR_Word ll_backend__middle_rec__Lives0_10;
        MR_String ll_backend__middle_rec__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 1)));
        MR_Word ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 0)));

        ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_13_13)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__Lives0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_13_13, (MR_Integer) 0)));
            {
              MR_Word ll_backend__middle_rec__Lives_12;
              MR_Word ll_backend__middle_rec__V_14_14;

              {
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__middle_rec__HeadVar__2_2)), ll_backend__middle_rec__Lives0_10, &ll_backend__middle_rec__Lives_12);
              }
              {
                ll_backend__middle_rec__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_14_14, 0) = ((MR_Box) (ll_backend__middle_rec__Lives_12));
              }
              {
                ll_backend__middle_rec__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 0) = ((MR_Box) (ll_backend__middle_rec__V_14_14));
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 1) = ((MR_Box) (ll_backend__middle_rec__Comment_11));
              }
            }
          }
        else
          ll_backend__middle_rec__Instr_8 = ll_backend__middle_rec__Instr0_5;
        {
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__Instrs0_6, ll_backend__middle_rec__HeadVar__2_2, &ll_backend__middle_rec__Instrs_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__middle_rec__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs_9));
        }
      }
  }
}

static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word * ll_backend__middle_rec__Before_2,
  MR_Word * ll_backend__middle_rec__After_3)
{
  {
    MR_bool ll_backend__middle_rec__succeeded;

    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "did not find call");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__middle_rec__Instrs1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
        MR_String ll_backend__middle_rec__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
        MR_Word ll_backend__middle_rec__V_13_13;
        MR_Word ll_backend__middle_rec__V_14_14;
        MR_Word ll_backend__middle_rec__V_15_15;
        MR_Word ll_backend__middle_rec__V_16_16;
        MR_Word ll_backend__middle_rec__V_17_17;
        MR_Word ll_backend__middle_rec__V_18_18;

        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 1)));
            ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 2)));
            ll_backend__middle_rec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 3)));
            ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 4)));
            ll_backend__middle_rec__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 5)));
            ll_backend__middle_rec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_26_26, (MR_Integer) 6)));
            {
              MR_Word ll_backend__middle_rec__Instrs3_22;
              MR_Word ll_backend__middle_rec__Instrs2_20;
              MR_Word ll_backend__middle_rec__Instr2_21;
              MR_Word ll_backend__middle_rec__V_27_27;
              MR_String ll_backend__middle_rec__V_24_24;
              MR_Word ll_backend__middle_rec__V_23_23;

              {
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Instrs2_20);
              }
              ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Instrs2_20)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__middle_rec__succeeded)
                {
                  ll_backend__middle_rec__Instr2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 0)));
                  ll_backend__middle_rec__Instrs3_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 1)));
                  ll_backend__middle_rec__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 0)));
                  ll_backend__middle_rec__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 1)));
                  ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (ll_backend__middle_rec__succeeded)
                    ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_27_27, (MR_Integer) 1)));
                }
              if (ll_backend__middle_rec__succeeded)
                {
                  *ll_backend__middle_rec__Before_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ll_backend__middle_rec__After_3 = ll_backend__middle_rec__Instrs3_22;
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "call not followed by label");
                    return;
                  }
                }
            }
          }
        else
          {
            MR_Word ll_backend__middle_rec__Before1_25;

            {
              ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Before1_25, ll_backend__middle_rec__After_3);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__middle_rec__Before_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Before1_25));
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__Target_2,
  MR_Word * ll_backend__middle_rec__Instrs_3)
{
  {
    MR_bool ll_backend__middle_rec__succeeded;

    if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "empty list");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__middle_rec__Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__middle_rec__Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__middle_rec__Test_13;
        MR_Word ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
        MR_String ll_backend__middle_rec___Comment_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
        MR_Word ll_backend__middle_rec___OldTarget_14;

        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__Test_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 1)));
            ll_backend__middle_rec___OldTarget_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_20_20, (MR_Integer) 2)));
            {
              MR_Word ll_backend__middle_rec__NewTest_18;
              MR_Word ll_backend__middle_rec__V_24_24;
              MR_Word ll_backend__middle_rec__V_25_25;
              MR_Word ll_backend__middle_rec__V_26_26;

              if ((ll_backend__middle_rec__Instrs0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "if_val followed by other instructions");
                    return;
                  }
                }
              {
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__middle_rec__Test_13, &ll_backend__middle_rec__NewTest_18);
              }
              {
                ll_backend__middle_rec__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, 0) = ((MR_Box) (ll_backend__middle_rec__Target_2));
              }
              {
                ll_backend__middle_rec__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 1) = ((MR_Box) (ll_backend__middle_rec__NewTest_18));
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_25_25, 2) = ((MR_Box) (ll_backend__middle_rec__V_26_26));
              }
              {
                ll_backend__middle_rec__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 0) = ((MR_Box) (ll_backend__middle_rec__V_25_25));
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_24_24, 1) = ((MR_Box) ((MR_String) "test on downward loop"));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__middle_rec__Instrs_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__V_24_24));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        else
          {
            MR_Word ll_backend__middle_rec__Instrs1_19;

            {
              ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__Instrs0_10, ll_backend__middle_rec__Target_2, &ll_backend__middle_rec__Instrs1_19);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__middle_rec__Instrs_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Instr0_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__middle_rec__Instrs1_19));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
  MR_Word ll_backend__middle_rec__Var_11,
  MR_Word ll_backend__middle_rec__BaseConsId_12,
  MR_Word ll_backend__middle_rec__Base_13,
  MR_Word ll_backend__middle_rec__Recursive_14,
  MR_Word ll_backend__middle_rec__SwitchGoalInfo_15,
  MR_Word * ll_backend__middle_rec__Code_16,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_69,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_70,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_0_71,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CLD_72)
{
  {
    MR_bool ll_backend__middle_rec__succeeded;
    MR_Word ll_backend__middle_rec__TypeCtorInfo_244_244;
    MR_Word ll_backend__middle_rec__StackSlots_19;
    MR_Word ll_backend__middle_rec__VarSet_20;
    MR_String ll_backend__middle_rec__SlotsComment_21;
    MR_Word ll_backend__middle_rec__ModuleInfo_22;
    MR_Word ll_backend__middle_rec__PredId_23;
    MR_Integer ll_backend__middle_rec__ProcId_24;
    MR_Word ll_backend__middle_rec__EntryLabel_25;
    MR_Word ll_backend__middle_rec__VarType_26;
    MR_Word ll_backend__middle_rec__CheaperTagTest_27;
    MR_Word ll_backend__middle_rec__BaseLabel_28;
    MR_Word ll_backend__middle_rec__EntryTestCode_29;
    MR_Word ll_backend__middle_rec__EntryTestInstrs_30;
    MR_Word ll_backend__middle_rec__StoreMap_31;
    MR_Word ll_backend__middle_rec__BranchStart_32;
    MR_Word ll_backend__middle_rec__BaseGoalCode_33;
    MR_Word ll_backend__middle_rec__MaybeEnd1_34;
    MR_Word ll_backend__middle_rec__BaseSaveCode_35;
    MR_Word ll_backend__middle_rec__RecGoalCode_36;
    MR_Word ll_backend__middle_rec__MaybeEnd_37;
    MR_Word ll_backend__middle_rec__RecSaveCode_38;
    MR_Word ll_backend__middle_rec__ArgModes_39;
    MR_Word ll_backend__middle_rec__HeadVars_40;
    MR_Word ll_backend__middle_rec__Args_41;
    MR_Word ll_backend__middle_rec__LiveArgs_42;
    MR_Word ll_backend__middle_rec__EpilogCode_43;
    MR_Word ll_backend__middle_rec__BaseCode_44;
    MR_Word ll_backend__middle_rec__RecCode_45;
    MR_Word ll_backend__middle_rec__LiveValCode_46;
    MR_Word ll_backend__middle_rec__BaseInstrs_47;
    MR_Word ll_backend__middle_rec__RecInstrs_48;
    MR_Word ll_backend__middle_rec__AvoidInstrs_49;
    MR_Word ll_backend__middle_rec__AuxReg_50;
    MR_Word ll_backend__middle_rec__BeforeInstrs0_51;
    MR_Word ll_backend__middle_rec__AfterInstrs_52;
    MR_Word ll_backend__middle_rec__BeforeInstrs_53;
    MR_Word ll_backend__middle_rec__Loop1Label_54;
    MR_Word ll_backend__middle_rec__Loop2Label_55;
    MR_Integer ll_backend__middle_rec__FrameSize0_56;
    MR_Integer ll_backend__middle_rec__FrameSize_57;
    MR_Word ll_backend__middle_rec__Loop1Test_58;
    MR_Word ll_backend__middle_rec__MaybeIncrSp_59;
    MR_Word ll_backend__middle_rec__MaybeDecrSp_60;
    MR_Word ll_backend__middle_rec__InitAuxReg_61;
    MR_Word ll_backend__middle_rec__IncrAuxReg_62;
    MR_Word ll_backend__middle_rec__DecrAuxReg_63;
    MR_Word ll_backend__middle_rec__TestAuxReg_64;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_75_75;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_77_77;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_80_80;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_81_81;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_83_83;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_85_85;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_86_86;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_87_87;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_88_88;
    MR_Word ll_backend__middle_rec__V_90_90;
    MR_Word ll_backend__middle_rec__V_91_91;
    MR_Word ll_backend__middle_rec__V_92_92;
    MR_Word ll_backend__middle_rec__V_93_93;
    MR_Word ll_backend__middle_rec__V_95_95;
    MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_96_96;

    {
      ll_backend__code_info__get_stack_slots_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__StackSlots_19);
    }
    {
      ll_backend__code_info__get_varset_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__VarSet_20);
    }
    {
      ll_backend__middle_rec__SlotsComment_21 = hlds__hlds_llds__explain_stack_slots_2_f_0(ll_backend__middle_rec__StackSlots_19, ll_backend__middle_rec__VarSet_20);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__ModuleInfo_22);
    }
    {
      ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__PredId_23);
    }
    {
      ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__ProcId_24);
    }
    {
      ll_backend__middle_rec__EntryLabel_25 = ll_backend__code_util__make_local_entry_label_4_f_0(ll_backend__middle_rec__ModuleInfo_22, ll_backend__middle_rec__PredId_23, ll_backend__middle_rec__ProcId_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      ll_backend__code_loc_dep__pre_goal_update_4_p_0(ll_backend__middle_rec__SwitchGoalInfo_15, (MR_Integer) 0, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_71, &ll_backend__middle_rec__STATE_VARIABLE_CLD_75_75);
    }
    {
      ll_backend__middle_rec__VarType_26 = ll_backend__code_info__variable_type_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, ll_backend__middle_rec__Var_11);
    }
    {
      ll_backend__middle_rec__CheaperTagTest_27 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, ll_backend__middle_rec__VarType_26);
    }
    {
      ll_backend__unify_gen__generate_tag_test_10_p_0(ll_backend__middle_rec__Var_11, ll_backend__middle_rec__BaseConsId_12, ll_backend__middle_rec__CheaperTagTest_27, (MR_Integer) 0, &ll_backend__middle_rec__BaseLabel_28, &ll_backend__middle_rec__EntryTestCode_29, ll_backend__middle_rec__STATE_VARIABLE_CI_0_69, &ll_backend__middle_rec__STATE_VARIABLE_CI_77_77, ll_backend__middle_rec__STATE_VARIABLE_CLD_75_75, &ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78);
    }
    ll_backend__middle_rec__TypeCtorInfo_244_244 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__middle_rec__EntryTestInstrs_30 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestCode_29);
    }
    {
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__middle_rec__SwitchGoalInfo_15, &ll_backend__middle_rec__StoreMap_31);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78, &ll_backend__middle_rec__BranchStart_32);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__middle_rec__Base_13, &ll_backend__middle_rec__BaseGoalCode_33, ll_backend__middle_rec__STATE_VARIABLE_CI_77_77, &ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, ll_backend__middle_rec__STATE_VARIABLE_CLD_78_78, &ll_backend__middle_rec__STATE_VARIABLE_CLD_81_81);
    }
    {
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__middle_rec__MaybeEnd1_34, &ll_backend__middle_rec__BaseSaveCode_35, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, ll_backend__middle_rec__STATE_VARIABLE_CLD_81_81);
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__middle_rec__BranchStart_32, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, &ll_backend__middle_rec__STATE_VARIABLE_CLD_83_83);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, ll_backend__middle_rec__Recursive_14, &ll_backend__middle_rec__RecGoalCode_36, ll_backend__middle_rec__STATE_VARIABLE_CI_80_80, &ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_83_83, &ll_backend__middle_rec__STATE_VARIABLE_CLD_86_86);
    }
    {
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__middle_rec__StoreMap_31, ll_backend__middle_rec__MaybeEnd1_34, &ll_backend__middle_rec__MaybeEnd_37, &ll_backend__middle_rec__RecSaveCode_38, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_86_86);
    }
    {
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__middle_rec__StoreMap_31, ll_backend__middle_rec__MaybeEnd_37, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, &ll_backend__middle_rec__STATE_VARIABLE_CLD_87_87);
    }
    {
      ll_backend__code_loc_dep__post_goal_update_4_p_0(ll_backend__middle_rec__SwitchGoalInfo_15, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_87_87, &ll_backend__middle_rec__STATE_VARIABLE_CLD_88_88);
    }
    {
      ll_backend__middle_rec__ArgModes_39 = ll_backend__code_info__get_arginfo_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_85_85);
    }
    {
      ll_backend__middle_rec__HeadVars_40 = ll_backend__code_info__get_headvars_1_f_0(ll_backend__middle_rec__STATE_VARIABLE_CI_85_85);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__middle_rec_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__middle_rec__HeadVars_40, ll_backend__middle_rec__ArgModes_39, &ll_backend__middle_rec__Args_41);
    }
    {
      ll_backend__code_loc_dep__setup_return_6_p_0(ll_backend__middle_rec__Args_41, &ll_backend__middle_rec__LiveArgs_42, &ll_backend__middle_rec__EpilogCode_43, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, ll_backend__middle_rec__STATE_VARIABLE_CLD_88_88, ll_backend__middle_rec__STATE_VARIABLE_CLD_72);
    }
    {
      ll_backend__middle_rec__V_90_90 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseSaveCode_35, ll_backend__middle_rec__EpilogCode_43);
    }
    {
      ll_backend__middle_rec__BaseCode_44 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseGoalCode_33, ll_backend__middle_rec__V_90_90);
    }
    {
      ll_backend__middle_rec__V_91_91 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecSaveCode_38, ll_backend__middle_rec__EpilogCode_43);
    }
    {
      ll_backend__middle_rec__RecCode_45 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecGoalCode_36, ll_backend__middle_rec__V_91_91);
    }
    {
      ll_backend__middle_rec__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__middle_rec__V_93_93, 0) = ((MR_Box) (ll_backend__middle_rec__LiveArgs_42));
    }
    {
      ll_backend__middle_rec__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 0) = ((MR_Box) (ll_backend__middle_rec__V_93_93));
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_92_92, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__middle_rec__LiveValCode_46 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_92_92)));
    }
    {
      ll_backend__middle_rec__BaseInstrs_47 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseCode_44);
    }
    {
      ll_backend__middle_rec__RecInstrs_48 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecCode_45);
    }
    {
      ll_backend__middle_rec__V_95_95 = ll_backend__opt_util__block_refers_to_stack_1_f_0(ll_backend__middle_rec__BaseInstrs_47);
    }
    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_95_95 == (MR_Integer) 0);
    if (ll_backend__middle_rec__succeeded)
      {
        {
          ll_backend__middle_rec__AvoidInstrs_49 = mercury__list__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47, ll_backend__middle_rec__RecInstrs_48);
        }
        {
          ll_backend__middle_rec__find_unused_register_2_p_0(ll_backend__middle_rec__AvoidInstrs_49, &ll_backend__middle_rec__AuxReg_50);
        }
        {
          ll_backend__middle_rec__split_rec_code_3_p_0(ll_backend__middle_rec__RecInstrs_48, &ll_backend__middle_rec__BeforeInstrs0_51, &ll_backend__middle_rec__AfterInstrs_52);
        }
        {
          ll_backend__middle_rec__add_counter_to_livevals_3_p_0(ll_backend__middle_rec__BeforeInstrs0_51, ll_backend__middle_rec__AuxReg_50, &ll_backend__middle_rec__BeforeInstrs_53);
        }
        {
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop1Label_54, ll_backend__middle_rec__STATE_VARIABLE_CI_85_85, &ll_backend__middle_rec__STATE_VARIABLE_CI_96_96);
        }
        {
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__middle_rec__Loop2Label_55, ll_backend__middle_rec__STATE_VARIABLE_CI_96_96, ll_backend__middle_rec__STATE_VARIABLE_CI_70);
        }
        {
          ll_backend__code_info__get_total_stackslot_count_2_p_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_70, &ll_backend__middle_rec__FrameSize0_56);
        }
        {
          ll_backend__middle_rec__FrameSize_57 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(*ll_backend__middle_rec__STATE_VARIABLE_CI_70, ll_backend__middle_rec__FrameSize0_56);
        }
        {
          ll_backend__middle_rec__generate_downloop_test_3_p_0(ll_backend__middle_rec__EntryTestInstrs_30, ll_backend__middle_rec__Loop1Label_54, &ll_backend__middle_rec__Loop1Test_58);
        }
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__FrameSize_57 == (MR_Integer) 0);
        if (ll_backend__middle_rec__succeeded)
          {
            MR_Word ll_backend__middle_rec__V_98_98;
            MR_Word ll_backend__middle_rec__V_99_99;
            MR_Word ll_backend__middle_rec__V_100_100;
            MR_Word ll_backend__middle_rec__V_104_104;
            MR_Word ll_backend__middle_rec__V_105_105;
            MR_Word ll_backend__middle_rec__V_106_106;
            MR_Word ll_backend__middle_rec__V_108_108;
            MR_Word ll_backend__middle_rec__V_109_109;
            MR_Word ll_backend__middle_rec__V_113_113;
            MR_Word ll_backend__middle_rec__V_114_114;
            MR_Word ll_backend__middle_rec__V_115_115;
            MR_Word ll_backend__middle_rec__V_122_122;
            MR_Word ll_backend__middle_rec__V_123_123;
            MR_Word ll_backend__middle_rec__V_124_124;
            MR_Word ll_backend__middle_rec__V_130_130;

            {
              ll_backend__middle_rec__MaybeIncrSp_59 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
            {
              ll_backend__middle_rec__MaybeDecrSp_60 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
            ll_backend__middle_rec__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[1]);
            {
              ll_backend__middle_rec__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_99_99, 2) = ((MR_Box) (ll_backend__middle_rec__V_100_100));
            }
            {
              ll_backend__middle_rec__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 0) = ((MR_Box) (ll_backend__middle_rec__V_99_99));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_98_98, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
            }
            {
              ll_backend__middle_rec__InitAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_98_98)));
            }
            {
              ll_backend__middle_rec__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_108_108, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
            }
            ll_backend__middle_rec__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[2]);
            {
              ll_backend__middle_rec__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 2) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_106_106, 3) = ((MR_Box) (ll_backend__middle_rec__V_109_109));
            }
            {
              ll_backend__middle_rec__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_105_105, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_105_105, 2) = ((MR_Box) (ll_backend__middle_rec__V_106_106));
            }
            {
              ll_backend__middle_rec__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_104_104, 0) = ((MR_Box) (ll_backend__middle_rec__V_105_105));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_104_104, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
            }
            {
              ll_backend__middle_rec__IncrAuxReg_62 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_104_104)));
            }
            {
              ll_backend__middle_rec__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 2) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_115_115, 3) = ((MR_Box) (ll_backend__middle_rec__V_109_109));
            }
            {
              ll_backend__middle_rec__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_114_114, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_114_114, 2) = ((MR_Box) (ll_backend__middle_rec__V_115_115));
            }
            {
              ll_backend__middle_rec__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_113_113, 0) = ((MR_Box) (ll_backend__middle_rec__V_114_114));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_113_113, 1) = ((MR_Box) ((MR_String) "decrement loop counter"));
            }
            {
              ll_backend__middle_rec__DecrAuxReg_63 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_113_113)));
            }
            {
              ll_backend__middle_rec__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 2) = ((MR_Box) (ll_backend__middle_rec__V_108_108));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_124_124, 3) = ((MR_Box) (ll_backend__middle_rec__V_100_100));
            }
            {
              ll_backend__middle_rec__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_130_130, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
            }
            {
              ll_backend__middle_rec__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_123_123, 1) = ((MR_Box) (ll_backend__middle_rec__V_124_124));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_123_123, 2) = ((MR_Box) (ll_backend__middle_rec__V_130_130));
            }
            {
              ll_backend__middle_rec__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_122_122, 0) = ((MR_Box) (ll_backend__middle_rec__V_123_123));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_122_122, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
            }
            {
              ll_backend__middle_rec__TestAuxReg_64 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_122_122)));
            }
          }
        else
          {
            MR_String ll_backend__middle_rec__PushMsg_65;
            MR_Word ll_backend__middle_rec__V_132_132;
            MR_Word ll_backend__middle_rec__V_133_133;
            MR_Word ll_backend__middle_rec__V_136_136;
            MR_Word ll_backend__middle_rec__V_137_137;
            MR_Word ll_backend__middle_rec__V_139_139;
            MR_Word ll_backend__middle_rec__V_140_140;
            MR_Word ll_backend__middle_rec__V_141_141;
            MR_Word ll_backend__middle_rec__V_144_144;
            MR_Word ll_backend__middle_rec__V_145_145;
            MR_Word ll_backend__middle_rec__V_146_146;
            MR_Word ll_backend__middle_rec__V_150_150;
            MR_Word ll_backend__middle_rec__V_151_151;

            {
              ll_backend__middle_rec__PushMsg_65 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__middle_rec__ModuleInfo_22, ll_backend__middle_rec__PredId_23, ll_backend__middle_rec__ProcId_24);
            }
            {
              ll_backend__middle_rec__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_57));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 2) = ((MR_Box) (ll_backend__middle_rec__PushMsg_65));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_133_133, 3) = ((MR_Box) ((MR_Integer) 1));
            }
            {
              ll_backend__middle_rec__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_132_132, 0) = ((MR_Box) (ll_backend__middle_rec__V_133_133));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_132_132, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__middle_rec__MaybeIncrSp_59 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_132_132)));
            }
            {
              ll_backend__middle_rec__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_137_137, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_57));
            }
            {
              ll_backend__middle_rec__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_136_136, 0) = ((MR_Box) (ll_backend__middle_rec__V_137_137));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_136_136, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__middle_rec__MaybeDecrSp_60 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_136_136)));
            }
            ll_backend__middle_rec__V_141_141 = (MR_Word) &ll_backend__middle_rec_scalar_common_2[2];
            {
              ll_backend__middle_rec__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_140_140, 2) = ((MR_Box) (ll_backend__middle_rec__V_141_141));
            }
            {
              ll_backend__middle_rec__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_139_139, 0) = ((MR_Box) (ll_backend__middle_rec__V_140_140));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_139_139, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
            }
            {
              ll_backend__middle_rec__InitAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_139_139)));
            }
            {
              ll_backend__middle_rec__IncrAuxReg_62 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
            {
              ll_backend__middle_rec__DecrAuxReg_63 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
            {
              ll_backend__middle_rec__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_150_150, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
            }
            {
              ll_backend__middle_rec__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 2) = ((MR_Box) (ll_backend__middle_rec__V_141_141));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_146_146, 3) = ((MR_Box) (ll_backend__middle_rec__V_150_150));
            }
            {
              ll_backend__middle_rec__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_151_151, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
            }
            {
              ll_backend__middle_rec__V_145_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_145_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_145_145, 1) = ((MR_Box) (ll_backend__middle_rec__V_146_146));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_145_145, 2) = ((MR_Box) (ll_backend__middle_rec__V_151_151));
            }
            {
              ll_backend__middle_rec__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_144_144, 0) = ((MR_Box) (ll_backend__middle_rec__V_145_145));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_144_144, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
            }
            {
              ll_backend__middle_rec__TestAuxReg_64 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_144_144)));
            }
          }
        if ((ll_backend__middle_rec__AfterInstrs_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__middle_rec__V_210_210;
            MR_Word ll_backend__middle_rec__V_211_211;
            MR_Word ll_backend__middle_rec__V_212_212;
            MR_Word ll_backend__middle_rec__V_213_213;
            MR_Word ll_backend__middle_rec__V_215_215;
            MR_Word ll_backend__middle_rec__V_216_216;
            MR_Word ll_backend__middle_rec__V_217_217;
            MR_Word ll_backend__middle_rec__V_220_220;
            MR_Word ll_backend__middle_rec__V_221_221;
            MR_Word ll_backend__middle_rec__V_222_222;
            MR_Word ll_backend__middle_rec__V_223_223;
            MR_Word ll_backend__middle_rec__V_224_224;
            MR_Word ll_backend__middle_rec__V_225_225;
            MR_Word ll_backend__middle_rec__V_227_227;
            MR_Word ll_backend__middle_rec__V_228_228;
            MR_Word ll_backend__middle_rec__V_229_229;
            MR_Word ll_backend__middle_rec__V_230_230;
            MR_Word ll_backend__middle_rec__V_231_231;
            MR_Word ll_backend__middle_rec__V_232_232;
            MR_Word ll_backend__middle_rec__V_233_233;
            MR_Word ll_backend__middle_rec__V_234_234;
            MR_Word ll_backend__middle_rec__V_236_236;
            MR_Word ll_backend__middle_rec__V_237_237;
            MR_Word ll_backend__middle_rec__V_238_238;
            MR_Word ll_backend__middle_rec__V_239_239;

            {
              ll_backend__middle_rec__V_213_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_213_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_213_213, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_25));
            }
            {
              ll_backend__middle_rec__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_212_212, 0) = ((MR_Box) (ll_backend__middle_rec__V_213_213));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_212_212, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
            }
            {
              ll_backend__middle_rec__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_217_217, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_21));
            }
            {
              ll_backend__middle_rec__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_216_216, 0) = ((MR_Box) (ll_backend__middle_rec__V_217_217));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_216_216, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__middle_rec__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_215_215, 0) = ((MR_Box) (ll_backend__middle_rec__V_216_216));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_215_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__middle_rec__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_211_211, 0) = ((MR_Box) (ll_backend__middle_rec__V_212_212));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_211_211, 1) = ((MR_Box) (ll_backend__middle_rec__V_215_215));
            }
            {
              ll_backend__middle_rec__V_210_210 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_211_211);
            }
            {
              ll_backend__middle_rec__V_221_221 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestInstrs_30);
            }
            {
              ll_backend__middle_rec__V_225_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_225_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_225_225, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_54));
            }
            {
              ll_backend__middle_rec__V_224_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_224_224, 0) = ((MR_Box) (ll_backend__middle_rec__V_225_225));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_224_224, 1) = ((MR_Box) ((MR_String) "start of the down loop"));
            }
            {
              ll_backend__middle_rec__V_223_223 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_224_224)));
            }
            {
              ll_backend__middle_rec__V_228_228 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BeforeInstrs_53);
            }
            {
              ll_backend__middle_rec__V_230_230 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Loop1Test_58);
            }
            {
              ll_backend__middle_rec__V_234_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_234_234, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_234_234, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_28));
            }
            {
              ll_backend__middle_rec__V_233_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_233_233, 0) = ((MR_Box) (ll_backend__middle_rec__V_234_234));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_233_233, 1) = ((MR_Box) ((MR_String) "start of base case"));
            }
            {
              ll_backend__middle_rec__V_232_232 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_233_233)));
            }
            {
              ll_backend__middle_rec__V_237_237 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
            }
            {
              ll_backend__middle_rec__V_239_239 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (&ll_backend__middle_rec_scalar_common_1[4])));
            }
            {
              ll_backend__middle_rec__V_238_238 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__V_239_239);
            }
            {
              ll_backend__middle_rec__V_236_236 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_237_237, ll_backend__middle_rec__V_238_238);
            }
            {
              ll_backend__middle_rec__V_231_231 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_232_232, ll_backend__middle_rec__V_236_236);
            }
            {
              ll_backend__middle_rec__V_229_229 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_230_230, ll_backend__middle_rec__V_231_231);
            }
            {
              ll_backend__middle_rec__V_227_227 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_228_228, ll_backend__middle_rec__V_229_229);
            }
            {
              ll_backend__middle_rec__V_222_222 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_223_223, ll_backend__middle_rec__V_227_227);
            }
            {
              ll_backend__middle_rec__V_220_220 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_221_221, ll_backend__middle_rec__V_222_222);
            }
            {
              *ll_backend__middle_rec__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_210_210, ll_backend__middle_rec__V_220_220);
            }
            ll_backend__middle_rec__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word ll_backend__middle_rec__BaseLabels_68;
            MR_Word ll_backend__middle_rec__V_153_153;
            MR_Word ll_backend__middle_rec__V_154_154;
            MR_Word ll_backend__middle_rec__V_155_155;
            MR_Word ll_backend__middle_rec__V_156_156;
            MR_String ll_backend__middle_rec__V_157_157;
            MR_Word ll_backend__middle_rec__V_158_158;
            MR_Word ll_backend__middle_rec__V_159_159;
            MR_Word ll_backend__middle_rec__V_160_160;
            MR_String ll_backend__middle_rec__V_161_161;
            MR_Word ll_backend__middle_rec__V_162_162;
            MR_Word ll_backend__middle_rec__V_163_163;
            MR_Word ll_backend__middle_rec__V_164_164;
            MR_Word ll_backend__middle_rec__V_165_165;
            MR_Word ll_backend__middle_rec__V_166_166;
            MR_Word ll_backend__middle_rec__V_167_167;
            MR_Word ll_backend__middle_rec__V_168_168;
            MR_Word ll_backend__middle_rec__V_169_169;
            MR_String ll_backend__middle_rec__V_170_170;
            MR_Word ll_backend__middle_rec__V_171_171;
            MR_Word ll_backend__middle_rec__V_172_172;
            MR_Word ll_backend__middle_rec__V_173_173;
            MR_Word ll_backend__middle_rec__V_174_174;
            MR_Word ll_backend__middle_rec__V_175_175;
            MR_Word ll_backend__middle_rec__V_176_176;
            MR_Word ll_backend__middle_rec__V_177_177;
            MR_Word ll_backend__middle_rec__V_178_178;
            MR_Word ll_backend__middle_rec__V_179_179;
            MR_Word ll_backend__middle_rec__V_180_180;
            MR_Word ll_backend__middle_rec__V_181_181;
            MR_Word ll_backend__middle_rec__V_182_182;
            MR_String ll_backend__middle_rec__V_183_183;
            MR_Word ll_backend__middle_rec__V_184_184;
            MR_Word ll_backend__middle_rec__V_185_185;
            MR_Word ll_backend__middle_rec__V_186_186;
            MR_Word ll_backend__middle_rec__V_187_187;
            MR_Word ll_backend__middle_rec__V_188_188;
            MR_Word ll_backend__middle_rec__V_189_189;
            MR_Word ll_backend__middle_rec__V_190_190;
            MR_Word ll_backend__middle_rec__V_191_191;
            MR_Word ll_backend__middle_rec__V_192_192;
            MR_Word ll_backend__middle_rec__V_193_193;
            MR_Word ll_backend__middle_rec__V_194_194;
            MR_Word ll_backend__middle_rec__V_195_195;
            MR_String ll_backend__middle_rec__V_196_196;
            MR_Word ll_backend__middle_rec__V_197_197;
            MR_Word ll_backend__middle_rec__V_198_198;
            MR_Word ll_backend__middle_rec__V_199_199;
            MR_String ll_backend__middle_rec__V_200_200;
            MR_Word ll_backend__middle_rec__V_201_201;
            MR_Word ll_backend__middle_rec__V_202_202;
            MR_Word ll_backend__middle_rec__V_203_203;
            MR_Word ll_backend__middle_rec__V_204_204;
            MR_Word ll_backend__middle_rec__V_205_205;
            MR_Word ll_backend__middle_rec__V_206_206;
            MR_String ll_backend__middle_rec__V_209_209;

            {
              ll_backend__middle_rec__find_labels_2_p_0(ll_backend__middle_rec__BaseInstrs_47, &ll_backend__middle_rec__BaseLabels_68);
            }
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BaseLabels_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__middle_rec__succeeded)
              {
                ll_backend__middle_rec__V_157_157 = (MR_String) "Procedure entry point";
                ll_backend__middle_rec__V_161_161 = (MR_String) "";
                ll_backend__middle_rec__V_162_162 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ll_backend__middle_rec__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_156_156, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_25));
                }
                {
                  ll_backend__middle_rec__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_155_155, 0) = ((MR_Box) (ll_backend__middle_rec__V_156_156));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_155_155, 1) = ((MR_Box) (ll_backend__middle_rec__V_157_157));
                }
                {
                  ll_backend__middle_rec__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_160_160, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_21));
                }
                {
                  ll_backend__middle_rec__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_159_159, 0) = ((MR_Box) (ll_backend__middle_rec__V_160_160));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_159_159, 1) = ((MR_Box) (ll_backend__middle_rec__V_161_161));
                }
                {
                  ll_backend__middle_rec__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_158_158, 0) = ((MR_Box) (ll_backend__middle_rec__V_159_159));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_158_158, 1) = ((MR_Box) (ll_backend__middle_rec__V_162_162));
                }
                {
                  ll_backend__middle_rec__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_154_154, 0) = ((MR_Box) (ll_backend__middle_rec__V_155_155));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_154_154, 1) = ((MR_Box) (ll_backend__middle_rec__V_158_158));
                }
                {
                  ll_backend__middle_rec__V_153_153 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_154_154);
                }
                {
                  ll_backend__middle_rec__V_164_164 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestInstrs_30);
                }
                ll_backend__middle_rec__V_170_170 = (MR_String) "start of the down loop";
                {
                  ll_backend__middle_rec__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_169_169, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_54));
                }
                {
                  ll_backend__middle_rec__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_168_168, 0) = ((MR_Box) (ll_backend__middle_rec__V_169_169));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_168_168, 1) = ((MR_Box) (ll_backend__middle_rec__V_170_170));
                }
                {
                  ll_backend__middle_rec__V_167_167 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_168_168)));
                }
                {
                  ll_backend__middle_rec__V_174_174 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BeforeInstrs_53);
                }
                {
                  ll_backend__middle_rec__V_176_176 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Loop1Test_58);
                }
                {
                  ll_backend__middle_rec__V_178_178 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
                }
                ll_backend__middle_rec__V_183_183 = (MR_String) "";
                {
                  ll_backend__middle_rec__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_182_182, 1) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
                }
                {
                  ll_backend__middle_rec__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_181_181, 0) = ((MR_Box) (ll_backend__middle_rec__V_182_182));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_181_181, 1) = ((MR_Box) (ll_backend__middle_rec__V_183_183));
                }
                {
                  ll_backend__middle_rec__V_180_180 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_181_181)));
                }
                {
                  ll_backend__middle_rec__V_185_185 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__AfterInstrs_52);
                }
                ll_backend__middle_rec__V_195_195 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__middle_rec__V_196_196 = (MR_String) "exit from recursive case";
                ll_backend__middle_rec__V_200_200 = (MR_String) "start of base case";
                ll_backend__middle_rec__V_201_201 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__middle_rec__V_194_194 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3]);
                ll_backend__middle_rec__V_193_193 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[5];
                {
                  ll_backend__middle_rec__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__V_199_199, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_28));
                }
                {
                  ll_backend__middle_rec__V_198_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_198_198, 0) = ((MR_Box) (ll_backend__middle_rec__V_199_199));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_198_198, 1) = ((MR_Box) (ll_backend__middle_rec__V_200_200));
                }
                {
                  ll_backend__middle_rec__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_197_197, 0) = ((MR_Box) (ll_backend__middle_rec__V_198_198));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_197_197, 1) = ((MR_Box) (ll_backend__middle_rec__V_201_201));
                }
                {
                  ll_backend__middle_rec__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_192_192, 0) = ((MR_Box) (ll_backend__middle_rec__V_193_193));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_192_192, 1) = ((MR_Box) (ll_backend__middle_rec__V_197_197));
                }
                {
                  ll_backend__middle_rec__V_191_191 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_192_192);
                }
                {
                  ll_backend__middle_rec__V_203_203 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
                }
                ll_backend__middle_rec__V_209_209 = (MR_String) "exit from base case";
                ll_backend__middle_rec__V_206_206 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[4];
                {
                  ll_backend__middle_rec__V_205_205 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__V_206_206)));
                }
                {
                  ll_backend__middle_rec__V_204_204 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__V_205_205);
                }
                {
                  ll_backend__middle_rec__V_202_202 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_203_203, ll_backend__middle_rec__V_204_204);
                }
                {
                  ll_backend__middle_rec__V_190_190 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_191_191, ll_backend__middle_rec__V_202_202);
                }
                {
                  ll_backend__middle_rec__V_189_189 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__V_190_190);
                }
                {
                  ll_backend__middle_rec__V_188_188 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__TestAuxReg_64, ll_backend__middle_rec__V_189_189);
                }
                {
                  ll_backend__middle_rec__V_187_187 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__DecrAuxReg_63, ll_backend__middle_rec__V_188_188);
                }
                {
                  ll_backend__middle_rec__V_186_186 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__MaybeDecrSp_60, ll_backend__middle_rec__V_187_187);
                }
                {
                  ll_backend__middle_rec__V_184_184 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_185_185, ll_backend__middle_rec__V_186_186);
                }
                {
                  ll_backend__middle_rec__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_180_180, ll_backend__middle_rec__V_184_184);
                }
                {
                  ll_backend__middle_rec__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_178_178, ll_backend__middle_rec__V_179_179);
                }
                {
                  ll_backend__middle_rec__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_176_176, ll_backend__middle_rec__V_177_177);
                }
                {
                  ll_backend__middle_rec__V_173_173 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_174_174, ll_backend__middle_rec__V_175_175);
                }
                {
                  ll_backend__middle_rec__V_172_172 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__IncrAuxReg_62, ll_backend__middle_rec__V_173_173);
                }
                {
                  ll_backend__middle_rec__V_171_171 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__MaybeIncrSp_59, ll_backend__middle_rec__V_172_172);
                }
                {
                  ll_backend__middle_rec__V_166_166 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_167_167, ll_backend__middle_rec__V_171_171);
                }
                {
                  ll_backend__middle_rec__V_165_165 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__InitAuxReg_61, ll_backend__middle_rec__V_166_166);
                }
                {
                  ll_backend__middle_rec__V_163_163 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_164_164, ll_backend__middle_rec__V_165_165);
                }
                {
                  *ll_backend__middle_rec__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__V_153_153, ll_backend__middle_rec__V_163_163);
                }
                ll_backend__middle_rec__succeeded = MR_TRUE;
              }
          }
      }
    return ll_backend__middle_rec__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;
        MR_Word ll_backend__middle_rec__HeadVar__2_2;

        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
        else
          {
            MR_Word ll_backend__middle_rec__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_6;
            MR_Word ll_backend__middle_rec__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));

            {
              ll_backend__middle_rec__OnlyBuiltinsGoal_6 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_8_8);
            }
            switch (ll_backend__middle_rec__OnlyBuiltinsGoal_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Goals_4;

                    ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
            }
          }
        return ll_backend__middle_rec__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;
        MR_Word ll_backend__middle_rec__HeadVar__2_2;

        if ((ll_backend__middle_rec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
        else
          {
            MR_Word ll_backend__middle_rec__Goal_5;
            MR_Word ll_backend__middle_rec__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_8;
            MR_Word ll_backend__middle_rec__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__V_11_11;
            MR_Word ll_backend__middle_rec__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_9_9, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_9_9, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__V_12_12;

            ll_backend__middle_rec__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__V_9_9, (MR_Integer) 2)));
            ll_backend__middle_rec__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 0)));
            ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 1)));
            {
              ll_backend__middle_rec__OnlyBuiltinsGoal_8 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_11_11);
            }
            switch (ll_backend__middle_rec__OnlyBuiltinsGoal_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Cases_6;

                    ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
            }
          }
        return ll_backend__middle_rec__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(
  MR_Word ll_backend__middle_rec__GoalExpr_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;
        MR_Word ll_backend__middle_rec__OnlyBuiltins_4;

        switch (MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__middle_rec__SubGoal_10 = (MR_Word) MR_body(((MR_Word) ll_backend__middle_rec__GoalExpr_3), (MR_Integer) 0);
              MR_Word ll_backend__middle_rec__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_10, (MR_Integer) 0)));
              MR_Word ll_backend__middle_rec__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_10, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__middle_rec__GoalExpr__tmp_copy_3 = ll_backend__middle_rec__V_83_83;

                ll_backend__middle_rec__GoalExpr_3 = ll_backend__middle_rec__GoalExpr__tmp_copy_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__middle_rec__Uni_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)));
              MR_Word ll_backend__middle_rec__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) ll_backend__middle_rec__Uni_27)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__middle_rec__SubInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 6)));
                    MR_Word ll_backend__middle_rec__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 0)));
                    MR_Word ll_backend__middle_rec__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 1)));
                    MR_Word ll_backend__middle_rec__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 2)));
                    MR_Word ll_backend__middle_rec__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 3)));
                    MR_Word ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 4)));
                    MR_Word ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_27, (MR_Integer) 5)));

                    if ((ll_backend__middle_rec__SubInfo_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
                    else
                      {
                        MR_Word ll_backend__middle_rec__TakeAddressFields_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_39, (MR_Integer) 0)));
                        MR_Word ll_backend__middle_rec__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_39, (MR_Integer) 1)));

                        if ((ll_backend__middle_rec__TakeAddressFields_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
                        else
                          ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uni_27, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__middle_rec__BuiltinState_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)));
              MR_Integer ll_backend__middle_rec__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));
              MR_Word ll_backend__middle_rec__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 5)));

              switch (ll_backend__middle_rec__BuiltinState_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__middle_rec__ConjType_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));

                  switch (ll_backend__middle_rec__ConjType_5) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 0:
                      {
                        ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_6);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__middle_rec__Goals_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));

                  {
                    ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_71);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__middle_rec__Cases_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec___Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec___CanFail_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));

                  {
                    ll_backend__middle_rec__OnlyBuiltins_4 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(ll_backend__middle_rec__Cases_9);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ll_backend__middle_rec__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__FGT_13;
                  MR_Word ll_backend__middle_rec__V_12_12;

                  ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Reason_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (ll_backend__middle_rec__succeeded)
                    {
                      ll_backend__middle_rec__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 1)));
                      ll_backend__middle_rec__FGT_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_11, (MR_Integer) 2)));
                      switch (ll_backend__middle_rec__FGT_13) {
                        default:
                          ll_backend__middle_rec__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          ll_backend__middle_rec__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          ll_backend__middle_rec__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (ll_backend__middle_rec__succeeded)
                    ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
                  else
                    {
                      MR_Word ll_backend__middle_rec__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_72, (MR_Integer) 0)));
                      MR_Word ll_backend__middle_rec__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__SubGoal_72, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__middle_rec__GoalExpr__tmp_copy_3 = ll_backend__middle_rec__V_86_86;

                        ll_backend__middle_rec__GoalExpr_3 = ll_backend__middle_rec__GoalExpr__tmp_copy_3;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ll_backend__middle_rec__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__Then_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__Else_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 4)));
                  MR_Word ll_backend__middle_rec___Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__V_68_68;
                  MR_Word ll_backend__middle_rec__V_69_69;
                  MR_Word ll_backend__middle_rec__V_70_70;
                  MR_Word ll_backend__middle_rec__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Cond_15, (MR_Integer) 0)));
                  MR_Word ll_backend__middle_rec__V_77_77;
                  MR_Word ll_backend__middle_rec__V_80_80;
                  MR_Word ll_backend__middle_rec__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Cond_15, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__V_78_78;
                  MR_Word ll_backend__middle_rec__V_81_81;

                  {
                    ll_backend__middle_rec__V_68_68 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_74_74);
                  }
                  ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_68_68 == (MR_Integer) 1);
                  if (ll_backend__middle_rec__succeeded)
                    {
                      ll_backend__middle_rec__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Then_16, (MR_Integer) 0)));
                      ll_backend__middle_rec__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Then_16, (MR_Integer) 1)));
                      {
                        ll_backend__middle_rec__V_69_69 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_77_77);
                      }
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_69_69 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          ll_backend__middle_rec__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Else_17, (MR_Integer) 0)));
                          ll_backend__middle_rec__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Else_17, (MR_Integer) 1)));
                          {
                            ll_backend__middle_rec__V_70_70 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_80_80);
                          }
                          ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_70_70 == (MR_Integer) 1);
                        }
                    }
                  if (ll_backend__middle_rec__succeeded)
                    ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 1;
                  else
                    ll_backend__middle_rec__OnlyBuiltins_4 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
                  }
                }
                break;
            }
            break;
        }
        return ll_backend__middle_rec__OnlyBuiltins_4;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(
  MR_Word ll_backend__middle_rec__HeadVar__1_1,
  MR_Word ll_backend__middle_rec__CodeInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__middle_rec__Goal_3;
        MR_Word ll_backend__middle_rec__Goals_4;
        MR_Word ll_backend__middle_rec__GoalExpr_6;
        MR_Word ll_backend__middle_rec__OnlyBuiltinsGoalExpr_8;
        MR_Word ll_backend__middle_rec__V_7_7;

        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__middle_rec__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__middle_rec__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
            ll_backend__middle_rec__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));
            {
              ll_backend__middle_rec__OnlyBuiltinsGoalExpr_8 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__GoalExpr_6);
            }
            switch (ll_backend__middle_rec__OnlyBuiltinsGoalExpr_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__middle_rec__V_9_9;
                  MR_Word ll_backend__middle_rec__CallPredId_12;
                  MR_Integer ll_backend__middle_rec__CallProcId_13;
                  MR_Word ll_backend__middle_rec__BuiltinState_15;
                  MR_Word ll_backend__middle_rec__PredId_18;
                  MR_Integer ll_backend__middle_rec__ProcId_19;
                  MR_Word ll_backend__middle_rec__V_14_14;
                  MR_Word ll_backend__middle_rec__V_16_16;
                  MR_Word ll_backend__middle_rec__V_17_17;

                  ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_6)) == (MR_mktag((MR_Integer) 2)));
                  if (ll_backend__middle_rec__succeeded)
                    {
                      ll_backend__middle_rec__CallPredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 0)));
                      ll_backend__middle_rec__CallProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
                      ll_backend__middle_rec__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));
                      ll_backend__middle_rec__BuiltinState_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 3)));
                      ll_backend__middle_rec__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 4)));
                      ll_backend__middle_rec__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 5)));
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BuiltinState_15 == (MR_Integer) 2);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          {
                            ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__PredId_18);
                          }
                          {
                            ll_backend__middle_rec__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__middle_rec__PredId_18, ll_backend__middle_rec__CallPredId_12);
                          }
                          if (ll_backend__middle_rec__succeeded)
                            {
                              {
                                ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__ProcId_19);
                              }
                              ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__ProcId_19 == ll_backend__middle_rec__CallProcId_13);
                              if (ll_backend__middle_rec__succeeded)
                                {
                                  {
                                    ll_backend__middle_rec__V_9_9 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_4);
                                  }
                                  ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_9_9 == (MR_Integer) 1);
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__middle_rec__HeadVar__1__tmp_copy_1 = ll_backend__middle_rec__Goals_4;

                    ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
            }
          }
        return ll_backend__middle_rec__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
ll_backend__middle_rec__match_and_generate_6_p_0(
  MR_Word ll_backend__middle_rec__Goal_7,
  MR_Word * ll_backend__middle_rec__Instrs_8,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CI_0_20,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CI_21,
  MR_Word ll_backend__middle_rec__STATE_VARIABLE_CLD_0_22,
  MR_Word * ll_backend__middle_rec__STATE_VARIABLE_CLD_23)
{
  {
    MR_bool ll_backend__middle_rec__succeeded;
    MR_Word ll_backend__middle_rec__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_7, (MR_Integer) 0)));
    MR_Word ll_backend__middle_rec__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_7, (MR_Integer) 1)));
    MR_Word ll_backend__middle_rec__Var_13;
    MR_Word ll_backend__middle_rec__Case1_14;
    MR_Word ll_backend__middle_rec__Case2_15;
    MR_Word ll_backend__middle_rec__ConsId1_16;
    MR_Word ll_backend__middle_rec__Goal1_17;
    MR_Word ll_backend__middle_rec__ConsId2_18;
    MR_Word ll_backend__middle_rec__Goal2_19;
    MR_Word ll_backend__middle_rec__V_24_24;
    MR_Word ll_backend__middle_rec__V_25_25;
    MR_Word ll_backend__middle_rec__V_26_26;
    MR_Word ll_backend__middle_rec__V_27_27;
    MR_Word ll_backend__middle_rec__V_28_28;
    MR_Word ll_backend__middle_rec__V_29_29;
    MR_Word ll_backend__middle_rec__V_30_30;
    MR_Word ll_backend__middle_rec__V_37_37;
    MR_Word ll_backend__middle_rec__GoalExpr_40;
    MR_Word ll_backend__middle_rec__Goals_42;
    MR_Word ll_backend__middle_rec__V_43_43;
    MR_Word ll_backend__middle_rec__V_38_38;
    MR_Word ll_backend__middle_rec__V_41_41;

    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (ll_backend__middle_rec__succeeded)
      {
        ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 1)));
        ll_backend__middle_rec__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 2)));
        ll_backend__middle_rec__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 3)));
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_24_24 == (MR_Integer) 1);
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_25_25)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__middle_rec__succeeded)
              {
                ll_backend__middle_rec__Case1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_25_25, (MR_Integer) 0)));
                ll_backend__middle_rec__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_25_25, (MR_Integer) 1)));
                ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__V_26_26)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__middle_rec__succeeded)
                  {
                    ll_backend__middle_rec__Case2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, (MR_Integer) 0)));
                    ll_backend__middle_rec__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__V_26_26, (MR_Integer) 1)));
                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (ll_backend__middle_rec__succeeded)
                      {
                        ll_backend__middle_rec__ConsId1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 0)));
                        ll_backend__middle_rec__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 1)));
                        ll_backend__middle_rec__Goal1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 2)));
                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (ll_backend__middle_rec__succeeded)
                          {
                            ll_backend__middle_rec__ConsId2_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 0)));
                            ll_backend__middle_rec__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 1)));
                            ll_backend__middle_rec__Goal2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 2)));
                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (ll_backend__middle_rec__succeeded)
                              {
                                ll_backend__middle_rec__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 0)));
                                ll_backend__middle_rec__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 1)));
                                {
                                  ll_backend__middle_rec__V_30_30 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_37_37);
                                }
                                ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_30_30 == (MR_Integer) 1);
                                if (ll_backend__middle_rec__succeeded)
                                  {
                                    ll_backend__middle_rec__GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 0)));
                                    ll_backend__middle_rec__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 1)));
                                    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
                                    if (ll_backend__middle_rec__succeeded)
                                      {
                                        ll_backend__middle_rec__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_40, (MR_Integer) 1)));
                                        ll_backend__middle_rec__Goals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_40, (MR_Integer) 2)));
                                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_43_43 == (MR_Integer) 0);
                                        if (ll_backend__middle_rec__succeeded)
                                          {
                                            ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_42, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20);
                                          }
                                      }
                                  }
                                if (ll_backend__middle_rec__succeeded)
                                  {
                                    ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(ll_backend__middle_rec__Var_13, ll_backend__middle_rec__ConsId1_16, ll_backend__middle_rec__Goal1_17, ll_backend__middle_rec__Goal2_19, ll_backend__middle_rec__GoalInfo_12, ll_backend__middle_rec__Instrs_8, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20, ll_backend__middle_rec__STATE_VARIABLE_CI_21, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_22, ll_backend__middle_rec__STATE_VARIABLE_CLD_23);
                                  }
                                else
                                  {
                                    MR_Word ll_backend__middle_rec__V_33_33;
                                    MR_Word ll_backend__middle_rec__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 0)));
                                    MR_Word ll_backend__middle_rec__GoalExpr_48;
                                    MR_Word ll_backend__middle_rec__Goals_50;
                                    MR_Word ll_backend__middle_rec__V_51_51;
                                    MR_Word ll_backend__middle_rec__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 1)));
                                    MR_Word ll_backend__middle_rec__V_49_49;

                                    {
                                      ll_backend__middle_rec__V_33_33 = ll_backend__middle_rec__contains_only_builtins_expr_1_f_0(ll_backend__middle_rec__V_45_45);
                                    }
                                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_33_33 == (MR_Integer) 1);
                                    if (ll_backend__middle_rec__succeeded)
                                      {
                                        ll_backend__middle_rec__GoalExpr_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 0)));
                                        ll_backend__middle_rec__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 1)));
                                        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
                                        if (ll_backend__middle_rec__succeeded)
                                          {
                                            ll_backend__middle_rec__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_48, (MR_Integer) 1)));
                                            ll_backend__middle_rec__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_48, (MR_Integer) 2)));
                                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__V_51_51 == (MR_Integer) 0);
                                            if (ll_backend__middle_rec__succeeded)
                                              {
                                                {
                                                  ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_50, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20);
                                                }
                                                if (ll_backend__middle_rec__succeeded)
                                                  {
                                                    ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(ll_backend__middle_rec__Var_13, ll_backend__middle_rec__ConsId2_18, ll_backend__middle_rec__Goal2_19, ll_backend__middle_rec__Goal1_17, ll_backend__middle_rec__GoalInfo_12, ll_backend__middle_rec__Instrs_8, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20, ll_backend__middle_rec__STATE_VARIABLE_CI_21, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_22, ll_backend__middle_rec__STATE_VARIABLE_CLD_23);
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__middle_rec__succeeded;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__middle_rec__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.middle_rec. */
