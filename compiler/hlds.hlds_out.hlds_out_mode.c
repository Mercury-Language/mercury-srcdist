/*
** Automatically generated from `hlds_out_mode.m'
** by the Mercury compiler,
** version rotd-2022-09-27
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
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_0;

static const MR_EnumFunctorDesc hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_functor_desc_incl_addr_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_ordinal_ordered_incl_addr_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0[2];

static const MR_Integer hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__functor_number_map_incl_addr_0[2];

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
  MR_Word Inst_1,
  MR_Integer * InstAddr_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0(
  MR_Word TypeClassInfo_for_output_23,
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
  MR_Word TypeClassInfo_for_output_55,
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
  MR_Word TypeClassInfo_for_output_108,
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
  MR_Word TypeClassInfo_for_output_54,
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
  MR_Word TypeClassInfo_for_output_31,
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

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__var_inst_list_to_string_4_f_0(
  MR_Word VarTable_1,
  MR_Word VarNamePrint_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4);

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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
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
  { hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_name_ordered_incl_addr_0 },
  { hlds__hlds_out__hlds_out_mode__hlds__hlds_out__hlds_out_mode__enum_ordinal_ordered_incl_addr_0 },
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
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__get_inst_addr_2_p_0(
  MR_Word Inst_1,
  MR_Integer * InstAddr_2)
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

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_unify_mode_to_string_2_f_0(
  MR_Word UnifyMode_4,
  MR_Word InstVarSet_5)
{
  MR_String String_6;
  MR_Word LHSInit_10;
  MR_Word LHSFinal_11;
  MR_Word RHSInit_12;
  MR_Word RHSFinal_13;
  MR_Word Var_15;
  MR_String STATE_VARIABLE_U_18_16;
  MR_String STATE_VARIABLE_U_20_18;
  MR_Word Var_20;
  MR_Box conv0_STATE_VARIABLE_U_18_16;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_U_20_18;
  MR_Box conv3_String_6;

  LHSInit_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 0))));
  LHSFinal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 1))));
  RHSInit_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 2))));
  RHSFinal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 3))));
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (LHSInit_10));
    MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (LHSFinal_11));
  }
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_Integer) 1, InstVarSet_5, Var_15, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_STATE_VARIABLE_U_18_16);
  STATE_VARIABLE_U_18_16 = ((MR_String) (conv0_STATE_VARIABLE_U_18_16));
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) ((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_18_16)), &conv2_STATE_VARIABLE_U_20_18);
  STATE_VARIABLE_U_20_18 = ((MR_String) (conv2_STATE_VARIABLE_U_20_18));
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (RHSInit_12));
    MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (RHSFinal_13));
  }
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_Integer) 1, InstVarSet_5, Var_20, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_20_18)), &conv3_String_6);
  String_6 = ((MR_String) (conv3_String_6));
  return String_6;
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_5_p_0(
  MR_Word Stream_6,
  MR_Word UnifyMode_7,
  MR_Word InstVarSet_8)
{
  MR_Word LHSInit_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_7, (MR_Integer) 0))));
  MR_Word LHSFinal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_7, (MR_Integer) 1))));
  MR_Word RHSInit_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_7, (MR_Integer) 2))));
  MR_Word RHSFinal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_7, (MR_Integer) 3))));
  MR_Word Var_18;
  MR_Word Var_23;
  MR_Box conv0_STATE_VARIABLE_U_18_19;
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv2_STATE_VARIABLE_U_20_21;
  MR_Box conv3_STATE_VARIABLE_IO_11;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (LHSInit_13));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (LHSFinal_14));
  }
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_Integer) 1, InstVarSet_8, Var_18, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_U_18_19);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  func_1(((MR_Box) ((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]))), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_U_20_21);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (RHSInit_15));
    MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (RHSFinal_16));
  }
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_Integer) 1, InstVarSet_8, Var_23, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_11);
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_unify_mode_list_to_string_2_f_0(
  MR_Word UnifyModes_4,
  MR_Word InstVarSet_5)
{
  MR_String String_6;
  MR_Box conv0_String_6;

  hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), UnifyModes_4, InstVarSet_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_6);
  String_6 = ((MR_String) (conv0_String_6));
  return String_6;
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_list_5_p_0(
  MR_Word Stream_6,
  MR_Word UnifyModes_7,
  MR_Word InstVarSet_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), UnifyModes_7, InstVarSet_8, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0(
  MR_Word TypeClassInfo_for_output_23,
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
      MR_Word LHSInit_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 0))));
      MR_Word LHSFinal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 1))));
      MR_Word RHSInit_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 2))));
      MR_Word RHSFinal_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_11, (MR_Integer) 3))));
      MR_Word Var_29;
      MR_Box STATE_VARIABLE_U_18_30;
      MR_Box STATE_VARIABLE_U_20_32;
      MR_Word Var_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (LHSInit_24));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (LHSFinal_25));
      }
      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_23, (MR_Integer) 1, HeadVar__2_2, Var_29, HeadVar__3_3, STATE_VARIABLE_U_0_4, &STATE_VARIABLE_U_18_30);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) " = ")), HeadVar__3_3, STATE_VARIABLE_U_18_30, &STATE_VARIABLE_U_20_32);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (RHSInit_26));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (RHSFinal_27));
      }
      parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_output_23, (MR_Integer) 1, HeadVar__2_2, Var_34, HeadVar__3_3, STATE_VARIABLE_U_20_32, &STATE_VARIABLE_U_20_20);
      if ((Modes_12 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_20_20;
      else
      {
        MR_Box STATE_VARIABLE_U_22_22;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5))));
        MR_Word next_value_of_HeadVar__1_1;
        MR_Box next_value_of_STATE_VARIABLE_U_0_4;

        func_1(((MR_Box) (TypeClassInfo_for_output_23)), ((MR_Box) ((MR_String) ", ")), HeadVar__3_3, STATE_VARIABLE_U_20_20, &STATE_VARIABLE_U_22_22);
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
  MR_String String_12;
  MR_Box conv0_String_12;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), Inst_7, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_12);
  String_12 = ((MR_String) (conv0_String_12));
  return String_12;
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
  MR_Box conv0_STATE_VARIABLE_IO_17;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), Inst_10, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_unify_mode_list_to_string_5_f_0(
  MR_Word Insts_7,
  MR_Integer Indent_8,
  MR_Word Lang_9,
  MR_Word InclAddr_10,
  MR_Word InstVarSet_11)
{
  MR_String String_12;
  MR_Box conv0_String_12;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), Insts_7, (MR_Integer) 1, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_12);
  String_12 = ((MR_String) (conv0_String_12));
  return String_12;
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
  MR_Box conv0_STATE_VARIABLE_IO_17;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), Insts_10, (MR_Integer) 1, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
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
  MR_Word TypeClassInfo_for_output_55,
  MR_Word UnifyMode_9,
  MR_Integer Indent_10,
  MR_Word Lang_11,
  MR_Word InclAddr_12,
  MR_Word InstVarSet_13,
  MR_Box S_14,
  MR_Box STATE_VARIABLE_U_0_24,
  MR_Box * STATE_VARIABLE_U_25)
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
  parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_55, Indent_10, S_14, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_26_26);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "old lhs inst:\n")), S_14, STATE_VARIABLE_U_26_26, &STATE_VARIABLE_U_28_28);
  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_55, (MR_String) "\n", LHSInit_16, Indent_10, Lang_11, InclAddr_12, InstVarSet_13, S_14, STATE_VARIABLE_U_28_28, &STATE_VARIABLE_U_30_30);
  parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_55, Indent_10, S_14, STATE_VARIABLE_U_30_30, &STATE_VARIABLE_U_31_31);
  succeeded = (RHSInitAddr_21 == LHSInitAddr_20);
  if (succeeded)
  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));

    func_1(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), S_14, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_33_33);
  }
  else
  {
    MR_Box STATE_VARIABLE_U_35_35;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));

    func_2(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "old rhs inst:\n")), S_14, STATE_VARIABLE_U_31_31, &STATE_VARIABLE_U_35_35);
    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_55, (MR_String) "\n", RHSInit_18, Indent_10, Lang_11, InclAddr_12, InstVarSet_13, S_14, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_33_33);
  }
  parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_55, Indent_10, S_14, STATE_VARIABLE_U_33_33, &STATE_VARIABLE_U_38_38);
  succeeded = (LHSFinalAddr_22 == LHSInitAddr_20);
  if (succeeded)
  {
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));

    func_3(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), S_14, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
  }
  else
  {
    succeeded = (LHSFinalAddr_22 == RHSInitAddr_21);
    if (succeeded)
    {
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));

      func_4(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), S_14, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_40_40);
    }
    else
    {
      MR_Box STATE_VARIABLE_U_44_44;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));

      func_5(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "new lhs inst:\n")), S_14, STATE_VARIABLE_U_38_38, &STATE_VARIABLE_U_44_44);
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_55, (MR_String) "\n", LHSFinal_17, Indent_10, Lang_11, InclAddr_12, InstVarSet_13, S_14, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_40_40);
    }
  }
  parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_55, Indent_10, S_14, STATE_VARIABLE_U_40_40, &STATE_VARIABLE_U_47_47);
  succeeded = (RHSFinalAddr_23 == RHSInitAddr_21);
  if (succeeded)
  {
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));

    func_6(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), S_14, STATE_VARIABLE_U_47_47, STATE_VARIABLE_U_25);
  }
  else
  {
    succeeded = (RHSFinalAddr_23 == LHSFinalAddr_22);
    if (succeeded)
    {
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));

      func_7(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), S_14, STATE_VARIABLE_U_47_47, STATE_VARIABLE_U_25);
    }
    else
    {
      MR_Box STATE_VARIABLE_U_53_53;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_55, (MR_Integer) 0)), (MR_Integer) 5))));

      func_8(((MR_Box) (TypeClassInfo_for_output_55)), ((MR_Box) ((MR_String) "new rhs inst:\n")), S_14, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_53_53);
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_55, (MR_String) "\n", RHSFinal_19, Indent_10, Lang_11, InclAddr_12, InstVarSet_13, S_14, STATE_VARIABLE_U_53_53, STATE_VARIABLE_U_25);
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
  MR_String String_12;
  MR_Box conv0_String_12;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), (MR_String) "\n", Inst_7, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_12);
  String_12 = ((MR_String) (conv0_String_12));
  return String_12;
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
  MR_Box conv0_STATE_VARIABLE_IO_17;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), (MR_String) "\n", Inst_10, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_list_to_string_5_f_0(
  MR_Word Insts_7,
  MR_Integer Indent_8,
  MR_Word Lang_9,
  MR_Word InclAddr_10,
  MR_Word InstVarSet_11)
{
  MR_String String_12;
  MR_Box conv0_String_12;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1]), Insts_7, Indent_8, Lang_9, InclAddr_10, InstVarSet_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_String) "")), &conv0_String_12);
  String_12 = ((MR_String) (conv0_String_12));
  return String_12;
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
  MR_Box conv0_STATE_VARIABLE_IO_17;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0]), Insts_10, Indent_11, Lang_12, InclAddr_13, InstVarSet_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(
  MR_Word TypeClassInfo_for_output_108,
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
  MR_Box STATE_VARIABLE_U_36_36;
  MR_Box STATE_VARIABLE_U_43_43;

  parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_108, Indent_12, S_16, STATE_VARIABLE_U_0_34, &STATE_VARIABLE_U_36_36);
  switch (InclAddr_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer InstAddr_18;
        MR_String InstAddrStr_19;
        MR_Box STATE_VARIABLE_U_41_41;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst = Inst_11 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	InstAddr_18  = InstAddr;
}
        mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[0]), (MR_Integer) 2, InstAddr_18, &InstAddrStr_19);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (InstAddrStr_19)), S_16, STATE_VARIABLE_U_36_36, &STATE_VARIABLE_U_41_41);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) ((MR_String) ": ")), S_16, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
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
            MR_Box STATE_VARIABLE_U_49_49;
            void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_11(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) ((MR_String) "free")), S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_49_49);
            func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            func_12(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (Suffix_10)), S_16, STATE_VARIABLE_U_49_49, STATE_VARIABLE_U_35);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box STATE_VARIABLE_U_101_101;
            void MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            void MR_CALL (* func_18)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_17(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) ((MR_String) "not_reached")), S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_101_101);
            func_18 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            func_18(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (Suffix_10)), S_16, STATE_VARIABLE_U_101_101, STATE_VARIABLE_U_35);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_U_52_52;
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
        void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        func_13(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) ((MR_String) "free(with some type)")), S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_52_52);
        func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
        func_14(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (Suffix_10)), S_16, STATE_VARIABLE_U_52_52, STATE_VARIABLE_U_35);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_11, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_11, (MR_Integer) 1))));
        MR_Box STATE_VARIABLE_U_45_45;
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        if ((HOInstInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_4_p_0(TypeClassInfo_for_output_108, Uniq_20, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
        else
        {
          MR_Word PredInstInfo_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));

          parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_7_p_0(TypeClassInfo_for_output_108, (MR_Integer) 1, InstVarSet_15, Uniq_20, PredInstInfo_22, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_45_45);
        }
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (Suffix_10)), S_16, STATE_VARIABLE_U_45_45, STATE_VARIABLE_U_35);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstResults_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 2))));
            MR_Word BoundInsts_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 3))));
            MR_Box STATE_VARIABLE_U_55_55;
            MR_Box STATE_VARIABLE_U_57_57;
            MR_Box STATE_VARIABLE_U_71_71;
            MR_Integer Var_72;
            MR_Box STATE_VARIABLE_U_73_73;
            MR_Box STATE_VARIABLE_U_79_79;
            MR_Box STATE_VARIABLE_U_80_80;
            MR_Box STATE_VARIABLE_U_82_82;
            MR_Word Uniq_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))) & (MR_Integer) 7);
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_108, Uniq_103, (MR_String) "bound", S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_55_55);
            func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            func_3(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) ((MR_String) "(\n")), S_16, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_57_57);
            switch (Lang_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word InstResultsTerm_26;
                  MR_String InstResultsStr_27;
                  MR_Word Var_58;
                  MR_Word Var_59;
                  MR_Integer Var_61;
                  MR_Box STATE_VARIABLE_U_62_62;
                  MR_Box STATE_VARIABLE_U_64_64;
                  MR_Box STATE_VARIABLE_U_66_66;
                  MR_Integer Var_67;
                  MR_Box STATE_VARIABLE_U_68_68;
                  void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  Var_58 = mercury__term_context__dummy_context_0_f_0();
                  InstResultsTerm_26 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(Var_58, InstResults_24);
                  Var_59 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
                  InstResultsStr_27 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_59, (MR_Integer) 2, InstResultsTerm_26);
                  Var_61 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
                  parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_108, Var_61, S_16, STATE_VARIABLE_U_57_57, &STATE_VARIABLE_U_62_62);
                  func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_4(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (InstResultsStr_27)), S_16, STATE_VARIABLE_U_62_62, &STATE_VARIABLE_U_64_64);
                  func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_5(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) ((MR_String) ",\n")), S_16, STATE_VARIABLE_U_64_64, &STATE_VARIABLE_U_66_66);
                  Var_67 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
                  parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_108, Var_67, S_16, STATE_VARIABLE_U_66_66, &STATE_VARIABLE_U_68_68);
                  func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_6(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) ((MR_String) "[\n")), S_16, STATE_VARIABLE_U_68_68, &STATE_VARIABLE_U_71_71);
                }
                break;
              case (MR_Integer) 0:
                STATE_VARIABLE_U_71_71 = STATE_VARIABLE_U_57_57;
                break;
            }
            Var_72 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_8_p_0(TypeClassInfo_for_output_108, BoundInsts_25, Var_72, Lang_13, InclAddr_14, InstVarSet_15, S_16, STATE_VARIABLE_U_71_71, &STATE_VARIABLE_U_73_73);
            switch (Lang_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer Var_75 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
                  MR_Box STATE_VARIABLE_U_76_76;
                  void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_108, Var_75, S_16, STATE_VARIABLE_U_73_73, &STATE_VARIABLE_U_76_76);
                  func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
                  func_7(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) ((MR_String) "]\n")), S_16, STATE_VARIABLE_U_76_76, &STATE_VARIABLE_U_79_79);
                }
                break;
              case (MR_Integer) 0:
                STATE_VARIABLE_U_79_79 = STATE_VARIABLE_U_73_73;
                break;
            }
            parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_108, Indent_12, S_16, STATE_VARIABLE_U_79_79, &STATE_VARIABLE_U_80_80);
            func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            func_8(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) ((MR_String) ")")), S_16, STATE_VARIABLE_U_80_80, &STATE_VARIABLE_U_82_82);
            func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            func_9(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (Suffix_10)), S_16, STATE_VARIABLE_U_82_82, STATE_VARIABLE_U_35);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box STATE_VARIABLE_U_85_85;
            MR_Word Uniq_106 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 2))));
            void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            if ((HOInstInfo_107 == (MR_Word) ((MR_Unsigned) 0U)))
              parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_108, Uniq_106, (MR_String) "ground", S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_85_85);
            else
            {
              MR_Word PredInstInfo_104 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_107), (MR_Integer) 1));

              parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_7_p_0(TypeClassInfo_for_output_108, (MR_Integer) 1, InstVarSet_15, Uniq_106, PredInstInfo_104, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_85_85);
            }
            func_15 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            func_15(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (Suffix_10)), S_16, STATE_VARIABLE_U_85_85, STATE_VARIABLE_U_35);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))));
            MR_Box STATE_VARIABLE_U_90_90;
            void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_output_108, InstVarSet_15, (MR_Integer) 0, Var_28, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_90_90);
            func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            func_16(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (Suffix_10)), S_16, STATE_VARIABLE_U_90_90, STATE_VARIABLE_U_35);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))));
            MR_Word ConstrainedInst_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 2))));
            MR_Box STATE_VARIABLE_U_93_93;
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(TypeClassInfo_for_output_108, (MR_Integer) 1, InstVarSet_15, Vars_29, ConstrainedInst_30, S_16, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_93_93);
            func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_108, (MR_Integer) 0)), (MR_Integer) 5))));
            func_10(((MR_Box) (TypeClassInfo_for_output_108)), ((MR_Box) (Suffix_10)), S_16, STATE_VARIABLE_U_93_93, STATE_VARIABLE_U_35);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))));

            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_108, Suffix_10, InstName_33, (MR_Integer) 1, Indent_12, Lang_13, InclAddr_14, InstVarSet_15, S_16, STATE_VARIABLE_U_43_43, STATE_VARIABLE_U_35);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Name_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 1))));
            MR_Word Args_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_11, (MR_Integer) 2))));
            MR_Word Var_95;

            {
              Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Name_31));
              MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (Args_32));
            }
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_108, Suffix_10, Var_95, (MR_Integer) 1, Indent_12, Lang_13, InclAddr_14, InstVarSet_15, S_16, STATE_VARIABLE_U_43_43, STATE_VARIABLE_U_35);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_insts_8_p_0(
  MR_Word TypeClassInfo_for_output_54,
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
      MR_Box STATE_VARIABLE_U_41_41;

      if ((Args_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_37_37;
        MR_Box STATE_VARIABLE_U_39_39;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_54, Indent1_27, S_6, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_37_37);
        parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0(TypeClassInfo_for_output_54, Lang_3, (MR_Integer) 0, ConsId_25, S_6, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_39_39);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "\n")), S_6, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_42_42;
        MR_Box STATE_VARIABLE_U_44_44;
        MR_Box STATE_VARIABLE_U_46_46;
        MR_Box STATE_VARIABLE_U_47_47;
        MR_Box STATE_VARIABLE_U_48_48;
        MR_Word Inst_62;
        MR_Word Insts_63;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_54, Indent1_27, S_6, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_42_42);
        parse_tree__mercury_to_mercury__mercury_format_cons_id_6_p_0(TypeClassInfo_for_output_54, Lang_3, (MR_Integer) 1, ConsId_25, S_6, STATE_VARIABLE_U_42_42, &STATE_VARIABLE_U_44_44);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));
        func_1(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) "(\n")), S_6, STATE_VARIABLE_U_44_44, &STATE_VARIABLE_U_46_46);
        Inst_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_26, (MR_Integer) 0))));
        Insts_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_26, (MR_Integer) 1))));
        if ((Insts_63 == (MR_Word) ((MR_Unsigned) 0U)))
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_54, (MR_String) "\n", Inst_62, Indent2_28, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_47_47);
        else
        {
          MR_Box STATE_VARIABLE_U_30_74;
          MR_Word Inst_102;
          MR_Word Insts_103;
          MR_String Suffix_109;
          MR_Box STATE_VARIABLE_U_30_114;

          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_54, (MR_String) ",\n", Inst_62, Indent2_28, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_46_46, &STATE_VARIABLE_U_30_74);
          Inst_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_63, (MR_Integer) 0))));
          Insts_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_63, (MR_Integer) 1))));
          if ((Insts_103 == (MR_Word) ((MR_Unsigned) 0U)))
            Suffix_109 = (MR_String) "\n";
          else
            Suffix_109 = (MR_String) ",\n";
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_54, Suffix_109, Inst_102, Indent2_28, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_30_74, &STATE_VARIABLE_U_30_114);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_output_54, Insts_103, Indent2_28, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_30_114, &STATE_VARIABLE_U_47_47);
        }
        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_54, Indent1_27, S_6, STATE_VARIABLE_U_47_47, &STATE_VARIABLE_U_48_48);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));
        func_2(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) ")\n")), S_6, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_41_41);
      }
      if ((BoundInsts_18 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_8 = STATE_VARIABLE_U_41_41;
      else
      {
        MR_Box STATE_VARIABLE_U_51_51;
        MR_Box STATE_VARIABLE_U_53_53;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Word next_value_of_HeadVar__1_1;
        MR_Box next_value_of_STATE_VARIABLE_U_0_7;

        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_54, Indent0_2, S_6, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_51_51);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5))));
        func_3(((MR_Box) (TypeClassInfo_for_output_54)), ((MR_Box) ((MR_String) ";\n")), S_6, STATE_VARIABLE_U_51_51, &STATE_VARIABLE_U_53_53);
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
  MR_Word TypeClassInfo_for_output_31,
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
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_31, Suffix_25, Inst_17, Indent_2, Lang_3, InclAddr_4, InstVarSet_5, S_6, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_30_30);
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
        MR_Box STATE_VARIABLE_U_36_36;

        if ((Args_21 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_output_170, Name_20, S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_36_36);
        else
        {
          MR_Box STATE_VARIABLE_U_37_37;
          MR_Box STATE_VARIABLE_U_39_39;
          MR_Integer Var_40;
          MR_Box STATE_VARIABLE_U_41_41;
          MR_Box STATE_VARIABLE_U_43_43;

          parse_tree__mercury_to_mercury__mercury_format_sym_name_4_p_0(TypeClassInfo_for_output_170, Name_20, S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_37_37);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "(\n", S_18, STATE_VARIABLE_U_37_37, &STATE_VARIABLE_U_39_39);
          Var_40 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_output_170, Args_21, Var_40, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_39_39, &STATE_VARIABLE_U_41_41);
          parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_41_41, &STATE_VARIABLE_U_43_43);
          parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_43_43, &STATE_VARIABLE_U_36_36);
        }
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_36_36, STATE_VARIABLE_U_34);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IsLive_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word Real_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstName_12, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word InstA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_12, (MR_Integer) 1))));
        MR_Word InstB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_12, (MR_Integer) 2))));
        MR_Box STATE_VARIABLE_U_48_48;
        MR_Box STATE_VARIABLE_U_49_49;
        MR_Box STATE_VARIABLE_U_50_50;
        MR_Box STATE_VARIABLE_U_52_52;
        MR_Word Var_53;
        MR_Integer Var_54;
        MR_Box STATE_VARIABLE_U_55_55;
        MR_Word Var_56;
        MR_Box STATE_VARIABLE_U_59_59;
        MR_Box STATE_VARIABLE_U_61_61;

        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044unify(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_48_48);
        parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_output_170, IsLive_24, S_18, STATE_VARIABLE_U_48_48, &STATE_VARIABLE_U_49_49);
        parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(TypeClassInfo_for_output_170, Real_25, S_18, STATE_VARIABLE_U_49_49, &STATE_VARIABLE_U_50_50);
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", S_18, STATE_VARIABLE_U_50_50, &STATE_VARIABLE_U_52_52);
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (InstB_27));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (InstA_26));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
        }
        Var_54 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_output_170, Var_53, Var_54, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_52_52, &STATE_VARIABLE_U_55_55);
        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_55_55, &STATE_VARIABLE_U_59_59);
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_59_59, &STATE_VARIABLE_U_61_61);
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_61_61, STATE_VARIABLE_U_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box STATE_VARIABLE_U_64_64;
        MR_Integer Var_66;
        MR_Box STATE_VARIABLE_U_67_67;
        MR_Box STATE_VARIABLE_U_71_71;
        MR_Box STATE_VARIABLE_U_73_73;
        MR_Word InstB_158 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_12, (MR_Integer) 1))));
        MR_Word Inst_180 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_12, (MR_Integer) 0))));
        MR_Word Insts_181;
        MR_Box STATE_VARIABLE_U_30_192;
        MR_Word Inst_200;

        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044merge_inst(\n", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_64_64);
        {
          Insts_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Insts_181, 0) = ((MR_Box) (InstB_158));
          MR_hl_field(MR_mktag(1), Insts_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_66 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_170, (MR_String) ",\n", Inst_180, Var_66, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_64_64, &STATE_VARIABLE_U_30_192);
        Inst_200 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_181, (MR_Integer) 0))));
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", Inst_200, Var_66, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_30_192, &STATE_VARIABLE_U_67_67);
        parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_67_67, &STATE_VARIABLE_U_71_71);
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_71_71, &STATE_VARIABLE_U_73_73);
        parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_73_73, STATE_VARIABLE_U_34);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubInstName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));
            MR_Word Uniq_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
            MR_Box STATE_VARIABLE_U_76_76;
            MR_Box STATE_VARIABLE_U_77_77;
            MR_Box STATE_VARIABLE_U_78_78;
            MR_Box STATE_VARIABLE_U_80_80;
            MR_Box STATE_VARIABLE_U_82_82;
            MR_Integer Var_85;
            MR_Box STATE_VARIABLE_U_86_86;
            MR_Box STATE_VARIABLE_U_88_88;
            MR_Box STATE_VARIABLE_U_90_90;
            MR_Word IsLive_159 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
            MR_Word Real_160 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) & (MR_Integer) 1);

            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044ground(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_76_76);
            parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_output_170, IsLive_159, S_18, STATE_VARIABLE_U_76_76, &STATE_VARIABLE_U_77_77);
            parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(TypeClassInfo_for_output_170, Real_160, S_18, STATE_VARIABLE_U_77_77, &STATE_VARIABLE_U_78_78);
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_170, Uniq_29, (MR_String) "shared", S_18, STATE_VARIABLE_U_78_78, &STATE_VARIABLE_U_80_80);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ",\n", S_18, STATE_VARIABLE_U_80_80, &STATE_VARIABLE_U_82_82);
            Var_85 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_28, (MR_Integer) 0, Var_85, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_82_82, &STATE_VARIABLE_U_86_86);
            parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_86_86, &STATE_VARIABLE_U_88_88);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_88_88, &STATE_VARIABLE_U_90_90);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_90_90, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box STATE_VARIABLE_U_93_93;
            MR_Box STATE_VARIABLE_U_94_94;
            MR_Box STATE_VARIABLE_U_95_95;
            MR_Box STATE_VARIABLE_U_97_97;
            MR_Box STATE_VARIABLE_U_99_99;
            MR_Integer Var_102;
            MR_Box STATE_VARIABLE_U_103_103;
            MR_Box STATE_VARIABLE_U_105_105;
            MR_Box STATE_VARIABLE_U_107_107;
            MR_Word IsLive_161 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
            MR_Word Real_162 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word SubInstName_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));
            MR_Word Uniq_164 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);

            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044any(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_93_93);
            parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_output_170, IsLive_161, S_18, STATE_VARIABLE_U_93_93, &STATE_VARIABLE_U_94_94);
            parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(TypeClassInfo_for_output_170, Real_162, S_18, STATE_VARIABLE_U_94_94, &STATE_VARIABLE_U_95_95);
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_170, Uniq_164, (MR_String) "shared", S_18, STATE_VARIABLE_U_95_95, &STATE_VARIABLE_U_97_97);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ",\n", S_18, STATE_VARIABLE_U_97_97, &STATE_VARIABLE_U_99_99);
            Var_102 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_163, (MR_Integer) 0, Var_102, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_99_99, &STATE_VARIABLE_U_103_103);
            parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_103_103, &STATE_VARIABLE_U_105_105);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_105_105, &STATE_VARIABLE_U_107_107);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_107_107, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box STATE_VARIABLE_U_110_110;
            MR_Integer Var_113;
            MR_Box STATE_VARIABLE_U_114_114;
            MR_Box STATE_VARIABLE_U_116_116;
            MR_Box STATE_VARIABLE_U_118_118;
            MR_Word SubInstName_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));

            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044shared_inst(\n", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_110_110);
            Var_113 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_165, (MR_Integer) 0, Var_113, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_110_110, &STATE_VARIABLE_U_114_114);
            parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_114_114, &STATE_VARIABLE_U_116_116);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_116_116, &STATE_VARIABLE_U_118_118);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_118_118, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Box STATE_VARIABLE_U_121_121;
            MR_Integer Var_124;
            MR_Box STATE_VARIABLE_U_125_125;
            MR_Box STATE_VARIABLE_U_127_127;
            MR_Box STATE_VARIABLE_U_129_129;
            MR_Word SubInstName_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));

            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044mostly_uniq_inst(\n", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_121_121);
            Var_124 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_166, (MR_Integer) 0, Var_124, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_121_121, &STATE_VARIABLE_U_125_125);
            parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_125_125, &STATE_VARIABLE_U_127_127);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_127_127, &STATE_VARIABLE_U_129_129);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_129_129, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Uniqueness_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))));
            MR_Word TypeVarSet_32;
            MR_Box STATE_VARIABLE_U_132_132;
            MR_Box STATE_VARIABLE_U_134_134;
            MR_Box STATE_VARIABLE_U_136_136;
            MR_Box STATE_VARIABLE_U_138_138;
            MR_Box STATE_VARIABLE_U_140_140;

            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044typed_ground(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_132_132);
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_output_170, Uniqueness_30, (MR_String) "shared", S_18, STATE_VARIABLE_U_132_132, &STATE_VARIABLE_U_134_134);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ", ", S_18, STATE_VARIABLE_U_134_134, &STATE_VARIABLE_U_136_136);
            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_32);
            parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_170, TypeVarSet_32, (MR_Integer) 0, Type_31, S_18, STATE_VARIABLE_U_136_136, &STATE_VARIABLE_U_138_138);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_138_138, &STATE_VARIABLE_U_140_140);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_140_140, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Box STATE_VARIABLE_U_143_143;
            MR_Box STATE_VARIABLE_U_145_145;
            MR_Box STATE_VARIABLE_U_147_147;
            MR_Integer Var_150;
            MR_Box STATE_VARIABLE_U_151_151;
            MR_Box STATE_VARIABLE_U_153_153;
            MR_Box STATE_VARIABLE_U_155_155;
            MR_Word SubInstName_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 2))));
            MR_Word Type_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_12, (MR_Integer) 1))));
            MR_Word TypeVarSet_169;

            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) "\044typed_inst(", S_18, STATE_VARIABLE_U_35_35, &STATE_VARIABLE_U_143_143);
            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_169);
            parse_tree__mercury_to_mercury__mercury_format_type_6_p_0(TypeClassInfo_for_output_170, TypeVarSet_169, (MR_Integer) 0, Type_168, S_18, STATE_VARIABLE_U_143_143, &STATE_VARIABLE_U_145_145);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ",\n", S_18, STATE_VARIABLE_U_145_145, &STATE_VARIABLE_U_147_147);
            Var_150 = (MR_Integer) ((MR_Unsigned) Indent_14 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_output_170, (MR_String) "\n", SubInstName_167, (MR_Integer) 0, Var_150, Lang_15, InclAddr_16, InstVarSet_17, S_18, STATE_VARIABLE_U_147_147, &STATE_VARIABLE_U_151_151);
            parse_tree__mercury_to_mercury__mercury_format_tabs_4_p_0(TypeClassInfo_for_output_170, Indent_14, S_18, STATE_VARIABLE_U_151_151, &STATE_VARIABLE_U_153_153);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_153_153, &STATE_VARIABLE_U_155_155);
            parse_tree__parse_tree_out_info__add_string_4_p_0(TypeClassInfo_for_output_170, Suffix_11, S_18, STATE_VARIABLE_U_155_155, STATE_VARIABLE_U_34);
          }
          break;
      }
      break;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__instmap_to_string_4_f_0(
  MR_Word VarTable_6,
  MR_Word VarNamePrint_7,
  MR_Integer Indent_8,
  MR_Word InstMap_9)
{
  MR_bool succeeded;
  MR_String Str_10;

  succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_9);
  if (succeeded)
    Str_10 = (MR_String) "unreachable";
  else
  {
    MR_Word AssocList_11;

    hlds__instmap__instmap_to_assoc_list_2_p_0(InstMap_9, &AssocList_11);
    Str_10 = hlds__hlds_out__hlds_out_mode__var_inst_list_to_string_4_f_0(VarTable_6, VarNamePrint_7, Indent_8, AssocList_11);
  }
  return Str_10;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__var_inst_list_to_string_4_f_0(
  MR_Word VarTable_1,
  MR_Word VarNamePrint_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4)
{
  MR_String HeadVar__5_5;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__5_5 = (MR_String) "";
  else
  {
    MR_Word Var_12;
    MR_Word Inst_13;
    MR_Word VarsInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_String VarStr_16;
    MR_Word InstVarSet_17;
    MR_String InstStr_18;
    MR_String VarInstStr_19;
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_String Var_46;

    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
    Inst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
    VarStr_16 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_1, VarNamePrint_2, Var_12);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_17);
    InstStr_18 = parse_tree__parse_tree_out_inst__mercury_inst_to_string_3_f_0((MR_Integer) 1, InstVarSet_17, Inst_13);
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", InstStr_18);
    VarInstStr_19 = mercury__string__f_43_43_2_f_0(VarStr_16, Var_46);
    if ((VarsInsts_14 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = VarInstStr_19;
    else
    {
      MR_String VarsInstsStr_22;
      MR_String IndentStr_23;
      MR_String Var_47;
      MR_String Var_48;
      MR_String Var_50;

      VarsInstsStr_22 = hlds__hlds_out__hlds_out_mode__var_inst_list_to_string_4_f_0(VarTable_1, VarNamePrint_2, Indent_3, VarsInsts_14);
      mercury__string__duplicate_char_3_p_0((MR_Char) 9, Indent_3, &IndentStr_23);
      Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "%            ", VarsInstsStr_22);
      Var_48 = mercury__string__f_43_43_2_f_0(IndentStr_23, Var_47);
      Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_48);
      HeadVar__5_5 = mercury__string__f_43_43_2_f_0(VarInstStr_19, Var_50);
    }
  }
  return HeadVar__5_5;
}

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_mode____Unify____incl_addr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_mode____Compare____incl_addr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
