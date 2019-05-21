/*
** Automatically generated from `mode_debug.m'
** by the Mercury compiler,
** version rotd-2017-07-25
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module check_hlds.mode_debug. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mode_debug__init
ENDINIT
*/

#include "check_hlds.mode_debug.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1;

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2;

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_value_ordered_port_0[3];

static const MR_EnumFunctorDescPtr check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0[3];

static const MR_Integer check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0[3];

static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
  MR_Word check_hlds__mode_debug__InstA_1,
  MR_Word check_hlds__mode_debug__InstB_2);

static void MR_CALL 
check_hlds__mode_debug__write_var_insts_8_p_0(
  MR_Word check_hlds__mode_debug__HeadVar__1_1,
  MR_Word check_hlds__mode_debug__OldInstMap_2,
  MR_Word check_hlds__mode_debug__VarSet_3,
  MR_Word check_hlds__mode_debug__InstVarSet_4,
  MR_Word check_hlds__mode_debug__Verbose_5,
  MR_Word check_hlds__mode_debug__Minimal_6);

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____port_0_0_10001(
  MR_Box check_hlds__mode_debug__wrapper_arg_1,
  MR_Box check_hlds__mode_debug__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0_10001(
  MR_Box * check_hlds__mode_debug__wrapper_arg_1,
  MR_Box check_hlds__mode_debug__wrapper_arg_2,
  MR_Box check_hlds__mode_debug__wrapper_arg_3);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.mode_debug.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_0 = {
  (MR_String) "enter",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_1 = {
  (MR_String) "exit",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__mode_debug__check_hlds__mode_debug__enum_functor_desc_port_0_2 = {
  (MR_String) "wakeup",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_debug____Unify____port_0_0_10001)),
  ((MR_Box) (check_hlds__mode_debug____Compare____port_0_0_10001)),
  (MR_String) "check_hlds.mode_debug",
  (MR_String) "port",
  {     check_hlds__mode_debug__check_hlds__mode_debug__enum_name_ordered_port_0 },
  {     check_hlds__mode_debug__check_hlds__mode_debug__enum_value_ordered_port_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__mode_debug__check_hlds__mode_debug__functor_number_map_port_0
};

void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0(
  MR_Word * check_hlds__mode_debug__HeadVar__1_1,
  MR_Word check_hlds__mode_debug__HeadVar__2_2,
  MR_Word check_hlds__mode_debug__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_debug__succeeded;
    MR_Integer check_hlds__mode_debug__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_debug__HeadVar__2_2;
    MR_Integer check_hlds__mode_debug__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_debug__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_debug__HeadVar__1_1, check_hlds__mode_debug__Cast_HeadVar1_4, check_hlds__mode_debug__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_debug____Unify____port_0_0(
  MR_Word check_hlds__mode_debug__HeadVar__2_1,
  MR_Word check_hlds__mode_debug__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_debug__succeeded = (check_hlds__mode_debug__HeadVar__2_1 == check_hlds__mode_debug__HeadVar__2_2);

    return check_hlds__mode_debug__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_debug__identical_insts_2_p_0(
  MR_Word check_hlds__mode_debug__InstA_1,
  MR_Word check_hlds__mode_debug__InstB_2)
{
  {
    MR_bool check_hlds__mode_debug__succeeded;

{
#define MR_PROC_LABEL check_hlds__mode_debug__identical_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA =  check_hlds__mode_debug__InstA_1 ;
	InstB =  check_hlds__mode_debug__InstB_2 ;
		{

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
check_hlds__mode_debug__succeeded  = SUCCESS_INDICATOR;
}
    return check_hlds__mode_debug__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_debug__mode_checkpoint_4_p_0(
  MR_Word check_hlds__mode_debug__Port_5,
  MR_String check_hlds__mode_debug__Msg_6,
  MR_Word check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23,
  MR_Word * check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_24)
{
  {
    MR_bool check_hlds__mode_debug__succeeded;
    MR_Word check_hlds__mode_debug__DebugModes_8;

    {
      check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__DebugModes_8);
    }
    if ((check_hlds__mode_debug__DebugModes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_24 = check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23;
    else
      {
        MR_Word check_hlds__mode_debug__Verbose_9;
        MR_Word check_hlds__mode_debug__Minimal_10;
        MR_Word check_hlds__mode_debug__Statistics_11;
        MR_Word check_hlds__mode_debug__Errors_12;
        MR_String check_hlds__mode_debug__PortStr_13;
        MR_Word check_hlds__mode_debug__Detail_14;
        MR_Word check_hlds__mode_debug__InstMap_17;
        MR_Word check_hlds__mode_debug__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_debug__DebugModes_8, (MR_Integer) 0)));

        check_hlds__mode_debug__Verbose_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__Var_25, (MR_Integer) 0)))) & (MR_Integer) 1);
        check_hlds__mode_debug__Minimal_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__Var_25, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        check_hlds__mode_debug__Statistics_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__Var_25, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        {
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__Errors_12);
        }
        switch (check_hlds__mode_debug__Port_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__mode_debug__PortStr_13 = (MR_String) "Enter ";
              check_hlds__mode_debug__Detail_14 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            if ((check_hlds__mode_debug__Errors_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                check_hlds__mode_debug__PortStr_13 = (MR_String) "Exit ";
                check_hlds__mode_debug__Detail_14 = (MR_Integer) 1;
              }
            else
              {
                check_hlds__mode_debug__PortStr_13 = (MR_String) "Delay ";
                check_hlds__mode_debug__Detail_14 = (MR_Integer) 0;
              }
            break;
          case (MR_Integer) 2:
            {
              check_hlds__mode_debug__PortStr_13 = (MR_String) "Wake ";
              check_hlds__mode_debug__Detail_14 = (MR_Integer) 0;
            }
            break;
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__InstMap_17);
        }
        {
          mercury__io__write_string_3_p_0(check_hlds__mode_debug__PortStr_13);
        }
        {
          mercury__io__write_string_3_p_0(check_hlds__mode_debug__Msg_6);
        }
        switch (check_hlds__mode_debug__Detail_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ":\n");
              }
              {
                libs__file_util__maybe_report_stats_3_p_0(check_hlds__mode_debug__Statistics_11);
              }
              {
                libs__file_util__maybe_flush_output_3_p_0(check_hlds__mode_debug__Statistics_11);
              }
              {
                check_hlds__mode_debug__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_debug__InstMap_17);
              }
              if (check_hlds__mode_debug__succeeded)
                {
                  MR_Word check_hlds__mode_debug__NewInsts_19;
                  MR_Word check_hlds__mode_debug__OldInstMap_20;
                  MR_Word check_hlds__mode_debug__VarSet_21;
                  MR_Word check_hlds__mode_debug__InstVarSet_22;

                  {
                    hlds__instmap__instmap_to_assoc_list_2_p_0(check_hlds__mode_debug__InstMap_17, &check_hlds__mode_debug__NewInsts_19);
                  }
                  {
                    check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__OldInstMap_20);
                  }
                  {
                    check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__VarSet_21);
                  }
                  {
                    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, &check_hlds__mode_debug__InstVarSet_22);
                  }
                  {
                    check_hlds__mode_debug__write_var_insts_8_p_0(check_hlds__mode_debug__NewInsts_19, check_hlds__mode_debug__OldInstMap_20, check_hlds__mode_debug__VarSet_21, check_hlds__mode_debug__InstVarSet_22, check_hlds__mode_debug__Verbose_9, check_hlds__mode_debug__Minimal_10);
                  }
                }
              else
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tUnreachable\n");
                  }
                }
            }
            break;
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__flush_output_2_p_0();
        }
        switch (check_hlds__mode_debug__Detail_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_24 = check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23;
            break;
          case (MR_Integer) 1:
            {
              check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(check_hlds__mode_debug__InstMap_17, check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_0_23, check_hlds__mode_debug__STATE_VARIABLE_ModeInfo_24);
            }
            break;
        }
      }
  }
}

static void MR_CALL 
check_hlds__mode_debug__write_var_insts_8_p_0(
  MR_Word check_hlds__mode_debug__HeadVar__1_1,
  MR_Word check_hlds__mode_debug__OldInstMap_2,
  MR_Word check_hlds__mode_debug__VarSet_3,
  MR_Word check_hlds__mode_debug__InstVarSet_4,
  MR_Word check_hlds__mode_debug__Verbose_5,
  MR_Word check_hlds__mode_debug__Minimal_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__mode_debug__succeeded;

        if ((check_hlds__mode_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word check_hlds__mode_debug__Var_17;
            MR_Word check_hlds__mode_debug__Inst_18;
            MR_Word check_hlds__mode_debug__VarInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_debug__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__mode_debug__OldInst_26;
            MR_Word check_hlds__mode_debug__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_debug__HeadVar__1_1, (MR_Integer) 0)));

            check_hlds__mode_debug__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__Var_29, (MR_Integer) 0)));
            check_hlds__mode_debug__Inst_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_debug__Var_29, (MR_Integer) 1)));
            {
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__mode_debug__OldInstMap_2, check_hlds__mode_debug__Var_17, &check_hlds__mode_debug__OldInst_26);
            }
{
#define MR_PROC_LABEL check_hlds__mode_debug__write_var_insts_8_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA =  check_hlds__mode_debug__Inst_18 ;
	InstB =  check_hlds__mode_debug__OldInst_26 ;
		{

    if (InstA == InstB) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
check_hlds__mode_debug__succeeded  = SUCCESS_INDICATOR;
}
            if (!(check_hlds__mode_debug__succeeded))
              {
                check_hlds__mode_debug__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__mode_debug__Inst_18, check_hlds__mode_debug__OldInst_26);
              }
            if (check_hlds__mode_debug__succeeded)
              switch (check_hlds__mode_debug__Verbose_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\t");
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_debug__VarSet_3, (MR_Integer) 0, check_hlds__mode_debug__Var_17);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " ::");
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " unchanged\n");
                    }
                  }
                  break;
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\t");
                }
                {
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_debug__VarSet_3, (MR_Integer) 0, check_hlds__mode_debug__Var_17);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " ::");
                }
                switch (check_hlds__mode_debug__Minimal_6) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
                      {
                        hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_7_p_0(check_hlds__mode_debug__Inst_18, (MR_Integer) 2, (MR_Integer) 1, (MR_Integer) 0, check_hlds__mode_debug__InstVarSet_4);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) " changed\n");
                      }
                    }
                    break;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__mode_debug__next_value_of_HeadVar__1_1 = check_hlds__mode_debug__VarInsts_19;

              check_hlds__mode_debug__HeadVar__1_1 = check_hlds__mode_debug__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__mode_debug____Unify____port_0_0_10001(
  MR_Box check_hlds__mode_debug__wrapper_arg_1,
  MR_Box check_hlds__mode_debug__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_debug__succeeded;

    {
      check_hlds__mode_debug__succeeded = check_hlds__mode_debug____Unify____port_0_0(((MR_Word) check_hlds__mode_debug__wrapper_arg_1), ((MR_Word) check_hlds__mode_debug__wrapper_arg_2));
    }
    return check_hlds__mode_debug__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_debug____Compare____port_0_0_10001(
  MR_Box * check_hlds__mode_debug__wrapper_arg_1,
  MR_Box check_hlds__mode_debug__wrapper_arg_2,
  MR_Box check_hlds__mode_debug__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_debug__conv0_HeadVar__1_1;

    {
      check_hlds__mode_debug____Compare____port_0_0(&check_hlds__mode_debug__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_debug__wrapper_arg_2), ((MR_Word) check_hlds__mode_debug__wrapper_arg_3));
    }
    *check_hlds__mode_debug__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_debug__conv0_HeadVar__1_1));
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

/* :- end_module check_hlds.mode_debug. */
