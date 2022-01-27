/*
** Automatically generated from `code_gen.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 336 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_goals_8_p_0(
#line 336 "code_gen.m"
  MR_Word ll_backend__code_gen__HeadVar__1_1,
#line 336 "code_gen.m"
  MR_Integer ll_backend__code_gen__N_2,
#line 336 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_3,
#line 336 "code_gen.m"
  MR_Word * ll_backend__code_gen__HeadVar__4_4,
#line 336 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_5,
#line 336 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_6,
#line 336 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_7,
#line 336 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_8);

#line 328 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_conj_6_p_0(
#line 328 "code_gen.m"
  MR_Word ll_backend__code_gen__HeadVar__1_1,
#line 328 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_2,
#line 328 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_3,
#line 328 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_4,
#line 328 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_5,
#line 328 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_6);

#line 233 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_goal_expr_7_p_0(
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__GoalExpr_8,
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__GoalInfo_9,
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_10,
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__ForwardLiveVarsBeforeGoal_11,
#line 233 "code_gen.m"
  MR_Word * ll_backend__code_gen__Code_12,
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_51,
#line 233 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_52);

#line 201 "code_gen.m"
static MR_Word MR_CALL 
ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(
#line 201 "code_gen.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 336 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_goals_8_p_0(
#line 336 "code_gen.m"
  MR_Word ll_backend__code_gen__HeadVar__1_1,
#line 336 "code_gen.m"
  MR_Integer ll_backend__code_gen__N_2,
#line 336 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_3,
#line 336 "code_gen.m"
  MR_Word * ll_backend__code_gen__HeadVar__4_4,
#line 336 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_5,
#line 336 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_6,
#line 336 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_7,
#line 336 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_8)
#line 336 "code_gen.m"
{
#line 340 "code_gen.m"
  while (MR_TRUE)
#line 340 "code_gen.m"
    {
#line 340 "code_gen.m"
      /* tailcall optimized into a loop */
#line 340 "code_gen.m"
      {
#line 340 "code_gen.m"
        MR_bool ll_backend__code_gen__succeeded;

#line 340 "code_gen.m"
        if ((ll_backend__code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "code_gen.m"
          {
#line 340 "code_gen.m"
            *ll_backend__code_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 340 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_CI_8 = ll_backend__code_gen__STATE_VARIABLE_CI_0_7;
#line 340 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_Code_6 = ll_backend__code_gen__STATE_VARIABLE_Code_0_5;
#line 340 "code_gen.m"
          }
#line 340 "code_gen.m"
        else
#line 341 "code_gen.m"
          {
#line 341 "code_gen.m"
            MR_Word ll_backend__code_gen__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 341 "code_gen.m"
            MR_Word ll_backend__code_gen__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 1)));

#line 342 "code_gen.m"
            ll_backend__code_gen__succeeded = (ll_backend__code_gen__N_2 > (MR_Integer) 0);
#line 351 "code_gen.m"
            if (ll_backend__code_gen__succeeded)
#line 343 "code_gen.m"
              {
#line 343 "code_gen.m"
                MR_Word ll_backend__code_gen__GoalCode_24;
#line 343 "code_gen.m"
                MR_Word ll_backend__code_gen__Instmap_25;
#line 343 "code_gen.m"
                MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_31_31;
#line 343 "code_gen.m"
                MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_32_32;

#line 343 "code_gen.m"
                {
#line 343 "code_gen.m"
                  ll_backend__code_gen__generate_goal_5_p_0(ll_backend__code_gen__CodeModel_3, ll_backend__code_gen__Goal_17, &ll_backend__code_gen__GoalCode_24, ll_backend__code_gen__STATE_VARIABLE_CI_0_7, &ll_backend__code_gen__STATE_VARIABLE_CI_31_31);
                }
#line 344 "code_gen.m"
                {
#line 344 "code_gen.m"
                  ll_backend__code_gen__STATE_VARIABLE_Code_32_32 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_gen__STATE_VARIABLE_Code_0_5, ll_backend__code_gen__GoalCode_24);
                }
#line 345 "code_gen.m"
                {
#line 345 "code_gen.m"
                  ll_backend__code_info__get_instmap_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CI_31_31, &ll_backend__code_gen__Instmap_25);
                }
#line 346 "code_gen.m"
                {
#line 346 "code_gen.m"
                  ll_backend__code_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__code_gen__Instmap_25);
                }
#line 348 "code_gen.m"
                if (ll_backend__code_gen__succeeded)
#line 347 "code_gen.m"
                  {
#line 347 "code_gen.m"
                    *ll_backend__code_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "code_gen.m"
                    *ll_backend__code_gen__STATE_VARIABLE_CI_8 = ll_backend__code_gen__STATE_VARIABLE_CI_31_31;
#line 347 "code_gen.m"
                    *ll_backend__code_gen__STATE_VARIABLE_Code_6 = ll_backend__code_gen__STATE_VARIABLE_Code_32_32;
#line 347 "code_gen.m"
                  }
#line 348 "code_gen.m"
                else
#line 349 "code_gen.m"
                  {
#line 349 "code_gen.m"
                    MR_Integer ll_backend__code_gen__V_33_33 = (ll_backend__code_gen__N_2 - (MR_Integer) 1);

#line 349 "code_gen.m"
                    /* direct tailcall eliminated */
#line 349 "code_gen.m"
                    {
#line 349 "code_gen.m"
                      MR_Word ll_backend__code_gen__HeadVar__1__tmp_copy_1 = ll_backend__code_gen__Goals_18;
#line 349 "code_gen.m"
                      MR_Integer ll_backend__code_gen__N__tmp_copy_2 = ll_backend__code_gen__V_33_33;
#line 349 "code_gen.m"
                      MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_5 = ll_backend__code_gen__STATE_VARIABLE_Code_32_32;
#line 349 "code_gen.m"
                      MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_7 = ll_backend__code_gen__STATE_VARIABLE_CI_31_31;

#line 349 "code_gen.m"
                      ll_backend__code_gen__STATE_VARIABLE_CI_0_7 = ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_7;
#line 349 "code_gen.m"
                      ll_backend__code_gen__STATE_VARIABLE_Code_0_5 = ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_5;
#line 349 "code_gen.m"
                      ll_backend__code_gen__N_2 = ll_backend__code_gen__N__tmp_copy_2;
#line 349 "code_gen.m"
                      ll_backend__code_gen__HeadVar__1_1 = ll_backend__code_gen__HeadVar__1__tmp_copy_1;
#line 349 "code_gen.m"
                    }
#line 349 "code_gen.m"
                    continue;
#line 349 "code_gen.m"
                  }
#line 343 "code_gen.m"
              }
#line 351 "code_gen.m"
            else
#line 352 "code_gen.m"
              {
#line 352 "code_gen.m"
                *ll_backend__code_gen__HeadVar__4_4 = ll_backend__code_gen__HeadVar__1_1;
#line 352 "code_gen.m"
                *ll_backend__code_gen__STATE_VARIABLE_CI_8 = ll_backend__code_gen__STATE_VARIABLE_CI_0_7;
#line 352 "code_gen.m"
                *ll_backend__code_gen__STATE_VARIABLE_Code_6 = ll_backend__code_gen__STATE_VARIABLE_Code_0_5;
#line 352 "code_gen.m"
              }
#line 341 "code_gen.m"
          }
#line 340 "code_gen.m"
      }
#line 340 "code_gen.m"
      break;
#line 340 "code_gen.m"
    }
#line 336 "code_gen.m"
}

#line 328 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_conj_6_p_0(
#line 328 "code_gen.m"
  MR_Word ll_backend__code_gen__HeadVar__1_1,
#line 328 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_2,
#line 328 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0_3,
#line 328 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_Code_4,
#line 328 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_5,
#line 328 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_6)
#line 328 "code_gen.m"
{
#line 331 "code_gen.m"
  while (MR_TRUE)
#line 331 "code_gen.m"
    {
#line 331 "code_gen.m"
      /* tailcall optimized into a loop */
#line 331 "code_gen.m"
      {
#line 331 "code_gen.m"
        MR_bool ll_backend__code_gen__succeeded;

#line 331 "code_gen.m"
        if ((ll_backend__code_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "code_gen.m"
          {
#line 331 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_CI_6 = ll_backend__code_gen__STATE_VARIABLE_CI_0_5;
#line 331 "code_gen.m"
            *ll_backend__code_gen__STATE_VARIABLE_Code_4 = ll_backend__code_gen__STATE_VARIABLE_Code_0_3;
#line 331 "code_gen.m"
          }
#line 331 "code_gen.m"
        else
#line 332 "code_gen.m"
          {
#line 332 "code_gen.m"
            MR_Word ll_backend__code_gen__LeftOverGoals_20;
#line 332 "code_gen.m"
            MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_26_26;
#line 332 "code_gen.m"
            MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_27_27;

#line 333 "code_gen.m"
            {
#line 333 "code_gen.m"
              ll_backend__code_gen__generate_goals_8_p_0(ll_backend__code_gen__HeadVar__1_1, (MR_Integer) 1000, ll_backend__code_gen__CodeModel_2, &ll_backend__code_gen__LeftOverGoals_20, ll_backend__code_gen__STATE_VARIABLE_Code_0_3, &ll_backend__code_gen__STATE_VARIABLE_Code_26_26, ll_backend__code_gen__STATE_VARIABLE_CI_0_5, &ll_backend__code_gen__STATE_VARIABLE_CI_27_27);
            }
#line 334 "code_gen.m"
            /* direct tailcall eliminated */
#line 334 "code_gen.m"
            {
#line 334 "code_gen.m"
              MR_Word ll_backend__code_gen__HeadVar__1__tmp_copy_1 = ll_backend__code_gen__LeftOverGoals_20;
#line 334 "code_gen.m"
              MR_Word ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_3 = ll_backend__code_gen__STATE_VARIABLE_Code_26_26;
#line 334 "code_gen.m"
              MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_5 = ll_backend__code_gen__STATE_VARIABLE_CI_27_27;

#line 334 "code_gen.m"
              ll_backend__code_gen__STATE_VARIABLE_CI_0_5 = ll_backend__code_gen__STATE_VARIABLE_CI_0__tmp_copy_5;
#line 334 "code_gen.m"
              ll_backend__code_gen__STATE_VARIABLE_Code_0_3 = ll_backend__code_gen__STATE_VARIABLE_Code_0__tmp_copy_3;
#line 334 "code_gen.m"
              ll_backend__code_gen__HeadVar__1_1 = ll_backend__code_gen__HeadVar__1__tmp_copy_1;
#line 334 "code_gen.m"
            }
#line 334 "code_gen.m"
            continue;
#line 332 "code_gen.m"
          }
#line 331 "code_gen.m"
      }
#line 331 "code_gen.m"
      break;
#line 331 "code_gen.m"
    }
#line 328 "code_gen.m"
}

#line 233 "code_gen.m"
static void MR_CALL 
ll_backend__code_gen__generate_goal_expr_7_p_0(
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__GoalExpr_8,
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__GoalInfo_9,
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__CodeModel_10,
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__ForwardLiveVarsBeforeGoal_11,
#line 233 "code_gen.m"
  MR_Word * ll_backend__code_gen__Code_12,
#line 233 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_51,
#line 233 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_52)
#line 233 "code_gen.m"
{
#line 240 "code_gen.m"
  {
#line 240 "code_gen.m"
    MR_bool ll_backend__code_gen__succeeded;

#line 240 "code_gen.m"
#line 240 "code_gen.m"
    switch (MR_tag((MR_Word) ll_backend__code_gen__GoalExpr_8)) {
#line 240 "code_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 240 "code_gen.m"
      case (MR_Integer) 0:
#line 256 "code_gen.m"
        {
#line 256 "code_gen.m"
          MR_Word ll_backend__code_gen__Goal_21 = (MR_Word) MR_body(((MR_Word) ll_backend__code_gen__GoalExpr_8), (MR_Integer) 0);

#line 257 "code_gen.m"
          {
#line 257 "code_gen.m"
            ll_backend__ite_gen__generate_negation_6_p_0(ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__Goal_21, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 257 "code_gen.m"
            return;
          }
#line 256 "code_gen.m"
        }
#line 240 "code_gen.m"
        break;
#line 240 "code_gen.m"
      case (MR_Integer) 1:
#line 240 "code_gen.m"
        {
#line 240 "code_gen.m"
          MR_Word ll_backend__code_gen__Uni_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 3)));
#line 240 "code_gen.m"
          MR_Word ll_backend__code_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 0)));
#line 240 "code_gen.m"
          MR_Word ll_backend__code_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 1)));
#line 240 "code_gen.m"
          MR_Word ll_backend__code_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 2)));
#line 240 "code_gen.m"
          MR_Word ll_backend__code_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 4)));

#line 241 "code_gen.m"
          {
#line 241 "code_gen.m"
            ll_backend__unify_gen__generate_unification_6_p_0(ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__Uni_17, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 241 "code_gen.m"
            return;
          }
#line 240 "code_gen.m"
        }
#line 240 "code_gen.m"
        break;
#line 240 "code_gen.m"
      case (MR_Integer) 2:
#line 282 "code_gen.m"
        {
#line 282 "code_gen.m"
          MR_Word ll_backend__code_gen__PredId_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 0)));
#line 282 "code_gen.m"
          MR_Integer ll_backend__code_gen__ProcId_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 1)));
#line 282 "code_gen.m"
          MR_Word ll_backend__code_gen__BuiltinState_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 3)));
#line 282 "code_gen.m"
          MR_Word ll_backend__code_gen__Args_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 2)));
#line 282 "code_gen.m"
          MR_Word ll_backend__code_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 4)));
#line 282 "code_gen.m"
          MR_Word ll_backend__code_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 5)));

#line 287 "code_gen.m"
#line 287 "code_gen.m"
          switch (ll_backend__code_gen__BuiltinState_42) {
#line 287 "code_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 287 "code_gen.m"
            case (MR_Integer) 0:
#line 287 "code_gen.m"
            case (MR_Integer) 1:
#line 291 "code_gen.m"
              {
#line 291 "code_gen.m"
                ll_backend__call_gen__generate_builtin_7_p_0(ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__PredId_40, ll_backend__code_gen__ProcId_41, ll_backend__code_gen__Args_76, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 291 "code_gen.m"
                return;
              }
#line 287 "code_gen.m"
              break;
#line 287 "code_gen.m"
            case (MR_Integer) 2:
#line 285 "code_gen.m"
              {
#line 285 "code_gen.m"
                ll_backend__call_gen__generate_call_8_p_0(ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__PredId_40, ll_backend__code_gen__ProcId_41, ll_backend__code_gen__Args_76, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 285 "code_gen.m"
                return;
              }
#line 287 "code_gen.m"
              break;
#line 287 "code_gen.m"
          }
#line 282 "code_gen.m"
        }
#line 240 "code_gen.m"
        break;
#line 240 "code_gen.m"
      case (MR_Integer) 3:
#line 240 "code_gen.m"
#line 240 "code_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 0)))) {
#line 240 "code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 240 "code_gen.m"
          case (MR_Integer) 0:
#line 278 "code_gen.m"
            {
#line 278 "code_gen.m"
              MR_Word ll_backend__code_gen__GenericCall_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 1)));
#line 278 "code_gen.m"
              MR_Word ll_backend__code_gen__Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 2)));
#line 278 "code_gen.m"
              MR_Word ll_backend__code_gen__Modes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 3)));
#line 278 "code_gen.m"
              MR_Word ll_backend__code_gen__MaybeRegTypes_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 4)));
#line 278 "code_gen.m"
              MR_Word ll_backend__code_gen__Det_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 5)));

#line 279 "code_gen.m"
              {
#line 279 "code_gen.m"
                ll_backend__call_gen__generate_generic_call_10_p_0(ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__GenericCall_35, ll_backend__code_gen__Args_36, ll_backend__code_gen__Modes_37, ll_backend__code_gen__MaybeRegTypes_38, ll_backend__code_gen__Det_39, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 279 "code_gen.m"
                return;
              }
#line 278 "code_gen.m"
            }
#line 240 "code_gen.m"
            break;
#line 240 "code_gen.m"
          case (MR_Integer) 1:
#line 296 "code_gen.m"
            {
#line 296 "code_gen.m"
              MR_Word ll_backend__code_gen__Attributes_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 1)));
#line 296 "code_gen.m"
              MR_Word ll_backend__code_gen__ExtraArgs_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 5)));
#line 296 "code_gen.m"
              MR_Word ll_backend__code_gen__MaybeTraceRuntimeCond_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 6)));
#line 296 "code_gen.m"
              MR_Word ll_backend__code_gen__PragmaCode_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 7)));
#line 296 "code_gen.m"
              MR_Word ll_backend__code_gen__Lang_49;
#line 296 "code_gen.m"
              MR_Word ll_backend__code_gen__Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 4)));
#line 296 "code_gen.m"
              MR_Word ll_backend__code_gen__PredId_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 2)));
#line 296 "code_gen.m"
              MR_Integer ll_backend__code_gen__ProcId_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 3)));

#line 297 "code_gen.m"
              {
#line 297 "code_gen.m"
                ll_backend__code_gen__Lang_49 = parse_tree__prog_data__get_foreign_language_1_f_0(ll_backend__code_gen__Attributes_45);
              }
#line 303 "code_gen.m"
#line 303 "code_gen.m"
              switch (ll_backend__code_gen__Lang_49) {
#line 303 "code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 303 "code_gen.m"
                case (MR_Integer) 0:
#line 300 "code_gen.m"
                  {
#line 300 "code_gen.m"
                    ll_backend__pragma_c_gen__generate_foreign_proc_code_12_p_0(ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__Attributes_45, ll_backend__code_gen__PredId_78, ll_backend__code_gen__ProcId_79, ll_backend__code_gen__Args_77, ll_backend__code_gen__ExtraArgs_46, ll_backend__code_gen__MaybeTraceRuntimeCond_47, ll_backend__code_gen__PragmaCode_48, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 300 "code_gen.m"
                    return;
                  }
#line 303 "code_gen.m"
                  break;
#line 303 "code_gen.m"
                case (MR_Integer) 1:
#line 303 "code_gen.m"
                case (MR_Integer) 4:
#line 303 "code_gen.m"
                case (MR_Integer) 3:
#line 303 "code_gen.m"
                case (MR_Integer) 2:
#line 308 "code_gen.m"
                  {
#line 309 "code_gen.m"
                    {
#line 309 "code_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal_expr\'/7", (MR_String) "foreign code other than C");
#line 309 "code_gen.m"
                      return;
                    }
#line 308 "code_gen.m"
                  }
#line 303 "code_gen.m"
                  break;
#line 303 "code_gen.m"
              }
#line 296 "code_gen.m"
            }
#line 240 "code_gen.m"
            break;
#line 240 "code_gen.m"
          case (MR_Integer) 2:
#line 243 "code_gen.m"
            {
#line 243 "code_gen.m"
              MR_Word ll_backend__code_gen__ConjType_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 1)));
#line 243 "code_gen.m"
              MR_Word ll_backend__code_gen__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 2)));

#line 247 "code_gen.m"
#line 247 "code_gen.m"
              switch (ll_backend__code_gen__ConjType_19) {
#line 247 "code_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 247 "code_gen.m"
                case (MR_Integer) 1:
#line 249 "code_gen.m"
                  {
#line 249 "code_gen.m"
                    ll_backend__par_conj_gen__generate_par_conj_6_p_0(ll_backend__code_gen__Goals_20, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 249 "code_gen.m"
                    return;
                  }
#line 247 "code_gen.m"
                  break;
#line 247 "code_gen.m"
                case (MR_Integer) 0:
#line 245 "code_gen.m"
                  {
#line 245 "code_gen.m"
                    MR_Word ll_backend__code_gen__V_72_72;

#line 246 "code_gen.m"
                    {
#line 246 "code_gen.m"
                      ll_backend__code_gen__V_72_72 = mercury__cord__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 246 "code_gen.m"
                    {
#line 246 "code_gen.m"
                      ll_backend__code_gen__generate_conj_6_p_0(ll_backend__code_gen__Goals_20, ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__V_72_72, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 246 "code_gen.m"
                      return;
                    }
#line 245 "code_gen.m"
                  }
#line 247 "code_gen.m"
                  break;
#line 247 "code_gen.m"
              }
#line 243 "code_gen.m"
            }
#line 240 "code_gen.m"
            break;
#line 240 "code_gen.m"
          case (MR_Integer) 3:
#line 253 "code_gen.m"
            {
#line 253 "code_gen.m"
              MR_Word ll_backend__code_gen__Goals_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 1)));

#line 254 "code_gen.m"
              {
#line 254 "code_gen.m"
                ll_backend__disj_gen__generate_disj_6_p_0(ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__Goals_75, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 254 "code_gen.m"
                return;
              }
#line 253 "code_gen.m"
            }
#line 240 "code_gen.m"
            break;
#line 240 "code_gen.m"
          case (MR_Integer) 4:
#line 262 "code_gen.m"
            {
#line 262 "code_gen.m"
              MR_Word ll_backend__code_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 1)));
#line 262 "code_gen.m"
              MR_Word ll_backend__code_gen__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 2)));
#line 262 "code_gen.m"
              MR_Word ll_backend__code_gen__CaseList_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 3)));

#line 263 "code_gen.m"
              {
#line 263 "code_gen.m"
                ll_backend__switch_gen__generate_switch_8_p_0(ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__Var_26, ll_backend__code_gen__CanFail_27, ll_backend__code_gen__CaseList_28, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 263 "code_gen.m"
                return;
              }
#line 262 "code_gen.m"
            }
#line 240 "code_gen.m"
            break;
#line 240 "code_gen.m"
          case (MR_Integer) 5:
#line 266 "code_gen.m"
            {
#line 266 "code_gen.m"
              MR_Word ll_backend__code_gen__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 1)));
#line 266 "code_gen.m"
              MR_Word ll_backend__code_gen__SubGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 2)));
#line 270 "code_gen.m"
              MR_Word ll_backend__code_gen__TermVar_31;
#line 267 "code_gen.m"
              MR_Word ll_backend__code_gen__V_63_63;

#line 267 "code_gen.m"
              ll_backend__code_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__code_gen__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 267 "code_gen.m"
              if (ll_backend__code_gen__succeeded)
#line 267 "code_gen.m"
                {
#line 267 "code_gen.m"
                  ll_backend__code_gen__TermVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_29, (MR_Integer) 1)));
#line 267 "code_gen.m"
                  ll_backend__code_gen__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_29, (MR_Integer) 2)));
#line 267 "code_gen.m"
                  ll_backend__code_gen__succeeded = (ll_backend__code_gen__V_63_63 == (MR_Integer) 1);
#line 267 "code_gen.m"
                }
#line 270 "code_gen.m"
              if (ll_backend__code_gen__succeeded)
#line 268 "code_gen.m"
                {
#line 268 "code_gen.m"
                  {
#line 268 "code_gen.m"
                    ll_backend__unify_gen__generate_ground_term_4_p_0(ll_backend__code_gen__TermVar_31, ll_backend__code_gen__SubGoal_30, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
                  }
#line 269 "code_gen.m"
                  {
#line 269 "code_gen.m"
                    *ll_backend__code_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 268 "code_gen.m"
                }
#line 270 "code_gen.m"
              else
#line 273 "code_gen.m"
                {
#line 273 "code_gen.m"
                  MR_Word ll_backend__code_gen__LCVar_32;
#line 273 "code_gen.m"
                  MR_Word ll_backend__code_gen__LCSVar_33;
#line 273 "code_gen.m"
                  MR_Word ll_backend__code_gen__UseParentStack_34;

#line 270 "code_gen.m"
                  ll_backend__code_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__code_gen__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 270 "code_gen.m"
                  if (ll_backend__code_gen__succeeded)
#line 270 "code_gen.m"
                    {
#line 270 "code_gen.m"
                      ll_backend__code_gen__LCVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_29, (MR_Integer) 1)));
#line 270 "code_gen.m"
                      ll_backend__code_gen__LCSVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_29, (MR_Integer) 2)));
#line 270 "code_gen.m"
                      ll_backend__code_gen__UseParentStack_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__Reason_29, (MR_Integer) 3)));
#line 271 "code_gen.m"
                      {
#line 271 "code_gen.m"
                        ll_backend__par_conj_gen__generate_lc_spawn_off_7_p_0(ll_backend__code_gen__SubGoal_30, ll_backend__code_gen__LCVar_32, ll_backend__code_gen__LCSVar_33, ll_backend__code_gen__UseParentStack_34, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 271 "code_gen.m"
                        return;
                      }
#line 270 "code_gen.m"
                    }
#line 270 "code_gen.m"
                  else
#line 274 "code_gen.m"
                    {
#line 274 "code_gen.m"
                      ll_backend__commit_gen__generate_scope_8_p_0(ll_backend__code_gen__Reason_29, ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__ForwardLiveVarsBeforeGoal_11, ll_backend__code_gen__SubGoal_30, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 274 "code_gen.m"
                      return;
                    }
#line 273 "code_gen.m"
                }
#line 266 "code_gen.m"
            }
#line 240 "code_gen.m"
            break;
#line 240 "code_gen.m"
          case (MR_Integer) 6:
#line 259 "code_gen.m"
            {
#line 259 "code_gen.m"
              MR_Word ll_backend__code_gen__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 2)));
#line 259 "code_gen.m"
              MR_Word ll_backend__code_gen__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 3)));
#line 259 "code_gen.m"
              MR_Word ll_backend__code_gen__Else_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 4)));
#line 259 "code_gen.m"
              MR_Word ll_backend__code_gen___Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_gen__GoalExpr_8, (MR_Integer) 1)));

#line 260 "code_gen.m"
              {
#line 260 "code_gen.m"
                ll_backend__ite_gen__generate_ite_8_p_0(ll_backend__code_gen__CodeModel_10, ll_backend__code_gen__Cond_23, ll_backend__code_gen__Then_24, ll_backend__code_gen__Else_25, ll_backend__code_gen__GoalInfo_9, ll_backend__code_gen__Code_12, ll_backend__code_gen__STATE_VARIABLE_CI_0_51, ll_backend__code_gen__STATE_VARIABLE_CI_52);
#line 260 "code_gen.m"
                return;
              }
#line 259 "code_gen.m"
            }
#line 240 "code_gen.m"
            break;
#line 240 "code_gen.m"
          case (MR_Integer) 7:
#line 312 "code_gen.m"
            {
#line 314 "code_gen.m"
              {
#line 314 "code_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal_expr\'/7", (MR_String) "shorthand");
#line 314 "code_gen.m"
                return;
              }
#line 312 "code_gen.m"
            }
#line 240 "code_gen.m"
            break;
#line 240 "code_gen.m"
        }
#line 240 "code_gen.m"
        break;
#line 240 "code_gen.m"
    }
#line 240 "code_gen.m"
  }
#line 233 "code_gen.m"
}

#line 201 "code_gen.m"
static MR_Word MR_CALL 
ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(
#line 201 "code_gen.m"
  MR_Word ll_backend__code_gen__ProcInfo_3)
#line 201 "code_gen.m"
{
#line 203 "code_gen.m"
  {
#line 203 "code_gen.m"
    MR_bool ll_backend__code_gen__succeeded;
#line 203 "code_gen.m"
    MR_Word ll_backend__code_gen__DeepSaveVars_4;
#line 203 "code_gen.m"
    MR_Word ll_backend__code_gen__MaybeDeepProfInfo_5;
#line 227 "code_gen.m"
    MR_Word ll_backend__code_gen__DeepLayout_8;
#line 206 "code_gen.m"
    MR_Word ll_backend__code_gen__DeepProfInfo_6;
#line 206 "code_gen.m"
    MR_Word ll_backend__code_gen__MaybeDeepLayout_7;
#line 207 "code_gen.m"
    MR_Word ll_backend__code_gen__V_24_24;
#line 207 "code_gen.m"
    MR_Word ll_backend__code_gen__V_25_25;

#line 204 "code_gen.m"
    {
#line 204 "code_gen.m"
      hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_p_0(ll_backend__code_gen__ProcInfo_3, &ll_backend__code_gen__MaybeDeepProfInfo_5);
    }
#line 206 "code_gen.m"
    ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__MaybeDeepProfInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 206 "code_gen.m"
    if (ll_backend__code_gen__succeeded)
#line 206 "code_gen.m"
      {
#line 206 "code_gen.m"
        ll_backend__code_gen__DeepProfInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeDeepProfInfo_5, (MR_Integer) 0)));
#line 207 "code_gen.m"
        ll_backend__code_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepProfInfo_6, (MR_Integer) 0)));
#line 207 "code_gen.m"
        ll_backend__code_gen__MaybeDeepLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepProfInfo_6, (MR_Integer) 1)));
#line 207 "code_gen.m"
        ll_backend__code_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepProfInfo_6, (MR_Integer) 2)));
#line 208 "code_gen.m"
        ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__MaybeDeepLayout_7)) == (MR_mktag((MR_Integer) 1)));
#line 208 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 208 "code_gen.m"
          ll_backend__code_gen__DeepLayout_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeDeepLayout_7, (MR_Integer) 0)));
#line 206 "code_gen.m"
      }
#line 227 "code_gen.m"
    if (ll_backend__code_gen__succeeded)
#line 210 "code_gen.m"
      {
#line 210 "code_gen.m"
        MR_Word ll_backend__code_gen__ExcpVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepLayout_8, (MR_Integer) 1)));
#line 210 "code_gen.m"
        MR_Word ll_backend__code_gen__TopCSDVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__ExcpVars_9, (MR_Integer) 0)));
#line 210 "code_gen.m"
        MR_Word ll_backend__code_gen__MiddleCSDVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__ExcpVars_9, (MR_Integer) 1)));
#line 210 "code_gen.m"
        MR_Word ll_backend__code_gen__MaybeOldOutermostVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__ExcpVars_9, (MR_Integer) 2)));
#line 210 "code_gen.m"
        MR_Word ll_backend__code_gen__StackSlots_13;
#line 210 "code_gen.m"
        MR_Word ll_backend__code_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__DeepLayout_8, (MR_Integer) 0)));
#line 214 "code_gen.m"
        MR_Word ll_backend__code_gen__V_14_14;
#line 214 "code_gen.m"
        MR_Box ll_backend__code_gen__conv0_V_14_14;

#line 213 "code_gen.m"
        {
#line 213 "code_gen.m"
          hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_gen__ProcInfo_3, &ll_backend__code_gen__StackSlots_13);
        }
#line 214 "code_gen.m"
        {
#line 214 "code_gen.m"
          ll_backend__code_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__code_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__code_gen__StackSlots_13, ((MR_Box) (ll_backend__code_gen__TopCSDVar_10)), &ll_backend__code_gen__conv0_V_14_14);
        }
#line 214 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 214 "code_gen.m"
          {
#line 214 "code_gen.m"
            ll_backend__code_gen__V_14_14 = ((MR_Word) ll_backend__code_gen__conv0_V_14_14);
#line 214 "code_gen.m"
            ll_backend__code_gen__succeeded = MR_TRUE;
#line 214 "code_gen.m"
          }
#line 224 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 220 "code_gen.m"
          if ((ll_backend__code_gen__MaybeOldOutermostVar_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "code_gen.m"
            {
#line 221 "code_gen.m"
              MR_Word ll_backend__code_gen__V_16_16;

#line 222 "code_gen.m"
              {
#line 222 "code_gen.m"
                ll_backend__code_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_16_16, 0) = ((MR_Box) (ll_backend__code_gen__MiddleCSDVar_11));
#line 222 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "code_gen.m"
              }
#line 222 "code_gen.m"
              {
#line 222 "code_gen.m"
                ll_backend__code_gen__DeepSaveVars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 0) = ((MR_Box) (ll_backend__code_gen__TopCSDVar_10));
#line 222 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 1) = ((MR_Box) (ll_backend__code_gen__V_16_16));
#line 222 "code_gen.m"
              }
#line 221 "code_gen.m"
            }
#line 220 "code_gen.m"
          else
#line 218 "code_gen.m"
            {
#line 218 "code_gen.m"
              MR_Word ll_backend__code_gen__OldOutermostVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeOldOutermostVar_12, (MR_Integer) 0)));
#line 218 "code_gen.m"
              MR_Word ll_backend__code_gen__V_18_18;
#line 218 "code_gen.m"
              MR_Word ll_backend__code_gen__V_19_19;

#line 219 "code_gen.m"
              {
#line 219 "code_gen.m"
                ll_backend__code_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_19_19, 0) = ((MR_Box) (ll_backend__code_gen__OldOutermostVar_15));
#line 219 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "code_gen.m"
              }
#line 219 "code_gen.m"
              {
#line 219 "code_gen.m"
                ll_backend__code_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_18_18, 0) = ((MR_Box) (ll_backend__code_gen__MiddleCSDVar_11));
#line 219 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_18_18, 1) = ((MR_Box) (ll_backend__code_gen__V_19_19));
#line 219 "code_gen.m"
              }
#line 219 "code_gen.m"
              {
#line 219 "code_gen.m"
                ll_backend__code_gen__DeepSaveVars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 0) = ((MR_Box) (ll_backend__code_gen__TopCSDVar_10));
#line 219 "code_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__code_gen__DeepSaveVars_4, 1) = ((MR_Box) (ll_backend__code_gen__V_18_18));
#line 219 "code_gen.m"
              }
#line 218 "code_gen.m"
            }
#line 224 "code_gen.m"
        else
#line 225 "code_gen.m"
          ll_backend__code_gen__DeepSaveVars_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 210 "code_gen.m"
      }
#line 227 "code_gen.m"
    else
#line 228 "code_gen.m"
      {
#line 228 "code_gen.m"
        {
#line 228 "code_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "function \140ll_backend.code_gen.compute_deep_save_excp_vars\'/1", (MR_String) "inconsistent proc_info");
        }
#line 228 "code_gen.m"
      }
#line 203 "code_gen.m"
    return ll_backend__code_gen__DeepSaveVars_4;
#line 203 "code_gen.m"
  }
#line 201 "code_gen.m"
}

#line 37 "code_gen.m"
void MR_CALL 
ll_backend__code_gen__generate_goal_5_p_0(
#line 37 "code_gen.m"
  MR_Word ll_backend__code_gen__ContextModel_6,
#line 37 "code_gen.m"
  MR_Word ll_backend__code_gen__Goal_7,
#line 37 "code_gen.m"
  MR_Word * ll_backend__code_gen__Code_8,
#line 37 "code_gen.m"
  MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_0_31,
#line 37 "code_gen.m"
  MR_Word * ll_backend__code_gen__STATE_VARIABLE_CI_32)
#line 37 "code_gen.m"
{
#line 75 "code_gen.m"
  {
#line 75 "code_gen.m"
    MR_bool ll_backend__code_gen__succeeded;
#line 75 "code_gen.m"
    MR_Word ll_backend__code_gen__ForwardLiveVarsBeforeGoal_14;
#line 75 "code_gen.m"
    MR_Word ll_backend__code_gen__GoalExpr_15;
#line 75 "code_gen.m"
    MR_Word ll_backend__code_gen__GoalInfo_16;
#line 75 "code_gen.m"
    MR_Word ll_backend__code_gen__HasSubGoals_17;
#line 75 "code_gen.m"
    MR_Word ll_backend__code_gen__InstMap_18;
#line 75 "code_gen.m"
    MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_39_39;

#line 95 "code_gen.m"
    {
#line 95 "code_gen.m"
      ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CI_0_31, &ll_backend__code_gen__ForwardLiveVarsBeforeGoal_14);
    }
#line 96 "code_gen.m"
    ll_backend__code_gen__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__Goal_7, (MR_Integer) 0)));
#line 96 "code_gen.m"
    ll_backend__code_gen__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_gen__Goal_7, (MR_Integer) 1)));
#line 97 "code_gen.m"
    {
#line 97 "code_gen.m"
      ll_backend__code_gen__HasSubGoals_17 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(ll_backend__code_gen__GoalExpr_15);
    }
#line 98 "code_gen.m"
    {
#line 98 "code_gen.m"
      ll_backend__code_info__pre_goal_update_4_p_0(ll_backend__code_gen__GoalInfo_16, ll_backend__code_gen__HasSubGoals_17, ll_backend__code_gen__STATE_VARIABLE_CI_0_31, &ll_backend__code_gen__STATE_VARIABLE_CI_39_39);
    }
#line 99 "code_gen.m"
    {
#line 99 "code_gen.m"
      ll_backend__code_info__get_instmap_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CI_39_39, &ll_backend__code_gen__InstMap_18);
    }
#line 100 "code_gen.m"
    {
#line 100 "code_gen.m"
      ll_backend__code_gen__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(ll_backend__code_gen__InstMap_18);
    }
#line 182 "code_gen.m"
    if (ll_backend__code_gen__succeeded)
#line 101 "code_gen.m"
      {
#line 101 "code_gen.m"
        MR_Word ll_backend__code_gen__CodeModel_19;
#line 101 "code_gen.m"
        MR_Word ll_backend__code_gen__GoalCode_20;
#line 101 "code_gen.m"
        MR_Word ll_backend__code_gen__Features_21;
#line 101 "code_gen.m"
        MR_Word ll_backend__code_gen__ProcInfo_22;
#line 101 "code_gen.m"
        MR_Word ll_backend__code_gen__CodeUptoTip_27;
#line 101 "code_gen.m"
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_46_46;
#line 101 "code_gen.m"
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_50_50;
#line 101 "code_gen.m"
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_53_53;
#line 101 "code_gen.m"
        MR_Word ll_backend__code_gen__STATE_VARIABLE_CI_54_54;
#line 152 "code_gen.m"
        MR_Word ll_backend__code_gen__CallTableVar_24;
#line 144 "code_gen.m"
        MR_Word ll_backend__code_gen__MaybeCallTableVar_23;
#line 144 "code_gen.m"
        MR_Word ll_backend__code_gen__V_77_77;
#line 144 "code_gen.m"
        MR_Word ll_backend__code_gen__V_78_78;
#line 148 "code_gen.m"
        MR_Word ll_backend__code_gen__V_84_84;

#line 101 "code_gen.m"
        {
#line 101 "code_gen.m"
          ll_backend__code_gen__CodeModel_19 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__code_gen__GoalInfo_16);
        }
#line 106 "code_gen.m"
#line 106 "code_gen.m"
        switch (ll_backend__code_gen__CodeModel_19) {
#line 106 "code_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 106 "code_gen.m"
          case (MR_Integer) 0:
#line 105 "code_gen.m"
            {
#line 105 "code_gen.m"
            }
#line 106 "code_gen.m"
            break;
#line 106 "code_gen.m"
          case (MR_Integer) 2:
#line 124 "code_gen.m"
#line 124 "code_gen.m"
            switch (ll_backend__code_gen__ContextModel_6) {
#line 124 "code_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 124 "code_gen.m"
              case (MR_Integer) 0:
#line 124 "code_gen.m"
              case (MR_Integer) 1:
#line 121 "code_gen.m"
                {
#line 122 "code_gen.m"
                  {
#line 122 "code_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal\'/5", (MR_String) "nondet model in det/semidet context");
#line 122 "code_gen.m"
                    return;
                  }
#line 121 "code_gen.m"
                }
#line 124 "code_gen.m"
                break;
#line 124 "code_gen.m"
              case (MR_Integer) 2:
#line 125 "code_gen.m"
                {
#line 125 "code_gen.m"
                }
#line 124 "code_gen.m"
                break;
#line 124 "code_gen.m"
            }
#line 106 "code_gen.m"
            break;
#line 106 "code_gen.m"
          case (MR_Integer) 1:
#line 111 "code_gen.m"
#line 111 "code_gen.m"
            switch (ll_backend__code_gen__ContextModel_6) {
#line 111 "code_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 111 "code_gen.m"
              case (MR_Integer) 0:
#line 109 "code_gen.m"
                {
#line 110 "code_gen.m"
                  {
#line 110 "code_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_gen", (MR_String) "predicate \140ll_backend.code_gen.generate_goal\'/5", (MR_String) "semidet model in det context");
#line 110 "code_gen.m"
                    return;
                  }
#line 109 "code_gen.m"
                }
#line 111 "code_gen.m"
                break;
#line 111 "code_gen.m"
              case (MR_Integer) 2:
#line 113 "code_gen.m"
                {
#line 113 "code_gen.m"
                }
#line 111 "code_gen.m"
                break;
#line 111 "code_gen.m"
              case (MR_Integer) 1:
#line 112 "code_gen.m"
                {
#line 112 "code_gen.m"
                }
#line 111 "code_gen.m"
                break;
#line 111 "code_gen.m"
            }
#line 106 "code_gen.m"
            break;
#line 106 "code_gen.m"
        }
#line 129 "code_gen.m"
        {
#line 129 "code_gen.m"
          ll_backend__code_gen__generate_goal_expr_7_p_0(ll_backend__code_gen__GoalExpr_15, ll_backend__code_gen__GoalInfo_16, ll_backend__code_gen__CodeModel_19, ll_backend__code_gen__ForwardLiveVarsBeforeGoal_14, &ll_backend__code_gen__GoalCode_20, ll_backend__code_gen__STATE_VARIABLE_CI_39_39, &ll_backend__code_gen__STATE_VARIABLE_CI_46_46);
        }
#line 131 "code_gen.m"
        {
#line 131 "code_gen.m"
          ll_backend__code_gen__Features_21 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__code_gen__GoalInfo_16);
        }
#line 132 "code_gen.m"
        {
#line 132 "code_gen.m"
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CI_46_46, &ll_backend__code_gen__ProcInfo_22);
        }
#line 144 "code_gen.m"
        {
#line 144 "code_gen.m"
          ll_backend__code_gen__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 5)), ll_backend__code_gen__Features_21);
        }
#line 144 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 144 "code_gen.m"
          {
#line 145 "code_gen.m"
            {
#line 145 "code_gen.m"
              ll_backend__code_info__get_proc_info_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CI_46_46, &ll_backend__code_gen__V_77_77);
            }
#line 145 "code_gen.m"
            {
#line 145 "code_gen.m"
              ll_backend__code_gen__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__code_gen__ProcInfo_22, ll_backend__code_gen__V_77_77);
            }
#line 144 "code_gen.m"
            if (ll_backend__code_gen__succeeded)
#line 144 "code_gen.m"
              {
#line 146 "code_gen.m"
                {
#line 146 "code_gen.m"
                  hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__code_gen__ProcInfo_22, &ll_backend__code_gen__MaybeCallTableVar_23);
                }
#line 147 "code_gen.m"
                ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__MaybeCallTableVar_23)) == (MR_mktag((MR_Integer) 1)));
#line 147 "code_gen.m"
                if (ll_backend__code_gen__succeeded)
#line 147 "code_gen.m"
                  {
#line 147 "code_gen.m"
                    ll_backend__code_gen__CallTableVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__MaybeCallTableVar_23, (MR_Integer) 0)));
#line 148 "code_gen.m"
                    {
#line 148 "code_gen.m"
                      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__code_gen__STATE_VARIABLE_CI_46_46, &ll_backend__code_gen__V_78_78);
                    }
#line 148 "code_gen.m"
                    ll_backend__code_gen__succeeded = ((MR_tag((MR_Word) ll_backend__code_gen__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 148 "code_gen.m"
                    if (ll_backend__code_gen__succeeded)
#line 148 "code_gen.m"
                      ll_backend__code_gen__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_78_78, (MR_Integer) 0)));
#line 147 "code_gen.m"
                  }
#line 144 "code_gen.m"
              }
#line 144 "code_gen.m"
          }
#line 152 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 150 "code_gen.m"
          {
#line 150 "code_gen.m"
            MR_Word ll_backend__code_gen__TipSaveCode_26;
#line 150 "code_gen.m"
            MR_Word ll_backend__code_gen__V_49_49;

#line 150 "code_gen.m"
            {
#line 150 "code_gen.m"
              ll_backend__code_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "code_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_49_49, 0) = ((MR_Box) (ll_backend__code_gen__CallTableVar_24));
#line 150 "code_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__code_gen__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "code_gen.m"
            }
#line 150 "code_gen.m"
            {
#line 150 "code_gen.m"
              ll_backend__code_info__save_variables_on_stack_4_p_0(ll_backend__code_gen__V_49_49, &ll_backend__code_gen__TipSaveCode_26, ll_backend__code_gen__STATE_VARIABLE_CI_46_46, &ll_backend__code_gen__STATE_VARIABLE_CI_50_50);
            }
#line 151 "code_gen.m"
            {
#line 151 "code_gen.m"
              ll_backend__code_gen__CodeUptoTip_27 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_gen__GoalCode_20, ll_backend__code_gen__TipSaveCode_26);
            }
#line 150 "code_gen.m"
          }
#line 152 "code_gen.m"
        else
#line 153 "code_gen.m"
          {
#line 153 "code_gen.m"
            ll_backend__code_gen__CodeUptoTip_27 = ll_backend__code_gen__GoalCode_20;
#line 153 "code_gen.m"
            ll_backend__code_gen__STATE_VARIABLE_CI_50_50 = ll_backend__code_gen__STATE_VARIABLE_CI_46_46;
#line 153 "code_gen.m"
          }
#line 170 "code_gen.m"
        {
#line 170 "code_gen.m"
          ll_backend__code_gen__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, ((MR_Box) ((MR_Integer) 7)), ll_backend__code_gen__Features_21);
        }
#line 174 "code_gen.m"
        if (ll_backend__code_gen__succeeded)
#line 171 "code_gen.m"
          {
#line 171 "code_gen.m"
            MR_Word ll_backend__code_gen__DeepSaveVars_28;
#line 171 "code_gen.m"
            MR_Word ll_backend__code_gen__DeepSaveCode_29;

#line 171 "code_gen.m"
            {
#line 171 "code_gen.m"
              ll_backend__code_gen__DeepSaveVars_28 = ll_backend__code_gen__compute_deep_save_excp_vars_1_f_0(ll_backend__code_gen__ProcInfo_22);
            }
#line 172 "code_gen.m"
            {
#line 172 "code_gen.m"
              ll_backend__code_info__save_variables_on_stack_4_p_0(ll_backend__code_gen__DeepSaveVars_28, &ll_backend__code_gen__DeepSaveCode_29, ll_backend__code_gen__STATE_VARIABLE_CI_50_50, &ll_backend__code_gen__STATE_VARIABLE_CI_53_53);
            }
#line 173 "code_gen.m"
            {
#line 173 "code_gen.m"
              *ll_backend__code_gen__Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_gen__CodeUptoTip_27, ll_backend__code_gen__DeepSaveCode_29);
            }
#line 171 "code_gen.m"
          }
#line 174 "code_gen.m"
        else
#line 175 "code_gen.m"
          {
#line 175 "code_gen.m"
            *ll_backend__code_gen__Code_8 = ll_backend__code_gen__CodeUptoTip_27;
#line 175 "code_gen.m"
            ll_backend__code_gen__STATE_VARIABLE_CI_53_53 = ll_backend__code_gen__STATE_VARIABLE_CI_50_50;
#line 175 "code_gen.m"
          }
#line 180 "code_gen.m"
        {
#line 180 "code_gen.m"
          ll_backend__code_info__set_instmap_3_p_0(ll_backend__code_gen__InstMap_18, ll_backend__code_gen__STATE_VARIABLE_CI_53_53, &ll_backend__code_gen__STATE_VARIABLE_CI_54_54);
        }
#line 181 "code_gen.m"
        {
#line 181 "code_gen.m"
          ll_backend__code_info__post_goal_update_3_p_0(ll_backend__code_gen__GoalInfo_16, ll_backend__code_gen__STATE_VARIABLE_CI_54_54, ll_backend__code_gen__STATE_VARIABLE_CI_32);
#line 181 "code_gen.m"
          return;
        }
#line 101 "code_gen.m"
      }
#line 182 "code_gen.m"
    else
#line 183 "code_gen.m"
      {
#line 183 "code_gen.m"
        {
#line 183 "code_gen.m"
          *ll_backend__code_gen__Code_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 183 "code_gen.m"
        *ll_backend__code_gen__STATE_VARIABLE_CI_32 = ll_backend__code_gen__STATE_VARIABLE_CI_39_39;
#line 183 "code_gen.m"
      }
#line 75 "code_gen.m"
  }
#line 37 "code_gen.m"
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
