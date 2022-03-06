/*
** Automatically generated from `call_gen.m'
** by the Mercury compiler,
** version rotd-2022-03-06
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


// :- module ll_backend.call_gen.
// :- implementation.

/*
INIT mercury__ll_backend__call_gen__init
ENDINIT
*/

#include "ll_backend.call_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "ll_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0;

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1;

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_ordinal_ordered_known_call_variant_0[2];

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2];

static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2];

static void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__call_gen__generate_simple_test_5_p_0(
  MR_Word TestExpr_6,
  MR_Word * Rval_7,
  MR_Word * ArgCode_8,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21);

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_101_118_101_110_116_95_97_116_116_114_105_98_117_116_101_115_95_95_91_53_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vars_0_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
  MR_Word GenericCall_14,
  MR_Word Args_15,
  MR_Word Modes_16,
  MR_Word MaybeRegTypes_17,
  MR_Word Det_18,
  MR_Word GoalInfo_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_68,
  MR_Word * STATE_VARIABLE_CI_69,
  MR_Word STATE_VARIABLE_CLD_0_70,
  MR_Word * STATE_VARIABLE_CLD_71);

static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HoCallVariant_2,
  MR_Word InVarsR_3,
  MR_Word InVarsF_4,
  MR_Word * Code_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
  MR_Integer FirstInput_3,
  MR_Word * ExtraLiveVals_4);

static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
  MR_Integer Reg_4,
  MR_Integer FirstInput_5,
  MR_Word * ExtraLiveVals_6);

static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(
  MR_Word ArgsInfos_9,
  MR_Word GoalInfo_10,
  MR_Word ReturnInstMap_12,
  MR_Word * ReturnLiveLvalues_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21);

static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Liveness_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_4,
  MR_Word * STATE_VARIABLE_CLD_5);

static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
  MR_Word ArgsInfos_6,
  MR_Word GoalInfo_7,
  MR_Word * NonLiveOutputs_8,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14);

static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Liveness_2,
  MR_Word STATE_VARIABLE_NonLiveOutputs_0_3,
  MR_Word * STATE_VARIABLE_NonLiveOutputs_4);

static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
  MR_Word CI_5,
  MR_Word PredId_6,
  MR_Word CodeModel_7,
  MR_String * Msg_8);

static void MR_CALL 
ll_backend__call_gen__handle_call_failure_6_p_0(
  MR_Word CodeModel_7,
  MR_Word GoalInfo_8,
  MR_Word * FailHandlingCode_9,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18,
  MR_Word STATE_VARIABLE_CLD_0_19);

static void MR_CALL 
ll_backend__call_gen__prepare_for_call_8_p_0(
  MR_Word CodeModel_9,
  MR_Word GoalInfo_10,
  MR_Word * CallModel_11,
  MR_Word * TraceCode_12,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18,
  MR_Word STATE_VARIABLE_CLD_0_19,
  MR_Word * STATE_VARIABLE_CLD_20);

static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__call_gen_scalar_common_1[9][2];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[2][1];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[1][6];




static /* final */ const MR_Box ll_backend__call_gen_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__call_gen_scalar_common_1[1])),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__call_gen_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__call_gen_scalar_common_4[0])),
    ((MR_Box) (ll_backend__call_gen__generate_builtin_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[2][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0 = {
  (MR_String) "ho_call_known_num",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1 = {
  (MR_String) "ho_call_unknown",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_ordinal_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__call_gen__ll_backend__call_gen__type_ctor_info_known_call_variant_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__call_gen____Unify____known_call_variant_0_0_10001)),
  ((MR_Box) (ll_backend__call_gen____Compare____known_call_variant_0_0_10001)),
  (MR_String) "ll_backend.call_gen",
  (MR_String) "known_call_variant",
  { ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0 },
  { ll_backend__call_gen__ll_backend__call_gen__enum_ordinal_ordered_known_call_variant_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0,

};

void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0(
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
ll_backend__call_gen____Unify____known_call_variant_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ll_backend__call_gen__output_arg_locs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_3;
    MR_Word Loc_4;
    MR_Word Mode_5;
    MR_Word Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Vs0_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_10;

    Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    Loc_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    Mode_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))) & (MR_Integer) 3);
    ll_backend__call_gen__output_arg_locs_2_p_0(Args_6, &Vs0_8);
    switch (Mode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        *HeadVar__2_2 = Vs0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_11;

          {
            Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_3));
            MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Loc_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vs0_8));
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__call_gen__input_arg_locs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_3;
    MR_Word Loc_4;
    MR_Word Mode_5;
    MR_Word Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Vs0_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_10;

    Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    Loc_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    Mode_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))) & (MR_Integer) 3);
    ll_backend__call_gen__input_arg_locs_2_p_0(Args_6, &Vs0_8);
    switch (Mode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_11;

          {
            Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_3));
            MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Loc_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vs0_8));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *HeadVar__2_2 = Vs0_8;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  ll_backend__code_loc_dep__magically_put_var_in_unused_reg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0(
  MR_Word CodeModel_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word Args_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_42,
  MR_Word * STATE_VARIABLE_CI_43,
  MR_Word STATE_VARIABLE_CLD_0_44,
  MR_Word * STATE_VARIABLE_CLD_45)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_17;
  MR_Word ModuleName_18;
  MR_String PredName_19;
  MR_Word SimpleCode_20;

  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_42, &ModuleInfo_17);
  ModuleName_18 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_17, PredId_11);
  PredName_19 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_17, PredId_11);
  backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), ModuleName_18, PredName_19, ProcId_12, Args_13, &SimpleCode_20);
  switch (CodeModel_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        switch (MR_tag((MR_Word) SimpleCode_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCode_20, (MR_Integer) 0))));
              MR_Word AssignExpr_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCode_20, (MR_Integer) 1))));

              succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_44, Var_21);
              if (succeeded)
              {
                MR_Word Rval_82;

                Rval_82 = ll_backend__call_gen__convert_simple_expr_1_f_0(AssignExpr_22);
                ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(Var_21, Rval_82, Code_14, STATE_VARIABLE_CLD_0_44, STATE_VARIABLE_CLD_45);
              }
              else
              {
                *Code_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                *STATE_VARIABLE_CLD_45 = STATE_VARIABLE_CLD_0_44;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AddrVar_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleCode_20, (MR_Integer) 0))));
              MR_Word ValueVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleCode_20, (MR_Integer) 1))));
              MR_Word AddrVarCode_25;
              MR_Word AddrRval_26;
              MR_Word ValueVarCode_27;
              MR_Word ValueRval_28;
              MR_Word StoreInstr_29;
              MR_Word StoreCode_30;
              MR_Word STATE_VARIABLE_CLD_61_61;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_66;

              ll_backend__code_loc_dep__produce_variable_5_p_0(AddrVar_23, &AddrVarCode_25, &AddrRval_26, STATE_VARIABLE_CLD_0_44, &STATE_VARIABLE_CLD_61_61);
              ll_backend__code_loc_dep__produce_variable_5_p_0(ValueVar_24, &ValueVarCode_27, &ValueRval_28, STATE_VARIABLE_CLD_61_61, STATE_VARIABLE_CLD_45);
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (AddrRval_26));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(3), Var_63, 2) = ((MR_Box) (ValueRval_28));
              }
              {
                StoreInstr_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StoreInstr_29, 0) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), StoreInstr_29, 1) = ((MR_Box) ((MR_String) ""));
              }
              StoreCode_30 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (StoreInstr_29)));
              Var_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ValueVarCode_27, StoreCode_30);
              *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AddrVarCode_25, Var_66);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word DefinedVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SimpleCode_20, (MR_Integer) 0))));
              MR_Box conv1_STATE_VARIABLE_CLD_45;

              mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0), (MR_Word) (&ll_backend__call_gen_scalar_common_2[1]), DefinedVars_32, ((MR_Box) (STATE_VARIABLE_CLD_0_44)), &conv1_STATE_VARIABLE_CLD_45);
              *STATE_VARIABLE_CLD_45 = ((MR_Word) (conv1_STATE_VARIABLE_CLD_45));
              *Code_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            break;
        }
        *STATE_VARIABLE_CI_43 = STATE_VARIABLE_CI_0_42;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "model_non builtin predicate");
        return;
      }
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) SimpleCode_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TestExpr_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleCode_20, (MR_Integer) 0))));
            MR_Word Rval_34;
            MR_Word ArgCode_35;
            MR_Word TestCode_36;
            MR_Word STATE_VARIABLE_CLD_54_54;

            ll_backend__call_gen__generate_simple_test_5_p_0(TestExpr_33, &Rval_34, &ArgCode_35, STATE_VARIABLE_CLD_0_44, &STATE_VARIABLE_CLD_54_54);
            ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(Rval_34, &TestCode_36, STATE_VARIABLE_CI_0_42, STATE_VARIABLE_CI_43, STATE_VARIABLE_CLD_54_54, STATE_VARIABLE_CLD_45);
            *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ArgCode_35, TestCode_36);
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__call_gen__generate_simple_test_5_p_0(
  MR_Word TestExpr_6,
  MR_Word * Rval_7,
  MR_Word * ArgCode_8,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21)
{
  if (((((MR_tag((MR_Word) TestExpr_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TestExpr_6, (MR_Integer) 0)))) == (MR_Integer) 10))))
  {
    MR_Word BinOp_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_6, (MR_Integer) 1))));
    MR_Word X0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_6, (MR_Integer) 2))));
    MR_Word Y0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_6, (MR_Integer) 3))));
    MR_Word X1_13;
    MR_Word Y1_14;
    MR_Word X_15;
    MR_Word CodeX_16;
    MR_Word Y_17;
    MR_Word CodeY_18;
    MR_Word STATE_VARIABLE_CLD_23_23;

    X1_13 = ll_backend__call_gen__convert_simple_expr_1_f_0(X0_11);
    Y1_14 = ll_backend__call_gen__convert_simple_expr_1_f_0(Y0_12);
    switch (MR_tag((MR_Word) X1_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          X_15 = X1_13;
          CodeX_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_CLD_23_23 = STATE_VARIABLE_CLD_0_20;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X1_13, (MR_Integer) 0))));

          ll_backend__code_loc_dep__produce_variable_5_p_0(Var_35, &CodeX_16, &X_15, STATE_VARIABLE_CLD_0_20, &STATE_VARIABLE_CLD_23_23);
        }
        break;
      case (MR_Integer) 3:
        {
          X_15 = X1_13;
          CodeX_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_CLD_23_23 = STATE_VARIABLE_CLD_0_20;
        }
        break;
    }
    switch (MR_tag((MR_Word) Y1_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          Y_17 = Y1_14;
          CodeY_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_21 = STATE_VARIABLE_CLD_23_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y1_14, (MR_Integer) 0))));

          ll_backend__code_loc_dep__produce_variable_5_p_0(Var_57, &CodeY_18, &Y_17, STATE_VARIABLE_CLD_23_23, STATE_VARIABLE_CLD_21);
        }
        break;
      case (MR_Integer) 3:
        {
          Y_17 = Y1_14;
          CodeY_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_21 = STATE_VARIABLE_CLD_23_23;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Rval_7 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (BinOp_10));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (X_15));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Y_17));
    }
    *ArgCode_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeX_16, CodeY_18);
  }
  else
  {
    MR_Word UnOp_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_6, (MR_Integer) 1))));
    MR_Word X0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TestExpr_6, (MR_Integer) 2))));
    MR_Word X1_26;
    MR_Word X_27;

    X1_26 = ll_backend__call_gen__convert_simple_expr_1_f_0(X0_25);
    switch (MR_tag((MR_Word) X1_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          X_27 = X1_26;
          *ArgCode_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_21 = STATE_VARIABLE_CLD_0_20;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), X1_26, (MR_Integer) 0))));

          ll_backend__code_loc_dep__produce_variable_5_p_0(Var_79, ArgCode_8, &X_27, STATE_VARIABLE_CLD_0_20, STATE_VARIABLE_CLD_21);
        }
        break;
      case (MR_Integer) 3:
        {
          X_27 = X1_26;
          *ArgCode_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_21 = STATE_VARIABLE_CLD_0_20;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Rval_7 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UnOp_19));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (X_27));
    }
  }
}

void MR_CALL 
ll_backend__call_gen__generate_generic_call_12_p_0(
  MR_Word OuterCodeModel_13,
  MR_Word GenericCall_14,
  MR_Word Args_15,
  MR_Word Modes_16,
  MR_Word MaybeRegTypes_17,
  MR_Word Det_18,
  MR_Word GoalInfo_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_39,
  MR_Word * STATE_VARIABLE_CI_40,
  MR_Word STATE_VARIABLE_CLD_0_41,
  MR_Word * STATE_VARIABLE_CLD_42)
{
  ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(GenericCall_14, Args_15, Modes_16, MaybeRegTypes_17, Det_18, GoalInfo_19, Code_20, STATE_VARIABLE_CI_0_39, STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_0_41, STATE_VARIABLE_CLD_42);
}

void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
  MR_Word GenericCall_14,
  MR_Word Args_15,
  MR_Word Modes_16,
  MR_Word MaybeRegTypes_17,
  MR_Word Det_18,
  MR_Word GoalInfo_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_39,
  MR_Word * STATE_VARIABLE_CI_40,
  MR_Word STATE_VARIABLE_CLD_0_41,
  MR_Word * STATE_VARIABLE_CLD_42)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GenericCall_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(GenericCall_14, Args_15, Modes_16, MaybeRegTypes_17, Det_18, GoalInfo_19, Code_20, STATE_VARIABLE_CI_0_39, STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_0_41, STATE_VARIABLE_CLD_42);
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_31 = ((MR_String) ((MR_hl_field(MR_mktag(2), GenericCall_14, (MR_Integer) 0))));
        MR_Word ModuleInfo_72;
        MR_Word EventSet_73;
        MR_Word EventSpecMap_74;
        MR_Word Attributes_75;
        MR_Integer EventNumber_76;

        ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_39, &ModuleInfo_72);
        hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_72, &EventSet_73);
        EventSpecMap_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSet_73, (MR_Integer) 1))));
        succeeded = parse_tree__prog_event__event_attributes_3_p_0(EventSpecMap_74, EventName_31, &Attributes_75);
        if (succeeded)
          succeeded = parse_tree__prog_event__event_number_3_p_0(EventSpecMap_74, EventName_31, &EventNumber_76);
        if (succeeded)
        {
          MR_Word MaybeUserAttributes_77;
          MR_Word AttrCodes_78;
          MR_Word UserEventInfo_79;
          MR_Word EventCode_80;
          MR_Word STATE_VARIABLE_CLD_28_81;
          MR_Word Var_84;

          ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_101_118_101_110_116_95_97_116_116_114_105_98_117_116_101_115_95_95_91_53_93_95_48_7_p_0(Attributes_75, Args_15, &MaybeUserAttributes_77, &AttrCodes_78, STATE_VARIABLE_CLD_0_41, &STATE_VARIABLE_CLD_28_81);
          {
            UserEventInfo_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UserEventInfo_79, 0) = ((MR_Box) (EventNumber_76));
            MR_hl_field(MR_mktag(0), UserEventInfo_79, 1) = ((MR_Box) (MaybeUserAttributes_77));
          }
          ll_backend__trace_gen__generate_user_event_code_7_p_0(UserEventInfo_79, GoalInfo_19, &EventCode_80, STATE_VARIABLE_CI_0_39, STATE_VARIABLE_CI_40, STATE_VARIABLE_CLD_28_81, STATE_VARIABLE_CLD_42);
          Var_84 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AttrCodes_78);
          *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_84, EventCode_80);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_event_call\'/8", (MR_String) "bad event name");
            return;
          }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word InputArg_33;
        MR_Word OutputArg_34;
        MR_Word Var_43;
        MR_Word Var_44;

        succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InputArg_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
          succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OutputArg_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
            Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
            succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Word ModuleInfo_35;
          MR_Word ProcInfo_36;
          MR_Word VarTypes_37;
          MR_Word Rval_38;

          ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_39, &ModuleInfo_35);
          ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_39, &ProcInfo_36);
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_36, &VarTypes_37);
          succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(ModuleInfo_35, VarTypes_37, InputArg_33);
          if (succeeded)
            Rval_38 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_3[0]));
          else
            {
              Rval_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Rval_38, 0) = ((MR_Box) (InputArg_33));
            }
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_41, OutputArg_34);
          if (succeeded)
          {
            MR_Word Rval_59;

            Rval_59 = ll_backend__call_gen__convert_simple_expr_1_f_0(Rval_38);
            ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(OutputArg_34, Rval_59, Code_20, STATE_VARIABLE_CLD_0_41, STATE_VARIABLE_CLD_42);
          }
          else
          {
            *Code_20 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_42 = STATE_VARIABLE_CLD_0_41;
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_generic_call\'/12", (MR_String) "invalid type/inst cast call");
            return;
          }
        *STATE_VARIABLE_CI_40 = STATE_VARIABLE_CI_0_39;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_101_118_101_110_116_95_97_116_116_114_105_98_117_116_101_115_95_95_91_53_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vars_0_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    if (!((STATE_VARIABLE_Vars_0_2 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/7", (MR_String) "var");
        return;
      }
    *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
  }
  else
  {
    MR_Word Attribute_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Attributes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word MaybeUserAttr_21;
    MR_Word MaybeUserAttrs_22;
    MR_Word Code_23;
    MR_Word Codes_24;
    MR_Word SynthCall_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attribute_18, (MR_Integer) 4))));
    MR_Word STATE_VARIABLE_Vars_37_37;
    MR_Word STATE_VARIABLE_CLD_38_38;

    if ((SynthCall_27 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((STATE_VARIABLE_Vars_0_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/7", (MR_String) "no var");
          return;
        }
      else
      {
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Vars_0_2, (MR_Integer) 0))));
        MR_Word Rval_29;
        MR_Word UserAttr_30;

        STATE_VARIABLE_Vars_37_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Vars_0_2, (MR_Integer) 1))));
        ll_backend__code_loc_dep__produce_variable_5_p_0(Var_28, &Code_23, &Rval_29, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_38_38);
        {
          UserAttr_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UserAttr_30, 0) = ((MR_Box) (Rval_29));
          MR_hl_field(MR_mktag(0), UserAttr_30, 1) = ((MR_Box) (Var_28));
        }
        {
          MaybeUserAttr_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeUserAttr_21, 0) = ((MR_Box) (UserAttr_30));
        }
      }
    else
    {
      MaybeUserAttr_21 = (MR_Word) ((MR_Unsigned) 0U);
      Code_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      STATE_VARIABLE_Vars_37_37 = STATE_VARIABLE_Vars_0_2;
      STATE_VARIABLE_CLD_38_38 = STATE_VARIABLE_CLD_0_6;
    }
    ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_101_118_101_110_116_95_97_116_116_114_105_98_117_116_101_115_95_95_91_53_93_95_48_7_p_0(Attributes_19, STATE_VARIABLE_Vars_37_37, &MaybeUserAttrs_22, &Codes_24, STATE_VARIABLE_CLD_38_38, STATE_VARIABLE_CLD_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeUserAttr_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeUserAttrs_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Code_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Codes_24));
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
  MR_Word GenericCall_14,
  MR_Word Args_15,
  MR_Word Modes_16,
  MR_Word MaybeRegTypes_17,
  MR_Word Det_18,
  MR_Word GoalInfo_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_68,
  MR_Word * STATE_VARIABLE_CI_69,
  MR_Word STATE_VARIABLE_CLD_0_70,
  MR_Word * STATE_VARIABLE_CLD_71)
{
  MR_Word ModuleInfo_23;
  MR_Word VarTypes_24;
  MR_Word Types_25;
  MR_Word ArgRegTypes_26;
  MR_Word InVarsR_27;
  MR_Word InVarsF_28;
  MR_Word OutVarsR_29;
  MR_Word OutVarsF_30;
  MR_Word Globals_31;
  MR_Word CodeAddr_32;
  MR_Word SpecifierArgInfos_33;
  MR_Integer FirstImmInputR_34;
  MR_Word HoCallVariant_35;
  MR_Word CodeModel_37;
  MR_Integer FirstOutputR_38;
  MR_Word InVarArgInfosR_40;
  MR_Word InVarArgInfosF_41;
  MR_Word OutArgsInfosR_42;
  MR_Word OutArgsInfosF_43;
  MR_Word ArgInfos_44;
  MR_Word LiveVals0_45;
  MR_Word SetupCode_46;
  MR_Word NonVarCode_48;
  MR_Word ExtraLiveVals_49;
  MR_Word LiveVals_50;
  MR_Word CallModel_51;
  MR_Word TraceCode_52;
  MR_Word ReturnLabel_53;
  MR_Word Context_54;
  MR_Word GoalId_55;
  MR_Word InstMap_56;
  MR_Word InstMapDelta_57;
  MR_Word ReturnInstMap_58;
  MR_Word OutArgsInfos_59;
  MR_Word ReturnLiveLvalues_60;
  MR_Word MaybeContainingGoalMap_61;
  MR_Word MaybeGoalPath_64;
  MR_Word CallCode_65;
  MR_Word AfterReturn_66;
  MR_Word FailHandlingCode_67;
  MR_Integer Var_72;
  MR_Integer Var_73;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word STATE_VARIABLE_CLD_88_88;
  MR_Word STATE_VARIABLE_CLD_89_89;
  MR_Word STATE_VARIABLE_CLD_90_90;
  MR_Word STATE_VARIABLE_CI_91_91;
  MR_Word STATE_VARIABLE_CLD_92_92;
  MR_Word STATE_VARIABLE_CI_93_93;
  MR_Word STATE_VARIABLE_CLD_94_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word NonLiveOutputs_47;

  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_68, &ModuleInfo_23);
  ll_backend__code_info__get_vartypes_2_p_0(STATE_VARIABLE_CI_0_68, &VarTypes_24);
  hlds__vartypes__lookup_var_types_3_p_0(VarTypes_24, Args_15, &Types_25);
  hlds__arg_info__generic_call_arg_reg_types_6_p_0(ModuleInfo_23, VarTypes_24, GenericCall_14, Args_15, MaybeRegTypes_17, &ArgRegTypes_26);
  hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ModuleInfo_23, Args_15, Modes_16, Types_25, ArgRegTypes_26, &InVarsR_27, &InVarsF_28, &OutVarsR_29, &OutVarsF_30);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_23, &Globals_31);
  Var_72 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsR_27);
  Var_73 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsF_28);
  ll_backend__call_gen__generic_call_info_8_p_0(Globals_31, GenericCall_14, Var_72, Var_73, &CodeAddr_32, &SpecifierArgInfos_33, &FirstImmInputR_34, &HoCallVariant_35);
  hlds__code_model__determinism_to_code_model_2_p_0(Det_18, &CodeModel_37);
  switch (CodeModel_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      FirstOutputR_38 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      FirstOutputR_38 = (MR_Integer) 2;
      break;
  }
  ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(InVarsR_27, (MR_Integer) 0, FirstImmInputR_34, (MR_Integer) 0, &InVarArgInfosR_40);
  ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(InVarsF_28, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 0, &InVarArgInfosF_41);
  ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(OutVarsR_29, (MR_Integer) 0, FirstOutputR_38, (MR_Integer) 1, &OutArgsInfosR_42);
  ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(OutVarsF_30, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, &OutArgsInfosF_43);
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (OutArgsInfosF_43));
    MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (OutArgsInfosR_42));
    MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
  }
  {
    Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (InVarArgInfosF_41));
    MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (InVarArgInfosR_40));
    MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (SpecifierArgInfos_33));
    MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
  }
  ArgInfos_44 = mercury__list__condense_1_f_0((MR_Word) (&ll_backend__call_gen_scalar_common_2[0]), Var_82);
  ll_backend__code_loc_dep__setup_call_7_p_0(GoalInfo_19, ArgInfos_44, &LiveVals0_45, &SetupCode_46, STATE_VARIABLE_CI_0_68, STATE_VARIABLE_CLD_0_70, &STATE_VARIABLE_CLD_88_88);
  ll_backend__call_gen__kill_dead_input_vars_5_p_0(ArgInfos_44, GoalInfo_19, &NonLiveOutputs_47, STATE_VARIABLE_CLD_88_88, &STATE_VARIABLE_CLD_89_89);
  ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(GenericCall_14, HoCallVariant_35, InVarsR_27, InVarsF_28, &NonVarCode_48, STATE_VARIABLE_CLD_89_89, &STATE_VARIABLE_CLD_90_90);
  ll_backend__call_gen__extra_livevals_2_p_0(FirstImmInputR_34, &ExtraLiveVals_49);
  mercury__set__insert_list_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ExtraLiveVals_49, LiveVals0_45, &LiveVals_50);
  ll_backend__call_gen__prepare_for_call_8_p_0(CodeModel_37, GoalInfo_19, &CallModel_51, &TraceCode_52, STATE_VARIABLE_CI_0_68, &STATE_VARIABLE_CI_91_91, STATE_VARIABLE_CLD_90_90, &STATE_VARIABLE_CLD_92_92);
  ll_backend__code_info__get_next_label_3_p_0(&ReturnLabel_53, STATE_VARIABLE_CI_91_91, &STATE_VARIABLE_CI_93_93);
  Context_54 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
  GoalId_55 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_19);
  ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_92_92, &InstMap_56);
  InstMapDelta_57 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_19);
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_57, InstMap_56, &ReturnInstMap_58);
  OutArgsInfos_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__call_gen_scalar_common_2[0]), OutArgsInfosR_42, OutArgsInfosF_43);
  ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(OutArgsInfos_59, GoalInfo_19, ReturnInstMap_58, &ReturnLiveLvalues_60, STATE_VARIABLE_CI_93_93, STATE_VARIABLE_CLD_92_92, &STATE_VARIABLE_CLD_94_94);
  ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(STATE_VARIABLE_CI_93_93, &MaybeContainingGoalMap_61);
  if ((MaybeContainingGoalMap_61 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeGoalPath_64 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ContainingGoalMap_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeContainingGoalMap_61, (MR_Integer) 0))));
    MR_Word GoalPath_63;

    GoalPath_63 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_62, GoalId_55);
    {
      MaybeGoalPath_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeGoalPath_64, 0) = ((MR_Box) (GoalPath_63));
    }
  }
  {
    Var_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_97, 0) = ((MR_Box) (LiveVals_50));
  }
  {
    Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (ReturnLabel_53));
  }
  {
    Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (CodeAddr_32));
    MR_hl_field(MR_mktag(3), Var_101, 2) = ((MR_Box) (Var_102));
    MR_hl_field(MR_mktag(3), Var_101, 3) = ((MR_Box) (ReturnLiveLvalues_60));
    MR_hl_field(MR_mktag(3), Var_101, 4) = ((MR_Box) (Context_54));
    MR_hl_field(MR_mktag(3), Var_101, 5) = ((MR_Box) (MaybeGoalPath_64));
    MR_hl_field(MR_mktag(3), Var_101, 6) = ((MR_Box) (CallModel_51));
  }
  {
    Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Var_101));
    MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) ((MR_String) "Setup and call"));
  }
  {
    Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (ReturnLabel_53));
  }
  {
    Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Var_106));
    MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) ((MR_String) "Continuation label"));
  }
  {
    Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
    MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
    MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_104));
  }
  {
    Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
    MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_99));
  }
  CallCode_65 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_95);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_94_94, &AfterReturn_66);
  ll_backend__call_gen__handle_call_failure_6_p_0(CodeModel_37, GoalInfo_19, &FailHandlingCode_67, STATE_VARIABLE_CI_93_93, STATE_VARIABLE_CI_69, STATE_VARIABLE_CLD_94_94);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterReturn_66, *STATE_VARIABLE_CI_69, STATE_VARIABLE_CLD_71);
  Var_113 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CallCode_65, FailHandlingCode_67);
  Var_112 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode_52, Var_113);
  Var_111 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NonVarCode_48, Var_112);
  *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetupCode_46, Var_111);
}

static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgInfo_14;
    MR_Word ArgInfos_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = (MR_Box) ((MR_Unsigned) (HeadVar__2_2));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (HeadVar__3_3));
    }
    {
      ArgInfo_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgInfo_14, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), ArgInfo_14, 1) = (MR_Box) ((MR_Unsigned) (HeadVar__4_4));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ArgInfo_14));
    }
    Var_18 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
    ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(Vars_10, HeadVar__2_2, Var_18, HeadVar__4_4, &ArgInfos_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgInfos_15));
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HoCallVariant_2,
  MR_Word InVarsR_3,
  MR_Word InVarsF_4,
  MR_Word * Code_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HoCallVariant_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Code_5 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer NumInVarsR_17;
            MR_Integer NumInVarsF_18;
            MR_Integer NumInVars_19;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_31;
            MR_Word Var_32;

            ll_backend__code_loc_dep__clobber_reg_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5])), STATE_VARIABLE_CLD_0_6, STATE_VARIABLE_CLD_7);
            mercury__list__length_2_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsR_3, &NumInVarsR_17);
            mercury__list__length_2_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsF_4, &NumInVarsF_18);
            NumInVars_19 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(NumInVarsR_17, NumInVarsF_18);
            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (NumInVars_19));
            }
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
            }
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5])));
              MR_hl_field(MR_mktag(3), Var_27, 2) = ((MR_Box) (Var_31));
            }
            {
              Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Var_27));
              MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) ((MR_String) "Assign number of immediate input arguments"));
            }
            *Code_5 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_26)));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Method_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

        if (!((InVarsF_4 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "float input reg");
            return;
          }
        switch (HoCallVariant_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_90;
              MR_Word Var_91;

              ll_backend__code_loc_dep__clobber_reg_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5])), STATE_VARIABLE_CLD_0_6, STATE_VARIABLE_CLD_7);
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Method_35));
              }
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
              }
              {
                Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5])));
                MR_hl_field(MR_mktag(3), Var_86, 2) = ((MR_Box) (Var_90));
              }
              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Var_86));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
              }
              *Code_5 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_85)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer NumInVarsR_45;
              MR_Integer NumInVars_47;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_77;
              MR_Word Var_78;

              ll_backend__code_loc_dep__clobber_regs_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[8])), STATE_VARIABLE_CLD_0_6, STATE_VARIABLE_CLD_7);
              mercury__list__length_2_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsR_3, &NumInVarsR_45);
              NumInVars_47 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(NumInVarsR_45, (MR_Integer) 0);
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Method_35));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5])));
                MR_hl_field(MR_mktag(3), Var_64, 2) = ((MR_Box) (Var_68));
              }
              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (NumInVars_47));
              }
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[6])));
                MR_hl_field(MR_mktag(3), Var_73, 2) = ((MR_Box) (Var_77));
              }
              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) ((MR_String) "Assign number of immediate regular input arguments"));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_71));
              }
              *Code_5 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_62);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "event_call");
        return;
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "cast");
        return;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
  MR_Integer FirstInput_3,
  MR_Word * ExtraLiveVals_4)
{
  ll_backend__call_gen__extra_livevals_from_3_p_0((MR_Integer) 1, FirstInput_3, ExtraLiveVals_4);
}

static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
  MR_Integer Reg_4,
  MR_Integer FirstInput_5,
  MR_Word * ExtraLiveVals_6)
{
  MR_bool succeeded = (Reg_4 < FirstInput_5);

  if (succeeded)
  {
    MR_Word ExtraLiveVals1_7;
    MR_Integer NextReg_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Reg_4));
    }
    NextReg_8 = (MR_Integer) ((MR_Unsigned) Reg_4 + (MR_Unsigned) 1);
    ll_backend__call_gen__extra_livevals_from_3_p_0(NextReg_8, FirstInput_5, &ExtraLiveVals1_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ExtraLiveVals_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ExtraLiveVals1_7));
    }
  }
  else
    *ExtraLiveVals_6 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
ll_backend__call_gen__generic_call_info_8_p_0(
  MR_Word Globals_9,
  MR_Word GenericCall_10,
  MR_Integer NumInputArgsR_11,
  MR_Integer NumInputArgsF_12,
  MR_Word * CodeAddr_13,
  MR_Word * SpecifierArgInfos_14,
  MR_Integer * FirstImmediateInputReg_15,
  MR_Word * HoCallVariant_16)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GenericCall_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_10, (MR_Integer) 0))));
        MR_Integer MaxSpec_22;
        MR_Word Var_43;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (PredVar_17));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[2]));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SpecifierArgInfos_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__globals__lookup_int_option_3_p_0(Globals_9, (MR_Integer) 352, &MaxSpec_22);
        succeeded = (MaxSpec_22 >= (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (NumInputArgsR_11 <= MaxSpec_22);
          if (succeeded)
            succeeded = (NumInputArgsF_12 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word Var_49;

          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (NumInputArgsR_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeAddr_13 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_49));
          }
          *HoCallVariant_16 = (MR_Integer) 0;
          *FirstImmediateInputReg_15 = (MR_Integer) 2;
        }
        else
        {
          *CodeAddr_13 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[4]));
          *HoCallVariant_16 = (MR_Integer) 1;
          *FirstImmediateInputReg_15 = (MR_Integer) 3;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCVar_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCall_10, (MR_Integer) 0))));
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (TCVar_23));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[2]));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SpecifierArgInfos_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = (NumInputArgsF_12 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Integer MaxSpec_51;

          libs__globals__lookup_int_option_3_p_0(Globals_9, (MR_Integer) 353, &MaxSpec_51);
          succeeded = (MaxSpec_51 >= (MR_Integer) 0);
          if (succeeded)
            succeeded = (NumInputArgsR_11 <= MaxSpec_51);
          if (succeeded)
          {
            MR_Word Var_37;

            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (NumInputArgsR_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *CodeAddr_13 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_37));
            }
            *HoCallVariant_16 = (MR_Integer) 0;
            *FirstImmediateInputReg_15 = (MR_Integer) 3;
          }
          else
          {
            *CodeAddr_13 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[3]));
            *HoCallVariant_16 = (MR_Integer) 1;
            *FirstImmediateInputReg_15 = (MR_Integer) 4;
          }
        }
        else
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generic_call_info\'/8", (MR_String) "float reg inputs");
            return;
          }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        *CodeAddr_13 = (MR_Word) ((MR_Unsigned) 20U);
        *SpecifierArgInfos_14 = (MR_Word) ((MR_Unsigned) 0U);
        *FirstImmediateInputReg_15 = (MR_Integer) 1;
        *HoCallVariant_16 = (MR_Integer) 1;
      }
      break;
  }
}

static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_3));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Int_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Var_5;

        {
          Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (Int_4));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned UInt_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Var_7;

        {
          Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_7, 0) = ((MR_Box) (UInt_6));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_7));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            int8_t Int8_8 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_9;

            {
              Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (MR_Word) (Int8_8));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_9));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            uint8_t UInt8_10 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_11;

            {
              Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (MR_Word) (UInt8_10));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_11));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            int16_t Int16_12 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_13;

            {
              Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (MR_Word) (Int16_12));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_13));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            uint16_t UInt16_14 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_15;

            {
              Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (MR_Word) (UInt16_14));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_15));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            int32_t Int32_16 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_17;

            {
              Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (MR_Word) (Int32_16));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_17));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            uint32_t UInt32_18 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_19;

            {
              Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (MR_Word) (UInt32_18));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_19));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            int64_t Int64_20 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_21;

            {
              Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Var_21, 1) = MR_box_int64(Int64_20);
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_21));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            uint64_t UInt64_22 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_23;

            {
              Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_23, 1) = MR_box_uint64(UInt64_22);
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_23));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Float Float_24 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_25;

            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_25, 1) = MR_box_float(Float_24);
            }
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_25));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word UnOp_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Expr_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word Var_28;

            Var_28 = ll_backend__call_gen__convert_simple_expr_1_f_0(Expr_27);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (UnOp_26));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) (Var_28));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word BinOp_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Expr1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word Expr2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word Var_32;
            MR_Word Var_33;

            Var_32 = ll_backend__call_gen__convert_simple_expr_1_f_0(Expr1_30);
            Var_33 = ll_backend__call_gen__convert_simple_expr_1_f_0(Expr2_31);
            {
              HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (BinOp_29));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(3), HeadVar__2_2, 3) = ((MR_Box) (Var_33));
            }
          }
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

void MR_CALL 
ll_backend__call_gen__generate_call_10_p_0(
  MR_Word CodeModel_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word ArgVars_14,
  MR_Word GoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_48,
  MR_Word * STATE_VARIABLE_CI_49,
  MR_Word STATE_VARIABLE_CLD_0_50,
  MR_Word * STATE_VARIABLE_CLD_51)
{
  MR_bool succeeded;
  MR_Word ArgInfo_19;
  MR_Word ArgsInfos_20;
  MR_Word LiveVals_21;
  MR_Word SetupCode_22;
  MR_Word CallModel_24;
  MR_Word TraceResetCode_25;
  MR_Word ModuleInfo_26;
  MR_Word Address_27;
  MR_Word ReturnLabel_28;
  MR_String CallComment_29;
  MR_Word Context_30;
  MR_Word GoalId_31;
  MR_Word MaybeContainingGoalMap_32;
  MR_Word MaybeGoalPath_35;
  MR_Word CallCode_36;
  MR_Word ReturnLiveLvalues_37;
  MR_Word InstMap_38;
  MR_Word InstMapDelta_39;
  MR_Word ReturnInstMap_40;
  MR_Word AfterReturn_41;
  MR_Word FailHandlingCode_42;
  MR_Word STATE_VARIABLE_CLD_52_52;
  MR_Word STATE_VARIABLE_CLD_53_53;
  MR_Word STATE_VARIABLE_CI_54_54;
  MR_Word STATE_VARIABLE_CLD_55_55;
  MR_Word STATE_VARIABLE_CI_57_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_CLD_71_71;
  MR_Word STATE_VARIABLE_CI_72_72;
  MR_Word STATE_VARIABLE_CLD_73_73;
  MR_Word NonLiveOutputs_23;
  MR_Word TraceInfo_44;
  MR_Word MaybeTraceInfo_43;

  ArgInfo_19 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(STATE_VARIABLE_CI_0_48, PredId_12, ProcId_13);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), ArgVars_14, ArgInfo_19, &ArgsInfos_20);
  ll_backend__code_loc_dep__setup_call_7_p_0(GoalInfo_15, ArgsInfos_20, &LiveVals_21, &SetupCode_22, STATE_VARIABLE_CI_0_48, STATE_VARIABLE_CLD_0_50, &STATE_VARIABLE_CLD_52_52);
  ll_backend__call_gen__kill_dead_input_vars_5_p_0(ArgsInfos_20, GoalInfo_15, &NonLiveOutputs_23, STATE_VARIABLE_CLD_52_52, &STATE_VARIABLE_CLD_53_53);
  ll_backend__call_gen__prepare_for_call_8_p_0(CodeModel_11, GoalInfo_15, &CallModel_24, &TraceResetCode_25, STATE_VARIABLE_CI_0_48, &STATE_VARIABLE_CI_54_54, STATE_VARIABLE_CLD_53_53, &STATE_VARIABLE_CLD_55_55);
  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_54_54, &ModuleInfo_26);
  Address_27 = ll_backend__code_info__make_proc_entry_label_5_f_0(STATE_VARIABLE_CI_54_54, ModuleInfo_26, PredId_12, ProcId_13, (MR_Integer) 0);
  ll_backend__code_info__get_next_label_3_p_0(&ReturnLabel_28, STATE_VARIABLE_CI_54_54, &STATE_VARIABLE_CI_57_57);
  ll_backend__call_gen__call_comment_4_p_0(STATE_VARIABLE_CI_57_57, PredId_12, CodeModel_11, &CallComment_29);
  Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
  GoalId_31 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_15);
  ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(STATE_VARIABLE_CI_57_57, &MaybeContainingGoalMap_32);
  if ((MaybeContainingGoalMap_32 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeGoalPath_35 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ContainingGoalMap_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeContainingGoalMap_32, (MR_Integer) 0))));
    MR_Word GoalPath_34;

    GoalPath_34 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_33, GoalId_31);
    {
      MaybeGoalPath_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeGoalPath_35, 0) = ((MR_Box) (GoalPath_34));
    }
  }
  {
    Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (LiveVals_21));
  }
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ReturnLabel_28));
  }
  {
    Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (ReturnLabel_28));
  }
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) ((MR_String) "continuation label"));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_55_55, &InstMap_38);
  InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_15);
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_39, InstMap_38, &ReturnInstMap_40);
  ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(ArgsInfos_20, GoalInfo_15, ReturnInstMap_40, &ReturnLiveLvalues_37, STATE_VARIABLE_CI_57_57, STATE_VARIABLE_CLD_55_55, &STATE_VARIABLE_CLD_71_71);
  {
    Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Address_27));
    MR_hl_field(MR_mktag(3), Var_64, 2) = ((MR_Box) (Var_65));
    MR_hl_field(MR_mktag(3), Var_64, 3) = ((MR_Box) (ReturnLiveLvalues_37));
    MR_hl_field(MR_mktag(3), Var_64, 4) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(3), Var_64, 5) = ((MR_Box) (MaybeGoalPath_35));
    MR_hl_field(MR_mktag(3), Var_64, 6) = ((MR_Box) (CallModel_24));
  }
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (CallComment_29));
  }
  {
    Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_62));
  }
  CallCode_36 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_58);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_71_71, &AfterReturn_41);
  ll_backend__call_gen__handle_call_failure_6_p_0(CodeModel_11, GoalInfo_15, &FailHandlingCode_42, STATE_VARIABLE_CI_57_57, &STATE_VARIABLE_CI_72_72, STATE_VARIABLE_CLD_71_71);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterReturn_41, STATE_VARIABLE_CI_72_72, &STATE_VARIABLE_CLD_73_73);
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_15, (MR_Integer) 10);
  if (succeeded)
  {
    ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_72_72, &MaybeTraceInfo_43);
    succeeded = (MaybeTraceInfo_43 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      TraceInfo_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceInfo_43, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word TraceTailRecResetAndEventCode_45;
    MR_Word TailRecLabel_46;
    MR_Word JumpCode_47;
    MR_Word Var_77;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_87;

    ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(TraceInfo_44, ArgsInfos_20, GoalId_31, Context_30, &TraceTailRecResetAndEventCode_45, &TailRecLabel_46, STATE_VARIABLE_CI_72_72, STATE_VARIABLE_CI_49, STATE_VARIABLE_CLD_73_73, STATE_VARIABLE_CLD_51);
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (TailRecLabel_46));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_String) "tail recursive jump"));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_81));
    }
    JumpCode_47 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_77);
    Var_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceTailRecResetAndEventCode_45, JumpCode_47);
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetupCode_22, Var_87);
  }
  else
  {
    MR_Word Var_88;
    MR_Word Var_89;

    Var_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CallCode_36, FailHandlingCode_42);
    Var_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceResetCode_25, Var_89);
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetupCode_22, Var_88);
    *STATE_VARIABLE_CLD_51 = STATE_VARIABLE_CLD_73_73;
    *STATE_VARIABLE_CI_49 = STATE_VARIABLE_CI_72_72;
  }
}

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(
  MR_Word ArgsInfos_9,
  MR_Word GoalInfo_10,
  MR_Word ReturnInstMap_12,
  MR_Word * ReturnLiveLvalues_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21)
{
  MR_bool succeeded;
  MR_Word InstMapDelta_16;
  MR_Word OkToDeleteAny_17;
  MR_Word Liveness_18;
  MR_Word OutputArgLocs_19;
  MR_Word STATE_VARIABLE_CLD_22_22;

  InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_10);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_16);
  if (succeeded)
    OkToDeleteAny_17 = (MR_Integer) 0;
  else
    OkToDeleteAny_17 = (MR_Integer) 1;
  ll_backend__code_loc_dep__clear_all_registers_3_p_0(OkToDeleteAny_17, STATE_VARIABLE_CLD_0_20, &STATE_VARIABLE_CLD_22_22);
  ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_22_22, &Liveness_18);
  ll_backend__call_gen__rebuild_registers_5_p_0(ArgsInfos_9, Liveness_18, &OutputArgLocs_19, STATE_VARIABLE_CLD_22_22, STATE_VARIABLE_CLD_21);
  ll_backend__code_loc_dep__generate_return_live_lvalues_6_p_0(CI_14, *STATE_VARIABLE_CLD_21, OutputArgLocs_19, ReturnInstMap_12, OkToDeleteAny_17, ReturnLiveLvalues_13);
}

static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Liveness_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_4,
  MR_Word * STATE_VARIABLE_CLD_5)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CLD_5 = STATE_VARIABLE_CLD_0_4;
  }
  else
  {
    MR_Word Var_10;
    MR_Word ArgLoc_11;
    MR_Word Mode_12;
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word OutputArgLocs1_17;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_CLD_23_23;
    MR_Word TypeCtorInfo_26_26;

    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
    ArgLoc_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
    Mode_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))) & (MR_Integer) 3);
    ll_backend__call_gen__rebuild_registers_5_p_0(Args_13, Liveness_2, &OutputArgLocs1_17, STATE_VARIABLE_CLD_0_4, &STATE_VARIABLE_CLD_23_23);
    succeeded = (Mode_12 == (MR_Integer) 1);
    if (succeeded)
    {
      TypeCtorInfo_26_26 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_26_26, Liveness_2, Var_10);
    }
    if (succeeded)
    {
      MR_Word Register_18;
      MR_Word Var_25;

      ll_backend__code_util__arg_loc_to_register_2_p_0(ArgLoc_11, &Register_18);
      ll_backend__code_loc_dep__set_var_location_4_p_0(Var_10, Register_18, STATE_VARIABLE_CLD_23_23, STATE_VARIABLE_CLD_5);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ArgLoc_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutputArgLocs1_17));
      }
    }
    else
    {
      *HeadVar__3_3 = OutputArgLocs1_17;
      *STATE_VARIABLE_CLD_5 = STATE_VARIABLE_CLD_23_23;
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
  MR_Word ArgsInfos_6,
  MR_Word GoalInfo_7,
  MR_Word * NonLiveOutputs_8,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14)
{
  MR_Word Liveness_10;
  MR_Word PostDeaths_11;
  MR_Word ImmediatePostDeaths_12;
  MR_Word Var_15;

  ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_0_13, &Liveness_10);
  Var_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  ll_backend__call_gen__find_nonlive_outputs_4_p_0(ArgsInfos_6, Liveness_10, Var_15, NonLiveOutputs_8);
  hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_7, &PostDeaths_11);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths_11, *NonLiveOutputs_8, &ImmediatePostDeaths_12);
  ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ImmediatePostDeaths_12, STATE_VARIABLE_CLD_0_13, STATE_VARIABLE_CLD_14);
}

static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Liveness_2,
  MR_Word STATE_VARIABLE_NonLiveOutputs_0_3,
  MR_Word * STATE_VARIABLE_NonLiveOutputs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_NonLiveOutputs_4 = STATE_VARIABLE_NonLiveOutputs_0_3;
    else
    {
      MR_Word Var_9;
      MR_Word Mode_11;
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_NonLiveOutputs_19_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_NonLiveOutputs_0_3;

      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      Mode_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))) & (MR_Integer) 3);
      switch (Mode_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_NonLiveOutputs_19_19 = STATE_VARIABLE_NonLiveOutputs_0_3;
          break;
        case (MR_Integer) 1:
          {
            succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_2, Var_9);
            if (succeeded)
              STATE_VARIABLE_NonLiveOutputs_19_19 = STATE_VARIABLE_NonLiveOutputs_0_3;
            else
              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, STATE_VARIABLE_NonLiveOutputs_0_3, &STATE_VARIABLE_NonLiveOutputs_19_19);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_NonLiveOutputs_19_19 = STATE_VARIABLE_NonLiveOutputs_0_3;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_12;
      next_value_of_STATE_VARIABLE_NonLiveOutputs_0_3 = STATE_VARIABLE_NonLiveOutputs_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NonLiveOutputs_0_3 = next_value_of_STATE_VARIABLE_NonLiveOutputs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
  MR_Word CI_5,
  MR_Word PredId_6,
  MR_Word CodeModel_7,
  MR_String * Msg_8)
{
  MR_String BaseMsg_9;
  MR_Word AutoComments_10;

  switch (CodeModel_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      BaseMsg_9 = (MR_String) "branch to det procedure";
      break;
    case (MR_Integer) 2:
      BaseMsg_9 = (MR_String) "branch to nondet procedure";
      break;
    case (MR_Integer) 1:
      BaseMsg_9 = (MR_String) "branch to semidet procedure";
      break;
  }
  ll_backend__code_info__get_auto_comments_2_p_0(CI_5, &AutoComments_10);
  switch (AutoComments_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_8 = BaseMsg_9;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_11;
        MR_Word PredInfo_12;
        MR_String PredName_13;
        MR_String Var_14;

        ll_backend__code_info__get_module_info_2_p_0(CI_5, &ModuleInfo_11);
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, PredId_6, &PredInfo_12);
        PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
        Var_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", PredName_13);
        *Msg_8 = mercury__string__f_43_43_2_f_0(BaseMsg_9, Var_14);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__call_gen__handle_call_failure_6_p_0(
  MR_Word CodeModel_7,
  MR_Word GoalInfo_8,
  MR_Word * FailHandlingCode_9,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18,
  MR_Word STATE_VARIABLE_CLD_0_19)
{
  MR_bool succeeded;

  switch (CodeModel_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        *FailHandlingCode_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CI_18 = STATE_VARIABLE_CI_0_17;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Detism_12;

        Detism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
        succeeded = (Detism_12 == (MR_Integer) 7);
        if (succeeded)
          ll_backend__code_loc_dep__generate_failure_4_p_0(FailHandlingCode_9, STATE_VARIABLE_CI_0_17, STATE_VARIABLE_CI_18, STATE_VARIABLE_CLD_0_19);
        else
        {
          MR_Word ContLab_13;
          MR_Word FailTestCode_14;
          MR_Word FailCode_15;
          MR_Word ContLabelCode_16;
          MR_Word STATE_VARIABLE_CI_21_21;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_28;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_34;

          ll_backend__code_info__get_next_label_3_p_0(&ContLab_13, STATE_VARIABLE_CI_0_17, &STATE_VARIABLE_CI_21_21);
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ContLab_13));
          }
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_3[1]));
            MR_hl_field(MR_mktag(3), Var_23, 2) = ((MR_Box) (Var_28));
          }
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) ((MR_String) "test for success"));
          }
          FailTestCode_14 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_22)));
          ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_15, STATE_VARIABLE_CI_21_21, STATE_VARIABLE_CI_18, STATE_VARIABLE_CLD_0_19);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (ContLab_13));
          }
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_String) ""));
          }
          ContLabelCode_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_31)));
          Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_15, ContLabelCode_16);
          *FailHandlingCode_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailTestCode_14, Var_34);
        }
      }
      break;
  }
}

static void MR_CALL 
ll_backend__call_gen__prepare_for_call_8_p_0(
  MR_Word CodeModel_9,
  MR_Word GoalInfo_10,
  MR_Word * CallModel_11,
  MR_Word * TraceCode_12,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18,
  MR_Word STATE_VARIABLE_CLD_0_19,
  MR_Word * STATE_VARIABLE_CLD_20)
{
  MR_bool succeeded;
  MR_Word AllowLCO_15;

  ll_backend__code_info__succip_is_used_2_p_0(STATE_VARIABLE_CI_0_17, STATE_VARIABLE_CI_18);
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_10, (MR_Integer) 25);
  if (succeeded)
    AllowLCO_15 = (MR_Integer) 0;
  else
    AllowLCO_15 = (MR_Integer) 1;
  switch (CodeModel_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *CallModel_11 = base;
          MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (AllowLCO_15));
        }
        *STATE_VARIABLE_CLD_20 = STATE_VARIABLE_CLD_0_19;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TailCallStatus_16;

        ll_backend__code_loc_dep__may_use_nondet_tailcall_2_p_0(STATE_VARIABLE_CLD_0_19, &TailCallStatus_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *CallModel_11 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (TailCallStatus_16));
        }
        ll_backend__code_loc_dep__set_resume_point_and_frame_to_unknown_2_p_0(STATE_VARIABLE_CLD_0_19, STATE_VARIABLE_CLD_20);
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *CallModel_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (AllowLCO_15));
        }
        *STATE_VARIABLE_CLD_20 = STATE_VARIABLE_CLD_0_19;
      }
      break;
  }
  ll_backend__trace_gen__trace_prepare_for_call_2_p_0(*STATE_VARIABLE_CI_18, TraceCode_12);
}

static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__call_gen____Unify____known_call_variant_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__call_gen____Compare____known_call_variant_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__call_gen__init(void)
{
}

void mercury__ll_backend__call_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__call_gen__ll_backend__call_gen__type_ctor_info_known_call_variant_0);
}

void mercury__ll_backend__call_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__call_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.call_gen.
