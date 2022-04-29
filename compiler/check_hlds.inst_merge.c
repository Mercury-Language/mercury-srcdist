/*
** Automatically generated from `inst_merge.m'
** by the Mercury compiler,
** version rotd-2022-04-29
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"




static const MR_EnumFunctorDesc check_hlds__inst_merge__check_hlds__inst_merge__enum_functor_desc_merge_fail_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_merge__check_hlds__inst_merge__enum_functor_desc_merge_fail_0_1;

static const MR_EnumFunctorDescPtr check_hlds__inst_merge__check_hlds__inst_merge__enum_ordinal_ordered_merge_fail_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_merge__check_hlds__inst_merge__enum_name_ordered_merge_fail_0[2];

static const MR_Integer check_hlds__inst_merge__check_hlds__inst_merge__functor_number_map_merge_fail_0[2];

static void MR_CALL 
check_hlds__inst_merge____Compare____merge_fail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_merge____Unify____merge_fail_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_merge__insts_merge_pass_9_p_0(
  MR_Word Type_10,
  MR_Word Inst1_11,
  MR_Word Insts2Plus_12,
  MR_Word STATE_VARIABLE_MergedInsts_0_26,
  MR_Word * STATE_VARIABLE_MergedInsts_27,
  MR_Word STATE_VARIABLE_Fail_0_28,
  MR_Word * STATE_VARIABLE_Fail_29,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31);

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_3_6_p_0(
  MR_Word tscc_proc_2_input_1_Type_7,
  MR_Word tscc_proc_2_input_2_InstA_8,
  MR_Word tscc_proc_2_input_3_InstB_9,
  MR_Word * tscc_output_ptr_1_InstAB_10,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32);

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(
  MR_Word Type_9,
  MR_Word UniqA_10,
  MR_Word InstResultsA_11,
  MR_Word BoundInstsA_12,
  MR_Word UniqB_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25);

static MR_bool MR_CALL 
check_hlds__inst_merge__bound_inst_list_merge_6_p_0(
  MR_Word Type_7,
  MR_Word BoundInstsA_8,
  MR_Word BoundInstsB_9,
  MR_Word * BoundInstsAB_10,
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
  MR_Word Type_7,
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word * InstAB_10,
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

static MR_bool MR_CALL 
check_hlds__inst_merge____Unify____merge_fail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_merge____Compare____merge_fail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__inst_merge_scalar_common_1[1][2];




static /* final */ const MR_Box check_hlds__inst_merge_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};



#include "array.mh"



static const MR_EnumFunctorDesc check_hlds__inst_merge__check_hlds__inst_merge__enum_functor_desc_merge_fail_0_0 = {
  (MR_String) "merge_has_not_failed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_merge__check_hlds__inst_merge__enum_functor_desc_merge_fail_0_1 = {
  (MR_String) "merge_has_failed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_merge__check_hlds__inst_merge__enum_ordinal_ordered_merge_fail_0[2] = {
  &check_hlds__inst_merge__check_hlds__inst_merge__enum_functor_desc_merge_fail_0_0,
  &check_hlds__inst_merge__check_hlds__inst_merge__enum_functor_desc_merge_fail_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__inst_merge__check_hlds__inst_merge__enum_name_ordered_merge_fail_0[2] = {
  &check_hlds__inst_merge__check_hlds__inst_merge__enum_functor_desc_merge_fail_0_1,
  &check_hlds__inst_merge__check_hlds__inst_merge__enum_functor_desc_merge_fail_0_0
};

static const MR_Integer check_hlds__inst_merge__check_hlds__inst_merge__functor_number_map_merge_fail_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_merge__check_hlds__inst_merge__type_ctor_info_merge_fail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_merge____Unify____merge_fail_0_0_10001)),
  ((MR_Box) (check_hlds__inst_merge____Compare____merge_fail_0_0_10001)),
  (MR_String) "check_hlds.inst_merge",
  (MR_String) "merge_fail",
  { check_hlds__inst_merge__check_hlds__inst_merge__enum_name_ordered_merge_fail_0 },
  { check_hlds__inst_merge__check_hlds__inst_merge__enum_ordinal_ordered_merge_fail_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_merge__check_hlds__inst_merge__functor_number_map_merge_fail_0,

};

static void MR_CALL 
check_hlds__inst_merge____Compare____merge_fail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_merge____Unify____merge_fail_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__inst_merge__insts_merge_6_p_0(
  MR_Word Type_7,
  MR_Word HeadInst_8,
  MR_Word TailInsts_9,
  MR_Word * MaybeMergedInst_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19)
{
  while (MR_TRUE)
  {
    MR_Word MergedInsts_12;
    MR_Word Fail_13;
    MR_Word STATE_VARIABLE_ModuleInfo_22_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    check_hlds__inst_merge__insts_merge_pass_9_p_0(Type_7, HeadInst_8, TailInsts_9, (MR_Word) ((MR_Unsigned) 0U), &MergedInsts_12, (MR_Integer) 0, &Fail_13, STATE_VARIABLE_ModuleInfo_0_18, &STATE_VARIABLE_ModuleInfo_22_22);
    switch (Fail_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *MaybeMergedInst_10 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_22_22;
        }
        break;
      case (MR_Integer) 0:
        if ((MergedInsts_12 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_merge.insts_merge\'/6", (MR_String) "MergedInsts = []");
            return;
          }
        else
        {
          MR_Word MergedInst1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MergedInsts_12, (MR_Integer) 0))));
          MR_Word MergedInsts2Plus_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MergedInsts_12, (MR_Integer) 1))));

          if ((MergedInsts2Plus_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeMergedInst_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MergedInst1_14));
            }
            *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_22_22;
          }
          else
          {
            MR_Word next_value_of_HeadInst_8 = MergedInst1_14;
            MR_Word next_value_of_TailInsts_9 = MergedInsts2Plus_15;
            MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_18 = STATE_VARIABLE_ModuleInfo_22_22;

            // direct tailcall eliminated
            ;
            HeadInst_8 = next_value_of_HeadInst_8;
            TailInsts_9 = next_value_of_TailInsts_9;
            STATE_VARIABLE_ModuleInfo_0_18 = next_value_of_STATE_VARIABLE_ModuleInfo_0_18;
            continue;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_merge__insts_merge_pass_9_p_0(
  MR_Word Type_10,
  MR_Word Inst1_11,
  MR_Word Insts2Plus_12,
  MR_Word STATE_VARIABLE_MergedInsts_0_26,
  MR_Word * STATE_VARIABLE_MergedInsts_27,
  MR_Word STATE_VARIABLE_Fail_0_28,
  MR_Word * STATE_VARIABLE_Fail_29,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Insts2Plus_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MergedInsts_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst1_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MergedInsts_0_26));
      }
      *STATE_VARIABLE_Fail_29 = STATE_VARIABLE_Fail_0_28;
      *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
    }
    else
    {
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts2Plus_12, (MR_Integer) 1))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts2Plus_12, (MR_Integer) 0))));

      if ((Var_64 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Inst12_17;
        MR_Word STATE_VARIABLE_ModuleInfo_50_50;

        succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Inst1_11, Var_65, &Inst12_17, STATE_VARIABLE_ModuleInfo_0_30, &STATE_VARIABLE_ModuleInfo_50_50);
        if (succeeded)
        {
          *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_50_50;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_MergedInsts_27 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst12_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MergedInsts_0_26));
          }
          *STATE_VARIABLE_Fail_29 = STATE_VARIABLE_Fail_0_28;
        }
        else
        {
          *STATE_VARIABLE_Fail_29 = (MR_Integer) 1;
          *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
          *STATE_VARIABLE_MergedInsts_27 = STATE_VARIABLE_MergedInsts_0_26;
        }
      }
      else
      {
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1))));
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0))));

        if ((Var_66 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Inst123_19;
          MR_Word STATE_VARIABLE_ModuleInfo_45_45;
          MR_Word STATE_VARIABLE_ModuleInfo_44_44;
          MR_Word Inst12_55;

          succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Inst1_11, Var_65, &Inst12_55, STATE_VARIABLE_ModuleInfo_0_30, &STATE_VARIABLE_ModuleInfo_44_44);
          if (succeeded)
            succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Inst12_55, Var_67, &Inst123_19, STATE_VARIABLE_ModuleInfo_44_44, &STATE_VARIABLE_ModuleInfo_45_45);
          if (succeeded)
          {
            *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_45_45;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MergedInsts_27 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst123_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MergedInsts_0_26));
            }
            *STATE_VARIABLE_Fail_29 = STATE_VARIABLE_Fail_0_28;
          }
          else
          {
            *STATE_VARIABLE_Fail_29 = (MR_Integer) 1;
            *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
            *STATE_VARIABLE_MergedInsts_27 = STATE_VARIABLE_MergedInsts_0_26;
          }
        }
        else
        {
          MR_Word Inst4_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0))));
          MR_Word Insts5Plus_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 1))));
          MR_Word Inst1234_23;
          MR_Word STATE_VARIABLE_ModuleInfo_36_36;
          MR_Word Inst34_22;
          MR_Word STATE_VARIABLE_ModuleInfo_34_34;
          MR_Word STATE_VARIABLE_ModuleInfo_35_35;
          MR_Word Inst12_59;

          succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Inst1_11, Var_65, &Inst12_59, STATE_VARIABLE_ModuleInfo_0_30, &STATE_VARIABLE_ModuleInfo_34_34);
          if (succeeded)
          {
            succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Var_67, Inst4_20, &Inst34_22, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_35_35);
            if (succeeded)
              succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Inst12_59, Inst34_22, &Inst1234_23, STATE_VARIABLE_ModuleInfo_35_35, &STATE_VARIABLE_ModuleInfo_36_36);
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_MergedInsts_37_37;

            {
              STATE_VARIABLE_MergedInsts_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_MergedInsts_37_37, 0) = ((MR_Box) (Inst1234_23));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_MergedInsts_37_37, 1) = ((MR_Box) (STATE_VARIABLE_MergedInsts_0_26));
            }
            if ((Insts5Plus_21 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_MergedInsts_27 = STATE_VARIABLE_MergedInsts_37_37;
              *STATE_VARIABLE_Fail_29 = STATE_VARIABLE_Fail_0_28;
              *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_36_36;
            }
            else
            {
              MR_Word Inst5_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts5Plus_21, (MR_Integer) 0))));
              MR_Word Insts6Plus_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts5Plus_21, (MR_Integer) 1))));
              MR_Word next_value_of_Inst1_11 = Inst5_24;
              MR_Word next_value_of_Insts2Plus_12 = Insts6Plus_25;
              MR_Word next_value_of_STATE_VARIABLE_MergedInsts_0_26 = STATE_VARIABLE_MergedInsts_37_37;
              MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_30 = STATE_VARIABLE_ModuleInfo_36_36;

              // direct tailcall eliminated
              ;
              Inst1_11 = next_value_of_Inst1_11;
              Insts2Plus_12 = next_value_of_Insts2Plus_12;
              STATE_VARIABLE_MergedInsts_0_26 = next_value_of_STATE_VARIABLE_MergedInsts_0_26;
              STATE_VARIABLE_ModuleInfo_0_30 = next_value_of_STATE_VARIABLE_ModuleInfo_0_30;
              continue;
            }
          }
          else
          {
            *STATE_VARIABLE_Fail_29 = (MR_Integer) 1;
            *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
            *STATE_VARIABLE_MergedInsts_27 = STATE_VARIABLE_MergedInsts_0_26;
          }
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_6_p_0(
  MR_Word tscc_proc_1_input_1_Type_7,
  MR_Word tscc_proc_1_input_2_InstA_8,
  MR_Word tscc_proc_1_input_3_InstB_9,
  MR_Word * tscc_output_ptr_1_InstAB_10,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32)
{
  MR_Word tscc_proc_2_input_1_Type_7;
  MR_Word tscc_proc_2_input_2_InstA_8;
  MR_Word tscc_proc_2_input_3_InstB_9;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_InstAB_10;
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
    MR_Word Type_7 = tscc_proc_1_input_1_Type_7;
    MR_Word InstA_8 = tscc_proc_1_input_2_InstA_8;
    MR_Word InstB_9 = tscc_proc_1_input_3_InstB_9;
    MR_Word InstAB_10;
    MR_Word STATE_VARIABLE_ModuleInfo_0_31 = tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
    MR_Word STATE_VARIABLE_ModuleInfo_32;
    MR_bool succeeded = ((((MR_tag((MR_Word) InstA_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 0)))) == (MR_Integer) 0)));

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word ExpandedInstA_37;
      MR_Word ExpandedInstB_38;

      check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstA_8, &ExpandedInstA_37);
      check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstB_9, &ExpandedInstB_38);
      succeeded = (ExpandedInstB_38 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        InstAB_10 = ExpandedInstA_37;
        STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ExpandedInstA_37 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          InstAB_10 = ExpandedInstB_38;
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_Type_7 = Type_7;
          MR_Word next_value_of_tscc_proc_2_input_2_InstA_8 = ExpandedInstA_37;
          MR_Word next_value_of_tscc_proc_2_input_3_InstB_9 = ExpandedInstB_38;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = STATE_VARIABLE_ModuleInfo_0_31;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Type_7 = next_value_of_tscc_proc_2_input_1_Type_7;
          tscc_proc_2_input_2_InstA_8 = next_value_of_tscc_proc_2_input_2_InstA_8;
          tscc_proc_2_input_3_InstB_9 = next_value_of_tscc_proc_2_input_3_InstB_9;
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
      MR_Word InstAB0_25;

      hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &InstTable0_18);
      hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable0_18, &MergeInstTable0_19);
      {
        MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MergeInstInfo_20, 0) = ((MR_Box) (InstA_8));
        MR_hl_field(MR_mktag(0), MergeInstInfo_20, 1) = ((MR_Box) (InstB_9));
      }
      {
        MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MergeInstName_21, 0) = ((MR_Box) (InstA_8));
        MR_hl_field(MR_mktag(2), MergeInstName_21, 1) = ((MR_Box) (InstB_9));
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
        MR_Word ExpandedInstA_39;
        MR_Word ExpandedInstB_40;

        hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable1_23, InstTable0_18, &InstTable1_26);
        hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_34_34);
        check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstA_8, &ExpandedInstA_39);
        check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstB_9, &ExpandedInstB_40);
        succeeded = (ExpandedInstB_40 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          InstAB0_25 = ExpandedInstA_39;
          STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ExpandedInstA_39 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            InstAB0_25 = ExpandedInstB_40;
            STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
            succeeded = MR_TRUE;
          }
          else
            succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_39, ExpandedInstB_40, &InstAB0_25, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_35_35);
        }
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &InstTable2_27);
          hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable2_27, &MergeInstTable2_28);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (InstAB0_25));
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
            InstAB0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InstAB0_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), InstAB0_25, 1) = ((MR_Box) (MergeInstName_21));
          }
        else
          InstAB0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMergedInst_24, (MR_Integer) 0))));
        STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(STATE_VARIABLE_ModuleInfo_32, MergeInstName_21, InstAB0_25);
        if (succeeded)
          {
            InstAB_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InstAB_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), InstAB_10, 1) = ((MR_Box) (MergeInstName_21));
          }
        else
          InstAB_10 = InstAB0_25;
        succeeded = MR_TRUE;
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_InstAB_10 = InstAB_10;
    tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_32;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Type_7 = tscc_proc_2_input_1_Type_7;
    MR_Word InstA_8 = tscc_proc_2_input_2_InstA_8;
    MR_Word InstB_9 = tscc_proc_2_input_3_InstB_9;
    MR_Word InstAB_10;
    MR_Word STATE_VARIABLE_ModuleInfo_0_19 = tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
    MR_Word STATE_VARIABLE_ModuleInfo_20;
    MR_bool succeeded = ((((MR_tag((MR_Word) InstA_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word InstVarsA_12;
    MR_Word SubInstA_13;

    if (succeeded)
    {
      InstVarsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))));
      SubInstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 2))));
      {
        MR_Word InstVarsB_14;
        MR_Word SubInstB_15;

        succeeded = ((((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 1))));
          SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 2))));
          {
            MR_Word TypeInfo__26_26;
            MR_Word InstAB0_16;
            MR_Word InstVars_17;

            succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, SubInstA_13, SubInstB_15, &InstAB0_16, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
            if (succeeded)
            {
              TypeInfo__26_26 = (MR_Word) (&check_hlds__inst_merge_scalar_common_1[0]);
              mercury__set__intersect_3_p_0(TypeInfo__26_26, InstVarsA_12, InstVarsB_14, &InstVars_17);
              succeeded = mercury__set__is_non_empty_1_p_0(TypeInfo__26_26, InstVars_17);
              if (succeeded)
                {
                  InstAB_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), InstAB_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), InstAB_10, 1) = ((MR_Box) (InstVars_17));
                  MR_hl_field(MR_mktag(3), InstAB_10, 2) = ((MR_Box) (InstAB0_16));
                }
              else
                InstAB_10 = InstAB0_16;
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Type_7 = Type_7;
          MR_Word next_value_of_tscc_proc_1_input_2_InstA_8 = SubInstA_13;
          MR_Word next_value_of_tscc_proc_1_input_3_InstB_9 = InstB_9;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Type_7 = next_value_of_tscc_proc_1_input_1_Type_7;
          tscc_proc_1_input_2_InstA_8 = next_value_of_tscc_proc_1_input_2_InstA_8;
          tscc_proc_1_input_3_InstB_9 = next_value_of_tscc_proc_1_input_3_InstB_9;
          tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
          goto top_of_proc_1;
        }
      }
    }
    else
    {
      MR_Word SubInstB_25;

      succeeded = ((((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        SubInstB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 2))));
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Type_7 = Type_7;
          MR_Word next_value_of_tscc_proc_1_input_2_InstA_8 = InstA_8;
          MR_Word next_value_of_tscc_proc_1_input_3_InstB_9 = SubInstB_25;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Type_7 = next_value_of_tscc_proc_1_input_1_Type_7;
          tscc_proc_1_input_2_InstA_8 = next_value_of_tscc_proc_1_input_2_InstA_8;
          tscc_proc_1_input_3_InstB_9 = next_value_of_tscc_proc_1_input_3_InstB_9;
          tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
          goto top_of_proc_1;
        }
      }
      else
        succeeded = check_hlds__inst_merge__inst_merge_4_6_p_0(Type_7, InstA_8, InstB_9, &InstAB_10, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_InstAB_10 = InstAB_10;
    tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_20;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_InstAB_10 = tscc_output_1_InstAB_10;
  *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32 = tscc_output_2_STATE_VARIABLE_ModuleInfo_32;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_3_6_p_0(
  MR_Word tscc_proc_2_input_1_Type_7,
  MR_Word tscc_proc_2_input_2_InstA_8,
  MR_Word tscc_proc_2_input_3_InstB_9,
  MR_Word * tscc_output_ptr_1_InstAB_10,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32)
{
  MR_Word tscc_proc_1_input_1_Type_7;
  MR_Word tscc_proc_1_input_2_InstA_8;
  MR_Word tscc_proc_1_input_3_InstB_9;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_InstAB_10;
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
    MR_Word Type_7 = tscc_proc_1_input_1_Type_7;
    MR_Word InstA_8 = tscc_proc_1_input_2_InstA_8;
    MR_Word InstB_9 = tscc_proc_1_input_3_InstB_9;
    MR_Word InstAB_10;
    MR_Word STATE_VARIABLE_ModuleInfo_0_31 = tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
    MR_Word STATE_VARIABLE_ModuleInfo_32;
    MR_bool succeeded = ((((MR_tag((MR_Word) InstA_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 0)))) == (MR_Integer) 0)));

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word ExpandedInstA_37;
      MR_Word ExpandedInstB_38;

      check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstA_8, &ExpandedInstA_37);
      check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstB_9, &ExpandedInstB_38);
      succeeded = (ExpandedInstB_38 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        InstAB_10 = ExpandedInstA_37;
        STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ExpandedInstA_37 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          InstAB_10 = ExpandedInstB_38;
          STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_Type_7 = Type_7;
          MR_Word next_value_of_tscc_proc_2_input_2_InstA_8 = ExpandedInstA_37;
          MR_Word next_value_of_tscc_proc_2_input_3_InstB_9 = ExpandedInstB_38;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19 = STATE_VARIABLE_ModuleInfo_0_31;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Type_7 = next_value_of_tscc_proc_2_input_1_Type_7;
          tscc_proc_2_input_2_InstA_8 = next_value_of_tscc_proc_2_input_2_InstA_8;
          tscc_proc_2_input_3_InstB_9 = next_value_of_tscc_proc_2_input_3_InstB_9;
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
      MR_Word InstAB0_25;

      hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &InstTable0_18);
      hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable0_18, &MergeInstTable0_19);
      {
        MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MergeInstInfo_20, 0) = ((MR_Box) (InstA_8));
        MR_hl_field(MR_mktag(0), MergeInstInfo_20, 1) = ((MR_Box) (InstB_9));
      }
      {
        MergeInstName_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MergeInstName_21, 0) = ((MR_Box) (InstA_8));
        MR_hl_field(MR_mktag(2), MergeInstName_21, 1) = ((MR_Box) (InstB_9));
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
        MR_Word ExpandedInstA_39;
        MR_Word ExpandedInstB_40;

        hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable1_23, InstTable0_18, &InstTable1_26);
        hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_34_34);
        check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstA_8, &ExpandedInstA_39);
        check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, InstB_9, &ExpandedInstB_40);
        succeeded = (ExpandedInstB_40 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          InstAB0_25 = ExpandedInstA_39;
          STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ExpandedInstA_39 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            InstAB0_25 = ExpandedInstB_40;
            STATE_VARIABLE_ModuleInfo_35_35 = STATE_VARIABLE_ModuleInfo_34_34;
            succeeded = MR_TRUE;
          }
          else
            succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_39, ExpandedInstB_40, &InstAB0_25, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_35_35);
        }
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_35_35, &InstTable2_27);
          hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable2_27, &MergeInstTable2_28);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (InstAB0_25));
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
            InstAB0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InstAB0_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), InstAB0_25, 1) = ((MR_Box) (MergeInstName_21));
          }
        else
          InstAB0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMergedInst_24, (MR_Integer) 0))));
        STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(STATE_VARIABLE_ModuleInfo_32, MergeInstName_21, InstAB0_25);
        if (succeeded)
          {
            InstAB_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InstAB_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), InstAB_10, 1) = ((MR_Box) (MergeInstName_21));
          }
        else
          InstAB_10 = InstAB0_25;
        succeeded = MR_TRUE;
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_InstAB_10 = InstAB_10;
    tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_32;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Type_7 = tscc_proc_2_input_1_Type_7;
    MR_Word InstA_8 = tscc_proc_2_input_2_InstA_8;
    MR_Word InstB_9 = tscc_proc_2_input_3_InstB_9;
    MR_Word InstAB_10;
    MR_Word STATE_VARIABLE_ModuleInfo_0_19 = tscc_proc_2_input_4_STATE_VARIABLE_ModuleInfo_0_19;
    MR_Word STATE_VARIABLE_ModuleInfo_20;
    MR_bool succeeded = ((((MR_tag((MR_Word) InstA_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word InstVarsA_12;
    MR_Word SubInstA_13;

    if (succeeded)
    {
      InstVarsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))));
      SubInstA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 2))));
      {
        MR_Word InstVarsB_14;
        MR_Word SubInstB_15;

        succeeded = ((((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 1))));
          SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 2))));
          {
            MR_Word TypeInfo__26_26;
            MR_Word InstAB0_16;
            MR_Word InstVars_17;

            succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, SubInstA_13, SubInstB_15, &InstAB0_16, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
            if (succeeded)
            {
              TypeInfo__26_26 = (MR_Word) (&check_hlds__inst_merge_scalar_common_1[0]);
              mercury__set__intersect_3_p_0(TypeInfo__26_26, InstVarsA_12, InstVarsB_14, &InstVars_17);
              succeeded = mercury__set__is_non_empty_1_p_0(TypeInfo__26_26, InstVars_17);
              if (succeeded)
                {
                  InstAB_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), InstAB_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), InstAB_10, 1) = ((MR_Box) (InstVars_17));
                  MR_hl_field(MR_mktag(3), InstAB_10, 2) = ((MR_Box) (InstAB0_16));
                }
              else
                InstAB_10 = InstAB0_16;
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Type_7 = Type_7;
          MR_Word next_value_of_tscc_proc_1_input_2_InstA_8 = SubInstA_13;
          MR_Word next_value_of_tscc_proc_1_input_3_InstB_9 = InstB_9;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Type_7 = next_value_of_tscc_proc_1_input_1_Type_7;
          tscc_proc_1_input_2_InstA_8 = next_value_of_tscc_proc_1_input_2_InstA_8;
          tscc_proc_1_input_3_InstB_9 = next_value_of_tscc_proc_1_input_3_InstB_9;
          tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
          goto top_of_proc_1;
        }
      }
    }
    else
    {
      MR_Word SubInstB_25;

      succeeded = ((((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        SubInstB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 2))));
        {
          MR_Word next_value_of_tscc_proc_1_input_1_Type_7 = Type_7;
          MR_Word next_value_of_tscc_proc_1_input_2_InstA_8 = InstA_8;
          MR_Word next_value_of_tscc_proc_1_input_3_InstB_9 = SubInstB_25;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = STATE_VARIABLE_ModuleInfo_0_19;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Type_7 = next_value_of_tscc_proc_1_input_1_Type_7;
          tscc_proc_1_input_2_InstA_8 = next_value_of_tscc_proc_1_input_2_InstA_8;
          tscc_proc_1_input_3_InstB_9 = next_value_of_tscc_proc_1_input_3_InstB_9;
          tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_ModuleInfo_0_31;
          goto top_of_proc_1;
        }
      }
      else
        succeeded = check_hlds__inst_merge__inst_merge_4_6_p_0(Type_7, InstA_8, InstB_9, &InstAB_10, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_20);
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_InstAB_10 = InstAB_10;
    tscc_output_2_STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_20;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_InstAB_10 = tscc_output_1_InstAB_10;
  *tscc_output_ptr_2_STATE_VARIABLE_ModuleInfo_32 = tscc_output_2_STATE_VARIABLE_ModuleInfo_32;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(
  MR_Word Type_9,
  MR_Word UniqA_10,
  MR_Word InstResultsA_11,
  MR_Word BoundInstsA_12,
  MR_Word UniqB_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, InstResultsA_11, BoundInstsA_12);
  if (succeeded)
  {
    MR_Word Uniq_16;
    MR_Word Uniq0_45;
    MR_Word Expansions0_46;
    MR_Word _Expansions_47;

    succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqB_13, UniqA_10);
    if (succeeded)
      Uniq0_45 = UniqA_10;
    else
      Uniq0_45 = UniqB_13;
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_46);
    check_hlds__inst_merge__merge_bound_inst_list_uniq_6_p_0(STATE_VARIABLE_ModuleInfo_0_24, BoundInstsA_12, Uniq0_45, Expansions0_46, &_Expansions_47, &Uniq_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Result_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Constructors_17;

    succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, InstResultsA_11, BoundInstsA_12);
    if (succeeded)
    {
      succeeded = check_hlds__type_util__type_constructors_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, Type_9, &Constructors_17);
      if (succeeded)
      {
        MR_Word TypeCtor_18;
        MR_Word BoundInstsB0_19;
        MR_Word BoundInstsB_20;
        MR_Word InstResultsB_21;
        MR_Word InstA_22;
        MR_Word InstB_23;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;

        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_9, &TypeCtor_18);
        check_hlds__mode_util__constructors_to_bound_insts_5_p_0(STATE_VARIABLE_ModuleInfo_0_24, UniqB_13, TypeCtor_18, Constructors_17, &BoundInstsB0_19);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInstsB0_19, &BoundInstsB_20);
        Var_30 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        }
        Var_32 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_merge_scalar_common_1[0]));
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        }
        Var_34 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        }
        Var_35 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_18)));
        {
          InstResultsB_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), InstResultsB_21, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
          MR_hl_field(MR_mktag(1), InstResultsB_21, 1) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), InstResultsB_21, 2) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), InstResultsB_21, 3) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), InstResultsB_21, 4) = ((MR_Box) (Var_35));
        }
        {
          InstA_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), InstA_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), InstA_22, 1) = (MR_Box) ((MR_Unsigned) (UniqA_10));
          MR_hl_field(MR_mktag(3), InstA_22, 2) = ((MR_Box) (InstResultsA_11));
          MR_hl_field(MR_mktag(3), InstA_22, 3) = ((MR_Box) (BoundInstsA_12));
        }
        {
          InstB_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), InstB_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), InstB_23, 1) = (MR_Box) ((MR_Unsigned) (UniqB_13));
          MR_hl_field(MR_mktag(3), InstB_23, 2) = ((MR_Box) (InstResultsB_21));
          MR_hl_field(MR_mktag(3), InstB_23, 3) = ((MR_Box) (BoundInstsB_20));
        }
        succeeded = check_hlds__inst_merge__inst_merge_4_6_p_0(Type_9, InstA_22, InstB_23, Result_14, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
      }
      else
      {
        MR_Word Uniq_38;
        MR_Word Uniq0_49;
        MR_Word Expansions0_50;
        MR_Word _Expansions_51;

        succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqB_13, UniqA_10);
        if (succeeded)
          Uniq0_49 = UniqA_10;
        else
          Uniq0_49 = UniqB_13;
        mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_50);
        check_hlds__inst_merge__merge_bound_inst_list_uniq_6_p_0(STATE_VARIABLE_ModuleInfo_0_24, BoundInstsA_12, Uniq0_49, Expansions0_50, &_Expansions_51, &Uniq_38);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Result_14 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_38));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_merge__bound_inst_list_merge_6_p_0(
  MR_Word Type_7,
  MR_Word BoundInstsA_8,
  MR_Word BoundInstsB_9,
  MR_Word * BoundInstsAB_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  MR_bool succeeded;

  if ((BoundInstsA_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *BoundInstsAB_10 = BoundInstsB_9;
    *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_8, (MR_Integer) 1))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsA_8, (MR_Integer) 0))));

    if ((BoundInstsB_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *BoundInstsAB_10 = BoundInstsA_8;
      *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInstB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_9, (MR_Integer) 0))));
      MR_Word BoundInstsTailB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BoundInstsB_9, (MR_Integer) 1))));
      MR_Word ConsIdA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
      MR_Word ArgsA_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
      MR_Word ConsIdB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_16, (MR_Integer) 0))));
      MR_Word ArgsB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInstB_16, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_18, ConsIdB_20);
      if (succeeded)
      {
        MR_Word Types_22;
        MR_Word ArgsAB_23;
        MR_Word BoundInst_24;
        MR_Word BoundInstsABTail_25;
        MR_Integer Var_28;
        MR_Word STATE_VARIABLE_ModuleInfo_29_29;

        Var_28 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgsA_19);
        check_hlds__inst_util__get_cons_id_arg_types_5_p_0(STATE_VARIABLE_ModuleInfo_0_26, Type_7, ConsIdA_18, Var_28, &Types_22);
        succeeded = check_hlds__inst_merge__inst_list_merge_6_p_0(Types_22, ArgsA_19, ArgsB_21, &ArgsAB_23, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_29_29);
        if (succeeded)
        {
          {
            BoundInst_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BoundInst_24, 0) = ((MR_Box) (ConsIdA_18));
            MR_hl_field(MR_mktag(0), BoundInst_24, 1) = ((MR_Box) (ArgsAB_23));
          }
          succeeded = check_hlds__inst_merge__bound_inst_list_merge_6_p_0(Type_7, Var_40, BoundInstsTailB_17, &BoundInstsABTail_25, STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_ModuleInfo_27);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *BoundInstsAB_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsABTail_25));
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
          MR_Word BoundInstsABTail_34;

          succeeded = check_hlds__inst_merge__bound_inst_list_merge_6_p_0(Type_7, Var_40, BoundInstsB_9, &BoundInstsABTail_34, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *BoundInstsAB_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsABTail_34));
            }
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word BoundInstsABTail_35;

          succeeded = check_hlds__inst_merge__bound_inst_list_merge_6_p_0(Type_7, BoundInstsA_8, BoundInstsTailB_17, &BoundInstsABTail_35, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *BoundInstsAB_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInstB_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInstsABTail_35));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
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
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Type_11;
    MR_Word Types_12;
    MR_Word ArgA_13;
    MR_Word ArgsA_14;
    MR_Word ArgB_15;
    MR_Word ArgsB_16;
    MR_Word ArgAB_17;
    MR_Word ArgsAB_18;
    MR_Word STATE_VARIABLE_ModuleInfo_22_22;

    succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      ArgA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgsA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        ArgsB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_11, ArgA_13, ArgB_15, &ArgAB_17, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_22_22);
        if (succeeded)
        {
          succeeded = check_hlds__inst_merge__inst_list_merge_6_p_0(Types_12, ArgsA_14, ArgsB_16, &ArgsAB_18, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_ModuleInfo_6);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgAB_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsAB_18));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_4_6_p_0(
  MR_Word Type_7,
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word * InstAB_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstA_8)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstA_8)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          if ((InstB_9 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *InstAB_10 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
            succeeded = MR_TRUE;
          }
          else
          if (((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 2))
          {
            MR_Word Uniq_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_9, (MR_Integer) 0))) & (MR_Integer) 7);

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
              *InstAB_10 = InstB_9;
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
        MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_8, (MR_Integer) 1))));
        MR_Word Var_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_8, (MR_Integer) 0))) & (MR_Integer) 7);

        switch (MR_tag((MR_Word) InstB_9)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstB_9)) {
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
                    *InstAB_10 = InstA_8;
                    *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word UniqB_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_9, (MR_Integer) 0))) & (MR_Integer) 7);
              MR_Word HOInstInfoB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_9, (MR_Integer) 1))));
              MR_Word HOInstInfo_16;
              MR_Word Uniq_17;

              succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(Var_109, HOInstInfoB_15, &HOInstInfo_16, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
              if (succeeded)
              {
                check_hlds__inst_merge__merge_uniq_3_p_0(Var_110, UniqB_14, &Uniq_17);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *InstAB_10 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_16));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word InstResultsB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 2))));
                  MR_Word BoundInstsB_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 3))));
                  MR_Word Var_57;
                  MR_Word UniqB_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 1))) & (MR_Integer) 7);
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
                      *InstAB_10 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_63));
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_57));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word UniqB_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 2))));
                  MR_Word HOInstInfo_68;
                  MR_Word Uniq_69;

                  succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(Var_109, HOInstInfoB_67, &HOInstInfo_68, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                  if (succeeded)
                  {
                    check_hlds__inst_merge__merge_uniq_3_p_0(Var_110, UniqB_66, &Uniq_69);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *InstAB_10 = base;
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
                      *InstAB_10 = base;
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 3))));
            MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 2))));
            MR_Word Var_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) InstB_9)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_53;
                  MR_Word UniqB_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_9, (MR_Integer) 0))) & (MR_Integer) 7);
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
                      *InstAB_10 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_76));
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_53));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word BoundInstsAB_32;
                      MR_Word Var_49;
                      MR_Word UniqB_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word Uniq_87;
                      MR_Word BoundInstsB_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 3))));

                      check_hlds__inst_merge__merge_uniq_3_p_0(Var_113, UniqB_86, &Uniq_87);
                      succeeded = check_hlds__inst_merge__bound_inst_list_merge_6_p_0(Type_7, Var_111, BoundInstsB_88, &BoundInstsAB_32, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                      if (succeeded)
                      {
                        Var_49 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *InstAB_10 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_87));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_49));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInstsAB_32));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word UniqB_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 1))) & (MR_Integer) 7);

                      succeeded = check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(Type_7, Var_113, Var_112, Var_111, UniqB_91, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                      if (succeeded)
                      {
                        succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*STATE_VARIABLE_ModuleInfo_41, InstA_8);
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
            MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 2))));
            MR_Word Var_115 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) InstB_9)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniqB_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_9, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_9, (MR_Integer) 1))));
                  MR_Word HOInstInfo_81;
                  MR_Word Uniq_82;

                  succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(Var_114, HOInstInfoB_80, &HOInstInfo_81, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                  if (succeeded)
                  {
                    check_hlds__inst_merge__merge_uniq_3_p_0(Var_115, UniqB_79, &Uniq_82);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *InstAB_10 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_82));
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_81));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word UniqB_95 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word InstResultsB_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 2))));
                      MR_Word BoundInstsB_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 3))));

                      succeeded = check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(Type_7, UniqB_95, InstResultsB_96, BoundInstsB_97, Var_115, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                      if (succeeded)
                      {
                        succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(*STATE_VARIABLE_ModuleInfo_41, InstB_9);
                        succeeded = !(succeeded);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word UniqB_100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 2))));
                      MR_Word HOInstInfo_102;
                      MR_Word Uniq_103;

                      succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(Var_114, HOInstInfoB_101, &HOInstInfo_102, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                      if (succeeded)
                      {
                        check_hlds__inst_merge__merge_uniq_3_p_0(Var_115, UniqB_100, &Uniq_103);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *InstAB_10 = base;
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
            MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 2))));
            MR_Word Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_8, (MR_Integer) 1))));

            if (((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 2))
            {
              MR_Word Var_51;
              MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_9, (MR_Integer) 0))) & (MR_Integer) 7);
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
                  *InstAB_10 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_84));
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_51));
                }
                succeeded = MR_TRUE;
              }
            }
            else
            if (((((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
            {
              MR_Word TypeCtorInfo__104_104;
              MR_Word TypeCtorInfo__105_105;
              MR_Word ArgsB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 2))));
              MR_Word Types_38;
              MR_Word ArgsAB_39;
              MR_Integer Var_42;
              MR_Word Var_43;
              MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_9, (MR_Integer) 1))));

              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_108, Var_106);
              if (succeeded)
              {
                TypeCtorInfo__104_104 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                TypeCtorInfo__105_105 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                Var_42 = mercury__list__length_1_f_0(TypeCtorInfo__105_105, Var_107);
                Var_43 = check_hlds__inst_util__no_type_available_0_f_0();
                Types_38 = mercury__list__duplicate_2_f_0(TypeCtorInfo__104_104, Var_42, ((MR_Box) (Var_43)));
                succeeded = check_hlds__inst_merge__inst_list_merge_6_p_0(Types_38, Var_107, ArgsB_37, &ArgsAB_39, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *InstAB_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_108));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgsAB_39));
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

static void MR_CALL 
check_hlds__inst_merge__merge_uniq_bound_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UniqA_7,
  MR_Word UniqB_8,
  MR_Word BoundInstsB_9,
  MR_Word * Uniq_10)
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

static void MR_CALL 
check_hlds__inst_merge__merge_uniq_3_p_0(
  MR_Word UniqA_4,
  MR_Word UniqB_5,
  MR_Word * Merged_6)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_4, UniqB_5);
  if (succeeded)
    *Merged_6 = UniqB_5;
  else
    *Merged_6 = UniqA_4;
}

static MR_bool MR_CALL 
check_hlds__inst_merge____Unify____merge_fail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_merge____Unify____merge_fail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_merge____Compare____merge_fail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_merge____Compare____merge_fail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__inst_merge__init(void)
{
}

void mercury__check_hlds__inst_merge__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_merge__check_hlds__inst_merge__type_ctor_info_merge_fail_0);
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
