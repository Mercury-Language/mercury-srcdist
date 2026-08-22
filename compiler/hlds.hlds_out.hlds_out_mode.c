/*
** Automatically generated from `hlds_out_mode.m'
** by the Mercury compiler,
** version rotd-2026-08-22
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
#include "cord.mih"
#include "counter.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_proc_id.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_tree_to_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
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
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_modes_loop_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_40,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word InclAddr_3,
  MR_Unsigned Indent_4,
  MR_Integer ArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_functors_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_54,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word InclAddr_3,
  MR_Unsigned Indent0_4,
  MR_Word HeadVar__5_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(
  MR_Word TypeClassInfo_for_pt_output_170,
  MR_Word Lang_11,
  MR_Word InstVarSet_12,
  MR_Word InclAddr_13,
  MR_Unsigned Indent_14,
  MR_Word FirstIndentPrinted_15,
  MR_String Suffix_16,
  MR_Word InstName_17,
  MR_Box S_18,
  MR_Box STATE_VARIABLE_U_0_33,
  MR_Box * STATE_VARIABLE_U_34);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__var_inst_list_to_string_4_f_0(
  MR_Word VarTable_1,
  MR_Word VarNamePrint_2,
  MR_Unsigned Indent_3,
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[4][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_4[1][1];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_1[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_3[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[2])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_mode_scalar_common_4[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
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
  MR_Word InstVarSet_4,
  MR_Word UnifyMode_5)
{
  MR_String Str_6;
  MR_Word State0_7;
  MR_Word State_8;
  MR_Box conv0_State_8;

  State0_7 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]), InstVarSet_4, UnifyMode_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_7)), &conv0_State_8);
  State_8 = ((MR_Word) (conv0_State_8));
  Str_6 = mercury__string__builder__to_string_1_f_0(State_8);
  return Str_6;
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_5_p_0(
  MR_Word Stream_6,
  MR_Word InstVarSet_7,
  MR_Word UnifyMode_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]), InstVarSet_7, UnifyMode_8, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_unify_mode_list_to_string_2_f_0(
  MR_Word InstVarSet_4,
  MR_Word UnifyModes_5)
{
  MR_String Str_6;
  MR_Word State0_7;
  MR_Word State_8;
  MR_Box conv0_State_8;

  State0_7 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]), InstVarSet_4, UnifyModes_5, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_7)), &conv0_State_8);
  State_8 = ((MR_Word) (conv0_State_8));
  Str_6 = mercury__string__builder__to_string_1_f_0(State_8);
  return Str_6;
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_list_5_p_0(
  MR_Word Stream_6,
  MR_Word InstVarSet_7,
  MR_Word UnifyModes_8)
{
  MR_Box conv0_STATE_VARIABLE_IO_11;

  hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]), InstVarSet_7, UnifyModes_8, ((MR_Box) (Stream_6)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_list_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
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
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_0_4;
    else
    {
      MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Modes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Box STATE_VARIABLE_U_1_20;

      hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_5_p_0(TypeClassInfo_for_pt_output_23, HeadVar__1_1, Mode_12, HeadVar__3_3, STATE_VARIABLE_U_0_4, &STATE_VARIABLE_U_1_20);
      if ((Modes_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_1_20;
      else
      {
        MR_Box STATE_VARIABLE_U_2_22;
        MR_Word Mode_29;
        MR_Word Modes_30;
        MR_Box STATE_VARIABLE_U_1_36;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));

        func_0(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), HeadVar__3_3, STATE_VARIABLE_U_1_20, &STATE_VARIABLE_U_2_22);
        Mode_29 = ((MR_Word) ((MR_hl_field(1, Modes_13, 0))));
        Modes_30 = ((MR_Word) ((MR_hl_field(1, Modes_13, 1))));
        hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_5_p_0(TypeClassInfo_for_pt_output_23, HeadVar__1_1, Mode_29, HeadVar__3_3, STATE_VARIABLE_U_2_22, &STATE_VARIABLE_U_1_36);
        if ((Modes_30 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_U_5 = STATE_VARIABLE_U_1_36;
        else
        {
          MR_Box STATE_VARIABLE_U_2_38;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_U_0_4;

          func_1(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) ", ")), HeadVar__3_3, STATE_VARIABLE_U_1_36, &STATE_VARIABLE_U_2_38);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Modes_30;
          next_value_of_STATE_VARIABLE_U_0_4 = STATE_VARIABLE_U_2_38;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_U_0_4 = next_value_of_STATE_VARIABLE_U_0_4;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_unify_mode_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_23,
  MR_Word InstVarSet_6,
  MR_Word UnifyMode_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_14,
  MR_Box * STATE_VARIABLE_U_15)
{
  MR_Word LHSInit_10 = ((MR_Word) ((MR_hl_field(0, UnifyMode_7, 0))));
  MR_Word LHSFinal_11 = ((MR_Word) ((MR_hl_field(0, UnifyMode_7, 1))));
  MR_Word RHSInit_12 = ((MR_Word) ((MR_hl_field(0, UnifyMode_7, 2))));
  MR_Word RHSFinal_13 = ((MR_Word) ((MR_hl_field(0, UnifyMode_7, 3))));
  MR_Word Var_17;
  MR_Box STATE_VARIABLE_U_1_18;
  MR_Box STATE_VARIABLE_U_2_20;
  MR_Word Var_22;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (LHSInit_10));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (LHSFinal_11));
  }
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_23, (MR_Integer) 1, InstVarSet_6, Var_17, S_8, STATE_VARIABLE_U_0_14, &STATE_VARIABLE_U_1_18);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_23, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_23)), ((MR_Box) ((MR_String) " = ")), S_8, STATE_VARIABLE_U_1_18, &STATE_VARIABLE_U_2_20);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (RHSInit_12));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (RHSFinal_13));
  }
  parse_tree__parse_tree_out_inst__mercury_format_mode_6_p_0(TypeClassInfo_for_pt_output_23, (MR_Integer) 1, InstVarSet_6, Var_22, S_8, STATE_VARIABLE_U_2_20, STATE_VARIABLE_U_15);
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_unify_mode_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word InclAddr_9,
  MR_Unsigned Indent_10,
  MR_Word Inst_11)
{
  MR_String Str_12;
  MR_Word State0_13;
  MR_Word State_14;
  MR_Box conv0_State_14;

  State0_13 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]), Lang_7, InstVarSet_8, InclAddr_9, Indent_10, Inst_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_13)), &conv0_State_14);
  State_14 = ((MR_Word) (conv0_State_14));
  Str_12 = mercury__string__builder__to_string_1_f_0(State_14);
  return Str_12;
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_8_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word InclAddr_12,
  MR_Unsigned Indent_13,
  MR_Word Inst_14)
{
  MR_Box conv0_STATE_VARIABLE_IO_17;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]), Lang_10, InstVarSet_11, InclAddr_12, Indent_13, Inst_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_19,
  MR_Word Lang_9,
  MR_Word InstVarSet_10,
  MR_Word InclAddr_11,
  MR_Unsigned Indent_12,
  MR_Word UnifyModes_13,
  MR_Box Stream_14,
  MR_Box STATE_VARIABLE_IO_0_16,
  MR_Box * STATE_VARIABLE_IO_17)
{
  hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_modes_loop_9_p_0(TypeClassInfo_for_pt_output_19, Lang_9, InstVarSet_10, InclAddr_11, Indent_12, (MR_Integer) 1, UnifyModes_13, Stream_14, STATE_VARIABLE_IO_0_16, STATE_VARIABLE_IO_17);
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_unify_mode_list_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word InclAddr_9,
  MR_Unsigned Indent_10,
  MR_Word UnifyModes_11)
{
  MR_String Str_12;
  MR_Word State0_13;
  MR_Word State_14;
  MR_Box conv0_State_14;

  State0_13 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_modes_loop_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]), Lang_7, InstVarSet_8, InclAddr_9, Indent_10, (MR_Integer) 1, UnifyModes_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_13)), &conv0_State_14);
  State_14 = ((MR_Word) (conv0_State_14));
  Str_12 = mercury__string__builder__to_string_1_f_0(State_14);
  return Str_12;
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_list_8_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word InclAddr_12,
  MR_Unsigned Indent_13,
  MR_Word UnifyModes_14)
{
  MR_Box conv0_STATE_VARIABLE_IO_17;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_modes_loop_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]), Lang_10, InstVarSet_11, InclAddr_12, Indent_13, (MR_Integer) 1, UnifyModes_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_modes_loop_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_40,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word InclAddr_3,
  MR_Unsigned Indent_4,
  MR_Integer ArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_9 = STATE_VARIABLE_U_0_8;
    else
    {
      MR_Word UnifyMode_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word UnifyModes_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Box STATE_VARIABLE_U_1_30;
      MR_Box STATE_VARIABLE_U_2_32;
      MR_Box STATE_VARIABLE_U_3_33;
      MR_Box STATE_VARIABLE_U_4_35;
      MR_Box STATE_VARIABLE_U_5_36;
      MR_Integer Var_37;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Integer next_value_of_ArgNum_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Box next_value_of_STATE_VARIABLE_U_0_8;

      parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_40, Indent_4, S_7, STATE_VARIABLE_U_0_8, &STATE_VARIABLE_U_1_30);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_40, 0)), 6))));
      func_0(((MR_Box) (TypeClassInfo_for_pt_output_40)), ((MR_Box) ((MR_String) "argument ")), S_7, STATE_VARIABLE_U_1_30, &STATE_VARIABLE_U_2_32);
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_40, 0)), 10))));
      func_1(((MR_Box) (TypeClassInfo_for_pt_output_40)), ((MR_Box) (ArgNum_5)), S_7, STATE_VARIABLE_U_2_32, &STATE_VARIABLE_U_3_33);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_40, 0)), 6))));
      func_2(((MR_Box) (TypeClassInfo_for_pt_output_40)), ((MR_Box) ((MR_String) ":\n")), S_7, STATE_VARIABLE_U_3_33, &STATE_VARIABLE_U_4_35);
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0(TypeClassInfo_for_pt_output_40, Lang_1, InstVarSet_2, InclAddr_3, Indent_4, UnifyMode_24, S_7, STATE_VARIABLE_U_4_35, &STATE_VARIABLE_U_5_36);
      Var_37 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ArgNum_5 = Var_37;
      next_value_of_HeadVar__6_6 = UnifyModes_25;
      next_value_of_STATE_VARIABLE_U_0_8 = STATE_VARIABLE_U_5_36;
      ArgNum_5 = next_value_of_ArgNum_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_U_0_8 = next_value_of_STATE_VARIABLE_U_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_55,
  MR_Word Lang_9,
  MR_Word InstVarSet_10,
  MR_Word InclAddr_11,
  MR_Unsigned Indent_12,
  MR_Word UnifyMode_13,
  MR_Box S_14,
  MR_Box STATE_VARIABLE_U_0_24,
  MR_Box * STATE_VARIABLE_U_25)
{
  MR_bool succeeded;
  MR_Word LHSInit_16 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 0))));
  MR_Word LHSFinal_17 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 1))));
  MR_Word RHSInit_18 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 2))));
  MR_Word RHSFinal_19 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 3))));
  MR_Integer LHSInitAddr_20;
  MR_Integer RHSInitAddr_21;
  MR_Integer LHSFinalAddr_22;
  MR_Integer RHSFinalAddr_23;
  MR_Box STATE_VARIABLE_U_1_26;
  MR_Box STATE_VARIABLE_U_2_28;
  MR_Box STATE_VARIABLE_U_3_30;
  MR_Box STATE_VARIABLE_U_4_31;
  MR_Box STATE_VARIABLE_U_5_33;
  MR_Box STATE_VARIABLE_U_8_38;
  MR_Box STATE_VARIABLE_U_9_40;
  MR_Box STATE_VARIABLE_U_13_47;
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
  parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_55, Indent_12, S_14, STATE_VARIABLE_U_0_24, &STATE_VARIABLE_U_1_26);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_55, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_55)), ((MR_Box) ((MR_String) "old lhs inst:\n")), S_14, STATE_VARIABLE_U_1_26, &STATE_VARIABLE_U_2_28);
  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_55, Lang_9, InstVarSet_10, InclAddr_11, Indent_12, (MR_String) "\n", LHSInit_16, S_14, STATE_VARIABLE_U_2_28, &STATE_VARIABLE_U_3_30);
  parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_55, Indent_12, S_14, STATE_VARIABLE_U_3_30, &STATE_VARIABLE_U_4_31);
  succeeded = (RHSInitAddr_21 == LHSInitAddr_20);
  if (succeeded)
  {
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_55, 0)), 6))));

    func_1(((MR_Box) (TypeClassInfo_for_pt_output_55)), ((MR_Box) ((MR_String) "old rhs inst: same as old lhs inst\n")), S_14, STATE_VARIABLE_U_4_31, &STATE_VARIABLE_U_5_33);
  }
  else
  {
    MR_Box STATE_VARIABLE_U_6_35;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_55, 0)), 6))));

    func_2(((MR_Box) (TypeClassInfo_for_pt_output_55)), ((MR_Box) ((MR_String) "old rhs inst:\n")), S_14, STATE_VARIABLE_U_4_31, &STATE_VARIABLE_U_6_35);
    hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_55, Lang_9, InstVarSet_10, InclAddr_11, Indent_12, (MR_String) "\n", RHSInit_18, S_14, STATE_VARIABLE_U_6_35, &STATE_VARIABLE_U_5_33);
  }
  parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_55, Indent_12, S_14, STATE_VARIABLE_U_5_33, &STATE_VARIABLE_U_8_38);
  succeeded = (LHSFinalAddr_22 == LHSInitAddr_20);
  if (succeeded)
  {
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_55, 0)), 6))));

    func_3(((MR_Box) (TypeClassInfo_for_pt_output_55)), ((MR_Box) ((MR_String) "new lhs inst: unchanged\n")), S_14, STATE_VARIABLE_U_8_38, &STATE_VARIABLE_U_9_40);
  }
  else
  {
    succeeded = (LHSFinalAddr_22 == RHSInitAddr_21);
    if (succeeded)
    {
      void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_55, 0)), 6))));

      func_4(((MR_Box) (TypeClassInfo_for_pt_output_55)), ((MR_Box) ((MR_String) "new lhs inst: changed to old rhs inst\n")), S_14, STATE_VARIABLE_U_8_38, &STATE_VARIABLE_U_9_40);
    }
    else
    {
      MR_Box STATE_VARIABLE_U_11_44;
      void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_55, 0)), 6))));

      func_5(((MR_Box) (TypeClassInfo_for_pt_output_55)), ((MR_Box) ((MR_String) "new lhs inst:\n")), S_14, STATE_VARIABLE_U_8_38, &STATE_VARIABLE_U_11_44);
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_55, Lang_9, InstVarSet_10, InclAddr_11, Indent_12, (MR_String) "\n", LHSFinal_17, S_14, STATE_VARIABLE_U_11_44, &STATE_VARIABLE_U_9_40);
    }
  }
  parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_55, Indent_12, S_14, STATE_VARIABLE_U_9_40, &STATE_VARIABLE_U_13_47);
  succeeded = (RHSFinalAddr_23 == RHSInitAddr_21);
  if (succeeded)
  {
    void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_55, 0)), 6))));

    func_6(((MR_Box) (TypeClassInfo_for_pt_output_55)), ((MR_Box) ((MR_String) "new rhs inst: unchanged\n")), S_14, STATE_VARIABLE_U_13_47, STATE_VARIABLE_U_25);
  }
  else
  {
    succeeded = (RHSFinalAddr_23 == LHSFinalAddr_22);
    if (succeeded)
    {
      void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_55, 0)), 6))));

      func_7(((MR_Box) (TypeClassInfo_for_pt_output_55)), ((MR_Box) ((MR_String) "new rhs inst: changed to new lhs inst\n")), S_14, STATE_VARIABLE_U_13_47, STATE_VARIABLE_U_25);
    }
    else
    {
      MR_Box STATE_VARIABLE_U_16_53;
      void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_55, 0)), 6))));

      func_8(((MR_Box) (TypeClassInfo_for_pt_output_55)), ((MR_Box) ((MR_String) "new rhs inst:\n")), S_14, STATE_VARIABLE_U_13_47, &STATE_VARIABLE_U_16_53);
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_55, Lang_9, InstVarSet_10, InclAddr_11, Indent_12, (MR_String) "\n", RHSFinal_19, S_14, STATE_VARIABLE_U_16_53, STATE_VARIABLE_U_25);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word InclAddr_9,
  MR_Unsigned Indent_10,
  MR_Word Inst_11)
{
  MR_String Str_12;
  MR_Word State0_13;
  MR_Word State_14;
  MR_Box conv0_State_14;

  State0_13 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]), Lang_7, InstVarSet_8, InclAddr_9, Indent_10, (MR_String) "\n", Inst_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_13)), &conv0_State_14);
  State_14 = ((MR_Word) (conv0_State_14));
  Str_12 = mercury__string__builder__to_string_1_f_0(State_14);
  return Str_12;
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_8_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word InclAddr_12,
  MR_Unsigned Indent_13,
  MR_Word Inst_14)
{
  MR_Box conv0_STATE_VARIABLE_IO_17;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]), Lang_10, InstVarSet_11, InclAddr_12, Indent_13, (MR_String) "\n", Inst_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_structured_inst_list_to_string_5_f_0(
  MR_Word Lang_7,
  MR_Word InstVarSet_8,
  MR_Word InclAddr_9,
  MR_Unsigned Indent_10,
  MR_Word Insts_11)
{
  MR_String Str_12;
  MR_Word State0_13;
  MR_Word State_14;
  MR_Box conv0_State_14;

  State0_13 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[3]), Lang_7, InstVarSet_8, InclAddr_9, Indent_10, Insts_11, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (State0_13)), &conv0_State_14);
  State_14 = ((MR_Word) (conv0_State_14));
  Str_12 = mercury__string__builder__to_string_1_f_0(State_14);
  return Str_12;
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_list_8_p_0(
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word InclAddr_12,
  MR_Unsigned Indent_13,
  MR_Word Insts_14)
{
  MR_Box conv0_STATE_VARIABLE_IO_17;

  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_2[1]), Lang_10, InstVarSet_11, InclAddr_12, Indent_13, Insts_14, ((MR_Box) (Stream_9)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(
  MR_Word TypeClassInfo_for_pt_output_99,
  MR_Word Lang_10,
  MR_Word InstVarSet_11,
  MR_Word InclAddr_12,
  MR_Unsigned Indent_13,
  MR_String Suffix_14,
  MR_Word Inst_15,
  MR_Box S_16,
  MR_Box STATE_VARIABLE_U_0_31,
  MR_Box * STATE_VARIABLE_U_32)
{
  MR_Box STATE_VARIABLE_U_1_33;
  MR_Box STATE_VARIABLE_U_3_40;

  parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_99, Indent_13, S_16, STATE_VARIABLE_U_0_31, &STATE_VARIABLE_U_1_33);
  switch (InclAddr_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer InstAddr_18;
        MR_String InstAddrStr_19;
        MR_Box STATE_VARIABLE_U_2_38;
        MR_Unsigned Var_103;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

{
#define MR_PROC_LABEL hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0

	MR_Word Inst;
	MR_Integer InstAddr;

	Inst = Inst_15 ;
		{

    InstAddr = Inst;


		;}
#undef MR_PROC_LABEL
	InstAddr_18  = InstAddr;
}
        mercury__string__format__format_cast_int_to_uint_2_p_0(InstAddr_18, &Var_103);
        mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_mode_scalar_common_4[0]), (MR_Integer) 2, Var_103, &InstAddrStr_19);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) (InstAddrStr_19)), S_16, STATE_VARIABLE_U_1_33, &STATE_VARIABLE_U_2_38);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) ((MR_String) ": ")), S_16, STATE_VARIABLE_U_2_38, &STATE_VARIABLE_U_3_40);
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_U_3_40 = STATE_VARIABLE_U_1_33;
      break;
  }
  switch (MR_tag((MR_Word) Inst_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box STATE_VARIABLE_U_7_46;
            void MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
            void MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_11(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) ((MR_String) "free")), S_16, STATE_VARIABLE_U_3_40, &STATE_VARIABLE_U_7_46);
            func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
            func_12(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) (Suffix_14)), S_16, STATE_VARIABLE_U_7_46, STATE_VARIABLE_U_32);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box STATE_VARIABLE_U_30_92;
            void MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
            void MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            func_15(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) ((MR_String) "not_reached")), S_16, STATE_VARIABLE_U_3_40, &STATE_VARIABLE_U_30_92);
            func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
            func_16(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) (Suffix_14)), S_16, STATE_VARIABLE_U_30_92, STATE_VARIABLE_U_32);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box STATE_VARIABLE_U_22_79;
        MR_Word Uniq_97 = ((MR_Unsigned) ((MR_hl_field(1, Inst_15, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_98 = ((MR_Word) ((MR_hl_field(1, Inst_15, 1))));
        void MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        if ((HOInstInfo_98 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_99, Uniq_97, (MR_String) "ground", S_16, STATE_VARIABLE_U_3_40, &STATE_VARIABLE_U_22_79);
        else
        {
          MR_Word PredInstInfo_95 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_98), (MR_Integer) 1));

          parse_tree__parse_tree_out_inst__mercury_format_ground_pred_inst_info_7_p_0(TypeClassInfo_for_pt_output_99, (MR_Integer) 1, InstVarSet_11, Uniq_97, PredInstInfo_95, S_16, STATE_VARIABLE_U_3_40, &STATE_VARIABLE_U_22_79);
        }
        func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
        func_13(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) (Suffix_14)), S_16, STATE_VARIABLE_U_22_79, STATE_VARIABLE_U_32);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults_23 = ((MR_Word) ((MR_hl_field(2, Inst_15, 1))));
        MR_Word BoundFunctors_24 = ((MR_Word) ((MR_hl_field(2, Inst_15, 2))));
        MR_Box STATE_VARIABLE_U_9_49;
        MR_Box STATE_VARIABLE_U_10_51;
        MR_Box STATE_VARIABLE_U_15_65;
        MR_Unsigned Var_66;
        MR_Box STATE_VARIABLE_U_16_67;
        MR_Box STATE_VARIABLE_U_18_73;
        MR_Box STATE_VARIABLE_U_19_74;
        MR_Box STATE_VARIABLE_U_20_76;
        MR_Word Uniq_94 = ((MR_Unsigned) ((MR_hl_field(2, Inst_15, 0))) & (MR_Integer) 7);
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_99, Uniq_94, (MR_String) "bound", S_16, STATE_VARIABLE_U_3_40, &STATE_VARIABLE_U_9_49);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) ((MR_String) "(\n")), S_16, STATE_VARIABLE_U_9_49, &STATE_VARIABLE_U_10_51);
        switch (Lang_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word InstResultsTerm_25;
              MR_String InstResultsStr_26;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Unsigned Var_55;
              MR_Box STATE_VARIABLE_U_11_56;
              MR_Box STATE_VARIABLE_U_12_58;
              MR_Box STATE_VARIABLE_U_13_60;
              MR_Unsigned Var_61;
              MR_Box STATE_VARIABLE_U_14_62;
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              Var_52 = mercury__term_context__dummy_context_0_f_0();
              InstResultsTerm_25 = parse_tree__parse_tree_to_term__inst_test_results_to_term_2_f_0(Var_52, InstResults_23);
              Var_53 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              InstResultsStr_26 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_53, (MR_Integer) 2, InstResultsTerm_25);
              Var_55 = (Indent_13 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_99, Var_55, S_16, STATE_VARIABLE_U_10_51, &STATE_VARIABLE_U_11_56);
              func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
              func_4(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) (InstResultsStr_26)), S_16, STATE_VARIABLE_U_11_56, &STATE_VARIABLE_U_12_58);
              func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
              func_5(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) ((MR_String) ",\n")), S_16, STATE_VARIABLE_U_12_58, &STATE_VARIABLE_U_13_60);
              Var_61 = (Indent_13 + (MR_Unsigned) 1U);
              parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_99, Var_61, S_16, STATE_VARIABLE_U_13_60, &STATE_VARIABLE_U_14_62);
              func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
              func_6(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) ((MR_String) "[\n")), S_16, STATE_VARIABLE_U_14_62, &STATE_VARIABLE_U_15_65);
            }
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_U_15_65 = STATE_VARIABLE_U_10_51;
            break;
        }
        Var_66 = (Indent_13 + (MR_Unsigned) 1U);
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_functors_8_p_0(TypeClassInfo_for_pt_output_99, Lang_10, InstVarSet_11, InclAddr_12, Var_66, BoundFunctors_24, S_16, STATE_VARIABLE_U_15_65, &STATE_VARIABLE_U_16_67);
        switch (Lang_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Unsigned Var_69 = (Indent_13 + (MR_Unsigned) 1U);
              MR_Box STATE_VARIABLE_U_17_70;
              void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_99, Var_69, S_16, STATE_VARIABLE_U_16_67, &STATE_VARIABLE_U_17_70);
              func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
              func_7(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) ((MR_String) "]\n")), S_16, STATE_VARIABLE_U_17_70, &STATE_VARIABLE_U_18_73);
            }
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_U_18_73 = STATE_VARIABLE_U_16_67;
            break;
        }
        parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_99, Indent_13, S_16, STATE_VARIABLE_U_18_73, &STATE_VARIABLE_U_19_74);
        func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
        func_8(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) ((MR_String) ")")), S_16, STATE_VARIABLE_U_19_74, &STATE_VARIABLE_U_20_76);
        func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
        func_9(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) (Suffix_14)), S_16, STATE_VARIABLE_U_20_76, STATE_VARIABLE_U_32);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst_15, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_30 = ((MR_Word) ((MR_hl_field(3, Inst_15, 1))));

            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_pt_output_99, Lang_10, InstVarSet_11, InclAddr_12, Indent_13, (MR_Integer) 1, Suffix_14, InstName_30, S_16, STATE_VARIABLE_U_3_40, STATE_VARIABLE_U_32);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(3, Inst_15, 1))));
            MR_Word ConstrainedInst_29 = ((MR_Word) ((MR_hl_field(3, Inst_15, 2))));
            MR_Box STATE_VARIABLE_U_27_87;
            void MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            parse_tree__parse_tree_out_inst__mercury_format_constrained_inst_vars_7_p_0(TypeClassInfo_for_pt_output_99, (MR_Integer) 1, InstVarSet_11, Vars_28, ConstrainedInst_29, S_16, STATE_VARIABLE_U_3_40, &STATE_VARIABLE_U_27_87);
            func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
            func_10(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) (Suffix_14)), S_16, STATE_VARIABLE_U_27_87, STATE_VARIABLE_U_32);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_20 = ((MR_Unsigned) ((MR_hl_field(3, Inst_15, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_21 = ((MR_Word) ((MR_hl_field(3, Inst_15, 2))));
            MR_Box STATE_VARIABLE_U_4_42;
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            if ((HOInstInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
              parse_tree__parse_tree_out_inst__mercury_format_any_uniqueness_4_p_0(TypeClassInfo_for_pt_output_99, Uniq_20, S_16, STATE_VARIABLE_U_3_40, &STATE_VARIABLE_U_4_42);
            else
            {
              MR_Word PredInstInfo_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_21), (MR_Integer) 1));

              parse_tree__parse_tree_out_inst__mercury_format_any_pred_inst_info_7_p_0(TypeClassInfo_for_pt_output_99, (MR_Integer) 1, InstVarSet_11, Uniq_20, PredInstInfo_22, S_16, STATE_VARIABLE_U_3_40, &STATE_VARIABLE_U_4_42);
            }
            func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
            func_2(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) (Suffix_14)), S_16, STATE_VARIABLE_U_4_42, STATE_VARIABLE_U_32);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, Inst_15, 1))));
            MR_Box STATE_VARIABLE_U_25_84;
            void MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            parse_tree__parse_tree_out_term__mercury_format_var_vs_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), TypeClassInfo_for_pt_output_99, InstVarSet_11, (MR_Integer) 0, Var_27, S_16, STATE_VARIABLE_U_3_40, &STATE_VARIABLE_U_25_84);
            func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_99, 0)), 6))));
            func_14(((MR_Box) (TypeClassInfo_for_pt_output_99)), ((MR_Box) (Suffix_14)), S_16, STATE_VARIABLE_U_25_84, STATE_VARIABLE_U_32);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_bound_functors_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_54,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word InclAddr_3,
  MR_Unsigned Indent0_4,
  MR_Word HeadVar__5_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_8 = STATE_VARIABLE_U_0_7;
    else
    {
      MR_Word BoundFunctor_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word BoundFunctors_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word ConsId_25 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_21, 0))));
      MR_Word Args_26 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_21, 1))));
      MR_Unsigned Indent1_27 = (Indent0_4 + (MR_Unsigned) 1U);
      MR_Unsigned Indent2_28 = (Indent1_27 + (MR_Unsigned) 1U);
      MR_Box STATE_VARIABLE_U_3_41;

      if ((Args_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Box STATE_VARIABLE_U_1_37;
        MR_Box STATE_VARIABLE_U_2_39;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_54, Indent1_27, S_6, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_1_37);
        parse_tree__parse_tree_out_cons_id__mercury_format_cons_id_6_p_0(TypeClassInfo_for_pt_output_54, Lang_1, (MR_Integer) 0, ConsId_25, S_6, STATE_VARIABLE_U_1_37, &STATE_VARIABLE_U_2_39);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_54, 0)), 6))));
        func_0(((MR_Box) (TypeClassInfo_for_pt_output_54)), ((MR_Box) ((MR_String) "\n")), S_6, STATE_VARIABLE_U_2_39, &STATE_VARIABLE_U_3_41);
      }
      else
      {
        MR_Box STATE_VARIABLE_U_4_42;
        MR_Box STATE_VARIABLE_U_5_44;
        MR_Box STATE_VARIABLE_U_6_46;
        MR_Box STATE_VARIABLE_U_7_47;
        MR_Box STATE_VARIABLE_U_8_48;
        MR_Word Inst_66;
        MR_Word Insts_67;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_54, Indent1_27, S_6, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_4_42);
        parse_tree__parse_tree_out_cons_id__mercury_format_cons_id_6_p_0(TypeClassInfo_for_pt_output_54, Lang_1, (MR_Integer) 1, ConsId_25, S_6, STATE_VARIABLE_U_4_42, &STATE_VARIABLE_U_5_44);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_54, 0)), 6))));
        func_1(((MR_Box) (TypeClassInfo_for_pt_output_54)), ((MR_Box) ((MR_String) "(\n")), S_6, STATE_VARIABLE_U_5_44, &STATE_VARIABLE_U_6_46);
        Inst_66 = ((MR_Word) ((MR_hl_field(1, Args_26, 0))));
        Insts_67 = ((MR_Word) ((MR_hl_field(1, Args_26, 1))));
        if ((Insts_67 == (MR_Word) ((MR_Unsigned) 0U)))
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_54, Lang_1, InstVarSet_2, InclAddr_3, Indent2_28, (MR_String) "\n", Inst_66, S_6, STATE_VARIABLE_U_6_46, &STATE_VARIABLE_U_7_47);
        else
        {
          MR_Box STATE_VARIABLE_U_1_74;
          MR_Word Inst_106;
          MR_Word Insts_107;
          MR_String Suffix_109;
          MR_Box STATE_VARIABLE_U_1_114;

          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_54, Lang_1, InstVarSet_2, InclAddr_3, Indent2_28, (MR_String) ",\n", Inst_66, S_6, STATE_VARIABLE_U_6_46, &STATE_VARIABLE_U_1_74);
          Inst_106 = ((MR_Word) ((MR_hl_field(1, Insts_67, 0))));
          Insts_107 = ((MR_Word) ((MR_hl_field(1, Insts_67, 1))));
          if ((Insts_107 == (MR_Word) ((MR_Unsigned) 0U)))
            Suffix_109 = (MR_String) "\n";
          else
            Suffix_109 = (MR_String) ",\n";
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_54, Lang_1, InstVarSet_2, InclAddr_3, Indent2_28, Suffix_109, Inst_106, S_6, STATE_VARIABLE_U_1_74, &STATE_VARIABLE_U_1_114);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_pt_output_54, Lang_1, InstVarSet_2, InclAddr_3, Indent2_28, Insts_107, S_6, STATE_VARIABLE_U_1_114, &STATE_VARIABLE_U_7_47);
        }
        parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_54, Indent1_27, S_6, STATE_VARIABLE_U_7_47, &STATE_VARIABLE_U_8_48);
        func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_54, 0)), 6))));
        func_2(((MR_Box) (TypeClassInfo_for_pt_output_54)), ((MR_Box) ((MR_String) ")\n")), S_6, STATE_VARIABLE_U_8_48, &STATE_VARIABLE_U_3_41);
      }
      if ((BoundFunctors_22 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_U_8 = STATE_VARIABLE_U_3_41;
      else
      {
        MR_Box STATE_VARIABLE_U_10_51;
        MR_Box STATE_VARIABLE_U_11_53;
        void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Word next_value_of_HeadVar__5_5;
        MR_Box next_value_of_STATE_VARIABLE_U_0_7;

        parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_54, Indent0_4, S_6, STATE_VARIABLE_U_3_41, &STATE_VARIABLE_U_10_51);
        func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_54, 0)), 6))));
        func_3(((MR_Box) (TypeClassInfo_for_pt_output_54)), ((MR_Box) ((MR_String) ";\n")), S_6, STATE_VARIABLE_U_10_51, &STATE_VARIABLE_U_11_53);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__5_5 = BoundFunctors_22;
        next_value_of_STATE_VARIABLE_U_0_7 = STATE_VARIABLE_U_11_53;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_U_0_7 = next_value_of_STATE_VARIABLE_U_0_7;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(
  MR_Word TypeClassInfo_for_pt_output_31,
  MR_Word Lang_1,
  MR_Word InstVarSet_2,
  MR_Word InclAddr_3,
  MR_Unsigned Indent_4,
  MR_Word HeadVar__5_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_7,
  MR_Box * STATE_VARIABLE_U_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_U_8 = STATE_VARIABLE_U_0_7;
    else
    {
      MR_Word Inst_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Insts_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_String Suffix_25;
      MR_Box STATE_VARIABLE_U_1_30;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Box next_value_of_STATE_VARIABLE_U_0_7;

      if ((Insts_22 == (MR_Word) ((MR_Unsigned) 0U)))
        Suffix_25 = (MR_String) "\n";
      else
        Suffix_25 = (MR_String) ",\n";
      hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_31, Lang_1, InstVarSet_2, InclAddr_3, Indent_4, Suffix_25, Inst_21, S_6, STATE_VARIABLE_U_0_7, &STATE_VARIABLE_U_1_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Insts_22;
      next_value_of_STATE_VARIABLE_U_0_7 = STATE_VARIABLE_U_1_30;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_U_0_7 = next_value_of_STATE_VARIABLE_U_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(
  MR_Word TypeClassInfo_for_pt_output_170,
  MR_Word Lang_11,
  MR_Word InstVarSet_12,
  MR_Word InclAddr_13,
  MR_Unsigned Indent_14,
  MR_Word FirstIndentPrinted_15,
  MR_String Suffix_16,
  MR_Word InstName_17,
  MR_Box S_18,
  MR_Box STATE_VARIABLE_U_0_33,
  MR_Box * STATE_VARIABLE_U_34)
{
  MR_Box STATE_VARIABLE_U_1_35;

  switch (FirstIndentPrinted_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_170, Indent_14, S_18, STATE_VARIABLE_U_0_33, &STATE_VARIABLE_U_1_35);
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_U_1_35 = STATE_VARIABLE_U_0_33;
      break;
  }
  switch (MR_tag((MR_Word) InstName_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Name_20 = ((MR_Word) ((MR_hl_field(0, InstName_17, 0))));
        MR_Word Args_21 = ((MR_Word) ((MR_hl_field(0, InstName_17, 1))));
        MR_Box STATE_VARIABLE_U_2_36;

        if ((Args_21 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_4_p_0(TypeClassInfo_for_pt_output_170, Name_20, S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_2_36);
        else
        {
          MR_Box STATE_VARIABLE_U_3_37;
          MR_Box STATE_VARIABLE_U_4_39;
          MR_Unsigned Var_40;
          MR_Box STATE_VARIABLE_U_5_41;
          MR_Box STATE_VARIABLE_U_6_43;

          parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(TypeClassInfo_for_pt_output_170, Name_20, S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_3_37);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "(\n", S_18, STATE_VARIABLE_U_3_37, &STATE_VARIABLE_U_4_39);
          Var_40 = (Indent_14 + (MR_Unsigned) 1U);
          hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_pt_output_170, Lang_11, InstVarSet_12, InclAddr_13, Var_40, Args_21, S_18, STATE_VARIABLE_U_4_39, &STATE_VARIABLE_U_5_41);
          parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_170, Indent_14, S_18, STATE_VARIABLE_U_5_41, &STATE_VARIABLE_U_6_43);
          parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_6_43, &STATE_VARIABLE_U_2_36);
        }
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, Suffix_16, S_18, STATE_VARIABLE_U_2_36, STATE_VARIABLE_U_34);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IsLive_24 = ((((MR_Unsigned) ((MR_hl_field(1, InstName_17, 0))) >> 1)) & (MR_Integer) 1);
        MR_Word Real_25 = ((MR_Unsigned) ((MR_hl_field(1, InstName_17, 0))) & (MR_Integer) 1);
        MR_Word InstA_26 = ((MR_Word) ((MR_hl_field(1, InstName_17, 1))));
        MR_Word InstB_27 = ((MR_Word) ((MR_hl_field(1, InstName_17, 2))));
        MR_Box STATE_VARIABLE_U_9_48;
        MR_Box STATE_VARIABLE_U_10_49;
        MR_Box STATE_VARIABLE_U_11_50;
        MR_Box STATE_VARIABLE_U_12_52;
        MR_Unsigned Var_53;
        MR_Word Var_54;
        MR_Box STATE_VARIABLE_U_13_55;
        MR_Word Var_57;
        MR_Box STATE_VARIABLE_U_14_59;
        MR_Box STATE_VARIABLE_U_15_61;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "\044unify(", S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_9_48);
        parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_pt_output_170, IsLive_24, S_18, STATE_VARIABLE_U_9_48, &STATE_VARIABLE_U_10_49);
        parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(TypeClassInfo_for_pt_output_170, Real_25, S_18, STATE_VARIABLE_U_10_49, &STATE_VARIABLE_U_11_50);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "\n", S_18, STATE_VARIABLE_U_11_50, &STATE_VARIABLE_U_12_52);
        Var_53 = (Indent_14 + (MR_Unsigned) 1U);
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (InstB_27));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (InstA_26));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
        }
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_list_8_p_0(TypeClassInfo_for_pt_output_170, Lang_11, InstVarSet_12, InclAddr_13, Var_53, Var_54, S_18, STATE_VARIABLE_U_12_52, &STATE_VARIABLE_U_13_55);
        parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_170, Indent_14, S_18, STATE_VARIABLE_U_13_55, &STATE_VARIABLE_U_14_59);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_14_59, &STATE_VARIABLE_U_15_61);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, Suffix_16, S_18, STATE_VARIABLE_U_15_61, STATE_VARIABLE_U_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box STATE_VARIABLE_U_17_64;
        MR_Unsigned Var_65;
        MR_Box STATE_VARIABLE_U_18_67;
        MR_Box STATE_VARIABLE_U_19_71;
        MR_Box STATE_VARIABLE_U_20_73;
        MR_Word InstB_158 = ((MR_Word) ((MR_hl_field(2, InstName_17, 1))));
        MR_Word Inst_184 = ((MR_Word) ((MR_hl_field(2, InstName_17, 0))));
        MR_Word Insts_185;
        MR_Box STATE_VARIABLE_U_1_192;
        MR_Word Inst_204;

        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "\044merge_inst(\n", S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_17_64);
        Var_65 = (Indent_14 + (MR_Unsigned) 1U);
        {
          Insts_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Insts_185, 0) = ((MR_Box) (InstB_158));
          MR_hl_field(1, Insts_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_170, Lang_11, InstVarSet_12, InclAddr_13, Var_65, (MR_String) ",\n", Inst_184, S_18, STATE_VARIABLE_U_17_64, &STATE_VARIABLE_U_1_192);
        Inst_204 = ((MR_Word) ((MR_hl_field(1, Insts_185, 0))));
        hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0(TypeClassInfo_for_pt_output_170, Lang_11, InstVarSet_12, InclAddr_13, Var_65, (MR_String) "\n", Inst_204, S_18, STATE_VARIABLE_U_1_192, &STATE_VARIABLE_U_18_67);
        parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_170, Indent_14, S_18, STATE_VARIABLE_U_18_67, &STATE_VARIABLE_U_19_71);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_19_71, &STATE_VARIABLE_U_20_73);
        parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, Suffix_16, S_18, STATE_VARIABLE_U_20_73, STATE_VARIABLE_U_34);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName_17, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubInstName_28 = ((MR_Word) ((MR_hl_field(3, InstName_17, 1))));
            MR_Word Uniq_29 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_17, 2))) >> 2)) & (MR_Integer) 7);
            MR_Box STATE_VARIABLE_U_22_76;
            MR_Box STATE_VARIABLE_U_23_77;
            MR_Box STATE_VARIABLE_U_24_78;
            MR_Box STATE_VARIABLE_U_25_80;
            MR_Box STATE_VARIABLE_U_26_82;
            MR_Unsigned Var_83;
            MR_Box STATE_VARIABLE_U_27_86;
            MR_Box STATE_VARIABLE_U_28_88;
            MR_Box STATE_VARIABLE_U_29_90;
            MR_Word IsLive_159 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_17, 2))) >> 1)) & (MR_Integer) 1);
            MR_Word Real_160 = ((MR_Unsigned) ((MR_hl_field(3, InstName_17, 2))) & (MR_Integer) 1);

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "\044ground(", S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_22_76);
            parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_pt_output_170, IsLive_159, S_18, STATE_VARIABLE_U_22_76, &STATE_VARIABLE_U_23_77);
            parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(TypeClassInfo_for_pt_output_170, Real_160, S_18, STATE_VARIABLE_U_23_77, &STATE_VARIABLE_U_24_78);
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_170, Uniq_29, (MR_String) "shared", S_18, STATE_VARIABLE_U_24_78, &STATE_VARIABLE_U_25_80);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ",\n", S_18, STATE_VARIABLE_U_25_80, &STATE_VARIABLE_U_26_82);
            Var_83 = (Indent_14 + (MR_Unsigned) 1U);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_pt_output_170, Lang_11, InstVarSet_12, InclAddr_13, Var_83, (MR_Integer) 0, (MR_String) "\n", SubInstName_28, S_18, STATE_VARIABLE_U_26_82, &STATE_VARIABLE_U_27_86);
            parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_170, Indent_14, S_18, STATE_VARIABLE_U_27_86, &STATE_VARIABLE_U_28_88);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_28_88, &STATE_VARIABLE_U_29_90);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, Suffix_16, S_18, STATE_VARIABLE_U_29_90, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box STATE_VARIABLE_U_31_93;
            MR_Box STATE_VARIABLE_U_32_94;
            MR_Box STATE_VARIABLE_U_33_95;
            MR_Box STATE_VARIABLE_U_34_97;
            MR_Box STATE_VARIABLE_U_35_99;
            MR_Unsigned Var_100;
            MR_Box STATE_VARIABLE_U_36_103;
            MR_Box STATE_VARIABLE_U_37_105;
            MR_Box STATE_VARIABLE_U_38_107;
            MR_Word IsLive_161 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_17, 2))) >> 1)) & (MR_Integer) 1);
            MR_Word Real_162 = ((MR_Unsigned) ((MR_hl_field(3, InstName_17, 2))) & (MR_Integer) 1);
            MR_Word SubInstName_163 = ((MR_Word) ((MR_hl_field(3, InstName_17, 1))));
            MR_Word Uniq_164 = ((((MR_Unsigned) ((MR_hl_field(3, InstName_17, 2))) >> 2)) & (MR_Integer) 7);

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "\044any(", S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_31_93);
            parse_tree__parse_tree_out_inst__mercury_format_is_live_comma_4_p_0(TypeClassInfo_for_pt_output_170, IsLive_161, S_18, STATE_VARIABLE_U_31_93, &STATE_VARIABLE_U_32_94);
            parse_tree__parse_tree_out_inst__mercury_format_real_comma_4_p_0(TypeClassInfo_for_pt_output_170, Real_162, S_18, STATE_VARIABLE_U_32_94, &STATE_VARIABLE_U_33_95);
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_170, Uniq_164, (MR_String) "shared", S_18, STATE_VARIABLE_U_33_95, &STATE_VARIABLE_U_34_97);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ",\n", S_18, STATE_VARIABLE_U_34_97, &STATE_VARIABLE_U_35_99);
            Var_100 = (Indent_14 + (MR_Unsigned) 1U);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_pt_output_170, Lang_11, InstVarSet_12, InclAddr_13, Var_100, (MR_Integer) 0, (MR_String) "\n", SubInstName_163, S_18, STATE_VARIABLE_U_35_99, &STATE_VARIABLE_U_36_103);
            parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_170, Indent_14, S_18, STATE_VARIABLE_U_36_103, &STATE_VARIABLE_U_37_105);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_37_105, &STATE_VARIABLE_U_38_107);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, Suffix_16, S_18, STATE_VARIABLE_U_38_107, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box STATE_VARIABLE_U_40_110;
            MR_Unsigned Var_111;
            MR_Box STATE_VARIABLE_U_41_114;
            MR_Box STATE_VARIABLE_U_42_116;
            MR_Box STATE_VARIABLE_U_43_118;
            MR_Word SubInstName_165 = ((MR_Word) ((MR_hl_field(3, InstName_17, 1))));

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "\044shared_inst(\n", S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_40_110);
            Var_111 = (Indent_14 + (MR_Unsigned) 1U);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_pt_output_170, Lang_11, InstVarSet_12, InclAddr_13, Var_111, (MR_Integer) 0, (MR_String) "\n", SubInstName_165, S_18, STATE_VARIABLE_U_40_110, &STATE_VARIABLE_U_41_114);
            parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_170, Indent_14, S_18, STATE_VARIABLE_U_41_114, &STATE_VARIABLE_U_42_116);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_42_116, &STATE_VARIABLE_U_43_118);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, Suffix_16, S_18, STATE_VARIABLE_U_43_118, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Box STATE_VARIABLE_U_45_121;
            MR_Unsigned Var_122;
            MR_Box STATE_VARIABLE_U_46_125;
            MR_Box STATE_VARIABLE_U_47_127;
            MR_Box STATE_VARIABLE_U_48_129;
            MR_Word SubInstName_166 = ((MR_Word) ((MR_hl_field(3, InstName_17, 1))));

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "\044mostly_uniq_inst(\n", S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_45_121);
            Var_122 = (Indent_14 + (MR_Unsigned) 1U);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_pt_output_170, Lang_11, InstVarSet_12, InclAddr_13, Var_122, (MR_Integer) 0, (MR_String) "\n", SubInstName_166, S_18, STATE_VARIABLE_U_45_121, &STATE_VARIABLE_U_46_125);
            parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_170, Indent_14, S_18, STATE_VARIABLE_U_46_125, &STATE_VARIABLE_U_47_127);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_47_127, &STATE_VARIABLE_U_48_129);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, Suffix_16, S_18, STATE_VARIABLE_U_48_129, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Uniqueness_30 = ((MR_Unsigned) ((MR_hl_field(3, InstName_17, 1))) & (MR_Integer) 7);
            MR_Word Type_31 = ((MR_Word) ((MR_hl_field(3, InstName_17, 2))));
            MR_Word TypeVarSet_32;
            MR_Box STATE_VARIABLE_U_50_132;
            MR_Box STATE_VARIABLE_U_51_134;
            MR_Box STATE_VARIABLE_U_52_136;
            MR_Box STATE_VARIABLE_U_53_138;
            MR_Box STATE_VARIABLE_U_54_140;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "\044typed_ground(", S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_50_132);
            parse_tree__parse_tree_out_inst__mercury_format_uniqueness_5_p_0(TypeClassInfo_for_pt_output_170, Uniqueness_30, (MR_String) "shared", S_18, STATE_VARIABLE_U_50_132, &STATE_VARIABLE_U_51_134);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ", ", S_18, STATE_VARIABLE_U_51_134, &STATE_VARIABLE_U_52_136);
            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_32);
            parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(TypeClassInfo_for_pt_output_170, TypeVarSet_32, (MR_Integer) 0, Type_31, S_18, STATE_VARIABLE_U_52_136, &STATE_VARIABLE_U_53_138);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_53_138, &STATE_VARIABLE_U_54_140);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, Suffix_16, S_18, STATE_VARIABLE_U_54_140, STATE_VARIABLE_U_34);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Box STATE_VARIABLE_U_56_143;
            MR_Box STATE_VARIABLE_U_57_145;
            MR_Box STATE_VARIABLE_U_58_147;
            MR_Unsigned Var_148;
            MR_Box STATE_VARIABLE_U_59_151;
            MR_Box STATE_VARIABLE_U_60_153;
            MR_Box STATE_VARIABLE_U_61_155;
            MR_Word SubInstName_167 = ((MR_Word) ((MR_hl_field(3, InstName_17, 2))));
            MR_Word Type_168 = ((MR_Word) ((MR_hl_field(3, InstName_17, 1))));
            MR_Word TypeVarSet_169;

            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) "\044typed_inst(", S_18, STATE_VARIABLE_U_1_35, &STATE_VARIABLE_U_56_143);
            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_169);
            parse_tree__parse_tree_out_type__mercury_format_type_6_p_0(TypeClassInfo_for_pt_output_170, TypeVarSet_169, (MR_Integer) 0, Type_168, S_18, STATE_VARIABLE_U_56_143, &STATE_VARIABLE_U_57_145);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ",\n", S_18, STATE_VARIABLE_U_57_145, &STATE_VARIABLE_U_58_147);
            Var_148 = (Indent_14 + (MR_Unsigned) 1U);
            hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_name_10_p_0(TypeClassInfo_for_pt_output_170, Lang_11, InstVarSet_12, InclAddr_13, Var_148, (MR_Integer) 0, (MR_String) "\n", SubInstName_167, S_18, STATE_VARIABLE_U_58_147, &STATE_VARIABLE_U_59_151);
            parse_tree__parse_tree_out_misc__mercury_format_tabs_4_p_0(TypeClassInfo_for_pt_output_170, Indent_14, S_18, STATE_VARIABLE_U_59_151, &STATE_VARIABLE_U_60_153);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, (MR_String) ")", S_18, STATE_VARIABLE_U_60_153, &STATE_VARIABLE_U_61_155);
            parse_tree__parse_tree_output__add_string_4_p_0(TypeClassInfo_for_pt_output_170, Suffix_16, S_18, STATE_VARIABLE_U_61_155, STATE_VARIABLE_U_34);
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
  MR_Unsigned Indent_8,
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
  MR_Unsigned Indent_3,
  MR_Word HeadVar__4_4)
{
  MR_String HeadVar__5_5;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__5_5 = (MR_String) "";
  else
  {
    MR_Word Var_12;
    MR_Word Inst_13;
    MR_Word VarsInsts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_String IndentStr_16;
    MR_String VarStr_17;
    MR_Word InstVarSet_18;
    MR_String InstStr_19;
    MR_String VarInstStr_20;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_String Var_42;
    MR_String Var_43;
    MR_String Var_45;

    Var_12 = ((MR_Word) ((MR_hl_field(0, Var_24, 0))));
    Inst_13 = ((MR_Word) ((MR_hl_field(0, Var_24, 1))));
    IndentStr_16 = libs__indent__indent2_string_1_f_0(Indent_3);
    VarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_1, VarNamePrint_2, Var_12);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_18);
    InstStr_19 = parse_tree__parse_tree_out_inst__mercury_inst_to_string_3_f_0((MR_Integer) 1, InstVarSet_18, Inst_13);
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", InstStr_19);
    Var_43 = mercury__string__f_43_43_2_f_0(VarStr_17, Var_42);
    Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "% ", Var_43);
    VarInstStr_20 = mercury__string__f_43_43_2_f_0(IndentStr_16, Var_45);
    if ((VarsInsts_14 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__5_5 = VarInstStr_20;
    else
    {
      MR_String VarsInstsStr_23;
      MR_String Var_47;

      VarsInstsStr_23 = hlds__hlds_out__hlds_out_mode__var_inst_list_to_string_4_f_0(VarTable_1, VarNamePrint_2, Indent_3, VarsInsts_14);
      Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "\n", VarsInstsStr_23);
      HeadVar__5_5 = mercury__string__f_43_43_2_f_0(VarInstStr_20, Var_47);
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
