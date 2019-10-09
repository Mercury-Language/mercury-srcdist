/*
** Automatically generated from `parse_tree_out_pred_decl.m'
** by the Mercury compiler,
** version rotd-2019-10-09
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
parse_tree__parse_tree_out_pred_decl__mercury_format_mode_subdecl_8_p_0(
  MR_Word TypeClassInfo_for_output_23,
  MR_Word Lang_9,
  MR_Word PredOrFunc_10,
  MR_Word InstVarSet_11,
  MR_Word Name_12,
  MR_Word Modes_13,
  MR_Word MaybeDet_14,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(
  MR_Word TypeClassInfo_for_output_55,
  MR_Word VarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word ExistQVars_16,
  MR_Word FuncName_17,
  MR_Word Types_18,
  MR_Word RetType_19,
  MR_Word MaybeDet_20,
  MR_Word Purity_21,
  MR_Word Constraints_22,
  MR_String StartString_23,
  MR_String Separator_24,
  MR_Box STATE_VARIABLE_U_0_31,
  MR_Box * STATE_VARIABLE_U_32);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(
  MR_Word TypeClassInfo_for_output_67,
  MR_Word TypeVarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word PredOrFunc_17,
  MR_Word ExistQVars_18,
  MR_Word PredName_19,
  MR_Word Types_20,
  MR_Word MaybeWithType_21,
  MR_Word MaybeDet_22,
  MR_Word Purity_23,
  MR_Word Constraints_24,
  MR_String StartString_25,
  MR_String Separator_26,
  MR_Box STATE_VARIABLE_U_0_35,
  MR_Box * STATE_VARIABLE_U_36);


static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][2];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_3[1][9];




static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][2] = {
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
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_2[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
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
    MR_String STATE_VARIABLE_U_26_34;
    MR_String STATE_VARIABLE_U_28_36;
    MR_String STATE_VARIABLE_U_29_37;
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_28_36;
    MR_Box conv9_STATE_VARIABLE_U_29_37;

    if ((Modes_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_STATE_VARIABLE_U_26_34;

      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), FuncName_10, ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_26_34);
      STATE_VARIABLE_U_26_34 = ((MR_String) (conv0_STATE_VARIABLE_U_26_34));
    }
    else
    {
      MR_String STATE_VARIABLE_U_21_29;
      MR_String STATE_VARIABLE_U_23_31;
      MR_String STATE_VARIABLE_U_24_32;
      MR_Box conv1_STATE_VARIABLE_U_21_29;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_23_31;
      MR_Box conv4_STATE_VARIABLE_U_24_32;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_26_34;

      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), FuncName_10, ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_21_29);
      STATE_VARIABLE_U_21_29 = ((MR_String) (conv1_STATE_VARIABLE_U_21_29));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_U_21_29)), &conv3_STATE_VARIABLE_U_23_31);
      STATE_VARIABLE_U_23_31 = ((MR_String) (conv3_STATE_VARIABLE_U_23_31));
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, Modes_11, ((MR_Box) (STATE_VARIABLE_U_23_31)), &conv4_STATE_VARIABLE_U_24_32);
      STATE_VARIABLE_U_24_32 = ((MR_String) (conv4_STATE_VARIABLE_U_24_32));
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_U_24_32)), &conv6_STATE_VARIABLE_U_26_34);
      STATE_VARIABLE_U_26_34 = ((MR_String) (conv6_STATE_VARIABLE_U_26_34));
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (STATE_VARIABLE_U_26_34)), &conv8_STATE_VARIABLE_U_28_36);
    STATE_VARIABLE_U_28_36 = ((MR_String) (conv8_STATE_VARIABLE_U_28_36));
    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, RetMode_12, ((MR_Box) (STATE_VARIABLE_U_28_36)), &conv9_STATE_VARIABLE_U_29_37);
    STATE_VARIABLE_U_29_37 = ((MR_String) (conv9_STATE_VARIABLE_U_29_37));
    if ((MaybeDet_13 == (MR_Word) ((MR_Unsigned) 0U)))
      String_14 = STATE_VARIABLE_U_29_37;
    else
    {
      MR_Word Det_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_13, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_10_45;
      MR_String Var_46;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv11_STATE_VARIABLE_U_10_45;
      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv13_String_14;

      func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (STATE_VARIABLE_U_29_37)), &conv11_STATE_VARIABLE_U_10_45);
      STATE_VARIABLE_U_10_45 = ((MR_String) (conv11_STATE_VARIABLE_U_10_45));
      Var_46 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_43);
      func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) (Var_46)), ((MR_Box) (STATE_VARIABLE_U_10_45)), &conv13_String_14);
      String_14 = ((MR_String) (conv13_String_14));
    }
    return String_14;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(
  MR_Word Lang_9,
  MR_Word VarSet_10,
  MR_Word FuncName_11,
  MR_Word Modes_12,
  MR_Word RetMode_13,
  MR_Word MaybeDet_14)
{
  {
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv8_STATE_VARIABLE_U_28_39;
    MR_Box conv9_STATE_VARIABLE_U_29_40;

    if ((Modes_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_STATE_VARIABLE_U_26_37;

      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), FuncName_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_26_37);
    }
    else
    {
      MR_Box conv1_STATE_VARIABLE_U_21_32;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_23_34;
      MR_Box conv4_STATE_VARIABLE_U_24_35;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_26_37;

      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), FuncName_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_21_32);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_23_34);
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_9, VarSet_10, Modes_12, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_24_35);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_26_37);
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_28_39);
    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_9, VarSet_10, RetMode_13, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_U_29_40);
    if (!((MaybeDet_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Det_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_14, (MR_Integer) 0))));
      MR_String Var_49;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv11_STATE_VARIABLE_U_10_48;
      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv13_STATE_VARIABLE_IO_17;

      func_10(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_U_10_48);
      Var_49 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_46);
      func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_12(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) (Var_49)), ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_17);
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
    MR_String STATE_VARIABLE_U_32_39;

    if ((Modes_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_STATE_VARIABLE_U_32_39;

      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), PredName_9, ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_32_39);
      STATE_VARIABLE_U_32_39 = ((MR_String) (conv0_STATE_VARIABLE_U_32_39));
    }
    else
    {
      MR_String STATE_VARIABLE_U_22_29;
      MR_String STATE_VARIABLE_U_24_31;
      MR_String STATE_VARIABLE_U_25_32;
      MR_Box conv1_STATE_VARIABLE_U_22_29;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_24_31;
      MR_Box conv4_STATE_VARIABLE_U_25_32;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_32_39;

      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), PredName_9, ((MR_Box) ((MR_String) "")), &conv1_STATE_VARIABLE_U_22_29);
      STATE_VARIABLE_U_22_29 = ((MR_String) (conv1_STATE_VARIABLE_U_22_29));
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) (STATE_VARIABLE_U_22_29)), &conv3_STATE_VARIABLE_U_24_31);
      STATE_VARIABLE_U_24_31 = ((MR_String) (conv3_STATE_VARIABLE_U_24_31));
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_7, VarSet_8, Modes_10, ((MR_Box) (STATE_VARIABLE_U_24_31)), &conv4_STATE_VARIABLE_U_25_32);
      STATE_VARIABLE_U_25_32 = ((MR_String) (conv4_STATE_VARIABLE_U_25_32));
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) (STATE_VARIABLE_U_25_32)), &conv6_STATE_VARIABLE_U_32_39);
      STATE_VARIABLE_U_32_39 = ((MR_String) (conv6_STATE_VARIABLE_U_32_39));
    }
    if ((MaybeDet_11 == (MR_Word) ((MR_Unsigned) 0U)))
      String_12 = STATE_VARIABLE_U_32_39;
    else
    {
      MR_Word Det_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_11, (MR_Integer) 0))));
      MR_String STATE_VARIABLE_U_10_47;
      MR_String Var_48;
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv8_STATE_VARIABLE_U_10_47;
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv10_String_12;

      func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (STATE_VARIABLE_U_32_39)), &conv8_STATE_VARIABLE_U_10_47);
      STATE_VARIABLE_U_10_47 = ((MR_String) (conv8_STATE_VARIABLE_U_10_47));
      Var_48 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_45);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]))), ((MR_Box) (Var_48)), ((MR_Box) (STATE_VARIABLE_U_10_47)), &conv10_String_12);
      String_12 = ((MR_String) (conv10_String_12));
    }
    return String_12;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(
  MR_Word Lang_8,
  MR_Word VarSet_9,
  MR_Word PredName_10,
  MR_Word Modes_11,
  MR_Word MaybeDet_12)
{
  {
    if ((Modes_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_STATE_VARIABLE_U_32_42;

      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), PredName_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_32_42);
    }
    else
    {
      MR_Box conv1_STATE_VARIABLE_U_22_32;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv3_STATE_VARIABLE_U_24_34;
      MR_Box conv4_STATE_VARIABLE_U_25_35;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv6_STATE_VARIABLE_U_32_42;

      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), PredName_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_22_32);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_24_34);
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_8, VarSet_9, Modes_11, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_U_25_35);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_U_32_42);
    }
    if (!((MaybeDet_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Det_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_12, (MR_Integer) 0))));
      MR_String Var_51;
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      MR_Box conv8_STATE_VARIABLE_U_10_50;
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv10_STATE_VARIABLE_IO_15;

      func_7(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_U_10_50);
      Var_51 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_48);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]))), ((MR_Box) (Var_51)), ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_15);
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
    MR_Box conv0_String_14;

    parse_tree__parse_tree_out_pred_decl__mercury_format_mode_subdecl_8_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, PredOrFunc_9, InstVarSet_10, Name_11, Modes_12, MaybeDet_13, ((MR_Box) ((MR_String) "")), &conv0_String_14);
    String_14 = ((MR_String) (conv0_String_14));
    return String_14;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_mode_subdecl_8_p_0(
  MR_Word Lang_9,
  MR_Word PredOrFunc_10,
  MR_Word InstVarSet_11,
  MR_Word Name_12,
  MR_Word Modes_13,
  MR_Word MaybeDet_14)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_17;

    parse_tree__parse_tree_out_pred_decl__mercury_format_mode_subdecl_8_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_9, PredOrFunc_10, InstVarSet_11, Name_12, Modes_13, MaybeDet_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_mode_subdecl_8_p_0(
  MR_Word TypeClassInfo_for_output_23,
  MR_Word Lang_9,
  MR_Word PredOrFunc_10,
  MR_Word InstVarSet_11,
  MR_Word Name_12,
  MR_Word Modes_13,
  MR_Word MaybeDet_14,
  MR_Box STATE_VARIABLE_U_0_18,
  MR_Box * STATE_VARIABLE_U_19)
{
  switch (PredOrFunc_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgModes_16;
        MR_Word RetMode_17;
        MR_Box STATE_VARIABLE_U_26_42;
        MR_Box STATE_VARIABLE_U_28_44;
        MR_Box STATE_VARIABLE_U_29_45;
        MR_Box conv0_RetMode_17;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_13, &ArgModes_16, &conv0_RetMode_17);
        RetMode_17 = ((MR_Word) (conv0_RetMode_17));
        if ((ArgModes_16 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_23, Name_12, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_26_42);
        else
        {
          MR_Box STATE_VARIABLE_U_21_37;
          MR_Box STATE_VARIABLE_U_23_39;
          MR_Box STATE_VARIABLE_U_24_40;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_23, Name_12, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_21_37);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
          func_1(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_21_37, &STATE_VARIABLE_U_23_39);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_23, Lang_9, InstVarSet_11, ArgModes_16, STATE_VARIABLE_U_23_39, &STATE_VARIABLE_U_24_40);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
          func_2(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_24_40, &STATE_VARIABLE_U_26_42);
        }
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) " = ")), STATE_VARIABLE_U_26_42, &STATE_VARIABLE_U_28_44);
        parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_23, Lang_9, InstVarSet_11, RetMode_17, STATE_VARIABLE_U_28_44, &STATE_VARIABLE_U_29_45);
        if ((MaybeDet_14 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_19 = STATE_VARIABLE_U_29_45;
        else
        {
          MR_Word Det_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_14, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_U_10_53;
          MR_String Var_54;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_4(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) " is ")), STATE_VARIABLE_U_29_45, &STATE_VARIABLE_U_10_53);
          Var_54 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_51);
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
          func_5(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) (Var_54)), STATE_VARIABLE_U_10_53, STATE_VARIABLE_U_19);
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Box STATE_VARIABLE_U_32_79;

        if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_23, Name_12, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_32_79);
        else
        {
          MR_Box STATE_VARIABLE_U_22_69;
          MR_Box STATE_VARIABLE_U_24_71;
          MR_Box STATE_VARIABLE_U_25_72;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_23, Name_12, STATE_VARIABLE_U_0_18, &STATE_VARIABLE_U_22_69);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
          func_6(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_22_69, &STATE_VARIABLE_U_24_71);
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_23, Lang_9, InstVarSet_11, Modes_13, STATE_VARIABLE_U_24_71, &STATE_VARIABLE_U_25_72);
          func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
          func_7(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_25_72, &STATE_VARIABLE_U_32_79);
        }
        if ((MaybeDet_14 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_19 = STATE_VARIABLE_U_32_79;
        else
        {
          MR_Word Det_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_14, (MR_Integer) 0))));
          MR_Box STATE_VARIABLE_U_10_87;
          MR_String Var_88;
          void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

          func_8(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) " is ")), STATE_VARIABLE_U_32_79, &STATE_VARIABLE_U_10_87);
          Var_88 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_85);
          func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
          func_9(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) (Var_88)), STATE_VARIABLE_U_10_87, STATE_VARIABLE_U_19);
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
  {
    MR_String String_14;
    MR_Box conv0_String_14;

    parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, FuncName_10, Modes_11, RetMode_12, MaybeDet_13, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &conv0_String_14);
    String_14 = ((MR_String) (conv0_String_14));
    return String_14;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0(
  MR_Word Lang_9,
  MR_Word VarSet_10,
  MR_Word FuncName_11,
  MR_Word Modes_12,
  MR_Word RetMode_13,
  MR_Word MaybeDet_14)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_17;

    parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_9, VarSet_10, FuncName_11, Modes_12, RetMode_13, MaybeDet_14, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
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

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), Lang_8, VarSet_9, PredName_10, Modes_11, MaybeWithInst_12, MaybeDet_13, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &conv0_String_14);
    String_14 = ((MR_String) (conv0_String_14));
    return String_14;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0(
  MR_Word Lang_9,
  MR_Word VarSet_10,
  MR_Word PredName_11,
  MR_Word Modes_12,
  MR_Word WithInst_13,
  MR_Word MaybeDet_14)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_17;

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), Lang_9, VarSet_10, PredName_11, Modes_12, WithInst_13, MaybeDet_14, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(
  MR_Word TypeVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word ExistQVars_13,
  MR_Word FuncName_14,
  MR_Word Types_15,
  MR_Word RetType_16,
  MR_Word MaybeDet_17,
  MR_Word Purity_18,
  MR_Word ClassContext_19)
{
  {
    MR_String String_20;
    MR_Box conv0_String_20;

    parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), TypeVarSet_11, VarNamePrint_12, ExistQVars_13, FuncName_14, Types_15, RetType_16, MaybeDet_17, Purity_18, ClassContext_19, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &conv0_String_20);
    String_20 = ((MR_String) (conv0_String_20));
    return String_20;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_11_p_0(
  MR_Word VarSet_12,
  MR_Word ExistQVars_13,
  MR_Word FuncName_14,
  MR_Word Types_15,
  MR_Word RetType_16,
  MR_Word MaybeDet_17,
  MR_Word Purity_18,
  MR_Word ClassContext_19,
  MR_Word VarNamePrint_20)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_23;

    parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), VarSet_12, ExistQVars_13, FuncName_14, Types_15, RetType_16, MaybeDet_17, Purity_18, ClassContext_19, VarNamePrint_20, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23);
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

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[1]), TypeVarSet_10, VarNamePrint_11, (MR_Integer) 0, ExistQVars_12, PredName_13, Types_14, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_15, Purity_16, ClassContext_17, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &conv0_String_18);
    String_18 = ((MR_String) (conv0_String_18));
    return String_18;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_10_p_0(
  MR_Word TypeVarSet_11,
  MR_Word VarNamePrint_12,
  MR_Word ExistQVars_13,
  MR_Word PredName_14,
  MR_Word Types_15,
  MR_Word MaybeDet_16,
  MR_Word Purity_17,
  MR_Word ClassContext_18)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_21;

    parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0((MR_Word) (&parse_tree__parse_tree_out_pred_decl_scalar_common_1[0]), TypeVarSet_11, VarNamePrint_12, (MR_Integer) 0, ExistQVars_13, PredName_14, Types_15, (MR_Word) ((MR_Unsigned) 0U), MaybeDet_16, Purity_17, ClassContext_18, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_21);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0(
  MR_Word TypeClassInfo_for_output_44,
  MR_Word Lang_16,
  MR_Word TypeVarSet_17,
  MR_Word InstVarSet_18,
  MR_Word ExistQVars_19,
  MR_Word FuncName_20,
  MR_Word TypesAndModes_21,
  MR_Word RetTypeAndMode_22,
  MR_Word MaybeDet_23,
  MR_Word Purity_24,
  MR_Word ClassContext_25,
  MR_String StartString_26,
  MR_String Separator_27,
  MR_String Terminator_28,
  MR_Box STATE_VARIABLE_U_0_36,
  MR_Box * STATE_VARIABLE_U_37)
{
  {
    MR_bool succeeded;
    MR_Word Types_30;
    MR_Word MaybeModes_31;
    MR_Word RetType_32;
    MR_Word MaybeRetMode_33;
    MR_Word Modes_34;
    MR_Word RetMode_35;

    parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_21, &Types_30, &MaybeModes_31);
    parse_tree__prog_util__split_type_and_mode_3_p_0(RetTypeAndMode_22, &RetType_32, &MaybeRetMode_33);
    succeeded = (MaybeModes_31 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Modes_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_31, (MR_Integer) 0))));
      succeeded = (MaybeRetMode_33 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        RetMode_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRetMode_33, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_40_40;

      parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(TypeClassInfo_for_output_44, TypeVarSet_17, (MR_Integer) 0, ExistQVars_19, FuncName_20, Types_30, RetType_32, (MR_Word) ((MR_Unsigned) 0U), Purity_24, ClassContext_25, StartString_26, Separator_27, STATE_VARIABLE_U_0_36, &STATE_VARIABLE_U_40_40);
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0(TypeClassInfo_for_output_44, Lang_16, InstVarSet_18, FuncName_20, Modes_34, RetMode_35, MaybeDet_23, StartString_26, Terminator_28, STATE_VARIABLE_U_40_40, STATE_VARIABLE_U_37);
    }
    else
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(TypeClassInfo_for_output_44, TypeVarSet_17, (MR_Integer) 0, ExistQVars_19, FuncName_20, Types_30, RetType_32, MaybeDet_23, Purity_24, ClassContext_25, StartString_26, Terminator_28, STATE_VARIABLE_U_0_36, STATE_VARIABLE_U_37);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0_1(
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

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(
  MR_Word TypeClassInfo_for_output_55,
  MR_Word VarSet_14,
  MR_Word VarNamePrint_15,
  MR_Word ExistQVars_16,
  MR_Word FuncName_17,
  MR_Word Types_18,
  MR_Word RetType_19,
  MR_Word MaybeDet_20,
  MR_Word Purity_21,
  MR_Word Constraints_22,
  MR_String StartString_23,
  MR_String Separator_24,
  MR_Box STATE_VARIABLE_U_0_31,
  MR_Box * STATE_VARIABLE_U_32)
{
  {
    MR_bool succeeded;
    MR_Word UnivConstraints_26;
    MR_Word ExistConstraints_27;
    MR_Word MaybeExistConstraints_28;
    MR_Box STATE_VARIABLE_U_33_33;
    MR_Box STATE_VARIABLE_U_34_34;
    MR_Box STATE_VARIABLE_U_36_36;
    MR_Box STATE_VARIABLE_U_37_37;
    MR_Box STATE_VARIABLE_U_39_39;
    MR_Box STATE_VARIABLE_U_48_48;
    MR_Box STATE_VARIABLE_U_50_50;
    MR_Box STATE_VARIABLE_U_51_51;
    MR_Box STATE_VARIABLE_U_52_52;
    MR_Box STATE_VARIABLE_U_53_53;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) (StartString_23)), STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_33_33);
    parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0(TypeClassInfo_for_output_55, VarSet_14, VarNamePrint_15, ExistQVars_16, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_34_34);
    UnivConstraints_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_22, (MR_Integer) 0))));
    ExistConstraints_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_22, (MR_Integer) 1))));
    succeeded = (ExistQVars_16 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ExistConstraints_27 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MaybeExistConstraints_28 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_U_36_36 = STATE_VARIABLE_U_34_34;
    }
    else
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

      {
        MaybeExistConstraints_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeExistConstraints_28, 0) = ((MR_Box) (ExistConstraints_27));
      }
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_36_36);
    }
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 19))));
    func_2(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) (Purity_21)), STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_37_37);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "func ")), STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_39_39);
    if ((Types_18 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_55, FuncName_17, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_48_48);
    else
    {
      MR_Box STATE_VARIABLE_U_41_41;
      MR_Box STATE_VARIABLE_U_43_43;
      MR_Word Var_45;
      MR_Box STATE_VARIABLE_U_46_46;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_55, FuncName_17, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
      func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
      func_4(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0_1));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (TypeClassInfo_for_output_55));
        MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (VarSet_14));
        MR_hl_field(MR_mktag(0), Var_45, 5) = ((MR_Box) (VarNamePrint_15));
      }
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 27))));
      func_5(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Types_18)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_45)), STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_46_46);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) " = ")), STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_50_50);
    parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(TypeClassInfo_for_output_55, VarSet_14, VarNamePrint_15, RetType_19, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_51_51);
    if ((MaybeDet_20 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_52_52 = STATE_VARIABLE_U_51_51;
    else
    {
      MR_Word Det_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_20, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_10_66;
      MR_String Var_67;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_8(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) " is ")), STATE_VARIABLE_U_51_51, &STATE_VARIABLE_U_10_66);
      Var_67 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_64);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) (Var_67)), STATE_VARIABLE_U_10_66, &STATE_VARIABLE_U_52_52);
    }
    parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0(TypeClassInfo_for_output_55, VarSet_14, VarNamePrint_15, UnivConstraints_26, MaybeExistConstraints_28, STATE_VARIABLE_U_52_52, &STATE_VARIABLE_U_53_53);
    func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
    func_10(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) (Separator_24)), STATE_VARIABLE_U_53_53, STATE_VARIABLE_U_32);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word Lang_11,
  MR_Word VarSet_12,
  MR_Word FuncName_13,
  MR_Word Modes_14,
  MR_Word RetMode_15,
  MR_Word MaybeDet_16,
  MR_String StartString_17,
  MR_String Separator_18,
  MR_Box STATE_VARIABLE_U_0_20,
  MR_Box * STATE_VARIABLE_U_21)
{
  {
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_25_25;
    MR_Box STATE_VARIABLE_U_26_45;
    MR_Box STATE_VARIABLE_U_28_47;
    MR_Box STATE_VARIABLE_U_29_48;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (StartString_17)), STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_22_22);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) "mode ")), STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
    if ((Modes_14 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_27, FuncName_13, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_45);
    else
    {
      MR_Box STATE_VARIABLE_U_21_40;
      MR_Box STATE_VARIABLE_U_23_42;
      MR_Box STATE_VARIABLE_U_24_43;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_27, FuncName_13, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_21_40);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_21_40, &STATE_VARIABLE_U_23_42);
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_27, Lang_11, VarSet_12, Modes_14, STATE_VARIABLE_U_23_42, &STATE_VARIABLE_U_24_43);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_24_43, &STATE_VARIABLE_U_26_45);
    }
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) " = ")), STATE_VARIABLE_U_26_45, &STATE_VARIABLE_U_28_47);
    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_27, Lang_11, VarSet_12, RetMode_15, STATE_VARIABLE_U_28_47, &STATE_VARIABLE_U_29_48);
    if ((MaybeDet_16 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_25_25 = STATE_VARIABLE_U_29_48;
    else
    {
      MR_Word Det_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_16, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_10_56;
      MR_String Var_57;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_5(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) " is ")), STATE_VARIABLE_U_29_48, &STATE_VARIABLE_U_10_56);
      Var_57 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_54);
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_6(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (Var_57)), STATE_VARIABLE_U_10_56, &STATE_VARIABLE_U_25_25);
    }
    func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    func_7(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (Separator_18)), STATE_VARIABLE_U_25_25, STATE_VARIABLE_U_21);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0(
  MR_Word TypeClassInfo_for_output_48,
  MR_Word Lang_18,
  MR_Word TypeVarSet_19,
  MR_Word InstVarSet_20,
  MR_Word PredOrFunc_21,
  MR_Word ExistQVars_22,
  MR_Word PredName_23,
  MR_Word TypesAndModes_24,
  MR_Word WithType_25,
  MR_Word WithInst_26,
  MR_Word MaybeDet_27,
  MR_Word Purity_28,
  MR_Word ClassContext_29,
  MR_String StartString_30,
  MR_String Separator_31,
  MR_String Terminator_32,
  MR_Box STATE_VARIABLE_IO_0_40,
  MR_Box * STATE_VARIABLE_IO_41)
{
  {
    MR_bool succeeded;
    MR_Word Types_34;
    MR_Word MaybeModes_35;
    MR_Word Modes_36;

    parse_tree__prog_util__split_types_and_modes_3_p_0(TypesAndModes_24, &Types_34, &MaybeModes_35);
    succeeded = (MaybeModes_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Modes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes_35, (MR_Integer) 0))));
      succeeded = (Modes_36 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (WithInst_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_IO_44_44;

      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(TypeClassInfo_for_output_48, TypeVarSet_19, (MR_Integer) 0, PredOrFunc_21, ExistQVars_22, PredName_23, Types_34, WithType_25, (MR_Word) ((MR_Unsigned) 0U), Purity_28, ClassContext_29, StartString_30, Separator_31, STATE_VARIABLE_IO_0_40, &STATE_VARIABLE_IO_44_44);
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0(TypeClassInfo_for_output_48, Lang_18, InstVarSet_20, PredName_23, Modes_36, WithInst_26, MaybeDet_27, StartString_30, Terminator_32, STATE_VARIABLE_IO_44_44, STATE_VARIABLE_IO_41);
    }
    else
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(TypeClassInfo_for_output_48, TypeVarSet_19, (MR_Integer) 0, PredOrFunc_21, ExistQVars_22, PredName_23, Types_34, WithType_25, MaybeDet_27, Purity_28, ClassContext_29, StartString_30, Terminator_32, STATE_VARIABLE_IO_0_40, STATE_VARIABLE_IO_41);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0_1(
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

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(
  MR_Word TypeClassInfo_for_output_67,
  MR_Word TypeVarSet_15,
  MR_Word VarNamePrint_16,
  MR_Word PredOrFunc_17,
  MR_Word ExistQVars_18,
  MR_Word PredName_19,
  MR_Word Types_20,
  MR_Word MaybeWithType_21,
  MR_Word MaybeDet_22,
  MR_Word Purity_23,
  MR_Word Constraints_24,
  MR_String StartString_25,
  MR_String Separator_26,
  MR_Box STATE_VARIABLE_U_0_35,
  MR_Box * STATE_VARIABLE_U_36)
{
  {
    MR_bool succeeded;
    MR_Word UnivConstraints_28;
    MR_Word ExistConstraints_29;
    MR_Word MaybeExistConstraints_30;
    MR_String PredOrFuncStr_31;
    MR_Box STATE_VARIABLE_U_37_37;
    MR_Box STATE_VARIABLE_U_38_38;
    MR_Box STATE_VARIABLE_U_40_40;
    MR_Box STATE_VARIABLE_U_41_41;
    MR_Box STATE_VARIABLE_U_42_42;
    MR_Box STATE_VARIABLE_U_44_44;
    MR_Box STATE_VARIABLE_U_53_53;
    MR_Box STATE_VARIABLE_U_58_58;
    MR_Box STATE_VARIABLE_U_62_62;
    MR_Box STATE_VARIABLE_U_65_65;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Word TypeCtorInfo_72_72;
    MR_String Var_59;
    MR_Integer Var_60;
    MR_Integer Var_73;
    void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) (StartString_25)), STATE_VARIABLE_U_0_35, &STATE_VARIABLE_U_37_37);
    parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0(TypeClassInfo_for_output_67, TypeVarSet_15, VarNamePrint_16, ExistQVars_18, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_38_38);
    UnivConstraints_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_24, (MR_Integer) 0))));
    ExistConstraints_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_24, (MR_Integer) 1))));
    succeeded = (ExistQVars_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MaybeExistConstraints_30 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_U_40_40 = STATE_VARIABLE_U_38_38;
    }
    else
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

      {
        MaybeExistConstraints_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeExistConstraints_30, 0) = ((MR_Box) (ExistConstraints_29));
      }
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
      func_1(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
    }
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 19))));
    func_2(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) (Purity_23)), STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_41_41);
    PredOrFuncStr_31 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_17);
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
    func_3(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) (PredOrFuncStr_31)), STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_42_42);
    func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
    func_4(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_44_44);
    if ((Types_20 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_67, PredName_19, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_53_53);
    else
    {
      MR_Box STATE_VARIABLE_U_46_46;
      MR_Box STATE_VARIABLE_U_48_48;
      MR_Word Var_50;
      MR_Box STATE_VARIABLE_U_51_51;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_67, PredName_19, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_46_46);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (TypeClassInfo_for_output_67));
        MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (TypeVarSet_15));
        MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (VarNamePrint_16));
      }
      func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 27))));
      func_6(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (Types_20)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (Var_50)), STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_51_51);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
      func_7(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_51_51, &STATE_VARIABLE_U_53_53);
    }
    if ((MaybeWithType_21 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_58_58 = STATE_VARIABLE_U_53_53;
    else
    {
      MR_Word WithType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType_21, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_55_55;
      MR_Box STATE_VARIABLE_U_56_56;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_8(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) ((MR_String) " \140with_type\140 (")), STATE_VARIABLE_U_53_53, &STATE_VARIABLE_U_55_55);
      parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(TypeClassInfo_for_output_67, TypeVarSet_15, VarNamePrint_16, WithType_34, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_56_56);
      func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
      func_9(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_56_56, &STATE_VARIABLE_U_58_58);
    }
    succeeded = (PredOrFunc_17 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MaybeDet_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_59 = mdbcomp__sym_name__unqualify_name_1_f_0(PredName_19);
        succeeded = (strcmp(Var_59, (MR_String) "is") == 0);
        if (succeeded)
        {
          Var_60 = (MR_Integer) 2;
          TypeCtorInfo_72_72 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          mercury__list__length_2_p_0(TypeCtorInfo_72_72, Types_20, &Var_73);
          succeeded = (Var_60 == Var_73);
        }
      }
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_U_10_80;
      MR_String Var_81;
      void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_10(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) ((MR_String) " is ")), STATE_VARIABLE_U_58_58, &STATE_VARIABLE_U_10_80);
      Var_81 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0((MR_Integer) 0);
      func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
      func_11(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) (Var_81)), STATE_VARIABLE_U_10_80, &STATE_VARIABLE_U_62_62);
    }
    else
    if ((MaybeDet_22 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_62_62 = STATE_VARIABLE_U_58_58;
    else
    {
      MR_Word Det_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_22, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_10_89;
      MR_String Var_90;
      void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_12(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) ((MR_String) " is ")), STATE_VARIABLE_U_58_58, &STATE_VARIABLE_U_10_89);
      Var_90 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_87);
      func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
      func_13(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) (Var_90)), STATE_VARIABLE_U_10_89, &STATE_VARIABLE_U_62_62);
    }
    parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0(TypeClassInfo_for_output_67, TypeVarSet_15, VarNamePrint_16, UnivConstraints_28, MaybeExistConstraints_30, STATE_VARIABLE_U_62_62, &STATE_VARIABLE_U_65_65);
    func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_67, (MR_Integer) 0)), (MR_Integer) 5))));
    func_14(((MR_Box) (TypeClassInfo_for_output_67)), ((MR_Box) (Separator_26)), STATE_VARIABLE_U_65_65, STATE_VARIABLE_U_36);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0(
  MR_Word TypeClassInfo_for_output_27,
  MR_Word Lang_11,
  MR_Word VarSet_12,
  MR_Word PredName_13,
  MR_Word Modes_14,
  MR_Word WithInst_15,
  MR_Word MaybeDet_16,
  MR_String StartString_17,
  MR_String Separator_18,
  MR_Box STATE_VARIABLE_U_0_20,
  MR_Box * STATE_VARIABLE_U_21)
{
  {
    MR_Box STATE_VARIABLE_U_22_22;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_25_25;
    MR_Box STATE_VARIABLE_U_27_46;
    MR_Box STATE_VARIABLE_U_32_51;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

    func_0(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (StartString_17)), STATE_VARIABLE_U_0_20, &STATE_VARIABLE_U_22_22);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) "mode ")), STATE_VARIABLE_U_22_22, &STATE_VARIABLE_U_24_24);
    if ((Modes_14 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_27, PredName_13, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_27_46);
    else
    {
      MR_Box STATE_VARIABLE_U_22_41;
      MR_Box STATE_VARIABLE_U_24_43;
      MR_Box STATE_VARIABLE_U_25_44;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

      parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_27, PredName_13, STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_22_41);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) "(")), STATE_VARIABLE_U_22_41, &STATE_VARIABLE_U_24_43);
      parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(TypeClassInfo_for_output_27, Lang_11, VarSet_12, Modes_14, STATE_VARIABLE_U_24_43, &STATE_VARIABLE_U_25_44);
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_3(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_25_44, &STATE_VARIABLE_U_27_46);
    }
    if ((WithInst_15 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_32_51 = STATE_VARIABLE_U_27_46;
    else
    {
      MR_Word WithInst_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WithInst_15, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_29_48;
      MR_Box STATE_VARIABLE_U_30_49;
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_4(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) " \140with_inst\140 (")), STATE_VARIABLE_U_27_46, &STATE_VARIABLE_U_29_48);
      parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(TypeClassInfo_for_output_27, Lang_11, VarSet_12, WithInst_39, STATE_VARIABLE_U_29_48, &STATE_VARIABLE_U_30_49);
      func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_5(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) ")")), STATE_VARIABLE_U_30_49, &STATE_VARIABLE_U_32_51);
    }
    if ((MaybeDet_16 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_U_25_25 = STATE_VARIABLE_U_32_51;
    else
    {
      MR_Word Det_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDet_16, (MR_Integer) 0))));
      MR_Box STATE_VARIABLE_U_10_59;
      MR_String Var_60;
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

      func_6(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) ((MR_String) " is ")), STATE_VARIABLE_U_32_51, &STATE_VARIABLE_U_10_59);
      Var_60 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_57);
      func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
      func_7(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (Var_60)), STATE_VARIABLE_U_10_59, &STATE_VARIABLE_U_25_25);
    }
    func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5))));
    func_8(((MR_Box) (TypeClassInfo_for_output_27)), ((MR_Box) (Separator_18)), STATE_VARIABLE_U_25_25, STATE_VARIABLE_U_21);
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
