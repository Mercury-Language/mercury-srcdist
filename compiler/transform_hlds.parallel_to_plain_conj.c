/*
** Automatically generated from `parallel_to_plain_conj.m'
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


/* :- module transform_hlds.parallel_to_plain_conj. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__parallel_to_plain_conj__init
ENDINIT
*/

#include "transform_hlds.parallel_to_plain_conj.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 116 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(
#line 116 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__HeadVar__1_1,
#line 116 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__HeadVar__2_2);

#line 108 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(
#line 108 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__HeadVar__1_1,
#line 108 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__HeadVar__2_2);

#line 54 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(
#line 54 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__Goal0_3,
#line 54 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__Goal_4);







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



#line 27 "parallel_to_plain_conj.m"
void MR_CALL 
transform_hlds__parallel_to_plain_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_p_0(
#line 27 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_9,
#line 27 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_10)
#line 27 "parallel_to_plain_conj.m"
{
#line 43 "parallel_to_plain_conj.m"
  {
#line 43 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;
#line 43 "parallel_to_plain_conj.m"
    MR_Word transform_hlds__parallel_to_plain_conj__HasParallelConj_6;

#line 44 "parallel_to_plain_conj.m"
    {
#line 44 "parallel_to_plain_conj.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_9, &transform_hlds__parallel_to_plain_conj__HasParallelConj_6);
    }
#line 47 "parallel_to_plain_conj.m"
    if ((transform_hlds__parallel_to_plain_conj__HasParallelConj_6 == (MR_Integer) 0))
#line 46 "parallel_to_plain_conj.m"
      *transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_10 = transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_9;
#line 47 "parallel_to_plain_conj.m"
    else
#line 48 "parallel_to_plain_conj.m"
      {
#line 48 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal0_7;
#line 48 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal_8;

#line 49 "parallel_to_plain_conj.m"
        {
#line 49 "parallel_to_plain_conj.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_9, &transform_hlds__parallel_to_plain_conj__Goal0_7);
        }
#line 50 "parallel_to_plain_conj.m"
        {
#line 50 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Goal0_7, &transform_hlds__parallel_to_plain_conj__Goal_8);
        }
#line 51 "parallel_to_plain_conj.m"
        {
#line 51 "parallel_to_plain_conj.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__parallel_to_plain_conj__Goal_8, transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_9, transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_10);
#line 51 "parallel_to_plain_conj.m"
          return;
        }
#line 48 "parallel_to_plain_conj.m"
      }
#line 43 "parallel_to_plain_conj.m"
  }
#line 27 "parallel_to_plain_conj.m"
}

#line 116 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(
#line 116 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__HeadVar__1_1,
#line 116 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__HeadVar__2_2)
#line 116 "parallel_to_plain_conj.m"
{
#line 118 "parallel_to_plain_conj.m"
  {
#line 118 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;

#line 118 "parallel_to_plain_conj.m"
    if ((transform_hlds__parallel_to_plain_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 118 "parallel_to_plain_conj.m"
      *transform_hlds__parallel_to_plain_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 118 "parallel_to_plain_conj.m"
    else
#line 119 "parallel_to_plain_conj.m"
      {
#line 119 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Case0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__parallel_to_plain_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Cases0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__parallel_to_plain_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 119 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Case_5;
#line 119 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Cases_6;
#line 119 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case0_3, (MR_Integer) 0)));
#line 119 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case0_3, (MR_Integer) 1)));
#line 119 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case0_3, (MR_Integer) 2)));
#line 119 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal_10;

#line 121 "parallel_to_plain_conj.m"
        {
#line 121 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Goal0_9, &transform_hlds__parallel_to_plain_conj__Goal_10);
        }
#line 122 "parallel_to_plain_conj.m"
        {
#line 122 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__Case_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 122 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case_5, 0) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__MainConsId_7));
#line 122 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case_5, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__OtherConsIds_8));
#line 122 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case_5, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goal_10));
#line 122 "parallel_to_plain_conj.m"
        }
#line 123 "parallel_to_plain_conj.m"
        {
#line 123 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(transform_hlds__parallel_to_plain_conj__Cases0_4, &transform_hlds__parallel_to_plain_conj__Cases_6);
        }
#line 119 "parallel_to_plain_conj.m"
        {
#line 119 "parallel_to_plain_conj.m"
          MR_Word base;
#line 119 "parallel_to_plain_conj.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "parallel_to_plain_conj.m"
          *transform_hlds__parallel_to_plain_conj__HeadVar__2_2 = base;
#line 119 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Case_5));
#line 119 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Cases_6));
#line 119 "parallel_to_plain_conj.m"
        }
#line 119 "parallel_to_plain_conj.m"
      }
#line 118 "parallel_to_plain_conj.m"
  }
#line 116 "parallel_to_plain_conj.m"
}

#line 108 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(
#line 108 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__HeadVar__1_1,
#line 108 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__HeadVar__2_2)
#line 108 "parallel_to_plain_conj.m"
{
#line 111 "parallel_to_plain_conj.m"
  {
#line 111 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;

#line 111 "parallel_to_plain_conj.m"
    if ((transform_hlds__parallel_to_plain_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 111 "parallel_to_plain_conj.m"
      *transform_hlds__parallel_to_plain_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 111 "parallel_to_plain_conj.m"
    else
#line 112 "parallel_to_plain_conj.m"
      {
#line 112 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__parallel_to_plain_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__parallel_to_plain_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 112 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal_5;
#line 112 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goals_6;

#line 113 "parallel_to_plain_conj.m"
        {
#line 113 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Goal0_3, &transform_hlds__parallel_to_plain_conj__Goal_5);
        }
#line 114 "parallel_to_plain_conj.m"
        {
#line 114 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(transform_hlds__parallel_to_plain_conj__Goals0_4, &transform_hlds__parallel_to_plain_conj__Goals_6);
        }
#line 112 "parallel_to_plain_conj.m"
        {
#line 112 "parallel_to_plain_conj.m"
          MR_Word base;
#line 112 "parallel_to_plain_conj.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "parallel_to_plain_conj.m"
          *transform_hlds__parallel_to_plain_conj__HeadVar__2_2 = base;
#line 112 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goal_5));
#line 112 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goals_6));
#line 112 "parallel_to_plain_conj.m"
        }
#line 112 "parallel_to_plain_conj.m"
      }
#line 111 "parallel_to_plain_conj.m"
  }
#line 108 "parallel_to_plain_conj.m"
}

#line 54 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(
#line 54 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__Goal0_3,
#line 54 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__Goal_4)
#line 54 "parallel_to_plain_conj.m"
{
#line 56 "parallel_to_plain_conj.m"
  {
#line 56 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;
#line 56 "parallel_to_plain_conj.m"
    MR_Word transform_hlds__parallel_to_plain_conj__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Goal0_3, (MR_Integer) 0)));
#line 56 "parallel_to_plain_conj.m"
    MR_Word transform_hlds__parallel_to_plain_conj__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Goal0_3, (MR_Integer) 1)));
#line 56 "parallel_to_plain_conj.m"
    MR_Word transform_hlds__parallel_to_plain_conj__GoalExpr_10;

#line 62 "parallel_to_plain_conj.m"
    if (((MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5)) == (MR_mktag((MR_Integer) 0))))
#line 77 "parallel_to_plain_conj.m"
      {
#line 77 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__SubGoal0_22 = (MR_Word) MR_body(((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5), (MR_Integer) 0);
#line 77 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__SubGoal_23;

#line 78 "parallel_to_plain_conj.m"
        {
#line 78 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__SubGoal0_22, &transform_hlds__parallel_to_plain_conj__SubGoal_23);
        }
#line 79 "parallel_to_plain_conj.m"
        transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__parallel_to_plain_conj__SubGoal_23);
#line 77 "parallel_to_plain_conj.m"
      }
#line 62 "parallel_to_plain_conj.m"
    else
#line 62 "parallel_to_plain_conj.m"
      if (((((MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 59 "parallel_to_plain_conj.m"
        {
#line 59 "parallel_to_plain_conj.m"
          MR_Word transform_hlds__parallel_to_plain_conj__Goals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 2)));
#line 59 "parallel_to_plain_conj.m"
          MR_Word transform_hlds__parallel_to_plain_conj__Goals_9;
#line 59 "parallel_to_plain_conj.m"
          MR_Word transform_hlds__parallel_to_plain_conj___ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));

#line 60 "parallel_to_plain_conj.m"
          {
#line 60 "parallel_to_plain_conj.m"
            transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(transform_hlds__parallel_to_plain_conj__Goals0_8, &transform_hlds__parallel_to_plain_conj__Goals_9);
          }
#line 61 "parallel_to_plain_conj.m"
          {
#line 61 "parallel_to_plain_conj.m"
            transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 61 "parallel_to_plain_conj.m"
            MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 61 "parallel_to_plain_conj.m"
            MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 61 "parallel_to_plain_conj.m"
            MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goals_9));
#line 61 "parallel_to_plain_conj.m"
          }
#line 59 "parallel_to_plain_conj.m"
        }
#line 62 "parallel_to_plain_conj.m"
      else
#line 62 "parallel_to_plain_conj.m"
        if (((((MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 63 "parallel_to_plain_conj.m"
          {
#line 63 "parallel_to_plain_conj.m"
            MR_Word transform_hlds__parallel_to_plain_conj__Goals0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));
#line 63 "parallel_to_plain_conj.m"
            MR_Word transform_hlds__parallel_to_plain_conj__Goals_56;

#line 64 "parallel_to_plain_conj.m"
            {
#line 64 "parallel_to_plain_conj.m"
              transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(transform_hlds__parallel_to_plain_conj__Goals0_55, &transform_hlds__parallel_to_plain_conj__Goals_56);
            }
#line 65 "parallel_to_plain_conj.m"
            {
#line 65 "parallel_to_plain_conj.m"
              transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 65 "parallel_to_plain_conj.m"
              MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 65 "parallel_to_plain_conj.m"
              MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goals_56));
#line 65 "parallel_to_plain_conj.m"
            }
#line 63 "parallel_to_plain_conj.m"
          }
#line 62 "parallel_to_plain_conj.m"
        else
#line 62 "parallel_to_plain_conj.m"
          if (((((MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 71 "parallel_to_plain_conj.m"
            {
#line 71 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__QuantVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));
#line 71 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Cond0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 2)));
#line 71 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Then0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 3)));
#line 71 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Else0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 4)));
#line 71 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Cond_19;
#line 71 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Then_20;
#line 71 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Else_21;

#line 72 "parallel_to_plain_conj.m"
              {
#line 72 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Cond0_16, &transform_hlds__parallel_to_plain_conj__Cond_19);
              }
#line 73 "parallel_to_plain_conj.m"
              {
#line 73 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Then0_17, &transform_hlds__parallel_to_plain_conj__Then_20);
              }
#line 74 "parallel_to_plain_conj.m"
              {
#line 74 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Else0_18, &transform_hlds__parallel_to_plain_conj__Else_21);
              }
#line 75 "parallel_to_plain_conj.m"
              {
#line 75 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 75 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 75 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__QuantVars_15));
#line 75 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Cond_19));
#line 75 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 3) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Then_20));
#line 75 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 4) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Else_21));
#line 75 "parallel_to_plain_conj.m"
              }
#line 71 "parallel_to_plain_conj.m"
            }
#line 62 "parallel_to_plain_conj.m"
          else
#line 62 "parallel_to_plain_conj.m"
            if (((((MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 81 "parallel_to_plain_conj.m"
              {
#line 81 "parallel_to_plain_conj.m"
                MR_Word transform_hlds__parallel_to_plain_conj__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));
#line 81 "parallel_to_plain_conj.m"
                MR_Word transform_hlds__parallel_to_plain_conj__SubGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 2)));
#line 81 "parallel_to_plain_conj.m"
                MR_Word transform_hlds__parallel_to_plain_conj__SubGoal_58;
#line 83 "parallel_to_plain_conj.m"
                MR_Word transform_hlds__parallel_to_plain_conj__FGT_26;
#line 83 "parallel_to_plain_conj.m"
                MR_Word transform_hlds__parallel_to_plain_conj__V_25_25;

#line 83 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__succeeded = ((((MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 83 "parallel_to_plain_conj.m"
                if (transform_hlds__parallel_to_plain_conj__succeeded)
#line 83 "parallel_to_plain_conj.m"
                  {
#line 83 "parallel_to_plain_conj.m"
                    transform_hlds__parallel_to_plain_conj__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__Reason_24, (MR_Integer) 1)));
#line 83 "parallel_to_plain_conj.m"
                    transform_hlds__parallel_to_plain_conj__FGT_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__Reason_24, (MR_Integer) 2)));
#line 85 "parallel_to_plain_conj.m"
                    if ((transform_hlds__parallel_to_plain_conj__FGT_26 == (MR_Integer) 1))
#line 84 "parallel_to_plain_conj.m"
                      transform_hlds__parallel_to_plain_conj__succeeded = MR_TRUE;
#line 85 "parallel_to_plain_conj.m"
                    else
#line 85 "parallel_to_plain_conj.m"
                      if ((transform_hlds__parallel_to_plain_conj__FGT_26 == (MR_Integer) 2))
#line 85 "parallel_to_plain_conj.m"
                        transform_hlds__parallel_to_plain_conj__succeeded = MR_TRUE;
#line 85 "parallel_to_plain_conj.m"
                      else
#line 85 "parallel_to_plain_conj.m"
                        transform_hlds__parallel_to_plain_conj__succeeded = MR_FALSE;
#line 83 "parallel_to_plain_conj.m"
                  }
#line 90 "parallel_to_plain_conj.m"
                if (transform_hlds__parallel_to_plain_conj__succeeded)
#line 89 "parallel_to_plain_conj.m"
                  transform_hlds__parallel_to_plain_conj__SubGoal_58 = transform_hlds__parallel_to_plain_conj__SubGoal0_57;
#line 90 "parallel_to_plain_conj.m"
                else
#line 91 "parallel_to_plain_conj.m"
                  {
#line 91 "parallel_to_plain_conj.m"
                    transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__SubGoal0_57, &transform_hlds__parallel_to_plain_conj__SubGoal_58);
                  }
#line 93 "parallel_to_plain_conj.m"
                {
#line 93 "parallel_to_plain_conj.m"
                  transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 93 "parallel_to_plain_conj.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 93 "parallel_to_plain_conj.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Reason_24));
#line 93 "parallel_to_plain_conj.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__SubGoal_58));
#line 93 "parallel_to_plain_conj.m"
                }
#line 81 "parallel_to_plain_conj.m"
              }
#line 62 "parallel_to_plain_conj.m"
            else
#line 62 "parallel_to_plain_conj.m"
              if (((((MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 102 "parallel_to_plain_conj.m"
                {
#line 104 "parallel_to_plain_conj.m"
                  {
#line 104 "parallel_to_plain_conj.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.parallel_to_plain_conj", (MR_String) "predicate \140transform_hlds.parallel_to_plain_conj.parallel_to_plain_conjs_goal\'/2", (MR_String) "shorthand");
#line 104 "parallel_to_plain_conj.m"
                    return;
                  }
#line 102 "parallel_to_plain_conj.m"
                }
#line 62 "parallel_to_plain_conj.m"
              else
#line 62 "parallel_to_plain_conj.m"
                if (((((MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 67 "parallel_to_plain_conj.m"
                  {
#line 67 "parallel_to_plain_conj.m"
                    MR_Word transform_hlds__parallel_to_plain_conj__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));
#line 67 "parallel_to_plain_conj.m"
                    MR_Word transform_hlds__parallel_to_plain_conj__CanFail_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 2)));
#line 67 "parallel_to_plain_conj.m"
                    MR_Word transform_hlds__parallel_to_plain_conj__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 3)));
#line 67 "parallel_to_plain_conj.m"
                    MR_Word transform_hlds__parallel_to_plain_conj__Cases_14;

#line 68 "parallel_to_plain_conj.m"
                    {
#line 68 "parallel_to_plain_conj.m"
                      transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(transform_hlds__parallel_to_plain_conj__Cases0_13, &transform_hlds__parallel_to_plain_conj__Cases_14);
                    }
#line 69 "parallel_to_plain_conj.m"
                    {
#line 69 "parallel_to_plain_conj.m"
                      transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 69 "parallel_to_plain_conj.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 69 "parallel_to_plain_conj.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Var_11));
#line 69 "parallel_to_plain_conj.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__CanFail_12));
#line 69 "parallel_to_plain_conj.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 3) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Cases_14));
#line 69 "parallel_to_plain_conj.m"
                    }
#line 67 "parallel_to_plain_conj.m"
                  }
#line 62 "parallel_to_plain_conj.m"
                else
#line 100 "parallel_to_plain_conj.m"
                  transform_hlds__parallel_to_plain_conj__GoalExpr_10 = transform_hlds__parallel_to_plain_conj__GoalExpr0_5;
#line 106 "parallel_to_plain_conj.m"
    {
#line 106 "parallel_to_plain_conj.m"
      MR_Word base;
#line 106 "parallel_to_plain_conj.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 106 "parallel_to_plain_conj.m"
      *transform_hlds__parallel_to_plain_conj__Goal_4 = base;
#line 106 "parallel_to_plain_conj.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__GoalExpr_10));
#line 106 "parallel_to_plain_conj.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__GoalInfo0_6));
#line 106 "parallel_to_plain_conj.m"
    }
#line 56 "parallel_to_plain_conj.m"
  }
#line 54 "parallel_to_plain_conj.m"
}

#line 27 "parallel_to_plain_conj.m"
void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_3_p_0(
#line 27 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj___ModuleInfo_4,
#line 27 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_9,
#line 27 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_10)
#line 27 "parallel_to_plain_conj.m"
{
#line 43 "parallel_to_plain_conj.m"
  {
#line 43 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;

#line 43 "parallel_to_plain_conj.m"
    {
#line 43 "parallel_to_plain_conj.m"
      transform_hlds__parallel_to_plain_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_9, transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_10);
#line 43 "parallel_to_plain_conj.m"
      return;
    }
#line 43 "parallel_to_plain_conj.m"
  }
#line 27 "parallel_to_plain_conj.m"
}

void mercury__transform_hlds__parallel_to_plain_conj__init(void)
{
}

void mercury__transform_hlds__parallel_to_plain_conj__init_type_tables(void)
{
}

void mercury__transform_hlds__parallel_to_plain_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.parallel_to_plain_conj. */
