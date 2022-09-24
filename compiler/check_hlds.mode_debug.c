/*
** Automatically generated from `mode_debug.m'
** by the Mercury compiler,
** version rotd-2022-09-24
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


#include "analysis.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"




static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1;

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2;

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_ordinal_ordered_port_0[3];

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0[3];

static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0[3];

static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2);

static void MR_CALL 
check_hlds__mode_debug__write_var_insts_9_p_0(
  MR_Word Stream_1,
  MR_Word VarTable_2,
  MR_Word InstVarSet_3,
  MR_Word OldInstMap_4,
  MR_Word Verbose_5,
  MR_Word Minimal_6,
  MR_Word HeadVar__7_7);

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
#include "io.stream_ops.mh"



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

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_ordinal_ordered_port_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_debug____Unify____port_0_0_10001)),
  ((MR_Box) (check_hlds__mode_debug____Compare____port_0_0_10001)),
  (MR_String) "check_hlds.mode_debug",
  (MR_String) "port",
  { check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0 },
  { check_hlds__mode_debug__check_hlds__mode_debug__enum_ordinal_ordered_port_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0,

};

void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0(
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
check_hlds__mode_debug____Unify____port_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2)
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

void MR_CALL 
check_hlds__mode_debug__mode_checkpoint_4_p_0(
  MR_Word Port_5,
  MR_String Msg_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_29,
  MR_Word * STATE_VARIABLE_ModeInfo_30)
{
  MR_bool succeeded;
  MR_Word DebugModes_8;

  check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &DebugModes_8);
  if ((DebugModes_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ModeInfo_30 = STATE_VARIABLE_ModeInfo_0_29;
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

          check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &Errors_12);
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
          MR_Word ModuleInfo_67;
          MR_Word Globals_68;
          MR_Word ModuleName_69;
          MR_Word DebugStream_70;

          check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &ModuleInfo_67);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_67, &Globals_68);
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_67, &ModuleName_69);
          libs__globals__get_debug_output_stream_5_p_0(Globals_68, ModuleName_69, &DebugStream_70);
          mercury__io__write_string_4_p_0(DebugStream_70, PortStr_10);
          mercury__io__write_string_4_p_0(DebugStream_70, UniquePrefix_15);
          mercury__io__write_string_4_p_0(DebugStream_70, Msg_6);
          mercury__io__write_string_4_p_0(DebugStream_70, (MR_String) ":\n");
          mercury__io__flush_output_3_p_0(DebugStream_70);
          *STATE_VARIABLE_ModeInfo_30 = STATE_VARIABLE_ModeInfo_0_29;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstMap_19;
          MR_Word ModuleInfo_63;
          MR_Word Globals_64;
          MR_Word ModuleName_65;
          MR_Word DebugStream_66;

          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &InstMap_19);
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &ModuleInfo_63);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_63, &Globals_64);
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_63, &ModuleName_65);
          libs__globals__get_debug_output_stream_5_p_0(Globals_64, ModuleName_65, &DebugStream_66);
          mercury__io__write_string_4_p_0(DebugStream_66, PortStr_10);
          mercury__io__write_string_4_p_0(DebugStream_66, UniquePrefix_15);
          mercury__io__write_string_4_p_0(DebugStream_66, Msg_6);
          mercury__io__write_string_4_p_0(DebugStream_66, (MR_String) ":\n");
          libs__file_util__maybe_report_stats_4_p_0(DebugStream_66, Statistics_18);
          libs__file_util__maybe_flush_output_4_p_0(DebugStream_66, Statistics_18);
          succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_19);
          if (succeeded)
          {
            MR_Word NewInsts_25;
            MR_Word OldInstMap_26;
            MR_Word VarTable_27;
            MR_Word InstVarSet_28;

            hlds__instmap__instmap_to_assoc_list_2_p_0(InstMap_19, &NewInsts_25);
            check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &OldInstMap_26);
            check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &VarTable_27);
            check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_29, &InstVarSet_28);
            check_hlds__mode_debug__write_var_insts_9_p_0(DebugStream_66, VarTable_27, InstVarSet_28, OldInstMap_26, Verbose_16, Minimal_17, NewInsts_25);
          }
          else
            mercury__io__write_string_4_p_0(DebugStream_66, (MR_String) "\tUnreachable\n");
          mercury__io__write_string_4_p_0(DebugStream_66, (MR_String) "\n");
          mercury__io__flush_output_3_p_0(DebugStream_66);
          check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(InstMap_19, STATE_VARIABLE_ModeInfo_0_29, STATE_VARIABLE_ModeInfo_30);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__mode_debug__write_var_insts_9_p_0(
  MR_Word Stream_1,
  MR_Word VarTable_2,
  MR_Word InstVarSet_3,
  MR_Word OldInstMap_4,
  MR_Word Verbose_5,
  MR_Word Minimal_6,
  MR_Word HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_25;
      MR_Word Inst_26;
      MR_Word VarInsts_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Word OldInst_29;
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__7_7;

      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
      Inst_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1))));
      hlds__instmap__instmap_lookup_var_3_p_0(OldInstMap_4, Var_25, &OldInst_29);
{
#define MR_PROC_LABEL check_hlds__mode_debug__write_var_insts_9_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA = Inst_26 ;
	InstB = OldInst_29 ;
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
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_26, OldInst_29);
      if (succeeded)
        switch (Verbose_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
              parse_tree__parse_tree_out_term__mercury_output_var_6_p_0(VarTable_2, (MR_Integer) 0, Var_25, Stream_1);
              mercury__io__write_string_4_p_0(Stream_1, (MR_String) " :: unchanged");
            }
            break;
        }
      else
      {
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t");
        parse_tree__parse_tree_out_term__mercury_output_var_6_p_0(VarTable_2, (MR_Integer) 0, Var_25, Stream_1);
        switch (Minimal_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ::\n");
              hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_8_p_0(Stream_1, Inst_26, (MR_Integer) 2, (MR_Integer) 1, (MR_Integer) 0, InstVarSet_3);
            }
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) " :: changed\n");
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = VarInsts_27;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
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
  MR_bool succeeded;

  succeeded = check_hlds__mode_debug____Unify____port_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_debug____Compare____port_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
