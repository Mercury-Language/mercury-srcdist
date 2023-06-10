/*
** Automatically generated from `delay_construct.m'
** by the Mercury compiler,
** version rotd-2023-06-10
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


// :- module transform_hlds.delay_construct.
// :- implementation.

/*
INIT mercury__transform_hlds__delay_construct__init
ENDINIT
*/

#include "transform_hlds.delay_construct.mih"


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
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_PseudoTypeInfo transform_hlds__delay_construct__transform_hlds__delay_construct__field_types_delay_construct_info_0_0[4];

static const MR_ConstString transform_hlds__delay_construct__transform_hlds__delay_construct__field_names_delay_construct_info_0_0[4];

static const MR_DuArgLocn transform_hlds__delay_construct__transform_hlds__delay_construct__field_locns_delay_construct_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__delay_construct__transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0[1];

static const MR_Integer transform_hlds__delay_construct__transform_hlds__delay_construct__functor_number_map_delay_construct_info_0[1];

static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap0_2,
  MR_Word DelayInfo_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap0_2,
  MR_Word DelayInfo_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word InstMap0_6,
  MR_Word DelayInfo_7,
  MR_Word * Goal_8);

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap0_2,
  MR_Word DelayInfo_3,
  MR_Word ConstructedVars0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__delay_construct_scalar_common_1[1][2];




static /* final */ const MR_Box transform_hlds__delay_construct_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo transform_hlds__delay_construct__transform_hlds__delay_construct__field_types_delay_construct_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)
};

static const MR_ConstString transform_hlds__delay_construct__transform_hlds__delay_construct__field_names_delay_construct_info_0_0[4] = {
  (MR_String) "dci_module_info",
  (MR_String) "dci_body_typeinfo_liveness",
  (MR_String) "dci_var_table",
  (MR_String) "dci_rtti_varmaps"
};

static const MR_DuArgLocn transform_hlds__delay_construct__transform_hlds__delay_construct__field_locns_delay_construct_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0 = {
  (MR_String) "delay_construct_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__delay_construct__transform_hlds__delay_construct__field_types_delay_construct_info_0_0,
  transform_hlds__delay_construct__transform_hlds__delay_construct__field_names_delay_construct_info_0_0,
  transform_hlds__delay_construct__transform_hlds__delay_construct__field_locns_delay_construct_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0[1] = { &transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0 };

static const MR_DuPtagLayout transform_hlds__delay_construct__transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__delay_construct__transform_hlds__delay_construct__du_stag_ordered_delay_construct_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__delay_construct__transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0[1] = { &transform_hlds__delay_construct__transform_hlds__delay_construct__du_functor_desc_delay_construct_info_0_0 };

static const MR_Integer transform_hlds__delay_construct__transform_hlds__delay_construct__functor_number_map_delay_construct_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__delay_construct__transform_hlds__delay_construct__type_ctor_info_delay_construct_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__delay_construct____Unify____delay_construct_info_0_0_10001)),
  ((MR_Box) (transform_hlds__delay_construct____Compare____delay_construct_info_0_0_10001)),
  (MR_String) "transform_hlds.delay_construct",
  (MR_String) "delay_construct_info",
  { transform_hlds__delay_construct__transform_hlds__delay_construct__du_name_ordered_delay_construct_info_0 },
  { transform_hlds__delay_construct__transform_hlds__delay_construct__du_ptag_ordered_delay_construct_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__delay_construct__transform_hlds__delay_construct__functor_number_map_delay_construct_info_0,

};

static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_21 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_22 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__delay_construct__delay_construct_proc_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23)
{
  MR_Word PredId_11;
  MR_Word PredInfo_13;
  MR_Word Globals_14;
  MR_Word BodyTypeinfoLiveness_15;
  MR_Word VarTable_16;
  MR_Word RttiVarMaps_17;
  MR_Word InstMap0_18;
  MR_Word DelayInfo_19;
  MR_Word Goal0_20;
  MR_Word Goal_21;

  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_6, ModuleInfo_7, (MR_String) "Delaying construction unifications in", PredProcId_8);
  PredId_11 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 0))));
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_11, &PredInfo_13);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_14);
  hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_13, Globals_14, &BodyTypeinfoLiveness_15);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_22, &VarTable_16);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_22, &RttiVarMaps_17);
  hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ModuleInfo_7, STATE_VARIABLE_ProcInfo_0_22, &InstMap0_18);
  {
    DelayInfo_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DelayInfo_19, 0) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, DelayInfo_19, 1) = (MR_Box) ((MR_Unsigned) (BodyTypeinfoLiveness_15));
    MR_hl_field(0, DelayInfo_19, 2) = ((MR_Box) (VarTable_16));
    MR_hl_field(0, DelayInfo_19, 3) = ((MR_Box) (RttiVarMaps_17));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_22, &Goal0_20);
  transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(Goal0_20, InstMap0_18, DelayInfo_19, &Goal_21);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_21, STATE_VARIABLE_ProcInfo_0_22, STATE_VARIABLE_ProcInfo_23);
}

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap0_2,
  MR_Word DelayInfo_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_7, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_7, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_7, (MR_Integer) 2))));
    MR_Word Goal_16;

    transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(Goal0_15, InstMap0_2, DelayInfo_3, &Goal_16);
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_11, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_11, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_11, 2) = ((MR_Box) (Goal_16));
    }
    transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(Cases0_8, InstMap0_2, DelayInfo_3, &Cases_12);
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
transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap0_2,
  MR_Word DelayInfo_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;

    transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(Goal0_7, InstMap0_2, DelayInfo_3, &Goal_11);
    transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(Goals0_8, InstMap0_2, DelayInfo_3, &Goals_12);
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
transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word InstMap0_6,
  MR_Word DelayInfo_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegGoal0_18 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word NegGoal_19;
        MR_Word Var_67;

        transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(NegGoal0_18, InstMap0_6, DelayInfo_7, &NegGoal_19);
        Var_67 = (MR_Word) ((MR_Word) (NegGoal_19));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_67));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_10));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Goal_8 = Goal0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          *Goal_8 = Goal0_5;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_11 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals1_16;
            MR_Word Goals_17;
            MR_Word Var_65;

            switch (ConjType_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Goals1_16 = Goals0_12;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Detism_13;
                  MR_Word CanFail_14;
                  MR_Word MaxSoln_15;

                  Detism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_10);
                  parse_tree__prog_data__determinism_components_3_p_0(Detism_13, &CanFail_14, &MaxSoln_15);
                  succeeded = (CanFail_14 == (MR_Integer) 0);
                  if (succeeded)
                    succeeded = (MaxSoln_15 != (MR_Integer) 0);
                  if (succeeded)
                  {
                    MR_Word Var_63;

                    Var_63 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__delay_construct_scalar_common_1[0]));
                    transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(Goals0_12, InstMap0_6, DelayInfo_7, Var_63, (MR_Word) ((MR_Unsigned) 0U), &Goals1_16);
                  }
                  else
                    Goals1_16 = Goals0_12;
                }
                break;
            }
            transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(Goals1_16, InstMap0_6, DelayInfo_7, &Goals_17);
            {
              Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_65, 1) = (MR_Box) ((MR_Unsigned) (ConjType_11));
              MR_hl_field(3, Var_65, 2) = ((MR_Box) (Goals_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_65));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_10));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_66;
            MR_Word Goals0_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_74;

            transform_hlds__delay_construct__delay_construct_in_goals_4_p_0(Goals0_73, InstMap0_6, DelayInfo_7, &Goals_74);
            {
              Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_66, 1) = ((MR_Box) (Goals_74));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_10));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Cases_22;
            MR_Word Var_68;
            MR_Word CanFail_75 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);

            transform_hlds__delay_construct__delay_construct_in_cases_4_p_0(Cases0_21, InstMap0_6, DelayInfo_7, &Cases_22);
            {
              Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Var_68, 1) = ((MR_Box) (Var_20));
              MR_hl_field(3, Var_68, 2) = (MR_Box) ((MR_Unsigned) (CanFail_75));
              MR_hl_field(3, Var_68, 3) = ((MR_Box) (Cases_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_10));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word SubGoal0_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word FGT_37;

            succeeded = ((((MR_tag((MR_Word) Reason_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_34, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_37 = ((MR_Unsigned) ((MR_hl_field(3, Reason_34, (MR_Integer) 2))) & (MR_Integer) 3);
              switch (FGT_37) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
              *Goal_8 = Goal0_5;
            else
            {
              MR_Word SubGoal_38;
              MR_Word Var_70;

              transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(SubGoal0_35, InstMap0_6, DelayInfo_7, &SubGoal_38);
              {
                Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_70, 1) = ((MR_Box) (Reason_34));
                MR_hl_field(3, Var_70, 2) = ((MR_Box) (SubGoal_38));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_10));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word CondInfo0_28 = ((MR_Word) ((MR_hl_field(0, Cond0_24, (MR_Integer) 1))));
            MR_Word CondInstMapDelta_29;
            MR_Word InstMapThen_30;
            MR_Word Cond_31;
            MR_Word Then_32;
            MR_Word Else_33;
            MR_Word Var_69;

            CondInstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_28);
            hlds__instmap__apply_instmap_delta_3_p_0(CondInstMapDelta_29, InstMap0_6, &InstMapThen_30);
            transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(Cond0_24, InstMap0_6, DelayInfo_7, &Cond_31);
            transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(Then0_25, InstMapThen_30, DelayInfo_7, &Then_32);
            transform_hlds__delay_construct__delay_construct_in_goal_4_p_0(Else0_26, InstMap0_6, DelayInfo_7, &Else_33);
            {
              Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_69, 1) = ((MR_Box) (Vars_23));
              MR_hl_field(3, Var_69, 2) = ((MR_Box) (Cond_31));
              MR_hl_field(3, Var_69, 3) = ((MR_Box) (Then_32));
              MR_hl_field(3, Var_69, 4) = ((MR_Box) (Else_33));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_10));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.delay_construct.delay_construct_in_goal\'/4", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap0_2,
  MR_Word DelayInfo_3,
  MR_Word ConstructedVars0_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadVar__5_5, HeadVar__6_6);
    else
    {
      MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr0_19 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 0))));
      MR_Word GoalInfo0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 1))));
      MR_Word InstMapDelta0_21;
      MR_Word InstMap1_22;
      MR_Word Var_28;
      MR_Word Unif_26;
      MR_Word Args_30;
      MR_Word Inst0_37;
      MR_Word Inst1_38;
      MR_Word Var_46;
      MR_Word Var_47;

      InstMapDelta0_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_20);
      hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta0_21, InstMap0_2, &InstMap1_22);
      succeeded = ((MR_tag((MR_Word) GoalExpr0_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unif_26 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_19, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unif_26)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_28 = ((MR_Word) ((MR_hl_field(0, Unif_26, (MR_Integer) 0))));
          Args_30 = ((MR_Word) ((MR_hl_field(0, Unif_26, (MR_Integer) 2))));
          succeeded = (Args_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_2, Var_28, &Inst0_37);
            Var_46 = ((MR_Word) ((MR_hl_field(0, DelayInfo_3, (MR_Integer) 0))));
            succeeded = check_hlds__inst_test__inst_is_free_2_p_0(Var_46, Inst0_37);
            if (succeeded)
            {
              hlds__instmap__instmap_lookup_var_3_p_0(InstMap1_22, Var_28, &Inst1_38);
              Var_47 = ((MR_Word) ((MR_hl_field(0, DelayInfo_3, (MR_Integer) 0))));
              succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(Var_47, Inst1_38);
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word ConstructedVars1_39;
        MR_Word RevDelayedGoals1_40;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_InstMap0_2;
        MR_Word next_value_of_ConstructedVars0_4;
        MR_Word next_value_of_HeadVar__5_5;

        mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__delay_construct_scalar_common_1[0]), ((MR_Box) (Var_28)), ConstructedVars0_4, &ConstructedVars1_39);
        {
          RevDelayedGoals1_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RevDelayedGoals1_40, 0) = ((MR_Box) (Goal0_12));
          MR_hl_field(1, RevDelayedGoals1_40, 1) = ((MR_Box) (HeadVar__5_5));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals0_13;
        next_value_of_InstMap0_2 = InstMap1_22;
        next_value_of_ConstructedVars0_4 = ConstructedVars1_39;
        next_value_of_HeadVar__5_5 = RevDelayedGoals1_40;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        InstMap0_2 = next_value_of_InstMap0_2;
        ConstructedVars0_4 = next_value_of_ConstructedVars0_4;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        continue;
      }
      else
      {
        MR_Word TypeCtorInfo_74_74;
        MR_Word NonLocals_41;
        MR_Word CompletedNonLocals_42;
        MR_Word Intersection_43;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 0))));
        MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, Goal0_12, (MR_Integer) 1))));
        MR_Word Detism_91;
        MR_Word MaxSoln_93;
        MR_Word _CanFail_92;

        succeeded = hlds__hlds_goal____Unify____hlds_goal_expr_0_0(GoalExpr0_19, Var_77);
        if (succeeded)
        {
          succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(GoalInfo0_20, Var_78);
          if (succeeded)
          {
            if (((MR_tag((MR_Word) GoalExpr0_19)) == (MR_Integer) 2))
            {
              MR_Word Var_94 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_19, (MR_Integer) 3))) & (MR_Integer) 1);

              succeeded = (Var_94 == (MR_Integer) 0);
            }
            else
            if (((MR_tag((MR_Word) GoalExpr0_19)) == (MR_Integer) 1))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              Detism_91 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_20);
              parse_tree__prog_data__determinism_components_3_p_0(Detism_91, &_CanFail_92, &MaxSoln_93);
              succeeded = (MaxSoln_93 != (MR_Integer) 3);
              if (succeeded)
              {
                NonLocals_41 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_20);
                Var_64 = ((MR_Unsigned) ((MR_hl_field(0, DelayInfo_3, (MR_Integer) 1))) & (MR_Integer) 1);
                Var_48 = ((MR_Word) ((MR_hl_field(0, DelayInfo_3, (MR_Integer) 2))));
                Var_65 = ((MR_Word) ((MR_hl_field(0, DelayInfo_3, (MR_Integer) 3))));
                hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Var_48, Var_65, Var_64, NonLocals_41, &CompletedNonLocals_42);
                TypeCtorInfo_74_74 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                Var_51 = parse_tree__set_of_var__set_to_bitset_1_f_0(TypeCtorInfo_74_74, ConstructedVars0_4);
                parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_74_74, CompletedNonLocals_42, Var_51, &Intersection_43);
                succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_74_74, Intersection_43);
                if (succeeded)
                {
                  Var_52 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_20);
                  succeeded = (Var_52 == (MR_Integer) 0);
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Goals1_44;

          transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(Goals0_13, InstMap1_22, DelayInfo_3, ConstructedVars0_4, HeadVar__5_5, &Goals1_44);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_12));
            MR_hl_field(1, base, 1) = ((MR_Box) (Goals1_44));
          }
        }
        else
        {
          MR_Word DelayedGoals_45;
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Goals1_56;

          mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadVar__5_5, &DelayedGoals_45);
          Var_53 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__delay_construct_scalar_common_1[0]));
          transform_hlds__delay_construct__delay_construct_in_conj_6_p_0(Goals0_13, InstMap1_22, DelayInfo_3, Var_53, (MR_Word) ((MR_Unsigned) 0U), &Goals1_56);
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (Goal0_12));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) (Goals1_56));
          }
          mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), DelayedGoals_45, Var_55, HeadVar__6_6);
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__delay_construct____Unify____delay_construct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__delay_construct____Unify____delay_construct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__delay_construct____Compare____delay_construct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__delay_construct____Compare____delay_construct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__delay_construct__init(void)
{
}

void mercury__transform_hlds__delay_construct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__delay_construct__transform_hlds__delay_construct__type_ctor_info_delay_construct_info_0);
}

void mercury__transform_hlds__delay_construct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__delay_construct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.delay_construct.
