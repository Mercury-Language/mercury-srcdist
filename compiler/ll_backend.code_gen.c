/*
** Automatically generated from `code_gen.m'
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
#include "string.format.mih"
#include "string.parse_util.mih"




#line 344 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_conj_inner_10_p_0(
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__HeadVar__1_1,
#line 344 "code_gen.m"
  MR_Integer ll_backend__code_gen__N_2,
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_3,
#line 344 "code_gen.m"
  MR_Word * ll_backend__code_gen__HeadVar__4_4,
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_5,
#line 344 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_6,
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_7,
#line 344 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_8,
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_9,
#line 344 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_10);

#line 334 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_conj_8_p_0(
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__HeadVar__1_1,
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_2,
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_3,
#line 334 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_4,
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_5,
#line 334 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_6,
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_7,
#line 334 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_8);

#line 234 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_goal_expr_9_p_0(
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__GoalExpr_10,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__GoalInfo_11,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_12,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__ForwardLiveVarsBeforeGoal_13,
#line 234 "code_gen.m"
  MR_Word * ll_backend__code_gen__Code_14,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_54,
#line 234 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_55,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_56,
#line 234 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_57);

#line 202 "code_gen.m"
static MR_Word MR_CALL 
ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(
#line 202 "code_gen.m"
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



#line 344 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_conj_inner_10_p_0(
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__HeadVar__1_1,
#line 344 "code_gen.m"
  MR_Integer ll_backend__code_gen__N_2,
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_3,
#line 344 "code_gen.m"
  MR_Word * ll_backend__code_gen__HeadVar__4_4,
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_5,
#line 344 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_6,
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_7,
#line 344 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_8,
#line 344 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_9,
#line 344 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_10)
#line 344 "code_gen.m"
{
#line 348 "code_gen.m"
  while (MR_TRUE)
#line 348 "code_gen.m"
    {
#line 348 "code_gen.m"
      /* tailcall optimized into a loop */
#line 348 "code_gen.m"
      {
#line 348 "code_gen.m"
        MR_bool ll_backend__code_gen__succeeded;

#line 348 "code_gen.m"
        if ((ll_backend__code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "code_gen.m"
          {
#line 348 "code_gen.m"
            *ll_backend__code_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_CLD_10 = ll_backend__code_gen__STATE_VARIABLE_CLD_0_9;
#line 348 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_CI_8 = ll_backend__code_gen__STATE_VARIABLE_CI_0_7;
#line 348 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_Code_6 = ll_backend__code_gen__STATE_VARIABLE_Code_0_5;
#line 348 "code_gen.m"
          }
#line 348 "code_gen.m"
        else
#line 350 "code_gen.m"
          {
#line 350 "code_gen.m"
            MR_Word ll_backend__code_gen__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 350 "code_gen.m"
            MR_Word ll_backend__code_gen__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 1)));

#line 351 "code_gen.m"
            ll_backend__code_gen__succeeded = (ll_backend__code_gen__N_2 > (MR_Integer) 0);
#line 361 "code_gen.m"
            if (ll_backend__code_gen__succeeded)
#line 352 "code_gen.m"
              {
#line 352 "code_gen.m"
                MR_Word ll_backend__code_gen__GoalCode_30;
#line 352 "code_gen.m"
                MR_Word ll_backend__code_gen__Instmap_31;
#line 352 "code_gen.m"
                MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_39_39;
#line 352 "code_gen.m"
                MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_40_40;
#line 352 "code_gen.m"
                MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_41_41;

#line 352 "code_gen.m"
                {
#line 352 "code_gen.m"
                  ll_backend__code_gen__generate_goal_7_p_0(ll_backend__code_gen__CodeModel_3, ll_backend__code_gen__Goal_22, &ll_backend__code_gen__GoalCode_30, ll_backend__code_gen__STATE_VARIABLE_CI_0_7, &ll_backend__code_gen__STATE_VARIABLE_CI_39_39, ll_backend__code_gen__STATE_VARIABLE_CLD_0_9, &ll_backend__code_gen__STATE_VARIABLE_CLD_40_40);
                }
#line 353 "code_gen.m"
                {
#line 353 "code_gen.m"
                  ll_backend__code_gen__STATE_VARIABLE_Code_41_41 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_gen__STATE_VARIABLE_Code_0_5, ll_backend__code_gen__GoalCode_30);
                }
#line 354 "code_gen.m"
                {
#line 354 "code_gen.m"
                  ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CLD_40_40, &ll_backend__code_gen__Instmap_31);
                }
#line 355 "code_gen.m"
                {
#line 355 "code_gen.m"
                  ll_backend__code_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__code_gen__Instmap_31);
                }
#line 357 "code_gen.m"
                if (ll_backend__code_gen__succeeded)
#line 356 "code_gen.m"
                  {
#line 356 "code_gen.m"
                    *ll_backend__code_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "code_gen.m"
                    *ll_backend__code_gen__STATE_VARIABLE_CLD_10 = ll_backend__code_gen__STATE_VARIABLE_CLD_40_40;
#line 356 "code_gen.m"
                    *ll_backend__code_gen__STATE_VARIABLE_CI_8 = ll_backend__code_gen__STATE_VARIABLE_CI_39_39;
#line 356 "code_gen.m"
                    *ll_backend__code_gen__STATE_VARIABLE_Code_6 = ll_backend__code_gen__STATE_VARIABLE_Code_41_41;
#line 356 "code_gen.m"
                  }
#line 357 "code_gen.m"
                else
#line 358 "code_gen.m"
                  {
#line 358 "code_gen.m"
                    MR_Integer ll_backend__code_gen__V_42_42 = (ll_backend__code_gen__N_2 - (MR_Integer) 1);

#line 358 "code_gen.m"
                    /* direct tailcall eliminated */
#line 358 "code_gen.m"
                    {
#line 358 "code_gen.m"
                      MR_Word ll_backend__code_gen__HeadVar__1__tmp_copy_1 = ll_backend__code_gen__Goals_23;
#line 358 "code_gen.m"
                      MR_Integer ll_backend__code_gen__N__tmp_copy_2 = ll_backend__code_gen__V_42_42;
#line 358 "code_gen.m"
                      MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_5 = ll_backend__code_gen__STATE_VARIABLE_Code_41_41;
#line 358 "code_gen.m"
                      MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_7 = ll_backend__code_gen__STATE_VARIABLE_CI_39_39;
#line 358 "code_gen.m"
                      MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0__tmp_copy_9 = ll_backend__code_gen__STATE_VARIABLE_CLD_40_40;

#line 358 "code_gen.m"
                      ll_backend__code_gen__STATE_VARIABLE_CLD_0_9 = ll_backend__code_gen__STATE_VARIABLE_CLD_0__tmp_copy_9;
#line 358 "code_gen.m"
                      ll_backend__code_gen__STATE_VARIABLE_CI_0_7 = ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_7;
#line 358 "code_gen.m"
                      ll_backend__code_gen__STATE_VARIABLE_Code_0_5 = ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_5;
#line 358 "code_gen.m"
                      ll_backend__code_gen__N_2 = ll_backend__code_gen__N__tmp_copy_2;
#line 358 "code_gen.m"
                      ll_backend__code_gen__HeadVar__1_1 = ll_backend__code_gen__HeadVar__1__tmp_copy_1;
#line 358 "code_gen.m"
                    }
#line 358 "code_gen.m"
                    continue;
#line 358 "code_gen.m"
                  }
#line 352 "code_gen.m"
              }
#line 361 "code_gen.m"
            else
#line 362 "code_gen.m"
              {
#line 362 "code_gen.m"
                *ll_backend__code_gen__HeadVar__4_4 = ll_backend__code_gen__HeadVar__1_1;
#line 362 "code_gen.m"
                *ll_backend__code_gen__STATE_VARIABLE_CLD_10 = ll_backend__code_gen__STATE_VARIABLE_CLD_0_9;
#line 362 "code_gen.m"
                *ll_backend__code_gen__STATE_VARIABLE_CI_8 = ll_backend__code_gen__STATE_VARIABLE_CI_0_7;
#line 362 "code_gen.m"
                *ll_backend__code_gen__STATE_VARIABLE_Code_6 = ll_backend__code_gen__STATE_VARIABLE_Code_0_5;
#line 362 "code_gen.m"
              }
#line 350 "code_gen.m"
          }
#line 348 "code_gen.m"
      }
#line 348 "code_gen.m"
      break;
#line 348 "code_gen.m"
    }
#line 344 "code_gen.m"
}

#line 334 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_conj_8_p_0(
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__HeadVar__1_1,
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_2,
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_3,
#line 334 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_4,
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_5,
#line 334 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_6,
#line 334 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_7,
#line 334 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_8)
#line 334 "code_gen.m"
{
#line 338 "code_gen.m"
  while (MR_TRUE)
#line 338 "code_gen.m"
    {
#line 338 "code_gen.m"
      /* tailcall optimized into a loop */
#line 338 "code_gen.m"
      {
#line 338 "code_gen.m"
        MR_bool ll_backend__code_gen__succeeded;

#line 338 "code_gen.m"
        if ((ll_backend__code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "code_gen.m"
          {
#line 338 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_CLD_8 = ll_backend__code_gen__STATE_VARIABLE_CLD_0_7;
#line 338 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_CI_6 = ll_backend__code_gen__STATE_VARIABLE_CI_0_5;
#line 338 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_Code_4 = ll_backend__code_gen__STATE_VARIABLE_Code_0_3;
#line 338 "code_gen.m"
          }
#line 338 "code_gen.m"
        else
#line 339 "code_gen.m"
          {
#line 339 "code_gen.m"
            MR_Word ll_backend__code_gen__LeftOverGoals_26;
#line 339 "code_gen.m"
            MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_34_34;
#line 339 "code_gen.m"
            MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_35_35;
#line 339 "code_gen.m"
            MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_36_36;

#line 340 "code_gen.m"
            {
#line 340 "code_gen.m"
              ll_backend__code_gen__generate_conj_inner_10_p_0(ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 1000, ll_backend__code_gen__CodeModel_2, &ll_backend__code_gen__LeftOverGoals_26, ll_backend__code_gen__STATE_VARIABLE_Code_0_3, &ll_backend__code_gen__STATE_VARIABLE_Code_34_34, ll_backend__code_gen__STATE_VARIABLE_CI_0_5, &ll_backend__code_gen__STATE_VARIABLE_CI_35_35, ll_backend__code_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__code_gen__STATE_VARIABLE_CLD_36_36);
            }
#line 342 "code_gen.m"
            /* direct tailcall eliminated */
#line 342 "code_gen.m"
            {
#line 342 "code_gen.m"
              MR_Word ll_backend__code_gen__HeadVar__1__tmp_copy_1 = ll_backend__code_gen__LeftOverGoals_26;
#line 342 "code_gen.m"
              MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_3 = ll_backend__code_gen__STATE_VARIABLE_Code_34_34;
#line 342 "code_gen.m"
              MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_5 = ll_backend__code_gen__STATE_VARIABLE_CI_35_35;
#line 342 "code_gen.m"
              MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0__tmp_copy_7 = ll_backend__code_gen__STATE_VARIABLE_CLD_36_36;

#line 342 "code_gen.m"
              ll_backend__code_gen__STATE_VARIABLE_CLD_0_7 = ll_backend__code_gen__STATE_VARIABLE_CLD_0__tmp_copy_7;
#line 342 "code_gen.m"
              ll_backend__code_gen__STATE_VARIABLE_CI_0_5 = ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_5;
#line 342 "code_gen.m"
              ll_backend__code_gen__STATE_VARIABLE_Code_0_3 = ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_3;
#line 342 "code_gen.m"
              ll_backend__code_gen__HeadVar__1_1 = ll_backend__code_gen__HeadVar__1__tmp_copy_1;
#line 342 "code_gen.m"
            }
#line 342 "code_gen.m"
            continue;
#line 339 "code_gen.m"
          }
#line 338 "code_gen.m"
      }
#line 338 "code_gen.m"
      break;
#line 338 "code_gen.m"
    }
#line 334 "code_gen.m"
}

#line 234 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_goal_expr_9_p_0(
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__GoalExpr_10,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__GoalInfo_11,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_12,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__ForwardLiveVarsBeforeGoal_13,
#line 234 "code_gen.m"
  MR_Word * ll_backend__code_gen__Code_14,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_54,
#line 234 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_55,
#line 234 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_56,
#line 234 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_57)
#line 234 "code_gen.m"
{
#line 241 "code_gen.m"
  {
#line 241 "code_gen.m"
    MR_bool ll_backend__code_gen__succeeded;

#line 241 "code_gen.m"
#line 241 "code_gen.m"
    switch (MR_tag((MR_Word) ll_backend__code_gen__GoalExpr_10)) {
#line 241 "code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 241 "code_gen.m"
      case (MR_Integer) 0:
#line 258 "code_gen.m"
        {
#line 258 "code_gen.m"
          MR_Word ll_backend__code_gen__Goal_24 = (MR_Word) MR_body(((MR_Word) ll_backend__code_gen__GoalExpr_10), (MR_Integer) 0);

#line 259 "code_gen.m"
          {
#line 259 "code_gen.m"
            ll_backend__ite_gen__generate_negation_8_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Goal_24, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 259 "code_gen.m"
            return;
          }
#line 258 "code_gen.m"
        }
#line 241 "code_gen.m"
        break;
#line 241 "code_gen.m"
      case (MR_Integer) 1:
#line 241 "code_gen.m"
        {
#line 241 "code_gen.m"
          MR_Word ll_backend__code_gen__Uni_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 241 "code_gen.m"
          MR_Word ll_backend__code_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 0)));
#line 241 "code_gen.m"
          MR_Word ll_backend__code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 241 "code_gen.m"
          MR_Word ll_backend__code_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 241 "code_gen.m"
          MR_Word ll_backend__code_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));

#line 242 "code_gen.m"
          {
#line 242 "code_gen.m"
            ll_backend__unify_gen__generate_unification_8_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Uni_20, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 242 "code_gen.m"
            return;
          }
#line 241 "code_gen.m"
        }
#line 241 "code_gen.m"
        break;
#line 241 "code_gen.m"
      case (MR_Integer) 2:
#line 289 "code_gen.m"
        {
#line 289 "code_gen.m"
          MR_Word ll_backend__code_gen__PredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 0)));
#line 289 "code_gen.m"
          MR_Integer ll_backend__code_gen__ProcId_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 289 "code_gen.m"
          MR_Word ll_backend__code_gen__BuiltinState_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 289 "code_gen.m"
          MR_Word ll_backend__code_gen__Args_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 289 "code_gen.m"
          MR_Word ll_backend__code_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 289 "code_gen.m"
          MR_Word ll_backend__code_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 5)));

#line 294 "code_gen.m"
#line 294 "code_gen.m"
          switch (ll_backend__code_gen__BuiltinState_45) {
#line 294 "code_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 294 "code_gen.m"
            case (MR_Integer) 0:
#line 294 "code_gen.m"
            case (MR_Integer) 1:
#line 298 "code_gen.m"
              {
#line 298 "code_gen.m"
                ll_backend__call_gen__generate_builtin_9_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__PredId_43, ll_backend__code_gen__ProcId_44, ll_backend__code_gen__Args_95, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 298 "code_gen.m"
                return;
              }
#line 294 "code_gen.m"
              break;
#line 294 "code_gen.m"
            case (MR_Integer) 2:
#line 292 "code_gen.m"
              {
#line 292 "code_gen.m"
                ll_backend__call_gen__generate_call_10_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__PredId_43, ll_backend__code_gen__ProcId_44, ll_backend__code_gen__Args_95, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 292 "code_gen.m"
                return;
              }
#line 294 "code_gen.m"
              break;
#line 294 "code_gen.m"
          }
#line 289 "code_gen.m"
        }
#line 241 "code_gen.m"
        break;
#line 241 "code_gen.m"
      case (MR_Integer) 3:
#line 241 "code_gen.m"
#line 241 "code_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 0)))) {
#line 241 "code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 241 "code_gen.m"
          case (MR_Integer) 0:
#line 285 "code_gen.m"
            {
#line 285 "code_gen.m"
              MR_Word ll_backend__code_gen__GenericCall_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 285 "code_gen.m"
              MR_Word ll_backend__code_gen__Args_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 285 "code_gen.m"
              MR_Word ll_backend__code_gen__Modes_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 285 "code_gen.m"
              MR_Word ll_backend__code_gen__MaybeRegTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 285 "code_gen.m"
              MR_Word ll_backend__code_gen__Det_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 5)));

#line 286 "code_gen.m"
              {
#line 286 "code_gen.m"
                ll_backend__call_gen__generate_generic_call_12_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__GenericCall_38, ll_backend__code_gen__Args_39, ll_backend__code_gen__Modes_40, ll_backend__code_gen__MaybeRegTypes_41, ll_backend__code_gen__Det_42, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 286 "code_gen.m"
                return;
              }
#line 285 "code_gen.m"
            }
#line 241 "code_gen.m"
            break;
#line 241 "code_gen.m"
          case (MR_Integer) 1:
#line 303 "code_gen.m"
            {
#line 303 "code_gen.m"
              MR_Word ll_backend__code_gen__Attributes_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 303 "code_gen.m"
              MR_Word ll_backend__code_gen__ExtraArgs_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 5)));
#line 303 "code_gen.m"
              MR_Word ll_backend__code_gen__MaybeTraceRuntimeCond_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 6)));
#line 303 "code_gen.m"
              MR_Word ll_backend__code_gen__PragmaCode_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 7)));
#line 303 "code_gen.m"
              MR_Word ll_backend__code_gen__Lang_52;
#line 303 "code_gen.m"
              MR_Word ll_backend__code_gen__Args_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 303 "code_gen.m"
              MR_Word ll_backend__code_gen__PredId_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 303 "code_gen.m"
              MR_Integer ll_backend__code_gen__ProcId_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));

#line 304 "code_gen.m"
              {
#line 304 "code_gen.m"
                ll_backend__code_gen__Lang_52 = parse_tree__prog_data__get_foreign_language_1_f_0(ll_backend__code_gen__Attributes_48);
              }
#line 310 "code_gen.m"
#line 310 "code_gen.m"
              switch (ll_backend__code_gen__Lang_52) {
#line 310 "code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 310 "code_gen.m"
                case (MR_Integer) 0:
#line 307 "code_gen.m"
                  {
#line 307 "code_gen.m"
                    ll_backend__pragma_c_gen__generate_foreign_proc_code_14_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Attributes_48, ll_backend__code_gen__PredId_97, ll_backend__code_gen__ProcId_98, ll_backend__code_gen__Args_96, ll_backend__code_gen__ExtraArgs_49, ll_backend__code_gen__MaybeTraceRuntimeCond_50, ll_backend__code_gen__PragmaCode_51, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 307 "code_gen.m"
                    return;
                  }
#line 310 "code_gen.m"
                  break;
#line 310 "code_gen.m"
                case (MR_Integer) 1:
#line 310 "code_gen.m"
                case (MR_Integer) 3:
#line 310 "code_gen.m"
                case (MR_Integer) 2:
#line 314 "code_gen.m"
                  {
#line 315 "code_gen.m"
                    {
#line 315 "code_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal_expr\'/9", (MR_String) "foreign code other than C");
#line 315 "code_gen.m"
                      return;
                    }
#line 314 "code_gen.m"
                  }
#line 310 "code_gen.m"
                  break;
#line 310 "code_gen.m"
              }
#line 303 "code_gen.m"
            }
#line 241 "code_gen.m"
            break;
#line 241 "code_gen.m"
          case (MR_Integer) 2:
#line 245 "code_gen.m"
            {
#line 245 "code_gen.m"
              MR_Word ll_backend__code_gen__ConjType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 245 "code_gen.m"
              MR_Word ll_backend__code_gen__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));

#line 249 "code_gen.m"
#line 249 "code_gen.m"
              switch (ll_backend__code_gen__ConjType_22) {
#line 249 "code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 249 "code_gen.m"
                case (MR_Integer) 1:
#line 251 "code_gen.m"
                  {
#line 251 "code_gen.m"
                    ll_backend__par_conj_gen__generate_par_conj_8_p_0(ll_backend__code_gen__Goals_23, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 251 "code_gen.m"
                    return;
                  }
#line 249 "code_gen.m"
                  break;
#line 249 "code_gen.m"
                case (MR_Integer) 0:
#line 247 "code_gen.m"
                  {
#line 247 "code_gen.m"
                    MR_Word ll_backend__code_gen__V_89_89;

#line 248 "code_gen.m"
                    {
#line 248 "code_gen.m"
                      ll_backend__code_gen__V_89_89 = mercury__cord__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 248 "code_gen.m"
                    {
#line 248 "code_gen.m"
                      ll_backend__code_gen__generate_conj_8_p_0(ll_backend__code_gen__Goals_23, ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__V_89_89, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 248 "code_gen.m"
                      return;
                    }
#line 247 "code_gen.m"
                  }
#line 249 "code_gen.m"
                  break;
#line 249 "code_gen.m"
              }
#line 245 "code_gen.m"
            }
#line 241 "code_gen.m"
            break;
#line 241 "code_gen.m"
          case (MR_Integer) 3:
#line 255 "code_gen.m"
            {
#line 255 "code_gen.m"
              MR_Word ll_backend__code_gen__Goals_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));

#line 256 "code_gen.m"
              {
#line 256 "code_gen.m"
                ll_backend__disj_gen__generate_disj_8_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Goals_94, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 256 "code_gen.m"
                return;
              }
#line 255 "code_gen.m"
            }
#line 241 "code_gen.m"
            break;
#line 241 "code_gen.m"
          case (MR_Integer) 4:
#line 265 "code_gen.m"
            {
#line 265 "code_gen.m"
              MR_Word ll_backend__code_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 265 "code_gen.m"
              MR_Word ll_backend__code_gen__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 265 "code_gen.m"
              MR_Word ll_backend__code_gen__CaseList_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));

#line 266 "code_gen.m"
              {
#line 266 "code_gen.m"
                ll_backend__switch_gen__generate_switch_10_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Var_29, ll_backend__code_gen__CanFail_30, ll_backend__code_gen__CaseList_31, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 266 "code_gen.m"
                return;
              }
#line 265 "code_gen.m"
            }
#line 241 "code_gen.m"
            break;
#line 241 "code_gen.m"
          case (MR_Integer) 5:
#line 269 "code_gen.m"
            {
#line 269 "code_gen.m"
              MR_Word ll_backend__code_gen__Reason_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));
#line 269 "code_gen.m"
              MR_Word ll_backend__code_gen__SubGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 275 "code_gen.m"
              MR_Word ll_backend__code_gen__TermVar_34;
#line 271 "code_gen.m"
              MR_Word ll_backend__code_gen__V_72_72;

#line 271 "code_gen.m"
              ll_backend__code_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__code_gen__Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 271 "code_gen.m"
              if (ll_backend__code_gen__succeeded)
#line 271 "code_gen.m"
                {
#line 271 "code_gen.m"
                  ll_backend__code_gen__TermVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 1)));
#line 271 "code_gen.m"
                  ll_backend__code_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 2)));
#line 271 "code_gen.m"
                  ll_backend__code_gen__succeeded = (ll_backend__code_gen__V_72_72 == (MR_Integer) 1);
#line 271 "code_gen.m"
                }
#line 275 "code_gen.m"
              if (ll_backend__code_gen__succeeded)
#line 273 "code_gen.m"
                {
#line 273 "code_gen.m"
                  {
#line 273 "code_gen.m"
                    ll_backend__unify_gen__generate_ground_term_6_p_0(ll_backend__code_gen__TermVar_34, ll_backend__code_gen__SubGoal_33, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
                  }
#line 274 "code_gen.m"
                  {
#line 274 "code_gen.m"
                    *ll_backend__code_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 273 "code_gen.m"
                }
#line 275 "code_gen.m"
              else
#line 280 "code_gen.m"
                {
#line 280 "code_gen.m"
                  MR_Word ll_backend__code_gen__LCVar_35;
#line 280 "code_gen.m"
                  MR_Word ll_backend__code_gen__LCSVar_36;
#line 280 "code_gen.m"
                  MR_Word ll_backend__code_gen__UseParentStack_37;

#line 276 "code_gen.m"
                  ll_backend__code_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__code_gen__Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 276 "code_gen.m"
                  if (ll_backend__code_gen__succeeded)
#line 276 "code_gen.m"
                    {
#line 276 "code_gen.m"
                      ll_backend__code_gen__LCVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 1)));
#line 276 "code_gen.m"
                      ll_backend__code_gen__LCSVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 2)));
#line 276 "code_gen.m"
                      ll_backend__code_gen__UseParentStack_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_32, (MR_Integer) 3)));
#line 278 "code_gen.m"
                      {
#line 278 "code_gen.m"
                        ll_backend__par_conj_gen__generate_lc_spawn_off_9_p_0(ll_backend__code_gen__SubGoal_33, ll_backend__code_gen__LCVar_35, ll_backend__code_gen__LCSVar_36, ll_backend__code_gen__UseParentStack_37, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 278 "code_gen.m"
                        return;
                      }
#line 276 "code_gen.m"
                    }
#line 276 "code_gen.m"
                  else
#line 281 "code_gen.m"
                    {
#line 281 "code_gen.m"
                      ll_backend__commit_gen__generate_scope_10_p_0(ll_backend__code_gen__Reason_32, ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__ForwardLiveVarsBeforeGoal_13, ll_backend__code_gen__SubGoal_33, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 281 "code_gen.m"
                      return;
                    }
#line 280 "code_gen.m"
                }
#line 269 "code_gen.m"
            }
#line 241 "code_gen.m"
            break;
#line 241 "code_gen.m"
          case (MR_Integer) 6:
#line 261 "code_gen.m"
            {
#line 261 "code_gen.m"
              MR_Word ll_backend__code_gen__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 2)));
#line 261 "code_gen.m"
              MR_Word ll_backend__code_gen__Then_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 3)));
#line 261 "code_gen.m"
              MR_Word ll_backend__code_gen__Else_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 4)));
#line 261 "code_gen.m"
              MR_Word ll_backend__code_gen___Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_10, (MR_Integer) 1)));

#line 262 "code_gen.m"
              {
#line 262 "code_gen.m"
                ll_backend__ite_gen__generate_ite_10_p_0(ll_backend__code_gen__CodeModel_12, ll_backend__code_gen__Cond_26, ll_backend__code_gen__Then_27, ll_backend__code_gen__Else_28, ll_backend__code_gen__GoalInfo_11, ll_backend__code_gen__Code_14, ll_backend__code_gen__STATE_VARIABLE_CI_0_54, ll_backend__code_gen__STATE_VARIABLE_CI_55, ll_backend__code_gen__STATE_VARIABLE_CLD_0_56, ll_backend__code_gen__STATE_VARIABLE_CLD_57);
#line 262 "code_gen.m"
                return;
              }
#line 261 "code_gen.m"
            }
#line 241 "code_gen.m"
            break;
#line 241 "code_gen.m"
          case (MR_Integer) 7:
#line 318 "code_gen.m"
            {
#line 320 "code_gen.m"
              {
#line 320 "code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal_expr\'/9", (MR_String) "shorthand");
#line 320 "code_gen.m"
                return;
              }
#line 318 "code_gen.m"
            }
#line 241 "code_gen.m"
            break;
#line 241 "code_gen.m"
        }
#line 241 "code_gen.m"
        break;
#line 241 "code_gen.m"
    }
#line 241 "code_gen.m"
  }
#line 234 "code_gen.m"
}

#line 202 "code_gen.m"
static MR_Word MR_CALL 
ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(
#line 202 "code_gen.m"
  MR_Word ll_backend__code_gen__ProcInfo_3)
#line 202 "code_gen.m"
{
#line 204 "code_gen.m"
  {
#line 204 "code_gen.m"
    MR_bool ll_backend__code_gen__succeeded;
#line 204 "code_gen.m"
    MR_Word ll_backend__code_gen__DeepSaveVars_4;
#line 204 "code_gen.m"
    MR_Word ll_backend__code_gen__MaybeDeepProfInfo_5;
#line 228 "code_gen.m"
    MR_Word ll_backend__code_gen__DeepLayout_8;
#line 207 "code_gen.m"
    MR_Word ll_backend__code_gen__DeepProfInfo_6;
#line 207 "code_gen.m"
    MR_Word ll_backend__code_gen__MaybeDeepLayout_7;
#line 208 "code_gen.m"
    MR_Word ll_backend__code_gen__V_24_24;
#line 208 "code_gen.m"
    MR_Word ll_backend__code_gen__V_25_25;

#line 205 "code_gen.m"
    {
#line 205 "code_gen.m"
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__code_gen__ProcInfo_3, &ll_backend__code_gen__MaybeDeepProfInfo_5);
    }
#line 207 "code_gen.m"
    ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__MaybeDeepProfInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 207 "code_gen.m"
    if (ll_backend__code_gen__succeeded)
#line 207 "code_gen.m"
      {
#line 207 "code_gen.m"
        ll_backend__code_gen__DeepProfInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeDeepProfInfo_5, (MR_Integer) 0)));
#line 208 "code_gen.m"
        ll_backend__code_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepProfInfo_6, (MR_Integer) 0)));
#line 208 "code_gen.m"
        ll_backend__code_gen__MaybeDeepLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepProfInfo_6, (MR_Integer) 1)));
#line 208 "code_gen.m"
        ll_backend__code_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepProfInfo_6, (MR_Integer) 2)));
#line 209 "code_gen.m"
        ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__MaybeDeepLayout_7)) == (MR_mktag((MR_Integer) 1)));
#line 209 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 209 "code_gen.m"
          ll_backend__code_gen__DeepLayout_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeDeepLayout_7, (MR_Integer) 0)));
#line 207 "code_gen.m"
      }
#line 228 "code_gen.m"
    if (ll_backend__code_gen__succeeded)
#line 211 "code_gen.m"
      {
#line 211 "code_gen.m"
        MR_Word ll_backend__code_gen__ExcpVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepLayout_8, (MR_Integer) 1)));
#line 211 "code_gen.m"
        MR_Word ll_backend__code_gen__TopCSDVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__ExcpVars_9, (MR_Integer) 0)));
#line 211 "code_gen.m"
        MR_Word ll_backend__code_gen__MiddleCSDVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__ExcpVars_9, (MR_Integer) 1)));
#line 211 "code_gen.m"
        MR_Word ll_backend__code_gen__MaybeOldOutermostVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__ExcpVars_9, (MR_Integer) 2)));
#line 211 "code_gen.m"
        MR_Word ll_backend__code_gen__StackSlots_13;
#line 211 "code_gen.m"
        MR_Word ll_backend__code_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepLayout_8, (MR_Integer) 0)));
#line 215 "code_gen.m"
        MR_Word ll_backend__code_gen__V_14_14;
#line 215 "code_gen.m"
        MR_Box ll_backend__code_gen__conv0_V_14_14;

#line 214 "code_gen.m"
        {
#line 214 "code_gen.m"
          hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_gen__ProcInfo_3, &ll_backend__code_gen__StackSlots_13);
        }
#line 215 "code_gen.m"
        {
#line 215 "code_gen.m"
          ll_backend__code_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__code_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__code_gen__StackSlots_13, ((MR_Box) (ll_backend__code_gen__TopCSDVar_10)), &ll_backend__code_gen__conv0_V_14_14);
        }
#line 215 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 215 "code_gen.m"
          {
#line 215 "code_gen.m"
            ll_backend__code_gen__V_14_14 = ((MR_Word) ll_backend__code_gen__conv0_V_14_14);
#line 215 "code_gen.m"
            ll_backend__code_gen__succeeded = MR_TRUE;
#line 215 "code_gen.m"
          }
#line 225 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 221 "code_gen.m"
          if ((ll_backend__code_gen__MaybeOldOutermostVar_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "code_gen.m"
            {
#line 222 "code_gen.m"
              MR_Word ll_backend__code_gen__V_16_16;

#line 223 "code_gen.m"
              {
#line 223 "code_gen.m"
                ll_backend__code_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_16_16, 0) = ((MR_Box) (ll_backend__code_gen__MiddleCSDVar_11));
#line 223 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 223 "code_gen.m"
              }
#line 223 "code_gen.m"
              {
#line 223 "code_gen.m"
                ll_backend__code_gen__DeepSaveVars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 0) = ((MR_Box) (ll_backend__code_gen__TopCSDVar_10));
#line 223 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 1) = ((MR_Box) (ll_backend__code_gen__V_16_16));
#line 223 "code_gen.m"
              }
#line 222 "code_gen.m"
            }
#line 221 "code_gen.m"
          else
#line 219 "code_gen.m"
            {
#line 219 "code_gen.m"
              MR_Word ll_backend__code_gen__OldOutermostVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeOldOutermostVar_12, (MR_Integer) 0)));
#line 219 "code_gen.m"
              MR_Word ll_backend__code_gen__V_18_18;
#line 219 "code_gen.m"
              MR_Word ll_backend__code_gen__V_19_19;

#line 220 "code_gen.m"
              {
#line 220 "code_gen.m"
                ll_backend__code_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_19_19, 0) = ((MR_Box) (ll_backend__code_gen__OldOutermostVar_15));
#line 220 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "code_gen.m"
              }
#line 220 "code_gen.m"
              {
#line 220 "code_gen.m"
                ll_backend__code_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_18_18, 0) = ((MR_Box) (ll_backend__code_gen__MiddleCSDVar_11));
#line 220 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_18_18, 1) = ((MR_Box) (ll_backend__code_gen__V_19_19));
#line 220 "code_gen.m"
              }
#line 220 "code_gen.m"
              {
#line 220 "code_gen.m"
                ll_backend__code_gen__DeepSaveVars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 0) = ((MR_Box) (ll_backend__code_gen__TopCSDVar_10));
#line 220 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 1) = ((MR_Box) (ll_backend__code_gen__V_18_18));
#line 220 "code_gen.m"
              }
#line 219 "code_gen.m"
            }
#line 225 "code_gen.m"
        else
#line 226 "code_gen.m"
          ll_backend__code_gen__DeepSaveVars_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 211 "code_gen.m"
      }
#line 228 "code_gen.m"
    else
#line 229 "code_gen.m"
      {
#line 229 "code_gen.m"
        {
#line 229 "code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "function \140ll_backend.code_gen.compute_deep_save_excp_vars\'/1", (MR_String) "inconsistent proc_info");
        }
#line 229 "code_gen.m"
      }
#line 204 "code_gen.m"
    return ll_backend__code_gen__DeepSaveVars_4;
#line 204 "code_gen.m"
  }
#line 202 "code_gen.m"
}

#line 38 "code_gen.m"
void MR_CALL 
ll_backend__code_gen__generate_goal_7_p_0(
#line 38 "code_gen.m"
  MR_Word ll_backend__code_gen__ContextModel_8,
#line 38 "code_gen.m"
  MR_Word ll_backend__code_gen__Goal_9,
#line 38 "code_gen.m"
  MR_Word * ll_backend__code_gen__Code_10,
#line 38 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_34,
#line 38 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_35,
#line 38 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_0_36,
#line 38 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CLD_37)
#line 38 "code_gen.m"
{
#line 76 "code_gen.m"
  {
#line 76 "code_gen.m"
    MR_bool ll_backend__code_gen__succeeded;
#line 76 "code_gen.m"
    MR_Word ll_backend__code_gen__ForwardLiveVarsBeforeGoal_17;
#line 76 "code_gen.m"
    MR_Word ll_backend__code_gen__GoalExpr_18;
#line 76 "code_gen.m"
    MR_Word ll_backend__code_gen__GoalInfo_19;
#line 76 "code_gen.m"
    MR_Word ll_backend__code_gen__HasSubGoals_20;
#line 76 "code_gen.m"
    MR_Word ll_backend__code_gen__InstMap_21;
#line 76 "code_gen.m"
    MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_44_44;

#line 96 "code_gen.m"
    {
#line 96 "code_gen.m"
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CLD_0_36, &ll_backend__code_gen__ForwardLiveVarsBeforeGoal_17);
    }
#line 97 "code_gen.m"
    ll_backend__code_gen__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__Goal_9, (MR_Integer) 0)));
#line 97 "code_gen.m"
    ll_backend__code_gen__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__Goal_9, (MR_Integer) 1)));
#line 98 "code_gen.m"
    {
#line 98 "code_gen.m"
      ll_backend__code_gen__HasSubGoals_20 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(ll_backend__code_gen__GoalExpr_18);
    }
#line 99 "code_gen.m"
    {
#line 99 "code_gen.m"
      ll_backend__code_loc_dep__pre_goal_update_4_p_0(ll_backend__code_gen__GoalInfo_19, ll_backend__code_gen__HasSubGoals_20, ll_backend__code_gen__STATE_VARIABLE_CLD_0_36, &ll_backend__code_gen__STATE_VARIABLE_CLD_44_44);
    }
#line 100 "code_gen.m"
    {
#line 100 "code_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CLD_44_44, &ll_backend__code_gen__InstMap_21);
    }
#line 101 "code_gen.m"
    {
#line 101 "code_gen.m"
      ll_backend__code_gen__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(ll_backend__code_gen__InstMap_21);
    }
#line 183 "code_gen.m"
    if (ll_backend__code_gen__succeeded)
#line 102 "code_gen.m"
      {
#line 102 "code_gen.m"
        MR_Word ll_backend__code_gen__CodeModel_22;
#line 102 "code_gen.m"
        MR_Word ll_backend__code_gen__GoalCode_23;
#line 102 "code_gen.m"
        MR_Word ll_backend__code_gen__Features_24;
#line 102 "code_gen.m"
        MR_Word ll_backend__code_gen__ProcInfo_25;
#line 102 "code_gen.m"
        MR_Word ll_backend__code_gen__CodeUptoTip_30;
#line 102 "code_gen.m"
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_52_52;
#line 102 "code_gen.m"
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_56_56;
#line 102 "code_gen.m"
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_59_59;
#line 102 "code_gen.m"
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CLD_60_60;
#line 153 "code_gen.m"
        MR_Word ll_backend__code_gen__CallTableVar_27;
#line 145 "code_gen.m"
        MR_Word ll_backend__code_gen__MaybeCallTableVar_26;
#line 145 "code_gen.m"
        MR_Word ll_backend__code_gen__V_83_83;
#line 145 "code_gen.m"
        MR_Word ll_backend__code_gen__V_84_84;
#line 149 "code_gen.m"
        MR_Word ll_backend__code_gen__V_90_90;

#line 102 "code_gen.m"
        {
#line 102 "code_gen.m"
          ll_backend__code_gen__CodeModel_22 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__code_gen__GoalInfo_19);
        }
#line 107 "code_gen.m"
#line 107 "code_gen.m"
        switch (ll_backend__code_gen__CodeModel_22) {
#line 107 "code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 107 "code_gen.m"
          case (MR_Integer) 0:
#line 106 "code_gen.m"
            {
#line 106 "code_gen.m"
            }
#line 107 "code_gen.m"
            break;
#line 107 "code_gen.m"
          case (MR_Integer) 2:
#line 125 "code_gen.m"
#line 125 "code_gen.m"
            switch (ll_backend__code_gen__ContextModel_8) {
#line 125 "code_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 125 "code_gen.m"
              case (MR_Integer) 0:
#line 125 "code_gen.m"
              case (MR_Integer) 1:
#line 122 "code_gen.m"
                {
#line 123 "code_gen.m"
                  {
#line 123 "code_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal\'/7", (MR_String) "nondet model in det/semidet context");
#line 123 "code_gen.m"
                    return;
                  }
#line 122 "code_gen.m"
                }
#line 125 "code_gen.m"
                break;
#line 125 "code_gen.m"
              case (MR_Integer) 2:
#line 126 "code_gen.m"
                {
#line 126 "code_gen.m"
                }
#line 125 "code_gen.m"
                break;
#line 125 "code_gen.m"
            }
#line 107 "code_gen.m"
            break;
#line 107 "code_gen.m"
          case (MR_Integer) 1:
#line 112 "code_gen.m"
#line 112 "code_gen.m"
            switch (ll_backend__code_gen__ContextModel_8) {
#line 112 "code_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 112 "code_gen.m"
              case (MR_Integer) 0:
#line 110 "code_gen.m"
                {
#line 111 "code_gen.m"
                  {
#line 111 "code_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal\'/7", (MR_String) "semidet model in det context");
#line 111 "code_gen.m"
                    return;
                  }
#line 110 "code_gen.m"
                }
#line 112 "code_gen.m"
                break;
#line 112 "code_gen.m"
              case (MR_Integer) 2:
#line 114 "code_gen.m"
                {
#line 114 "code_gen.m"
                }
#line 112 "code_gen.m"
                break;
#line 112 "code_gen.m"
              case (MR_Integer) 1:
#line 113 "code_gen.m"
                {
#line 113 "code_gen.m"
                }
#line 112 "code_gen.m"
                break;
#line 112 "code_gen.m"
            }
#line 107 "code_gen.m"
            break;
#line 107 "code_gen.m"
        }
#line 130 "code_gen.m"
        {
#line 130 "code_gen.m"
          ll_backend__code_gen__generate_goal_expr_9_p_0(ll_backend__code_gen__GoalExpr_18, ll_backend__code_gen__GoalInfo_19, ll_backend__code_gen__CodeModel_22, ll_backend__code_gen__ForwardLiveVarsBeforeGoal_17, &ll_backend__code_gen__GoalCode_23, ll_backend__code_gen__STATE_VARIABLE_CI_0_34, ll_backend__code_gen__STATE_VARIABLE_CI_35, ll_backend__code_gen__STATE_VARIABLE_CLD_44_44, &ll_backend__code_gen__STATE_VARIABLE_CLD_52_52);
        }
#line 132 "code_gen.m"
        {
#line 132 "code_gen.m"
          ll_backend__code_gen__Features_24 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__code_gen__GoalInfo_19);
        }
#line 133 "code_gen.m"
        {
#line 133 "code_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(*ll_backend__code_gen__STATE_VARIABLE_CI_35, &ll_backend__code_gen__ProcInfo_25);
        }
#line 145 "code_gen.m"
        {
#line 145 "code_gen.m"
          ll_backend__code_gen__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 5)), ll_backend__code_gen__Features_24);
        }
#line 145 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 145 "code_gen.m"
          {
#line 146 "code_gen.m"
            {
#line 146 "code_gen.m"
              ll_backend__code_info__get_proc_info_2_p_0(*ll_backend__code_gen__STATE_VARIABLE_CI_35, &ll_backend__code_gen__V_83_83);
            }
#line 146 "code_gen.m"
            {
#line 146 "code_gen.m"
              ll_backend__code_gen__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__code_gen__ProcInfo_25, ll_backend__code_gen__V_83_83);
            }
#line 145 "code_gen.m"
            if (ll_backend__code_gen__succeeded)
#line 145 "code_gen.m"
              {
#line 147 "code_gen.m"
                {
#line 147 "code_gen.m"
                  hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__code_gen__ProcInfo_25, &ll_backend__code_gen__MaybeCallTableVar_26);
                }
#line 148 "code_gen.m"
                ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__MaybeCallTableVar_26)) == (MR_mktag((MR_Integer) 1)));
#line 148 "code_gen.m"
                if (ll_backend__code_gen__succeeded)
#line 148 "code_gen.m"
                  {
#line 148 "code_gen.m"
                    ll_backend__code_gen__CallTableVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeCallTableVar_26, (MR_Integer) 0)));
#line 149 "code_gen.m"
                    {
#line 149 "code_gen.m"
                      ll_backend__code_info__get_maybe_trace_info_2_p_0(*ll_backend__code_gen__STATE_VARIABLE_CI_35, &ll_backend__code_gen__V_84_84);
                    }
#line 149 "code_gen.m"
                    ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 149 "code_gen.m"
                    if (ll_backend__code_gen__succeeded)
#line 149 "code_gen.m"
                      ll_backend__code_gen__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_84_84, (MR_Integer) 0)));
#line 148 "code_gen.m"
                  }
#line 145 "code_gen.m"
              }
#line 145 "code_gen.m"
          }
#line 153 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 151 "code_gen.m"
          {
#line 151 "code_gen.m"
            MR_Word ll_backend__code_gen__TipSaveCode_29;
#line 151 "code_gen.m"
            MR_Word ll_backend__code_gen__V_55_55;

#line 151 "code_gen.m"
            {
#line 151 "code_gen.m"
              ll_backend__code_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "code_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_55_55, 0) = ((MR_Box) (ll_backend__code_gen__CallTableVar_27));
#line 151 "code_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "code_gen.m"
            }
#line 151 "code_gen.m"
            {
#line 151 "code_gen.m"
              ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__code_gen__V_55_55, &ll_backend__code_gen__TipSaveCode_29, *ll_backend__code_gen__STATE_VARIABLE_CI_35, ll_backend__code_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__code_gen__STATE_VARIABLE_CLD_56_56);
            }
#line 152 "code_gen.m"
            {
#line 152 "code_gen.m"
              ll_backend__code_gen__CodeUptoTip_30 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_gen__GoalCode_23, ll_backend__code_gen__TipSaveCode_29);
            }
#line 151 "code_gen.m"
          }
#line 153 "code_gen.m"
        else
#line 154 "code_gen.m"
          {
#line 154 "code_gen.m"
            ll_backend__code_gen__CodeUptoTip_30 = ll_backend__code_gen__GoalCode_23;
#line 154 "code_gen.m"
            ll_backend__code_gen__STATE_VARIABLE_CLD_56_56 = ll_backend__code_gen__STATE_VARIABLE_CLD_52_52;
#line 154 "code_gen.m"
          }
#line 171 "code_gen.m"
        {
#line 171 "code_gen.m"
          ll_backend__code_gen__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 7)), ll_backend__code_gen__Features_24);
        }
#line 175 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 172 "code_gen.m"
          {
#line 172 "code_gen.m"
            MR_Word ll_backend__code_gen__DeepSaveVars_31;
#line 172 "code_gen.m"
            MR_Word ll_backend__code_gen__DeepSaveCode_32;

#line 172 "code_gen.m"
            {
#line 172 "code_gen.m"
              ll_backend__code_gen__DeepSaveVars_31 = ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(ll_backend__code_gen__ProcInfo_25);
            }
#line 173 "code_gen.m"
            {
#line 173 "code_gen.m"
              ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(ll_backend__code_gen__DeepSaveVars_31, &ll_backend__code_gen__DeepSaveCode_32, *ll_backend__code_gen__STATE_VARIABLE_CI_35, ll_backend__code_gen__STATE_VARIABLE_CLD_56_56, &ll_backend__code_gen__STATE_VARIABLE_CLD_59_59);
            }
#line 174 "code_gen.m"
            {
#line 174 "code_gen.m"
              *ll_backend__code_gen__Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_gen__CodeUptoTip_30, ll_backend__code_gen__DeepSaveCode_32);
            }
#line 172 "code_gen.m"
          }
#line 175 "code_gen.m"
        else
#line 176 "code_gen.m"
          {
#line 176 "code_gen.m"
            *ll_backend__code_gen__Code_10 = ll_backend__code_gen__CodeUptoTip_30;
#line 176 "code_gen.m"
            ll_backend__code_gen__STATE_VARIABLE_CLD_59_59 = ll_backend__code_gen__STATE_VARIABLE_CLD_56_56;
#line 176 "code_gen.m"
          }
#line 181 "code_gen.m"
        {
#line 181 "code_gen.m"
          ll_backend__code_loc_dep__set_instmap_3_p_0(ll_backend__code_gen__InstMap_21, ll_backend__code_gen__STATE_VARIABLE_CLD_59_59, &ll_backend__code_gen__STATE_VARIABLE_CLD_60_60);
        }
#line 182 "code_gen.m"
        {
#line 182 "code_gen.m"
          ll_backend__code_loc_dep__post_goal_update_4_p_0(ll_backend__code_gen__GoalInfo_19, *ll_backend__code_gen__STATE_VARIABLE_CI_35, ll_backend__code_gen__STATE_VARIABLE_CLD_60_60, ll_backend__code_gen__STATE_VARIABLE_CLD_37);
#line 182 "code_gen.m"
          return;
        }
#line 102 "code_gen.m"
      }
#line 183 "code_gen.m"
    else
#line 184 "code_gen.m"
      {
#line 184 "code_gen.m"
        {
#line 184 "code_gen.m"
          *ll_backend__code_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 184 "code_gen.m"
        *ll_backend__code_gen__STATE_VARIABLE_CLD_37 = ll_backend__code_gen__STATE_VARIABLE_CLD_44_44;
#line 184 "code_gen.m"
        *ll_backend__code_gen__STATE_VARIABLE_CI_35 = ll_backend__code_gen__STATE_VARIABLE_CI_0_34;
#line 184 "code_gen.m"
      }
#line 76 "code_gen.m"
  }
#line 38 "code_gen.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.code_gen. */
