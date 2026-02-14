/*
** Automatically generated from `prog_type_scan.m'
** by the Mercury compiler,
** version rotd-2026-02-14
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


// :- module parse_tree.prog_type_scan.
// :- implementation.

/*
INIT mercury__parse_tree__prog_type_scan__init
ENDINIT
*/

#include "parse_tree.prog_type_scan.mih"


#include "assoc_list.mih"
#include "bool.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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




static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_scan__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_scan__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_scan__univ_exist_constraints_get_tvars_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_scan__univ_exist_constraints_get_tvars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_scan__type_vars_in_type_acc_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_RevTVars_0_19,
  MR_Word * STATE_VARIABLE_RevTVars_20);

static void MR_CALL 
parse_tree__prog_type_scan__type_vars_in_types_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTVars_0_2,
  MR_Word * STATE_VARIABLE_RevTVars_3);


static /* final */ const MR_Box parse_tree__prog_type_scan_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__prog_type_scan_scalar_common_2[1][5];

static /* final */ const MR_Box parse_tree__prog_type_scan_scalar_common_3[4][3];




static /* final */ const MR_Box parse_tree__prog_type_scan_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_type_scan_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_scan_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_type_scan__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_scan_scalar_common_3[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_type_scan_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_type_scan__univ_exist_constraints_get_tvars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_type_scan_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_type_scan__univ_exist_constraints_get_tvars_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_type_scan_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_type_scan_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};





static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_scan__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_type_scan__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_type_scan__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static void MR_CALL 
parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TVars_5;

  parse_tree__prog_type_scan__constraint_get_tvars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TVars_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_TVars_5));
}

void MR_CALL 
parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(
  MR_Word Tvars_4,
  MR_Word Constraints_5,
  MR_Word * Unconstrained_6)
{
  MR_Word ConstrainedTvars_7;
  MR_Word Unconstrained0_8;
  MR_Word TVarsList_10;

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_type_scan_scalar_common_3[3]), Constraints_5, &TVarsList_10);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVarsList_10, &ConstrainedTvars_7);
  mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), Tvars_4, ConstrainedTvars_7, &Unconstrained0_8);
  mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), Unconstrained0_8, Unconstrained_6);
}

void MR_CALL 
parse_tree__prog_type_scan__constraint_get_tvars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVars_5)
{
  MR_Word ArgTypes_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word RevTVars_6;
  MR_Word TVarsDups_7;

  parse_tree__prog_type_scan__type_vars_in_types_acc_3_p_0(ArgTypes_4, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_6);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), RevTVars_6, &TVarsDups_7);
  mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVarsDups_7, TVars_5);
}

static void MR_CALL 
parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TVars_5;

  parse_tree__prog_type_scan__constraint_get_tvars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TVars_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_TVars_5));
}

void MR_CALL 
parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(
  MR_Word Constraints_3,
  MR_Word * TVars_4)
{
  MR_Word TVarsList_5;

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_type_scan_scalar_common_3[2]), Constraints_3, &TVarsList_5);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVarsList_5, TVars_4);
}

static void MR_CALL 
parse_tree__prog_type_scan__univ_exist_constraints_get_tvars_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TVars_5;

  parse_tree__prog_type_scan__constraint_get_tvars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TVars_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_TVars_5));
}

static void MR_CALL 
parse_tree__prog_type_scan__univ_exist_constraints_get_tvars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TVars_5;

  parse_tree__prog_type_scan__constraint_get_tvars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TVars_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_TVars_5));
}

void MR_CALL 
parse_tree__prog_type_scan__univ_exist_constraints_get_tvars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVars_5)
{
  MR_Word Univ_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Exist_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word UnivTVars_6;
  MR_Word ExistTVars_7;
  MR_Word TVarsList_9;
  MR_Word TVarsList_14;

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_type_scan_scalar_common_3[0]), Univ_3, &TVarsList_9);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVarsList_9, &UnivTVars_6);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_type_scan_scalar_common_3[1]), Exist_4, &TVarsList_14);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVarsList_14, &ExistTVars_7);
  mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), UnivTVars_6, ExistTVars_7, TVars_5);
}

void MR_CALL 
parse_tree__prog_type_scan__type_list_contains_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Var_5,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Type_3;
    MR_Word Types_4;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Type_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Types_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      parse_tree__prog_type_scan__type_contains_var_2_p_0(Type_3, Var_5, cont, cont_env_ptr);
      {
        MR_Word next_value_of_HeadVar__1_1 = Types_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__prog_type_scan__type_contains_var_2_p_0(
  MR_Word Type_3,
  MR_Word * Var_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    // setup for model_non tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_3)) {
      case (MR_Integer) 0:
        {
          *Var_4 = ((MR_Word) ((MR_hl_field(0, Type_3, 0))));
          cont(cont_env_ptr);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(1, Type_3, 1))));

          parse_tree__prog_type_scan__type_list_contains_var_2_p_0(ArgTypes_7, Var_4, cont, cont_env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_19 = ((MR_Word) ((MR_hl_field(3, Type_3, 1))));

              parse_tree__prog_type_scan__type_list_contains_var_2_p_0(ArgTypes_19, Var_4, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_18 = ((MR_Word) ((MR_hl_field(3, Type_3, 2))));

              parse_tree__prog_type_scan__type_list_contains_var_2_p_0(ArgTypes_18, Var_4, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word V_13 = ((MR_Word) ((MR_hl_field(3, Type_3, 1))));
              MR_Word ArgTypes_17 = ((MR_Word) ((MR_hl_field(3, Type_3, 2))));

              *Var_4 = V_13;
              cont(cont_env_ptr);
              parse_tree__prog_type_scan__type_list_contains_var_2_p_0(ArgTypes_17, Var_4, cont, cont_env_ptr);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_15 = ((MR_Word) ((MR_hl_field(3, Type_3, 1))));
              MR_Word next_value_of_Type_3 = SubType_15;

              // direct tailcall eliminated
              ;
              Type_3 = next_value_of_Type_3;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
parse_tree__prog_type_scan__type_vars_in_types_2_p_0(
  MR_Word Types_3,
  MR_Word * TVars_4)
{
  MR_Word RevTVars_5;
  MR_Word TVarsDups_6;

  parse_tree__prog_type_scan__type_vars_in_types_acc_3_p_0(Types_3, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_5);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), RevTVars_5, &TVarsDups_6);
  mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVarsDups_6, TVars_4);
}

void MR_CALL 
parse_tree__prog_type_scan__type_vars_in_type_2_p_0(
  MR_Word Type_3,
  MR_Word * TVars_4)
{
  MR_Word RevTVars_5;
  MR_Word TVarsDups_6;

  parse_tree__prog_type_scan__type_vars_in_type_acc_3_p_0(Type_3, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_5);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), RevTVars_5, &TVarsDups_6);
  mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVarsDups_6, TVars_4);
}

void MR_CALL 
parse_tree__prog_type_scan__set_of_type_vars_in_types_2_p_0(
  MR_Word Types_3,
  MR_Word * SetOfTVars_4)
{
  MR_Word TVars_5;
  MR_Word RevTVars_7;
  MR_Word TVarsDups_8;

  parse_tree__prog_type_scan__type_vars_in_types_acc_3_p_0(Types_3, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_7);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), RevTVars_7, &TVarsDups_8);
  mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVarsDups_8, &TVars_5);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVars_5, SetOfTVars_4);
}

void MR_CALL 
parse_tree__prog_type_scan__set_of_type_vars_in_type_2_p_0(
  MR_Word Type_3,
  MR_Word * SetOfTVars_4)
{
  MR_Word TVars_5;
  MR_Word RevTVars_7;
  MR_Word TVarsDups_8;

  parse_tree__prog_type_scan__type_vars_in_type_acc_3_p_0(Type_3, (MR_Word) ((MR_Unsigned) 0U), &RevTVars_7);
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), RevTVars_7, &TVarsDups_8);
  mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVarsDups_8, &TVars_5);
  mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_type_scan_scalar_common_1[0]), TVars_5, SetOfTVars_4);
}

static void MR_CALL 
parse_tree__prog_type_scan__type_vars_in_type_acc_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_RevTVars_0_19,
  MR_Word * STATE_VARIABLE_RevTVars_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Type_4, 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevTVars_20 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_7));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevTVars_0_19));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(1, Type_4, 1))));

          parse_tree__prog_type_scan__type_vars_in_types_acc_3_p_0(ArgTypes_10, STATE_VARIABLE_RevTVars_0_19, STATE_VARIABLE_RevTVars_20);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_RevTVars_20 = STATE_VARIABLE_RevTVars_0_19;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_29 = ((MR_Word) ((MR_hl_field(3, Type_4, 1))));

              parse_tree__prog_type_scan__type_vars_in_types_acc_3_p_0(ArgTypes_29, STATE_VARIABLE_RevTVars_0_19, STATE_VARIABLE_RevTVars_20);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_28 = ((MR_Word) ((MR_hl_field(3, Type_4, 2))));

              parse_tree__prog_type_scan__type_vars_in_types_acc_3_p_0(ArgTypes_28, STATE_VARIABLE_RevTVars_0_19, STATE_VARIABLE_RevTVars_20);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_RevTVars_3_23;
              MR_Word Var_26 = ((MR_Word) ((MR_hl_field(3, Type_4, 1))));
              MR_Word ArgTypes_27 = ((MR_Word) ((MR_hl_field(3, Type_4, 2))));

              {
                STATE_VARIABLE_RevTVars_3_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevTVars_3_23, 0) = ((MR_Box) (Var_26));
                MR_hl_field(1, STATE_VARIABLE_RevTVars_3_23, 1) = ((MR_Box) (STATE_VARIABLE_RevTVars_0_19));
              }
              parse_tree__prog_type_scan__type_vars_in_types_acc_3_p_0(ArgTypes_27, STATE_VARIABLE_RevTVars_3_23, STATE_VARIABLE_RevTVars_20);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_17 = ((MR_Word) ((MR_hl_field(3, Type_4, 1))));
              MR_Word next_value_of_Type_4 = SubType_17;

              // direct tailcall eliminated
              ;
              Type_4 = next_value_of_Type_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_type_scan__type_vars_in_types_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevTVars_0_2,
  MR_Word * STATE_VARIABLE_RevTVars_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevTVars_3 = STATE_VARIABLE_RevTVars_0_2;
    else
    {
      MR_Word Type_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Types_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_RevTVars_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevTVars_0_2;

      parse_tree__prog_type_scan__type_vars_in_type_acc_3_p_0(Type_7, STATE_VARIABLE_RevTVars_0_2, &STATE_VARIABLE_RevTVars_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Types_8;
      next_value_of_STATE_VARIABLE_RevTVars_0_2 = STATE_VARIABLE_RevTVars_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevTVars_0_2 = next_value_of_STATE_VARIABLE_RevTVars_0_2;
      continue;
    }
    break;
  }
}

void mercury__parse_tree__prog_type_scan__init(void)
{
}

void mercury__parse_tree__prog_type_scan__init_type_tables(void)
{
}

void mercury__parse_tree__prog_type_scan__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_type_scan__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_type_scan.
