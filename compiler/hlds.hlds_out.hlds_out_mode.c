/*
** Automatically generated from `hlds_out_mode.m'
** by the Mercury compiler,
** version rotd-2021-12-01
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_ordinal_ordered_incl_addr_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_9_p_0(
  MR_Word TypeClassInfo_for_output_40,
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Integer Indent_3,
  MR_Word Lang_4,
  MR_Word InclAddr_5,
  MR_Word InstVarSet_6,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0(
  MR_Word TypeClassInfo_for_output_56,
  MR_Word UnifyMode_9,
  MR_Integer Indent_10,
  MR_Word Lang_11,
  MR_Word InclAddr_12,
  MR_Word InstVarSet_13,
  MR_Box S_14,
  MR_Box STATE_VARIABLE_U_0_24,
  MR_Box * STATE_VARIABLE_U_25);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(
  MR_Word TypeClassInfo_for_output_109,
  MR_String Suffix_10,
  MR_Word Inst_11,
  MR_Integer Indent_12,
  MR_Word Lang_13,
  MR_Word InclAddr_14,
  MR_Word InstVarSet_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_34,
  MR_Box * STATE_VARIABLE_U_35);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_8_p_0(
  MR_Word TypeClassInfo_for_output_55,
  MR_Word HeadVar__1_1,
  MR_Integer Indent0_2,
  MR_Word Lang_3,
  MR_Word InclAddr_4,
  MR_Word InstVarSet_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(
  MR_Word TypeClassInfo_for_output_32,
  MR_Word HeadVar__1_1,
  MR_Integer Indent_2,
  MR_Word Lang_3,
  MR_Word InclAddr_4,
  MR_Word InstVarSet_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(
  MR_Word TypeClassInfo_for_output_170,
  MR_String Suffix_11,
  MR_Word InstName_12,
  MR_Word FirstIndentPrinted_13,
  MR_Integer Indent_14,
  MR_Word Lang_15,
  MR_Word InclAddr_16,
  MR_Word InstVarSet_17,
  MR_Box S_18,
  MR_Box STATE_VARIABLE_U_0_33,
  MR_Box * STATE_VARIABLE_U_34);

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


static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[2][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[1][1];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[2][3] = {
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

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_ordinal_ordered_incl_addr_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_mode",
  (MR_String) "incl_addr",
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0 },
  {     hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_ordinal_ordered_incl_addr_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0,

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
    MR_Word LHSInit_16;
    MR_Word LHSFinal_17;
    MR_Word RHSInit_18;
    MR_Word RHSFinal_19;
    MR_Word Var_21;
    MR_String STATE_VARIABLE_U_18_22;
    MR_String STATE_VARIABLE_U_20_24;
    MR_Word Var_26;
    MR_Box conv0_STATE_VARIABLE_U_18_22;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv2_STATE_VARIABLE_U_20_24;
    MR_Box conv3_String_6;

    LHSInit_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 0))));
    LHSFinal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 1))));
    RHSInit_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 2))));
    RHSFinal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 3))));
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (LHSInit_16));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (LHSFinal_17));
    }
    parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_Integer) 1, InstVarSet_5, Var_21, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_18_22);
    STATE_VARIABLE_U_18_22 = ((MR_String) (conv0_STATE_VARIABLE_U_18_22));
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) ((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_22)), &conv2_STATE_VARIABLE_U_20_24);
    STATE_VARIABLE_U_20_24 = ((MR_String) (conv2_STATE_VARIABLE_U_20_24));
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (RHSInit_18));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (RHSFinal_19));
    }
    parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_Integer) 1, InstVarSet_5, Var_26, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_20_24)), &conv3_String_6);
    String_6 = ((MR_String) (conv3_String_6));
    return String_6;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_5_p_0(
  MR_Word Stream_6,
  MR_Word UnifyMode_7,
  MR_Word InstVarSet_8)
{
  {
    MR_Word LHSInit_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_7, (MR_Integer) 0))));
    MR_Word LHSFinal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_7, (MR_Integer) 1))));
    MR_Word RHSInit_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_7, (MR_Integer) 2))));
    MR_Word RHSFinal_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_7, (MR_Integer) 3))));
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Box conv0_STATE_VARIABLE_U_18_26;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv2_STATE_VARIABLE_U_20_28;
    MR_Box conv3_STATE_VARIABLE_IO_11;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (LHSInit_20));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (LHSFinal_21));
    }
    parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_Integer) 1, InstVarSet_8, Var_25, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_18_26);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    func_1(((MR_Box) ((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_20_28);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (RHSInit_22));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (RHSFinal_23));
    }
    parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_Integer) 1, InstVarSet_8, Var_30, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_11);
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

    hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), UnifyModes_4, InstVarSet_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_6);
    String_6 = ((MR_String) (conv0_String_6));
    return String_6;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_list_5_p_0(
  MR_Word Stream_6,
  MR_Word UnifyModes_7,
  MR_Word InstVarSet_8)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11;

    hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), UnifyModes_7, InstVarSet_8, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0(
  MR_Word TypeClassInfo_for_output_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box STATE_VARIABLE_U_0_4,
  MR_Box * STATE_VARIABLE_U_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_0_4;
    else
    {
      MR_Word Mode_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Modes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_20_20;
      MR_Word LHSInit_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 0))));
      MR_Word LHSFinal_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 1))));
      MR_Word RHSInit_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 2))));
      MR_Word RHSFinal_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 3))));
      MR_Word Var_36;
      MR_Box STATE_VARIABLE_U_18_37;
      MR_Box STATE_VARIABLE_U_20_39;
      MR_Word Var_41;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (LHSInit_31));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (LHSFinal_32));
      }
      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_24, (MR_Integer) 1, HeadVar__2_2, Var_36, HeadVar__3_3, STATE_VARIABLE_U_0_4, &STATE_VARIABLE_U_18_37);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) " = ")), HeadVar__3_3, STATE_VARIABLE_U_18_37, &STATE_VARIABLE_U_20_39);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (RHSInit_33));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (RHSFinal_34));
      }
      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_24, (MR_Integer) 1, HeadVar__2_2, Var_41, HeadVar__3_3, STATE_VARIABLE_U_20_39, &STATE_VARIABLE_U_20_20);
      if ((Modes_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_20_20;
      else
      {
        MR_Box STATE_VARIABLE_U_22_22;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_24, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Word next_value_of_HeadVar__1_1;
        MR_Box next_value_of_STATE_VARIABLE_U_0_4;

        func_1(((MR_Box) (TypeClassInfo_for_output_24)), ((MR_Box) ((MR_String) ", ")), HeadVar__3_3, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Modes_12;
        next_value_of_STATE_VARIABLE_U_0_4 = STATE_VARIABLE_U_22_22;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_U_0_4 = next_value_of_STATE_VARIABLE_U_0_4;
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

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), Inst_7, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_12);
    String_12 = ((MR_String) (conv0_String_12));
    return String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_8_p_0(
  MR_Word Stream_9,
  MR_Word Inst_10,
  MR_Integer Indent_11,
  MR_Word Lang_12,
  MR_Word InclAddr_13,
  MR_Word InstVarSet_14)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_17;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), Inst_10, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
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

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), Insts_7, (MR_Integer) 1, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_12);
    String_12 = ((MR_String) (conv0_String_12));
    return String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_list_8_p_0(
  MR_Word Stream_9,
  MR_Word Insts_10,
  MR_Integer Indent_11,
  MR_Word Lang_12,
  MR_Word InclAddr_13,
  MR_Word InstVarSet_14)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_17;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), Insts_10, (MR_Integer) 1, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_9_p_0(
  MR_Word TypeClassInfo_for_output_40,
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Integer Indent_3,
  MR_Word Lang_4,
  MR_Word InclAddr_5,
  MR_Word InstVarSet_6,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_9 = STATE_VARIABLE_U_0_8;
    else
    {
      MR_Word UnifyMode_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word UnifyModes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_U_30_30;
      MR_Box STATE_VARIABLE_U_32_32;
      MR_Box STATE_VARIABLE_U_33_33;
      MR_Box STATE_VARIABLE_U_35_35;
      MR_Box STATE_VARIABLE_U_36_36;
      MR_Integer Var_37;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_2;
      MR_Box next_value_of_STATE_VARIABLE_U_0_8;

      parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_40, Indent_3, S_7, STATE_VARIABLE_U_0_8, &STATE_VARIABLE_U_30_30);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_40, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_output_40)), ((MR_Box) ((MR_String) "argument ")), S_7, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_32_32);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_40, (MR_Integer) 0)), (MR_Integer) 8))));
      func_1(((MR_Box) (TypeClassInfo_for_output_40)), ((MR_Box) (ArgNum_2)), S_7, STATE_VARIABLE_U_32_32, &STATE_VARIABLE_U_33_33);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_40, (MR_Integer) 0)), (MR_Integer) 5))));
      func_2(((MR_Box) (TypeClassInfo_for_output_40)), ((MR_Box) ((MR_String) ":\n")), S_7, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_35_35);
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0(TypeClassInfo_for_output_40, UnifyMode_19, Indent_3, Lang_4, InclAddr_5, InstVarSet_6, S_7, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_36_36);
      Var_37 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = UnifyModes_20;
      next_value_of_ArgNum_2 = Var_37;
      next_value_of_STATE_VARIABLE_U_0_8 = STATE_VARIABLE_U_36_36;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      ArgNum_2 = next_value_of_ArgNum_2;
      STATE_VARIABLE_U_0_8 = next_value_of_STATE_VARIABLE_U_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0(
  MR_Word TypeClassInfo_for_output_56,
  MR_Word UnifyMode_9,
  MR_Integer Indent_10,
  MR_Word Lang_11,
  MR_Word InclAddr_12,
  MR_Word InstVarSet_13,
  MR_Box S_14,
  MR_Box STATE_VARIABLE_U_0_24,
  MR_Box * STATE_VARIABLE_U_25)
{
  {
    MR_bool succeeded;
    MR_Word LHSInit_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 0))));
    MR_Word LHSFinal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 1))));
    MR_Word RHSInit_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 2))));
    MR_Word RHSFinal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_9, (MR_Integer) 3))));
    MR_Integer LHSInitAddr_20;
    MR_Integer RHSInitAddr_21;
    MR_Integer LHSFinalAddr_22;
    MR_Integer RHSFinalAddr_23;
    MR_Box STATE_VARIABLE_U_26_26;
    MR_Box STATE_VARIABLE_U_28_28;
    MR_Box STATE_VARIABLE_U_30_30;
    MR_Box STATE_VARIABLE_U_31_31;
    MR_Box STATE_VARIABLE_U_33_33;
    MR_Box STATE_VARIABLE_U_38_38;
    MR_Box STATE_VARIABLE_U_40_40;
    MR_Box STATE_VARIABLE_U_47_47;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst = LHSInit_16 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 LHSInitAddr_20  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst = RHSInit_18 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 RHSInitAddr_21  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst = LHSFinal_17 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 LHSFinalAddr_22  = InstAddr;
}
{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst = RHSFinal_19 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 RHSFinalAddr_23  = InstAddr;
}
    parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_56, Indent_10, S_14, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_26_26);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "old lhs inst:\n")), S_14, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_56, (MR_String) "\n", LHSInit_16, Indent_10, Lang_11, InclAddr_12, InstVarSet_13, S_14, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
    parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_56, Indent_10, S_14, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_31_31);
    succeeded = (RHSInitAddr_21 == LHSInitAddr_20);
    if (succeeded)
    {
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

      func_1(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), S_14, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_33_33);
    }
    else
    {
      MR_Box STATE_VARIABLE_U_35_35;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

      func_2(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "old rhs inst:\n")), S_14, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_35_35);
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_56, (MR_String) "\n", RHSInit_18, Indent_10, Lang_11, InclAddr_12, InstVarSet_13, S_14, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_33_33);
    }
    parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_56, Indent_10, S_14, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_38_38);
    succeeded = (LHSFinalAddr_22 == LHSInitAddr_20);
    if (succeeded)
    {
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

      func_3(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), S_14, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
    }
    else
    {
      succeeded = (LHSFinalAddr_22 == RHSInitAddr_21);
      if (succeeded)
      {
        void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

        func_4(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), S_14, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_44_44;
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

        func_5(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "new lhs inst:\n")), S_14, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_44_44);
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_56, (MR_String) "\n", LHSFinal_17, Indent_10, Lang_11, InclAddr_12, InstVarSet_13, S_14, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_40_40);
      }
    }
    parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_56, Indent_10, S_14, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_47_47);
    succeeded = (RHSFinalAddr_23 == RHSInitAddr_21);
    if (succeeded)
    {
      void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

      func_6(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), S_14, STATE_VARIABLE_U_47_47, STATE_VARIABLE_U_25);
    }
    else
    {
      succeeded = (RHSFinalAddr_23 == LHSFinalAddr_22);
      if (succeeded)
      {
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

        func_7(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), S_14, STATE_VARIABLE_U_47_47, STATE_VARIABLE_U_25);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_53_53;
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_56, (MR_Integer) 0)), (MR_Integer) 5))));

        func_8(((MR_Box) (TypeClassInfo_for_output_56)), ((MR_Box) ((MR_String) "new rhs inst:\n")), S_14, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_53_53);
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_56, (MR_String) "\n", RHSFinal_19, Indent_10, Lang_11, InclAddr_12, InstVarSet_13, S_14, STATE_VARIABLE_U_53_53, STATE_VARIABLE_U_25);
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

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_String) "\n", Inst_7, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_12);
    String_12 = ((MR_String) (conv0_String_12));
    return String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_8_p_0(
  MR_Word Stream_9,
  MR_Word Inst_10,
  MR_Integer Indent_11,
  MR_Word Lang_12,
  MR_Word InclAddr_13,
  MR_Word InstVarSet_14)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_17;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_String) "\n", Inst_10, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
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

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), Insts_7, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_12);
    String_12 = ((MR_String) (conv0_String_12));
    return String_12;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_list_8_p_0(
  MR_Word Stream_9,
  MR_Word Insts_10,
  MR_Integer Indent_11,
  MR_Word Lang_12,
  MR_Word InclAddr_13,
  MR_Word InstVarSet_14)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_17;

    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), Insts_10, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(
  MR_Word TypeClassInfo_for_output_109,
  MR_String Suffix_10,
  MR_Word Inst_11,
  MR_Integer Indent_12,
  MR_Word Lang_13,
  MR_Word InclAddr_14,
  MR_Word InstVarSet_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_34,
  MR_Box * STATE_VARIABLE_U_35)
{
  {
    MR_Box STATE_VARIABLE_U_36_36;
    MR_Box STATE_VARIABLE_U_43_43;

    parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_109, Indent_12, S_16, STATE_VARIABLE_U_0_34, &STATE_VARIABLE_U_36_36);
    switch (InclAddr_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer InstAddr_18;
          MR_String InstAddrStr_19;
          MR_Box STATE_VARIABLE_U_41_41;

          hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(Inst_11, &InstAddr_18);
          mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[0]), (MR_Integer) 2, InstAddr_18, &InstAddrStr_19);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, InstAddrStr_19, S_16, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_41_41);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, (MR_String) ": ", S_16, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_U_43_43 = STATE_VARIABLE_U_36_36;
        break;
    }
    switch (MR_tag((MR_Word) Inst_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box STATE_VARIABLE_U_97_97;

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, (MR_String) "free", S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_97_97);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, Suffix_10, S_16, STATE_VARIABLE_U_97_97, STATE_VARIABLE_U_35);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box STATE_VARIABLE_U_45_45;

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, (MR_String) "not_reached", S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, Suffix_10, S_16, STATE_VARIABLE_U_45_45, STATE_VARIABLE_U_35);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box STATE_VARIABLE_U_94_94;

          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, (MR_String) "free(with some type)", S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_94_94);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, Suffix_10, S_16, STATE_VARIABLE_U_94_94, STATE_VARIABLE_U_35);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_11, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_11, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_U_101_101;

          if ((HOInstInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_4_p_0(TypeClassInfo_for_output_109, Uniq_20, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_101_101);
          else
          {
            MR_Word PredInstInfo_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));

            parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_7_p_0(TypeClassInfo_for_output_109, (MR_Integer) 1, InstVarSet_15, Uniq_20, PredInstInfo_22, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_101_101);
          }
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, Suffix_10, S_16, STATE_VARIABLE_U_101_101, STATE_VARIABLE_U_35);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 2))));
              MR_Word BoundInsts_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 3))));
              MR_Box STATE_VARIABLE_U_64_64;
              MR_Box STATE_VARIABLE_U_66_66;
              MR_Box STATE_VARIABLE_U_80_80;
              MR_Integer Var_81;
              MR_Box STATE_VARIABLE_U_82_82;
              MR_Box STATE_VARIABLE_U_88_88;
              MR_Box STATE_VARIABLE_U_89_89;
              MR_Box STATE_VARIABLE_U_91_91;
              MR_Word Uniq_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))) & (MR_Integer) 7);

              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_109, Uniq_103, (MR_String) "bound", S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_64_64);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, (MR_String) "(\n", S_16, STATE_VARIABLE_U_64_64, &STATE_VARIABLE_U_66_66);
              switch (Lang_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word InstResultsTerm_26;
                    MR_String InstResultsStr_27;
                    MR_Word Var_67;
                    MR_Word Var_68;
                    MR_Integer Var_70;
                    MR_Box STATE_VARIABLE_U_71_71;
                    MR_Box STATE_VARIABLE_U_73_73;
                    MR_Box STATE_VARIABLE_U_75_75;
                    MR_Integer Var_76;
                    MR_Box STATE_VARIABLE_U_77_77;

                    Var_67 = mercury__term__context_init_0_f_0();
                    InstResultsTerm_26 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(Var_67, InstResults_24);
                    Var_68 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                    InstResultsStr_27 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_68, (MR_Integer) 2, InstResultsTerm_26);
                    Var_70 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
                    parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_109, Var_70, S_16, STATE_VARIABLE_U_66_66, &STATE_VARIABLE_U_71_71);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, InstResultsStr_27, S_16, STATE_VARIABLE_U_71_71, &STATE_VARIABLE_U_73_73);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, (MR_String) ",\n", S_16, STATE_VARIABLE_U_73_73, &STATE_VARIABLE_U_75_75);
                    Var_76 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
                    parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_109, Var_76, S_16, STATE_VARIABLE_U_75_75, &STATE_VARIABLE_U_77_77);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, (MR_String) "[\n", S_16, STATE_VARIABLE_U_77_77, &STATE_VARIABLE_U_80_80);
                  }
                  break;
                case (MR_Integer) 0:
                  STATE_VARIABLE_U_80_80 = STATE_VARIABLE_U_66_66;
                  break;
              }
              Var_81 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_8_p_0(TypeClassInfo_for_output_109, BoundInsts_25, Var_81, Lang_13, InclAddr_14, InstVarSet_15, S_16, STATE_VARIABLE_U_80_80, &STATE_VARIABLE_U_82_82);
              switch (Lang_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer Var_84 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
                    MR_Box STATE_VARIABLE_U_85_85;

                    parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_109, Var_84, S_16, STATE_VARIABLE_U_82_82, &STATE_VARIABLE_U_85_85);
                    parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, (MR_String) "]\n", S_16, STATE_VARIABLE_U_85_85, &STATE_VARIABLE_U_88_88);
                  }
                  break;
                case (MR_Integer) 0:
                  STATE_VARIABLE_U_88_88 = STATE_VARIABLE_U_82_82;
                  break;
              }
              parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_109, Indent_12, S_16, STATE_VARIABLE_U_88_88, &STATE_VARIABLE_U_89_89);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, (MR_String) ")", S_16, STATE_VARIABLE_U_89_89, &STATE_VARIABLE_U_91_91);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, Suffix_10, S_16, STATE_VARIABLE_U_91_91, STATE_VARIABLE_U_35);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box STATE_VARIABLE_U_61_61;
              MR_Word Uniq_106 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 2))));

              if ((HOInstInfo_107 == (MR_Word) ((MR_Unsigned) 0U)))
                parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_109, Uniq_106, (MR_String) "ground", S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_61_61);
              else
              {
                MR_Word PredInstInfo_104 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_107), (MR_Integer) 1));

                parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_7_p_0(TypeClassInfo_for_output_109, (MR_Integer) 1, InstVarSet_15, Uniq_106, PredInstInfo_104, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_61_61);
              }
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, Suffix_10, S_16, STATE_VARIABLE_U_61_61, STATE_VARIABLE_U_35);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))));
              MR_Box STATE_VARIABLE_U_56_56;

              parse_tree__parse_tree_out_term__mercury_format_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_output_109, InstVarSet_15, (MR_Integer) 0, Var_28, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_56_56);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, Suffix_10, S_16, STATE_VARIABLE_U_56_56, STATE_VARIABLE_U_35);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))));
              MR_Word ConstrainedInst_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 2))));
              MR_Box STATE_VARIABLE_U_53_53;

              parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(TypeClassInfo_for_output_109, (MR_Integer) 1, InstVarSet_15, Vars_29, ConstrainedInst_30, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_53_53);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_109, Suffix_10, S_16, STATE_VARIABLE_U_53_53, STATE_VARIABLE_U_35);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))));

              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_109, Suffix_10, InstName_33, (MR_Integer) 1, Indent_12, Lang_13, InclAddr_14, InstVarSet_15, S_16, STATE_VARIABLE_U_43_43, STATE_VARIABLE_U_35);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))));
              MR_Word Args_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 2))));
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Name_31));
                MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Args_32));
              }
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_109, Suffix_10, Var_49, (MR_Integer) 1, Indent_12, Lang_13, InclAddr_14, InstVarSet_15, S_16, STATE_VARIABLE_U_43_43, STATE_VARIABLE_U_35);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_8_p_0(
  MR_Word TypeClassInfo_for_output_55,
  MR_Word HeadVar__1_1,
  MR_Integer Indent0_2,
  MR_Word Lang_3,
  MR_Word InclAddr_4,
  MR_Word InstVarSet_5,
  MR_Box S_6,
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
      MR_Word BoundInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ConsId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_17, (MR_Integer) 0))));
      MR_Word Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_17, (MR_Integer) 1))));
      MR_Integer Indent1_27 = (MR_Integer) ((MR_Unsigned) Indent0_2 + (MR_Unsigned) 1);
      MR_Integer Indent2_28 = (MR_Integer) ((MR_Unsigned) Indent1_27 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_U_50_50;

      if ((Args_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_46_46;
        MR_Box STATE_VARIABLE_U_48_48;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_55, Indent1_27, S_6, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_46_46);
        parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0(TypeClassInfo_for_output_55, Lang_3, (MR_Integer) 0, ConsId_25, S_6, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_48_48);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "\n")), S_6, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_50_50);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_37_37;
        MR_Box STATE_VARIABLE_U_39_39;
        MR_Box STATE_VARIABLE_U_41_41;
        MR_Box STATE_VARIABLE_U_42_42;
        MR_Box STATE_VARIABLE_U_43_43;
        MR_Word Inst_64;
        MR_Word Insts_65;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_55, Indent1_27, S_6, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_37_37);
        parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0(TypeClassInfo_for_output_55, Lang_3, (MR_Integer) 1, ConsId_25, S_6, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_39_39);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "(\n")), S_6, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
        Inst_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_26, (MR_Integer) 0))));
        Insts_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_26, (MR_Integer) 1))));
        if ((Insts_65 == (MR_Word) ((MR_Unsigned) 0U)))
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_55, (MR_String) "\n", Inst_64, Indent2_28, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_42_42);
        else
        {
          MR_Box STATE_VARIABLE_U_30_77;
          MR_Word Inst_110;
          MR_Word Insts_111;
          MR_String Suffix_118;
          MR_Box STATE_VARIABLE_U_30_123;

          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_55, (MR_String) ",\n", Inst_64, Indent2_28, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_30_77);
          Inst_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_65, (MR_Integer) 0))));
          Insts_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_65, (MR_Integer) 1))));
          if ((Insts_111 == (MR_Word) ((MR_Unsigned) 0U)))
            Suffix_118 = (MR_String) "\n";
          else
            Suffix_118 = (MR_String) ",\n";
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_55, Suffix_118, Inst_110, Indent2_28, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_30_77, &STATE_VARIABLE_U_30_123);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_output_55, Insts_111, Indent2_28, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_30_123, &STATE_VARIABLE_U_42_42);
        }
        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_55, Indent1_27, S_6, STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_43_43);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) ")\n")), S_6, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_50_50);
      }
      if ((BoundInsts_18 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_8 = STATE_VARIABLE_U_50_50;
      else
      {
        MR_Box STATE_VARIABLE_U_51_51;
        MR_Box STATE_VARIABLE_U_53_53;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Word next_value_of_HeadVar__1_1;
        MR_Box next_value_of_STATE_VARIABLE_U_0_7;

        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_55, Indent0_2, S_6, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_51_51);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) ";\n")), S_6, STATE_VARIABLE_U_51_51, &STATE_VARIABLE_U_53_53);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_18;
        next_value_of_STATE_VARIABLE_U_0_7 = STATE_VARIABLE_U_53_53;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_U_0_7 = next_value_of_STATE_VARIABLE_U_0_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(
  MR_Word TypeClassInfo_for_output_32,
  MR_Word HeadVar__1_1,
  MR_Integer Indent_2,
  MR_Word Lang_3,
  MR_Word InclAddr_4,
  MR_Word InstVarSet_5,
  MR_Box S_6,
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
      MR_Word Inst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Suffix_25;
      MR_Box STATE_VARIABLE_U_30_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Box next_value_of_STATE_VARIABLE_U_0_7;

      if ((Insts_18 == (MR_Word) ((MR_Unsigned) 0U)))
        Suffix_25 = (MR_String) "\n";
      else
        Suffix_25 = (MR_String) ",\n";
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_32, Suffix_25, Inst_17, Indent_2, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_30_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Insts_18;
      next_value_of_STATE_VARIABLE_U_0_7 = STATE_VARIABLE_U_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_U_0_7 = next_value_of_STATE_VARIABLE_U_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(
  MR_Word TypeClassInfo_for_output_170,
  MR_String Suffix_11,
  MR_Word InstName_12,
  MR_Word FirstIndentPrinted_13,
  MR_Integer Indent_14,
  MR_Word Lang_15,
  MR_Word InclAddr_16,
  MR_Word InstVarSet_17,
  MR_Box S_18,
  MR_Box STATE_VARIABLE_U_0_33,
  MR_Box * STATE_VARIABLE_U_34)
{
  {
    MR_Box STATE_VARIABLE_U_35_35;

    switch (FirstIndentPrinted_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_0_33, &STATE_VARIABLE_U_35_35);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_U_35_35 = STATE_VARIABLE_U_0_33;
        break;
    }
    switch (MR_tag((MR_Word) InstName_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Name_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_12, (MR_Integer) 0))));
          MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_12, (MR_Integer) 1))));
          MR_Box STATE_VARIABLE_U_155_155;

          if ((Args_21 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_170, Name_20, S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_155_155);
          else
          {
            MR_Box STATE_VARIABLE_U_146_146;
            MR_Box STATE_VARIABLE_U_148_148;
            MR_Integer Var_149;
            MR_Box STATE_VARIABLE_U_150_150;
            MR_Box STATE_VARIABLE_U_152_152;

            parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_170, Name_20, S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_146_146);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "(\n", S_18, STATE_VARIABLE_U_146_146, &STATE_VARIABLE_U_148_148);
            Var_149 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_output_170, Args_21, Var_149, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_148_148, &STATE_VARIABLE_U_150_150);
            parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_150_150, &STATE_VARIABLE_U_152_152);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_152_152, &STATE_VARIABLE_U_155_155);
          }
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_155_155, STATE_VARIABLE_U_34);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsLive_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Real_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_12, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word InstA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_12, (MR_Integer) 1))));
          MR_Word InstB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_12, (MR_Integer) 2))));
          MR_Box STATE_VARIABLE_U_131_131;
          MR_Box STATE_VARIABLE_U_132_132;
          MR_Box STATE_VARIABLE_U_133_133;
          MR_Box STATE_VARIABLE_U_135_135;
          MR_Word Var_136;
          MR_Integer Var_137;
          MR_Box STATE_VARIABLE_U_138_138;
          MR_Word Var_139;
          MR_Box STATE_VARIABLE_U_142_142;
          MR_Box STATE_VARIABLE_U_144_144;

          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044unify(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_131_131);
          parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_output_170, IsLive_24, S_18, STATE_VARIABLE_U_131_131, &STATE_VARIABLE_U_132_132);
          parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(TypeClassInfo_for_output_170, Real_25, S_18, STATE_VARIABLE_U_132_132, &STATE_VARIABLE_U_133_133);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", S_18, STATE_VARIABLE_U_133_133, &STATE_VARIABLE_U_135_135);
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (InstB_27));
            MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (InstA_26));
            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_139));
          }
          Var_137 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_output_170, Var_136, Var_137, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_135_135, &STATE_VARIABLE_U_138_138);
          parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_138_138, &STATE_VARIABLE_U_142_142);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_142_142, &STATE_VARIABLE_U_144_144);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_144_144, STATE_VARIABLE_U_34);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box STATE_VARIABLE_U_119_119;
          MR_Integer Var_121;
          MR_Box STATE_VARIABLE_U_122_122;
          MR_Box STATE_VARIABLE_U_126_126;
          MR_Box STATE_VARIABLE_U_128_128;
          MR_Word InstB_158 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_12, (MR_Integer) 1))));
          MR_Word Inst_181 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_12, (MR_Integer) 0))));
          MR_Word Insts_182;
          MR_Box STATE_VARIABLE_U_30_194;
          MR_Word Inst_204;
          MR_Word Insts_205;
          MR_Box STATE_VARIABLE_U_30_217;

          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044merge_inst(\n", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_119_119);
          {
            Insts_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Insts_182, 0) = ((MR_Box) (InstB_158));
            MR_hl_field(MR_mktag(1), Insts_182, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_121 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_170, (MR_String) ",\n", Inst_181, Var_121, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_119_119, &STATE_VARIABLE_U_30_194);
          Inst_204 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_182, (MR_Integer) 0))));
          Insts_205 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_182, (MR_Integer) 1))));
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", Inst_204, Var_121, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_30_194, &STATE_VARIABLE_U_30_217);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_output_170, Insts_205, Var_121, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_30_217, &STATE_VARIABLE_U_122_122);
          parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_122_122, &STATE_VARIABLE_U_126_126);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_126_126, &STATE_VARIABLE_U_128_128);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_128_128, STATE_VARIABLE_U_34);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));
              MR_Word Uniq_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
              MR_Box STATE_VARIABLE_U_102_102;
              MR_Box STATE_VARIABLE_U_103_103;
              MR_Box STATE_VARIABLE_U_104_104;
              MR_Box STATE_VARIABLE_U_106_106;
              MR_Box STATE_VARIABLE_U_108_108;
              MR_Integer Var_111;
              MR_Box STATE_VARIABLE_U_112_112;
              MR_Box STATE_VARIABLE_U_114_114;
              MR_Box STATE_VARIABLE_U_116_116;
              MR_Word IsLive_159 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_160 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) & (MR_Integer) 1);

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044ground(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_102_102);
              parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_output_170, IsLive_159, S_18, STATE_VARIABLE_U_102_102, &STATE_VARIABLE_U_103_103);
              parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(TypeClassInfo_for_output_170, Real_160, S_18, STATE_VARIABLE_U_103_103, &STATE_VARIABLE_U_104_104);
              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_170, Uniq_29, (MR_String) "shared", S_18, STATE_VARIABLE_U_104_104, &STATE_VARIABLE_U_106_106);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ",\n", S_18, STATE_VARIABLE_U_106_106, &STATE_VARIABLE_U_108_108);
              Var_111 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_28, (MR_Integer) 0, Var_111, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_108_108, &STATE_VARIABLE_U_112_112);
              parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_112_112, &STATE_VARIABLE_U_114_114);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_116_116);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_116_116, STATE_VARIABLE_U_34);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box STATE_VARIABLE_U_85_85;
              MR_Box STATE_VARIABLE_U_86_86;
              MR_Box STATE_VARIABLE_U_87_87;
              MR_Box STATE_VARIABLE_U_89_89;
              MR_Box STATE_VARIABLE_U_91_91;
              MR_Integer Var_94;
              MR_Box STATE_VARIABLE_U_95_95;
              MR_Box STATE_VARIABLE_U_97_97;
              MR_Box STATE_VARIABLE_U_99_99;
              MR_Word IsLive_161 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word Real_162 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SubInstName_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));
              MR_Word Uniq_164 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044any(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_85_85);
              parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_output_170, IsLive_161, S_18, STATE_VARIABLE_U_85_85, &STATE_VARIABLE_U_86_86);
              parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(TypeClassInfo_for_output_170, Real_162, S_18, STATE_VARIABLE_U_86_86, &STATE_VARIABLE_U_87_87);
              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_170, Uniq_164, (MR_String) "shared", S_18, STATE_VARIABLE_U_87_87, &STATE_VARIABLE_U_89_89);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ",\n", S_18, STATE_VARIABLE_U_89_89, &STATE_VARIABLE_U_91_91);
              Var_94 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_163, (MR_Integer) 0, Var_94, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_91_91, &STATE_VARIABLE_U_95_95);
              parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_95_95, &STATE_VARIABLE_U_97_97);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_97_97, &STATE_VARIABLE_U_99_99);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_99_99, STATE_VARIABLE_U_34);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box STATE_VARIABLE_U_74_74;
              MR_Integer Var_77;
              MR_Box STATE_VARIABLE_U_78_78;
              MR_Box STATE_VARIABLE_U_80_80;
              MR_Box STATE_VARIABLE_U_82_82;
              MR_Word SubInstName_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044shared_inst(\n", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_74_74);
              Var_77 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_165, (MR_Integer) 0, Var_77, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_74_74, &STATE_VARIABLE_U_78_78);
              parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_78_78, &STATE_VARIABLE_U_80_80);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_80_80, &STATE_VARIABLE_U_82_82);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_82_82, STATE_VARIABLE_U_34);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box STATE_VARIABLE_U_63_63;
              MR_Integer Var_66;
              MR_Box STATE_VARIABLE_U_67_67;
              MR_Box STATE_VARIABLE_U_69_69;
              MR_Box STATE_VARIABLE_U_71_71;
              MR_Word SubInstName_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044mostly_uniq_inst(\n", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_63_63);
              Var_66 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_166, (MR_Integer) 0, Var_66, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_63_63, &STATE_VARIABLE_U_67_67);
              parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_69_69);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_69_69, &STATE_VARIABLE_U_71_71);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_71_71, STATE_VARIABLE_U_34);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Uniqueness_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))));
              MR_Word TypeVarSet_32;
              MR_Box STATE_VARIABLE_U_52_52;
              MR_Box STATE_VARIABLE_U_54_54;
              MR_Box STATE_VARIABLE_U_56_56;
              MR_Box STATE_VARIABLE_U_58_58;
              MR_Box STATE_VARIABLE_U_60_60;

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044typed_ground(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_52_52);
              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_170, Uniqueness_30, (MR_String) "shared", S_18, STATE_VARIABLE_U_52_52, &STATE_VARIABLE_U_54_54);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ", ", S_18, STATE_VARIABLE_U_54_54, &STATE_VARIABLE_U_56_56);
              mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_32);
              parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_170, TypeVarSet_32, (MR_Integer) 0, Type_31, S_18, STATE_VARIABLE_U_56_56, &STATE_VARIABLE_U_58_58);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_58_58, &STATE_VARIABLE_U_60_60);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_60_60, STATE_VARIABLE_U_34);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Box STATE_VARIABLE_U_37_37;
              MR_Box STATE_VARIABLE_U_39_39;
              MR_Box STATE_VARIABLE_U_41_41;
              MR_Integer Var_44;
              MR_Box STATE_VARIABLE_U_45_45;
              MR_Box STATE_VARIABLE_U_47_47;
              MR_Box STATE_VARIABLE_U_49_49;
              MR_Word SubInstName_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))));
              MR_Word Type_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));
              MR_Word TypeVarSet_169;

              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044typed_inst(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_37_37);
              mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_169);
              parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_170, TypeVarSet_169, (MR_Integer) 0, Type_168, S_18, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_39_39);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ",\n", S_18, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
              Var_44 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_167, (MR_Integer) 0, Var_44, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_45_45);
              parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_45_45, &STATE_VARIABLE_U_47_47);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_49_49);
              parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_49_49, STATE_VARIABLE_U_34);
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

	Inst = Inst_1 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	 *InstAddr_2  = InstAddr;
}
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_instmap_7_p_0(
  MR_Word Stream_8,
  MR_Word VarSet_9,
  MR_Word VarNamePrint_10,
  MR_Integer Indent_11,
  MR_Word InstMap_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_12);
    if (succeeded)
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "unreachable");
    else
    {
      MR_Word AssocList_14;

      hlds__instmap__instmap_to_assoc_list_2_p_0(InstMap_12, &AssocList_14);
      hlds__hlds_out__hlds_out_mode__write_var_inst_list_7_p_0(Stream_8, VarSet_9, VarNamePrint_10, Indent_11, AssocList_14);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__write_var_inst_list_7_p_0(
  MR_Word Stream_1,
  MR_Word VarSet_2,
  MR_Word VarNamePrint_3,
  MR_Integer Indent_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_19;
      MR_Word Inst_20;
      MR_Word VarsInsts_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word InstVarSet_23;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));

      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
      Inst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
      parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, VarNamePrint_3, Var_19, Stream_1);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " -> ");
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_23);
      parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_1, (MR_Integer) 1, InstVarSet_23, Inst_20);
      if (!((VarsInsts_21 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word next_value_of_HeadVar__5_5;

        parse_tree__mercury_to_mercury__mercury_output_newline_4_p_0(Indent_4, Stream_1);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "%            ");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = VarsInsts_21;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
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
