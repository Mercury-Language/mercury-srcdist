/*
** Automatically generated from `add_heap_ops.m'
** by the Mercury compiler,
** version 22.01.2-beta-2022-04-21
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


// :- module ml_backend.add_heap_ops.
// :- implementation.

/*
INIT mercury__ml_backend__add_heap_ops__init
ENDINIT
*/

#include "ml_backend.add_heap_ops.mih"


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
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "term.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__add_heap_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0[3];

static const MR_ConstString ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0[3];

static const MR_DuFunctorDesc ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0[1];

static const MR_DuPtagLayout ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0[1];

static const MR_Integer ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0[1];

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_84,
  MR_Word * STATE_VARIABLE_Info_85);

static void MR_CALL 
ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word IsFirstBranch_3,
  MR_Word MaybeSavedHeapPointerVar_4,
  MR_Word DisjGoalInfo_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_heap_ops__heap_generate_call_8_p_0(
  MR_String PredName_9,
  MR_Word Detism_10,
  MR_Word Purity_11,
  MR_Word Args_12,
  MR_Word InstMapDelta_13,
  MR_Word ModuleInfo_14,
  MR_Word Context_15,
  MR_Word * CallGoal_16);

static void MR_CALL 
ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_heap_ops__gen_restore_hp_5_p_0(
  MR_Word SavedHeapPointerVar_6,
  MR_Word Context_7,
  MR_Word * RestoreHeapPointerGoal_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__add_heap_ops__gen_mark_hp_5_p_0(
  MR_Word SavedHeapPointerVar_6,
  MR_Word Context_7,
  MR_Word * MarkHeapPointerGoal_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_2[1][7];

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_3[1][3];




static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0)),
    ((MR_Box) (&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0))
  },
};

static /* final */ const MR_Box ml_backend__add_heap_ops_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__add_heap_ops_scalar_common_2[0])),
    ((MR_Box) (ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"



static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__add_heap_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__add_heap_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ml_backend__add_heap_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__add_heap_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__add_heap_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)
};

static const MR_ConstString ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0[3] = {
  (MR_String) "heap_varset",
  (MR_String) "heap_var_types",
  (MR_String) "heap_module_info"
};

static const MR_DuFunctorDesc ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0 = {
  (MR_String) "heap_ops_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_types_heap_ops_info_0_0,
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__field_names_heap_ops_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0[1] = {
  &ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0
};

static const MR_DuPtagLayout ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0[1] = {
  &ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0
};

static const MR_Integer ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001)),
  ((MR_Box) (ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001)),
  (MR_String) "ml_backend.add_heap_ops",
  (MR_String) "heap_ops_info",
  {     ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0 },
  {     ml_backend__add_heap_ops__ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__add_heap_ops__ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0,

};

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__add_heap_ops_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          hlds__hlds_module____Compare____module_info_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__add_heap_ops_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeCtorInfo_12_12 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__add_heap_ops__add_heap_ops_3_p_0(
  MR_Word ModuleInfo0_4,
  MR_Word STATE_VARIABLE_Proc_0_15,
  MR_Word * STATE_VARIABLE_Proc_16)
{
  {
    MR_Word Goal0_6;
    MR_Word VarSet0_7;
    MR_Word VarTypes0_8;
    MR_Word TrailOpsInfo0_9;
    MR_Word Goal_10;
    MR_Word TrailOpsInfo_11;
    MR_Word VarSet_12;
    MR_Word VarTypes_13;
    MR_Word STATE_VARIABLE_Proc_17_17;
    MR_Word STATE_VARIABLE_Proc_18_18;
    MR_Word STATE_VARIABLE_Proc_19_19;
    MR_Word GoalExpr0_27;
    MR_Word GoalInfo_28;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_Proc_0_15, &Goal0_6);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_Proc_0_15, &VarSet0_7);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_Proc_0_15, &VarTypes0_8);
    {
      TrailOpsInfo0_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TrailOpsInfo0_9, 0) = ((MR_Box) (VarSet0_7));
      MR_hl_field(MR_mktag(0), TrailOpsInfo0_9, 1) = ((MR_Box) (VarTypes0_8));
      MR_hl_field(MR_mktag(0), TrailOpsInfo0_9, 2) = ((MR_Box) (ModuleInfo0_4));
    }
    GoalExpr0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
    GoalInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
    ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(GoalExpr0_27, GoalInfo_28, &Goal_10, TrailOpsInfo0_9, &TrailOpsInfo_11);
    VarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrailOpsInfo_11, (MR_Integer) 0))));
    VarTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TrailOpsInfo_11, (MR_Integer) 1))));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_10, STATE_VARIABLE_Proc_0_15, &STATE_VARIABLE_Proc_17_17);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_12, STATE_VARIABLE_Proc_17_17, &STATE_VARIABLE_Proc_18_18);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_13, STATE_VARIABLE_Proc_18_18, &STATE_VARIABLE_Proc_19_19);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_Proc_19_19, STATE_VARIABLE_Proc_16);
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));

    ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(GoalExpr0_8, GoalInfo_9, Goal_6, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_84,
  MR_Word * STATE_VARIABLE_Info_85)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InnerGoal_31 = (MR_Word) ((MR_Word) (GoalExpr0_6));
          MR_Word InnerGoalInfo_34;
          MR_Word Determinism_35;
          MR_Word NumSolns_37;
          MR_Word True_38;
          MR_Word Fail_39;
          MR_Word ModuleInfo_40;
          MR_Word ThenGoal_41;
          MR_Word NewOuterGoal_42;
          MR_Word Context_130;
          MR_Word _CanFail_36;
          MR_Word next_value_of_GoalExpr0_6;

          Context_130 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
          InnerGoalInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerGoal_31, (MR_Integer) 1))));
          Determinism_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerGoalInfo_34);
          parse_tree__prog_data__determinism_components_3_p_0(Determinism_35, &_CanFail_36, &NumSolns_37);
          True_38 = hlds__make_goal__true_goal_with_context_1_f_0(Context_130);
          Fail_39 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_130);
          ModuleInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_84, (MR_Integer) 2))));
          switch (NumSolns_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              ThenGoal_41 = Fail_39;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_109;

                Var_109 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                ml_backend__add_heap_ops__heap_generate_call_8_p_0((MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_109, ModuleInfo_40, Context_130, &ThenGoal_41);
              }
              break;
          }
          {
            NewOuterGoal_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), NewOuterGoal_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), NewOuterGoal_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), NewOuterGoal_42, 2) = ((MR_Box) (InnerGoal_31));
            MR_hl_field(MR_mktag(3), NewOuterGoal_42, 3) = ((MR_Box) (ThenGoal_41));
            MR_hl_field(MR_mktag(3), NewOuterGoal_42, 4) = ((MR_Box) (True_38));
          }
          // direct tailcall eliminated
          ;
          next_value_of_GoalExpr0_6 = NewOuterGoal_42;
          GoalExpr0_6 = next_value_of_GoalExpr0_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_6));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
          }
          *STATE_VARIABLE_Info_85 = STATE_VARIABLE_Info_0_84;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_6));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
              *STATE_VARIABLE_Info_85 = STATE_VARIABLE_Info_0_84;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_6));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
              *STATE_VARIABLE_Info_85 = STATE_VARIABLE_Info_0_84;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Word Goals_12;
              MR_Word GoalExpr_13;

              ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(Goals0_11, &Goals_12, STATE_VARIABLE_Info_0_84, STATE_VARIABLE_Info_85);
              {
                GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_13, 1) = (MR_Box) ((MR_Unsigned) (ConjType_10));
                MR_hl_field(MR_mktag(3), GoalExpr_13, 2) = ((MR_Box) (Goals_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_13));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word GoalExpr_128;

              if ((Disjuncts0_14 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                GoalExpr_128 = GoalExpr0_6;
                *STATE_VARIABLE_Info_85 = STATE_VARIABLE_Info_0_84;
              }
              else
              {
                MR_Word FirstDisjunct0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts0_14, (MR_Integer) 0))));
                MR_Word Context_17;
                MR_Word CodeModel_18;

                Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                CodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_7);
                succeeded = (CodeModel_18 == (MR_Integer) 2);
                if (!(succeeded))
                  succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(FirstDisjunct0_15);
                if (succeeded)
                {
                  MR_Word SavedHeapPointerVar_19;
                  MR_Word MarkHeapPointerGoal_20;
                  MR_Word Disjuncts_21;
                  MR_Word DisjGoalExpr_22;
                  MR_Word DisjGoal_23;
                  MR_Word ConjGoalExpr_24;
                  MR_Word ConjGoal_25;
                  MR_Word Purity0_26;
                  MR_Word STATE_VARIABLE_Info_113_113;
                  MR_Word STATE_VARIABLE_Info_114_114;
                  MR_Word Var_116;
                  MR_Word Var_119;
                  MR_Word Var_120;
                  MR_Word Var_122;

                  ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&SavedHeapPointerVar_19, STATE_VARIABLE_Info_0_84, &STATE_VARIABLE_Info_113_113);
                  ml_backend__add_heap_ops__gen_mark_hp_5_p_0(SavedHeapPointerVar_19, Context_17, &MarkHeapPointerGoal_20, STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_114_114);
                  {
                    Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (SavedHeapPointerVar_19));
                  }
                  ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(Disjuncts0_14, &Disjuncts_21, (MR_Integer) 0, Var_116, GoalInfo0_7, STATE_VARIABLE_Info_114_114, STATE_VARIABLE_Info_85);
                  {
                    DisjGoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), DisjGoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), DisjGoalExpr_22, 1) = ((MR_Box) (Disjuncts_21));
                  }
                  {
                    DisjGoal_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), DisjGoal_23, 0) = ((MR_Box) (DisjGoalExpr_22));
                    MR_hl_field(MR_mktag(0), DisjGoal_23, 1) = ((MR_Box) (GoalInfo0_7));
                  }
                  {
                    Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (DisjGoal_23));
                    MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (MarkHeapPointerGoal_20));
                    MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_120));
                  }
                  {
                    ConjGoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ConjGoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), ConjGoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ConjGoalExpr_24, 2) = ((MR_Box) (Var_119));
                  }
                  {
                    ConjGoal_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ConjGoal_25, 0) = ((MR_Box) (ConjGoalExpr_24));
                    MR_hl_field(MR_mktag(0), ConjGoal_25, 1) = ((MR_Box) (GoalInfo0_7));
                  }
                  Purity0_26 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_7);
                  {
                    Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_122, 1) = (MR_Box) ((MR_Unsigned) (Purity0_26));
                  }
                  {
                    GoalExpr_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_128, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), GoalExpr_128, 1) = ((MR_Box) (Var_122));
                    MR_hl_field(MR_mktag(3), GoalExpr_128, 2) = ((MR_Box) (ConjGoal_25));
                  }
                }
                else
                {
                  MR_Word Disjuncts_127;

                  ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(Disjuncts0_14, &Disjuncts_127, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), GoalInfo0_7, STATE_VARIABLE_Info_0_84, STATE_VARIABLE_Info_85);
                  {
                    GoalExpr_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_128, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), GoalExpr_128, 1) = ((MR_Box) (Disjuncts_127));
                  }
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_128));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word CanFail_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
              MR_Word Cases_30;
              MR_Word GoalExpr_129;

              ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(Cases0_29, &Cases_30, STATE_VARIABLE_Info_0_84, STATE_VARIABLE_Info_85);
              {
                GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_129, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_129, 1) = ((MR_Box) (Var_27));
                MR_hl_field(MR_mktag(3), GoalExpr_129, 2) = (MR_Box) ((MR_Unsigned) (CanFail_28));
                MR_hl_field(MR_mktag(3), GoalExpr_129, 3) = ((MR_Box) (Cases_30));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_129));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word SubGoal0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Word SubGoal_46;
              MR_Word GoalExpr_131;
              MR_Word Var_103;

              succeeded = ((((MR_tag((MR_Word) Reason_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_43, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_43, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_103 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                SubGoal_46 = SubGoal0_44;
                *STATE_VARIABLE_Info_85 = STATE_VARIABLE_Info_0_84;
              }
              else
                ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(SubGoal0_44, &SubGoal_46, STATE_VARIABLE_Info_0_84, STATE_VARIABLE_Info_85);
              {
                GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 1) = ((MR_Box) (Reason_43));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 2) = ((MR_Box) (SubGoal_46));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_131));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word CondGoal0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Word ThenGoal0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
              MR_Word ElseGoal0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4))));
              MR_Word CondGoal_51;
              MR_Word ElseGoal1_52;
              MR_Word STATE_VARIABLE_Info_88_88;
              MR_Word STATE_VARIABLE_Info_89_89;
              MR_Word STATE_VARIABLE_Info_90_90;
              MR_Word GoalExpr_144;
              MR_Word ThenGoal_151;

              ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(CondGoal0_48, &CondGoal_51, STATE_VARIABLE_Info_0_84, &STATE_VARIABLE_Info_88_88);
              ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ThenGoal0_49, &ThenGoal_151, STATE_VARIABLE_Info_88_88, &STATE_VARIABLE_Info_89_89);
              ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(ElseGoal0_50, &ElseGoal1_52, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_90_90);
              succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(CondGoal0_48);
              if (succeeded)
              {
                MR_Word RestoreHeapPointerGoal_53;
                MR_Word ElseGoal1Info_55;
                MR_Word ElseGoalExpr_56;
                MR_Word ElseGoal_57;
                MR_Word ITEGoalExpr_58;
                MR_Word ITEGoal_59;
                MR_Word STATE_VARIABLE_Info_91_91;
                MR_Word STATE_VARIABLE_Info_92_92;
                MR_Word Var_95;
                MR_Word Var_96;
                MR_Word Var_99;
                MR_Word Var_100;
                MR_Word Var_102;
                MR_Word Context_132;
                MR_Word SavedHeapPointerVar_133;
                MR_Word MarkHeapPointerGoal_134;
                MR_Word ConjGoalExpr_135;
                MR_Word ConjGoal_136;
                MR_Word Purity0_137;

                ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&SavedHeapPointerVar_133, STATE_VARIABLE_Info_90_90, &STATE_VARIABLE_Info_91_91);
                Context_132 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                ml_backend__add_heap_ops__gen_mark_hp_5_p_0(SavedHeapPointerVar_133, Context_132, &MarkHeapPointerGoal_134, STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_92_92);
                ml_backend__add_heap_ops__gen_restore_hp_5_p_0(SavedHeapPointerVar_133, Context_132, &RestoreHeapPointerGoal_53, STATE_VARIABLE_Info_92_92, STATE_VARIABLE_Info_85);
                ElseGoal1Info_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ElseGoal1_52, (MR_Integer) 1))));
                {
                  Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (ElseGoal1_52));
                  MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (RestoreHeapPointerGoal_53));
                  MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
                }
                {
                  ElseGoalExpr_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ElseGoalExpr_56, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), ElseGoalExpr_56, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ElseGoalExpr_56, 2) = ((MR_Box) (Var_95));
                }
                {
                  ElseGoal_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ElseGoal_57, 0) = ((MR_Box) (ElseGoalExpr_56));
                  MR_hl_field(MR_mktag(0), ElseGoal_57, 1) = ((MR_Box) (ElseGoal1Info_55));
                }
                {
                  ITEGoalExpr_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ITEGoalExpr_58, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), ITEGoalExpr_58, 1) = ((MR_Box) (Vars_47));
                  MR_hl_field(MR_mktag(3), ITEGoalExpr_58, 2) = ((MR_Box) (CondGoal_51));
                  MR_hl_field(MR_mktag(3), ITEGoalExpr_58, 3) = ((MR_Box) (ThenGoal_151));
                  MR_hl_field(MR_mktag(3), ITEGoalExpr_58, 4) = ((MR_Box) (ElseGoal_57));
                }
                {
                  ITEGoal_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ITEGoal_59, 0) = ((MR_Box) (ITEGoalExpr_58));
                  MR_hl_field(MR_mktag(0), ITEGoal_59, 1) = ((MR_Box) (GoalInfo0_7));
                }
                {
                  Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (ITEGoal_59));
                  MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (MarkHeapPointerGoal_134));
                  MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_100));
                }
                {
                  ConjGoalExpr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConjGoalExpr_135, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), ConjGoalExpr_135, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ConjGoalExpr_135, 2) = ((MR_Box) (Var_99));
                }
                {
                  ConjGoal_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ConjGoal_136, 0) = ((MR_Box) (ConjGoalExpr_135));
                  MR_hl_field(MR_mktag(0), ConjGoal_136, 1) = ((MR_Box) (GoalInfo0_7));
                }
                Purity0_137 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_7);
                {
                  Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_102, 1) = (MR_Box) ((MR_Unsigned) (Purity0_137));
                }
                {
                  GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Var_102));
                  MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (ConjGoal_136));
                }
              }
              else
              {
                {
                  GoalExpr_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), GoalExpr_144, 1) = ((MR_Box) (Vars_47));
                  MR_hl_field(MR_mktag(3), GoalExpr_144, 2) = ((MR_Box) (CondGoal_51));
                  MR_hl_field(MR_mktag(3), GoalExpr_144, 3) = ((MR_Box) (ThenGoal_151));
                  MR_hl_field(MR_mktag(3), GoalExpr_144, 4) = ((MR_Box) (ElseGoal1_52));
                }
                *STATE_VARIABLE_Info_85 = STATE_VARIABLE_Info_90_90;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_144));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.add_heap_ops.goal_expr_add_heap_ops\'/5", (MR_String) "shorthand");
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
ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word GoalExpr0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 0))));
    MR_Word GoalInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 1))));

    ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(GoalExpr0_26, GoalInfo_27, &Goal_16, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_19_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_16));
    }
    ml_backend__add_heap_ops__cases_add_heap_ops_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word IsFirstBranch_3,
  MR_Word MaybeSavedHeapPointerVar_4,
  MR_Word DisjGoalInfo_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    }
    else
    {
      MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal1_21;
      MR_Word GoalInfo_23;
      MR_Word Context_24;
      MR_Word Goal_27;
      MR_Word STATE_VARIABLE_Info_43_43;
      MR_Word STATE_VARIABLE_Info_44_44;
      MR_Word GoalExpr0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 0))));
      MR_Word GoalInfo_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 1))));
      MR_Word SavedHeapPointerVar0_25;

      ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_p_0(GoalExpr0_67, GoalInfo_68, &Goal1_21, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_43_43);
      GoalInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_21, (MR_Integer) 1))));
      Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
      succeeded = (IsFirstBranch_3 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (MaybeSavedHeapPointerVar_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          SavedHeapPointerVar0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSavedHeapPointerVar_4, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word RestoreHeapPointerGoal_26;
        MR_Word Var_45;
        MR_Word Var_46;

        ml_backend__add_heap_ops__gen_restore_hp_5_p_0(SavedHeapPointerVar0_25, Context_24, &RestoreHeapPointerGoal_26, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_44_44);
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Goal1_21));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (RestoreHeapPointerGoal_26));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
        }
        hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_45, GoalInfo_23, &Goal_27);
      }
      else
      {
        Goal_27 = Goal1_21;
        STATE_VARIABLE_Info_44_44 = STATE_VARIABLE_Info_43_43;
      }
      succeeded = (MaybeSavedHeapPointerVar_4 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(Goal_27);
        if (succeeded)
        {
          succeeded = (Goals0_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word SavedHeapPointerVar_30;
        MR_Word MarkHeapPointerGoal_31;
        MR_Word Goals1_32;
        MR_Word InnerDisjGoalExpr_33;
        MR_Word InnerDisjGoal_34;
        MR_Word ConjGoalExpr_35;
        MR_Word ConjGoal_36;
        MR_Word Purity_37;
        MR_Word ScopeGoalExpr_38;
        MR_Word ScopeGoal_39;
        MR_Word STATE_VARIABLE_Info_48_48;
        MR_Word STATE_VARIABLE_Info_49_49;
        MR_Word Var_51;
        MR_Word Var_53;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_58;

        ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(&SavedHeapPointerVar_30, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_48_48);
        ml_backend__add_heap_ops__gen_mark_hp_5_p_0(SavedHeapPointerVar_30, Context_24, &MarkHeapPointerGoal_31, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_49_49);
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (SavedHeapPointerVar_30));
        }
        ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(Goals0_15, &Goals1_32, (MR_Integer) 1, Var_51, DisjGoalInfo_5, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_7);
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Goal_27));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Goals1_32));
        }
        {
          InnerDisjGoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), InnerDisjGoalExpr_33, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), InnerDisjGoalExpr_33, 1) = ((MR_Box) (Var_53));
        }
        {
          InnerDisjGoal_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), InnerDisjGoal_34, 0) = ((MR_Box) (InnerDisjGoalExpr_33));
          MR_hl_field(MR_mktag(0), InnerDisjGoal_34, 1) = ((MR_Box) (DisjGoalInfo_5));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (InnerDisjGoal_34));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MarkHeapPointerGoal_31));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          ConjGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConjGoalExpr_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConjGoalExpr_35, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ConjGoalExpr_35, 2) = ((MR_Box) (Var_55));
        }
        {
          ConjGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConjGoal_36, 0) = ((MR_Box) (ConjGoalExpr_35));
          MR_hl_field(MR_mktag(0), ConjGoal_36, 1) = ((MR_Box) (DisjGoalInfo_5));
        }
        Purity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(DisjGoalInfo_5);
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_58, 1) = (MR_Box) ((MR_Unsigned) (Purity_37));
        }
        {
          ScopeGoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ScopeGoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), ScopeGoalExpr_38, 1) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(3), ScopeGoalExpr_38, 2) = ((MR_Box) (ConjGoal_36));
        }
        {
          ScopeGoal_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ScopeGoal_39, 0) = ((MR_Box) (ScopeGoalExpr_38));
          MR_hl_field(MR_mktag(0), ScopeGoal_39, 1) = ((MR_Box) (DisjGoalInfo_5));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ScopeGoal_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Goals_40;

        ml_backend__add_heap_ops__disj_add_heap_ops_7_p_0(Goals0_15, &Goals_40, (MR_Integer) 1, MaybeSavedHeapPointerVar_4, DisjGoalInfo_5, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_40));
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__heap_generate_call_8_p_0(
  MR_String PredName_9,
  MR_Word Detism_10,
  MR_Word Purity_11,
  MR_Word Args_12,
  MR_Word InstMapDelta_13,
  MR_Word ModuleInfo_14,
  MR_Word Context_15,
  MR_Word * CallGoal_16)
{
  {
    MR_Word Var_17;

    Var_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_14, Var_17, PredName_9, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Detism_10, Purity_11, Args_12, (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_13, Context_15, CallGoal_16);
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__new_saved_hp_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9;
    MR_Word VarSet0_17;
    MR_Word VarTypes0_18;
    MR_Word VarSet_19;
    MR_Word VarTypes_20;
    MR_Word Var_29;

    Var_9 = parse_tree__builtin_lib_types__heap_pointer_type_0_f_0();
    VarSet0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    VarTypes0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeapPointer", Var_4, VarSet0_17, &VarSet_19);
    hlds__vartypes__add_var_type_4_p_0(*Var_4, Var_9, VarTypes0_18, &VarTypes_20);
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarTypes_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
    }
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__gen_restore_hp_5_p_0(
  MR_Word SavedHeapPointerVar_6,
  MR_Word Context_7,
  MR_Word * RestoreHeapPointerGoal_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_29;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (SavedHeapPointerVar_6));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_16 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    Var_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(Var_17, Var_29, (MR_String) "restore_hp", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_15, (MR_Word) ((MR_Unsigned) 0U), Var_16, Context_7, RestoreHeapPointerGoal_8);
    *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__gen_mark_hp_5_p_0(
  MR_Word SavedHeapPointerVar_6,
  MR_Word Context_7,
  MR_Word * MarkHeapPointerGoal_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_29;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (SavedHeapPointerVar_6));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_16 = hlds__instmap__instmap_delta_bind_var_1_f_0(SavedHeapPointerVar_6);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    Var_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(Var_17, Var_29, (MR_String) "mark_hp", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_15, (MR_Word) ((MR_Unsigned) 0U), Var_16, Context_7, MarkHeapPointerGoal_8);
    *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_6;
    MR_Word conv0_STATE_VARIABLE_Info_11;

    ml_backend__add_heap_ops__goal_add_heap_ops_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_11);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_11));
  }
}

static void MR_CALL 
ml_backend__add_heap_ops__conj_add_heap_ops_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Box conv2_STATE_VARIABLE_Info_9;

    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0), (MR_Word) (&ml_backend__add_heap_ops_scalar_common_3[0]), Goals0_5, Goals_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_9);
    *STATE_VARIABLE_Info_9 = ((MR_Word) (conv2_STATE_VARIABLE_Info_9));
  }
}

static MR_bool MR_CALL 
ml_backend__add_heap_ops____Unify____heap_ops_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__add_heap_ops____Unify____heap_ops_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__add_heap_ops____Compare____heap_ops_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__add_heap_ops____Compare____heap_ops_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__add_heap_ops__init(void)
{
}

void mercury__ml_backend__add_heap_ops__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__add_heap_ops__ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0);
}

void mercury__ml_backend__add_heap_ops__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__add_heap_ops__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.add_heap_ops.
