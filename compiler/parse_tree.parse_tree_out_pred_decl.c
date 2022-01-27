/*
** Automatically generated from `parse_tree_out_pred_decl.m'
** by the Mercury compiler,
** version rotd-2021-02-21
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
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_9_p_0(
  MR_Word TypeClassInfo_for_output_36,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeWithInst_14,
  MR_Word MaybeDet_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_21,
  MR_Box * STATE_VARIABLE_U_22);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(
  MR_Word TypeClassInfo_for_output_57,
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
  MR_Word TypeClassInfo_for_output_69,
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

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_det_annotation_4_p_0(
  MR_Word TypeClassInfo_for_output_15,
  MR_Word MaybeDet_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10);


static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_2[1][1];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_3[1][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_4[1][10];




static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__unit__unit__arity0__string__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_3[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_4[1][10] = {
  /* row 0 */
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
  {
    MR_String String_14;
    MR_String STATE_VARIABLE_U_28_36;
    MR_String STATE_VARIABLE_U_30_38;
    MR_String STATE_VARIABLE_U_31_39;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_30_38;
    MR_Box conv9_STATE_VARIABLE_U_31_39;

    if ((Modes_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_STATE_VARIABLE_U_28_36;

      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), FuncName_10, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_28_36);
      STATE_VARIABLE_U_28_36 = ((MR_String) (conv0_STATE_VARIABLE_U_28_36));
    }
    else
    {
      MR_String STATE_VARIABLE_U_23_31;
      MR_String STATE_VARIABLE_U_25_33;
      MR_String STATE_VARIABLE_U_26_34;
      MR_Box conv1_STATE_VARIABLE_U_23_31;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_25_33;
      MR_Box conv4_STATE_VARIABLE_U_26_34;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_28_36;

      parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), FuncName_10, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_23_31);
      STATE_VARIABLE_U_23_31 = ((MR_String) (conv1_STATE_VARIABLE_U_23_31));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_31)), &conv3_STATE_VARIABLE_U_25_33);
      STATE_VARIABLE_U_25_33 = ((MR_String) (conv3_STATE_VARIABLE_U_25_33));
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, Modes_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_33)), &conv4_STATE_VARIABLE_U_26_34);
      STATE_VARIABLE_U_26_34 = ((MR_String) (conv4_STATE_VARIABLE_U_26_34));
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_26_34)), &conv6_STATE_VARIABLE_U_28_36);
      STATE_VARIABLE_U_28_36 = ((MR_String) (conv6_STATE_VARIABLE_U_28_36));
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_28_36)), &conv8_STATE_VARIABLE_U_30_38);
    STATE_VARIABLE_U_30_38 = ((MR_String) (conv8_STATE_VARIABLE_U_30_38));
    parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, RetMode_12, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_30_38)), &conv9_STATE_VARIABLE_U_31_39);
    STATE_VARIABLE_U_31_39 = ((MR_String) (conv9_STATE_VARIABLE_U_31_39));
    if ((MaybeDet_13 == (MR_Word) ((MR_Unsigned) 0U)))
      String_14 = STATE_VARIABLE_U_31_39;
    else
    {
      MR_Word Det_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_13, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_12_48;
      MR_String Var_49;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv11_STATE_VARIABLE_U_12_48;
      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv13_String_14;

      func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_31_39)), &conv11_STATE_VARIABLE_U_12_48);
      STATE_VARIABLE_U_12_48 = ((MR_String) (conv11_STATE_VARIABLE_U_12_48));
      Var_49 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_46);
      func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) (Var_49)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_48)), &conv13_String_14);
      String_14 = ((MR_String) (conv13_String_14));
    }
    return String_14;
  }
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
  {
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_30_42;
    MR_Box conv9_STATE_VARIABLE_U_31_43;

    if ((Modes_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_STATE_VARIABLE_U_28_40;

      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), FuncName_13, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_28_40);
    }
    else
    {
      MR_Box conv1_STATE_VARIABLE_U_23_35;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_25_37;
      MR_Box conv4_STATE_VARIABLE_U_26_38;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_28_40;

      parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), FuncName_13, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_23_35);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_25_37);
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, VarSet_12, Modes_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_26_38);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_28_40);
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_30_42);
    parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, VarSet_12, RetMode_15, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_31_43);
    if (!((MaybeDet_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Det_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_16, (MR_Integer) 0))));
      MR_String Var_53;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv11_STATE_VARIABLE_U_12_52;
      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv13_STATE_VARIABLE_IO_19;

      func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_12_52);
      Var_53 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_50);
      func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) (Var_53)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_19);
    }
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
  {
    MR_String String_12;
    MR_String STATE_VARIABLE_U_34_41;

    if ((Modes_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_STATE_VARIABLE_U_34_41;

      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), PredName_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_34_41);
      STATE_VARIABLE_U_34_41 = ((MR_String) (conv0_STATE_VARIABLE_U_34_41));
    }
    else
    {
      MR_String STATE_VARIABLE_U_24_31;
      MR_String STATE_VARIABLE_U_26_33;
      MR_String STATE_VARIABLE_U_27_34;
      MR_Box conv1_STATE_VARIABLE_U_24_31;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_26_33;
      MR_Box conv4_STATE_VARIABLE_U_27_34;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_34_41;

      parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), PredName_9, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_24_31);
      STATE_VARIABLE_U_24_31 = ((MR_String) (conv1_STATE_VARIABLE_U_24_31));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_24_31)), &conv3_STATE_VARIABLE_U_26_33);
      STATE_VARIABLE_U_26_33 = ((MR_String) (conv3_STATE_VARIABLE_U_26_33));
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_7, VarSet_8, Modes_10, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_26_33)), &conv4_STATE_VARIABLE_U_27_34);
      STATE_VARIABLE_U_27_34 = ((MR_String) (conv4_STATE_VARIABLE_U_27_34));
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_27_34)), &conv6_STATE_VARIABLE_U_34_41);
      STATE_VARIABLE_U_34_41 = ((MR_String) (conv6_STATE_VARIABLE_U_34_41));
    }
    if ((MaybeDet_11 == (MR_Word) ((MR_Unsigned) 0U)))
      String_12 = STATE_VARIABLE_U_34_41;
    else
    {
      MR_Word Det_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_11, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_12_50;
      MR_String Var_51;
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv8_STATE_VARIABLE_U_12_50;
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv10_String_12;

      func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_34_41)), &conv8_STATE_VARIABLE_U_12_50);
      STATE_VARIABLE_U_12_50 = ((MR_String) (conv8_STATE_VARIABLE_U_12_50));
      Var_51 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_48);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) (Var_51)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_50)), &conv10_String_12);
      String_12 = ((MR_String) (conv10_String_12));
    }
    return String_12;
  }
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
  {
    if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_STATE_VARIABLE_U_34_45;

      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), PredName_12, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_34_45);
    }
    else
    {
      MR_Box conv1_STATE_VARIABLE_U_24_35;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_26_37;
      MR_Box conv4_STATE_VARIABLE_U_27_38;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_34_45;

      parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), PredName_12, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_24_35);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_26_37);
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_10, VarSet_11, Modes_13, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_27_38);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_34_45);
    }
    if (!((MaybeDet_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Det_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_14, (MR_Integer) 0))));
      MR_String Var_55;
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv8_STATE_VARIABLE_U_12_54;
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv10_STATE_VARIABLE_IO_17;

      func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_12_54);
      Var_55 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_52);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) (Var_55)), ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_17);
    }
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
  {
    MR_String String_14;

    switch (PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ArgModes_28;
          MR_Word RetMode_29;
          MR_String STATE_VARIABLE_U_28_52;
          MR_String STATE_VARIABLE_U_30_54;
          MR_String STATE_VARIABLE_U_31_55;
          MR_Box conv0_RetMode_29;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv9_STATE_VARIABLE_U_30_54;
          MR_Box conv10_STATE_VARIABLE_U_31_55;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_12, &ArgModes_28, &conv0_RetMode_29);
          RetMode_29 = ((MR_Word) (conv0_RetMode_29));
          if ((ArgModes_28 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Box conv1_STATE_VARIABLE_U_28_52;

            parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Name_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_28_52);
            STATE_VARIABLE_U_28_52 = ((MR_String) (conv1_STATE_VARIABLE_U_28_52));
          }
          else
          {
            MR_String STATE_VARIABLE_U_23_47;
            MR_String STATE_VARIABLE_U_25_49;
            MR_String STATE_VARIABLE_U_26_50;
            MR_Box conv2_STATE_VARIABLE_U_23_47;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv4_STATE_VARIABLE_U_25_49;
            MR_Box conv5_STATE_VARIABLE_U_26_50;
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv7_STATE_VARIABLE_U_28_52;

            parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Name_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv2_STATE_VARIABLE_U_23_47);
            STATE_VARIABLE_U_23_47 = ((MR_String) (conv2_STATE_VARIABLE_U_23_47));
            func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_23_47)), &conv4_STATE_VARIABLE_U_25_49);
            STATE_VARIABLE_U_25_49 = ((MR_String) (conv4_STATE_VARIABLE_U_25_49));
            parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, InstVarSet_10, ArgModes_28, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_25_49)), &conv5_STATE_VARIABLE_U_26_50);
            STATE_VARIABLE_U_26_50 = ((MR_String) (conv5_STATE_VARIABLE_U_26_50));
            func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_26_50)), &conv7_STATE_VARIABLE_U_28_52);
            STATE_VARIABLE_U_28_52 = ((MR_String) (conv7_STATE_VARIABLE_U_28_52));
          }
          func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_28_52)), &conv9_STATE_VARIABLE_U_30_54);
          STATE_VARIABLE_U_30_54 = ((MR_String) (conv9_STATE_VARIABLE_U_30_54));
          parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, InstVarSet_10, RetMode_29, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_30_54)), &conv10_STATE_VARIABLE_U_31_55);
          STATE_VARIABLE_U_31_55 = ((MR_String) (conv10_STATE_VARIABLE_U_31_55));
          if ((MaybeDet_13 == (MR_Word) ((MR_Unsigned) 0U)))
            String_14 = STATE_VARIABLE_U_31_55;
          else
          {
            MR_Word Det_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_13, (MR_Integer) 0))));
            MR_String STATE_VARIABLE_U_12_64;
            MR_String Var_65;
            void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            MR_Box conv12_STATE_VARIABLE_U_12_64;
            void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv14_String_14;

            func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_31_55)), &conv12_STATE_VARIABLE_U_12_64);
            STATE_VARIABLE_U_12_64 = ((MR_String) (conv12_STATE_VARIABLE_U_12_64));
            Var_65 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_62);
            func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) (Var_65)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_12_64)), &conv14_String_14);
            String_14 = ((MR_String) (conv14_String_14));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box conv15_String_14;

          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, InstVarSet_10, Name_11, Modes_12, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_13, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv15_String_14);
          String_14 = ((MR_String) (conv15_String_14));
        }
        break;
    }
    return String_14;
  }
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
        MR_Word ArgModes_32;
        MR_Word RetMode_33;
        MR_Box conv0_RetMode_33;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv9_STATE_VARIABLE_U_30_58;
        MR_Box conv10_STATE_VARIABLE_U_31_59;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &ArgModes_32, &conv0_RetMode_33);
        RetMode_33 = ((MR_Word) (conv0_RetMode_33));
        if ((ArgModes_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Box conv1_STATE_VARIABLE_U_28_56;

          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Name_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_28_56);
        }
        else
        {
          MR_Box conv2_STATE_VARIABLE_U_23_51;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv4_STATE_VARIABLE_U_25_53;
          MR_Box conv5_STATE_VARIABLE_U_26_54;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_U_28_56;

          parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Name_14, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_23_51);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_3(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_25_53);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, InstVarSet_13, ArgModes_32, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_26_54);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_6(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_28_56);
        }
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        func_8(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_30_58);
        parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, InstVarSet_13, RetMode_33, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_U_31_59);
        if (!((MaybeDet_16 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Det_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_16, (MR_Integer) 0))));
          MR_String Var_69;
          void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          MR_Box conv12_STATE_VARIABLE_U_12_68;
          void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv14_STATE_VARIABLE_IO_19;

          func_11(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_U_12_68);
          Var_69 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_66);
          func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          func_13(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) (Var_69)), ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_19);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Box conv15_STATE_VARIABLE_IO_19;

        parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_9_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, InstVarSet_13, Name_14, Modes_15, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_16, ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_19);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_9_p_0(
  MR_Word TypeClassInfo_for_output_36,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word PredName_12,
  MR_Word Modes_13,
  MR_Word MaybeWithInst_14,
  MR_Word MaybeDet_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_21,
  MR_Box * STATE_VARIABLE_U_22)
{
  {
    MR_Box STATE_VARIABLE_U_29_29;
    MR_Box STATE_VARIABLE_U_34_34;

    if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_36, PredName_12, S_16, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_29_29);
    else
    {
      MR_Box STATE_VARIABLE_U_24_24;
      MR_Box STATE_VARIABLE_U_26_26;
      MR_Box STATE_VARIABLE_U_27_27;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_36, PredName_12, S_16, STATE_VARIABLE_U_0_21, &STATE_VARIABLE_U_24_24);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) "(")), S_16, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_36, Lang_10, InstVarSet_11, Modes_13, S_16, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_27_27);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) ")")), S_16, STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
    }
    if ((MaybeWithInst_14 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_34_34 = STATE_VARIABLE_U_29_29;
    else
    {
      MR_Word WithInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst_14, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_31_31;
      MR_Box STATE_VARIABLE_U_32_32;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_2(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) " \140with_inst\140 (")), S_16, STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_31_31);
      parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_36, Lang_10, InstVarSet_11, WithInst_20, S_16, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_32_32);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) ")")), S_16, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_34_34);
    }
    if ((MaybeDet_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_22 = STATE_VARIABLE_U_34_34;
    else
    {
      MR_Word Det_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_15, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_12_44;
      MR_String Var_45;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_4(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) ((MR_String) " is ")), S_16, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_12_44);
      Var_45 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_42);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_output_36)), ((MR_Box) (Var_45)), S_16, STATE_VARIABLE_U_12_44, STATE_VARIABLE_U_22);
    }
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
  {
    MR_String String_14;
    MR_Box conv0_String_14;

    parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, FuncName_10, Modes_11, RetMode_12, MaybeDet_13, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_14);
    String_14 = ((MR_String) (conv0_String_14));
    return String_14;
  }
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
  {
    MR_Box conv0_STATE_VARIABLE_IO_19;

    parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, VarSet_12, FuncName_13, Modes_14, RetMode_15, MaybeDet_16, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
  }
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
  {
    MR_String String_14;
    MR_Box conv0_String_14;

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, PredName_10, Modes_11, MaybeWithInst_12, MaybeDet_13, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_14);
    String_14 = ((MR_String) (conv0_String_14));
    return String_14;
  }
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
  {
    MR_Box conv0_STATE_VARIABLE_IO_19;

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_11, VarSet_12, PredName_13, Modes_14, WithInst_15, MaybeDet_16, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) (Stream_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
  }
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
  {
    MR_String String_20;
    MR_Box conv0_String_20;

    parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), TypeVarSet_11, VarNamePrint_12, ExistQVars_13, FuncName_14, ArgTypes_15, RetType_16, MaybeDet_17, Purity_18, ClassContext_19, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_20);
    String_20 = ((MR_String) (conv0_String_20));
    return String_20;
  }
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
  {
    MR_Box conv0_STATE_VARIABLE_IO_25;

    parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), VarSet_14, ExistQVars_15, FuncName_16, ArgTypes_17, RetType_18, MaybeDet_19, Purity_20, ClassContext_21, VarNamePrint_22, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) (Stream_13)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25);
  }
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
  {
    MR_String String_18;
    MR_Box conv0_String_18;

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), TypeVarSet_10, VarNamePrint_11, (MR_Integer) 0, ExistQVars_12, PredName_13, Types_14, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_15, Purity_16, ClassContext_17, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_18);
    String_18 = ((MR_String) (conv0_String_18));
    return String_18;
  }
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
  {
    MR_Box conv0_STATE_VARIABLE_IO_23;

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), TypeVarSet_13, VarNamePrint_14, (MR_Integer) 0, ExistQVars_15, PredName_16, Types_17, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_18, Purity_19, ClassContext_20, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) (Stream_12)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_17_p_0(
  MR_Word TypeClassInfo_for_output_46,
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
      Modes_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_35, (MR_Integer) 0))));
      succeeded = (MaybeRetMode_37 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        RetMode_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRetMode_37, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_43_43;

      parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(TypeClassInfo_for_output_46, TypeVarSet_20, VarNamePrint_19, ExistQVars_22, FuncName_23, Types_34, RetType_36, (MR_Word) ((MR_Unsigned) 0U), Purity_27, ClassContext_28, StartString_29, Separator_30, S_32, STATE_VARIABLE_U_0_40, &STATE_VARIABLE_U_43_43);
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0(TypeClassInfo_for_output_46, Lang_18, InstVarSet_21, FuncName_23, Modes_38, RetMode_39, MaybeDet_26, StartString_29, Terminator_31, S_32, STATE_VARIABLE_U_43_43, STATE_VARIABLE_U_41);
    }
    else
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(TypeClassInfo_for_output_46, TypeVarSet_20, VarNamePrint_19, ExistQVars_22, FuncName_23, Types_34, RetType_36, MaybeDet_26, Purity_27, ClassContext_28, StartString_29, Terminator_31, S_32, STATE_VARIABLE_U_0_40, STATE_VARIABLE_U_41);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0(
  MR_Word TypeClassInfo_for_output_57,
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
    MR_Box STATE_VARIABLE_U_50_50;
    MR_Box STATE_VARIABLE_U_52_52;
    MR_Box STATE_VARIABLE_U_53_53;
    MR_Box STATE_VARIABLE_U_54_54;
    MR_Box STATE_VARIABLE_U_55_55;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) (StartString_24)), S_26, STATE_VARIABLE_U_0_33, &STATE_VARIABLE_U_35_35);
    parse_tree__mercury_to_mercury__mercury_format_quantifier_6_p_0(TypeClassInfo_for_output_57, VarSet_15, VarNamePrint_16, ExistQVars_17, S_26, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_36_36);
    UnivConstraints_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_23, (MR_Integer) 0))));
    ExistConstraints_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_23, (MR_Integer) 1))));
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
        MaybeExistConstraints_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeExistConstraints_30, 0) = ((MR_Box) (ExistConstraints_29));
      }
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) ((MR_String) "(")), S_26, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
    }
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 19))));
    func_2(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) (Purity_22)), S_26, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) ((MR_String) "func ")), S_26, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
    if ((Types_19 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_57, FuncName_18, S_26, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_50_50);
    else
    {
      MR_Box STATE_VARIABLE_U_43_43;
      MR_Box STATE_VARIABLE_U_45_45;
      MR_Word Var_46;
      MR_Box STATE_VARIABLE_U_48_48;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_57, FuncName_18, S_26, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) ((MR_String) "(")), S_26, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (TypeClassInfo_for_output_57));
        MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (VarSet_15));
        MR_hl_field(MR_mktag(0), Var_46, 5) = ((MR_Box) (VarNamePrint_16));
      }
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 27))));
      func_5(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_46)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_19)), S_26, STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_48_48);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) ((MR_String) ")")), S_26, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_50_50);
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) ((MR_String) " = ")), S_26, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_52_52);
    parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_57, VarSet_15, VarNamePrint_16, RetType_20, S_26, STATE_VARIABLE_U_52_52, &STATE_VARIABLE_U_53_53);
    if ((MaybeDet_21 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_54_54 = STATE_VARIABLE_U_53_53;
    else
    {
      MR_Word Det_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_21, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_12_70;
      MR_String Var_71;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_8(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) ((MR_String) " is ")), S_26, STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_12_70);
      Var_71 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_68);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) (Var_71)), S_26, STATE_VARIABLE_U_12_70, &STATE_VARIABLE_U_54_54);
    }
    parse_tree__mercury_to_mercury__mercury_format_class_context_7_p_0(TypeClassInfo_for_output_57, VarSet_15, VarNamePrint_16, UnivConstraints_28, MaybeExistConstraints_30, S_26, STATE_VARIABLE_U_54_54, &STATE_VARIABLE_U_55_55);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_57, (MR_Integer) 0)), (MR_Integer) 5))));
    func_10(((MR_Box) (TypeClassInfo_for_output_57)), ((MR_Box) (Separator_25)), S_26, STATE_VARIABLE_U_55_55, STATE_VARIABLE_U_34);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_11_p_0(
  MR_Word TypeClassInfo_for_output_29,
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
  {
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_27_27;
    MR_Box STATE_VARIABLE_U_28_48;
    MR_Box STATE_VARIABLE_U_30_50;
    MR_Box STATE_VARIABLE_U_31_51;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (StartString_18)), S_20, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_24_24);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) "mode ")), S_20, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
    if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_29, FuncName_14, S_20, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_48);
    else
    {
      MR_Box STATE_VARIABLE_U_23_43;
      MR_Box STATE_VARIABLE_U_25_45;
      MR_Box STATE_VARIABLE_U_26_46;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_29, FuncName_14, S_20, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_23_43);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) "(")), S_20, STATE_VARIABLE_U_23_43, &STATE_VARIABLE_U_25_45);
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_29, Lang_12, VarSet_13, Modes_15, S_20, STATE_VARIABLE_U_25_45, &STATE_VARIABLE_U_26_46);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) ")")), S_20, STATE_VARIABLE_U_26_46, &STATE_VARIABLE_U_28_48);
    }
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) " = ")), S_20, STATE_VARIABLE_U_28_48, &STATE_VARIABLE_U_30_50);
    parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_29, Lang_12, VarSet_13, RetMode_16, S_20, STATE_VARIABLE_U_30_50, &STATE_VARIABLE_U_31_51);
    if ((MaybeDet_17 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_27_27 = STATE_VARIABLE_U_31_51;
    else
    {
      MR_Word Det_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_17, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_12_60;
      MR_String Var_61;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_5(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) " is ")), S_20, STATE_VARIABLE_U_31_51, &STATE_VARIABLE_U_12_60);
      Var_61 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_58);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (Var_61)), S_20, STATE_VARIABLE_U_12_60, &STATE_VARIABLE_U_27_27);
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (Separator_19)), S_20, STATE_VARIABLE_U_27_27, STATE_VARIABLE_U_23);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_19_p_0(
  MR_Word TypeClassInfo_for_output_50,
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
  {
    MR_bool succeeded;
    MR_Word Types_38;
    MR_Word MaybeModes_39;
    MR_Word Modes_40;

    parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_27, &Types_38, &MaybeModes_39);
    succeeded = (MaybeModes_39 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Modes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_39, (MR_Integer) 0))));
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

      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0(TypeClassInfo_for_output_50, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, WithType_28, (MR_Word) ((MR_Unsigned) 0U), Purity_31, ClassContext_32, StartString_33, Separator_34, S_36, STATE_VARIABLE_U_0_44, &STATE_VARIABLE_U_47_47);
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0(TypeClassInfo_for_output_50, Lang_20, InstVarSet_23, PredName_26, Modes_40, WithInst_29, MaybeDet_30, StartString_33, Terminator_35, S_36, STATE_VARIABLE_U_47_47, STATE_VARIABLE_U_45);
    }
    else
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0(TypeClassInfo_for_output_50, TypeVarSet_22, VarNamePrint_21, PredOrFunc_24, ExistQVars_25, PredName_26, Types_38, WithType_28, MaybeDet_30, Purity_31, ClassContext_32, StartString_33, Terminator_35, S_36, STATE_VARIABLE_U_0_44, STATE_VARIABLE_U_45);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2, wrapper_arg_3, wrapper_arg_4);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0(
  MR_Word TypeClassInfo_for_output_69,
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
    MR_Box STATE_VARIABLE_U_55_55;
    MR_Box STATE_VARIABLE_U_60_60;
    MR_Box STATE_VARIABLE_U_64_64;
    MR_Box STATE_VARIABLE_U_67_67;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Word TypeCtorInfo_75_75;
    MR_String Var_61;
    MR_Integer Var_62;
    MR_Integer Var_76;
    void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) (StartString_26)), S_28, STATE_VARIABLE_U_0_37, &STATE_VARIABLE_U_39_39);
    parse_tree__mercury_to_mercury__mercury_format_quantifier_6_p_0(TypeClassInfo_for_output_69, TypeVarSet_16, VarNamePrint_17, ExistQVars_19, S_28, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_40_40);
    UnivConstraints_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_25, (MR_Integer) 0))));
    ExistConstraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_25, (MR_Integer) 1))));
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
        MaybeExistConstraints_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeExistConstraints_32, 0) = ((MR_Box) (ExistConstraints_31));
      }
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) ((MR_String) "(")), S_28, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_42_42);
    }
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 19))));
    func_2(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) (Purity_24)), S_28, STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_43_43);
    PredOrFuncStr_33 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_18);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) (PredOrFuncStr_33)), S_28, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_44_44);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) ((MR_String) " ")), S_28, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_46_46);
    if ((Types_21 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_69, PredName_20, S_28, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_55_55);
    else
    {
      MR_Box STATE_VARIABLE_U_48_48;
      MR_Box STATE_VARIABLE_U_50_50;
      MR_Word Var_51;
      MR_Box STATE_VARIABLE_U_53_53;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_69, PredName_20, S_28, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) ((MR_String) "(")), S_28, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_50_50);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (TypeClassInfo_for_output_69));
        MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (TypeVarSet_16));
        MR_hl_field(MR_mktag(0), Var_51, 5) = ((MR_Box) (VarNamePrint_17));
      }
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 27))));
      func_6(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Var_51)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Types_21)), S_28, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_53_53);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
      func_7(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) ((MR_String) ")")), S_28, STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_55_55);
    }
    if ((MaybeWithType_22 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_60_60 = STATE_VARIABLE_U_55_55;
    else
    {
      MR_Word WithType_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType_22, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_57_57;
      MR_Box STATE_VARIABLE_U_58_58;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_8(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) ((MR_String) " \140with_type\140 (")), S_28, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_57_57);
      parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_69, TypeVarSet_16, VarNamePrint_17, WithType_36, S_28, STATE_VARIABLE_U_57_57, &STATE_VARIABLE_U_58_58);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) ((MR_String) ")")), S_28, STATE_VARIABLE_U_58_58, &STATE_VARIABLE_U_60_60);
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
          TypeCtorInfo_75_75 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          mercury__list__length_2_p_0(TypeCtorInfo_75_75, Types_21, &Var_76);
          succeeded = (Var_62 == Var_76);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Det_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_tree_out_pred_decl_scalar_common_2[0])), (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_12_84;
      MR_String Var_85;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_10(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) ((MR_String) " is ")), S_28, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_12_84);
      Var_85 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_82);
      func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
      func_11(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) (Var_85)), S_28, STATE_VARIABLE_U_12_84, &STATE_VARIABLE_U_64_64);
    }
    else
      parse_tree__parse_tree_out_pred_decl__mercury_format_det_annotation_4_p_0(TypeClassInfo_for_output_69, MaybeDet_23, S_28, STATE_VARIABLE_U_60_60, &STATE_VARIABLE_U_64_64);
    parse_tree__mercury_to_mercury__mercury_format_class_context_7_p_0(TypeClassInfo_for_output_69, TypeVarSet_16, VarNamePrint_17, UnivConstraints_30, MaybeExistConstraints_32, S_28, STATE_VARIABLE_U_64_64, &STATE_VARIABLE_U_67_67);
    func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_69, (MR_Integer) 0)), (MR_Integer) 5))));
    func_12(((MR_Box) (TypeClassInfo_for_output_69)), ((MR_Box) (Separator_27)), S_28, STATE_VARIABLE_U_67_67, STATE_VARIABLE_U_38);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_det_annotation_4_p_0(
  MR_Word TypeClassInfo_for_output_15,
  MR_Word MaybeDet_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  if ((MaybeDet_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_U_10 = STATE_VARIABLE_U_0_9;
  else
  {
    MR_Word Det_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_5, (MR_Integer) 0))));
    MR_Box STATE_VARIABLE_U_12_12;
    MR_String Var_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_15)), ((MR_Box) ((MR_String) " is ")), S_6, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_12_12);
    Var_13 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_8);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_15)), ((MR_Box) (Var_13)), S_6, STATE_VARIABLE_U_12_12, STATE_VARIABLE_U_10);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_11_p_0(
  MR_Word TypeClassInfo_for_output_29,
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
  {
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_27_27;
    MR_Box STATE_VARIABLE_U_29_49;
    MR_Box STATE_VARIABLE_U_34_54;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (StartString_18)), S_20, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_24_24);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) "mode ")), S_20, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
    if ((Modes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_29, PredName_14, S_20, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_29_49);
    else
    {
      MR_Box STATE_VARIABLE_U_24_44;
      MR_Box STATE_VARIABLE_U_26_46;
      MR_Box STATE_VARIABLE_U_27_47;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_29, PredName_14, S_20, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_24_44);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) "(")), S_20, STATE_VARIABLE_U_24_44, &STATE_VARIABLE_U_26_46);
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_6_p_0(TypeClassInfo_for_output_29, Lang_12, VarSet_13, Modes_15, S_20, STATE_VARIABLE_U_26_46, &STATE_VARIABLE_U_27_47);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) ")")), S_20, STATE_VARIABLE_U_27_47, &STATE_VARIABLE_U_29_49);
    }
    if ((WithInst_16 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_34_54 = STATE_VARIABLE_U_29_49;
    else
    {
      MR_Word WithInst_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WithInst_16, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_31_51;
      MR_Box STATE_VARIABLE_U_32_52;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_4(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) " \140with_inst\140 (")), S_20, STATE_VARIABLE_U_29_49, &STATE_VARIABLE_U_31_51);
      parse_tree__parse_tree_out_inst__mercury_format_inst_6_p_0(TypeClassInfo_for_output_29, Lang_12, VarSet_13, WithInst_42, S_20, STATE_VARIABLE_U_31_51, &STATE_VARIABLE_U_32_52);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) ")")), S_20, STATE_VARIABLE_U_32_52, &STATE_VARIABLE_U_34_54);
    }
    if ((MaybeDet_17 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_27_27 = STATE_VARIABLE_U_34_54;
    else
    {
      MR_Word Det_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_17, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_12_63;
      MR_String Var_64;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      func_6(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) ((MR_String) " is ")), S_20, STATE_VARIABLE_U_34_54, &STATE_VARIABLE_U_12_63);
      Var_64 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_61);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
      func_7(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (Var_64)), S_20, STATE_VARIABLE_U_12_63, &STATE_VARIABLE_U_27_27);
    }
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_29, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_output_29)), ((MR_Box) (Separator_19)), S_20, STATE_VARIABLE_U_27_27, STATE_VARIABLE_U_23);
  }
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
