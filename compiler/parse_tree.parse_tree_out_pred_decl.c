/*
** Automatically generated from `parse_tree_out_pred_decl.m'
** by the Mercury compiler,
** version rotd-2023-02-11
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


// :- module parse_tree.parse_tree_out_pred_decl.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_pred_decl__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_pred_decl.mih"


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
#include "integer.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(
  MR_Word TypeClassInfo_for_output_56,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word ExistQVars_17,
  MR_Word FuncName_18,
  MR_Word Types_19,
  MR_Word RetType_20,
  MR_Word MaybeDet_21,
  MR_Word Purity_22,
  MR_Word Constraints_23,
  MR_String StartString_24,
  MR_String Separator_25,
  MR_Box S_26,
  MR_Box STATE_VARIABLE_U_0_33,
  MR_Box * STATE_VARIABLE_U_34);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0(
  MR_Word TypeClassInfo_for_output_68,
  MR_Word TypeVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word PredOrFunc_18,
  MR_Word ExistQVars_19,
  MR_Word PredName_20,
  MR_Word Types_21,
  MR_Word MaybeWithType_22,
  MR_Word MaybeDet_23,
  MR_Word Purity_24,
  MR_Word Constraints_25,
  MR_String StartString_26,
  MR_String Separator_27,
  MR_Box S_28,
  MR_Box STATE_VARIABLE_U_0_37,
  MR_Box * STATE_VARIABLE_U_38);


static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_2[1][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_3[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_4[1][10];




static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][3] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_2[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_3[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(
  MR_Word Lang_8,
  MR_Word VarSet_9,
  MR_Word FuncName_10,
  MR_Word Modes_11,
  MR_Word RetMode_12,
  MR_Word MaybeDet_13)
{
  MR_String String_14;
  MR_String STATE_VARIABLE_U_27_25;
  MR_String STATE_VARIABLE_U_30_27;
  MR_String STATE_VARIABLE_U_31_28;
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv8_STATE_VARIABLE_U_30_27;
  MR_Box conv9_STATE_VARIABLE_U_31_28;

  if ((Modes_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box conv0_STATE_VARIABLE_U_27_25;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), FuncName_10, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_27_25);
    STATE_VARIABLE_U_27_25 = ((MR_String) (conv0_STATE_VARIABLE_U_27_25));
  }
  else
  {
    MR_String STATE_VARIABLE_U_22_20;
    MR_String STATE_VARIABLE_U_24_22;
    MR_String STATE_VARIABLE_U_25_23;
    MR_Box conv1_STATE_VARIABLE_U_22_20;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_24_22;
    MR_Box conv4_STATE_VARIABLE_U_25_23;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_U_27_25;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), FuncName_10, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_22_20);
    STATE_VARIABLE_U_22_20 = ((MR_String) (conv1_STATE_VARIABLE_U_22_20));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_22_20)), &conv3_STATE_VARIABLE_U_24_22);
    STATE_VARIABLE_U_24_22 = ((MR_String) (conv3_STATE_VARIABLE_U_24_22));
    parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, Modes_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_22)), &conv4_STATE_VARIABLE_U_25_23);
    STATE_VARIABLE_U_25_23 = ((MR_String) (conv4_STATE_VARIABLE_U_25_23));
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_23)), &conv6_STATE_VARIABLE_U_27_25);
    STATE_VARIABLE_U_27_25 = ((MR_String) (conv6_STATE_VARIABLE_U_27_25));
  }
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_25)), &conv8_STATE_VARIABLE_U_30_27);
  STATE_VARIABLE_U_30_27 = ((MR_String) (conv8_STATE_VARIABLE_U_30_27));
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, RetMode_12, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_30_27)), &conv9_STATE_VARIABLE_U_31_28);
  STATE_VARIABLE_U_31_28 = ((MR_String) (conv9_STATE_VARIABLE_U_31_28));
  if ((MaybeDet_13 == (MR_Word) ((MR_Unsigned) 0U)))
    String_14 = STATE_VARIABLE_U_31_28;
  else
  {
    MR_Word Det_29 = ((MR_Word) ((MR_hl_field(1, MaybeDet_13, (MR_Integer) 0))));
    MR_String STATE_VARIABLE_U_12_31;
    MR_String Var_32;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv11_STATE_VARIABLE_U_12_31;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_String_14;

    func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_31_28)), &conv11_STATE_VARIABLE_U_12_31);
    STATE_VARIABLE_U_12_31 = ((MR_String) (conv11_STATE_VARIABLE_U_12_31));
    Var_32 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_29);
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) (Var_32)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_31)), &conv13_String_14);
    String_14 = ((MR_String) (conv13_String_14));
  }
  return String_14;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Word VarSet_12,
  MR_Word FuncName_13,
  MR_Word Modes_14,
  MR_Word RetMode_15,
  MR_Word MaybeDet_16)
{
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv8_STATE_VARIABLE_U_30_30;
  MR_Box conv9_STATE_VARIABLE_U_31_31;

  if ((Modes_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box conv0_STATE_VARIABLE_U_27_28;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), FuncName_13, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_27_28);
  }
  else
  {
    MR_Box conv1_STATE_VARIABLE_U_22_23;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_24_25;
    MR_Box conv4_STATE_VARIABLE_U_25_26;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_U_27_28;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), FuncName_13, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_22_23);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_24_25);
    parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, VarSet_12, Modes_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_25_26);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_27_28);
  }
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_30_30);
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, VarSet_12, RetMode_15, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_31_31);
  if (!((MaybeDet_16 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Det_32 = ((MR_Word) ((MR_hl_field(1, MaybeDet_16, (MR_Integer) 0))));
    MR_String Var_35;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv11_STATE_VARIABLE_U_12_34;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv13_STATE_VARIABLE_IO_19;

    func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_12_34);
    Var_35 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_32);
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) (Var_35)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_19);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word VarSet_8,
  MR_Word PredName_9,
  MR_Word Modes_10,
  MR_Word MaybeDet_11)
{
  MR_String String_12;
  MR_String STATE_VARIABLE_U_34_30;

  if ((Modes_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box conv0_STATE_VARIABLE_U_34_30;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), PredName_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_34_30);
    STATE_VARIABLE_U_34_30 = ((MR_String) (conv0_STATE_VARIABLE_U_34_30));
  }
  else
  {
    MR_String STATE_VARIABLE_U_23_20;
    MR_String STATE_VARIABLE_U_25_22;
    MR_String STATE_VARIABLE_U_26_23;
    MR_Box conv1_STATE_VARIABLE_U_23_20;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_25_22;
    MR_Box conv4_STATE_VARIABLE_U_26_23;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_U_34_30;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), PredName_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_23_20);
    STATE_VARIABLE_U_23_20 = ((MR_String) (conv1_STATE_VARIABLE_U_23_20));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_20)), &conv3_STATE_VARIABLE_U_25_22);
    STATE_VARIABLE_U_25_22 = ((MR_String) (conv3_STATE_VARIABLE_U_25_22));
    parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_7, VarSet_8, Modes_10, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_22)), &conv4_STATE_VARIABLE_U_26_23);
    STATE_VARIABLE_U_26_23 = ((MR_String) (conv4_STATE_VARIABLE_U_26_23));
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_26_23)), &conv6_STATE_VARIABLE_U_34_30);
    STATE_VARIABLE_U_34_30 = ((MR_String) (conv6_STATE_VARIABLE_U_34_30));
  }
  if ((MaybeDet_11 == (MR_Word) ((MR_Unsigned) 0U)))
    String_12 = STATE_VARIABLE_U_34_30;
  else
  {
    MR_Word Det_31 = ((MR_Word) ((MR_hl_field(1, MaybeDet_11, (MR_Integer) 0))));
    MR_String STATE_VARIABLE_U_12_33;
    MR_String Var_34;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv8_STATE_VARIABLE_U_12_33;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_String_12;

    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_34_30)), &conv8_STATE_VARIABLE_U_12_33);
    STATE_VARIABLE_U_12_33 = ((MR_String) (conv8_STATE_VARIABLE_U_12_33));
    Var_34 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_31);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) (Var_34)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_33)), &conv10_String_12);
    String_12 = ((MR_String) (conv10_String_12));
  }
  return String_12;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_8_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word VarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeDet_14)
{
  if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Box conv0_STATE_VARIABLE_U_34_33;

    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), PredName_12, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_34_33);
  }
  else
  {
    MR_Box conv1_STATE_VARIABLE_U_23_23;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_25_25;
    MR_Box conv4_STATE_VARIABLE_U_26_26;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv6_STATE_VARIABLE_U_34_33;

    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), PredName_12, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_23_23);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_25_25);
    parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_10, VarSet_11, Modes_13, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_26_26);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_34_33);
  }
  if (!((MaybeDet_14 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Det_34 = ((MR_Word) ((MR_hl_field(1, MaybeDet_14, (MR_Integer) 0))));
    MR_String Var_37;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv8_STATE_VARIABLE_U_12_36;
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv10_STATE_VARIABLE_IO_17;

    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_12_36);
    Var_37 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_34);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) (Var_37)), ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_17);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0(
  MR_Word Lang_8,
  MR_Word PredOrFunc_9,
  MR_Word InstVarSet_10,
  MR_Word Name_11,
  MR_Word Modes_12,
  MR_Word MaybeDet_13)
{
  MR_String String_14;

  switch (PredOrFunc_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_18;
        MR_Word RetMode_19;
        MR_String STATE_VARIABLE_U_27_29;
        MR_String STATE_VARIABLE_U_30_31;
        MR_String STATE_VARIABLE_U_31_32;
        MR_Box conv0_RetMode_19;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_U_30_31;
        MR_Box conv10_STATE_VARIABLE_U_31_32;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_12, &ArgModes_18, &conv0_RetMode_19);
        RetMode_19 = ((MR_Word) (conv0_RetMode_19));
        if ((ArgModes_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Box conv1_STATE_VARIABLE_U_27_29;

          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Name_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_27_29);
          STATE_VARIABLE_U_27_29 = ((MR_String) (conv1_STATE_VARIABLE_U_27_29));
        }
        else
        {
          MR_String STATE_VARIABLE_U_22_24;
          MR_String STATE_VARIABLE_U_24_26;
          MR_String STATE_VARIABLE_U_25_27;
          MR_Box conv2_STATE_VARIABLE_U_22_24;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv4_STATE_VARIABLE_U_24_26;
          MR_Box conv5_STATE_VARIABLE_U_25_27;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_U_27_29;

          parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Name_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv2_STATE_VARIABLE_U_22_24);
          STATE_VARIABLE_U_22_24 = ((MR_String) (conv2_STATE_VARIABLE_U_22_24));
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_22_24)), &conv4_STATE_VARIABLE_U_24_26);
          STATE_VARIABLE_U_24_26 = ((MR_String) (conv4_STATE_VARIABLE_U_24_26));
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, InstVarSet_10, ArgModes_18, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_26)), &conv5_STATE_VARIABLE_U_25_27);
          STATE_VARIABLE_U_25_27 = ((MR_String) (conv5_STATE_VARIABLE_U_25_27));
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_27)), &conv7_STATE_VARIABLE_U_27_29);
          STATE_VARIABLE_U_27_29 = ((MR_String) (conv7_STATE_VARIABLE_U_27_29));
        }
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_29)), &conv9_STATE_VARIABLE_U_30_31);
        STATE_VARIABLE_U_30_31 = ((MR_String) (conv9_STATE_VARIABLE_U_30_31));
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, InstVarSet_10, RetMode_19, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_30_31)), &conv10_STATE_VARIABLE_U_31_32);
        STATE_VARIABLE_U_31_32 = ((MR_String) (conv10_STATE_VARIABLE_U_31_32));
        if ((MaybeDet_13 == (MR_Word) ((MR_Unsigned) 0U)))
          String_14 = STATE_VARIABLE_U_31_32;
        else
        {
          MR_Word Det_33 = ((MR_Word) ((MR_hl_field(1, MaybeDet_13, (MR_Integer) 0))));
          MR_String STATE_VARIABLE_U_12_35;
          MR_String Var_36;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv12_STATE_VARIABLE_U_12_35;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv14_String_14;

          func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_31_32)), &conv12_STATE_VARIABLE_U_12_35);
          STATE_VARIABLE_U_12_35 = ((MR_String) (conv12_STATE_VARIABLE_U_12_35));
          Var_36 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_33);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) (Var_36)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_35)), &conv14_String_14);
          String_14 = ((MR_String) (conv14_String_14));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String STATE_VARIABLE_U_34_50;

        if ((Modes_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Box conv15_STATE_VARIABLE_U_34_50;

          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Name_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv15_STATE_VARIABLE_U_34_50);
          STATE_VARIABLE_U_34_50 = ((MR_String) (conv15_STATE_VARIABLE_U_34_50));
        }
        else
        {
          MR_String STATE_VARIABLE_U_23_40;
          MR_String STATE_VARIABLE_U_25_42;
          MR_String STATE_VARIABLE_U_26_43;
          MR_Box conv16_STATE_VARIABLE_U_23_40;
          void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv18_STATE_VARIABLE_U_25_42;
          MR_Box conv19_STATE_VARIABLE_U_26_43;
          void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv21_STATE_VARIABLE_U_34_50;

          parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Name_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv16_STATE_VARIABLE_U_23_40);
          STATE_VARIABLE_U_23_40 = ((MR_String) (conv16_STATE_VARIABLE_U_23_40));
          func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_40)), &conv18_STATE_VARIABLE_U_25_42);
          STATE_VARIABLE_U_25_42 = ((MR_String) (conv18_STATE_VARIABLE_U_25_42));
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, InstVarSet_10, Modes_12, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_42)), &conv19_STATE_VARIABLE_U_26_43);
          STATE_VARIABLE_U_26_43 = ((MR_String) (conv19_STATE_VARIABLE_U_26_43));
          func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_26_43)), &conv21_STATE_VARIABLE_U_34_50);
          STATE_VARIABLE_U_34_50 = ((MR_String) (conv21_STATE_VARIABLE_U_34_50));
        }
        if ((MaybeDet_13 == (MR_Word) ((MR_Unsigned) 0U)))
          String_14 = STATE_VARIABLE_U_34_50;
        else
        {
          MR_Word Det_51 = ((MR_Word) ((MR_hl_field(1, MaybeDet_13, (MR_Integer) 0))));
          MR_String STATE_VARIABLE_U_12_53;
          MR_String Var_54;
          void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv23_STATE_VARIABLE_U_12_53;
          void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv25_String_14;

          func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_34_50)), &conv23_STATE_VARIABLE_U_12_53);
          STATE_VARIABLE_U_12_53 = ((MR_String) (conv23_STATE_VARIABLE_U_12_53));
          Var_54 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_51);
          func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) (Var_54)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_53)), &conv25_String_14);
          String_14 = ((MR_String) (conv25_String_14));
        }
      }
      break;
  }
  return String_14;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_mode_subdecl_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Word PredOrFunc_12,
  MR_Word InstVarSet_13,
  MR_Word Name_14,
  MR_Word Modes_15,
  MR_Word MaybeDet_16)
{
  switch (PredOrFunc_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_21;
        MR_Word RetMode_22;
        MR_Box conv0_RetMode_22;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_U_30_34;
        MR_Box conv10_STATE_VARIABLE_U_31_35;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_21, &conv0_RetMode_22);
        RetMode_22 = ((MR_Word) (conv0_RetMode_22));
        if ((ArgModes_21 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Box conv1_STATE_VARIABLE_U_27_32;

          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Name_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_27_32);
        }
        else
        {
          MR_Box conv2_STATE_VARIABLE_U_22_27;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv4_STATE_VARIABLE_U_24_29;
          MR_Box conv5_STATE_VARIABLE_U_25_30;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_U_27_32;

          parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Name_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_22_27);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_24_29);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, InstVarSet_13, ArgModes_21, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_25_30);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_27_32);
        }
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_30_34);
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, InstVarSet_13, RetMode_22, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_31_35);
        if (!((MaybeDet_16 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Det_36 = ((MR_Word) ((MR_hl_field(1, MaybeDet_16, (MR_Integer) 0))));
          MR_String Var_39;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv12_STATE_VARIABLE_U_12_38;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv14_STATE_VARIABLE_IO_19;

          func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_12_38);
          Var_39 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_36);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) (Var_39)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_19);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Box conv15_STATE_VARIABLE_U_34_53;

          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Name_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_U_34_53);
        }
        else
        {
          MR_Box conv16_STATE_VARIABLE_U_23_43;
          void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv18_STATE_VARIABLE_U_25_45;
          MR_Box conv19_STATE_VARIABLE_U_26_46;
          void MR_CALL (* func_20)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv21_STATE_VARIABLE_U_34_53;

          parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Name_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_U_23_43);
          func_17 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_17(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_U_25_45);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, InstVarSet_13, Modes_15, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_U_26_46);
          func_20 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_20(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_U_34_53);
        }
        if (!((MaybeDet_16 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Det_54 = ((MR_Word) ((MR_hl_field(1, MaybeDet_16, (MR_Integer) 0))));
          MR_String Var_57;
          void MR_CALL (* func_22)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv23_STATE_VARIABLE_U_12_56;
          void MR_CALL (* func_24)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv25_STATE_VARIABLE_IO_19;

          func_22(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv23_STATE_VARIABLE_U_12_56);
          Var_57 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_54);
          func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_24(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) (Var_57)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_19);
        }
      }
      break;
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_mode_decl_to_string_6_f_0(
  MR_Word Lang_8,
  MR_Word VarSet_9,
  MR_Word FuncName_10,
  MR_Word Modes_11,
  MR_Word RetMode_12,
  MR_Word MaybeDet_13)
{
  MR_String String_14;
  MR_Box conv0_String_14;

  parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, FuncName_10, Modes_11, RetMode_12, MaybeDet_13, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_14);
  String_14 = ((MR_String) (conv0_String_14));
  return String_14;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Word VarSet_12,
  MR_Word FuncName_13,
  MR_Word Modes_14,
  MR_Word RetMode_15,
  MR_Word MaybeDet_16)
{
  MR_Box conv0_STATE_VARIABLE_IO_19;

  parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, VarSet_12, FuncName_13, Modes_14, RetMode_15, MaybeDet_16, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_decl_to_string_6_f_0(
  MR_Word Lang_8,
  MR_Word VarSet_9,
  MR_Word PredName_10,
  MR_Word Modes_11,
  MR_Word MaybeWithInst_12,
  MR_Word MaybeDet_13)
{
  MR_String String_14;
  MR_Box conv0_String_14;

  parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, PredName_10, Modes_11, MaybeWithInst_12, MaybeDet_13, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_14);
  String_14 = ((MR_String) (conv0_String_14));
  return String_14;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_9_p_0(
  MR_Word Stream_10,
  MR_Word Lang_11,
  MR_Word VarSet_12,
  MR_Word PredName_13,
  MR_Word Modes_14,
  MR_Word WithInst_15,
  MR_Word MaybeDet_16)
{
  MR_Box conv0_STATE_VARIABLE_IO_19;

  parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, VarSet_12, PredName_13, Modes_14, WithInst_15, MaybeDet_16, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(
  MR_Word TypeVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word ExistQVars_13,
  MR_Word FuncName_14,
  MR_Word ArgTypes_15,
  MR_Word RetType_16,
  MR_Word MaybeDet_17,
  MR_Word Purity_18,
  MR_Word ClassContext_19)
{
  MR_String String_20;
  MR_Box conv0_String_20;

  parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), TypeVarSet_11, VarNamePrint_12, ExistQVars_13, FuncName_14, ArgTypes_15, RetType_16, MaybeDet_17, Purity_18, ClassContext_19, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_20);
  String_20 = ((MR_String) (conv0_String_20));
  return String_20;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_12_p_0(
  MR_Word Stream_13,
  MR_Word VarSet_14,
  MR_Word ExistQVars_15,
  MR_Word FuncName_16,
  MR_Word ArgTypes_17,
  MR_Word RetType_18,
  MR_Word MaybeDet_19,
  MR_Word Purity_20,
  MR_Word ClassContext_21,
  MR_Word VarNamePrint_22)
{
  MR_Box conv0_STATE_VARIABLE_IO_25;

  parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), VarSet_14, ExistQVars_15, FuncName_16, ArgTypes_17, RetType_18, MaybeDet_19, Purity_20, ClassContext_21, VarNamePrint_22, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) (Stream_13)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_type_to_string_8_f_0(
  MR_Word TypeVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word ExistQVars_12,
  MR_Word PredName_13,
  MR_Word Types_14,
  MR_Word MaybeDet_15,
  MR_Word Purity_16,
  MR_Word ClassContext_17)
{
  MR_String String_18;
  MR_Box conv0_String_18;

  parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), TypeVarSet_10, VarNamePrint_11, (MR_Integer) 0, ExistQVars_12, PredName_13, Types_14, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_15, Purity_16, ClassContext_17, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_18);
  String_18 = ((MR_String) (conv0_String_18));
  return String_18;
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_11_p_0(
  MR_Word Stream_12,
  MR_Word TypeVarSet_13,
  MR_Word VarNamePrint_14,
  MR_Word ExistQVars_15,
  MR_Word PredName_16,
  MR_Word Types_17,
  MR_Word MaybeDet_18,
  MR_Word Purity_19,
  MR_Word ClassContext_20)
{
  MR_Box conv0_STATE_VARIABLE_IO_23;

  parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), TypeVarSet_13, VarNamePrint_14, (MR_Integer) 0, ExistQVars_15, PredName_16, Types_17, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_18, Purity_19, ClassContext_20, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_17_p_0(
  MR_Word TypeClassInfo_for_output_44,
  MR_Word Lang_18,
  MR_Word VarNamePrint_19,
  MR_Word TypeVarSet_20,
  MR_Word InstVarSet_21,
  MR_Word ExistQVars_22,
  MR_Word FuncName_23,
  MR_Word TypesAndModes_24,
  MR_Word RetTypeAndMode_25,
  MR_Word MaybeDet_26,
  MR_Word Purity_27,
  MR_Word ClassContext_28,
  MR_String StartString_29,
  MR_String Separator_30,
  MR_String Terminator_31,
  MR_Box S_32,
  MR_Box STATE_VARIABLE_U_0_40,
  MR_Box * STATE_VARIABLE_U_41)
{
  MR_bool succeeded;
  MR_Word Types_34;
  MR_Word MaybeModes_35;
  MR_Word RetType_36;
  MR_Word MaybeRetMode_37;
  MR_Word Modes_38;
  MR_Word RetMode_39;

  parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_24, &Types_34, &MaybeModes_35);
  parse_tree__prog_util__split_type_and_mode_3_p_0(RetTypeAndMode_25, &RetType_36, &MaybeRetMode_37);
  succeeded = (MaybeModes_35 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Modes_38 = ((MR_Word) ((MR_hl_field(1, MaybeModes_35, (MR_Integer) 0))));
    succeeded = (MaybeRetMode_37 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      RetMode_39 = ((MR_Word) ((MR_hl_field(1, MaybeRetMode_37, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_U_43_43;

    parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(TypeClassInfo_for_output_44, TypeVarSet_20, VarNamePrint_19, ExistQVars_22, FuncName_23, Types_34, RetType_36, (MR_Word) ((MR_Unsigned) 0U), Purity_27, ClassContext_28, StartString_29, Separator_30, S_32, STATE_VARIABLE_U_0_40, &STATE_VARIABLE_U_43_43);
    parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0(TypeClassInfo_for_output_44, Lang_18, InstVarSet_21, FuncName_23, Modes_38, RetMode_39, MaybeDet_26, StartString_29, Terminator_31, S_32, STATE_VARIABLE_U_43_43, STATE_VARIABLE_U_41);
  }
  else
    parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(TypeClassInfo_for_output_44, TypeVarSet_20, VarNamePrint_19, ExistQVars_22, FuncName_23, Types_34, RetType_36, MaybeDet_26, Purity_27, ClassContext_28, StartString_29, Terminator_31, S_32, STATE_VARIABLE_U_0_40, STATE_VARIABLE_U_41);
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(
  MR_Word TypeClassInfo_for_output_56,
  MR_Word VarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word ExistQVars_17,
  MR_Word FuncName_18,
  MR_Word Types_19,
  MR_Word RetType_20,
  MR_Word MaybeDet_21,
  MR_Word Purity_22,
  MR_Word Constraints_23,
  MR_String StartString_24,
  MR_String Separator_25,
  MR_Box S_26,
  MR_Box STATE_VARIABLE_U_0_33,
  MR_Box * STATE_VARIABLE_U_34)
{
  MR_bool succeeded;
  MR_Word UnivConstraints_28;
  MR_Word ExistConstraints_29;
  MR_Word MaybeExistConstraints_30;
  MR_Box STATE_VARIABLE_U_35_35;
  MR_Box STATE_VARIABLE_U_36_36;
  MR_Box STATE_VARIABLE_U_38_38;
  MR_Box STATE_VARIABLE_U_39_39;
  MR_Box STATE_VARIABLE_U_41_41;
  MR_Box STATE_VARIABLE_U_49_49;
  MR_Box STATE_VARIABLE_U_52_52;
  MR_Box STATE_VARIABLE_U_53_53;
  MR_Box STATE_VARIABLE_U_54_54;
  MR_Box STATE_VARIABLE_U_55_55;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) (StartString_24)), S_26, STATE_VARIABLE_U_0_33, &STATE_VARIABLE_U_35_35);
  parse_tree__mercury_to_mercury__mercury_format_quantifier_6_p_0(TypeClassInfo_for_output_56, VarSet_15, VarNamePrint_16, ExistQVars_17, S_26, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_36_36);
  UnivConstraints_28 = ((MR_Word) ((MR_hl_field(0, Constraints_23, (MR_Integer) 0))));
  ExistConstraints_29 = ((MR_Word) ((MR_hl_field(0, Constraints_23, (MR_Integer) 1))));
  succeeded = (ExistQVars_17 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MaybeExistConstraints_30 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_U_38_38 = STATE_VARIABLE_U_36_36;
  }
  else
  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      MaybeExistConstraints_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeExistConstraints_30, 0) = ((MR_Box) (ExistConstraints_29));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "(")), S_26, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
  }
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 19))));
  func_2(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) (Purity_22)), S_26, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
  func_3(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "func ")), S_26, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
  if ((Types_19 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_56, FuncName_18, S_26, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_49_49);
  else
  {
    MR_Box STATE_VARIABLE_U_42_42;
    MR_Box STATE_VARIABLE_U_44_44;
    MR_Word Var_45;
    MR_Box STATE_VARIABLE_U_47_47;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_56, FuncName_18, S_26, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_42_42);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "(")), S_26, STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_44_44);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_4[0]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (TypeClassInfo_for_output_56));
      MR_hl_field(0, Var_45, 4) = ((MR_Box) (VarSet_15));
      MR_hl_field(0, Var_45, 5) = ((MR_Box) (VarNamePrint_16));
    }
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 26))));
    func_5(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_45)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_19)), S_26, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_47_47);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) ")")), S_26, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_49_49);
  }
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
  func_7(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) " = ")), S_26, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_52_52);
  parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_56, VarSet_15, VarNamePrint_16, RetType_20, S_26, STATE_VARIABLE_U_52_52, &STATE_VARIABLE_U_53_53);
  if ((MaybeDet_21 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_54_54 = STATE_VARIABLE_U_53_53;
  else
  {
    MR_Word Det_62 = ((MR_Word) ((MR_hl_field(1, MaybeDet_21, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_12_64;
    MR_String Var_65;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_8(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) " is ")), S_26, STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_12_64);
    Var_65 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_62);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) (Var_65)), S_26, STATE_VARIABLE_U_12_64, &STATE_VARIABLE_U_54_54);
  }
  parse_tree__mercury_to_mercury__mercury_format_class_context_7_p_0(TypeClassInfo_for_output_56, VarSet_15, VarNamePrint_16, UnivConstraints_28, MaybeExistConstraints_30, S_26, STATE_VARIABLE_U_54_54, &STATE_VARIABLE_U_55_55);
  func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
  func_10(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) (Separator_25)), S_26, STATE_VARIABLE_U_55_55, STATE_VARIABLE_U_34);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0(
  MR_Word TypeClassInfo_for_output_28,
  MR_Word Lang_12,
  MR_Word VarSet_13,
  MR_Word FuncName_14,
  MR_Word Modes_15,
  MR_Word RetMode_16,
  MR_Word MaybeDet_17,
  MR_String StartString_18,
  MR_String Separator_19,
  MR_Box S_20,
  MR_Box STATE_VARIABLE_U_0_22,
  MR_Box * STATE_VARIABLE_U_23)
{
  MR_Box STATE_VARIABLE_U_24_24;
  MR_Box STATE_VARIABLE_U_26_26;
  MR_Box STATE_VARIABLE_U_27_27;
  MR_Box STATE_VARIABLE_U_27_36;
  MR_Box STATE_VARIABLE_U_30_38;
  MR_Box STATE_VARIABLE_U_31_39;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (StartString_18)), S_20, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_24_24);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) "mode ")), S_20, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
  if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_28, FuncName_14, S_20, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_36);
  else
  {
    MR_Box STATE_VARIABLE_U_22_31;
    MR_Box STATE_VARIABLE_U_24_33;
    MR_Box STATE_VARIABLE_U_25_34;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_28, FuncName_14, S_20, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_22_31);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) "(")), S_20, STATE_VARIABLE_U_22_31, &STATE_VARIABLE_U_24_33);
    parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_28, Lang_12, VarSet_13, Modes_15, S_20, STATE_VARIABLE_U_24_33, &STATE_VARIABLE_U_25_34);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) ")")), S_20, STATE_VARIABLE_U_25_34, &STATE_VARIABLE_U_27_36);
  }
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
  func_4(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) " = ")), S_20, STATE_VARIABLE_U_27_36, &STATE_VARIABLE_U_30_38);
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_28, Lang_12, VarSet_13, RetMode_16, S_20, STATE_VARIABLE_U_30_38, &STATE_VARIABLE_U_31_39);
  if ((MaybeDet_17 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_27_27 = STATE_VARIABLE_U_31_39;
  else
  {
    MR_Word Det_40 = ((MR_Word) ((MR_hl_field(1, MaybeDet_17, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_12_42;
    MR_String Var_43;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_5(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) " is ")), S_20, STATE_VARIABLE_U_31_39, &STATE_VARIABLE_U_12_42);
    Var_43 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_40);
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_6(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (Var_43)), S_20, STATE_VARIABLE_U_12_42, &STATE_VARIABLE_U_27_27);
  }
  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
  func_7(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (Separator_19)), S_20, STATE_VARIABLE_U_27_27, STATE_VARIABLE_U_23);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_19_p_0(
  MR_Word TypeClassInfo_for_output_48,
  MR_Word Lang_20,
  MR_Word VarNamePrint_21,
  MR_Word TypeVarSet_22,
  MR_Word InstVarSet_23,
  MR_Word PredOrFunc_24,
  MR_Word ExistQVars_25,
  MR_Word PredName_26,
  MR_Word TypesAndModes_27,
  MR_Word WithType_28,
  MR_Word WithInst_29,
  MR_Word MaybeDet_30,
  MR_Word Purity_31,
  MR_Word ClassContext_32,
  MR_String StartString_33,
  MR_String Separator_34,
  MR_String Terminator_35,
  MR_Box S_36,
  MR_Box STATE_VARIABLE_U_0_44,
  MR_Box * STATE_VARIABLE_U_45)
{
  MR_bool succeeded;
  MR_Word Types_38;
  MR_Word MaybeModes_39;
  MR_Word Modes_40;

  parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_27, &Types_38, &MaybeModes_39);
  succeeded = (MaybeModes_39 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Modes_40 = ((MR_Word) ((MR_hl_field(1, MaybeModes_39, (MR_Integer) 0))));
    succeeded = (Modes_40 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (WithInst_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
  }
  if (succeeded)
  {
    MR_Box STATE_VARIABLE_U_47_47;

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0(TypeClassInfo_for_output_48, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, WithType_28, (MR_Word) ((MR_Unsigned) 0U), Purity_31, ClassContext_32, StartString_33, Separator_34, S_36, STATE_VARIABLE_U_0_44, &STATE_VARIABLE_U_47_47);
    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0(TypeClassInfo_for_output_48, Lang_20, InstVarSet_23, PredName_26, Modes_40, WithInst_29, MaybeDet_30, StartString_33, Terminator_35, S_36, STATE_VARIABLE_U_47_47, STATE_VARIABLE_U_45);
  }
  else
    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0(TypeClassInfo_for_output_48, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, WithType_28, MaybeDet_30, Purity_31, ClassContext_32, StartString_33, Terminator_35, S_36, STATE_VARIABLE_U_0_44, STATE_VARIABLE_U_45);
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0(
  MR_Word TypeClassInfo_for_output_68,
  MR_Word TypeVarSet_16,
  MR_Word VarNamePrint_17,
  MR_Word PredOrFunc_18,
  MR_Word ExistQVars_19,
  MR_Word PredName_20,
  MR_Word Types_21,
  MR_Word MaybeWithType_22,
  MR_Word MaybeDet_23,
  MR_Word Purity_24,
  MR_Word Constraints_25,
  MR_String StartString_26,
  MR_String Separator_27,
  MR_Box S_28,
  MR_Box STATE_VARIABLE_U_0_37,
  MR_Box * STATE_VARIABLE_U_38)
{
  MR_bool succeeded;
  MR_Word UnivConstraints_30;
  MR_Word ExistConstraints_31;
  MR_Word MaybeExistConstraints_32;
  MR_String PredOrFuncStr_33;
  MR_Box STATE_VARIABLE_U_39_39;
  MR_Box STATE_VARIABLE_U_40_40;
  MR_Box STATE_VARIABLE_U_42_42;
  MR_Box STATE_VARIABLE_U_43_43;
  MR_Box STATE_VARIABLE_U_44_44;
  MR_Box STATE_VARIABLE_U_46_46;
  MR_Box STATE_VARIABLE_U_54_54;
  MR_Box STATE_VARIABLE_U_60_60;
  MR_Box STATE_VARIABLE_U_64_64;
  MR_Box STATE_VARIABLE_U_67_67;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Word TypeCtorInfo_74_74;
  MR_String Var_61;
  MR_Integer Var_62;
  MR_Integer Var_75;
  void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) (StartString_26)), S_28, STATE_VARIABLE_U_0_37, &STATE_VARIABLE_U_39_39);
  parse_tree__mercury_to_mercury__mercury_format_quantifier_6_p_0(TypeClassInfo_for_output_68, TypeVarSet_16, VarNamePrint_17, ExistQVars_19, S_28, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_40_40);
  UnivConstraints_30 = ((MR_Word) ((MR_hl_field(0, Constraints_25, (MR_Integer) 0))));
  ExistConstraints_31 = ((MR_Word) ((MR_hl_field(0, Constraints_25, (MR_Integer) 1))));
  succeeded = (ExistQVars_19 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExistConstraints_31 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MaybeExistConstraints_32 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_U_42_42 = STATE_VARIABLE_U_40_40;
  }
  else
  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      MaybeExistConstraints_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeExistConstraints_32, 0) = ((MR_Box) (ExistConstraints_31));
    }
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) ((MR_String) "(")), S_28, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_42_42);
  }
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 19))));
  func_2(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) (Purity_24)), S_28, STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_43_43);
  PredOrFuncStr_33 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_18);
  func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
  func_3(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) (PredOrFuncStr_33)), S_28, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_44_44);
  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
  func_4(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) ((MR_String) " ")), S_28, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_46_46);
  if ((Types_21 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_68, PredName_20, S_28, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_54_54);
  else
  {
    MR_Box STATE_VARIABLE_U_47_47;
    MR_Box STATE_VARIABLE_U_49_49;
    MR_Word Var_50;
    MR_Box STATE_VARIABLE_U_52_52;
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_68, PredName_20, S_28, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_47_47);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) ((MR_String) "(")), S_28, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_49_49);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_4[0]));
      MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0_1));
      MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_50, 3) = ((MR_Box) (TypeClassInfo_for_output_68));
      MR_hl_field(0, Var_50, 4) = ((MR_Box) (TypeVarSet_16));
      MR_hl_field(0, Var_50, 5) = ((MR_Box) (VarNamePrint_17));
    }
    func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 26))));
    func_6(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_50)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_21)), S_28, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_52_52);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) ((MR_String) ")")), S_28, STATE_VARIABLE_U_52_52, &STATE_VARIABLE_U_54_54);
  }
  if ((MaybeWithType_22 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_60_60 = STATE_VARIABLE_U_54_54;
  else
  {
    MR_Word WithType_36 = ((MR_Word) ((MR_hl_field(1, MaybeWithType_22, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_57_57;
    MR_Box STATE_VARIABLE_U_58_58;
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_8(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) ((MR_String) " \140with_type\140 (")), S_28, STATE_VARIABLE_U_54_54, &STATE_VARIABLE_U_57_57);
    parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_68, TypeVarSet_16, VarNamePrint_17, WithType_36, S_28, STATE_VARIABLE_U_57_57, &STATE_VARIABLE_U_58_58);
    func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
    func_9(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) ((MR_String) ")")), S_28, STATE_VARIABLE_U_58_58, &STATE_VARIABLE_U_60_60);
  }
  succeeded = (PredOrFunc_18 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (MaybeDet_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_61 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_20);
      succeeded = (strcmp(Var_61, (MR_String) "is") == 0);
      if (succeeded)
      {
        Var_62 = (MR_Integer) 2;
        TypeCtorInfo_74_74 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        mercury__list__length_2_p_0(TypeCtorInfo_74_74, Types_21, &Var_75);
        succeeded = (Var_62 == Var_75);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Det_76 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &parse_tree__parse_tree_out_pred_decl_scalar_common_2[0])), (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_12_78;
    MR_String Var_79;
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_10(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) ((MR_String) " is ")), S_28, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_12_78);
    Var_79 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_76);
    func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
    func_11(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) (Var_79)), S_28, STATE_VARIABLE_U_12_78, &STATE_VARIABLE_U_64_64);
  }
  else
  if ((MaybeDet_23 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_64_64 = STATE_VARIABLE_U_60_60;
  else
  {
    MR_Word Det_80 = ((MR_Word) ((MR_hl_field(1, MaybeDet_23, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_12_82;
    MR_String Var_83;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_12(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) ((MR_String) " is ")), S_28, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_12_82);
    Var_83 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_80);
    func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
    func_13(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) (Var_83)), S_28, STATE_VARIABLE_U_12_82, &STATE_VARIABLE_U_64_64);
  }
  parse_tree__mercury_to_mercury__mercury_format_class_context_7_p_0(TypeClassInfo_for_output_68, TypeVarSet_16, VarNamePrint_17, UnivConstraints_30, MaybeExistConstraints_32, S_28, STATE_VARIABLE_U_64_64, &STATE_VARIABLE_U_67_67);
  func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_68, (MR_Integer) 0)), (MR_Integer) 5))));
  func_14(((MR_Box) (TypeClassInfo_for_output_68)), ((MR_Box) (Separator_27)), S_28, STATE_VARIABLE_U_67_67, STATE_VARIABLE_U_38);
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0(
  MR_Word TypeClassInfo_for_output_28,
  MR_Word Lang_12,
  MR_Word VarSet_13,
  MR_Word PredName_14,
  MR_Word Modes_15,
  MR_Word WithInst_16,
  MR_Word MaybeDet_17,
  MR_String StartString_18,
  MR_String Separator_19,
  MR_Box S_20,
  MR_Box STATE_VARIABLE_U_0_22,
  MR_Box * STATE_VARIABLE_U_23)
{
  MR_Box STATE_VARIABLE_U_24_24;
  MR_Box STATE_VARIABLE_U_26_26;
  MR_Box STATE_VARIABLE_U_27_27;
  MR_Box STATE_VARIABLE_U_28_37;
  MR_Box STATE_VARIABLE_U_34_42;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  func_0(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (StartString_18)), S_20, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_24_24);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) "mode ")), S_20, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
  if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_28, PredName_14, S_20, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_37);
  else
  {
    MR_Box STATE_VARIABLE_U_23_32;
    MR_Box STATE_VARIABLE_U_25_34;
    MR_Box STATE_VARIABLE_U_26_35;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_28, PredName_14, S_20, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_23_32);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_2(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) "(")), S_20, STATE_VARIABLE_U_23_32, &STATE_VARIABLE_U_25_34);
    parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_28, Lang_12, VarSet_13, Modes_15, S_20, STATE_VARIABLE_U_25_34, &STATE_VARIABLE_U_26_35);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) ")")), S_20, STATE_VARIABLE_U_26_35, &STATE_VARIABLE_U_28_37);
  }
  if ((WithInst_16 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_34_42 = STATE_VARIABLE_U_28_37;
  else
  {
    MR_Word WithInst_31 = ((MR_Word) ((MR_hl_field(1, WithInst_16, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_31_39;
    MR_Box STATE_VARIABLE_U_32_40;
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_4(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) " \140with_inst\140 (")), S_20, STATE_VARIABLE_U_28_37, &STATE_VARIABLE_U_31_39);
    parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_28, Lang_12, VarSet_13, WithInst_31, S_20, STATE_VARIABLE_U_31_39, &STATE_VARIABLE_U_32_40);
    func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_5(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) ")")), S_20, STATE_VARIABLE_U_32_40, &STATE_VARIABLE_U_34_42);
  }
  if ((MaybeDet_17 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_U_27_27 = STATE_VARIABLE_U_34_42;
  else
  {
    MR_Word Det_43 = ((MR_Word) ((MR_hl_field(1, MaybeDet_17, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_12_45;
    MR_String Var_46;
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_6(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) ((MR_String) " is ")), S_20, STATE_VARIABLE_U_34_42, &STATE_VARIABLE_U_12_45);
    Var_46 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_43);
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (Var_46)), S_20, STATE_VARIABLE_U_12_45, &STATE_VARIABLE_U_27_27);
  }
  func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_output_28, (MR_Integer) 0)), (MR_Integer) 5))));
  func_8(((MR_Box) (TypeClassInfo_for_output_28)), ((MR_Box) (Separator_19)), S_20, STATE_VARIABLE_U_27_27, STATE_VARIABLE_U_23);
}

void mercury__parse_tree__parse_tree_out_pred_decl__init(void)
{
}

void mercury__parse_tree__parse_tree_out_pred_decl__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_pred_decl__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_pred_decl__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_pred_decl.
