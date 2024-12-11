/*
** Automatically generated from `arg_info.m'
** by the Mercury compiler,
** version rotd-2024-12-11
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


// :- module hlds.arg_info.
// :- implementation.

/*
INIT mercury__hlds__arg_info__init
ENDINIT
*/

#include "hlds.arg_info.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "check_hlds.mode_top_functor.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
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
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Word MR_CALL 
hlds__arg_info__arg_reg_to_reg_type_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__arg_info__reg_type_for_headvar_4_p_0(
  MR_Word RegR_HeadVars_5,
  MR_Word HeadVar_6,
  MR_Word Type_7,
  MR_Word * RegType_8);

static MR_bool MR_CALL 
hlds__arg_info__partition_proc_args_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Inputs_0_5,
  MR_Word * STATE_VARIABLE_Inputs_6,
  MR_Word STATE_VARIABLE_Outputs_0_7,
  MR_Word * STATE_VARIABLE_Outputs_8,
  MR_Word STATE_VARIABLE_Unuseds_0_9,
  MR_Word * STATE_VARIABLE_Unuseds_10);

static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static MR_Box MR_CALL 
hlds__arg_info__generic_call_arg_reg_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__arg_info__make_std_arg_infos_loop_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_InRegR_0_4,
  MR_Integer STATE_VARIABLE_InRegF_0_5,
  MR_Integer STATE_VARIABLE_OutRegR_0_6,
  MR_Integer STATE_VARIABLE_OutRegF_0_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__arg_info__generate_arg_infos_for_preds_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UseFloatRegs_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevPredIdsInfos_0_4,
  MR_Word * STATE_VARIABLE_RevPredIdsInfos_5);

static void MR_CALL 
hlds__arg_info__generate_arg_infos_for_procs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__arg_info__generate_arg_infos_for_procs_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UseFloatRegs_2,
  MR_Word Markers_3,
  MR_Word ArgTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
hlds__arg_info__make_reg_r_arg_infos_loop_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_InRegR_0_4,
  MR_Integer STATE_VARIABLE_OutRegR_0_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
hlds__arg_info__make_arg_infos_loop_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_InRegR_0_5,
  MR_Integer STATE_VARIABLE_InRegF_0_6,
  MR_Integer STATE_VARIABLE_OutRegR_0_7,
  MR_Integer STATE_VARIABLE_OutRegF_0_8,
  MR_Word * HeadVar__9_9);


static /* final */ const MR_Box hlds__arg_info_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__arg_info_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__arg_info_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__arg_info_scalar_common_4[1][5];




static /* final */ const MR_Box hlds__arg_info_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__arg_info_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__arg_info_scalar_common_4[0])),
    ((MR_Box) (hlds__arg_info__generic_call_arg_reg_types_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static MR_Word MR_CALL 
hlds__arg_info__arg_reg_to_reg_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
  return HeadVar__2_2;
}

static void MR_CALL 
hlds__arg_info__reg_type_for_headvar_4_p_0(
  MR_Word RegR_HeadVars_5,
  MR_Word HeadVar_6,
  MR_Word Type_7,
  MR_Word * RegType_8)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RegR_HeadVars_5, HeadVar_6);
  if (succeeded)
    *RegType_8 = (MR_Integer) 0;
  else
  {
    MR_Word Var_10;

    Var_10 = parse_tree__builtin_lib_types__float_type_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_7, Var_10);
    if (succeeded)
      *RegType_8 = (MR_Integer) 1;
    else
      *RegType_8 = (MR_Integer) 0;
  }
}

void MR_CALL 
hlds__arg_info__partition_generic_call_args_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Vars_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word * Inputs_12,
  MR_Word * Outputs_13,
  MR_Word * Unuseds_14)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Inputs_19_16;
  MR_Word STATE_VARIABLE_Outputs_21_18;
  MR_Word STATE_VARIABLE_Unuseds_23_20;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_19;

  Var_15 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
  Var_17 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
  succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(ModuleInfo_8, Vars_9, Types_10, Modes_11, Var_15, &STATE_VARIABLE_Inputs_19_16, Var_17, &STATE_VARIABLE_Outputs_21_18, Var_19, &STATE_VARIABLE_Unuseds_23_20);
  if (succeeded)
  {
    *Unuseds_14 = STATE_VARIABLE_Unuseds_23_20;
    *Outputs_13 = STATE_VARIABLE_Outputs_21_18;
    *Inputs_12 = STATE_VARIABLE_Inputs_19_16;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
      return;
    }
}

void MR_CALL 
hlds__arg_info__partition_proc_call_args_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word VarTable_10,
  MR_Word Vars_11,
  MR_Word * Inputs_12,
  MR_Word * Outputs_13,
  MR_Word * Unuseds_14)
{
  MR_bool succeeded;
  MR_Word Modes_15;
  MR_Word Types_16;
  MR_Word STATE_VARIABLE_Inputs_19_18;
  MR_Word STATE_VARIABLE_Outputs_21_20;
  MR_Word STATE_VARIABLE_Unuseds_23_22;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_21;

  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_9, &Modes_15);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_10, Vars_11, &Types_16);
  Var_17 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
  Var_21 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
  succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(ModuleInfo_8, Vars_11, Types_16, Modes_15, Var_17, &STATE_VARIABLE_Inputs_19_18, Var_19, &STATE_VARIABLE_Outputs_21_20, Var_21, &STATE_VARIABLE_Unuseds_23_22);
  if (succeeded)
  {
    *Unuseds_14 = STATE_VARIABLE_Unuseds_23_22;
    *Outputs_13 = STATE_VARIABLE_Outputs_21_20;
    *Inputs_12 = STATE_VARIABLE_Inputs_19_18;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
      return;
    }
}

void MR_CALL 
hlds__arg_info__partition_proc_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word * Inputs_8,
  MR_Word * Outputs_9,
  MR_Word * Unuseds_10)
{
  MR_bool succeeded;
  MR_Word Vars_11;
  MR_Word Modes_12;
  MR_Word VarTable_13;
  MR_Word Types_14;
  MR_Word STATE_VARIABLE_Inputs_19_16;
  MR_Word STATE_VARIABLE_Outputs_21_18;
  MR_Word STATE_VARIABLE_Unuseds_23_20;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_19;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_7, &Vars_11);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_7, &Modes_12);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_7, &VarTable_13);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_13, Vars_11, &Types_14);
  Var_15 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
  Var_17 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
  succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(ModuleInfo_6, Vars_11, Types_14, Modes_12, Var_15, &STATE_VARIABLE_Inputs_19_16, Var_17, &STATE_VARIABLE_Outputs_21_18, Var_19, &STATE_VARIABLE_Unuseds_23_20);
  if (succeeded)
  {
    *Unuseds_10 = STATE_VARIABLE_Unuseds_23_20;
    *Outputs_9 = STATE_VARIABLE_Outputs_21_18;
    *Inputs_8 = STATE_VARIABLE_Inputs_19_16;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
      return;
    }
}

static MR_bool MR_CALL 
hlds__arg_info__partition_proc_args_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Inputs_0_5,
  MR_Word * STATE_VARIABLE_Inputs_6,
  MR_Word STATE_VARIABLE_Outputs_0_7,
  MR_Word * STATE_VARIABLE_Outputs_8,
  MR_Word STATE_VARIABLE_Unuseds_0_9,
  MR_Word * STATE_VARIABLE_Unuseds_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Unuseds_10 = STATE_VARIABLE_Unuseds_0_9;
          *STATE_VARIABLE_Outputs_8 = STATE_VARIABLE_Outputs_0_7;
          *STATE_VARIABLE_Inputs_6 = STATE_VARIABLE_Inputs_0_5;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Type_24;
      MR_Word Types_25;
      MR_Word Mode_26;
      MR_Word Modes_27;
      MR_Word TopFunctorMode_31;
      MR_Word STATE_VARIABLE_Inputs_38_38;
      MR_Word STATE_VARIABLE_Outputs_39_39;
      MR_Word STATE_VARIABLE_Unuseds_40_40;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Inputs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Outputs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Unuseds_0_9;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Type_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        Types_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Mode_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
          Modes_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
          check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(HeadVar__1_1, Mode_26, Type_24, &TopFunctorMode_31);
          switch (TopFunctorMode_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__set__insert_3_p_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ((MR_Box) (Var_22)), STATE_VARIABLE_Inputs_0_5, &STATE_VARIABLE_Inputs_38_38);
                STATE_VARIABLE_Outputs_39_39 = STATE_VARIABLE_Outputs_0_7;
                STATE_VARIABLE_Unuseds_40_40 = STATE_VARIABLE_Unuseds_0_9;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__set__insert_3_p_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ((MR_Box) (Var_22)), STATE_VARIABLE_Outputs_0_7, &STATE_VARIABLE_Outputs_39_39);
                STATE_VARIABLE_Inputs_38_38 = STATE_VARIABLE_Inputs_0_5;
                STATE_VARIABLE_Unuseds_40_40 = STATE_VARIABLE_Unuseds_0_9;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__set__insert_3_p_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ((MR_Box) (Var_22)), STATE_VARIABLE_Unuseds_0_9, &STATE_VARIABLE_Unuseds_40_40);
                STATE_VARIABLE_Inputs_38_38 = STATE_VARIABLE_Inputs_0_5;
                STATE_VARIABLE_Outputs_39_39 = STATE_VARIABLE_Outputs_0_7;
              }
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Vars_23;
          next_value_of_HeadVar__3_3 = Types_25;
          next_value_of_HeadVar__4_4 = Modes_27;
          next_value_of_STATE_VARIABLE_Inputs_0_5 = STATE_VARIABLE_Inputs_38_38;
          next_value_of_STATE_VARIABLE_Outputs_0_7 = STATE_VARIABLE_Outputs_39_39;
          next_value_of_STATE_VARIABLE_Unuseds_0_9 = STATE_VARIABLE_Unuseds_40_40;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          STATE_VARIABLE_Inputs_0_5 = next_value_of_STATE_VARIABLE_Inputs_0_5;
          STATE_VARIABLE_Outputs_0_7 = next_value_of_STATE_VARIABLE_Outputs_0_7;
          STATE_VARIABLE_Unuseds_0_9 = next_value_of_STATE_VARIABLE_Unuseds_0_9;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
hlds__arg_info__partition_args_3_p_0(
  MR_Word Args_4,
  MR_Word * Ins_5,
  MR_Word * Outs_6)
{
  MR_Word Outs0_7;
  MR_Word Unuseds_8;

  hlds__arg_info__partition_args_4_p_0(Args_4, Ins_5, &Outs0_7, &Unuseds_8);
  mercury__list__append_3_p_1((MR_Word) (&hlds__arg_info_scalar_common_2[0]), Outs0_7, Unuseds_8, Outs_6);
}

void MR_CALL 
hlds__arg_info__partition_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ArgInfo_6;
    MR_Word VarsArgInfos_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgMode_12;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Ins_17_17;
    MR_Word STATE_VARIABLE_Outs_18_18;
    MR_Word STATE_VARIABLE_Unuseds_19_19;

    ArgInfo_6 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
    hlds__arg_info__partition_args_4_p_0(VarsArgInfos_7, &STATE_VARIABLE_Ins_17_17, &STATE_VARIABLE_Outs_18_18, &STATE_VARIABLE_Unuseds_19_19);
    ArgMode_12 = ((MR_Unsigned) ((MR_hl_field(0, ArgInfo_6, (MR_Integer) 1))) & (MR_Integer) 3);
    switch (ArgMode_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Ins_17_17));
          }
          *HeadVar__3_3 = STATE_VARIABLE_Outs_18_18;
          *HeadVar__4_4 = STATE_VARIABLE_Unuseds_19_19;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Outs_18_18));
          }
          *HeadVar__2_2 = STATE_VARIABLE_Ins_17_17;
          *HeadVar__4_4 = STATE_VARIABLE_Unuseds_19_19;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Unuseds_19_19));
          }
          *HeadVar__2_2 = STATE_VARIABLE_Ins_17_17;
          *HeadVar__3_3 = STATE_VARIABLE_Outs_18_18;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word VarTable_11,
  MR_Word Vars_12,
  MR_Word Modes_13,
  MR_Word ArgRegTypes_14,
  MR_Word * STATE_VARIABLE_InVarsR_19,
  MR_Word * STATE_VARIABLE_InVarsF_20,
  MR_Word * STATE_VARIABLE_OutVarsR_21,
  MR_Word * STATE_VARIABLE_OutVarsF_22)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_InVarsR_23_23;
  MR_Word STATE_VARIABLE_InVarsF_24_24;
  MR_Word STATE_VARIABLE_OutVarsR_25_25;
  MR_Word STATE_VARIABLE_OutVarsF_26_26;

  succeeded = hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(ModuleInfo_10, VarTable_11, Vars_12, Modes_13, ArgRegTypes_14, &STATE_VARIABLE_InVarsR_23_23, &STATE_VARIABLE_InVarsF_24_24, &STATE_VARIABLE_OutVarsR_25_25, &STATE_VARIABLE_OutVarsF_26_26);
  if (succeeded)
  {
    *STATE_VARIABLE_OutVarsF_22 = STATE_VARIABLE_OutVarsF_26_26;
    *STATE_VARIABLE_OutVarsR_21 = STATE_VARIABLE_OutVarsR_25_25;
    *STATE_VARIABLE_InVarsF_20 = STATE_VARIABLE_InVarsF_24_24;
    *STATE_VARIABLE_InVarsR_19 = STATE_VARIABLE_InVarsR_23_23;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.compute_in_and_out_vars_sep_regs\'/9", (MR_String) "length mismatch");
      return;
    }
}

static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
  }
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Vars_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Mode_16;
    MR_Word Modes_17;
    MR_Word RegType_18;
    MR_Word RegTypes_19;
    MR_Word Entry_24;
    MR_Word Type_25;
    MR_Word TopFunctorMode_26;
    MR_Word STATE_VARIABLE_InVarsR_31_31;
    MR_Word STATE_VARIABLE_InVarsF_32_32;
    MR_Word STATE_VARIABLE_OutVarsR_33_33;
    MR_Word STATE_VARIABLE_OutVarsF_34_34;

    succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Mode_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      Modes_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RegType_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
        RegTypes_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
        succeeded = hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(ModuleInfo_1, VarTable_2, Vars_15, Modes_17, RegTypes_19, &STATE_VARIABLE_InVarsR_31_31, &STATE_VARIABLE_InVarsF_32_32, &STATE_VARIABLE_OutVarsR_33_33, &STATE_VARIABLE_OutVarsF_34_34);
        if (succeeded)
        {
          parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_2, Var_14, &Entry_24);
          Type_25 = ((MR_Word) ((MR_hl_field(0, Entry_24, (MR_Integer) 1))));
          check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_1, Mode_16, Type_25, &TopFunctorMode_26);
          switch (TopFunctorMode_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                switch (RegType_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__7_7 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InVarsF_32_32));
                      }
                      *HeadVar__6_6 = STATE_VARIABLE_InVarsR_31_31;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__6_6 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InVarsR_31_31));
                      }
                      *HeadVar__7_7 = STATE_VARIABLE_InVarsF_32_32;
                    }
                    break;
                }
                *HeadVar__8_8 = STATE_VARIABLE_OutVarsR_33_33;
                *HeadVar__9_9 = STATE_VARIABLE_OutVarsF_34_34;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                switch (RegType_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__9_9 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OutVarsF_34_34));
                      }
                      *HeadVar__8_8 = STATE_VARIABLE_OutVarsR_33_33;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__8_8 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
                        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OutVarsR_33_33));
                      }
                      *HeadVar__9_9 = STATE_VARIABLE_OutVarsF_34_34;
                    }
                    break;
                }
                *HeadVar__6_6 = STATE_VARIABLE_InVarsR_31_31;
                *HeadVar__7_7 = STATE_VARIABLE_InVarsF_32_32;
              }
              break;
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__arg_info__compute_in_and_out_vars_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.compute_in_and_out_vars\'/6", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.compute_in_and_out_vars\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Modes_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Entry_33;
      MR_Word Type_34;
      MR_Word TopFunctorMode_35;
      MR_Word STATE_VARIABLE_InVars_38_38;
      MR_Word STATE_VARIABLE_OutVars_39_39;

      hlds__arg_info__compute_in_and_out_vars_6_p_0(ModuleInfo_1, VarTable_2, Var_42, Modes_30, &STATE_VARIABLE_InVars_38_38, &STATE_VARIABLE_OutVars_39_39);
      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_2, Var_43, &Entry_33);
      Type_34 = ((MR_Word) ((MR_hl_field(0, Entry_33, (MR_Integer) 1))));
      check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_1, Mode_29, Type_34, &TopFunctorMode_35);
      switch (TopFunctorMode_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_InVars_38_38));
            }
            *HeadVar__6_6 = STATE_VARIABLE_OutVars_39_39;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OutVars_39_39));
            }
            *HeadVar__5_5 = STATE_VARIABLE_InVars_38_38;
          }
          break;
      }
    }
  }
}

static MR_Box MR_CALL 
hlds__arg_info__generic_call_arg_reg_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__arg_info__arg_reg_to_reg_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__arg_info__generic_call_arg_reg_types_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word GenericCall_7,
  MR_Word ArgVars_8,
  MR_Word MaybeArgRegs_9,
  MR_Word * ArgRegTypes_10)
{
  switch (MR_tag((MR_Word) GenericCall_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Globals_16;
        MR_Word UseFloatRegs_17;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_16);
        libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 330, &UseFloatRegs_17);
        switch (UseFloatRegs_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_26;

              Var_26 = mercury__list__length_1_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ArgVars_8);
              mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), Var_26, ((MR_Box) ((MR_Integer) 0)), ArgRegTypes_10);
            }
            break;
          case (MR_Integer) 1:
            if ((MaybeArgRegs_9 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.generic_call_arg_reg_types\'/5", (MR_String) "missing ho_arg_regs");
                return;
              }
            else
            {
              MR_Word ArgRegs_18 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_9, (MR_Integer) 0))));

              *ArgRegTypes_10 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), (MR_Word) (&hlds__arg_info_scalar_common_2[1]), ArgRegs_18);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        MR_Integer Var_31;

        Var_31 = mercury__list__length_1_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ArgVars_8);
        mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), Var_31, ((MR_Box) ((MR_Integer) 0)), ArgRegTypes_10);
      }
      break;
  }
}

void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word CodeModel_7,
  MR_Word ArgTypes_8,
  MR_Word ArgModes_9,
  MR_Word * ArgInfos_10)
{
  MR_Word Globals_11;
  MR_Word FloatRegs_12;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 330, &FloatRegs_12);
  switch (FloatRegs_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer FirstOutRegR_15;

        switch (CodeModel_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            FirstOutRegR_15 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            FirstOutRegR_15 = (MR_Integer) 2;
            break;
        }
        hlds__arg_info__make_reg_r_arg_infos_loop_6_p_0(ModuleInfo_6, ArgTypes_8, ArgModes_9, (MR_Integer) 1, FirstOutRegR_15, ArgInfos_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer FirstOutRegR_17;

        switch (CodeModel_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            FirstOutRegR_17 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            FirstOutRegR_17 = (MR_Integer) 2;
            break;
        }
        hlds__arg_info__make_std_arg_infos_loop_8_p_0(ModuleInfo_6, ArgTypes_8, ArgModes_9, (MR_Integer) 1, (MR_Integer) 1, FirstOutRegR_17, (MR_Integer) 1, ArgInfos_10);
      }
      break;
  }
}

static void MR_CALL 
hlds__arg_info__make_std_arg_infos_loop_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_InRegR_0_4,
  MR_Integer STATE_VARIABLE_InRegF_0_5,
  MR_Integer STATE_VARIABLE_OutRegR_0_6,
  MR_Integer STATE_VARIABLE_OutRegF_0_7,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.make_std_arg_infos_loop\'/8", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.make_std_arg_infos_loop\'/8", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgInfo_43;
      MR_Word ArgInfos_44;
      MR_Word TopFunctorMode_45;
      MR_Word ArgLoc_46;
      MR_Integer STATE_VARIABLE_InRegR_51_51;
      MR_Integer STATE_VARIABLE_InRegF_52_52;
      MR_Integer STATE_VARIABLE_OutRegR_53_53;
      MR_Integer STATE_VARIABLE_OutRegF_54_54;

      check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_1, Mode_37, Var_56, &TopFunctorMode_45);
      switch (TopFunctorMode_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_61;

            Var_61 = parse_tree__builtin_lib_types__float_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_56, Var_61);
            if (succeeded)
            {
              {
                ArgLoc_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ArgLoc_46, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(0, ArgLoc_46, 1) = ((MR_Box) (STATE_VARIABLE_InRegF_0_5));
              }
              STATE_VARIABLE_InRegF_52_52 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_InRegF_0_5 + (MR_Unsigned) 1);
              STATE_VARIABLE_InRegR_51_51 = STATE_VARIABLE_InRegR_0_4;
            }
            else
            {
              {
                ArgLoc_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ArgLoc_46, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, ArgLoc_46, 1) = ((MR_Box) (STATE_VARIABLE_InRegR_0_4));
              }
              STATE_VARIABLE_InRegR_51_51 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_InRegR_0_4 + (MR_Unsigned) 1);
              STATE_VARIABLE_InRegF_52_52 = STATE_VARIABLE_InRegF_0_5;
            }
            STATE_VARIABLE_OutRegR_53_53 = STATE_VARIABLE_OutRegR_0_6;
            STATE_VARIABLE_OutRegF_54_54 = STATE_VARIABLE_OutRegF_0_7;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_67;

            Var_67 = parse_tree__builtin_lib_types__float_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_56, Var_67);
            if (succeeded)
            {
              {
                ArgLoc_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ArgLoc_46, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(0, ArgLoc_46, 1) = ((MR_Box) (STATE_VARIABLE_OutRegF_0_7));
              }
              STATE_VARIABLE_OutRegF_54_54 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OutRegF_0_7 + (MR_Unsigned) 1);
              STATE_VARIABLE_OutRegR_53_53 = STATE_VARIABLE_OutRegR_0_6;
            }
            else
            {
              {
                ArgLoc_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ArgLoc_46, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(0, ArgLoc_46, 1) = ((MR_Box) (STATE_VARIABLE_OutRegR_0_6));
              }
              STATE_VARIABLE_OutRegR_53_53 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OutRegR_0_6 + (MR_Unsigned) 1);
              STATE_VARIABLE_OutRegF_54_54 = STATE_VARIABLE_OutRegF_0_7;
            }
            STATE_VARIABLE_InRegR_51_51 = STATE_VARIABLE_InRegR_0_4;
            STATE_VARIABLE_InRegF_52_52 = STATE_VARIABLE_InRegF_0_5;
          }
          break;
      }
      {
        ArgInfo_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArgInfo_43, 0) = ((MR_Box) (ArgLoc_46));
        MR_hl_field(0, ArgInfo_43, 1) = (MR_Box) ((MR_Unsigned) (TopFunctorMode_45));
      }
      hlds__arg_info__make_std_arg_infos_loop_8_p_0(ModuleInfo_1, Var_55, Modes_38, STATE_VARIABLE_InRegR_51_51, STATE_VARIABLE_InRegF_52_52, STATE_VARIABLE_OutRegR_53_53, STATE_VARIABLE_OutRegF_54_54, &ArgInfos_44);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgInfo_43));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgInfos_44));
      }
    }
  }
}

static void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RegType_8;

  hlds__arg_info__reg_type_for_headvar_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_RegType_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_RegType_8));
}

void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Markers_7,
  MR_Word ArgTypes_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * STATE_VARIABLE_ProcInfo_13)
{
  MR_bool succeeded;
  MR_Word Globals_10;
  MR_Word UseFloatRegs_11;
  MR_Word HeadVars_15;
  MR_Word ArgModes_16;
  MR_Word CodeModel_17;
  MR_Word ArgInfos_20;
  MR_Word Var_21;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 330, &UseFloatRegs_11);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_12, &HeadVars_15);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_12, &ArgModes_16);
  CodeModel_17 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_0_12);
  succeeded = (UseFloatRegs_11 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_21 = (MR_Integer) 12;
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_7, Var_21);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word RegR_HeadVars_18;
    MR_Word ArgRegTypes_19;
    MR_Word Var_22;

    hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_12, &RegR_HeadVars_18);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__arg_info_scalar_common_3[0]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__arg_info__generate_proc_arg_info_5_p_0_1));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (RegR_HeadVars_18));
    }
    mercury__list__map_corresponding_4_p_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), Var_22, HeadVars_15, ArgTypes_8, &ArgRegTypes_19);
    hlds__arg_info__make_arg_infos_6_p_0(ModuleInfo_6, CodeModel_17, ArgTypes_8, ArgModes_16, ArgRegTypes_19, &ArgInfos_20);
  }
  else
  {
    MR_Integer FirstOutRegR_27;

    switch (CodeModel_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        FirstOutRegR_27 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        FirstOutRegR_27 = (MR_Integer) 2;
        break;
    }
    hlds__arg_info__make_reg_r_arg_infos_loop_6_p_0(ModuleInfo_6, ArgTypes_8, ArgModes_16, (MR_Integer) 1, FirstOutRegR_27, &ArgInfos_20);
  }
  hlds__hlds_pred__proc_info_set_arg_info_3_p_0(ArgInfos_20, STATE_VARIABLE_ProcInfo_0_12, STATE_VARIABLE_ProcInfo_13);
}

void MR_CALL 
hlds__arg_info__generate_arg_info_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_Word Globals_4;
  MR_Word UseFloatRegs_5;
  MR_Word PredIdTable0_6;
  MR_Word PredIdsInfos0_7;
  MR_Word RevPredIdsInfos_8;
  MR_Word PredIdTable_9;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &Globals_4);
  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 330, &UseFloatRegs_5);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &PredIdTable0_6);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_6, &PredIdsInfos0_7);
  hlds__arg_info__generate_arg_infos_for_preds_5_p_0(STATE_VARIABLE_ModuleInfo_0_10, UseFloatRegs_5, PredIdsInfos0_7, (MR_Word) ((MR_Unsigned) 0U), &RevPredIdsInfos_8);
  mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), RevPredIdsInfos_8, &PredIdTable_9);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_9, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
}

static void MR_CALL 
hlds__arg_info__generate_arg_infos_for_preds_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UseFloatRegs_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevPredIdsInfos_0_4,
  MR_Word * STATE_VARIABLE_RevPredIdsInfos_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevPredIdsInfos_5 = STATE_VARIABLE_RevPredIdsInfos_0_4;
    else
    {
      MR_Word PredIdInfo0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredIdsInfos0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_13, (MR_Integer) 0))));
      MR_Word PredInfo0_17 = ((MR_Word) ((MR_hl_field(0, PredIdInfo0_13, (MR_Integer) 1))));
      MR_Word Markers_18;
      MR_Word ArgTypes_19;
      MR_Word ProcTable0_20;
      MR_Word ProcIdsInfos0_21;
      MR_Word ProcIdsInfos_22;
      MR_Word ProcTable_23;
      MR_Word PredInfo_24;
      MR_Word PredIdInfo_25;
      MR_Word STATE_VARIABLE_RevPredIdsInfos_28_28;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_4;

      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_17, &Markers_18);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_17, &ArgTypes_19);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_17, &ProcTable0_20);
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_20, &ProcIdsInfos0_21);
      hlds__arg_info__generate_arg_infos_for_procs_6_p_0(ModuleInfo_1, UseFloatRegs_2, Markers_18, ArgTypes_19, ProcIdsInfos0_21, &ProcIdsInfos_22);
      mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcIdsInfos_22, &ProcTable_23);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_23, PredInfo0_17, &PredInfo_24);
      {
        PredIdInfo_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredIdInfo_25, 0) = ((MR_Box) (PredId_16));
        MR_hl_field(0, PredIdInfo_25, 1) = ((MR_Box) (PredInfo_24));
      }
      {
        STATE_VARIABLE_RevPredIdsInfos_28_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_28_28, 0) = ((MR_Box) (PredIdInfo_25));
        MR_hl_field(1, STATE_VARIABLE_RevPredIdsInfos_28_28, 1) = ((MR_Box) (STATE_VARIABLE_RevPredIdsInfos_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredIdsInfos0_14;
      next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_4 = STATE_VARIABLE_RevPredIdsInfos_28_28;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevPredIdsInfos_0_4 = next_value_of_STATE_VARIABLE_RevPredIdsInfos_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__arg_info__generate_arg_infos_for_procs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RegType_8;

  hlds__arg_info__reg_type_for_headvar_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_RegType_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_RegType_8));
}

static void MR_CALL 
hlds__arg_info__generate_arg_infos_for_procs_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UseFloatRegs_2,
  MR_Word Markers_3,
  MR_Word ArgTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ProcIdInfo0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ProcIdInfos0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word ProcIdInfo_17;
    MR_Word ProcIdInfos_18;
    MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(0, ProcIdInfo0_15, (MR_Integer) 0))));
    MR_Word ProcInfo0_20 = ((MR_Word) ((MR_hl_field(0, ProcIdInfo0_15, (MR_Integer) 1))));
    MR_Word ProcInfo_21;
    MR_Word HeadVars_22;
    MR_Word ArgModes_23;
    MR_Word CodeModel_24;
    MR_Word ArgInfos_27;
    MR_Word Var_28;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_20, &HeadVars_22);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_20, &ArgModes_23);
    CodeModel_24 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo0_20);
    succeeded = (UseFloatRegs_2 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_28 = (MR_Integer) 12;
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_3, Var_28);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word RegR_HeadVars_25;
      MR_Word ArgRegTypes_26;
      MR_Word Var_29;

      hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(ProcInfo0_20, &RegR_HeadVars_25);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__arg_info_scalar_common_3[0]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__arg_info__generate_arg_infos_for_procs_6_p_0_1));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) (RegR_HeadVars_25));
      }
      mercury__list__map_corresponding_4_p_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), Var_29, HeadVars_22, ArgTypes_4, &ArgRegTypes_26);
      hlds__arg_info__make_arg_infos_6_p_0(ModuleInfo_1, CodeModel_24, ArgTypes_4, ArgModes_23, ArgRegTypes_26, &ArgInfos_27);
    }
    else
    {
      MR_Integer FirstOutRegR_34;

      switch (CodeModel_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          FirstOutRegR_34 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          FirstOutRegR_34 = (MR_Integer) 2;
          break;
      }
      hlds__arg_info__make_reg_r_arg_infos_loop_6_p_0(ModuleInfo_1, ArgTypes_4, ArgModes_23, (MR_Integer) 1, FirstOutRegR_34, &ArgInfos_27);
    }
    hlds__hlds_pred__proc_info_set_arg_info_3_p_0(ArgInfos_27, ProcInfo0_20, &ProcInfo_21);
    {
      ProcIdInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcIdInfo_17, 0) = ((MR_Box) (ProcId_19));
      MR_hl_field(0, ProcIdInfo_17, 1) = ((MR_Box) (ProcInfo_21));
    }
    hlds__arg_info__generate_arg_infos_for_procs_6_p_0(ModuleInfo_1, UseFloatRegs_2, Markers_3, ArgTypes_4, ProcIdInfos0_16, &ProcIdInfos_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ProcIdInfo_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (ProcIdInfos_18));
    }
  }
}

static void MR_CALL 
hlds__arg_info__make_reg_r_arg_infos_loop_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_InRegR_0_4,
  MR_Integer STATE_VARIABLE_OutRegR_0_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.make_reg_r_arg_infos_loop\'/6", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.make_reg_r_arg_infos_loop\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgInfo_33;
      MR_Word ArgInfos_34;
      MR_Word TopFunctorMode_35;
      MR_Word ArgLoc_36;
      MR_Integer STATE_VARIABLE_InRegR_39_39;
      MR_Integer STATE_VARIABLE_OutRegR_40_40;

      check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_1, Mode_29, Var_42, &TopFunctorMode_35);
      switch (TopFunctorMode_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              ArgLoc_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ArgLoc_36, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, ArgLoc_36, 1) = ((MR_Box) (STATE_VARIABLE_InRegR_0_4));
            }
            STATE_VARIABLE_InRegR_39_39 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_InRegR_0_4 + (MR_Unsigned) 1);
            STATE_VARIABLE_OutRegR_40_40 = STATE_VARIABLE_OutRegR_0_5;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              ArgLoc_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ArgLoc_36, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, ArgLoc_36, 1) = ((MR_Box) (STATE_VARIABLE_OutRegR_0_5));
            }
            STATE_VARIABLE_OutRegR_40_40 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OutRegR_0_5 + (MR_Unsigned) 1);
            STATE_VARIABLE_InRegR_39_39 = STATE_VARIABLE_InRegR_0_4;
          }
          break;
      }
      {
        ArgInfo_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArgInfo_33, 0) = ((MR_Box) (ArgLoc_36));
        MR_hl_field(0, ArgInfo_33, 1) = (MR_Box) ((MR_Unsigned) (TopFunctorMode_35));
      }
      hlds__arg_info__make_reg_r_arg_infos_loop_6_p_0(ModuleInfo_1, Var_41, Modes_30, STATE_VARIABLE_InRegR_39_39, STATE_VARIABLE_OutRegR_40_40, &ArgInfos_34);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgInfo_33));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgInfos_34));
      }
    }
  }
}

void MR_CALL 
hlds__arg_info__make_arg_infos_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word CodeModel_8,
  MR_Word ArgTypes_9,
  MR_Word ArgModes_10,
  MR_Word ArgRegTypes_11,
  MR_Word * ArgInfos_12)
{
  MR_bool succeeded;
  MR_Integer FirstOutRegR_14;
  MR_Word ArgInfosPrime_17;

  switch (CodeModel_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      FirstOutRegR_14 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      FirstOutRegR_14 = (MR_Integer) 2;
      break;
  }
  succeeded = hlds__arg_info__make_arg_infos_loop_9_p_0(ModuleInfo_7, ArgTypes_9, ArgModes_10, ArgRegTypes_11, (MR_Integer) 1, (MR_Integer) 1, FirstOutRegR_14, (MR_Integer) 1, &ArgInfosPrime_17);
  if (succeeded)
    *ArgInfos_12 = ArgInfosPrime_17;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.make_arg_infos\'/6", (MR_String) "length mismatch");
      return;
    }
}

static MR_bool MR_CALL 
hlds__arg_info__make_arg_infos_loop_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_InRegR_0_5,
  MR_Integer STATE_VARIABLE_InRegF_0_6,
  MR_Integer STATE_VARIABLE_OutRegR_0_7,
  MR_Integer STATE_VARIABLE_OutRegF_0_8,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
  }
  else
  {
    MR_Word Type_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Types_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Mode_18;
    MR_Word Modes_19;
    MR_Word RegType_20;
    MR_Word RegTypes_21;
    MR_Word ArgInfo_26;
    MR_Word ArgInfos_27;
    MR_Word TopFunctorMode_28;
    MR_Word ArgLoc_29;
    MR_Integer STATE_VARIABLE_InRegR_34_34;
    MR_Integer STATE_VARIABLE_InRegF_35_35;
    MR_Integer STATE_VARIABLE_OutRegR_36_36;
    MR_Integer STATE_VARIABLE_OutRegF_37_37;

    succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Mode_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      Modes_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RegType_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        RegTypes_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        check_hlds__mode_top_functor__mode_to_top_functor_mode_4_p_0(ModuleInfo_1, Mode_18, Type_16, &TopFunctorMode_28);
        switch (TopFunctorMode_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (RegType_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ArgLoc_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(0, ArgLoc_29, 1) = ((MR_Box) (STATE_VARIABLE_InRegF_0_6));
                    }
                    STATE_VARIABLE_InRegF_35_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_InRegF_0_6 + (MR_Unsigned) 1);
                    STATE_VARIABLE_InRegR_34_34 = STATE_VARIABLE_InRegR_0_5;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ArgLoc_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(0, ArgLoc_29, 1) = ((MR_Box) (STATE_VARIABLE_InRegR_0_5));
                    }
                    STATE_VARIABLE_InRegR_34_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_InRegR_0_5 + (MR_Unsigned) 1);
                    STATE_VARIABLE_InRegF_35_35 = STATE_VARIABLE_InRegF_0_6;
                  }
                  break;
              }
              STATE_VARIABLE_OutRegR_36_36 = STATE_VARIABLE_OutRegR_0_7;
              STATE_VARIABLE_OutRegF_37_37 = STATE_VARIABLE_OutRegF_0_8;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              switch (RegType_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ArgLoc_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(0, ArgLoc_29, 1) = ((MR_Box) (STATE_VARIABLE_OutRegF_0_8));
                    }
                    STATE_VARIABLE_OutRegF_37_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OutRegF_0_8 + (MR_Unsigned) 1);
                    STATE_VARIABLE_OutRegR_36_36 = STATE_VARIABLE_OutRegR_0_7;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ArgLoc_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(0, ArgLoc_29, 1) = ((MR_Box) (STATE_VARIABLE_OutRegR_0_7));
                    }
                    STATE_VARIABLE_OutRegR_36_36 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OutRegR_0_7 + (MR_Unsigned) 1);
                    STATE_VARIABLE_OutRegF_37_37 = STATE_VARIABLE_OutRegF_0_8;
                  }
                  break;
              }
              STATE_VARIABLE_InRegR_34_34 = STATE_VARIABLE_InRegR_0_5;
              STATE_VARIABLE_InRegF_35_35 = STATE_VARIABLE_InRegF_0_6;
            }
            break;
        }
        {
          ArgInfo_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgInfo_26, 0) = ((MR_Box) (ArgLoc_29));
          MR_hl_field(0, ArgInfo_26, 1) = (MR_Box) ((MR_Unsigned) (TopFunctorMode_28));
        }
        succeeded = hlds__arg_info__make_arg_infos_loop_9_p_0(ModuleInfo_1, Types_17, Modes_19, RegTypes_21, STATE_VARIABLE_InRegR_34_34, STATE_VARIABLE_InRegF_35_35, STATE_VARIABLE_OutRegR_36_36, STATE_VARIABLE_OutRegF_37_37, &ArgInfos_27);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__9_9 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ArgInfo_26));
            MR_hl_field(1, base, 1) = ((MR_Box) (ArgInfos_27));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

void mercury__hlds__arg_info__init(void)
{
}

void mercury__hlds__arg_info__init_type_tables(void)
{
}

void mercury__hlds__arg_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__arg_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.arg_info.
