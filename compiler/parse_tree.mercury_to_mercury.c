/*
** Automatically generated from `mercury_to_mercury.m'
** by the Mercury compiler,
** version rotd-2019-03-24
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


// :- module parse_tree.mercury_to_mercury.
// :- implementation.

/*
INIT mercury__parse_tree__mercury_to_mercury__init
ENDINIT
*/

#include "parse_tree.mercury_to_mercury.mih"


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
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
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
#include "term_io.mih"
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
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0;

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1;

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_value_ordered_needs_brackets_0[2];

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0[2];

static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0[2];

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_var_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Var_8);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_1[4][2];

static /* final */ const MR_Integer parse_tree__mercury_to_mercury_scalar_common_3[2][2];

static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_4[3][9];


/* sealed */ struct parse_tree__mercury_to_mercury__vector_common_type_2_0_s {
  const MR_String parse_tree__mercury_to_mercury__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__mercury_to_mercury__vector_common_type_2_0_s parse_tree__mercury_to_mercury_vector_common_2[8];



static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_1[4][2] = {
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
    ((MR_Box) ((MR_String) ">")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) " (")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Integer parse_tree__mercury_to_mercury_scalar_common_3[2][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box parse_tree__mercury_to_mercury_scalar_common_4[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_3[1])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_3[1])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct parse_tree__mercury_to_mercury__vector_common_type_2_0_s parse_tree__mercury_to_mercury_vector_common_2[8] = {
  /* row 0 */   {     (MR_String) "det" },
  /* row 1 */   {     (MR_String) "semidet" },
  /* row 2 */   {     (MR_String) "multi" },
  /* row 3 */   {     (MR_String) "nondet" },
  /* row 4 */   {     (MR_String) "cc_multi" },
  /* row 5 */   {     (MR_String) "cc_nondet" },
  /* row 6 */   {     (MR_String) "erroneous" },
  /* row 7 */   {     (MR_String) "failure" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__pseudo_1 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__mercury_to_mercury__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0 = {
  (MR_String) "needs_brackets",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1 = {
  (MR_String) "does_not_need_brackets",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_value_ordered_needs_brackets_0[2] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0,
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0[2] = {
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_1,
  &parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_functor_desc_needs_brackets_0_0
};

static const MR_Integer parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_needs_brackets_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001)),
  ((MR_Box) (parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001)),
  (MR_String) "parse_tree.mercury_to_mercury",
  (MR_String) "needs_brackets",
  {     parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_name_ordered_needs_brackets_0 },
  {     parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__enum_value_ordered_needs_brackets_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__functor_number_map_needs_brackets_0
};

void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0(
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
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_var_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Var_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "!");
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(TypeInfo_for_T_15, VarSet_6, VarNamePrint_7, Var_8);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(
  MR_Integer Indent_4)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_7;

    mercury__io__write_char_3_p_0((MR_Char) 10);
    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), Indent_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_7);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Integer Indent_4,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_4 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_10_10;
      MR_Integer Var_11;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Integer next_value_of_Indent_4;
      MR_Box next_value_of_STATE_VARIABLE_U_0_6;

      func_0(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) ((MR_String) "\t")), STATE_VARIABLE_U_0_6, &STATE_VARIABLE_U_10_10);
      Var_11 = (MR_Integer) ((MR_Unsigned) Indent_4 - (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_4 = Var_11;
      next_value_of_STATE_VARIABLE_U_0_6 = STATE_VARIABLE_U_10_10;
      Indent_4 = next_value_of_Indent_4;
      STATE_VARIABLE_U_0_6 = next_value_of_STATE_VARIABLE_U_0_6;
      continue;
    }
    else
      *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_0_6;
    break;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_foreign_language_string_3_p_0(
  MR_Word TypeClassInfo_for_output_14,
  MR_Word Lang_4,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  {
    MR_String Var_8;
    MR_String Var_11;
    MR_String Var_12;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    Var_12 = libs__globals__foreign_language_string_1_f_0(Lang_4);
    Var_11 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) "\"");
    Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_11);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_14, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_14)), ((MR_Box) (Var_8)), STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(
  MR_Word Lang_3)
{
  {
    MR_String String_4;
    MR_String Var_11;
    MR_String Var_14;
    MR_String Var_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_String_4;

    Var_15 = libs__globals__foreign_language_string_1_f_0(Lang_3);
    Var_14 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) "\"");
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_14);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]))), ((MR_Box) (Var_11)), ((MR_Box) ((MR_String) "")), &conv1_String_4);
    String_4 = ((MR_String) (conv1_String_4));
    return String_4;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(
  MR_Word Lang_4)
{
  {
    MR_String Var_14;
    MR_String Var_17;
    MR_String Var_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_7;

    Var_18 = libs__globals__foreign_language_string_1_f_0(Lang_4);
    Var_17 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) "\"");
    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_17);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]))), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_7);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_class_context_6_p_0(
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ClassContext_9,
  MR_Word ExistQVars_10)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_13;

    parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), TypeVarSet_7, VarNamePrint_8, ClassContext_9, ExistQVars_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0(
  MR_Word TypeClassInfo_for_output_22,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word ClassContext_9,
  MR_Word ExistQVars_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  {
    MR_bool succeeded;
    MR_Word UnivCs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_9, (MR_Integer) 0))));
    MR_Word ExistCs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_9, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Box STATE_VARIABLE_U_19_19;

    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(TypeClassInfo_for_output_22, TypeVarSet_7, VarNamePrint_8, (MR_String) "=>", ExistCs_13, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_17_17);
    succeeded = (ExistQVars_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ExistCs_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      STATE_VARIABLE_U_19_19 = STATE_VARIABLE_U_17_17;
    else
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));

      func_0(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_19_19);
    }
    parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(TypeClassInfo_for_output_22, TypeVarSet_7, VarNamePrint_8, (MR_String) "<=", UnivCs_12, STATE_VARIABLE_U_19_19, STATE_VARIABLE_U_15);
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0(
  MR_Word TypeClassInfo_for_output_28,
  MR_Word TypeVarSet_7,
  MR_Word VarNamePrint_8,
  MR_String Operator_9,
  MR_Word Constraints_10,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  if ((Constraints_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_15 = STATE_VARIABLE_U_0_14;
  else
  {
    MR_Word Var_16;
    MR_Box STATE_VARIABLE_U_17_17;
    MR_Word Var_19;
    MR_Word Var_24;
    MR_Box STATE_VARIABLE_U_25_25;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Operator_9));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__mercury_to_mercury_scalar_common_1[3])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (Var_16)), STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_17_17);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_format_prog_constraint_list_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeClassInfo_for_output_28));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (TypeVarSet_7));
      MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (VarNamePrint_8));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 27))));
    func_1(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)), ((MR_Box) (Constraints_10)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_24)), STATE_VARIABLE_U_17_17, &STATE_VARIABLE_U_25_25);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_25_25, STATE_VARIABLE_U_15);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word Constraint_5)
{
  {
    MR_String String_6;
    MR_Box conv0_String_6;

    parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), TypeVarSet_4, (MR_Integer) 0, Constraint_5, ((MR_Box) ((MR_String) "")), &conv0_String_6);
    String_6 = ((MR_String) (conv0_String_6));
    return String_6;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Constraint_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), TypeVarSet_6, VarNamePrint_7, Constraint_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0(
  MR_Word TypeClassInfo_for_output_22,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Constraint_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  {
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_8, (MR_Integer) 0))));
    MR_Word Types_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_8, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_14_14;
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Word Var_18;
    MR_Box STATE_VARIABLE_U_19_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(TypeClassInfo_for_output_22, (MR_Integer) 1, Name_10, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_14_14);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_16_16);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_format_constraint_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (TypeClassInfo_for_output_22));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (TypeVarSet_6));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (VarNamePrint_7));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 27))));
    func_1(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Types_11)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_18)), STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_19_19);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_22, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_22)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_19_19, STATE_VARIABLE_U_13);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_ngt_2_f_0(
  MR_Word NextToGraphicToken_4,
  MR_Word SymName_5)
{
  {
    MR_String Str_6;
    MR_Box conv0_Str_6;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), NextToGraphicToken_4, SymName_5, ((MR_Box) ((MR_String) "")), &conv0_Str_6);
    Str_6 = ((MR_String) (conv0_Str_6));
    return Str_6;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0(
  MR_Word NextToGraphicToken_5,
  MR_Word SymName_6)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_9;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), NextToGraphicToken_5, SymName_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_f_0(
  MR_Word SymName_3)
{
  {
    MR_String HeadVar__2_2;
    MR_Box conv0_HeadVar__2_2;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), (MR_Integer) 1, SymName_3, ((MR_Box) ((MR_String) "")), &conv0_HeadVar__2_2);
    HeadVar__2_2 = ((MR_String) (conv0_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(
  MR_Word SymName_4)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_7;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), (MR_Integer) 1, SymName_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_7);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_and_arity_3_p_0(
  MR_Word TypeClassInfo_for_output_13,
  MR_Word HeadVar__1_1,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8)
{
  {
    MR_Word SymName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_9_9;
    MR_Box STATE_VARIABLE_U_11_11;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(TypeClassInfo_for_output_13, (MR_Integer) 1, SymName_4, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_9_9);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 7))));
    func_0(((MR_Box) (TypeClassInfo_for_output_13)), ((MR_Box) (MR_Word) ((MR_Char) 47)), STATE_VARIABLE_U_9_9, &STATE_VARIABLE_U_11_11);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_13, (MR_Integer) 0)), (MR_Integer) 8))));
    func_1(((MR_Box) (TypeClassInfo_for_output_13)), ((MR_Box) (Arity_5)), STATE_VARIABLE_U_11_11, STATE_VARIABLE_U_8);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(
  MR_Word SymName_4)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_7;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), (MR_Integer) 1, SymName_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_7);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0(
  MR_Word NeedsBrackets_4,
  MR_Word ConsId_5)
{
  {
    MR_String String_6;
    MR_Box conv0_String_6;

    parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), NeedsBrackets_4, ConsId_5, ((MR_Box) ((MR_String) "")), &conv0_String_6);
    String_6 = ((MR_String) (conv0_String_6));
    return String_6;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_cons_id_4_p_0(
  MR_Word NeedsBrackets_5,
  MR_Word ConsId_6)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_9;

    parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), NeedsBrackets_5, ConsId_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(
  MR_Word TypeClassInfo_for_output_148,
  MR_Word NeedsBrackets_5,
  MR_Word ConsId_6,
  MR_Box STATE_VARIABLE_U_0_47,
  MR_Box * STATE_VARIABLE_U_48)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "<typeclass_info_cell_constructor>", STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "<type_info_cell_constructor>", STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
        }
        break;
      case (MR_Integer) 2:
        {
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "<tabling info>", STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "<table_io_entry_desc>", STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 1:
            {
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "<deep_profiling_proc_layout>", STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Name_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));

              switch (NeedsBrackets_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_148, Name_8, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
                  break;
                case (MR_Integer) 0:
                  parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_148, Name_8, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "{}", STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ShroudedPredProcId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));
              MR_Integer PredInt_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ShroudedPredProcId_25, (MR_Integer) 0))));
              MR_Integer ProcInt_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ShroudedPredProcId_25, (MR_Integer) 1))));
              MR_Box STATE_VARIABLE_U_117_117;
              MR_Box STATE_VARIABLE_U_118_118;
              MR_Box STATE_VARIABLE_U_120_120;
              MR_Box STATE_VARIABLE_U_121_121;

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "<closure_cons(", STATE_VARIABLE_U_0_47, &STATE_VARIABLE_U_117_117);
              parse_tree__parse_tree_out_info__add_int_3_p_0(TypeClassInfo_for_output_148, PredInt_27, STATE_VARIABLE_U_117_117, &STATE_VARIABLE_U_118_118);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) ", ", STATE_VARIABLE_U_118_118, &STATE_VARIABLE_U_120_120);
              parse_tree__parse_tree_out_info__add_int_3_p_0(TypeClassInfo_for_output_148, ProcInt_28, STATE_VARIABLE_U_120_120, &STATE_VARIABLE_U_121_121);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) ")>", STATE_VARIABLE_U_121_121, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_int_3_p_0(TypeClassInfo_for_output_148, Int_12, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_uint_3_p_0(TypeClassInfo_for_output_148, UInt_13, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 7:
            {
              int8_t Int8_14 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_int8_3_p_0(TypeClassInfo_for_output_148, Int8_14, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 8:
            {
              uint8_t UInt8_15 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_uint8_3_p_0(TypeClassInfo_for_output_148, UInt8_15, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 9:
            {
              int16_t Int16_16 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_int16_3_p_0(TypeClassInfo_for_output_148, Int16_16, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 10:
            {
              uint16_t UInt16_17 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_uint16_3_p_0(TypeClassInfo_for_output_148, UInt16_17, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 11:
            {
              int32_t Int32_18 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_int32_3_p_0(TypeClassInfo_for_output_148, Int32_18, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 12:
            {
              uint32_t UInt32_19 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_uint32_3_p_0(TypeClassInfo_for_output_148, UInt32_19, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 13:
            {
              int64_t Int64_20 = MR_unbox_int64((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_int64_3_p_0(TypeClassInfo_for_output_148, Int64_20, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 14:
            {
              uint64_t UInt64_21 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_uint64_3_p_0(TypeClassInfo_for_output_148, UInt64_21, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Float Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));

              parse_tree__parse_tree_out_info__add_float_3_p_0(TypeClassInfo_for_output_148, Float_22, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Char Char_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));
              MR_String Var_128;

              Var_128 = mercury__term_io__quoted_char_1_f_0(Char_23);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, Var_128, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String Str_24 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_quoted_string_3_p_0(TypeClassInfo_for_output_148, Str_24, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Box STATE_VARIABLE_U_125_125;
              MR_String Name_145 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "\044", STATE_VARIABLE_U_0_47, &STATE_VARIABLE_U_125_125);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, Name_145, STATE_VARIABLE_U_125_125, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));
              MR_String Type_30 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 2))));
              MR_Integer Arity_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 3))));
              MR_String ModuleString_32;
              MR_String ArityString_33;
              MR_Word Var_103;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_112;

              ModuleString_32 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_29);
              mercury__string__int_to_string_2_p_0(Arity_31, &ArityString_33);
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (ArityString_33));
                MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__mercury_to_mercury_scalar_common_1[2])));
              }
              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) ((MR_String) "/"));
                MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_112));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Type_30));
                MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) ((MR_String) "."));
                MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_109));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (ModuleString_32));
                MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_107));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) ((MR_String) "<type_ctor_info for "));
                MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_106));
              }
              parse_tree__parse_tree_out_info__add_strings_3_p_0(TypeClassInfo_for_output_148, Var_103, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ClassId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 2))));
              MR_Integer InstanceNum_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 3))));
              MR_String InstanceString_36 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 4))));
              MR_Word ClassName_37;
              MR_Integer ClassArity_38;
              MR_Box STATE_VARIABLE_U_82_82;
              MR_Box STATE_VARIABLE_U_84_84;
              MR_Box STATE_VARIABLE_U_85_85;
              MR_Box STATE_VARIABLE_U_87_87;
              MR_Box STATE_VARIABLE_U_88_88;
              MR_Box STATE_VARIABLE_U_90_90;
              MR_Box STATE_VARIABLE_U_92_92;
              MR_Word Var_97;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word ModuleName_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));
              MR_String ModuleString_147;

              ModuleString_147 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_146);
              ClassName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_34, (MR_Integer) 0))));
              ClassArity_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_34, (MR_Integer) 1))));
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "<base_typeclass_info for ", STATE_VARIABLE_U_0_47, &STATE_VARIABLE_U_82_82);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) "class_id(", STATE_VARIABLE_U_82_82, &STATE_VARIABLE_U_84_84);
              parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_148, ClassName_37, STATE_VARIABLE_U_84_84, &STATE_VARIABLE_U_85_85);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) ", ", STATE_VARIABLE_U_85_85, &STATE_VARIABLE_U_87_87);
              parse_tree__parse_tree_out_info__add_int_3_p_0(TypeClassInfo_for_output_148, ClassArity_38, STATE_VARIABLE_U_87_87, &STATE_VARIABLE_U_88_88);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) ")", STATE_VARIABLE_U_88_88, &STATE_VARIABLE_U_90_90);
              succeeded = (strcmp(ModuleString_147, (MR_String) "some bogus module name") == 0);
              succeeded = !(succeeded);
              if (succeeded)
              {
                MR_Word Var_91;
                MR_Word Var_94;

                {
                  Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (ModuleString_147));
                  MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) ((MR_String) " from module "));
                  MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
                }
                parse_tree__parse_tree_out_info__add_strings_3_p_0(TypeClassInfo_for_output_148, Var_91, STATE_VARIABLE_U_90_90, &STATE_VARIABLE_U_92_92);
              }
              else
                STATE_VARIABLE_U_92_92 = STATE_VARIABLE_U_90_90;
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (InstanceNum_35));
              }
              {
                Var_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_101, 0) = ((MR_Box) (InstanceString_36));
              }
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
                MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_100));
              }
              parse_tree__parse_tree_out_info__add_format_4_p_0(TypeClassInfo_for_output_148, (MR_String) ", instance number %d (%s)>", Var_97, STATE_VARIABLE_U_92_92, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Integer TIConstNum_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));
              MR_String Var_71;
              MR_String Var_74;
              MR_String Var_75;

              Var_75 = mercury__string__int_to_string_1_f_0(TIConstNum_40);
              Var_74 = mercury__string__f_43_43_2_f_0(Var_75, (MR_String) ">");
              Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "<type_info_cell_constructor ", Var_74);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, Var_71, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Integer TCIConstNum_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));
              MR_String Var_65;
              MR_String Var_68;
              MR_String Var_69;

              Var_69 = mercury__string__int_to_string_1_f_0(TCIConstNum_41);
              Var_68 = mercury__string__f_43_43_2_f_0(Var_69, (MR_String) ">");
              Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "<typeclass_info_cell_constructor ", Var_68);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, Var_65, STATE_VARIABLE_U_0_47, STATE_VARIABLE_U_48);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Integer ConstNum_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));
              MR_Word SubConsId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 2))));
              MR_String Var_55;
              MR_Box STATE_VARIABLE_U_56_56;
              MR_String Var_58;
              MR_String Var_59;
              MR_Box STATE_VARIABLE_U_62_62;

              Var_59 = mercury__string__int_to_string_1_f_0(ConstNum_42);
              Var_58 = mercury__string__f_43_43_2_f_0(Var_59, (MR_String) ", ");
              Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "<ground_term_cell_constructor ", Var_58);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, Var_55, STATE_VARIABLE_U_0_47, &STATE_VARIABLE_U_56_56);
              parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(TypeClassInfo_for_output_148, (MR_Integer) 1, SubConsId_43, STATE_VARIABLE_U_56_56, &STATE_VARIABLE_U_62_62);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_148, (MR_String) ">", STATE_VARIABLE_U_62_62, STATE_VARIABLE_U_48);
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(
  MR_Word TypeClassInfo_for_output_10,
  MR_Word SymName_4,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  {
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_10, (MR_Integer) 1, SymName_4, STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(
  MR_Word TypeClassInfo_for_output_10,
  MR_Word SymName_4,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  {
    parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(TypeClassInfo_for_output_10, (MR_Integer) 1, SymName_4, STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_sym_name_ngt_4_p_0(
  MR_Word TypeClassInfo_for_output_20,
  MR_Word NextToGraphicToken_5,
  MR_Word SymName_6,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_6, (MR_Integer) 0))));
    MR_String PredName_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_6, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_14_14;
    MR_Box STATE_VARIABLE_U_16_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_20, (MR_Integer) 0, ModuleName_8, STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_14_14);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_20, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_20)), ((MR_Box) ((MR_String) ".")), STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_16_16);
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(TypeClassInfo_for_output_20, (MR_Integer) 0, PredName_9, STATE_VARIABLE_U_16_16, STATE_VARIABLE_U_11);
  }
  else
  {
    MR_String PredName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_6, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_4_p_0(TypeClassInfo_for_output_20, NextToGraphicToken_5, PredName_19, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word NextToGraphicToken_5,
  MR_Word SymName_6,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_6, (MR_Integer) 0))));
    MR_String Name_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_6, (MR_Integer) 1))));
    MR_Box STATE_VARIABLE_U_14_14;
    MR_Box STATE_VARIABLE_U_16_16;
    MR_Box STATE_VARIABLE_U_18_18;
    MR_Box STATE_VARIABLE_U_20_20;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_14_14);
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_ngt_4_p_0(TypeClassInfo_for_output_24, (MR_Integer) 0, ModuleName_8, STATE_VARIABLE_U_14_14, &STATE_VARIABLE_U_16_16);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ".")), STATE_VARIABLE_U_16_16, &STATE_VARIABLE_U_18_18);
    parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_4_p_0(TypeClassInfo_for_output_24, (MR_Integer) 0, Name_9, STATE_VARIABLE_U_18_18, &STATE_VARIABLE_U_20_20);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_20_20, STATE_VARIABLE_U_11);
  }
  else
  {
    MR_String Name_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_6, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_4_p_0(TypeClassInfo_for_output_24, NextToGraphicToken_5, Name_23, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_state_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word StateVars_8)
{
  {
    MR_Word TypeInfo_20_20;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&parse_tree__mercury_to_mercury_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeInfo_for_T_15));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (VarSet_6));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (VarNamePrint_7));
    }
    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_15));
    }
    mercury__io__write_list_5_p_0(TypeInfo_20_20, (MR_Word) (StateVars_8), (MR_String) ", ", (MR_Word) (Var_13));
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_quantifier_to_string_3_f_0(
  MR_Word TypeVarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word ExistQVars_7)
{
  {
    MR_String String_8;
    MR_Box conv0_String_8;

    parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), TypeVarSet_5, VarNamePrint_6, ExistQVars_7, ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) (conv0_String_8));
    return String_8;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_quantifier_5_p_0(
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word ExistQVars_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), TypeVarSet_6, VarNamePrint_7, ExistQVars_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0(
  MR_Word TypeClassInfo_for_output_19,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word ExistQVars_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  if ((ExistQVars_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_13 = STATE_VARIABLE_U_0_12;
  else
  {
    MR_Box STATE_VARIABLE_U_15_15;
    MR_Box STATE_VARIABLE_U_16_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_19)), ((MR_Box) ((MR_String) "some [")), STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_15_15);
    parse_tree__parse_tree_out_term__mercury_format_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeClassInfo_for_output_19, TypeVarSet_6, VarNamePrint_7, ExistQVars_8, STATE_VARIABLE_U_15_15, &STATE_VARIABLE_U_16_16);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_19)), ((MR_Box) ((MR_String) "] ")), STATE_VARIABLE_U_16_16, STATE_VARIABLE_U_13);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_det_3_p_0(
  MR_Word TypeClassInfo_for_output_10,
  MR_Word Detism_4,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  {
    MR_String Var_8;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    Var_8 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Detism_4);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_10, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_10)), ((MR_Box) (Var_8)), STATE_VARIABLE_U_0_6, STATE_VARIABLE_U_7);
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(
  MR_Word Detism_4)
{
  {
    MR_String Var_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_UI_7;

    Var_14 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Detism_4);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) ((MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]))), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_UI_7);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&parse_tree__mercury_to_mercury_vector_common_2[0 + HeadVar__1_1]))->parse_tree__mercury_to_mercury__vector_common_type_2_0__vct_2_f_0;

    return HeadVar__2_2;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(
  MR_Word TypeClassInfo_for_output_15,
  MR_Word TypeVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Type_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  {
    MR_Word Term_10;
    MR_Word VarSet_11;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_8, &Term_10);
    VarSet_11 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeVarSet_6);
    parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeClassInfo_for_output_15, VarSet_11, VarNamePrint_7, Term_10, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(
  MR_Word VarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Type_7)
{
  {
    MR_String String_8;
    MR_Word Term_17;
    MR_Word VarSet_18;
    MR_Box conv0_String_8;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_7, &Term_17);
    VarSet_18 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5);
    parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), VarSet_18, VarNamePrint_6, Term_17, ((MR_Box) ((MR_String) "")), &conv0_String_8);
    String_8 = ((MR_String) (conv0_String_8));
    return String_8;
  }
}

void MR_CALL 
parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Type_8)
{
  {
    MR_Word Term_20;
    MR_Word VarSet_21;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_8, &Term_20);
    VarSet_21 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6);
    parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[0]), VarSet_21, VarNamePrint_7, Term_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Types_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String String0_9;
      MR_String String1_10;
      MR_Word Term_24;
      MR_Word VarSet_25;
      MR_Box conv0_String0_9;

      parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_6, &Term_24);
      VarSet_25 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1);
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), VarSet_25, (MR_Integer) 0, Term_24, ((MR_Box) ((MR_String) "")), &conv0_String0_9);
      String0_9 = ((MR_String) (conv0_String0_9));
      String1_10 = parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(VarSet_1, Types_7);
      mercury__string__append_3_p_2(String0_9, String1_10, &HeadVar__3_3);
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Types_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String String0_9;
      MR_String String1_10;
      MR_Word Var_12;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Term_29;
      MR_Word VarSet_30;
      MR_Box conv0_String0_9;

      parse_tree__parse_tree_to_term__unparse_type_2_p_0(Type_6, &Term_29);
      VarSet_30 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1);
      parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__mercury_to_mercury_scalar_common_1[1]), VarSet_30, (MR_Integer) 0, Term_29, ((MR_Box) ((MR_String) "")), &conv0_String0_9);
      String0_9 = ((MR_String) (conv0_String0_9));
      String1_10 = parse_tree__mercury_to_mercury__mercury_comma_type_list_to_string_2_f_0(VarSet_1, Types_7);
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (String1_10));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (String0_9));
        MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_15));
      }
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
      }
      mercury__string__append_list_2_p_0(Var_12, &HeadVar__3_3);
    }
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__mercury_to_mercury____Unify____needs_brackets_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__mercury_to_mercury____Compare____needs_brackets_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__mercury_to_mercury__init(void)
{
}

void mercury__parse_tree__mercury_to_mercury__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_needs_brackets_0);
}

void mercury__parse_tree__mercury_to_mercury__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__mercury_to_mercury__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.mercury_to_mercury.
