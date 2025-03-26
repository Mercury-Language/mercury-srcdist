/*
** Automatically generated from `prog_type_construct.m'
** by the Mercury compiler,
** version rotd-2025-03-26
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


// :- module parse_tree.prog_type_construct.
// :- implementation.

/*
INIT mercury__parse_tree__prog_type_construct__init
ENDINIT
*/

#include "parse_tree.prog_type_construct.mih"


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
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"












void MR_CALL 
parse_tree__prog_type_construct__construct_higher_order_func_type_7_p_0(
  MR_Word Purity_8,
  MR_Word ArgTypes_9,
  MR_Word RetType_10,
  MR_Word ArgModes_11,
  MR_Word RetMode_12,
  MR_Word Detism_13,
  MR_Word * Type_14)
{
  MR_Word PredInstInfo_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;

  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (RetMode_12));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_11, Var_18);
  {
    PredInstInfo_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredInstInfo_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, PredInstInfo_15, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, PredInstInfo_15, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredInstInfo_15, 3) = (MR_Box) ((MR_Unsigned) (Detism_13));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (RetType_10));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_9, Var_23);
  Var_25 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_15)));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Type_14 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 2) = ((MR_Box) (Var_22));
    MR_hl_field(3, base, 3) = ((MR_Box) (Var_25));
    MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_8));
  }
}

void MR_CALL 
parse_tree__prog_type_construct__construct_higher_order_func_type_4_p_0(
  MR_Word Purity_5,
  MR_Word ArgTypes_6,
  MR_Word RetType_7,
  MR_Word * Type_8)
{
  MR_Word Var_10;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (RetType_7));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_6, Var_11);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Type_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_5));
  }
}

void MR_CALL 
parse_tree__prog_type_construct__construct_higher_order_pred_type_5_p_0(
  MR_Word Purity_6,
  MR_Word ArgTypes_7,
  MR_Word ArgModes_8,
  MR_Word Detism_9,
  MR_Word * Type_10)
{
  MR_Word PredInstInfo_11;
  MR_Word Var_15;

  {
    PredInstInfo_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredInstInfo_11, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredInstInfo_11, 1) = ((MR_Box) (ArgModes_8));
    MR_hl_field(0, PredInstInfo_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredInstInfo_11, 3) = (MR_Box) ((MR_Unsigned) (Detism_9));
  }
  Var_15 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_11)));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Type_10 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 2) = ((MR_Box) (ArgTypes_7));
    MR_hl_field(3, base, 3) = ((MR_Box) (Var_15));
    MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_6));
  }
}

void MR_CALL 
parse_tree__prog_type_construct__construct_higher_order_pred_type_3_p_0(
  MR_Word Purity_4,
  MR_Word ArgTypes_5,
  MR_Word * Type_6)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Type_6 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 2) = ((MR_Box) (ArgTypes_5));
    MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_4));
  }
}

void MR_CALL 
parse_tree__prog_type_construct__construct_type_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word ArgTypes_5,
  MR_Word * Type_6)
{
  MR_bool succeeded;
  MR_Word BuiltinType_8;
  MR_String Name_7;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, TypeCtor_4, (MR_Integer) 0))));
  MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_4, (MR_Integer) 1))));

  succeeded = (Var_14 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_7 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      succeeded = parse_tree__prog_data__builtin_type_name_2_p_1(&BuiltinType_8, Name_7);
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Type_6 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (BuiltinType_8));
    }
  else
  {
    MR_Word Purity_9;
    MR_Word PredOrFunc_10;

    succeeded = parse_tree__prog_type_test__type_ctor_is_higher_order_3_p_0(TypeCtor_4, &Purity_9, &PredOrFunc_10);
    if (succeeded)
      parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_9, PredOrFunc_10, ArgTypes_5, Type_6);
    else
    {
      succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_4);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (ArgTypes_5));
          MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, TypeCtor_4, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SymName_11));
          MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypes_5));
          MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(
  MR_Word Purity_5,
  MR_Word PredOrFunc_6,
  MR_Word ArgTypes_7,
  MR_Word * Type_8)
{
  switch (PredOrFunc_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTypes_9;
        MR_Word FuncRetType_10;
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Box conv0_FuncRetType_10;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_7, &FuncArgTypes_9, &conv0_FuncRetType_10);
        FuncRetType_10 = ((MR_Word) (conv0_FuncRetType_10));
        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (FuncRetType_10));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FuncArgTypes_9, Var_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Type_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, base, 2) = ((MR_Box) (Var_13));
          MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_5));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *Type_8 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, base, 2) = ((MR_Box) (ArgTypes_7));
        MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_5));
      }
      break;
  }
}

void mercury__parse_tree__prog_type_construct__init(void)
{
}

void mercury__parse_tree__prog_type_construct__init_type_tables(void)
{
}

void mercury__parse_tree__prog_type_construct__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_type_construct__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_type_construct.
