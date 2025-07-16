/*
** Automatically generated from `call_gen.m'
** by the Mercury compiler,
** version rotd-2025-07-16
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
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




static const MR_FA_TypeInfo_Struct1 ll_backend__call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0;

static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1;

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_ordinal_ordered_known_call_variant_0[2];

static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2];

static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2];

static MR_bool MR_CALL 
ll_backend__call_gen__IntroducedFrom__pred__generate_builtin__722__1_2_p_0(
  MR_Word NonLocals_73,
  MR_Word HeadVar__2_78);

static void MR_CALL 
ll_backend__call_gen__generate_builtin_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__call_gen__generate_builtin_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word ArgVars_15,
  MR_Word Modes_16,
  MR_Word MaybeRegTypes_17,
  MR_Word Det_18,
  MR_Word GoalInfo_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68,
  MR_Word STATE_VARIABLE_CLD_0_69,
  MR_Word * STATE_VARIABLE_CLD_70);

static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
  MR_Word ArgsInfos_6,
  MR_Word GoalInfo_7,
  MR_Word * NonLiveOutputs_8,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14);

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

static void MR_CALL 
ll_backend__call_gen__generate_assign_builtin_5_p_0(
  MR_Word Var_6,
  MR_Word AssignedExpr_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12);

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
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Liveness_2,
  MR_Word STATE_VARIABLE_NonLiveOutputs_0_3,
  MR_Word * STATE_VARIABLE_NonLiveOutputs_4);

static void MR_CALL 
ll_backend__call_gen__handle_call_failure_6_p_0(
  MR_Word CodeModel_7,
  MR_Word GoalInfo_8,
  MR_Word * FailHandlingCode_9,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18,
  MR_Word CLD_11);

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

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[3][1];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[1][5];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_5[1][6];




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
    ((MR_Box) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[7])))
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
    ((MR_Box) (&ll_backend__call_gen_scalar_common_5[0])),
    ((MR_Box) (ll_backend__call_gen__generate_builtin_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) (&ll_backend__call_gen_scalar_common_3[0])) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[1]))) },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__call_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_5[1][6] = {
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
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 ll_backend__call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&ll_backend__call_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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

static MR_bool MR_CALL 
ll_backend__call_gen__IntroducedFrom__pred__generate_builtin__722__1_2_p_0(
  MR_Word NonLocals_73,
  MR_Word HeadVar__2_78)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_73, HeadVar__2_78);
  return succeeded;
}

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

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
    MR_Word Args_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Vs0_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_10;

    Var_3 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
    Loc_4 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
    Mode_5 = ((MR_Unsigned) ((MR_hl_field(0, Var_10, 1))) & (MR_Integer) 3);
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
            MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_3));
            MR_hl_field(0, Var_11, 1) = ((MR_Box) (Loc_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
            MR_hl_field(1, base, 1) = ((MR_Box) (Vs0_8));
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
    MR_Word Args_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Vs0_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_10;

    Var_3 = ((MR_Word) ((MR_hl_field(0, Var_9, 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, Var_9, 1))));
    Loc_4 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
    Mode_5 = ((MR_Unsigned) ((MR_hl_field(0, Var_10, 1))) & (MR_Integer) 3);
    ll_backend__call_gen__input_arg_locs_2_p_0(Args_6, &Vs0_8);
    switch (Mode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_11;

          {
            Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_3));
            MR_hl_field(0, Var_11, 1) = ((MR_Box) (Loc_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
            MR_hl_field(1, base, 1) = ((MR_Box) (Vs0_8));
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
ll_backend__call_gen__generate_builtin_10_p_0_2(
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

static MR_bool MR_CALL 
ll_backend__call_gen__generate_builtin_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__call_gen__IntroducedFrom__pred__generate_builtin__722__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
ll_backend__call_gen__generate_builtin_10_p_0(
  MR_Word CodeModel_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Args_14,
  MR_Word GoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_46,
  MR_Word * STATE_VARIABLE_CI_47,
  MR_Word STATE_VARIABLE_CLD_0_48,
  MR_Word * STATE_VARIABLE_CLD_49)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_19;
  MR_Word ModuleName_20;
  MR_String PredName_21;
  MR_Word SimpleCode_22;

  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_46, &ModuleInfo_19);
  ModuleName_20 = hlds__hlds_module__predicate_module_2_f_0(ModuleInfo_19, PredId_12);
  PredName_21 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_19, PredId_12);
  backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), ModuleName_20, PredName_21, ProcId_13, Args_14, &SimpleCode_22);
  switch (CodeModel_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        switch (MR_tag((MR_Word) SimpleCode_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, SimpleCode_22, 0))));
              MR_Word AssignExpr_24 = ((MR_Word) ((MR_hl_field(0, SimpleCode_22, 1))));
              MR_Word NonLocals_25;

              NonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_15);
              succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_25, Var_23);
              if (succeeded)
                ll_backend__call_gen__generate_assign_builtin_5_p_0(Var_23, AssignExpr_24, Code_16, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
              else
              {
                *Code_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                *STATE_VARIABLE_CLD_49 = STATE_VARIABLE_CLD_0_48;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AddrVar_26 = ((MR_Word) ((MR_hl_field(1, SimpleCode_22, 0))));
              MR_Word ValueVar_27 = ((MR_Word) ((MR_hl_field(1, SimpleCode_22, 1))));
              MR_Word AddrVarCode_28;
              MR_Word AddrRval_29;
              MR_Word ValueVarCode_30;
              MR_Word ValueRval_31;
              MR_Word StoreInstr_32;
              MR_Word StoreCode_33;
              MR_Word STATE_VARIABLE_CLD_2_51;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_56;

              ll_backend__code_loc_dep__produce_variable_5_p_0(AddrVar_26, &AddrVarCode_28, &AddrRval_29, STATE_VARIABLE_CLD_0_48, &STATE_VARIABLE_CLD_2_51);
              ll_backend__code_loc_dep__produce_variable_5_p_0(ValueVar_27, &ValueVarCode_30, &ValueRval_31, STATE_VARIABLE_CLD_2_51, STATE_VARIABLE_CLD_49);
              {
                Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(3, Var_54, 1) = ((MR_Box) (AddrRval_29));
              }
              {
                Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_54));
                MR_hl_field(3, Var_53, 2) = ((MR_Box) (ValueRval_31));
              }
              {
                StoreInstr_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, StoreInstr_32, 0) = ((MR_Box) (Var_53));
                MR_hl_field(0, StoreInstr_32, 1) = ((MR_Box) ((MR_String) ""));
              }
              StoreCode_33 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (StoreInstr_32)));
              Var_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ValueVarCode_30, StoreCode_33);
              *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AddrVarCode_28, Var_56);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/10", (MR_String) "malformed model_det builtin predicate");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word DefinedVars_35 = ((MR_Word) ((MR_hl_field(3, SimpleCode_22, 0))));
              MR_Word UsedDefinedVars_36;
              MR_Word Var_59;
              MR_Word NonLocals_73;
              MR_Box conv1_STATE_VARIABLE_CLD_49;

              NonLocals_73 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_15);
              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ll_backend__call_gen_scalar_common_4[0]));
                MR_hl_field(0, Var_59, 1) = ((MR_Box) (ll_backend__call_gen__generate_builtin_10_p_0_1));
                MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_59, 3) = ((MR_Box) (NonLocals_73));
              }
              mercury__list__filter_3_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), Var_59, DefinedVars_35, &UsedDefinedVars_36);
              mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0), (MR_Word) (&ll_backend__call_gen_scalar_common_2[1]), UsedDefinedVars_36, ((MR_Box) (STATE_VARIABLE_CLD_0_48)), &conv1_STATE_VARIABLE_CLD_49);
              *STATE_VARIABLE_CLD_49 = ((MR_Word) (conv1_STATE_VARIABLE_CLD_49));
              *Code_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            break;
        }
        *STATE_VARIABLE_CI_47 = STATE_VARIABLE_CI_0_46;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/10", (MR_String) "model_non builtin predicate");
        return;
      }
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) SimpleCode_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/10", (MR_String) "malformed model_semi builtin predicate");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/10", (MR_String) "malformed model_semi builtin predicate");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TestExpr_37 = ((MR_Word) ((MR_hl_field(2, SimpleCode_22, 0))));
            MR_Word Rval_38;
            MR_Word ArgCode_39;
            MR_Word TestCode_40;
            MR_Word STATE_VARIABLE_CLD_5_62;
            MR_Word BinOp_86 = ((MR_Word) ((MR_hl_field(0, TestExpr_37, 0))));
            MR_Word VarX_87 = ((MR_Word) ((MR_hl_field(0, TestExpr_37, 1))));
            MR_Word VarY_88 = ((MR_Word) ((MR_hl_field(0, TestExpr_37, 2))));
            MR_Word CodeX_89;
            MR_Word RvalX_90;
            MR_Word CodeY_91;
            MR_Word RvalY_92;
            MR_Word STATE_VARIABLE_CLD_1_93;

            ll_backend__code_loc_dep__produce_variable_5_p_0(VarX_87, &CodeX_89, &RvalX_90, STATE_VARIABLE_CLD_0_48, &STATE_VARIABLE_CLD_1_93);
            ll_backend__code_loc_dep__produce_variable_5_p_0(VarY_88, &CodeY_91, &RvalY_92, STATE_VARIABLE_CLD_1_93, &STATE_VARIABLE_CLD_5_62);
            {
              Rval_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Rval_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Rval_38, 1) = ((MR_Box) (BinOp_86));
              MR_hl_field(3, Rval_38, 2) = ((MR_Box) (RvalX_90));
              MR_hl_field(3, Rval_38, 3) = ((MR_Box) (RvalY_92));
            }
            ArgCode_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeX_89, CodeY_91);
            ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(Rval_38, &TestCode_40, STATE_VARIABLE_CI_0_46, STATE_VARIABLE_CI_47, STATE_VARIABLE_CLD_5_62, STATE_VARIABLE_CLD_49);
            *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ArgCode_39, TestCode_40);
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/10", (MR_String) "malformed model_semi builtin predicate");
            return;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__call_gen__generate_generic_call_12_p_0(
  MR_Word OuterCodeModel_13,
  MR_Word GenericCall_14,
  MR_Word ArgVars_15,
  MR_Word Modes_16,
  MR_Word MaybeRegTypes_17,
  MR_Word Det_18,
  MR_Word GoalInfo_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_40,
  MR_Word * STATE_VARIABLE_CI_41,
  MR_Word STATE_VARIABLE_CLD_0_42,
  MR_Word * STATE_VARIABLE_CLD_43)
{
  ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(GenericCall_14, ArgVars_15, Modes_16, MaybeRegTypes_17, Det_18, GoalInfo_19, Code_20, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CI_41, STATE_VARIABLE_CLD_0_42, STATE_VARIABLE_CLD_43);
}

void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
  MR_Word GenericCall_14,
  MR_Word ArgVars_15,
  MR_Word Modes_16,
  MR_Word MaybeRegTypes_17,
  MR_Word Det_18,
  MR_Word GoalInfo_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_40,
  MR_Word * STATE_VARIABLE_CI_41,
  MR_Word STATE_VARIABLE_CLD_0_42,
  MR_Word * STATE_VARIABLE_CLD_43)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GenericCall_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(GenericCall_14, ArgVars_15, Modes_16, MaybeRegTypes_17, Det_18, GoalInfo_19, Code_20, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CI_41, STATE_VARIABLE_CLD_0_42, STATE_VARIABLE_CLD_43);
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_32 = ((MR_String) ((MR_hl_field(2, GenericCall_14, 0))));
        MR_Word ModuleInfo_57;
        MR_Word EventSet_58;
        MR_Word EventSpecMap_59;
        MR_Word Attributes_60;
        MR_Integer EventNumber_61;

        ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_40, &ModuleInfo_57);
        hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_57, &EventSet_58);
        EventSpecMap_59 = ((MR_Word) ((MR_hl_field(0, EventSet_58, 1))));
        succeeded = parse_tree__prog_event__event_attributes_3_p_0(EventSpecMap_59, EventName_32, &Attributes_60);
        if (succeeded)
          succeeded = parse_tree__prog_event__event_number_3_p_0(EventSpecMap_59, EventName_32, &EventNumber_61);
        if (succeeded)
        {
          MR_Word MaybeUserAttributes_62;
          MR_Word AttrCodes_63;
          MR_Word UserEventInfo_64;
          MR_Word EventCode_65;
          MR_Word STATE_VARIABLE_CLD_1_66;
          MR_Word Var_67;

          ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_101_118_101_110_116_95_97_116_116_114_105_98_117_116_101_115_95_95_91_53_93_95_48_7_p_0(Attributes_60, ArgVars_15, &MaybeUserAttributes_62, &AttrCodes_63, STATE_VARIABLE_CLD_0_42, &STATE_VARIABLE_CLD_1_66);
          {
            UserEventInfo_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, UserEventInfo_64, 0) = ((MR_Box) (EventNumber_61));
            MR_hl_field(0, UserEventInfo_64, 1) = ((MR_Box) (MaybeUserAttributes_62));
          }
          ll_backend__trace_gen__generate_user_event_code_7_p_0(UserEventInfo_64, GoalInfo_19, &EventCode_65, STATE_VARIABLE_CI_0_40, STATE_VARIABLE_CI_41, STATE_VARIABLE_CLD_1_66, STATE_VARIABLE_CLD_43);
          Var_67 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AttrCodes_63);
          *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_67, EventCode_65);
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
        MR_Word InputArgVar_34;
        MR_Word OutputArgVar_35;
        MR_Word Var_48;
        MR_Word Var_49;

        succeeded = (ArgVars_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InputArgVar_34 = ((MR_Word) ((MR_hl_field(1, ArgVars_15, 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(1, ArgVars_15, 1))));
          succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OutputArgVar_35 = ((MR_Word) ((MR_hl_field(1, Var_48, 0))));
            Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, 1))));
            succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Word VarTable_36;
          MR_Word InputArgEntry_37;
          MR_Word InputArgVarIsDummy_38;
          MR_Word Assigned_39;

          ll_backend__code_info__get_var_table_2_p_0(STATE_VARIABLE_CI_0_40, &VarTable_36);
          parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_36, InputArgVar_34, &InputArgEntry_37);
          InputArgVarIsDummy_38 = ((MR_Unsigned) ((MR_hl_field(0, InputArgEntry_37, 2))) & (MR_Integer) 1);
          switch (InputArgVarIsDummy_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Assigned_39 = (MR_Word) (MR_mkword(1, &ll_backend__call_gen_scalar_common_3[1]));
              break;
            case (MR_Integer) 1:
              {
                Assigned_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Assigned_39, 0) = ((MR_Box) (InputArgVar_34));
              }
              break;
          }
          ll_backend__call_gen__generate_assign_builtin_5_p_0(OutputArgVar_35, Assigned_39, Code_20, STATE_VARIABLE_CLD_0_42, STATE_VARIABLE_CLD_43);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_generic_call\'/12", (MR_String) "invalid type/inst cast call");
            return;
          }
        *STATE_VARIABLE_CI_41 = STATE_VARIABLE_CI_0_40;
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
    MR_Word Attribute_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Attributes_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word MaybeUserAttr_21;
    MR_Word MaybeUserAttrs_22;
    MR_Word Code_23;
    MR_Word Codes_24;
    MR_Word SynthCall_27 = ((MR_Word) ((MR_hl_field(0, Attribute_18, 4))));
    MR_Word STATE_VARIABLE_Vars_1_35;
    MR_Word STATE_VARIABLE_CLD_1_36;

    if ((SynthCall_27 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((STATE_VARIABLE_Vars_0_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/7", (MR_String) "no var");
          return;
        }
      else
      {
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Vars_0_2, 0))));
        MR_Word Rval_29;
        MR_Word UserAttr_30;

        STATE_VARIABLE_Vars_1_35 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Vars_0_2, 1))));
        ll_backend__code_loc_dep__produce_variable_5_p_0(Var_28, &Code_23, &Rval_29, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_1_36);
        {
          UserAttr_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UserAttr_30, 0) = ((MR_Box) (Rval_29));
          MR_hl_field(0, UserAttr_30, 1) = ((MR_Box) (Var_28));
        }
        {
          MaybeUserAttr_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeUserAttr_21, 0) = ((MR_Box) (UserAttr_30));
        }
      }
    else
    {
      MaybeUserAttr_21 = (MR_Word) ((MR_Unsigned) 0U);
      Code_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      STATE_VARIABLE_Vars_1_35 = STATE_VARIABLE_Vars_0_2;
      STATE_VARIABLE_CLD_1_36 = STATE_VARIABLE_CLD_0_6;
    }
    ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_101_118_101_110_116_95_97_116_116_114_105_98_117_116_101_115_95_95_91_53_93_95_48_7_p_0(Attributes_19, STATE_VARIABLE_Vars_1_35, &MaybeUserAttrs_22, &Codes_24, STATE_VARIABLE_CLD_1_36, STATE_VARIABLE_CLD_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MaybeUserAttr_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (MaybeUserAttrs_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Code_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (Codes_24));
    }
  }
}

static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
  MR_Word GenericCall_14,
  MR_Word ArgVars_15,
  MR_Word Modes_16,
  MR_Word MaybeRegTypes_17,
  MR_Word Det_18,
  MR_Word GoalInfo_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68,
  MR_Word STATE_VARIABLE_CLD_0_69,
  MR_Word * STATE_VARIABLE_CLD_70)
{
  MR_Word ModuleInfo_23;
  MR_Word ArgRegTypes_24;
  MR_Word VarTable_25;
  MR_Word InVarsR_26;
  MR_Word InVarsF_27;
  MR_Word OutVarsR_28;
  MR_Word OutVarsF_29;
  MR_Word Globals_30;
  MR_Word CodeAddr_31;
  MR_Word SpecifierArgInfos_32;
  MR_Integer FirstImmInputR_33;
  MR_Word HoCallVariant_34;
  MR_Word CodeModel_36;
  MR_Integer FirstOutputR_37;
  MR_Word InVarArgInfosR_39;
  MR_Word InVarArgInfosF_40;
  MR_Word OutArgsInfosR_41;
  MR_Word OutArgsInfosF_42;
  MR_Word ArgInfos_43;
  MR_Word LiveVals0_44;
  MR_Word SetupCode_45;
  MR_Word NonVarCode_47;
  MR_Word ExtraLiveVals_48;
  MR_Word LiveVals_49;
  MR_Word CallModel_50;
  MR_Word TraceCode_51;
  MR_Word ReturnLabel_52;
  MR_Word Context_53;
  MR_Word GoalId_54;
  MR_Word InstMap_55;
  MR_Word InstMapDelta_56;
  MR_Word ReturnInstMap_57;
  MR_Word OutArgsInfos_58;
  MR_Word ReturnLiveLvalues_59;
  MR_Word MaybeContainingGoalMap_60;
  MR_Word MaybeGoalPath_63;
  MR_Word CallCode_64;
  MR_Word AfterReturn_65;
  MR_Word FailHandlingCode_66;
  MR_Integer Var_71;
  MR_Integer Var_72;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word STATE_VARIABLE_CLD_1_87;
  MR_Word STATE_VARIABLE_CLD_2_88;
  MR_Word STATE_VARIABLE_CLD_3_89;
  MR_Word STATE_VARIABLE_CI_1_90;
  MR_Word STATE_VARIABLE_CLD_4_91;
  MR_Word STATE_VARIABLE_CI_2_92;
  MR_Word STATE_VARIABLE_CLD_5_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word NonLiveOutputs_46;

  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_67, &ModuleInfo_23);
  hlds__arg_info__generic_call_arg_reg_types_5_p_0(ModuleInfo_23, GenericCall_14, ArgVars_15, MaybeRegTypes_17, &ArgRegTypes_24);
  ll_backend__code_info__get_var_table_2_p_0(STATE_VARIABLE_CI_0_67, &VarTable_25);
  hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ModuleInfo_23, VarTable_25, ArgVars_15, Modes_16, ArgRegTypes_24, &InVarsR_26, &InVarsF_27, &OutVarsR_28, &OutVarsF_29);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_23, &Globals_30);
  Var_71 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsR_26);
  Var_72 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsF_27);
  ll_backend__call_gen__generic_call_info_8_p_0(Globals_30, GenericCall_14, Var_71, Var_72, &CodeAddr_31, &SpecifierArgInfos_32, &FirstImmInputR_33, &HoCallVariant_34);
  hlds__code_model__determinism_to_code_model_2_p_0(Det_18, &CodeModel_36);
  switch (CodeModel_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      FirstOutputR_37 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      FirstOutputR_37 = (MR_Integer) 2;
      break;
  }
  ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(InVarsR_26, (MR_Integer) 0, FirstImmInputR_33, (MR_Integer) 0, &InVarArgInfosR_39);
  ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(InVarsF_27, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 0, &InVarArgInfosF_40);
  ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(OutVarsR_28, (MR_Integer) 0, FirstOutputR_37, (MR_Integer) 1, &OutArgsInfosR_41);
  ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(OutVarsF_29, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, &OutArgsInfosF_42);
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (OutArgsInfosF_42));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (OutArgsInfosR_41));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (InVarArgInfosF_40));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (InVarArgInfosR_39));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (SpecifierArgInfos_32));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_82));
  }
  ArgInfos_43 = mercury__list__condense_1_f_0((MR_Word) (&ll_backend__call_gen_scalar_common_2[0]), Var_81);
  ll_backend__code_loc_dep__setup_call_7_p_0(GoalInfo_19, ArgInfos_43, &LiveVals0_44, &SetupCode_45, STATE_VARIABLE_CI_0_67, STATE_VARIABLE_CLD_0_69, &STATE_VARIABLE_CLD_1_87);
  ll_backend__call_gen__kill_dead_input_vars_5_p_0(ArgInfos_43, GoalInfo_19, &NonLiveOutputs_46, STATE_VARIABLE_CLD_1_87, &STATE_VARIABLE_CLD_2_88);
  ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(GenericCall_14, HoCallVariant_34, InVarsR_26, InVarsF_27, &NonVarCode_47, STATE_VARIABLE_CLD_2_88, &STATE_VARIABLE_CLD_3_89);
  ll_backend__call_gen__extra_livevals_2_p_0(FirstImmInputR_33, &ExtraLiveVals_48);
  mercury__set__insert_list_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ExtraLiveVals_48, LiveVals0_44, &LiveVals_49);
  ll_backend__call_gen__prepare_for_call_8_p_0(CodeModel_36, GoalInfo_19, &CallModel_50, &TraceCode_51, STATE_VARIABLE_CI_0_67, &STATE_VARIABLE_CI_1_90, STATE_VARIABLE_CLD_3_89, &STATE_VARIABLE_CLD_4_91);
  ll_backend__code_info__get_next_label_3_p_0(&ReturnLabel_52, STATE_VARIABLE_CI_1_90, &STATE_VARIABLE_CI_2_92);
  Context_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
  GoalId_54 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_19);
  ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_4_91, &InstMap_55);
  InstMapDelta_56 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_19);
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_56, InstMap_55, &ReturnInstMap_57);
  OutArgsInfos_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__call_gen_scalar_common_2[0]), OutArgsInfosR_41, OutArgsInfosF_42);
  ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(OutArgsInfos_58, GoalInfo_19, ReturnInstMap_57, &ReturnLiveLvalues_59, STATE_VARIABLE_CI_2_92, STATE_VARIABLE_CLD_4_91, &STATE_VARIABLE_CLD_5_93);
  ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(STATE_VARIABLE_CI_2_92, &MaybeContainingGoalMap_60);
  if ((MaybeContainingGoalMap_60 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeGoalPath_63 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ContainingGoalMap_61 = ((MR_Word) ((MR_hl_field(1, MaybeContainingGoalMap_60, 0))));
    MR_Word GoalPath_62;

    GoalPath_62 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_61, GoalId_54);
    {
      MaybeGoalPath_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeGoalPath_63, 0) = ((MR_Box) (GoalPath_62));
    }
  }
  {
    Var_96 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_96, 0) = ((MR_Box) (LiveVals_49));
  }
  {
    Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_95, 0) = ((MR_Box) (Var_96));
    MR_hl_field(0, Var_95, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (ReturnLabel_52));
  }
  {
    Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_100, 1) = ((MR_Box) (CodeAddr_31));
    MR_hl_field(3, Var_100, 2) = ((MR_Box) (Var_101));
    MR_hl_field(3, Var_100, 3) = ((MR_Box) (ReturnLiveLvalues_59));
    MR_hl_field(3, Var_100, 4) = ((MR_Box) (Context_53));
    MR_hl_field(3, Var_100, 5) = ((MR_Box) (MaybeGoalPath_63));
    MR_hl_field(3, Var_100, 6) = ((MR_Box) (CallModel_50));
  }
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_99, 0) = ((MR_Box) (Var_100));
    MR_hl_field(0, Var_99, 1) = ((MR_Box) ((MR_String) "Setup and call"));
  }
  {
    Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_105, 1) = ((MR_Box) (ReturnLabel_52));
  }
  {
    Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_104, 0) = ((MR_Box) (Var_105));
    MR_hl_field(0, Var_104, 1) = ((MR_Box) ((MR_String) "Continuation label"));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_98));
  }
  CallCode_64 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_94);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_5_93, &AfterReturn_65);
  ll_backend__call_gen__handle_call_failure_6_p_0(CodeModel_36, GoalInfo_19, &FailHandlingCode_66, STATE_VARIABLE_CI_2_92, STATE_VARIABLE_CI_68, STATE_VARIABLE_CLD_5_93);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterReturn_65, *STATE_VARIABLE_CI_68, STATE_VARIABLE_CLD_70);
  Var_112 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CallCode_64, FailHandlingCode_66);
  Var_111 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode_51, Var_112);
  Var_110 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NonVarCode_47, Var_111);
  *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetupCode_45, Var_110);
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
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgInfo_14;
    MR_Word ArgInfos_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = (MR_Box) ((MR_Unsigned) (HeadVar__2_2));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (HeadVar__3_3));
    }
    {
      ArgInfo_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArgInfo_14, 0) = ((MR_Box) (Var_17));
      MR_hl_field(0, ArgInfo_14, 1) = (MR_Box) ((MR_Unsigned) (HeadVar__4_4));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (Var_9));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (ArgInfo_14));
    }
    Var_18 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
    ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(Vars_10, HeadVar__2_2, Var_18, HeadVar__4_4, &ArgInfos_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgInfos_15));
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
          MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (AllowLCO_15));
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
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *CallModel_11 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (TailCallStatus_16));
        }
        ll_backend__code_loc_dep__set_resume_point_and_frame_to_unknown_2_p_0(STATE_VARIABLE_CLD_0_19, STATE_VARIABLE_CLD_20);
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *CallModel_11 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (AllowLCO_15));
        }
        *STATE_VARIABLE_CLD_20 = STATE_VARIABLE_CLD_0_19;
      }
      break;
  }
  ll_backend__trace_gen__trace_prepare_for_call_2_p_0(*STATE_VARIABLE_CI_18, TraceCode_12);
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
            MR_Integer NumInVarsR_18;
            MR_Integer NumInVarsF_19;
            MR_Integer NumInVars_20;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Word Var_32;
            MR_Word Var_33;

            ll_backend__code_loc_dep__clobber_reg_3_p_0((MR_Word) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[5])), STATE_VARIABLE_CLD_0_6, STATE_VARIABLE_CLD_7);
            mercury__list__length_2_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsR_3, &NumInVarsR_18);
            mercury__list__length_2_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsF_4, &NumInVarsF_19);
            NumInVars_20 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(NumInVarsR_18, NumInVarsF_19);
            {
              Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_33, 0) = ((MR_Box) (NumInVars_20));
            }
            {
              Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_32, 1) = ((MR_Box) (Var_33));
            }
            {
              Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_28, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[5])));
              MR_hl_field(3, Var_28, 2) = ((MR_Box) (Var_32));
            }
            {
              Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_27, 0) = ((MR_Box) (Var_28));
              MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_String) "Assign number of immediate input arguments"));
            }
            *Code_5 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_27)));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Method_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
        MR_Integer MethodNum_46;
        MR_Word MethodNumConst_47;
        MR_Word Var_55;

        if (!((InVarsF_4 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "float input reg");
            return;
          }
        MethodNum_46 = (MR_Integer) (Method_36);
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (MethodNum_46));
        }
        {
          MethodNumConst_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, MethodNumConst_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, MethodNumConst_47, 1) = ((MR_Box) (Var_55));
        }
        switch (HoCallVariant_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_60;
              MR_Word Var_61;

              ll_backend__code_loc_dep__clobber_reg_3_p_0((MR_Word) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[5])), STATE_VARIABLE_CLD_0_6, STATE_VARIABLE_CLD_7);
              {
                Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_61, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[5])));
                MR_hl_field(3, Var_61, 2) = ((MR_Box) (MethodNumConst_47));
              }
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_60, 0) = ((MR_Box) (Var_61));
                MR_hl_field(0, Var_60, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
              }
              *Code_5 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_60)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer NumInVarsR_48;
              MR_Integer NumInVars_50;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_89;
              MR_Word Var_90;

              ll_backend__code_loc_dep__clobber_regs_3_p_0((MR_Word) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[8])), STATE_VARIABLE_CLD_0_6, STATE_VARIABLE_CLD_7);
              mercury__list__length_2_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), InVarsR_3, &NumInVarsR_48);
              NumInVars_50 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(NumInVarsR_48, (MR_Integer) 0);
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_78, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[5])));
                MR_hl_field(3, Var_78, 2) = ((MR_Box) (MethodNumConst_47));
              }
              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(0, Var_77, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
              }
              {
                Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_90, 0) = ((MR_Box) (NumInVars_50));
              }
              {
                Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_89, 1) = ((MR_Box) (Var_90));
              }
              {
                Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_85, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__call_gen_scalar_common_1[6])));
                MR_hl_field(3, Var_85, 2) = ((MR_Box) (Var_89));
              }
              {
                Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_84, 0) = ((MR_Box) (Var_85));
                MR_hl_field(0, Var_84, 1) = ((MR_Box) ((MR_String) "Assign number of immediate regular input arguments"));
              }
              {
                Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
                MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
                MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_83));
              }
              *Code_5 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_76);
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
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, Var_9, 1) = ((MR_Box) (Reg_4));
    }
    NextReg_8 = (MR_Integer) ((MR_Unsigned) Reg_4 + (MR_Unsigned) 1);
    ll_backend__call_gen__extra_livevals_from_3_p_0(NextReg_8, FirstInput_5, &ExtraLiveVals1_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ExtraLiveVals_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (ExtraLiveVals1_7));
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
        MR_Word PredVar_17 = ((MR_Word) ((MR_hl_field(0, GenericCall_10, 0))));
        MR_Integer MaxSpec_23;
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_32, 0) = ((MR_Box) (PredVar_17));
          MR_hl_field(0, Var_32, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[2]));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SpecifierArgInfos_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__globals__lookup_int_option_3_p_0(Globals_9, (MR_Integer) 755, &MaxSpec_23);
        succeeded = (MaxSpec_23 >= (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (NumInputArgsR_11 <= MaxSpec_23);
          if (succeeded)
            succeeded = (NumInputArgsF_12 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word Var_38;

          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (NumInputArgsR_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeAddr_13 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_38));
          }
          *HoCallVariant_16 = (MR_Integer) 0;
          *FirstImmediateInputReg_15 = (MR_Integer) 2;
        }
        else
        {
          *CodeAddr_13 = (MR_Word) (MR_mkword(3, &ll_backend__call_gen_scalar_common_1[4]));
          *HoCallVariant_16 = (MR_Integer) 1;
          *FirstImmediateInputReg_15 = (MR_Integer) 3;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCVar_24 = ((MR_Word) ((MR_hl_field(1, GenericCall_10, 0))));
        MR_Word Var_42;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (TCVar_24));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[2]));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SpecifierArgInfos_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = (NumInputArgsF_12 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Integer MaxSpec_52;

          libs__globals__lookup_int_option_3_p_0(Globals_9, (MR_Integer) 756, &MaxSpec_52);
          succeeded = (MaxSpec_52 >= (MR_Integer) 0);
          if (succeeded)
            succeeded = (NumInputArgsR_11 <= MaxSpec_52);
          if (succeeded)
          {
            MR_Word Var_48;

            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (NumInputArgsR_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *CodeAddr_13 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_48));
            }
            *HoCallVariant_16 = (MR_Integer) 0;
            *FirstImmediateInputReg_15 = (MR_Integer) 3;
          }
          else
          {
            *CodeAddr_13 = (MR_Word) (MR_mkword(3, &ll_backend__call_gen_scalar_common_1[3]));
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

static void MR_CALL 
ll_backend__call_gen__generate_assign_builtin_5_p_0(
  MR_Word Var_6,
  MR_Word AssignedExpr_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  MR_bool succeeded;

  succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_11, Var_6);
  if (succeeded)
  {
    MR_Word Rval_10;

    switch (MR_tag((MR_Word) AssignedExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, AssignedExpr_7, 0))));

          {
            Rval_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Rval_10, 0) = ((MR_Box) (Var_14));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Const_15 = ((MR_Word) ((MR_hl_field(1, AssignedExpr_7, 0))));

          switch (MR_tag((MR_Word) Const_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Int_51 = ((MR_Integer) ((MR_hl_field(0, Const_15, 0))));
                MR_Word Var_52;

                {
                  Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_52, 0) = ((MR_Box) (Int_51));
                }
                {
                  Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_52));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Unsigned UInt_61 = ((MR_Unsigned) ((MR_hl_field(1, Const_15, 0))));
                MR_Word Var_62;

                {
                  Var_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_62, 0) = ((MR_Box) (UInt_61));
                }
                {
                  Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_62));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                int8_t Int8_53 = ((int8_t) (MR_Word) (MR_hl_field(2, Const_15, 0)));
                MR_Word Var_54;

                {
                  Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_54, 1) = ((MR_Box) (MR_Word) (Int8_53));
                }
                {
                  Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_54));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Const_15, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    uint8_t UInt8_63 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_15, 1)));
                    MR_Word Var_64;

                    {
                      Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_64, 1) = ((MR_Box) (MR_Word) (UInt8_63));
                    }
                    {
                      Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_64));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int16_t Int16_55 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_15, 1)));
                    MR_Word Var_56;

                    {
                      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, Var_56, 1) = ((MR_Box) (MR_Word) (Int16_55));
                    }
                    {
                      Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_56));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    uint16_t UInt16_65 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_15, 1)));
                    MR_Word Var_66;

                    {
                      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, Var_66, 1) = ((MR_Box) (MR_Word) (UInt16_65));
                    }
                    {
                      Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_66));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    int32_t Int32_57 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_15, 1)));
                    MR_Word Var_58;

                    {
                      Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, Var_58, 1) = ((MR_Box) (MR_Word) (Int32_57));
                    }
                    {
                      Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_58));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    uint32_t UInt32_67 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_15, 1)));
                    MR_Word Var_68;

                    {
                      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, Var_68, 1) = ((MR_Box) (MR_Word) (UInt32_67));
                    }
                    {
                      Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_68));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    int64_t Int64_59 = MR_unbox_int64((MR_hl_field(3, Const_15, 1)));
                    MR_Word Var_60;

                    {
                      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Var_60, 1) = MR_box_int64(Int64_59);
                    }
                    {
                      Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_60));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    uint64_t UInt64_69 = MR_unbox_uint64((MR_hl_field(3, Const_15, 1)));
                    MR_Word Var_70;

                    {
                      Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, Var_70, 1) = MR_box_uint64(UInt64_69);
                    }
                    {
                      Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_70));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Float Float_71 = MR_unbox_float((MR_hl_field(3, Const_15, 1)));
                    MR_Word Var_72;

                    {
                      Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(3, Var_72, 1) = MR_box_float(Float_71);
                    }
                    {
                      Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Rval_10, 1) = ((MR_Box) (Var_72));
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BinOp_16 = ((MR_Word) ((MR_hl_field(2, AssignedExpr_7, 0))));
          MR_Word X_17 = ((MR_Word) ((MR_hl_field(2, AssignedExpr_7, 1))));
          MR_Word Y_18 = ((MR_Word) ((MR_hl_field(2, AssignedExpr_7, 2))));
          MR_Word Var_20;
          MR_Word Var_21;

          {
            Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_20, 0) = ((MR_Box) (X_17));
          }
          {
            Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_21, 0) = ((MR_Box) (Y_18));
          }
          {
            Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Rval_10, 1) = ((MR_Box) (BinOp_16));
            MR_hl_field(3, Rval_10, 2) = ((MR_Box) (Var_20));
            MR_hl_field(3, Rval_10, 3) = ((MR_Box) (Var_21));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, AssignedExpr_7, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_22;
              MR_Word Var_23;
              MR_Word Const_25 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_7, 2))));
              MR_Word BinOp_26 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_7, 1))));
              MR_Word Y_27 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_7, 3))));

              switch (MR_tag((MR_Word) Const_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_29 = ((MR_Integer) ((MR_hl_field(0, Const_25, 0))));
                    MR_Word Var_30;

                    {
                      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Int_29));
                    }
                    {
                      Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_30));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Unsigned UInt_39 = ((MR_Unsigned) ((MR_hl_field(1, Const_25, 0))));
                    MR_Word Var_40;

                    {
                      Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_40, 0) = ((MR_Box) (UInt_39));
                    }
                    {
                      Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_40));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int8_t Int8_31 = ((int8_t) (MR_Word) (MR_hl_field(2, Const_25, 0)));
                    MR_Word Var_32;

                    {
                      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, Var_32, 1) = ((MR_Box) (MR_Word) (Int8_31));
                    }
                    {
                      Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_32));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_25, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        uint8_t UInt8_41 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_25, 1)));
                        MR_Word Var_42;

                        {
                          Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_42, 1) = ((MR_Box) (MR_Word) (UInt8_41));
                        }
                        {
                          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_42));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        int16_t Int16_33 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_25, 1)));
                        MR_Word Var_34;

                        {
                          Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(3, Var_34, 1) = ((MR_Box) (MR_Word) (Int16_33));
                        }
                        {
                          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_34));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        uint16_t UInt16_43 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_25, 1)));
                        MR_Word Var_44;

                        {
                          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                          MR_hl_field(3, Var_44, 1) = ((MR_Box) (MR_Word) (UInt16_43));
                        }
                        {
                          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_44));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        int32_t Int32_35 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_25, 1)));
                        MR_Word Var_36;

                        {
                          Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(3, Var_36, 1) = ((MR_Box) (MR_Word) (Int32_35));
                        }
                        {
                          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_36));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        uint32_t UInt32_45 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_25, 1)));
                        MR_Word Var_46;

                        {
                          Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, Var_46, 1) = ((MR_Box) (MR_Word) (UInt32_45));
                        }
                        {
                          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_46));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        int64_t Int64_37 = MR_unbox_int64((MR_hl_field(3, Const_25, 1)));
                        MR_Word Var_38;

                        {
                          Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(3, Var_38, 1) = MR_box_int64(Int64_37);
                        }
                        {
                          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_38));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        uint64_t UInt64_47 = MR_unbox_uint64((MR_hl_field(3, Const_25, 1)));
                        MR_Word Var_48;

                        {
                          Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(3, Var_48, 1) = MR_box_uint64(UInt64_47);
                        }
                        {
                          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_48));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Float Float_49 = MR_unbox_float((MR_hl_field(3, Const_25, 1)));
                        MR_Word Var_50;

                        {
                          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                          MR_hl_field(3, Var_50, 1) = MR_box_float(Float_49);
                        }
                        {
                          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_50));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_23, 0) = ((MR_Box) (Y_27));
              }
              {
                Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Rval_10, 1) = ((MR_Box) (BinOp_26));
                MR_hl_field(3, Rval_10, 2) = ((MR_Box) (Var_22));
                MR_hl_field(3, Rval_10, 3) = ((MR_Box) (Var_23));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word UnOp_19 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_7, 1))));
              MR_Word Var_24;
              MR_Word X_28 = ((MR_Word) ((MR_hl_field(3, AssignedExpr_7, 2))));

              {
                Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_24, 0) = ((MR_Box) (X_28));
              }
              {
                Rval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Rval_10, 1) = ((MR_Box) (UnOp_19));
                MR_hl_field(3, Rval_10, 2) = ((MR_Box) (Var_24));
              }
            }
            break;
        }
        break;
    }
    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(Var_6, Rval_10, Code_8, STATE_VARIABLE_CLD_0_11, STATE_VARIABLE_CLD_12);
  }
  else
  {
    *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_12 = STATE_VARIABLE_CLD_0_11;
  }
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
  MR_Word NonLiveOutputs_23;
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
  MR_Word STATE_VARIABLE_CLD_1_52;
  MR_Word STATE_VARIABLE_CLD_2_53;
  MR_Word STATE_VARIABLE_CI_1_54;
  MR_Word STATE_VARIABLE_CLD_3_55;
  MR_Word STATE_VARIABLE_CI_2_57;
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
  MR_Word STATE_VARIABLE_CLD_4_71;
  MR_Word STATE_VARIABLE_CI_3_72;
  MR_Word STATE_VARIABLE_CLD_5_73;
  MR_Word Liveness_93;
  MR_Word PostDeaths_94;
  MR_Word ImmediatePostDeaths_95;
  MR_Word Var_96;
  MR_Word AllowLCO_98;
  MR_String BaseMsg_101;
  MR_Word AutoComments_102;
  MR_Word TraceInfo_44;
  MR_Word MaybeTraceInfo_43;

  ArgInfo_19 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(STATE_VARIABLE_CI_0_48, PredId_12, ProcId_13);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ll_backend__call_gen_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), ArgVars_14, ArgInfo_19, &ArgsInfos_20);
  ll_backend__code_loc_dep__setup_call_7_p_0(GoalInfo_15, ArgsInfos_20, &LiveVals_21, &SetupCode_22, STATE_VARIABLE_CI_0_48, STATE_VARIABLE_CLD_0_50, &STATE_VARIABLE_CLD_1_52);
  ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_1_52, &Liveness_93);
  Var_96 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  ll_backend__call_gen__find_nonlive_outputs_4_p_0(ArgsInfos_20, Liveness_93, Var_96, &NonLiveOutputs_23);
  hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_15, &PostDeaths_94);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PostDeaths_94, NonLiveOutputs_23, &ImmediatePostDeaths_95);
  ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ImmediatePostDeaths_95, STATE_VARIABLE_CLD_1_52, &STATE_VARIABLE_CLD_2_53);
  ll_backend__code_info__succip_is_used_2_p_0(STATE_VARIABLE_CI_0_48, &STATE_VARIABLE_CI_1_54);
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_15, (MR_Integer) 25);
  if (succeeded)
    AllowLCO_98 = (MR_Integer) 0;
  else
    AllowLCO_98 = (MR_Integer) 1;
  ll_backend__trace_gen__trace_prepare_for_call_2_p_0(STATE_VARIABLE_CI_1_54, &TraceResetCode_25);
  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_1_54, &ModuleInfo_26);
  Address_27 = ll_backend__code_info__make_proc_entry_label_5_f_0(STATE_VARIABLE_CI_1_54, ModuleInfo_26, PredId_12, ProcId_13, (MR_Integer) 0);
  ll_backend__code_info__get_next_label_3_p_0(&ReturnLabel_28, STATE_VARIABLE_CI_1_54, &STATE_VARIABLE_CI_2_57);
  switch (CodeModel_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          CallModel_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CallModel_24, 0) = (MR_Box) ((MR_Unsigned) (AllowLCO_98));
        }
        STATE_VARIABLE_CLD_3_55 = STATE_VARIABLE_CLD_2_53;
        BaseMsg_101 = (MR_String) "branch to det procedure";
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TailCallStatus_99;

        ll_backend__code_loc_dep__may_use_nondet_tailcall_2_p_0(STATE_VARIABLE_CLD_2_53, &TailCallStatus_99);
        {
          CallModel_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, CallModel_24, 0) = (MR_Box) ((MR_Unsigned) (TailCallStatus_99));
        }
        ll_backend__code_loc_dep__set_resume_point_and_frame_to_unknown_2_p_0(STATE_VARIABLE_CLD_2_53, &STATE_VARIABLE_CLD_3_55);
        BaseMsg_101 = (MR_String) "branch to nondet procedure";
      }
      break;
    case (MR_Integer) 1:
      {
        {
          CallModel_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CallModel_24, 0) = (MR_Box) ((MR_Unsigned) (AllowLCO_98));
        }
        STATE_VARIABLE_CLD_3_55 = STATE_VARIABLE_CLD_2_53;
        BaseMsg_101 = (MR_String) "branch to semidet procedure";
      }
      break;
  }
  ll_backend__code_info__get_auto_comments_2_p_0(STATE_VARIABLE_CI_2_57, &AutoComments_102);
  switch (AutoComments_102) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CallComment_29 = BaseMsg_101;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_103;
        MR_Word PredInfo_104;
        MR_String PredName_105;
        MR_String Var_106;

        ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_2_57, &ModuleInfo_103);
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_103, PredId_12, &PredInfo_104);
        PredName_105 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_104);
        Var_106 = mercury__string__f_43_43_2_f_0((MR_String) " ", PredName_105);
        CallComment_29 = mercury__string__f_43_43_2_f_0(BaseMsg_101, Var_106);
      }
      break;
  }
  Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
  GoalId_31 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_15);
  ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(STATE_VARIABLE_CI_2_57, &MaybeContainingGoalMap_32);
  if ((MaybeContainingGoalMap_32 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeGoalPath_35 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ContainingGoalMap_33 = ((MR_Word) ((MR_hl_field(1, MaybeContainingGoalMap_32, 0))));
    MR_Word GoalPath_34;

    GoalPath_34 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_33, GoalId_31);
    {
      MaybeGoalPath_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeGoalPath_35, 0) = ((MR_Box) (GoalPath_34));
    }
  }
  {
    Var_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_60, 0) = ((MR_Box) (LiveVals_21));
  }
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (ReturnLabel_28));
  }
  {
    Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_68, 1) = ((MR_Box) (ReturnLabel_28));
  }
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_String) "continuation label"));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_3_55, &InstMap_38);
  InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_15);
  hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_39, InstMap_38, &ReturnInstMap_40);
  ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(ArgsInfos_20, GoalInfo_15, ReturnInstMap_40, &ReturnLiveLvalues_37, STATE_VARIABLE_CI_2_57, STATE_VARIABLE_CLD_3_55, &STATE_VARIABLE_CLD_4_71);
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Address_27));
    MR_hl_field(3, Var_64, 2) = ((MR_Box) (Var_65));
    MR_hl_field(3, Var_64, 3) = ((MR_Box) (ReturnLiveLvalues_37));
    MR_hl_field(3, Var_64, 4) = ((MR_Box) (Context_30));
    MR_hl_field(3, Var_64, 5) = ((MR_Box) (MaybeGoalPath_35));
    MR_hl_field(3, Var_64, 6) = ((MR_Box) (CallModel_24));
  }
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (CallComment_29));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_62));
  }
  CallCode_36 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_58);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_4_71, &AfterReturn_41);
  ll_backend__call_gen__handle_call_failure_6_p_0(CodeModel_11, GoalInfo_15, &FailHandlingCode_42, STATE_VARIABLE_CI_2_57, &STATE_VARIABLE_CI_3_72, STATE_VARIABLE_CLD_4_71);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterReturn_41, STATE_VARIABLE_CI_3_72, &STATE_VARIABLE_CLD_5_73);
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_15, (MR_Integer) 10);
  if (succeeded)
  {
    ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_3_72, &MaybeTraceInfo_43);
    succeeded = (MaybeTraceInfo_43 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      TraceInfo_44 = ((MR_Word) ((MR_hl_field(1, MaybeTraceInfo_43, 0))));
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

    ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(TraceInfo_44, ArgsInfos_20, GoalId_31, Context_30, &TraceTailRecResetAndEventCode_45, &TailRecLabel_46, STATE_VARIABLE_CI_3_72, STATE_VARIABLE_CI_49, STATE_VARIABLE_CLD_5_73, STATE_VARIABLE_CLD_51);
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (TailRecLabel_46));
    }
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, Var_82, 1) = ((MR_Box) ((MR_String) "tail recursive jump"));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_59));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_81));
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
    *STATE_VARIABLE_CLD_51 = STATE_VARIABLE_CLD_5_73;
    *STATE_VARIABLE_CI_49 = STATE_VARIABLE_CI_3_72;
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
  MR_Word STATE_VARIABLE_CLD_1_22;

  InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_10);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_16);
  if (succeeded)
    OkToDeleteAny_17 = (MR_Integer) 0;
  else
    OkToDeleteAny_17 = (MR_Integer) 1;
  ll_backend__code_loc_dep__clear_all_registers_3_p_0(OkToDeleteAny_17, STATE_VARIABLE_CLD_0_20, &STATE_VARIABLE_CLD_1_22);
  ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_1_22, &Liveness_18);
  ll_backend__call_gen__rebuild_registers_5_p_0(ArgsInfos_9, Liveness_18, &OutputArgLocs_19, STATE_VARIABLE_CLD_1_22, STATE_VARIABLE_CLD_21);
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
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word OutputArgLocs1_17;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_CLD_1_23;
    MR_Word TypeCtorInfo_26_26;

    Var_10 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Var_21, 1))));
    ArgLoc_11 = ((MR_Word) ((MR_hl_field(0, Var_22, 0))));
    Mode_12 = ((MR_Unsigned) ((MR_hl_field(0, Var_22, 1))) & (MR_Integer) 3);
    ll_backend__call_gen__rebuild_registers_5_p_0(Args_13, Liveness_2, &OutputArgLocs1_17, STATE_VARIABLE_CLD_0_4, &STATE_VARIABLE_CLD_1_23);
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
      ll_backend__code_loc_dep__set_var_location_4_p_0(Var_10, Register_18, STATE_VARIABLE_CLD_1_23, STATE_VARIABLE_CLD_5);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (Var_10));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (ArgLoc_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (OutputArgLocs1_17));
      }
    }
    else
    {
      *HeadVar__3_3 = OutputArgLocs1_17;
      *STATE_VARIABLE_CLD_5 = STATE_VARIABLE_CLD_1_23;
    }
  }
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
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_NonLiveOutputs_1_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_NonLiveOutputs_0_3;

      Var_9 = ((MR_Word) ((MR_hl_field(0, Var_17, 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(0, Var_17, 1))));
      Mode_11 = ((MR_Unsigned) ((MR_hl_field(0, Var_18, 1))) & (MR_Integer) 3);
      switch (Mode_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_NonLiveOutputs_1_19 = STATE_VARIABLE_NonLiveOutputs_0_3;
          break;
        case (MR_Integer) 1:
          {
            succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_2, Var_9);
            if (succeeded)
              STATE_VARIABLE_NonLiveOutputs_1_19 = STATE_VARIABLE_NonLiveOutputs_0_3;
            else
              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, STATE_VARIABLE_NonLiveOutputs_0_3, &STATE_VARIABLE_NonLiveOutputs_1_19);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_NonLiveOutputs_1_19 = STATE_VARIABLE_NonLiveOutputs_0_3;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_12;
      next_value_of_STATE_VARIABLE_NonLiveOutputs_0_3 = STATE_VARIABLE_NonLiveOutputs_1_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NonLiveOutputs_0_3 = next_value_of_STATE_VARIABLE_NonLiveOutputs_0_3;
      continue;
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
  MR_Word CLD_11)
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
        {
          ll_backend__code_loc_dep__generate_failure_3_p_0(FailHandlingCode_9, STATE_VARIABLE_CI_0_17, CLD_11);
          *STATE_VARIABLE_CI_18 = STATE_VARIABLE_CI_0_17;
        }
        else
        {
          MR_Word ContLab_13;
          MR_Word FailTestCode_14;
          MR_Word FailCode_15;
          MR_Word ContLabelCode_16;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_26;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_31;

          ll_backend__code_info__get_next_label_3_p_0(&ContLab_13, STATE_VARIABLE_CI_0_17, STATE_VARIABLE_CI_18);
          {
            Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_26, 0) = ((MR_Box) (ContLab_13));
          }
          {
            Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_21, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_3[2]));
            MR_hl_field(3, Var_21, 2) = ((MR_Box) (Var_26));
          }
          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_20, 0) = ((MR_Box) (Var_21));
            MR_hl_field(0, Var_20, 1) = ((MR_Box) ((MR_String) "test for success"));
          }
          FailTestCode_14 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_20)));
          ll_backend__code_loc_dep__generate_failure_3_p_0(&FailCode_15, *STATE_VARIABLE_CI_18, CLD_11);
          {
            Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_29, 1) = ((MR_Box) (ContLab_13));
          }
          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_String) ""));
          }
          ContLabelCode_16 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_28)));
          Var_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_15, ContLabelCode_16);
          *FailHandlingCode_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailTestCode_14, Var_31);
        }
      }
      break;
  }
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
