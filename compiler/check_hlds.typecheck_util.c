/*
** Automatically generated from `typecheck_util.m'
** by the Mercury compiler,
** version rotd-2026-04-05
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


// :- module check_hlds.typecheck_util.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_util__init
ENDINIT
*/

#include "check_hlds.typecheck_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.type_assign.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.status.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.vartypes.mih"




static void MR_CALL 
check_hlds__typecheck_util__acc_type_assigns_where_var_can_have_type_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word Type_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);


static /* final */ const MR_Box check_hlds__typecheck_util_scalar_common_1[3][2];




static /* final */ const MR_Box check_hlds__typecheck_util_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};



#include "array.mh"


void MR_CALL 
check_hlds__typecheck_util__general_higher_order_func_type_6_p_0(
  MR_Word Purity_7,
  MR_Integer Arity_8,
  MR_Word * TypeVarSet_9,
  MR_Word * FuncType_10,
  MR_Word * ArgTypes_11,
  MR_Word * RetType_12)
{
  MR_Word TypeVarSet0_13;
  MR_Word ArgTypeVars_14;
  MR_Word TypeVarSet1_15;
  MR_Word RetTypeVar_16;
  MR_Word Var_17;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_13);
  mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_8, &ArgTypeVars_14, TypeVarSet0_13, &TypeVarSet1_15);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &RetTypeVar_16, TypeVarSet1_15, TypeVarSet_9);
  Var_17 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_util_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_17, ArgTypeVars_14, ArgTypes_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *RetType_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (RetTypeVar_16));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_type_construct__construct_higher_order_func_type_4_p_0(Purity_7, *ArgTypes_11, *RetType_12, FuncType_10);
}

void MR_CALL 
check_hlds__typecheck_util__general_higher_order_pred_type_5_p_0(
  MR_Word Purity_6,
  MR_Integer Arity_7,
  MR_Word * TypeVarSet_8,
  MR_Word * PredType_9,
  MR_Word * ArgTypes_10)
{
  MR_Word TypeVarSet0_11;
  MR_Word ArgTypeVars_12;
  MR_Word Var_13;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_11);
  mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_7, &ArgTypeVars_12, TypeVarSet0_11, TypeVarSet_8);
  Var_13 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_util_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_13, ArgTypeVars_12, ArgTypes_10);
  parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_6, (MR_Integer) 0, *ArgTypes_10, PredType_9);
}

void MR_CALL 
check_hlds__typecheck_util__keep_type_assigns_where_var_can_have_type_4_p_0(
  MR_Word Var_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_8,
  MR_Word * STATE_VARIABLE_TypeAssignSet_9)
{
  check_hlds__typecheck_util__acc_type_assigns_where_var_can_have_type_5_p_0(STATE_VARIABLE_TypeAssignSet_0_8, Var_5, Type_6, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_TypeAssignSet_9);
}

static void MR_CALL 
check_hlds__typecheck_util__acc_type_assigns_where_var_can_have_type_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word Type_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    else
    {
      MR_Word TypeAssign0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TypeAssigns0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_1_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      check_hlds__typecheck_util__acc_type_assign_if_var_can_have_type_5_p_0(TypeAssign0_11, Var_2, Type_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssigns0_12;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_1_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__typecheck_util__acc_type_assign_if_var_can_have_type_5_p_0(
  MR_Word TypeAssign0_6,
  MR_Word Var_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_16,
  MR_Word * STATE_VARIABLE_TypeAssignSet_17)
{
  MR_bool succeeded;
  MR_Word VarTypes0_10;
  MR_Word MaybeOldVarType_11;
  MR_Word VarTypes_12;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_6, &VarTypes0_10);
  parse_tree__vartypes__search_insert_var_type_5_p_0(Var_7, Type_8, &MaybeOldVarType_11, VarTypes0_10, &VarTypes_12);
  if ((MaybeOldVarType_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeAssign_15;

    check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_12, TypeAssign0_6, &TypeAssign_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_16));
    }
  }
  else
  {
    MR_Word OldVarType_13 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_11, 0))));
    MR_Word TypeAssign1_14;
    MR_Word ExistQTVars_18;
    MR_Word TypeBindings0_19;
    MR_Word TypeBindings_20;

    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_6, &ExistQTVars_18);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_6, &TypeBindings0_19);
    succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(OldVarType_13, Type_8, ExistQTVars_18, TypeBindings0_19, &TypeBindings_20);
    if (succeeded)
    {
      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_20, TypeAssign0_6, &TypeAssign1_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TypeAssignSet_17 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign1_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_16));
      }
    else
      *STATE_VARIABLE_TypeAssignSet_17 = STATE_VARIABLE_TypeAssignSet_0_16;
  }
}

void MR_CALL 
check_hlds__typecheck_util__type_assign_rename_apart_4_p_0(
  MR_Word TypeAssign0_5,
  MR_Word PredTypeVarSet_6,
  MR_Word * TypeAssign_7,
  MR_Word * Renaming_8)
{
  MR_Word TypeVarSet0_9;
  MR_Word TypeVarSet_10;

  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_5, &TypeVarSet0_9);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_9, PredTypeVarSet_6, &TypeVarSet_10, Renaming_8);
  check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_10, TypeAssign0_5, TypeAssign_7);
}

MR_bool MR_CALL 
check_hlds__typecheck_util__type_assign_unify_type_4_p_0(
  MR_Word X_5,
  MR_Word Y_6,
  MR_Word TypeAssign0_7,
  MR_Word * TypeAssign_8)
{
  MR_bool succeeded;
  MR_Word ExistQTVars_9;
  MR_Word TypeBindings0_10;
  MR_Word TypeBindings_11;

  check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_7, &ExistQTVars_9);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_7, &TypeBindings0_10);
  succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(X_5, Y_6, ExistQTVars_9, TypeBindings0_10, &TypeBindings_11);
  if (succeeded)
  {
    check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_11, TypeAssign0_7, TypeAssign_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_util__type_assign_fresh_type_var_4_p_0(
  MR_Word Var_5,
  MR_Word * Type_6,
  MR_Word STATE_VARIABLE_TypeAssign_0_13,
  MR_Word * STATE_VARIABLE_TypeAssign_14)
{
  MR_Word VarTypes0_8;
  MR_Word TypeVarSet0_9;
  MR_Word TypeVar_10;
  MR_Word TypeVarSet_11;
  MR_Word VarTypes1_12;
  MR_Word STATE_VARIABLE_TypeAssign_1_15;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(STATE_VARIABLE_TypeAssign_0_13, &VarTypes0_8);
  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_13, &TypeVarSet0_9);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_10, TypeVarSet0_9, &TypeVarSet_11);
  check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_11, STATE_VARIABLE_TypeAssign_0_13, &STATE_VARIABLE_TypeAssign_1_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Type_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeVar_10));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__vartypes__add_var_type_4_p_0(Var_5, *Type_6, VarTypes0_8, &VarTypes1_12);
  check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_12, STATE_VARIABLE_TypeAssign_1_15, STATE_VARIABLE_TypeAssign_14);
}

MR_Word MR_CALL 
check_hlds__typecheck_util__empty_hlds_constraint_db_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_4;
  MR_Word Var_5;

  Var_4 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_util_scalar_common_1[0]));
  Var_5 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_util_scalar_common_1[1]));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
  }
  return HeadVar__1_1;
}

void mercury__check_hlds__typecheck_util__init(void)
{
}

void mercury__check_hlds__typecheck_util__init_type_tables(void)
{
}

void mercury__check_hlds__typecheck_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_util.
