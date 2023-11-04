/*
** Automatically generated from `prog_type_unify.m'
** by the Mercury compiler,
** version rotd-2023-11-04
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


// :- module parse_tree.prog_type_unify.
// :- implementation.

/*
INIT mercury__parse_tree__prog_type_unify__init
ENDINIT
*/

#include "parse_tree.prog_type_unify.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"



struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s {
  MR_bool parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded;
  MR_Word parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27;
  jmp_buf parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__T_28;
  MR_Box parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28;
};


static void MR_CALL 
parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_var_5_p_0(
  MR_Word tscc_proc_2_input_1_VarX_6,
  MR_Word tscc_proc_2_input_2_TypeY_7,
  MR_Word tscc_proc_2_input_3_HeadTypeParams_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15);

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_var_var_6_p_0(
  MR_Word tscc_proc_3_input_1_X_7,
  MR_Word tscc_proc_3_input_2_Y_8,
  MR_Word tscc_proc_3_input_3_Kind_9,
  MR_Word tscc_proc_3_input_4_HeadTypeParams_10,
  MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15);

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_apply_6_p_0(
  MR_Word tscc_proc_4_input_1_TypeY_7,
  MR_Word tscc_proc_4_input_2_VarX_8,
  MR_Word tscc_proc_4_input_3_ArgTypesX0_9,
  MR_Word tscc_proc_4_input_4_HeadTypeParams_10,
  MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15);

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * ArgTypesY_3,
  MR_Word HeadVar__4_4,
  MR_Word * KindY_5,
  MR_Word HeadTypeParams_6,
  MR_Word STATE_VARIABLE_Bindings_0_7,
  MR_Word * STATE_VARIABLE_Bindings_8);

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_occurs_3_p_0(
  MR_Word TypeX_4,
  MR_Word Y_5,
  MR_Word Bindings_6);

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_occurs_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Y_6,
  MR_Word Bindings_7);

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(
  MR_Word Var_7,
  MR_Word HeadVar_8,
  MR_Word Kind_9,
  MR_Word HeadTypeParams_10,
  MR_Word STATE_VARIABLE_Bindings_0_15,
  MR_Word * STATE_VARIABLE_Bindings_16);


static /* final */ const MR_Box parse_tree__prog_type_unify_scalar_common_1[1][2];




static /* final */ const MR_Box parse_tree__prog_type_unify_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};





void MR_CALL 
parse_tree__prog_type_unify__compute_caller_callee_type_substitution_5_p_0(
  MR_Word CalleeArgTypes_6,
  MR_Word CallerArgTypes_7,
  MR_Word ExternalTypeParams_8,
  MR_Word CalleeExistQVars_9,
  MR_Word * TypeSubn_10)
{
  MR_bool succeeded;

  if ((CalleeExistQVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeSubn0_11;
    MR_Word TypesBVars_22;
    MR_Word TypeSubst0_23;

    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(CallerArgTypes_7, &TypesBVars_22);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_23);
    succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(CalleeArgTypes_6, CallerArgTypes_7, TypesBVars_22, TypeSubst0_23, &TypeSubn0_11);
    if (succeeded)
      *TypeSubn_10 = TypeSubn0_11;
    else
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeSubn_10);
  }
  else
  {
    MR_Word TypeSubn1_14;
    MR_Word TypeSubn0_17;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubn0_17);
    succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(CalleeArgTypes_6, CallerArgTypes_7, ExternalTypeParams_8, TypeSubn0_17, &TypeSubn1_14);
    if (succeeded)
      *TypeSubn_10 = TypeSubn1_14;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_unify.compute_caller_callee_type_substitution\'/5", (MR_String) "type unification failed");
        return;
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type_unify__identical_up_to_renaming_2_p_0(
  MR_Word TypesList1_3,
  MR_Word TypesList2_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_9_13;
  MR_Word TypeCtorInfo_10_14;
  MR_Word TypesBVars_7;
  MR_Word TypeSubst0_8;
  MR_Word TypesBVars_11;
  MR_Word TypeSubst0_12;
  MR_Word Var_5;
  MR_Word Var_6;

  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(TypesList2_4, &TypesBVars_7);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_8);
  succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(TypesList1_3, TypesList2_4, TypesBVars_7, TypeSubst0_8, &Var_5);
  if (succeeded)
  {
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(TypesList1_3, &TypesBVars_11);
    TypeInfo_9_13 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
    TypeCtorInfo_10_14 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    mercury__map__init_1_p_0(TypeInfo_9_13, TypeCtorInfo_10_14, &TypeSubst0_12);
    succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(TypesList2_4, TypesList1_3, TypesBVars_11, TypeSubst0_12, &Var_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__T_28 = ((MR_Word) ((env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28));
  parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_29;
    MR_Word Var_30;

    (env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__T_28)) == (MR_Integer) 0);
    if ((env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__T_28, (MR_Integer) 1))));
    }
    (env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded);
    if ((env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded)
      parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &(env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__conv0_T_28, (env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27, parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_3, env_ptr);
      (env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0(
  MR_Word TVarSet_9,
  MR_Word ExistQVars_10,
  MR_Word ActualArgTypes_11,
  MR_Word HeadTypeParams_12,
  MR_Word CalleeTVarSet_13,
  MR_Word PredKindMap_14,
  MR_Word PredExistQVars_15,
  MR_Word PredArgTypes_16)
{
  struct parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0_s env;

  {
    MR_Word Renaming_18;
    MR_Word ParentKindMap_19;
    MR_Word ParentArgTypes_20;
    MR_Word ParentExistQVars_21;
    MR_Word ParentToActualSubst_22;
    MR_Word _TVarSet1_17;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_9, CalleeTVarSet_13, &_TVarSet1_17, &Renaming_18);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(Renaming_18, PredKindMap_14, &ParentKindMap_19);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_18, PredArgTypes_16, &ParentArgTypes_20);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_18, PredExistQVars_15, &ParentExistQVars_21);
    if ((ExistQVars_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypesBVars_35;
      MR_Word TypeSubst0_36;

      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ActualArgTypes_11, &TypesBVars_35);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_36);
      (env).parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ParentArgTypes_20, ActualArgTypes_11, TypesBVars_35, TypeSubst0_36, &ParentToActualSubst_22);
    }
    else
    {
      MR_Word Var_31;

      Var_31 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
      (env).parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ParentArgTypes_20, ActualArgTypes_11, HeadTypeParams_12, Var_31, &ParentToActualSubst_22);
    }
    if ((env).parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded)
    {
      if ((ParentExistQVars_21 == (MR_Word) ((MR_Unsigned) 0U)))
        (env).parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded = MR_TRUE;
      else
      {
        parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_19, ParentToActualSubst_22, ParentExistQVars_21, &(env).parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__ActualExistQTypes_27);
        parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_4(&env);
        (env).parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded = !((env).parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded);
      }
    }
    return (env).parse_tree__prog_type_unify__arg_type_list_subsumes_8_p_0_env_0__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_type_unify__type_list_subsumes_det_3_p_0(
  MR_Word TypesA_4,
  MR_Word TypesB_5,
  MR_Word * TypeSubst_6)
{
  MR_bool succeeded;
  MR_Word TypeSubstPrime_7;
  MR_Word TypesBVars_10;
  MR_Word TypeSubst0_11;

  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(TypesB_5, &TypesBVars_10);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_11);
  succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(TypesA_4, TypesB_5, TypesBVars_10, TypeSubst0_11, &TypeSubstPrime_7);
  if (succeeded)
    *TypeSubst_6 = TypeSubstPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_unify.type_list_subsumes_det\'/3", (MR_String) "type_list_subsumes failed");
      return;
    }
}

MR_bool MR_CALL 
parse_tree__prog_type_unify__type_list_subsumes_3_p_0(
  MR_Word TypesA_4,
  MR_Word TypesB_5,
  MR_Word * TypeSubst_6)
{
  MR_bool succeeded;
  MR_Word TypesBVars_7;
  MR_Word TypeSubst0_8;

  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(TypesB_5, &TypesBVars_7);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_8);
  succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(TypesA_4, TypesB_5, TypesBVars_7, TypeSubst0_8, TypeSubst_6);
  return succeeded;
}

void MR_CALL 
parse_tree__prog_type_unify__type_subsumes_det_3_p_0(
  MR_Word TypeA_4,
  MR_Word TypeB_5,
  MR_Word * TypeSubst_6)
{
  MR_bool succeeded;
  MR_Word TypeSubstPrime_7;
  MR_Word TypeBVars_10;
  MR_Word TypeSubst0_11;

  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(TypeB_5, &TypeBVars_10);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_11);
  succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(TypeA_4, TypeB_5, TypeBVars_10, TypeSubst0_11, &TypeSubstPrime_7);
  if (succeeded)
    *TypeSubst_6 = TypeSubstPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_unify.type_subsumes_det\'/3", (MR_String) "type_subsumes failed");
      return;
    }
}

MR_bool MR_CALL 
parse_tree__prog_type_unify__type_subsumes_3_p_0(
  MR_Word TypeA_4,
  MR_Word TypeB_5,
  MR_Word * TypeSubst_6)
{
  MR_bool succeeded;
  MR_Word TypeBVars_7;
  MR_Word TypeSubst0_8;

  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(TypeB_5, &TypeBVars_7);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_8);
  succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(TypeA_4, TypeB_5, TypeBVars_7, TypeSubst0_8, TypeSubst_6);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_5_p_0(
  MR_Word tscc_proc_1_input_1_X_6,
  MR_Word tscc_proc_1_input_2_Y_7,
  MR_Word tscc_proc_1_input_3_HeadTypeParams_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15)
{
  MR_Word tscc_proc_2_input_1_VarX_6;
  MR_Word tscc_proc_2_input_2_TypeY_7;
  MR_Word tscc_proc_2_input_3_HeadTypeParams_8;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
  MR_Word tscc_proc_3_input_1_X_7;
  MR_Word tscc_proc_3_input_2_Y_8;
  MR_Word tscc_proc_3_input_3_Kind_9;
  MR_Word tscc_proc_3_input_4_HeadTypeParams_10;
  MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
  MR_Word tscc_proc_4_input_1_TypeY_7;
  MR_Word tscc_proc_4_input_2_VarX_8;
  MR_Word tscc_proc_4_input_3_ArgTypesX0_9;
  MR_Word tscc_proc_4_input_4_HeadTypeParams_10;
  MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Bindings_15;

  // The code for TSCC PROC 1: pred parse_tree.prog_type_unify.type_unify/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.prog_type_unify.type_unify/5-0
  ;
  // proc 2 in TSCC: pred parse_tree.prog_type_unify.type_unify_var/5-0
  ;
  // proc 3 in TSCC: pred parse_tree.prog_type_unify.type_unify_var_var/6-0
  ;
  // proc 4 in TSCC: pred parse_tree.prog_type_unify.type_unify_apply/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word X_6 = tscc_proc_1_input_1_X_6;
    MR_Word Y_7 = tscc_proc_1_input_2_Y_7;
    MR_Word HeadTypeParams_8 = tscc_proc_1_input_3_HeadTypeParams_8;
    MR_Word STATE_VARIABLE_Bindings_0_14 = tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
    MR_Word STATE_VARIABLE_Bindings_15;
    MR_bool succeeded = ((MR_tag((MR_Word) X_6)) == (MR_Integer) 0);
    MR_Word VarX_10;

    if (succeeded)
    {
      VarX_10 = ((MR_Word) ((MR_hl_field(0, X_6, (MR_Integer) 0))));
      {
        MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_10;
        MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = Y_7;
        MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
        tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
        tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
        tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
        goto top_of_proc_2;
      }
    }
    else
    {
      MR_Word VarY_12;

      succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        VarY_12 = ((MR_Word) ((MR_hl_field(0, Y_7, (MR_Integer) 0))));
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_12;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = X_6;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
          tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
          tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
          goto top_of_proc_2;
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_Bindings_18_18;

        switch (MR_tag((MR_Word) X_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(1, X_6, (MR_Integer) 0))));
              MR_Word ArgTypesX_20 = ((MR_Word) ((MR_hl_field(1, X_6, (MR_Integer) 1))));
              MR_Word ArgTypesY_22;
              MR_Word Var_36;

              succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(1, Y_7, (MR_Integer) 0))));
                ArgTypesY_22 = ((MR_Word) ((MR_hl_field(1, Y_7, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_19, Var_36);
                if (succeeded)
                  succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_20, ArgTypesY_22, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinType_24 = ((MR_Word) ((MR_hl_field(2, X_6, (MR_Integer) 0))));
              MR_Word Var_37;

              succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_37 = ((MR_Word) ((MR_hl_field(2, Y_7, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_24, Var_37);
                if (succeeded)
                {
                  STATE_VARIABLE_Bindings_18_18 = STATE_VARIABLE_Bindings_0_14;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word ArgTypesX_34 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
                  MR_Word ArgTypesY_35;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgTypesY_35 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_34, ArgTypesY_35, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PorF_25 = ((MR_Unsigned) ((MR_hl_field(3, X_6, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(3, X_6, (MR_Integer) 4))) & (MR_Integer) 3);
                  MR_Word ArgTypesX_32 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 2))));
                  MR_Word ArgTypesY_33;
                  MR_Word Var_38;
                  MR_Word Var_39;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_38 = ((MR_Unsigned) ((MR_hl_field(3, Y_7, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgTypesY_33 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 2))));
                    Var_39 = ((MR_Unsigned) ((MR_hl_field(3, Y_7, (MR_Integer) 4))) & (MR_Integer) 3);
                    succeeded = (PorF_25 == Var_38);
                    if (succeeded)
                    {
                      succeeded = (Purity_27 == Var_39);
                      if (succeeded)
                      {
                        succeeded = MR_TRUE;
                        if (succeeded)
                          succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_32, ArgTypesY_33, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                      }
                    }
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_18_18;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word VarX_43;
          MR_Word ArgTypesX_44;

          succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            VarX_43 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
            ArgTypesX_44 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 2))));
            {
              MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = Y_7;
              MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_43;
              MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesX_44;
              MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
              tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
              tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
              tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
              tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
              goto top_of_proc_4;
            }
          }
          else
          {
            MR_Word VarY_46;
            MR_Word ArgTypesY_47;

            succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarY_46 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
              ArgTypesY_47 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 2))));
              {
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = X_6;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarY_46;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesY_47;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
            }
            else
            {
              MR_Word RawX_49;

              succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                RawX_49 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
                {
                  MR_Word RawY_51;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    RawY_51 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = RawY_51;
                      MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                      tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                      tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                      goto top_of_proc_1;
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_49;
                    MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = Y_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                    tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                    tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                    goto top_of_proc_1;
                  }
                }
              }
              else
              {
                MR_Word RawY_54;
                MR_Word next_value_of_tscc_proc_1_input_1_X_6;
                MR_Word next_value_of_tscc_proc_1_input_2_Y_7;
                MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;

                succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  RawY_54 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_X_6 = X_6;
                  next_value_of_tscc_proc_1_input_2_Y_7 = RawY_54;
                  next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                  next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;
                  tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                  tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                  tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                  tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                  goto top_of_proc_1;
                }
              }
            }
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_15;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word VarX_6 = tscc_proc_2_input_1_VarX_6;
    MR_Word TypeY_7 = tscc_proc_2_input_2_TypeY_7;
    MR_Word HeadTypeParams_8 = tscc_proc_2_input_3_HeadTypeParams_8;
    MR_Word STATE_VARIABLE_Bindings_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
    MR_Word STATE_VARIABLE_Bindings_14;
    MR_bool succeeded = ((MR_tag((MR_Word) TypeY_7)) == (MR_Integer) 0);
    MR_Word VarY_10;
    MR_Word KindY_11;

    if (succeeded)
    {
      VarY_10 = ((MR_Word) ((MR_hl_field(0, TypeY_7, (MR_Integer) 0))));
      KindY_11 = ((MR_Word) ((MR_hl_field(0, TypeY_7, (MR_Integer) 1))));
      {
        MR_Word next_value_of_tscc_proc_3_input_1_X_7 = VarX_6;
        MR_Word next_value_of_tscc_proc_3_input_2_Y_8 = VarY_10;
        MR_Word next_value_of_tscc_proc_3_input_3_Kind_9 = KindY_11;
        MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
        tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
        tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
        tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
        tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
        goto top_of_proc_3;
      }
    }
    else
    {
      MR_Word BindingOfX_12;
      MR_Box conv0_BindingOfX_12;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_13, ((MR_Box) (VarX_6)), &conv0_BindingOfX_12);
      if (succeeded)
      {
        BindingOfX_12 = ((MR_Word) (conv0_BindingOfX_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
        MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = TypeY_7;
        MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
        tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
        tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
        tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
        goto top_of_proc_1;
      }
      else
      {
        MR_Word TypeInfo_18_18;
        MR_Word TypeCtorInfo_19_19;
        MR_Word TypeInfo_17_17;

        succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(TypeY_7, VarX_6, STATE_VARIABLE_Bindings_0_13);
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
          succeeded = mercury__list__member_2_p_0(TypeInfo_17_17, ((MR_Box) (VarX_6)), HeadTypeParams_8);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
            TypeCtorInfo_19_19 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            mercury__map__det_insert_4_p_0(TypeInfo_18_18, TypeCtorInfo_19_19, ((MR_Box) (VarX_6)), ((MR_Box) (TypeY_7)), STATE_VARIABLE_Bindings_0_13, &STATE_VARIABLE_Bindings_14);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_14;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word X_7 = tscc_proc_3_input_1_X_7;
    MR_Word Y_8 = tscc_proc_3_input_2_Y_8;
    MR_Word Kind_9 = tscc_proc_3_input_3_Kind_9;
    MR_Word HeadTypeParams_10 = tscc_proc_3_input_4_HeadTypeParams_10;
    MR_Word STATE_VARIABLE_Bindings_0_18 = tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
    MR_Word STATE_VARIABLE_Bindings_19;
    MR_bool succeeded = MR_TRUE;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (Y_8)), HeadTypeParams_10);
    if (succeeded)
      succeeded = parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(X_7, Y_8, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
    else
    {
      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_7)), HeadTypeParams_10);
      if (succeeded)
        succeeded = parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(Y_8, X_7, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
      else
      {
        MR_Word BindingOfX_12;
        MR_Box conv1_BindingOfX_12;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (X_7)), &conv1_BindingOfX_12);
        if (succeeded)
        {
          BindingOfX_12 = ((MR_Word) (conv1_BindingOfX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word BindingOfY_13;
          MR_Box conv2_BindingOfY_13;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv2_BindingOfY_13);
          if (succeeded)
          {
            BindingOfY_13 = ((MR_Word) (conv2_BindingOfY_13));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
            MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = BindingOfY_13;
            MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_18;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
            tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
            tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
            goto top_of_proc_1;
          }
          else
          {
            MR_Word SubstBindingOfX_14;
            MR_Word TypeInfo_44_44;
            MR_Word Var_42;

            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfX_12, &SubstBindingOfX_14);
            succeeded = ((MR_tag((MR_Word) SubstBindingOfX_14)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_42 = ((MR_Word) ((MR_hl_field(0, SubstBindingOfX_14, (MR_Integer) 0))));
              TypeInfo_44_44 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (Y_8)), ((MR_Box) (Var_42)));
            }
            if (succeeded)
            {
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeInfo_34_34;
              MR_Word TypeCtorInfo_35_35;

              succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(SubstBindingOfX_14, Y_8, STATE_VARIABLE_Bindings_0_18);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
                TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__map__det_insert_4_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, ((MR_Box) (Y_8)), ((MR_Box) (SubstBindingOfX_14)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          MR_Word BindingOfY_27;
          MR_Box conv3_BindingOfY_27;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv3_BindingOfY_27);
          if (succeeded)
          {
            BindingOfY_27 = ((MR_Word) (conv3_BindingOfY_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word SubstBindingOfY_16;
            MR_Word TypeInfo_45_45;
            MR_Word Var_43;

            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfY_27, &SubstBindingOfY_16);
            succeeded = ((MR_tag((MR_Word) SubstBindingOfY_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_43 = ((MR_Word) ((MR_hl_field(0, SubstBindingOfY_16, (MR_Integer) 0))));
              TypeInfo_45_45 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (X_7)), ((MR_Box) (Var_43)));
            }
            if (succeeded)
            {
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeInfo_38_38;
              MR_Word TypeCtorInfo_39_39;

              succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(SubstBindingOfY_16, X_7, STATE_VARIABLE_Bindings_0_18);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeInfo_38_38 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
                TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__map__det_insert_4_p_0(TypeInfo_38_38, TypeCtorInfo_39_39, ((MR_Box) (X_7)), ((MR_Box) (SubstBindingOfY_16)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_8)));
            if (succeeded)
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
            else
            {
              MR_Word Var_25;

              {
                Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_25, 0) = ((MR_Box) (Y_8));
                MR_hl_field(0, Var_25, 1) = ((MR_Box) (Kind_9));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (X_7)), ((MR_Box) (Var_25)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_19;
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word TypeY_7 = tscc_proc_4_input_1_TypeY_7;
    MR_Word VarX_8 = tscc_proc_4_input_2_VarX_8;
    MR_Word ArgTypesX0_9 = tscc_proc_4_input_3_ArgTypesX0_9;
    MR_Word HeadTypeParams_10 = tscc_proc_4_input_4_HeadTypeParams_10;
    MR_Word STATE_VARIABLE_Bindings_0_34 = tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
    MR_Word STATE_VARIABLE_Bindings_35;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) TypeY_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word NameY_12 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 0))));
          MR_Word ArgTypesY0_13 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 1))));
          MR_Word KindY0_14 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 2))));
          MR_Word ArgTypesY_15;
          MR_Word KindY_16;
          MR_Word STATE_VARIABLE_Bindings_36_36;
          MR_Word Var_37;
          MR_Word RevArgTypesX_77;
          MR_Word RevArgTypesY0_78;
          MR_Word RevArgTypesY_79;
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

          mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_77);
          mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_13, &RevArgTypesY0_78);
          succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_77, RevArgTypesY0_78, &RevArgTypesY_79, KindY0_14, &KindY_16, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_36_36);
          if (succeeded)
          {
            mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_79, &ArgTypesY_15);
            {
              Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_37, 0) = ((MR_Box) (NameY_12));
              MR_hl_field(1, Var_37, 1) = ((MR_Box) (ArgTypesY_15));
              MR_hl_field(1, Var_37, 2) = ((MR_Box) (KindY_16));
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
            next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_37;
            next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_36_36;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

          succeeded = (ArgTypesX0_9 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
            next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
            next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeY_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_Bindings_41_41;
              MR_Word Var_42;
              MR_Word ArgTypesY0_53 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word KindY0_54 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 2))));
              MR_Word ArgTypesY_55;
              MR_Word KindY_56;
              MR_Word RevArgTypesX_81;
              MR_Word RevArgTypesY0_82;
              MR_Word RevArgTypesY_83;
              MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
              MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
              MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

              mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_81);
              mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_53, &RevArgTypesY0_82);
              succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_81, RevArgTypesY0_82, &RevArgTypesY_83, KindY0_54, &KindY_56, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_41_41);
              if (succeeded)
              {
                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_83, &ArgTypesY_55);
                {
                  Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_42, 1) = ((MR_Box) (ArgTypesY_55));
                  MR_hl_field(3, Var_42, 2) = ((MR_Box) (KindY_56));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_42;
                next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_41_41;
                tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
              MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
              MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

              succeeded = (ArgTypesX0_9 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
                next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
                tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word VarY_23 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word Kind0_24 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 3))));
              MR_Integer NArgTypesX0_25;
              MR_Integer NArgTypesY0_26;
              MR_Word ArgTypesY0_61 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 2))));

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &NArgTypesX0_25);
              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &NArgTypesY0_26);
              succeeded = (NArgTypesX0_25 < NArgTypesY0_26);
              if (succeeded)
              {
                MR_Word Kind_28;
                MR_Word STATE_VARIABLE_Bindings_44_44;
                MR_Word Var_45;
                MR_Word ArgTypesY_57;
                MR_Word RevArgTypesX_65;
                MR_Word RevArgTypesY0_66;
                MR_Word RevArgTypesY_67;
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_65);
                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesY0_66);
                succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_65, RevArgTypesY0_66, &RevArgTypesY_67, Kind0_24, &Kind_28, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_44_44);
                if (succeeded)
                {
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_67, &ArgTypesY_57);
                  {
                    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_45, 1) = ((MR_Box) (VarY_23));
                    MR_hl_field(3, Var_45, 2) = ((MR_Box) (ArgTypesY_57));
                    MR_hl_field(3, Var_45, 3) = ((MR_Box) (Kind_28));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_45;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_44_44;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              else
              {
                succeeded = (NArgTypesX0_25 > NArgTypesY0_26);
                if (succeeded)
                {
                  MR_Word ArgTypesX_30;
                  MR_Word STATE_VARIABLE_Bindings_49_49;
                  MR_Word Var_50;
                  MR_Word Kind_59;
                  MR_Word RevArgTypesX_73;
                  MR_Word RevArgTypesY0_74;
                  MR_Word RevArgTypesY_75;
                  MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesX_73);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesY0_74);
                  succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_73, RevArgTypesY0_74, &RevArgTypesY_75, Kind0_24, &Kind_59, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_49_49);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_75, &ArgTypesX_30);
                    {
                      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, Var_50, 1) = ((MR_Box) (VarX_8));
                      MR_hl_field(3, Var_50, 2) = ((MR_Box) (ArgTypesX_30));
                      MR_hl_field(3, Var_50, 3) = ((MR_Box) (Kind_59));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_23;
                    next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_50;
                    next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                    next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_49_49;
                    tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                    tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                    tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                    goto top_of_proc_2;
                  }
                }
                else
                {
                  MR_Word STATE_VARIABLE_Bindings_47_47;
                  MR_Word Kind_58;
                  MR_Word RevArgTypesX_69;
                  MR_Word RevArgTypesY0_70;
                  MR_Word RevArgTypesY_71;
                  MR_Word Var_29;
                  MR_Word next_value_of_tscc_proc_3_input_1_X_7;
                  MR_Word next_value_of_tscc_proc_3_input_2_Y_8;
                  MR_Word next_value_of_tscc_proc_3_input_3_Kind_9;
                  MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                  MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_69);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesY0_70);
                  succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_69, RevArgTypesY0_70, &RevArgTypesY_71, Kind0_24, &Kind_58, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_47_47);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_71, &Var_29);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_3_input_1_X_7 = VarX_8;
                    next_value_of_tscc_proc_3_input_2_Y_8 = VarY_23;
                    next_value_of_tscc_proc_3_input_3_Kind_9 = Kind_58;
                    next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                    next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_47_47;
                    tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
                    tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
                    tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
                    tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                    tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
                    goto top_of_proc_3;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word RawY_31 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = RawY_31;
              MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_8;
              MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesX0_9;
              MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_10;
              MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_34;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
              tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
              tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
              tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
              tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
              goto top_of_proc_4;
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_35;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Bindings_15 = tscc_output_1_STATE_VARIABLE_Bindings_15;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_var_5_p_0(
  MR_Word tscc_proc_2_input_1_VarX_6,
  MR_Word tscc_proc_2_input_2_TypeY_7,
  MR_Word tscc_proc_2_input_3_HeadTypeParams_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15)
{
  MR_Word tscc_proc_1_input_1_X_6;
  MR_Word tscc_proc_1_input_2_Y_7;
  MR_Word tscc_proc_1_input_3_HeadTypeParams_8;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
  MR_Word tscc_proc_3_input_1_X_7;
  MR_Word tscc_proc_3_input_2_Y_8;
  MR_Word tscc_proc_3_input_3_Kind_9;
  MR_Word tscc_proc_3_input_4_HeadTypeParams_10;
  MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
  MR_Word tscc_proc_4_input_1_TypeY_7;
  MR_Word tscc_proc_4_input_2_VarX_8;
  MR_Word tscc_proc_4_input_3_ArgTypesX0_9;
  MR_Word tscc_proc_4_input_4_HeadTypeParams_10;
  MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Bindings_15;

  // The code for TSCC PROC 2: pred parse_tree.prog_type_unify.type_unify_var/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.prog_type_unify.type_unify/5-0
  ;
  // proc 2 in TSCC: pred parse_tree.prog_type_unify.type_unify_var/5-0
  ;
  // proc 3 in TSCC: pred parse_tree.prog_type_unify.type_unify_var_var/6-0
  ;
  // proc 4 in TSCC: pred parse_tree.prog_type_unify.type_unify_apply/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word X_6 = tscc_proc_1_input_1_X_6;
    MR_Word Y_7 = tscc_proc_1_input_2_Y_7;
    MR_Word HeadTypeParams_8 = tscc_proc_1_input_3_HeadTypeParams_8;
    MR_Word STATE_VARIABLE_Bindings_0_14 = tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
    MR_Word STATE_VARIABLE_Bindings_15;
    MR_bool succeeded = ((MR_tag((MR_Word) X_6)) == (MR_Integer) 0);
    MR_Word VarX_10;

    if (succeeded)
    {
      VarX_10 = ((MR_Word) ((MR_hl_field(0, X_6, (MR_Integer) 0))));
      {
        MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_10;
        MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = Y_7;
        MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
        tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
        tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
        tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
        goto top_of_proc_2;
      }
    }
    else
    {
      MR_Word VarY_12;

      succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        VarY_12 = ((MR_Word) ((MR_hl_field(0, Y_7, (MR_Integer) 0))));
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_12;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = X_6;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
          tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
          tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
          goto top_of_proc_2;
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_Bindings_18_18;

        switch (MR_tag((MR_Word) X_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(1, X_6, (MR_Integer) 0))));
              MR_Word ArgTypesX_20 = ((MR_Word) ((MR_hl_field(1, X_6, (MR_Integer) 1))));
              MR_Word ArgTypesY_22;
              MR_Word Var_36;

              succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(1, Y_7, (MR_Integer) 0))));
                ArgTypesY_22 = ((MR_Word) ((MR_hl_field(1, Y_7, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_19, Var_36);
                if (succeeded)
                  succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_20, ArgTypesY_22, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinType_24 = ((MR_Word) ((MR_hl_field(2, X_6, (MR_Integer) 0))));
              MR_Word Var_37;

              succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_37 = ((MR_Word) ((MR_hl_field(2, Y_7, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_24, Var_37);
                if (succeeded)
                {
                  STATE_VARIABLE_Bindings_18_18 = STATE_VARIABLE_Bindings_0_14;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word ArgTypesX_34 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
                  MR_Word ArgTypesY_35;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgTypesY_35 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_34, ArgTypesY_35, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PorF_25 = ((MR_Unsigned) ((MR_hl_field(3, X_6, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(3, X_6, (MR_Integer) 4))) & (MR_Integer) 3);
                  MR_Word ArgTypesX_32 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 2))));
                  MR_Word ArgTypesY_33;
                  MR_Word Var_38;
                  MR_Word Var_39;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_38 = ((MR_Unsigned) ((MR_hl_field(3, Y_7, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgTypesY_33 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 2))));
                    Var_39 = ((MR_Unsigned) ((MR_hl_field(3, Y_7, (MR_Integer) 4))) & (MR_Integer) 3);
                    succeeded = (PorF_25 == Var_38);
                    if (succeeded)
                    {
                      succeeded = (Purity_27 == Var_39);
                      if (succeeded)
                      {
                        succeeded = MR_TRUE;
                        if (succeeded)
                          succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_32, ArgTypesY_33, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                      }
                    }
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_18_18;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word VarX_43;
          MR_Word ArgTypesX_44;

          succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            VarX_43 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
            ArgTypesX_44 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 2))));
            {
              MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = Y_7;
              MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_43;
              MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesX_44;
              MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
              tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
              tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
              tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
              tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
              goto top_of_proc_4;
            }
          }
          else
          {
            MR_Word VarY_46;
            MR_Word ArgTypesY_47;

            succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarY_46 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
              ArgTypesY_47 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 2))));
              {
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = X_6;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarY_46;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesY_47;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
            }
            else
            {
              MR_Word RawX_49;

              succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                RawX_49 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
                {
                  MR_Word RawY_51;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    RawY_51 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = RawY_51;
                      MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                      tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                      tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                      goto top_of_proc_1;
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_49;
                    MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = Y_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                    tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                    tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                    goto top_of_proc_1;
                  }
                }
              }
              else
              {
                MR_Word RawY_54;
                MR_Word next_value_of_tscc_proc_1_input_1_X_6;
                MR_Word next_value_of_tscc_proc_1_input_2_Y_7;
                MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;

                succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  RawY_54 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_X_6 = X_6;
                  next_value_of_tscc_proc_1_input_2_Y_7 = RawY_54;
                  next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                  next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;
                  tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                  tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                  tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                  tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                  goto top_of_proc_1;
                }
              }
            }
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_15;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word VarX_6 = tscc_proc_2_input_1_VarX_6;
    MR_Word TypeY_7 = tscc_proc_2_input_2_TypeY_7;
    MR_Word HeadTypeParams_8 = tscc_proc_2_input_3_HeadTypeParams_8;
    MR_Word STATE_VARIABLE_Bindings_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
    MR_Word STATE_VARIABLE_Bindings_14;
    MR_bool succeeded = ((MR_tag((MR_Word) TypeY_7)) == (MR_Integer) 0);
    MR_Word VarY_10;
    MR_Word KindY_11;

    if (succeeded)
    {
      VarY_10 = ((MR_Word) ((MR_hl_field(0, TypeY_7, (MR_Integer) 0))));
      KindY_11 = ((MR_Word) ((MR_hl_field(0, TypeY_7, (MR_Integer) 1))));
      {
        MR_Word next_value_of_tscc_proc_3_input_1_X_7 = VarX_6;
        MR_Word next_value_of_tscc_proc_3_input_2_Y_8 = VarY_10;
        MR_Word next_value_of_tscc_proc_3_input_3_Kind_9 = KindY_11;
        MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
        tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
        tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
        tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
        tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
        goto top_of_proc_3;
      }
    }
    else
    {
      MR_Word BindingOfX_12;
      MR_Box conv0_BindingOfX_12;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_13, ((MR_Box) (VarX_6)), &conv0_BindingOfX_12);
      if (succeeded)
      {
        BindingOfX_12 = ((MR_Word) (conv0_BindingOfX_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
        MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = TypeY_7;
        MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
        tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
        tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
        tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
        goto top_of_proc_1;
      }
      else
      {
        MR_Word TypeInfo_18_18;
        MR_Word TypeCtorInfo_19_19;
        MR_Word TypeInfo_17_17;

        succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(TypeY_7, VarX_6, STATE_VARIABLE_Bindings_0_13);
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
          succeeded = mercury__list__member_2_p_0(TypeInfo_17_17, ((MR_Box) (VarX_6)), HeadTypeParams_8);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
            TypeCtorInfo_19_19 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            mercury__map__det_insert_4_p_0(TypeInfo_18_18, TypeCtorInfo_19_19, ((MR_Box) (VarX_6)), ((MR_Box) (TypeY_7)), STATE_VARIABLE_Bindings_0_13, &STATE_VARIABLE_Bindings_14);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_14;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word X_7 = tscc_proc_3_input_1_X_7;
    MR_Word Y_8 = tscc_proc_3_input_2_Y_8;
    MR_Word Kind_9 = tscc_proc_3_input_3_Kind_9;
    MR_Word HeadTypeParams_10 = tscc_proc_3_input_4_HeadTypeParams_10;
    MR_Word STATE_VARIABLE_Bindings_0_18 = tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
    MR_Word STATE_VARIABLE_Bindings_19;
    MR_bool succeeded = MR_TRUE;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (Y_8)), HeadTypeParams_10);
    if (succeeded)
      succeeded = parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(X_7, Y_8, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
    else
    {
      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_7)), HeadTypeParams_10);
      if (succeeded)
        succeeded = parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(Y_8, X_7, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
      else
      {
        MR_Word BindingOfX_12;
        MR_Box conv1_BindingOfX_12;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (X_7)), &conv1_BindingOfX_12);
        if (succeeded)
        {
          BindingOfX_12 = ((MR_Word) (conv1_BindingOfX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word BindingOfY_13;
          MR_Box conv2_BindingOfY_13;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv2_BindingOfY_13);
          if (succeeded)
          {
            BindingOfY_13 = ((MR_Word) (conv2_BindingOfY_13));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
            MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = BindingOfY_13;
            MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_18;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
            tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
            tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
            goto top_of_proc_1;
          }
          else
          {
            MR_Word SubstBindingOfX_14;
            MR_Word TypeInfo_44_44;
            MR_Word Var_42;

            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfX_12, &SubstBindingOfX_14);
            succeeded = ((MR_tag((MR_Word) SubstBindingOfX_14)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_42 = ((MR_Word) ((MR_hl_field(0, SubstBindingOfX_14, (MR_Integer) 0))));
              TypeInfo_44_44 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (Y_8)), ((MR_Box) (Var_42)));
            }
            if (succeeded)
            {
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeInfo_34_34;
              MR_Word TypeCtorInfo_35_35;

              succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(SubstBindingOfX_14, Y_8, STATE_VARIABLE_Bindings_0_18);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
                TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__map__det_insert_4_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, ((MR_Box) (Y_8)), ((MR_Box) (SubstBindingOfX_14)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          MR_Word BindingOfY_27;
          MR_Box conv3_BindingOfY_27;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv3_BindingOfY_27);
          if (succeeded)
          {
            BindingOfY_27 = ((MR_Word) (conv3_BindingOfY_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word SubstBindingOfY_16;
            MR_Word TypeInfo_45_45;
            MR_Word Var_43;

            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfY_27, &SubstBindingOfY_16);
            succeeded = ((MR_tag((MR_Word) SubstBindingOfY_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_43 = ((MR_Word) ((MR_hl_field(0, SubstBindingOfY_16, (MR_Integer) 0))));
              TypeInfo_45_45 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (X_7)), ((MR_Box) (Var_43)));
            }
            if (succeeded)
            {
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeInfo_38_38;
              MR_Word TypeCtorInfo_39_39;

              succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(SubstBindingOfY_16, X_7, STATE_VARIABLE_Bindings_0_18);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeInfo_38_38 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
                TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__map__det_insert_4_p_0(TypeInfo_38_38, TypeCtorInfo_39_39, ((MR_Box) (X_7)), ((MR_Box) (SubstBindingOfY_16)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_8)));
            if (succeeded)
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
            else
            {
              MR_Word Var_25;

              {
                Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_25, 0) = ((MR_Box) (Y_8));
                MR_hl_field(0, Var_25, 1) = ((MR_Box) (Kind_9));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (X_7)), ((MR_Box) (Var_25)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_19;
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word TypeY_7 = tscc_proc_4_input_1_TypeY_7;
    MR_Word VarX_8 = tscc_proc_4_input_2_VarX_8;
    MR_Word ArgTypesX0_9 = tscc_proc_4_input_3_ArgTypesX0_9;
    MR_Word HeadTypeParams_10 = tscc_proc_4_input_4_HeadTypeParams_10;
    MR_Word STATE_VARIABLE_Bindings_0_34 = tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
    MR_Word STATE_VARIABLE_Bindings_35;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) TypeY_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word NameY_12 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 0))));
          MR_Word ArgTypesY0_13 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 1))));
          MR_Word KindY0_14 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 2))));
          MR_Word ArgTypesY_15;
          MR_Word KindY_16;
          MR_Word STATE_VARIABLE_Bindings_36_36;
          MR_Word Var_37;
          MR_Word RevArgTypesX_77;
          MR_Word RevArgTypesY0_78;
          MR_Word RevArgTypesY_79;
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

          mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_77);
          mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_13, &RevArgTypesY0_78);
          succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_77, RevArgTypesY0_78, &RevArgTypesY_79, KindY0_14, &KindY_16, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_36_36);
          if (succeeded)
          {
            mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_79, &ArgTypesY_15);
            {
              Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_37, 0) = ((MR_Box) (NameY_12));
              MR_hl_field(1, Var_37, 1) = ((MR_Box) (ArgTypesY_15));
              MR_hl_field(1, Var_37, 2) = ((MR_Box) (KindY_16));
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
            next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_37;
            next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_36_36;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

          succeeded = (ArgTypesX0_9 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
            next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
            next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeY_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_Bindings_41_41;
              MR_Word Var_42;
              MR_Word ArgTypesY0_53 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word KindY0_54 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 2))));
              MR_Word ArgTypesY_55;
              MR_Word KindY_56;
              MR_Word RevArgTypesX_81;
              MR_Word RevArgTypesY0_82;
              MR_Word RevArgTypesY_83;
              MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
              MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
              MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

              mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_81);
              mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_53, &RevArgTypesY0_82);
              succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_81, RevArgTypesY0_82, &RevArgTypesY_83, KindY0_54, &KindY_56, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_41_41);
              if (succeeded)
              {
                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_83, &ArgTypesY_55);
                {
                  Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_42, 1) = ((MR_Box) (ArgTypesY_55));
                  MR_hl_field(3, Var_42, 2) = ((MR_Box) (KindY_56));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_42;
                next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_41_41;
                tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
              MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
              MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

              succeeded = (ArgTypesX0_9 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
                next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
                tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word VarY_23 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word Kind0_24 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 3))));
              MR_Integer NArgTypesX0_25;
              MR_Integer NArgTypesY0_26;
              MR_Word ArgTypesY0_61 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 2))));

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &NArgTypesX0_25);
              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &NArgTypesY0_26);
              succeeded = (NArgTypesX0_25 < NArgTypesY0_26);
              if (succeeded)
              {
                MR_Word Kind_28;
                MR_Word STATE_VARIABLE_Bindings_44_44;
                MR_Word Var_45;
                MR_Word ArgTypesY_57;
                MR_Word RevArgTypesX_65;
                MR_Word RevArgTypesY0_66;
                MR_Word RevArgTypesY_67;
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_65);
                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesY0_66);
                succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_65, RevArgTypesY0_66, &RevArgTypesY_67, Kind0_24, &Kind_28, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_44_44);
                if (succeeded)
                {
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_67, &ArgTypesY_57);
                  {
                    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_45, 1) = ((MR_Box) (VarY_23));
                    MR_hl_field(3, Var_45, 2) = ((MR_Box) (ArgTypesY_57));
                    MR_hl_field(3, Var_45, 3) = ((MR_Box) (Kind_28));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_45;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_44_44;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              else
              {
                succeeded = (NArgTypesX0_25 > NArgTypesY0_26);
                if (succeeded)
                {
                  MR_Word ArgTypesX_30;
                  MR_Word STATE_VARIABLE_Bindings_49_49;
                  MR_Word Var_50;
                  MR_Word Kind_59;
                  MR_Word RevArgTypesX_73;
                  MR_Word RevArgTypesY0_74;
                  MR_Word RevArgTypesY_75;
                  MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesX_73);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesY0_74);
                  succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_73, RevArgTypesY0_74, &RevArgTypesY_75, Kind0_24, &Kind_59, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_49_49);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_75, &ArgTypesX_30);
                    {
                      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, Var_50, 1) = ((MR_Box) (VarX_8));
                      MR_hl_field(3, Var_50, 2) = ((MR_Box) (ArgTypesX_30));
                      MR_hl_field(3, Var_50, 3) = ((MR_Box) (Kind_59));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_23;
                    next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_50;
                    next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                    next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_49_49;
                    tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                    tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                    tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                    goto top_of_proc_2;
                  }
                }
                else
                {
                  MR_Word STATE_VARIABLE_Bindings_47_47;
                  MR_Word Kind_58;
                  MR_Word RevArgTypesX_69;
                  MR_Word RevArgTypesY0_70;
                  MR_Word RevArgTypesY_71;
                  MR_Word Var_29;
                  MR_Word next_value_of_tscc_proc_3_input_1_X_7;
                  MR_Word next_value_of_tscc_proc_3_input_2_Y_8;
                  MR_Word next_value_of_tscc_proc_3_input_3_Kind_9;
                  MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                  MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_69);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesY0_70);
                  succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_69, RevArgTypesY0_70, &RevArgTypesY_71, Kind0_24, &Kind_58, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_47_47);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_71, &Var_29);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_3_input_1_X_7 = VarX_8;
                    next_value_of_tscc_proc_3_input_2_Y_8 = VarY_23;
                    next_value_of_tscc_proc_3_input_3_Kind_9 = Kind_58;
                    next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                    next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_47_47;
                    tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
                    tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
                    tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
                    tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                    tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
                    goto top_of_proc_3;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word RawY_31 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = RawY_31;
              MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_8;
              MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesX0_9;
              MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_10;
              MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_34;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
              tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
              tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
              tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
              tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
              goto top_of_proc_4;
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_35;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Bindings_15 = tscc_output_1_STATE_VARIABLE_Bindings_15;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_var_var_6_p_0(
  MR_Word tscc_proc_3_input_1_X_7,
  MR_Word tscc_proc_3_input_2_Y_8,
  MR_Word tscc_proc_3_input_3_Kind_9,
  MR_Word tscc_proc_3_input_4_HeadTypeParams_10,
  MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15)
{
  MR_Word tscc_proc_1_input_1_X_6;
  MR_Word tscc_proc_1_input_2_Y_7;
  MR_Word tscc_proc_1_input_3_HeadTypeParams_8;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
  MR_Word tscc_proc_2_input_1_VarX_6;
  MR_Word tscc_proc_2_input_2_TypeY_7;
  MR_Word tscc_proc_2_input_3_HeadTypeParams_8;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
  MR_Word tscc_proc_4_input_1_TypeY_7;
  MR_Word tscc_proc_4_input_2_VarX_8;
  MR_Word tscc_proc_4_input_3_ArgTypesX0_9;
  MR_Word tscc_proc_4_input_4_HeadTypeParams_10;
  MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Bindings_15;

  // The code for TSCC PROC 3: pred parse_tree.prog_type_unify.type_unify_var_var/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.prog_type_unify.type_unify/5-0
  ;
  // proc 2 in TSCC: pred parse_tree.prog_type_unify.type_unify_var/5-0
  ;
  // proc 3 in TSCC: pred parse_tree.prog_type_unify.type_unify_var_var/6-0
  ;
  // proc 4 in TSCC: pred parse_tree.prog_type_unify.type_unify_apply/6-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word X_6 = tscc_proc_1_input_1_X_6;
    MR_Word Y_7 = tscc_proc_1_input_2_Y_7;
    MR_Word HeadTypeParams_8 = tscc_proc_1_input_3_HeadTypeParams_8;
    MR_Word STATE_VARIABLE_Bindings_0_14 = tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
    MR_Word STATE_VARIABLE_Bindings_15;
    MR_bool succeeded = ((MR_tag((MR_Word) X_6)) == (MR_Integer) 0);
    MR_Word VarX_10;

    if (succeeded)
    {
      VarX_10 = ((MR_Word) ((MR_hl_field(0, X_6, (MR_Integer) 0))));
      {
        MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_10;
        MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = Y_7;
        MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
        tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
        tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
        tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
        goto top_of_proc_2;
      }
    }
    else
    {
      MR_Word VarY_12;

      succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        VarY_12 = ((MR_Word) ((MR_hl_field(0, Y_7, (MR_Integer) 0))));
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_12;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = X_6;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
          tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
          tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
          goto top_of_proc_2;
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_Bindings_18_18;

        switch (MR_tag((MR_Word) X_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(1, X_6, (MR_Integer) 0))));
              MR_Word ArgTypesX_20 = ((MR_Word) ((MR_hl_field(1, X_6, (MR_Integer) 1))));
              MR_Word ArgTypesY_22;
              MR_Word Var_36;

              succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(1, Y_7, (MR_Integer) 0))));
                ArgTypesY_22 = ((MR_Word) ((MR_hl_field(1, Y_7, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_19, Var_36);
                if (succeeded)
                  succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_20, ArgTypesY_22, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinType_24 = ((MR_Word) ((MR_hl_field(2, X_6, (MR_Integer) 0))));
              MR_Word Var_37;

              succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_37 = ((MR_Word) ((MR_hl_field(2, Y_7, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_24, Var_37);
                if (succeeded)
                {
                  STATE_VARIABLE_Bindings_18_18 = STATE_VARIABLE_Bindings_0_14;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word ArgTypesX_34 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
                  MR_Word ArgTypesY_35;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgTypesY_35 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_34, ArgTypesY_35, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PorF_25 = ((MR_Unsigned) ((MR_hl_field(3, X_6, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(3, X_6, (MR_Integer) 4))) & (MR_Integer) 3);
                  MR_Word ArgTypesX_32 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 2))));
                  MR_Word ArgTypesY_33;
                  MR_Word Var_38;
                  MR_Word Var_39;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_38 = ((MR_Unsigned) ((MR_hl_field(3, Y_7, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgTypesY_33 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 2))));
                    Var_39 = ((MR_Unsigned) ((MR_hl_field(3, Y_7, (MR_Integer) 4))) & (MR_Integer) 3);
                    succeeded = (PorF_25 == Var_38);
                    if (succeeded)
                    {
                      succeeded = (Purity_27 == Var_39);
                      if (succeeded)
                      {
                        succeeded = MR_TRUE;
                        if (succeeded)
                          succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_32, ArgTypesY_33, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                      }
                    }
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_18_18;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word VarX_43;
          MR_Word ArgTypesX_44;

          succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            VarX_43 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
            ArgTypesX_44 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 2))));
            {
              MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = Y_7;
              MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_43;
              MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesX_44;
              MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
              tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
              tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
              tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
              tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
              goto top_of_proc_4;
            }
          }
          else
          {
            MR_Word VarY_46;
            MR_Word ArgTypesY_47;

            succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarY_46 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
              ArgTypesY_47 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 2))));
              {
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = X_6;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarY_46;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesY_47;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
            }
            else
            {
              MR_Word RawX_49;

              succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                RawX_49 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
                {
                  MR_Word RawY_51;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    RawY_51 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = RawY_51;
                      MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                      tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                      tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                      goto top_of_proc_1;
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_49;
                    MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = Y_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                    tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                    tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                    goto top_of_proc_1;
                  }
                }
              }
              else
              {
                MR_Word RawY_54;
                MR_Word next_value_of_tscc_proc_1_input_1_X_6;
                MR_Word next_value_of_tscc_proc_1_input_2_Y_7;
                MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;

                succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  RawY_54 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_X_6 = X_6;
                  next_value_of_tscc_proc_1_input_2_Y_7 = RawY_54;
                  next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                  next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;
                  tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                  tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                  tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                  tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                  goto top_of_proc_1;
                }
              }
            }
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_15;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word VarX_6 = tscc_proc_2_input_1_VarX_6;
    MR_Word TypeY_7 = tscc_proc_2_input_2_TypeY_7;
    MR_Word HeadTypeParams_8 = tscc_proc_2_input_3_HeadTypeParams_8;
    MR_Word STATE_VARIABLE_Bindings_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
    MR_Word STATE_VARIABLE_Bindings_14;
    MR_bool succeeded = ((MR_tag((MR_Word) TypeY_7)) == (MR_Integer) 0);
    MR_Word VarY_10;
    MR_Word KindY_11;

    if (succeeded)
    {
      VarY_10 = ((MR_Word) ((MR_hl_field(0, TypeY_7, (MR_Integer) 0))));
      KindY_11 = ((MR_Word) ((MR_hl_field(0, TypeY_7, (MR_Integer) 1))));
      {
        MR_Word next_value_of_tscc_proc_3_input_1_X_7 = VarX_6;
        MR_Word next_value_of_tscc_proc_3_input_2_Y_8 = VarY_10;
        MR_Word next_value_of_tscc_proc_3_input_3_Kind_9 = KindY_11;
        MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
        tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
        tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
        tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
        tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
        goto top_of_proc_3;
      }
    }
    else
    {
      MR_Word BindingOfX_12;
      MR_Box conv0_BindingOfX_12;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_13, ((MR_Box) (VarX_6)), &conv0_BindingOfX_12);
      if (succeeded)
      {
        BindingOfX_12 = ((MR_Word) (conv0_BindingOfX_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
        MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = TypeY_7;
        MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
        tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
        tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
        tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
        goto top_of_proc_1;
      }
      else
      {
        MR_Word TypeInfo_18_18;
        MR_Word TypeCtorInfo_19_19;
        MR_Word TypeInfo_17_17;

        succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(TypeY_7, VarX_6, STATE_VARIABLE_Bindings_0_13);
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
          succeeded = mercury__list__member_2_p_0(TypeInfo_17_17, ((MR_Box) (VarX_6)), HeadTypeParams_8);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
            TypeCtorInfo_19_19 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            mercury__map__det_insert_4_p_0(TypeInfo_18_18, TypeCtorInfo_19_19, ((MR_Box) (VarX_6)), ((MR_Box) (TypeY_7)), STATE_VARIABLE_Bindings_0_13, &STATE_VARIABLE_Bindings_14);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_14;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word X_7 = tscc_proc_3_input_1_X_7;
    MR_Word Y_8 = tscc_proc_3_input_2_Y_8;
    MR_Word Kind_9 = tscc_proc_3_input_3_Kind_9;
    MR_Word HeadTypeParams_10 = tscc_proc_3_input_4_HeadTypeParams_10;
    MR_Word STATE_VARIABLE_Bindings_0_18 = tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
    MR_Word STATE_VARIABLE_Bindings_19;
    MR_bool succeeded = MR_TRUE;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (Y_8)), HeadTypeParams_10);
    if (succeeded)
      succeeded = parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(X_7, Y_8, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
    else
    {
      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_7)), HeadTypeParams_10);
      if (succeeded)
        succeeded = parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(Y_8, X_7, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
      else
      {
        MR_Word BindingOfX_12;
        MR_Box conv1_BindingOfX_12;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (X_7)), &conv1_BindingOfX_12);
        if (succeeded)
        {
          BindingOfX_12 = ((MR_Word) (conv1_BindingOfX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word BindingOfY_13;
          MR_Box conv2_BindingOfY_13;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv2_BindingOfY_13);
          if (succeeded)
          {
            BindingOfY_13 = ((MR_Word) (conv2_BindingOfY_13));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
            MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = BindingOfY_13;
            MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_18;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
            tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
            tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
            goto top_of_proc_1;
          }
          else
          {
            MR_Word SubstBindingOfX_14;
            MR_Word TypeInfo_44_44;
            MR_Word Var_42;

            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfX_12, &SubstBindingOfX_14);
            succeeded = ((MR_tag((MR_Word) SubstBindingOfX_14)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_42 = ((MR_Word) ((MR_hl_field(0, SubstBindingOfX_14, (MR_Integer) 0))));
              TypeInfo_44_44 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (Y_8)), ((MR_Box) (Var_42)));
            }
            if (succeeded)
            {
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeInfo_34_34;
              MR_Word TypeCtorInfo_35_35;

              succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(SubstBindingOfX_14, Y_8, STATE_VARIABLE_Bindings_0_18);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
                TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__map__det_insert_4_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, ((MR_Box) (Y_8)), ((MR_Box) (SubstBindingOfX_14)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          MR_Word BindingOfY_27;
          MR_Box conv3_BindingOfY_27;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv3_BindingOfY_27);
          if (succeeded)
          {
            BindingOfY_27 = ((MR_Word) (conv3_BindingOfY_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word SubstBindingOfY_16;
            MR_Word TypeInfo_45_45;
            MR_Word Var_43;

            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfY_27, &SubstBindingOfY_16);
            succeeded = ((MR_tag((MR_Word) SubstBindingOfY_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_43 = ((MR_Word) ((MR_hl_field(0, SubstBindingOfY_16, (MR_Integer) 0))));
              TypeInfo_45_45 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (X_7)), ((MR_Box) (Var_43)));
            }
            if (succeeded)
            {
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeInfo_38_38;
              MR_Word TypeCtorInfo_39_39;

              succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(SubstBindingOfY_16, X_7, STATE_VARIABLE_Bindings_0_18);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeInfo_38_38 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
                TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__map__det_insert_4_p_0(TypeInfo_38_38, TypeCtorInfo_39_39, ((MR_Box) (X_7)), ((MR_Box) (SubstBindingOfY_16)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_8)));
            if (succeeded)
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
            else
            {
              MR_Word Var_25;

              {
                Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_25, 0) = ((MR_Box) (Y_8));
                MR_hl_field(0, Var_25, 1) = ((MR_Box) (Kind_9));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (X_7)), ((MR_Box) (Var_25)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_19;
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word TypeY_7 = tscc_proc_4_input_1_TypeY_7;
    MR_Word VarX_8 = tscc_proc_4_input_2_VarX_8;
    MR_Word ArgTypesX0_9 = tscc_proc_4_input_3_ArgTypesX0_9;
    MR_Word HeadTypeParams_10 = tscc_proc_4_input_4_HeadTypeParams_10;
    MR_Word STATE_VARIABLE_Bindings_0_34 = tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
    MR_Word STATE_VARIABLE_Bindings_35;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) TypeY_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word NameY_12 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 0))));
          MR_Word ArgTypesY0_13 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 1))));
          MR_Word KindY0_14 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 2))));
          MR_Word ArgTypesY_15;
          MR_Word KindY_16;
          MR_Word STATE_VARIABLE_Bindings_36_36;
          MR_Word Var_37;
          MR_Word RevArgTypesX_77;
          MR_Word RevArgTypesY0_78;
          MR_Word RevArgTypesY_79;
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

          mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_77);
          mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_13, &RevArgTypesY0_78);
          succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_77, RevArgTypesY0_78, &RevArgTypesY_79, KindY0_14, &KindY_16, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_36_36);
          if (succeeded)
          {
            mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_79, &ArgTypesY_15);
            {
              Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_37, 0) = ((MR_Box) (NameY_12));
              MR_hl_field(1, Var_37, 1) = ((MR_Box) (ArgTypesY_15));
              MR_hl_field(1, Var_37, 2) = ((MR_Box) (KindY_16));
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
            next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_37;
            next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_36_36;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

          succeeded = (ArgTypesX0_9 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
            next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
            next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeY_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_Bindings_41_41;
              MR_Word Var_42;
              MR_Word ArgTypesY0_53 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word KindY0_54 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 2))));
              MR_Word ArgTypesY_55;
              MR_Word KindY_56;
              MR_Word RevArgTypesX_81;
              MR_Word RevArgTypesY0_82;
              MR_Word RevArgTypesY_83;
              MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
              MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
              MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

              mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_81);
              mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_53, &RevArgTypesY0_82);
              succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_81, RevArgTypesY0_82, &RevArgTypesY_83, KindY0_54, &KindY_56, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_41_41);
              if (succeeded)
              {
                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_83, &ArgTypesY_55);
                {
                  Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_42, 1) = ((MR_Box) (ArgTypesY_55));
                  MR_hl_field(3, Var_42, 2) = ((MR_Box) (KindY_56));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_42;
                next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_41_41;
                tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
              MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
              MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

              succeeded = (ArgTypesX0_9 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
                next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
                tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word VarY_23 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word Kind0_24 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 3))));
              MR_Integer NArgTypesX0_25;
              MR_Integer NArgTypesY0_26;
              MR_Word ArgTypesY0_61 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 2))));

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &NArgTypesX0_25);
              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &NArgTypesY0_26);
              succeeded = (NArgTypesX0_25 < NArgTypesY0_26);
              if (succeeded)
              {
                MR_Word Kind_28;
                MR_Word STATE_VARIABLE_Bindings_44_44;
                MR_Word Var_45;
                MR_Word ArgTypesY_57;
                MR_Word RevArgTypesX_65;
                MR_Word RevArgTypesY0_66;
                MR_Word RevArgTypesY_67;
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_65);
                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesY0_66);
                succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_65, RevArgTypesY0_66, &RevArgTypesY_67, Kind0_24, &Kind_28, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_44_44);
                if (succeeded)
                {
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_67, &ArgTypesY_57);
                  {
                    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_45, 1) = ((MR_Box) (VarY_23));
                    MR_hl_field(3, Var_45, 2) = ((MR_Box) (ArgTypesY_57));
                    MR_hl_field(3, Var_45, 3) = ((MR_Box) (Kind_28));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_45;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_44_44;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              else
              {
                succeeded = (NArgTypesX0_25 > NArgTypesY0_26);
                if (succeeded)
                {
                  MR_Word ArgTypesX_30;
                  MR_Word STATE_VARIABLE_Bindings_49_49;
                  MR_Word Var_50;
                  MR_Word Kind_59;
                  MR_Word RevArgTypesX_73;
                  MR_Word RevArgTypesY0_74;
                  MR_Word RevArgTypesY_75;
                  MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesX_73);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesY0_74);
                  succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_73, RevArgTypesY0_74, &RevArgTypesY_75, Kind0_24, &Kind_59, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_49_49);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_75, &ArgTypesX_30);
                    {
                      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, Var_50, 1) = ((MR_Box) (VarX_8));
                      MR_hl_field(3, Var_50, 2) = ((MR_Box) (ArgTypesX_30));
                      MR_hl_field(3, Var_50, 3) = ((MR_Box) (Kind_59));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_23;
                    next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_50;
                    next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                    next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_49_49;
                    tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                    tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                    tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                    goto top_of_proc_2;
                  }
                }
                else
                {
                  MR_Word STATE_VARIABLE_Bindings_47_47;
                  MR_Word Kind_58;
                  MR_Word RevArgTypesX_69;
                  MR_Word RevArgTypesY0_70;
                  MR_Word RevArgTypesY_71;
                  MR_Word Var_29;
                  MR_Word next_value_of_tscc_proc_3_input_1_X_7;
                  MR_Word next_value_of_tscc_proc_3_input_2_Y_8;
                  MR_Word next_value_of_tscc_proc_3_input_3_Kind_9;
                  MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                  MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_69);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesY0_70);
                  succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_69, RevArgTypesY0_70, &RevArgTypesY_71, Kind0_24, &Kind_58, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_47_47);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_71, &Var_29);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_3_input_1_X_7 = VarX_8;
                    next_value_of_tscc_proc_3_input_2_Y_8 = VarY_23;
                    next_value_of_tscc_proc_3_input_3_Kind_9 = Kind_58;
                    next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                    next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_47_47;
                    tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
                    tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
                    tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
                    tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                    tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
                    goto top_of_proc_3;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word RawY_31 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = RawY_31;
              MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_8;
              MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesX0_9;
              MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_10;
              MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_34;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
              tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
              tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
              tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
              tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
              goto top_of_proc_4;
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_35;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Bindings_15 = tscc_output_1_STATE_VARIABLE_Bindings_15;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_apply_6_p_0(
  MR_Word tscc_proc_4_input_1_TypeY_7,
  MR_Word tscc_proc_4_input_2_VarX_8,
  MR_Word tscc_proc_4_input_3_ArgTypesX0_9,
  MR_Word tscc_proc_4_input_4_HeadTypeParams_10,
  MR_Word tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Bindings_15)
{
  MR_Word tscc_proc_1_input_1_X_6;
  MR_Word tscc_proc_1_input_2_Y_7;
  MR_Word tscc_proc_1_input_3_HeadTypeParams_8;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
  MR_Word tscc_proc_2_input_1_VarX_6;
  MR_Word tscc_proc_2_input_2_TypeY_7;
  MR_Word tscc_proc_2_input_3_HeadTypeParams_8;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
  MR_Word tscc_proc_3_input_1_X_7;
  MR_Word tscc_proc_3_input_2_Y_8;
  MR_Word tscc_proc_3_input_3_Kind_9;
  MR_Word tscc_proc_3_input_4_HeadTypeParams_10;
  MR_Word tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
  MR_bool tscc_output_succeeded;
  MR_Word tscc_output_1_STATE_VARIABLE_Bindings_15;

  // The code for TSCC PROC 4: pred parse_tree.prog_type_unify.type_unify_apply/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.prog_type_unify.type_unify/5-0
  ;
  // proc 2 in TSCC: pred parse_tree.prog_type_unify.type_unify_var/5-0
  ;
  // proc 3 in TSCC: pred parse_tree.prog_type_unify.type_unify_var_var/6-0
  ;
  // proc 4 in TSCC: pred parse_tree.prog_type_unify.type_unify_apply/6-0
  ;
  ;
  goto top_of_proc_4;
top_of_proc_1:;
  {
    MR_Word X_6 = tscc_proc_1_input_1_X_6;
    MR_Word Y_7 = tscc_proc_1_input_2_Y_7;
    MR_Word HeadTypeParams_8 = tscc_proc_1_input_3_HeadTypeParams_8;
    MR_Word STATE_VARIABLE_Bindings_0_14 = tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
    MR_Word STATE_VARIABLE_Bindings_15;
    MR_bool succeeded = ((MR_tag((MR_Word) X_6)) == (MR_Integer) 0);
    MR_Word VarX_10;

    if (succeeded)
    {
      VarX_10 = ((MR_Word) ((MR_hl_field(0, X_6, (MR_Integer) 0))));
      {
        MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_10;
        MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = Y_7;
        MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
        tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
        tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
        tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
        goto top_of_proc_2;
      }
    }
    else
    {
      MR_Word VarY_12;

      succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        VarY_12 = ((MR_Word) ((MR_hl_field(0, Y_7, (MR_Integer) 0))));
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_12;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7 = X_6;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_14;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
          tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
          tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
          goto top_of_proc_2;
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_Bindings_18_18;

        switch (MR_tag((MR_Word) X_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(1, X_6, (MR_Integer) 0))));
              MR_Word ArgTypesX_20 = ((MR_Word) ((MR_hl_field(1, X_6, (MR_Integer) 1))));
              MR_Word ArgTypesY_22;
              MR_Word Var_36;

              succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(1, Y_7, (MR_Integer) 0))));
                ArgTypesY_22 = ((MR_Word) ((MR_hl_field(1, Y_7, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_19, Var_36);
                if (succeeded)
                  succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_20, ArgTypesY_22, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinType_24 = ((MR_Word) ((MR_hl_field(2, X_6, (MR_Integer) 0))));
              MR_Word Var_37;

              succeeded = ((MR_tag((MR_Word) Y_7)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_37 = ((MR_Word) ((MR_hl_field(2, Y_7, (MR_Integer) 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_24, Var_37);
                if (succeeded)
                {
                  STATE_VARIABLE_Bindings_18_18 = STATE_VARIABLE_Bindings_0_14;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word ArgTypesX_34 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
                  MR_Word ArgTypesY_35;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgTypesY_35 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_34, ArgTypesY_35, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PorF_25 = ((MR_Unsigned) ((MR_hl_field(3, X_6, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word Purity_27 = ((MR_Unsigned) ((MR_hl_field(3, X_6, (MR_Integer) 4))) & (MR_Integer) 3);
                  MR_Word ArgTypesX_32 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 2))));
                  MR_Word ArgTypesY_33;
                  MR_Word Var_38;
                  MR_Word Var_39;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_38 = ((MR_Unsigned) ((MR_hl_field(3, Y_7, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgTypesY_33 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 2))));
                    Var_39 = ((MR_Unsigned) ((MR_hl_field(3, Y_7, (MR_Integer) 4))) & (MR_Integer) 3);
                    succeeded = (PorF_25 == Var_38);
                    if (succeeded)
                    {
                      succeeded = (Purity_27 == Var_39);
                      if (succeeded)
                      {
                        succeeded = MR_TRUE;
                        if (succeeded)
                          succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(ArgTypesX_32, ArgTypesY_33, HeadTypeParams_8, STATE_VARIABLE_Bindings_0_14, &STATE_VARIABLE_Bindings_18_18);
                      }
                    }
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_18_18;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word VarX_43;
          MR_Word ArgTypesX_44;

          succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            VarX_43 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
            ArgTypesX_44 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 2))));
            {
              MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = Y_7;
              MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_43;
              MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesX_44;
              MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
              tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
              tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
              tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
              tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
              goto top_of_proc_4;
            }
          }
          else
          {
            MR_Word VarY_46;
            MR_Word ArgTypesY_47;

            succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              VarY_46 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
              ArgTypesY_47 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 2))));
              {
                MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = X_6;
                MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarY_46;
                MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesY_47;
                MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_14;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
                tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
                tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
                tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
                tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
                goto top_of_proc_4;
              }
            }
            else
            {
              MR_Word RawX_49;

              succeeded = ((((MR_tag((MR_Word) X_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, X_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                RawX_49 = ((MR_Word) ((MR_hl_field(3, X_6, (MR_Integer) 1))));
                {
                  MR_Word RawY_51;

                  succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    RawY_51 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = RawY_51;
                      MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                      tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                      tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                      goto top_of_proc_1;
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_X_6 = RawX_49;
                    MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = Y_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                    tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                    tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                    goto top_of_proc_1;
                  }
                }
              }
              else
              {
                MR_Word RawY_54;
                MR_Word next_value_of_tscc_proc_1_input_1_X_6;
                MR_Word next_value_of_tscc_proc_1_input_2_Y_7;
                MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;

                succeeded = ((((MR_tag((MR_Word) Y_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  RawY_54 = ((MR_Word) ((MR_hl_field(3, Y_7, (MR_Integer) 1))));
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_X_6 = X_6;
                  next_value_of_tscc_proc_1_input_2_Y_7 = RawY_54;
                  next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
                  next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_14;
                  tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
                  tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
                  tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
                  tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
                  goto top_of_proc_1;
                }
              }
            }
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_15;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word VarX_6 = tscc_proc_2_input_1_VarX_6;
    MR_Word TypeY_7 = tscc_proc_2_input_2_TypeY_7;
    MR_Word HeadTypeParams_8 = tscc_proc_2_input_3_HeadTypeParams_8;
    MR_Word STATE_VARIABLE_Bindings_0_13 = tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
    MR_Word STATE_VARIABLE_Bindings_14;
    MR_bool succeeded = ((MR_tag((MR_Word) TypeY_7)) == (MR_Integer) 0);
    MR_Word VarY_10;
    MR_Word KindY_11;

    if (succeeded)
    {
      VarY_10 = ((MR_Word) ((MR_hl_field(0, TypeY_7, (MR_Integer) 0))));
      KindY_11 = ((MR_Word) ((MR_hl_field(0, TypeY_7, (MR_Integer) 1))));
      {
        MR_Word next_value_of_tscc_proc_3_input_1_X_7 = VarX_6;
        MR_Word next_value_of_tscc_proc_3_input_2_Y_8 = VarY_10;
        MR_Word next_value_of_tscc_proc_3_input_3_Kind_9 = KindY_11;
        MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
        tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
        tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
        tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
        tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
        goto top_of_proc_3;
      }
    }
    else
    {
      MR_Word BindingOfX_12;
      MR_Box conv0_BindingOfX_12;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_13, ((MR_Box) (VarX_6)), &conv0_BindingOfX_12);
      if (succeeded)
      {
        BindingOfX_12 = ((MR_Word) (conv0_BindingOfX_12));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
        MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = TypeY_7;
        MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_8;
        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
        tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
        tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
        tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
        goto top_of_proc_1;
      }
      else
      {
        MR_Word TypeInfo_18_18;
        MR_Word TypeCtorInfo_19_19;
        MR_Word TypeInfo_17_17;

        succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(TypeY_7, VarX_6, STATE_VARIABLE_Bindings_0_13);
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
          succeeded = mercury__list__member_2_p_0(TypeInfo_17_17, ((MR_Box) (VarX_6)), HeadTypeParams_8);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
            TypeCtorInfo_19_19 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            mercury__map__det_insert_4_p_0(TypeInfo_18_18, TypeCtorInfo_19_19, ((MR_Box) (VarX_6)), ((MR_Box) (TypeY_7)), STATE_VARIABLE_Bindings_0_13, &STATE_VARIABLE_Bindings_14);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_14;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word X_7 = tscc_proc_3_input_1_X_7;
    MR_Word Y_8 = tscc_proc_3_input_2_Y_8;
    MR_Word Kind_9 = tscc_proc_3_input_3_Kind_9;
    MR_Word HeadTypeParams_10 = tscc_proc_3_input_4_HeadTypeParams_10;
    MR_Word STATE_VARIABLE_Bindings_0_18 = tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
    MR_Word STATE_VARIABLE_Bindings_19;
    MR_bool succeeded = MR_TRUE;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (Y_8)), HeadTypeParams_10);
    if (succeeded)
      succeeded = parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(X_7, Y_8, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
    else
    {
      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_7)), HeadTypeParams_10);
      if (succeeded)
        succeeded = parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(Y_8, X_7, Kind_9, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
      else
      {
        MR_Word BindingOfX_12;
        MR_Box conv1_BindingOfX_12;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (X_7)), &conv1_BindingOfX_12);
        if (succeeded)
        {
          BindingOfX_12 = ((MR_Word) (conv1_BindingOfX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word BindingOfY_13;
          MR_Box conv2_BindingOfY_13;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv2_BindingOfY_13);
          if (succeeded)
          {
            BindingOfY_13 = ((MR_Word) (conv2_BindingOfY_13));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_X_6 = BindingOfX_12;
            MR_Word next_value_of_tscc_proc_1_input_2_Y_7 = BindingOfY_13;
            MR_Word next_value_of_tscc_proc_1_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = STATE_VARIABLE_Bindings_0_18;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_X_6 = next_value_of_tscc_proc_1_input_1_X_6;
            tscc_proc_1_input_2_Y_7 = next_value_of_tscc_proc_1_input_2_Y_7;
            tscc_proc_1_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_1_input_3_HeadTypeParams_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Bindings_0_14;
            goto top_of_proc_1;
          }
          else
          {
            MR_Word SubstBindingOfX_14;
            MR_Word TypeInfo_44_44;
            MR_Word Var_42;

            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfX_12, &SubstBindingOfX_14);
            succeeded = ((MR_tag((MR_Word) SubstBindingOfX_14)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_42 = ((MR_Word) ((MR_hl_field(0, SubstBindingOfX_14, (MR_Integer) 0))));
              TypeInfo_44_44 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (Y_8)), ((MR_Box) (Var_42)));
            }
            if (succeeded)
            {
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeInfo_34_34;
              MR_Word TypeCtorInfo_35_35;

              succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(SubstBindingOfX_14, Y_8, STATE_VARIABLE_Bindings_0_18);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
                TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__map__det_insert_4_p_0(TypeInfo_34_34, TypeCtorInfo_35_35, ((MR_Box) (Y_8)), ((MR_Box) (SubstBindingOfX_14)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          MR_Word BindingOfY_27;
          MR_Box conv3_BindingOfY_27;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_18, ((MR_Box) (Y_8)), &conv3_BindingOfY_27);
          if (succeeded)
          {
            BindingOfY_27 = ((MR_Word) (conv3_BindingOfY_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word SubstBindingOfY_16;
            MR_Word TypeInfo_45_45;
            MR_Word Var_43;

            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(STATE_VARIABLE_Bindings_0_18, BindingOfY_27, &SubstBindingOfY_16);
            succeeded = ((MR_tag((MR_Word) SubstBindingOfY_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_43 = ((MR_Word) ((MR_hl_field(0, SubstBindingOfY_16, (MR_Integer) 0))));
              TypeInfo_45_45 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (X_7)), ((MR_Box) (Var_43)));
            }
            if (succeeded)
            {
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeInfo_38_38;
              MR_Word TypeCtorInfo_39_39;

              succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(SubstBindingOfY_16, X_7, STATE_VARIABLE_Bindings_0_18);
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeInfo_38_38 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
                TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                mercury__map__det_insert_4_p_0(TypeInfo_38_38, TypeCtorInfo_39_39, ((MR_Box) (X_7)), ((MR_Box) (SubstBindingOfY_16)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_8)));
            if (succeeded)
              STATE_VARIABLE_Bindings_19 = STATE_VARIABLE_Bindings_0_18;
            else
            {
              MR_Word Var_25;

              {
                Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_25, 0) = ((MR_Box) (Y_8));
                MR_hl_field(0, Var_25, 1) = ((MR_Box) (Kind_9));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (X_7)), ((MR_Box) (Var_25)), STATE_VARIABLE_Bindings_0_18, &STATE_VARIABLE_Bindings_19);
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_19;
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word TypeY_7 = tscc_proc_4_input_1_TypeY_7;
    MR_Word VarX_8 = tscc_proc_4_input_2_VarX_8;
    MR_Word ArgTypesX0_9 = tscc_proc_4_input_3_ArgTypesX0_9;
    MR_Word HeadTypeParams_10 = tscc_proc_4_input_4_HeadTypeParams_10;
    MR_Word STATE_VARIABLE_Bindings_0_34 = tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
    MR_Word STATE_VARIABLE_Bindings_35;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) TypeY_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word NameY_12 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 0))));
          MR_Word ArgTypesY0_13 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 1))));
          MR_Word KindY0_14 = ((MR_Word) ((MR_hl_field(1, TypeY_7, (MR_Integer) 2))));
          MR_Word ArgTypesY_15;
          MR_Word KindY_16;
          MR_Word STATE_VARIABLE_Bindings_36_36;
          MR_Word Var_37;
          MR_Word RevArgTypesX_77;
          MR_Word RevArgTypesY0_78;
          MR_Word RevArgTypesY_79;
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

          mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_77);
          mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_13, &RevArgTypesY0_78);
          succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_77, RevArgTypesY0_78, &RevArgTypesY_79, KindY0_14, &KindY_16, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_36_36);
          if (succeeded)
          {
            mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_79, &ArgTypesY_15);
            {
              Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_37, 0) = ((MR_Box) (NameY_12));
              MR_hl_field(1, Var_37, 1) = ((MR_Box) (ArgTypesY_15));
              MR_hl_field(1, Var_37, 2) = ((MR_Box) (KindY_16));
            }
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
            next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_37;
            next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_36_36;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
          MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

          succeeded = (ArgTypesX0_9 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
            next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
            next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
            next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
            tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
            tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
            tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
            tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeY_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_Bindings_41_41;
              MR_Word Var_42;
              MR_Word ArgTypesY0_53 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word KindY0_54 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 2))));
              MR_Word ArgTypesY_55;
              MR_Word KindY_56;
              MR_Word RevArgTypesX_81;
              MR_Word RevArgTypesY0_82;
              MR_Word RevArgTypesY_83;
              MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
              MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
              MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

              mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_81);
              mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_53, &RevArgTypesY0_82);
              succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_81, RevArgTypesY0_82, &RevArgTypesY_83, KindY0_54, &KindY_56, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_41_41);
              if (succeeded)
              {
                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_83, &ArgTypesY_55);
                {
                  Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_42, 1) = ((MR_Box) (ArgTypesY_55));
                  MR_hl_field(3, Var_42, 2) = ((MR_Box) (KindY_56));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_42;
                next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_41_41;
                tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
              MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
              MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

              succeeded = (ArgTypesX0_9 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                next_value_of_tscc_proc_2_input_2_TypeY_7 = TypeY_7;
                next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_0_34;
                tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                goto top_of_proc_2;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word VarY_23 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word Kind0_24 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 3))));
              MR_Integer NArgTypesX0_25;
              MR_Integer NArgTypesY0_26;
              MR_Word ArgTypesY0_61 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 2))));

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &NArgTypesX0_25);
              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &NArgTypesY0_26);
              succeeded = (NArgTypesX0_25 < NArgTypesY0_26);
              if (succeeded)
              {
                MR_Word Kind_28;
                MR_Word STATE_VARIABLE_Bindings_44_44;
                MR_Word Var_45;
                MR_Word ArgTypesY_57;
                MR_Word RevArgTypesX_65;
                MR_Word RevArgTypesY0_66;
                MR_Word RevArgTypesY_67;
                MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_65);
                mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesY0_66);
                succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_65, RevArgTypesY0_66, &RevArgTypesY_67, Kind0_24, &Kind_28, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_44_44);
                if (succeeded)
                {
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_67, &ArgTypesY_57);
                  {
                    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, Var_45, 1) = ((MR_Box) (VarY_23));
                    MR_hl_field(3, Var_45, 2) = ((MR_Box) (ArgTypesY_57));
                    MR_hl_field(3, Var_45, 3) = ((MR_Box) (Kind_28));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_VarX_6 = VarX_8;
                  next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_45;
                  next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                  next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_44_44;
                  tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                  tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                  tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                  goto top_of_proc_2;
                }
              }
              else
              {
                succeeded = (NArgTypesX0_25 > NArgTypesY0_26);
                if (succeeded)
                {
                  MR_Word ArgTypesX_30;
                  MR_Word STATE_VARIABLE_Bindings_49_49;
                  MR_Word Var_50;
                  MR_Word Kind_59;
                  MR_Word RevArgTypesX_73;
                  MR_Word RevArgTypesY0_74;
                  MR_Word RevArgTypesY_75;
                  MR_Word next_value_of_tscc_proc_2_input_1_VarX_6;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeY_7;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                  MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesX_73);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesY0_74);
                  succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_73, RevArgTypesY0_74, &RevArgTypesY_75, Kind0_24, &Kind_59, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_49_49);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_75, &ArgTypesX_30);
                    {
                      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, Var_50, 1) = ((MR_Box) (VarX_8));
                      MR_hl_field(3, Var_50, 2) = ((MR_Box) (ArgTypesX_30));
                      MR_hl_field(3, Var_50, 3) = ((MR_Box) (Kind_59));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_VarX_6 = VarY_23;
                    next_value_of_tscc_proc_2_input_2_TypeY_7 = Var_50;
                    next_value_of_tscc_proc_2_input_3_HeadTypeParams_8 = HeadTypeParams_10;
                    next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = STATE_VARIABLE_Bindings_49_49;
                    tscc_proc_2_input_1_VarX_6 = next_value_of_tscc_proc_2_input_1_VarX_6;
                    tscc_proc_2_input_2_TypeY_7 = next_value_of_tscc_proc_2_input_2_TypeY_7;
                    tscc_proc_2_input_3_HeadTypeParams_8 = next_value_of_tscc_proc_2_input_3_HeadTypeParams_8;
                    tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Bindings_0_13;
                    goto top_of_proc_2;
                  }
                }
                else
                {
                  MR_Word STATE_VARIABLE_Bindings_47_47;
                  MR_Word Kind_58;
                  MR_Word RevArgTypesX_69;
                  MR_Word RevArgTypesY0_70;
                  MR_Word RevArgTypesY_71;
                  MR_Word Var_29;
                  MR_Word next_value_of_tscc_proc_3_input_1_X_7;
                  MR_Word next_value_of_tscc_proc_3_input_2_Y_8;
                  MR_Word next_value_of_tscc_proc_3_input_3_Kind_9;
                  MR_Word next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                  MR_Word next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;

                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesX0_9, &RevArgTypesX_69);
                  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypesY0_61, &RevArgTypesY0_70);
                  succeeded = parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(RevArgTypesX_69, RevArgTypesY0_70, &RevArgTypesY_71, Kind0_24, &Kind_58, HeadTypeParams_10, STATE_VARIABLE_Bindings_0_34, &STATE_VARIABLE_Bindings_47_47);
                  if (succeeded)
                  {
                    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevArgTypesY_71, &Var_29);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_3_input_1_X_7 = VarX_8;
                    next_value_of_tscc_proc_3_input_2_Y_8 = VarY_23;
                    next_value_of_tscc_proc_3_input_3_Kind_9 = Kind_58;
                    next_value_of_tscc_proc_3_input_4_HeadTypeParams_10 = HeadTypeParams_10;
                    next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = STATE_VARIABLE_Bindings_47_47;
                    tscc_proc_3_input_1_X_7 = next_value_of_tscc_proc_3_input_1_X_7;
                    tscc_proc_3_input_2_Y_8 = next_value_of_tscc_proc_3_input_2_Y_8;
                    tscc_proc_3_input_3_Kind_9 = next_value_of_tscc_proc_3_input_3_Kind_9;
                    tscc_proc_3_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_3_input_4_HeadTypeParams_10;
                    tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_Bindings_0_18;
                    goto top_of_proc_3;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word RawY_31 = ((MR_Word) ((MR_hl_field(3, TypeY_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_4_input_1_TypeY_7 = RawY_31;
              MR_Word next_value_of_tscc_proc_4_input_2_VarX_8 = VarX_8;
              MR_Word next_value_of_tscc_proc_4_input_3_ArgTypesX0_9 = ArgTypesX0_9;
              MR_Word next_value_of_tscc_proc_4_input_4_HeadTypeParams_10 = HeadTypeParams_10;
              MR_Word next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = STATE_VARIABLE_Bindings_0_34;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_TypeY_7 = next_value_of_tscc_proc_4_input_1_TypeY_7;
              tscc_proc_4_input_2_VarX_8 = next_value_of_tscc_proc_4_input_2_VarX_8;
              tscc_proc_4_input_3_ArgTypesX0_9 = next_value_of_tscc_proc_4_input_3_ArgTypesX0_9;
              tscc_proc_4_input_4_HeadTypeParams_10 = next_value_of_tscc_proc_4_input_4_HeadTypeParams_10;
              tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34 = next_value_of_tscc_proc_4_input_5_STATE_VARIABLE_Bindings_0_34;
              goto top_of_proc_4;
            }
            break;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Bindings_15 = STATE_VARIABLE_Bindings_35;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Bindings_15 = tscc_output_1_STATE_VARIABLE_Bindings_15;
  return tscc_output_succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_rev_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * ArgTypesY_3,
  MR_Word HeadVar__4_4,
  MR_Word * KindY_5,
  MR_Word HeadTypeParams_6,
  MR_Word STATE_VARIABLE_Bindings_0_7,
  MR_Word * STATE_VARIABLE_Bindings_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *ArgTypesY_3 = HeadVar__2_2;
      *KindY_5 = HeadVar__4_4;
      *STATE_VARIABLE_Bindings_8 = STATE_VARIABLE_Bindings_0_7;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ArgTypeX_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypesX_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgTypeY0_17;
      MR_Word ArgTypesY0_18;
      MR_Word KindY1_24;
      MR_Word STATE_VARIABLE_Bindings_27_27;
      MR_Word Var_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_7;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgTypeY0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        ArgTypesY0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(ArgTypeX_15, ArgTypeY0_17, HeadTypeParams_6, STATE_VARIABLE_Bindings_0_7, &STATE_VARIABLE_Bindings_27_27);
        if (succeeded)
        {
          Var_28 = parse_tree__prog_data__get_type_kind_1_f_0(ArgTypeY0_17);
          {
            KindY1_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, KindY1_24, 0) = ((MR_Box) (Var_28));
            MR_hl_field(1, KindY1_24, 1) = ((MR_Box) (HeadVar__4_4));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = ArgTypesX_16;
          next_value_of_HeadVar__2_2 = ArgTypesY0_18;
          next_value_of_HeadVar__4_4 = KindY1_24;
          next_value_of_STATE_VARIABLE_Bindings_0_7 = STATE_VARIABLE_Bindings_27_27;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          STATE_VARIABLE_Bindings_0_7 = next_value_of_STATE_VARIABLE_Bindings_0_7;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Bindings_0_4,
  MR_Word * STATE_VARIABLE_Bindings_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Bindings_5 = STATE_VARIABLE_Bindings_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word X_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Y_12;
      MR_Word Ys_13;
      MR_Word STATE_VARIABLE_Bindings_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Bindings_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        Ys_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(X_10, Y_12, HeadVar__3_3, STATE_VARIABLE_Bindings_0_4, &STATE_VARIABLE_Bindings_18_18);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Xs_11;
          next_value_of_HeadVar__2_2 = Ys_13;
          next_value_of_STATE_VARIABLE_Bindings_0_4 = STATE_VARIABLE_Bindings_18_18;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Bindings_0_4 = next_value_of_STATE_VARIABLE_Bindings_0_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_occurs_3_p_0(
  MR_Word TypeX_4,
  MR_Word Y_5,
  MR_Word Bindings_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeX_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word X_7 = ((MR_Word) ((MR_hl_field(0, TypeX_4, (MR_Integer) 0))));

          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_7)), ((MR_Box) (Y_5)));
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word BindingOfX_9;
            MR_Box conv1_BindingOfX_9;
            MR_Word next_value_of_TypeX_4;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Bindings_6, ((MR_Box) (X_7)), &conv1_BindingOfX_9);
            if (succeeded)
            {
              BindingOfX_9 = ((MR_Word) (conv1_BindingOfX_9));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_TypeX_4 = BindingOfX_9;
              TypeX_4 = next_value_of_TypeX_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgTypes_11 = ((MR_Word) ((MR_hl_field(1, TypeX_4, (MR_Integer) 1))));

          succeeded = parse_tree__prog_type_unify__type_occurs_list_3_p_0(ArgTypes_11, Y_5, Bindings_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeX_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(3, TypeX_4, (MR_Integer) 1))));

              succeeded = parse_tree__prog_type_unify__type_occurs_list_3_p_0(ArgTypes_23, Y_5, Bindings_6);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_22 = ((MR_Word) ((MR_hl_field(3, TypeX_4, (MR_Integer) 2))));

              succeeded = parse_tree__prog_type_unify__type_occurs_list_3_p_0(ArgTypes_22, Y_5, Bindings_6);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_26 = ((MR_Word) ((MR_hl_field(3, TypeX_4, (MR_Integer) 1))));
              MR_Word ArgTypes_28 = ((MR_Word) ((MR_hl_field(3, TypeX_4, (MR_Integer) 2))));

              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (X_26)), ((MR_Box) (Y_5)));
              if (!(succeeded))
              {
                succeeded = parse_tree__prog_type_unify__type_occurs_list_3_p_0(ArgTypes_28, Y_5, Bindings_6);
                if (!(succeeded))
                {
                  MR_Word BindingOfX_24;
                  MR_Box conv0_BindingOfX_24;
                  MR_Word next_value_of_TypeX_4;

                  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Bindings_6, ((MR_Box) (X_26)), &conv0_BindingOfX_24);
                  if (succeeded)
                  {
                    BindingOfX_24 = ((MR_Word) (conv0_BindingOfX_24));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_TypeX_4 = BindingOfX_24;
                    TypeX_4 = next_value_of_TypeX_4;
                    continue;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeX1_19 = ((MR_Word) ((MR_hl_field(3, TypeX_4, (MR_Integer) 1))));
              MR_Word next_value_of_TypeX_4 = TypeX1_19;

              // direct tailcall eliminated
              ;
              TypeX_4 = next_value_of_TypeX_4;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_occurs_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Y_6,
  MR_Word Bindings_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word X_4;
    MR_Word Xs_5;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      X_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Xs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      succeeded = parse_tree__prog_type_unify__type_occurs_3_p_0(X_4, Y_6, Bindings_7);
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Xs_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type_unify__type_unify_head_type_param_6_p_0(
  MR_Word Var_7,
  MR_Word HeadVar_8,
  MR_Word Kind_9,
  MR_Word HeadTypeParams_10,
  MR_Word STATE_VARIABLE_Bindings_0_15,
  MR_Word * STATE_VARIABLE_Bindings_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word BindingOfVar_12;
    MR_Box conv0_BindingOfVar_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_Bindings_0_15, ((MR_Box) (Var_7)), &conv0_BindingOfVar_12);
    if (succeeded)
    {
      BindingOfVar_12 = ((MR_Word) (conv0_BindingOfVar_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var2_13;
      MR_Word next_value_of_Var_7;

      succeeded = ((MR_tag((MR_Word) BindingOfVar_12)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var2_13 = ((MR_Word) ((MR_hl_field(0, BindingOfVar_12, (MR_Integer) 0))));
        // direct tailcall eliminated
        ;
        next_value_of_Var_7 = Var2_13;
        Var_7 = next_value_of_Var_7;
        continue;
      }
    }
    else
    {
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (Var_7)), ((MR_Box) (HeadVar_8)));
      if (succeeded)
      {
        *STATE_VARIABLE_Bindings_16 = STATE_VARIABLE_Bindings_0_15;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeInfo_22_22;
        MR_Word TypeCtorInfo_23_23;
        MR_Word Var_18;

        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]), ((MR_Box) (Var_7)), HeadTypeParams_10);
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&parse_tree__prog_type_unify_scalar_common_1[0]);
          TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_18, 0) = ((MR_Box) (HeadVar_8));
            MR_hl_field(0, Var_18, 1) = ((MR_Box) (Kind_9));
          }
          mercury__map__det_insert_4_p_0(TypeInfo_22_22, TypeCtorInfo_23_23, ((MR_Box) (Var_7)), ((MR_Box) (Var_18)), STATE_VARIABLE_Bindings_0_15, STATE_VARIABLE_Bindings_16);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
    break;
  }
}

void mercury__parse_tree__prog_type_unify__init(void)
{
}

void mercury__parse_tree__prog_type_unify__init_type_tables(void)
{
}

void mercury__parse_tree__prog_type_unify__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_type_unify__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_type_unify.
