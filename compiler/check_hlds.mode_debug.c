/*
** Automatically generated from `mode_debug.m'
** by the Mercury compiler,
** version rotd-2021-03-15
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


// :- module check_hlds.mode_debug.
// :- implementation.

/*
INIT mercury__check_hlds__mode_debug__init
ENDINIT
*/

#include "check_hlds.mode_debug.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"




static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1;

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2;

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_value_ordered_port_0[3];

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0[3];

static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0[3];

static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2);

static void MR_CALL 
check_hlds__mode_debug__write_var_insts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OldInstMap_2,
  MR_Word VarSet_3,
  MR_Word InstVarSet_4,
  MR_Word Verbose_5,
  MR_Word Minimal_6);

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.mode_debug.mh"



static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0 = {
  (MR_String) "enter",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1 = {
  (MR_String) "exit",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2 = {
  (MR_String) "wakeup",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_value_ordered_port_0[3] = {
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0[3] = {
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1,
  &check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2
};

static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__mode_debug__check_hlds__mode_debug__type_ctor_info_port_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_debug____Unify____port_0_0_10001)),
  ((MR_Box) (check_hlds__mode_debug____Compare____port_0_0_10001)),
  (MR_String) "check_hlds.mode_debug",
  (MR_String) "port",
  {     check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0 },
  {     check_hlds__mode_debug__check_hlds__mode_debug__enum_value_ordered_port_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0
};

void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0(
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
check_hlds__mode_debug____Unify____port_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL check_hlds__mode_debug__identical_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA = InstA_1 ;
	InstB = InstB_2 ;
		{

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_debug__mode_checkpoint_4_p_0(
  MR_Word Port_5,
  MR_String Msg_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26)
{
  {
    MR_bool succeeded;
    MR_Word DebugModes_8;

    check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &DebugModes_8);
    if ((DebugModes_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeInfo_26 = STATE_VARIABLE_ModeInfo_0_25;
    else
    {
      MR_Word DebugFlags_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DebugModes_8, (MR_Integer) 0))));
      MR_String PortStr_10;
      MR_Word Detail_11;
      MR_String UniquePrefix_15;
      MR_Word Verbose_16;
      MR_Word Minimal_17;
      MR_Word Statistics_18;

      switch (Port_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            PortStr_10 = (MR_String) "Enter ";
            Detail_11 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Errors_12;

            check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &Errors_12);
            if ((Errors_12 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              PortStr_10 = (MR_String) "Exit ";
              Detail_11 = (MR_Integer) 1;
            }
            else
            {
              PortStr_10 = (MR_String) "Delay ";
              Detail_11 = (MR_Integer) 0;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            PortStr_10 = (MR_String) "Wake ";
            Detail_11 = (MR_Integer) 0;
          }
          break;
      }
      UniquePrefix_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), DebugFlags_9, (MR_Integer) 0))));
      Verbose_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DebugFlags_9, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
      Minimal_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DebugFlags_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      Statistics_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DebugFlags_9, (MR_Integer) 1))) & (MR_Integer) 1);
      switch (Detail_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0(PortStr_10);
            mercury__io__write_string_3_p_0(UniquePrefix_15);
            mercury__io__write_string_3_p_0(Msg_6);
            mercury__io__write_string_3_p_0((MR_String) ":\n");
            mercury__io__flush_output_2_p_0();
            *STATE_VARIABLE_ModeInfo_26 = STATE_VARIABLE_ModeInfo_0_25;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstMap_19;

            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &InstMap_19);
            mercury__io__write_string_3_p_0(PortStr_10);
            mercury__io__write_string_3_p_0(UniquePrefix_15);
            mercury__io__write_string_3_p_0(Msg_6);
            mercury__io__write_string_3_p_0((MR_String) ":\n");
            libs__file_util__maybe_report_stats_3_p_0(Statistics_18);
            libs__file_util__maybe_flush_output_3_p_0(Statistics_18);
            succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_19);
            if (succeeded)
            {
              MR_Word NewInsts_21;
              MR_Word OldInstMap_22;
              MR_Word VarSet_23;
              MR_Word InstVarSet_24;

              hlds__instmap__instmap_to_assoc_list_2_p_0(InstMap_19, &NewInsts_21);
              check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &OldInstMap_22);
              check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &VarSet_23);
              check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &InstVarSet_24);
              check_hlds__mode_debug__write_var_insts_8_p_0(NewInsts_21, OldInstMap_22, VarSet_23, InstVarSet_24, Verbose_16, Minimal_17);
            }
            else
              mercury__io__write_string_3_p_0((MR_String) "\tUnreachable\n");
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__io__flush_output_2_p_0();
            check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(InstMap_19, STATE_VARIABLE_ModeInfo_0_25, STATE_VARIABLE_ModeInfo_26);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_debug__write_var_insts_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OldInstMap_2,
  MR_Word VarSet_3,
  MR_Word InstVarSet_4,
  MR_Word Verbose_5,
  MR_Word Minimal_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_17;
      MR_Word Inst_18;
      MR_Word VarInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word OldInst_26;
      MR_Word Stream_27;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;

      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      Inst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      hlds__instmap__instmap_lookup_var_3_p_0(OldInstMap_2, Var_17, &OldInst_26);
      mercury__io__output_stream_3_p_0(&Stream_27);
{
#define MR_PROC_LABEL check_hlds__mode_debug__write_var_insts_8_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA = Inst_18 ;
	InstB = OldInst_26 ;
		{

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (!(succeeded))
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_18, OldInst_26);
      if (succeeded)
        switch (Verbose_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_27, (MR_String) "\t");
              parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_3, (MR_Integer) 0, Var_17, Stream_27);
              mercury__io__write_string_4_p_0(Stream_27, (MR_String) " ::");
              mercury__io__write_string_4_p_0(Stream_27, (MR_String) " unchanged\n");
            }
            break;
        }
      else
      {
        mercury__io__write_string_4_p_0(Stream_27, (MR_String) "\t");
        parse_tree__parse_tree_out_term__mercury_output_var_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_3, (MR_Integer) 0, Var_17, Stream_27);
        mercury__io__write_string_4_p_0(Stream_27, (MR_String) " ::");
        switch (Minimal_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_27, (MR_String) "\n");
              hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_8_p_0(Stream_27, Inst_18, (MR_Integer) 2, (MR_Integer) 1, (MR_Integer) 0, InstVarSet_4);
            }
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_27, (MR_String) " changed\n");
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarInsts_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_debug____Unify____port_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_debug____Compare____port_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__mode_debug__init(void)
{
}

void mercury__check_hlds__mode_debug__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_debug__check_hlds__mode_debug__type_ctor_info_port_0);
}

void mercury__check_hlds__mode_debug__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_debug__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_debug.
