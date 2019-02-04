/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
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
ll_backend__middle_rec__contains_only_builtins_1_f_0(
  MR_Word ll_backend__middle_rec__Goal_3);

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
            MR_String ll_backend__middle_rec__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_7, (MR_Integer) 1)));
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
                MR_Integer ll_backend__middle_rec__Var_13;
                MR_Integer ll_backend__middle_rec__Var_14;

                ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ll_backend__middle_rec__succeeded)
                  {
                    ll_backend__middle_rec__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 1)));
                    ll_backend__middle_rec__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_10, (MR_Integer) 2)));
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
              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Instrs_8;
              MR_Word ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Labels_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Labels_18_18;

              ll_backend__middle_rec__STATE_VARIABLE_Labels_0_2 = ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Labels_0_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
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
            MR_Word ll_backend__middle_rec__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 2)));
            MR_Word ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 3)));
            MR_String ll_backend__middle_rec__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 4)));
            MR_Word ll_backend__middle_rec__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 5)));
            MR_Word ll_backend__middle_rec__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Output_7, (MR_Integer) 6)));

            {
              ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_10, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Outputs_8;
              MR_Word ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
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
            MR_String ll_backend__middle_rec__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 2)));
            MR_Word ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 3)));
            MR_Word ll_backend__middle_rec__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 5)));
            MR_Word ll_backend__middle_rec__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Input_7, (MR_Integer) 6)));

            {
              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval_14, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Inputs_8;
              MR_Word ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
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
              MR_Integer ll_backend__middle_rec__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__middle_rec__next_value_of_Rval_4 = ll_backend__middle_rec__Rval1_9;

                ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__next_value_of_Rval_4;
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
                  MR_Word ll_backend__middle_rec__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__middle_rec__next_value_of_Rval_4 = ll_backend__middle_rec__Rval1_27;

                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__middle_rec__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;
                  MR_Word ll_backend__middle_rec__Rval1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

                  {
                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_28, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, &ll_backend__middle_rec__STATE_VARIABLE_Used_19_19);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__middle_rec__next_value_of_Rval_4 = ll_backend__middle_rec__Rval2_14;
                    MR_Word ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_19_19;

                    ll_backend__middle_rec__STATE_VARIABLE_Used_0_16 = ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_16;
                    ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__next_value_of_Rval_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__middle_rec__MemRef_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Rval_4, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ll_backend__middle_rec__MemRef_15)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__middle_rec__Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__MemRef_15, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_Rval_4 = ll_backend__middle_rec__Rval_29;

                          ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__middle_rec__Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__MemRef_15, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_Rval_4 = ll_backend__middle_rec__Rval_34;

                          ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ll_backend__middle_rec__Rval1_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__MemRef_15, (MR_Integer) 0)));
                        MR_Word ll_backend__middle_rec__Rval2_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__MemRef_15, (MR_Integer) 2)));
                        MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_20_45;
                        MR_Word ll_backend__middle_rec__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__MemRef_15, (MR_Integer) 1)));

                        {
                          ll_backend__middle_rec__find_used_registers_rval_3_p_0(ll_backend__middle_rec__Rval1_39, ll_backend__middle_rec__STATE_VARIABLE_Used_0_16, &ll_backend__middle_rec__STATE_VARIABLE_Used_20_45);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_Rval_4 = ll_backend__middle_rec__Rval2_41;
                          MR_Word ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_16 = ll_backend__middle_rec__STATE_VARIABLE_Used_20_45;

                          ll_backend__middle_rec__STATE_VARIABLE_Used_0_16 = ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_16;
                          ll_backend__middle_rec__Rval_4 = ll_backend__middle_rec__next_value_of_Rval_4;
                        }
                        continue;
                      }
                      break;
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
    MR_Word ll_backend__middle_rec__Var_14;

    if (ll_backend__middle_rec__succeeded)
      {
        ll_backend__middle_rec__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)));
        ll_backend__middle_rec__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_14 == (MR_Integer) 0);
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
        MR_Word ll_backend__middle_rec__Var_8;

        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
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
            MR_Word ll_backend__middle_rec__Var_11;

            ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
            if (ll_backend__middle_rec__succeeded)
              {
                ll_backend__middle_rec__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Lval_4, (MR_Integer) 1)));
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
              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Lvals_8;
              MR_Word ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
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
              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Comps_8;
              MR_Word ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_12_12;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
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
              MR_Integer ll_backend__middle_rec__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Integer ll_backend__middle_rec__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

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
              MR_Word ll_backend__middle_rec__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

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
              MR_Word ll_backend__middle_rec__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

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
              MR_Word ll_backend__middle_rec__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
              MR_Word ll_backend__middle_rec__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));

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
              MR_Word ll_backend__middle_rec__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 4)));
              MR_Word ll_backend__middle_rec__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 5)));
              MR_Word ll_backend__middle_rec__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 6)));
              MR_Word ll_backend__middle_rec__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 7)));
              MR_Word ll_backend__middle_rec__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 8)));
              MR_Word ll_backend__middle_rec__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 9)));
              MR_Word ll_backend__middle_rec__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 10)));

              {
                ll_backend__middle_rec__find_used_registers_components_3_p_0(ll_backend__middle_rec__Components_52, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word ll_backend__middle_rec__Lval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Integer ll_backend__middle_rec__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Integer ll_backend__middle_rec__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_116, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__middle_rec__Lval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_109, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__middle_rec__Lval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));

              {
                ll_backend__middle_rec__find_used_registers_lval_3_p_0(ll_backend__middle_rec__Lval_117, ll_backend__middle_rec__STATE_VARIABLE_Used_0_75, ll_backend__middle_rec__STATE_VARIABLE_Used_76);
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word ll_backend__middle_rec__LCLval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 2)));
              MR_Integer ll_backend__middle_rec__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 1)));

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
              MR_Word ll_backend__middle_rec__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

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
              MR_Word ll_backend__middle_rec__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uinstr_4, (MR_Integer) 3)));

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
            MR_Word ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;
            MR_String ll_backend__middle_rec__Var_8;

            ll_backend__middle_rec__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_13, (MR_Integer) 0)));
            ll_backend__middle_rec__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_13, (MR_Integer) 1)));
            {
              ll_backend__middle_rec__find_used_registers_instr_3_p_0(ll_backend__middle_rec__Uinstr_7, ll_backend__middle_rec__STATE_VARIABLE_Used_0_2, &ll_backend__middle_rec__STATE_VARIABLE_Used_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Instrs_9;
              MR_Word ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__STATE_VARIABLE_Used_14_14;

              ll_backend__middle_rec__STATE_VARIABLE_Used_0_2 = ll_backend__middle_rec__next_value_of_STATE_VARIABLE_Used_0_2;
              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
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
                  MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__T_7;
                  MR_Integer ll_backend__middle_rec__next_value_of_N_2 = ll_backend__middle_rec__N1_10;

                  ll_backend__middle_rec__N_2 = ll_backend__middle_rec__next_value_of_N_2;
                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
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
        MR_Word ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_5, (MR_Integer) 0)));

        ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Var_13)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__Lives0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_13, (MR_Integer) 0)));
            {
              MR_Word ll_backend__middle_rec__Lives_12;
              MR_Word ll_backend__middle_rec__Var_14;

              {
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__middle_rec__HeadVar__2_2)), ll_backend__middle_rec__Lives0_10, &ll_backend__middle_rec__Lives_12);
              }
              {
                ll_backend__middle_rec__Var_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_14, 0) = ((MR_Box) (ll_backend__middle_rec__Lives_12));
              }
              {
                ll_backend__middle_rec__Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr_8, 0) = ((MR_Box) (ll_backend__middle_rec__Var_14));
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
        MR_Word ll_backend__middle_rec__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
        MR_String ll_backend__middle_rec__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
        MR_Word ll_backend__middle_rec__Var_13;
        MR_Word ll_backend__middle_rec__Var_14;
        MR_Word ll_backend__middle_rec__Var_15;
        MR_Word ll_backend__middle_rec__Var_16;
        MR_Word ll_backend__middle_rec__Var_17;
        MR_Word ll_backend__middle_rec__Var_18;

        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Var_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_26, (MR_Integer) 1)));
            ll_backend__middle_rec__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_26, (MR_Integer) 2)));
            ll_backend__middle_rec__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_26, (MR_Integer) 3)));
            ll_backend__middle_rec__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_26, (MR_Integer) 4)));
            ll_backend__middle_rec__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_26, (MR_Integer) 5)));
            ll_backend__middle_rec__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_26, (MR_Integer) 6)));
            {
              MR_Word ll_backend__middle_rec__Instrs3_22;
              MR_Word ll_backend__middle_rec__Instrs2_20;
              MR_Word ll_backend__middle_rec__Instr2_21;
              MR_Word ll_backend__middle_rec__Var_27;
              MR_String ll_backend__middle_rec__Var_24;
              MR_Word ll_backend__middle_rec__Var_23;

              {
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__middle_rec__Instrs1_10, &ll_backend__middle_rec__Instrs2_20);
              }
              ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Instrs2_20)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__middle_rec__succeeded)
                {
                  ll_backend__middle_rec__Instr2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 0)));
                  ll_backend__middle_rec__Instrs3_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Instrs2_20, (MR_Integer) 1)));
                  ll_backend__middle_rec__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 0)));
                  ll_backend__middle_rec__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr2_21, (MR_Integer) 1)));
                  ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Var_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (ll_backend__middle_rec__succeeded)
                    ll_backend__middle_rec__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_27, (MR_Integer) 1)));
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
        MR_Word ll_backend__middle_rec__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 0)));
        MR_String ll_backend__middle_rec___Comment_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Instr0_9, (MR_Integer) 1)));
        MR_Word ll_backend__middle_rec___OldTarget_14;

        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_20, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__Test_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_20, (MR_Integer) 1)));
            ll_backend__middle_rec___OldTarget_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_20, (MR_Integer) 2)));
            {
              MR_Word ll_backend__middle_rec__NewTest_18;
              MR_Word ll_backend__middle_rec__Var_24;
              MR_Word ll_backend__middle_rec__Var_25;
              MR_Word ll_backend__middle_rec__Var_26;

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
                ll_backend__middle_rec__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_26, 0) = ((MR_Box) (ll_backend__middle_rec__Target_2));
              }
              {
                ll_backend__middle_rec__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_25, 1) = ((MR_Box) (ll_backend__middle_rec__NewTest_18));
                MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_25, 2) = ((MR_Box) (ll_backend__middle_rec__Var_26));
              }
              {
                ll_backend__middle_rec__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_24, 0) = ((MR_Box) (ll_backend__middle_rec__Var_25));
                MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_24, 1) = ((MR_Box) ((MR_String) "test on downward loop"));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__middle_rec__Instrs_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__middle_rec__Var_24));
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
    MR_Word ll_backend__middle_rec__Var_90;
    MR_Word ll_backend__middle_rec__Var_91;
    MR_Word ll_backend__middle_rec__Var_92;
    MR_Word ll_backend__middle_rec__Var_93;
    MR_Word ll_backend__middle_rec__Var_95;
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
      ll_backend__middle_rec__Var_90 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseSaveCode_35, ll_backend__middle_rec__EpilogCode_43);
    }
    {
      ll_backend__middle_rec__BaseCode_44 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseGoalCode_33, ll_backend__middle_rec__Var_90);
    }
    {
      ll_backend__middle_rec__Var_91 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecSaveCode_38, ll_backend__middle_rec__EpilogCode_43);
    }
    {
      ll_backend__middle_rec__RecCode_45 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecGoalCode_36, ll_backend__middle_rec__Var_91);
    }
    {
      ll_backend__middle_rec__Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_93, 0) = ((MR_Box) (ll_backend__middle_rec__LiveArgs_42));
    }
    {
      ll_backend__middle_rec__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_92, 0) = ((MR_Box) (ll_backend__middle_rec__Var_93));
      MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_92, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__middle_rec__LiveValCode_46 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_92)));
    }
    {
      ll_backend__middle_rec__BaseInstrs_47 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseCode_44);
    }
    {
      ll_backend__middle_rec__RecInstrs_48 = mercury__cord__list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__RecCode_45);
    }
    {
      ll_backend__middle_rec__Var_95 = ll_backend__opt_util__block_refers_to_stack_1_f_0(ll_backend__middle_rec__BaseInstrs_47);
    }
    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_95 == (MR_Integer) 0);
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
            MR_Word ll_backend__middle_rec__Var_98;
            MR_Word ll_backend__middle_rec__Var_99;
            MR_Word ll_backend__middle_rec__Var_100;
            MR_Word ll_backend__middle_rec__Var_104;
            MR_Word ll_backend__middle_rec__Var_105;
            MR_Word ll_backend__middle_rec__Var_106;
            MR_Word ll_backend__middle_rec__Var_108;
            MR_Word ll_backend__middle_rec__Var_109;
            MR_Word ll_backend__middle_rec__Var_113;
            MR_Word ll_backend__middle_rec__Var_114;
            MR_Word ll_backend__middle_rec__Var_115;
            MR_Word ll_backend__middle_rec__Var_122;
            MR_Word ll_backend__middle_rec__Var_123;
            MR_Word ll_backend__middle_rec__Var_124;
            MR_Word ll_backend__middle_rec__Var_130;

            {
              ll_backend__middle_rec__MaybeIncrSp_59 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
            {
              ll_backend__middle_rec__MaybeDecrSp_60 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
            ll_backend__middle_rec__Var_100 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[1]);
            {
              ll_backend__middle_rec__Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_99, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_99, 2) = ((MR_Box) (ll_backend__middle_rec__Var_100));
            }
            {
              ll_backend__middle_rec__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_98, 0) = ((MR_Box) (ll_backend__middle_rec__Var_99));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_98, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
            }
            {
              ll_backend__middle_rec__InitAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_98)));
            }
            {
              ll_backend__middle_rec__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_108, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
            }
            ll_backend__middle_rec__Var_109 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[2]);
            {
              ll_backend__middle_rec__Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_106, 2) = ((MR_Box) (ll_backend__middle_rec__Var_108));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_106, 3) = ((MR_Box) (ll_backend__middle_rec__Var_109));
            }
            {
              ll_backend__middle_rec__Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_105, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_105, 2) = ((MR_Box) (ll_backend__middle_rec__Var_106));
            }
            {
              ll_backend__middle_rec__Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_104, 0) = ((MR_Box) (ll_backend__middle_rec__Var_105));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_104, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
            }
            {
              ll_backend__middle_rec__IncrAuxReg_62 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_104)));
            }
            {
              ll_backend__middle_rec__Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_115, 2) = ((MR_Box) (ll_backend__middle_rec__Var_108));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_115, 3) = ((MR_Box) (ll_backend__middle_rec__Var_109));
            }
            {
              ll_backend__middle_rec__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_114, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_114, 2) = ((MR_Box) (ll_backend__middle_rec__Var_115));
            }
            {
              ll_backend__middle_rec__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_113, 0) = ((MR_Box) (ll_backend__middle_rec__Var_114));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_113, 1) = ((MR_Box) ((MR_String) "decrement loop counter"));
            }
            {
              ll_backend__middle_rec__DecrAuxReg_63 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_113)));
            }
            {
              ll_backend__middle_rec__Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_124, 2) = ((MR_Box) (ll_backend__middle_rec__Var_108));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_124, 3) = ((MR_Box) (ll_backend__middle_rec__Var_100));
            }
            {
              ll_backend__middle_rec__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_130, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
            }
            {
              ll_backend__middle_rec__Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_123, 1) = ((MR_Box) (ll_backend__middle_rec__Var_124));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_123, 2) = ((MR_Box) (ll_backend__middle_rec__Var_130));
            }
            {
              ll_backend__middle_rec__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_122, 0) = ((MR_Box) (ll_backend__middle_rec__Var_123));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_122, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
            }
            {
              ll_backend__middle_rec__TestAuxReg_64 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_122)));
            }
          }
        else
          {
            MR_String ll_backend__middle_rec__PushMsg_65;
            MR_Word ll_backend__middle_rec__Var_132;
            MR_Word ll_backend__middle_rec__Var_133;
            MR_Word ll_backend__middle_rec__Var_136;
            MR_Word ll_backend__middle_rec__Var_137;
            MR_Word ll_backend__middle_rec__Var_139;
            MR_Word ll_backend__middle_rec__Var_140;
            MR_Word ll_backend__middle_rec__Var_141;
            MR_Word ll_backend__middle_rec__Var_144;
            MR_Word ll_backend__middle_rec__Var_145;
            MR_Word ll_backend__middle_rec__Var_146;
            MR_Word ll_backend__middle_rec__Var_150;
            MR_Word ll_backend__middle_rec__Var_151;

            {
              ll_backend__middle_rec__PushMsg_65 = ll_backend__proc_gen__push_msg_3_f_0(ll_backend__middle_rec__ModuleInfo_22, ll_backend__middle_rec__PredId_23, ll_backend__middle_rec__ProcId_24);
            }
            {
              ll_backend__middle_rec__Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_133, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_57));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_133, 2) = ((MR_Box) (ll_backend__middle_rec__PushMsg_65));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_133, 3) = ((MR_Box) ((MR_Integer) 1));
            }
            {
              ll_backend__middle_rec__Var_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_132, 0) = ((MR_Box) (ll_backend__middle_rec__Var_133));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_132, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__middle_rec__MaybeIncrSp_59 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_132)));
            }
            {
              ll_backend__middle_rec__Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_137, 1) = ((MR_Box) (ll_backend__middle_rec__FrameSize_57));
            }
            {
              ll_backend__middle_rec__Var_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_136, 0) = ((MR_Box) (ll_backend__middle_rec__Var_137));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_136, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__middle_rec__MaybeDecrSp_60 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_136)));
            }
            ll_backend__middle_rec__Var_141 = (MR_Word) &ll_backend__middle_rec_scalar_common_2[2];
            {
              ll_backend__middle_rec__Var_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_140, 1) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_140, 2) = ((MR_Box) (ll_backend__middle_rec__Var_141));
            }
            {
              ll_backend__middle_rec__Var_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_139, 0) = ((MR_Box) (ll_backend__middle_rec__Var_140));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_139, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
            }
            {
              ll_backend__middle_rec__InitAuxReg_61 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_139)));
            }
            {
              ll_backend__middle_rec__IncrAuxReg_62 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
            {
              ll_backend__middle_rec__DecrAuxReg_63 = mercury__cord__empty_0_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244);
            }
            {
              ll_backend__middle_rec__Var_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_150, 0) = ((MR_Box) (ll_backend__middle_rec__AuxReg_50));
            }
            {
              ll_backend__middle_rec__Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_146, 2) = ((MR_Box) (ll_backend__middle_rec__Var_141));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_146, 3) = ((MR_Box) (ll_backend__middle_rec__Var_150));
            }
            {
              ll_backend__middle_rec__Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_151, 0) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
            }
            {
              ll_backend__middle_rec__Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_145, 1) = ((MR_Box) (ll_backend__middle_rec__Var_146));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_145, 2) = ((MR_Box) (ll_backend__middle_rec__Var_151));
            }
            {
              ll_backend__middle_rec__Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_144, 0) = ((MR_Box) (ll_backend__middle_rec__Var_145));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_144, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
            }
            {
              ll_backend__middle_rec__TestAuxReg_64 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_144)));
            }
          }
        if ((ll_backend__middle_rec__AfterInstrs_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__middle_rec__Var_210;
            MR_Word ll_backend__middle_rec__Var_211;
            MR_Word ll_backend__middle_rec__Var_212;
            MR_Word ll_backend__middle_rec__Var_213;
            MR_Word ll_backend__middle_rec__Var_215;
            MR_Word ll_backend__middle_rec__Var_216;
            MR_Word ll_backend__middle_rec__Var_217;
            MR_Word ll_backend__middle_rec__Var_220;
            MR_Word ll_backend__middle_rec__Var_221;
            MR_Word ll_backend__middle_rec__Var_222;
            MR_Word ll_backend__middle_rec__Var_223;
            MR_Word ll_backend__middle_rec__Var_224;
            MR_Word ll_backend__middle_rec__Var_225;
            MR_Word ll_backend__middle_rec__Var_227;
            MR_Word ll_backend__middle_rec__Var_228;
            MR_Word ll_backend__middle_rec__Var_229;
            MR_Word ll_backend__middle_rec__Var_230;
            MR_Word ll_backend__middle_rec__Var_231;
            MR_Word ll_backend__middle_rec__Var_232;
            MR_Word ll_backend__middle_rec__Var_233;
            MR_Word ll_backend__middle_rec__Var_234;
            MR_Word ll_backend__middle_rec__Var_236;
            MR_Word ll_backend__middle_rec__Var_237;
            MR_Word ll_backend__middle_rec__Var_238;
            MR_Word ll_backend__middle_rec__Var_239;

            {
              ll_backend__middle_rec__Var_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_213, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_25));
            }
            {
              ll_backend__middle_rec__Var_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_212, 0) = ((MR_Box) (ll_backend__middle_rec__Var_213));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_212, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
            }
            {
              ll_backend__middle_rec__Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_217, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_21));
            }
            {
              ll_backend__middle_rec__Var_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_216, 0) = ((MR_Box) (ll_backend__middle_rec__Var_217));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_216, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__middle_rec__Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_215, 0) = ((MR_Box) (ll_backend__middle_rec__Var_216));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__middle_rec__Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_211, 0) = ((MR_Box) (ll_backend__middle_rec__Var_212));
              MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_211, 1) = ((MR_Box) (ll_backend__middle_rec__Var_215));
            }
            {
              ll_backend__middle_rec__Var_210 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_211);
            }
            {
              ll_backend__middle_rec__Var_221 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestInstrs_30);
            }
            {
              ll_backend__middle_rec__Var_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_225, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_54));
            }
            {
              ll_backend__middle_rec__Var_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_224, 0) = ((MR_Box) (ll_backend__middle_rec__Var_225));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_224, 1) = ((MR_Box) ((MR_String) "start of the down loop"));
            }
            {
              ll_backend__middle_rec__Var_223 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_224)));
            }
            {
              ll_backend__middle_rec__Var_228 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BeforeInstrs_53);
            }
            {
              ll_backend__middle_rec__Var_230 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Loop1Test_58);
            }
            {
              ll_backend__middle_rec__Var_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_234, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_234, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_28));
            }
            {
              ll_backend__middle_rec__Var_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_233, 0) = ((MR_Box) (ll_backend__middle_rec__Var_234));
              MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_233, 1) = ((MR_Box) ((MR_String) "start of base case"));
            }
            {
              ll_backend__middle_rec__Var_232 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_233)));
            }
            {
              ll_backend__middle_rec__Var_237 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
            }
            {
              ll_backend__middle_rec__Var_239 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (&ll_backend__middle_rec_scalar_common_1[4])));
            }
            {
              ll_backend__middle_rec__Var_238 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__Var_239);
            }
            {
              ll_backend__middle_rec__Var_236 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_237, ll_backend__middle_rec__Var_238);
            }
            {
              ll_backend__middle_rec__Var_231 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_232, ll_backend__middle_rec__Var_236);
            }
            {
              ll_backend__middle_rec__Var_229 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_230, ll_backend__middle_rec__Var_231);
            }
            {
              ll_backend__middle_rec__Var_227 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_228, ll_backend__middle_rec__Var_229);
            }
            {
              ll_backend__middle_rec__Var_222 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_223, ll_backend__middle_rec__Var_227);
            }
            {
              ll_backend__middle_rec__Var_220 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_221, ll_backend__middle_rec__Var_222);
            }
            {
              *ll_backend__middle_rec__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_210, ll_backend__middle_rec__Var_220);
            }
            ll_backend__middle_rec__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word ll_backend__middle_rec__BaseLabels_68;
            MR_Word ll_backend__middle_rec__Var_153;
            MR_Word ll_backend__middle_rec__Var_154;
            MR_Word ll_backend__middle_rec__Var_155;
            MR_Word ll_backend__middle_rec__Var_156;
            MR_String ll_backend__middle_rec__Var_157;
            MR_Word ll_backend__middle_rec__Var_158;
            MR_Word ll_backend__middle_rec__Var_159;
            MR_Word ll_backend__middle_rec__Var_160;
            MR_String ll_backend__middle_rec__Var_161;
            MR_Word ll_backend__middle_rec__Var_162;
            MR_Word ll_backend__middle_rec__Var_163;
            MR_Word ll_backend__middle_rec__Var_164;
            MR_Word ll_backend__middle_rec__Var_165;
            MR_Word ll_backend__middle_rec__Var_166;
            MR_Word ll_backend__middle_rec__Var_167;
            MR_Word ll_backend__middle_rec__Var_168;
            MR_Word ll_backend__middle_rec__Var_169;
            MR_String ll_backend__middle_rec__Var_170;
            MR_Word ll_backend__middle_rec__Var_171;
            MR_Word ll_backend__middle_rec__Var_172;
            MR_Word ll_backend__middle_rec__Var_173;
            MR_Word ll_backend__middle_rec__Var_174;
            MR_Word ll_backend__middle_rec__Var_175;
            MR_Word ll_backend__middle_rec__Var_176;
            MR_Word ll_backend__middle_rec__Var_177;
            MR_Word ll_backend__middle_rec__Var_178;
            MR_Word ll_backend__middle_rec__Var_179;
            MR_Word ll_backend__middle_rec__Var_180;
            MR_Word ll_backend__middle_rec__Var_181;
            MR_Word ll_backend__middle_rec__Var_182;
            MR_String ll_backend__middle_rec__Var_183;
            MR_Word ll_backend__middle_rec__Var_184;
            MR_Word ll_backend__middle_rec__Var_185;
            MR_Word ll_backend__middle_rec__Var_186;
            MR_Word ll_backend__middle_rec__Var_187;
            MR_Word ll_backend__middle_rec__Var_188;
            MR_Word ll_backend__middle_rec__Var_189;
            MR_Word ll_backend__middle_rec__Var_190;
            MR_Word ll_backend__middle_rec__Var_191;
            MR_Word ll_backend__middle_rec__Var_192;
            MR_Word ll_backend__middle_rec__Var_193;
            MR_Word ll_backend__middle_rec__Var_194;
            MR_Word ll_backend__middle_rec__Var_195;
            MR_String ll_backend__middle_rec__Var_196;
            MR_Word ll_backend__middle_rec__Var_197;
            MR_Word ll_backend__middle_rec__Var_198;
            MR_Word ll_backend__middle_rec__Var_199;
            MR_String ll_backend__middle_rec__Var_200;
            MR_Word ll_backend__middle_rec__Var_201;
            MR_Word ll_backend__middle_rec__Var_202;
            MR_Word ll_backend__middle_rec__Var_203;
            MR_Word ll_backend__middle_rec__Var_204;
            MR_Word ll_backend__middle_rec__Var_205;
            MR_Word ll_backend__middle_rec__Var_206;
            MR_String ll_backend__middle_rec__Var_209;

            {
              ll_backend__middle_rec__find_labels_2_p_0(ll_backend__middle_rec__BaseInstrs_47, &ll_backend__middle_rec__BaseLabels_68);
            }
            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BaseLabels_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__middle_rec__succeeded)
              {
                ll_backend__middle_rec__Var_157 = (MR_String) "Procedure entry point";
                ll_backend__middle_rec__Var_161 = (MR_String) "";
                ll_backend__middle_rec__Var_162 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  ll_backend__middle_rec__Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_156, 1) = ((MR_Box) (ll_backend__middle_rec__EntryLabel_25));
                }
                {
                  ll_backend__middle_rec__Var_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_155, 0) = ((MR_Box) (ll_backend__middle_rec__Var_156));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_155, 1) = ((MR_Box) (ll_backend__middle_rec__Var_157));
                }
                {
                  ll_backend__middle_rec__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_160, 0) = ((MR_Box) (ll_backend__middle_rec__SlotsComment_21));
                }
                {
                  ll_backend__middle_rec__Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_159, 0) = ((MR_Box) (ll_backend__middle_rec__Var_160));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_159, 1) = ((MR_Box) (ll_backend__middle_rec__Var_161));
                }
                {
                  ll_backend__middle_rec__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_158, 0) = ((MR_Box) (ll_backend__middle_rec__Var_159));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_158, 1) = ((MR_Box) (ll_backend__middle_rec__Var_162));
                }
                {
                  ll_backend__middle_rec__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_154, 0) = ((MR_Box) (ll_backend__middle_rec__Var_155));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_154, 1) = ((MR_Box) (ll_backend__middle_rec__Var_158));
                }
                {
                  ll_backend__middle_rec__Var_153 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_154);
                }
                {
                  ll_backend__middle_rec__Var_164 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__EntryTestInstrs_30);
                }
                ll_backend__middle_rec__Var_170 = (MR_String) "start of the down loop";
                {
                  ll_backend__middle_rec__Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_169, 1) = ((MR_Box) (ll_backend__middle_rec__Loop1Label_54));
                }
                {
                  ll_backend__middle_rec__Var_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_168, 0) = ((MR_Box) (ll_backend__middle_rec__Var_169));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_168, 1) = ((MR_Box) (ll_backend__middle_rec__Var_170));
                }
                {
                  ll_backend__middle_rec__Var_167 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_168)));
                }
                {
                  ll_backend__middle_rec__Var_174 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BeforeInstrs_53);
                }
                {
                  ll_backend__middle_rec__Var_176 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Loop1Test_58);
                }
                {
                  ll_backend__middle_rec__Var_178 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
                }
                ll_backend__middle_rec__Var_183 = (MR_String) "";
                {
                  ll_backend__middle_rec__Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_182, 1) = ((MR_Box) (ll_backend__middle_rec__Loop2Label_55));
                }
                {
                  ll_backend__middle_rec__Var_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_181, 0) = ((MR_Box) (ll_backend__middle_rec__Var_182));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_181, 1) = ((MR_Box) (ll_backend__middle_rec__Var_183));
                }
                {
                  ll_backend__middle_rec__Var_180 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_181)));
                }
                {
                  ll_backend__middle_rec__Var_185 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__AfterInstrs_52);
                }
                ll_backend__middle_rec__Var_195 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__middle_rec__Var_196 = (MR_String) "exit from recursive case";
                ll_backend__middle_rec__Var_200 = (MR_String) "start of base case";
                ll_backend__middle_rec__Var_201 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__middle_rec__Var_194 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3]);
                ll_backend__middle_rec__Var_193 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[5];
                {
                  ll_backend__middle_rec__Var_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_199, 1) = ((MR_Box) (ll_backend__middle_rec__BaseLabel_28));
                }
                {
                  ll_backend__middle_rec__Var_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_198, 0) = ((MR_Box) (ll_backend__middle_rec__Var_199));
                  MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_198, 1) = ((MR_Box) (ll_backend__middle_rec__Var_200));
                }
                {
                  ll_backend__middle_rec__Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_197, 0) = ((MR_Box) (ll_backend__middle_rec__Var_198));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_197, 1) = ((MR_Box) (ll_backend__middle_rec__Var_201));
                }
                {
                  ll_backend__middle_rec__Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_192, 0) = ((MR_Box) (ll_backend__middle_rec__Var_193));
                  MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_192, 1) = ((MR_Box) (ll_backend__middle_rec__Var_197));
                }
                {
                  ll_backend__middle_rec__Var_191 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_192);
                }
                {
                  ll_backend__middle_rec__Var_203 = mercury__cord__from_list_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__BaseInstrs_47);
                }
                ll_backend__middle_rec__Var_209 = (MR_String) "exit from base case";
                ll_backend__middle_rec__Var_206 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[4];
                {
                  ll_backend__middle_rec__Var_205 = mercury__cord__singleton_1_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ((MR_Box) (ll_backend__middle_rec__Var_206)));
                }
                {
                  ll_backend__middle_rec__Var_204 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__Var_205);
                }
                {
                  ll_backend__middle_rec__Var_202 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_203, ll_backend__middle_rec__Var_204);
                }
                {
                  ll_backend__middle_rec__Var_190 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_191, ll_backend__middle_rec__Var_202);
                }
                {
                  ll_backend__middle_rec__Var_189 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__LiveValCode_46, ll_backend__middle_rec__Var_190);
                }
                {
                  ll_backend__middle_rec__Var_188 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__TestAuxReg_64, ll_backend__middle_rec__Var_189);
                }
                {
                  ll_backend__middle_rec__Var_187 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__DecrAuxReg_63, ll_backend__middle_rec__Var_188);
                }
                {
                  ll_backend__middle_rec__Var_186 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__MaybeDecrSp_60, ll_backend__middle_rec__Var_187);
                }
                {
                  ll_backend__middle_rec__Var_184 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_185, ll_backend__middle_rec__Var_186);
                }
                {
                  ll_backend__middle_rec__Var_179 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_180, ll_backend__middle_rec__Var_184);
                }
                {
                  ll_backend__middle_rec__Var_177 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_178, ll_backend__middle_rec__Var_179);
                }
                {
                  ll_backend__middle_rec__Var_175 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_176, ll_backend__middle_rec__Var_177);
                }
                {
                  ll_backend__middle_rec__Var_173 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_174, ll_backend__middle_rec__Var_175);
                }
                {
                  ll_backend__middle_rec__Var_172 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__IncrAuxReg_62, ll_backend__middle_rec__Var_173);
                }
                {
                  ll_backend__middle_rec__Var_171 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__MaybeIncrSp_59, ll_backend__middle_rec__Var_172);
                }
                {
                  ll_backend__middle_rec__Var_166 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_167, ll_backend__middle_rec__Var_171);
                }
                {
                  ll_backend__middle_rec__Var_165 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__InitAuxReg_61, ll_backend__middle_rec__Var_166);
                }
                {
                  ll_backend__middle_rec__Var_163 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_164, ll_backend__middle_rec__Var_165);
                }
                {
                  *ll_backend__middle_rec__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__middle_rec__TypeCtorInfo_244_244, ll_backend__middle_rec__Var_153, ll_backend__middle_rec__Var_163);
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
            MR_Word ll_backend__middle_rec__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ll_backend__middle_rec__Var_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__middle_rec__SubGoal_17 = (MR_Word) MR_body(((MR_Word) ll_backend__middle_rec__Var_8), (MR_Integer) 0);
                  MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_83;

                  {
                    ll_backend__middle_rec__OnlyBuiltinsGoal_83 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__SubGoal_17);
                  }
                  switch (ll_backend__middle_rec__OnlyBuiltinsGoal_83) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                          ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__middle_rec__Uni_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_8, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_8, (MR_Integer) 0)));
                  MR_Word ll_backend__middle_rec__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_8, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_8, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_8, (MR_Integer) 4)));

                  switch (MR_tag((MR_Word) ll_backend__middle_rec__Uni_34)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__middle_rec__SubInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 6)));
                        MR_Word ll_backend__middle_rec__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 0)));
                        MR_Word ll_backend__middle_rec__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 1)));
                        MR_Word ll_backend__middle_rec__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 2)));
                        MR_Word ll_backend__middle_rec__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 3)));
                        MR_Word ll_backend__middle_rec__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 4)));
                        MR_Word ll_backend__middle_rec__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 5)));

                        if ((ll_backend__middle_rec__SubInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                        else
                          {
                            MR_Word ll_backend__middle_rec__TakeAddressFields_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_46, (MR_Integer) 0)));
                            MR_Word ll_backend__middle_rec__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_46, (MR_Integer) 1)));

                            if ((ll_backend__middle_rec__TakeAddressFields_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                            else
                              ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                          ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                          ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uni_34, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__middle_rec__BuiltinState_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_8, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_8, (MR_Integer) 0)));
                  MR_Integer ll_backend__middle_rec__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_8, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_8, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_8, (MR_Integer) 4)));
                  MR_Word ll_backend__middle_rec__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_8, (MR_Integer) 5)));

                  switch (ll_backend__middle_rec__BuiltinState_28) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                          ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ll_backend__middle_rec__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 2)));

                      switch (ll_backend__middle_rec__ConjType_12) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_88;

                            {
                              ll_backend__middle_rec__OnlyBuiltinsGoal_88 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_13);
                            }
                            switch (ll_backend__middle_rec__OnlyBuiltinsGoal_88) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                                break;
                              case (MR_Integer) 1:
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                                    ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                                  }
                                  continue;
                                }
                                break;
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ll_backend__middle_rec__Goals_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_81;

                      {
                        ll_backend__middle_rec__OnlyBuiltinsGoal_81 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_78);
                      }
                      switch (ll_backend__middle_rec__OnlyBuiltinsGoal_81) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ll_backend__middle_rec__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 3)));
                      MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_86;
                      MR_Word ll_backend__middle_rec___Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec___CanFail_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 2)));

                      {
                        ll_backend__middle_rec__OnlyBuiltinsGoal_86 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(ll_backend__middle_rec__Cases_16);
                      }
                      switch (ll_backend__middle_rec__OnlyBuiltinsGoal_86) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ll_backend__middle_rec__Reason_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__SubGoal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 2)));
                      MR_Word ll_backend__middle_rec__FGT_20;
                      MR_Word ll_backend__middle_rec__Var_19;

                      ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Reason_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (ll_backend__middle_rec__succeeded)
                        {
                          ll_backend__middle_rec__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_18, (MR_Integer) 1)));
                          ll_backend__middle_rec__FGT_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_18, (MR_Integer) 2)));
                          switch (ll_backend__middle_rec__FGT_20) {
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
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                            ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_93;

                          {
                            ll_backend__middle_rec__OnlyBuiltinsGoal_93 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__SubGoal_79);
                          }
                          switch (ll_backend__middle_rec__OnlyBuiltinsGoal_93) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 1:
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                              break;
                          }
                        }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ll_backend__middle_rec__Cond_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 2)));
                      MR_Word ll_backend__middle_rec__Then_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 3)));
                      MR_Word ll_backend__middle_rec__Else_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 4)));
                      MR_Word ll_backend__middle_rec___Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_8, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__Var_75;
                      MR_Word ll_backend__middle_rec__Var_76;
                      MR_Word ll_backend__middle_rec__Var_77;

                      {
                        ll_backend__middle_rec__Var_75 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Cond_22);
                      }
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_75 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          {
                            ll_backend__middle_rec__Var_76 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Then_23);
                          }
                          ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_76 == (MR_Integer) 1);
                          if (ll_backend__middle_rec__succeeded)
                            {
                              {
                                ll_backend__middle_rec__Var_77 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Else_24);
                              }
                              ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_77 == (MR_Integer) 1);
                            }
                        }
                      if (ll_backend__middle_rec__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                            ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                      else
                        ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
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
            MR_Word ll_backend__middle_rec__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Var_11;
            MR_Word ll_backend__middle_rec__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_9, (MR_Integer) 0)));
            MR_Word ll_backend__middle_rec__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_9, (MR_Integer) 1)));
            MR_Word ll_backend__middle_rec__Var_12;

            ll_backend__middle_rec__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Var_9, (MR_Integer) 2)));
            ll_backend__middle_rec__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 0)));
            ll_backend__middle_rec__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_5, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) ll_backend__middle_rec__Var_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__middle_rec__SubGoal_20 = (MR_Word) MR_body(((MR_Word) ll_backend__middle_rec__Var_11), (MR_Integer) 0);
                  MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_86;

                  {
                    ll_backend__middle_rec__OnlyBuiltinsGoal_86 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__SubGoal_20);
                  }
                  switch (ll_backend__middle_rec__OnlyBuiltinsGoal_86) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                          ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__middle_rec__Uni_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_11, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_11, (MR_Integer) 0)));
                  MR_Word ll_backend__middle_rec__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_11, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_11, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_11, (MR_Integer) 4)));

                  switch (MR_tag((MR_Word) ll_backend__middle_rec__Uni_37)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__middle_rec__SubInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_37, (MR_Integer) 6)));
                        MR_Word ll_backend__middle_rec__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_37, (MR_Integer) 0)));
                        MR_Word ll_backend__middle_rec__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_37, (MR_Integer) 1)));
                        MR_Word ll_backend__middle_rec__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_37, (MR_Integer) 2)));
                        MR_Word ll_backend__middle_rec__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_37, (MR_Integer) 3)));
                        MR_Word ll_backend__middle_rec__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_37, (MR_Integer) 4)));
                        MR_Word ll_backend__middle_rec__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_37, (MR_Integer) 5)));

                        if ((ll_backend__middle_rec__SubInfo_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                        else
                          {
                            MR_Word ll_backend__middle_rec__TakeAddressFields_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_49, (MR_Integer) 0)));
                            MR_Word ll_backend__middle_rec__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_49, (MR_Integer) 1)));

                            if ((ll_backend__middle_rec__TakeAddressFields_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                            else
                              ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                          ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                          ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uni_37, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 1:
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__middle_rec__BuiltinState_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_11, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_11, (MR_Integer) 0)));
                  MR_Integer ll_backend__middle_rec__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_11, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_11, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_11, (MR_Integer) 4)));
                  MR_Word ll_backend__middle_rec__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_11, (MR_Integer) 5)));

                  switch (ll_backend__middle_rec__BuiltinState_31) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                          ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ll_backend__middle_rec__ConjType_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__Goals_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 2)));

                      switch (ll_backend__middle_rec__ConjType_15) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_91;

                            {
                              ll_backend__middle_rec__OnlyBuiltinsGoal_91 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_16);
                            }
                            switch (ll_backend__middle_rec__OnlyBuiltinsGoal_91) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                                break;
                              case (MR_Integer) 1:
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                                    ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                                  }
                                  continue;
                                }
                                break;
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ll_backend__middle_rec__Goals_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_84;

                      {
                        ll_backend__middle_rec__OnlyBuiltinsGoal_84 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_81);
                      }
                      switch (ll_backend__middle_rec__OnlyBuiltinsGoal_84) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ll_backend__middle_rec__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 3)));
                      MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_89;
                      MR_Word ll_backend__middle_rec___Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec___CanFail_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 2)));

                      {
                        ll_backend__middle_rec__OnlyBuiltinsGoal_89 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(ll_backend__middle_rec__Cases_19);
                      }
                      switch (ll_backend__middle_rec__OnlyBuiltinsGoal_89) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                              ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ll_backend__middle_rec__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__SubGoal_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 2)));
                      MR_Word ll_backend__middle_rec__FGT_23;
                      MR_Word ll_backend__middle_rec__Var_22;

                      ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Reason_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (ll_backend__middle_rec__succeeded)
                        {
                          ll_backend__middle_rec__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_21, (MR_Integer) 1)));
                          ll_backend__middle_rec__FGT_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_21, (MR_Integer) 2)));
                          switch (ll_backend__middle_rec__FGT_23) {
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
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                            ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Word ll_backend__middle_rec__OnlyBuiltinsGoal_96;

                          {
                            ll_backend__middle_rec__OnlyBuiltinsGoal_96 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__SubGoal_82);
                          }
                          switch (ll_backend__middle_rec__OnlyBuiltinsGoal_96) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 1:
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                                  ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                              break;
                          }
                        }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ll_backend__middle_rec__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 2)));
                      MR_Word ll_backend__middle_rec__Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 3)));
                      MR_Word ll_backend__middle_rec__Else_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 4)));
                      MR_Word ll_backend__middle_rec___Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_11, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__Var_78;
                      MR_Word ll_backend__middle_rec__Var_79;
                      MR_Word ll_backend__middle_rec__Var_80;

                      {
                        ll_backend__middle_rec__Var_78 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Cond_25);
                      }
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_78 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          {
                            ll_backend__middle_rec__Var_79 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Then_26);
                          }
                          ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_79 == (MR_Integer) 1);
                          if (ll_backend__middle_rec__succeeded)
                            {
                              {
                                ll_backend__middle_rec__Var_80 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Else_27);
                              }
                              ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_80 == (MR_Integer) 1);
                            }
                        }
                      if (ll_backend__middle_rec__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Cases_6;

                            ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                      else
                        ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
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
          }
        return ll_backend__middle_rec__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_1_f_0(
  MR_Word ll_backend__middle_rec__Goal_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__middle_rec__succeeded;
        MR_Word ll_backend__middle_rec__HeadVar__2_2;
        MR_Word ll_backend__middle_rec__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
        MR_Word ll_backend__middle_rec__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ll_backend__middle_rec__Var_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__middle_rec__SubGoal_13 = (MR_Word) MR_body(((MR_Word) ll_backend__middle_rec__Var_4), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__middle_rec__next_value_of_Goal_3 = ll_backend__middle_rec__SubGoal_13;

                ll_backend__middle_rec__Goal_3 = ll_backend__middle_rec__next_value_of_Goal_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__middle_rec__Uni_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_4, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_4, (MR_Integer) 0)));
              MR_Word ll_backend__middle_rec__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_4, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_4, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) ll_backend__middle_rec__Uni_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__middle_rec__SubInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_30, (MR_Integer) 6)));
                    MR_Word ll_backend__middle_rec__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_30, (MR_Integer) 0)));
                    MR_Word ll_backend__middle_rec__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_30, (MR_Integer) 1)));
                    MR_Word ll_backend__middle_rec__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_30, (MR_Integer) 2)));
                    MR_Word ll_backend__middle_rec__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_30, (MR_Integer) 3)));
                    MR_Word ll_backend__middle_rec__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_30, (MR_Integer) 4)));
                    MR_Word ll_backend__middle_rec__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_30, (MR_Integer) 5)));

                    if ((ll_backend__middle_rec__SubInfo_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
                    else
                      {
                        MR_Word ll_backend__middle_rec__TakeAddressFields_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_42, (MR_Integer) 0)));
                        MR_Word ll_backend__middle_rec__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_42, (MR_Integer) 1)));

                        if ((ll_backend__middle_rec__TakeAddressFields_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
                        else
                          ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uni_30, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__middle_rec__BuiltinState_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_4, (MR_Integer) 3)));
              MR_Word ll_backend__middle_rec__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_4, (MR_Integer) 0)));
              MR_Integer ll_backend__middle_rec__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_4, (MR_Integer) 1)));
              MR_Word ll_backend__middle_rec__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_4, (MR_Integer) 2)));
              MR_Word ll_backend__middle_rec__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_4, (MR_Integer) 4)));
              MR_Word ll_backend__middle_rec__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__Var_4, (MR_Integer) 5)));

              switch (ll_backend__middle_rec__BuiltinState_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__middle_rec__ConjType_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 2)));

                  switch (ll_backend__middle_rec__ConjType_8) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 0:
                      {
                        ll_backend__middle_rec__HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_9);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__middle_rec__Goals_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 1)));

                  {
                    ll_backend__middle_rec__HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_74);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__middle_rec__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec___Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec___CanFail_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 2)));

                  {
                    ll_backend__middle_rec__HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(ll_backend__middle_rec__Cases_12);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ll_backend__middle_rec__Reason_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__SubGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__FGT_16;
                  MR_Word ll_backend__middle_rec__Var_15;

                  ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Reason_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_14, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (ll_backend__middle_rec__succeeded)
                    {
                      ll_backend__middle_rec__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_14, (MR_Integer) 1)));
                      ll_backend__middle_rec__FGT_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_14, (MR_Integer) 2)));
                      switch (ll_backend__middle_rec__FGT_16) {
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
                    ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__middle_rec__next_value_of_Goal_3 = ll_backend__middle_rec__SubGoal_75;

                        ll_backend__middle_rec__Goal_3 = ll_backend__middle_rec__next_value_of_Goal_3;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ll_backend__middle_rec__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 4)));
                  MR_Word ll_backend__middle_rec___Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Var_4, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__Var_71;
                  MR_Word ll_backend__middle_rec__Var_72;
                  MR_Word ll_backend__middle_rec__Var_73;

                  {
                    ll_backend__middle_rec__Var_71 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Cond_18);
                  }
                  ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_71 == (MR_Integer) 1);
                  if (ll_backend__middle_rec__succeeded)
                    {
                      {
                        ll_backend__middle_rec__Var_72 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Then_19);
                      }
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_72 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          {
                            ll_backend__middle_rec__Var_73 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Else_20);
                          }
                          ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_73 == (MR_Integer) 1);
                        }
                    }
                  if (ll_backend__middle_rec__succeeded)
                    ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 1;
                  else
                    ll_backend__middle_rec__HeadVar__2_2 = (MR_Integer) 0;
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
        return ll_backend__middle_rec__HeadVar__2_2;
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
        MR_Word ll_backend__middle_rec__Var_7;

        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__middle_rec__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__middle_rec__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 0)));
            ll_backend__middle_rec__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal_3, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_6)) {
              default:
                ll_backend__middle_rec__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__middle_rec__SubGoal_17 = (MR_Word) MR_body(((MR_Word) ll_backend__middle_rec__GoalExpr_6), (MR_Integer) 0);
                  MR_Word ll_backend__middle_rec__OnlyBuiltinsGoalExpr_205;

                  {
                    ll_backend__middle_rec__OnlyBuiltinsGoalExpr_205 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__SubGoal_17);
                  }
                  ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__OnlyBuiltinsGoalExpr_205 == (MR_Integer) 1);
                  if (ll_backend__middle_rec__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                        ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__middle_rec__Uni_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__OnlyBuiltinsGoalExpr_329;
                  MR_Word ll_backend__middle_rec__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 0)));
                  MR_Word ll_backend__middle_rec__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 4)));

                  switch (MR_tag((MR_Word) ll_backend__middle_rec__Uni_34)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__middle_rec__SubInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 6)));
                        MR_Word ll_backend__middle_rec__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 0)));
                        MR_Word ll_backend__middle_rec__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 1)));
                        MR_Word ll_backend__middle_rec__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 2)));
                        MR_Word ll_backend__middle_rec__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 3)));
                        MR_Word ll_backend__middle_rec__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 4)));
                        MR_Word ll_backend__middle_rec__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Uni_34, (MR_Integer) 5)));

                        if ((ll_backend__middle_rec__SubInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          ll_backend__middle_rec__OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                        else
                          {
                            MR_Word ll_backend__middle_rec__TakeAddressFields_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_46, (MR_Integer) 0)));
                            MR_Word ll_backend__middle_rec__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__SubInfo_46, (MR_Integer) 1)));

                            if ((ll_backend__middle_rec__TakeAddressFields_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              ll_backend__middle_rec__OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                            else
                              ll_backend__middle_rec__OnlyBuiltinsGoalExpr_329 = (MR_Integer) 0;
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      ll_backend__middle_rec__OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      ll_backend__middle_rec__OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Uni_34, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__middle_rec__OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 1:
                          ll_backend__middle_rec__OnlyBuiltinsGoalExpr_329 = (MR_Integer) 0;
                          break;
                      }
                      break;
                  }
                  ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__OnlyBuiltinsGoalExpr_329 == (MR_Integer) 1);
                  if (ll_backend__middle_rec__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                        ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__middle_rec__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 0)));
                  MR_Integer ll_backend__middle_rec__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
                  MR_Word ll_backend__middle_rec__BuiltinState_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 3)));
                  MR_Word ll_backend__middle_rec__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word ll_backend__middle_rec__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 4)));
                  MR_Word ll_backend__middle_rec__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 5)));

                  switch (ll_backend__middle_rec__BuiltinState_28) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                          ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__middle_rec__Var_218;
                        MR_Word ll_backend__middle_rec__PredId_225;
                        MR_Integer ll_backend__middle_rec__ProcId_226;

                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__BuiltinState_28 == (MR_Integer) 1);
                        if (ll_backend__middle_rec__succeeded)
                          {
                            {
                              ll_backend__code_info__get_pred_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__PredId_225);
                            }
                            {
                              ll_backend__middle_rec__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__middle_rec__PredId_225, ll_backend__middle_rec__Var_25);
                            }
                            if (ll_backend__middle_rec__succeeded)
                              {
                                {
                                  ll_backend__code_info__get_proc_id_2_p_0(ll_backend__middle_rec__CodeInfo_5, &ll_backend__middle_rec__ProcId_226);
                                }
                                ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__ProcId_226 == ll_backend__middle_rec__Var_26);
                                if (ll_backend__middle_rec__succeeded)
                                  {
                                    {
                                      ll_backend__middle_rec__Var_218 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_4);
                                    }
                                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_218 == (MR_Integer) 1);
                                  }
                              }
                          }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 0)))) {
                  default:
                    ll_backend__middle_rec__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ll_backend__middle_rec__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));
                      MR_Word ll_backend__middle_rec__OnlyBuiltinsGoalExpr_112;

                      switch (ll_backend__middle_rec__ConjType_12) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          ll_backend__middle_rec__OnlyBuiltinsGoalExpr_112 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 0:
                          {
                            ll_backend__middle_rec__OnlyBuiltinsGoalExpr_112 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_13);
                          }
                          break;
                      }
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__OnlyBuiltinsGoalExpr_112 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                            ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ll_backend__middle_rec__Goals_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__OnlyBuiltinsGoalExpr_143;

                      {
                        ll_backend__middle_rec__OnlyBuiltinsGoalExpr_143 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(ll_backend__middle_rec__Goals_78);
                      }
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__OnlyBuiltinsGoalExpr_143 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                            ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ll_backend__middle_rec__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 3)));
                      MR_Word ll_backend__middle_rec__OnlyBuiltinsGoalExpr_298;
                      MR_Word ll_backend__middle_rec___Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec___CanFail_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));

                      {
                        ll_backend__middle_rec__OnlyBuiltinsGoalExpr_298 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(ll_backend__middle_rec__Cases_16);
                      }
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__OnlyBuiltinsGoalExpr_298 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                            ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ll_backend__middle_rec__Reason_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__SubGoal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));
                      MR_Word ll_backend__middle_rec__OnlyBuiltinsGoalExpr_267;
                      MR_Word ll_backend__middle_rec__FGT_20;
                      MR_Word ll_backend__middle_rec__Var_19;

                      ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__Reason_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (ll_backend__middle_rec__succeeded)
                        {
                          ll_backend__middle_rec__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_18, (MR_Integer) 1)));
                          ll_backend__middle_rec__FGT_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__Reason_18, (MR_Integer) 2)));
                          switch (ll_backend__middle_rec__FGT_20) {
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
                        ll_backend__middle_rec__OnlyBuiltinsGoalExpr_267 = (MR_Integer) 1;
                      else
                        {
                          ll_backend__middle_rec__OnlyBuiltinsGoalExpr_267 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__SubGoal_79);
                        }
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__OnlyBuiltinsGoalExpr_267 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                            ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ll_backend__middle_rec__Cond_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 2)));
                      MR_Word ll_backend__middle_rec__Then_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 3)));
                      MR_Word ll_backend__middle_rec__Else_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 4)));
                      MR_Word ll_backend__middle_rec__OnlyBuiltinsGoalExpr_174;
                      MR_Word ll_backend__middle_rec___Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_6, (MR_Integer) 1)));
                      MR_Word ll_backend__middle_rec__Var_75;
                      MR_Word ll_backend__middle_rec__Var_76;
                      MR_Word ll_backend__middle_rec__Var_77;

                      {
                        ll_backend__middle_rec__Var_75 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Cond_22);
                      }
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_75 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          {
                            ll_backend__middle_rec__Var_76 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Then_23);
                          }
                          ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_76 == (MR_Integer) 1);
                          if (ll_backend__middle_rec__succeeded)
                            {
                              {
                                ll_backend__middle_rec__Var_77 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Else_24);
                              }
                              ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_77 == (MR_Integer) 1);
                            }
                        }
                      if (ll_backend__middle_rec__succeeded)
                        ll_backend__middle_rec__OnlyBuiltinsGoalExpr_174 = (MR_Integer) 1;
                      else
                        ll_backend__middle_rec__OnlyBuiltinsGoalExpr_174 = (MR_Integer) 0;
                      ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__OnlyBuiltinsGoalExpr_174 == (MR_Integer) 1);
                      if (ll_backend__middle_rec__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__middle_rec__next_value_of_HeadVar__1_1 = ll_backend__middle_rec__Goals_4;

                            ll_backend__middle_rec__HeadVar__1_1 = ll_backend__middle_rec__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
                      }
                      ll_backend__middle_rec__succeeded = MR_TRUE;
                    }
                    break;
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
    MR_Word ll_backend__middle_rec__Var_24;
    MR_Word ll_backend__middle_rec__Var_25;
    MR_Word ll_backend__middle_rec__Var_26;
    MR_Word ll_backend__middle_rec__Var_27;
    MR_Word ll_backend__middle_rec__Var_28;
    MR_Word ll_backend__middle_rec__Var_29;
    MR_Word ll_backend__middle_rec__Var_30;
    MR_Word ll_backend__middle_rec__GoalExpr_37;
    MR_Word ll_backend__middle_rec__Goals_39;
    MR_Word ll_backend__middle_rec__Var_40;
    MR_Word ll_backend__middle_rec__Var_38;

    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (ll_backend__middle_rec__succeeded)
      {
        ll_backend__middle_rec__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 1)));
        ll_backend__middle_rec__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 2)));
        ll_backend__middle_rec__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_11, (MR_Integer) 3)));
        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_24 == (MR_Integer) 1);
        if (ll_backend__middle_rec__succeeded)
          {
            ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Var_25)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__middle_rec__succeeded)
              {
                ll_backend__middle_rec__Case1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_25, (MR_Integer) 0)));
                ll_backend__middle_rec__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_25, (MR_Integer) 1)));
                ll_backend__middle_rec__succeeded = ((MR_tag((MR_Word) ll_backend__middle_rec__Var_26)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__middle_rec__succeeded)
                  {
                    ll_backend__middle_rec__Case2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_26, (MR_Integer) 0)));
                    ll_backend__middle_rec__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__middle_rec__Var_26, (MR_Integer) 1)));
                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (ll_backend__middle_rec__succeeded)
                      {
                        ll_backend__middle_rec__ConsId1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 0)));
                        ll_backend__middle_rec__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 1)));
                        ll_backend__middle_rec__Goal1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case1_14, (MR_Integer) 2)));
                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (ll_backend__middle_rec__succeeded)
                          {
                            ll_backend__middle_rec__ConsId2_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 0)));
                            ll_backend__middle_rec__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 1)));
                            ll_backend__middle_rec__Goal2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Case2_15, (MR_Integer) 2)));
                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (ll_backend__middle_rec__succeeded)
                              {
                                {
                                  ll_backend__middle_rec__Var_30 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Goal1_17);
                                }
                                ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_30 == (MR_Integer) 1);
                                if (ll_backend__middle_rec__succeeded)
                                  {
                                    ll_backend__middle_rec__GoalExpr_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 0)));
                                    ll_backend__middle_rec__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal2_19, (MR_Integer) 1)));
                                    ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
                                    if (ll_backend__middle_rec__succeeded)
                                      {
                                        ll_backend__middle_rec__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_37, (MR_Integer) 1)));
                                        ll_backend__middle_rec__Goals_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_37, (MR_Integer) 2)));
                                        ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_40 == (MR_Integer) 0);
                                        if (ll_backend__middle_rec__succeeded)
                                          {
                                            ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_39, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20);
                                          }
                                      }
                                  }
                                if (ll_backend__middle_rec__succeeded)
                                  {
                                    ll_backend__middle_rec__succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(ll_backend__middle_rec__Var_13, ll_backend__middle_rec__ConsId1_16, ll_backend__middle_rec__Goal1_17, ll_backend__middle_rec__Goal2_19, ll_backend__middle_rec__GoalInfo_12, ll_backend__middle_rec__Instrs_8, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20, ll_backend__middle_rec__STATE_VARIABLE_CI_21, ll_backend__middle_rec__STATE_VARIABLE_CLD_0_22, ll_backend__middle_rec__STATE_VARIABLE_CLD_23);
                                  }
                                else
                                  {
                                    MR_Word ll_backend__middle_rec__Var_33;
                                    MR_Word ll_backend__middle_rec__GoalExpr_42;
                                    MR_Word ll_backend__middle_rec__Goals_44;
                                    MR_Word ll_backend__middle_rec__Var_45;
                                    MR_Word ll_backend__middle_rec__Var_43;

                                    {
                                      ll_backend__middle_rec__Var_33 = ll_backend__middle_rec__contains_only_builtins_1_f_0(ll_backend__middle_rec__Goal2_19);
                                    }
                                    ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_33 == (MR_Integer) 1);
                                    if (ll_backend__middle_rec__succeeded)
                                      {
                                        ll_backend__middle_rec__GoalExpr_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 0)));
                                        ll_backend__middle_rec__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__middle_rec__Goal1_17, (MR_Integer) 1)));
                                        ll_backend__middle_rec__succeeded = ((((MR_tag((MR_Word) ll_backend__middle_rec__GoalExpr_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_42, (MR_Integer) 0)))) == (MR_Integer) 2)));
                                        if (ll_backend__middle_rec__succeeded)
                                          {
                                            ll_backend__middle_rec__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_42, (MR_Integer) 1)));
                                            ll_backend__middle_rec__Goals_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__middle_rec__GoalExpr_42, (MR_Integer) 2)));
                                            ll_backend__middle_rec__succeeded = (ll_backend__middle_rec__Var_45 == (MR_Integer) 0);
                                            if (ll_backend__middle_rec__succeeded)
                                              {
                                                {
                                                  ll_backend__middle_rec__succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(ll_backend__middle_rec__Goals_44, ll_backend__middle_rec__STATE_VARIABLE_CI_0_20);
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
