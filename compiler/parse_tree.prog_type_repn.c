/*
** Automatically generated from `prog_type_repn.m'
** by the Mercury compiler,
** version rotd-2025-11-29
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


// :- module parse_tree.prog_type_repn.
// :- implementation.

/*
INIT mercury__parse_tree__prog_type_repn__init
ENDINIT
*/

#include "parse_tree.prog_type_repn.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "int.mih"
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




static MR_bool MR_CALL 
parse_tree__prog_type_repn__all_functors_are_constants_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumFunctors_0_2,
  MR_Integer * STATE_VARIABLE_NumFunctors_3);







#include "array.mh"


void MR_CALL 
parse_tree__prog_type_repn__num_bits_needed_for_n_dense_values_2_p_0(
  MR_Integer NumValues_3,
  MR_Integer * NumBits_4)
{
  mercury__int__log2_2_p_0(NumValues_3, NumBits_4);
}

MR_bool MR_CALL 
parse_tree__prog_type_repn__non_sub_du_type_is_dummy_1_p_0(
  MR_Word DuDetails_2)
{
  MR_bool succeeded;
  MR_Word Ctors_3 = ((MR_Word) ((MR_hl_field(0, DuDetails_2, 0))));
  MR_Word MaybeCanonical_4 = ((MR_Word) ((MR_hl_field(0, DuDetails_2, 1))));
  MR_Word MaybeDirectArgCtors_5 = ((MR_Word) ((MR_hl_field(0, DuDetails_2, 2))));
  MR_Word Ctor_6 = ((MR_Word) ((MR_hl_field(0, Ctors_3, 0))));
  MR_Word MaybeExistConstraints_8;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, Ctors_3, 1))));
  MR_Word Var_12;
  MR_Integer Var_13;

  succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MaybeExistConstraints_8 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 1))));
    Var_12 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 3))));
    Var_13 = ((MR_Integer) ((MR_hl_field(0, Ctor_6, 4))));
    succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Var_13 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (MaybeExistConstraints_8 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (MaybeCanonical_4 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybeDirectArgCtors_5 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_repn__non_sub_du_type_is_enum_2_p_0(
  MR_Word DuDetails_3,
  MR_Integer * NumFunctors_4)
{
  MR_bool succeeded;
  MR_Word OoMCtors_5 = ((MR_Word) ((MR_hl_field(0, DuDetails_3, 0))));
  MR_Word Ctors_8;
  MR_Integer Var_13;
  MR_Word Ctor_17;
  MR_Word Ctors_18;
  MR_Word MaybeExistConstraints_20;
  MR_Word ArgTypes_22;
  MR_Integer STATE_VARIABLE_NumFunctors_1_27;
  MR_Integer Var_28;

  Ctors_8 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_5);
  succeeded = (Ctors_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Ctor_17 = ((MR_Word) ((MR_hl_field(1, Ctors_8, 0))));
    Ctors_18 = ((MR_Word) ((MR_hl_field(1, Ctors_8, 1))));
    succeeded = (Ctors_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_13 = (MR_Integer) 0;
      MaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(0, Ctor_17, 1))));
      ArgTypes_22 = ((MR_Word) ((MR_hl_field(0, Ctor_17, 3))));
      succeeded = (ArgTypes_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_28 = (MR_Integer) 1;
          STATE_VARIABLE_NumFunctors_1_27 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) Var_28);
          succeeded = parse_tree__prog_type_repn__all_functors_are_constants_3_p_0(Ctors_18, STATE_VARIABLE_NumFunctors_1_27, NumFunctors_4);
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_type_repn__all_functors_are_constants_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumFunctors_0_2,
  MR_Integer * STATE_VARIABLE_NumFunctors_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumFunctors_3 = STATE_VARIABLE_NumFunctors_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Ctor_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Ctors_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(0, Ctor_7, 1))));
      MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(0, Ctor_7, 3))));
      MR_Integer STATE_VARIABLE_NumFunctors_1_18;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_NumFunctors_0_2;

      succeeded = (ArgTypes_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (MaybeExistConstraints_11 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_19 = (MR_Integer) 1;
          STATE_VARIABLE_NumFunctors_1_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumFunctors_0_2 + (MR_Unsigned) Var_19);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Ctors_8;
          next_value_of_STATE_VARIABLE_NumFunctors_0_2 = STATE_VARIABLE_NumFunctors_1_18;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_NumFunctors_0_2 = next_value_of_STATE_VARIABLE_NumFunctors_0_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
parse_tree__prog_type_repn__non_sub_du_type_is_notag_2_p_0(
  MR_Word OoMCtors_3,
  MR_Word MaybeCanonical_4)
{
  MR_bool succeeded;
  MR_Word Ctor_5 = ((MR_Word) ((MR_hl_field(0, OoMCtors_3, 0))));
  MR_Word MaybeExistConstraints_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, OoMCtors_3, 1))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Integer Var_14;

  succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MaybeExistConstraints_7 = ((MR_Word) ((MR_hl_field(0, Ctor_5, 1))));
    Var_12 = ((MR_Word) ((MR_hl_field(0, Ctor_5, 3))));
    Var_14 = ((MR_Integer) ((MR_hl_field(0, Ctor_5, 4))));
    succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, 1))));
      succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Var_14 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (MaybeExistConstraints_7 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybeCanonical_4 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  return succeeded;
}

void mercury__parse_tree__prog_type_repn__init(void)
{
}

void mercury__parse_tree__prog_type_repn__init_type_tables(void)
{
}

void mercury__parse_tree__prog_type_repn__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_type_repn__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_type_repn.
