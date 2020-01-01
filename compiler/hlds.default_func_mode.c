/*
** Automatically generated from `default_func_mode.m'
** by the Mercury compiler,
** version rotd-2020-01-01
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "hlds.add_pred.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
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
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "robdd.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"





static /* final */ const MR_Box hlds__default_func_mode_scalar_common_1[1][1];




static /* final */ const MR_Box hlds__default_func_mode_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
hlds__default_func_mode__maybe_add_default_func_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PredTable_0_2,
  MR_Word * STATE_VARIABLE_PredTable_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredTable_3 = STATE_VARIABLE_PredTable_0_2;
    else
    {
      MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo0_10;
      MR_Word PredInfo_11;
      MR_Word MaybeNewProcId_12;
      MR_Word STATE_VARIABLE_PredTable_16_16;
      MR_Box conv0_PredInfo0_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PredTable_0_2;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_2, ((MR_Box) (PredId_7)), &conv0_PredInfo0_10);
      PredInfo0_10 = ((MR_Word) (conv0_PredInfo0_10));
      hlds__default_func_mode__maybe_add_default_func_mode_3_p_0(PredInfo0_10, &PredInfo_11, &MaybeNewProcId_12);
      if ((MaybeNewProcId_12 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_PredTable_16_16 = STATE_VARIABLE_PredTable_0_2;
      else
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_11)), STATE_VARIABLE_PredTable_0_2, &STATE_VARIABLE_PredTable_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_8;
      next_value_of_STATE_VARIABLE_PredTable_0_2 = STATE_VARIABLE_PredTable_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PredTable_0_2 = next_value_of_STATE_VARIABLE_PredTable_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__default_func_mode__maybe_add_default_func_mode_3_p_0(
  MR_Word PredInfo0_4,
  MR_Word * PredInfo_5,
  MR_Word * MaybeProcId_6)
{
  {
    MR_bool succeeded;
    MR_Word Procs0_7;
    MR_Word PredOrFunc_8;
    MR_Word TypeCtorInfo_30_30;
    MR_Word TypeCtorInfo_31_31;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_4, &Procs0_7);
    PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_4);
    succeeded = (PredOrFunc_8 == (MR_Integer) 1);
    if (succeeded)
    {
      TypeCtorInfo_30_30 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0);
      TypeCtorInfo_31_31 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0);
      succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_30_30, TypeCtorInfo_31_31, Procs0_7);
    }
    if (succeeded)
    {
      MR_Integer PredArity_10;
      MR_Integer FuncArity_11;
      MR_Word InMode_12;
      MR_Word FuncArgModes_14;
      MR_Word FuncRetMode_15;
      MR_Word PredArgModes_16;
      MR_Word Context_18;
      MR_Word InstVarSet_20;
      MR_Integer ProcId_22;
      MR_Word Var_24;
      MR_Word Var_26;

      PredArity_10 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo0_4);
      FuncArity_11 = (MR_Integer) ((MR_Unsigned) PredArity_10 - (MR_Unsigned) 1);
      parse_tree__prog_mode__in_mode_1_p_0(&InMode_12);
      parse_tree__prog_mode__out_mode_1_p_0(&FuncRetMode_15);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArity_11, ((MR_Box) (InMode_12)), &FuncArgModes_14);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (FuncRetMode_15));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArgModes_14, Var_24, &PredArgModes_16);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_4, &Context_18);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_20);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (PredArgModes_16));
      }
      hlds__add_pred__add_new_proc_14_p_0(Context_18, (MR_Integer) -1, PredArity_10, InstVarSet_20, PredArgModes_16, Var_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__default_func_mode_scalar_common_1[0])), (MR_Integer) 1, (MR_Integer) 1, PredInfo0_4, PredInfo_5, &ProcId_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProcId_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcId_22));
      }
    }
    else
    {
      *PredInfo_5 = PredInfo0_4;
      *MaybeProcId_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
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
