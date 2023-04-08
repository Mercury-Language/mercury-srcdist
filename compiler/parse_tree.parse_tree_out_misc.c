/*
** Automatically generated from `parse_tree_out_misc.m'
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


// :- module parse_tree.parse_tree_out_misc.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_misc__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_misc.mih"


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
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_misc__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_misc__term__pti_var_1__pseudo_1;

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_state_var_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word Stream_10);

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_state_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_1[2][3];

static /* final */ const MR_Integer parse_tree__parse_tree_out_misc_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_4[1][10];


struct parse_tree__parse_tree_out_misc__vector_common_type_2_0_s {
  const MR_String parse_tree__parse_tree_out_misc__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__parse_tree_out_misc__vector_common_type_2_0_s parse_tree__parse_tree_out_misc_vector_common_2[18];



static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_1[2][3] = {
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

static /* final */ const MR_Integer parse_tree__parse_tree_out_misc_scalar_common_3[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_misc_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_misc__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct parse_tree__parse_tree_out_misc__vector_common_type_2_0_s parse_tree__parse_tree_out_misc_vector_common_2[18] = {
  /* row   0 */   { (MR_String) "det" },
  /* row   1 */   { (MR_String) "semidet" },
  /* row   2 */   { (MR_String) "multi" },
  /* row   3 */   { (MR_String) "nondet" },
  /* row   4 */   { (MR_String) "cc_multi" },
  /* row   5 */   { (MR_String) "cc_nondet" },
  /* row   6 */   { (MR_String) "erroneous" },
  /* row   7 */   { (MR_String) "failure" },
  /* row   8 */   { (MR_String) "" },
  /* row   9 */   { (MR_String) "  " },
  /* row  10 */   { (MR_String) "    " },
  /* row  11 */   { (MR_String) "      " },
  /* row  12 */   { (MR_String) "        " },
  /* row  13 */   { (MR_String) "          " },
  /* row  14 */   { (MR_String) "            " },
  /* row  15 */   { (MR_String) "              " },
  /* row  16 */   { (MR_String) "                " },
  /* row  17 */   { (MR_String) "                  " },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_misc__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_misc__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_state_var_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Var_9,
  MR_Word Stream_10)
{
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "!");
  parse_tree__parse_tree_out_term__mercury_output_var_vs_6_p_0(TypeInfo_for_T_16, VarSet_7, VarNamePrint_8, Var_9, Stream_10);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_newline_4_p_0(
  MR_Integer Indent_5,
  MR_Word Stream_6)
{
  MR_Box conv0_STATE_VARIABLE_IO_9;

  mercury__io__write_char_4_p_0(Stream_6, (MR_Char) 10);
  parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_1[0]), Indent_5, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Integer Indent_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_5 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_12_12;
      MR_Integer Var_13;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Integer next_value_of_Indent_5;
      MR_Box next_value_of_STATE_VARIABLE_U_0_8;

      func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) ((MR_String) "\t")), S_6, STATE_VARIABLE_U_0_8, &STATE_VARIABLE_U_12_12);
      Var_13 = (MR_Integer) ((MR_Unsigned) Indent_5 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_5 = Var_13;
      next_value_of_STATE_VARIABLE_U_0_8 = STATE_VARIABLE_U_12_12;
      Indent_5 = next_value_of_Indent_5;
      STATE_VARIABLE_U_0_8 = next_value_of_STATE_VARIABLE_U_0_8;
      continue;
    }
    else
      *STATE_VARIABLE_U_9 = STATE_VARIABLE_U_0_8;
    break;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_misc__write_indent_4_p_0(
  MR_Word Stream_5,
  MR_Integer Indent_6)
{
  MR_String Str_8;

  Str_8 = parse_tree__parse_tree_out_misc__indent_string_1_f_0(Indent_6);
  mercury__io__write_string_4_p_0(Stream_5, Str_8);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__indent_string_1_f_0(
  MR_Integer Indent_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String Str0_5;

  if ((((MR_Unsigned) Indent_3) <= ((MR_Unsigned) 9)))
  {
    Str0_5 = ((&parse_tree__parse_tree_out_misc_vector_common_2[8 + Indent_3]))->parse_tree__parse_tree_out_misc__vector_common_type_2_0__vct_2_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    Str_4 = Str0_5;
  else
  {
    MR_String Var_7;
    MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) Indent_3 - (MR_Unsigned) 10);

    Var_7 = parse_tree__parse_tree_out_misc__indent_string_1_f_0(Var_8);
    Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "                    ", Var_7);
  }
  return Str_4;
}

MR_Integer MR_CALL 
parse_tree__parse_tree_out_misc__indent_increment_0_f_0(void)
{
  return (MR_Integer) 2;
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_foreign_language_string_4_p_0(
  MR_Word TypeClassInfo_for_output_16,
  MR_Word Lang_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  MR_String Var_10;
  MR_String Var_13;
  MR_String Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  Var_14 = libs__globals__foreign_language_string_1_f_0(Lang_5);
  Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) "\"");
  Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_output_16)), ((MR_Box) (Var_10)), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(
  MR_Word Lang_3)
{
  MR_String String_4;
  MR_String Var_8;
  MR_String Var_10;
  MR_String Var_11;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_String_4;

  Var_11 = libs__globals__foreign_language_string_1_f_0(Lang_3);
  Var_10 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) "\"");
  Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_10);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_1[1]))), ((MR_Box) (Var_8)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_String_4);
  String_4 = ((MR_String) (conv1_String_4));
  return String_4;
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_foreign_language_string_4_p_0(
  MR_Word Lang_5,
  MR_Word Stream_6)
{
  MR_String Var_11;
  MR_String Var_13;
  MR_String Var_14;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_IO_9;

  Var_14 = libs__globals__foreign_language_string_1_f_0(Lang_5);
  Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) "\"");
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_1[0]))), ((MR_Box) (Var_11)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_9);
}

static void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_state_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_misc__mercury_output_state_var_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_state_vars_6_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word StateVars_9,
  MR_Word Stream_10)
{
  MR_Word TypeInfo_22_22;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&parse_tree__parse_tree_out_misc_scalar_common_4[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (parse_tree__parse_tree_out_misc__mercury_output_state_vars_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_16));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (VarSet_7));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (VarNamePrint_8));
  }
  {
    TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_16));
  }
  parse_tree__parse_tree_out_info__write_out_list_6_p_0(TypeInfo_22_22, (MR_Word) (Var_14), (MR_String) ", ", (MR_Word) (StateVars_9), Stream_10);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__mercury_quantifier_to_string_3_f_0(
  MR_Word TypeVarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word ExistQVars_7)
{
  MR_String String_8;
  MR_Box conv0_String_8;

  parse_tree__parse_tree_out_misc__mercury_format_quantifier_6_p_0((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_1[1]), TypeVarSet_5, VarNamePrint_6, ExistQVars_7, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_8);
  String_8 = ((MR_String) (conv0_String_8));
  return String_8;
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_quantifier_6_p_0(
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ExistQVars_9,
  MR_Word Stream_10)
{
  MR_Box conv0_STATE_VARIABLE_IO_13;

  parse_tree__parse_tree_out_misc__mercury_format_quantifier_6_p_0((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_1[0]), TypeVarSet_7, VarNamePrint_8, ExistQVars_9, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_quantifier_6_p_0(
  MR_Word TypeClassInfo_for_output_20,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ExistQVars_9,
  MR_Box S_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  if ((ExistQVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_15 = STATE_VARIABLE_U_0_14;
  else
  {
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_18_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_20)), ((MR_Box) ((MR_String) "some [")), S_10, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_17_17);
    parse_tree__parse_tree_out_term__mercury_format_vars_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_output_20, TypeVarSet_7, VarNamePrint_8, ExistQVars_9, S_10, STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_18_18);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_20)), ((MR_Box) ((MR_String) "] ")), S_10, STATE_VARIABLE_U_18_18, STATE_VARIABLE_U_15);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_format_det_4_p_0(
  MR_Word TypeClassInfo_for_output_11,
  MR_Word Detism_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  MR_String Var_10;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  Var_10 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Detism_5);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_11, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_output_11)), ((MR_Box) (Var_10)), S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_misc__mercury_output_det_4_p_0(
  MR_Word Detism_5,
  MR_Word Stream_6)
{
  MR_String Var_11;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_UI_9;

  Var_11 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Detism_5);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_misc_scalar_common_1[0]))), ((MR_Box) (Var_11)), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_UI_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&parse_tree__parse_tree_out_misc_vector_common_2[0 + HeadVar__1_1]))->parse_tree__parse_tree_out_misc__vector_common_type_2_0__vct_2_f_0;

  return HeadVar__2_2;
}

void mercury__parse_tree__parse_tree_out_misc__init(void)
{
}

void mercury__parse_tree__parse_tree_out_misc__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_misc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_misc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_misc.
