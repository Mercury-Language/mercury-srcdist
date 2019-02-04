/*
** Automatically generated from `code_gen.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module ll_backend.code_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__code_gen__init
ENDINIT
*/

#include "ll_backend.code_gen.mih"


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
#include "hlds.hlds_desc.mih"
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
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.commit_gen.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.disj_gen.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.ite_gen.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.par_conj_gen.mih"
#include "ll_backend.pragma_c_gen.mih"
#include "ll_backend.switch_gen.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_bool MR_CALL 
ll_backend__code_gen____Unify____maybe__maybe_1_1(
  MR_Word ll_backend__code_gen__TypeInfo_for_T_9,
  MR_Word ll_backend__code_gen__HeadVar__1_1,
  MR_Word ll_backend__code_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__code_gen__generate_conj_inner_10_p_0(
  MR_Word ll_backend__code_gen__HeadVar__1_1,
  MR_Integer ll_backend__code_gen__N_2,
  MR_Word ll_backend__code_gen__CodeModel_3,
  MR_Word * ll_backend__code_gen__HeadVar__4_4,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_5,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_6,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_7,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_8,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_9,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_10);

static void MR_CALL 
ll_backend__code_gen__generate_conj_8_p_0(
  MR_Word ll_backend__code_gen__HeadVar__1_1,
  MR_Word ll_backend__code_gen__CodeModel_2,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_3,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_4,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_5,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_6,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_8);

static void MR_CALL 
ll_backend__code_gen__generate_goal_expr_9_p_0(
  MR_Word ll_backend__code_gen__GoalExpr_10,
  MR_Word ll_backend__code_gen__GoalInfo_11,
  MR_Word ll_backend__code_gen__CodeModel_12,
  MR_Word ll_backend__code_gen__ForwardLiveVarsBeforeGoal_13,
  MR_Word * ll_backend__code_gen__Code_14,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_54,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_55,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_56,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_57);

static MR_Word MR_CALL 
ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(
  MR_Word ll_backend__code_gen__ProcInfo_3);


static /* final */ const MR_Box ll_backend__code_gen_scalar_common_1[1][2];




static /* final */ const MR_Box ll_backend__code_gen_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_bool MR_CALL 
ll_backend__code_gen____Unify____maybe__maybe_1_1(
  MR_Word ll_backend__code_gen__TypeInfo_for_T_9,
  MR_Word ll_backend__code_gen__HeadVar__1_1,
  MR_Word ll_backend__code_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box ll_backend__code_gen__V_6_6;

    if (ll_backend__code_gen__succeeded)
      {
        ll_backend__code_gen__V_6_6 = (MR_hl_field(MR_mktag(1), ll_backend__code_gen__HeadVar__2_2, (MR_Integer) 0));
        (MR_hl_field(MR_mktag(1), ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 0)) = ll_backend__code_gen__V_6_6;
        ll_backend__code_gen__succeeded = MR_TRUE;
      }
    return ll_backend__code_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__code_gen__generate_conj_inner_10_p_0(
  MR_Word ll_backend__code_gen__HeadVar__1_1,
  MR_Integer ll_backend__code_gen__N_2,
  MR_Word ll_backend__code_gen__CodeModel_3,
  MR_Word * ll_backend__code_gen__HeadVar__4_4,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_5,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_6,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_7,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_8,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_9,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__code_gen__succeeded;

        if ((ll_backend__code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__code_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__code_gen__STATE_VARIABLE_CLD_10 = ll_backend__code_gen__STATE_VARIABLE_CLD_0_9;
            *ll_backend__code_gen__STATE_VARIABLE_CI_8 = ll_backend__code_gen__STATE_VARIABLE_CI_0_7;
            *ll_backend__code_gen__STATE_VARIABLE_Code_6 = ll_backend__code_gen__STATE_VARIABLE_Code_0_5;
          }
        else
          {
            MR_Word ll_backend__code_gen__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__code_gen__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 1)));

            ll_backend__code_gen__succeeded = (ll_backend__code_gen__N_2 > (MR_Integer) 0);
            if (ll_backend__code_gen__succeeded)
              {
                MR_Word ll_backend__code_gen__GoalCode_30;
                MR_Word ll_backend__code_gen__Instmap_31;
                MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_39_39;
                MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_40_40;
                MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_41_41;

                {
                  ll_backend__code_gen__generate_goal_7_p_0(ll_backend__code_gen__CodeModel_3, ll_backend__code_gen__Goal_22, &ll_backend__code_gen__GoalCode_30, ll_backend__code_gen__STATE_VARIABLE_CI_0_7, &ll_backend__code_gen__STATE_VARIABLE_CI_39_39, ll_backend__code_gen__STATE_VARIABLE_CLD_0_9, &ll_backend__code_gen__STATE_VARIABLE_CLD_40_40);
                }
                {
                  ll_backend__code_gen__STATE_VARIABLE_Code_41_41 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_gen__STATE_VARIABLE_Code_0_5, ll_backend__code_gen__GoalCode_30);
                }
                {
                  ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CLD_40_40, &ll_backend__code_gen__Instmap_31);
                }
                {
                  ll_backend__code_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__code_gen__Instmap_31);
                }
                if (ll_backend__code_gen__succeeded)
                  {
                    *ll_backend__code_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *ll_backend__code_gen__STATE_VARIABLE_CLD_10 = ll_backend__code_gen__STATE_VARIABLE_CLD_40_40;
                    *ll_backend__code_gen__STATE_VARIABLE_CI_8 = ll_backend__code_gen__STATE_VARIABLE_CI_39_39;
                    *ll_backend__code_gen__STATE_VARIABLE_Code_6 = ll_backend__code_gen__STATE_VARIABLE_Code_41_41;
                  }
                else
                  {
                    MR_Integer ll_backend__code_gen__V_42_42 = (ll_backend__code_gen__N_2 - (MR_Integer) 1);

                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__code_gen__HeadVar__1__tmp_copy_1 = ll_backend__code_gen__Goals_23;
                      MR_Integer ll_backend__code_gen__N__tmp_copy_2 = ll_backend__code_gen__V_42_42;
                      MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_5 = ll_backend__code_gen__STATE_VARIABLE_Code_41_41;
                      MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_7 = ll_backend__code_gen__STATE_VARIABLE_CI_39_39;
                      MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0__tmp_copy_9 = ll_backend__code_gen__STATE_VARIABLE_CLD_40_40;

                      ll_backend__code_gen__STATE_VARIABLE_CLD_0_9 = ll_backend__code_gen__STATE_VARIABLE_CLD_0__tmp_copy_9;
                      ll_backend__code_gen__STATE_VARIABLE_CI_0_7 = ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_7;
                      ll_backend__code_gen__STATE_VARIABLE_Code_0_5 = ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_5;
                      ll_backend__code_gen__N_2 = ll_backend__code_gen__N__tmp_copy_2;
                      ll_backend__code_gen__HeadVar__1_1 = ll_backend__code_gen__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
            else
              {
                *ll_backend__code_gen__HeadVar__4_4 = ll_backend__code_gen__HeadVar__1_1;
                *ll_backend__code_gen__STATE_VARIABLE_CLD_10 = ll_backend__code_gen__STATE_VARIABLE_CLD_0_9;
                *ll_backend__code_gen__STATE_VARIABLE_CI_8 = ll_backend__code_gen__STATE_VARIABLE_CI_0_7;
                *ll_backend__code_gen__STATE_VARIABLE_Code_6 = ll_backend__code_gen__STATE_VARIABLE_Code_0_5;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__code_gen__generate_conj_8_p_0(
  MR_Word ll_backend__code_gen__HeadVar__1_1,
  MR_Word ll_backend__code_gen__CodeModel_2,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_3,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_4,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_5,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_6,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__code_gen__succeeded;

        if ((ll_backend__code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__code_gen__STATE_VARIABLE_CLD_8 = ll_backend__code_gen__STATE_VARIABLE_CLD_0_7;
            *ll_backend__code_gen__STATE_VARIABLE_CI_6 = ll_backend__code_gen__STATE_VARIABLE_CI_0_5;
            *ll_backend__code_gen__STATE_VARIABLE_Code_4 = ll_backend__code_gen__STATE_VARIABLE_Code_0_3;
          }
        else
          {
            MR_Word ll_backend__code_gen__LeftOverGoals_26;
            MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_34_34;
            MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_35_35;
            MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_36_36;

            {
              ll_backend__code_gen__generate_conj_inner_10_p_0(ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 1000, ll_backend__code_gen__CodeModel_2, &ll_backend__code_gen__LeftOverGoals_26, ll_backend__code_gen__STATE_VARIABLE_Code_0_3, &ll_backend__code_gen__STATE_VARIABLE_Code_34_34, ll_backend__code_gen__STATE_VARIABLE_CI_0_5, &ll_backend__code_gen__STATE_VARIABLE_CI_35_35, ll_backend__code_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__code_gen__STATE_VARIABLE_CLD_36_36);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__code_gen__HeadVar__1__tmp_copy_1 = ll_backend__code_gen__LeftOverGoals_26;
              MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_3 = ll_backend__code_gen__STATE_VARIABLE_Code_34_34;
              MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_5 = ll_backend__code_gen__STATE_VARIABLE_CI_35_35;
              MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0__tmp_copy_7 = ll_backend__code_gen__STATE_VARIABLE_CLD_36_36;

              ll_backend__code_gen__STATE_VARIABLE_CLD_0_7 = ll_backend__code_gen__STATE_VARIABLE_CLD_0__tmp_copy_7;
              ll_backend__code_gen__STATE_VARIABLE_CI_0_5 = ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_5;
              ll_backend__code_gen__STATE_VARIABLE_Code_0_3 = ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_3;
              ll_backend__code_gen__HeadVar__1_1 = ll_backend__code_gen__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__code_gen__generate_goal_expr_9_p_0(
  MR_Word ll_backend__code_gen__GoalExpr_10,
  MR_Word ll_backend__code_gen__GoalInfo_11,
  MR_Word ll_backend__code_gen__CodeModel_12,
  MR_Word ll_backend__code_gen__ForwardLiveVarsBeforeGoal_13,
  MR_Word * ll_backend__code_gen__Code_14,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_54,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_55,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_56,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_57)
{
  {
    MR_bool ll_backend__code_gen__succeeded;

    switch (MR_tag((MR_Word) ll_backend__code_gen__GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__code_gen__Goal_24 = (MR_Word) MR_body(((MR_Word) ll_backend__code_gen__GoalExpr_10), (MR_Integer) 0);

          {
            ll_backend__ite_gen__generate_negation_8_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Goal_24, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__code_gen__Uni_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));
          MR_Word ll_backend__code_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 0)));
          MR_Word ll_backend__code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
          MR_Word ll_backend__code_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
          MR_Word ll_backend__code_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));

          {
            ll_backend__unify_gen__generate_unification_8_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Uni_20, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__code_gen__PredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 0)));
          MR_Integer ll_backend__code_gen__ProcId_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
          MR_Word ll_backend__code_gen__BuiltinState_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));
          MR_Word ll_backend__code_gen__Args_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
          MR_Word ll_backend__code_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));
          MR_Word ll_backend__code_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 5)));

          switch (ll_backend__code_gen__BuiltinState_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__call_gen__generate_builtin_9_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__PredId_43, ll_backend__code_gen__ProcId_44, ll_backend__code_gen__Args_95, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
              }
              break;
            case (MR_Integer) 1:
              {
                ll_backend__call_gen__generate_call_10_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__PredId_43, ll_backend__code_gen__ProcId_44, ll_backend__code_gen__Args_95, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__code_gen__GenericCall_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word ll_backend__code_gen__Args_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word ll_backend__code_gen__Modes_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));
              MR_Word ll_backend__code_gen__MaybeRegTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));
              MR_Word ll_backend__code_gen__Det_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 5)));

              {
                ll_backend__call_gen__generate_generic_call_12_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__GenericCall_38, ll_backend__code_gen__Args_39, ll_backend__code_gen__Modes_40, ll_backend__code_gen__MaybeRegTypes_41, ll_backend__code_gen__Det_42, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__code_gen__Attributes_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word ll_backend__code_gen__ExtraArgs_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 5)));
              MR_Word ll_backend__code_gen__MaybeTraceRuntimeCond_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 6)));
              MR_Word ll_backend__code_gen__PragmaCode_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 7)));
              MR_Word ll_backend__code_gen__Lang_52;
              MR_Word ll_backend__code_gen__Args_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));
              MR_Word ll_backend__code_gen__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Integer ll_backend__code_gen__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));

              {
                ll_backend__code_gen__Lang_52 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(ll_backend__code_gen__Attributes_48);
              }
              switch (ll_backend__code_gen__Lang_52) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Attributes_48, ll_backend__code_gen__PredId_97, ll_backend__code_gen__ProcId_98, ll_backend__code_gen__Args_96, ll_backend__code_gen__ExtraArgs_49, ll_backend__code_gen__MaybeTraceRuntimeCond_50, ll_backend__code_gen__PragmaCode_51, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 3:
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal_expr\'/9", (MR_String) "foreign code other than C");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__code_gen__ConjType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word ll_backend__code_gen__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));

              switch (ll_backend__code_gen__ConjType_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    ll_backend__par_conj_gen__generate_par_conj_8_p_0(ll_backend__code_gen__Goals_23, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__code_gen__V_89_89;

                    {
                      ll_backend__code_gen__V_89_89 = mercury__cord__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
                    {
                      ll_backend__code_gen__generate_conj_8_p_0(ll_backend__code_gen__Goals_23, ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__V_89_89, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__code_gen__Goals_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));

              {
                ll_backend__disj_gen__generate_disj_8_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Goals_94, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__code_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word ll_backend__code_gen__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word ll_backend__code_gen__CaseList_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));

              {
                ll_backend__switch_gen__generate_switch_10_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Var_29, ll_backend__code_gen__CanFail_30, ll_backend__code_gen__CaseList_31, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__code_gen__Reason_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
              MR_Word ll_backend__code_gen__SubGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word ll_backend__code_gen__TermVar_34;
              MR_Word ll_backend__code_gen__V_72_72;

              ll_backend__code_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__code_gen__Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (ll_backend__code_gen__succeeded)
                {
                  ll_backend__code_gen__TermVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 1)));
                  ll_backend__code_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 2)));
                  ll_backend__code_gen__succeeded = (ll_backend__code_gen__V_72_72 == (MR_Integer) 1);
                }
              if (ll_backend__code_gen__succeeded)
                {
                  {
                    ll_backend__unify_gen__generate_ground_term_6_p_0(ll_backend__code_gen__TermVar_34, ll_backend__code_gen__SubGoal_33, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
                  }
                  {
                    *ll_backend__code_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                }
              else
                {
                  MR_Word ll_backend__code_gen__LCVar_35;
                  MR_Word ll_backend__code_gen__LCSVar_36;
                  MR_Word ll_backend__code_gen__UseParentStack_37;

                  ll_backend__code_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__code_gen__Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (ll_backend__code_gen__succeeded)
                    {
                      ll_backend__code_gen__LCVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 1)));
                      ll_backend__code_gen__LCSVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 2)));
                      ll_backend__code_gen__UseParentStack_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 3)));
                      {
                        ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0(ll_backend__code_gen__SubGoal_33, ll_backend__code_gen__LCVar_35, ll_backend__code_gen__LCSVar_36, ll_backend__code_gen__UseParentStack_37, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
                      }
                    }
                  else
                    {
                      ll_backend__commit_gen__generate_scope_10_p_0(ll_backend__code_gen__Reason_32, ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__ForwardLiveVarsBeforeGoal_13, ll_backend__code_gen__SubGoal_33, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
                    }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__code_gen__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
              MR_Word ll_backend__code_gen__Then_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));
              MR_Word ll_backend__code_gen__Else_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));
              MR_Word ll_backend__code_gen___Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));

              {
                ll_backend__ite_gen__generate_ite_10_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Cond_26, ll_backend__code_gen__Then_27, ll_backend__code_gen__Else_28, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal_expr\'/9", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(
  MR_Word ll_backend__code_gen__ProcInfo_3)
{
  {
    MR_bool ll_backend__code_gen__succeeded;
    MR_Word ll_backend__code_gen__DeepSaveVars_4;
    MR_Word ll_backend__code_gen__MaybeDeepProfInfo_5;
    MR_Word ll_backend__code_gen__DeepLayout_8;
    MR_Word ll_backend__code_gen__DeepProfInfo_6;
    MR_Word ll_backend__code_gen__MaybeDeepLayout_7;
    MR_Word ll_backend__code_gen__V_24_24;
    MR_Word ll_backend__code_gen__V_25_25;

    {
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__code_gen__ProcInfo_3, &ll_backend__code_gen__MaybeDeepProfInfo_5);
    }
    ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__MaybeDeepProfInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__code_gen__succeeded)
      {
        ll_backend__code_gen__DeepProfInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeDeepProfInfo_5, (MR_Integer) 0)));
        ll_backend__code_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepProfInfo_6, (MR_Integer) 0)));
        ll_backend__code_gen__MaybeDeepLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepProfInfo_6, (MR_Integer) 1)));
        ll_backend__code_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepProfInfo_6, (MR_Integer) 2)));
        ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__MaybeDeepLayout_7)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__code_gen__succeeded)
          ll_backend__code_gen__DeepLayout_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeDeepLayout_7, (MR_Integer) 0)));
      }
    if (ll_backend__code_gen__succeeded)
      {
        MR_Word ll_backend__code_gen__ExcpVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepLayout_8, (MR_Integer) 1)));
        MR_Word ll_backend__code_gen__TopCSDVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__ExcpVars_9, (MR_Integer) 0)));
        MR_Word ll_backend__code_gen__MiddleCSDVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__ExcpVars_9, (MR_Integer) 1)));
        MR_Word ll_backend__code_gen__MaybeOldOutermostVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__ExcpVars_9, (MR_Integer) 2)));
        MR_Word ll_backend__code_gen__StackSlots_13;
        MR_Word ll_backend__code_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepLayout_8, (MR_Integer) 0)));
        MR_Word ll_backend__code_gen__V_14_14;
        MR_Box ll_backend__code_gen__conv0_V_14_14;

        {
          hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_gen__ProcInfo_3, &ll_backend__code_gen__StackSlots_13);
        }
        {
          ll_backend__code_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__code_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__code_gen__StackSlots_13, ((MR_Box) (ll_backend__code_gen__TopCSDVar_10)), &ll_backend__code_gen__conv0_V_14_14);
        }
        if (ll_backend__code_gen__succeeded)
          {
            ll_backend__code_gen__V_14_14 = ((MR_Word) ll_backend__code_gen__conv0_V_14_14);
            ll_backend__code_gen__succeeded = MR_TRUE;
          }
        if (ll_backend__code_gen__succeeded)
          if ((ll_backend__code_gen__MaybeOldOutermostVar_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word ll_backend__code_gen__V_16_16;

              {
                ll_backend__code_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_16_16, 0) = ((MR_Box) (ll_backend__code_gen__MiddleCSDVar_11));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__code_gen__DeepSaveVars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 0) = ((MR_Box) (ll_backend__code_gen__TopCSDVar_10));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 1) = ((MR_Box) (ll_backend__code_gen__V_16_16));
              }
            }
          else
            {
              MR_Word ll_backend__code_gen__OldOutermostVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeOldOutermostVar_12, (MR_Integer) 0)));
              MR_Word ll_backend__code_gen__V_18_18;
              MR_Word ll_backend__code_gen__V_19_19;

              {
                ll_backend__code_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_19_19, 0) = ((MR_Box) (ll_backend__code_gen__OldOutermostVar_15));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__code_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_18_18, 0) = ((MR_Box) (ll_backend__code_gen__MiddleCSDVar_11));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_18_18, 1) = ((MR_Box) (ll_backend__code_gen__V_19_19));
              }
              {
                ll_backend__code_gen__DeepSaveVars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 0) = ((MR_Box) (ll_backend__code_gen__TopCSDVar_10));
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 1) = ((MR_Box) (ll_backend__code_gen__V_18_18));
              }
            }
        else
          ll_backend__code_gen__DeepSaveVars_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "function \140ll_backend.code_gen.compute_deep_save_excp_vars\'/1", (MR_String) "inconsistent proc_info");
        }
      }
    return ll_backend__code_gen__DeepSaveVars_4;
  }
}

void MR_CALL 
ll_backend__code_gen__generate_goal_7_p_0(
  MR_Word ll_backend__code_gen__ContextModel_8,
  MR_Word ll_backend__code_gen__Goal_9,
  MR_Word * ll_backend__code_gen__Code_10,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_34,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_35,
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_36,
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_37)
{
  {
    MR_bool ll_backend__code_gen__succeeded;
    MR_Word ll_backend__code_gen__ForwardLiveVarsBeforeGoal_17;
    MR_Word ll_backend__code_gen__GoalExpr_18;
    MR_Word ll_backend__code_gen__GoalInfo_19;
    MR_Word ll_backend__code_gen__HasSubGoals_20;
    MR_Word ll_backend__code_gen__InstMap_21;
    MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_44_44;

    {
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CLD_0_36, &ll_backend__code_gen__ForwardLiveVarsBeforeGoal_17);
    }
    ll_backend__code_gen__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__Goal_9, (MR_Integer) 0)));
    ll_backend__code_gen__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__Goal_9, (MR_Integer) 1)));
    {
      ll_backend__code_gen__HasSubGoals_20 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(ll_backend__code_gen__GoalExpr_18);
    }
    {
      ll_backend__code_loc_dep__pre_goal_update_4_p_0(ll_backend__code_gen__GoalInfo_19, ll_backend__code_gen__HasSubGoals_20, ll_backend__code_gen__STATE_VARIABLE_CLD_0_36, &ll_backend__code_gen__STATE_VARIABLE_CLD_44_44);
    }
    {
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CLD_44_44, &ll_backend__code_gen__InstMap_21);
    }
    {
      ll_backend__code_gen__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(ll_backend__code_gen__InstMap_21);
    }
    if (ll_backend__code_gen__succeeded)
      {
        MR_Word ll_backend__code_gen__CodeModel_22;
        MR_Word ll_backend__code_gen__GoalCode_23;
        MR_Word ll_backend__code_gen__Features_24;
        MR_Word ll_backend__code_gen__ProcInfo_25;
        MR_Word ll_backend__code_gen__CodeUptoTip_30;
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_52_52;
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_56_56;
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_59_59;
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_60_60;
        MR_Word ll_backend__code_gen__CallTableVar_27;
        MR_Word ll_backend__code_gen__TypeCtorInfo_94_94;
        MR_Word ll_backend__code_gen__MaybeCallTableVar_26;
        MR_Word ll_backend__code_gen__V_54_54;
        MR_Word ll_backend__code_gen__V_83_83;
        MR_Word ll_backend__code_gen__V_84_84;
        MR_Word ll_backend__code_gen__V_28_28;

        {
          ll_backend__code_gen__CodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__code_gen__GoalInfo_19);
        }
        switch (ll_backend__code_gen__CodeModel_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 2:
            switch (ll_backend__code_gen__ContextModel_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal\'/7", (MR_String) "nondet model in det/semidet context");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (ll_backend__code_gen__ContextModel_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal\'/7", (MR_String) "semidet model in det context");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
            break;
        }
        {
          ll_backend__code_gen__generate_goal_expr_9_p_0(ll_backend__code_gen__GoalExpr_18, ll_backend__code_gen__GoalInfo_19, ll_backend__code_gen__CodeModel_22, ll_backend__code_gen__ForwardLiveVarsBeforeGoal_17, &ll_backend__code_gen__GoalCode_23, ll_backend__code_gen__STATE_VARIABLE_CI_0_34, ll_backend__code_gen__STATE_VARIABLE_CI_35, ll_backend__code_gen__STATE_VARIABLE_CLD_44_44, &ll_backend__code_gen__STATE_VARIABLE_CLD_52_52);
        }
        {
          ll_backend__code_gen__Features_24 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__code_gen__GoalInfo_19);
        }
        {
          ll_backend__code_info__get_proc_info_2_p_0(*ll_backend__code_gen__STATE_VARIABLE_CI_35, &ll_backend__code_gen__ProcInfo_25);
        }
        {
          ll_backend__code_gen__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 5)), ll_backend__code_gen__Features_24);
        }
        if (ll_backend__code_gen__succeeded)
          {
            {
              ll_backend__code_info__get_proc_info_2_p_0(*ll_backend__code_gen__STATE_VARIABLE_CI_35, &ll_backend__code_gen__V_83_83);
            }
            {
              ll_backend__code_gen__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__code_gen__ProcInfo_25, ll_backend__code_gen__V_83_83);
            }
            if (ll_backend__code_gen__succeeded)
              {
                {
                  hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__code_gen__ProcInfo_25, &ll_backend__code_gen__MaybeCallTableVar_26);
                }
                ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__MaybeCallTableVar_26)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__code_gen__succeeded)
                  {
                    ll_backend__code_gen__CallTableVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeCallTableVar_26, (MR_Integer) 0)));
                    {
                      ll_backend__code_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_54_54, 0) = NULL;
                    }
                    {
                      ll_backend__code_info__get_maybe_trace_info_2_p_0(*ll_backend__code_gen__STATE_VARIABLE_CI_35, &ll_backend__code_gen__V_84_84);
                    }
                    ll_backend__code_gen__TypeCtorInfo_94_94 = (MR_Word) &ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0;
                    {
                      ll_backend__code_gen__succeeded = ll_backend__code_gen____Unify____maybe__maybe_1_1(ll_backend__code_gen__TypeCtorInfo_94_94, ll_backend__code_gen__V_54_54, ll_backend__code_gen__V_84_84);
                    }
                  }
              }
          }
        if (ll_backend__code_gen__succeeded)
          {
            MR_Word ll_backend__code_gen__TipSaveCode_29;
            MR_Word ll_backend__code_gen__V_55_55;

            {
              ll_backend__code_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_55_55, 0) = ((MR_Box) (ll_backend__code_gen__CallTableVar_27));
              MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__code_gen__V_55_55, &ll_backend__code_gen__TipSaveCode_29, *ll_backend__code_gen__STATE_VARIABLE_CI_35, ll_backend__code_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__code_gen__STATE_VARIABLE_CLD_56_56);
            }
            {
              ll_backend__code_gen__CodeUptoTip_30 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_gen__GoalCode_23, ll_backend__code_gen__TipSaveCode_29);
            }
          }
        else
          {
            ll_backend__code_gen__CodeUptoTip_30 = ll_backend__code_gen__GoalCode_23;
            ll_backend__code_gen__STATE_VARIABLE_CLD_56_56 = ll_backend__code_gen__STATE_VARIABLE_CLD_52_52;
          }
        {
          ll_backend__code_gen__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 7)), ll_backend__code_gen__Features_24);
        }
        if (ll_backend__code_gen__succeeded)
          {
            MR_Word ll_backend__code_gen__DeepSaveVars_31;
            MR_Word ll_backend__code_gen__DeepSaveCode_32;

            {
              ll_backend__code_gen__DeepSaveVars_31 = ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(ll_backend__code_gen__ProcInfo_25);
            }
            {
              ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__code_gen__DeepSaveVars_31, &ll_backend__code_gen__DeepSaveCode_32, *ll_backend__code_gen__STATE_VARIABLE_CI_35, ll_backend__code_gen__STATE_VARIABLE_CLD_56_56, &ll_backend__code_gen__STATE_VARIABLE_CLD_59_59);
            }
            {
              *ll_backend__code_gen__Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_gen__CodeUptoTip_30, ll_backend__code_gen__DeepSaveCode_32);
            }
          }
        else
          {
            *ll_backend__code_gen__Code_10 = ll_backend__code_gen__CodeUptoTip_30;
            ll_backend__code_gen__STATE_VARIABLE_CLD_59_59 = ll_backend__code_gen__STATE_VARIABLE_CLD_56_56;
          }
        {
          ll_backend__code_loc_dep__set_instmap_3_p_0(ll_backend__code_gen__InstMap_21, ll_backend__code_gen__STATE_VARIABLE_CLD_59_59, &ll_backend__code_gen__STATE_VARIABLE_CLD_60_60);
        }
        {
          ll_backend__code_loc_dep__post_goal_update_4_p_0(ll_backend__code_gen__GoalInfo_19, *ll_backend__code_gen__STATE_VARIABLE_CI_35, ll_backend__code_gen__STATE_VARIABLE_CLD_60_60, ll_backend__code_gen__STATE_VARIABLE_CLD_37);
        }
      }
    else
      {
        {
          *ll_backend__code_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__code_gen__STATE_VARIABLE_CLD_37 = ll_backend__code_gen__STATE_VARIABLE_CLD_44_44;
        *ll_backend__code_gen__STATE_VARIABLE_CI_35 = ll_backend__code_gen__STATE_VARIABLE_CI_0_34;
      }
  }
}

void mercury__ll_backend__code_gen__init(void)
{
}

void mercury__ll_backend__code_gen__init_type_tables(void)
{
}

void mercury__ll_backend__code_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__code_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.code_gen. */
