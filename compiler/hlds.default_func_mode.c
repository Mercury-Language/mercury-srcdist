/*
** Automatically generated from `default_func_mode.m'
** by the Mercury compiler,
** version rotd-2025-11-07
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


// :- module hlds.default_func_mode.
// :- implementation.

/*
INIT mercury__hlds__default_func_mode__init
ENDINIT
*/

#include "hlds.default_func_mode.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"





static /* final */ const MR_Box hlds__default_func_mode_scalar_common_1[1][1];




static /* final */ const MR_Box hlds__default_func_mode_scalar_common_1[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
};



#include "array.mh"


void MR_CALL 
hlds__default_func_mode__maybe_add_default_func_modes_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredTable_0_3,
  MR_Word * STATE_VARIABLE_PredTable_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredTable_4 = STATE_VARIABLE_PredTable_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PredInfo0_13;
      MR_Word PredInfo_14;
      MR_Word MaybeNewProcId_15;
      MR_Word STATE_VARIABLE_PredTable_1_19;
      MR_Box conv0_PredInfo0_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PredTable_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_3, ((MR_Box) (PredId_10)), &conv0_PredInfo0_13);
      PredInfo0_13 = ((MR_Word) (conv0_PredInfo0_13));
      hlds__default_func_mode__maybe_add_default_func_mode_4_p_0(ModuleInfo_1, PredInfo0_13, &PredInfo_14, &MaybeNewProcId_15);
      if ((MaybeNewProcId_15 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_PredTable_1_19 = STATE_VARIABLE_PredTable_0_3;
      else
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_10)), ((MR_Box) (PredInfo_14)), STATE_VARIABLE_PredTable_0_3, &STATE_VARIABLE_PredTable_1_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_PredTable_0_3 = STATE_VARIABLE_PredTable_1_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PredTable_0_3 = next_value_of_STATE_VARIABLE_PredTable_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__default_func_mode__maybe_add_default_func_mode_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo0_6,
  MR_Word * PredInfo_7,
  MR_Word * MaybeProcId_8)
{
  MR_bool succeeded;
  MR_Word Procs0_9;
  MR_Word PredOrFunc_10;
  MR_Word TypeCtorInfo_31_31;
  MR_Word TypeCtorInfo_32_32;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_6, &Procs0_9);
  PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_6);
  succeeded = (PredOrFunc_10 == (MR_Integer) 1);
  if (succeeded)
  {
    TypeCtorInfo_31_31 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
    TypeCtorInfo_32_32 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
    succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_31_31, TypeCtorInfo_32_32, Procs0_9);
  }
  if (succeeded)
  {
    MR_Integer FuncArity_12;
    MR_Word InMode_13;
    MR_Word FuncArgModes_15;
    MR_Word FuncRetMode_16;
    MR_Word PredArgModes_17;
    MR_Word Context_19;
    MR_Word InstVarSet_21;
    MR_Integer ProcId_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;

    Var_24 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo0_6);
    FuncArity_12 = (MR_Integer) (Var_24);
    parse_tree__prog_mode__in_mode_1_p_0(&InMode_13);
    parse_tree__prog_mode__out_mode_1_p_0(&FuncRetMode_16);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArity_12, ((MR_Box) (InMode_13)), &FuncArgModes_15);
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (FuncRetMode_16));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArgModes_15, Var_25, &PredArgModes_17);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_6, &Context_19);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_21);
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (PredArgModes_17));
    }
    hlds__hlds_pred__add_new_proc_14_p_0(ModuleInfo_5, Context_19, (MR_Word) ((MR_Unsigned) 0U), InstVarSet_21, PredArgModes_17, Var_27, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &hlds__default_func_mode_scalar_common_1[0])), (MR_Integer) 1, (MR_Integer) 1, PredInfo0_6, PredInfo_7, &ProcId_23);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeProcId_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ProcId_23));
    }
  }
  else
  {
    *PredInfo_7 = PredInfo0_6;
    *MaybeProcId_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void mercury__hlds__default_func_mode__init(void)
{
}

void mercury__hlds__default_func_mode__init_type_tables(void)
{
}

void mercury__hlds__default_func_mode__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__default_func_mode__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.default_func_mode.
