/*
** Automatically generated from `parse_tree_out_term.m'
** by the Mercury compiler,
** version rotd-2022-05-08
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mercury_term_lexer.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
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
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"



struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s {
  MR_bool parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded;
  MR_Word parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__Chars_10;
  jmp_buf parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__commit_0;
  MR_Char parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__Char_11;
  MR_Box parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__conv0_Char_11;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_0[2];

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_2;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_in_string_0[3];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_in_string_0[3];

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_in_string_0[3];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_needs_quotes_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0[2];

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_non_graphic_char_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_non_graphic_char_0[2];

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_non_graphic_char_0[2];

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_acc_5_p_0(
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_Graphic_0_9,
  MR_Word * STATE_VARIABLE_Graphic_10,
  MR_Word STATE_VARIABLE_NonGraphic_0_11,
  MR_Word * STATE_VARIABLE_NonGraphic_12);

static void MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_src_6_p_0(
  MR_Word TypeClassInfo_for_output_32,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_src_6_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_output_32,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6);

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
parse_tree__parse_tree_out_term__mercury_format_constant_5_p_0(
  MR_Word TypeClassInfo_for_output_13,
  MR_Word NextToGraphicToken_6,
  MR_Word Const_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_5_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word NextToGraphicToken_6,
  MR_Word Const_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_src_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
  MR_String Name0_4,
  MR_String * Name_5,
  MR_Integer * Num_6);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_2[2][2];

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_4[1][11];

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_5[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_6[1][10];

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_7[1][8];




static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__unit__unit__arity0__string__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_7[0])),
    ((MR_Box) (parse_tree__parse_tree_out_term__string_graphic_chars_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_3[1][4] = {
  /* row   0 */
  {
    (MR_Integer) 3,
    (MR_Integer) 33,
    (MR_Integer) 133167,
    (MR_Integer) 133199
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 3))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_term_scalar_common_5[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_term_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_term__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_0 = {
  (MR_String) "not_seen_graphic_char",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_1 = {
  (MR_String) "seen_graphic_char",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_0_1
};

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____graphic_char_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____graphic_char_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "graphic_char",
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_0 },
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_0 = {
  (MR_String) "no_graphic_chars",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_1 = {
  (MR_String) "some_graphic_chars",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_2 = {
  (MR_String) "all_graphic_chars",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_in_string_0[3] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_1,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_in_string_0[3] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_2,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_graphic_char_in_string_0_1
};

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_in_string_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_in_string_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "graphic_char_in_string",
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_graphic_char_in_string_0 },
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_graphic_char_in_string_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_graphic_char_in_string_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_0 = {
  (MR_String) "next_to_graphic_token",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_needs_quotes_0_1 = {
  (MR_String) "not_next_to_graphic_token",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_needs_quotes_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "needs_quotes",
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_needs_quotes_0 },
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_needs_quotes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_needs_quotes_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_0 = {
  (MR_String) "not_seen_non_graphic_char",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_1 = {
  (MR_String) "seen_non_graphic_char",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_non_graphic_char_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_non_graphic_char_0[2] = {
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_0,
  &parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_functor_desc_non_graphic_char_0_1
};

static const MR_Integer parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_non_graphic_char_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_term",
  (MR_String) "non_graphic_char",
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_name_ordered_non_graphic_char_0 },
  { parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__enum_ordinal_ordered_non_graphic_char_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__functor_number_map_non_graphic_char_0,

};

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_acc_5_p_0(
  MR_Char Char_6,
  MR_Word STATE_VARIABLE_Graphic_0_9,
  MR_Word * STATE_VARIABLE_Graphic_10,
  MR_Word STATE_VARIABLE_NonGraphic_0_11,
  MR_Word * STATE_VARIABLE_NonGraphic_12)
{
  MR_bool succeeded;

  succeeded = mercury__mercury_term_lexer__graphic_token_char_1_p_0(Char_6);
  if (succeeded)
  {
    *STATE_VARIABLE_Graphic_10 = (MR_Integer) 1;
    *STATE_VARIABLE_NonGraphic_12 = STATE_VARIABLE_NonGraphic_0_11;
  }
  else
  {
    *STATE_VARIABLE_NonGraphic_12 = (MR_Integer) 1;
    *STATE_VARIABLE_Graphic_10 = STATE_VARIABLE_Graphic_0_9;
  }
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_op_1_p_0(
  MR_String Op_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

  mercury__ops__init_mercury_op_table_0_f_0();
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 9))));
  succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Graphic_10;
  MR_Word conv0_STATE_VARIABLE_NonGraphic_12;

  parse_tree__parse_tree_out_term__string_graphic_chars_acc_5_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Graphic_10, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_NonGraphic_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Graphic_10));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NonGraphic_12));
}

MR_Word MR_CALL 
parse_tree__parse_tree_out_term__string_graphic_chars_1_f_0(
  MR_String Str_3)
{
  MR_Word Result_4;
  MR_Word Graphic_5;
  MR_Word NonGraphic_6;
  MR_Box conv3_Graphic_5;
  MR_Box conv2_NonGraphic_6;

  mercury__string__foldl2_6_p_2((MR_Word) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0), (MR_Word) (&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[2]), Str_3, ((MR_Box) ((MR_Integer) 0)), &conv3_Graphic_5, ((MR_Box) ((MR_Integer) 0)), &conv2_NonGraphic_6);
  Graphic_5 = ((MR_Word) (conv3_Graphic_5));
  NonGraphic_6 = ((MR_Word) (conv2_NonGraphic_6));
  switch (Graphic_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Result_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      switch (NonGraphic_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Result_4 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          Result_4 = (MR_Integer) 1;
          break;
      }
      break;
  }
  return Result_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_bracketed_atom_to_string_2_f_0(
  MR_Word NextToGraphicToken_4,
  MR_String Name_5)
{
  MR_String String_6;
  MR_Box conv0_String_6;

  parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), NextToGraphicToken_4, Name_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_6);
  String_6 = ((MR_String) (conv0_String_6));
  return String_6;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word NextToGraphicToken_6,
  MR_String Name_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

  mercury__ops__init_mercury_op_table_0_f_0();
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 9))));
  succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Name_7)));
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_U_13_13;
    MR_Box STATE_VARIABLE_U_14_14;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_1(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_13_13);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 20))));
    func_2(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (Name_7)), S_8, STATE_VARIABLE_U_13_13, &STATE_VARIABLE_U_14_14);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_14_14, STATE_VARIABLE_U_11);
  }
  else
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_output_16, NextToGraphicToken_6, Name_7, S_8, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_nq_8_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Word NextToGraphicToken_11,
  MR_Integer Limit_12,
  MR_Word Term_13,
  MR_Word Stream_14)
{
  MR_String Str_16;

  Str_16 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(TypeInfo_for_T_19, VarSet_9, VarNamePrint_10, NextToGraphicToken_11, Limit_12, Term_13);
  mercury__io__write_string_4_p_0(Stream_14, Str_16);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_to_string_4_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Integer Limit_8,
  MR_Word Term_9)
{
  MR_String HeadVar__5_5;

  HeadVar__5_5 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(TypeInfo_for_T_11, VarSet_6, VarNamePrint_7, (MR_Integer) 1, Limit_8, Term_9);
  return HeadVar__5_5;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_limited_term_7_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Integer Limit_10,
  MR_Word Term_11,
  MR_Word Stream_12)
{
  MR_String Str_18;

  Str_18 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(TypeInfo_for_T_17, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Limit_10, Term_11);
  mercury__io__write_string_4_p_0(Stream_12, Str_18);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_nq_to_string_src_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_Word NextToGraphicToken_8,
  MR_Word Term_9)
{
  MR_String String_10;
  MR_Box conv0_String_10;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarNameSrc_6, VarNamePrint_7, NextToGraphicToken_8, Term_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_10);
  String_10 = ((MR_String) (conv0_String_10));
  return String_10;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_nq_src_7_p_0(
  MR_Word VarNameSrc_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word Stream_12)
{
  MR_Box conv0_STATE_VARIABLE_IO_15;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), VarNameSrc_8, VarNamePrint_9, NextToGraphicToken_10, Term_11, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_nq_to_string_4_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word NextToGraphicToken_8,
  MR_Word Term_9)
{
  MR_String String_10;
  MR_Box conv0_String_10;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_13, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_6, VarNamePrint_7, NextToGraphicToken_8, Term_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_10);
  String_10 = ((MR_String) (conv0_String_10));
  return String_10;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_nq_7_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Word Stream_12)
{
  MR_Box conv0_STATE_VARIABLE_IO_15;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_16, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), VarSet_8, VarNamePrint_9, NextToGraphicToken_10, Term_11, ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_to_string_src_3_f_0(
  MR_Word VarNameSrc_5,
  MR_Word VarNamePrint_6,
  MR_Word Term_7)
{
  MR_String HeadVar__4_4;
  MR_Box conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarNameSrc_5, VarNamePrint_6, (MR_Integer) 1, Term_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_HeadVar__4_4);
  HeadVar__4_4 = ((MR_String) (conv0_HeadVar__4_4));
  return HeadVar__4_4;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_src_6_p_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word Stream_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), VarNameSrc_7, VarNamePrint_8, (MR_Integer) 1, Term_9, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_src_6_p_0(
  MR_Word TypeClassInfo_for_output_32,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word X_14;
    MR_Word Xs_15;
    MR_Word Args_12;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
        succeeded = (strcmp(Var_20, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Xs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_24_24;
      MR_Box STATE_VARIABLE_U_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Word next_value_of_Term_9;
      MR_Box next_value_of_STATE_VARIABLE_U_0_17;

      func_0(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) ", ")), S_10, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_24_24);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(TypeClassInfo_for_output_32, VarNameSrc_7, VarNamePrint_8, (MR_Integer) 1, X_14, S_10, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_Term_9 = Xs_15;
      next_value_of_STATE_VARIABLE_U_0_17 = STATE_VARIABLE_U_25_25;
      Term_9 = next_value_of_Term_9;
      STATE_VARIABLE_U_0_17 = next_value_of_STATE_VARIABLE_U_0_17;
      continue;
    }
    else
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
            succeeded = (strcmp(Var_28, (MR_String) "[]") == 0);
          }
        }
      }
      if (succeeded)
        *STATE_VARIABLE_U_18 = STATE_VARIABLE_U_0_17;
      else
      {
        MR_Box STATE_VARIABLE_U_31_31;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));

        func_1(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) " | ")), S_10, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_31_31);
        parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(TypeClassInfo_for_output_32, VarNameSrc_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_31_31, STATE_VARIABLE_U_18);
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_src_7_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word VarNameSrc_8,
  MR_Word VarNamePrint_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  MR_Box STATE_VARIABLE_U_16_16;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(TypeClassInfo_for_output_17, VarNameSrc_8, VarNamePrint_9, (MR_Integer) 1, HeadTerm_10, S_12, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_16_16);
  parse_tree__parse_tree_out_term__mercury_format_remaining_terms_src_6_p_0(TypeClassInfo_for_output_17, VarNameSrc_8, VarNamePrint_9, TailTerms_11, S_12, STATE_VARIABLE_U_16_16, STATE_VARIABLE_U_15);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_src_6_p_0(
  MR_Word TypeClassInfo_for_output_15,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(TypeClassInfo_for_output_15, VarNameSrc_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_src_6_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_22_22;
      MR_Box STATE_VARIABLE_U_23_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_STATE_VARIABLE_U_0_5;

      func_0(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_22_22);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(TypeClassInfo_for_output_24, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, Term_15, HeadVar__4_4, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms_16;
      next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_23_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(
  MR_Word TypeClassInfo_for_output_132,
  MR_Word VarNameSrc_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_31,
  MR_Box * STATE_VARIABLE_U_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
    {
      MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_11, (MR_Integer) 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_11, (MR_Integer) 1))));
      MR_Word F_19;
      MR_Word X_20;
      MR_Word Xs_21;
      MR_String Var_34;
      MR_Word Var_35;

      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
        succeeded = (strcmp(Var_34, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            F_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
            Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
            succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
              Xs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_U_36_36;
        MR_Box STATE_VARIABLE_U_38_38;
        MR_Box STATE_VARIABLE_U_39_39;

        parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, NextToGraphicToken_10, F_19, S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_36_36);
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
        parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_src_7_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, X_20, Xs_21, S_12, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_39_39, STATE_VARIABLE_U_32);
      }
      else
      {
        MR_Word X_130;
        MR_Word Xs_131;
        MR_String Var_42;
        MR_Word Var_43;
        MR_Word Var_44;

        succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_42 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_42, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
              succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Xs_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
                Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
                succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Box STATE_VARIABLE_U_46_46;
          MR_Box STATE_VARIABLE_U_47_47;
          MR_Box STATE_VARIABLE_U_48_48;

          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "[", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_46_46);
          parse_tree__parse_tree_out_term__mercury_format_term_src_6_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, X_130, S_12, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_47_47);
          parse_tree__parse_tree_out_term__mercury_format_list_args_src_6_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, Xs_131, S_12, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_48_48);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "]", S_12, STATE_VARIABLE_U_48_48, STATE_VARIABLE_U_32);
        }
        else
        {
          MR_Word X_128;
          MR_String Var_51;
          MR_Word Var_52;

          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
            succeeded = (strcmp(Var_51, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_U_54_54;
            MR_Box STATE_VARIABLE_U_55_55;

            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "{ ", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_54_54);
            parse_tree__parse_tree_out_term__mercury_format_term_src_6_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, X_128, S_12, STATE_VARIABLE_U_54_54, &STATE_VARIABLE_U_55_55);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " }", S_12, STATE_VARIABLE_U_55_55, STATE_VARIABLE_U_32);
          }
          else
          {
            MR_Word X_126;
            MR_Word Xs_127;
            MR_String Var_58;

            succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_58 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
              succeeded = (strcmp(Var_58, (MR_String) "{}") == 0);
              if (succeeded)
              {
                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                  Xs_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                }
              }
            }
            if (succeeded)
            {
              MR_Box STATE_VARIABLE_U_60_60;
              MR_Box STATE_VARIABLE_U_61_61;

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "{", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_60_60);
              parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_src_7_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, X_126, Xs_127, S_12, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_61_61);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "}", S_12, STATE_VARIABLE_U_61_61, STATE_VARIABLE_U_32);
            }
            else
            {
              MR_Word BinaryPrefixArg1_22;
              MR_Word BinaryPrefixArg2_23;
              MR_String FunctorName_24;
              MR_Word Var_64;
              MR_Word Var_65;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BinaryPrefixArg1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BinaryPrefixArg2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0))));
                  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1))));
                  succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FunctorName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
                      succeeded = parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(FunctorName_24);
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Box STATE_VARIABLE_U_67_67;
                MR_Box STATE_VARIABLE_U_68_68;
                MR_Box STATE_VARIABLE_U_70_70;
                MR_Box STATE_VARIABLE_U_71_71;
                MR_Box STATE_VARIABLE_U_73_73;
                MR_Box STATE_VARIABLE_U_74_74;

                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_67_67);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, FunctorName_24, S_12, STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_68_68);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_68_68, &STATE_VARIABLE_U_70_70);
                parse_tree__parse_tree_out_term__mercury_format_term_src_6_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, BinaryPrefixArg1_22, S_12, STATE_VARIABLE_U_70_70, &STATE_VARIABLE_U_71_71);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_71_71, &STATE_VARIABLE_U_73_73);
                parse_tree__parse_tree_out_term__mercury_format_term_src_6_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, BinaryPrefixArg2_23, S_12, STATE_VARIABLE_U_73_73, &STATE_VARIABLE_U_74_74);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_74_74, STATE_VARIABLE_U_32);
              }
              else
              {
                MR_Word PrefixArg_25;
                MR_String FunctorName_125;
                MR_Word Var_77;

                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PrefixArg_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                  succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FunctorName_125 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
                      succeeded = parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(FunctorName_125);
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Box STATE_VARIABLE_U_79_79;
                  MR_Box STATE_VARIABLE_U_80_80;
                  MR_Box STATE_VARIABLE_U_82_82;
                  MR_Box STATE_VARIABLE_U_83_83;

                  parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_79_79);
                  parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, FunctorName_125, S_12, STATE_VARIABLE_U_79_79, &STATE_VARIABLE_U_80_80);
                  parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_80_80, &STATE_VARIABLE_U_82_82);
                  parse_tree__parse_tree_out_term__mercury_format_term_src_6_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, PrefixArg_25, S_12, STATE_VARIABLE_U_82_82, &STATE_VARIABLE_U_83_83);
                  parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_83_83, STATE_VARIABLE_U_32);
                }
                else
                {
                  MR_Word PostfixArg_26;
                  MR_String FunctorName_124;
                  MR_Word Var_86;

                  succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PostfixArg_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                    succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        FunctorName_124 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
                        succeeded = parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(FunctorName_124);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Box STATE_VARIABLE_U_88_88;
                    MR_Box STATE_VARIABLE_U_89_89;
                    MR_Box STATE_VARIABLE_U_91_91;
                    MR_Box STATE_VARIABLE_U_92_92;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_88_88);
                    parse_tree__parse_tree_out_term__mercury_format_term_src_6_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, PostfixArg_26, S_12, STATE_VARIABLE_U_88_88, &STATE_VARIABLE_U_89_89);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_89_89, &STATE_VARIABLE_U_91_91);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, FunctorName_124, S_12, STATE_VARIABLE_U_91_91, &STATE_VARIABLE_U_92_92);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_92_92, STATE_VARIABLE_U_32);
                  }
                  else
                  {
                    MR_Word Arg1_27;
                    MR_Word Arg2_28;
                    MR_String FunctorName_123;
                    MR_Word Var_95;
                    MR_Word Var_96;

                    succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Arg1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                      succeeded = (Var_95 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 0))));
                        Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 1))));
                        succeeded = (Var_96 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            FunctorName_123 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
                            succeeded = parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(FunctorName_123);
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      succeeded = (strcmp(FunctorName_123, (MR_String) ".") == 0);
                      if (succeeded)
                      {
                        MR_Box STATE_VARIABLE_U_98_98;
                        MR_Box STATE_VARIABLE_U_100_100;
                        MR_Word next_value_of_Term_11;
                        MR_Box next_value_of_STATE_VARIABLE_U_0_31;

                        parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, (MR_Integer) 0, Arg1_27, S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_98_98);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ".", S_12, STATE_VARIABLE_U_98_98, &STATE_VARIABLE_U_100_100);
                        // direct tailcall eliminated
                        ;
                        next_value_of_Term_11 = Arg2_28;
                        next_value_of_STATE_VARIABLE_U_0_31 = STATE_VARIABLE_U_100_100;
                        NextToGraphicToken_10 = (MR_Integer) 0;
                        Term_11 = next_value_of_Term_11;
                        STATE_VARIABLE_U_0_31 = next_value_of_STATE_VARIABLE_U_0_31;
                        continue;
                      }
                      else
                      {
                        MR_Box STATE_VARIABLE_U_104_104;
                        MR_Box STATE_VARIABLE_U_106_106;
                        MR_Box STATE_VARIABLE_U_108_108;
                        MR_Box STATE_VARIABLE_U_109_109;
                        MR_Box STATE_VARIABLE_U_111_111;
                        MR_Box STATE_VARIABLE_U_113_113;

                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_104_104);
                        parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, (MR_Integer) 1, Arg1_27, S_12, STATE_VARIABLE_U_104_104, &STATE_VARIABLE_U_106_106);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_108_108);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, FunctorName_123, S_12, STATE_VARIABLE_U_108_108, &STATE_VARIABLE_U_109_109);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_109_109, &STATE_VARIABLE_U_111_111);
                        parse_tree__parse_tree_out_term__mercury_format_term_nq_src_7_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, (MR_Integer) 1, Arg2_28, S_12, STATE_VARIABLE_U_111_111, &STATE_VARIABLE_U_113_113);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_113_113, STATE_VARIABLE_U_32);
                      }
                    }
                    else
                    if ((Args_17 == (MR_Word) ((MR_Unsigned) 0U)))
                      parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_5_p_0(TypeClassInfo_for_output_132, NextToGraphicToken_10, Functor_16, S_12, STATE_VARIABLE_U_0_31, STATE_VARIABLE_U_32);
                    else
                    {
                      MR_Word Y_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                      MR_Word Ys_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                      MR_Box STATE_VARIABLE_U_116_116;
                      MR_Box STATE_VARIABLE_U_118_118;
                      MR_Box STATE_VARIABLE_U_119_119;

                      parse_tree__parse_tree_out_term__mercury_format_constant_5_p_0(TypeClassInfo_for_output_132, NextToGraphicToken_10, Functor_16, S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_116_116);
                      parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_118_118);
                      parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_src_7_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, Y_29, Ys_30, S_12, STATE_VARIABLE_U_118_118, &STATE_VARIABLE_U_119_119);
                      parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_119_119, STATE_VARIABLE_U_32);
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
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_11, (MR_Integer) 0))));

      parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0(TypeClassInfo_for_output_132, VarNameSrc_8, VarNamePrint_9, Var_14, S_12, STATE_VARIABLE_U_0_31, STATE_VARIABLE_U_32);
    }
    break;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Term_7)
{
  MR_String HeadVar__4_4;
  MR_Box conv0_HeadVar__4_4;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_9, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_5, VarNamePrint_6, (MR_Integer) 1, Term_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_HeadVar__4_4);
  HeadVar__4_4 = ((MR_String) (conv0_HeadVar__4_4));
  return HeadVar__4_4;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_term_6_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Word Stream_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_15, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__describe_error_term_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word VarSet_4,
  MR_Word Term_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(TypeInfo_for_T_8, VarSet_4, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 80, Term_5);
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_limited_term_nq_to_string_5_f_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word NextToGraphicToken_9,
  MR_Integer Limit_10,
  MR_Word Term_11)
{
  MR_bool succeeded;
  MR_String String_12;
  MR_String FullString_13;
  MR_Integer FullLen_14;
  MR_Box conv0_FullString_13;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_39, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_7, VarNamePrint_8, NextToGraphicToken_9, Term_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_FullString_13);
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
    parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_39, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_7, VarNamePrint_8, NextToGraphicToken_9, NoArgTerm_20, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_FunctorString_21);
    FunctorString_21 = ((MR_String) (conv1_FunctorString_21));
    switch (MR_tag((MR_Word) Functor_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_42_42;
          MR_String ArityStr_23;
          MR_Integer Var_36;
          MR_String Var_37;

          {
            TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_42_42, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
            MR_hl_field(MR_mktag(0), TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_for_T_39));
          }
          Var_36 = mercury__list__length_1_f_0(TypeInfo_42_42, (MR_Word) (Args_18));
          ArityStr_23 = mercury__string__int_to_string_1_f_0(Var_36);
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "/", ArityStr_23);
          String_12 = mercury__string__f_43_43_2_f_0(FunctorString_21, Var_37);
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

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_list_args_6_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_output_32,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_17,
  MR_Box * STATE_VARIABLE_U_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word X_14;
    MR_Word Xs_15;
    MR_Word Args_12;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
        succeeded = (strcmp(Var_20, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0))));
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1))));
            succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Xs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_24_24;
      MR_Box STATE_VARIABLE_U_25_25;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Word next_value_of_Term_9;
      MR_Box next_value_of_STATE_VARIABLE_U_0_17;

      func_0(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) ", ")), S_10, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_24_24);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_33, TypeClassInfo_for_output_32, VarSet_7, VarNamePrint_8, (MR_Integer) 1, X_14, S_10, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_Term_9 = Xs_15;
      next_value_of_STATE_VARIABLE_U_0_17 = STATE_VARIABLE_U_25_25;
      Term_9 = next_value_of_Term_9;
      STATE_VARIABLE_U_0_17 = next_value_of_STATE_VARIABLE_U_0_17;
      continue;
    }
    else
    {
      MR_Word Var_27;
      MR_String Var_28;
      MR_Word Var_29;

      succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
        succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
            succeeded = (strcmp(Var_28, (MR_String) "[]") == 0);
          }
        }
      }
      if (succeeded)
        *STATE_VARIABLE_U_18 = STATE_VARIABLE_U_0_17;
      else
      {
        MR_Box STATE_VARIABLE_U_31_31;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_32, (MR_Integer) 0)), (MR_Integer) 5))));

        func_1(((MR_Box) (TypeClassInfo_for_output_32)), ((MR_Box) ((MR_String) " | ")), S_10, STATE_VARIABLE_U_0_17, &STATE_VARIABLE_U_31_31);
        parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_33, TypeClassInfo_for_output_32, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_31_31, STATE_VARIABLE_U_18);
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeClassInfo_for_output_17,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word HeadTerm_10,
  MR_Word TailTerms_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  MR_Box STATE_VARIABLE_U_16_16;

  parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_18, TypeClassInfo_for_output_17, VarSet_8, VarNamePrint_9, (MR_Integer) 1, HeadTerm_10, S_12, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_16_16);
  parse_tree__parse_tree_out_term__mercury_format_remaining_terms_6_p_0(TypeInfo_for_T_18, TypeClassInfo_for_output_17, VarSet_8, VarNamePrint_9, TailTerms_11, S_12, STATE_VARIABLE_U_16_16, STATE_VARIABLE_U_15);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeClassInfo_for_output_15,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Term_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_16, TypeClassInfo_for_output_15, VarSet_7, VarNamePrint_8, (MR_Integer) 1, Term_9, S_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_remaining_terms_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeClassInfo_for_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box STATE_VARIABLE_U_0_5,
  MR_Box * STATE_VARIABLE_U_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_6 = STATE_VARIABLE_U_0_5;
    else
    {
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Terms_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_22_22;
      MR_Box STATE_VARIABLE_U_23_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Word next_value_of_HeadVar__3_3;
      MR_Box next_value_of_STATE_VARIABLE_U_0_5;

      func_0(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ", ")), HeadVar__4_4, STATE_VARIABLE_U_0_5, &STATE_VARIABLE_U_22_22);
      parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_25, TypeClassInfo_for_output_24, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, Term_15, HeadVar__4_4, STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_23_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Terms_16;
      next_value_of_STATE_VARIABLE_U_0_5 = STATE_VARIABLE_U_23_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_U_0_5 = next_value_of_STATE_VARIABLE_U_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(
  MR_Word TypeInfo_for_T_133,
  MR_Word TypeClassInfo_for_output_132,
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word NextToGraphicToken_10,
  MR_Word Term_11,
  MR_Box S_12,
  MR_Box STATE_VARIABLE_U_0_31,
  MR_Box * STATE_VARIABLE_U_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_11)) == (MR_Integer) 0))
    {
      MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_11, (MR_Integer) 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_11, (MR_Integer) 1))));
      MR_Word F_19;
      MR_Word X_20;
      MR_Word Xs_21;
      MR_String Var_34;
      MR_Word Var_35;

      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
        succeeded = (strcmp(Var_34, (MR_String) "") == 0);
        if (succeeded)
        {
          succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            F_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
            Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
            succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
              Xs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Box STATE_VARIABLE_U_36_36;
        MR_Box STATE_VARIABLE_U_38_38;
        MR_Box STATE_VARIABLE_U_39_39;

        parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, NextToGraphicToken_10, F_19, S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_36_36);
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
        parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, X_20, Xs_21, S_12, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_39_39, STATE_VARIABLE_U_32);
      }
      else
      {
        MR_Word X_130;
        MR_Word Xs_131;
        MR_String Var_42;
        MR_Word Var_43;
        MR_Word Var_44;

        succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_42 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
          succeeded = (strcmp(Var_42, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
              succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Xs_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
                Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
                succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Box STATE_VARIABLE_U_46_46;
          MR_Box STATE_VARIABLE_U_47_47;
          MR_Box STATE_VARIABLE_U_48_48;

          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "[", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_46_46);
          parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, X_130, S_12, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_47_47);
          parse_tree__parse_tree_out_term__mercury_format_list_args_6_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, Xs_131, S_12, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_48_48);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "]", S_12, STATE_VARIABLE_U_48_48, STATE_VARIABLE_U_32);
        }
        else
        {
          MR_Word X_128;
          MR_String Var_51;
          MR_Word Var_52;

          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
            succeeded = (strcmp(Var_51, (MR_String) "{}") == 0);
            if (succeeded)
            {
              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            MR_Box STATE_VARIABLE_U_54_54;
            MR_Box STATE_VARIABLE_U_55_55;

            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "{ ", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_54_54);
            parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, X_128, S_12, STATE_VARIABLE_U_54_54, &STATE_VARIABLE_U_55_55);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " }", S_12, STATE_VARIABLE_U_55_55, STATE_VARIABLE_U_32);
          }
          else
          {
            MR_Word X_126;
            MR_Word Xs_127;
            MR_String Var_58;

            succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_58 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
              succeeded = (strcmp(Var_58, (MR_String) "{}") == 0);
              if (succeeded)
              {
                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                  Xs_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                }
              }
            }
            if (succeeded)
            {
              MR_Box STATE_VARIABLE_U_60_60;
              MR_Box STATE_VARIABLE_U_61_61;

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "{", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_60_60);
              parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, X_126, Xs_127, S_12, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_61_61);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "}", S_12, STATE_VARIABLE_U_61_61, STATE_VARIABLE_U_32);
            }
            else
            {
              MR_Word BinaryPrefixArg1_22;
              MR_Word BinaryPrefixArg2_23;
              MR_String FunctorName_24;
              MR_Word Var_64;
              MR_Word Var_65;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                BinaryPrefixArg1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  BinaryPrefixArg2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0))));
                  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1))));
                  succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FunctorName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
                      succeeded = parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(FunctorName_24);
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Box STATE_VARIABLE_U_67_67;
                MR_Box STATE_VARIABLE_U_68_68;
                MR_Box STATE_VARIABLE_U_70_70;
                MR_Box STATE_VARIABLE_U_71_71;
                MR_Box STATE_VARIABLE_U_73_73;
                MR_Box STATE_VARIABLE_U_74_74;

                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_67_67);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, FunctorName_24, S_12, STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_68_68);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_68_68, &STATE_VARIABLE_U_70_70);
                parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, BinaryPrefixArg1_22, S_12, STATE_VARIABLE_U_70_70, &STATE_VARIABLE_U_71_71);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_71_71, &STATE_VARIABLE_U_73_73);
                parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, BinaryPrefixArg2_23, S_12, STATE_VARIABLE_U_73_73, &STATE_VARIABLE_U_74_74);
                parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_74_74, STATE_VARIABLE_U_32);
              }
              else
              {
                MR_Word PrefixArg_25;
                MR_String FunctorName_125;
                MR_Word Var_77;

                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PrefixArg_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                  succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FunctorName_125 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
                      succeeded = parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(FunctorName_125);
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Box STATE_VARIABLE_U_79_79;
                  MR_Box STATE_VARIABLE_U_80_80;
                  MR_Box STATE_VARIABLE_U_82_82;
                  MR_Box STATE_VARIABLE_U_83_83;

                  parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_79_79);
                  parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, FunctorName_125, S_12, STATE_VARIABLE_U_79_79, &STATE_VARIABLE_U_80_80);
                  parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_80_80, &STATE_VARIABLE_U_82_82);
                  parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, PrefixArg_25, S_12, STATE_VARIABLE_U_82_82, &STATE_VARIABLE_U_83_83);
                  parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_83_83, STATE_VARIABLE_U_32);
                }
                else
                {
                  MR_Word PostfixArg_26;
                  MR_String FunctorName_124;
                  MR_Word Var_86;

                  succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PostfixArg_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                    succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        FunctorName_124 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
                        succeeded = parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(FunctorName_124);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Box STATE_VARIABLE_U_88_88;
                    MR_Box STATE_VARIABLE_U_89_89;
                    MR_Box STATE_VARIABLE_U_91_91;
                    MR_Box STATE_VARIABLE_U_92_92;

                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_88_88);
                    parse_tree__parse_tree_out_term__mercury_format_term_6_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, PostfixArg_26, S_12, STATE_VARIABLE_U_88_88, &STATE_VARIABLE_U_89_89);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_89_89, &STATE_VARIABLE_U_91_91);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, FunctorName_124, S_12, STATE_VARIABLE_U_91_91, &STATE_VARIABLE_U_92_92);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_92_92, STATE_VARIABLE_U_32);
                  }
                  else
                  {
                    MR_Word Arg1_27;
                    MR_Word Arg2_28;
                    MR_String FunctorName_123;
                    MR_Word Var_95;
                    MR_Word Var_96;

                    succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Arg1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                      succeeded = (Var_95 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Arg2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 0))));
                        Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_95, (MR_Integer) 1))));
                        succeeded = (Var_96 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Functor_16)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            FunctorName_123 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_16, (MR_Integer) 0))));
                            succeeded = parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(FunctorName_123);
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      succeeded = (strcmp(FunctorName_123, (MR_String) ".") == 0);
                      if (succeeded)
                      {
                        MR_Box STATE_VARIABLE_U_98_98;
                        MR_Box STATE_VARIABLE_U_100_100;
                        MR_Word next_value_of_Term_11;
                        MR_Box next_value_of_STATE_VARIABLE_U_0_31;

                        parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, (MR_Integer) 0, Arg1_27, S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_98_98);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ".", S_12, STATE_VARIABLE_U_98_98, &STATE_VARIABLE_U_100_100);
                        // direct tailcall eliminated
                        ;
                        next_value_of_Term_11 = Arg2_28;
                        next_value_of_STATE_VARIABLE_U_0_31 = STATE_VARIABLE_U_100_100;
                        NextToGraphicToken_10 = (MR_Integer) 0;
                        Term_11 = next_value_of_Term_11;
                        STATE_VARIABLE_U_0_31 = next_value_of_STATE_VARIABLE_U_0_31;
                        continue;
                      }
                      else
                      {
                        MR_Box STATE_VARIABLE_U_104_104;
                        MR_Box STATE_VARIABLE_U_106_106;
                        MR_Box STATE_VARIABLE_U_108_108;
                        MR_Box STATE_VARIABLE_U_109_109;
                        MR_Box STATE_VARIABLE_U_111_111;
                        MR_Box STATE_VARIABLE_U_113_113;

                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_104_104);
                        parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Arg1_27, S_12, STATE_VARIABLE_U_104_104, &STATE_VARIABLE_U_106_106);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_108_108);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, FunctorName_123, S_12, STATE_VARIABLE_U_108_108, &STATE_VARIABLE_U_109_109);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) " ", S_12, STATE_VARIABLE_U_109_109, &STATE_VARIABLE_U_111_111);
                        parse_tree__parse_tree_out_term__mercury_format_term_nq_7_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, (MR_Integer) 1, Arg2_28, S_12, STATE_VARIABLE_U_111_111, &STATE_VARIABLE_U_113_113);
                        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_113_113, STATE_VARIABLE_U_32);
                      }
                    }
                    else
                    if ((Args_17 == (MR_Word) ((MR_Unsigned) 0U)))
                      parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_5_p_0(TypeClassInfo_for_output_132, NextToGraphicToken_10, Functor_16, S_12, STATE_VARIABLE_U_0_31, STATE_VARIABLE_U_32);
                    else
                    {
                      MR_Word Y_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                      MR_Word Ys_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                      MR_Box STATE_VARIABLE_U_116_116;
                      MR_Box STATE_VARIABLE_U_118_118;
                      MR_Box STATE_VARIABLE_U_119_119;

                      parse_tree__parse_tree_out_term__mercury_format_constant_5_p_0(TypeClassInfo_for_output_132, NextToGraphicToken_10, Functor_16, S_12, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_116_116);
                      parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) "(", S_12, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_118_118);
                      parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_7_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, Y_29, Ys_30, S_12, STATE_VARIABLE_U_118_118, &STATE_VARIABLE_U_119_119);
                      parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_132, (MR_String) ")", S_12, STATE_VARIABLE_U_119_119, STATE_VARIABLE_U_32);
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
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_11, (MR_Integer) 0))));

      parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(TypeInfo_for_T_133, TypeClassInfo_for_output_132, VarSet_8, VarNamePrint_9, Var_14, S_12, STATE_VARIABLE_U_0_31, STATE_VARIABLE_U_32);
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_postfix_op_1_p_0(
  MR_String Op_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
  MR_Box conv2_Var_3;
  MR_Box conv1_Var_4;

  mercury__ops__init_mercury_op_table_0_f_0();
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 8))));
  succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_2)), &conv2_Var_3, &conv1_Var_4);
  if (succeeded)
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_unary_prefix_op_1_p_0(
  MR_String Op_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *);
  MR_Box conv2_Var_3;
  MR_Box conv1_Var_4;

  mercury__ops__init_mercury_op_table_0_f_0();
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_2)), &conv2_Var_3, &conv1_Var_4);
  if (succeeded)
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_infix_op_1_p_0(
  MR_String Op_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
  MR_Box conv3_Var_3;
  MR_Box conv2_Var_4;
  MR_Box conv1_Var_5;

  mercury__ops__init_mercury_op_table_0_f_0();
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_2)), &conv3_Var_3, &conv2_Var_4, &conv1_Var_5);
  if (succeeded)
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term__mercury_binary_prefix_op_1_p_0(
  MR_String Op_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *);
  MR_Box conv3_Var_3;
  MR_Box conv2_Var_4;
  MR_Box conv1_Var_5;

  mercury__ops__init_mercury_op_table_0_f_0();
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 7))));
  succeeded = func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]))), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_2)), &conv3_Var_3, &conv2_Var_4, &conv1_Var_5);
  if (succeeded)
    succeeded = MR_TRUE;
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_constant_5_p_0(
  MR_Word TypeClassInfo_for_output_13,
  MR_Word NextToGraphicToken_6,
  MR_Word Const_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Const_7)) == (MR_Integer) 0);
  MR_String Atom_10;

  if (succeeded)
  {
    Atom_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_7, (MR_Integer) 0))));
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_output_13, NextToGraphicToken_6, Atom_10, S_8, STATE_VARIABLE_U_0_11, STATE_VARIABLE_U_12);
  }
  else
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 22))));

    func_0(((MR_Box) (TypeClassInfo_for_output_13)), ((MR_Box) (Const_7)), S_8, STATE_VARIABLE_U_0_11, STATE_VARIABLE_U_12);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_bracketed_constant_ngt_5_p_0(
  MR_Word TypeClassInfo_for_output_17,
  MR_Word NextToGraphicToken_6,
  MR_Word Const_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_11,
  MR_Box * STATE_VARIABLE_U_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Const_7)) == (MR_Integer) 0);
  MR_String Op_10;
  MR_Word TypeClassInfo_for_op_table_19;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

  if (succeeded)
  {
    Op_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_7, (MR_Integer) 0))));
    mercury__ops__init_mercury_op_table_0_f_0();
    TypeClassInfo_for_op_table_19 = (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_2[1]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_19, (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_19)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Op_10)));
  }
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_U_14_14;
    MR_Box STATE_VARIABLE_U_15_15;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_1(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_0_11, &STATE_VARIABLE_U_14_14);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 20))));
    func_2(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Op_10)), S_8, STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_15_15);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_15_15, STATE_VARIABLE_U_12);
  }
  else
  {
    MR_String Atom_20;

    succeeded = ((MR_tag((MR_Word) Const_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Atom_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Const_7, (MR_Integer) 0))));
      parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_output_17, NextToGraphicToken_6, Atom_20, S_8, STATE_VARIABLE_U_0_11, STATE_VARIABLE_U_12);
    }
    else
    {
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_17, (MR_Integer) 0)), (MR_Integer) 22))));

      func_4(((MR_Box) (TypeClassInfo_for_output_17)), ((MR_Box) (Const_7)), S_8, STATE_VARIABLE_U_0_11, STATE_VARIABLE_U_12);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__Char_11 = ((MR_Char) (MR_Word) (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__conv0_Char_11);
  parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded = mercury__mercury_term_lexer__graphic_token_char_1_p_0((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__Char_11);
  (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded = !((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded);
  if ((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded)
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_1(env_ptr);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), &(env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__conv0_Char_11, (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__Chars_10, parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_3, env_ptr);
      (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded = MR_TRUE;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(
  MR_Word TypeClassInfo_for_output_18,
  MR_Word NextToGraphicToken_6,
  MR_String Name_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  struct parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0_s env;

  (env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded = (NextToGraphicToken_6 == (MR_Integer) 0);
  if ((env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded)
  {
    mercury__string__to_char_list_2_p_0(Name_7, &(env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__Chars_10);
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_4(&env);
    (env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded = !((env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded);
  }
  if ((env).parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0_env_0__succeeded)
  {
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_16_16;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_1(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) ((MR_String) "\'")), S_8, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 25))));
    func_2(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) (Name_7)), S_8, STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_16_16);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) ((MR_String) "\'")), S_8, STATE_VARIABLE_U_16_16, STATE_VARIABLE_U_13);
  }
  else
  {
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 20))));

    func_4(((MR_Box) (TypeClassInfo_for_output_18)), ((MR_Box) (Name_7)), S_8, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_src_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_src_2_f_0(
  MR_Word VarNameSrc_4,
  MR_Word Vars_5)
{
  MR_String HeadVar__3_3;
  MR_Word Var_10;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_HeadVar__3_3;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_name_only_src_2_f_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[1]));
    MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (VarNameSrc_4));
    MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) ((MR_Integer) 0));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 27))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]))), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[0])), ((MR_Box) (Var_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_5)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_HeadVar__3_3);
  HeadVar__3_3 = ((MR_String) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_name_only_src_2_f_0(
  MR_Word VarNameSrc_4,
  MR_Word Var_5)
{
  MR_String HeadVar__3_3;
  MR_Box conv0_HeadVar__3_3;

  parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarNameSrc_4, (MR_Integer) 0, Var_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_HeadVar__3_3);
  HeadVar__3_3 = ((MR_String) (conv0_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_4,
  MR_Word Vars_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(TypeInfo_for_T_7, VarSet_4, (MR_Integer) 0, Vars_5);
  return HeadVar__3_3;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  MR_String HeadVar__3_3;
  MR_Box conv0_HeadVar__3_3;

  parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(TypeInfo_for_T_7, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_4, (MR_Integer) 0, Var_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_HeadVar__3_3);
  HeadVar__3_3 = ((MR_String) (conv0_HeadVar__3_3));
  return HeadVar__3_3;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_src_6_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Word Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_format_vars_src_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeClassInfo_for_output_16));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarNameSrc_7));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 27))));
  func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[0])), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), S_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(
  MR_Word VarNameSrc_5,
  MR_Word VarNamePrint_6,
  MR_Word Vars_7)
{
  MR_String String_8;
  MR_Word Var_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_String_8;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0_1));
    MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[1]));
    MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (VarNameSrc_5));
    MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (VarNamePrint_6));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 27))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]))), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[0])), ((MR_Box) (Var_12)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_String_8);
  String_8 = ((MR_String) (conv1_String_8));
  return String_8;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word Stream_10)
{
  MR_Word Var_15;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_13;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[0]));
    MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (VarNameSrc_7));
    MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (VarNamePrint_8));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 27))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]))), ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_2[0])), ((MR_Box) (Var_15)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_output_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  MR_Word TypeInfo_23_23;
  MR_Word Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_format_vars_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TypeInfo_for_T_17));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (TypeClassInfo_for_output_16));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (VarSet_7));
    MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (VarNamePrint_8));
  }
  {
    TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 27))));
  func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (TypeInfo_23_23)), ((MR_Box) (Var_14)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), S_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Vars_7)
{
  MR_String String_8;
  MR_Word TypeInfo_23_16;
  MR_Word Var_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_String_8;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0_1));
    MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeInfo_for_T_11));
    MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[1]));
    MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (VarSet_5));
    MR_hl_field(MR_mktag(0), Var_13, 6) = ((MR_Box) (VarNamePrint_6));
  }
  {
    TypeInfo_23_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_23_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_23_16, 1) = ((MR_Box) (TypeInfo_for_T_11));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 27))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]))), ((MR_Box) (TypeInfo_23_16)), ((MR_Box) (Var_13)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_String_8);
  String_8 = ((MR_String) (conv1_String_8));
  return String_8;
}

static void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Vars_9,
  MR_Word Stream_10)
{
  MR_Word TypeInfo_23_19;
  MR_Word Var_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_13;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeInfo_for_T_14));
    MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (&parse_tree__parse_tree_out_term_scalar_common_1[0]));
    MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (VarSet_7));
    MR_hl_field(MR_mktag(0), Var_16, 6) = ((MR_Box) (VarNamePrint_8));
  }
  {
    TypeInfo_23_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_23_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(MR_mktag(0), TypeInfo_23_19, 1) = ((MR_Box) (TypeInfo_for_T_14));
  }
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 27))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]))), ((MR_Box) (TypeInfo_23_19)), ((MR_Box) (Var_16)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Vars_9)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(
  MR_Word VarNameSrc_5,
  MR_Word VarNamePrint_6,
  MR_Word Var_7)
{
  MR_String String_8;
  MR_Box conv0_String_8;

  parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarNameSrc_5, VarNamePrint_6, Var_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
  String_8 = ((MR_String) (conv0_String_8));
  return String_8;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word Stream_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0((MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), VarNameSrc_7, VarNamePrint_8, Var_9, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_src_6_p_0(
  MR_Word TypeClassInfo_for_output_31,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = parse_tree__var_table__search_var_name_in_source_3_p_0(VarNameSrc_7, Var_9, &Name_12);
  if (succeeded)
    switch (VarNamePrint_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_String ConvertedName_14;
          MR_Box STATE_VARIABLE_U_20_20;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(Name_12, &ConvertedName_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
          func_0(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (ConvertedName_14)), S_10, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_20_20);
          switch (VarNamePrint_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_22_22;
                MR_Integer VarNum_27;
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, &VarNum_27);
                func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
                func_1(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "_")), S_10, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
                func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8))));
                func_2(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (VarNum_27)), S_10, STATE_VARIABLE_U_22_22, STATE_VARIABLE_U_16);
              }
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_U_16 = STATE_VARIABLE_U_20_20;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer VarNum_13;
          MR_Box STATE_VARIABLE_U_18_18;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, &VarNum_13);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
          func_3(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "V_")), S_10, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8))));
          func_4(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (VarNum_13)), S_10, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_16);
        }
        break;
    }
  else
  {
    MR_Box STATE_VARIABLE_U_25_25;
    MR_Integer VarNum_30;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, &VarNum_30);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "V_")), S_10, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_25_25);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8))));
    func_6(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (VarNum_30)), S_10, STATE_VARIABLE_U_25_25, STATE_VARIABLE_U_16);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Var_7)
{
  MR_String String_8;
  MR_Box conv0_String_8;

  parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(TypeInfo_for_T_11, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[1]), VarSet_5, VarNamePrint_6, Var_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
  String_8 = ((MR_String) (conv0_String_8));
  return String_8;
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_output_var_6_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word Stream_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(TypeInfo_for_T_14, (MR_Word) (&parse_tree__parse_tree_out_term_scalar_common_1[0]), VarSet_7, VarNamePrint_8, Var_9, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_format_var_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_output_31,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_15,
  MR_Box * STATE_VARIABLE_U_16)
{
  MR_bool succeeded;
  MR_String Name_12;

  succeeded = mercury__varset__search_name_3_p_0(TypeInfo_for_T_32, VarSet_7, Var_9, &Name_12);
  if (succeeded)
    switch (VarNamePrint_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          MR_String ConvertedName_14;
          MR_Box STATE_VARIABLE_U_20_20;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(Name_12, &ConvertedName_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
          func_0(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (ConvertedName_14)), S_10, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_20_20);
          switch (VarNamePrint_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Box STATE_VARIABLE_U_22_22;
                MR_Integer VarNum_27;
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                mercury__term__var_to_int_2_p_0(TypeInfo_for_T_32, Var_9, &VarNum_27);
                func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
                func_1(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "_")), S_10, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
                func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8))));
                func_2(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (VarNum_27)), S_10, STATE_VARIABLE_U_22_22, STATE_VARIABLE_U_16);
              }
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_U_16 = STATE_VARIABLE_U_20_20;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer VarNum_13;
          MR_Box STATE_VARIABLE_U_18_18;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__term__var_to_int_2_p_0(TypeInfo_for_T_32, Var_9, &VarNum_13);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
          func_3(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "V_")), S_10, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_18_18);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8))));
          func_4(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (VarNum_13)), S_10, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_16);
        }
        break;
    }
  else
  {
    MR_Box STATE_VARIABLE_U_25_25;
    MR_Integer VarNum_30;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__term__var_to_int_2_p_0(TypeInfo_for_T_32, Var_9, &VarNum_30);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) ((MR_String) "V_")), S_10, STATE_VARIABLE_U_0_15, &STATE_VARIABLE_U_25_25);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_31, (MR_Integer) 0)), (MR_Integer) 8))));
    func_6(((MR_Box) (TypeClassInfo_for_output_31)), ((MR_Box) (VarNum_30)), S_10, STATE_VARIABLE_U_25_25, STATE_VARIABLE_U_16);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_term__mercury_convert_var_name_2_p_0(
  MR_String Name_3,
  MR_String * ConvertedName_4)
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

static void MR_CALL 
parse_tree__parse_tree_out_term__strip_trailing_primes_3_p_0(
  MR_String Name0_4,
  MR_String * Name_5,
  MR_Integer * Num_6)
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

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_term____Unify____graphic_char_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_term____Compare____graphic_char_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_term____Unify____graphic_char_in_string_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_term____Compare____graphic_char_in_string_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_term____Unify____needs_quotes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_term____Compare____needs_quotes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_term____Unify____non_graphic_char_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_term____Compare____non_graphic_char_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_tree_out_term__init(void)
{
}

void mercury__parse_tree__parse_tree_out_term__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_graphic_char_in_string_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_needs_quotes_0);
	MR_register_type_ctor_info(&parse_tree__parse_tree_out_term__parse_tree__parse_tree_out_term__type_ctor_info_non_graphic_char_0);
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
