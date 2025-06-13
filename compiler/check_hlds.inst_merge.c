/*
** Automatically generated from `inst_merge.m'
** by the Mercury compiler,
** version rotd-2025-06-13
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
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_merge__insts_merge_pass_9_p_0(
  MR_Word Type_10,
  MR_Word I1_11,
  MR_Word Is2Plus_12,
  MR_Word STATE_VARIABLE_MergedIs_0_40,
  MR_Word * STATE_VARIABLE_MergedIs_41,
  MR_Word STATE_VARIABLE_Fail_0_42,
  MR_Word * STATE_VARIABLE_Fail_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45);

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_3_6_p_0(
  MR_Word Type_7,
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word * InstAB_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41);

static MR_bool MR_CALL 
check_hlds__inst_merge__bound_functor_list_merge_6_p_0(
  MR_Word Type_7,
  MR_Word BoundFunctorsA_8,
  MR_Word BoundFunctorsB_9,
  MR_Word * BoundFunctorsAB_10,
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
check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(
  MR_Word Type_9,
  MR_Word UniqA_10,
  MR_Word InstResultsA_11,
  MR_Word BoundFunctorsA_12,
  MR_Word UniqB_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25);

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_4_6_p_0(
  MR_Word Type_7,
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word * InstAB_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32);

static void MR_CALL 
check_hlds__inst_merge__merge_uniq_bound_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word UniqA_7,
  MR_Word UniqB_8,
  MR_Word BoundFunctorsB_9,
  MR_Word * Uniq_10);

static void MR_CALL 
check_hlds__inst_merge__merge_inst_uniq_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstA_8,
  MR_Word UniqB_9,
  MR_Word STATE_VARIABLE_Expansions_0_23,
  MR_Word * STATE_VARIABLE_Expansions_24,
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
check_hlds__inst_merge__merge_bound_functor_list_uniq_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5,
  MR_Word * Uniq_6);

static MR_bool MR_CALL 
check_hlds__inst_merge__merge_ho_inst_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word HOInstInfoA_8,
  MR_Word HOInstInfoB_9,
  MR_Word * HOInstInfo_10);

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

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
    MR_Word STATE_VARIABLE_ModuleInfo_1_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    check_hlds__inst_merge__insts_merge_pass_9_p_0(Type_7, HeadInst_8, TailInsts_9, (MR_Word) ((MR_Unsigned) 0U), &MergedInsts_12, (MR_Integer) 0, &Fail_13, STATE_VARIABLE_ModuleInfo_0_18, &STATE_VARIABLE_ModuleInfo_1_22);
    switch (Fail_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *MaybeMergedInst_10 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_1_22;
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
          MR_Word MergedInst1_14 = ((MR_Word) ((MR_hl_field(1, MergedInsts_12, 0))));
          MR_Word MergedInsts2Plus_15 = ((MR_Word) ((MR_hl_field(1, MergedInsts_12, 1))));

          if ((MergedInsts2Plus_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeMergedInst_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MergedInst1_14));
            }
            *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_1_22;
          }
          else
          {
            MR_Word next_value_of_HeadInst_8 = MergedInst1_14;
            MR_Word next_value_of_TailInsts_9 = MergedInsts2Plus_15;
            MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_18 = STATE_VARIABLE_ModuleInfo_1_22;

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
  MR_Word I1_11,
  MR_Word Is2Plus_12,
  MR_Word STATE_VARIABLE_MergedIs_0_40,
  MR_Word * STATE_VARIABLE_MergedIs_41,
  MR_Word STATE_VARIABLE_Fail_0_42,
  MR_Word * STATE_VARIABLE_Fail_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Is2Plus_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_MergedIs_41 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (I1_11));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedIs_0_40));
      }
      *STATE_VARIABLE_Fail_43 = STATE_VARIABLE_Fail_0_42;
      *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
    }
    else
    {
      MR_Word Var_187 = ((MR_Word) ((MR_hl_field(1, Is2Plus_12, 1))));
      MR_Word Var_188 = ((MR_Word) ((MR_hl_field(1, Is2Plus_12, 0))));

      if ((Var_187 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word I12_17;
        MR_Word STATE_VARIABLE_ModuleInfo_1_48;

        succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I1_11, Var_188, &I12_17, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_1_48);
        if (succeeded)
        {
          *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_1_48;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_MergedIs_41 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (I12_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedIs_0_40));
          }
          *STATE_VARIABLE_Fail_43 = STATE_VARIABLE_Fail_0_42;
        }
        else
        {
          *STATE_VARIABLE_Fail_43 = (MR_Integer) 1;
          *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
          *STATE_VARIABLE_MergedIs_41 = STATE_VARIABLE_MergedIs_0_40;
        }
      }
      else
      {
        MR_Word Var_189 = ((MR_Word) ((MR_hl_field(1, Var_187, 1))));
        MR_Word Var_190 = ((MR_Word) ((MR_hl_field(1, Var_187, 0))));

        if ((Var_189 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word I123_19;
          MR_Word STATE_VARIABLE_ModuleInfo_4_55;
          MR_Word STATE_VARIABLE_ModuleInfo_3_54;
          MR_Word I12_125;

          succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I1_11, Var_188, &I12_125, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_3_54);
          if (succeeded)
            succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I12_125, Var_190, &I123_19, STATE_VARIABLE_ModuleInfo_3_54, &STATE_VARIABLE_ModuleInfo_4_55);
          if (succeeded)
          {
            *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_4_55;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MergedIs_41 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (I123_19));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedIs_0_40));
            }
            *STATE_VARIABLE_Fail_43 = STATE_VARIABLE_Fail_0_42;
          }
          else
          {
            *STATE_VARIABLE_Fail_43 = (MR_Integer) 1;
            *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
            *STATE_VARIABLE_MergedIs_41 = STATE_VARIABLE_MergedIs_0_40;
          }
        }
        else
        {
          MR_Word Var_191 = ((MR_Word) ((MR_hl_field(1, Var_189, 1))));
          MR_Word Var_192 = ((MR_Word) ((MR_hl_field(1, Var_189, 0))));

          if ((Var_191 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word I1234_22;
            MR_Word STATE_VARIABLE_ModuleInfo_8_64;
            MR_Word I34_21;
            MR_Word STATE_VARIABLE_ModuleInfo_6_62;
            MR_Word STATE_VARIABLE_ModuleInfo_7_63;
            MR_Word I12_129;

            succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I1_11, Var_188, &I12_129, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_6_62);
            if (succeeded)
            {
              succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Var_190, Var_192, &I34_21, STATE_VARIABLE_ModuleInfo_6_62, &STATE_VARIABLE_ModuleInfo_7_63);
              if (succeeded)
                succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I12_129, I34_21, &I1234_22, STATE_VARIABLE_ModuleInfo_7_63, &STATE_VARIABLE_ModuleInfo_8_64);
            }
            if (succeeded)
            {
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_8_64;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MergedIs_41 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (I1234_22));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedIs_0_40));
              }
              *STATE_VARIABLE_Fail_43 = STATE_VARIABLE_Fail_0_42;
            }
            else
            {
              *STATE_VARIABLE_Fail_43 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
              *STATE_VARIABLE_MergedIs_41 = STATE_VARIABLE_MergedIs_0_40;
            }
          }
          else
          {
            MR_Word Var_193 = ((MR_Word) ((MR_hl_field(1, Var_191, 1))));
            MR_Word Var_194 = ((MR_Word) ((MR_hl_field(1, Var_191, 0))));

            if ((Var_193 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word I12345_25;
              MR_Word STATE_VARIABLE_ModuleInfo_13_75;
              MR_Word I45_24;
              MR_Word STATE_VARIABLE_ModuleInfo_10_72;
              MR_Word STATE_VARIABLE_ModuleInfo_11_73;
              MR_Word STATE_VARIABLE_ModuleInfo_12_74;
              MR_Word I12_134;
              MR_Word I123_135;

              succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I1_11, Var_188, &I12_134, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_10_72);
              if (succeeded)
              {
                succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I12_134, Var_190, &I123_135, STATE_VARIABLE_ModuleInfo_10_72, &STATE_VARIABLE_ModuleInfo_11_73);
                if (succeeded)
                {
                  succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Var_192, Var_194, &I45_24, STATE_VARIABLE_ModuleInfo_11_73, &STATE_VARIABLE_ModuleInfo_12_74);
                  if (succeeded)
                    succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I123_135, I45_24, &I12345_25, STATE_VARIABLE_ModuleInfo_12_74, &STATE_VARIABLE_ModuleInfo_13_75);
                }
              }
              if (succeeded)
              {
                *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_13_75;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_MergedIs_41 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (I12345_25));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedIs_0_40));
                }
                *STATE_VARIABLE_Fail_43 = STATE_VARIABLE_Fail_0_42;
              }
              else
              {
                *STATE_VARIABLE_Fail_43 = (MR_Integer) 1;
                *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
                *STATE_VARIABLE_MergedIs_41 = STATE_VARIABLE_MergedIs_0_40;
              }
            }
            else
            {
              MR_Word Var_195 = ((MR_Word) ((MR_hl_field(1, Var_193, 1))));
              MR_Word Var_196 = ((MR_Word) ((MR_hl_field(1, Var_193, 0))));

              if ((Var_195 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word I123456_28;
                MR_Word STATE_VARIABLE_ModuleInfo_19_88;
                MR_Word I456_27;
                MR_Word STATE_VARIABLE_ModuleInfo_15_84;
                MR_Word STATE_VARIABLE_ModuleInfo_16_85;
                MR_Word STATE_VARIABLE_ModuleInfo_17_86;
                MR_Word STATE_VARIABLE_ModuleInfo_18_87;
                MR_Word I12_143;
                MR_Word I123_144;
                MR_Word I45_145;

                succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I1_11, Var_188, &I12_143, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_15_84);
                if (succeeded)
                {
                  succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I12_143, Var_190, &I123_144, STATE_VARIABLE_ModuleInfo_15_84, &STATE_VARIABLE_ModuleInfo_16_85);
                  if (succeeded)
                  {
                    succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Var_192, Var_194, &I45_145, STATE_VARIABLE_ModuleInfo_16_85, &STATE_VARIABLE_ModuleInfo_17_86);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I45_145, Var_196, &I456_27, STATE_VARIABLE_ModuleInfo_17_86, &STATE_VARIABLE_ModuleInfo_18_87);
                      if (succeeded)
                        succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I123_144, I456_27, &I123456_28, STATE_VARIABLE_ModuleInfo_18_87, &STATE_VARIABLE_ModuleInfo_19_88);
                    }
                  }
                }
                if (succeeded)
                {
                  *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_19_88;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_MergedIs_41 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (I123456_28));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedIs_0_40));
                  }
                  *STATE_VARIABLE_Fail_43 = STATE_VARIABLE_Fail_0_42;
                }
                else
                {
                  *STATE_VARIABLE_Fail_43 = (MR_Integer) 1;
                  *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
                  *STATE_VARIABLE_MergedIs_41 = STATE_VARIABLE_MergedIs_0_40;
                }
              }
              else
              {
                MR_Word Var_197 = ((MR_Word) ((MR_hl_field(1, Var_195, 1))));
                MR_Word Var_198 = ((MR_Word) ((MR_hl_field(1, Var_195, 0))));

                if ((Var_197 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word I1234567_32;
                  MR_Word STATE_VARIABLE_ModuleInfo_26_103;
                  MR_Word I56_30;
                  MR_Word I567_31;
                  MR_Word STATE_VARIABLE_ModuleInfo_21_98;
                  MR_Word STATE_VARIABLE_ModuleInfo_22_99;
                  MR_Word STATE_VARIABLE_ModuleInfo_23_100;
                  MR_Word STATE_VARIABLE_ModuleInfo_24_101;
                  MR_Word STATE_VARIABLE_ModuleInfo_25_102;
                  MR_Word I12_156;
                  MR_Word I34_157;
                  MR_Word I1234_158;

                  succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I1_11, Var_188, &I12_156, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_21_98);
                  if (succeeded)
                  {
                    succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Var_190, Var_192, &I34_157, STATE_VARIABLE_ModuleInfo_21_98, &STATE_VARIABLE_ModuleInfo_22_99);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I12_156, I34_157, &I1234_158, STATE_VARIABLE_ModuleInfo_22_99, &STATE_VARIABLE_ModuleInfo_23_100);
                      if (succeeded)
                      {
                        succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Var_194, Var_196, &I56_30, STATE_VARIABLE_ModuleInfo_23_100, &STATE_VARIABLE_ModuleInfo_24_101);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I56_30, Var_198, &I567_31, STATE_VARIABLE_ModuleInfo_24_101, &STATE_VARIABLE_ModuleInfo_25_102);
                          if (succeeded)
                            succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I1234_158, I567_31, &I1234567_32, STATE_VARIABLE_ModuleInfo_25_102, &STATE_VARIABLE_ModuleInfo_26_103);
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_26_103;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_MergedIs_41 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (I1234567_32));
                      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MergedIs_0_40));
                    }
                    *STATE_VARIABLE_Fail_43 = STATE_VARIABLE_Fail_0_42;
                  }
                  else
                  {
                    *STATE_VARIABLE_Fail_43 = (MR_Integer) 1;
                    *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
                    *STATE_VARIABLE_MergedIs_41 = STATE_VARIABLE_MergedIs_0_40;
                  }
                }
                else
                {
                  MR_Word I8_33 = ((MR_Word) ((MR_hl_field(1, Var_197, 0))));
                  MR_Word Is9Plus_34 = ((MR_Word) ((MR_hl_field(1, Var_197, 1))));
                  MR_Word I12345678_37;
                  MR_Word STATE_VARIABLE_ModuleInfo_34_119;
                  MR_Word I78_35;
                  MR_Word I5678_36;
                  MR_Word STATE_VARIABLE_ModuleInfo_28_113;
                  MR_Word STATE_VARIABLE_ModuleInfo_29_114;
                  MR_Word STATE_VARIABLE_ModuleInfo_30_115;
                  MR_Word STATE_VARIABLE_ModuleInfo_31_116;
                  MR_Word STATE_VARIABLE_ModuleInfo_32_117;
                  MR_Word STATE_VARIABLE_ModuleInfo_33_118;
                  MR_Word I12_170;
                  MR_Word I34_171;
                  MR_Word I1234_172;
                  MR_Word I56_173;

                  succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I1_11, Var_188, &I12_170, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_28_113);
                  if (succeeded)
                  {
                    succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Var_190, Var_192, &I34_171, STATE_VARIABLE_ModuleInfo_28_113, &STATE_VARIABLE_ModuleInfo_29_114);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I12_170, I34_171, &I1234_172, STATE_VARIABLE_ModuleInfo_29_114, &STATE_VARIABLE_ModuleInfo_30_115);
                      if (succeeded)
                      {
                        succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Var_194, Var_196, &I56_173, STATE_VARIABLE_ModuleInfo_30_115, &STATE_VARIABLE_ModuleInfo_31_116);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, Var_198, I8_33, &I78_35, STATE_VARIABLE_ModuleInfo_31_116, &STATE_VARIABLE_ModuleInfo_32_117);
                          if (succeeded)
                          {
                            succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I56_173, I78_35, &I5678_36, STATE_VARIABLE_ModuleInfo_32_117, &STATE_VARIABLE_ModuleInfo_33_118);
                            if (succeeded)
                              succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_10, I1234_172, I5678_36, &I12345678_37, STATE_VARIABLE_ModuleInfo_33_118, &STATE_VARIABLE_ModuleInfo_34_119);
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word STATE_VARIABLE_MergedIs_8_120;

                    {
                      STATE_VARIABLE_MergedIs_8_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_MergedIs_8_120, 0) = ((MR_Box) (I12345678_37));
                      MR_hl_field(1, STATE_VARIABLE_MergedIs_8_120, 1) = ((MR_Box) (STATE_VARIABLE_MergedIs_0_40));
                    }
                    if ((Is9Plus_34 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      *STATE_VARIABLE_MergedIs_41 = STATE_VARIABLE_MergedIs_8_120;
                      *STATE_VARIABLE_Fail_43 = STATE_VARIABLE_Fail_0_42;
                      *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_34_119;
                    }
                    else
                    {
                      MR_Word I9_38 = ((MR_Word) ((MR_hl_field(1, Is9Plus_34, 0))));
                      MR_Word Is10Plus_39 = ((MR_Word) ((MR_hl_field(1, Is9Plus_34, 1))));
                      MR_Word next_value_of_I1_11 = I9_38;
                      MR_Word next_value_of_Is2Plus_12 = Is10Plus_39;
                      MR_Word next_value_of_STATE_VARIABLE_MergedIs_0_40 = STATE_VARIABLE_MergedIs_8_120;
                      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_44 = STATE_VARIABLE_ModuleInfo_34_119;

                      // direct tailcall eliminated
                      ;
                      I1_11 = next_value_of_I1_11;
                      Is2Plus_12 = next_value_of_Is2Plus_12;
                      STATE_VARIABLE_MergedIs_0_40 = next_value_of_STATE_VARIABLE_MergedIs_0_40;
                      STATE_VARIABLE_ModuleInfo_0_44 = next_value_of_STATE_VARIABLE_ModuleInfo_0_44;
                      continue;
                    }
                  }
                  else
                  {
                    *STATE_VARIABLE_Fail_43 = (MR_Integer) 1;
                    *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
                    *STATE_VARIABLE_MergedIs_41 = STATE_VARIABLE_MergedIs_0_40;
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_3_6_p_0(
  MR_Word Type_7,
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word * InstAB_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstA_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) InstB_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *InstAB_10 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstB_9, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word SubInstB_126 = ((MR_Word) ((MR_hl_field(3, InstB_9, 2))));

                succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, InstA_8, SubInstB_126, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Uniq_48 = ((MR_Unsigned) ((MR_hl_field(3, InstB_9, 1))) & (MR_Integer) 7);

                switch (Uniq_48) {
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
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) InstB_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UniqB_57 = ((MR_Unsigned) ((MR_hl_field(1, InstB_9, 0))) & (MR_Integer) 7);
            MR_Word HOInstInfoB_58 = ((MR_Word) ((MR_hl_field(1, InstB_9, 1))));
            MR_Word Uniq_70;
            MR_Word HOInstInfo_71;
            MR_Word UniqA_136 = ((MR_Unsigned) ((MR_hl_field(1, InstA_8, 0))) & (MR_Integer) 7);
            MR_Word HOInstInfoA_137 = ((MR_Word) ((MR_hl_field(1, InstA_8, 1))));

            succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, Type_7, HOInstInfoA_137, HOInstInfoB_58, &HOInstInfo_71);
            if (succeeded)
            {
              check_hlds__inst_merge__merge_uniq_3_p_0(UniqA_136, UniqB_57, &Uniq_70);
              *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *InstAB_10 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_70));
                MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_71));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word InstResultsB_59 = ((MR_Word) ((MR_hl_field(2, InstB_9, 1))));
            MR_Word BoundFunctorsB_60 = ((MR_Word) ((MR_hl_field(2, InstB_9, 2))));
            MR_Word UniqB_76 = ((MR_Unsigned) ((MR_hl_field(2, InstB_9, 0))) & (MR_Integer) 7);
            MR_Word UniqA_130 = ((MR_Unsigned) ((MR_hl_field(1, InstA_8, 0))) & (MR_Integer) 7);

            succeeded = check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(Type_7, UniqB_76, InstResultsB_59, BoundFunctorsB_60, UniqA_130, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_3_p_0(*STATE_VARIABLE_ModuleInfo_41, Type_7, InstB_9);
              succeeded = !(succeeded);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstB_9, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word SubInstB_140 = ((MR_Word) ((MR_hl_field(3, InstB_9, 2))));

                succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, InstA_8, SubInstB_140, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word UniqA_55 = ((MR_Unsigned) ((MR_hl_field(1, InstA_8, 0))) & (MR_Integer) 7);
                MR_Word HOInstInfoA_56 = ((MR_Word) ((MR_hl_field(1, InstA_8, 1))));
                MR_Word Uniq_72;
                MR_Word HOInstInfo_73;
                MR_Word UniqB_74 = ((MR_Unsigned) ((MR_hl_field(3, InstB_9, 1))) & (MR_Integer) 7);
                MR_Word HOInstInfoB_75 = ((MR_Word) ((MR_hl_field(3, InstB_9, 2))));

                succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, Type_7, HOInstInfoA_56, HOInstInfoB_75, &HOInstInfo_73);
                if (succeeded)
                {
                  check_hlds__inst_merge__merge_uniq_3_p_0(UniqA_55, UniqB_74, &Uniq_72);
                  *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *InstAB_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_72));
                    MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_73));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 2:
      switch (MR_tag((MR_Word) InstB_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UniqB_91 = ((MR_Unsigned) ((MR_hl_field(1, InstB_9, 0))) & (MR_Integer) 7);
            MR_Word InstResultsA_116 = ((MR_Word) ((MR_hl_field(2, InstA_8, 1))));
            MR_Word BoundFunctorsA_117 = ((MR_Word) ((MR_hl_field(2, InstA_8, 2))));
            MR_Word UniqA_118 = ((MR_Unsigned) ((MR_hl_field(2, InstA_8, 0))) & (MR_Integer) 7);

            succeeded = check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(Type_7, UniqA_118, InstResultsA_116, BoundFunctorsA_117, UniqB_91, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
            if (succeeded)
            {
              succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_3_p_0(*STATE_VARIABLE_ModuleInfo_41, Type_7, InstA_8);
              succeeded = !(succeeded);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BoundFunctorsAB_66;
            MR_Word Var_69;
            MR_Word Uniq_94;
            MR_Word UniqB_95 = ((MR_Unsigned) ((MR_hl_field(2, InstB_9, 0))) & (MR_Integer) 7);
            MR_Word BoundFunctorsB_96 = ((MR_Word) ((MR_hl_field(2, InstB_9, 2))));
            MR_Word BoundFunctorsA_108 = ((MR_Word) ((MR_hl_field(2, InstA_8, 2))));
            MR_Word UniqA_109 = ((MR_Unsigned) ((MR_hl_field(2, InstA_8, 0))) & (MR_Integer) 7);

            check_hlds__inst_merge__merge_uniq_3_p_0(UniqA_109, UniqB_95, &Uniq_94);
            succeeded = check_hlds__inst_merge__bound_functor_list_merge_6_p_0(Type_7, BoundFunctorsA_108, BoundFunctorsB_96, &BoundFunctorsAB_66, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
            if (succeeded)
            {
              Var_69 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *InstAB_10 = base;
                MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_94));
                MR_hl_field(2, base, 1) = ((MR_Box) (Var_69));
                MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctorsAB_66));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, InstB_9, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word SubInstB_121 = ((MR_Word) ((MR_hl_field(3, InstB_9, 2))));

                succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, InstA_8, SubInstB_121, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word InstResultsA_61 = ((MR_Word) ((MR_hl_field(2, InstA_8, 1))));
                MR_Word BoundFunctorsA_62 = ((MR_Word) ((MR_hl_field(2, InstA_8, 2))));
                MR_Word Var_68;
                MR_Word Uniq_92;
                MR_Word UniqB_93 = ((MR_Unsigned) ((MR_hl_field(3, InstB_9, 1))) & (MR_Integer) 7);
                MR_Word UniqA_97 = ((MR_Unsigned) ((MR_hl_field(2, InstA_8, 0))) & (MR_Integer) 7);

                check_hlds__inst_merge__merge_uniq_bound_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, UniqB_93, UniqA_97, BoundFunctorsA_62, &Uniq_92);
                switch (Uniq_92) {
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
                  succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, InstResultsA_61, BoundFunctorsA_62);
                if (succeeded)
                {
                  Var_68 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *InstAB_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_92));
                    MR_hl_field(3, base, 2) = ((MR_Box) (Var_68));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstA_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word InstVarsA_12 = ((MR_Word) ((MR_hl_field(3, InstA_8, 1))));
            MR_Word SubInstA_13 = ((MR_Word) ((MR_hl_field(3, InstA_8, 2))));

            switch (MR_tag((MR_Word) InstB_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, SubInstA_13, InstB_9, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, SubInstA_13, InstB_9, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, InstB_9, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word TypeInfo_47_47;
                      MR_Word InstVarsB_14 = ((MR_Word) ((MR_hl_field(3, InstB_9, 1))));
                      MR_Word SubInstB_15 = ((MR_Word) ((MR_hl_field(3, InstB_9, 2))));
                      MR_Word InstAB0_16;
                      MR_Word InstVars_17;

                      succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, SubInstA_13, SubInstB_15, &InstAB0_16, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                      if (succeeded)
                      {
                        TypeInfo_47_47 = (MR_Word) (&check_hlds__inst_merge_scalar_common_1[0]);
                        mercury__set__intersect_3_p_0(TypeInfo_47_47, InstVarsA_12, InstVarsB_14, &InstVars_17);
                        succeeded = mercury__set__is_non_empty_1_p_0(TypeInfo_47_47, InstVars_17);
                        if (succeeded)
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *InstAB_10 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_17));
                            MR_hl_field(3, base, 2) = ((MR_Box) (InstAB0_16));
                          }
                        else
                          *InstAB_10 = InstAB0_16;
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, SubInstA_13, InstB_9, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) InstB_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word UniqA_102 = ((MR_Unsigned) ((MR_hl_field(3, InstA_8, 1))) & (MR_Integer) 7);

                switch (UniqA_102) {
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
            case (MR_Integer) 1:
              {
                MR_Word Uniq_77;
                MR_Word HOInstInfo_78;
                MR_Word UniqB_79 = ((MR_Unsigned) ((MR_hl_field(1, InstB_9, 0))) & (MR_Integer) 7);
                MR_Word HOInstInfoB_80 = ((MR_Word) ((MR_hl_field(1, InstB_9, 1))));
                MR_Word UniqA_104 = ((MR_Unsigned) ((MR_hl_field(3, InstA_8, 1))) & (MR_Integer) 7);
                MR_Word HOInstInfoA_105 = ((MR_Word) ((MR_hl_field(3, InstA_8, 2))));

                succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, Type_7, HOInstInfoA_105, HOInstInfoB_80, &HOInstInfo_78);
                if (succeeded)
                {
                  check_hlds__inst_merge__merge_uniq_3_p_0(UniqA_104, UniqB_79, &Uniq_77);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *InstAB_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_77));
                    MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_78));
                  }
                  *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_67;
                MR_Word Uniq_85;
                MR_Word UniqB_86 = ((MR_Unsigned) ((MR_hl_field(2, InstB_9, 0))) & (MR_Integer) 7);
                MR_Word InstResultsB_87 = ((MR_Word) ((MR_hl_field(2, InstB_9, 1))));
                MR_Word BoundFunctorsB_88 = ((MR_Word) ((MR_hl_field(2, InstB_9, 2))));
                MR_Word UniqA_99 = ((MR_Unsigned) ((MR_hl_field(3, InstA_8, 1))) & (MR_Integer) 7);

                check_hlds__inst_merge__merge_uniq_bound_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, UniqA_99, UniqB_86, BoundFunctorsB_88, &Uniq_85);
                switch (Uniq_85) {
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
                  succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, InstResultsB_87, BoundFunctorsB_88);
                if (succeeded)
                {
                  Var_67 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *InstAB_10 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_85));
                    MR_hl_field(3, base, 2) = ((MR_Box) (Var_67));
                  }
                  *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, InstB_9, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word SubInstB_46 = ((MR_Word) ((MR_hl_field(3, InstB_9, 2))));

                    succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_7, InstA_8, SubInstB_46, InstAB_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Uniq_81;
                    MR_Word HOInstInfo_82;
                    MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(3, InstB_9, 1))) & (MR_Integer) 7);
                    MR_Word HOInstInfoB_84 = ((MR_Word) ((MR_hl_field(3, InstB_9, 2))));
                    MR_Word UniqA_89 = ((MR_Unsigned) ((MR_hl_field(3, InstA_8, 1))) & (MR_Integer) 7);
                    MR_Word HOInstInfoA_90 = ((MR_Word) ((MR_hl_field(3, InstA_8, 2))));

                    succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, Type_7, HOInstInfoA_90, HOInstInfoB_84, &HOInstInfo_82);
                    if (succeeded)
                    {
                      check_hlds__inst_merge__merge_uniq_3_p_0(UniqA_89, UniqB_83, &Uniq_81);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *InstAB_10 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_81));
                        MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_82));
                      }
                      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          break;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_merge__inst_merge_6_p_0(
  MR_Word Type_7,
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word * InstAB_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  MR_bool succeeded = ((MR_tag((MR_Word) InstA_8)) == (MR_Integer) 2);

  if (succeeded)
    succeeded = ((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 2);
  if (succeeded)
    succeeded = check_hlds__inst_merge__inst_merge_4_6_p_0(Type_7, InstA_8, InstB_9, InstAB_10, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
  else
  {
    MR_Word InstTable0_18;
    MR_Word MergeInstTable0_19;
    MR_Word MergeInstInfo_20;
    MR_Word MergeInstName_21;
    MR_Word MaybeOldMaybeMergedInst_22;
    MR_Word MergeInstTable1_23;
    MR_Word InstAB0_25;

    hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &InstTable0_18);
    hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable0_18, &MergeInstTable0_19);
    {
      MergeInstInfo_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MergeInstInfo_20, 0) = ((MR_Box) (InstA_8));
      MR_hl_field(0, MergeInstInfo_20, 1) = ((MR_Box) (InstB_9));
    }
    {
      MergeInstName_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MergeInstName_21, 0) = ((MR_Box) (InstA_8));
      MR_hl_field(2, MergeInstName_21, 1) = ((MR_Box) (InstB_9));
    }
    hlds__hlds_inst_mode__search_insert_unknown_merge_inst_4_p_0(MergeInstInfo_20, &MaybeOldMaybeMergedInst_22, MergeInstTable0_19, &MergeInstTable1_23);
    if ((MaybeOldMaybeMergedInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word InstTable1_26;
      MR_Word InstTable2_27;
      MR_Word MergeInstTable2_28;
      MR_Word MergeInstTable3_29;
      MR_Word InstTable3_30;
      MR_Word STATE_VARIABLE_ModuleInfo_2_34;
      MR_Word STATE_VARIABLE_ModuleInfo_3_35;
      MR_Word Var_36;
      MR_Word ExpandedInstA_67;
      MR_Word ExpandedInstB_68;

      hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable1_23, InstTable0_18, &InstTable1_26);
      hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_2_34);
      check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_2_34, InstA_8, &ExpandedInstA_67);
      check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_2_34, InstB_9, &ExpandedInstB_68);
      switch (MR_tag((MR_Word) ExpandedInstA_67)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(ExpandedInstA_67)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) ExpandedInstB_68)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ExpandedInstB_68)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_67, ExpandedInstB_68, &InstAB0_25, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
                      break;
                    case (MR_Integer) 1:
                      {
                        InstAB0_25 = ExpandedInstA_67;
                        STATE_VARIABLE_ModuleInfo_3_35 = STATE_VARIABLE_ModuleInfo_2_34;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_67, ExpandedInstB_68, &InstAB0_25, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, ExpandedInstB_68, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_67, ExpandedInstB_68, &InstAB0_25, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                InstAB0_25 = ExpandedInstB_68;
                STATE_VARIABLE_ModuleInfo_3_35 = STATE_VARIABLE_ModuleInfo_2_34;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) ExpandedInstB_68)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(ExpandedInstB_68)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_67, ExpandedInstB_68, &InstAB0_25, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
                  break;
                case (MR_Integer) 1:
                  {
                    InstAB0_25 = ExpandedInstA_67;
                    STATE_VARIABLE_ModuleInfo_3_35 = STATE_VARIABLE_ModuleInfo_2_34;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_67, ExpandedInstB_68, &InstAB0_25, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, ExpandedInstB_68, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_67, ExpandedInstB_68, &InstAB0_25, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ExpandedInstA_67, 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) ExpandedInstB_68)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ExpandedInstB_68)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_67, ExpandedInstB_68, &InstAB0_25, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
                      break;
                    case (MR_Integer) 1:
                      {
                        InstAB0_25 = ExpandedInstA_67;
                        STATE_VARIABLE_ModuleInfo_3_35 = STATE_VARIABLE_ModuleInfo_2_34;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_67, ExpandedInstB_68, &InstAB0_25, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, ExpandedInstB_68, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      succeeded = check_hlds__inst_merge__inst_merge_3_6_p_0(Type_7, ExpandedInstA_67, ExpandedInstB_68, &InstAB0_25, STATE_VARIABLE_ModuleInfo_2_34, &STATE_VARIABLE_ModuleInfo_3_35);
                      break;
                  }
                  break;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_3_35, &InstTable2_27);
        hlds__hlds_inst_mode__inst_table_get_merge_insts_2_p_0(InstTable2_27, &MergeInstTable2_28);
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (InstAB0_25));
        }
        hlds__hlds_inst_mode__det_update_merge_inst_4_p_0(MergeInstInfo_20, Var_36, MergeInstTable2_28, &MergeInstTable3_29);
        hlds__hlds_inst_mode__inst_table_set_merge_insts_3_p_0(MergeInstTable3_29, InstTable2_27, &InstTable3_30);
        hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable3_30, STATE_VARIABLE_ModuleInfo_3_35, STATE_VARIABLE_ModuleInfo_32);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word OldMaybeMergedInst_24 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeMergedInst_22, 0))));

      if ((OldMaybeMergedInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          InstAB0_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InstAB0_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, InstAB0_25, 1) = ((MR_Box) (MergeInstName_21));
        }
      else
        InstAB0_25 = ((MR_Word) ((MR_hl_field(1, OldMaybeMergedInst_24, 0))));
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_32, MergeInstName_21, InstAB0_25);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *InstAB_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (MergeInstName_21));
        }
      else
        *InstAB_10 = InstAB0_25;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_merge__bound_functor_list_merge_6_p_0(
  MR_Word Type_7,
  MR_Word BoundFunctorsA_8,
  MR_Word BoundFunctorsB_9,
  MR_Word * BoundFunctorsAB_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  MR_bool succeeded;

  if ((BoundFunctorsA_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *BoundFunctorsAB_10 = BoundFunctorsB_9;
    *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsA_8, 1))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsA_8, 0))));

    if ((BoundFunctorsB_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *BoundFunctorsAB_10 = BoundFunctorsA_8;
      *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctorB_16 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsB_9, 0))));
      MR_Word BoundFunctorsTailB_17 = ((MR_Word) ((MR_hl_field(1, BoundFunctorsB_9, 1))));
      MR_Word ConsIdA_18 = ((MR_Word) ((MR_hl_field(0, Var_38, 0))));
      MR_Word ArgInstsA_19 = ((MR_Word) ((MR_hl_field(0, Var_38, 1))));
      MR_Word ConsIdB_20 = ((MR_Word) ((MR_hl_field(0, BoundFunctorB_16, 0))));
      MR_Word ArgInstsB_21 = ((MR_Word) ((MR_hl_field(0, BoundFunctorB_16, 1))));

      succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdA_18, ConsIdB_20);
      if (succeeded)
      {
        MR_Word Types_22;
        MR_Word ArgInstsAB_23;
        MR_Word BoundFunctor_24;
        MR_Word BoundFunctorsABTail_25;
        MR_Word STATE_VARIABLE_ModuleInfo_1_28;

        check_hlds__inst_util__get_cons_id_arg_types_for_bound_functor_4_p_0(STATE_VARIABLE_ModuleInfo_0_26, Type_7, Var_38, &Types_22);
        succeeded = check_hlds__inst_merge__inst_list_merge_6_p_0(Types_22, ArgInstsA_19, ArgInstsB_21, &ArgInstsAB_23, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_1_28);
        if (succeeded)
        {
          {
            BoundFunctor_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, BoundFunctor_24, 0) = ((MR_Box) (ConsIdA_18));
            MR_hl_field(0, BoundFunctor_24, 1) = ((MR_Box) (ArgInstsAB_23));
          }
          succeeded = check_hlds__inst_merge__bound_functor_list_merge_6_p_0(Type_7, Var_37, BoundFunctorsTailB_17, &BoundFunctorsABTail_25, STATE_VARIABLE_ModuleInfo_1_28, STATE_VARIABLE_ModuleInfo_27);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *BoundFunctorsAB_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_24));
              MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctorsABTail_25));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word Var_36;

        parse_tree__prog_data____Compare____cons_id_0_0(&Var_36, ConsIdA_18, ConsIdB_20);
        succeeded = ((MR_Integer) 1 == Var_36);
        if (succeeded)
        {
          MR_Word BoundFunctorsABTail_33;

          succeeded = check_hlds__inst_merge__bound_functor_list_merge_6_p_0(Type_7, Var_37, BoundFunctorsB_9, &BoundFunctorsABTail_33, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *BoundFunctorsAB_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
              MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctorsABTail_33));
            }
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word BoundFunctorsABTail_34;

          succeeded = check_hlds__inst_merge__bound_functor_list_merge_6_p_0(Type_7, BoundFunctorsA_8, BoundFunctorsTailB_17, &BoundFunctorsABTail_34, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *BoundFunctorsAB_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctorB_16));
              MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctorsABTail_34));
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
    MR_Word ArgInstA_13;
    MR_Word ArgInstsA_14;
    MR_Word ArgInstB_15;
    MR_Word ArgInstsB_16;
    MR_Word ArgInstAB_17;
    MR_Word ArgInstsAB_18;
    MR_Word STATE_VARIABLE_ModuleInfo_1_22;

    succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Type_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Types_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      ArgInstA_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgInstsA_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgInstB_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        ArgInstsB_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        succeeded = check_hlds__inst_merge__inst_merge_6_p_0(Type_11, ArgInstA_13, ArgInstB_15, &ArgInstAB_17, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_1_22);
        if (succeeded)
        {
          succeeded = check_hlds__inst_merge__inst_list_merge_6_p_0(Types_12, ArgInstsA_14, ArgInstsB_16, &ArgInstsAB_18, STATE_VARIABLE_ModuleInfo_1_22, STATE_VARIABLE_ModuleInfo_6);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ArgInstAB_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (ArgInstsAB_18));
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
check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(
  MR_Word Type_9,
  MR_Word UniqA_10,
  MR_Word InstResultsA_11,
  MR_Word BoundFunctorsA_12,
  MR_Word UniqB_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_4_p_0(STATE_VARIABLE_ModuleInfo_0_24, Type_9, InstResultsA_11, BoundFunctorsA_12);
  if (succeeded)
  {
    MR_Word Uniq_16;
    MR_Word Uniq0_43;
    MR_Word Expansions0_44;
    MR_Word _Expansions_45;

    succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqB_13, UniqA_10);
    if (succeeded)
      Uniq0_43 = UniqA_10;
    else
      Uniq0_43 = UniqB_13;
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_44);
    check_hlds__inst_merge__merge_bound_functor_list_uniq_6_p_0(STATE_VARIABLE_ModuleInfo_0_24, BoundFunctorsA_12, Uniq0_43, Expansions0_44, &_Expansions_45, &Uniq_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_14 = base;
      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_16));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Constructors_17;

    succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, InstResultsA_11, BoundFunctorsA_12);
    if (succeeded)
    {
      succeeded = check_hlds__type_util__type_constructors_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, Type_9, &Constructors_17);
      if (succeeded)
      {
        MR_Word TypeCtor_18;
        MR_Word BoundFunctorsB0_19;
        MR_Word BoundFunctorsAB_65;
        MR_Word Var_68;
        MR_Word Uniq_93;
        MR_Word BoundFunctorsB_95;
        MR_Word Var_30;
        MR_Word Var_32;
        MR_Word Var_34;

        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_9, &TypeCtor_18);
        check_hlds__mode_util__constructors_to_bound_functors_5_p_0(STATE_VARIABLE_ModuleInfo_0_24, UniqB_13, TypeCtor_18, Constructors_17, &BoundFunctorsB0_19);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), BoundFunctorsB0_19, &BoundFunctorsB_95);
        Var_30 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
        Var_32 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_merge_scalar_common_1[0]));
        Var_34 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_10, UniqB_13);
        if (succeeded)
          Uniq_93 = UniqB_13;
        else
          Uniq_93 = UniqA_10;
        succeeded = check_hlds__inst_merge__bound_functor_list_merge_6_p_0(Type_9, BoundFunctorsA_12, BoundFunctorsB_95, &BoundFunctorsAB_65, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
        if (succeeded)
        {
          Var_68 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Result_14 = base;
            MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_93));
            MR_hl_field(2, base, 1) = ((MR_Box) (Var_68));
            MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctorsAB_65));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word Uniq_38;

        check_hlds__inst_merge__merge_uniq_bound_5_p_0(STATE_VARIABLE_ModuleInfo_0_24, UniqB_13, UniqA_10, BoundFunctorsA_12, &Uniq_38);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Result_14 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_38));
          MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
        succeeded = MR_TRUE;
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstA_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        if ((InstB_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *InstAB_10 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        if (((((MR_tag((MR_Word) InstB_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstB_9, 0)))) == (MR_Integer) 2))))
        {
          MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(3, InstB_9, 1))) & (MR_Integer) 7);

          switch (Uniq_12) {
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
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UniqA_19 = ((MR_Unsigned) ((MR_hl_field(1, InstA_8, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfoA_20 = ((MR_Word) ((MR_hl_field(1, InstA_8, 1))));

        switch (MR_tag((MR_Word) InstB_9)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word UniqB_21 = ((MR_Unsigned) ((MR_hl_field(1, InstB_9, 0))) & (MR_Integer) 7);
              MR_Word HOInstInfoB_22 = ((MR_Word) ((MR_hl_field(1, InstB_9, 1))));
              MR_Word Uniq_39;
              MR_Word HOInstInfo_40;

              succeeded = check_hlds__inst_merge__merge_ho_inst_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, HOInstInfoA_20, HOInstInfoB_22, &HOInstInfo_40);
              if (succeeded)
              {
                succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_19, UniqB_21);
                if (succeeded)
                  Uniq_39 = UniqB_21;
                else
                  Uniq_39 = UniqA_19;
                *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *InstAB_10 = base;
                  MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_39));
                  MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_40));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word InstResultsB_23 = ((MR_Word) ((MR_hl_field(2, InstB_9, 1))));
              MR_Word BoundFunctorsB_24 = ((MR_Word) ((MR_hl_field(2, InstB_9, 2))));
              MR_Word UniqB_45 = ((MR_Unsigned) ((MR_hl_field(2, InstB_9, 0))) & (MR_Integer) 7);

              succeeded = check_hlds__inst_merge__inst_merge_bound_ground_8_p_0(Type_7, UniqB_45, InstResultsB_23, BoundFunctorsB_24, UniqA_19, InstAB_10, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
              if (succeeded)
              {
                succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_3_p_0(*STATE_VARIABLE_ModuleInfo_32, Type_7, InstB_9);
                succeeded = !(succeeded);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, InstB_9, 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Uniq_41;
                  MR_Word HOInstInfo_42;
                  MR_Word UniqB_43 = ((MR_Unsigned) ((MR_hl_field(3, InstB_9, 1))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_44 = ((MR_Word) ((MR_hl_field(3, InstB_9, 2))));
                  MR_Word PredA_134;
                  MR_Word PredB_135;

                  succeeded = (HOInstInfoA_20 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PredA_134 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_20), (MR_Integer) 1));
                    succeeded = (HOInstInfoB_44 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      PredB_135 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_44), (MR_Integer) 1));
                  }
                  if (succeeded)
                  {
                    succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredA_134, PredB_135);
                    if (succeeded)
                    {
                      HOInstInfo_42 = HOInstInfoB_44;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredB_135, PredA_134);
                      if (succeeded)
                      {
                        HOInstInfo_42 = HOInstInfoA_20;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = check_hlds__inst_match__pred_inst_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredA_134);
                        if (succeeded)
                        {
                          succeeded = check_hlds__inst_match__pred_inst_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredB_135);
                          if (succeeded)
                          {
                            HOInstInfo_42 = (MR_Word) ((MR_Unsigned) 0U);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, HOInstInfoA_20);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, HOInstInfoB_44);
                      if (succeeded)
                      {
                        HOInstInfo_42 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                  {
                    succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_19, UniqB_43);
                    if (succeeded)
                      Uniq_41 = UniqB_43;
                    else
                      Uniq_41 = UniqA_19;
                    *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *InstAB_10 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_41));
                      MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_42));
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
    case (MR_Integer) 2:
      {
        MR_Word InstResultsA_25 = ((MR_Word) ((MR_hl_field(2, InstA_8, 1))));
        MR_Word BoundFunctorsA_26 = ((MR_Word) ((MR_hl_field(2, InstA_8, 2))));
        MR_Word UniqA_97 = ((MR_Unsigned) ((MR_hl_field(2, InstA_8, 0))) & (MR_Integer) 7);

        switch (MR_tag((MR_Word) InstB_9)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word UniqB_84 = ((MR_Unsigned) ((MR_hl_field(1, InstB_9, 0))) & (MR_Integer) 7);

              succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, InstResultsA_25, BoundFunctorsA_26);
              if (succeeded)
              {
                MR_Word Uniq_110;

                check_hlds__inst_merge__merge_uniq_bound_5_p_0(STATE_VARIABLE_ModuleInfo_0_31, UniqB_84, UniqA_97, BoundFunctorsA_26, &Uniq_110);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *InstAB_10 = base;
                  MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_110));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Constructors_111;

                succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstResultsA_25, BoundFunctorsA_26);
                if (succeeded)
                {
                  succeeded = check_hlds__type_util__type_constructors_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, &Constructors_111);
                  if (succeeded)
                  {
                    MR_Word TypeCtor_112;
                    MR_Word BoundFunctorsB0_113;
                    MR_Word BoundFunctorsB_114;
                    MR_Word InstResultsB_115;
                    MR_Word InstB_117;
                    MR_Word Var_121;
                    MR_Word Var_122;
                    MR_Word Var_123;
                    MR_Word Var_124;
                    MR_Word Var_125;
                    MR_Word Var_126;
                    MR_Word Var_127;

                    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_112);
                    check_hlds__mode_util__constructors_to_bound_functors_5_p_0(STATE_VARIABLE_ModuleInfo_0_31, UniqB_84, TypeCtor_112, Constructors_111, &BoundFunctorsB0_113);
                    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), BoundFunctorsB0_113, &BoundFunctorsB_114);
                    Var_122 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
                    {
                      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
                    }
                    Var_124 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_merge_scalar_common_1[0]));
                    {
                      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
                    }
                    Var_126 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                    {
                      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
                    }
                    Var_127 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_112)));
                    {
                      InstResultsB_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, InstResultsB_115, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(1, InstResultsB_115, 1) = ((MR_Box) (Var_121));
                      MR_hl_field(1, InstResultsB_115, 2) = ((MR_Box) (Var_123));
                      MR_hl_field(1, InstResultsB_115, 3) = ((MR_Box) (Var_125));
                      MR_hl_field(1, InstResultsB_115, 4) = ((MR_Box) (Var_127));
                    }
                    {
                      InstB_117 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, InstB_117, 0) = (MR_Box) ((MR_Unsigned) (UniqB_84));
                      MR_hl_field(2, InstB_117, 1) = ((MR_Box) (InstResultsB_115));
                      MR_hl_field(2, InstB_117, 2) = ((MR_Box) (BoundFunctorsB_114));
                    }
                    succeeded = check_hlds__inst_merge__inst_merge_4_6_p_0(Type_7, InstA_8, InstB_117, InstAB_10, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
                  }
                  else
                  {
                    MR_Word Uniq_129;

                    check_hlds__inst_merge__merge_uniq_bound_5_p_0(STATE_VARIABLE_ModuleInfo_0_31, UniqB_84, UniqA_97, BoundFunctorsA_26, &Uniq_129);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *InstAB_10 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_129));
                      MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
              {
                succeeded = check_hlds__inst_match__inst_contains_nondefault_func_mode_3_p_0(*STATE_VARIABLE_ModuleInfo_32, Type_7, InstA_8);
                succeeded = !(succeeded);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BoundFunctorsAB_30;
              MR_Word Var_38;
              MR_Word Uniq_87;
              MR_Word UniqB_88 = ((MR_Unsigned) ((MR_hl_field(2, InstB_9, 0))) & (MR_Integer) 7);
              MR_Word BoundFunctorsB_89 = ((MR_Word) ((MR_hl_field(2, InstB_9, 2))));

              succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_97, UniqB_88);
              if (succeeded)
                Uniq_87 = UniqB_88;
              else
                Uniq_87 = UniqA_97;
              succeeded = check_hlds__inst_merge__bound_functor_list_merge_6_p_0(Type_7, BoundFunctorsA_26, BoundFunctorsB_89, &BoundFunctorsAB_30, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
              if (succeeded)
              {
                Var_38 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *InstAB_10 = base;
                  MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_87));
                  MR_hl_field(2, base, 1) = ((MR_Box) (Var_38));
                  MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctorsAB_30));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, InstB_9, 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_36;
                  MR_Word Uniq_85;
                  MR_Word UniqB_86 = ((MR_Unsigned) ((MR_hl_field(3, InstB_9, 1))) & (MR_Integer) 7);
                  MR_Word Uniq0_106;
                  MR_Word Expansions0_107;
                  MR_Word _Expansions_108;

                  succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqB_86, UniqA_97);
                  if (succeeded)
                    Uniq0_106 = UniqA_97;
                  else
                    Uniq0_106 = UniqB_86;
                  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_107);
                  check_hlds__inst_merge__merge_bound_functor_list_uniq_6_p_0(STATE_VARIABLE_ModuleInfo_0_31, BoundFunctorsA_26, Uniq0_106, Expansions0_107, &_Expansions_108, &Uniq_85);
                  switch (Uniq_85) {
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
                    succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstResultsA_25, BoundFunctorsA_26);
                  if (succeeded)
                  {
                    Var_36 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *InstAB_10 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_85));
                      MR_hl_field(3, base, 2) = ((MR_Box) (Var_36));
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
      {
        MR_Word UniqA_78 = ((MR_Unsigned) ((MR_hl_field(3, InstA_8, 1))) & (MR_Integer) 7);
        MR_Word HOInstInfoA_79 = ((MR_Word) ((MR_hl_field(3, InstA_8, 2))));

        switch (MR_tag((MR_Word) InstB_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (UniqA_78) {
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
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_52;
              MR_Word HOInstInfo_53;
              MR_Word UniqB_54 = ((MR_Unsigned) ((MR_hl_field(1, InstB_9, 0))) & (MR_Integer) 7);
              MR_Word HOInstInfoB_55 = ((MR_Word) ((MR_hl_field(1, InstB_9, 1))));
              MR_Word PredA_104;
              MR_Word PredB_105;

              succeeded = (HOInstInfoA_79 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PredA_104 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_79), (MR_Integer) 1));
                succeeded = (HOInstInfoB_55 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  PredB_105 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_55), (MR_Integer) 1));
              }
              if (succeeded)
              {
                succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredA_104, PredB_105);
                if (succeeded)
                {
                  HOInstInfo_53 = HOInstInfoB_55;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredB_105, PredA_104);
                  if (succeeded)
                  {
                    HOInstInfo_53 = HOInstInfoA_79;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = check_hlds__inst_match__pred_inst_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredA_104);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_match__pred_inst_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredB_105);
                      if (succeeded)
                      {
                        HOInstInfo_53 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
              else
              {
                succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, HOInstInfoA_79);
                if (succeeded)
                {
                  succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, HOInstInfoB_55);
                  if (succeeded)
                  {
                    HOInstInfo_53 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
              {
                succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_78, UniqB_54);
                if (succeeded)
                  Uniq_52 = UniqB_54;
                else
                  Uniq_52 = UniqA_78;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *InstAB_10 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_52));
                  MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_53));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_34;
              MR_Word Uniq_60;
              MR_Word UniqB_61 = ((MR_Unsigned) ((MR_hl_field(2, InstB_9, 0))) & (MR_Integer) 7);
              MR_Word InstResultsB_62 = ((MR_Word) ((MR_hl_field(2, InstB_9, 1))));
              MR_Word BoundFunctorsB_63 = ((MR_Word) ((MR_hl_field(2, InstB_9, 2))));
              MR_Word Uniq0_100;
              MR_Word Expansions0_101;
              MR_Word _Expansions_102;

              succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_78, UniqB_61);
              if (succeeded)
                Uniq0_100 = UniqB_61;
              else
                Uniq0_100 = UniqA_78;
              mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_101);
              check_hlds__inst_merge__merge_bound_functor_list_uniq_6_p_0(STATE_VARIABLE_ModuleInfo_0_31, BoundFunctorsB_63, Uniq0_100, Expansions0_101, &_Expansions_102, &Uniq_60);
              switch (Uniq_60) {
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
                succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, InstResultsB_62, BoundFunctorsB_63);
              if (succeeded)
              {
                Var_34 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *InstAB_10 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_60));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Var_34));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Uniq_56;
              MR_Word HOInstInfo_57;
              MR_Word UniqB_58 = ((MR_Unsigned) ((MR_hl_field(3, InstB_9, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfoB_59 = ((MR_Word) ((MR_hl_field(3, InstB_9, 2))));
              MR_Word PredA_98;
              MR_Word PredB_99;

              succeeded = (HOInstInfoA_79 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PredA_98 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_79), (MR_Integer) 1));
                succeeded = (HOInstInfoB_59 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  PredB_99 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_59), (MR_Integer) 1));
              }
              if (succeeded)
              {
                succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredA_98, PredB_99);
                if (succeeded)
                {
                  HOInstInfo_57 = HOInstInfoB_59;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredB_99, PredA_98);
                  if (succeeded)
                  {
                    HOInstInfo_57 = HOInstInfoA_79;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = check_hlds__inst_match__pred_inst_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredA_98);
                    if (succeeded)
                    {
                      succeeded = check_hlds__inst_match__pred_inst_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, PredB_99);
                      if (succeeded)
                      {
                        HOInstInfo_57 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
              else
              {
                succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, HOInstInfoA_79);
                if (succeeded)
                {
                  succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, Type_7, HOInstInfoB_59);
                  if (succeeded)
                  {
                    HOInstInfo_57 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
              {
                succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_78, UniqB_58);
                if (succeeded)
                  Uniq_56 = UniqB_58;
                else
                  Uniq_56 = UniqA_78;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *InstAB_10 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_56));
                  MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_57));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        if (succeeded)
        {
          *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          succeeded = MR_TRUE;
        }
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
  MR_Word BoundFunctorsB_9,
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
  check_hlds__inst_merge__merge_bound_functor_list_uniq_6_p_0(ModuleInfo_6, BoundFunctorsB_9, Uniq0_11, Expansions0_12, &_Expansions_13, Uniq_10);
}

static void MR_CALL 
check_hlds__inst_merge__merge_inst_uniq_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstA_8,
  MR_Word UniqB_9,
  MR_Word STATE_VARIABLE_Expansions_0_23,
  MR_Word * STATE_VARIABLE_Expansions_24,
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
          *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniqA_34 = ((MR_Unsigned) ((MR_hl_field(1, InstA_8, 0))) & (MR_Integer) 7);

          succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_34, UniqB_9);
          if (succeeded)
            *Uniq_11 = UniqB_9;
          else
            *Uniq_11 = UniqA_34;
          *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctorsA_16 = ((MR_Word) ((MR_hl_field(2, InstA_8, 2))));
          MR_Word Uniq0_17;
          MR_Word UniqA_31 = ((MR_Unsigned) ((MR_hl_field(2, InstA_8, 0))) & (MR_Integer) 7);

          succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_31, UniqB_9);
          if (succeeded)
            Uniq0_17 = UniqB_9;
          else
            Uniq0_17 = UniqA_31;
          check_hlds__inst_merge__merge_bound_functor_list_uniq_6_p_0(ModuleInfo_7, BoundFunctorsA_16, Uniq0_17, STATE_VARIABLE_Expansions_0_23, STATE_VARIABLE_Expansions_24, Uniq_11);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstA_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_18 = ((MR_Word) ((MR_hl_field(3, InstA_8, 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_18)), STATE_VARIABLE_Expansions_0_23);
              if (succeeded)
              {
                *Uniq_11 = UniqB_9;
                *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
              }
              else
              {
                MR_Word Inst_19;
                MR_Word STATE_VARIABLE_Expansions_2_26;
                MR_Word next_value_of_InstA_8;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_23;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_18)), STATE_VARIABLE_Expansions_0_23, &STATE_VARIABLE_Expansions_2_26);
                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_7, InstName_18, &Inst_19);
                // direct tailcall eliminated
                ;
                next_value_of_InstA_8 = Inst_19;
                next_value_of_STATE_VARIABLE_Expansions_0_23 = STATE_VARIABLE_Expansions_2_26;
                InstA_8 = next_value_of_InstA_8;
                STATE_VARIABLE_Expansions_0_23 = next_value_of_STATE_VARIABLE_Expansions_0_23;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInstA_22 = ((MR_Word) ((MR_hl_field(3, InstA_8, 2))));
              MR_Word next_value_of_InstA_8 = SubInstA_22;

              // direct tailcall eliminated
              ;
              InstA_8 = next_value_of_InstA_8;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word UniqA_12 = ((MR_Unsigned) ((MR_hl_field(3, InstA_8, 1))) & (MR_Integer) 7);

              succeeded = check_hlds__inst_match__unique_matches_initial_2_p_0(UniqA_12, UniqB_9);
              if (succeeded)
                *Uniq_11 = UniqB_9;
              else
                *Uniq_11 = UniqA_12;
              *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_merge.merge_inst_uniq\'/6", (MR_String) "inst_var");
              return;
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
      MR_Word Inst_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Insts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Uniq1_18;
      MR_Word STATE_VARIABLE_Expansions_1_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

      check_hlds__inst_merge__merge_inst_uniq_6_p_0(ModuleInfo_1, Inst_13, HeadVar__3_3, STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_1_21, &Uniq1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Insts_14;
      next_value_of_HeadVar__3_3 = Uniq1_18;
      next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_1_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Expansions_0_4 = next_value_of_STATE_VARIABLE_Expansions_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_merge__merge_bound_functor_list_uniq_6_p_0(
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
      MR_Word BoundFunctor_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word BoundFunctors_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgInsts_19 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_13, 1))));
      MR_Word Uniq1_20;
      MR_Word STATE_VARIABLE_Expansions_1_23;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

      check_hlds__inst_merge__merge_inst_list_uniq_6_p_0(ModuleInfo_1, ArgInsts_19, HeadVar__3_3, STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_1_23, &Uniq1_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = BoundFunctors_14;
      next_value_of_HeadVar__3_3 = Uniq1_20;
      next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_1_23;
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
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word HOInstInfoA_8,
  MR_Word HOInstInfoB_9,
  MR_Word * HOInstInfo_10)
{
  MR_bool succeeded = (HOInstInfoA_8 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word PredA_11;
  MR_Word PredB_12;

  if (succeeded)
  {
    PredA_11 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_8), (MR_Integer) 1));
    succeeded = (HOInstInfoB_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      PredB_12 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_9), (MR_Integer) 1));
  }
  if (succeeded)
  {
    succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(ModuleInfo_6, Type_7, PredA_11, PredB_12);
    if (succeeded)
    {
      *HOInstInfo_10 = HOInstInfoB_9;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = check_hlds__inst_match__pred_inst_matches_4_p_0(ModuleInfo_6, Type_7, PredB_12, PredA_11);
      if (succeeded)
      {
        *HOInstInfo_10 = HOInstInfoA_8;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = check_hlds__inst_match__pred_inst_matches_ground_3_p_0(ModuleInfo_6, Type_7, PredA_11);
        if (succeeded)
        {
          succeeded = check_hlds__inst_match__pred_inst_matches_ground_3_p_0(ModuleInfo_6, Type_7, PredB_12);
          if (succeeded)
          {
            *HOInstInfo_10 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  else
  {
    succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(ModuleInfo_6, Type_7, HOInstInfoA_8);
    if (succeeded)
    {
      succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_3_p_0(ModuleInfo_6, Type_7, HOInstInfoB_9);
      if (succeeded)
      {
        *HOInstInfo_10 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
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
