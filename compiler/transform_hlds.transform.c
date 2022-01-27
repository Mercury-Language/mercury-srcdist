/*
** Automatically generated from `transform.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module transform_hlds.transform. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__transform__init
ENDINIT
*/

#include "transform_hlds.transform.mih"


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










#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 44 "transform.m"
void MR_CALL 
transform_hlds__transform__reschedule_conj_4_p_0(
#line 44 "transform.m"
  MR_Word transform_hlds__transform__HeadVar__1_1,
#line 44 "transform.m"
  MR_Word * transform_hlds__transform__HeadVar__2_2,
#line 44 "transform.m"
  MR_Word transform_hlds__transform__STATE_VARIABLE_ModeInfo_0_3,
#line 44 "transform.m"
  MR_Word * transform_hlds__transform__STATE_VARIABLE_ModeInfo_4)
#line 44 "transform.m"
{
#line 57 "transform.m"
  while (MR_TRUE)
#line 57 "transform.m"
    {
#line 57 "transform.m"
      /* tailcall optimized into a loop */
#line 57 "transform.m"
      {
#line 57 "transform.m"
        MR_bool transform_hlds__transform__succeeded;

#line 57 "transform.m"
        if ((transform_hlds__transform__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 57 "transform.m"
          {
#line 57 "transform.m"
            *transform_hlds__transform__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 57 "transform.m"
            *transform_hlds__transform__STATE_VARIABLE_ModeInfo_4 = transform_hlds__transform__STATE_VARIABLE_ModeInfo_0_3;
#line 57 "transform.m"
          }
#line 57 "transform.m"
        else
#line 58 "transform.m"
          {
#line 58 "transform.m"
            MR_Word transform_hlds__transform__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__transform__HeadVar__1_1, (MR_Integer) 0)));
#line 58 "transform.m"
            MR_Word transform_hlds__transform__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__transform__HeadVar__1_1, (MR_Integer) 1)));
#line 58 "transform.m"
            MR_Word transform_hlds__transform__InstMap0_12;
#line 58 "transform.m"
            MR_Word transform_hlds__transform__DelayInfo0_13;
#line 58 "transform.m"
            MR_Word transform_hlds__transform__WokenGoals_14;
#line 58 "transform.m"
            MR_Word transform_hlds__transform__DelayInfo1_15;
#line 58 "transform.m"
            MR_Word transform_hlds__transform__STATE_VARIABLE_ModeInfo_25_25;

#line 59 "transform.m"
            {
#line 59 "transform.m"
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(transform_hlds__transform__STATE_VARIABLE_ModeInfo_0_3, &transform_hlds__transform__InstMap0_12);
            }
#line 60 "transform.m"
            {
#line 60 "transform.m"
              check_hlds__mode_info__mode_info_get_delay_info_2_p_0(transform_hlds__transform__STATE_VARIABLE_ModeInfo_0_3, &transform_hlds__transform__DelayInfo0_13);
            }
#line 62 "transform.m"
            {
#line 62 "transform.m"
              check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(&transform_hlds__transform__WokenGoals_14, transform_hlds__transform__DelayInfo0_13, &transform_hlds__transform__DelayInfo1_15);
            }
#line 63 "transform.m"
            {
#line 63 "transform.m"
              check_hlds__mode_info__mode_info_set_delay_info_3_p_0(transform_hlds__transform__DelayInfo1_15, transform_hlds__transform__STATE_VARIABLE_ModeInfo_0_3, &transform_hlds__transform__STATE_VARIABLE_ModeInfo_25_25);
            }
#line 68 "transform.m"
            if ((transform_hlds__transform__WokenGoals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 69 "transform.m"
              {
#line 69 "transform.m"
                MR_Word transform_hlds__transform__Goal0Info_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__transform__Goal0_8, (MR_Integer) 1)));
#line 69 "transform.m"
                MR_Word transform_hlds__transform__InstMapDelta_21;
#line 69 "transform.m"
                MR_Word transform_hlds__transform__InstMap1_22;
#line 69 "transform.m"
                MR_Word transform_hlds__transform__STATE_VARIABLE_ModeInfo_26_26;
#line 69 "transform.m"
                MR_Word transform_hlds__transform__Goals1_30;
#line 70 "transform.m"
                MR_Word transform_hlds__transform___Goal0Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__transform__Goal0_8, (MR_Integer) 0)));

#line 71 "transform.m"
                {
#line 71 "transform.m"
                  transform_hlds__transform__InstMapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__transform__Goal0Info_20);
                }
#line 72 "transform.m"
                {
#line 72 "transform.m"
                  hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__transform__InstMap0_12, transform_hlds__transform__InstMapDelta_21, &transform_hlds__transform__InstMap1_22);
                }
#line 73 "transform.m"
                {
#line 73 "transform.m"
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(transform_hlds__transform__InstMap1_22, transform_hlds__transform__STATE_VARIABLE_ModeInfo_25_25, &transform_hlds__transform__STATE_VARIABLE_ModeInfo_26_26);
                }
#line 74 "transform.m"
                {
#line 74 "transform.m"
                  transform_hlds__transform__reschedule_conj_4_p_0(transform_hlds__transform__Goals0_9, &transform_hlds__transform__Goals1_30, transform_hlds__transform__STATE_VARIABLE_ModeInfo_26_26, transform_hlds__transform__STATE_VARIABLE_ModeInfo_4);
                }
#line 75 "transform.m"
                {
#line 75 "transform.m"
                  MR_Word base;
#line 75 "transform.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 75 "transform.m"
                  *transform_hlds__transform__HeadVar__2_2 = base;
#line 75 "transform.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__transform__Goal0_8));
#line 75 "transform.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__transform__Goals1_30));
#line 75 "transform.m"
                }
#line 69 "transform.m"
              }
#line 68 "transform.m"
            else
#line 65 "transform.m"
              {
#line 65 "transform.m"
                MR_Word transform_hlds__transform__Goals1_18;

#line 66 "transform.m"
                {
#line 66 "transform.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__transform__WokenGoals_14, transform_hlds__transform__HeadVar__1_1, &transform_hlds__transform__Goals1_18);
                }
#line 67 "transform.m"
                /* direct tailcall eliminated */
#line 67 "transform.m"
                {
#line 67 "transform.m"
                  MR_Word transform_hlds__transform__HeadVar__1__tmp_copy_1 = transform_hlds__transform__Goals1_18;
#line 67 "transform.m"
                  MR_Word transform_hlds__transform__STATE_VARIABLE_ModeInfo_0__tmp_copy_3 = transform_hlds__transform__STATE_VARIABLE_ModeInfo_25_25;

#line 67 "transform.m"
                  transform_hlds__transform__STATE_VARIABLE_ModeInfo_0_3 = transform_hlds__transform__STATE_VARIABLE_ModeInfo_0__tmp_copy_3;
#line 67 "transform.m"
                  transform_hlds__transform__HeadVar__1_1 = transform_hlds__transform__HeadVar__1__tmp_copy_1;
#line 67 "transform.m"
                }
#line 67 "transform.m"
                continue;
#line 65 "transform.m"
              }
#line 58 "transform.m"
          }
#line 57 "transform.m"
      }
#line 57 "transform.m"
      break;
#line 57 "transform.m"
    }
#line 44 "transform.m"
}

void mercury__transform_hlds__transform__init(void)
{
}

void mercury__transform_hlds__transform__init_type_tables(void)
{
}

void mercury__transform_hlds__transform__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.transform. */
