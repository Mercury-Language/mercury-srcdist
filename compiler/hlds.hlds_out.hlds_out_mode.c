/*
** Automatically generated from `hlds_out_mode.m'
** by the Mercury compiler,
** version rotd-2020-03-16
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


// :- module hlds.hlds_out.hlds_out_mode.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__hlds_out_mode__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_mode.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
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
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_4_p_0(
  MR_Word TypeClassInfo_for_output_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_IO_0_3,
  MR_Box * STATE_VARIABLE_IO_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_8_p_0(
  MR_Word TypeClassInfo_for_output_37,
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Integer Indent_3,
  MR_Word Lang_4,
  MR_Word InclAddr_5,
  MR_Word InstVarSet_6,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_7_p_0(
  MR_Word TypeClassInfo_for_output_54,
  MR_Word UnifyMode_8,
  MR_Integer Indent_9,
  MR_Word Lang_10,
  MR_Word InclAddr_11,
  MR_Word InstVarSet_12,
  MR_Box STATE_VARIABLE_U_0_22,
  MR_Box * STATE_VARIABLE_U_23);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(
  MR_Word TypeClassInfo_for_output_107,
  MR_String Suffix_9,
  MR_Word Inst_10,
  MR_Integer Indent_11,
  MR_Word Lang_12,
  MR_Word InclAddr_13,
  MR_Word InstVarSet_14,
  MR_Box STATE_VARIABLE_U_0_32,
  MR_Box * STATE_VARIABLE_U_33);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
  MR_Word TypeClassInfo_for_output_52,
  MR_Word HeadVar__1_1,
  MR_Integer Indent0_2,
  MR_Word Lang_3,
  MR_Word InclAddr_4,
  MR_Word InstVarSet_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
  MR_Word TypeClassInfo_for_output_29,
  MR_Word HeadVar__1_1,
  MR_Integer Indent_2,
  MR_Word Lang_3,
  MR_Word InclAddr_4,
  MR_Word InstVarSet_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(
  MR_Word TypeClassInfo_for_output_168,
  MR_String Suffix_10,
  MR_Word InstName_11,
  MR_Word FirstIndentPrinted_12,
  MR_Integer Indent_13,
  MR_Word Lang_14,
  MR_Word InclAddr_15,
  MR_Word InstVarSet_16,
  MR_Box STATE_VARIABLE_U_0_31,
  MR_Box * STATE_VARIABLE_U_32);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
  MR_Word Inst_1,
  MR_Integer * InstAddr_2);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[1][1];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[2][2] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "hlds.hlds_out.hlds_out_mode.mh"



static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0 = {
  (MR_String) "do_not_incl_addr",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1 = {
  (MR_String) "do_incl_addr",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2] = {
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1,
  &hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0
};

static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_incl_addr_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_mode",
  (MR_String) "incl_addr",
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0 },
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_value_ordered_incl_addr_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0
};

void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(
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
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_unify_mode_to_string_2_f_0(
  MR_Word UnifyMode_4,
  MR_Word InstVarSet_5)
{
  {
    MR_String String_6;
    MR_Word LHSInit_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 0))));
    MR_Word LHSFinal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 1))));
    MR_Word RHSInit_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 2))));
    MR_Word RHSFinal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 3))));
    MR_Word Var_19;
    MR_String STATE_VARIABLE_IO_16_20;
    MR_String STATE_VARIABLE_IO_18_22;
    MR_Word Var_24;
    MR_Box conv0_STATE_VARIABLE_IO_16_20;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv2_STATE_VARIABLE_IO_18_22;
    MR_Box conv3_String_6;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (LHSInit_14));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (LHSFinal_15));
    }
    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_Integer) 1, InstVarSet_5, Var_19, ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_IO_16_20);
    STATE_VARIABLE_IO_16_20 = ((MR_String) (conv0_STATE_VARIABLE_IO_16_20));
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) ((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (STATE_VARIABLE_IO_16_20)), &conv2_STATE_VARIABLE_IO_18_22);
    STATE_VARIABLE_IO_18_22 = ((MR_String) (conv2_STATE_VARIABLE_IO_18_22));
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (RHSInit_16));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (RHSFinal_17));
    }
    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_Integer) 1, InstVarSet_5, Var_24, ((MR_Box) (STATE_VARIABLE_IO_18_22)), &conv3_String_6);
    String_6 = ((MR_String) (conv3_String_6));
    return String_6;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_4_p_0(
  MR_Word UnifyMode_5,
  MR_Word InstVarSet_6)
{
  {
    MR_Word LHSInit_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_5, (MR_Integer) 0))));
    MR_Word LHSFinal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_5, (MR_Integer) 1))));
    MR_Word RHSInit_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_5, (MR_Integer) 2))));
    MR_Word RHSFinal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_5, (MR_Integer) 3))));
    MR_Word Var_22;
    MR_Word Var_27;
    MR_Box conv0_STATE_VARIABLE_IO_16_23;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv2_STATE_VARIABLE_IO_18_25;
    MR_Box conv3_STATE_VARIABLE_IO_9;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (LHSInit_17));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (LHSFinal_18));
    }
    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_Integer) 1, InstVarSet_6, Var_22, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_23);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) ((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18_25);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (RHSInit_19));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (RHSFinal_20));
    }
    parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_Integer) 1, InstVarSet_6, Var_27, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_9);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_unify_mode_list_to_string_2_f_0(
  MR_Word UnifyModes_4,
  MR_Word InstVarSet_5)
{
  {
    MR_String String_6;
    MR_Box conv0_String_6;

    hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), UnifyModes_4, InstVarSet_5, ((MR_Box) ((MR_String) "")), &conv0_String_6);
    String_6 = ((MR_String) (conv0_String_6));
    return String_6;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_list_4_p_0(
  MR_Word UnifyModes_5,
  MR_Word InstVarSet_6)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_9;

    hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), UnifyModes_5, InstVarSet_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_4_p_0(
  MR_Word TypeClassInfo_for_output_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_IO_0_3,
  MR_Box * STATE_VARIABLE_IO_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IO_4 = STATE_VARIABLE_IO_0_3;
    else
    {
      MR_Word Mode_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Modes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_IO_17_17;
      MR_Word LHSInit_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_9, (MR_Integer) 0))));
      MR_Word LHSFinal_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_9, (MR_Integer) 1))));
      MR_Word RHSInit_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_9, (MR_Integer) 2))));
      MR_Word RHSFinal_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_9, (MR_Integer) 3))));
      MR_Word Var_32;
      MR_Box STATE_VARIABLE_IO_16_33;
      MR_Box STATE_VARIABLE_IO_18_35;
      MR_Word Var_37;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (LHSInit_27));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (LHSFinal_28));
      }
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_21, (MR_Integer) 1, HeadVar__2_2, Var_32, STATE_VARIABLE_IO_0_3, &STATE_VARIABLE_IO_16_33);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_output_21)), ((MR_Box) ((MR_String) " = ")), STATE_VARIABLE_IO_16_33, &STATE_VARIABLE_IO_18_35);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (RHSInit_29));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (RHSFinal_30));
      }
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(TypeClassInfo_for_output_21, (MR_Integer) 1, HeadVar__2_2, Var_37, STATE_VARIABLE_IO_18_35, &STATE_VARIABLE_IO_17_17);
      if ((Modes_10 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_IO_4 = STATE_VARIABLE_IO_17_17;
      else
      {
        MR_Box STATE_VARIABLE_IO_19_19;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Word next_value_of_HeadVar__1_1;
        MR_Box next_value_of_STATE_VARIABLE_IO_0_3;

        func_1(((MR_Box) (TypeClassInfo_for_output_21)), ((MR_Box) ((MR_String) ", ")), STATE_VARIABLE_IO_17_17, &STATE_VARIABLE_IO_19_19);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Modes_10;
        next_value_of_STATE_VARIABLE_IO_0_3 = STATE_VARIABLE_IO_19_19;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_IO_0_3 = next_value_of_STATE_VARIABLE_IO_0_3;
        continue;
      }
    }
    break;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_unify_mode_to_string_5_f_0(
  MR_Word Inst_7,
  MR_Integer Indent_8,
  MR_Word Lang_9,
  MR_Word InclAddr_10,
  MR_Word InstVarSet_11)
{
  {
    MR_String String_12;
    MR_Box conv0_String_12;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_7_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), Inst_7, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_String) "")), &conv0_String_12);
    String_12 = ((MR_String) (conv0_String_12));
    return String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_7_p_0(
  MR_Word Inst_8,
  MR_Integer Indent_9,
  MR_Word Lang_10,
  MR_Word InclAddr_11,
  MR_Word InstVarSet_12)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_15;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_7_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), Inst_8, Indent_9, Lang_10, InclAddr_11, InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_unify_mode_list_to_string_5_f_0(
  MR_Word Insts_7,
  MR_Integer Indent_8,
  MR_Word Lang_9,
  MR_Word InclAddr_10,
  MR_Word InstVarSet_11)
{
  {
    MR_String String_12;
    MR_Box conv0_String_12;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), Insts_7, (MR_Integer) 1, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_String) "")), &conv0_String_12);
    String_12 = ((MR_String) (conv0_String_12));
    return String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_list_7_p_0(
  MR_Word Insts_8,
  MR_Integer Indent_9,
  MR_Word Lang_10,
  MR_Word InclAddr_11,
  MR_Word InstVarSet_12)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_15;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), Insts_8, (MR_Integer) 1, Indent_9, Lang_10, InclAddr_11, InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_8_p_0(
  MR_Word TypeClassInfo_for_output_37,
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Integer Indent_3,
  MR_Word Lang_4,
  MR_Word InclAddr_5,
  MR_Word InstVarSet_6,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_8 = STATE_VARIABLE_U_0_7;
    else
    {
      MR_Word UnifyMode_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word UnifyModes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_27_27;
      MR_Box STATE_VARIABLE_U_29_29;
      MR_Box STATE_VARIABLE_U_30_30;
      MR_Box STATE_VARIABLE_U_32_32;
      MR_Box STATE_VARIABLE_U_33_33;
      MR_Integer Var_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_2;
      MR_Box next_value_of_STATE_VARIABLE_U_0_7;

      parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_37, Indent_3, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_27_27);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_output_37)), ((MR_Box) ((MR_String) "argument ")), STATE_VARIABLE_U_27_27, &STATE_VARIABLE_U_29_29);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 8))));
      func_1(((MR_Box) (TypeClassInfo_for_output_37)), ((MR_Box) (ArgNum_2)), STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_30_30);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_37, (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) (TypeClassInfo_for_output_37)), ((MR_Box) ((MR_String) ":\n")), STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_7_p_0(TypeClassInfo_for_output_37, UnifyMode_17, Indent_3, Lang_4, InclAddr_5, InstVarSet_6, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_33_33);
      Var_34 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = UnifyModes_18;
      next_value_of_ArgNum_2 = Var_34;
      next_value_of_STATE_VARIABLE_U_0_7 = STATE_VARIABLE_U_33_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      ArgNum_2 = next_value_of_ArgNum_2;
      STATE_VARIABLE_U_0_7 = next_value_of_STATE_VARIABLE_U_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_7_p_0(
  MR_Word TypeClassInfo_for_output_54,
  MR_Word UnifyMode_8,
  MR_Integer Indent_9,
  MR_Word Lang_10,
  MR_Word InclAddr_11,
  MR_Word InstVarSet_12,
  MR_Box STATE_VARIABLE_U_0_22,
  MR_Box * STATE_VARIABLE_U_23)
{
  {
    MR_bool succeeded;
    MR_Word LHSInit_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_8, (MR_Integer) 0))));
    MR_Word LHSFinal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_8, (MR_Integer) 1))));
    MR_Word RHSInit_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_8, (MR_Integer) 2))));
    MR_Word RHSFinal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_8, (MR_Integer) 3))));
    MR_Integer LHSInitAddr_18;
    MR_Integer RHSInitAddr_19;
    MR_Integer LHSFinalAddr_20;
    MR_Integer RHSFinalAddr_21;
    MR_Box STATE_VARIABLE_U_24_24;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_28_28;
    MR_Box STATE_VARIABLE_U_29_29;
    MR_Box STATE_VARIABLE_U_31_31;
    MR_Box STATE_VARIABLE_U_36_36;
    MR_Box STATE_VARIABLE_U_38_38;
    MR_Box STATE_VARIABLE_U_45_45;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  LHSInit_14 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 LHSInitAddr_18  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  RHSInit_16 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 RHSInitAddr_19  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  LHSFinal_15 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 LHSFinalAddr_20  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_7_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  RHSFinal_17 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 RHSFinalAddr_21  = InstAddr;
}
    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_54, Indent_9, STATE_VARIABLE_U_0_22, &STATE_VARIABLE_U_24_24);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "old lhs inst:\n")), STATE_VARIABLE_U_24_24, &STATE_VARIABLE_U_26_26);
    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_54, (MR_String) "\n", LHSInit_14, Indent_9, Lang_10, InclAddr_11, InstVarSet_12, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_54, Indent_9, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_29_29);
    succeeded = (RHSInitAddr_19 == LHSInitAddr_18);
    if (succeeded)
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));

      func_1(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_31_31);
    }
    else
    {
      MR_Box STATE_VARIABLE_U_33_33;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));

      func_2(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "old rhs inst:\n")), STATE_VARIABLE_U_29_29, &STATE_VARIABLE_U_33_33);
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_54, (MR_String) "\n", RHSInit_16, Indent_9, Lang_10, InclAddr_11, InstVarSet_12, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_31_31);
    }
    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_54, Indent_9, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_36_36);
    succeeded = (LHSFinalAddr_20 == LHSInitAddr_18);
    if (succeeded)
    {
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));

      func_3(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
    }
    else
    {
      succeeded = (LHSFinalAddr_20 == RHSInitAddr_19);
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));

        func_4(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_42_42;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));

        func_5(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "new lhs inst:\n")), STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_42_42);
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_54, (MR_String) "\n", LHSFinal_15, Indent_9, Lang_10, InclAddr_11, InstVarSet_12, STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_38_38);
      }
    }
    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_54, Indent_9, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_45_45);
    succeeded = (RHSFinalAddr_21 == RHSInitAddr_19);
    if (succeeded)
    {
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));

      func_6(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), STATE_VARIABLE_U_45_45, STATE_VARIABLE_U_23);
    }
    else
    {
      succeeded = (RHSFinalAddr_21 == LHSFinalAddr_20);
      if (succeeded)
      {
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));

        func_7(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), STATE_VARIABLE_U_45_45, STATE_VARIABLE_U_23);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_51_51;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));

        func_8(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "new rhs inst:\n")), STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_51_51);
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_54, (MR_String) "\n", RHSFinal_17, Indent_9, Lang_10, InclAddr_11, InstVarSet_12, STATE_VARIABLE_U_51_51, STATE_VARIABLE_U_23);
      }
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_to_string_5_f_0(
  MR_Word Inst_7,
  MR_Integer Indent_8,
  MR_Word Lang_9,
  MR_Word InclAddr_10,
  MR_Word InstVarSet_11)
{
  {
    MR_String String_12;
    MR_Box conv0_String_12;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_String) "\n", Inst_7, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_String) "")), &conv0_String_12);
    String_12 = ((MR_String) (conv0_String_12));
    return String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(
  MR_Word Inst_8,
  MR_Integer Indent_9,
  MR_Word Lang_10,
  MR_Word InclAddr_11,
  MR_Word InstVarSet_12)
{
  {
    MR_Box conv0_STATE_VARIABLE_U_15;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_String) "\n", Inst_8, Indent_9, Lang_10, InclAddr_11, InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_15);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_list_to_string_5_f_0(
  MR_Word Insts_7,
  MR_Integer Indent_8,
  MR_Word Lang_9,
  MR_Word InclAddr_10,
  MR_Word InstVarSet_11)
{
  {
    MR_String String_12;
    MR_Box conv0_String_12;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), Insts_7, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_String) "")), &conv0_String_12);
    String_12 = ((MR_String) (conv0_String_12));
    return String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_list_7_p_0(
  MR_Word Insts_8,
  MR_Integer Indent_9,
  MR_Word Lang_10,
  MR_Word InclAddr_11,
  MR_Word InstVarSet_12)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_15;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), Insts_8, Indent_9, Lang_10, InclAddr_11, InstVarSet_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(
  MR_Word TypeClassInfo_for_output_107,
  MR_String Suffix_9,
  MR_Word Inst_10,
  MR_Integer Indent_11,
  MR_Word Lang_12,
  MR_Word InclAddr_13,
  MR_Word InstVarSet_14,
  MR_Box STATE_VARIABLE_U_0_32,
  MR_Box * STATE_VARIABLE_U_33)
{
  {
    MR_Box STATE_VARIABLE_U_34_34;
    MR_Box STATE_VARIABLE_U_41_41;

    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_107, Indent_11, STATE_VARIABLE_U_0_32, &STATE_VARIABLE_U_34_34);
    switch (InclAddr_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer InstAddr_16;
          MR_String InstAddrStr_17;
          MR_Box STATE_VARIABLE_U_39_39;

          hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(Inst_10, &InstAddr_16);
          mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[0]), (MR_Integer) 2, InstAddr_16, &InstAddrStr_17);
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, InstAddrStr_17, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_39_39);
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, (MR_String) ": ", STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_U_41_41 = STATE_VARIABLE_U_34_34;
        break;
    }
    switch (MR_tag((MR_Word) Inst_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box STATE_VARIABLE_U_95_95;

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, (MR_String) "free", STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_95_95);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, Suffix_9, STATE_VARIABLE_U_95_95, STATE_VARIABLE_U_33);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box STATE_VARIABLE_U_43_43;

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, (MR_String) "not_reached", STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, Suffix_9, STATE_VARIABLE_U_43_43, STATE_VARIABLE_U_33);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box STATE_VARIABLE_U_92_92;

          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, (MR_String) "free(with some type)", STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_92_92);
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, Suffix_9, STATE_VARIABLE_U_92_92, STATE_VARIABLE_U_33);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_10, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_10, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_U_99_99;

          if ((HOInstInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_3_p_0(TypeClassInfo_for_output_107, Uniq_18, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_99_99);
          else
          {
            MR_Word PredInstInfo_20 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_19), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_6_p_0(TypeClassInfo_for_output_107, (MR_Integer) 1, InstVarSet_14, Uniq_18, PredInstInfo_20, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_99_99);
          }
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, Suffix_9, STATE_VARIABLE_U_99_99, STATE_VARIABLE_U_33);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 2))));
              MR_Word BoundInsts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 3))));
              MR_Box STATE_VARIABLE_U_62_62;
              MR_Box STATE_VARIABLE_U_64_64;
              MR_Integer Var_79;
              MR_Box STATE_VARIABLE_U_86_86;
              MR_Box STATE_VARIABLE_U_87_87;
              MR_Box STATE_VARIABLE_U_89_89;
              MR_Word Uniq_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 1))) & (MR_Integer) 7);

              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_107, Uniq_101, (MR_String) "bound", STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_62_62);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, (MR_String) "(\n", STATE_VARIABLE_U_62_62, &STATE_VARIABLE_U_64_64);
              Var_79 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
              switch (Lang_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word InstResultsTerm_24;
                    MR_String InstResultsStr_25;
                    MR_Word Var_65;
                    MR_Word Var_66;
                    MR_Integer Var_68;
                    MR_Box STATE_VARIABLE_U_69_69;
                    MR_Box STATE_VARIABLE_U_71_71;
                    MR_Box STATE_VARIABLE_U_73_73;
                    MR_Integer Var_74;
                    MR_Box STATE_VARIABLE_U_75_75;
                    MR_Box STATE_VARIABLE_U_78_78;
                    MR_Box STATE_VARIABLE_U_80_80;
                    MR_Integer Var_82;
                    MR_Box STATE_VARIABLE_U_83_83;

                    Var_65 = mercury__term__context_init_0_f_0();
                    InstResultsTerm_24 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(Var_65, InstResults_22);
                    Var_66 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    InstResultsStr_25 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_66, (MR_Integer) 2, InstResultsTerm_24);
                    Var_68 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_107, Var_68, STATE_VARIABLE_U_64_64, &STATE_VARIABLE_U_69_69);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, InstResultsStr_25, STATE_VARIABLE_U_69_69, &STATE_VARIABLE_U_71_71);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, (MR_String) ",\n", STATE_VARIABLE_U_71_71, &STATE_VARIABLE_U_73_73);
                    Var_74 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_107, Var_74, STATE_VARIABLE_U_73_73, &STATE_VARIABLE_U_75_75);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, (MR_String) "[\n", STATE_VARIABLE_U_75_75, &STATE_VARIABLE_U_78_78);
                    hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(TypeClassInfo_for_output_107, BoundInsts_23, Var_79, Lang_12, InclAddr_13, InstVarSet_14, STATE_VARIABLE_U_78_78, &STATE_VARIABLE_U_80_80);
                    Var_82 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                    parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_107, Var_82, STATE_VARIABLE_U_80_80, &STATE_VARIABLE_U_83_83);
                    parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, (MR_String) "]\n", STATE_VARIABLE_U_83_83, &STATE_VARIABLE_U_86_86);
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(TypeClassInfo_for_output_107, BoundInsts_23, Var_79, Lang_12, InclAddr_13, InstVarSet_14, STATE_VARIABLE_U_64_64, &STATE_VARIABLE_U_86_86);
                  break;
              }
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_107, Indent_11, STATE_VARIABLE_U_86_86, &STATE_VARIABLE_U_87_87);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, (MR_String) ")", STATE_VARIABLE_U_87_87, &STATE_VARIABLE_U_89_89);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, Suffix_9, STATE_VARIABLE_U_89_89, STATE_VARIABLE_U_33);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box STATE_VARIABLE_U_59_59;
              MR_Word Uniq_104 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 2))));

              if ((HOInstInfo_105 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_107, Uniq_104, (MR_String) "ground", STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_59_59);
              else
              {
                MR_Word PredInstInfo_102 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_105), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_6_p_0(TypeClassInfo_for_output_107, (MR_Integer) 1, InstVarSet_14, Uniq_104, PredInstInfo_102, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_59_59);
              }
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, Suffix_9, STATE_VARIABLE_U_59_59, STATE_VARIABLE_U_33);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 1))));
              MR_Box STATE_VARIABLE_U_54_54;

              parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_output_107, InstVarSet_14, (MR_Integer) 0, Var_26, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_54_54);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, Suffix_9, STATE_VARIABLE_U_54_54, STATE_VARIABLE_U_33);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 1))));
              MR_Word ConstrainedInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 2))));
              MR_Box STATE_VARIABLE_U_51_51;

              parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_6_p_0(TypeClassInfo_for_output_107, (MR_Integer) 1, InstVarSet_14, Vars_27, ConstrainedInst_28, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_51_51);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_107, Suffix_9, STATE_VARIABLE_U_51_51, STATE_VARIABLE_U_33);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 1))));

              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(TypeClassInfo_for_output_107, Suffix_9, InstName_31, (MR_Integer) 1, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, STATE_VARIABLE_U_41_41, STATE_VARIABLE_U_33);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 1))));
              MR_Word Args_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 2))));
              MR_Word Var_47;

              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Name_29));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Args_30));
              }
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(TypeClassInfo_for_output_107, Suffix_9, Var_47, (MR_Integer) 1, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, STATE_VARIABLE_U_41_41, STATE_VARIABLE_U_33);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_7_p_0(
  MR_Word TypeClassInfo_for_output_52,
  MR_Word HeadVar__1_1,
  MR_Integer Indent0_2,
  MR_Word Lang_3,
  MR_Word InclAddr_4,
  MR_Word InstVarSet_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_0_6;
    else
    {
      MR_Word BoundInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_15, (MR_Integer) 0))));
      MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_15, (MR_Integer) 1))));
      MR_Integer Indent1_24 = (MR_Integer) ((MR_Unsigned) Indent0_2 + (MR_Unsigned) 1);
      MR_Integer Indent2_25 = (MR_Integer) ((MR_Unsigned) Indent1_24 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_U_47_47;

      if ((Args_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_43_43;
        MR_Box STATE_VARIABLE_U_45_45;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_52, Indent1_24, STATE_VARIABLE_U_0_6, &STATE_VARIABLE_U_43_43);
        parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(TypeClassInfo_for_output_52, (MR_Integer) 0, ConsId_22, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_47_47);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_34_34;
        MR_Box STATE_VARIABLE_U_36_36;
        MR_Box STATE_VARIABLE_U_38_38;
        MR_Box STATE_VARIABLE_U_39_39;
        MR_Box STATE_VARIABLE_U_40_40;
        MR_Word Inst_60;
        MR_Word Insts_61;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_52, Indent1_24, STATE_VARIABLE_U_0_6, &STATE_VARIABLE_U_34_34);
        parse_tree__mercury_to_mercury__mercury_format_cons_id_4_p_0(TypeClassInfo_for_output_52, (MR_Integer) 1, ConsId_22, STATE_VARIABLE_U_34_34, &STATE_VARIABLE_U_36_36);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) "(\n")), STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_38_38);
        Inst_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_23, (MR_Integer) 0))));
        Insts_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_23, (MR_Integer) 1))));
        if ((Insts_61 == (MR_Word) ((MR_Unsigned) 0U)))
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_52, (MR_String) "\n", Inst_60, Indent2_25, Lang_3, InclAddr_4, InstVarSet_5, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_39_39);
        else
        {
          MR_Box STATE_VARIABLE_U_27_72;
          MR_Word Inst_102;
          MR_Word Insts_103;
          MR_String Suffix_109;
          MR_Box STATE_VARIABLE_U_27_114;

          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_52, (MR_String) ",\n", Inst_60, Indent2_25, Lang_3, InclAddr_4, InstVarSet_5, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_27_72);
          Inst_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_61, (MR_Integer) 0))));
          Insts_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_61, (MR_Integer) 1))));
          if ((Insts_103 == (MR_Word) ((MR_Unsigned) 0U)))
            Suffix_109 = (MR_String) "\n";
          else
            Suffix_109 = (MR_String) ",\n";
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_52, Suffix_109, Inst_102, Indent2_25, Lang_3, InclAddr_4, InstVarSet_5, STATE_VARIABLE_U_27_72, &STATE_VARIABLE_U_27_114);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(TypeClassInfo_for_output_52, Insts_103, Indent2_25, Lang_3, InclAddr_4, InstVarSet_5, STATE_VARIABLE_U_27_114, &STATE_VARIABLE_U_39_39);
        }
        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_52, Indent1_24, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_40_40);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ")\n")), STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_47_47);
      }
      if ((BoundInsts_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_47_47;
      else
      {
        MR_Box STATE_VARIABLE_U_48_48;
        MR_Box STATE_VARIABLE_U_50_50;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Word next_value_of_HeadVar__1_1;
        MR_Box next_value_of_STATE_VARIABLE_U_0_6;

        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_52, Indent0_2, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_48_48);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_52, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_52)), ((MR_Box) ((MR_String) ";\n")), STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_50_50);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_16;
        next_value_of_STATE_VARIABLE_U_0_6 = STATE_VARIABLE_U_50_50;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_U_0_6 = next_value_of_STATE_VARIABLE_U_0_6;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(
  MR_Word TypeClassInfo_for_output_29,
  MR_Word HeadVar__1_1,
  MR_Integer Indent_2,
  MR_Word Lang_3,
  MR_Word InclAddr_4,
  MR_Word InstVarSet_5,
  MR_Box STATE_VARIABLE_U_0_6,
  MR_Box * STATE_VARIABLE_U_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_7 = STATE_VARIABLE_U_0_6;
    else
    {
      MR_Word Inst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Suffix_22;
      MR_Box STATE_VARIABLE_U_27_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Box next_value_of_STATE_VARIABLE_U_0_6;

      if ((Insts_16 == (MR_Word) ((MR_Unsigned) 0U)))
        Suffix_22 = (MR_String) "\n";
      else
        Suffix_22 = (MR_String) ",\n";
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_29, Suffix_22, Inst_15, Indent_2, Lang_3, InclAddr_4, InstVarSet_5, STATE_VARIABLE_U_0_6, &STATE_VARIABLE_U_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Insts_16;
      next_value_of_STATE_VARIABLE_U_0_6 = STATE_VARIABLE_U_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_U_0_6 = next_value_of_STATE_VARIABLE_U_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(
  MR_Word TypeClassInfo_for_output_168,
  MR_String Suffix_10,
  MR_Word InstName_11,
  MR_Word FirstIndentPrinted_12,
  MR_Integer Indent_13,
  MR_Word Lang_14,
  MR_Word InclAddr_15,
  MR_Word InstVarSet_16,
  MR_Box STATE_VARIABLE_U_0_31,
  MR_Box * STATE_VARIABLE_U_32)
{
  {
    MR_Box STATE_VARIABLE_U_33_33;

    switch (FirstIndentPrinted_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_168, Indent_13, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_33_33);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_U_33_33 = STATE_VARIABLE_U_0_31;
        break;
    }
    switch (MR_tag((MR_Word) InstName_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_11, (MR_Integer) 0))));
          MR_Word Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_11, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_U_153_153;

          if ((Args_19 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(TypeClassInfo_for_output_168, Name_18, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_153_153);
          else
          {
            MR_Box STATE_VARIABLE_U_144_144;
            MR_Box STATE_VARIABLE_U_146_146;
            MR_Integer Var_147;
            MR_Box STATE_VARIABLE_U_148_148;
            MR_Box STATE_VARIABLE_U_150_150;

            parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(TypeClassInfo_for_output_168, Name_18, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_144_144);
            parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "(\n", STATE_VARIABLE_U_144_144, &STATE_VARIABLE_U_146_146);
            Var_147 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(TypeClassInfo_for_output_168, Args_19, Var_147, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_146_146, &STATE_VARIABLE_U_148_148);
            parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_168, Indent_13, STATE_VARIABLE_U_148_148, &STATE_VARIABLE_U_150_150);
            parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ")", STATE_VARIABLE_U_150_150, &STATE_VARIABLE_U_153_153);
          }
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, Suffix_10, STATE_VARIABLE_U_153_153, STATE_VARIABLE_U_32);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsLive_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Real_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_11, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word InstA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_11, (MR_Integer) 1))));
          MR_Word InstB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_11, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_U_129_129;
          MR_Box STATE_VARIABLE_U_130_130;
          MR_Box STATE_VARIABLE_U_131_131;
          MR_Box STATE_VARIABLE_U_133_133;
          MR_Word Var_134;
          MR_Integer Var_135;
          MR_Box STATE_VARIABLE_U_136_136;
          MR_Word Var_137;
          MR_Box STATE_VARIABLE_U_140_140;
          MR_Box STATE_VARIABLE_U_142_142;

          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "\044unify(", STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_129_129);
          parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(TypeClassInfo_for_output_168, IsLive_22, STATE_VARIABLE_U_129_129, &STATE_VARIABLE_U_130_130);
          parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(TypeClassInfo_for_output_168, Real_23, STATE_VARIABLE_U_130_130, &STATE_VARIABLE_U_131_131);
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "\n", STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_133_133);
          {
            Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (InstB_25));
            MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (InstA_24));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
          }
          Var_135 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(TypeClassInfo_for_output_168, Var_134, Var_135, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_133_133, &STATE_VARIABLE_U_136_136);
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_168, Indent_13, STATE_VARIABLE_U_136_136, &STATE_VARIABLE_U_140_140);
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ")", STATE_VARIABLE_U_140_140, &STATE_VARIABLE_U_142_142);
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, Suffix_10, STATE_VARIABLE_U_142_142, STATE_VARIABLE_U_32);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box STATE_VARIABLE_U_117_117;
          MR_Integer Var_119;
          MR_Box STATE_VARIABLE_U_120_120;
          MR_Box STATE_VARIABLE_U_124_124;
          MR_Box STATE_VARIABLE_U_126_126;
          MR_Word InstB_156 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_11, (MR_Integer) 1))));
          MR_Word Inst_178 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_11, (MR_Integer) 0))));
          MR_Word Insts_179;
          MR_Box STATE_VARIABLE_U_27_190;
          MR_Word Inst_199;
          MR_Word Insts_200;
          MR_Box STATE_VARIABLE_U_27_211;

          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "\044merge_inst(\n", STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_117_117);
          {
            Insts_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Insts_179, 0) = ((MR_Box) (InstB_156));
            MR_hl_field(MR_mktag(1), Insts_179, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_119 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_168, (MR_String) ",\n", Inst_178, Var_119, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_117_117, &STATE_VARIABLE_U_27_190);
          Inst_199 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_179, (MR_Integer) 0))));
          Insts_200 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_179, (MR_Integer) 1))));
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_8_p_0(TypeClassInfo_for_output_168, (MR_String) "\n", Inst_199, Var_119, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_27_190, &STATE_VARIABLE_U_27_211);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_7_p_0(TypeClassInfo_for_output_168, Insts_200, Var_119, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_27_211, &STATE_VARIABLE_U_120_120);
          parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_168, Indent_13, STATE_VARIABLE_U_120_120, &STATE_VARIABLE_U_124_124);
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ")", STATE_VARIABLE_U_124_124, &STATE_VARIABLE_U_126_126);
          parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, Suffix_10, STATE_VARIABLE_U_126_126, STATE_VARIABLE_U_32);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 1))));
              MR_Word Uniq_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
              MR_Box STATE_VARIABLE_U_100_100;
              MR_Box STATE_VARIABLE_U_101_101;
              MR_Box STATE_VARIABLE_U_102_102;
              MR_Box STATE_VARIABLE_U_104_104;
              MR_Box STATE_VARIABLE_U_106_106;
              MR_Integer Var_109;
              MR_Box STATE_VARIABLE_U_110_110;
              MR_Box STATE_VARIABLE_U_112_112;
              MR_Box STATE_VARIABLE_U_114_114;
              MR_Word IsLive_157 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_158 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 2))) & (MR_Integer) 1);

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "\044ground(", STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_100_100);
              parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(TypeClassInfo_for_output_168, IsLive_157, STATE_VARIABLE_U_100_100, &STATE_VARIABLE_U_101_101);
              parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(TypeClassInfo_for_output_168, Real_158, STATE_VARIABLE_U_101_101, &STATE_VARIABLE_U_102_102);
              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_168, Uniq_27, (MR_String) "shared", STATE_VARIABLE_U_102_102, &STATE_VARIABLE_U_104_104);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ",\n", STATE_VARIABLE_U_104_104, &STATE_VARIABLE_U_106_106);
              Var_109 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(TypeClassInfo_for_output_168, (MR_String) "\n", SubInstName_26, (MR_Integer) 0, Var_109, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_110_110);
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_168, Indent_13, STATE_VARIABLE_U_110_110, &STATE_VARIABLE_U_112_112);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ")", STATE_VARIABLE_U_112_112, &STATE_VARIABLE_U_114_114);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, Suffix_10, STATE_VARIABLE_U_114_114, STATE_VARIABLE_U_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box STATE_VARIABLE_U_83_83;
              MR_Box STATE_VARIABLE_U_84_84;
              MR_Box STATE_VARIABLE_U_85_85;
              MR_Box STATE_VARIABLE_U_87_87;
              MR_Box STATE_VARIABLE_U_89_89;
              MR_Integer Var_92;
              MR_Box STATE_VARIABLE_U_93_93;
              MR_Box STATE_VARIABLE_U_95_95;
              MR_Box STATE_VARIABLE_U_97_97;
              MR_Word IsLive_159 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_160 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SubInstName_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 1))));
              MR_Word Uniq_162 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "\044any(", STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_83_83);
              parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_3_p_0(TypeClassInfo_for_output_168, IsLive_159, STATE_VARIABLE_U_83_83, &STATE_VARIABLE_U_84_84);
              parse_tree__parse_tree_out_inst__mercury_format_real_comma_3_p_0(TypeClassInfo_for_output_168, Real_160, STATE_VARIABLE_U_84_84, &STATE_VARIABLE_U_85_85);
              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_168, Uniq_162, (MR_String) "shared", STATE_VARIABLE_U_85_85, &STATE_VARIABLE_U_87_87);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ",\n", STATE_VARIABLE_U_87_87, &STATE_VARIABLE_U_89_89);
              Var_92 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(TypeClassInfo_for_output_168, (MR_String) "\n", SubInstName_161, (MR_Integer) 0, Var_92, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_89_89, &STATE_VARIABLE_U_93_93);
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_168, Indent_13, STATE_VARIABLE_U_93_93, &STATE_VARIABLE_U_95_95);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ")", STATE_VARIABLE_U_95_95, &STATE_VARIABLE_U_97_97);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, Suffix_10, STATE_VARIABLE_U_97_97, STATE_VARIABLE_U_32);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box STATE_VARIABLE_U_72_72;
              MR_Integer Var_75;
              MR_Box STATE_VARIABLE_U_76_76;
              MR_Box STATE_VARIABLE_U_78_78;
              MR_Box STATE_VARIABLE_U_80_80;
              MR_Word SubInstName_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "\044shared_inst(\n", STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_72_72);
              Var_75 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(TypeClassInfo_for_output_168, (MR_String) "\n", SubInstName_163, (MR_Integer) 0, Var_75, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_72_72, &STATE_VARIABLE_U_76_76);
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_168, Indent_13, STATE_VARIABLE_U_76_76, &STATE_VARIABLE_U_78_78);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ")", STATE_VARIABLE_U_78_78, &STATE_VARIABLE_U_80_80);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, Suffix_10, STATE_VARIABLE_U_80_80, STATE_VARIABLE_U_32);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box STATE_VARIABLE_U_61_61;
              MR_Integer Var_64;
              MR_Box STATE_VARIABLE_U_65_65;
              MR_Box STATE_VARIABLE_U_67_67;
              MR_Box STATE_VARIABLE_U_69_69;
              MR_Word SubInstName_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "\044mostly_uniq_inst(\n", STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_61_61);
              Var_64 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(TypeClassInfo_for_output_168, (MR_String) "\n", SubInstName_164, (MR_Integer) 0, Var_64, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_61_61, &STATE_VARIABLE_U_65_65);
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_168, Indent_13, STATE_VARIABLE_U_65_65, &STATE_VARIABLE_U_67_67);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ")", STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_69_69);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, Suffix_10, STATE_VARIABLE_U_69_69, STATE_VARIABLE_U_32);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Uniqueness_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Type_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 2))));
              MR_Word TypeVarSet_30;
              MR_Box STATE_VARIABLE_U_50_50;
              MR_Box STATE_VARIABLE_U_52_52;
              MR_Box STATE_VARIABLE_U_54_54;
              MR_Box STATE_VARIABLE_U_56_56;
              MR_Box STATE_VARIABLE_U_58_58;

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "\044typed_ground(", STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_50_50);
              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_4_p_0(TypeClassInfo_for_output_168, Uniqueness_28, (MR_String) "shared", STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_52_52);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ", ", STATE_VARIABLE_U_52_52, &STATE_VARIABLE_U_54_54);
              mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_30);
              parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(TypeClassInfo_for_output_168, TypeVarSet_30, (MR_Integer) 0, Type_29, STATE_VARIABLE_U_54_54, &STATE_VARIABLE_U_56_56);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ")", STATE_VARIABLE_U_56_56, &STATE_VARIABLE_U_58_58);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, Suffix_10, STATE_VARIABLE_U_58_58, STATE_VARIABLE_U_32);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box STATE_VARIABLE_U_35_35;
              MR_Box STATE_VARIABLE_U_37_37;
              MR_Box STATE_VARIABLE_U_39_39;
              MR_Integer Var_42;
              MR_Box STATE_VARIABLE_U_43_43;
              MR_Box STATE_VARIABLE_U_45_45;
              MR_Box STATE_VARIABLE_U_47_47;
              MR_Word SubInstName_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 2))));
              MR_Word Type_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_11, (MR_Integer) 1))));
              MR_Word TypeVarSet_167;

              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) "\044typed_inst(", STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_35_35);
              mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_167);
              parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(TypeClassInfo_for_output_168, TypeVarSet_167, (MR_Integer) 0, Type_166, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_37_37);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ",\n", STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_39_39);
              Var_42 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_9_p_0(TypeClassInfo_for_output_168, (MR_String) "\n", SubInstName_165, (MR_Integer) 0, Var_42, Lang_14, InclAddr_15, InstVarSet_16, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_43_43);
              parse_tree__mercury_to_mercury__mercury_format_tabs_3_p_0(TypeClassInfo_for_output_168, Indent_13, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, (MR_String) ")", STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_47_47);
              parse_tree__parse_tree_out_info__add_string_3_p_0(TypeClassInfo_for_output_168, Suffix_10, STATE_VARIABLE_U_47_47, STATE_VARIABLE_U_32);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
  MR_Word Inst_1,
  MR_Integer * InstAddr_2)
{
  {
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst =  Inst_1 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 *InstAddr_2  = InstAddr;
}
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Integer Indent_9,
  MR_Word InstMap_10)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_10);
    if (succeeded)
      mercury__io__write_string_3_p_0((MR_String) "unreachable");
    else
    {
      MR_Word AssocList_12;

      hlds__instmap__instmap_to_assoc_list_2_p_0(InstMap_10, &AssocList_12);
      hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(VarSet_7, VarNamePrint_8, Indent_9, AssocList_12);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(
  MR_Word VarSet_1,
  MR_Word VarNamePrint_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_16;
      MR_Word Inst_17;
      MR_Word VarsInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word InstVarSet_20;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));

      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      Inst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, VarNamePrint_2, Var_16);
      mercury__io__write_string_3_p_0((MR_String) " -> ");
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_20);
      parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0((MR_Integer) 1, InstVarSet_20, Inst_17);
      if (!((VarsInsts_18 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word next_value_of_HeadVar__4_4;

        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_3);
        mercury__io__write_string_3_p_0((MR_String) "%            ");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = VarsInsts_18;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_out__hlds_out_mode__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__type_ctor_info_incl_addr_0);
}

void mercury__hlds__hlds_out__hlds_out_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_mode__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_out.hlds_out_mode.
