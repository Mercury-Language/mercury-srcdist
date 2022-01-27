/*
** Automatically generated from `parse_tree_out_term.m'
** by the Mercury compiler,
** version rotd-2016-05-13
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parse_tree.parse_tree_out_term. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_tree_out_term__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_term.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



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

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(
  MR_String parse_tree__parse_tree_out_term__Op_2);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(
  MR_String parse_tree__parse_tree_out_term__Op_2);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(
  MR_String parse_tree__parse_tree_out_term__Op_2);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(
  MR_String parse_tree__parse_tree_out_term__Op_2);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_constant_4_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
  MR_Word parse_tree__parse_tree_out_term__Const_6,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_4_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
  MR_Word parse_tree__parse_tree_out_term__Const_6,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_23,
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22,
  MR_Word parse_tree__parse_tree_out_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_2,
  MR_Word parse_tree__parse_tree_out_term__HeadVar__3_3,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_5);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_32,
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_term__Term_8,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_16);

static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
  MR_String parse_tree__parse_tree_out_term__Name0_4,
  MR_String * parse_tree__parse_tree_out_term__Name_5,
  MR_Integer * parse_tree__parse_tree_out_term__Num_6);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_1(
  void * parse_tree__parse_tree_out_term__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_3(
  void * parse_tree__parse_tree_out_term__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_2(
  void * parse_tree__parse_tree_out_term__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_4(
  void * parse_tree__parse_tree_out_term__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0_1(
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0_1(
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0_1(
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0 = {
  (MR_String) "next_to_graphic_token",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1 = {
  (MR_String) "not_next_to_graphic_token",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "needs_quotes",
  {     parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0 },
  {     parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_value_ordered_needs_quotes_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0
};

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;

    {
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_2));
    }
    return parse_tree__parse_tree_out_term__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_tree_out_term__conv0_HeadVar__1_1;

    {
      parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(&parse_tree__parse_tree_out_term__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_3));
    }
    *parse_tree__parse_tree_out_term__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_term__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(
  MR_Word * parse_tree__parse_tree_out_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_2,
  MR_Word parse_tree__parse_tree_out_term__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Integer parse_tree__parse_tree_out_term__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_tree_out_term__HeadVar__2_2;
    MR_Integer parse_tree__parse_tree_out_term__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_tree_out_term__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_tree_out_term__HeadVar__1_1, parse_tree__parse_tree_out_term__Cast_HeadVar1_4, parse_tree__parse_tree_out_term__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_1,
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__HeadVar__2_1 == parse_tree__parse_tree_out_term__HeadVar__2_2);

    return parse_tree__parse_tree_out_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(
  MR_String parse_tree__parse_tree_out_term__Op_2)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6;
    MR_Integer parse_tree__parse_tree_out_term__V_3_3;
    MR_Word parse_tree__parse_tree_out_term__V_4_4;
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box parse_tree__parse_tree_out_term__conv2_V_3_3;
    MR_Box parse_tree__parse_tree_out_term__conv1_V_4_4;

    {
      mercury__ops__init_mercury_op_table_0_f_0();
    }
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 8)));
    {
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_2)), &parse_tree__parse_tree_out_term__conv2_V_3_3, &parse_tree__parse_tree_out_term__conv1_V_4_4);
    }
    if (parse_tree__parse_tree_out_term__succeeded)
      {
        parse_tree__parse_tree_out_term__V_3_3 = ((MR_Integer) parse_tree__parse_tree_out_term__conv2_V_3_3);
        parse_tree__parse_tree_out_term__V_4_4 = ((MR_Word) parse_tree__parse_tree_out_term__conv1_V_4_4);
        parse_tree__parse_tree_out_term__succeeded = MR_TRUE;
      }
    return parse_tree__parse_tree_out_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(
  MR_String parse_tree__parse_tree_out_term__Op_2)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6;
    MR_Integer parse_tree__parse_tree_out_term__V_3_3;
    MR_Word parse_tree__parse_tree_out_term__V_4_4;
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
    MR_Box parse_tree__parse_tree_out_term__conv2_V_3_3;
    MR_Box parse_tree__parse_tree_out_term__conv1_V_4_4;

    {
      mercury__ops__init_mercury_op_table_0_f_0();
    }
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 6)));
    {
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_2)), &parse_tree__parse_tree_out_term__conv2_V_3_3, &parse_tree__parse_tree_out_term__conv1_V_4_4);
    }
    if (parse_tree__parse_tree_out_term__succeeded)
      {
        parse_tree__parse_tree_out_term__V_3_3 = ((MR_Integer) parse_tree__parse_tree_out_term__conv2_V_3_3);
        parse_tree__parse_tree_out_term__V_4_4 = ((MR_Word) parse_tree__parse_tree_out_term__conv1_V_4_4);
        parse_tree__parse_tree_out_term__succeeded = MR_TRUE;
      }
    return parse_tree__parse_tree_out_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(
  MR_String parse_tree__parse_tree_out_term__Op_2)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7;
    MR_Integer parse_tree__parse_tree_out_term__V_3_3;
    MR_Word parse_tree__parse_tree_out_term__V_4_4;
    MR_Word parse_tree__parse_tree_out_term__V_5_5;
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
    MR_Box parse_tree__parse_tree_out_term__conv3_V_3_3;
    MR_Box parse_tree__parse_tree_out_term__conv2_V_4_4;
    MR_Box parse_tree__parse_tree_out_term__conv1_V_5_5;

    {
      mercury__ops__init_mercury_op_table_0_f_0();
    }
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_2)), &parse_tree__parse_tree_out_term__conv3_V_3_3, &parse_tree__parse_tree_out_term__conv2_V_4_4, &parse_tree__parse_tree_out_term__conv1_V_5_5);
    }
    if (parse_tree__parse_tree_out_term__succeeded)
      {
        parse_tree__parse_tree_out_term__V_3_3 = ((MR_Integer) parse_tree__parse_tree_out_term__conv3_V_3_3);
        parse_tree__parse_tree_out_term__V_4_4 = ((MR_Word) parse_tree__parse_tree_out_term__conv2_V_4_4);
        parse_tree__parse_tree_out_term__V_5_5 = ((MR_Word) parse_tree__parse_tree_out_term__conv1_V_5_5);
        parse_tree__parse_tree_out_term__succeeded = MR_TRUE;
      }
    return parse_tree__parse_tree_out_term__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(
  MR_String parse_tree__parse_tree_out_term__Op_2)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7;
    MR_Integer parse_tree__parse_tree_out_term__V_3_3;
    MR_Word parse_tree__parse_tree_out_term__V_4_4;
    MR_Word parse_tree__parse_tree_out_term__V_5_5;
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
    MR_Box parse_tree__parse_tree_out_term__conv3_V_3_3;
    MR_Box parse_tree__parse_tree_out_term__conv2_V_4_4;
    MR_Box parse_tree__parse_tree_out_term__conv1_V_5_5;

    {
      mercury__ops__init_mercury_op_table_0_f_0();
    }
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_2)), &parse_tree__parse_tree_out_term__conv3_V_3_3, &parse_tree__parse_tree_out_term__conv2_V_4_4, &parse_tree__parse_tree_out_term__conv1_V_5_5);
    }
    if (parse_tree__parse_tree_out_term__succeeded)
      {
        parse_tree__parse_tree_out_term__V_3_3 = ((MR_Integer) parse_tree__parse_tree_out_term__conv3_V_3_3);
        parse_tree__parse_tree_out_term__V_4_4 = ((MR_Word) parse_tree__parse_tree_out_term__conv2_V_4_4);
        parse_tree__parse_tree_out_term__V_5_5 = ((MR_Word) parse_tree__parse_tree_out_term__conv1_V_5_5);
        parse_tree__parse_tree_out_term__succeeded = MR_TRUE;
      }
    return parse_tree__parse_tree_out_term__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_constant_4_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
  MR_Word parse_tree__parse_tree_out_term__Const_6,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Const_6)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__parse_tree_out_term__Atom_8;

    if (parse_tree__parse_tree_out_term__succeeded)
      {
        parse_tree__parse_tree_out_term__Atom_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Const_6, (MR_Integer) 0)));
        {
          parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13, parse_tree__parse_tree_out_term__NextToGraphicToken_5, parse_tree__parse_tree_out_term__Atom_8, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
        }
      }
    else
      {
        void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 13)));

        {
          parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13), ((MR_Box) (parse_tree__parse_tree_out_term__Const_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_4_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
  MR_Word parse_tree__parse_tree_out_term__Const_6,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Const_6)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__parse_tree_out_term__Op_8;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_20;
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box);

    if (parse_tree__parse_tree_out_term__succeeded)
      {
        parse_tree__parse_tree_out_term__Op_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Const_6, (MR_Integer) 0)));
        {
          mercury__ops__init_mercury_op_table_0_f_0();
        }
        parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_20 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
        parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 9)));
        {
          parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_20), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_8)));
        }
      }
    if (parse_tree__parse_tree_out_term__succeeded)
      {
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12;
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13;
        void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_term__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_term__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12);
        }
        parse_tree__parse_tree_out_term__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 11)));
        {
          parse_tree__parse_tree_out_term__func_2(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_term__Op_8)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13);
        }
        parse_tree__parse_tree_out_term__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_term__func_3(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
        }
      }
    else
      {
        MR_String parse_tree__parse_tree_out_term__Atom_26;

        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Const_6)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_tree_out_term__succeeded)
          {
            parse_tree__parse_tree_out_term__Atom_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Const_6, (MR_Integer) 0)));
            {
              parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, parse_tree__parse_tree_out_term__NextToGraphicToken_5, parse_tree__parse_tree_out_term__Atom_26, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
            }
          }
        else
          {
            void MR_CALL (* parse_tree__parse_tree_out_term__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 13)));

            {
              parse_tree__parse_tree_out_term__func_4(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_term__Const_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_23,
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22,
  MR_Word parse_tree__parse_tree_out_term__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_2,
  MR_Word parse_tree__parse_tree_out_term__HeadVar__3_3,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_term__succeeded;

        if ((parse_tree__parse_tree_out_term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_tree_out_term__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4;
        else
          {
            MR_Word parse_tree__parse_tree_out_term__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_term__Terms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__HeadVar__3_3, (MR_Integer) 1)));
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_19_19;
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20;
            void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_19_19);
            }
            {
              parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_23, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22, parse_tree__parse_tree_out_term__HeadVar__1_1, parse_tree__parse_tree_out_term__HeadVar__2_2, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_13, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_tree_out_term__HeadVar__3__tmp_copy_3 = parse_tree__parse_tree_out_term__Terms_14;
              MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_4 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20;

              parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_4;
              parse_tree__parse_tree_out_term__HeadVar__3_3 = parse_tree__parse_tree_out_term__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_32,
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_term__Term_8,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Term_8)) == (MR_mktag((MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_term__X_12;
        MR_Word parse_tree__parse_tree_out_term__Xs_13;
        MR_Word parse_tree__parse_tree_out_term__Args_10;
        MR_Word parse_tree__parse_tree_out_term__V_17_17;
        MR_String parse_tree__parse_tree_out_term__V_18_18;
        MR_Word parse_tree__parse_tree_out_term__V_19_19;
        MR_Word parse_tree__parse_tree_out_term__V_20_20;
        MR_Word parse_tree__parse_tree_out_term__V_11_11;

        if (parse_tree__parse_tree_out_term__succeeded)
          {
            parse_tree__parse_tree_out_term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 0)));
            parse_tree__parse_tree_out_term__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 1)));
            parse_tree__parse_tree_out_term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 2)));
            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_17_17)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_tree_out_term__succeeded)
              {
                parse_tree__parse_tree_out_term__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_17_17, (MR_Integer) 0)));
                parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_18_18, (MR_String) "[|]") == 0);
                if (parse_tree__parse_tree_out_term__succeeded)
                  {
                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_10)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_tree_out_term__succeeded)
                      {
                        parse_tree__parse_tree_out_term__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_10, (MR_Integer) 0)));
                        parse_tree__parse_tree_out_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_10, (MR_Integer) 1)));
                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_tree_out_term__succeeded)
                          {
                            parse_tree__parse_tree_out_term__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_tree_out_term__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_tree_out_term__succeeded)
          {
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_22_22;
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23;
            void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));

            {
              parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_22_22);
            }
            {
              parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_32, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__X_12, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_tree_out_term__Term__tmp_copy_8 = parse_tree__parse_tree_out_term__Xs_13;
              MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_15 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23;

              parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_15;
              parse_tree__parse_tree_out_term__Term_8 = parse_tree__parse_tree_out_term__Term__tmp_copy_8;
            }
            continue;
          }
        else
          {
            MR_Word parse_tree__parse_tree_out_term__V_25_25;
            MR_String parse_tree__parse_tree_out_term__V_26_26;
            MR_Word parse_tree__parse_tree_out_term__V_27_27;
            MR_Word parse_tree__parse_tree_out_term__V_14_14;

            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Term_8)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_tree_out_term__succeeded)
              {
                parse_tree__parse_tree_out_term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 0)));
                parse_tree__parse_tree_out_term__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 1)));
                parse_tree__parse_tree_out_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 2)));
                parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__parse_tree_out_term__succeeded)
                  {
                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_25_25)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__parse_tree_out_term__succeeded)
                      {
                        parse_tree__parse_tree_out_term__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_25_25, (MR_Integer) 0)));
                        parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_26_26, (MR_String) "[]") == 0);
                      }
                  }
              }
            if (parse_tree__parse_tree_out_term__succeeded)
              *parse_tree__parse_tree_out_term__STATE_VARIABLE_U_16 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15;
            else
              {
                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_29_29;
                void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));

                {
                  parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) " | ")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_29_29);
                }
                {
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_32, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_8, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_29_29, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_16);
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
  MR_String parse_tree__parse_tree_out_term__Name0_4,
  MR_String * parse_tree__parse_tree_out_term__Name_5,
  MR_Integer * parse_tree__parse_tree_out_term__Num_6)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__Name1_7;

    {
      parse_tree__parse_tree_out_term__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__parse_tree_out_term__Name0_4, (MR_String) "\'", &parse_tree__parse_tree_out_term__Name1_7);
    }
    if (parse_tree__parse_tree_out_term__succeeded)
      {
        MR_Integer parse_tree__parse_tree_out_term__Num0_8;

        {
          parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(parse_tree__parse_tree_out_term__Name1_7, parse_tree__parse_tree_out_term__Name_5, &parse_tree__parse_tree_out_term__Num0_8);
        }
        *parse_tree__parse_tree_out_term__Num_6 = (parse_tree__parse_tree_out_term__Num0_8 + (MR_Integer) 1);
      }
    else
      {
        *parse_tree__parse_tree_out_term__Num_6 = (MR_Integer) 0;
        *parse_tree__parse_tree_out_term__Name_5 = parse_tree__parse_tree_out_term__Name0_4;
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_1(
  void * parse_tree__parse_tree_out_term__env_ptr_arg)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * parse_tree__parse_tree_out_term__env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) parse_tree__parse_tree_out_term__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_3(
  void * parse_tree__parse_tree_out_term__env_ptr_arg)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * parse_tree__parse_tree_out_term__env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) parse_tree__parse_tree_out_term__env_ptr_arg;

    (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Char_9 = ((MR_Char) (MR_Word) (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__conv0_Char_9);
    {
      parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_2(parse_tree__parse_tree_out_term__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_2(
  void * parse_tree__parse_tree_out_term__env_ptr_arg)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * parse_tree__parse_tree_out_term__env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) parse_tree__parse_tree_out_term__env_ptr_arg;

    {
      (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = mercury__lexer__graphic_token_char_1_p_0((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Char_9);
    }
    (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = !((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded);
    if ((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded)
      {
        parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_1(parse_tree__parse_tree_out_term__env_ptr);
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_4(
  void * parse_tree__parse_tree_out_term__env_ptr_arg)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * parse_tree__parse_tree_out_term__env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) parse_tree__parse_tree_out_term__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, &(parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__conv0_Char_9, (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Chars_8, parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_3, parse_tree__parse_tree_out_term__env_ptr);
          }
        }
        (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
  MR_String parse_tree__parse_tree_out_term__Name_6,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11)
{
  {
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s parse_tree__parse_tree_out_term__env;

    (parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = (parse_tree__parse_tree_out_term__NextToGraphicToken_5 == (MR_Integer) 0);
    if ((parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded)
      {
        {
          mercury__string__to_char_list_2_p_0(parse_tree__parse_tree_out_term__Name_6, &(parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Chars_8);
        }
        {
          parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_4(&parse_tree__parse_tree_out_term__env);
        }
        (parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = !((parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded);
      }
    if ((parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded)
      {
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13;
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14;
        void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_term__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_term__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\'")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13);
        }
        parse_tree__parse_tree_out_term__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 16)));
        {
          parse_tree__parse_tree_out_term__func_2(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18), ((MR_Box) (parse_tree__parse_tree_out_term__Name_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14);
        }
        parse_tree__parse_tree_out_term__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_term__func_3(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\'")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11);
        }
      }
    else
      {
        void MR_CALL (* parse_tree__parse_tree_out_term__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 11)));

        {
          parse_tree__parse_tree_out_term__func_4(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18), ((MR_Box) (parse_tree__parse_tree_out_term__Name_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11);
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_4_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
  MR_String parse_tree__parse_tree_out_term__Name_6,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_8,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_9)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_19;
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box);

    {
      mercury__ops__init_mercury_op_table_0_f_0();
    }
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_19 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_19, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_19), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Name_6)));
    }
    if (parse_tree__parse_tree_out_term__succeeded)
      {
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11_11;
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12;
        void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_term__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_term__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_8, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11_11);
        }
        parse_tree__parse_tree_out_term__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 11)));
        {
          parse_tree__parse_tree_out_term__func_2(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16), ((MR_Box) (parse_tree__parse_tree_out_term__Name_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11_11, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12);
        }
        parse_tree__parse_tree_out_term__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_term__func_3(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_9);
        }
      }
    else
      {
        parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_term__NextToGraphicToken_5, parse_tree__parse_tree_out_term__Name_6, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_8, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_9);
      }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_36,
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_9,
  MR_Integer parse_tree__parse_tree_out_term__Limit_10,
  MR_Word parse_tree__parse_tree_out_term__Term_11)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__String_12;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_37 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1];
    MR_String parse_tree__parse_tree_out_term__FullString_13;
    MR_Integer parse_tree__parse_tree_out_term__FullLen_14;
    MR_Box parse_tree__parse_tree_out_term__conv0_FullString_13;

    {
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_36, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_37, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__Term_11, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_FullString_13);
    }
    parse_tree__parse_tree_out_term__FullString_13 = ((MR_String) parse_tree__parse_tree_out_term__conv0_FullString_13);
    {
      parse_tree__parse_tree_out_term__FullLen_14 = mercury__string__count_codepoints_1_f_0(parse_tree__parse_tree_out_term__FullString_13);
    }
    parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__FullLen_14 <= parse_tree__parse_tree_out_term__Limit_10);
    if (parse_tree__parse_tree_out_term__succeeded)
      parse_tree__parse_tree_out_term__String_12 = parse_tree__parse_tree_out_term__FullString_13;
    else
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Term_11)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_tree_out_term__Functor_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_11, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_term__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_11, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_out_term__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_11, (MR_Integer) 2)));
        MR_Word parse_tree__parse_tree_out_term__NoArgTerm_20;
        MR_String parse_tree__parse_tree_out_term__FunctorString_21;
        MR_Box parse_tree__parse_tree_out_term__conv1_FunctorString_21;

        {
          parse_tree__parse_tree_out_term__NoArgTerm_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__NoArgTerm_20, 0) = ((MR_Box) (parse_tree__parse_tree_out_term__Functor_17));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__NoArgTerm_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__NoArgTerm_20, 2) = ((MR_Box) (parse_tree__parse_tree_out_term__Context_19));
        }
        {
          parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_36, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_37, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__NoArgTerm_20, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv1_FunctorString_21);
        }
        parse_tree__parse_tree_out_term__FunctorString_21 = ((MR_String) parse_tree__parse_tree_out_term__conv1_FunctorString_21);
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out_term__TypeInfo_39_39;
              MR_String parse_tree__parse_tree_out_term__ArityStr_23;
              MR_Integer parse_tree__parse_tree_out_term__V_33_33;
              MR_String parse_tree__parse_tree_out_term__V_34_34;

              {
                parse_tree__parse_tree_out_term__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_39_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_39_39, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_36));
              }
              {
                parse_tree__parse_tree_out_term__V_33_33 = mercury__list__length_1_f_0(parse_tree__parse_tree_out_term__TypeInfo_39_39, (MR_Word) parse_tree__parse_tree_out_term__Args_18);
              }
              {
                parse_tree__parse_tree_out_term__ArityStr_23 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_out_term__V_33_33);
              }
              {
                parse_tree__parse_tree_out_term__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__parse_tree_out_term__ArityStr_23);
              }
              {
                parse_tree__parse_tree_out_term__String_12 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_term__FunctorString_21, parse_tree__parse_tree_out_term__V_34_34);
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            parse_tree__parse_tree_out_term__String_12 = parse_tree__parse_tree_out_term__FunctorString_21;
            break;
          case (MR_Integer) 3:
            parse_tree__parse_tree_out_term__String_12 = parse_tree__parse_tree_out_term__FunctorString_21;
            break;
        }
      }
    else
      parse_tree__parse_tree_out_term__String_12 = parse_tree__parse_tree_out_term__FullString_13;
    return parse_tree__parse_tree_out_term__String_12;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_nq_7_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_18,
  MR_Word parse_tree__parse_tree_out_term__VarSet_8,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_9,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_10,
  MR_Integer parse_tree__parse_tree_out_term__Limit_11,
  MR_Word parse_tree__parse_tree_out_term__Term_12)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__V_16_16;

    {
      parse_tree__parse_tree_out_term__V_16_16 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_18, parse_tree__parse_tree_out_term__VarSet_8, parse_tree__parse_tree_out_term__VarNamePrint_9, parse_tree__parse_tree_out_term__NextToGraphicToken_10, parse_tree__parse_tree_out_term__Limit_11, parse_tree__parse_tree_out_term__Term_12);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_term__V_16_16);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_to_string_4_f_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_11,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Integer parse_tree__parse_tree_out_term__Limit_8,
  MR_Word parse_tree__parse_tree_out_term__Term_9)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__HeadVar__5_5;

    {
      parse_tree__parse_tree_out_term__HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_11, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__Limit_8, parse_tree__parse_tree_out_term__Term_9);
    }
    return parse_tree__parse_tree_out_term__HeadVar__5_5;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_6_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_16,
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
  MR_Integer parse_tree__parse_tree_out_term__Limit_9,
  MR_Word parse_tree__parse_tree_out_term__Term_10)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__V_25_25;

    {
      parse_tree__parse_tree_out_term__V_25_25 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_16, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 1, parse_tree__parse_tree_out_term__Limit_9, parse_tree__parse_tree_out_term__Term_10);
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_term__V_25_25);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_17,
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16,
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
  MR_Word parse_tree__parse_tree_out_term__HeadTerm_9,
  MR_Word parse_tree__parse_tree_out_term__TailTerms_10,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_12,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14;

    {
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_17, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 1, parse_tree__parse_tree_out_term__HeadTerm_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_12, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14);
    }
    {
      parse_tree__parse_tree_out_term__mercury_format_remaining_terms_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_17, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__TailTerms_10, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_131,
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130,
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_9,
  MR_Word parse_tree__parse_tree_out_term__Term_10,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_term__succeeded;

        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Term_10)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_tree_out_term__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_term__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 1)));
            MR_Word parse_tree__parse_tree_out_term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 2)));
            MR_Word parse_tree__parse_tree_out_term__F_17;
            MR_Word parse_tree__parse_tree_out_term__X_18;
            MR_Word parse_tree__parse_tree_out_term__Xs_19;
            MR_String parse_tree__parse_tree_out_term__V_31_31;
            MR_Word parse_tree__parse_tree_out_term__V_32_32;

            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_tree_out_term__succeeded)
              {
                parse_tree__parse_tree_out_term__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
                parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_31_31, (MR_String) "") == 0);
                if (parse_tree__parse_tree_out_term__succeeded)
                  {
                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_tree_out_term__succeeded)
                      {
                        parse_tree__parse_tree_out_term__F_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
                        parse_tree__parse_tree_out_term__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_32_32)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_tree_out_term__succeeded)
                          {
                            parse_tree__parse_tree_out_term__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_32_32, (MR_Integer) 0)));
                            parse_tree__parse_tree_out_term__Xs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_32_32, (MR_Integer) 1)));
                          }
                      }
                  }
              }
            if (parse_tree__parse_tree_out_term__succeeded)
              {
                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_33_33;
                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_35_35;
                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_36_36;

                {
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__F_17, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_33_33);
                }
                {
                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_35_35);
                }
                {
                  parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__X_18, parse_tree__parse_tree_out_term__Xs_19, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_36_36);
                }
                {
                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_36_36, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                }
              }
            else
              {
                MR_Word parse_tree__parse_tree_out_term__X_128;
                MR_Word parse_tree__parse_tree_out_term__Xs_129;
                MR_String parse_tree__parse_tree_out_term__V_39_39;
                MR_Word parse_tree__parse_tree_out_term__V_40_40;
                MR_Word parse_tree__parse_tree_out_term__V_41_41;

                parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_tree_out_term__succeeded)
                  {
                    parse_tree__parse_tree_out_term__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
                    parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_39_39, (MR_String) "[|]") == 0);
                    if (parse_tree__parse_tree_out_term__succeeded)
                      {
                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_tree_out_term__succeeded)
                          {
                            parse_tree__parse_tree_out_term__X_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
                            parse_tree__parse_tree_out_term__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_tree_out_term__succeeded)
                              {
                                parse_tree__parse_tree_out_term__Xs_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_40_40, (MR_Integer) 0)));
                                parse_tree__parse_tree_out_term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_40_40, (MR_Integer) 1)));
                                parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
                if (parse_tree__parse_tree_out_term__succeeded)
                  {
                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_43_43;
                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_44_44;
                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_45_45;

                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "[", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_43_43);
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__X_128, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_44_44);
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_format_list_args_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__Xs_129, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_44_44, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_45_45);
                    }
                    {
                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "]", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_45_45, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_tree_out_term__X_126;
                    MR_String parse_tree__parse_tree_out_term__V_48_48;
                    MR_Word parse_tree__parse_tree_out_term__V_49_49;

                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__parse_tree_out_term__succeeded)
                      {
                        parse_tree__parse_tree_out_term__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
                        parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_48_48, (MR_String) "{}") == 0);
                        if (parse_tree__parse_tree_out_term__succeeded)
                          {
                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_tree_out_term__succeeded)
                              {
                                parse_tree__parse_tree_out_term__X_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
                                parse_tree__parse_tree_out_term__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
                                parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                    if (parse_tree__parse_tree_out_term__succeeded)
                      {
                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_51_51;
                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_52_52;

                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "{ ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_51_51);
                        }
                        {
                          parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__X_126, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_51_51, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_52_52);
                        }
                        {
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " }", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_52_52, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_tree_out_term__X_124;
                        MR_Word parse_tree__parse_tree_out_term__Xs_125;
                        MR_String parse_tree__parse_tree_out_term__V_55_55;

                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
                        if (parse_tree__parse_tree_out_term__succeeded)
                          {
                            parse_tree__parse_tree_out_term__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
                            parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_55_55, (MR_String) "{}") == 0);
                            if (parse_tree__parse_tree_out_term__succeeded)
                              {
                                parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
                                if (parse_tree__parse_tree_out_term__succeeded)
                                  {
                                    parse_tree__parse_tree_out_term__X_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
                                    parse_tree__parse_tree_out_term__Xs_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
                                  }
                              }
                          }
                        if (parse_tree__parse_tree_out_term__succeeded)
                          {
                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_57_57;
                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_58_58;

                            {
                              parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "{", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_57_57);
                            }
                            {
                              parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__X_124, parse_tree__parse_tree_out_term__Xs_125, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_57_57, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_58_58);
                            }
                            {
                              parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "}", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_58_58, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                            }
                          }
                        else
                          {
                            MR_Word parse_tree__parse_tree_out_term__BinaryPrefixArg1_20;
                            MR_Word parse_tree__parse_tree_out_term__BinaryPrefixArg2_21;
                            MR_String parse_tree__parse_tree_out_term__FunctorName_22;
                            MR_Word parse_tree__parse_tree_out_term__V_61_61;
                            MR_Word parse_tree__parse_tree_out_term__V_62_62;

                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_tree_out_term__succeeded)
                              {
                                parse_tree__parse_tree_out_term__BinaryPrefixArg1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
                                parse_tree__parse_tree_out_term__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
                                parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_61_61)) == (MR_mktag((MR_Integer) 1)));
                                if (parse_tree__parse_tree_out_term__succeeded)
                                  {
                                    parse_tree__parse_tree_out_term__BinaryPrefixArg2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_61_61, (MR_Integer) 0)));
                                    parse_tree__parse_tree_out_term__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_61_61, (MR_Integer) 1)));
                                    parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (parse_tree__parse_tree_out_term__succeeded)
                                      {
                                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
                                        if (parse_tree__parse_tree_out_term__succeeded)
                                          {
                                            parse_tree__parse_tree_out_term__FunctorName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
                                            {
                                              parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(parse_tree__parse_tree_out_term__FunctorName_22);
                                            }
                                          }
                                      }
                                  }
                              }
                            if (parse_tree__parse_tree_out_term__succeeded)
                              {
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_64_64;
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_65_65;
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_67_67;
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_68_68;
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_70_70;
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_71_71;

                                {
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_64_64);
                                }
                                {
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__FunctorName_22, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_64_64, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_65_65);
                                }
                                {
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_65_65, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_67_67);
                                }
                                {
                                  parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__BinaryPrefixArg1_20, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_67_67, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_68_68);
                                }
                                {
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_68_68, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_70_70);
                                }
                                {
                                  parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__BinaryPrefixArg2_21, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_70_70, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_71_71);
                                }
                                {
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_71_71, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                                }
                              }
                            else
                              {
                                MR_Word parse_tree__parse_tree_out_term__PrefixArg_23;
                                MR_String parse_tree__parse_tree_out_term__FunctorName_123;
                                MR_Word parse_tree__parse_tree_out_term__V_74_74;

                                parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
                                if (parse_tree__parse_tree_out_term__succeeded)
                                  {
                                    parse_tree__parse_tree_out_term__PrefixArg_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
                                    parse_tree__parse_tree_out_term__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
                                    parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (parse_tree__parse_tree_out_term__succeeded)
                                      {
                                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
                                        if (parse_tree__parse_tree_out_term__succeeded)
                                          {
                                            parse_tree__parse_tree_out_term__FunctorName_123 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
                                            {
                                              parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(parse_tree__parse_tree_out_term__FunctorName_123);
                                            }
                                          }
                                      }
                                  }
                                if (parse_tree__parse_tree_out_term__succeeded)
                                  {
                                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_76_76;
                                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_77_77;
                                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_79_79;
                                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_80_80;

                                    {
                                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_76_76);
                                    }
                                    {
                                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__FunctorName_123, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_76_76, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_77_77);
                                    }
                                    {
                                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_77_77, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_79_79);
                                    }
                                    {
                                      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__PrefixArg_23, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_79_79, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_80_80);
                                    }
                                    {
                                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_80_80, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                                    }
                                  }
                                else
                                  {
                                    MR_Word parse_tree__parse_tree_out_term__PostfixArg_24;
                                    MR_String parse_tree__parse_tree_out_term__FunctorName_122;
                                    MR_Word parse_tree__parse_tree_out_term__V_83_83;

                                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
                                    if (parse_tree__parse_tree_out_term__succeeded)
                                      {
                                        parse_tree__parse_tree_out_term__PostfixArg_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
                                        parse_tree__parse_tree_out_term__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
                                        parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (parse_tree__parse_tree_out_term__succeeded)
                                          {
                                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
                                            if (parse_tree__parse_tree_out_term__succeeded)
                                              {
                                                parse_tree__parse_tree_out_term__FunctorName_122 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
                                                {
                                                  parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(parse_tree__parse_tree_out_term__FunctorName_122);
                                                }
                                              }
                                          }
                                      }
                                    if (parse_tree__parse_tree_out_term__succeeded)
                                      {
                                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_85_85;
                                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_86_86;
                                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_88_88;
                                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_89_89;

                                        {
                                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_85_85);
                                        }
                                        {
                                          parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__PostfixArg_24, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_85_85, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_86_86);
                                        }
                                        {
                                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_86_86, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_88_88);
                                        }
                                        {
                                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__FunctorName_122, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_88_88, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_89_89);
                                        }
                                        {
                                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_89_89, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                                        }
                                      }
                                    else
                                      {
                                        MR_Word parse_tree__parse_tree_out_term__Arg1_25;
                                        MR_Word parse_tree__parse_tree_out_term__Arg2_26;
                                        MR_String parse_tree__parse_tree_out_term__FunctorName_121;
                                        MR_Word parse_tree__parse_tree_out_term__V_92_92;
                                        MR_Word parse_tree__parse_tree_out_term__V_93_93;

                                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
                                        if (parse_tree__parse_tree_out_term__succeeded)
                                          {
                                            parse_tree__parse_tree_out_term__Arg1_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
                                            parse_tree__parse_tree_out_term__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
                                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_92_92)) == (MR_mktag((MR_Integer) 1)));
                                            if (parse_tree__parse_tree_out_term__succeeded)
                                              {
                                                parse_tree__parse_tree_out_term__Arg2_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_92_92, (MR_Integer) 0)));
                                                parse_tree__parse_tree_out_term__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_92_92, (MR_Integer) 1)));
                                                parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (parse_tree__parse_tree_out_term__succeeded)
                                                  {
                                                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
                                                    if (parse_tree__parse_tree_out_term__succeeded)
                                                      {
                                                        parse_tree__parse_tree_out_term__FunctorName_121 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
                                                        {
                                                          parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(parse_tree__parse_tree_out_term__FunctorName_121);
                                                        }
                                                      }
                                                  }
                                              }
                                          }
                                        if (parse_tree__parse_tree_out_term__succeeded)
                                          {
                                            parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__FunctorName_121, (MR_String) ".") == 0);
                                            if (parse_tree__parse_tree_out_term__succeeded)
                                              {
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_95_95;
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_97_97;

                                                {
                                                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 0, parse_tree__parse_tree_out_term__Arg1_25, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_95_95);
                                                }
                                                {
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ".", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_95_95, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_97_97);
                                                }
                                                /* direct tailcall eliminated */
                                                {
                                                  MR_Word parse_tree__parse_tree_out_term__Term__tmp_copy_10 = parse_tree__parse_tree_out_term__Arg2_26;
                                                  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_29 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_97_97;

                                                  parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_29;
                                                  parse_tree__parse_tree_out_term__Term_10 = parse_tree__parse_tree_out_term__Term__tmp_copy_10;
                                                  parse_tree__parse_tree_out_term__NextToGraphicToken_9 = (MR_Integer) 0;
                                                }
                                                continue;
                                              }
                                            else
                                              {
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_101_101;
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_103_103;
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_105_105;
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_106_106;
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_108_108;
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_110_110;

                                                {
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_101_101);
                                                }
                                                {
                                                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 1, parse_tree__parse_tree_out_term__Arg1_25, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_101_101, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_103_103);
                                                }
                                                {
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_103_103, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_105_105);
                                                }
                                                {
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__FunctorName_121, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_105_105, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_106_106);
                                                }
                                                {
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_106_106, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_108_108);
                                                }
                                                {
                                                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 1, parse_tree__parse_tree_out_term__Arg2_26, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_108_108, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_110_110);
                                                }
                                                {
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_110_110, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                                                }
                                              }
                                          }
                                        else
                                        if ((parse_tree__parse_tree_out_term__Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                          {
                                            parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__Functor_14, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                                          }
                                        else
                                          {
                                            MR_Word parse_tree__parse_tree_out_term__Y_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
                                            MR_Word parse_tree__parse_tree_out_term__Ys_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
                                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_114_114;
                                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_116_116;
                                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_117_117;

                                            {
                                              parse_tree__parse_tree_out_term__mercury_format_constant_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__Functor_14, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_114_114);
                                            }
                                            {
                                              parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_114_114, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_116_116);
                                            }
                                            {
                                              parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__Y_27, parse_tree__parse_tree_out_term__Ys_28, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_116_116, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_117_117);
                                            }
                                            {
                                              parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_117_117, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
                                            }
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
            MR_Word parse_tree__parse_tree_out_term__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 1)));

            {
              parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__Var_12, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
            }
          }
      }
      break;
    }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_12,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_8,
  MR_Word parse_tree__parse_tree_out_term__Term_9)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__String_10;
    MR_Box parse_tree__parse_tree_out_term__conv0_String_10;

    {
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_12, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1], parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, parse_tree__parse_tree_out_term__NextToGraphicToken_8, parse_tree__parse_tree_out_term__Term_9, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_String_10);
    }
    parse_tree__parse_tree_out_term__String_10 = ((MR_String) parse_tree__parse_tree_out_term__conv0_String_10);
    return parse_tree__parse_tree_out_term__String_10;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_15,
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_9,
  MR_Word parse_tree__parse_tree_out_term__Term_10)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Box parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_13;

    {
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_15, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[0], parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__Term_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_13);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_15,
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_term__Term_8,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;

    {
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_15, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_8, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_9,
  MR_Word parse_tree__parse_tree_out_term__VarSet_5,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_6,
  MR_Word parse_tree__parse_tree_out_term__Term_7)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__HeadVar__4_4;
    MR_Box parse_tree__parse_tree_out_term__conv0_HeadVar__4_4;

    {
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_9, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1], parse_tree__parse_tree_out_term__VarSet_5, parse_tree__parse_tree_out_term__VarNamePrint_6, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_7, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_HeadVar__4_4);
    }
    parse_tree__parse_tree_out_term__HeadVar__4_4 = ((MR_String) parse_tree__parse_tree_out_term__conv0_HeadVar__4_4);
    return parse_tree__parse_tree_out_term__HeadVar__4_4;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_14,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_term__Term_8)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Box parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_14, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[0], parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__describe_error_term_2_f_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_8,
  MR_Word parse_tree__parse_tree_out_term__VarSet_4,
  MR_Word parse_tree__parse_tree_out_term__Term_5)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__HeadVar__3_3;

    {
      parse_tree__parse_tree_out_term__HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_8, parse_tree__parse_tree_out_term__VarSet_4, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 80, parse_tree__parse_tree_out_term__Term_5);
    }
    return parse_tree__parse_tree_out_term__HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0_1(
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_term__closure = parse_tree__parse_tree_out_term__closure_arg;

    {
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), parse_tree__parse_tree_out_term__wrapper_arg_2, parse_tree__parse_tree_out_term__wrapper_arg_3);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_7,
  MR_Word parse_tree__parse_tree_out_term__VarSet_4,
  MR_Word parse_tree__parse_tree_out_term__Vars_5)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__HeadVar__3_3;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1];
    MR_Word parse_tree__parse_tree_out_term__TypeInfo_21_27;
    MR_Word parse_tree__parse_tree_out_term__V_21_21;
    void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_term__conv1_HeadVar__3_3;

    {
      parse_tree__parse_tree_out_term__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 3) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 4) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 5) = ((MR_Box) (parse_tree__parse_tree_out_term__VarSet_4));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      parse_tree__parse_tree_out_term__TypeInfo_21_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_27, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_7));
    }
    parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 18)));
    {
      parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13), ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_21_27)), ((MR_Box) (parse_tree__parse_tree_out_term__Vars_5)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_term__V_21_21)), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv1_HeadVar__3_3);
    }
    parse_tree__parse_tree_out_term__HeadVar__3_3 = ((MR_String) parse_tree__parse_tree_out_term__conv1_HeadVar__3_3);
    return parse_tree__parse_tree_out_term__HeadVar__3_3;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_7,
  MR_Word parse_tree__parse_tree_out_term__VarSet_4,
  MR_Word parse_tree__parse_tree_out_term__Var_5)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__HeadVar__3_3;
    MR_Box parse_tree__parse_tree_out_term__conv0_HeadVar__3_3;

    {
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_7, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1], parse_tree__parse_tree_out_term__VarSet_4, (MR_Integer) 0, parse_tree__parse_tree_out_term__Var_5, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_HeadVar__3_3);
    }
    parse_tree__parse_tree_out_term__HeadVar__3_3 = ((MR_String) parse_tree__parse_tree_out_term__conv0_HeadVar__3_3);
    return parse_tree__parse_tree_out_term__HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0_1(
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_term__closure = parse_tree__parse_tree_out_term__closure_arg;

    {
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), parse_tree__parse_tree_out_term__wrapper_arg_2, parse_tree__parse_tree_out_term__wrapper_arg_3);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_16,
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_15,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_term__Vars_8,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Word parse_tree__parse_tree_out_term__TypeInfo_21_21;
    MR_Word parse_tree__parse_tree_out_term__V_13_13;
    void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_term__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 3) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 4) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeClassInfo_for_output_15));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 5) = ((MR_Box) (parse_tree__parse_tree_out_term__VarSet_6));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 6) = ((MR_Box) (parse_tree__parse_tree_out_term__VarNamePrint_7));
    }
    {
      parse_tree__parse_tree_out_term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_21, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_16));
    }
    parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 18)));
    {
      parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_15), ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_21_21)), ((MR_Box) (parse_tree__parse_tree_out_term__Vars_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_term__V_13_13)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_term__closure = parse_tree__parse_tree_out_term__closure_arg;

    {
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), parse_tree__parse_tree_out_term__wrapper_arg_2, parse_tree__parse_tree_out_term__wrapper_arg_3);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_10,
  MR_Word parse_tree__parse_tree_out_term__VarSet_5,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_6,
  MR_Word parse_tree__parse_tree_out_term__Vars_7)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__String_8;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_11 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1];
    MR_Word parse_tree__parse_tree_out_term__TypeInfo_21_25;
    MR_Word parse_tree__parse_tree_out_term__V_19_19;
    void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_term__conv1_String_8;

    {
      parse_tree__parse_tree_out_term__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 3) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_10));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 4) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeClassInfo_for_output_11));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 5) = ((MR_Box) (parse_tree__parse_tree_out_term__VarSet_5));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 6) = ((MR_Box) (parse_tree__parse_tree_out_term__VarNamePrint_6));
    }
    {
      parse_tree__parse_tree_out_term__TypeInfo_21_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_10));
    }
    parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 18)));
    {
      parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_11), ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_21_25)), ((MR_Box) (parse_tree__parse_tree_out_term__Vars_7)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_term__V_19_19)), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv1_String_8);
    }
    parse_tree__parse_tree_out_term__String_8 = ((MR_String) parse_tree__parse_tree_out_term__conv1_String_8);
    return parse_tree__parse_tree_out_term__String_8;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0_1(
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_term__closure = parse_tree__parse_tree_out_term__closure_arg;

    {
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), parse_tree__parse_tree_out_term__wrapper_arg_2, parse_tree__parse_tree_out_term__wrapper_arg_3);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_13,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_term__Vars_8)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[0];
    MR_Word parse_tree__parse_tree_out_term__TypeInfo_21_28;
    MR_Word parse_tree__parse_tree_out_term__V_22_22;
    void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_term__conv1_STATE_VARIABLE_IO_11;

    {
      parse_tree__parse_tree_out_term__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 3) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_13));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 4) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 5) = ((MR_Box) (parse_tree__parse_tree_out_term__VarSet_6));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 6) = ((MR_Box) (parse_tree__parse_tree_out_term__VarNamePrint_7));
    }
    {
      parse_tree__parse_tree_out_term__TypeInfo_21_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_28, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_13));
    }
    parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 18)));
    {
      parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_21_28)), ((MR_Box) (parse_tree__parse_tree_out_term__Vars_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_term__V_22_22)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_term__conv1_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_30,
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_term__Var_8,
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_13,
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__Name_10;

    {
      parse_tree__parse_tree_out_term__succeeded = mercury__varset__search_name_3_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_30, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__Var_8, &parse_tree__parse_tree_out_term__Name_10);
    }
    if (parse_tree__parse_tree_out_term__succeeded)
      switch (parse_tree__parse_tree_out_term__VarNamePrint_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          {
            MR_String parse_tree__parse_tree_out_term__ConvertedName_12;
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_15_15;
            void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(parse_tree__parse_tree_out_term__Name_10, &parse_tree__parse_tree_out_term__ConvertedName_12);
            }
            parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) (parse_tree__parse_tree_out_term__ConvertedName_12)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_15_15);
            }
            switch (parse_tree__parse_tree_out_term__VarNamePrint_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_17_17;
                  MR_Integer parse_tree__parse_tree_out_term__VarNum_25;
                  void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* parse_tree__parse_tree_out_term__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    mercury__term__var_to_int_2_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_30, parse_tree__parse_tree_out_term__Var_8, &parse_tree__parse_tree_out_term__VarNum_25);
                  }
                  parse_tree__parse_tree_out_term__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "_")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_17_17);
                  }
                  parse_tree__parse_tree_out_term__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 8)));
                  {
                    parse_tree__parse_tree_out_term__func_2(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) (parse_tree__parse_tree_out_term__VarNum_25)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_17_17, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14);
                  }
                }
                break;
              case (MR_Integer) 0:
                *parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_15_15;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer parse_tree__parse_tree_out_term__VarNum_11;
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20;
            void MR_CALL (* parse_tree__parse_tree_out_term__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* parse_tree__parse_tree_out_term__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

            {
              mercury__term__var_to_int_2_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_30, parse_tree__parse_tree_out_term__Var_8, &parse_tree__parse_tree_out_term__VarNum_11);
            }
            parse_tree__parse_tree_out_term__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              parse_tree__parse_tree_out_term__func_3(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "V_")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20);
            }
            parse_tree__parse_tree_out_term__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 8)));
            {
              parse_tree__parse_tree_out_term__func_4(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) (parse_tree__parse_tree_out_term__VarNum_11)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14);
            }
          }
          break;
      }
    else
      {
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23;
        MR_Integer parse_tree__parse_tree_out_term__VarNum_28;
        void MR_CALL (* parse_tree__parse_tree_out_term__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_term__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__term__var_to_int_2_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_30, parse_tree__parse_tree_out_term__Var_8, &parse_tree__parse_tree_out_term__VarNum_28);
        }
        parse_tree__parse_tree_out_term__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_term__func_5(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "V_")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23);
        }
        parse_tree__parse_tree_out_term__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 8)));
        {
          parse_tree__parse_tree_out_term__func_6(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) (parse_tree__parse_tree_out_term__VarNum_28)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14);
        }
      }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_10,
  MR_Word parse_tree__parse_tree_out_term__VarSet_5,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_6,
  MR_Word parse_tree__parse_tree_out_term__Var_7)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__String_8;
    MR_Box parse_tree__parse_tree_out_term__conv0_String_8;

    {
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_10, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1], parse_tree__parse_tree_out_term__VarSet_5, parse_tree__parse_tree_out_term__VarNamePrint_6, parse_tree__parse_tree_out_term__Var_7, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_String_8);
    }
    parse_tree__parse_tree_out_term__String_8 = ((MR_String) parse_tree__parse_tree_out_term__conv0_String_8);
    return parse_tree__parse_tree_out_term__String_8;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_13,
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_term__Var_8)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_Box parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_13, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[0], parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, parse_tree__parse_tree_out_term__Var_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(
  MR_String parse_tree__parse_tree_out_term__Name_3,
  MR_String * parse_tree__parse_tree_out_term__ConvertedName_4)
{
  {
    MR_bool parse_tree__parse_tree_out_term__succeeded;
    MR_String parse_tree__parse_tree_out_term__V_5_5;

    {
      parse_tree__parse_tree_out_term__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__parse_tree_out_term__Name_3, (MR_String) "\'", &parse_tree__parse_tree_out_term__V_5_5);
    }
    if (parse_tree__parse_tree_out_term__succeeded)
      {
        MR_String parse_tree__parse_tree_out_term__StrippedName_6;
        MR_Integer parse_tree__parse_tree_out_term__NumPrimes_7;
        MR_String parse_tree__parse_tree_out_term__V_10_10;
        MR_String parse_tree__parse_tree_out_term__V_11_11;
        MR_String parse_tree__parse_tree_out_term__V_13_13;

        {
          parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(parse_tree__parse_tree_out_term__Name_3, &parse_tree__parse_tree_out_term__StrippedName_6, &parse_tree__parse_tree_out_term__NumPrimes_7);
        }
        {
          parse_tree__parse_tree_out_term__V_13_13 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_out_term__NumPrimes_7);
        }
        {
          parse_tree__parse_tree_out_term__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", parse_tree__parse_tree_out_term__V_13_13);
        }
        {
          parse_tree__parse_tree_out_term__V_10_10 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_term__StrippedName_6, parse_tree__parse_tree_out_term__V_11_11);
        }
        {
          *parse_tree__parse_tree_out_term__ConvertedName_4 = mercury__string__f_43_43_2_f_0((MR_String) "V_", parse_tree__parse_tree_out_term__V_10_10);
        }
      }
    else
      {
        {
          parse_tree__parse_tree_out_term__succeeded = mercury__string__prefix_2_p_0(parse_tree__parse_tree_out_term__Name_3, (MR_String) "V_");
        }
        if (parse_tree__parse_tree_out_term__succeeded)
          {
            {
              *parse_tree__parse_tree_out_term__ConvertedName_4 = mercury__string__f_43_43_2_f_0((MR_String) "V_", parse_tree__parse_tree_out_term__Name_3);
            }
          }
        else
          *parse_tree__parse_tree_out_term__ConvertedName_4 = parse_tree__parse_tree_out_term__Name_3;
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_tree_out_term. */
