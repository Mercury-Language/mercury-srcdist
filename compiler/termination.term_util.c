/*
** Automatically generated from `term_util.m'
** by the Mercury compiler,
** version rotd-2026-09-05
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


// :- module termination.term_util.
// :- implementation.

/*
INIT mercury__termination__term_util__init
ENDINIT
*/

#include "termination.term_util.mih"


#include "analysis.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "termination.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_test.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "termination.term_constr.mih"
#include "termination.term_norm.mih"
#include "termination.term_osi.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "termination.term_constr.term_constr_errors.mih"
#include "termination.term_constr.term_constr_main_types.mih"
#include "termination.term_osi.term_osi_errors.mih"
#include "termination.term_osi.term_osi_util.mih"




static const MR_EnumFunctorDesc termination__term_util__termination__term_util__enum_functor_desc_maybe_believe_check_termination_0_0;

static const MR_EnumFunctorDesc termination__term_util__termination__term_util__enum_functor_desc_maybe_believe_check_termination_0_1;

static const MR_EnumFunctorDescPtr termination__term_util__termination__term_util__enum_ordinal_ordered_maybe_believe_check_termination_0[2];

static const MR_EnumFunctorDescPtr termination__term_util__termination__term_util__enum_name_ordered_maybe_believe_check_termination_0[2];

static const MR_Integer termination__term_util__termination__term_util__functor_number_map_maybe_believe_check_termination_0[2];

static MR_bool MR_CALL 
termination__term_util__all_args_input_or_zero_size_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3);

static MR_bool MR_CALL 
termination__term_util____Unify____maybe_believe_check_termination_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
termination__term_util____Compare____maybe_believe_check_termination_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc termination__term_util__termination__term_util__enum_functor_desc_maybe_believe_check_termination_0_0 = {
  (MR_String) "do_not_believe_check_termination",
  INT32_C(0)
};

static const MR_EnumFunctorDesc termination__term_util__termination__term_util__enum_functor_desc_maybe_believe_check_termination_0_1 = {
  (MR_String) "do_believe_check_termination",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr termination__term_util__termination__term_util__enum_ordinal_ordered_maybe_believe_check_termination_0[2] = {
  &termination__term_util__termination__term_util__enum_functor_desc_maybe_believe_check_termination_0_0,
  &termination__term_util__termination__term_util__enum_functor_desc_maybe_believe_check_termination_0_1
};

static const MR_EnumFunctorDescPtr termination__term_util__termination__term_util__enum_name_ordered_maybe_believe_check_termination_0[2] = {
  &termination__term_util__termination__term_util__enum_functor_desc_maybe_believe_check_termination_0_1,
  &termination__term_util__termination__term_util__enum_functor_desc_maybe_believe_check_termination_0_0
};

static const MR_Integer termination__term_util__termination__term_util__functor_number_map_maybe_believe_check_termination_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct termination__term_util__termination__term_util__type_ctor_info_maybe_believe_check_termination_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (termination__term_util____Unify____maybe_believe_check_termination_0_0_10001)),
  ((MR_Box) (termination__term_util____Compare____maybe_believe_check_termination_0_0_10001)),
  (MR_String) "termination.term_util",
  (MR_String) "maybe_believe_check_termination",
  { termination__term_util__termination__term_util__enum_name_ordered_maybe_believe_check_termination_0 },
  { termination__term_util__termination__term_util__enum_ordinal_ordered_maybe_believe_check_termination_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  termination__term_util__termination__term_util__functor_number_map_maybe_believe_check_termination_0,

};

void MR_CALL 
termination__term_util____Compare____maybe_believe_check_termination_0_0(
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
termination__term_util____Unify____maybe_believe_check_termination_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_bool MR_CALL 
termination__term_util__all_args_input_or_zero_size_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredInfo_5,
  MR_Word ProcInfo_6)
{
  MR_bool succeeded;
  MR_Word TypeList_7;
  MR_Word ModeList_8;

  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_5, &TypeList_7);
  hlds__hlds_proc__proc_info_get_argmodes_2_p_0(ProcInfo_6, &ModeList_8);
  succeeded = termination__term_util__all_args_input_or_zero_size_2_3_p_0(TypeList_7, ModeList_8, ModuleInfo_4);
  return succeeded;
}

static MR_bool MR_CALL 
termination__term_util__all_args_input_or_zero_size_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140termination.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140termination.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Mode_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word Modes_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

        succeeded = hlds__mode_test__mode_is_input_2_p_0(ModuleInfo_3, Mode_17);
        if (succeeded)
        {
          MR_Word next_value_of_HeadVar__1_1 = Var_20;
          MR_Word next_value_of_HeadVar__2_2 = Modes_18;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
        else
        {
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__2_2;

          succeeded = termination__term_norm__zero_size_type_2_p_0(ModuleInfo_3, Var_21);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_20;
            next_value_of_HeadVar__2_2 = Modes_18;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
termination__term_util__should_we_believe_check_termination_markers_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Believe_4)
{
  MR_bool succeeded;
  MR_Word Globals_5;
  MR_Word OpMode_6;
  MR_Word Var_8;
  MR_Word Var_9;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
  libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_6);
  succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3);
  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(3, OpMode_6, 0))));
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(3, Var_8, 0))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
    *Believe_4 = (MR_Integer) 0;
  else
    *Believe_4 = (MR_Integer) 1;
}

MR_bool MR_CALL 
termination__term_util__attributes_imply_termination_1_p_0(
  MR_Word Attributes_2)
{
  MR_bool succeeded;

  {
    MR_Word Var_3;

    Var_3 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attributes_2);
    succeeded = (Var_3 == (MR_Integer) 0);
  }
  if (!(succeeded))
  {
    MR_Word Var_4;
    MR_Word Var_5;

    Var_4 = parse_tree__prog_data_foreign__get_terminates_1_f_0(Attributes_2);
    succeeded = (Var_4 == (MR_Integer) 2);
    if (succeeded)
    {
      Var_5 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_2);
      succeeded = (Var_5 == (MR_Integer) 1);
    }
  }
  return succeeded;
}

void MR_CALL 
termination__term_util__get_context_from_scc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word SCC_5,
  MR_Word * Context_6)
{
  MR_Word SCCProcs_7;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0), SCC_5, &SCCProcs_7);
  if ((SCCProcs_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140termination.term_util.get_context_from_scc\'/3", (MR_String) "empty SCC");
      return;
    }
  else
  {
    MR_Word PredId_8;
    MR_Word PredInfo_11;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, SCCProcs_7, 0))));

    PredId_8 = ((MR_Word) ((MR_hl_field(0, Var_12, 0))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_8, &PredInfo_11);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_11, Context_6);
  }
}

static MR_bool MR_CALL 
termination__term_util____Unify____maybe_believe_check_termination_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = termination__term_util____Unify____maybe_believe_check_termination_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
termination__term_util____Compare____maybe_believe_check_termination_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  termination__term_util____Compare____maybe_believe_check_termination_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__termination__term_util__init(void)
{
}

void mercury__termination__term_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&termination__term_util__termination__term_util__type_ctor_info_maybe_believe_check_termination_0);
}

void mercury__termination__term_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__termination__term_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module termination.term_util.
