/*
** Automatically generated from `transform.m'
** by the Mercury compiler,
** version rotd-2019-06-28
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module transform_hlds.transform.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



void MR_CALL 
transform_hlds__transform__reschedule_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModeInfo_0_3,
  MR_Word * STATE_VARIABLE_ModeInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModeInfo_4 = STATE_VARIABLE_ModeInfo_0_3;
    }
    else
    {
      MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InstMap0_12;
      MR_Word DelayInfo0_13;
      MR_Word WokenGoals_14;
      MR_Word DelayInfo1_15;
      MR_Word STATE_VARIABLE_ModeInfo_25_25;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_3, &InstMap0_12);
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(STATE_VARIABLE_ModeInfo_0_3, &DelayInfo0_13);
      check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(&WokenGoals_14, DelayInfo0_13, &DelayInfo1_15);
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo1_15, STATE_VARIABLE_ModeInfo_0_3, &STATE_VARIABLE_ModeInfo_25_25);
      if ((WokenGoals_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Goal0Info_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1))));
        MR_Word InstMapDelta_21;
        MR_Word InstMap1_22;
        MR_Word STATE_VARIABLE_ModeInfo_26_26;
        MR_Word Goals1_30;

        InstMapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Goal0Info_20);
        hlds__instmap__apply_instmap_delta_3_p_0(InstMap0_12, InstMapDelta_21, &InstMap1_22);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_22, STATE_VARIABLE_ModeInfo_25_25, &STATE_VARIABLE_ModeInfo_26_26);
        transform_hlds__transform__reschedule_conj_4_p_0(Goals0_9, &Goals1_30, STATE_VARIABLE_ModeInfo_26_26, STATE_VARIABLE_ModeInfo_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal0_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_30));
        }
      }
      else
      {
        MR_Word Goals1_18;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_3;

        mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WokenGoals_14, HeadVar__1_1, &Goals1_18);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals1_18;
        next_value_of_STATE_VARIABLE_ModeInfo_0_3 = STATE_VARIABLE_ModeInfo_25_25;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_ModeInfo_0_3 = next_value_of_STATE_VARIABLE_ModeInfo_0_3;
        continue;
      }
    }
    break;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__transform__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.transform.
