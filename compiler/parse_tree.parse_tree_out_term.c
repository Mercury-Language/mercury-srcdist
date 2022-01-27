/*
** Automatically generated from `parse_tree_out_term.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 110 "parse_tree_out_term.m"
struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s {
#line 513 "parse_tree_out_term.m"
  MR_bool parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded;
#line 506 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Chars_8;
#line 508 "parse_tree_out_term.m"
  jmp_buf parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__commit_0;
#line 508 "parse_tree_out_term.m"
  MR_Char parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Char_9;
#line 508 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__conv0_Char_9;
#line 110 "parse_tree_out_term.m"
};


#line 113 "parse_tree.parse_tree_out_term.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1;

#line 116 "parse_tree.parse_tree_out_term.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1;

#line 119 "parse_tree.parse_tree_out_term.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0;

#line 122 "parse_tree.parse_tree_out_term.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1;

#line 125 "parse_tree.parse_tree_out_term.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_value_ordered_needs_quotes_0[2];

#line 128 "parse_tree.parse_tree_out_term.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0[2];

#line 131 "parse_tree.parse_tree_out_term.c"
static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0[2];

#line 134 "parse_tree.parse_tree_out_term.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
#line 137 "parse_tree.parse_tree_out_term.c"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 139 "parse_tree.parse_tree_out_term.c"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2);

#line 142 "parse_tree.parse_tree_out_term.c"
static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
#line 145 "parse_tree.parse_tree_out_term.c"
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 147 "parse_tree.parse_tree_out_term.c"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 149 "parse_tree.parse_tree_out_term.c"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_3);

#line 542 "parse_tree_out_term.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(
#line 542 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Op_2);

#line 537 "parse_tree_out_term.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(
#line 537 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Op_2);

#line 532 "parse_tree_out_term.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(
#line 532 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Op_2);

#line 527 "parse_tree_out_term.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(
#line 527 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Op_2);

#line 427 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_constant_4_p_0(
#line 427 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13,
#line 427 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
#line 427 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Const_6,
#line 427 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9,
#line 427 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);

#line 412 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_4_p_0(
#line 412 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17,
#line 412 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
#line 412 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Const_6,
#line 412 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9,
#line 412 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);

#line 397 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_5_p_0(
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_23,
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22,
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__1_1,
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_2,
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__3_3,
#line 397 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4,
#line 397 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_5);

#line 372 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_5_p_0(
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_32,
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31,
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_8,
#line 372 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15,
#line 372 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_16);

#line 152 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
#line 152 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Name0_4,
#line 152 "parse_tree_out_term.m"
  MR_String * parse_tree__parse_tree_out_term__Name_5,
#line 152 "parse_tree_out_term.m"
  MR_Integer * parse_tree__parse_tree_out_term__Num_6);

#line 508 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_1(
#line 508 "parse_tree_out_term.m"
  void * parse_tree__parse_tree_out_term__env_ptr_arg);

#line 508 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_3(
#line 508 "parse_tree_out_term.m"
  void * parse_tree__parse_tree_out_term__env_ptr_arg);

#line 508 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_2(
#line 508 "parse_tree_out_term.m"
  void * parse_tree__parse_tree_out_term__env_ptr_arg);

#line 508 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_4(
#line 508 "parse_tree_out_term.m"
  void * parse_tree__parse_tree_out_term__env_ptr_arg);

#line 210 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0_1(
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 210 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3);

#line 210 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0_1(
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 210 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3);

#line 210 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 210 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3);

#line 210 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0_1(
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 210 "parse_tree_out_term.m"
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



#line 384 "parse_tree.parse_tree_out_term.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 392 "parse_tree.parse_tree_out_term.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 400 "parse_tree.parse_tree_out_term.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0 = {
  (MR_String) "next_to_graphic_token",
  (MR_Integer) 0
};

#line 406 "parse_tree.parse_tree_out_term.c"
static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1 = {
  (MR_String) "not_next_to_graphic_token",
  (MR_Integer) 1
};

#line 412 "parse_tree.parse_tree_out_term.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_value_ordered_needs_quotes_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1
};

#line 418 "parse_tree.parse_tree_out_term.c"
static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1
};

#line 424 "parse_tree.parse_tree_out_term.c"
static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 430 "parse_tree.parse_tree_out_term.c"
const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_needs_quotes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 447 "parse_tree.parse_tree_out_term.c"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
#line 450 "parse_tree.parse_tree_out_term.c"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 452 "parse_tree.parse_tree_out_term.c"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2)
#line 454 "parse_tree.parse_tree_out_term.c"
{
#line 456 "parse_tree.parse_tree_out_term.c"
  {
#line 458 "parse_tree.parse_tree_out_term.c"
    MR_bool parse_tree__parse_tree_out_term__succeeded;

#line 461 "parse_tree.parse_tree_out_term.c"
    {
#line 463 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_2));
    }
#line 466 "parse_tree.parse_tree_out_term.c"
    return parse_tree__parse_tree_out_term__succeeded;
#line 468 "parse_tree.parse_tree_out_term.c"
  }
#line 470 "parse_tree.parse_tree_out_term.c"
}

#line 473 "parse_tree.parse_tree_out_term.c"
static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
#line 476 "parse_tree.parse_tree_out_term.c"
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 478 "parse_tree.parse_tree_out_term.c"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 480 "parse_tree.parse_tree_out_term.c"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_3)
#line 482 "parse_tree.parse_tree_out_term.c"
{
#line 484 "parse_tree.parse_tree_out_term.c"
  {
#line 486 "parse_tree.parse_tree_out_term.c"
    MR_Word parse_tree__parse_tree_out_term__conv0_HeadVar__1_1;

#line 489 "parse_tree.parse_tree_out_term.c"
    {
#line 491 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(&parse_tree__parse_tree_out_term__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_2), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_3));
    }
#line 494 "parse_tree.parse_tree_out_term.c"
    *parse_tree__parse_tree_out_term__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_tree_out_term__conv0_HeadVar__1_1));
#line 496 "parse_tree.parse_tree_out_term.c"
  }
#line 498 "parse_tree.parse_tree_out_term.c"
}

#line 27 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(
#line 27 "parse_tree_out_term.m"
  MR_Word * parse_tree__parse_tree_out_term__HeadVar__1_1,
#line 27 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_2,
#line 27 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__3_3)
#line 27 "parse_tree_out_term.m"
{
#line 27 "parse_tree_out_term.m"
  {
#line 27 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 27 "parse_tree_out_term.m"
    MR_Integer parse_tree__parse_tree_out_term__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_tree_out_term__HeadVar__2_2;
#line 27 "parse_tree_out_term.m"
    MR_Integer parse_tree__parse_tree_out_term__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_tree_out_term__HeadVar__3_3;

#line 27 "parse_tree_out_term.m"
    {
#line 27 "parse_tree_out_term.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_tree_out_term__HeadVar__1_1, parse_tree__parse_tree_out_term__Cast_HeadVar1_4, parse_tree__parse_tree_out_term__Cast_HeadVar2_5);
#line 27 "parse_tree_out_term.m"
      return;
    }
#line 27 "parse_tree_out_term.m"
  }
#line 27 "parse_tree_out_term.m"
}

#line 27 "parse_tree_out_term.m"
MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(
#line 27 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_1,
#line 27 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_2)
#line 27 "parse_tree_out_term.m"
{
#line 542 "parse_tree.parse_tree_out_term.c"
  {
#line 544 "parse_tree.parse_tree_out_term.c"
    MR_bool parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__HeadVar__2_1 == parse_tree__parse_tree_out_term__HeadVar__2_2);

#line 547 "parse_tree.parse_tree_out_term.c"
    return parse_tree__parse_tree_out_term__succeeded;
#line 549 "parse_tree.parse_tree_out_term.c"
  }
#line 27 "parse_tree_out_term.m"
}

#line 542 "parse_tree_out_term.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(
#line 542 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Op_2)
#line 542 "parse_tree_out_term.m"
{
#line 544 "parse_tree_out_term.m"
  {
#line 544 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 544 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6;
#line 567 "parse_tree.parse_tree_out_term.c"
    MR_Integer parse_tree__parse_tree_out_term__V_3_3;
#line 569 "parse_tree.parse_tree_out_term.c"
    MR_Word parse_tree__parse_tree_out_term__V_4_4;
#line 571 "parse_tree.parse_tree_out_term.c"
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 573 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv2_V_3_3;
#line 575 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv1_V_4_4;

#line 545 "parse_tree_out_term.m"
    {
#line 545 "parse_tree_out_term.m"
      mercury__ops__init_mercury_op_table_0_f_0();
    }
#line 583 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
#line 585 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 8)));
#line 587 "parse_tree.parse_tree_out_term.c"
    {
#line 589 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_2)), &parse_tree__parse_tree_out_term__conv2_V_3_3, &parse_tree__parse_tree_out_term__conv1_V_4_4);
    }
#line 592 "parse_tree.parse_tree_out_term.c"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 594 "parse_tree.parse_tree_out_term.c"
      {
#line 596 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_3_3 = ((MR_Integer) parse_tree__parse_tree_out_term__conv2_V_3_3);
#line 598 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_4_4 = ((MR_Word) parse_tree__parse_tree_out_term__conv1_V_4_4);
#line 600 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__succeeded = MR_TRUE;
#line 602 "parse_tree.parse_tree_out_term.c"
      }
#line 544 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__succeeded;
#line 544 "parse_tree_out_term.m"
  }
#line 542 "parse_tree_out_term.m"
}

#line 537 "parse_tree_out_term.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(
#line 537 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Op_2)
#line 537 "parse_tree_out_term.m"
{
#line 539 "parse_tree_out_term.m"
  {
#line 539 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 539 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6;
#line 624 "parse_tree.parse_tree_out_term.c"
    MR_Integer parse_tree__parse_tree_out_term__V_3_3;
#line 626 "parse_tree.parse_tree_out_term.c"
    MR_Word parse_tree__parse_tree_out_term__V_4_4;
#line 628 "parse_tree.parse_tree_out_term.c"
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
#line 630 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv2_V_3_3;
#line 632 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv1_V_4_4;

#line 540 "parse_tree_out_term.m"
    {
#line 540 "parse_tree_out_term.m"
      mercury__ops__init_mercury_op_table_0_f_0();
    }
#line 640 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
#line 642 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 6)));
#line 644 "parse_tree.parse_tree_out_term.c"
    {
#line 646 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_6), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_2)), &parse_tree__parse_tree_out_term__conv2_V_3_3, &parse_tree__parse_tree_out_term__conv1_V_4_4);
    }
#line 649 "parse_tree.parse_tree_out_term.c"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 651 "parse_tree.parse_tree_out_term.c"
      {
#line 653 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_3_3 = ((MR_Integer) parse_tree__parse_tree_out_term__conv2_V_3_3);
#line 655 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_4_4 = ((MR_Word) parse_tree__parse_tree_out_term__conv1_V_4_4);
#line 657 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__succeeded = MR_TRUE;
#line 659 "parse_tree.parse_tree_out_term.c"
      }
#line 539 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__succeeded;
#line 539 "parse_tree_out_term.m"
  }
#line 537 "parse_tree_out_term.m"
}

#line 532 "parse_tree_out_term.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(
#line 532 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Op_2)
#line 532 "parse_tree_out_term.m"
{
#line 534 "parse_tree_out_term.m"
  {
#line 534 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 534 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7;
#line 681 "parse_tree.parse_tree_out_term.c"
    MR_Integer parse_tree__parse_tree_out_term__V_3_3;
#line 683 "parse_tree.parse_tree_out_term.c"
    MR_Word parse_tree__parse_tree_out_term__V_4_4;
#line 685 "parse_tree.parse_tree_out_term.c"
    MR_Word parse_tree__parse_tree_out_term__V_5_5;
#line 687 "parse_tree.parse_tree_out_term.c"
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
#line 689 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv3_V_3_3;
#line 691 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv2_V_4_4;
#line 693 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv1_V_5_5;

#line 535 "parse_tree_out_term.m"
    {
#line 535 "parse_tree_out_term.m"
      mercury__ops__init_mercury_op_table_0_f_0();
    }
#line 701 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
#line 703 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 705 "parse_tree.parse_tree_out_term.c"
    {
#line 707 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_2)), &parse_tree__parse_tree_out_term__conv3_V_3_3, &parse_tree__parse_tree_out_term__conv2_V_4_4, &parse_tree__parse_tree_out_term__conv1_V_5_5);
    }
#line 710 "parse_tree.parse_tree_out_term.c"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 712 "parse_tree.parse_tree_out_term.c"
      {
#line 714 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_3_3 = ((MR_Integer) parse_tree__parse_tree_out_term__conv3_V_3_3);
#line 716 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_4_4 = ((MR_Word) parse_tree__parse_tree_out_term__conv2_V_4_4);
#line 718 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_5_5 = ((MR_Word) parse_tree__parse_tree_out_term__conv1_V_5_5);
#line 720 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__succeeded = MR_TRUE;
#line 722 "parse_tree.parse_tree_out_term.c"
      }
#line 534 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__succeeded;
#line 534 "parse_tree_out_term.m"
  }
#line 532 "parse_tree_out_term.m"
}

#line 527 "parse_tree_out_term.m"
static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(
#line 527 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Op_2)
#line 527 "parse_tree_out_term.m"
{
#line 529 "parse_tree_out_term.m"
  {
#line 529 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 529 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7;
#line 744 "parse_tree.parse_tree_out_term.c"
    MR_Integer parse_tree__parse_tree_out_term__V_3_3;
#line 746 "parse_tree.parse_tree_out_term.c"
    MR_Word parse_tree__parse_tree_out_term__V_4_4;
#line 748 "parse_tree.parse_tree_out_term.c"
    MR_Word parse_tree__parse_tree_out_term__V_5_5;
#line 750 "parse_tree.parse_tree_out_term.c"
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
#line 752 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv3_V_3_3;
#line 754 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv2_V_4_4;
#line 756 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv1_V_5_5;

#line 530 "parse_tree_out_term.m"
    {
#line 530 "parse_tree_out_term.m"
      mercury__ops__init_mercury_op_table_0_f_0();
    }
#line 764 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
#line 766 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7, (MR_Integer) 0)), (MR_Integer) 7)));
#line 768 "parse_tree.parse_tree_out_term.c"
    {
#line 770 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_7), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_2)), &parse_tree__parse_tree_out_term__conv3_V_3_3, &parse_tree__parse_tree_out_term__conv2_V_4_4, &parse_tree__parse_tree_out_term__conv1_V_5_5);
    }
#line 773 "parse_tree.parse_tree_out_term.c"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 775 "parse_tree.parse_tree_out_term.c"
      {
#line 777 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_3_3 = ((MR_Integer) parse_tree__parse_tree_out_term__conv3_V_3_3);
#line 779 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_4_4 = ((MR_Word) parse_tree__parse_tree_out_term__conv2_V_4_4);
#line 781 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__V_5_5 = ((MR_Word) parse_tree__parse_tree_out_term__conv1_V_5_5);
#line 783 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__succeeded = MR_TRUE;
#line 785 "parse_tree.parse_tree_out_term.c"
      }
#line 529 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__succeeded;
#line 529 "parse_tree_out_term.m"
  }
#line 527 "parse_tree_out_term.m"
}

#line 427 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_constant_4_p_0(
#line 427 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13,
#line 427 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
#line 427 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Const_6,
#line 427 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9,
#line 427 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10)
#line 427 "parse_tree_out_term.m"
{
#line 433 "parse_tree_out_term.m"
  {
#line 433 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Const_6)) == (MR_mktag((MR_Integer) 0)));
#line 433 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__Atom_8;

#line 431 "parse_tree_out_term.m"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 431 "parse_tree_out_term.m"
      {
#line 431 "parse_tree_out_term.m"
        parse_tree__parse_tree_out_term__Atom_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Const_6, (MR_Integer) 0)));
#line 432 "parse_tree_out_term.m"
        {
#line 432 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13, parse_tree__parse_tree_out_term__NextToGraphicToken_5, parse_tree__parse_tree_out_term__Atom_8, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
#line 432 "parse_tree_out_term.m"
          return;
        }
#line 431 "parse_tree_out_term.m"
      }
#line 431 "parse_tree_out_term.m"
    else
#line 833 "parse_tree.parse_tree_out_term.c"
      {
#line 835 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 13)));

#line 838 "parse_tree.parse_tree_out_term.c"
        {
#line 840 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13), ((MR_Box) (parse_tree__parse_tree_out_term__Const_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
#line 842 "parse_tree.parse_tree_out_term.c"
          return;
        }
#line 845 "parse_tree.parse_tree_out_term.c"
      }
#line 433 "parse_tree_out_term.m"
  }
#line 427 "parse_tree_out_term.m"
}

#line 412 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_4_p_0(
#line 412 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17,
#line 412 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
#line 412 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Const_6,
#line 412 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9,
#line 412 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10)
#line 412 "parse_tree_out_term.m"
{
#line 423 "parse_tree_out_term.m"
  {
#line 423 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Const_6)) == (MR_mktag((MR_Integer) 0)));
#line 423 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__Op_8;
#line 417 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_20;
#line 875 "parse_tree.parse_tree_out_term.c"
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box);

#line 417 "parse_tree_out_term.m"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 417 "parse_tree_out_term.m"
      {
#line 417 "parse_tree_out_term.m"
        parse_tree__parse_tree_out_term__Op_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Const_6, (MR_Integer) 0)));
#line 525 "parse_tree_out_term.m"
        {
#line 525 "parse_tree_out_term.m"
          mercury__ops__init_mercury_op_table_0_f_0();
        }
#line 889 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_20 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
#line 891 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_20, (MR_Integer) 0)), (MR_Integer) 9)));
#line 893 "parse_tree.parse_tree_out_term.c"
        {
#line 895 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_20), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Op_8)));
        }
#line 417 "parse_tree_out_term.m"
      }
#line 423 "parse_tree_out_term.m"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 420 "parse_tree_out_term.m"
      {
#line 420 "parse_tree_out_term.m"
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12;
#line 420 "parse_tree_out_term.m"
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13;
#line 908 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 910 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 912 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 915 "parse_tree.parse_tree_out_term.c"
        {
#line 917 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12);
        }
#line 920 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 11)));
#line 922 "parse_tree.parse_tree_out_term.c"
        {
#line 924 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_2(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_term__Op_8)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13);
        }
#line 927 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 929 "parse_tree.parse_tree_out_term.c"
        {
#line 931 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_3(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
#line 933 "parse_tree.parse_tree_out_term.c"
          return;
        }
#line 420 "parse_tree_out_term.m"
      }
#line 423 "parse_tree_out_term.m"
    else
#line 433 "parse_tree_out_term.m"
      {
#line 433 "parse_tree_out_term.m"
        MR_String parse_tree__parse_tree_out_term__Atom_26;

#line 431 "parse_tree_out_term.m"
        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Const_6)) == (MR_mktag((MR_Integer) 0)));
#line 431 "parse_tree_out_term.m"
        if (parse_tree__parse_tree_out_term__succeeded)
#line 431 "parse_tree_out_term.m"
          {
#line 431 "parse_tree_out_term.m"
            parse_tree__parse_tree_out_term__Atom_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Const_6, (MR_Integer) 0)));
#line 432 "parse_tree_out_term.m"
            {
#line 432 "parse_tree_out_term.m"
              parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, parse_tree__parse_tree_out_term__NextToGraphicToken_5, parse_tree__parse_tree_out_term__Atom_26, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
#line 432 "parse_tree_out_term.m"
              return;
            }
#line 431 "parse_tree_out_term.m"
          }
#line 431 "parse_tree_out_term.m"
        else
#line 964 "parse_tree.parse_tree_out_term.c"
          {
#line 966 "parse_tree.parse_tree_out_term.c"
            void MR_CALL (* parse_tree__parse_tree_out_term__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 13)));

#line 969 "parse_tree.parse_tree_out_term.c"
            {
#line 971 "parse_tree.parse_tree_out_term.c"
              parse_tree__parse_tree_out_term__func_4(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_17), ((MR_Box) (parse_tree__parse_tree_out_term__Const_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_10);
#line 973 "parse_tree.parse_tree_out_term.c"
              return;
            }
#line 976 "parse_tree.parse_tree_out_term.c"
          }
#line 433 "parse_tree_out_term.m"
      }
#line 423 "parse_tree_out_term.m"
  }
#line 412 "parse_tree_out_term.m"
}

#line 397 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_5_p_0(
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_23,
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22,
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__1_1,
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__2_2,
#line 397 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadVar__3_3,
#line 397 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4,
#line 397 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_5)
#line 397 "parse_tree_out_term.m"
{
#line 400 "parse_tree_out_term.m"
  while (MR_TRUE)
#line 400 "parse_tree_out_term.m"
    {
#line 400 "parse_tree_out_term.m"
      /* tailcall optimized into a loop */
#line 400 "parse_tree_out_term.m"
      {
#line 400 "parse_tree_out_term.m"
        MR_bool parse_tree__parse_tree_out_term__succeeded;

#line 400 "parse_tree_out_term.m"
        if ((parse_tree__parse_tree_out_term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "parse_tree_out_term.m"
          *parse_tree__parse_tree_out_term__STATE_VARIABLE_U_5 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4;
#line 400 "parse_tree_out_term.m"
        else
#line 401 "parse_tree_out_term.m"
          {
#line 401 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__HeadVar__3_3, (MR_Integer) 0)));
#line 401 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__Terms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__HeadVar__3_3, (MR_Integer) 1)));
#line 401 "parse_tree_out_term.m"
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_19_19;
#line 401 "parse_tree_out_term.m"
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20;
#line 1031 "parse_tree.parse_tree_out_term.c"
            void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1034 "parse_tree.parse_tree_out_term.c"
            {
#line 1036 "parse_tree.parse_tree_out_term.c"
              parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_19_19);
            }
#line 247 "parse_tree_out_term.m"
            {
#line 247 "parse_tree_out_term.m"
              parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_23, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_22, parse_tree__parse_tree_out_term__HeadVar__1_1, parse_tree__parse_tree_out_term__HeadVar__2_2, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_13, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_19_19, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20);
            }
#line 404 "parse_tree_out_term.m"
            /* direct tailcall eliminated */
#line 404 "parse_tree_out_term.m"
            {
#line 404 "parse_tree_out_term.m"
              MR_Word parse_tree__parse_tree_out_term__HeadVar__3__tmp_copy_3 = parse_tree__parse_tree_out_term__Terms_14;
#line 404 "parse_tree_out_term.m"
              MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_4 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20;

#line 404 "parse_tree_out_term.m"
              parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_4 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_4;
#line 404 "parse_tree_out_term.m"
              parse_tree__parse_tree_out_term__HeadVar__3_3 = parse_tree__parse_tree_out_term__HeadVar__3__tmp_copy_3;
#line 404 "parse_tree_out_term.m"
            }
#line 404 "parse_tree_out_term.m"
            continue;
#line 401 "parse_tree_out_term.m"
          }
#line 400 "parse_tree_out_term.m"
      }
#line 400 "parse_tree_out_term.m"
      break;
#line 400 "parse_tree_out_term.m"
    }
#line 397 "parse_tree_out_term.m"
}

#line 372 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_5_p_0(
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_32,
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31,
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 372 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_8,
#line 372 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15,
#line 372 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_16)
#line 372 "parse_tree_out_term.m"
{
#line 383 "parse_tree_out_term.m"
  while (MR_TRUE)
#line 383 "parse_tree_out_term.m"
    {
#line 383 "parse_tree_out_term.m"
      /* tailcall optimized into a loop */
#line 383 "parse_tree_out_term.m"
      {
#line 383 "parse_tree_out_term.m"
        MR_bool parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 383 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__X_12;
#line 383 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__Xs_13;
#line 377 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__Args_10;
#line 377 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__V_17_17;
#line 377 "parse_tree_out_term.m"
        MR_String parse_tree__parse_tree_out_term__V_18_18;
#line 377 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__V_19_19;
#line 377 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__V_20_20;
#line 377 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__V_11_11;

#line 377 "parse_tree_out_term.m"
        if (parse_tree__parse_tree_out_term__succeeded)
#line 377 "parse_tree_out_term.m"
          {
#line 377 "parse_tree_out_term.m"
            parse_tree__parse_tree_out_term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 0)));
#line 377 "parse_tree_out_term.m"
            parse_tree__parse_tree_out_term__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 1)));
#line 377 "parse_tree_out_term.m"
            parse_tree__parse_tree_out_term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 2)));
#line 377 "parse_tree_out_term.m"
            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 377 "parse_tree_out_term.m"
            if (parse_tree__parse_tree_out_term__succeeded)
#line 377 "parse_tree_out_term.m"
              {
#line 377 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_17_17, (MR_Integer) 0)));
#line 377 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_18_18, (MR_String) "[|]") == 0);
#line 377 "parse_tree_out_term.m"
                if (parse_tree__parse_tree_out_term__succeeded)
#line 377 "parse_tree_out_term.m"
                  {
#line 378 "parse_tree_out_term.m"
                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 378 "parse_tree_out_term.m"
                    if (parse_tree__parse_tree_out_term__succeeded)
#line 378 "parse_tree_out_term.m"
                      {
#line 378 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_10, (MR_Integer) 0)));
#line 378 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_10, (MR_Integer) 1)));
#line 378 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 378 "parse_tree_out_term.m"
                        if (parse_tree__parse_tree_out_term__succeeded)
#line 378 "parse_tree_out_term.m"
                          {
#line 378 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_19_19, (MR_Integer) 0)));
#line 378 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_19_19, (MR_Integer) 1)));
#line 378 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "parse_tree_out_term.m"
                          }
#line 378 "parse_tree_out_term.m"
                      }
#line 377 "parse_tree_out_term.m"
                  }
#line 377 "parse_tree_out_term.m"
              }
#line 377 "parse_tree_out_term.m"
          }
#line 383 "parse_tree_out_term.m"
        if (parse_tree__parse_tree_out_term__succeeded)
#line 380 "parse_tree_out_term.m"
          {
#line 380 "parse_tree_out_term.m"
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_22_22;
#line 380 "parse_tree_out_term.m"
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23;
#line 1182 "parse_tree.parse_tree_out_term.c"
            void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1185 "parse_tree.parse_tree_out_term.c"
            {
#line 1187 "parse_tree.parse_tree_out_term.c"
              parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) ", ")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_22_22);
            }
#line 247 "parse_tree_out_term.m"
            {
#line 247 "parse_tree_out_term.m"
              parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_32, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__X_12, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23);
            }
#line 382 "parse_tree_out_term.m"
            /* direct tailcall eliminated */
#line 382 "parse_tree_out_term.m"
            {
#line 382 "parse_tree_out_term.m"
              MR_Word parse_tree__parse_tree_out_term__Term__tmp_copy_8 = parse_tree__parse_tree_out_term__Xs_13;
#line 382 "parse_tree_out_term.m"
              MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_15 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23;

#line 382 "parse_tree_out_term.m"
              parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_15;
#line 382 "parse_tree_out_term.m"
              parse_tree__parse_tree_out_term__Term_8 = parse_tree__parse_tree_out_term__Term__tmp_copy_8;
#line 382 "parse_tree_out_term.m"
            }
#line 382 "parse_tree_out_term.m"
            continue;
#line 380 "parse_tree_out_term.m"
          }
#line 383 "parse_tree_out_term.m"
        else
#line 387 "parse_tree_out_term.m"
          {
#line 384 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__V_25_25;
#line 384 "parse_tree_out_term.m"
            MR_String parse_tree__parse_tree_out_term__V_26_26;
#line 384 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__V_27_27;
#line 384 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__V_14_14;

#line 384 "parse_tree_out_term.m"
            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 384 "parse_tree_out_term.m"
            if (parse_tree__parse_tree_out_term__succeeded)
#line 384 "parse_tree_out_term.m"
              {
#line 384 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 0)));
#line 384 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 1)));
#line 384 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_8, (MR_Integer) 2)));
#line 384 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 384 "parse_tree_out_term.m"
                if (parse_tree__parse_tree_out_term__succeeded)
#line 384 "parse_tree_out_term.m"
                  {
#line 384 "parse_tree_out_term.m"
                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 384 "parse_tree_out_term.m"
                    if (parse_tree__parse_tree_out_term__succeeded)
#line 384 "parse_tree_out_term.m"
                      {
#line 384 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_25_25, (MR_Integer) 0)));
#line 384 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_26_26, (MR_String) "[]") == 0);
#line 384 "parse_tree_out_term.m"
                      }
#line 384 "parse_tree_out_term.m"
                  }
#line 384 "parse_tree_out_term.m"
              }
#line 387 "parse_tree_out_term.m"
            if (parse_tree__parse_tree_out_term__succeeded)
#line 387 "parse_tree_out_term.m"
              *parse_tree__parse_tree_out_term__STATE_VARIABLE_U_16 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15;
#line 387 "parse_tree_out_term.m"
            else
#line 388 "parse_tree_out_term.m"
              {
#line 388 "parse_tree_out_term.m"
                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_29_29;
#line 1271 "parse_tree.parse_tree_out_term.c"
                void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5)));

#line 1274 "parse_tree.parse_tree_out_term.c"
                {
#line 1276 "parse_tree.parse_tree_out_term.c"
                  parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31), ((MR_Box) ((MR_String) " | ")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_15, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_29_29);
                }
#line 247 "parse_tree_out_term.m"
                {
#line 247 "parse_tree_out_term.m"
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_32, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_31, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_8, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_29_29, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_16);
#line 247 "parse_tree_out_term.m"
                  return;
                }
#line 388 "parse_tree_out_term.m"
              }
#line 387 "parse_tree_out_term.m"
          }
#line 383 "parse_tree_out_term.m"
      }
#line 383 "parse_tree_out_term.m"
      break;
#line 383 "parse_tree_out_term.m"
    }
#line 372 "parse_tree_out_term.m"
}

#line 152 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
#line 152 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Name0_4,
#line 152 "parse_tree_out_term.m"
  MR_String * parse_tree__parse_tree_out_term__Name_5,
#line 152 "parse_tree_out_term.m"
  MR_Integer * parse_tree__parse_tree_out_term__Num_6)
#line 152 "parse_tree_out_term.m"
{
#line 160 "parse_tree_out_term.m"
  {
#line 160 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 160 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__Name1_7;

#line 157 "parse_tree_out_term.m"
    {
#line 157 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__parse_tree_out_term__Name0_4, (MR_String) "\'", &parse_tree__parse_tree_out_term__Name1_7);
    }
#line 160 "parse_tree_out_term.m"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 158 "parse_tree_out_term.m"
      {
#line 158 "parse_tree_out_term.m"
        MR_Integer parse_tree__parse_tree_out_term__Num0_8;

#line 158 "parse_tree_out_term.m"
        {
#line 158 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(parse_tree__parse_tree_out_term__Name1_7, parse_tree__parse_tree_out_term__Name_5, &parse_tree__parse_tree_out_term__Num0_8);
        }
#line 159 "parse_tree_out_term.m"
        *parse_tree__parse_tree_out_term__Num_6 = (parse_tree__parse_tree_out_term__Num0_8 + (MR_Integer) 1);
#line 158 "parse_tree_out_term.m"
      }
#line 160 "parse_tree_out_term.m"
    else
#line 161 "parse_tree_out_term.m"
      {
#line 161 "parse_tree_out_term.m"
        *parse_tree__parse_tree_out_term__Num_6 = (MR_Integer) 0;
#line 162 "parse_tree_out_term.m"
        *parse_tree__parse_tree_out_term__Name_5 = parse_tree__parse_tree_out_term__Name0_4;
#line 161 "parse_tree_out_term.m"
      }
#line 160 "parse_tree_out_term.m"
  }
#line 152 "parse_tree_out_term.m"
}

#line 508 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_1(
#line 508 "parse_tree_out_term.m"
  void * parse_tree__parse_tree_out_term__env_ptr_arg)
#line 508 "parse_tree_out_term.m"
{
#line 508 "parse_tree_out_term.m"
  {
#line 508 "parse_tree_out_term.m"
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * parse_tree__parse_tree_out_term__env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) parse_tree__parse_tree_out_term__env_ptr_arg;

#line 508 "parse_tree_out_term.m"
    MR_builtin_longjmp((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__commit_0, 1);
#line 508 "parse_tree_out_term.m"
  }
#line 508 "parse_tree_out_term.m"
}

#line 508 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_3(
#line 508 "parse_tree_out_term.m"
  void * parse_tree__parse_tree_out_term__env_ptr_arg)
#line 508 "parse_tree_out_term.m"
{
#line 508 "parse_tree_out_term.m"
  {
#line 508 "parse_tree_out_term.m"
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * parse_tree__parse_tree_out_term__env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) parse_tree__parse_tree_out_term__env_ptr_arg;

#line 508 "parse_tree_out_term.m"
    (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Char_9 = ((MR_Char) (MR_Word) (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__conv0_Char_9);
#line 508 "parse_tree_out_term.m"
    {
#line 508 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_2(parse_tree__parse_tree_out_term__env_ptr);
#line 508 "parse_tree_out_term.m"
      return;
    }
#line 508 "parse_tree_out_term.m"
  }
#line 508 "parse_tree_out_term.m"
}

#line 508 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_2(
#line 508 "parse_tree_out_term.m"
  void * parse_tree__parse_tree_out_term__env_ptr_arg)
#line 508 "parse_tree_out_term.m"
{
#line 508 "parse_tree_out_term.m"
  {
#line 508 "parse_tree_out_term.m"
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * parse_tree__parse_tree_out_term__env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) parse_tree__parse_tree_out_term__env_ptr_arg;

#line 508 "parse_tree_out_term.m"
    {
#line 508 "parse_tree_out_term.m"
      (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = mercury__lexer__graphic_token_char_1_p_0((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Char_9);
    }
#line 508 "parse_tree_out_term.m"
    (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = !((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded);
#line 508 "parse_tree_out_term.m"
    if ((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded)
#line 508 "parse_tree_out_term.m"
      {
#line 508 "parse_tree_out_term.m"
        parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_1(parse_tree__parse_tree_out_term__env_ptr);
#line 508 "parse_tree_out_term.m"
        return;
      }
#line 508 "parse_tree_out_term.m"
  }
#line 508 "parse_tree_out_term.m"
}

#line 508 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_4(
#line 508 "parse_tree_out_term.m"
  void * parse_tree__parse_tree_out_term__env_ptr_arg)
#line 508 "parse_tree_out_term.m"
{
#line 508 "parse_tree_out_term.m"
  {
#line 508 "parse_tree_out_term.m"
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s * parse_tree__parse_tree_out_term__env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s *) parse_tree__parse_tree_out_term__env_ptr_arg;

#line 508 "parse_tree_out_term.m"
    if (MR_builtin_setjmp((parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__commit_0) == 0)
#line 508 "parse_tree_out_term.m"
      {
#line 508 "parse_tree_out_term.m"
        {
#line 508 "parse_tree_out_term.m"
          {
#line 508 "parse_tree_out_term.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, &(parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__conv0_Char_9, (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Chars_8, parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_3, parse_tree__parse_tree_out_term__env_ptr);
          }
#line 508 "parse_tree_out_term.m"
        }
#line 508 "parse_tree_out_term.m"
        (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = MR_FALSE;
#line 508 "parse_tree_out_term.m"
      }
#line 508 "parse_tree_out_term.m"
    else
#line 508 "parse_tree_out_term.m"
      (parse_tree__parse_tree_out_term__env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = MR_TRUE;
#line 508 "parse_tree_out_term.m"
  }
#line 508 "parse_tree_out_term.m"
}

#line 110 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(
#line 110 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18,
#line 110 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
#line 110 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Name_6,
#line 110 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10,
#line 110 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11)
#line 110 "parse_tree_out_term.m"
{
#line 110 "parse_tree_out_term.m"
  {
#line 110 "parse_tree_out_term.m"
    struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0_s parse_tree__parse_tree_out_term__env;

#line 506 "parse_tree_out_term.m"
    (parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = (parse_tree__parse_tree_out_term__NextToGraphicToken_5 == (MR_Integer) 0);
#line 506 "parse_tree_out_term.m"
    if ((parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded)
#line 506 "parse_tree_out_term.m"
      {
#line 507 "parse_tree_out_term.m"
        {
#line 507 "parse_tree_out_term.m"
          mercury__string__to_char_list_2_p_0(parse_tree__parse_tree_out_term__Name_6, &(parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__Chars_8);
        }
#line 508 "parse_tree_out_term.m"
        {
#line 508 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_4(&parse_tree__parse_tree_out_term__env);
        }
#line 508 "parse_tree_out_term.m"
        (parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded = !((parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded);
#line 506 "parse_tree_out_term.m"
      }
#line 513 "parse_tree_out_term.m"
    if ((parse_tree__parse_tree_out_term__env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0_env_0__succeeded)
#line 510 "parse_tree_out_term.m"
      {
#line 510 "parse_tree_out_term.m"
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13;
#line 510 "parse_tree_out_term.m"
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14;
#line 1517 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1519 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1521 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1524 "parse_tree.parse_tree_out_term.c"
        {
#line 1526 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\'")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13);
        }
#line 1529 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 16)));
#line 1531 "parse_tree.parse_tree_out_term.c"
        {
#line 1533 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_2(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18), ((MR_Box) (parse_tree__parse_tree_out_term__Name_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13_13, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14);
        }
#line 1536 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1538 "parse_tree.parse_tree_out_term.c"
        {
#line 1540 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_3(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "\'")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11);
#line 1542 "parse_tree.parse_tree_out_term.c"
          return;
        }
#line 510 "parse_tree_out_term.m"
      }
#line 513 "parse_tree_out_term.m"
    else
#line 1549 "parse_tree.parse_tree_out_term.c"
      {
#line 1551 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 11)));

#line 1554 "parse_tree.parse_tree_out_term.c"
        {
#line 1556 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_4(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_18), ((MR_Box) (parse_tree__parse_tree_out_term__Name_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11);
#line 1558 "parse_tree.parse_tree_out_term.c"
          return;
        }
#line 1561 "parse_tree.parse_tree_out_term.c"
      }
#line 110 "parse_tree_out_term.m"
  }
#line 110 "parse_tree_out_term.m"
}

#line 107 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_4_p_0(
#line 107 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16,
#line 107 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_5,
#line 107 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Name_6,
#line 107 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_8,
#line 107 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_9)
#line 107 "parse_tree_out_term.m"
{
#line 494 "parse_tree_out_term.m"
  {
#line 494 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 524 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_19;
#line 1589 "parse_tree.parse_tree_out_term.c"
    MR_bool MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box);

#line 525 "parse_tree_out_term.m"
    {
#line 525 "parse_tree_out_term.m"
      mercury__ops__init_mercury_op_table_0_f_0();
    }
#line 1597 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_19 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[2];
#line 1599 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_19, (MR_Integer) 0)), (MR_Integer) 9)));
#line 1601 "parse_tree.parse_tree_out_term.c"
    {
#line 1603 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_op_table_19), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (parse_tree__parse_tree_out_term__Name_6)));
    }
#line 494 "parse_tree_out_term.m"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 491 "parse_tree_out_term.m"
      {
#line 491 "parse_tree_out_term.m"
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11_11;
#line 491 "parse_tree_out_term.m"
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12;
#line 1614 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1616 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1618 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1621 "parse_tree.parse_tree_out_term.c"
        {
#line 1623 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_8, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11_11);
        }
#line 1626 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 11)));
#line 1628 "parse_tree.parse_tree_out_term.c"
        {
#line 1630 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_2(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16), ((MR_Box) (parse_tree__parse_tree_out_term__Name_6)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11_11, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12);
        }
#line 1633 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1635 "parse_tree.parse_tree_out_term.c"
        {
#line 1637 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_3(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_12_12, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_9);
#line 1639 "parse_tree.parse_tree_out_term.c"
          return;
        }
#line 491 "parse_tree_out_term.m"
      }
#line 494 "parse_tree_out_term.m"
    else
#line 495 "parse_tree_out_term.m"
      {
#line 495 "parse_tree_out_term.m"
        parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_term__NextToGraphicToken_5, parse_tree__parse_tree_out_term__Name_6, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_8, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_9);
#line 495 "parse_tree_out_term.m"
        return;
      }
#line 494 "parse_tree_out_term.m"
  }
#line 107 "parse_tree_out_term.m"
}

#line 102 "parse_tree_out_term.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(
#line 102 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_36,
#line 102 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
#line 102 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
#line 102 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_9,
#line 102 "parse_tree_out_term.m"
  MR_Integer parse_tree__parse_tree_out_term__Limit_10,
#line 102 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_11)
#line 102 "parse_tree_out_term.m"
{
#line 455 "parse_tree_out_term.m"
  {
#line 455 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 455 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__String_12;
#line 455 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_37 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1];
#line 455 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__FullString_13;
#line 455 "parse_tree_out_term.m"
    MR_Integer parse_tree__parse_tree_out_term__FullLen_14;
#line 456 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__conv0_FullString_13;

#line 456 "parse_tree_out_term.m"
    {
#line 456 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_36, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_37, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__Term_11, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_FullString_13);
    }
#line 456 "parse_tree_out_term.m"
    parse_tree__parse_tree_out_term__FullString_13 = ((MR_String) parse_tree__parse_tree_out_term__conv0_FullString_13);
#line 458 "parse_tree_out_term.m"
    {
#line 458 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__FullLen_14 = mercury__string__count_codepoints_1_f_0(parse_tree__parse_tree_out_term__FullString_13);
    }
#line 459 "parse_tree_out_term.m"
    parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__FullLen_14 <= parse_tree__parse_tree_out_term__Limit_10);
#line 461 "parse_tree_out_term.m"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 460 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__String_12 = parse_tree__parse_tree_out_term__FullString_13;
#line 461 "parse_tree_out_term.m"
    else
#line 466 "parse_tree_out_term.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Term_11)) == (MR_mktag((MR_Integer) 0))))
#line 467 "parse_tree_out_term.m"
      {
#line 467 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__Functor_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_11, (MR_Integer) 0)));
#line 467 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_11, (MR_Integer) 1)));
#line 467 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_11, (MR_Integer) 2)));
#line 467 "parse_tree_out_term.m"
        MR_Word parse_tree__parse_tree_out_term__NoArgTerm_20;
#line 467 "parse_tree_out_term.m"
        MR_String parse_tree__parse_tree_out_term__FunctorString_21;
#line 469 "parse_tree_out_term.m"
        MR_Box parse_tree__parse_tree_out_term__conv1_FunctorString_21;

#line 468 "parse_tree_out_term.m"
        {
#line 468 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__NoArgTerm_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 468 "parse_tree_out_term.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__NoArgTerm_20, 0) = ((MR_Box) (parse_tree__parse_tree_out_term__Functor_17));
#line 468 "parse_tree_out_term.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__NoArgTerm_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 468 "parse_tree_out_term.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__NoArgTerm_20, 2) = ((MR_Box) (parse_tree__parse_tree_out_term__Context_19));
#line 468 "parse_tree_out_term.m"
        }
#line 469 "parse_tree_out_term.m"
        {
#line 469 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_36, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_37, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__NoArgTerm_20, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv1_FunctorString_21);
        }
#line 469 "parse_tree_out_term.m"
        parse_tree__parse_tree_out_term__FunctorString_21 = ((MR_String) parse_tree__parse_tree_out_term__conv1_FunctorString_21);
#line 475 "parse_tree_out_term.m"
#line 475 "parse_tree_out_term.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_17)) {
#line 475 "parse_tree_out_term.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 475 "parse_tree_out_term.m"
          case (MR_Integer) 0:
#line 472 "parse_tree_out_term.m"
            {
#line 472 "parse_tree_out_term.m"
              MR_Word parse_tree__parse_tree_out_term__TypeInfo_39_39;
#line 472 "parse_tree_out_term.m"
              MR_String parse_tree__parse_tree_out_term__ArityStr_23;
#line 472 "parse_tree_out_term.m"
              MR_Integer parse_tree__parse_tree_out_term__V_33_33;
#line 472 "parse_tree_out_term.m"
              MR_String parse_tree__parse_tree_out_term__V_34_34;

#line 1764 "parse_tree.parse_tree_out_term.c"
              {
#line 1766 "parse_tree.parse_tree_out_term.c"
                parse_tree__parse_tree_out_term__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1768 "parse_tree.parse_tree_out_term.c"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_39_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 1770 "parse_tree.parse_tree_out_term.c"
                MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_39_39, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_36));
#line 1772 "parse_tree.parse_tree_out_term.c"
              }
#line 473 "parse_tree_out_term.m"
              {
#line 473 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__V_33_33 = mercury__list__length_1_f_0(parse_tree__parse_tree_out_term__TypeInfo_39_39, (MR_Word) parse_tree__parse_tree_out_term__Args_18);
              }
#line 473 "parse_tree_out_term.m"
              {
#line 473 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__ArityStr_23 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_out_term__V_33_33);
              }
#line 474 "parse_tree_out_term.m"
              {
#line 474 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__parse_tree_out_term__ArityStr_23);
              }
#line 474 "parse_tree_out_term.m"
              {
#line 474 "parse_tree_out_term.m"
                return parse_tree__parse_tree_out_term__String_12 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_term__FunctorString_21, parse_tree__parse_tree_out_term__V_34_34);
              }
#line 472 "parse_tree_out_term.m"
            }
#line 475 "parse_tree_out_term.m"
            break;
#line 475 "parse_tree_out_term.m"
          case (MR_Integer) 1:
#line 475 "parse_tree_out_term.m"
          case (MR_Integer) 2:
#line 482 "parse_tree_out_term.m"
            parse_tree__parse_tree_out_term__String_12 = parse_tree__parse_tree_out_term__FunctorString_21;
#line 475 "parse_tree_out_term.m"
            break;
#line 475 "parse_tree_out_term.m"
          case (MR_Integer) 3:
#line 482 "parse_tree_out_term.m"
            parse_tree__parse_tree_out_term__String_12 = parse_tree__parse_tree_out_term__FunctorString_21;
#line 475 "parse_tree_out_term.m"
            break;
#line 475 "parse_tree_out_term.m"
        }
#line 467 "parse_tree_out_term.m"
      }
#line 466 "parse_tree_out_term.m"
    else
#line 465 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__String_12 = parse_tree__parse_tree_out_term__FullString_13;
#line 455 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__String_12;
#line 455 "parse_tree_out_term.m"
  }
#line 102 "parse_tree_out_term.m"
}

#line 100 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_nq_7_p_0(
#line 100 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_18,
#line 100 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_8,
#line 100 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_9,
#line 100 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_10,
#line 100 "parse_tree_out_term.m"
  MR_Integer parse_tree__parse_tree_out_term__Limit_11,
#line 100 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_12)
#line 100 "parse_tree_out_term.m"
{
#line 450 "parse_tree_out_term.m"
  {
#line 450 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 450 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__V_16_16;

#line 451 "parse_tree_out_term.m"
    {
#line 451 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__V_16_16 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_18, parse_tree__parse_tree_out_term__VarSet_8, parse_tree__parse_tree_out_term__VarNamePrint_9, parse_tree__parse_tree_out_term__NextToGraphicToken_10, parse_tree__parse_tree_out_term__Limit_11, parse_tree__parse_tree_out_term__Term_12);
    }
#line 451 "parse_tree_out_term.m"
    {
#line 451 "parse_tree_out_term.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_term__V_16_16);
#line 451 "parse_tree_out_term.m"
      return;
    }
#line 450 "parse_tree_out_term.m"
  }
#line 100 "parse_tree_out_term.m"
}

#line 97 "parse_tree_out_term.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_to_string_4_f_0(
#line 97 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_11,
#line 97 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 97 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 97 "parse_tree_out_term.m"
  MR_Integer parse_tree__parse_tree_out_term__Limit_8,
#line 97 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_9)
#line 97 "parse_tree_out_term.m"
{
#line 443 "parse_tree_out_term.m"
  {
#line 443 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 443 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__HeadVar__5_5;

#line 444 "parse_tree_out_term.m"
    {
#line 444 "parse_tree_out_term.m"
      return parse_tree__parse_tree_out_term__HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_11, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__Limit_8, parse_tree__parse_tree_out_term__Term_9);
    }
#line 443 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__HeadVar__5_5;
#line 443 "parse_tree_out_term.m"
  }
#line 97 "parse_tree_out_term.m"
}

#line 95 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_6_p_0(
#line 95 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_16,
#line 95 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
#line 95 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
#line 95 "parse_tree_out_term.m"
  MR_Integer parse_tree__parse_tree_out_term__Limit_9,
#line 95 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_10)
#line 95 "parse_tree_out_term.m"
{
#line 439 "parse_tree_out_term.m"
  {
#line 439 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 439 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__V_25_25;

#line 451 "parse_tree_out_term.m"
    {
#line 451 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__V_25_25 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_16, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 1, parse_tree__parse_tree_out_term__Limit_9, parse_tree__parse_tree_out_term__Term_10);
    }
#line 451 "parse_tree_out_term.m"
    {
#line 451 "parse_tree_out_term.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_term__V_25_25);
#line 451 "parse_tree_out_term.m"
      return;
    }
#line 439 "parse_tree_out_term.m"
  }
#line 95 "parse_tree_out_term.m"
}

#line 91 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(
#line 91 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_17,
#line 91 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16,
#line 91 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
#line 91 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
#line 91 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__HeadTerm_9,
#line 91 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TailTerms_10,
#line 91 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_12,
#line 91 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13)
#line 91 "parse_tree_out_term.m"
{
#line 393 "parse_tree_out_term.m"
  {
#line 393 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 393 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14;

#line 247 "parse_tree_out_term.m"
    {
#line 247 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_17, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 1, parse_tree__parse_tree_out_term__HeadTerm_9, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_12, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14);
    }
#line 395 "parse_tree_out_term.m"
    {
#line 395 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_remaining_terms_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_17, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__TailTerms_10, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14_14, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_13);
#line 395 "parse_tree_out_term.m"
      return;
    }
#line 393 "parse_tree_out_term.m"
  }
#line 91 "parse_tree_out_term.m"
}

#line 88 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(
#line 88 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_131,
#line 88 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130,
#line 88 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
#line 88 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
#line 88 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_9,
#line 88 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_10,
#line 88 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29,
#line 88 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30)
#line 88 "parse_tree_out_term.m"
{
#line 265 "parse_tree_out_term.m"
  while (MR_TRUE)
#line 265 "parse_tree_out_term.m"
    {
#line 265 "parse_tree_out_term.m"
      /* tailcall optimized into a loop */
#line 265 "parse_tree_out_term.m"
      {
#line 265 "parse_tree_out_term.m"
        MR_bool parse_tree__parse_tree_out_term__succeeded;

#line 265 "parse_tree_out_term.m"
        if (((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Term_10)) == (MR_mktag((MR_Integer) 0))))
#line 266 "parse_tree_out_term.m"
          {
#line 266 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 0)));
#line 266 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 1)));
#line 266 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 2)));
#line 277 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__F_17;
#line 277 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__X_18;
#line 277 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__Xs_19;
#line 268 "parse_tree_out_term.m"
            MR_String parse_tree__parse_tree_out_term__V_31_31;
#line 268 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__V_32_32;

#line 268 "parse_tree_out_term.m"
            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 268 "parse_tree_out_term.m"
            if (parse_tree__parse_tree_out_term__succeeded)
#line 268 "parse_tree_out_term.m"
              {
#line 268 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
#line 268 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_31_31, (MR_String) "") == 0);
#line 268 "parse_tree_out_term.m"
                if (parse_tree__parse_tree_out_term__succeeded)
#line 268 "parse_tree_out_term.m"
                  {
#line 269 "parse_tree_out_term.m"
                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 269 "parse_tree_out_term.m"
                    if (parse_tree__parse_tree_out_term__succeeded)
#line 269 "parse_tree_out_term.m"
                      {
#line 269 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__F_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
#line 269 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
#line 269 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 269 "parse_tree_out_term.m"
                        if (parse_tree__parse_tree_out_term__succeeded)
#line 269 "parse_tree_out_term.m"
                          {
#line 269 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_32_32, (MR_Integer) 0)));
#line 269 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__Xs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_32_32, (MR_Integer) 1)));
#line 269 "parse_tree_out_term.m"
                          }
#line 269 "parse_tree_out_term.m"
                      }
#line 268 "parse_tree_out_term.m"
                  }
#line 268 "parse_tree_out_term.m"
              }
#line 277 "parse_tree_out_term.m"
            if (parse_tree__parse_tree_out_term__succeeded)
#line 272 "parse_tree_out_term.m"
              {
#line 272 "parse_tree_out_term.m"
                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_33_33;
#line 272 "parse_tree_out_term.m"
                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_35_35;
#line 272 "parse_tree_out_term.m"
                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_36_36;

#line 271 "parse_tree_out_term.m"
                {
#line 271 "parse_tree_out_term.m"
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__F_17, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_33_33);
                }
#line 273 "parse_tree_out_term.m"
                {
#line 273 "parse_tree_out_term.m"
                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_33_33, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_35_35);
                }
#line 274 "parse_tree_out_term.m"
                {
#line 274 "parse_tree_out_term.m"
                  parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__X_18, parse_tree__parse_tree_out_term__Xs_19, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_36_36);
                }
#line 276 "parse_tree_out_term.m"
                {
#line 276 "parse_tree_out_term.m"
                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_36_36, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 276 "parse_tree_out_term.m"
                  return;
                }
#line 272 "parse_tree_out_term.m"
              }
#line 277 "parse_tree_out_term.m"
            else
#line 285 "parse_tree_out_term.m"
              {
#line 285 "parse_tree_out_term.m"
                MR_Word parse_tree__parse_tree_out_term__X_128;
#line 285 "parse_tree_out_term.m"
                MR_Word parse_tree__parse_tree_out_term__Xs_129;
#line 278 "parse_tree_out_term.m"
                MR_String parse_tree__parse_tree_out_term__V_39_39;
#line 278 "parse_tree_out_term.m"
                MR_Word parse_tree__parse_tree_out_term__V_40_40;
#line 278 "parse_tree_out_term.m"
                MR_Word parse_tree__parse_tree_out_term__V_41_41;

#line 278 "parse_tree_out_term.m"
                parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 278 "parse_tree_out_term.m"
                if (parse_tree__parse_tree_out_term__succeeded)
#line 278 "parse_tree_out_term.m"
                  {
#line 278 "parse_tree_out_term.m"
                    parse_tree__parse_tree_out_term__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
#line 278 "parse_tree_out_term.m"
                    parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_39_39, (MR_String) "[|]") == 0);
#line 278 "parse_tree_out_term.m"
                    if (parse_tree__parse_tree_out_term__succeeded)
#line 278 "parse_tree_out_term.m"
                      {
#line 279 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 279 "parse_tree_out_term.m"
                        if (parse_tree__parse_tree_out_term__succeeded)
#line 279 "parse_tree_out_term.m"
                          {
#line 279 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__X_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
#line 279 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
#line 279 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 279 "parse_tree_out_term.m"
                            if (parse_tree__parse_tree_out_term__succeeded)
#line 279 "parse_tree_out_term.m"
                              {
#line 279 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__Xs_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_40_40, (MR_Integer) 0)));
#line 279 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_40_40, (MR_Integer) 1)));
#line 279 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "parse_tree_out_term.m"
                              }
#line 279 "parse_tree_out_term.m"
                          }
#line 278 "parse_tree_out_term.m"
                      }
#line 278 "parse_tree_out_term.m"
                  }
#line 285 "parse_tree_out_term.m"
                if (parse_tree__parse_tree_out_term__succeeded)
#line 281 "parse_tree_out_term.m"
                  {
#line 281 "parse_tree_out_term.m"
                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_43_43;
#line 281 "parse_tree_out_term.m"
                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_44_44;
#line 281 "parse_tree_out_term.m"
                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_45_45;

#line 281 "parse_tree_out_term.m"
                    {
#line 281 "parse_tree_out_term.m"
                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "[", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_43_43);
                    }
#line 282 "parse_tree_out_term.m"
                    {
#line 282 "parse_tree_out_term.m"
                      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__X_128, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_44_44);
                    }
#line 283 "parse_tree_out_term.m"
                    {
#line 283 "parse_tree_out_term.m"
                      parse_tree__parse_tree_out_term__mercury_format_list_args_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__Xs_129, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_44_44, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_45_45);
                    }
#line 284 "parse_tree_out_term.m"
                    {
#line 284 "parse_tree_out_term.m"
                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "]", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_45_45, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 284 "parse_tree_out_term.m"
                      return;
                    }
#line 281 "parse_tree_out_term.m"
                  }
#line 285 "parse_tree_out_term.m"
                else
#line 294 "parse_tree_out_term.m"
                  {
#line 294 "parse_tree_out_term.m"
                    MR_Word parse_tree__parse_tree_out_term__X_126;
#line 286 "parse_tree_out_term.m"
                    MR_String parse_tree__parse_tree_out_term__V_48_48;
#line 286 "parse_tree_out_term.m"
                    MR_Word parse_tree__parse_tree_out_term__V_49_49;

#line 286 "parse_tree_out_term.m"
                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 286 "parse_tree_out_term.m"
                    if (parse_tree__parse_tree_out_term__succeeded)
#line 286 "parse_tree_out_term.m"
                      {
#line 286 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
#line 286 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_48_48, (MR_String) "{}") == 0);
#line 286 "parse_tree_out_term.m"
                        if (parse_tree__parse_tree_out_term__succeeded)
#line 286 "parse_tree_out_term.m"
                          {
#line 287 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 287 "parse_tree_out_term.m"
                            if (parse_tree__parse_tree_out_term__succeeded)
#line 287 "parse_tree_out_term.m"
                              {
#line 287 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__X_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
#line 287 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
#line 287 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "parse_tree_out_term.m"
                              }
#line 286 "parse_tree_out_term.m"
                          }
#line 286 "parse_tree_out_term.m"
                      }
#line 294 "parse_tree_out_term.m"
                    if (parse_tree__parse_tree_out_term__succeeded)
#line 291 "parse_tree_out_term.m"
                      {
#line 291 "parse_tree_out_term.m"
                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_51_51;
#line 291 "parse_tree_out_term.m"
                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_52_52;

#line 291 "parse_tree_out_term.m"
                        {
#line 291 "parse_tree_out_term.m"
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "{ ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_51_51);
                        }
#line 292 "parse_tree_out_term.m"
                        {
#line 292 "parse_tree_out_term.m"
                          parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__X_126, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_51_51, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_52_52);
                        }
#line 293 "parse_tree_out_term.m"
                        {
#line 293 "parse_tree_out_term.m"
                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " }", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_52_52, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 293 "parse_tree_out_term.m"
                          return;
                        }
#line 291 "parse_tree_out_term.m"
                      }
#line 294 "parse_tree_out_term.m"
                    else
#line 302 "parse_tree_out_term.m"
                      {
#line 302 "parse_tree_out_term.m"
                        MR_Word parse_tree__parse_tree_out_term__X_124;
#line 302 "parse_tree_out_term.m"
                        MR_Word parse_tree__parse_tree_out_term__Xs_125;
#line 295 "parse_tree_out_term.m"
                        MR_String parse_tree__parse_tree_out_term__V_55_55;

#line 295 "parse_tree_out_term.m"
                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 295 "parse_tree_out_term.m"
                        if (parse_tree__parse_tree_out_term__succeeded)
#line 295 "parse_tree_out_term.m"
                          {
#line 295 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
#line 295 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__V_55_55, (MR_String) "{}") == 0);
#line 295 "parse_tree_out_term.m"
                            if (parse_tree__parse_tree_out_term__succeeded)
#line 295 "parse_tree_out_term.m"
                              {
#line 296 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 296 "parse_tree_out_term.m"
                                if (parse_tree__parse_tree_out_term__succeeded)
#line 296 "parse_tree_out_term.m"
                                  {
#line 296 "parse_tree_out_term.m"
                                    parse_tree__parse_tree_out_term__X_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
#line 296 "parse_tree_out_term.m"
                                    parse_tree__parse_tree_out_term__Xs_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
#line 296 "parse_tree_out_term.m"
                                  }
#line 295 "parse_tree_out_term.m"
                              }
#line 295 "parse_tree_out_term.m"
                          }
#line 302 "parse_tree_out_term.m"
                        if (parse_tree__parse_tree_out_term__succeeded)
#line 298 "parse_tree_out_term.m"
                          {
#line 298 "parse_tree_out_term.m"
                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_57_57;
#line 298 "parse_tree_out_term.m"
                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_58_58;

#line 298 "parse_tree_out_term.m"
                            {
#line 298 "parse_tree_out_term.m"
                              parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "{", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_57_57);
                            }
#line 299 "parse_tree_out_term.m"
                            {
#line 299 "parse_tree_out_term.m"
                              parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__X_124, parse_tree__parse_tree_out_term__Xs_125, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_57_57, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_58_58);
                            }
#line 301 "parse_tree_out_term.m"
                            {
#line 301 "parse_tree_out_term.m"
                              parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "}", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_58_58, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 301 "parse_tree_out_term.m"
                              return;
                            }
#line 298 "parse_tree_out_term.m"
                          }
#line 302 "parse_tree_out_term.m"
                        else
#line 314 "parse_tree_out_term.m"
                          {
#line 314 "parse_tree_out_term.m"
                            MR_Word parse_tree__parse_tree_out_term__BinaryPrefixArg1_20;
#line 314 "parse_tree_out_term.m"
                            MR_Word parse_tree__parse_tree_out_term__BinaryPrefixArg2_21;
#line 314 "parse_tree_out_term.m"
                            MR_String parse_tree__parse_tree_out_term__FunctorName_22;
#line 303 "parse_tree_out_term.m"
                            MR_Word parse_tree__parse_tree_out_term__V_61_61;
#line 303 "parse_tree_out_term.m"
                            MR_Word parse_tree__parse_tree_out_term__V_62_62;

#line 303 "parse_tree_out_term.m"
                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 303 "parse_tree_out_term.m"
                            if (parse_tree__parse_tree_out_term__succeeded)
#line 303 "parse_tree_out_term.m"
                              {
#line 303 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__BinaryPrefixArg1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
#line 303 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
#line 303 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 303 "parse_tree_out_term.m"
                                if (parse_tree__parse_tree_out_term__succeeded)
#line 303 "parse_tree_out_term.m"
                                  {
#line 303 "parse_tree_out_term.m"
                                    parse_tree__parse_tree_out_term__BinaryPrefixArg2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_61_61, (MR_Integer) 0)));
#line 303 "parse_tree_out_term.m"
                                    parse_tree__parse_tree_out_term__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_61_61, (MR_Integer) 1)));
#line 303 "parse_tree_out_term.m"
                                    parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "parse_tree_out_term.m"
                                    if (parse_tree__parse_tree_out_term__succeeded)
#line 303 "parse_tree_out_term.m"
                                      {
#line 304 "parse_tree_out_term.m"
                                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 304 "parse_tree_out_term.m"
                                        if (parse_tree__parse_tree_out_term__succeeded)
#line 304 "parse_tree_out_term.m"
                                          {
#line 304 "parse_tree_out_term.m"
                                            parse_tree__parse_tree_out_term__FunctorName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
#line 305 "parse_tree_out_term.m"
                                            {
#line 305 "parse_tree_out_term.m"
                                              parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(parse_tree__parse_tree_out_term__FunctorName_22);
                                            }
#line 304 "parse_tree_out_term.m"
                                          }
#line 303 "parse_tree_out_term.m"
                                      }
#line 303 "parse_tree_out_term.m"
                                  }
#line 303 "parse_tree_out_term.m"
                              }
#line 314 "parse_tree_out_term.m"
                            if (parse_tree__parse_tree_out_term__succeeded)
#line 307 "parse_tree_out_term.m"
                              {
#line 307 "parse_tree_out_term.m"
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_64_64;
#line 307 "parse_tree_out_term.m"
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_65_65;
#line 307 "parse_tree_out_term.m"
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_67_67;
#line 307 "parse_tree_out_term.m"
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_68_68;
#line 307 "parse_tree_out_term.m"
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_70_70;
#line 307 "parse_tree_out_term.m"
                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_71_71;

#line 307 "parse_tree_out_term.m"
                                {
#line 307 "parse_tree_out_term.m"
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_64_64);
                                }
#line 308 "parse_tree_out_term.m"
                                {
#line 308 "parse_tree_out_term.m"
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__FunctorName_22, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_64_64, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_65_65);
                                }
#line 309 "parse_tree_out_term.m"
                                {
#line 309 "parse_tree_out_term.m"
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_65_65, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_67_67);
                                }
#line 310 "parse_tree_out_term.m"
                                {
#line 310 "parse_tree_out_term.m"
                                  parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__BinaryPrefixArg1_20, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_67_67, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_68_68);
                                }
#line 311 "parse_tree_out_term.m"
                                {
#line 311 "parse_tree_out_term.m"
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_68_68, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_70_70);
                                }
#line 312 "parse_tree_out_term.m"
                                {
#line 312 "parse_tree_out_term.m"
                                  parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__BinaryPrefixArg2_21, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_70_70, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_71_71);
                                }
#line 313 "parse_tree_out_term.m"
                                {
#line 313 "parse_tree_out_term.m"
                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_71_71, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 313 "parse_tree_out_term.m"
                                  return;
                                }
#line 307 "parse_tree_out_term.m"
                              }
#line 314 "parse_tree_out_term.m"
                            else
#line 324 "parse_tree_out_term.m"
                              {
#line 324 "parse_tree_out_term.m"
                                MR_Word parse_tree__parse_tree_out_term__PrefixArg_23;
#line 324 "parse_tree_out_term.m"
                                MR_String parse_tree__parse_tree_out_term__FunctorName_123;
#line 315 "parse_tree_out_term.m"
                                MR_Word parse_tree__parse_tree_out_term__V_74_74;

#line 315 "parse_tree_out_term.m"
                                parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 315 "parse_tree_out_term.m"
                                if (parse_tree__parse_tree_out_term__succeeded)
#line 315 "parse_tree_out_term.m"
                                  {
#line 315 "parse_tree_out_term.m"
                                    parse_tree__parse_tree_out_term__PrefixArg_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
#line 315 "parse_tree_out_term.m"
                                    parse_tree__parse_tree_out_term__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
#line 315 "parse_tree_out_term.m"
                                    parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "parse_tree_out_term.m"
                                    if (parse_tree__parse_tree_out_term__succeeded)
#line 315 "parse_tree_out_term.m"
                                      {
#line 316 "parse_tree_out_term.m"
                                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 316 "parse_tree_out_term.m"
                                        if (parse_tree__parse_tree_out_term__succeeded)
#line 316 "parse_tree_out_term.m"
                                          {
#line 316 "parse_tree_out_term.m"
                                            parse_tree__parse_tree_out_term__FunctorName_123 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
#line 317 "parse_tree_out_term.m"
                                            {
#line 317 "parse_tree_out_term.m"
                                              parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(parse_tree__parse_tree_out_term__FunctorName_123);
                                            }
#line 316 "parse_tree_out_term.m"
                                          }
#line 315 "parse_tree_out_term.m"
                                      }
#line 315 "parse_tree_out_term.m"
                                  }
#line 324 "parse_tree_out_term.m"
                                if (parse_tree__parse_tree_out_term__succeeded)
#line 319 "parse_tree_out_term.m"
                                  {
#line 319 "parse_tree_out_term.m"
                                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_76_76;
#line 319 "parse_tree_out_term.m"
                                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_77_77;
#line 319 "parse_tree_out_term.m"
                                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_79_79;
#line 319 "parse_tree_out_term.m"
                                    MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_80_80;

#line 319 "parse_tree_out_term.m"
                                    {
#line 319 "parse_tree_out_term.m"
                                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_76_76);
                                    }
#line 320 "parse_tree_out_term.m"
                                    {
#line 320 "parse_tree_out_term.m"
                                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__FunctorName_123, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_76_76, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_77_77);
                                    }
#line 321 "parse_tree_out_term.m"
                                    {
#line 321 "parse_tree_out_term.m"
                                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_77_77, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_79_79);
                                    }
#line 322 "parse_tree_out_term.m"
                                    {
#line 322 "parse_tree_out_term.m"
                                      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__PrefixArg_23, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_79_79, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_80_80);
                                    }
#line 323 "parse_tree_out_term.m"
                                    {
#line 323 "parse_tree_out_term.m"
                                      parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_80_80, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 323 "parse_tree_out_term.m"
                                      return;
                                    }
#line 319 "parse_tree_out_term.m"
                                  }
#line 324 "parse_tree_out_term.m"
                                else
#line 334 "parse_tree_out_term.m"
                                  {
#line 334 "parse_tree_out_term.m"
                                    MR_Word parse_tree__parse_tree_out_term__PostfixArg_24;
#line 334 "parse_tree_out_term.m"
                                    MR_String parse_tree__parse_tree_out_term__FunctorName_122;
#line 325 "parse_tree_out_term.m"
                                    MR_Word parse_tree__parse_tree_out_term__V_83_83;

#line 325 "parse_tree_out_term.m"
                                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 325 "parse_tree_out_term.m"
                                    if (parse_tree__parse_tree_out_term__succeeded)
#line 325 "parse_tree_out_term.m"
                                      {
#line 325 "parse_tree_out_term.m"
                                        parse_tree__parse_tree_out_term__PostfixArg_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
#line 325 "parse_tree_out_term.m"
                                        parse_tree__parse_tree_out_term__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
#line 325 "parse_tree_out_term.m"
                                        parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "parse_tree_out_term.m"
                                        if (parse_tree__parse_tree_out_term__succeeded)
#line 325 "parse_tree_out_term.m"
                                          {
#line 326 "parse_tree_out_term.m"
                                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 326 "parse_tree_out_term.m"
                                            if (parse_tree__parse_tree_out_term__succeeded)
#line 326 "parse_tree_out_term.m"
                                              {
#line 326 "parse_tree_out_term.m"
                                                parse_tree__parse_tree_out_term__FunctorName_122 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
#line 327 "parse_tree_out_term.m"
                                                {
#line 327 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(parse_tree__parse_tree_out_term__FunctorName_122);
                                                }
#line 326 "parse_tree_out_term.m"
                                              }
#line 325 "parse_tree_out_term.m"
                                          }
#line 325 "parse_tree_out_term.m"
                                      }
#line 334 "parse_tree_out_term.m"
                                    if (parse_tree__parse_tree_out_term__succeeded)
#line 329 "parse_tree_out_term.m"
                                      {
#line 329 "parse_tree_out_term.m"
                                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_85_85;
#line 329 "parse_tree_out_term.m"
                                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_86_86;
#line 329 "parse_tree_out_term.m"
                                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_88_88;
#line 329 "parse_tree_out_term.m"
                                        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_89_89;

#line 329 "parse_tree_out_term.m"
                                        {
#line 329 "parse_tree_out_term.m"
                                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_85_85);
                                        }
#line 330 "parse_tree_out_term.m"
                                        {
#line 330 "parse_tree_out_term.m"
                                          parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__PostfixArg_24, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_85_85, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_86_86);
                                        }
#line 331 "parse_tree_out_term.m"
                                        {
#line 331 "parse_tree_out_term.m"
                                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_86_86, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_88_88);
                                        }
#line 332 "parse_tree_out_term.m"
                                        {
#line 332 "parse_tree_out_term.m"
                                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__FunctorName_122, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_88_88, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_89_89);
                                        }
#line 333 "parse_tree_out_term.m"
                                        {
#line 333 "parse_tree_out_term.m"
                                          parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_89_89, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 333 "parse_tree_out_term.m"
                                          return;
                                        }
#line 329 "parse_tree_out_term.m"
                                      }
#line 334 "parse_tree_out_term.m"
                                    else
#line 356 "parse_tree_out_term.m"
                                      {
#line 356 "parse_tree_out_term.m"
                                        MR_Word parse_tree__parse_tree_out_term__Arg1_25;
#line 356 "parse_tree_out_term.m"
                                        MR_Word parse_tree__parse_tree_out_term__Arg2_26;
#line 356 "parse_tree_out_term.m"
                                        MR_String parse_tree__parse_tree_out_term__FunctorName_121;
#line 335 "parse_tree_out_term.m"
                                        MR_Word parse_tree__parse_tree_out_term__V_92_92;
#line 335 "parse_tree_out_term.m"
                                        MR_Word parse_tree__parse_tree_out_term__V_93_93;

#line 335 "parse_tree_out_term.m"
                                        parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 335 "parse_tree_out_term.m"
                                        if (parse_tree__parse_tree_out_term__succeeded)
#line 335 "parse_tree_out_term.m"
                                          {
#line 335 "parse_tree_out_term.m"
                                            parse_tree__parse_tree_out_term__Arg1_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
#line 335 "parse_tree_out_term.m"
                                            parse_tree__parse_tree_out_term__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
#line 335 "parse_tree_out_term.m"
                                            parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__V_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 335 "parse_tree_out_term.m"
                                            if (parse_tree__parse_tree_out_term__succeeded)
#line 335 "parse_tree_out_term.m"
                                              {
#line 335 "parse_tree_out_term.m"
                                                parse_tree__parse_tree_out_term__Arg2_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_92_92, (MR_Integer) 0)));
#line 335 "parse_tree_out_term.m"
                                                parse_tree__parse_tree_out_term__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__V_92_92, (MR_Integer) 1)));
#line 335 "parse_tree_out_term.m"
                                                parse_tree__parse_tree_out_term__succeeded = (parse_tree__parse_tree_out_term__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "parse_tree_out_term.m"
                                                if (parse_tree__parse_tree_out_term__succeeded)
#line 335 "parse_tree_out_term.m"
                                                  {
#line 336 "parse_tree_out_term.m"
                                                    parse_tree__parse_tree_out_term__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 336 "parse_tree_out_term.m"
                                                    if (parse_tree__parse_tree_out_term__succeeded)
#line 336 "parse_tree_out_term.m"
                                                      {
#line 336 "parse_tree_out_term.m"
                                                        parse_tree__parse_tree_out_term__FunctorName_121 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__Functor_14, (MR_Integer) 0)));
#line 337 "parse_tree_out_term.m"
                                                        {
#line 337 "parse_tree_out_term.m"
                                                          parse_tree__parse_tree_out_term__succeeded = parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(parse_tree__parse_tree_out_term__FunctorName_121);
                                                        }
#line 336 "parse_tree_out_term.m"
                                                      }
#line 335 "parse_tree_out_term.m"
                                                  }
#line 335 "parse_tree_out_term.m"
                                              }
#line 335 "parse_tree_out_term.m"
                                          }
#line 356 "parse_tree_out_term.m"
                                        if (parse_tree__parse_tree_out_term__succeeded)
#line 345 "parse_tree_out_term.m"
                                          {
#line 339 "parse_tree_out_term.m"
                                            parse_tree__parse_tree_out_term__succeeded = (strcmp(parse_tree__parse_tree_out_term__FunctorName_121, (MR_String) ".") == 0);
#line 345 "parse_tree_out_term.m"
                                            if (parse_tree__parse_tree_out_term__succeeded)
#line 341 "parse_tree_out_term.m"
                                              {
#line 341 "parse_tree_out_term.m"
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_95_95;
#line 341 "parse_tree_out_term.m"
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_97_97;

#line 340 "parse_tree_out_term.m"
                                                {
#line 340 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 0, parse_tree__parse_tree_out_term__Arg1_25, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_95_95);
                                                }
#line 342 "parse_tree_out_term.m"
                                                {
#line 342 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ".", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_95_95, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_97_97);
                                                }
#line 343 "parse_tree_out_term.m"
                                                /* direct tailcall eliminated */
#line 343 "parse_tree_out_term.m"
                                                {
#line 343 "parse_tree_out_term.m"
                                                  MR_Word parse_tree__parse_tree_out_term__Term__tmp_copy_10 = parse_tree__parse_tree_out_term__Arg2_26;
#line 343 "parse_tree_out_term.m"
                                                  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_29 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_97_97;

#line 343 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0__tmp_copy_29;
#line 343 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_term__Term_10 = parse_tree__parse_tree_out_term__Term__tmp_copy_10;
#line 343 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_term__NextToGraphicToken_9 = (MR_Integer) 0;
#line 343 "parse_tree_out_term.m"
                                                }
#line 343 "parse_tree_out_term.m"
                                                continue;
#line 341 "parse_tree_out_term.m"
                                              }
#line 345 "parse_tree_out_term.m"
                                            else
#line 346 "parse_tree_out_term.m"
                                              {
#line 346 "parse_tree_out_term.m"
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_101_101;
#line 346 "parse_tree_out_term.m"
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_103_103;
#line 346 "parse_tree_out_term.m"
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_105_105;
#line 346 "parse_tree_out_term.m"
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_106_106;
#line 346 "parse_tree_out_term.m"
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_108_108;
#line 346 "parse_tree_out_term.m"
                                                MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_110_110;

#line 346 "parse_tree_out_term.m"
                                                {
#line 346 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_101_101);
                                                }
#line 347 "parse_tree_out_term.m"
                                                {
#line 347 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 1, parse_tree__parse_tree_out_term__Arg1_25, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_101_101, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_103_103);
                                                }
#line 349 "parse_tree_out_term.m"
                                                {
#line 349 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_103_103, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_105_105);
                                                }
#line 350 "parse_tree_out_term.m"
                                                {
#line 350 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__FunctorName_121, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_105_105, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_106_106);
                                                }
#line 351 "parse_tree_out_term.m"
                                                {
#line 351 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) " ", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_106_106, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_108_108);
                                                }
#line 352 "parse_tree_out_term.m"
                                                {
#line 352 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, (MR_Integer) 1, parse_tree__parse_tree_out_term__Arg2_26, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_108_108, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_110_110);
                                                }
#line 354 "parse_tree_out_term.m"
                                                {
#line 354 "parse_tree_out_term.m"
                                                  parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_110_110, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 354 "parse_tree_out_term.m"
                                                  return;
                                                }
#line 346 "parse_tree_out_term.m"
                                              }
#line 345 "parse_tree_out_term.m"
                                          }
#line 356 "parse_tree_out_term.m"
                                        else
#line 364 "parse_tree_out_term.m"
                                        if ((parse_tree__parse_tree_out_term__Args_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "parse_tree_out_term.m"
                                          {
#line 366 "parse_tree_out_term.m"
                                            parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__Functor_14, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 366 "parse_tree_out_term.m"
                                            return;
                                          }
#line 364 "parse_tree_out_term.m"
                                        else
#line 358 "parse_tree_out_term.m"
                                          {
#line 358 "parse_tree_out_term.m"
                                            MR_Word parse_tree__parse_tree_out_term__Y_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 0)));
#line 358 "parse_tree_out_term.m"
                                            MR_Word parse_tree__parse_tree_out_term__Ys_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Args_15, (MR_Integer) 1)));
#line 358 "parse_tree_out_term.m"
                                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_114_114;
#line 358 "parse_tree_out_term.m"
                                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_116_116;
#line 358 "parse_tree_out_term.m"
                                            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_117_117;

#line 359 "parse_tree_out_term.m"
                                            {
#line 359 "parse_tree_out_term.m"
                                              parse_tree__parse_tree_out_term__mercury_format_constant_4_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__Functor_14, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_114_114);
                                            }
#line 360 "parse_tree_out_term.m"
                                            {
#line 360 "parse_tree_out_term.m"
                                              parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) "(", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_114_114, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_116_116);
                                            }
#line 361 "parse_tree_out_term.m"
                                            {
#line 361 "parse_tree_out_term.m"
                                              parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__Y_27, parse_tree__parse_tree_out_term__Ys_28, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_116_116, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_117_117);
                                            }
#line 363 "parse_tree_out_term.m"
                                            {
#line 363 "parse_tree_out_term.m"
                                              parse_tree__parse_tree_out_info__add_string_3_p_0(parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, (MR_String) ")", parse_tree__parse_tree_out_term__STATE_VARIABLE_U_117_117, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 363 "parse_tree_out_term.m"
                                              return;
                                            }
#line 358 "parse_tree_out_term.m"
                                          }
#line 356 "parse_tree_out_term.m"
                                      }
#line 334 "parse_tree_out_term.m"
                                  }
#line 324 "parse_tree_out_term.m"
                              }
#line 314 "parse_tree_out_term.m"
                          }
#line 302 "parse_tree_out_term.m"
                      }
#line 294 "parse_tree_out_term.m"
                  }
#line 285 "parse_tree_out_term.m"
              }
#line 266 "parse_tree_out_term.m"
          }
#line 265 "parse_tree_out_term.m"
        else
#line 263 "parse_tree_out_term.m"
          {
#line 263 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 0)));
#line 263 "parse_tree_out_term.m"
            MR_Word parse_tree__parse_tree_out_term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_term__Term_10, (MR_Integer) 1)));

#line 264 "parse_tree_out_term.m"
            {
#line 264 "parse_tree_out_term.m"
              parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_131, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_130, parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__Var_12, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_29, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_30);
#line 264 "parse_tree_out_term.m"
              return;
            }
#line 263 "parse_tree_out_term.m"
          }
#line 265 "parse_tree_out_term.m"
      }
#line 265 "parse_tree_out_term.m"
      break;
#line 265 "parse_tree_out_term.m"
    }
#line 88 "parse_tree_out_term.m"
}

#line 86 "parse_tree_out_term.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(
#line 86 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_12,
#line 86 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 86 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 86 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_8,
#line 86 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_9)
#line 86 "parse_tree_out_term.m"
{
#line 257 "parse_tree_out_term.m"
  {
#line 257 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 257 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__String_10;
#line 258 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__conv0_String_10;

#line 258 "parse_tree_out_term.m"
    {
#line 258 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_12, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1], parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, parse_tree__parse_tree_out_term__NextToGraphicToken_8, parse_tree__parse_tree_out_term__Term_9, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_String_10);
    }
#line 258 "parse_tree_out_term.m"
    parse_tree__parse_tree_out_term__String_10 = ((MR_String) parse_tree__parse_tree_out_term__conv0_String_10);
#line 257 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__String_10;
#line 257 "parse_tree_out_term.m"
  }
#line 86 "parse_tree_out_term.m"
}

#line 84 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(
#line 84 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_15,
#line 84 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_7,
#line 84 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_8,
#line 84 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__NextToGraphicToken_9,
#line 84 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_10)
#line 84 "parse_tree_out_term.m"
{
#line 253 "parse_tree_out_term.m"
  {
#line 253 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 253 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_13;

#line 253 "parse_tree_out_term.m"
    {
#line 253 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_15, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[0], parse_tree__parse_tree_out_term__VarSet_7, parse_tree__parse_tree_out_term__VarNamePrint_8, parse_tree__parse_tree_out_term__NextToGraphicToken_9, parse_tree__parse_tree_out_term__Term_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_13);
    }
#line 253 "parse_tree_out_term.m"
  }
#line 84 "parse_tree_out_term.m"
}

#line 81 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_5_p_0(
#line 81 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_15,
#line 81 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14,
#line 81 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 81 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 81 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_8,
#line 81 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10,
#line 81 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11)
#line 81 "parse_tree_out_term.m"
{
#line 246 "parse_tree_out_term.m"
  {
#line 246 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;

#line 247 "parse_tree_out_term.m"
    {
#line 247 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_15, parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_8, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11);
#line 247 "parse_tree_out_term.m"
      return;
    }
#line 246 "parse_tree_out_term.m"
  }
#line 81 "parse_tree_out_term.m"
}

#line 80 "parse_tree_out_term.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(
#line 80 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_9,
#line 80 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_5,
#line 80 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_6,
#line 80 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_7)
#line 80 "parse_tree_out_term.m"
{
#line 242 "parse_tree_out_term.m"
  {
#line 242 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 242 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__HeadVar__4_4;
#line 258 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__conv0_HeadVar__4_4;

#line 258 "parse_tree_out_term.m"
    {
#line 258 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_9, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1], parse_tree__parse_tree_out_term__VarSet_5, parse_tree__parse_tree_out_term__VarNamePrint_6, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_7, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_HeadVar__4_4);
    }
#line 258 "parse_tree_out_term.m"
    parse_tree__parse_tree_out_term__HeadVar__4_4 = ((MR_String) parse_tree__parse_tree_out_term__conv0_HeadVar__4_4);
#line 242 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__HeadVar__4_4;
#line 242 "parse_tree_out_term.m"
  }
#line 80 "parse_tree_out_term.m"
}

#line 78 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(
#line 78 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_14,
#line 78 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 78 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 78 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_8)
#line 78 "parse_tree_out_term.m"
{
#line 238 "parse_tree_out_term.m"
  {
#line 238 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 253 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_11;

#line 253 "parse_tree_out_term.m"
    {
#line 253 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_14, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[0], parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, (MR_Integer) 1, parse_tree__parse_tree_out_term__Term_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_11);
    }
#line 238 "parse_tree_out_term.m"
  }
#line 78 "parse_tree_out_term.m"
}

#line 72 "parse_tree_out_term.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_term__describe_error_term_2_f_0(
#line 72 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_8,
#line 72 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_4,
#line 72 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Term_5)
#line 72 "parse_tree_out_term.m"
{
#line 222 "parse_tree_out_term.m"
  {
#line 222 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 222 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__HeadVar__3_3;

#line 444 "parse_tree_out_term.m"
    {
#line 444 "parse_tree_out_term.m"
      return parse_tree__parse_tree_out_term__HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_8, parse_tree__parse_tree_out_term__VarSet_4, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 80, parse_tree__parse_tree_out_term__Term_5);
    }
#line 222 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__HeadVar__3_3;
#line 222 "parse_tree_out_term.m"
  }
#line 72 "parse_tree_out_term.m"
}

#line 210 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0_1(
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 210 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3)
#line 210 "parse_tree_out_term.m"
{
#line 210 "parse_tree_out_term.m"
  {
#line 210 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__closure = parse_tree__parse_tree_out_term__closure_arg;

#line 210 "parse_tree_out_term.m"
    {
#line 210 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), parse_tree__parse_tree_out_term__wrapper_arg_2, parse_tree__parse_tree_out_term__wrapper_arg_3);
#line 210 "parse_tree_out_term.m"
      return;
    }
#line 210 "parse_tree_out_term.m"
  }
#line 210 "parse_tree_out_term.m"
}

#line 68 "parse_tree_out_term.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(
#line 68 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_7,
#line 68 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_4,
#line 68 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Vars_5)
#line 68 "parse_tree_out_term.m"
{
#line 217 "parse_tree_out_term.m"
  {
#line 217 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 217 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__HeadVar__3_3;
#line 217 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1];
#line 217 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeInfo_21_27;
#line 217 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__V_21_21;
#line 3158 "parse_tree.parse_tree_out_term.c"
    void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3160 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv1_HeadVar__3_3;

#line 210 "parse_tree_out_term.m"
    {
#line 210 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0_1));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 3) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_7));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 4) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 5) = ((MR_Box) (parse_tree__parse_tree_out_term__VarSet_4));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_21_21, 6) = ((MR_Box) ((MR_Integer) 0));
#line 210 "parse_tree_out_term.m"
    }
#line 3183 "parse_tree.parse_tree_out_term.c"
    {
#line 3185 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__TypeInfo_21_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3187 "parse_tree.parse_tree_out_term.c"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3189 "parse_tree.parse_tree_out_term.c"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_27, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_7));
#line 3191 "parse_tree.parse_tree_out_term.c"
    }
#line 3193 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 18)));
#line 3195 "parse_tree.parse_tree_out_term.c"
    {
#line 3197 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_13), ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_21_27)), ((MR_Box) (parse_tree__parse_tree_out_term__Vars_5)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_term__V_21_21)), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv1_HeadVar__3_3);
    }
#line 3200 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__HeadVar__3_3 = ((MR_String) parse_tree__parse_tree_out_term__conv1_HeadVar__3_3);
#line 217 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__HeadVar__3_3;
#line 217 "parse_tree_out_term.m"
  }
#line 68 "parse_tree_out_term.m"
}

#line 67 "parse_tree_out_term.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(
#line 67 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_7,
#line 67 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_4,
#line 67 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Var_5)
#line 67 "parse_tree_out_term.m"
{
#line 214 "parse_tree_out_term.m"
  {
#line 214 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 214 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__HeadVar__3_3;
#line 171 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__conv0_HeadVar__3_3;

#line 171 "parse_tree_out_term.m"
    {
#line 171 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_7, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1], parse_tree__parse_tree_out_term__VarSet_4, (MR_Integer) 0, parse_tree__parse_tree_out_term__Var_5, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_HeadVar__3_3);
    }
#line 171 "parse_tree_out_term.m"
    parse_tree__parse_tree_out_term__HeadVar__3_3 = ((MR_String) parse_tree__parse_tree_out_term__conv0_HeadVar__3_3);
#line 214 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__HeadVar__3_3;
#line 214 "parse_tree_out_term.m"
  }
#line 67 "parse_tree_out_term.m"
}

#line 210 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0_1(
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 210 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3)
#line 210 "parse_tree_out_term.m"
{
#line 210 "parse_tree_out_term.m"
  {
#line 210 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__closure = parse_tree__parse_tree_out_term__closure_arg;

#line 210 "parse_tree_out_term.m"
    {
#line 210 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), parse_tree__parse_tree_out_term__wrapper_arg_2, parse_tree__parse_tree_out_term__wrapper_arg_3);
#line 210 "parse_tree_out_term.m"
      return;
    }
#line 210 "parse_tree_out_term.m"
  }
#line 210 "parse_tree_out_term.m"
}

#line 62 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0(
#line 62 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_16,
#line 62 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_15,
#line 62 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 62 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 62 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Vars_8,
#line 62 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10,
#line 62 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11)
#line 62 "parse_tree_out_term.m"
{
#line 209 "parse_tree_out_term.m"
  {
#line 209 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 209 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeInfo_21_21;
#line 209 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__V_13_13;
#line 3300 "parse_tree.parse_tree_out_term.c"
    void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 210 "parse_tree_out_term.m"
    {
#line 210 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0_1));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 3) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_16));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 4) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeClassInfo_for_output_15));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 5) = ((MR_Box) (parse_tree__parse_tree_out_term__VarSet_6));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_13_13, 6) = ((MR_Box) (parse_tree__parse_tree_out_term__VarNamePrint_7));
#line 210 "parse_tree_out_term.m"
    }
#line 3323 "parse_tree.parse_tree_out_term.c"
    {
#line 3325 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3327 "parse_tree.parse_tree_out_term.c"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3329 "parse_tree.parse_tree_out_term.c"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_21, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_16));
#line 3331 "parse_tree.parse_tree_out_term.c"
    }
#line 3333 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 18)));
#line 3335 "parse_tree.parse_tree_out_term.c"
    {
#line 3337 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_15), ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_21_21)), ((MR_Box) (parse_tree__parse_tree_out_term__Vars_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_term__V_13_13)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_10, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_11);
#line 3339 "parse_tree.parse_tree_out_term.c"
      return;
    }
#line 209 "parse_tree_out_term.m"
  }
#line 62 "parse_tree_out_term.m"
}

#line 210 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 210 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3)
#line 210 "parse_tree_out_term.m"
{
#line 210 "parse_tree_out_term.m"
  {
#line 210 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__closure = parse_tree__parse_tree_out_term__closure_arg;

#line 210 "parse_tree_out_term.m"
    {
#line 210 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), parse_tree__parse_tree_out_term__wrapper_arg_2, parse_tree__parse_tree_out_term__wrapper_arg_3);
#line 210 "parse_tree_out_term.m"
      return;
    }
#line 210 "parse_tree_out_term.m"
  }
#line 210 "parse_tree_out_term.m"
}

#line 60 "parse_tree_out_term.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(
#line 60 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_10,
#line 60 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_5,
#line 60 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_6,
#line 60 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Vars_7)
#line 60 "parse_tree_out_term.m"
{
#line 206 "parse_tree_out_term.m"
  {
#line 206 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 206 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__String_8;
#line 206 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_11 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1];
#line 206 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeInfo_21_25;
#line 206 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__V_19_19;
#line 3402 "parse_tree.parse_tree_out_term.c"
    void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3404 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv1_String_8;

#line 210 "parse_tree_out_term.m"
    {
#line 210 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 3) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_10));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 4) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeClassInfo_for_output_11));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 5) = ((MR_Box) (parse_tree__parse_tree_out_term__VarSet_5));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_19_19, 6) = ((MR_Box) (parse_tree__parse_tree_out_term__VarNamePrint_6));
#line 210 "parse_tree_out_term.m"
    }
#line 3427 "parse_tree.parse_tree_out_term.c"
    {
#line 3429 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__TypeInfo_21_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3431 "parse_tree.parse_tree_out_term.c"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3433 "parse_tree.parse_tree_out_term.c"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_25, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_10));
#line 3435 "parse_tree.parse_tree_out_term.c"
    }
#line 3437 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 18)));
#line 3439 "parse_tree.parse_tree_out_term.c"
    {
#line 3441 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_11), ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_21_25)), ((MR_Box) (parse_tree__parse_tree_out_term__Vars_7)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_term__V_19_19)), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv1_String_8);
    }
#line 3444 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__String_8 = ((MR_String) parse_tree__parse_tree_out_term__conv1_String_8);
#line 206 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__String_8;
#line 206 "parse_tree_out_term.m"
  }
#line 60 "parse_tree_out_term.m"
}

#line 210 "parse_tree_out_term.m"
static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0_1(
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__closure_arg,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_1,
#line 210 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__wrapper_arg_2,
#line 210 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__wrapper_arg_3)
#line 210 "parse_tree_out_term.m"
{
#line 210 "parse_tree_out_term.m"
  {
#line 210 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__closure = parse_tree__parse_tree_out_term__closure_arg;

#line 210 "parse_tree_out_term.m"
    {
#line 210 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__parse_tree_out_term__wrapper_arg_1), parse_tree__parse_tree_out_term__wrapper_arg_2, parse_tree__parse_tree_out_term__wrapper_arg_3);
#line 210 "parse_tree_out_term.m"
      return;
    }
#line 210 "parse_tree_out_term.m"
  }
#line 210 "parse_tree_out_term.m"
}

#line 58 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(
#line 58 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_13,
#line 58 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 58 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 58 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Vars_8)
#line 58 "parse_tree_out_term.m"
{
#line 204 "parse_tree_out_term.m"
  {
#line 204 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 204 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14 = (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[0];
#line 204 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__TypeInfo_21_28;
#line 204 "parse_tree_out_term.m"
    MR_Word parse_tree__parse_tree_out_term__V_22_22;
#line 3506 "parse_tree.parse_tree_out_term.c"
    void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3508 "parse_tree.parse_tree_out_term.c"
    MR_Box parse_tree__parse_tree_out_term__conv1_STATE_VARIABLE_IO_11;

#line 210 "parse_tree_out_term.m"
    {
#line 210 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0]));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0_1));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 3) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_13));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 4) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 5) = ((MR_Box) (parse_tree__parse_tree_out_term__VarSet_6));
#line 210 "parse_tree_out_term.m"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__V_22_22, 6) = ((MR_Box) (parse_tree__parse_tree_out_term__VarNamePrint_7));
#line 210 "parse_tree_out_term.m"
    }
#line 3531 "parse_tree.parse_tree_out_term.c"
    {
#line 3533 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__TypeInfo_21_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3535 "parse_tree.parse_tree_out_term.c"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 3537 "parse_tree.parse_tree_out_term.c"
      MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeInfo_21_28, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_for_T_13));
#line 3539 "parse_tree.parse_tree_out_term.c"
    }
#line 3541 "parse_tree.parse_tree_out_term.c"
    parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 18)));
#line 3543 "parse_tree.parse_tree_out_term.c"
    {
#line 3545 "parse_tree.parse_tree_out_term.c"
      parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_14), ((MR_Box) (parse_tree__parse_tree_out_term__TypeInfo_21_28)), ((MR_Box) (parse_tree__parse_tree_out_term__Vars_8)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_term__V_22_22)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_term__conv1_STATE_VARIABLE_IO_11);
    }
#line 204 "parse_tree_out_term.m"
  }
#line 58 "parse_tree_out_term.m"
}

#line 53 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(
#line 53 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_30,
#line 53 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29,
#line 53 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 53 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 53 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Var_8,
#line 53 "parse_tree_out_term.m"
  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_13,
#line 53 "parse_tree_out_term.m"
  MR_Box * parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14)
#line 53 "parse_tree_out_term.m"
{
#line 195 "parse_tree_out_term.m"
  {
#line 195 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 195 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__Name_10;

#line 174 "parse_tree_out_term.m"
    {
#line 174 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__succeeded = mercury__varset__search_name_3_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_30, parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__Var_8, &parse_tree__parse_tree_out_term__Name_10);
    }
#line 195 "parse_tree_out_term.m"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 180 "parse_tree_out_term.m"
#line 180 "parse_tree_out_term.m"
      switch (parse_tree__parse_tree_out_term__VarNamePrint_7) {
#line 180 "parse_tree_out_term.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 180 "parse_tree_out_term.m"
        case (MR_Integer) 1:
#line 180 "parse_tree_out_term.m"
        case (MR_Integer) 0:
#line 183 "parse_tree_out_term.m"
          {
#line 183 "parse_tree_out_term.m"
            MR_String parse_tree__parse_tree_out_term__ConvertedName_12;
#line 183 "parse_tree_out_term.m"
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_15_15;
#line 3601 "parse_tree.parse_tree_out_term.c"
            void MR_CALL (* parse_tree__parse_tree_out_term__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 184 "parse_tree_out_term.m"
            {
#line 184 "parse_tree_out_term.m"
              parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(parse_tree__parse_tree_out_term__Name_10, &parse_tree__parse_tree_out_term__ConvertedName_12);
            }
#line 3609 "parse_tree.parse_tree_out_term.c"
            parse_tree__parse_tree_out_term__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3611 "parse_tree.parse_tree_out_term.c"
            {
#line 3613 "parse_tree.parse_tree_out_term.c"
              parse_tree__parse_tree_out_term__func_0(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) (parse_tree__parse_tree_out_term__ConvertedName_12)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_15_15);
            }
#line 188 "parse_tree_out_term.m"
#line 188 "parse_tree_out_term.m"
            switch (parse_tree__parse_tree_out_term__VarNamePrint_7) {
#line 188 "parse_tree_out_term.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 188 "parse_tree_out_term.m"
              case (MR_Integer) 1:
#line 189 "parse_tree_out_term.m"
                {
#line 189 "parse_tree_out_term.m"
                  MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_17_17;
#line 189 "parse_tree_out_term.m"
                  MR_Integer parse_tree__parse_tree_out_term__VarNum_25;
#line 3629 "parse_tree.parse_tree_out_term.c"
                  void MR_CALL (* parse_tree__parse_tree_out_term__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3631 "parse_tree.parse_tree_out_term.c"
                  void MR_CALL (* parse_tree__parse_tree_out_term__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 190 "parse_tree_out_term.m"
                  {
#line 190 "parse_tree_out_term.m"
                    mercury__term__var_to_int_2_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_30, parse_tree__parse_tree_out_term__Var_8, &parse_tree__parse_tree_out_term__VarNum_25);
                  }
#line 3639 "parse_tree.parse_tree_out_term.c"
                  parse_tree__parse_tree_out_term__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3641 "parse_tree.parse_tree_out_term.c"
                  {
#line 3643 "parse_tree.parse_tree_out_term.c"
                    parse_tree__parse_tree_out_term__func_1(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "_")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_15_15, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_17_17);
                  }
#line 3646 "parse_tree.parse_tree_out_term.c"
                  parse_tree__parse_tree_out_term__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 3648 "parse_tree.parse_tree_out_term.c"
                  {
#line 3650 "parse_tree.parse_tree_out_term.c"
                    parse_tree__parse_tree_out_term__func_2(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) (parse_tree__parse_tree_out_term__VarNum_25)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_17_17, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14);
#line 3652 "parse_tree.parse_tree_out_term.c"
                    return;
                  }
#line 189 "parse_tree_out_term.m"
                }
#line 188 "parse_tree_out_term.m"
                break;
#line 188 "parse_tree_out_term.m"
              case (MR_Integer) 0:
#line 187 "parse_tree_out_term.m"
                *parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14 = parse_tree__parse_tree_out_term__STATE_VARIABLE_U_15_15;
#line 188 "parse_tree_out_term.m"
                break;
#line 188 "parse_tree_out_term.m"
            }
#line 183 "parse_tree_out_term.m"
          }
#line 180 "parse_tree_out_term.m"
          break;
#line 180 "parse_tree_out_term.m"
        case (MR_Integer) 2:
#line 176 "parse_tree_out_term.m"
          {
#line 176 "parse_tree_out_term.m"
            MR_Integer parse_tree__parse_tree_out_term__VarNum_11;
#line 176 "parse_tree_out_term.m"
            MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20;
#line 3679 "parse_tree.parse_tree_out_term.c"
            void MR_CALL (* parse_tree__parse_tree_out_term__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3681 "parse_tree.parse_tree_out_term.c"
            void MR_CALL (* parse_tree__parse_tree_out_term__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 177 "parse_tree_out_term.m"
            {
#line 177 "parse_tree_out_term.m"
              mercury__term__var_to_int_2_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_30, parse_tree__parse_tree_out_term__Var_8, &parse_tree__parse_tree_out_term__VarNum_11);
            }
#line 3689 "parse_tree.parse_tree_out_term.c"
            parse_tree__parse_tree_out_term__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3691 "parse_tree.parse_tree_out_term.c"
            {
#line 3693 "parse_tree.parse_tree_out_term.c"
              parse_tree__parse_tree_out_term__func_3(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "V_")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20);
            }
#line 3696 "parse_tree.parse_tree_out_term.c"
            parse_tree__parse_tree_out_term__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 3698 "parse_tree.parse_tree_out_term.c"
            {
#line 3700 "parse_tree.parse_tree_out_term.c"
              parse_tree__parse_tree_out_term__func_4(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) (parse_tree__parse_tree_out_term__VarNum_11)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_20_20, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14);
#line 3702 "parse_tree.parse_tree_out_term.c"
              return;
            }
#line 176 "parse_tree_out_term.m"
          }
#line 180 "parse_tree_out_term.m"
          break;
#line 180 "parse_tree_out_term.m"
      }
#line 195 "parse_tree_out_term.m"
    else
#line 196 "parse_tree_out_term.m"
      {
#line 196 "parse_tree_out_term.m"
        MR_Box parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23;
#line 196 "parse_tree_out_term.m"
        MR_Integer parse_tree__parse_tree_out_term__VarNum_28;
#line 3719 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 3721 "parse_tree.parse_tree_out_term.c"
        void MR_CALL (* parse_tree__parse_tree_out_term__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 196 "parse_tree_out_term.m"
        {
#line 196 "parse_tree_out_term.m"
          mercury__term__var_to_int_2_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_30, parse_tree__parse_tree_out_term__Var_8, &parse_tree__parse_tree_out_term__VarNum_28);
        }
#line 3729 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3731 "parse_tree.parse_tree_out_term.c"
        {
#line 3733 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_5(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) ((MR_String) "V_")), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_0_13, &parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23);
        }
#line 3736 "parse_tree.parse_tree_out_term.c"
        parse_tree__parse_tree_out_term__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 3738 "parse_tree.parse_tree_out_term.c"
        {
#line 3740 "parse_tree.parse_tree_out_term.c"
          parse_tree__parse_tree_out_term__func_6(((MR_Box) parse_tree__parse_tree_out_term__TypeClassInfo_for_output_29), ((MR_Box) (parse_tree__parse_tree_out_term__VarNum_28)), parse_tree__parse_tree_out_term__STATE_VARIABLE_U_23_23, parse_tree__parse_tree_out_term__STATE_VARIABLE_U_14);
#line 3742 "parse_tree.parse_tree_out_term.c"
          return;
        }
#line 196 "parse_tree_out_term.m"
      }
#line 195 "parse_tree_out_term.m"
  }
#line 53 "parse_tree_out_term.m"
}

#line 52 "parse_tree_out_term.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(
#line 52 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_10,
#line 52 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_5,
#line 52 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_6,
#line 52 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Var_7)
#line 52 "parse_tree_out_term.m"
{
#line 170 "parse_tree_out_term.m"
  {
#line 170 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 170 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__String_8;
#line 171 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__conv0_String_8;

#line 171 "parse_tree_out_term.m"
    {
#line 171 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_10, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[1], parse_tree__parse_tree_out_term__VarSet_5, parse_tree__parse_tree_out_term__VarNamePrint_6, parse_tree__parse_tree_out_term__Var_7, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_term__conv0_String_8);
    }
#line 171 "parse_tree_out_term.m"
    parse_tree__parse_tree_out_term__String_8 = ((MR_String) parse_tree__parse_tree_out_term__conv0_String_8);
#line 170 "parse_tree_out_term.m"
    return parse_tree__parse_tree_out_term__String_8;
#line 170 "parse_tree_out_term.m"
  }
#line 52 "parse_tree_out_term.m"
}

#line 50 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(
#line 50 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__TypeInfo_for_T_13,
#line 50 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarSet_6,
#line 50 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__VarNamePrint_7,
#line 50 "parse_tree_out_term.m"
  MR_Word parse_tree__parse_tree_out_term__Var_8)
#line 50 "parse_tree_out_term.m"
{
#line 168 "parse_tree_out_term.m"
  {
#line 168 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 168 "parse_tree_out_term.m"
    MR_Box parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_11;

#line 168 "parse_tree_out_term.m"
    {
#line 168 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0(parse_tree__parse_tree_out_term__TypeInfo_for_T_13, (MR_Word) &parse_tree__parse_tree_out_term_scalar_common_1[0], parse_tree__parse_tree_out_term__VarSet_6, parse_tree__parse_tree_out_term__VarNamePrint_7, parse_tree__parse_tree_out_term__Var_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_term__conv0_STATE_VARIABLE_IO_11);
    }
#line 168 "parse_tree_out_term.m"
  }
#line 50 "parse_tree_out_term.m"
}

#line 40 "parse_tree_out_term.m"
void MR_CALL 
parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(
#line 40 "parse_tree_out_term.m"
  MR_String parse_tree__parse_tree_out_term__Name_3,
#line 40 "parse_tree_out_term.m"
  MR_String * parse_tree__parse_tree_out_term__ConvertedName_4)
#line 40 "parse_tree_out_term.m"
{
#line 146 "parse_tree_out_term.m"
  {
#line 146 "parse_tree_out_term.m"
    MR_bool parse_tree__parse_tree_out_term__succeeded;
#line 142 "parse_tree_out_term.m"
    MR_String parse_tree__parse_tree_out_term__V_5_5;

#line 142 "parse_tree_out_term.m"
    {
#line 142 "parse_tree_out_term.m"
      parse_tree__parse_tree_out_term__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__parse_tree_out_term__Name_3, (MR_String) "\'", &parse_tree__parse_tree_out_term__V_5_5);
    }
#line 146 "parse_tree_out_term.m"
    if (parse_tree__parse_tree_out_term__succeeded)
#line 143 "parse_tree_out_term.m"
      {
#line 143 "parse_tree_out_term.m"
        MR_String parse_tree__parse_tree_out_term__StrippedName_6;
#line 143 "parse_tree_out_term.m"
        MR_Integer parse_tree__parse_tree_out_term__NumPrimes_7;
#line 143 "parse_tree_out_term.m"
        MR_String parse_tree__parse_tree_out_term__V_10_10;
#line 143 "parse_tree_out_term.m"
        MR_String parse_tree__parse_tree_out_term__V_11_11;
#line 143 "parse_tree_out_term.m"
        MR_String parse_tree__parse_tree_out_term__V_13_13;

#line 143 "parse_tree_out_term.m"
        {
#line 143 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(parse_tree__parse_tree_out_term__Name_3, &parse_tree__parse_tree_out_term__StrippedName_6, &parse_tree__parse_tree_out_term__NumPrimes_7);
        }
#line 145 "parse_tree_out_term.m"
        {
#line 145 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__V_13_13 = mercury__string__int_to_string_1_f_0(parse_tree__parse_tree_out_term__NumPrimes_7);
        }
#line 144 "parse_tree_out_term.m"
        {
#line 144 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "_", parse_tree__parse_tree_out_term__V_13_13);
        }
#line 144 "parse_tree_out_term.m"
        {
#line 144 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__V_10_10 = mercury__string__f_43_43_2_f_0(parse_tree__parse_tree_out_term__StrippedName_6, parse_tree__parse_tree_out_term__V_11_11);
        }
#line 144 "parse_tree_out_term.m"
        {
#line 144 "parse_tree_out_term.m"
          *parse_tree__parse_tree_out_term__ConvertedName_4 = mercury__string__f_43_43_2_f_0((MR_String) "V_", parse_tree__parse_tree_out_term__V_10_10);
        }
#line 143 "parse_tree_out_term.m"
      }
#line 146 "parse_tree_out_term.m"
    else
#line 148 "parse_tree_out_term.m"
      {
#line 146 "parse_tree_out_term.m"
        {
#line 146 "parse_tree_out_term.m"
          parse_tree__parse_tree_out_term__succeeded = mercury__string__prefix_2_p_0(parse_tree__parse_tree_out_term__Name_3, (MR_String) "V_");
        }
#line 148 "parse_tree_out_term.m"
        if (parse_tree__parse_tree_out_term__succeeded)
#line 147 "parse_tree_out_term.m"
          {
#line 147 "parse_tree_out_term.m"
            {
#line 147 "parse_tree_out_term.m"
              *parse_tree__parse_tree_out_term__ConvertedName_4 = mercury__string__f_43_43_2_f_0((MR_String) "V_", parse_tree__parse_tree_out_term__Name_3);
            }
#line 147 "parse_tree_out_term.m"
          }
#line 148 "parse_tree_out_term.m"
        else
#line 149 "parse_tree_out_term.m"
          *parse_tree__parse_tree_out_term__ConvertedName_4 = parse_tree__parse_tree_out_term__Name_3;
#line 148 "parse_tree_out_term.m"
      }
#line 146 "parse_tree_out_term.m"
  }
#line 40 "parse_tree_out_term.m"
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
