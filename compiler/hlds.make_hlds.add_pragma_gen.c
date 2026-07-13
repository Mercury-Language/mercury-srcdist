/*
** Automatically generated from `add_pragma_gen.m'
** by the Mercury compiler,
** version rotd-2026-07-13
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


// :- module hlds.make_hlds.add_pragma_gen.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma_gen__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma_gen.mih"


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
#include "edit_seq.mih"
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
#include "time.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_pragma_util.mih"
#include "parse_tree.module_qual.mq_info.mih"





static /* final */ const MR_Box hlds__make_hlds__add_pragma_gen_scalar_common_1[1][2];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_gen_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
hlds__make_hlds__add_pragma_gen__add_gen_pragma_mm_tabling_5_p_0(
  MR_Word MMTabling_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word PredNameArityPFMn_9 = ((MR_Word) ((MR_hl_field(0, MMTabling_6, 0))));
  MR_Word TablingStatus_10 = ((MR_Unsigned) ((MR_hl_field(0, MMTabling_6, 1))) & (MR_Integer) 3);
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, MMTabling_6, 2))));
  MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 1))));
  MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 2))));
  MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_9, 3))));
  MR_Word MaybePredProc_17;

  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_mode_num_10_p_0(STATE_VARIABLE_ModuleInfo_0_24, (MR_Integer) 0, (MR_Integer) 0, Context_11, (MR_String) "mm_tabling_info", PredOrFunc_13, SymName_14, UserArity_15, ModeNum_16, &MaybePredProc_17);
  if (((MR_tag((MR_Word) MaybePredProc_17)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredProc_17, 0))));

    *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), Specs_8, STATE_VARIABLE_Specs_0_26);
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
  }
  else
  {
    MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 0))));
    MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(1, MaybePredProc_17, 1))));
    MR_Word PredInfo0_20 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 2))));
    MR_Word ProcInfo0_21 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 3))));
    MR_Word ProcMMTablingInfo_22;
    MR_Word ProcInfo_23;
    MR_Word Var_32;

    {
      ProcMMTablingInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcMMTablingInfo_22, 0) = (MR_Box) ((MR_Unsigned) (TablingStatus_10));
      MR_hl_field(0, ProcMMTablingInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (ProcMMTablingInfo_22));
    }
    hlds__hlds_pred__proc_info_set_mm_tabling_info_3_p_0(Var_32, ProcInfo0_21, &ProcInfo_23);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_18, ProcId_19, PredInfo0_20, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_gen__add_gen_pragma_trailing_5_p_0(
  MR_Word Trailing_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word PredNameArityPFMn_9 = ((MR_Word) ((MR_hl_field(0, Trailing_6, 0))));
  MR_Word TrailingStatus_10 = ((MR_Unsigned) ((MR_hl_field(0, Trailing_6, 1))) & (MR_Integer) 3);
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Trailing_6, 2))));
  MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 1))));
  MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 2))));
  MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_9, 3))));
  MR_Word MaybePredProc_17;

  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_mode_num_10_p_0(STATE_VARIABLE_ModuleInfo_0_24, (MR_Integer) 0, (MR_Integer) 0, Context_11, (MR_String) "trailing_info", PredOrFunc_13, SymName_14, UserArity_15, ModeNum_16, &MaybePredProc_17);
  if (((MR_tag((MR_Word) MaybePredProc_17)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredProc_17, 0))));

    *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), Specs_8, STATE_VARIABLE_Specs_0_26);
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
  }
  else
  {
    MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 0))));
    MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(1, MaybePredProc_17, 1))));
    MR_Word PredInfo0_20 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 2))));
    MR_Word ProcInfo0_21 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 3))));
    MR_Word ProcTrailingInfo_22;
    MR_Word ProcInfo_23;
    MR_Word Var_32;

    {
      ProcTrailingInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcTrailingInfo_22, 0) = (MR_Box) ((MR_Unsigned) (TrailingStatus_10));
      MR_hl_field(0, ProcTrailingInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (ProcTrailingInfo_22));
    }
    hlds__hlds_pred__proc_info_set_trailing_info_3_p_0(Var_32, ProcInfo0_21, &ProcInfo_23);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_18, ProcId_19, PredInfo0_20, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_gen__add_gen_pragma_exceptions_5_p_0(
  MR_Word Exceptions_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word PredNameArityPFMn_9 = ((MR_Word) ((MR_hl_field(0, Exceptions_6, 0))));
  MR_Word ThrowStatus_10 = ((MR_Word) ((MR_hl_field(0, Exceptions_6, 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Exceptions_6, 2))));
  MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 1))));
  MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 2))));
  MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_9, 3))));
  MR_Word MaybePredProc_17;

  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_mode_num_10_p_0(STATE_VARIABLE_ModuleInfo_0_24, (MR_Integer) 0, (MR_Integer) 0, Context_11, (MR_String) "exceptions", PredOrFunc_13, SymName_14, UserArity_15, ModeNum_16, &MaybePredProc_17);
  if (((MR_tag((MR_Word) MaybePredProc_17)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredProc_17, 0))));

    *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), Specs_8, STATE_VARIABLE_Specs_0_26);
    *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
  }
  else
  {
    MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 0))));
    MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(1, MaybePredProc_17, 1))));
    MR_Word PredInfo0_20 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 2))));
    MR_Word ProcInfo0_21 = ((MR_Word) ((MR_hl_field(1, MaybePredProc_17, 3))));
    MR_Word ProcExceptionInfo_22;
    MR_Word ProcInfo_23;
    MR_Word Var_32;

    {
      ProcExceptionInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcExceptionInfo_22, 0) = ((MR_Box) (ThrowStatus_10));
      MR_hl_field(0, ProcExceptionInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (ProcExceptionInfo_22));
    }
    hlds__hlds_pred__proc_info_set_exception_info_3_p_0(Var_32, ProcInfo0_21, &ProcInfo_23);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_18, ProcId_19, PredInfo0_20, ProcInfo_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_gen__add_gen_pragma_unused_args_5_p_0(
  MR_Word UnusedArgsInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word PredNameArityPFMn_9 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, 0))));
  MR_Word UnusedArgs_10 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, UnusedArgsInfo_6, 2))));
  MR_Word PredOrFunc_13 = ((MR_Unsigned) ((MR_hl_field(0, PredNameArityPFMn_9, 0))) & (MR_Integer) 1);
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 1))));
  MR_Word UserArity_15 = ((MR_Word) ((MR_hl_field(0, PredNameArityPFMn_9, 2))));
  MR_Integer ModeNum_16 = ((MR_Integer) ((MR_hl_field(0, PredNameArityPFMn_9, 3))));
  MR_Word MaybePredId_17;

  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(STATE_VARIABLE_ModuleInfo_0_23, (MR_Integer) 0, (MR_Integer) 2, Context_11, (MR_String) "unused_args", PredOrFunc_13, SymName_14, UserArity_15, &MaybePredId_17);
  if (((MR_tag((MR_Word) MaybePredId_17)) == (MR_Integer) 0))
  {
    MR_Word Specs_8 = ((MR_Word) ((MR_hl_field(0, MaybePredId_17, 0))));

    *STATE_VARIABLE_Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_diag_spec_0), Specs_8, STATE_VARIABLE_Specs_0_25);
    *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
  }
  else
  {
    MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, MaybePredId_17, 0))));
    MR_Word ProcToUnusedArgsMap0_19;
    MR_Integer ProcId_20;
    MR_Word PredProcId_21;
    MR_Word ProcToUnusedArgsMap_22;

    hlds__hlds_module__module_info_get_proc_to_unused_args_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &ProcToUnusedArgsMap0_19);
    hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_20, ModeNum_16);
    {
      PredProcId_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredProcId_21, 0) = ((MR_Box) (PredId_18));
      MR_hl_field(0, PredProcId_21, 1) = ((MR_Box) (ProcId_20));
    }
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_gen_scalar_common_1[0]), ((MR_Box) (PredProcId_21)), ((MR_Box) (UnusedArgs_10)), ProcToUnusedArgsMap0_19, &ProcToUnusedArgsMap_22);
    hlds__hlds_module__module_info_set_proc_to_unused_args_map_3_p_0(ProcToUnusedArgsMap_22, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
  }
}

void mercury__hlds__make_hlds__add_pragma_gen__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma_gen__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pragma_gen__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma_gen__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma_gen.
