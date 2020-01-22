/*
** Automatically generated from `parse_tree_out_term.m'
** by the Mercury compiler,
** version rotd-2020-01-22
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


// :- module parse_tree.parse_tree_out_term.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_term__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_term.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"



struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s {
  MR_bool parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded;
  MR_Word parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Chars_8;
  jmp_buf parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__commit_0;
  MR_Char parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Char_9;
  MR_Box parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__conv0_Char_9;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_value_ordered_needs_quotes_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0[2];

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0[2];

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_5_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_output_31,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Term_8,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_5_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeClassInfo_for_output_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(
  MR_String Op_2);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(
  MR_String Op_2);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(
  MR_String Op_2);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(
  MR_String Op_2);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_constant_4_p_0(
  MR_Word TypeClassInfo_for_output_13,
  MR_Word NextToGraphicToken_5,
  MR_Word Const_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_4_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word NextToGraphicToken_5,
  MR_Word Const_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
  MR_String Name0_4,
  MR_String * Name_5,
  MR_Integer * Num_6);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_1[3][2];

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_2[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_3[1][10];




static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_2[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 133167
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0 = {
  (MR_String) "next_to_graphic_token",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1 = {
  (MR_String) "not_next_to_graphic_token",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_value_ordered_needs_quotes_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1
};

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_needs_quotes_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "needs_quotes",
  {     parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0 },
  {     parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_value_ordered_needs_quotes_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0
};

void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_4_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word NextToGraphicToken_5,
  MR_String Name_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    mercury__ops__init_mercury_op_table_0_f_0();
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Name_6)));
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_11_11;
      MR_Box STATE_VARIABLE_U_12_12;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_1(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_0_8, &STATE_VARIABLE_U_11_11);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 20))));
      func_2(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (Name_6)), STATE_VARIABLE_U_11_11, &STATE_VARIABLE_U_12_12);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_12_12, STATE_VARIABLE_U_9);
    }
    else
      parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(TypeClassInfo_for_output_16, NextToGraphicToken_5, Name_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_nq_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Integer Limit_11,
  MR_Word Term_12)
{
  {
    MR_String Var_16;

    Var_16 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(TypeInfo_for_T_18, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Limit_11, Term_12);
    mercury__io__write_string_3_p_0(Var_16);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_to_string_4_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Integer Limit_8,
  MR_Word Term_9)
{
  {
    MR_String HeadVar__5_5;

    HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(TypeInfo_for_T_11, VarSet_6, VarNamePrint_7, (MR_Integer) 1, Limit_8, Term_9);
    return HeadVar__5_5;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Integer Limit_9,
  MR_Word Term_10)
{
  {
    MR_String Var_25;

    Var_25 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(TypeInfo_for_T_16, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Limit_9, Term_10);
    mercury__io__write_string_3_p_0(Var_25);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word NextToGraphicToken_8,
  MR_Word Term_9)
{
  {
    MR_String String_10;
    MR_Box conv0_String_10;

    parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_12, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_6, VarNamePrint_7, NextToGraphicToken_8, Term_9, ((MR_Box) ((MR_String) "")), &conv0_String_10);
    String_10 = ((MR_String) (conv0_String_10));
    return String_10;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word NextToGraphicToken_9,
  MR_Word Term_10)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_13;

    parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_15, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), VarSet_7, VarNamePrint_8, NextToGraphicToken_9, Term_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Term_7)
{
  {
    MR_String HeadVar__4_4;
    MR_Box conv0_HeadVar__4_4;

    parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_9, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_5, VarNamePrint_6, (MR_Integer) 1, Term_7, ((MR_Box) ((MR_String) "")), &conv0_HeadVar__4_4);
    HeadVar__4_4 = ((MR_String) (conv0_HeadVar__4_4));
    return HeadVar__4_4;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Term_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_14, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), VarSet_6, VarNamePrint_7, (MR_Integer) 1, Term_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__describe_error_term_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word VarSet_4,
  MR_Word Term_5)
{
  {
    MR_String HeadVar__3_3;

    HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(TypeInfo_for_T_8, VarSet_4, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 80, Term_5);
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word NextToGraphicToken_9,
  MR_Integer Limit_10,
  MR_Word Term_11)
{
  {
    MR_bool succeeded;
    MR_String String_12;
    MR_String FullString_13;
    MR_Integer FullLen_14;
    MR_Box conv0_FullString_13;

    parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_37, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_7, VarNamePrint_8, NextToGraphicToken_9, Term_11, ((MR_Box) ((MR_String) "")), &conv0_FullString_13);
    FullString_13 = ((MR_String) (conv0_FullString_13));
    FullLen_14 = mercury__string__count_codepoints_1_f_0(FullString_13);
    succeeded = (FullLen_14 <= Limit_10);
    if (succeeded)
      String_12 = FullString_13;
    else
    if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
    {
      MR_Word Functor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_11, (MR_Integer) 0))));
      MR_Word Args_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_11, (MR_Integer) 1))));
      MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_11, (MR_Integer) 2))));
      MR_Word NoArgTerm_20;
      MR_String FunctorString_21;
      MR_Box conv1_FunctorString_21;

      {
        NoArgTerm_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NoArgTerm_20, 0) = ((MR_Box) (Functor_17));
        MR_hl_field(MR_mktag(0), NoArgTerm_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NoArgTerm_20, 2) = ((MR_Box) (Context_19));
      }
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_37, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_7, VarNamePrint_8, NextToGraphicToken_9, NoArgTerm_20, ((MR_Box) ((MR_String) "")), &conv1_FunctorString_21);
      FunctorString_21 = ((MR_String) (conv1_FunctorString_21));
      switch (MR_tag((MR_Word) Functor_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_40_40;
            MR_String ArityStr_23;
            MR_Integer Var_34;
            MR_String Var_35;

            {
              TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_40_40, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
              MR_hl_field(MR_mktag(0), TypeInfo_40_40, 1) = ((MR_Box) (TypeInfo_for_T_37));
            }
            Var_34 = mercury__list__length_1_f_0(TypeInfo_40_40, (MR_Word) (Args_18));
            ArityStr_23 = mercury__string__int_to_string_1_f_0(Var_34);
            Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "/", ArityStr_23);
            String_12 = mercury__string__f_43_43_2_f_0(FunctorString_21, Var_35);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          String_12 = FunctorString_21;
          break;
        case (MR_Integer) 3:
          String_12 = FunctorString_21;
          break;
      }
    }
    else
      String_12 = FullString_13;
    return String_12;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_5_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_output_31,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Term_8,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    MR_Word X_12;
    MR_Word Xs_13;
    MR_Word Args_10;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
      Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
            succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Xs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
              Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
              succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_22_22;
      MR_Box STATE_VARIABLE_U_23_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Word next_value_of_Term_8;
      MR_Box next_value_of_STATE_VARIABLE_U_0_15;

      func_0(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_22_22);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_32, TypeClassInfo_for_output_31, VarSet_6, VarNamePrint_7, (MR_Integer) 1, X_12, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_Term_8 = Xs_13;
      next_value_of_STATE_VARIABLE_U_0_15 = STATE_VARIABLE_U_23_23;
      Term_8 = next_value_of_Term_8;
      STATE_VARIABLE_U_0_15 = next_value_of_STATE_VARIABLE_U_0_15;
      continue;
    }
    else
    {
      MR_Word Var_25;
      MR_String Var_26;
      MR_Word Var_27;

      succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
        succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
            succeeded = (strcmp(Var_26, (MR_String) "[]") == 0);
          }
        }
      }
      if (succeeded)
        *STATE_VARIABLE_U_16 = STATE_VARIABLE_U_0_15;
      else
      {
        MR_Box STATE_VARIABLE_U_29_29;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));

        func_1(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) " | ")), STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_29_29);
        parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_32, TypeClassInfo_for_output_31, VarSet_6, VarNamePrint_7, (MR_Integer) 1, Term_8, STATE_VARIABLE_U_29_29, STATE_VARIABLE_U_16);
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word HeadTerm_9,
  MR_Word TailTerms_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  {
    MR_Box STATE_VARIABLE_U_14_14;

    parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_17, TypeClassInfo_for_output_16, VarSet_7, VarNamePrint_8, (MR_Integer) 1, HeadTerm_9, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_14_14);
    parse_tree__parse_tree_out_term__mercury_format_remaining_terms_5_p_0(TypeInfo_for_T_17, TypeClassInfo_for_output_16, VarSet_7, VarNamePrint_8, TailTerms_10, STATE_VARIABLE_U_14_14, STATE_VARIABLE_U_13);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeClassInfo_for_output_14,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Term_8,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_15, TypeClassInfo_for_output_14, VarSet_6, VarNamePrint_7, (MR_Integer) 1, Term_8, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_5_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeClassInfo_for_output_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_0_4;
    else
    {
      MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Terms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_19_19;
      MR_Box STATE_VARIABLE_U_20_20;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_STATE_VARIABLE_U_0_4;

      func_0(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_U_0_4, &STATE_VARIABLE_U_19_19);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_23, TypeClassInfo_for_output_22, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, Term_13, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms_14;
      next_value_of_STATE_VARIABLE_U_0_4 = STATE_VARIABLE_U_20_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_U_0_4 = next_value_of_STATE_VARIABLE_U_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(
  MR_Word TypeInfo_for_T_131,
  MR_Word TypeClassInfo_for_output_130,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word NextToGraphicToken_9,
  MR_Word Term_10,
  MR_Box STATE_VARIABLE_U_0_29,
  MR_Box * STATE_VARIABLE_U_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0))
    {
      MR_Word Functor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 0))));
      MR_Word Args_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1))));
      MR_Word F_17;
      MR_Word X_18;
      MR_Word Xs_19;
      MR_String Var_31;
      MR_Word Var_32;

      succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
        succeeded = (strcmp(Var_31, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            F_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
            succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
              Xs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_U_33_33;
        MR_Box STATE_VARIABLE_U_35_35;
        MR_Box STATE_VARIABLE_U_36_36;

        parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, NextToGraphicToken_9, F_17, STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_33_33);
        parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "(", STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_35_35);
        parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, X_18, Xs_19, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_36_36);
        parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) ")", STATE_VARIABLE_U_36_36, STATE_VARIABLE_U_30);
      }
      else
      {
        MR_Word X_128;
        MR_Word Xs_129;
        MR_String Var_39;
        MR_Word Var_40;
        MR_Word Var_41;

        succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
          succeeded = (strcmp(Var_39, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
              Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
              succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Xs_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
                Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
                succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Box STATE_VARIABLE_U_43_43;
          MR_Box STATE_VARIABLE_U_44_44;
          MR_Box STATE_VARIABLE_U_45_45;

          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "[", STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_43_43);
          parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, X_128, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_44_44);
          parse_tree__parse_tree_out_term__mercury_format_list_args_5_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, Xs_129, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_45_45);
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "]", STATE_VARIABLE_U_45_45, STATE_VARIABLE_U_30);
        }
        else
        {
          MR_Word X_126;
          MR_String Var_48;
          MR_Word Var_49;

          succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
            succeeded = (strcmp(Var_48, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_U_51_51;
            MR_Box STATE_VARIABLE_U_52_52;

            parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "{ ", STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_51_51);
            parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, X_126, STATE_VARIABLE_U_51_51, &STATE_VARIABLE_U_52_52);
            parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) " }", STATE_VARIABLE_U_52_52, STATE_VARIABLE_U_30);
          }
          else
          {
            MR_Word X_124;
            MR_Word Xs_125;
            MR_String Var_55;

            succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_55 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
              succeeded = (strcmp(Var_55, (MR_String) "{}") == 0);
              if (succeeded)
              {
                succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                  Xs_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                }
              }
            }
            if (succeeded)
            {
              MR_Box STATE_VARIABLE_U_57_57;
              MR_Box STATE_VARIABLE_U_58_58;

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "{", STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_57_57);
              parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, X_124, Xs_125, STATE_VARIABLE_U_57_57, &STATE_VARIABLE_U_58_58);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "}", STATE_VARIABLE_U_58_58, STATE_VARIABLE_U_30);
            }
            else
            {
              MR_Word BinaryPrefixArg1_20;
              MR_Word BinaryPrefixArg2_21;
              MR_String FunctorName_22;
              MR_Word Var_61;
              MR_Word Var_62;

              succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BinaryPrefixArg1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BinaryPrefixArg2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0))));
                  Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 1))));
                  succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FunctorName_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
                      succeeded = parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(FunctorName_22);
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Box STATE_VARIABLE_U_64_64;
                MR_Box STATE_VARIABLE_U_65_65;
                MR_Box STATE_VARIABLE_U_67_67;
                MR_Box STATE_VARIABLE_U_68_68;
                MR_Box STATE_VARIABLE_U_70_70;
                MR_Box STATE_VARIABLE_U_71_71;

                parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "(", STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_64_64);
                parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, FunctorName_22, STATE_VARIABLE_U_64_64, &STATE_VARIABLE_U_65_65);
                parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) " ", STATE_VARIABLE_U_65_65, &STATE_VARIABLE_U_67_67);
                parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, BinaryPrefixArg1_20, STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_68_68);
                parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) " ", STATE_VARIABLE_U_68_68, &STATE_VARIABLE_U_70_70);
                parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, BinaryPrefixArg2_21, STATE_VARIABLE_U_70_70, &STATE_VARIABLE_U_71_71);
                parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) ")", STATE_VARIABLE_U_71_71, STATE_VARIABLE_U_30);
              }
              else
              {
                MR_Word PrefixArg_23;
                MR_String FunctorName_123;
                MR_Word Var_74;

                succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PrefixArg_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                  succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FunctorName_123 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
                      succeeded = parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(FunctorName_123);
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Box STATE_VARIABLE_U_76_76;
                  MR_Box STATE_VARIABLE_U_77_77;
                  MR_Box STATE_VARIABLE_U_79_79;
                  MR_Box STATE_VARIABLE_U_80_80;

                  parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "(", STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_76_76);
                  parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, FunctorName_123, STATE_VARIABLE_U_76_76, &STATE_VARIABLE_U_77_77);
                  parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) " ", STATE_VARIABLE_U_77_77, &STATE_VARIABLE_U_79_79);
                  parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, PrefixArg_23, STATE_VARIABLE_U_79_79, &STATE_VARIABLE_U_80_80);
                  parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) ")", STATE_VARIABLE_U_80_80, STATE_VARIABLE_U_30);
                }
                else
                {
                  MR_Word PostfixArg_24;
                  MR_String FunctorName_122;
                  MR_Word Var_83;

                  succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PostfixArg_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                    succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        FunctorName_122 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
                        succeeded = parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(FunctorName_122);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Box STATE_VARIABLE_U_85_85;
                    MR_Box STATE_VARIABLE_U_86_86;
                    MR_Box STATE_VARIABLE_U_88_88;
                    MR_Box STATE_VARIABLE_U_89_89;

                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "(", STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_85_85);
                    parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, PostfixArg_24, STATE_VARIABLE_U_85_85, &STATE_VARIABLE_U_86_86);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) " ", STATE_VARIABLE_U_86_86, &STATE_VARIABLE_U_88_88);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, FunctorName_122, STATE_VARIABLE_U_88_88, &STATE_VARIABLE_U_89_89);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) ")", STATE_VARIABLE_U_89_89, STATE_VARIABLE_U_30);
                  }
                  else
                  {
                    MR_Word Arg1_25;
                    MR_Word Arg2_26;
                    MR_String FunctorName_121;
                    MR_Word Var_92;
                    MR_Word Var_93;

                    succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Arg1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                      Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                      succeeded = (Var_92 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_92, (MR_Integer) 0))));
                        Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_92, (MR_Integer) 1))));
                        succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            FunctorName_121 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
                            succeeded = parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(FunctorName_121);
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      succeeded = (strcmp(FunctorName_121, (MR_String) ".") == 0);
                      if (succeeded)
                      {
                        MR_Box STATE_VARIABLE_U_95_95;
                        MR_Box STATE_VARIABLE_U_97_97;
                        MR_Word next_value_of_Term_10;
                        MR_Box next_value_of_STATE_VARIABLE_U_0_29;

                        parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, (MR_Integer) 0, Arg1_25, STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_95_95);
                        parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) ".", STATE_VARIABLE_U_95_95, &STATE_VARIABLE_U_97_97);
                        // direct tailcall eliminated
                        ;
                        next_value_of_Term_10 = Arg2_26;
                        next_value_of_STATE_VARIABLE_U_0_29 = STATE_VARIABLE_U_97_97;
                        NextToGraphicToken_9 = (MR_Integer) 0;
                        Term_10 = next_value_of_Term_10;
                        STATE_VARIABLE_U_0_29 = next_value_of_STATE_VARIABLE_U_0_29;
                        continue;
                      }
                      else
                      {
                        MR_Box STATE_VARIABLE_U_101_101;
                        MR_Box STATE_VARIABLE_U_103_103;
                        MR_Box STATE_VARIABLE_U_105_105;
                        MR_Box STATE_VARIABLE_U_106_106;
                        MR_Box STATE_VARIABLE_U_108_108;
                        MR_Box STATE_VARIABLE_U_110_110;

                        parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "(", STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_101_101);
                        parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Arg1_25, STATE_VARIABLE_U_101_101, &STATE_VARIABLE_U_103_103);
                        parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) " ", STATE_VARIABLE_U_103_103, &STATE_VARIABLE_U_105_105);
                        parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, FunctorName_121, STATE_VARIABLE_U_105_105, &STATE_VARIABLE_U_106_106);
                        parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) " ", STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_108_108);
                        parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Arg2_26, STATE_VARIABLE_U_108_108, &STATE_VARIABLE_U_110_110);
                        parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) ")", STATE_VARIABLE_U_110_110, STATE_VARIABLE_U_30);
                      }
                    }
                    else
                    if ((Args_15 == (MR_Word) ((MR_Unsigned) 0U)))
                      parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_4_p_0(TypeClassInfo_for_output_130, NextToGraphicToken_9, Functor_14, STATE_VARIABLE_U_0_29, STATE_VARIABLE_U_30);
                    else
                    {
                      MR_Word Y_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                      MR_Word Ys_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                      MR_Box STATE_VARIABLE_U_114_114;
                      MR_Box STATE_VARIABLE_U_116_116;
                      MR_Box STATE_VARIABLE_U_117_117;

                      parse_tree__parse_tree_out_term__mercury_format_constant_4_p_0(TypeClassInfo_for_output_130, NextToGraphicToken_9, Functor_14, STATE_VARIABLE_U_0_29, &STATE_VARIABLE_U_114_114);
                      parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) "(", STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_116_116);
                      parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, Y_27, Ys_28, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_117_117);
                      parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_130, (MR_String) ")", STATE_VARIABLE_U_117_117, STATE_VARIABLE_U_30);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_10, (MR_Integer) 0))));

      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(TypeInfo_for_T_131, TypeClassInfo_for_output_130, VarSet_7, VarNamePrint_8, Var_12, STATE_VARIABLE_U_0_29, STATE_VARIABLE_U_30);
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(
  MR_String Op_2)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box conv2_Var_3;
    MR_Box conv1_Var_4;

    mercury__ops__init_mercury_op_table_0_f_0();
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 8))));
    succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_2)), &conv2_Var_3, &conv1_Var_4);
    if (succeeded)
      succeeded = MR_TRUE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(
  MR_String Op_2)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box conv2_Var_3;
    MR_Box conv1_Var_4;

    mercury__ops__init_mercury_op_table_0_f_0();
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 6))));
    succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_2)), &conv2_Var_3, &conv1_Var_4);
    if (succeeded)
      succeeded = MR_TRUE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(
  MR_String Op_2)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
    MR_Box conv3_Var_3;
    MR_Box conv2_Var_4;
    MR_Box conv1_Var_5;

    mercury__ops__init_mercury_op_table_0_f_0();
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 5))));
    succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_2)), &conv3_Var_3, &conv2_Var_4, &conv1_Var_5);
    if (succeeded)
      succeeded = MR_TRUE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(
  MR_String Op_2)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
    MR_Box conv3_Var_3;
    MR_Box conv2_Var_4;
    MR_Box conv1_Var_5;

    mercury__ops__init_mercury_op_table_0_f_0();
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]), (MR_Integer) 0)), (MR_Integer) 7))));
    succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_2)), &conv3_Var_3, &conv2_Var_4, &conv1_Var_5);
    if (succeeded)
      succeeded = MR_TRUE;
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_constant_4_p_0(
  MR_Word TypeClassInfo_for_output_13,
  MR_Word NextToGraphicToken_5,
  MR_Word Const_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Const_6)) == (MR_Integer) 0);
    MR_String Atom_8;

    if (succeeded)
    {
      Atom_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_6, (MR_Integer) 0))));
      parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(TypeClassInfo_for_output_13, NextToGraphicToken_5, Atom_8, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
    }
    else
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 22))));

      func_0(((MR_Box) (TypeClassInfo_for_output_13)), ((MR_Box) (Const_6)), STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_4_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word NextToGraphicToken_5,
  MR_Word Const_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Const_6)) == (MR_Integer) 0);
    MR_String Op_8;
    MR_Word TypeClassInfo_for_op_table_20;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    if (succeeded)
    {
      Op_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_6, (MR_Integer) 0))));
      mercury__ops__init_mercury_op_table_0_f_0();
      TypeClassInfo_for_op_table_20 = (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 9))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_20)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_8)));
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_12_12;
      MR_Box STATE_VARIABLE_U_13_13;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_1(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_12_12);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 20))));
      func_2(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Op_8)), STATE_VARIABLE_U_12_12, &STATE_VARIABLE_U_13_13);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_13_13, STATE_VARIABLE_U_10);
    }
    else
    {
      MR_String Atom_26;

      succeeded = ((MR_tag((MR_Word) Const_6)) == (MR_Integer) 0);
      if (succeeded)
      {
        Atom_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_6, (MR_Integer) 0))));
        parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(TypeClassInfo_for_output_17, NextToGraphicToken_5, Atom_26, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
      }
      else
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 22))));

        func_4(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Const_6)), STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Char_9 = ((MR_Char) (MR_Word) (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__conv0_Char_9);
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = mercury__lexer__graphic_token_char_1_p_0((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Char_9);
    (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = !((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded);
    if ((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded)
      parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), &(env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__conv0_Char_9, (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Chars_8, parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_3, env_ptr);
        (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(
  MR_Word TypeClassInfo_for_output_18,
  MR_Word NextToGraphicToken_5,
  MR_String Name_6,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s env;

    (env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = (NextToGraphicToken_5 == (MR_Integer) 0);
    if ((env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded)
    {
      mercury__string__to_char_list_2_p_0(Name_6, &(env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Chars_8);
      parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_4(&env);
      (env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = !((env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded);
    }
    if ((env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded)
    {
      MR_Box STATE_VARIABLE_U_13_13;
      MR_Box STATE_VARIABLE_U_14_14;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_1(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) ((MR_String) "\'")), STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_13_13);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 25))));
      func_2(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) (Name_6)), STATE_VARIABLE_U_13_13, &STATE_VARIABLE_U_14_14);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) ((MR_String) "\'")), STATE_VARIABLE_U_14_14, STATE_VARIABLE_U_11);
    }
    else
    {
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 20))));

      func_4(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) (Name_6)), STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_4,
  MR_Word Vars_5)
{
  {
    MR_String HeadVar__3_3;
    MR_Word TypeInfo_21_27;
    MR_Word Var_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_HeadVar__3_3;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[1]));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (VarSet_4));
      MR_hl_field(MR_mktag(0), Var_21, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      TypeInfo_21_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_27, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 27))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]))), ((MR_Box) (TypeInfo_21_27)), ((MR_Box) (Vars_5)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_21)), ((MR_Box) ((MR_String) "")), &conv1_HeadVar__3_3);
    HeadVar__3_3 = ((MR_String) (conv1_HeadVar__3_3));
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  {
    MR_String HeadVar__3_3;
    MR_Box conv0_HeadVar__3_3;

    parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(TypeInfo_for_T_7, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_4, (MR_Integer) 0, Var_5, ((MR_Box) ((MR_String) "")), &conv0_HeadVar__3_3);
    HeadVar__3_3 = ((MR_String) (conv0_HeadVar__3_3));
    return HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_output_15,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Vars_8,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word Var_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (TypeClassInfo_for_output_15));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (VarSet_6));
      MR_hl_field(MR_mktag(0), Var_13, 6) = ((MR_Box) (VarNamePrint_7));
    }
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_16));
    }
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 27))));
    func_0(((MR_Box) (TypeClassInfo_for_output_15)), ((MR_Box) (TypeInfo_21_21)), ((MR_Box) (Vars_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_13)), STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Vars_7)
{
  {
    MR_String String_8;
    MR_Word TypeInfo_21_25;
    MR_Word Var_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_String_8;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TypeInfo_for_T_10));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[1]));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (VarSet_5));
      MR_hl_field(MR_mktag(0), Var_19, 6) = ((MR_Box) (VarNamePrint_6));
    }
    {
      TypeInfo_21_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_25, 1) = ((MR_Box) (TypeInfo_for_T_10));
    }
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 27))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]))), ((MR_Box) (TypeInfo_21_25)), ((MR_Box) (Vars_7)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_19)), ((MR_Box) ((MR_String) "")), &conv1_String_8);
    String_8 = ((MR_String) (conv1_String_8));
    return String_8;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Vars_8)
{
  {
    MR_Word TypeInfo_21_28;
    MR_Word Var_22;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_11;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (VarSet_6));
      MR_hl_field(MR_mktag(0), Var_22, 6) = ((MR_Box) (VarNamePrint_7));
    }
    {
      TypeInfo_21_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_28, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 27))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]))), ((MR_Box) (TypeInfo_21_28)), ((MR_Box) (Vars_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_22)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_11);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Var_7)
{
  {
    MR_String String_8;
    MR_Box conv0_String_8;

    parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(TypeInfo_for_T_10, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_5, VarNamePrint_6, Var_7, ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) (conv0_String_8));
    return String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Var_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(TypeInfo_for_T_13, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), VarSet_6, VarNamePrint_7, Var_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeClassInfo_for_output_29,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Var_8,
  MR_Box STATE_VARIABLE_U_0_13,
  MR_Box * STATE_VARIABLE_U_14)
{
  {
    MR_bool succeeded;
    MR_String Name_10;

    succeeded = mercury__varset__search_name_3_p_0(TypeInfo_for_T_30, VarSet_6, Var_8, &Name_10);
    if (succeeded)
      switch (VarNamePrint_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_String ConvertedName_12;
            MR_Box STATE_VARIABLE_U_15_15;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(Name_10, &ConvertedName_12);
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
            func_0(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (ConvertedName_12)), STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_15_15);
            switch (VarNamePrint_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Box STATE_VARIABLE_U_17_17;
                  MR_Integer VarNum_25;
                  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

                  mercury__term__var_to_int_2_p_0(TypeInfo_for_T_30, Var_8, &VarNum_25);
                  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_1(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) "_")), STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_17_17);
                  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 8))));
                  func_2(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (VarNum_25)), STATE_VARIABLE_U_17_17, STATE_VARIABLE_U_14);
                }
                break;
              case (MR_Integer) 0:
                *STATE_VARIABLE_U_14 = STATE_VARIABLE_U_15_15;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer VarNum_11;
            MR_Box STATE_VARIABLE_U_20_20;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

            mercury__term__var_to_int_2_p_0(TypeInfo_for_T_30, Var_8, &VarNum_11);
            func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
            func_3(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) "V_")), STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_20_20);
            func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 8))));
            func_4(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (VarNum_11)), STATE_VARIABLE_U_20_20, STATE_VARIABLE_U_14);
          }
          break;
      }
    else
    {
      MR_Box STATE_VARIABLE_U_23_23;
      MR_Integer VarNum_28;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

      mercury__term__var_to_int_2_p_0(TypeInfo_for_T_30, Var_8, &VarNum_28);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) "V_")), STATE_VARIABLE_U_0_13, &STATE_VARIABLE_U_23_23);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 8))));
      func_6(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (VarNum_28)), STATE_VARIABLE_U_23_23, STATE_VARIABLE_U_14);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(
  MR_String Name_3,
  MR_String * ConvertedName_4)
{
  {
    MR_bool succeeded;
    MR_String Var_5;

    succeeded = mercury__string__remove_suffix_3_p_0(Name_3, (MR_String) "\'", &Var_5);
    if (succeeded)
    {
      MR_String StrippedName_6;
      MR_Integer NumPrimes_7;
      MR_String Var_10;
      MR_String Var_11;
      MR_String Var_13;

      parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(Name_3, &StrippedName_6, &NumPrimes_7);
      Var_13 = mercury__string__int_to_string_1_f_0(NumPrimes_7);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_13);
      Var_10 = mercury__string__f_43_43_2_f_0(StrippedName_6, Var_11);
      *ConvertedName_4 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Var_10);
    }
    else
    {
      succeeded = mercury__string__prefix_2_p_0(Name_3, (MR_String) "V_");
      if (succeeded)
        *ConvertedName_4 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Name_3);
      else
        *ConvertedName_4 = Name_3;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
  MR_String Name0_4,
  MR_String * Name_5,
  MR_Integer * Num_6)
{
  {
    MR_bool succeeded;
    MR_String Name1_7;

    succeeded = mercury__string__remove_suffix_3_p_0(Name0_4, (MR_String) "\'", &Name1_7);
    if (succeeded)
    {
      MR_Integer Num0_8;

      parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(Name1_7, Name_5, &Num0_8);
      *Num_6 = (MR_Integer) ((MR_Unsigned) Num0_8 + (MR_Unsigned) 1);
    }
    else
    {
      *Num_6 = (MR_Integer) 0;
      *Name_5 = Name0_4;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__parse_tree_out_term__init(void)
{
}

void mercury__parse_tree__parse_tree_out_term__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_needs_quotes_0);
}

void mercury__parse_tree__parse_tree_out_term__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_term__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_term.
