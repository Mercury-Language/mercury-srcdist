/*
** Automatically generated from `split_switch_arms.m'
** by the Mercury compiler,
** version rotd-2024-12-09
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


// :- module check_hlds.simplify.split_switch_arms.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__split_switch_arms__init
ENDINIT
*/

#include "check_hlds.simplify.split_switch_arms.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "libs.optimization_options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__split_switch_arms__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__split_switch_arms__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__split_switch_arms__set_ordlist__pti_set_ordlist_1__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__split_switch_arms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__split_switch_arms__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_case_0;

static void MR_CALL 
check_hlds__simplify__split_switch_arms__gather_partition_restricted_cases_5_p_0(
  MR_Word Var_6,
  MR_Word Goal0_7,
  MR_Word Partition_8,
  MR_Word STATE_VARIABLE_CasesCord_0_15,
  MR_Word * STATE_VARIABLE_CasesCord_16);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_restricted_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CasesCord_0_4,
  MR_Word * STATE_VARIABLE_CasesCord_5);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(
  MR_Word Var_5,
  MR_Word Partition_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__add_in_and_or_out_cons_ids_4_p_0(
  MR_Word ArmConsIds_5,
  MR_Word Partition0_6,
  MR_Word STATE_VARIABLE_Partitions_0_10,
  MR_Word * STATE_VARIABLE_Partitions_11);

static MR_bool MR_CALL 
check_hlds__simplify__split_switch_arms__switch_arm_is_on_var_2_p_0(
  MR_Word Var_3,
  MR_Word Arm_4);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__split_switch_arms_in_cases_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__split_switch_arms__split_switch_arms_in_cases_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__split_switch_arms_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CasesCord_0_4,
  MR_Word * STATE_VARIABLE_CasesCord_5);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__split_switch_arms_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goal_4_p_0(
  MR_Word Var_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Partitions_0_57,
  MR_Word * STATE_VARIABLE_Partitions_58);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Partitions_0_3,
  MR_Word * STATE_VARIABLE_Partitions_4);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Partitions_0_3,
  MR_Word * STATE_VARIABLE_Partitions_4);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_of_cases_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_of_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Partitions_0_2,
  MR_Word * STATE_VARIABLE_Partitions_3);


static /* final */ const MR_Box check_hlds__simplify__split_switch_arms_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__simplify__split_switch_arms_scalar_common_2[1][7];

static /* final */ const MR_Box check_hlds__simplify__split_switch_arms_scalar_common_3[1][5];

static /* final */ const MR_Box check_hlds__simplify__split_switch_arms_scalar_common_4[1][8];




static /* final */ const MR_Box check_hlds__simplify__split_switch_arms_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__split_switch_arms_scalar_common_2[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms__set_ordlist__pti_set_ordlist_1__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms__set_ordlist__pti_set_ordlist_1__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__split_switch_arms_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_switch_arm_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__split_switch_arms_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__simplify__split_switch_arms__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_case_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__split_switch_arms__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__split_switch_arms__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__split_switch_arms__set_ordlist__pti_set_ordlist_1__plain_set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__split_switch_arms__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__split_switch_arms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__split_switch_arms__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0) }
};

static void MR_CALL 
check_hlds__simplify__split_switch_arms__gather_partition_restricted_cases_5_p_0(
  MR_Word Var_6,
  MR_Word Goal0_7,
  MR_Word Partition_8,
  MR_Word STATE_VARIABLE_CasesCord_0_15,
  MR_Word * STATE_VARIABLE_CasesCord_16)
{
  MR_Word ConsIds_10;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Partition_8, &ConsIds_10);
  if ((ConsIds_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.split_switch_arms.gather_partition_restricted_cases\'/5", (MR_String) "Partition is empty");
      return;
    }
  else
  {
    MR_Word MainConsId_11 = ((MR_Word) ((MR_hl_field(1, ConsIds_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_12 = ((MR_Word) ((MR_hl_field(1, ConsIds_10, (MR_Integer) 1))));
    MR_Word Goal_13;
    MR_Word Case_14;

    check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(Var_6, Partition_8, Goal0_7, &Goal_13);
    {
      Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_14, 0) = ((MR_Box) (MainConsId_11));
      MR_hl_field(0, Case_14, 1) = ((MR_Box) (OtherConsIds_12));
      MR_hl_field(0, Case_14, 2) = ((MR_Box) (Goal_13));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), ((MR_Box) (Case_14)), STATE_VARIABLE_CasesCord_0_15, STATE_VARIABLE_CasesCord_16);
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_restricted_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CasesCord_0_4,
  MR_Word * STATE_VARIABLE_CasesCord_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CasesCord_5 = STATE_VARIABLE_CasesCord_0_4;
    else
    {
      MR_Word Case0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Cases0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word MainConsId0_16 = ((MR_Word) ((MR_hl_field(0, Case0_13, (MR_Integer) 0))));
      MR_Word OtherConsIds0_17 = ((MR_Word) ((MR_hl_field(0, Case0_13, (MR_Integer) 1))));
      MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_13, (MR_Integer) 2))));
      MR_Word ArmConsIds0_19;
      MR_Word ArmConsIds_20;
      MR_Word ArmConsIdsList_21;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_CasesCord_29_29;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_CasesCord_0_4;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (MainConsId0_16));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (OtherConsIds0_17));
      }
      mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_28, &ArmConsIds0_19);
      mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), HeadVar__2_2, ArmConsIds0_19, &ArmConsIds_20);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ArmConsIds_20, &ArmConsIdsList_21);
      if ((ArmConsIdsList_21 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_CasesCord_29_29 = STATE_VARIABLE_CasesCord_0_4;
      else
      {
        MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(1, ArmConsIdsList_21, (MR_Integer) 0))));
        MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(1, ArmConsIdsList_21, (MR_Integer) 1))));
        MR_Word Goal_24;
        MR_Word Case_25;

        check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(HeadVar__1_1, HeadVar__2_2, Goal0_18, &Goal_24);
        {
          Case_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Case_25, 0) = ((MR_Box) (MainConsId_22));
          MR_hl_field(0, Case_25, 1) = ((MR_Box) (OtherConsIds_23));
          MR_hl_field(0, Case_25, 2) = ((MR_Box) (Goal_24));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), ((MR_Box) (Case_25)), STATE_VARIABLE_CasesCord_0_4, &STATE_VARIABLE_CasesCord_29_29);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Cases0_14;
      next_value_of_STATE_VARIABLE_CasesCord_0_4 = STATE_VARIABLE_CasesCord_29_29;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_CasesCord_0_4 = next_value_of_STATE_VARIABLE_CasesCord_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 0))));
    MR_Word OtherPartition_14 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_9, (MR_Integer) 2))));
    MR_Word Goal_16;

    check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(HeadVar__1_1, HeadVar__2_2, Goal0_15, &Goal_16);
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_11, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_11, 1) = ((MR_Box) (OtherPartition_14));
      MR_hl_field(0, Case_11, 2) = ((MR_Box) (Goal_16));
    }
    check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_cases_4_p_0(HeadVar__1_1, HeadVar__2_2, Cases0_10, &Cases_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_12));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;

    check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(HeadVar__1_1, HeadVar__2_2, Goal0_9, &Goal_11);
    check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goals_4_p_0(HeadVar__1_1, HeadVar__2_2, Goals0_10, &Goals_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word HeadGoal_12;
    MR_Word TailGoals_13;
    MR_Word HeadConjuncts_14;
    MR_Word Var_16;
    MR_Word Var_17;

    check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(HeadVar__1_1, HeadVar__2_2, Goal0_9, &HeadGoal_12);
    check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_conj_4_p_0(HeadVar__1_1, HeadVar__2_2, Goals0_10, &TailGoals_13);
    Var_16 = ((MR_Word) ((MR_hl_field(0, HeadGoal_12, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_17 = ((MR_Unsigned) ((MR_hl_field(3, Var_16, (MR_Integer) 1))) & (MR_Integer) 1);
      HeadConjuncts_14 = ((MR_Word) ((MR_hl_field(3, Var_16, (MR_Integer) 2))));
      succeeded = (Var_17 == (MR_Integer) 0);
    }
    if (succeeded)
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadConjuncts_14, TailGoals_13);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_12));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_13));
      }
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(
  MR_Word Var_5,
  MR_Word Partition_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
  MR_Word GoalExpr_34;

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_58 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word SubGoal_59;

        check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(Var_5, Partition_6, SubGoal0_58, &SubGoal_59);
        GoalExpr_34 = (MR_Word) ((MR_Word) (SubGoal_59));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_34 = GoalExpr0_9;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_34 = GoalExpr0_9;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_48 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_50;

            switch (ConjType_48) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goals_4_p_0(Var_5, Partition_6, Goals0_49, &Goals_50);
                break;
              case (MR_Integer) 0:
                check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_conj_4_p_0(Var_5, Partition_6, Goals0_49, &Goals_50);
                break;
            }
            {
              GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_34, 1) = (MR_Box) ((MR_Unsigned) (ConjType_48));
              MR_hl_field(3, GoalExpr_34, 2) = ((MR_Box) (Goals_50));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_87 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_88;

            check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goals_4_p_0(Var_5, Partition_6, Goals0_87, &Goals_88);
            {
              GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_34, 1) = ((MR_Box) (Goals_88));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CanFail_36 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));

            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[3]), ((MR_Box) (Var_5)), ((MR_Box) (SwitchVar_35)));
            if (succeeded)
            {
              MR_Word CasesCord_38;
              MR_Word Cases_39;
              MR_Word Var_77;

              Var_77 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0));
              check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_restricted_cases_5_p_0(Var_5, Partition_6, Cases0_37, Var_77, &CasesCord_38);
              Cases_39 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), CasesCord_38);
              if ((Cases_39 == (MR_Word) ((MR_Unsigned) 0U)))
                GoalExpr_34 = hlds__make_goal__fail_goal_expr_0_f_0();
              else
              {
                MR_Word Var_92 = ((MR_Word) ((MR_hl_field(1, Cases_39, (MR_Integer) 1))));
                MR_Word Var_93 = ((MR_Word) ((MR_hl_field(1, Cases_39, (MR_Integer) 0))));

                if ((Var_92 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word CaseGoal_43 = ((MR_Word) ((MR_hl_field(0, Var_93, (MR_Integer) 2))));

                  GoalExpr_34 = ((MR_Word) ((MR_hl_field(0, CaseGoal_43, (MR_Integer) 0))));
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.split_switch_arms.restrict_switches_on_var_in_goal\'/4", (MR_String) "Cases = [_, _ | _]");
                    return;
                  }
              }
            }
            else
            {
              MR_Word Cases_86;

              check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_cases_4_p_0(Var_5, Partition_6, Cases0_37, &Cases_86);
              {
                GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_34, 1) = ((MR_Box) (SwitchVar_35));
                MR_hl_field(3, GoalExpr_34, 2) = (MR_Box) ((MR_Unsigned) (CanFail_36));
                MR_hl_field(3, GoalExpr_34, 3) = ((MR_Box) (Cases_86));
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word SubGoal_90;

            check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(Var_5, Partition_6, SubGoal0_89, &SubGoal_90);
            {
              GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_34, 1) = ((MR_Box) (Reason_60));
              MR_hl_field(3, GoalExpr_34, 2) = ((MR_Box) (SubGoal_90));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word Cond_55;
            MR_Word Then_56;
            MR_Word Else_57;

            check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(Var_5, Partition_6, Cond0_52, &Cond_55);
            check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(Var_5, Partition_6, Then0_53, &Then_56);
            check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(Var_5, Partition_6, Else0_54, &Else_57);
            {
              GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_34, 1) = ((MR_Box) (Vars_51));
              MR_hl_field(3, GoalExpr_34, 2) = ((MR_Box) (Cond_55));
              MR_hl_field(3, GoalExpr_34, 3) = ((MR_Box) (Then_56));
              MR_hl_field(3, GoalExpr_34, 4) = ((MR_Box) (Else_57));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word ShortHand_71;

            switch (MR_tag((MR_Word) ShortHand0_61)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.split_switch_arms.restrict_switches_on_var_in_goal\'/4", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_62 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_63 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 1))));
                  MR_Word Inner_64 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_65 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 3))));
                  MR_Word MainGoal0_66 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_67 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 5))));
                  MR_Word OrElseInners_68 = ((MR_Word) ((MR_hl_field(1, ShortHand0_61, (MR_Integer) 6))));
                  MR_Word MainGoal_69;
                  MR_Word OrElseGoals_70;

                  check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goal_4_p_0(Var_5, Partition_6, MainGoal0_66, &MainGoal_69);
                  check_hlds__simplify__split_switch_arms__restrict_switches_on_var_in_goals_4_p_0(Var_5, Partition_6, OrElseGoals0_67, &OrElseGoals_70);
                  {
                    ShortHand_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_71, 0) = (MR_Box) ((MR_Unsigned) (GoalType_62));
                    MR_hl_field(1, ShortHand_71, 1) = ((MR_Box) (Outer_63));
                    MR_hl_field(1, ShortHand_71, 2) = ((MR_Box) (Inner_64));
                    MR_hl_field(1, ShortHand_71, 3) = ((MR_Box) (MaybeOutputVars_65));
                    MR_hl_field(1, ShortHand_71, 4) = ((MR_Box) (MainGoal_69));
                    MR_hl_field(1, ShortHand_71, 5) = ((MR_Box) (OrElseGoals_70));
                    MR_hl_field(1, ShortHand_71, 6) = ((MR_Box) (OrElseInners_68));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.split_switch_arms.restrict_switches_on_var_in_goal\'/4", (MR_String) "try_goal");
                  return;
                }
                break;
            }
            {
              GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_34, 1) = ((MR_Box) (ShortHand_71));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_10));
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__add_in_and_or_out_cons_ids_4_p_0(
  MR_Word ArmConsIds_5,
  MR_Word Partition0_6,
  MR_Word STATE_VARIABLE_Partitions_0_10,
  MR_Word * STATE_VARIABLE_Partitions_11)
{
  MR_bool succeeded;
  MR_Word PartitionIn_8;
  MR_Word PartitionOut_9;
  MR_Word STATE_VARIABLE_Partitions_12_12;

  mercury__set__divide_by_set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ArmConsIds_5, Partition0_6, &PartitionIn_8, &PartitionOut_9);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), PartitionIn_8);
  if (succeeded)
    STATE_VARIABLE_Partitions_12_12 = STATE_VARIABLE_Partitions_0_10;
  else
    mercury__set__insert_3_p_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[0]), ((MR_Box) (PartitionIn_8)), STATE_VARIABLE_Partitions_0_10, &STATE_VARIABLE_Partitions_12_12);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), PartitionOut_9);
  if (succeeded)
    *STATE_VARIABLE_Partitions_11 = STATE_VARIABLE_Partitions_12_12;
  else
    mercury__set__insert_3_p_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[0]), ((MR_Box) (PartitionOut_9)), STATE_VARIABLE_Partitions_12_12, STATE_VARIABLE_Partitions_11);
}

static MR_bool MR_CALL 
check_hlds__simplify__split_switch_arms__switch_arm_is_on_var_2_p_0(
  MR_Word Var_3,
  MR_Word Arm_4)
{
  MR_bool succeeded;
  MR_Word ArmVar_5 = ((MR_Word) ((MR_hl_field(0, Arm_4, (MR_Integer) 0))));

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[3]), ((MR_Box) (ArmVar_5)), ((MR_Box) (Var_3)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__split_switch_arms_in_cases_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CasesCord_16;

  check_hlds__simplify__split_switch_arms__gather_partition_restricted_cases_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CasesCord_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CasesCord_16));
}

static MR_bool MR_CALL 
check_hlds__simplify__split_switch_arms__split_switch_arms_in_cases_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__simplify__split_switch_arms__switch_arm_is_on_var_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__split_switch_arms_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CasesCord_0_4,
  MR_Word * STATE_VARIABLE_CasesCord_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CasesCord_5 = STATE_VARIABLE_CasesCord_0_4;
    else
    {
      MR_Word Case0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Cases0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CasesCord_18_18;
      MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_13, (MR_Integer) 0))));
      MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_13, (MR_Integer) 1))));
      MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_13, (MR_Integer) 2))));
      MR_Word ConsIds_22;
      MR_Word Arm_23;
      MR_Word Var_30;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_CasesCord_0_4;

      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (MainConsId_19));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) (OtherConsIds_20));
      }
      mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_30, &ConsIds_22);
      {
        Arm_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Arm_23, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(0, Arm_23, 1) = ((MR_Box) (ConsIds_22));
      }
      succeeded = mercury__set__contains_2_p_0((MR_Word) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_switch_arm_0), HeadVar__1_1, ((MR_Box) (Arm_23)));
      if (succeeded)
      {
        MR_Word ToSplitArmsNotOnVar_25;
        MR_Word Goal_26;
        MR_Word Partitions0_27;
        MR_Word Partitions_28;
        MR_Word Var_31;
        MR_Word _ToSplitArmsOnVar_24;
        MR_Integer Var_43;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__simplify__split_switch_arms_scalar_common_3[0]));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__simplify__split_switch_arms__split_switch_arms_in_cases_5_p_0_1));
          MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_31, 3) = ((MR_Box) (HeadVar__2_2));
        }
        mercury__set__filter_4_p_0((MR_Word) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_switch_arm_0), Var_31, HeadVar__1_1, &_ToSplitArmsOnVar_24, &ToSplitArmsNotOnVar_25);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_switch_arm_0), ToSplitArmsNotOnVar_25);
        if (succeeded)
          Goal_26 = Goal0_21;
        else
          check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(ToSplitArmsNotOnVar_25, Goal0_21, &Goal_26);
        Partitions0_27 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[0]), ((MR_Box) (ConsIds_22)));
        check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goal_4_p_0(HeadVar__2_2, Goal_26, Partitions0_27, &Partitions_28);
        mercury__set__count_2_p_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[0]), Partitions_28, &Var_43);
        succeeded = ((MR_Integer) 1 == Var_43);
        if (succeeded)
        {
          MR_Word Case_29;

          {
            Case_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Case_29, 0) = ((MR_Box) (MainConsId_19));
            MR_hl_field(0, Case_29, 1) = ((MR_Box) (OtherConsIds_20));
            MR_hl_field(0, Case_29, 2) = ((MR_Box) (Goal_26));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), ((MR_Box) (Case_29)), STATE_VARIABLE_CasesCord_0_4, &STATE_VARIABLE_CasesCord_18_18);
        }
        else
        {
          MR_Word Var_33;
          MR_Box conv1_STATE_VARIABLE_CasesCord_18_18;

          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__simplify__split_switch_arms_scalar_common_4[0]));
            MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__simplify__split_switch_arms__split_switch_arms_in_cases_5_p_0_2));
            MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_33, 3) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(0, Var_33, 4) = ((MR_Box) (Goal_26));
          }
          mercury__set__fold_4_p_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[1]), Var_33, Partitions_28, ((MR_Box) (STATE_VARIABLE_CasesCord_0_4)), &conv1_STATE_VARIABLE_CasesCord_18_18);
          STATE_VARIABLE_CasesCord_18_18 = ((MR_Word) (conv1_STATE_VARIABLE_CasesCord_18_18));
        }
      }
      else
      {
        MR_Word Goal_34;
        MR_Word Case_35;

        check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(HeadVar__1_1, Goal0_21, &Goal_34);
        {
          Case_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Case_35, 0) = ((MR_Box) (MainConsId_19));
          MR_hl_field(0, Case_35, 1) = ((MR_Box) (OtherConsIds_20));
          MR_hl_field(0, Case_35, 2) = ((MR_Box) (Goal_34));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), ((MR_Box) (Case_35)), STATE_VARIABLE_CasesCord_0_4, &STATE_VARIABLE_CasesCord_18_18);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Cases0_14;
      next_value_of_STATE_VARIABLE_CasesCord_0_4 = STATE_VARIABLE_CasesCord_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_CasesCord_0_4 = next_value_of_STATE_VARIABLE_CasesCord_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__split_switch_arms_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_8;
    MR_Word Goals_9;

    check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(HeadVar__1_1, Goal0_6, &Goal_8);
    check_hlds__simplify__split_switch_arms__split_switch_arms_in_goals_3_p_0(HeadVar__1_1, Goals0_7, &Goals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_9));
    }
  }
}

void MR_CALL 
check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(
  MR_Word ToSplitArms_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word GoalExpr_32;

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_48 = (MR_Word) ((MR_Word) (GoalExpr0_7));
        MR_Word SubGoal_49;

        check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(ToSplitArms_4, SubGoal0_48, &SubGoal_49);
        GoalExpr_32 = (MR_Word) ((MR_Word) (SubGoal_49));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      GoalExpr_32 = GoalExpr0_7;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_32 = GoalExpr0_7;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_38 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Goals_40;

            check_hlds__simplify__split_switch_arms__split_switch_arms_in_goals_3_p_0(ToSplitArms_4, Goals0_39, &Goals_40);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) (ConjType_38));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (Goals_40));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Goals_73;

            check_hlds__simplify__split_switch_arms__split_switch_arms_in_goals_3_p_0(ToSplitArms_4, Goals0_72, &Goals_73);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Goals_73));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word CanFail_34 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word CasesCord_36;
            MR_Word Cases_37;
            MR_Word Var_67;

            Var_67 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0));
            check_hlds__simplify__split_switch_arms__split_switch_arms_in_cases_5_p_0(ToSplitArms_4, Var_33, Cases0_35, Var_67, &CasesCord_36);
            Cases_37 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), CasesCord_36);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Var_33));
              MR_hl_field(3, GoalExpr_32, 2) = (MR_Box) ((MR_Unsigned) (CanFail_34));
              MR_hl_field(3, GoalExpr_32, 3) = ((MR_Box) (Cases_37));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word SubGoal0_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoal_75;

            check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(ToSplitArms_4, SubGoal0_74, &SubGoal_75);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Reason_50));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (SubGoal_75));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Cond0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Then0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Else0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 4))));
            MR_Word Cond_45;
            MR_Word Then_46;
            MR_Word Else_47;

            check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(ToSplitArms_4, Cond0_42, &Cond_45);
            check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(ToSplitArms_4, Then0_43, &Then_46);
            check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(ToSplitArms_4, Else0_44, &Else_47);
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (Vars_41));
              MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (Cond_45));
              MR_hl_field(3, GoalExpr_32, 3) = ((MR_Box) (Then_46));
              MR_hl_field(3, GoalExpr_32, 4) = ((MR_Box) (Else_47));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word ShortHand_61;

            switch (MR_tag((MR_Word) ShortHand0_51)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.split_switch_arms.split_switch_arms_in_goal\'/3", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_52 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_51, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_53 = ((MR_Word) ((MR_hl_field(1, ShortHand0_51, (MR_Integer) 1))));
                  MR_Word Inner_54 = ((MR_Word) ((MR_hl_field(1, ShortHand0_51, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_55 = ((MR_Word) ((MR_hl_field(1, ShortHand0_51, (MR_Integer) 3))));
                  MR_Word MainGoal0_56 = ((MR_Word) ((MR_hl_field(1, ShortHand0_51, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_57 = ((MR_Word) ((MR_hl_field(1, ShortHand0_51, (MR_Integer) 5))));
                  MR_Word OrElseInners_58 = ((MR_Word) ((MR_hl_field(1, ShortHand0_51, (MR_Integer) 6))));
                  MR_Word MainGoal_59;
                  MR_Word OrElseGoals_60;

                  check_hlds__simplify__split_switch_arms__split_switch_arms_in_goal_3_p_0(ToSplitArms_4, MainGoal0_56, &MainGoal_59);
                  check_hlds__simplify__split_switch_arms__split_switch_arms_in_goals_3_p_0(ToSplitArms_4, OrElseGoals0_57, &OrElseGoals_60);
                  {
                    ShortHand_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_61, 0) = (MR_Box) ((MR_Unsigned) (GoalType_52));
                    MR_hl_field(1, ShortHand_61, 1) = ((MR_Box) (Outer_53));
                    MR_hl_field(1, ShortHand_61, 2) = ((MR_Box) (Inner_54));
                    MR_hl_field(1, ShortHand_61, 3) = ((MR_Box) (MaybeOutputVars_55));
                    MR_hl_field(1, ShortHand_61, 4) = ((MR_Box) (MainGoal_59));
                    MR_hl_field(1, ShortHand_61, 5) = ((MR_Box) (OrElseGoals_60));
                    MR_hl_field(1, ShortHand_61, 6) = ((MR_Box) (OrElseInners_58));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.split_switch_arms.split_switch_arms_in_goal\'/3", (MR_String) "try_goal");
                  return;
                }
                break;
            }
            {
              GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_32, 1) = ((MR_Box) (ShortHand_61));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goal_4_p_0(
  MR_Word Var_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Partitions_0_57,
  MR_Word * STATE_VARIABLE_Partitions_58)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_42 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word next_value_of_Goal_6 = SubGoal_42;

          // direct tailcall eliminated
          ;
          Goal_6 = next_value_of_Goal_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Partitions_58 = STATE_VARIABLE_Partitions_0_57;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Partitions_58 = STATE_VARIABLE_Partitions_0_57;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Partitions_58 = STATE_VARIABLE_Partitions_0_57;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Partitions_58 = STATE_VARIABLE_Partitions_0_57;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));

              check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goals_4_p_0(Var_5, Goals_37, STATE_VARIABLE_Partitions_0_57, STATE_VARIABLE_Partitions_58);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goals_4_p_0(Var_5, Goals_74, STATE_VARIABLE_Partitions_0_57, STATE_VARIABLE_Partitions_58);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
              MR_Word Cases_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Partitions_59_59;

              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[3]), ((MR_Box) (Var_5)), ((MR_Box) (SwitchVar_33)));
              if (succeeded)
                check_hlds__simplify__split_switch_arms__partition_cons_ids_of_cases_3_p_0(Cases_35, STATE_VARIABLE_Partitions_0_57, &STATE_VARIABLE_Partitions_59_59);
              else
                STATE_VARIABLE_Partitions_59_59 = STATE_VARIABLE_Partitions_0_57;
              check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_cases_4_p_0(Var_5, Cases_35, STATE_VARIABLE_Partitions_59_59, STATE_VARIABLE_Partitions_58);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_6 = SubGoal_75;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
              MR_Word Then_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
              MR_Word Else_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_Partitions_63_63;
              MR_Word STATE_VARIABLE_Partitions_64_64;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_Partitions_0_57;

              check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goal_4_p_0(Var_5, Cond_39, STATE_VARIABLE_Partitions_0_57, &STATE_VARIABLE_Partitions_63_63);
              check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goal_4_p_0(Var_5, Then_40, STATE_VARIABLE_Partitions_63_63, &STATE_VARIABLE_Partitions_64_64);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = Else_41;
              next_value_of_STATE_VARIABLE_Partitions_0_57 = STATE_VARIABLE_Partitions_64_64;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_Partitions_0_57 = next_value_of_STATE_VARIABLE_Partitions_0_57;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_44)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.split_switch_arms.partition_cons_ids_for_var_in_goal\'/4", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_49 = ((MR_Word) ((MR_hl_field(1, ShortHand_44, (MR_Integer) 4))));
                    MR_Word OrElseGoals_50 = ((MR_Word) ((MR_hl_field(1, ShortHand_44, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_Partitions_68_68;

                    check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goal_4_p_0(Var_5, MainGoal_49, STATE_VARIABLE_Partitions_0_57, &STATE_VARIABLE_Partitions_68_68);
                    check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goals_4_p_0(Var_5, OrElseGoals_50, STATE_VARIABLE_Partitions_68_68, STATE_VARIABLE_Partitions_58);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.split_switch_arms.partition_cons_ids_for_var_in_goal\'/4", (MR_String) "try_goal");
                    return;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Partitions_0_3,
  MR_Word * STATE_VARIABLE_Partitions_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Partitions_4 = STATE_VARIABLE_Partitions_0_3;
    else
    {
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(0, Case_10, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_Partitions_18_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Partitions_0_3;

      check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goal_4_p_0(HeadVar__1_1, Goal_15, STATE_VARIABLE_Partitions_0_3, &STATE_VARIABLE_Partitions_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_11;
      next_value_of_STATE_VARIABLE_Partitions_0_3 = STATE_VARIABLE_Partitions_18_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Partitions_0_3 = next_value_of_STATE_VARIABLE_Partitions_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Partitions_0_3,
  MR_Word * STATE_VARIABLE_Partitions_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Partitions_4 = STATE_VARIABLE_Partitions_0_3;
    else
    {
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Partitions_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Partitions_0_3;

      check_hlds__simplify__split_switch_arms__partition_cons_ids_for_var_in_goal_4_p_0(HeadVar__1_1, Goal_10, STATE_VARIABLE_Partitions_0_3, &STATE_VARIABLE_Partitions_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_11;
      next_value_of_STATE_VARIABLE_Partitions_0_3 = STATE_VARIABLE_Partitions_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Partitions_0_3 = next_value_of_STATE_VARIABLE_Partitions_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_of_cases_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Partitions_11;

  check_hlds__simplify__split_switch_arms__add_in_and_or_out_cons_ids_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Partitions_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Partitions_11));
}

static void MR_CALL 
check_hlds__simplify__split_switch_arms__partition_cons_ids_of_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Partitions_0_2,
  MR_Word * STATE_VARIABLE_Partitions_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Partitions_3 = STATE_VARIABLE_Partitions_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(0, Case_7, (MR_Integer) 0))));
      MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case_7, (MR_Integer) 1))));
      MR_Word ArmConsIds_13;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_Partitions_19_19;
      MR_Box conv1_STATE_VARIABLE_Partitions_19_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Partitions_0_2;

      {
        Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_16, 0) = ((MR_Box) (MainConsId_10));
        MR_hl_field(1, Var_16, 1) = ((MR_Box) (OtherConsIds_11));
      }
      mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_16, &ArmConsIds_13);
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__simplify__split_switch_arms_scalar_common_2[0]));
        MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__simplify__split_switch_arms__partition_cons_ids_of_cases_3_p_0_1));
        MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_17, 3) = ((MR_Box) (ArmConsIds_13));
      }
      Var_18 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[0]));
      mercury__set__fold_4_p_0((MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__split_switch_arms_scalar_common_1[2]), Var_17, STATE_VARIABLE_Partitions_0_2, ((MR_Box) (Var_18)), &conv1_STATE_VARIABLE_Partitions_19_19);
      STATE_VARIABLE_Partitions_19_19 = ((MR_Word) (conv1_STATE_VARIABLE_Partitions_19_19));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_Partitions_0_2 = STATE_VARIABLE_Partitions_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Partitions_0_2 = next_value_of_STATE_VARIABLE_Partitions_0_2;
      continue;
    }
    break;
  }
}

void mercury__check_hlds__simplify__split_switch_arms__init(void)
{
}

void mercury__check_hlds__simplify__split_switch_arms__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__split_switch_arms__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__split_switch_arms__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.split_switch_arms.
