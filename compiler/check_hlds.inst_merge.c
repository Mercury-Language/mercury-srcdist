/*
** Automatically generated from `inst_merge.m'
** by the Mercury compiler,
** version rotd-2021-12-16
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


// :- module check_hlds.inst_merge.
// :- implementation.

/*
INIT mercury__check_hlds__inst_merge__init
ENDINIT
*/

#include "check_hlds.inst_merge.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
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




static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_3_6_p_0(
  MR_Word tscc_proc_2_input_1_InstA_7,
  MR_Word tscc_proc_2_input_2_InstB_8,
  MR_Word tscc_proc_2_input_3_MaybeType_9,
  MR_Word * tscc_output_ptr_1_Inst_10,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32);

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(
  MR_Word UniqA_9,
  MR_Word InstResultsA_10,
  MR_Word BoundInstsA_11,
  MR_Word UniqB_12,
  MR_Word MaybeType_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26);

static MR_bool MR_CALL 
check_hlds__inst_merge__bound_inst_list_merge_6_p_0(
  MR_Word BoundInstsA_7,
  MR_Word BoundInstsB_8,
  MR_Word MaybeType_9,
  MR_Word * BoundInsts_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27);

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_list_merge_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_4_6_p_0(
  MR_Word InstA_7,
  MR_Word InstB_8,
  MR_Word MaybeType_9,
  MR_Word * Inst_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41);

static void MR_CALL 
check_hlds__inst_merge__merge_uniq_bound_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UniqA_7,
  MR_Word UniqB_8,
  MR_Word BoundInstsB_9,
  MR_Word * Uniq_10);

static void MR_CALL 
check_hlds__inst_merge__merge_inst_uniq_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstA_8,
  MR_Word UniqB_9,
  MR_Word STATE_VARIABLE_Expansions_0_26,
  MR_Word * STATE_VARIABLE_Expansions_27,
  MR_Word * Uniq_11);

static void MR_CALL 
check_hlds__inst_merge__merge_inst_list_uniq_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5,
  MR_Word * Uniq_6);

static void MR_CALL 
check_hlds__inst_merge__merge_bound_inst_list_uniq_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5,
  MR_Word * Uniq_6);

static MR_bool MR_CALL 
check_hlds__inst_merge__merge_ho_inst_info_5_p_0(
  MR_Word HOInstInfoA_6,
  MR_Word HOInstInfoB_7,
  MR_Word * HOInstInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13);

static void MR_CALL 
check_hlds__inst_merge__merge_uniq_3_p_0(
  MR_Word UniqA_4,
  MR_Word UniqB_5,
  MR_Word * Merged_6);


static /* final */ const MR_Box check_hlds__inst_merge_scalar_common_1[2][2];




static /* final */ const MR_Box check_hlds__inst_merge_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "array.mh"



MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_6_p_0(
  MR_Word tscc_proc_1_input_1_InstA_7,
  MR_Word tscc_proc_1_input_2_InstB_8,
  MR_Word tscc_proc_1_input_3_MaybeType_9,
  MR_Word * tscc_output_ptr_1_Inst_10,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32)
{
  {
    MR_Word tscc_proc_2_input_1_InstA_7;
    MR_Word tscc_proc_2_input_2_InstB_8;
    MR_Word tscc_proc_2_input_3_MaybeType_9;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_Inst_10;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleInfo_32;

    // The code for TSCC PROC 1: pred check_hlds.inst_merge.inst_merge/6-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_merge.inst_merge/6-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_merge.inst_merge_3/6-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word InstA_7 = tscc_proc_1_input_1_InstA_7;
      MR_Word InstB_8 = tscc_proc_1_input_2_InstB_8;
      MR_Word MaybeType_9 = tscc_proc_1_input_3_MaybeType_9;
      MR_Word Inst_10;
      MR_Word STATE_VARIABLE_ModuleInfo_0_31 = tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
      MR_Word STATE_VARIABLE_ModuleInfo_32;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word ExpandedInstA_45;
        MR_Word ExpandedInstB_46;

        check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstA_7, &ExpandedInstA_45);
        check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstB_8, &ExpandedInstB_46);
        succeeded = (ExpandedInstB_46 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          Inst_10 = ExpandedInstA_45;
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ExpandedInstA_45 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            Inst_10 = ExpandedInstB_46;
            STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_InstA_7 = ExpandedInstA_45;
            MR_Word next_value_of_tscc_proc_2_input_2_InstB_8 = ExpandedInstB_46;
            MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = STATE_VARIABLE_ModuleInfo_0_31;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_InstA_7 = next_value_of_tscc_proc_2_input_1_InstA_7;
            tscc_proc_2_input_2_InstB_8 = next_value_of_tscc_proc_2_input_2_InstB_8;
            tscc_proc_2_input_3_MaybeType_9 = next_value_of_tscc_proc_2_input_3_MaybeType_9;
            tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
            goto top_of_proc_2;
          }
        }
      }
      else
      {
        MR_Word InstTable0_18;
        MR_Word MergeInstTable0_19;
        MR_Word MergeInstInfo_20;
        MR_Word MergeInstName_21;
        MR_Word MaybeMaybeMergedInst_22;
        MR_Word MergeInstTable1_23;
        MR_Word Inst0_25;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &InstTable0_18);
        hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable0_18, &MergeInstTable0_19);
        {
          MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MergeInstInfo_20, 0) = ((MR_Box) (InstA_7));
          MR_hl_field(MR_mktag(0), MergeInstInfo_20, 1) = ((MR_Box) (InstB_8));
        }
        {
          MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), MergeInstName_21, 0) = ((MR_Box) (InstA_7));
          MR_hl_field(MR_mktag(2), MergeInstName_21, 1) = ((MR_Box) (InstB_8));
        }
        hlds__hlds_inst_mode__search_insert_merge_inst_4_p_0(MergeInstInfo_20, &MaybeMaybeMergedInst_22, MergeInstTable0_19, &MergeInstTable1_23);
        if ((MaybeMaybeMergedInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word InstTable1_26;
          MR_Word InstTable2_27;
          MR_Word MergeInstTable2_28;
          MR_Word MergeInstTable3_29;
          MR_Word InstTable3_30;
          MR_Word STATE_VARIABLE_ModuleInfo_34_34;
          MR_Word STATE_VARIABLE_ModuleInfo_35_35;
          MR_Word Var_36;
          MR_Word ExpandedInstA_55;
          MR_Word ExpandedInstB_56;

          hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable1_23, InstTable0_18, &InstTable1_26);
          hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_34_34);
          check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstA_7, &ExpandedInstA_55);
          check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstB_8, &ExpandedInstB_56);
          succeeded = (ExpandedInstB_56 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            Inst0_25 = ExpandedInstA_55;
            STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ExpandedInstA_55 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              Inst0_25 = ExpandedInstB_56;
              STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
              succeeded = MR_TRUE;
            }
            else
              succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(ExpandedInstA_55, ExpandedInstB_56, MaybeType_9, &Inst0_25, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_35_35);
          }
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &InstTable2_27);
            hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable2_27, &MergeInstTable2_28);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Inst0_25));
            }
            hlds__hlds_inst_mode__det_update_merge_inst_4_p_0(MergeInstInfo_20, Var_36, MergeInstTable2_28, &MergeInstTable3_29);
            hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable3_29, InstTable2_27, &InstTable3_30);
            hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable3_30, STATE_VARIABLE_ModuleInfo_35_35, &STATE_VARIABLE_ModuleInfo_32);
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word MaybeMergedInst_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeMergedInst_22, (MR_Integer) 0))));

          if ((MaybeMergedInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst0_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Inst0_25, 1) = ((MR_Box) (MergeInstName_21));
            }
          else
            Inst0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMergedInst_24, (MR_Integer) 0))));
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(STATE_VARIABLE_ModuleInfo_32, MergeInstName_21, Inst0_25);
          if (succeeded)
            {
              Inst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Inst_10, 1) = ((MR_Box) (MergeInstName_21));
            }
          else
            Inst_10 = Inst0_25;
          succeeded = MR_TRUE;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_Inst_10 = Inst_10;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_32;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_7 = tscc_proc_2_input_1_InstA_7;
      MR_Word InstB_8 = tscc_proc_2_input_2_InstB_8;
      MR_Word MaybeType_9 = tscc_proc_2_input_3_MaybeType_9;
      MR_Word Inst_10;
      MR_Word STATE_VARIABLE_ModuleInfo_0_19 = tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
      MR_Word STATE_VARIABLE_ModuleInfo_20;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsA_12;
      MR_Word SubInstA_13;

      if (succeeded)
      {
        InstVarsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))));
        SubInstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
        {
          MR_Word InstVarsB_14;
          MR_Word SubInstB_15;

          succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))));
            SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
            {
              MR_Word TypeInfo_26_26;
              MR_Word Inst0_16;
              MR_Word InstVars_17;

              succeeded = check_hlds__inst_merge__inst_merge_6_p_0(SubInstA_13, SubInstB_15, MaybeType_9, &Inst0_16, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&check_hlds__inst_merge_scalar_common_1[0]);
                mercury__set__intersect_3_p_0(TypeInfo_26_26, InstVarsA_12, InstVarsB_14, &InstVars_17);
                succeeded = mercury__set__is_non_empty_1_p_0(TypeInfo_26_26, InstVars_17);
                if (succeeded)
                  {
                    Inst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Inst_10, 1) = ((MR_Box) (InstVars_17));
                    MR_hl_field(MR_mktag(3), Inst_10, 2) = ((MR_Box) (Inst0_16));
                  }
                else
                  Inst_10 = Inst0_16;
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_7 = SubInstA_13;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_8 = InstB_8;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_7 = next_value_of_tscc_proc_1_input_1_InstA_7;
            tscc_proc_1_input_2_InstB_8 = next_value_of_tscc_proc_1_input_2_InstB_8;
            tscc_proc_1_input_3_MaybeType_9 = next_value_of_tscc_proc_1_input_3_MaybeType_9;
            tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
            goto top_of_proc_1;
          }
        }
      }
      else
      {
        MR_Word SubInstB_25;

        succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_7 = InstA_7;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_8 = SubInstB_25;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_7 = next_value_of_tscc_proc_1_input_1_InstA_7;
            tscc_proc_1_input_2_InstB_8 = next_value_of_tscc_proc_1_input_2_InstB_8;
            tscc_proc_1_input_3_MaybeType_9 = next_value_of_tscc_proc_1_input_3_MaybeType_9;
            tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
            goto top_of_proc_1;
          }
        }
        else
          succeeded = check_hlds__inst_merge__inst_merge_4_6_p_0(InstA_7, InstB_8, MaybeType_9, &Inst_10, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_Inst_10 = Inst_10;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_20;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Inst_10 = tscc_output_1_Inst_10;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32 = tscc_output_2_STATE_VARIABLE_ModuleInfo_32;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_3_6_p_0(
  MR_Word tscc_proc_2_input_1_InstA_7,
  MR_Word tscc_proc_2_input_2_InstB_8,
  MR_Word tscc_proc_2_input_3_MaybeType_9,
  MR_Word * tscc_output_ptr_1_Inst_10,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32)
{
  {
    MR_Word tscc_proc_1_input_1_InstA_7;
    MR_Word tscc_proc_1_input_2_InstB_8;
    MR_Word tscc_proc_1_input_3_MaybeType_9;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_Inst_10;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleInfo_32;

    // The code for TSCC PROC 2: pred check_hlds.inst_merge.inst_merge_3/6-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_merge.inst_merge/6-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_merge.inst_merge_3/6-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word InstA_7 = tscc_proc_1_input_1_InstA_7;
      MR_Word InstB_8 = tscc_proc_1_input_2_InstB_8;
      MR_Word MaybeType_9 = tscc_proc_1_input_3_MaybeType_9;
      MR_Word Inst_10;
      MR_Word STATE_VARIABLE_ModuleInfo_0_31 = tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
      MR_Word STATE_VARIABLE_ModuleInfo_32;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0)))) == (MR_Integer) 0)));

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word ExpandedInstA_45;
        MR_Word ExpandedInstB_46;

        check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstA_7, &ExpandedInstA_45);
        check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstB_8, &ExpandedInstB_46);
        succeeded = (ExpandedInstB_46 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          Inst_10 = ExpandedInstA_45;
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ExpandedInstA_45 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            Inst_10 = ExpandedInstB_46;
            STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word next_value_of_tscc_proc_2_input_1_InstA_7 = ExpandedInstA_45;
            MR_Word next_value_of_tscc_proc_2_input_2_InstB_8 = ExpandedInstB_46;
            MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = STATE_VARIABLE_ModuleInfo_0_31;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_InstA_7 = next_value_of_tscc_proc_2_input_1_InstA_7;
            tscc_proc_2_input_2_InstB_8 = next_value_of_tscc_proc_2_input_2_InstB_8;
            tscc_proc_2_input_3_MaybeType_9 = next_value_of_tscc_proc_2_input_3_MaybeType_9;
            tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
            goto top_of_proc_2;
          }
        }
      }
      else
      {
        MR_Word InstTable0_18;
        MR_Word MergeInstTable0_19;
        MR_Word MergeInstInfo_20;
        MR_Word MergeInstName_21;
        MR_Word MaybeMaybeMergedInst_22;
        MR_Word MergeInstTable1_23;
        MR_Word Inst0_25;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &InstTable0_18);
        hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable0_18, &MergeInstTable0_19);
        {
          MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MergeInstInfo_20, 0) = ((MR_Box) (InstA_7));
          MR_hl_field(MR_mktag(0), MergeInstInfo_20, 1) = ((MR_Box) (InstB_8));
        }
        {
          MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), MergeInstName_21, 0) = ((MR_Box) (InstA_7));
          MR_hl_field(MR_mktag(2), MergeInstName_21, 1) = ((MR_Box) (InstB_8));
        }
        hlds__hlds_inst_mode__search_insert_merge_inst_4_p_0(MergeInstInfo_20, &MaybeMaybeMergedInst_22, MergeInstTable0_19, &MergeInstTable1_23);
        if ((MaybeMaybeMergedInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word InstTable1_26;
          MR_Word InstTable2_27;
          MR_Word MergeInstTable2_28;
          MR_Word MergeInstTable3_29;
          MR_Word InstTable3_30;
          MR_Word STATE_VARIABLE_ModuleInfo_34_34;
          MR_Word STATE_VARIABLE_ModuleInfo_35_35;
          MR_Word Var_36;
          MR_Word ExpandedInstA_55;
          MR_Word ExpandedInstB_56;

          hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable1_23, InstTable0_18, &InstTable1_26);
          hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_34_34);
          check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstA_7, &ExpandedInstA_55);
          check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstB_8, &ExpandedInstB_56);
          succeeded = (ExpandedInstB_56 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            Inst0_25 = ExpandedInstA_55;
            STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ExpandedInstA_55 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              Inst0_25 = ExpandedInstB_56;
              STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
              succeeded = MR_TRUE;
            }
            else
              succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(ExpandedInstA_55, ExpandedInstB_56, MaybeType_9, &Inst0_25, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_35_35);
          }
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &InstTable2_27);
            hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable2_27, &MergeInstTable2_28);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Inst0_25));
            }
            hlds__hlds_inst_mode__det_update_merge_inst_4_p_0(MergeInstInfo_20, Var_36, MergeInstTable2_28, &MergeInstTable3_29);
            hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable3_29, InstTable2_27, &InstTable3_30);
            hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable3_30, STATE_VARIABLE_ModuleInfo_35_35, &STATE_VARIABLE_ModuleInfo_32);
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word MaybeMergedInst_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeMergedInst_22, (MR_Integer) 0))));

          if ((MaybeMergedInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Inst0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst0_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Inst0_25, 1) = ((MR_Box) (MergeInstName_21));
            }
          else
            Inst0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMergedInst_24, (MR_Integer) 0))));
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(STATE_VARIABLE_ModuleInfo_32, MergeInstName_21, Inst0_25);
          if (succeeded)
            {
              Inst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Inst_10, 1) = ((MR_Box) (MergeInstName_21));
            }
          else
            Inst_10 = Inst0_25;
          succeeded = MR_TRUE;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_Inst_10 = Inst_10;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_32;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_7 = tscc_proc_2_input_1_InstA_7;
      MR_Word InstB_8 = tscc_proc_2_input_2_InstB_8;
      MR_Word MaybeType_9 = tscc_proc_2_input_3_MaybeType_9;
      MR_Word Inst_10;
      MR_Word STATE_VARIABLE_ModuleInfo_0_19 = tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
      MR_Word STATE_VARIABLE_ModuleInfo_20;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstA_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsA_12;
      MR_Word SubInstA_13;

      if (succeeded)
      {
        InstVarsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))));
        SubInstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
        {
          MR_Word InstVarsB_14;
          MR_Word SubInstB_15;

          succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))));
            SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
            {
              MR_Word TypeInfo_26_26;
              MR_Word Inst0_16;
              MR_Word InstVars_17;

              succeeded = check_hlds__inst_merge__inst_merge_6_p_0(SubInstA_13, SubInstB_15, MaybeType_9, &Inst0_16, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&check_hlds__inst_merge_scalar_common_1[0]);
                mercury__set__intersect_3_p_0(TypeInfo_26_26, InstVarsA_12, InstVarsB_14, &InstVars_17);
                succeeded = mercury__set__is_non_empty_1_p_0(TypeInfo_26_26, InstVars_17);
                if (succeeded)
                  {
                    Inst_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Inst_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Inst_10, 1) = ((MR_Box) (InstVars_17));
                    MR_hl_field(MR_mktag(3), Inst_10, 2) = ((MR_Box) (Inst0_16));
                  }
                else
                  Inst_10 = Inst0_16;
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_7 = SubInstA_13;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_8 = InstB_8;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_7 = next_value_of_tscc_proc_1_input_1_InstA_7;
            tscc_proc_1_input_2_InstB_8 = next_value_of_tscc_proc_1_input_2_InstB_8;
            tscc_proc_1_input_3_MaybeType_9 = next_value_of_tscc_proc_1_input_3_MaybeType_9;
            tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
            goto top_of_proc_1;
          }
        }
      }
      else
      {
        MR_Word SubInstB_25;

        succeeded = ((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_7 = InstA_7;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_8 = SubInstB_25;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_9 = MaybeType_9;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_7 = next_value_of_tscc_proc_1_input_1_InstA_7;
            tscc_proc_1_input_2_InstB_8 = next_value_of_tscc_proc_1_input_2_InstB_8;
            tscc_proc_1_input_3_MaybeType_9 = next_value_of_tscc_proc_1_input_3_MaybeType_9;
            tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
            goto top_of_proc_1;
          }
        }
        else
          succeeded = check_hlds__inst_merge__inst_merge_4_6_p_0(InstA_7, InstB_8, MaybeType_9, &Inst_10, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_Inst_10 = Inst_10;
      tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_20;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Inst_10 = tscc_output_1_Inst_10;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32 = tscc_output_2_STATE_VARIABLE_ModuleInfo_32;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(
  MR_Word UniqA_9,
  MR_Word InstResultsA_10,
  MR_Word BoundInstsA_11,
  MR_Word UniqB_12,
  MR_Word MaybeType_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_25, InstResultsA_10, BoundInstsA_11);
    if (succeeded)
    {
      MR_Word Uniq_16;
      MR_Word Uniq0_51;
      MR_Word Expansions0_52;
      MR_Word _Expansions_53;

      succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqB_12, UniqA_9);
      if (succeeded)
        Uniq0_51 = UniqA_9;
      else
        Uniq0_51 = UniqB_12;
      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_52);
      check_hlds__inst_merge__merge_bound_inst_list_uniq_6_p_0(STATE_VARIABLE_ModuleInfo_0_25, BoundInstsA_11, Uniq0_51, Expansions0_52, &_Expansions_53, &Uniq_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Result_14 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_16));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_25, InstResultsA_10, BoundInstsA_11);
      if (succeeded)
      {
        if ((MaybeType_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Uniq_39;
          MR_Word Uniq0_63;
          MR_Word Expansions0_64;
          MR_Word _Expansions_65;

          succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqB_12, UniqA_9);
          if (succeeded)
            Uniq0_63 = UniqA_9;
          else
            Uniq0_63 = UniqB_12;
          mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_64);
          check_hlds__inst_merge__merge_bound_inst_list_uniq_6_p_0(STATE_VARIABLE_ModuleInfo_0_25, BoundInstsA_11, Uniq0_63, Expansions0_64, &_Expansions_65, &Uniq_39);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_14 = base;
            MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_39));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_42_42;
          MR_Word TypeCtorInfo_43_43;
          MR_Word TypeInfo_44_44;
          MR_Word TypeCtorInfo_45_45;
          MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_13, (MR_Integer) 0))));
          MR_Word Constructors_18;
          MR_Word TypeCtor_19;
          MR_Word BoundInstsB0_20;
          MR_Word BoundInstsB_21;
          MR_Word InstResultsB_22;
          MR_Word InstA_23;
          MR_Word InstB_24;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;

          succeeded = check_hlds__type_util__type_constructors_3_p_0(STATE_VARIABLE_ModuleInfo_0_25, Type_17, &Constructors_18);
          if (succeeded)
          {
            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_17, &TypeCtor_19);
            check_hlds__mode_util__constructors_to_bound_insts_5_p_0(STATE_VARIABLE_ModuleInfo_0_25, UniqB_12, TypeCtor_19, Constructors_18, &BoundInstsB0_20);
            TypeCtorInfo_42_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0);
            mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_42_42, BoundInstsB0_20, &BoundInstsB_21);
            Var_29 = (MR_Integer) 1;
            Var_30 = (MR_Integer) 0;
            TypeCtorInfo_43_43 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
            Var_32 = mercury__set__init_0_f_0(TypeCtorInfo_43_43);
            TypeInfo_44_44 = (MR_Word) (&check_hlds__inst_merge_scalar_common_1[0]);
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
            }
            Var_34 = mercury__set__init_0_f_0(TypeInfo_44_44);
            TypeCtorInfo_45_45 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
            }
            Var_36 = mercury__set__init_0_f_0(TypeCtorInfo_45_45);
            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
            }
            Var_37 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_19)));
            {
              InstResultsB_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 0) = (MR_Box) (((((MR_Unsigned) (Var_29) << 2)) | (MR_Unsigned) (Var_30)));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 1) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 2) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 3) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(1), InstResultsB_22, 4) = ((MR_Box) (Var_37));
            }
            {
              InstA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), InstA_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), InstA_23, 1) = (MR_Box) ((MR_Unsigned) (UniqA_9));
              MR_hl_field(MR_mktag(3), InstA_23, 2) = ((MR_Box) (InstResultsA_10));
              MR_hl_field(MR_mktag(3), InstA_23, 3) = ((MR_Box) (BoundInstsA_11));
            }
            {
              InstB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), InstB_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), InstB_24, 1) = (MR_Box) ((MR_Unsigned) (UniqB_12));
              MR_hl_field(MR_mktag(3), InstB_24, 2) = ((MR_Box) (InstResultsB_22));
              MR_hl_field(MR_mktag(3), InstB_24, 3) = ((MR_Box) (BoundInstsB_21));
            }
            succeeded = check_hlds__inst_merge__inst_merge_4_6_p_0(InstA_23, InstB_24, MaybeType_13, Result_14, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_merge__bound_inst_list_merge_6_p_0(
  MR_Word BoundInstsA_7,
  MR_Word BoundInstsB_8,
  MR_Word MaybeType_9,
  MR_Word * BoundInsts_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  {
    MR_bool succeeded;

    if ((BoundInstsA_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *BoundInsts_10 = BoundInstsB_8;
      *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_7, (MR_Integer) 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_7, (MR_Integer) 0))));

      if ((BoundInstsB_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *BoundInsts_10 = BoundInstsA_7;
        *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word BoundInstB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_8, (MR_Integer) 0))));
        MR_Word BoundInstsTailB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_8, (MR_Integer) 1))));
        MR_Word ConsIdA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
        MR_Word ArgsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
        MR_Word ConsIdB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_16, (MR_Integer) 0))));
        MR_Word ArgsB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_16, (MR_Integer) 1))));

        succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_18, ConsIdB_20);
        if (succeeded)
        {
          MR_Word MaybeTypes_22;
          MR_Word Args_23;
          MR_Word BoundInst_24;
          MR_Word BoundInstsTail_25;
          MR_Integer Var_28;
          MR_Word STATE_VARIABLE_ModuleInfo_29_29;

          Var_28 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgsA_19);
          check_hlds__inst_util__maybe_get_cons_id_arg_types_5_p_0(STATE_VARIABLE_ModuleInfo_0_26, MaybeType_9, ConsIdA_18, Var_28, &MaybeTypes_22);
          succeeded = check_hlds__inst_merge__inst_list_merge_6_p_0(ArgsA_19, ArgsB_21, MaybeTypes_22, &Args_23, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_29_29);
          if (succeeded)
          {
            {
              BoundInst_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BoundInst_24, 0) = ((MR_Box) (ConsIdA_18));
              MR_hl_field(MR_mktag(0), BoundInst_24, 1) = ((MR_Box) (Args_23));
            }
            succeeded = check_hlds__inst_merge__bound_inst_list_merge_6_p_0(Var_40, BoundInstsTailB_17, MaybeType_9, &BoundInstsTail_25, STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_ModuleInfo_27);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *BoundInsts_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_24));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsTail_25));
              }
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word Var_39;

          parse_tree__prog_data____Compare____cons_id_0_0(&Var_39, ConsIdA_18, ConsIdB_20);
          succeeded = ((MR_Integer) 1 == Var_39);
          if (succeeded)
          {
            MR_Word BoundInstsTail_34;

            succeeded = check_hlds__inst_merge__bound_inst_list_merge_6_p_0(Var_40, BoundInstsB_8, MaybeType_9, &BoundInstsTail_34, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *BoundInsts_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsTail_34));
              }
              succeeded = MR_TRUE;
            }
          }
          else
          {
            MR_Word BoundInstsTail_35;

            succeeded = check_hlds__inst_merge__bound_inst_list_merge_6_p_0(BoundInstsA_7, BoundInstsTailB_17, MaybeType_9, &BoundInstsTail_35, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *BoundInsts_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInstB_16));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsTail_35));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_list_merge_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word ArgA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgB_13;
      MR_Word ArgsB_14;
      MR_Word MaybeType_15;
      MR_Word MaybeTypes_16;
      MR_Word Arg_17;
      MR_Word Args_18;
      MR_Word STATE_VARIABLE_ModuleInfo_22_22;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          MaybeTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          succeeded = check_hlds__inst_merge__inst_merge_6_p_0(ArgA_11, ArgB_13, MaybeType_15, &Arg_17, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_22_22);
          if (succeeded)
          {
            succeeded = check_hlds__inst_merge__inst_list_merge_6_p_0(ArgsA_12, ArgsB_14, MaybeTypes_16, &Args_18, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_ModuleInfo_6);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_17));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_18));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_4_6_p_0(
  MR_Word InstA_7,
  MR_Word InstB_8,
  MR_Word MaybeType_9,
  MR_Word * Inst_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstA_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstA_7)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            if ((InstB_8 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Inst_10 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
              succeeded = MR_TRUE;
            }
            else
            if (((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 2))
            {
              MR_Word Uniq_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);

              switch (Uniq_73) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
              }
              if (succeeded)
              {
                *Inst_10 = InstB_8;
                *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_7, (MR_Integer) 1))));
          MR_Word Var_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_7, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (MR_tag((MR_Word) InstB_8)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstB_8)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    switch (Var_110) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                    {
                      *Inst_10 = InstA_7;
                      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UniqB_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);
                MR_Word HOInstInfoB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 1))));
                MR_Word HOInstInfo_16;
                MR_Word Uniq_17;

                succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(Var_109, HOInstInfoB_15, &HOInstInfo_16, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                if (succeeded)
                {
                  check_hlds__inst_merge__merge_uniq_3_p_0(Var_110, UniqB_14, &Uniq_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_16));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word InstResultsB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                    MR_Word BoundInstsB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 3))));
                    MR_Word Var_57;
                    MR_Word UniqB_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                    MR_Word Uniq_63;

                    check_hlds__inst_merge__merge_uniq_bound_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, Var_110, UniqB_62, BoundInstsB_20, &Uniq_63);
                    switch (Uniq_63) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                      succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, InstResultsB_19, BoundInstsB_20);
                    if (succeeded)
                    {
                      Var_57 = (MR_Word) ((MR_Unsigned) 0U);
                      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_63));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_57));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word UniqB_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                    MR_Word HOInstInfoB_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                    MR_Word HOInstInfo_68;
                    MR_Word Uniq_69;

                    succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(Var_109, HOInstInfoB_67, &HOInstInfo_68, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                    if (succeeded)
                    {
                      check_hlds__inst_merge__merge_uniq_3_p_0(Var_110, UniqB_66, &Uniq_69);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_69));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_68));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Var_55;
                    MR_Word Uniq_71;

                    check_hlds__inst_merge__merge_uniq_3_p_0(Var_110, (MR_Integer) 0, &Uniq_71);
                    switch (Uniq_71) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                    {
                      Var_55 = (MR_Word) ((MR_Unsigned) 0U);
                      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_71));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_55));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 3))));
              MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
              MR_Word Var_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (MR_tag((MR_Word) InstB_8)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_53;
                    MR_Word UniqB_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);
                    MR_Word Uniq_76;

                    check_hlds__inst_merge__merge_uniq_bound_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, UniqB_75, Var_113, Var_111, &Uniq_76);
                    switch (Uniq_76) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 4:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                      succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, Var_112, Var_111);
                    if (succeeded)
                    {
                      Var_53 = (MR_Word) ((MR_Unsigned) 0U);
                      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_76));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_53));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word BoundInsts_32;
                        MR_Word Var_49;
                        MR_Word UniqB_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word Uniq_87;
                        MR_Word BoundInstsB_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 3))));

                        check_hlds__inst_merge__merge_uniq_3_p_0(Var_113, UniqB_86, &Uniq_87);
                        succeeded = check_hlds__inst_merge__bound_inst_list_merge_6_p_0(Var_111, BoundInstsB_88, MaybeType_9, &BoundInsts_32, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                        if (succeeded)
                        {
                          Var_49 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_87));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_49));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_32));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word UniqB_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);

                        succeeded = check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(Var_113, Var_112, Var_111, UniqB_91, MaybeType_9, Inst_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*STATE_VARIABLE_ModuleInfo_41, InstA_7);
                          succeeded = !(succeeded);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
              MR_Word Var_115 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (MR_tag((MR_Word) InstB_8)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word UniqB_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);
                    MR_Word HOInstInfoB_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 1))));
                    MR_Word HOInstInfo_81;
                    MR_Word Uniq_82;

                    succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(Var_114, HOInstInfoB_80, &HOInstInfo_81, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                    if (succeeded)
                    {
                      check_hlds__inst_merge__merge_uniq_3_p_0(Var_115, UniqB_79, &Uniq_82);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_10 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_82));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_81));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word UniqB_95 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word InstResultsB_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                        MR_Word BoundInstsB_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 3))));

                        succeeded = check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(UniqB_95, InstResultsB_96, BoundInstsB_97, Var_115, MaybeType_9, Inst_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*STATE_VARIABLE_ModuleInfo_41, InstB_8);
                          succeeded = !(succeeded);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word UniqB_100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word HOInstInfoB_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                        MR_Word HOInstInfo_102;
                        MR_Word Uniq_103;

                        succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(Var_114, HOInstInfoB_101, &HOInstInfo_102, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                        if (succeeded)
                        {
                          check_hlds__inst_merge__merge_uniq_3_p_0(Var_115, UniqB_100, &Uniq_103);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_103));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HOInstInfo_102));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 2))));
              MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_7, (MR_Integer) 1))));

              if (((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 2))
              {
                MR_Word Var_51;
                MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_8, (MR_Integer) 0))) & (MR_Integer) 7);
                MR_Word Uniq_84;

                check_hlds__inst_merge__merge_uniq_3_p_0((MR_Integer) 0, UniqB_83, &Uniq_84);
                switch (Uniq_84) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                {
                  Var_51 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_10 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_84));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_51));
                  }
                  succeeded = MR_TRUE;
                }
              }
              else
              if (((((MR_tag((MR_Word) InstB_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
              {
                MR_Word TypeInfo_104_104;
                MR_Word TypeCtorInfo_105_105;
                MR_Word ArgsB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 2))));
                MR_Word MaybeTypes_38;
                MR_Word Args_39;
                MR_Integer Var_42;
                MR_Word Var_43;
                MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_8, (MR_Integer) 1))));

                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_108, Var_106);
                if (succeeded)
                {
                  TypeInfo_104_104 = (MR_Word) (&check_hlds__inst_merge_scalar_common_1[1]);
                  TypeCtorInfo_105_105 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                  Var_42 = mercury__list__length_1_f_0(TypeCtorInfo_105_105, Var_107);
                  Var_43 = (MR_Word) ((MR_Unsigned) 0U);
                  MaybeTypes_38 = mercury__list__duplicate_2_f_0(TypeInfo_104_104, Var_42, ((MR_Box) (Var_43)));
                  succeeded = check_hlds__inst_merge__inst_list_merge_6_p_0(Var_107, ArgsB_37, MaybeTypes_38, &Args_39, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_10 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_108));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_39));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              else
                succeeded = MR_FALSE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_merge__merge_uniq_bound_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UniqA_7,
  MR_Word UniqB_8,
  MR_Word BoundInstsB_9,
  MR_Word * Uniq_10)
{
  {
    MR_bool succeeded;
    MR_Word Uniq0_11;
    MR_Word Expansions0_12;
    MR_Word _Expansions_13;

    succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_7, UniqB_8);
    if (succeeded)
      Uniq0_11 = UniqB_8;
    else
      Uniq0_11 = UniqA_7;
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_12);
    check_hlds__inst_merge__merge_bound_inst_list_uniq_6_p_0(ModuleInfo_6, BoundInstsB_9, Uniq0_11, Expansions0_12, &_Expansions_13, Uniq_10);
  }
}

static void MR_CALL 
check_hlds__inst_merge__merge_inst_uniq_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstA_8,
  MR_Word UniqB_9,
  MR_Word STATE_VARIABLE_Expansions_0_26,
  MR_Word * STATE_VARIABLE_Expansions_27,
  MR_Word * Uniq_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstA_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Uniq_11 = UniqB_9;
          *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          *Uniq_11 = UniqB_9;
          *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UniqA_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_8, (MR_Integer) 0))) & (MR_Integer) 7);

          succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_13, UniqB_9);
          if (succeeded)
            *Uniq_11 = UniqB_9;
          else
            *Uniq_11 = UniqA_13;
          *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInstsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 3))));
              MR_Word Uniq0_20;
              MR_Word UniqA_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_35, UniqB_9);
              if (succeeded)
                Uniq0_20 = UniqB_9;
              else
                Uniq0_20 = UniqA_35;
              check_hlds__inst_merge__merge_bound_inst_list_uniq_6_p_0(ModuleInfo_7, BoundInstsA_19, Uniq0_20, STATE_VARIABLE_Expansions_0_26, STATE_VARIABLE_Expansions_27, Uniq_11);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word UniqA_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_38, UniqB_9);
              if (succeeded)
                *Uniq_11 = UniqB_9;
              else
                *Uniq_11 = UniqA_38;
              *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_merge.merge_inst_uniq\'/6", (MR_String) "inst_var");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstA_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 2))));
              MR_Word next_value_of_InstA_8 = SubInstA_25;

              // direct tailcall eliminated
              ;
              InstA_8 = next_value_of_InstA_8;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_21)), STATE_VARIABLE_Expansions_0_26);
              if (succeeded)
              {
                *Uniq_11 = UniqB_9;
                *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
              }
              else
              {
                MR_Word Inst_22;
                MR_Word STATE_VARIABLE_Expansions_31_31;
                MR_Word next_value_of_InstA_8;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_26;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_21)), STATE_VARIABLE_Expansions_0_26, &STATE_VARIABLE_Expansions_31_31);
                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_7, InstName_21, &Inst_22);
                // direct tailcall eliminated
                ;
                next_value_of_InstA_8 = Inst_22;
                next_value_of_STATE_VARIABLE_Expansions_0_26 = STATE_VARIABLE_Expansions_31_31;
                InstA_8 = next_value_of_InstA_8;
                STATE_VARIABLE_Expansions_0_26 = next_value_of_STATE_VARIABLE_Expansions_0_26;
                continue;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0((MR_Integer) 0, UniqB_9);
              if (succeeded)
                *Uniq_11 = UniqB_9;
              else
                *Uniq_11 = (MR_Integer) 0;
              *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_merge__merge_inst_list_uniq_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5,
  MR_Word * Uniq_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Uniq_6 = HeadVar__3_3;
      *STATE_VARIABLE_Expansions_5 = STATE_VARIABLE_Expansions_0_4;
    }
    else
    {
      MR_Word Inst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Uniq1_18;
      MR_Word STATE_VARIABLE_Expansions_21_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

      check_hlds__inst_merge__merge_inst_uniq_6_p_0(ModuleInfo_1, Inst_13, HeadVar__3_3, STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_21_21, &Uniq1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Insts_14;
      next_value_of_HeadVar__3_3 = Uniq1_18;
      next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_21_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Expansions_0_4 = next_value_of_STATE_VARIABLE_Expansions_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_merge__merge_bound_inst_list_uniq_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5,
  MR_Word * Uniq_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Uniq_6 = HeadVar__3_3;
      *STATE_VARIABLE_Expansions_5 = STATE_VARIABLE_Expansions_0_4;
    }
    else
    {
      MR_Word BoundInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_13, (MR_Integer) 1))));
      MR_Word Uniq1_20;
      MR_Word STATE_VARIABLE_Expansions_23_23;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

      check_hlds__inst_merge__merge_inst_list_uniq_6_p_0(ModuleInfo_1, ArgInsts_19, HeadVar__3_3, STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_23_23, &Uniq1_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = BoundInsts_14;
      next_value_of_HeadVar__3_3 = Uniq1_20;
      next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_23_23;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Expansions_0_4 = next_value_of_STATE_VARIABLE_Expansions_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_merge__merge_ho_inst_info_5_p_0(
  MR_Word HOInstInfoA_6,
  MR_Word HOInstInfoB_7,
  MR_Word * HOInstInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_bool succeeded = (HOInstInfoA_6 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word PredA_10;
    MR_Word PredB_11;

    if (succeeded)
    {
      PredA_10 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_6), (MR_Integer) 1));
      succeeded = (HOInstInfoB_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        PredB_11 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_7), (MR_Integer) 1));
    }
    if (succeeded)
    {
      succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredA_10, PredB_11);
      if (succeeded)
      {
        *HOInstInfo_8 = HOInstInfoB_7;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = check_hlds__inst_match__pred_inst_matches_3_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredB_11, PredA_10);
        if (succeeded)
        {
          *HOInstInfo_8 = HOInstInfoA_6;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredA_10);
          if (succeeded)
          {
            succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, PredB_11);
            if (succeeded)
            {
              *HOInstInfo_8 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    else
    {
      succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, HOInstInfoA_6);
      if (succeeded)
      {
        succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, HOInstInfoB_7);
        if (succeeded)
        {
          *HOInstInfo_8 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_13 = STATE_VARIABLE_ModuleInfo_0_12;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_merge__merge_uniq_3_p_0(
  MR_Word UniqA_4,
  MR_Word UniqB_5,
  MR_Word * Merged_6)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_4, UniqB_5);
    if (succeeded)
      *Merged_6 = UniqB_5;
    else
      *Merged_6 = UniqA_4;
  }
}

void mercury__check_hlds__inst_merge__init(void)
{
}

void mercury__check_hlds__inst_merge__init_type_tables(void)
{
}

void mercury__check_hlds__inst_merge__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_merge__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_merge.
