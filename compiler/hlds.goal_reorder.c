/*
** Automatically generated from `goal_reorder.m'
** by the Mercury compiler,
** version rotd-2025-11-07
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


// :- module hlds.goal_reorder.
// :- implementation.

/*
INIT mercury__hlds__goal_reorder__init
ENDINIT
*/

#include "hlds.goal_reorder.mih"


#include "analysis.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "parse_tree.d_file_deps.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_EnumFunctorDesc hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_can_reorder_goals_0_0;

static const MR_EnumFunctorDesc hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_can_reorder_goals_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_reorder__hlds__goal_reorder__enum_ordinal_ordered_can_reorder_goals_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_reorder__hlds__goal_reorder__enum_name_ordered_can_reorder_goals_0[2];

static const MR_Integer hlds__goal_reorder__hlds__goal_reorder__functor_number_map_can_reorder_goals_0[2];

static const MR_EnumFunctorDesc hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_reorder_maintains_termination_0_0;

static const MR_EnumFunctorDesc hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_reorder_maintains_termination_0_1;

static const MR_EnumFunctorDescPtr hlds__goal_reorder__hlds__goal_reorder__enum_ordinal_ordered_reorder_maintains_termination_0[2];

static const MR_EnumFunctorDescPtr hlds__goal_reorder__hlds__goal_reorder__enum_name_ordered_reorder_maintains_termination_0[2];

static const MR_Integer hlds__goal_reorder__hlds__goal_reorder__functor_number_map_reorder_maintains_termination_0[2];

static MR_bool MR_CALL 
hlds__goal_reorder____Unify____can_reorder_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_reorder____Compare____can_reorder_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_reorder____Unify____reorder_maintains_termination_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_reorder____Compare____reorder_maintains_termination_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_can_reorder_goals_0_0 = {
  (MR_String) "cannot_reorder_goals",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_can_reorder_goals_0_1 = {
  (MR_String) "can_reorder_goals",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_reorder__hlds__goal_reorder__enum_ordinal_ordered_can_reorder_goals_0[2] = {
  &hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_can_reorder_goals_0_0,
  &hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_can_reorder_goals_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_reorder__hlds__goal_reorder__enum_name_ordered_can_reorder_goals_0[2] = {
  &hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_can_reorder_goals_0_1,
  &hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_can_reorder_goals_0_0
};

static const MR_Integer hlds__goal_reorder__hlds__goal_reorder__functor_number_map_can_reorder_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__goal_reorder__hlds__goal_reorder__type_ctor_info_can_reorder_goals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_reorder____Unify____can_reorder_goals_0_0_10001)),
  ((MR_Box) (hlds__goal_reorder____Compare____can_reorder_goals_0_0_10001)),
  (MR_String) "hlds.goal_reorder",
  (MR_String) "can_reorder_goals",
  { hlds__goal_reorder__hlds__goal_reorder__enum_name_ordered_can_reorder_goals_0 },
  { hlds__goal_reorder__hlds__goal_reorder__enum_ordinal_ordered_can_reorder_goals_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_reorder__hlds__goal_reorder__functor_number_map_can_reorder_goals_0,

};

static const MR_EnumFunctorDesc hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_reorder_maintains_termination_0_0 = {
  (MR_String) "reorder_maintains_termination",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_reorder_maintains_termination_0_1 = {
  (MR_String) "reorder_does_not_maintain_termination",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__goal_reorder__hlds__goal_reorder__enum_ordinal_ordered_reorder_maintains_termination_0[2] = {
  &hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_reorder_maintains_termination_0_0,
  &hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_reorder_maintains_termination_0_1
};

static const MR_EnumFunctorDescPtr hlds__goal_reorder__hlds__goal_reorder__enum_name_ordered_reorder_maintains_termination_0[2] = {
  &hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_reorder_maintains_termination_0_1,
  &hlds__goal_reorder__hlds__goal_reorder__enum_functor_desc_reorder_maintains_termination_0_0
};

static const MR_Integer hlds__goal_reorder__hlds__goal_reorder__functor_number_map_reorder_maintains_termination_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__goal_reorder__hlds__goal_reorder__type_ctor_info_reorder_maintains_termination_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__goal_reorder____Unify____reorder_maintains_termination_0_0_10001)),
  ((MR_Box) (hlds__goal_reorder____Compare____reorder_maintains_termination_0_0_10001)),
  (MR_String) "hlds.goal_reorder",
  (MR_String) "reorder_maintains_termination",
  { hlds__goal_reorder__hlds__goal_reorder__enum_name_ordered_reorder_maintains_termination_0 },
  { hlds__goal_reorder__hlds__goal_reorder__enum_ordinal_ordered_reorder_maintains_termination_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__goal_reorder__hlds__goal_reorder__functor_number_map_reorder_maintains_termination_0,

};

void MR_CALL 
hlds__goal_reorder____Compare____reorder_maintains_termination_0_0(
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

MR_bool MR_CALL 
hlds__goal_reorder____Unify____reorder_maintains_termination_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_reorder____Compare____can_reorder_goals_0_0(
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

MR_bool MR_CALL 
hlds__goal_reorder____Unify____can_reorder_goals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__goal_reorder__can_reorder_goals_9_p_0(
  MR_Word VarTable_10,
  MR_Word FullyStrict_11,
  MR_Word InstmapBeforeEarlierGoal_12,
  MR_Word EarlierGoal_13,
  MR_Word InstmapBeforeLaterGoal_14,
  MR_Word LaterGoal_15,
  MR_Word * CanReorder_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28)
{
  MR_bool succeeded;
  MR_Word EarlierGoalInfo_19 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_13, 1))));
  MR_Word LaterGoalInfo_21 = ((MR_Word) ((MR_hl_field(0, LaterGoal_15, 1))));
  MR_Word EarlierPurity_22;
  MR_Word EarlierTrace_23;
  MR_Word LaterPurity_24;
  MR_Word LaterTrace_25;

  hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(EarlierGoalInfo_19, &EarlierPurity_22, &EarlierTrace_23);
  hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(LaterGoalInfo_21, &LaterPurity_24, &LaterTrace_25);
  succeeded = (EarlierPurity_22 == (MR_Integer) 2);
  if (!(succeeded))
  {
    succeeded = (LaterPurity_24 == (MR_Integer) 2);
    if (!(succeeded))
    {
      succeeded = (EarlierTrace_23 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (LaterTrace_25 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    *CanReorder_16 = (MR_Integer) 0;
    *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
  }
  else
  {
    MR_Word MaintainsTermination_26;

    hlds__goal_reorder__reordering_maintains_termination_6_p_0(FullyStrict_11, EarlierGoal_13, LaterGoal_15, &MaintainsTermination_26, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
    switch (MaintainsTermination_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *CanReorder_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        {
          MR_Word LaterGoalInfo_30 = ((MR_Word) ((MR_hl_field(0, LaterGoal_15, 1))));
          MR_Word EarlierGoalInfo_32 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_13, 1))));
          MR_Word EarlierInstMapDelta_33;
          MR_Word InstMapAfterEarlierGoal_34;
          MR_Word EarlierChangedVars_35;
          MR_Word LaterGoalNonLocals_36;
          MR_Word Intersection_37;

          EarlierInstMapDelta_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_32);
          hlds__instmap__apply_instmap_delta_3_p_0(EarlierInstMapDelta_33, InstmapBeforeEarlierGoal_12, &InstMapAfterEarlierGoal_34);
          hlds__instmap__instmap_changed_vars_5_p_0(*STATE_VARIABLE_ModuleInfo_28, VarTable_10, InstmapBeforeEarlierGoal_12, InstMapAfterEarlierGoal_34, &EarlierChangedVars_35);
          LaterGoalNonLocals_36 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_30);
          parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierChangedVars_35, LaterGoalNonLocals_36, &Intersection_37);
          succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Intersection_37);
          succeeded = !(succeeded);
          if (succeeded)
            *CanReorder_16 = (MR_Integer) 0;
          else
          {
            MR_Word LaterGoalInfo_40 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_13, 1))));
            MR_Word EarlierGoalInfo_42 = ((MR_Word) ((MR_hl_field(0, LaterGoal_15, 1))));
            MR_Word EarlierInstMapDelta_43;
            MR_Word InstMapAfterEarlierGoal_44;
            MR_Word EarlierChangedVars_45;
            MR_Word LaterGoalNonLocals_46;
            MR_Word Intersection_47;

            EarlierInstMapDelta_43 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_42);
            hlds__instmap__apply_instmap_delta_3_p_0(EarlierInstMapDelta_43, InstmapBeforeLaterGoal_14, &InstMapAfterEarlierGoal_44);
            hlds__instmap__instmap_changed_vars_5_p_0(*STATE_VARIABLE_ModuleInfo_28, VarTable_10, InstmapBeforeLaterGoal_14, InstMapAfterEarlierGoal_44, &EarlierChangedVars_45);
            LaterGoalNonLocals_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_40);
            parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), EarlierChangedVars_45, LaterGoalNonLocals_46, &Intersection_47);
            succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Intersection_47);
            succeeded = !(succeeded);
            if (succeeded)
              *CanReorder_16 = (MR_Integer) 0;
            else
              *CanReorder_16 = (MR_Integer) 1;
          }
        }
        break;
    }
  }
}

void MR_CALL 
hlds__goal_reorder__reordering_maintains_termination_6_p_0(
  MR_Word FullyStrict_7,
  MR_Word EarlierGoal_8,
  MR_Word LaterGoal_9,
  MR_Word * MaintainsTermination_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  MR_bool succeeded;
  MR_Word EarlierGoalInfo_13 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_8, 1))));
  MR_Word LaterGoalInfo_15 = ((MR_Word) ((MR_hl_field(0, LaterGoal_9, 1))));
  MR_Word EarlierDetism_16;
  MR_Word EarlierCanFail_17;
  MR_Word LaterDetism_19;
  MR_Word LaterCanFail_20;
  MR_Word EarlierCanLoopOrThrow_22;
  MR_Word STATE_VARIABLE_ModuleInfo_1_26;
  MR_Word Var_18;
  MR_Word Var_21;

  EarlierDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(EarlierGoalInfo_13);
  parse_tree__prog_data__determinism_components_3_p_0(EarlierDetism_16, &EarlierCanFail_17, &Var_18);
  LaterDetism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(LaterGoalInfo_15);
  parse_tree__prog_data__determinism_components_3_p_0(LaterDetism_19, &LaterCanFail_20, &Var_21);
  hlds__goal_form__goal_can_loop_or_throw_imaf_4_p_0(EarlierGoal_8, &EarlierCanLoopOrThrow_22, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_1_26);
  succeeded = (FullyStrict_7 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (EarlierCanLoopOrThrow_22 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (LaterCanFail_20 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    *MaintainsTermination_10 = (MR_Integer) 1;
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_1_26;
  }
  else
  {
    MR_Word LaterCanLoopOrThrow_23;

    hlds__goal_form__goal_can_loop_or_throw_imaf_4_p_0(LaterGoal_9, &LaterCanLoopOrThrow_23, STATE_VARIABLE_ModuleInfo_1_26, STATE_VARIABLE_ModuleInfo_25);
    succeeded = (EarlierCanFail_17 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (LaterCanLoopOrThrow_23 == (MR_Integer) 0);
    if (succeeded)
      *MaintainsTermination_10 = (MR_Integer) 1;
    else
      *MaintainsTermination_10 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
hlds__goal_reorder__can_reorder_goals_old_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word VarTable_9,
  MR_Word FullyStrict_10,
  MR_Word InstmapBeforeEarlierGoal_11,
  MR_Word EarlierGoal_12,
  MR_Word InstmapBeforeLaterGoal_13,
  MR_Word LaterGoal_14)
{
  MR_bool succeeded;
  MR_Word EarlierGoalInfo_16 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_12, 1))));
  MR_Word LaterGoalInfo_18 = ((MR_Word) ((MR_hl_field(0, LaterGoal_14, 1))));
  MR_Word EarlierPurity_19;
  MR_Word EarlierTrace_20;
  MR_Word LaterPurity_21;
  MR_Word LaterTrace_22;
  MR_Word TypeCtorInfo_20_32;
  MR_Word LaterGoalInfo_24;
  MR_Word EarlierGoalInfo_26;
  MR_Word EarlierInstMapDelta_27;
  MR_Word InstMapAfterEarlierGoal_28;
  MR_Word EarlierChangedVars_29;
  MR_Word LaterGoalNonLocals_30;
  MR_Word Intersection_31;
  MR_Word TypeCtorInfo_20_42;
  MR_Word LaterGoalInfo_34;
  MR_Word EarlierGoalInfo_36;
  MR_Word EarlierInstMapDelta_37;
  MR_Word InstMapAfterEarlierGoal_38;
  MR_Word EarlierChangedVars_39;
  MR_Word LaterGoalNonLocals_40;
  MR_Word Intersection_41;

  hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(EarlierGoalInfo_16, &EarlierPurity_19, &EarlierTrace_20);
  hlds__hlds_goal__goal_info_get_goal_purity_3_p_0(LaterGoalInfo_18, &LaterPurity_21, &LaterTrace_22);
  succeeded = (LaterPurity_21 != (MR_Integer) 2);
  if (succeeded)
  {
    succeeded = (LaterTrace_22 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (EarlierPurity_19 != (MR_Integer) 2);
      if (succeeded)
      {
        succeeded = (EarlierTrace_20 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = hlds__goal_reorder__reordering_maintains_termination_old_4_p_0(ModuleInfo_8, FullyStrict_10, EarlierGoal_12, LaterGoal_14);
          if (succeeded)
          {
            LaterGoalInfo_24 = ((MR_Word) ((MR_hl_field(0, LaterGoal_14, 1))));
            EarlierGoalInfo_26 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_12, 1))));
            EarlierInstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_26);
            hlds__instmap__apply_instmap_delta_3_p_0(EarlierInstMapDelta_27, InstmapBeforeEarlierGoal_11, &InstMapAfterEarlierGoal_28);
            hlds__instmap__instmap_changed_vars_5_p_0(ModuleInfo_8, VarTable_9, InstmapBeforeEarlierGoal_11, InstMapAfterEarlierGoal_28, &EarlierChangedVars_29);
            LaterGoalNonLocals_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_24);
            TypeCtorInfo_20_32 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_20_32, EarlierChangedVars_29, LaterGoalNonLocals_30, &Intersection_31);
            succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_20_32, Intersection_31);
            succeeded = !(succeeded);
            succeeded = !(succeeded);
            if (succeeded)
            {
              LaterGoalInfo_34 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_12, 1))));
              EarlierGoalInfo_36 = ((MR_Word) ((MR_hl_field(0, LaterGoal_14, 1))));
              EarlierInstMapDelta_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EarlierGoalInfo_36);
              hlds__instmap__apply_instmap_delta_3_p_0(EarlierInstMapDelta_37, InstmapBeforeLaterGoal_13, &InstMapAfterEarlierGoal_38);
              hlds__instmap__instmap_changed_vars_5_p_0(ModuleInfo_8, VarTable_9, InstmapBeforeLaterGoal_13, InstMapAfterEarlierGoal_38, &EarlierChangedVars_39);
              LaterGoalNonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LaterGoalInfo_34);
              TypeCtorInfo_20_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_20_42, EarlierChangedVars_39, LaterGoalNonLocals_40, &Intersection_41);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_20_42, Intersection_41);
              succeeded = !(succeeded);
              succeeded = !(succeeded);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__goal_reorder__reordering_maintains_termination_old_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word FullyStrict_6,
  MR_Word EarlierGoal_7,
  MR_Word LaterGoal_8)
{
  MR_bool succeeded;
  MR_Word EarlierGoalInfo_10 = ((MR_Word) ((MR_hl_field(0, EarlierGoal_7, 1))));
  MR_Word LaterGoalInfo_12 = ((MR_Word) ((MR_hl_field(0, LaterGoal_8, 1))));
  MR_Word EarlierDetism_13;
  MR_Word EarlierCanFail_14;
  MR_Word LaterDetism_16;
  MR_Word LaterCanFail_17;
  MR_Word Var_15;
  MR_Word Var_18;

  EarlierDetism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(EarlierGoalInfo_10);
  parse_tree__prog_data__determinism_components_3_p_0(EarlierDetism_13, &EarlierCanFail_14, &Var_15);
  LaterDetism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(LaterGoalInfo_12);
  parse_tree__prog_data__determinism_components_3_p_0(LaterDetism_16, &LaterCanFail_17, &Var_18);
  succeeded = (FullyStrict_6 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = hlds__goal_form__goal_cannot_loop_or_throw_1_p_0(EarlierGoal_7);
    succeeded = !(succeeded);
  }
  if (succeeded)
    succeeded = (LaterCanFail_17 == (MR_Integer) 1);
  else
    succeeded = MR_TRUE;
  if (succeeded)
    switch (EarlierCanFail_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = hlds__goal_form__goal_cannot_loop_or_throw_term_info_2_p_0(ModuleInfo_5, LaterGoal_8);
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__goal_reorder____Unify____can_reorder_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_reorder____Unify____can_reorder_goals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_reorder____Compare____can_reorder_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_reorder____Compare____can_reorder_goals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_reorder____Unify____reorder_maintains_termination_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_reorder____Unify____reorder_maintains_termination_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_reorder____Compare____reorder_maintains_termination_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_reorder____Compare____reorder_maintains_termination_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__goal_reorder__init(void)
{
}

void mercury__hlds__goal_reorder__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__goal_reorder__hlds__goal_reorder__type_ctor_info_can_reorder_goals_0);
  MR_register_type_ctor_info(&hlds__goal_reorder__hlds__goal_reorder__type_ctor_info_reorder_maintains_termination_0);
}

void mercury__hlds__goal_reorder__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_reorder__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.goal_reorder.
