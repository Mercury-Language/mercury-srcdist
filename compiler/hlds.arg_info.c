/*
** Automatically generated from `arg_info.m'
** by the Mercury compiler,
** version rotd-2021-05-07
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
#include "ops.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Word MR_CALL 
hlds__arg_info__arg_reg_to_reg_type_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__arg_info__standard_reg_type_for_type_3_p_0(
  MR_Word FloatRegType_4,
  MR_Word Type_5,
  MR_Word * RegType_6);

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_InVars_0_5,
  MR_Word * STATE_VARIABLE_InVars_6,
  MR_Word STATE_VARIABLE_OutVars_0_7,
  MR_Word * STATE_VARIABLE_OutVars_8);

static MR_Box MR_CALL 
hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__arg_info__generate_pred_arg_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3);

static void MR_CALL 
hlds__arg_info__generate_proc_list_arg_info_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__arg_info__make_arg_infos_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_InRegR_0_4,
  MR_Integer STATE_VARIABLE_InRegF_0_5,
  MR_Integer STATE_VARIABLE_OutRegR_0_6,
  MR_Integer STATE_VARIABLE_OutRegF_0_7,
  MR_Word ModuleInfo_8,
  MR_Word * HeadVar__9_9);


static /* final */ const MR_Box hlds__arg_info_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__arg_info_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__arg_info_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__arg_info_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__arg_info_scalar_common_5[1][5];




static /* final */ const MR_Box hlds__arg_info_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__arg_info_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__arg_info_scalar_common_5[0])),
    ((MR_Box) (hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_3[1][7] = {
  /* row 0 */
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

static /* final */ const MR_Box hlds__arg_info_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0))
  },
};

static /* final */ const MR_Box hlds__arg_info_scalar_common_5[1][5] = {
  /* row 0 */
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



static const MR_FA_TypeInfo_Struct1 hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&hlds__arg_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__arg_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static MR_Word MR_CALL 
hlds__arg_info__arg_reg_to_reg_type_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

static void MR_CALL 
hlds__arg_info__standard_reg_type_for_type_3_p_0(
  MR_Word FloatRegType_4,
  MR_Word Type_5,
  MR_Word * RegType_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;

    Var_7 = parse_tree__builtin_lib_types__float_type_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_7);
    if (succeeded)
      *RegType_6 = FloatRegType_4;
    else
      *RegType_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
hlds__arg_info__reg_type_for_headvar_4_p_0(
  MR_Word RegR_HeadVars_5,
  MR_Word HeadVar_6,
  MR_Word Type_7,
  MR_Word * RegType_8)
{
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
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Inputs_19_26;
    MR_Word STATE_VARIABLE_Outputs_21_28;
    MR_Word STATE_VARIABLE_Unuseds_23_30;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_29;

    Var_25 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
    Var_27 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
    Var_29 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
    succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(Vars_9, Types_10, Modes_11, ModuleInfo_8, Var_25, &STATE_VARIABLE_Inputs_19_26, Var_27, &STATE_VARIABLE_Outputs_21_28, Var_29, &STATE_VARIABLE_Unuseds_23_30);
    if (succeeded)
    {
      *Unuseds_14 = STATE_VARIABLE_Unuseds_23_30;
      *Outputs_13 = STATE_VARIABLE_Outputs_21_28;
      *Inputs_12 = STATE_VARIABLE_Inputs_19_26;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
        return;
      }
  }
}

void MR_CALL 
hlds__arg_info__partition_proc_call_args_7_p_0(
  MR_Word ProcInfo_8,
  MR_Word VarTypes_9,
  MR_Word ModuleInfo_10,
  MR_Word Vars_11,
  MR_Word * Inputs_12,
  MR_Word * Outputs_13,
  MR_Word * Unuseds_14)
{
  {
    MR_bool succeeded;
    MR_Word Modes_15;
    MR_Word Types_16;
    MR_Word STATE_VARIABLE_Inputs_19_28;
    MR_Word STATE_VARIABLE_Outputs_21_30;
    MR_Word STATE_VARIABLE_Unuseds_23_32;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_31;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_8, &Modes_15);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_9, Vars_11, &Types_16);
    Var_27 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
    Var_29 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
    Var_31 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
    succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(Vars_11, Types_16, Modes_15, ModuleInfo_10, Var_27, &STATE_VARIABLE_Inputs_19_28, Var_29, &STATE_VARIABLE_Outputs_21_30, Var_31, &STATE_VARIABLE_Unuseds_23_32);
    if (succeeded)
    {
      *Unuseds_14 = STATE_VARIABLE_Unuseds_23_32;
      *Outputs_13 = STATE_VARIABLE_Outputs_21_30;
      *Inputs_12 = STATE_VARIABLE_Inputs_19_28;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
        return;
      }
  }
}

void MR_CALL 
hlds__arg_info__partition_proc_args_5_p_0(
  MR_Word ProcInfo_6,
  MR_Word ModuleInfo_7,
  MR_Word * Inputs_8,
  MR_Word * Outputs_9,
  MR_Word * Unuseds_10)
{
  {
    MR_bool succeeded;
    MR_Word Vars_11;
    MR_Word Modes_12;
    MR_Word VarTypes_13;
    MR_Word Types_14;
    MR_Word STATE_VARIABLE_Inputs_19_26;
    MR_Word STATE_VARIABLE_Outputs_21_28;
    MR_Word STATE_VARIABLE_Unuseds_23_30;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_29;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_6, &Vars_11);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_6, &Modes_12);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_6, &VarTypes_13);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_13, Vars_11, &Types_14);
    Var_25 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
    Var_27 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
    Var_29 = mercury__set__init_0_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]));
    succeeded = hlds__arg_info__partition_proc_args_2_10_p_0(Vars_11, Types_14, Modes_12, ModuleInfo_7, Var_25, &STATE_VARIABLE_Inputs_19_26, Var_27, &STATE_VARIABLE_Outputs_21_28, Var_29, &STATE_VARIABLE_Unuseds_23_30);
    if (succeeded)
    {
      *Unuseds_10 = STATE_VARIABLE_Unuseds_23_30;
      *Outputs_9 = STATE_VARIABLE_Outputs_21_28;
      *Inputs_8 = STATE_VARIABLE_Inputs_19_26;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.do_partition_proc_args\'/7", (MR_String) "list length mismatch");
        return;
      }
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_23;
      MR_Word Types_24;
      MR_Word Mode_25;
      MR_Word Modes_26;
      MR_Word TopFunctorMode_31;
      MR_Word STATE_VARIABLE_Unuseds_38_38;
      MR_Word STATE_VARIABLE_Outputs_39_39;
      MR_Word STATE_VARIABLE_Inputs_40_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Inputs_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Outputs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Unuseds_0_9;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Type_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Types_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Mode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          Modes_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(HeadVar__4_4, Mode_25, Type_23, &TopFunctorMode_31);
          switch (TopFunctorMode_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__set__insert_3_p_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ((MR_Box) (Var_21)), STATE_VARIABLE_Inputs_0_5, &STATE_VARIABLE_Inputs_40_40);
                STATE_VARIABLE_Outputs_39_39 = STATE_VARIABLE_Outputs_0_7;
                STATE_VARIABLE_Unuseds_38_38 = STATE_VARIABLE_Unuseds_0_9;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__set__insert_3_p_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ((MR_Box) (Var_21)), STATE_VARIABLE_Outputs_0_7, &STATE_VARIABLE_Outputs_39_39);
                STATE_VARIABLE_Inputs_40_40 = STATE_VARIABLE_Inputs_0_5;
                STATE_VARIABLE_Unuseds_38_38 = STATE_VARIABLE_Unuseds_0_9;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__set__insert_3_p_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ((MR_Box) (Var_21)), STATE_VARIABLE_Unuseds_0_9, &STATE_VARIABLE_Unuseds_38_38);
                STATE_VARIABLE_Inputs_40_40 = STATE_VARIABLE_Inputs_0_5;
                STATE_VARIABLE_Outputs_39_39 = STATE_VARIABLE_Outputs_0_7;
              }
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Vars_22;
          next_value_of_HeadVar__2_2 = Types_24;
          next_value_of_HeadVar__3_3 = Modes_26;
          next_value_of_STATE_VARIABLE_Inputs_0_5 = STATE_VARIABLE_Inputs_40_40;
          next_value_of_STATE_VARIABLE_Outputs_0_7 = STATE_VARIABLE_Outputs_39_39;
          next_value_of_STATE_VARIABLE_Unuseds_0_9 = STATE_VARIABLE_Unuseds_38_38;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
  {
    MR_Word Outs0_7;
    MR_Word Unuseds_8;

    hlds__arg_info__partition_args_4_p_0(Args_4, Ins_5, &Outs0_7, &Unuseds_8);
    mercury__list__append_3_p_1((MR_Word) (&hlds__arg_info_scalar_common_2[0]), Outs0_7, Unuseds_8, Outs_6);
  }
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
    MR_Word Rest_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgMode_12;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Ins_17_17;
    MR_Word STATE_VARIABLE_Outs_18_18;
    MR_Word STATE_VARIABLE_Unuseds_19_19;

    ArgInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
    hlds__arg_info__partition_args_4_p_0(Rest_7, &STATE_VARIABLE_Ins_17_17, &STATE_VARIABLE_Outs_18_18, &STATE_VARIABLE_Unuseds_19_19);
    ArgMode_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgInfo_6, (MR_Integer) 1))) & (MR_Integer) 3);
    switch (ArgMode_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Ins_17_17));
          }
          *HeadVar__3_3 = STATE_VARIABLE_Outs_18_18;
          *HeadVar__4_4 = STATE_VARIABLE_Unuseds_19_19;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Outs_18_18));
          }
          *HeadVar__2_2 = STATE_VARIABLE_Ins_17_17;
          *HeadVar__4_4 = STATE_VARIABLE_Unuseds_19_19;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Unuseds_19_19));
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
  MR_Word Vars_11,
  MR_Word Modes_12,
  MR_Word Types_13,
  MR_Word ArgRegTypes_14,
  MR_Word * STATE_VARIABLE_InVarsR_19,
  MR_Word * STATE_VARIABLE_InVarsF_20,
  MR_Word * STATE_VARIABLE_OutVarsR_21,
  MR_Word * STATE_VARIABLE_OutVarsF_22)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_InVarsR_23_23;
    MR_Word STATE_VARIABLE_InVarsF_24_24;
    MR_Word STATE_VARIABLE_OutVarsR_25_25;
    MR_Word STATE_VARIABLE_OutVarsF_26_26;

    succeeded = hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(ModuleInfo_10, Vars_11, Modes_12, Types_13, ArgRegTypes_14, &STATE_VARIABLE_InVarsR_23_23, &STATE_VARIABLE_InVarsF_24_24, &STATE_VARIABLE_OutVarsR_25_25, &STATE_VARIABLE_OutVarsF_26_26);
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
}

static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
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
    }
    else
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Mode_14;
      MR_Word Modes_15;
      MR_Word Type_16;
      MR_Word Types_17;
      MR_Word RegType_18;
      MR_Word RegTypes_19;
      MR_Word TopFunctorMode_24;
      MR_Word STATE_VARIABLE_InVarsR_29_29;
      MR_Word STATE_VARIABLE_InVarsF_30_30;
      MR_Word STATE_VARIABLE_OutVarsR_31_31;
      MR_Word STATE_VARIABLE_OutVarsF_32_32;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Mode_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Modes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          Types_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
          succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RegType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
            RegTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
            succeeded = hlds__arg_info__compute_in_and_out_vars_sep_regs_2_9_p_0(HeadVar__1_1, Vars_13, Modes_15, Types_17, RegTypes_19, &STATE_VARIABLE_InVarsR_29_29, &STATE_VARIABLE_InVarsF_30_30, &STATE_VARIABLE_OutVarsR_31_31, &STATE_VARIABLE_OutVarsF_32_32);
            if (succeeded)
            {
              check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(HeadVar__1_1, Mode_14, Type_16, &TopFunctorMode_24);
              switch (TopFunctorMode_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    switch (RegType_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__7_7 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InVarsF_30_30));
                          }
                          *HeadVar__6_6 = STATE_VARIABLE_InVarsR_29_29;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__6_6 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InVarsR_29_29));
                          }
                          *HeadVar__7_7 = STATE_VARIABLE_InVarsF_30_30;
                        }
                        break;
                    }
                    *HeadVar__8_8 = STATE_VARIABLE_OutVarsR_31_31;
                    *HeadVar__9_9 = STATE_VARIABLE_OutVarsF_32_32;
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
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__9_9 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutVarsF_32_32));
                          }
                          *HeadVar__8_8 = STATE_VARIABLE_OutVarsR_31_31;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__8_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutVarsR_31_31));
                          }
                          *HeadVar__9_9 = STATE_VARIABLE_OutVarsF_32_32;
                        }
                        break;
                    }
                    *HeadVar__6_6 = STATE_VARIABLE_InVarsR_29_29;
                    *HeadVar__7_7 = STATE_VARIABLE_InVarsF_30_30;
                  }
                  break;
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__arg_info__compute_in_and_out_vars_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Vars_8,
  MR_Word Modes_9,
  MR_Word Types_10,
  MR_Word * STATE_VARIABLE_InVars_13,
  MR_Word * STATE_VARIABLE_OutVars_14)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_InVars_16_16;
    MR_Word STATE_VARIABLE_OutVars_18_18;

    succeeded = hlds__arg_info__compute_in_and_out_vars_2_8_p_0(ModuleInfo_7, Vars_8, Modes_9, Types_10, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_InVars_16_16, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_OutVars_18_18);
    if (succeeded)
    {
      *STATE_VARIABLE_OutVars_14 = STATE_VARIABLE_OutVars_18_18;
      *STATE_VARIABLE_InVars_13 = STATE_VARIABLE_InVars_16_16;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.compute_in_and_out_vars\'/6", (MR_String) "length mismatch");
        return;
      }
  }
}

static MR_bool MR_CALL 
hlds__arg_info__compute_in_and_out_vars_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_InVars_0_5,
  MR_Word * STATE_VARIABLE_InVars_6,
  MR_Word STATE_VARIABLE_OutVars_0_7,
  MR_Word * STATE_VARIABLE_OutVars_8)
{
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
          *STATE_VARIABLE_OutVars_8 = STATE_VARIABLE_OutVars_0_7;
          *STATE_VARIABLE_InVars_6 = STATE_VARIABLE_InVars_0_5;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Mode_19;
      MR_Word Modes_20;
      MR_Word Type_21;
      MR_Word Types_22;
      MR_Word TopFunctorMode_25;
      MR_Word STATE_VARIABLE_InVars_30_30;
      MR_Word STATE_VARIABLE_OutVars_31_31;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Mode_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Modes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          Types_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
          succeeded = hlds__arg_info__compute_in_and_out_vars_2_8_p_0(HeadVar__1_1, Vars_18, Modes_20, Types_22, STATE_VARIABLE_InVars_0_5, &STATE_VARIABLE_InVars_30_30, STATE_VARIABLE_OutVars_0_7, &STATE_VARIABLE_OutVars_31_31);
          if (succeeded)
          {
            check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(HeadVar__1_1, Mode_19, Type_21, &TopFunctorMode_25);
            switch (TopFunctorMode_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_InVars_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_InVars_30_30));
                  }
                  *STATE_VARIABLE_OutVars_8 = STATE_VARIABLE_OutVars_31_31;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_OutVars_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OutVars_31_31));
                  }
                  *STATE_VARIABLE_InVars_6 = STATE_VARIABLE_InVars_30_30;
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
}

void MR_CALL 
hlds__arg_info__generic_call_arg_reg_types_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word _VarTypes_8,
  MR_Word GenericCall_9,
  MR_Word ArgVars_10,
  MR_Word MaybeArgRegs_11,
  MR_Word * ArgRegTypes_12)
{
  hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0(ModuleInfo_7, GenericCall_9, ArgVars_10, MaybeArgRegs_11, ArgRegTypes_12);
}

static MR_Box MR_CALL 
hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__arg_info__arg_reg_to_reg_type_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__arg_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_97_108_108_95_97_114_103_95_114_101_103_95_116_121_112_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word GenericCall_9,
  MR_Word ArgVars_10,
  MR_Word MaybeArgRegs_11,
  MR_Word * ArgRegTypes_12)
{
  switch (MR_tag((MR_Word) GenericCall_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Globals_17;
        MR_Word UseFloatRegs_18;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_17);
        libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 295, &UseFloatRegs_18);
        switch (UseFloatRegs_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_32;

              Var_32 = mercury__list__length_1_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ArgVars_10);
              mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), Var_32, ((MR_Box) ((MR_Integer) 0)), ArgRegTypes_12);
            }
            break;
          case (MR_Integer) 1:
            if ((MaybeArgRegs_11 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.generic_call_arg_reg_types\'/6", (MR_String) "missing ho_arg_regs");
                return;
              }
            else
            {
              MR_Word ArgRegs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgRegs_11, (MR_Integer) 0))));

              *ArgRegTypes_12 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), (MR_Word) (&hlds__arg_info_scalar_common_2[1]), ArgRegs_19);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        MR_Integer Var_26;

        Var_26 = mercury__list__length_1_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), ArgVars_10);
        mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), Var_26, ((MR_Box) ((MR_Integer) 0)), ArgRegTypes_12);
      }
      break;
  }
}

static void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RegType_6;

    hlds__arg_info__standard_reg_type_for_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_RegType_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_RegType_6));
  }
}

void MR_CALL 
hlds__arg_info__make_standard_arg_infos_5_p_0(
  MR_Word ArgTypes_6,
  MR_Word ArgModes_7,
  MR_Word CodeModel_8,
  MR_Word ModuleInfo_9,
  MR_Word * ArgInfo_10)
{
  {
    MR_Word Globals_11;
    MR_Word FloatRegs_12;
    MR_Word FloatRegType_13;
    MR_Word RegTypes_14;
    MR_Word Var_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 295, &FloatRegs_12);
    switch (FloatRegs_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FloatRegType_13 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        FloatRegType_13 = (MR_Integer) 1;
        break;
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&hlds__arg_info_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (hlds__arg_info__make_standard_arg_infos_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (FloatRegType_13));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), Var_16, ArgTypes_6, &RegTypes_14);
    hlds__arg_info__make_arg_infos_6_p_0(ArgTypes_6, ArgModes_7, RegTypes_14, CodeModel_8, ModuleInfo_9, ArgInfo_10);
  }
}

void MR_CALL 
hlds__arg_info__generate_arg_info_2_p_0(
  MR_Word ModuleInfo0_3,
  MR_Word * ModuleInfo_4)
{
  {
    MR_Word Preds_5;
    MR_Word PredIds_6;

    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo0_3, &Preds_5);
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_5, &PredIds_6);
    hlds__arg_info__generate_pred_arg_info_3_p_0(PredIds_6, ModuleInfo0_3, ModuleInfo_4);
  }
}

static void MR_CALL 
hlds__arg_info__generate_pred_arg_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    else
    {
      MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredTable_10;
      MR_Word PredInfo_11;
      MR_Word Var_14;
      MR_Word STATE_VARIABLE_ModuleInfo_15_15;
      MR_Box conv0_PredInfo_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;

      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_2, &PredTable_10);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_10, ((MR_Box) (PredId_7)), &conv0_PredInfo_11);
      PredInfo_11 = ((MR_Word) (conv0_PredInfo_11));
      Var_14 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_11);
      hlds__arg_info__generate_proc_list_arg_info_4_p_0(PredId_7, Var_14, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_8;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__arg_info__generate_proc_list_arg_info_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ProcIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredTable0_13;
      MR_Word PredInfo0_14;
      MR_Word ProcTable0_15;
      MR_Word Markers_16;
      MR_Word ArgTypes_17;
      MR_Word ProcInfo0_18;
      MR_Word ProcInfo_19;
      MR_Word ProcTable_20;
      MR_Word PredInfo_21;
      MR_Word PredTable_22;
      MR_Word STATE_VARIABLE_ModuleInfo_25_25;
      MR_Box conv0_PredInfo0_14;
      MR_Box conv1_ProcInfo0_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_3, &PredTable0_13);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_13, ((MR_Box) (HeadVar__1_1)), &conv0_PredInfo0_14);
      PredInfo0_14 = ((MR_Word) (conv0_PredInfo0_14));
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_14, &ProcTable0_15);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_14, &Markers_16);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_14, &ArgTypes_17);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_15, ((MR_Box) (ProcId_10)), &conv1_ProcInfo0_18);
      ProcInfo0_18 = ((MR_Word) (conv1_ProcInfo0_18));
      hlds__arg_info__generate_proc_arg_info_5_p_0(Markers_16, ArgTypes_17, STATE_VARIABLE_ModuleInfo_0_3, ProcInfo0_18, &ProcInfo_19);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), ((MR_Box) (ProcInfo_19)), ProcTable0_15, &ProcTable_20);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_20, PredInfo0_14, &PredInfo_21);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (PredInfo_21)), PredTable0_13, &PredTable_22);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_22, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ProcIds_11;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_25_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RegType_8;

    hlds__arg_info__reg_type_for_headvar_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_RegType_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_RegType_8));
  }
}

void MR_CALL 
hlds__arg_info__generate_proc_arg_info_5_p_0(
  MR_Word Markers_6,
  MR_Word ArgTypes_7,
  MR_Word ModuleInfo_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_18,
  MR_Word * STATE_VARIABLE_ProcInfo_19)
{
  {
    MR_bool succeeded;
    MR_Word Globals_10;
    MR_Word UseFloatRegs_11;
    MR_Word HeadVars_12;
    MR_Word ArgRegTypes_14;
    MR_Word ArgModes_15;
    MR_Word CodeModel_16;
    MR_Word ArgInfo_17;
    MR_Word Var_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 295, &UseFloatRegs_11);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_18, &HeadVars_12);
    succeeded = (UseFloatRegs_11 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_21 = (MR_Integer) 11;
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_6, Var_21);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word RegR_HeadVars_13;
      MR_Word Var_22;

      hlds__hlds_pred__proc_info_get_reg_r_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_18, &RegR_HeadVars_13);
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&hlds__arg_info_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (hlds__arg_info__generate_proc_arg_info_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (RegR_HeadVars_13));
      }
      mercury__list__map_corresponding_4_p_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), Var_22, HeadVars_12, ArgTypes_7, &ArgRegTypes_14);
    }
    else
    {
      MR_Integer Var_23;

      Var_23 = mercury__list__length_1_f_0((MR_Word) (&hlds__arg_info_scalar_common_1[0]), HeadVars_12);
      mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0), Var_23, ((MR_Box) ((MR_Integer) 0)), &ArgRegTypes_14);
    }
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_18, &ArgModes_15);
    CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_0_18);
    hlds__arg_info__make_arg_infos_6_p_0(ArgTypes_7, ArgModes_15, ArgRegTypes_14, CodeModel_16, ModuleInfo_8, &ArgInfo_17);
    hlds__hlds_pred__proc_info_set_arg_info_3_p_0(ArgInfo_17, STATE_VARIABLE_ProcInfo_0_18, STATE_VARIABLE_ProcInfo_19);
  }
}

void MR_CALL 
hlds__arg_info__make_arg_infos_6_p_0(
  MR_Word ArgTypes_7,
  MR_Word ArgModes_8,
  MR_Word ArgRegTypes_9,
  MR_Word CodeModel_10,
  MR_Word ModuleInfo_11,
  MR_Word * ArgInfo_12)
{
  {
    MR_bool succeeded;
    MR_Integer FirstOutRegR_13;
    MR_Word ArgInfoPrime_17;

    switch (CodeModel_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        FirstOutRegR_13 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        FirstOutRegR_13 = (MR_Integer) 2;
        break;
    }
    succeeded = hlds__arg_info__make_arg_infos_9_p_0(ArgModes_8, ArgTypes_7, ArgRegTypes_9, (MR_Integer) 1, (MR_Integer) 1, FirstOutRegR_13, (MR_Integer) 1, ModuleInfo_11, &ArgInfoPrime_17);
    if (succeeded)
      *ArgInfo_12 = ArgInfoPrime_17;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.arg_info.make_arg_infos\'/6", (MR_String) "length mismatch");
        return;
      }
  }
}

static MR_bool MR_CALL 
hlds__arg_info__make_arg_infos_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_InRegR_0_4,
  MR_Integer STATE_VARIABLE_InRegF_0_5,
  MR_Integer STATE_VARIABLE_OutRegR_0_6,
  MR_Integer STATE_VARIABLE_OutRegF_0_7,
  MR_Word ModuleInfo_8,
  MR_Word * HeadVar__9_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Mode_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_17;
      MR_Word Types_18;
      MR_Word RegType_19;
      MR_Word RegTypes_20;
      MR_Word ArgInfo_26;
      MR_Word ArgInfos_27;
      MR_Word TopFunctorMode_28;
      MR_Word ArgLoc_29;
      MR_Integer STATE_VARIABLE_OutRegR_34_34;
      MR_Integer STATE_VARIABLE_OutRegF_35_35;
      MR_Integer STATE_VARIABLE_InRegR_36_36;
      MR_Integer STATE_VARIABLE_InRegF_37_37;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Types_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          RegType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          RegTypes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_8, Mode_15, Type_17, &TopFunctorMode_28);
          switch (TopFunctorMode_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                switch (RegType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ArgLoc_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), ArgLoc_29, 1) = ((MR_Box) (STATE_VARIABLE_InRegF_0_5));
                      }
                      STATE_VARIABLE_InRegF_37_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_InRegF_0_5 + (MR_Unsigned) 1);
                      STATE_VARIABLE_InRegR_36_36 = STATE_VARIABLE_InRegR_0_4;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ArgLoc_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(0), ArgLoc_29, 1) = ((MR_Box) (STATE_VARIABLE_InRegR_0_4));
                      }
                      STATE_VARIABLE_InRegR_36_36 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_InRegR_0_4 + (MR_Unsigned) 1);
                      STATE_VARIABLE_InRegF_37_37 = STATE_VARIABLE_InRegF_0_5;
                    }
                    break;
                }
                STATE_VARIABLE_OutRegR_34_34 = STATE_VARIABLE_OutRegR_0_6;
                STATE_VARIABLE_OutRegF_35_35 = STATE_VARIABLE_OutRegF_0_7;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                switch (RegType_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ArgLoc_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), ArgLoc_29, 1) = ((MR_Box) (STATE_VARIABLE_OutRegF_0_7));
                      }
                      STATE_VARIABLE_OutRegF_35_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OutRegF_0_7 + (MR_Unsigned) 1);
                      STATE_VARIABLE_OutRegR_34_34 = STATE_VARIABLE_OutRegR_0_6;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        ArgLoc_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ArgLoc_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(0), ArgLoc_29, 1) = ((MR_Box) (STATE_VARIABLE_OutRegR_0_6));
                      }
                      STATE_VARIABLE_OutRegR_34_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_OutRegR_0_6 + (MR_Unsigned) 1);
                      STATE_VARIABLE_OutRegF_35_35 = STATE_VARIABLE_OutRegF_0_7;
                    }
                    break;
                }
                STATE_VARIABLE_InRegR_36_36 = STATE_VARIABLE_InRegR_0_4;
                STATE_VARIABLE_InRegF_37_37 = STATE_VARIABLE_InRegF_0_5;
              }
              break;
          }
          {
            ArgInfo_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgInfo_26, 0) = ((MR_Box) (ArgLoc_29));
            MR_hl_field(MR_mktag(0), ArgInfo_26, 1) = (MR_Box) ((MR_Unsigned) (TopFunctorMode_28));
          }
          succeeded = hlds__arg_info__make_arg_infos_9_p_0(Modes_16, Types_18, RegTypes_20, STATE_VARIABLE_InRegR_36_36, STATE_VARIABLE_InRegF_37_37, STATE_VARIABLE_OutRegR_34_34, STATE_VARIABLE_OutRegF_35_35, ModuleInfo_8, &ArgInfos_27);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__9_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgInfo_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgInfos_27));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
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
