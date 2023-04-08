/*
** Automatically generated from `parse_tree_out_sym_name.m'
** by the Mercury compiler,
** version rotd-2023-04-08
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


// :- module parse_tree.parse_tree_out_sym_name.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_sym_name__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_sym_name.mih"


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
#include "io.mih"
#include "libs.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"




static const MR_EnumFunctorDesc parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_ordinal_ordered_needs_brackets_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_name_ordered_needs_brackets_0[2];

static const MR_Integer parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__functor_number_map_needs_brackets_0[2];

static MR_bool MR_CALL 
parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_1[2][3];




static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_1[2][3] = {
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
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_EnumFunctorDesc parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_0 = {
  (MR_String) "needs_brackets",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_1 = {
  (MR_String) "does_not_need_brackets",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_ordinal_ordered_needs_brackets_0[2] = {
  &parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_0,
  &parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_name_ordered_needs_brackets_0[2] = {
  &parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_1,
  &parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_0
};

static const MR_Integer parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__functor_number_map_needs_brackets_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__type_ctor_info_needs_brackets_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_sym_name",
  (MR_String) "needs_brackets",
  { parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_name_ordered_needs_brackets_0 },
  { parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_ordinal_ordered_needs_brackets_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__functor_number_map_needs_brackets_0,

};

void MR_CALL 
parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0(
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
parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_ngt_2_f_0(
  MR_Word NextToGraphicToken_4,
  MR_Word SymName_5)
{
  MR_String Str_6;
  MR_Box conv0_Str_6;

  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]), NextToGraphicToken_4, SymName_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_Str_6);
  Str_6 = ((MR_String) (conv0_Str_6));
  return Str_6;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_ngt_5_p_0(
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Word Stream_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[0]), NextToGraphicToken_6, SymName_7, ((MR_Box) (Stream_8)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_arity_4_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Box STATE_VARIABLE_U_11_11;
  MR_Box STATE_VARIABLE_U_13_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_14, (MR_Integer) 1, SymName_5, S_7, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_11_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 7))));
  func_0(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) (MR_Word) ((MR_Char) 47)), S_7, STATE_VARIABLE_U_11_11, &STATE_VARIABLE_U_13_13);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 8))));
  func_1(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) (Arity_6)), S_7, STATE_VARIABLE_U_13_13, STATE_VARIABLE_U_10);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_arity_to_string_1_f_0(
  MR_Word SNA_3)
{
  MR_String Str_4;
  MR_Word SymName_8;
  MR_Integer Arity_9;
  MR_String STATE_VARIABLE_U_11_10;
  MR_String STATE_VARIABLE_U_13_12;
  MR_Box conv0_STATE_VARIABLE_U_11_10;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_U_13_12;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_Str_4;

  SymName_8 = ((MR_Word) ((MR_hl_field(0, SNA_3, (MR_Integer) 0))));
  Arity_9 = ((MR_Integer) ((MR_hl_field(0, SNA_3, (MR_Integer) 1))));
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]), (MR_Integer) 1, SymName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_11_10);
  STATE_VARIABLE_U_11_10 = ((MR_String) (conv0_STATE_VARIABLE_U_11_10));
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 7))));
  func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]))), ((MR_Box) (MR_Word) ((MR_Char) 47)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_11_10)), &conv2_STATE_VARIABLE_U_13_12);
  STATE_VARIABLE_U_13_12 = ((MR_String) (conv2_STATE_VARIABLE_U_13_12));
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]))), ((MR_Box) (Arity_9)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_12)), &conv4_Str_4);
  Str_4 = ((MR_String) (conv4_Str_4));
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_4_p_0(
  MR_Word TypeClassInfo_for_output_11,
  MR_Word SymName_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_11, (MR_Integer) 1, SymName_5, S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(
  MR_Word SymName_3)
{
  MR_String HeadVar__2_2;
  MR_Box conv0_HeadVar__2_2;

  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]), (MR_Integer) 1, SymName_3, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_HeadVar__2_2);
  HeadVar__2_2 = ((MR_String) (conv0_HeadVar__2_2));
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_4_p_0(
  MR_Word SymName_5,
  MR_Word Stream_6)
{
  MR_Box conv0_STATE_VARIABLE_IO_9;

  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[0]), (MR_Integer) 1, SymName_5, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_arity_4_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Box STATE_VARIABLE_U_11_11;
  MR_Box STATE_VARIABLE_U_13_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_output_14, (MR_Integer) 1, SymName_5, S_7, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_11_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 7))));
  func_0(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) (MR_Word) ((MR_Char) 47)), S_7, STATE_VARIABLE_U_11_11, &STATE_VARIABLE_U_13_13);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 8))));
  func_1(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) (Arity_6)), S_7, STATE_VARIABLE_U_13_13, STATE_VARIABLE_U_10);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_sym_name_arity_to_string_1_f_0(
  MR_Word SNA_3)
{
  MR_String Str_4;
  MR_Word SymName_8;
  MR_Integer Arity_9;
  MR_String STATE_VARIABLE_U_11_10;
  MR_String STATE_VARIABLE_U_13_12;
  MR_Box conv0_STATE_VARIABLE_U_11_10;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_U_13_12;
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv4_Str_4;

  SymName_8 = ((MR_Word) ((MR_hl_field(0, SNA_3, (MR_Integer) 0))));
  Arity_9 = ((MR_Integer) ((MR_hl_field(0, SNA_3, (MR_Integer) 1))));
  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]), (MR_Integer) 1, SymName_8, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_11_10);
  STATE_VARIABLE_U_11_10 = ((MR_String) (conv0_STATE_VARIABLE_U_11_10));
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 7))));
  func_1(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]))), ((MR_Box) (MR_Word) ((MR_Char) 47)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_11_10)), &conv2_STATE_VARIABLE_U_13_12);
  STATE_VARIABLE_U_13_12 = ((MR_String) (conv2_STATE_VARIABLE_U_13_12));
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
  func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]))), ((MR_Box) (Arity_9)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_13_12)), &conv4_Str_4);
  Str_4 = ((MR_String) (conv4_Str_4));
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(
  MR_Word TypeClassInfo_for_output_11,
  MR_Word SymName_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_output_11, (MR_Integer) 1, SymName_5, S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_sym_name_to_string_1_f_0(
  MR_Word SymName_3)
{
  MR_String Str_4;
  MR_Box conv0_Str_4;

  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1]), (MR_Integer) 1, SymName_3, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_Str_4);
  Str_4 = ((MR_String) (conv0_Str_4));
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(
  MR_Word SymName_5,
  MR_Word Stream_6)
{
  MR_Box conv0_STATE_VARIABLE_IO_9;

  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[0]), (MR_Integer) 1, SymName_5, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(
  MR_Word TypeClassInfo_for_output_22,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, SymName_7, (MR_Integer) 0))));
    MR_String PredName_11 = ((MR_String) ((MR_hl_field(1, SymName_7, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_17_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_22, (MR_Integer) 0, ModuleName_10, S_8, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ".")), S_8, STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_17_17);
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_output_22, (MR_Integer) 0, PredName_11, S_8, STATE_VARIABLE_U_17_17, STATE_VARIABLE_U_13);
  }
  else
  {
    MR_String PredName_21 = ((MR_String) ((MR_hl_field(0, SymName_7, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_output_22, NextToGraphicToken_6, PredName_21, S_8, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(
  MR_Word TypeClassInfo_for_output_26,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, SymName_7, (MR_Integer) 0))));
    MR_String Name_11 = ((MR_String) ((MR_hl_field(1, SymName_7, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_19_19;
    MR_Box STATE_VARIABLE_U_21_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_output_26, (MR_Integer) 0, ModuleName_10, S_8, STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_17_17);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) ((MR_String) ".")), S_8, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_19_19);
    parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0(TypeClassInfo_for_output_26, (MR_Integer) 0, Name_11, S_8, STATE_VARIABLE_U_19_19, &STATE_VARIABLE_U_21_21);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_26, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_26)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_21_21, STATE_VARIABLE_U_13);
  }
  else
  {
    MR_String Name_25 = ((MR_String) ((MR_hl_field(0, SymName_7, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0(TypeClassInfo_for_output_26, NextToGraphicToken_6, Name_25, S_8, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_tree_out_sym_name__init(void)
{
}

void mercury__parse_tree__parse_tree_out_sym_name__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__type_ctor_info_needs_brackets_0);
}

void mercury__parse_tree__parse_tree_out_sym_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_sym_name__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_sym_name.
