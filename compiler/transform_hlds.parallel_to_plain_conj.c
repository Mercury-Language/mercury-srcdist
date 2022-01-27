/*
** Automatically generated from `parallel_to_plain_conj.m'
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


/* :- module transform_hlds.parallel_to_plain_conj. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__parallel_to_plain_conj__init
ENDINIT
*/

#include "transform_hlds.parallel_to_plain_conj.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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




#line 133 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(
#line 133 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__HeadVar__1_1,
#line 133 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__HeadVar__2_2);

#line 125 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(
#line 125 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__HeadVar__1_1,
#line 125 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__HeadVar__2_2);

#line 71 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(
#line 71 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__Goal0_3,
#line 71 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__Goal_4);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 27 "parallel_to_plain_conj.m"
void MR_CALL 
transform_hlds__parallel_to_plain_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_44_32_50_93_95_48_4_p_0(
#line 27 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_15,
#line 27 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_16)
#line 27 "parallel_to_plain_conj.m"
{
#line 44 "parallel_to_plain_conj.m"
  {
#line 44 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;
#line 44 "parallel_to_plain_conj.m"
    MR_Word transform_hlds__parallel_to_plain_conj__HasParallelConj_8;

#line 45 "parallel_to_plain_conj.m"
    {
#line 45 "parallel_to_plain_conj.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_15, &transform_hlds__parallel_to_plain_conj__HasParallelConj_8);
    }
#line 61 "parallel_to_plain_conj.m"
#line 61 "parallel_to_plain_conj.m"
    switch (transform_hlds__parallel_to_plain_conj__HasParallelConj_8) {
#line 61 "parallel_to_plain_conj.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 61 "parallel_to_plain_conj.m"
      case (MR_Integer) 1:
#line 60 "parallel_to_plain_conj.m"
        *transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_16 = transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_15;
#line 61 "parallel_to_plain_conj.m"
        break;
#line 61 "parallel_to_plain_conj.m"
      case (MR_Integer) 0:
#line 62 "parallel_to_plain_conj.m"
        {
#line 62 "parallel_to_plain_conj.m"
          MR_Word transform_hlds__parallel_to_plain_conj__Goal0_13;
#line 62 "parallel_to_plain_conj.m"
          MR_Word transform_hlds__parallel_to_plain_conj__Goal_14;
#line 62 "parallel_to_plain_conj.m"
          MR_Word transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_29_29;

#line 63 "parallel_to_plain_conj.m"
          {
#line 63 "parallel_to_plain_conj.m"
            hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_15, &transform_hlds__parallel_to_plain_conj__Goal0_13);
          }
#line 64 "parallel_to_plain_conj.m"
          {
#line 64 "parallel_to_plain_conj.m"
            transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Goal0_13, &transform_hlds__parallel_to_plain_conj__Goal_14);
          }
#line 65 "parallel_to_plain_conj.m"
          {
#line 65 "parallel_to_plain_conj.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__parallel_to_plain_conj__Goal_14, transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_15, &transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_29_29);
          }
#line 68 "parallel_to_plain_conj.m"
          {
#line 68 "parallel_to_plain_conj.m"
            hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 1, transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_29_29, transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_16);
#line 68 "parallel_to_plain_conj.m"
            return;
          }
#line 62 "parallel_to_plain_conj.m"
        }
#line 61 "parallel_to_plain_conj.m"
        break;
#line 61 "parallel_to_plain_conj.m"
    }
#line 44 "parallel_to_plain_conj.m"
  }
#line 27 "parallel_to_plain_conj.m"
}

#line 133 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(
#line 133 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__HeadVar__1_1,
#line 133 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__HeadVar__2_2)
#line 133 "parallel_to_plain_conj.m"
{
#line 135 "parallel_to_plain_conj.m"
  {
#line 135 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;

#line 135 "parallel_to_plain_conj.m"
    if ((transform_hlds__parallel_to_plain_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "parallel_to_plain_conj.m"
      *transform_hlds__parallel_to_plain_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 135 "parallel_to_plain_conj.m"
    else
#line 136 "parallel_to_plain_conj.m"
      {
#line 136 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Case0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__parallel_to_plain_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Cases0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__parallel_to_plain_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Case_5;
#line 136 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Cases_6;
#line 136 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case0_3, (MR_Integer) 0)));
#line 136 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case0_3, (MR_Integer) 1)));
#line 136 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case0_3, (MR_Integer) 2)));
#line 136 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal_10;

#line 138 "parallel_to_plain_conj.m"
        {
#line 138 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Goal0_9, &transform_hlds__parallel_to_plain_conj__Goal_10);
        }
#line 139 "parallel_to_plain_conj.m"
        {
#line 139 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__Case_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 139 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case_5, 0) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__MainConsId_7));
#line 139 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case_5, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__OtherConsIds_8));
#line 139 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Case_5, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goal_10));
#line 139 "parallel_to_plain_conj.m"
        }
#line 140 "parallel_to_plain_conj.m"
        {
#line 140 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(transform_hlds__parallel_to_plain_conj__Cases0_4, &transform_hlds__parallel_to_plain_conj__Cases_6);
        }
#line 136 "parallel_to_plain_conj.m"
        {
#line 136 "parallel_to_plain_conj.m"
          MR_Word base;
#line 136 "parallel_to_plain_conj.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "parallel_to_plain_conj.m"
          *transform_hlds__parallel_to_plain_conj__HeadVar__2_2 = base;
#line 136 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Case_5));
#line 136 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Cases_6));
#line 136 "parallel_to_plain_conj.m"
        }
#line 136 "parallel_to_plain_conj.m"
      }
#line 135 "parallel_to_plain_conj.m"
  }
#line 133 "parallel_to_plain_conj.m"
}

#line 125 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(
#line 125 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__HeadVar__1_1,
#line 125 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__HeadVar__2_2)
#line 125 "parallel_to_plain_conj.m"
{
#line 128 "parallel_to_plain_conj.m"
  {
#line 128 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;

#line 128 "parallel_to_plain_conj.m"
    if ((transform_hlds__parallel_to_plain_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "parallel_to_plain_conj.m"
      *transform_hlds__parallel_to_plain_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 128 "parallel_to_plain_conj.m"
    else
#line 129 "parallel_to_plain_conj.m"
      {
#line 129 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__parallel_to_plain_conj__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__parallel_to_plain_conj__HeadVar__1_1, (MR_Integer) 1)));
#line 129 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goal_5;
#line 129 "parallel_to_plain_conj.m"
        MR_Word transform_hlds__parallel_to_plain_conj__Goals_6;

#line 130 "parallel_to_plain_conj.m"
        {
#line 130 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Goal0_3, &transform_hlds__parallel_to_plain_conj__Goal_5);
        }
#line 131 "parallel_to_plain_conj.m"
        {
#line 131 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(transform_hlds__parallel_to_plain_conj__Goals0_4, &transform_hlds__parallel_to_plain_conj__Goals_6);
        }
#line 129 "parallel_to_plain_conj.m"
        {
#line 129 "parallel_to_plain_conj.m"
          MR_Word base;
#line 129 "parallel_to_plain_conj.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "parallel_to_plain_conj.m"
          *transform_hlds__parallel_to_plain_conj__HeadVar__2_2 = base;
#line 129 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goal_5));
#line 129 "parallel_to_plain_conj.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goals_6));
#line 129 "parallel_to_plain_conj.m"
        }
#line 129 "parallel_to_plain_conj.m"
      }
#line 128 "parallel_to_plain_conj.m"
  }
#line 125 "parallel_to_plain_conj.m"
}

#line 71 "parallel_to_plain_conj.m"
static void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(
#line 71 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__Goal0_3,
#line 71 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__Goal_4)
#line 71 "parallel_to_plain_conj.m"
{
#line 73 "parallel_to_plain_conj.m"
  {
#line 73 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;
#line 73 "parallel_to_plain_conj.m"
    MR_Word transform_hlds__parallel_to_plain_conj__GoalExpr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Goal0_3, (MR_Integer) 0)));
#line 73 "parallel_to_plain_conj.m"
    MR_Word transform_hlds__parallel_to_plain_conj__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__parallel_to_plain_conj__Goal0_3, (MR_Integer) 1)));
#line 73 "parallel_to_plain_conj.m"
    MR_Word transform_hlds__parallel_to_plain_conj__GoalExpr_10;

#line 79 "parallel_to_plain_conj.m"
#line 79 "parallel_to_plain_conj.m"
    switch (MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5)) {
#line 79 "parallel_to_plain_conj.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 79 "parallel_to_plain_conj.m"
      case (MR_Integer) 0:
#line 94 "parallel_to_plain_conj.m"
        {
#line 94 "parallel_to_plain_conj.m"
          MR_Word transform_hlds__parallel_to_plain_conj__SubGoal0_22 = (MR_Word) MR_body(((MR_Word) transform_hlds__parallel_to_plain_conj__GoalExpr0_5), (MR_Integer) 0);
#line 94 "parallel_to_plain_conj.m"
          MR_Word transform_hlds__parallel_to_plain_conj__SubGoal_23;

#line 95 "parallel_to_plain_conj.m"
          {
#line 95 "parallel_to_plain_conj.m"
            transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__SubGoal0_22, &transform_hlds__parallel_to_plain_conj__SubGoal_23);
          }
#line 96 "parallel_to_plain_conj.m"
          transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__parallel_to_plain_conj__SubGoal_23);
#line 94 "parallel_to_plain_conj.m"
        }
#line 79 "parallel_to_plain_conj.m"
        break;
#line 79 "parallel_to_plain_conj.m"
      case (MR_Integer) 1:
#line 79 "parallel_to_plain_conj.m"
      case (MR_Integer) 2:
#line 117 "parallel_to_plain_conj.m"
        transform_hlds__parallel_to_plain_conj__GoalExpr_10 = transform_hlds__parallel_to_plain_conj__GoalExpr0_5;
#line 79 "parallel_to_plain_conj.m"
        break;
#line 79 "parallel_to_plain_conj.m"
      case (MR_Integer) 3:
#line 79 "parallel_to_plain_conj.m"
#line 79 "parallel_to_plain_conj.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 0)))) {
#line 79 "parallel_to_plain_conj.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 79 "parallel_to_plain_conj.m"
          case (MR_Integer) 0:
#line 79 "parallel_to_plain_conj.m"
          case (MR_Integer) 1:
#line 117 "parallel_to_plain_conj.m"
            transform_hlds__parallel_to_plain_conj__GoalExpr_10 = transform_hlds__parallel_to_plain_conj__GoalExpr0_5;
#line 79 "parallel_to_plain_conj.m"
            break;
#line 79 "parallel_to_plain_conj.m"
          case (MR_Integer) 2:
#line 76 "parallel_to_plain_conj.m"
            {
#line 76 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Goals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 2)));
#line 76 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Goals_9;
#line 76 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj___ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));

#line 77 "parallel_to_plain_conj.m"
              {
#line 77 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(transform_hlds__parallel_to_plain_conj__Goals0_8, &transform_hlds__parallel_to_plain_conj__Goals_9);
              }
#line 78 "parallel_to_plain_conj.m"
              {
#line 78 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 78 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 78 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 78 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goals_9));
#line 78 "parallel_to_plain_conj.m"
              }
#line 76 "parallel_to_plain_conj.m"
            }
#line 79 "parallel_to_plain_conj.m"
            break;
#line 79 "parallel_to_plain_conj.m"
          case (MR_Integer) 3:
#line 80 "parallel_to_plain_conj.m"
            {
#line 80 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Goals0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));
#line 80 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Goals_56;

#line 81 "parallel_to_plain_conj.m"
              {
#line 81 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goals_2_p_0(transform_hlds__parallel_to_plain_conj__Goals0_55, &transform_hlds__parallel_to_plain_conj__Goals_56);
              }
#line 82 "parallel_to_plain_conj.m"
              {
#line 82 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 82 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 82 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Goals_56));
#line 82 "parallel_to_plain_conj.m"
              }
#line 80 "parallel_to_plain_conj.m"
            }
#line 79 "parallel_to_plain_conj.m"
            break;
#line 79 "parallel_to_plain_conj.m"
          case (MR_Integer) 4:
#line 84 "parallel_to_plain_conj.m"
            {
#line 84 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));
#line 84 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__CanFail_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 2)));
#line 84 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 3)));
#line 84 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Cases_14;

#line 85 "parallel_to_plain_conj.m"
              {
#line 85 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_cases_2_p_0(transform_hlds__parallel_to_plain_conj__Cases0_13, &transform_hlds__parallel_to_plain_conj__Cases_14);
              }
#line 86 "parallel_to_plain_conj.m"
              {
#line 86 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 86 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 86 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Var_11));
#line 86 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__CanFail_12));
#line 86 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 3) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Cases_14));
#line 86 "parallel_to_plain_conj.m"
              }
#line 84 "parallel_to_plain_conj.m"
            }
#line 79 "parallel_to_plain_conj.m"
            break;
#line 79 "parallel_to_plain_conj.m"
          case (MR_Integer) 5:
#line 98 "parallel_to_plain_conj.m"
            {
#line 98 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));
#line 98 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__SubGoal0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 2)));
#line 100 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__FGT_26;
#line 100 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__V_25_25;

#line 100 "parallel_to_plain_conj.m"
              transform_hlds__parallel_to_plain_conj__succeeded = ((((MR_tag((MR_Word) transform_hlds__parallel_to_plain_conj__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 100 "parallel_to_plain_conj.m"
              if (transform_hlds__parallel_to_plain_conj__succeeded)
#line 100 "parallel_to_plain_conj.m"
                {
#line 100 "parallel_to_plain_conj.m"
                  transform_hlds__parallel_to_plain_conj__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__Reason_24, (MR_Integer) 1)));
#line 100 "parallel_to_plain_conj.m"
                  transform_hlds__parallel_to_plain_conj__FGT_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__Reason_24, (MR_Integer) 2)));
#line 102 "parallel_to_plain_conj.m"
#line 102 "parallel_to_plain_conj.m"
                  switch (transform_hlds__parallel_to_plain_conj__FGT_26) {
#line 102 "parallel_to_plain_conj.m"
                    default:
#line 102 "parallel_to_plain_conj.m"
                      transform_hlds__parallel_to_plain_conj__succeeded = MR_FALSE;
#line 102 "parallel_to_plain_conj.m"
                      break;
#line 102 "parallel_to_plain_conj.m"
                    case (MR_Integer) 1:
#line 101 "parallel_to_plain_conj.m"
                      transform_hlds__parallel_to_plain_conj__succeeded = MR_TRUE;
#line 102 "parallel_to_plain_conj.m"
                      break;
#line 102 "parallel_to_plain_conj.m"
                    case (MR_Integer) 2:
#line 102 "parallel_to_plain_conj.m"
                      transform_hlds__parallel_to_plain_conj__succeeded = MR_TRUE;
#line 102 "parallel_to_plain_conj.m"
                      break;
#line 102 "parallel_to_plain_conj.m"
                  }
#line 100 "parallel_to_plain_conj.m"
                }
#line 107 "parallel_to_plain_conj.m"
              if (transform_hlds__parallel_to_plain_conj__succeeded)
#line 106 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__GoalExpr_10 = transform_hlds__parallel_to_plain_conj__GoalExpr0_5;
#line 107 "parallel_to_plain_conj.m"
              else
#line 108 "parallel_to_plain_conj.m"
                {
#line 108 "parallel_to_plain_conj.m"
                  MR_Word transform_hlds__parallel_to_plain_conj__SubGoal_57;

#line 108 "parallel_to_plain_conj.m"
                  {
#line 108 "parallel_to_plain_conj.m"
                    transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__SubGoal0_59, &transform_hlds__parallel_to_plain_conj__SubGoal_57);
                  }
#line 109 "parallel_to_plain_conj.m"
                  {
#line 109 "parallel_to_plain_conj.m"
                    transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 109 "parallel_to_plain_conj.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 109 "parallel_to_plain_conj.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Reason_24));
#line 109 "parallel_to_plain_conj.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__SubGoal_57));
#line 109 "parallel_to_plain_conj.m"
                  }
#line 108 "parallel_to_plain_conj.m"
                }
#line 98 "parallel_to_plain_conj.m"
            }
#line 79 "parallel_to_plain_conj.m"
            break;
#line 79 "parallel_to_plain_conj.m"
          case (MR_Integer) 6:
#line 88 "parallel_to_plain_conj.m"
            {
#line 88 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__QuantVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 1)));
#line 88 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Cond0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 2)));
#line 88 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Then0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 3)));
#line 88 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Else0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr0_5, (MR_Integer) 4)));
#line 88 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Cond_19;
#line 88 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Then_20;
#line 88 "parallel_to_plain_conj.m"
              MR_Word transform_hlds__parallel_to_plain_conj__Else_21;

#line 89 "parallel_to_plain_conj.m"
              {
#line 89 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Cond0_16, &transform_hlds__parallel_to_plain_conj__Cond_19);
              }
#line 90 "parallel_to_plain_conj.m"
              {
#line 90 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Then0_17, &transform_hlds__parallel_to_plain_conj__Then_20);
              }
#line 91 "parallel_to_plain_conj.m"
              {
#line 91 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_goal_2_p_0(transform_hlds__parallel_to_plain_conj__Else0_18, &transform_hlds__parallel_to_plain_conj__Else_21);
              }
#line 92 "parallel_to_plain_conj.m"
              {
#line 92 "parallel_to_plain_conj.m"
                transform_hlds__parallel_to_plain_conj__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 92 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 92 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__QuantVars_15));
#line 92 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 2) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Cond_19));
#line 92 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 3) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Then_20));
#line 92 "parallel_to_plain_conj.m"
                MR_hl_field(MR_mktag(3), transform_hlds__parallel_to_plain_conj__GoalExpr_10, 4) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__Else_21));
#line 92 "parallel_to_plain_conj.m"
              }
#line 88 "parallel_to_plain_conj.m"
            }
#line 79 "parallel_to_plain_conj.m"
            break;
#line 79 "parallel_to_plain_conj.m"
          case (MR_Integer) 7:
#line 119 "parallel_to_plain_conj.m"
            {
#line 121 "parallel_to_plain_conj.m"
              {
#line 121 "parallel_to_plain_conj.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.parallel_to_plain_conj", (MR_String) "predicate \140transform_hlds.parallel_to_plain_conj.parallel_to_plain_conjs_goal\'/2", (MR_String) "shorthand");
#line 121 "parallel_to_plain_conj.m"
                return;
              }
#line 119 "parallel_to_plain_conj.m"
            }
#line 79 "parallel_to_plain_conj.m"
            break;
#line 79 "parallel_to_plain_conj.m"
        }
#line 79 "parallel_to_plain_conj.m"
        break;
#line 79 "parallel_to_plain_conj.m"
    }
#line 123 "parallel_to_plain_conj.m"
    {
#line 123 "parallel_to_plain_conj.m"
      MR_Word base;
#line 123 "parallel_to_plain_conj.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "parallel_to_plain_conj.m"
      *transform_hlds__parallel_to_plain_conj__Goal_4 = base;
#line 123 "parallel_to_plain_conj.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__GoalExpr_10));
#line 123 "parallel_to_plain_conj.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__parallel_to_plain_conj__GoalInfo0_6));
#line 123 "parallel_to_plain_conj.m"
    }
#line 73 "parallel_to_plain_conj.m"
  }
#line 71 "parallel_to_plain_conj.m"
}

#line 27 "parallel_to_plain_conj.m"
void MR_CALL 
transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_4_p_0(
#line 27 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj___ModuleInfo_5,
#line 27 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__PredProcId_6,
#line 27 "parallel_to_plain_conj.m"
  MR_Word transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_15,
#line 27 "parallel_to_plain_conj.m"
  MR_Word * transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_16)
#line 27 "parallel_to_plain_conj.m"
{
#line 44 "parallel_to_plain_conj.m"
  {
#line 44 "parallel_to_plain_conj.m"
    MR_bool transform_hlds__parallel_to_plain_conj__succeeded;

#line 44 "parallel_to_plain_conj.m"
    {
#line 44 "parallel_to_plain_conj.m"
      transform_hlds__parallel_to_plain_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_97_108_108_101_108_95_116_111_95_112_108_97_105_110_95_99_111_110_106_115_95_95_91_49_44_32_50_93_95_48_4_p_0(transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_0_15, transform_hlds__parallel_to_plain_conj__STATE_VARIABLE_ProcInfo_16);
#line 44 "parallel_to_plain_conj.m"
      return;
    }
#line 44 "parallel_to_plain_conj.m"
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
