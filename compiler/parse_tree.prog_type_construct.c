/*
** Automatically generated from `prog_type_construct.m'
** by the Mercury compiler,
** version rotd-2023-11-22
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
#include "one_or_more_map.mih"
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
parse_tree__prog_type_construct__construct_higher_order_func_type_8_p_0(
  MR_Word Purity_9,
  MR_Word ArgTypes_11,
  MR_Word RetType_12,
  MR_Word ArgModes_13,
  MR_Word RetMode_14,
  MR_Word Detism_15,
  MR_Word * Type_16)
{
  MR_Word PredInstInfo_17;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;

  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (RetMode_14));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_13, Var_20);
  {
    PredInstInfo_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredInstInfo_17, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, PredInstInfo_17, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, PredInstInfo_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredInstInfo_17, 3) = (MR_Box) ((MR_Unsigned) (Detism_15));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (RetType_12));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_11, Var_25);
  Var_27 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_17)));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *Type_16 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 2) = ((MR_Box) (Var_24));
    MR_hl_field(3, base, 3) = ((MR_Box) (Var_27));
    MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_9));
    MR_hl_field(3, base, 5) = NULL;
  }
}

void MR_CALL 
parse_tree__prog_type_construct__construct_higher_order_func_type_5_p_0(
  MR_Word Purity_6,
  MR_Word ArgTypes_8,
  MR_Word RetType_9,
  MR_Word * Type_10)
{
  MR_Word Var_12;
  MR_Word Var_13;

  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (RetType_9));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_8, Var_13);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *Type_10 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_6));
    MR_hl_field(3, base, 5) = NULL;
  }
}

void MR_CALL 
parse_tree__prog_type_construct__construct_higher_order_pred_type_6_p_0(
  MR_Word Purity_7,
  MR_Word ArgTypes_9,
  MR_Word ArgModes_10,
  MR_Word Detism_11,
  MR_Word * Type_12)
{
  MR_Word PredInstInfo_13;
  MR_Word Var_17;

  {
    PredInstInfo_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredInstInfo_13, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredInstInfo_13, 1) = ((MR_Box) (ArgModes_10));
    MR_hl_field(0, PredInstInfo_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredInstInfo_13, 3) = (MR_Box) ((MR_Unsigned) (Detism_11));
  }
  Var_17 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_13)));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *Type_12 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 2) = ((MR_Box) (ArgTypes_9));
    MR_hl_field(3, base, 3) = ((MR_Box) (Var_17));
    MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_7));
    MR_hl_field(3, base, 5) = NULL;
  }
}

void MR_CALL 
parse_tree__prog_type_construct__construct_higher_order_pred_type_4_p_0(
  MR_Word Purity_5,
  MR_Word ArgTypes_7,
  MR_Word * Type_8)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *Type_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 2) = ((MR_Box) (ArgTypes_7));
    MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_5));
    MR_hl_field(3, base, 5) = NULL;
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
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, TypeCtor_4, (MR_Integer) 0))));
  MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_4, (MR_Integer) 1))));

  succeeded = (Var_15 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_7 = ((MR_String) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
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

    succeeded = parse_tree__prog_type_test__type_ctor_is_higher_order_4_p_0(TypeCtor_4, &Purity_9, &PredOrFunc_10);
    if (succeeded)
      parse_tree__prog_type_construct__construct_higher_order_type_5_p_0(Purity_9, PredOrFunc_10, ArgTypes_5, Type_6);
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
        MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, TypeCtor_4, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SymName_12));
          MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypes_5));
          MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_type_construct__construct_higher_order_type_5_p_0(
  MR_Word Purity_6,
  MR_Word PredOrFunc_7,
  MR_Word ArgTypes_9,
  MR_Word * Type_10)
{
  switch (PredOrFunc_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgTypes_11;
        MR_Word FuncRetType_12;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Box conv0_FuncRetType_12;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_9, &FuncArgTypes_11, &conv0_FuncRetType_12);
        FuncRetType_12 = ((MR_Word) (conv0_FuncRetType_12));
        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (FuncRetType_12));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FuncArgTypes_11, Var_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *Type_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, base, 2) = ((MR_Box) (Var_15));
          MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_6));
          MR_hl_field(3, base, 5) = NULL;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        *Type_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, base, 2) = ((MR_Box) (ArgTypes_9));
        MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_6));
        MR_hl_field(3, base, 5) = NULL;
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
