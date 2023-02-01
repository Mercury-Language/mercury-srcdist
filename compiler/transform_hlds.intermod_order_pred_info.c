/*
** Automatically generated from `intermod_order_pred_info.m'
** by the Mercury compiler,
** version 22.01.6-beta-2023-02-01
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


// :- module transform_hlds.intermod_order_pred_info.
// :- implementation.

/*
INIT mercury__transform_hlds__intermod_order_pred_info__init
ENDINIT
*/

#include "transform_hlds.intermod_order_pred_info.mih"


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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_PseudoTypeInfo transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__field_types_order_pred_info_0_0[5];

static const MR_ConstString transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__field_names_order_pred_info_0_0[5];

static const MR_DuArgLocn transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__field_locns_order_pred_info_0_0[5];

static const MR_DuFunctorDesc transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_functor_desc_order_pred_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_stag_ordered_order_pred_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_ptag_ordered_order_pred_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_name_ordered_order_pred_info_0[1];

static const MR_Integer transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__functor_number_map_order_pred_info_0[1];

static void MR_CALL 
transform_hlds__intermod_order_pred_info__generate_order_pred_infos_acc_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OrderPredInfos_0_3,
  MR_Word * STATE_VARIABLE_OrderPredInfos_4);

static MR_bool MR_CALL 
transform_hlds__intermod_order_pred_info____Unify____order_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_order_pred_info____Compare____order_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"



static const MR_PseudoTypeInfo transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__field_types_order_pred_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
};

static const MR_ConstString transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__field_names_order_pred_info_0_0[5] = {
  (MR_String) "opi_name",
  (MR_String) "opi_user_arity",
  (MR_String) "opi_pred_or_fun",
  (MR_String) "opi_pred_id",
  (MR_String) "opi_pred_info"
};

static const MR_DuArgLocn transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__field_locns_order_pred_info_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_functor_desc_order_pred_info_0_0 = {
  (MR_String) "order_pred_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__field_types_order_pred_info_0_0,
  transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__field_names_order_pred_info_0_0,
  transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__field_locns_order_pred_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_stag_ordered_order_pred_info_0_0[1] = {
  &transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_functor_desc_order_pred_info_0_0
};

static const MR_DuPtagLayout transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_ptag_ordered_order_pred_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_stag_ordered_order_pred_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_name_ordered_order_pred_info_0[1] = {
  &transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_functor_desc_order_pred_info_0_0
};

static const MR_Integer transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__functor_number_map_order_pred_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod_order_pred_info____Unify____order_pred_info_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod_order_pred_info____Compare____order_pred_info_0_0_10001)),
  (MR_String) "transform_hlds.intermod_order_pred_info",
  (MR_String) "order_pred_info",
  {     transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_name_ordered_order_pred_info_0 },
  {     transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__du_ptag_ordered_order_pred_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__functor_number_map_order_pred_info_0,

};

void MR_CALL 
transform_hlds__intermod_order_pred_info____Compare____order_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_25 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_26 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_25 < Var_26);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_25 > Var_26);
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
          MR_Integer Var_27 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_28 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_27 < Var_28);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_27 > Var_28);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_pred____Compare____pred_id_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              hlds__hlds_pred____Compare____pred_info_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__intermod_order_pred_info____Unify____order_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer Var_18;
      MR_Integer Var_19;

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        Var_18 = (MR_Integer) (ArgX2_5);
        Var_19 = (MR_Integer) (ArgY2_6);
        succeeded = (Var_18 == Var_19);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__intermod_order_pred_info__generate_order_pred_infos_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredIds_5,
  MR_Word * SortedOrderPredInfos_6)
{
  {
    MR_Word OrderPredInfos_7;

    transform_hlds__intermod_order_pred_info__generate_order_pred_infos_acc_4_p_0(ModuleInfo_4, PredIds_5, (MR_Word) ((MR_Unsigned) 0U), &OrderPredInfos_7);
    mercury__list__sort_2_p_0((MR_Word) (&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0), OrderPredInfos_7, SortedOrderPredInfos_6);
  }
}

static void MR_CALL 
transform_hlds__intermod_order_pred_info__generate_order_pred_infos_acc_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OrderPredInfos_0_3,
  MR_Word * STATE_VARIABLE_OrderPredInfos_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_OrderPredInfos_4 = STATE_VARIABLE_OrderPredInfos_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_13;
      MR_Word PredOrFunc_14;
      MR_String PredName_15;
      MR_Integer PredFormArity_16;
      MR_Word UserArity_17;
      MR_Word OrderPredInfo_18;
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_OrderPredInfos_22_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_OrderPredInfos_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_10, &PredInfo_13);
      PredOrFunc_14 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_13);
      PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
      PredFormArity_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_13);
      Var_21 = (MR_Word) (PredFormArity_16);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_14, &UserArity_17, Var_21);
      {
        OrderPredInfo_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OrderPredInfo_18, 0) = ((MR_Box) (PredName_15));
        MR_hl_field(MR_mktag(0), OrderPredInfo_18, 1) = ((MR_Box) (UserArity_17));
        MR_hl_field(MR_mktag(0), OrderPredInfo_18, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), OrderPredInfo_18, 3) = ((MR_Box) (PredId_10));
        MR_hl_field(MR_mktag(0), OrderPredInfo_18, 4) = ((MR_Box) (PredInfo_13));
      }
      {
        STATE_VARIABLE_OrderPredInfos_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OrderPredInfos_22_22, 0) = ((MR_Box) (OrderPredInfo_18));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OrderPredInfos_22_22, 1) = ((MR_Box) (STATE_VARIABLE_OrderPredInfos_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_OrderPredInfos_0_3 = STATE_VARIABLE_OrderPredInfos_22_22;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_OrderPredInfos_0_3 = next_value_of_STATE_VARIABLE_OrderPredInfos_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_order_pred_info____Unify____order_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod_order_pred_info____Unify____order_pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod_order_pred_info____Compare____order_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod_order_pred_info____Compare____order_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__intermod_order_pred_info__init(void)
{
}

void mercury__transform_hlds__intermod_order_pred_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__intermod_order_pred_info__transform_hlds__intermod_order_pred_info__type_ctor_info_order_pred_info_0);
}

void mercury__transform_hlds__intermod_order_pred_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__intermod_order_pred_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.intermod_order_pred_info.
